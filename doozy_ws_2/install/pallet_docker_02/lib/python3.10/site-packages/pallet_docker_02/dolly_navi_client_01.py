#!/usr/bin/env python3

import rclpy
import tf2_ros
import time
from rclpy.node import Node
from rclpy.clock import Clock 
from rclpy.qos import QoSHistoryPolicy, QoSProfile, QoSReliabilityPolicy
from std_msgs.msg import Bool, String
from geometry_msgs.msg import PoseStamped, Twist
from nav2_simple_commander.robot_navigator import BasicNavigator
from sick_visionary_t_mini.msg import SickTMini

from rclpy.action import ActionClient
from doozy_actions.action import DollyDock
from rclpy.action.client import ClientGoalHandle

class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.navigator = BasicNavigator()

        self.initial_pose = PoseStamped()
        
        self.qos_profile = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=1
        )

        # self.tf_buffer = tf2_ros.Buffer()
        # self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        # self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', qos_profile=10)
        # self.position_pub = self.create_publisher(String, '/reached_position', qos_profile=10)

        # self.create_subscription(SickTMini, '/sick_vision_t_mini/one', self.sick_callback, 10)
        # self.create_subscription(Bool, '/dolly_docked', self.start, 10)

        self.dock_client = ActionClient(self, DollyDock, 'dock_to_dolly')

        self.dolly_present = False
        self.camera_status = ''

        self.now = Clock().now()

        self.moved_to_location = False
        self.cmd_vel = Twist()
        self.position_reached = String()

        self.result = False

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
        # self.navigator.goToPose(self.goal_poses[self.current_goal_index])


    def start(self):
        while True:

            # user_input = input("Enter the next goal ID (1, 2) for Dolly Pickup / '0' for Home or 'exit' to end: ")

            # if user_input == 'exit':
            #     self.get_logger().warn("Exiting...")
            #     break

            # try:
            #     goal_id = int(user_input)
                
            #     if 1 <= goal_id <= len(self.goal_poses):
            #         self.current_goal_index = goal_id - 1
            #         self.navigator.goToPose(self.goal_poses[self.current_goal_index])

            #         while not self.navigator.isTaskComplete():
            #             self.position_reached.data = str(self.navigator.getResult())
            #         self.position_pub.publish (self.position_reached)

            #     else:
            #         print("Invalid goal ID. Please enter a number between 1 and", len(self.goal_poses))
            
            # except ValueError:
            #     print("Invalid input. Please enter a valid goal ID or 'exit'.")

            # self.moved_to_location = False  # Reset flag for the next navigation task

            self.goal = DollyDock.Goal()

            # self.get_logger().info("Sending docking 'OK'.... ")
            self.dock_client.wait_for_server()
            # self.get_logger().info()
            

            self.goal.idx_no = '36'
            self.goal.reached_point = False
            send_goal_future = self.dock_client.send_goal_async(self.goal, self.future_feedback)
            send_goal_future.add_done_callback(self.cli_goal_handle)
    
    def cli_goal_handle(self, future_handle):

        cli_handle : ClientGoalHandle = future_handle.get_result_async()

        if not cli_handle.accepted:
            self.get_logger().info('goal rejected by server....')
            return 
            
        get_result = cli_handle.get_result_async()
        get_result.add_done_callback(self.result_callback)


    def result_callback(self, result_callback):
        global result
        result = result_callback.result().result
        self.result = result.docked_to_dolly
        self.get_logger().info(f'result ---> {str(self.result)}')
    
    def future_feedback(self, future_handle):
        self.get_logger().info(f"Recieved feedback from sever {future_handle.feedback}")


def main():
    rclpy.init()
    robot_controller = RobotController()
    rclpy.spin(robot_controller.start())
    rclpy.shutdown()

if __name__ == '__main__':
    main()
