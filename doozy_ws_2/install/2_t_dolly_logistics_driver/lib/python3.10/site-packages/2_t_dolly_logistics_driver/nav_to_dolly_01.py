#!/usr/bin/env python3 

import rclpy
import math
import time
from rclpy.node import Node

from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from geometry_msgs.msg import PoseStamped
from doozy_actions.msg import Navigation, Docking

class NaviDolly(Node):

    def __init__(self):

        super().__init__('navigate_to_dolly')

        self.get_logger().info('Navigation to Position has begun')

        self.navigator = BasicNavigator()

        self.initial_pose = PoseStamped()

        self.goal_poses = [PoseStamped(), PoseStamped(), PoseStamped()]

        self.navigation_node_pub = self.create_publisher(Navigation, '/dolly_dock_node', 10)

        self.create_subscription(Docking, '/dolly_navigate_node', self.docking_node_callback,10)
        #self.create_subscription(SickTMini, '/sick_vision_t_mini/one', 10)

        self.result = None

        self.navigation_msg = Navigation()
        self.navigation_flag = False

        self.is_docked = False
        self.is_latched = False
        self.dist_to_target = 0.0
        self.angle_to_target = 0.0
        self.tf_status = ''
        self.start_navigation()


    def check_docking(self):
        
        while True:
            if not self.is_docked:
                self.get_logger().warn('Waiting for docking...')
                rclpy.spin_once(self)
            if not self.is_latched:
                #self.get_logger().info("<< Dolly Docked >>")
                self.get_logger().warn("Waiting for dolly to be latched...")
                rclpy.spin_once(self)

            else:
                self.start_navigation()
                print(self.result)
                while self.is_docked:
                    self.get_logger().info('Waiting for navigation completion...')
                    rclpy.spin_once(self)

    def start_navigation(self):
        
        self.get_logger().info("Navigation Node has begun... ")
        input("Please press enter to begun navigation...")

        self.get_logger().info('navigating to dolly....')

        self.initial_pose.header.frame_id = 'map'
        self.initial_pose.header.stamp = self.navigator.get_clock().now().to_msg()
        self.initial_pose.pose.position.x = 0.0
        self.initial_pose.pose.position.y = 0.0
        self.initial_pose.pose.orientation.z = 1.0
        self.initial_pose.pose.orientation.w = 0.0

        self.navigator.lifecycleStartup()

        for i, pose in enumerate(self.goal_poses):
            pose.header.frame_id = 'map'
            pose.header.stamp = self.navigator.get_clock().now().to_msg()
            pose.pose.position.x = [0.0, 0.67, -0.60, -1.53][i]
            pose.pose.position.y = [0.0, 0.27, -0.11, 1.60][i]
            pose.pose.orientation.z = [0.0, -0.15, -0.033, -0.69][i]
            pose.pose.orientation.w = [0.0, 0.99, 0.99, 0.76][i]

        # self.current_goal_index = 0
        # self.navigator.goToPose(self.goal_poses[self.current_goal_index])
        
        #while True:
        user_input = input("Enter the next goal ID (0, 1, 2, 3) for Dolly Pickup / '0' for Home or 'exit' to end: ")
        self.navigation_msg.idx_of_dolly = str(user_input)
        self.navigation_node_pub.publish(self.navigation_msg)
            
        if user_input == 'exit':
            self.get_logger().warn("Invalid Index ")

        try:
            goal_id = int(user_input)
                        
            self.current_goal_index = goal_id - 1
            self.navigator.goToPose(self.goal_poses[self.current_goal_index])

            while not self.navigator.isTaskComplete():
                    
                self.result = self.navigator.getResult()

            if goal_id < 1 or goal_id > len(self.goal_poses):
                print("Invalid goal ID. Please enter a number between 1 and", len(self.goal_poses)) 

            if self.result == TaskResult.SUCCEEDED:
                self.get_logger().info('Target reached')
                self.navigation_msg.moved_to_spot = True
                self.navigation_flag = True

            elif self.result == TaskResult.FAILED:
                self.get_logger().info('Failed ! -- Fail')
                self.navigation_msg.moved_to_spot = False
                self.navigation_flag = False

            elif self.result == TaskResult.UNKNOWN:
                self.get_logger().info('Failed ! -- Unknown')
                self.navigation_msg.moved_to_spot = False
                print(self.result)
                time.sleep(5)
                self.navigation_flag = False
            self.navigation_node_pub.publish(self.navigation_msg)
            return self.navigation_flag
        
        except ValueError:
            print("Invalid input. Please enter a valid goal ID or 'exit'.")
            self.navigation_msg.error = "Invalid input. Please enter a valid goal ID or 'exit'."
            pass


    def docking_node_callback(self, msg):

        self.is_docked = msg.docked_to_target
        self.is_latched = msg.safe_to_latch

        self.dist_to_target = msg.distance_to_target
        self.angle_to_target = msg.angle_to_target

        self.tf_status = msg.target_tf_status
        return msg.docked_to_target
    
    # def sick_tf_node(self, msg):
    #     pass

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
    robot_controller = NaviDolly()
    rclpy.spin_once(robot_controller.check_docking())


if __name__ == '__main__':
    main()