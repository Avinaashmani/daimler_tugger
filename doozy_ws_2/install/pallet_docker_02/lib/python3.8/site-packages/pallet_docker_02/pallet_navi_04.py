#!/usr/bin/env python3

import rclpy
from rclpy import Node
from rclpy import logging
from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from std_msgs.msg import String

class Nav2Pallet(Node):

    def __init__(self):
        super().__init__('navigate_node')
        self.init_rclpy()

        self.idx_value_pub = self.create_publisher(String, '/pallet_idx', 10)

        self.navigate = BasicNavigator()

        self.inital_pose = PoseStamped()
        self.inital_pose.pose.position.x = 0.0
        self.inital_pose.pose.position.y = 0.0
        self.inital_pose.pose.orientation.z = 0.0
        self.inital_pose.pose.orientation.w = 1.0

        self.goal_poses = [PoseStamped(), PoseStamped(), PoseStamped(), PoseStamped()]

        self.goal_poses[0].header.frame_id = 'map'
        self.goal_poses[0].header.stamp = self.navigator.get_clock().now().to_msg()
        self.goal_poses[0].pose.position.x = -0.00800
        self.goal_poses[0].pose.position.y = 2.0
        self.goal_poses[0].pose.orientation.z = -0.70
        self.goal_poses[0].pose.orientation.w = 0.70

        self.goal_poses[1].header.frame_id = 'map'
        self.goal_poses[1].header.stamp = self.navigator.get_clock().now().to_msg()     

        self.goal_poses[1].pose.position.x = 2.00
        self.goal_poses[1].pose.position.y = -0.00044
        self.goal_poses[1].pose.orientation.z = 0.99
        self.goal_poses[1].pose.orientation.w = 6.00

        self.goal_poses[2].header.frame_id = 'map'
        self.goal_poses[2].header.stamp = self.navigator.get_clock().now().to_msg()
        self.goal_poses[2].pose.position.x = 0.006  
        self.goal_poses[2].pose.position.y = -2.00
        self.goal_poses[2].pose.orientation.z = 0.70
        self.goal_poses[2].pose.orientation.w = 0.70

        self.goal_poses[3].header.frame_id = 'map'
        self.goal_poses[3].header.stamp = self.navigator.get_clock().now().to_msg()
        self.goal_poses[3].pose.position.x = -2.009
        self.goal_poses[3].pose.position.y = -0.00046
        self.goal_poses[3].pose.orientation.z = -0.00055
        self.goal_poses[3].pose.orientation.w = 0.99

        self.idx = 0
        self.idx_value = String()
        while True:
            user_inp = input("Please enter the IDX No or Enter 'x' to quit : ")
            self.idx_value.data = user_inp
            if user_inp == 'x':
                break
            try:
                goal_idx = int(user_inp)
                if goal_idx < 1 or goal_idx > len(self.goal_poses):
                    logging.get_logger.info_once(" Invalid Pallet IDX...")
                    continue
                pallet_indx = goal_idx - 1
                self.navigate.goToPose(self.goal_poses([pallet_indx]))
            except ValueError:
                print("Invalid input. Please enter a valid goal ID or 'exit'.")
        self.idx_value_pub.publish(self.idx_value)
        result = self.navigate.getResult()
        if result == TaskResult.SUCCEEDED:
            print('Goal succeeded!')
        elif result == TaskResult.CANCELED:
            print('Goal was canceled!')
        elif result == TaskResult.FAILED:
            print('Goal failed!')
        else:
            print('Goal has an invalid return status!')

        exit(0)

    def init_rclpy(self):

        rclpy.init()
        logging.get_logger().info_once("Nav2Pallet has started...")

def main():
    Nav2Pallet()

if __name__=='__main__':
    main()
