#!/usr/bin/env python3

import rclpy
import tf2_ros
import math
from rclpy.node import Node
from rclpy.clock import Clock 
from rclpy.qos import QoSHistoryPolicy, QoSProfile, QoSReliabilityPolicy
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle
from std_msgs.msg import String, Bool
from geometry_msgs.msg import PoseStamped, Twist
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from sick_visionary_t_mini.msg import SickTMini

from doozy_actions.action import DollyDock

class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.navigator = BasicNavigator()

        self.initial_pose = PoseStamped()
        self.client = ActionClient(self, DollyDock, 'go_to_goal_client')

        self.qos_profile = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=1
        )
        
        self.pallet_id_pub = self.create_publisher(String, topic='/pallet_idx', qos_profile=self.qos_profile)
        self.goal_reached_pub =  self.create_publisher(Bool, topic='/reached_point', qos_profile=10)

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', qos_profile=10)
        self.create_subscription(SickTMini, '/sick_vision_t_mini/one', self.sick_callback, 10)
        self.create_subscription(Bool, 'dolly_docked', self.choose_next)

        self.dolly_present = False
        self.camera_status = ''

        self.now = Clock().now()

        self.moved_to_location = False
        self.cmd_vel = Twist()

        self.kp_distance = 1
        self.ki_distance = 0.01
        self.kd_distance = 0.5

        self.kp_angle = 1
        self.ki_angle = 0.03
        self.kd_angle = 0.05

    def start(self):
        
        start_docking = DollyDock.Goal()
        self.get_logger().info("Navigating to pick-up...")

        self.initial_pose.header.frame_id = 'map'
        self.initial_pose.header.stamp = self.navigator.get_clock().now().to_msg()
        self.initial_pose.pose.position.x = 1.0
        self.initial_pose.pose.position.y = 2.0
        self.initial_pose.pose.orientation.z = 1.0
        self.initial_pose.pose.orientation.w = 0.0

        self.navigator.lifecycleStartup()

        self.goal_poses = [
            PoseStamped(),
            PoseStamped(),
            PoseStamped(),
        ]

        for i, pose in enumerate(self.goal_poses):
            pose.header.frame_id = 'map'
            pose.header.stamp = self.navigator.get_clock().now().to_msg()
            pose.pose.position.x = [-0.67, -0.60, -1.53][i]
            pose.pose.position.y = [0.27, -0.11, 1.60][i]
            pose.pose.orientation.z = [-0.15, -0.033, -0.69][i]
            pose.pose.orientation.w = [0.99, 0.99, 0.76][i]

        self.current_goal_index = 0
        self.navigator.goToPose(self.goal_poses[self.current_goal_index])

        while True:
            user_input = input("Enter the next goal ID (1, 2) for Dolly Pickup / '0' for Home or 'exit' to end: ")
            goal = DollyDock.Goal()
            if user_input == 'exit':
                self.get_logger().warn("Invalid Index ")

            try:
                goal_id = int(user_input)
                        
                self.current_goal_index = goal_id - 1
                self.navigator.goToPose(self.goal_poses[self.current_goal_index])

                while self.navigator.isTaskComplete():
                    self.moved_to_location = self.navigator.isTaskComplete()

                    goal.idx_no = user_input
                    goal.reached_point = True
                
                    self.client.wait_for_server()
                    print("waiting for server")

                send_goal_future = self.client.send_goal_async(goal, self.feedback_callback)
                send_goal_future.add_done_callback(self.get_done_cb)

                if goal_id < 1 or goal_id > len(self.goal_poses):
                    print("Invalid goal ID. Please enter a number between 1 and", len(self.goal_poses))
                return self.moved_to_location

            except ValueError:
                print("Invalid input. Please enter a valid goal ID or 'exit'.")
                pass
            if self.moved_to_location is True:
                print("reached goal")
             
    # def get_done_cb(self, future):
    #     goal_handle:ClientGoalHandle = future.result()

    #     if not goal_handle.accepted:
    #         self.get_logger().info('Goal Rejected.... ')
    #         return
    #     else:
    #         self.get_logger("Goal Accepted... ")
    #         self._get_results_future = goal_handle.get_results_async()
        

    # def feedback_callback(self, fb_msg):
    #     feedback = fb_msg.feedback
    #     self.get_logger().info(f'Recieved Feedback {feedback}')

    
    def sick_callback(self, msg):
        self.dolly_present = msg.dolly_found
        self.camera_status = msg.status_of_camera

        print(f"PRESENCE OF DOLLY: {self.dolly_present}")
        print(f"STATUS OF CAMERA: {self.camera_status}")

    def euler_from_quaternion(x, y, z, w):

        t0 = +2.0 * (w * x + y * z)
        t1 = +1.0 - 2.0 * (x * x + y * y)
        roll_x = math.atan2(t0, t1)
     
        t2 = +2.0 * (w * y - z * x)
        t2 = +1.0 if t2 > +1.0 else t2
        t2 = -1.0 if t2 < -1.0 else t2
        pitch_y = math.asin(t2)
     
        t3 = +2.0 * (w * z + x * y)
        t4 = +1.0 - 2.0 * (y * y + z * z)
        yaw_z = math.atan2(t3, t4)
     
        return  yaw_z 

def main():
    rclpy.init()
    robot_controller = RobotController()
    robot_controller.start()

if __name__ == '__main__':
    main()


