#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Pose
from moveit_msgs.srv import GetCartesianPath
from moveit_msgs.action import ExecuteTrajectory
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener

class ParabolaMover(Node):
    def __init__(self):
        super().__init__('parabola_mover')
        # Setup TF listener to find the robot's current position
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        # Connect to MoveIt's planning and execution services
        self.path_client = self.create_client(GetCartesianPath, '/compute_cartesian_path')
        self.exec_client = ActionClient(self, ExecuteTrajectory, '/execute_trajectory')

    def run(self):
        self.get_logger().info("Waiting for MoveIt services...")
        self.path_client.wait_for_service()
        self.exec_client.wait_for_server()
        
        self.get_logger().info("Connected! Processing TF messages...")
        # Force the node to process incoming /tf messages so we don't get the missing frame error
        for _ in range(30):
            rclpy.spin_once(self, timeout_sec=0.1)

        # Get the current position to use as our default start point
        try:
            trans = self.tf_buffer.lookup_transform(
                'fr3_link0', 'fr3_hand', rclpy.time.Time(), 
                timeout=rclpy.duration.Duration(seconds=3.0)
            )
        except TransformException as ex:
            self.get_logger().error(f'Could not get transform: {ex}')
            return

        # ---------------------------------------------------------
        # SET YOUR TARGETS HERE
        # ---------------------------------------------------------
        
        # 1. Start Pose: We will use the robot's current position, 
        # but you could manually type in x, y, z coordinates here too.
        start_pose = Pose()
        start_pose.position.x = trans.transform.translation.x
        start_pose.position.y = trans.transform.translation.y
        start_pose.position.z = trans.transform.translation.z
        start_pose.orientation = trans.transform.rotation

        # 2. End Pose: The location of the berry!
        # Let's move 40cm forward, 20cm left, and 10cm up from where we currently are.
        end_pose = Pose()
        end_pose.position.x = start_pose.position.x + 0.40
        end_pose.position.y = start_pose.position.y 
        end_pose.position.z = start_pose.position.z 
        end_pose.orientation = start_pose.orientation # Keep the gripper pointed the same way

        # 3. The Arc: Positive for jumping over, Negative for scooping under
        apex_height = -.2  # A 15cm downward scoop!

        # ---------------------------------------------------------
        
        self.execute_parabola(start_pose, end_pose, apex_height)


    def execute_parabola(self, start_pose, end_pose, apex_height, steps=40):
        """Calculates and executes a 3D Cartesian arc between two poses."""
        waypoints = []

        for i in range(1, steps + 1):
            t = i / steps
            p = Pose()
            p.orientation = start_pose.orientation 
            
            # Linear interpolation in 3D space (X, Y, and Z)
            p.position.x = start_pose.position.x + t * (end_pose.position.x - start_pose.position.x)
            p.position.y = start_pose.position.y + t * (end_pose.position.y - start_pose.position.y)
            base_z = start_pose.position.z + t * (end_pose.position.z - start_pose.position.z)
            
            # Add the parabolic arc modifier exclusively to the Z-axis
            parabola_z_offset = 4.0 * apex_height * t * (1.0 - t)
            p.position.z = base_z + parabola_z_offset
            
            waypoints.append(p)

        self.get_logger().info(f"Computing path to [X:{end_pose.position.x:.2f}, Y:{end_pose.position.y:.2f}, Z:{end_pose.position.z:.2f}] with arc {apex_height}m...")
        
        req = GetCartesianPath.Request()
        req.group_name = 'fr3_arm'
        req.waypoints = waypoints
        req.max_step = 0.01      
        req.jump_threshold = 0.0 
        req.avoid_collisions = True

        future = self.path_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        res = future.result()

        if res.fraction < 0.9:
            self.get_logger().error(f'Path planning failed. Only safely computed {res.fraction * 100:.2f}% of the arc. Is the target too far away or causing a self-collision?')
            return

        self.get_logger().info('Executing trajectory...')
        goal_msg = ExecuteTrajectory.Goal()
        goal_msg.trajectory = res.solution
        
        future_exec = self.exec_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future_exec)
        self.get_logger().info('Motion complete!')

def main(args=None):
    rclpy.init(args=args)
    node = ParabolaMover()
    node.run()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
