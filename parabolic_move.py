#!/usr/bin/env python3.10
"""
Berry-picking motion for Franka FR3.

Motion sequence
---------------
  Phase 0  move_to_start      Free-space (MoveGroup) to start pose, Q_DOWN.
  Phase 1  execute_parabola   Cartesian parabolic arc \u2014 start \u2192 arc_land
                               (below berry, Q_DOWN).  IK-stable throughout.
  Phase 2  _flip_to_approach  MoveGroup free-space \u2014 arc_land (Q_DOWN) \u2192
                               pre_grasp (Q_UP, directly below berry).
                               OMPL handles the orientation flip in joint-space;
                               no Cartesian IK jumps.
  Phase 3  _insert_straight   Short Cartesian +Z push \u2014 pre_grasp \u2192 berry.
                               Arm is already in Q_UP config so IK is stable.

Approach geometry
-----------------
  The tube gripper approaches from DIRECTLY BELOW within \u00b120\u00b0 of +Z.
  The stem blocks every other direction; only the calyx-end is accessible
  from below.  Q_UP = identity quaternion = gripper opening facing +Z (up).
"""

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Pose, Quaternion
import tf2_ros
from moveit_msgs.srv import GetCartesianPath
from moveit_msgs.action import ExecuteTrajectory, MoveGroup
from moveit_msgs.msg import (MotionPlanRequest, WorkspaceParameters,
                              Constraints, PositionConstraint,
                              OrientationConstraint, BoundingVolume)
from shape_msgs.msg import SolidPrimitive
from std_msgs.msg import Header


class ParabolaMover(Node):
    def __init__(self):
        super().__init__('parabola_mover')
        self.path_client = self.create_client(GetCartesianPath, '/compute_cartesian_path')
        self.exec_client = ActionClient(self, ExecuteTrajectory, '/execute_trajectory')
        self.move_client = ActionClient(self, MoveGroup, '/move_action')
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

    # ------------------------------------------------------------------
    # Entry point
    # ------------------------------------------------------------------

    def run(self):
        self.get_logger().info('Waiting for MoveIt services...')
        self.path_client.wait_for_service()
        self.exec_client.wait_for_server()
        self.move_client.wait_for_server()
        self.get_logger().info('Connected!')

        # ---------------------------------------------------------------
        # CONFIGURATION — adjust these to match your setup
        # ---------------------------------------------------------------

        # Q_DOWN: IK-stable throughout the workspace — used for the arc.
        # Q_UP: gripper opening faces world +Z — required for below-berry insertion.
        # The arc uses Q_DOWN then a free MoveGroup flip to Q_UP at the
        # arc landing point; OMPL handles the flip in joint-space (no IK jumps).
        Q_DOWN = Quaternion(x=1.0, y=0.0, z=0.0, w=0.0)
        Q_UP   = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)

        # Berry position in fr3_link0 frame
        BERRY_X = 0.40
        BERRY_Y = 0.00
        BERRY_Z = 0.45   # height of the strawberry (mid-body, below stem)

        # Standoff: how far below the berry the gripper waits before inserting
        STANDOFF = 0.10  # metres

        # Start pose for the arc (Q_DOWN, safe clear position)
        START_X = 0.15
        START_Y = 0.00
        START_Z = 0.65

        # Where the arc terminates (below-and-behind berry, still Q_DOWN)
        ARC_LAND_X = BERRY_X
        ARC_LAND_Y = BERRY_Y
        ARC_LAND_Z = BERRY_Z - 0.20   # well below berry so arm avoids stem

        # Parabola: arc sweeps up slightly before coming down to arc landing
        APEX_HEIGHT = +0.06

        # ---------------------------------------------------------------

        start_pose = Pose()
        start_pose.position.x = START_X
        start_pose.position.y = START_Y
        start_pose.position.z = START_Z
        start_pose.orientation = Q_DOWN

        # Arc landing: where Phase 1 (Q_DOWN arc) terminates
        arc_land = Pose()
        arc_land.position.x = ARC_LAND_X
        arc_land.position.y = ARC_LAND_Y
        arc_land.position.z = ARC_LAND_Z
        arc_land.orientation = Q_DOWN

        # Pre-grasp: directly below the berry with Q_UP (Phase 2 target)
        pre_grasp = Pose()
        pre_grasp.position.x = BERRY_X
        pre_grasp.position.y = BERRY_Y
        pre_grasp.position.z = BERRY_Z - STANDOFF
        pre_grasp.orientation = Q_UP

        # Berry: where the gripper fully surrounds the fruit
        berry = Pose()
        berry.position.x = BERRY_X
        berry.position.y = BERRY_Y
        berry.position.z = BERRY_Z
        berry.orientation = Q_UP

        # ---------------------------------------------------------------
        # Execute
        # ---------------------------------------------------------------

        # Phase 0: free-space move to start (Q_DOWN)
        if not self.move_to_start(start_pose):
            return

        # Phase 1: parabolic arc — start → arc_land, Q_DOWN fixed (IK stable)
        if not self.execute_parabola(start_pose, arc_land, APEX_HEIGHT):
            return

        # Phase 2: MoveGroup free-space flip — arc_land (Q_DOWN) → pre_grasp (Q_UP)
        # OMPL plans in joint-space; it handles the orientation flip freely.
        if not self._flip_to_approach(pre_grasp):
            return

        # Phase 3: short Cartesian +Z insertion — pre_grasp → berry, Q_UP fixed
        # Arm is already in a Q_UP config so IK tracks without jumps.
        actual_pre_grasp = self._get_current_ee_pose(Q_UP)
        if actual_pre_grasp is None:
            actual_pre_grasp = pre_grasp
        self._insert_straight(actual_pre_grasp, berry)


    # ------------------------------------------------------------------
    # Phase 0: free-space move to start
    # ------------------------------------------------------------------

    def move_to_start(self, pose):
        """Move the robot to the start pose using MoveGroup free-space planning."""
        header = Header(frame_id='fr3_link0')

        pos_con = PositionConstraint()
        pos_con.header = header
        pos_con.link_name = 'fr3_hand'
        bv = BoundingVolume()
        bv.primitives = [SolidPrimitive(type=SolidPrimitive.SPHERE, dimensions=[0.01])]
        bv.primitive_poses = [pose]
        pos_con.constraint_region = bv
        pos_con.weight = 1.0

        ori_con = OrientationConstraint()
        ori_con.header = header
        ori_con.link_name = 'fr3_hand'
        ori_con.orientation = pose.orientation
        ori_con.absolute_x_axis_tolerance = 0.05
        ori_con.absolute_y_axis_tolerance = 0.05
        ori_con.absolute_z_axis_tolerance = 0.05
        ori_con.weight = 1.0

        goal_constraints = Constraints()
        goal_constraints.position_constraints = [pos_con]
        goal_constraints.orientation_constraints = [ori_con]

        ws = WorkspaceParameters()
        ws.header = header
        ws.min_corner.x = -1.0; ws.min_corner.y = -1.0; ws.min_corner.z = -0.2
        ws.max_corner.x =  1.0; ws.max_corner.y =  1.0; ws.max_corner.z =  2.0

        req = MotionPlanRequest()
        req.group_name = 'fr3_arm'
        req.workspace_parameters = ws
        req.goal_constraints = [goal_constraints]
        req.num_planning_attempts = 10
        req.allowed_planning_time = 10.0
        req.max_velocity_scaling_factor = 0.3
        req.max_acceleration_scaling_factor = 0.3

        goal_msg = MoveGroup.Goal()
        goal_msg.request = req
        goal_msg.planning_options.plan_only = False

        self.get_logger().info(
            f'Phase 0: moving to start [{pose.position.x:.2f}, '
            f'{pose.position.y:.2f}, {pose.position.z:.2f}] with Q_UP...')
        future = self.move_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future)
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error('move_to_start rejected!')
            return False

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        error_code = result_future.result().result.error_code.val
        if error_code != 1:
            self.get_logger().error(
                f'move_to_start failed (error {error_code}). '
                f'If error -4: verify Q_UP is reachable at this position. '
                f'Try raising START_Z or reducing START_X.')
            return False

        self.get_logger().info('Phase 0 complete — at start pose.')
        return True

    # ------------------------------------------------------------------
    # Phase 1: parabolic arc
    # ------------------------------------------------------------------

    def execute_parabola(self, start_pose, end_pose, apex_height, steps=40):
        """
        Cartesian parabolic arc from start_pose to end_pose.
        Orientation is fixed to Q_DOWN throughout — stable IK, no jumps.
        Arc terminates BELOW the berry; orientation flip happens in Phase 2.
        """
        Q_DOWN = Quaternion(x=1.0, y=0.0, z=0.0, w=0.0)
        JUMP_THRESHOLD = 5.0

        waypoints = []
        for i in range(1, steps + 1):
            t = i / steps
            p = Pose()
            p.position.x = start_pose.position.x + t * (end_pose.position.x - start_pose.position.x)
            p.position.y = start_pose.position.y + t * (end_pose.position.y - start_pose.position.y)
            base_z = start_pose.position.z + t * (end_pose.position.z - start_pose.position.z)
            p.position.z = base_z + 4.0 * apex_height * t * (1.0 - t)
            p.orientation = Q_DOWN
            waypoints.append(p)

        self.get_logger().info(
            f'Phase 1: parabolic arc to arc-landing '
            f'[{end_pose.position.x:.2f}, {end_pose.position.y:.2f}, '
            f'{end_pose.position.z:.2f}], apex offset={apex_height:+.2f} m...')
        return self._execute_cartesian(waypoints, JUMP_THRESHOLD)

    # ------------------------------------------------------------------
    # Phase 2: free-space flip to Q_UP at below-berry position
    # ------------------------------------------------------------------

    def _flip_to_approach(self, pre_grasp):
        """
        MoveGroup free-space plan from current pose to pre_grasp (Q_UP).
        OMPL plans in joint-space so it handles the Q_DOWN→Q_UP flip freely
        without IK branch jumps. Same structure as move_to_start.
        """
        header = Header(frame_id='fr3_link0')

        pos_con = PositionConstraint()
        pos_con.header = header
        pos_con.link_name = 'fr3_hand'
        bv = BoundingVolume()
        bv.primitives = [SolidPrimitive(type=SolidPrimitive.SPHERE, dimensions=[0.02])]
        bv.primitive_poses = [pre_grasp]
        pos_con.constraint_region = bv
        pos_con.weight = 1.0

        ori_con = OrientationConstraint()
        ori_con.header = header
        ori_con.link_name = 'fr3_hand'
        ori_con.orientation = pre_grasp.orientation  # Q_UP
        ori_con.absolute_x_axis_tolerance = 0.05
        ori_con.absolute_y_axis_tolerance = 0.05
        ori_con.absolute_z_axis_tolerance = 0.05
        ori_con.weight = 1.0

        goal_constraints = Constraints()
        goal_constraints.position_constraints = [pos_con]
        goal_constraints.orientation_constraints = [ori_con]

        ws = WorkspaceParameters()
        ws.header = header
        ws.min_corner.x = -1.0; ws.min_corner.y = -1.0; ws.min_corner.z = -0.2
        ws.max_corner.x =  1.0; ws.max_corner.y =  1.0; ws.max_corner.z =  2.0

        req = MotionPlanRequest()
        req.group_name = 'fr3_arm'
        req.workspace_parameters = ws
        req.goal_constraints = [goal_constraints]
        req.num_planning_attempts = 15
        req.allowed_planning_time = 15.0
        req.max_velocity_scaling_factor = 0.2
        req.max_acceleration_scaling_factor = 0.2

        goal_msg = MoveGroup.Goal()
        goal_msg.request = req
        goal_msg.planning_options.plan_only = False

        self.get_logger().info(
            f'Phase 2: flipping to Q_UP at pre-grasp '
            f'[{pre_grasp.position.x:.2f}, {pre_grasp.position.y:.2f}, '
            f'{pre_grasp.position.z:.2f}]...')
        future = self.move_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future)
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error('_flip_to_approach rejected!')
            return False

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        error_code = result_future.result().result.error_code.val
        if error_code != 1:
            self.get_logger().error(
                f'Phase 2 flip failed (error {error_code}). '
                f'Q_UP may not be reachable at [{pre_grasp.position.x:.2f}, '
                f'{pre_grasp.position.y:.2f}, {pre_grasp.position.z:.2f}]. '
                f'Try lowering ARC_LAND_Z or adjusting BERRY_X/BERRY_Z.')
            return False

        self.get_logger().info('Phase 2 complete — gripper pointing UP, below berry.')
        return True

    # ------------------------------------------------------------------
    # Phase 3: straight +Z insertion
    # ------------------------------------------------------------------

    def _insert_straight(self, pre_grasp, berry, steps=10):
        """
        Straight +Z push from pre_grasp up into the berry from below.
        Arm is already in Q_UP config (set by Phase 2) so Cartesian IK
        tracks without jumps over this short 10 cm stroke.
        """
        waypoints = []
        for i in range(1, steps + 1):
            alpha = i / steps
            p = Pose()
            p.position.x = pre_grasp.position.x
            p.position.y = pre_grasp.position.y
            p.position.z = pre_grasp.position.z + alpha * (berry.position.z - pre_grasp.position.z)
            p.orientation = berry.orientation  # Q_UP, constant
            waypoints.append(p)

        dist = abs(berry.position.z - pre_grasp.position.z)
        self.get_logger().info(
            f'Phase 3: inserting straight up {dist:.2f} m into berry '
            f'at [{berry.position.x:.2f}, {berry.position.y:.2f}, {berry.position.z:.2f}]...')
        if self._execute_cartesian(waypoints, 5.0):
            self.get_logger().info('DONE — gripper around berry.')

    # ------------------------------------------------------------------
    # TF helper
    # ------------------------------------------------------------------

    def _get_current_ee_pose(self, orientation, timeout=2.0):
        """Look up the current fr3_hand pose in fr3_link0 via TF."""
        import rclpy.time
        try:
            # Spin briefly to let TF buffer fill
            deadline = self.get_clock().now() + rclpy.duration.Duration(seconds=timeout)
            while self.get_clock().now() < deadline:
                if self.tf_buffer.can_transform('fr3_link0', 'fr3_hand', rclpy.time.Time()):
                    break
                rclpy.spin_once(self, timeout_sec=0.05)

            t = self.tf_buffer.lookup_transform(
                'fr3_link0', 'fr3_hand', rclpy.time.Time())
            p = Pose()
            p.position.x = t.transform.translation.x
            p.position.y = t.transform.translation.y
            p.position.z = t.transform.translation.z
            p.orientation = orientation  # keep Q_UP, don't use TF rotation
            self.get_logger().info(
                f'Actual EE after Phase 1: '
                f'[{p.position.x:.3f}, {p.position.y:.3f}, {p.position.z:.3f}]')
            return p
        except Exception as e:
            self.get_logger().warn(f'TF lookup error: {e}')
            return None

    # ------------------------------------------------------------------
    # Shared Cartesian helper
    # ------------------------------------------------------------------

    def _execute_cartesian(self, waypoints, jump_threshold):
        """Call GetCartesianPath, check coverage fraction, then execute."""
        req = GetCartesianPath.Request()
        req.header.frame_id = 'fr3_link0'
        req.group_name = 'fr3_arm'
        req.link_name = 'fr3_hand'
        req.waypoints = waypoints
        req.max_step = 0.01
        req.jump_threshold = jump_threshold
        req.avoid_collisions = True

        future = self.path_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        res = future.result()

        if res.fraction < 0.9:
            self.get_logger().error(
                f'Cartesian planning incomplete: {res.fraction * 100:.1f}% computed '
                f'(jump_threshold={jump_threshold} rad). '
                f'Target may be unreachable or a joint-space jump was detected.')
            return False

        self.get_logger().info(f'Cartesian path {res.fraction * 100:.1f}% — executing...')
        goal_msg = ExecuteTrajectory.Goal()
        goal_msg.trajectory = res.solution
        future_exec = self.exec_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future_exec)
        goal_handle = future_exec.result()
        if not goal_handle.accepted:
            self.get_logger().error('ExecuteTrajectory goal rejected!')
            return False
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        error_code = result_future.result().result.error_code.val
        if error_code != 1:
            self.get_logger().error(f'Trajectory execution failed (error {error_code}).')
            return False
        return True

def main(args=None):
    rclpy.init(args=args)
    node = ParabolaMover()
    node.run()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
