#!/usr/bin/env python3
"""
Simple Pose Sequence Recorder for Franka FR3

Usage:
  1. With MoveIt running, run this script in another terminal
  2. Use RViz to move robot to desired positions
  3. Press 's' to save each position to the sequence
  4. Press 'n' to play the next pose in sequence
  5. Press 'h' to go home (pose 0)
  6. Press '0-9' to jump to a specific pose
  7. Poses are saved to ~/Dharmik/berry_ws/saved_poses.yaml
"""

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from sensor_msgs.msg import JointState
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration
import yaml
import os
import sys
import select
import termios
import tty


class SimplePoseRecorder(Node):
    def __init__(self):
        super().__init__('simple_pose_recorder')
        
        # Joint state subscription
        self.joint_state = None
        self.joint_sub = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_state_callback,
            10
        )
        
        # Action client for trajectory execution
        self.trajectory_client = ActionClient(
            self,
            FollowJointTrajectory,
            '/fr3_arm_controller/follow_joint_trajectory'
        )
        
        # FR3 arm joint names
        self.arm_joints = [
            'fr3_joint1', 'fr3_joint2', 'fr3_joint3', 'fr3_joint4',
            'fr3_joint5', 'fr3_joint6', 'fr3_joint7'
        ]
        
        # Storage
        self.saved_poses = []
        self.poses_file = os.path.expanduser('~/Dharmik/berry_ws/saved_poses.yaml')
        
        # Current position in sequence for stepping through
        self.current_index = 0
        
        # Load existing poses
        self.load_poses()
        
        self.get_logger().info("Simple Pose Recorder Ready!")
        self.get_logger().info(f"Poses file: {self.poses_file}")
        if self.saved_poses:
            self.get_logger().info(f"Pose 0 (home): {self.saved_poses[0]['name']}")

    def joint_state_callback(self, msg):
        """Store latest joint state"""
        self.joint_state = msg

    def get_arm_positions(self):
        """Extract arm joint positions from joint state"""
        if self.joint_state is None:
            return None
        
        positions = {}
        for i, name in enumerate(self.joint_state.name):
            if name in self.arm_joints:
                positions[name] = self.joint_state.position[i]
        
        # Return ordered list
        return [positions.get(j, 0.0) for j in self.arm_joints]

    def save_current_pose(self):
        """Save current arm position"""
        positions = self.get_arm_positions()
        if positions is None:
            self.get_logger().error("No joint state received yet!")
            return
        
        pose_dict = {
            'name': f'pose_{len(self.saved_poses)}',
            'positions': positions
        }
        
        self.saved_poses.append(pose_dict)
        self.save_poses_to_file()
        
        self.get_logger().info(f"Saved pose {len(self.saved_poses)-1}")
        self.print_pose(positions)

    def print_pose(self, positions):
        """Print joint positions nicely"""
        for i, (name, pos) in enumerate(zip(self.arm_joints, positions)):
            print(f"  {name}: {pos:.4f} rad ({pos*180/3.14159:.1f} deg)")

    def go_to_pose(self, index):
        """Go to a specific pose by index"""
        if not self.saved_poses:
            self.get_logger().warn("No poses saved!")
            return False
        
        if index < 0 or index >= len(self.saved_poses):
            self.get_logger().warn(f"Invalid pose index {index}. Valid range: 0-{len(self.saved_poses)-1}")
            return False
        
        if not self.trajectory_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error("Trajectory action server not available!")
            return False
        
        pose = self.saved_poses[index]
        self.get_logger().info(f"Moving to pose {index}: {pose['name']}")
        
        # Create trajectory message
        trajectory = JointTrajectory()
        trajectory.joint_names = self.arm_joints
        
        point = JointTrajectoryPoint()
        point.positions = pose['positions']
        point.velocities = [0.0] * 7
        point.time_from_start = Duration(sec=3, nanosec=0)
        
        trajectory.points = [point]
        
        # Send goal
        goal = FollowJointTrajectory.Goal()
        goal.trajectory = trajectory
        
        future = self.trajectory_client.send_goal_async(goal)
        rclpy.spin_until_future_complete(self, future)
        
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error(f"Goal rejected for pose {index}")
            return False
        
        # Wait for result
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        
        self.current_index = index
        self.get_logger().info(f"Reached pose {index}")
        return True

    def go_home(self):
        """Go to home position (pose 0)"""
        if not self.saved_poses:
            self.get_logger().warn("No poses saved! Save pose 0 as home first.")
            return
        self.get_logger().info("Going HOME (pose 0)...")
        self.go_to_pose(0)

    def play_next(self):
        """Play the next pose in the sequence"""
        if not self.saved_poses:
            self.get_logger().warn("No poses saved!")
            return
        
        next_index = self.current_index + 1
        if next_index >= len(self.saved_poses):
            self.get_logger().info("Already at last pose. Use 'h' to go home or number to jump.")
            return
        
        self.go_to_pose(next_index)

    def play_previous(self):
        """Play the previous pose in the sequence"""
        if not self.saved_poses:
            self.get_logger().warn("No poses saved!")
            return
        
        prev_index = self.current_index - 1
        if prev_index < 0:
            self.get_logger().info("Already at first pose (home).")
            return
        
        self.go_to_pose(prev_index)

    def play_all_poses(self, speed_factor=1.0):
        """Execute all saved poses in sequence"""
        if not self.saved_poses:
            self.get_logger().warn("No poses saved!")
            return
        
        self.get_logger().info(f"Playing all {len(self.saved_poses)} poses...")
        
        for i in range(len(self.saved_poses)):
            if not self.go_to_pose(i):
                break

    def list_poses(self):
        """List all saved poses"""
        if not self.saved_poses:
            print("\nNo poses saved")
            return
        
        print(f"\nSaved poses ({len(self.saved_poses)}):")
        for i, pose in enumerate(self.saved_poses):
            print(f"\n[{i}] {pose['name']}:")
            self.print_pose(pose['positions'])

    def delete_pose(self, index):
        """Delete a specific pose by index and reindex remaining poses"""
        if not self.saved_poses:
            self.get_logger().warn("No poses to delete")
            return
        
        if index < 0 or index >= len(self.saved_poses):
            self.get_logger().warn(f"Invalid pose index {index}. Valid range: 0-{len(self.saved_poses)-1}")
            return
        
        removed = self.saved_poses.pop(index)
        self.get_logger().info(f"Deleted pose {index}: {removed['name']}")
        
        # Reindex remaining poses
        for i, pose in enumerate(self.saved_poses):
            pose['name'] = f'pose_{i}'
        
        # Adjust current_index if needed
        if self.current_index >= len(self.saved_poses):
            self.current_index = max(0, len(self.saved_poses) - 1)
        elif self.current_index > index:
            self.current_index -= 1
        
        self.save_poses_to_file()
        self.get_logger().info(f"Poses reindexed. {len(self.saved_poses)} poses remaining.")

    def clear_poses(self):
        """Clear all saved poses"""
        self.saved_poses = []
        self.save_poses_to_file()
        self.get_logger().info("Cleared all poses")

    def save_poses_to_file(self):
        """Save poses to YAML file"""
        with open(self.poses_file, 'w') as f:
            yaml.dump({
                'joint_names': self.arm_joints,
                'poses': self.saved_poses
            }, f, default_flow_style=False)

    def load_poses(self):
        """Load poses from YAML file"""
        if os.path.exists(self.poses_file):
            try:
                with open(self.poses_file, 'r') as f:
                    data = yaml.safe_load(f)
                    if data and 'poses' in data:
                        self.saved_poses = data['poses']
                        self.get_logger().info(f"Loaded {len(self.saved_poses)} poses")
            except Exception as e:
                self.get_logger().warn(f"Could not load poses: {e}")


def get_key():
    """Non-blocking key read"""
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    try:
        tty.setraw(fd)
        if select.select([sys.stdin], [], [], 0.1)[0]:
            return sys.stdin.read(1)
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    return None


def main():
    rclpy.init()
    recorder = SimplePoseRecorder()
    
    print("\n" + "="*60)
    print("       FRANKA FR3 POSE SEQUENCE RECORDER")
    print("="*60)
    print("\nCommands:")
    print("  s     - Save current pose to sequence")
    print("  n     - Play NEXT pose in sequence")
    print("  b     - Play PREVIOUS pose (back)")
    print("  h     - Go HOME (pose 0)")
    print("  0-9   - Jump to specific pose number")
    print("  p     - Play ALL poses in sequence")
    print("  l     - List all saved poses")
    print("  d + # - Delete pose (e.g., 'd' then '2' deletes pose 2)")
    print("  c     - Clear all poses")
    print("  q     - Quit")
    print("\n" + "="*60)
    print("\nPose 0 = HOME position. Save it first!")
    print("Use RViz MoveIt panel to move robot, then press 's' to save.")
    print("="*60 + "\n")
    
    try:
        while rclpy.ok():
            rclpy.spin_once(recorder, timeout_sec=0.1)
            
            key = get_key()
            if key:
                if key == 's':
                    recorder.save_current_pose()
                elif key == 'n':
                    recorder.play_next()
                elif key == 'b':
                    recorder.play_previous()
                elif key == 'h':
                    recorder.go_home()
                elif key == 'p':
                    recorder.play_all_poses()
                elif key == 'l':
                    recorder.list_poses()
                    print(f"\nCurrent position: pose {recorder.current_index}")
                elif key == 'd':
                    print("\nEnter pose number to delete (0-9): ", end='', flush=True)
                    # Wait for next key
                    delete_key = None
                    while delete_key is None:
                        rclpy.spin_once(recorder, timeout_sec=0.1)
                        delete_key = get_key()
                    if delete_key.isdigit():
                        recorder.delete_pose(int(delete_key))
                    else:
                        print("Cancelled.")
                elif key == 'c':
                    recorder.clear_poses()
                elif key == 'q':
                    print("\nExiting...")
                    break
                elif key.isdigit():
                    pose_num = int(key)
                    recorder.go_to_pose(pose_num)
                    
    except KeyboardInterrupt:
        pass
    
    recorder.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
