#!/usr/bin/env python3 

import rclpy
import math
import time
from rclpy.node import Node

from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from geometry_msgs.msg import PoseStamped
from doozy_actions.msg import Navigation, Docking
from std_msgs.msg import Bool

class NaviDolly(Node):

    def __init__(self):

        super().__init__('navigate_to_dolly')

        self.get_logger().info('Navigation to Position has begun')

        self.navigator = BasicNavigator()

        self.initial_pose = PoseStamped()

        self.goal_poses = PoseStamped()

        self.navigation_node_pub = self.create_publisher(Navigation, '/dolly_navigate_node', 10)

        #self.create_subscription(Docking, '/dolly_dock_node', self.docking_node_callback,10)
        
        self.create_subscription(Bool, '/dolly1_topic',self.dolly_01, 10)
        self.create_subscription(Bool, '/dolly2_topic', self.dolly_02, 10)
        self.create_subscription(Bool, '/go_to_home', self.home, 10)
        #self.create_subscription(SickTMini, '/sick_vision_t_mini/one', 10)

        self.result = None

        self.dolly_01_read = False
        self.dolly_02_read = False
        self.go_to_home = False

        self.navigation_msg = Navigation()
        self.navigation_flag = False

        self.is_docked = False
        self.is_latched = False
        self.dist_to_target = 0.0
        self.angle_to_target = 0.0
        self.tf_status = ''

    def start_navigation(self):
        
        self.get_logger().info("Navigation Node has begun... ")

        self.get_logger().info('navigating to dolly....')


        self.navigator.lifecycleStartup()

        while not self.navigator.isTaskComplete():
                    
                self.result = self.navigator.getResult()

        if self.result == TaskResult.SUCCEEDED:
            self.get_logger().info('Target reached')
            self.navigation_msg.moved_to_spot = True
            self.navigation_flag = True

        elif self.result == TaskResult.FAILED:
            self.get_logger().info('Failed ! -- Fail')
            self.navigation_msg.moved_to_spot = False
            self.navigation_flag = False

        elif self.result == TaskResult.UNKNOWN:
            self.get_logger().info('Check Robot ! -- Unknown')
            self.navigation_msg.moved_to_spot = False
            print(self.result)
            time.sleep(5)
            self.navigation_flag = False
            
        self.navigation_node_pub.publish(self.navigation_msg)
        return self.navigation_flag
    
    def dolly_01(self, msg):

        self.dolly_01_read = msg.data
        print(self.dolly_01_read)
        
        pose_1 = PoseStamped()
        
        if self.dolly_01_read is True:
            pose_1.header.frame_id = 'map'
            pose_1.header.stamp = self.navigator.get_clock().now().to_msg()
            pose_1.pose.position.x = 0.75
            pose_1.pose.position.y = 1.17
            pose_1.pose.orientation.z = -0.15
            pose_1.pose.orientation.w = 0.99
            self.navigator.goToPose(pose_1)
            self.navigation_msg.idx_of_dolly = 'dolly_01'
            self.navigation_node_pub.publish(self.navigation_msg)
            self.get_logger().info("Navigating to Dolly 1")
    
    def dolly_02(self, msg):
        
        self.dolly_02_read = msg.data
        print(self.dolly_01_read)

        pose_2 = PoseStamped()
    
        if self.dolly_02_read is True:
            pose_2.header.frame_id = 'map'
            pose_2.header.stamp = self.navigator.get_clock().now().to_msg()
            pose_2.pose.position.x = -0.67
            pose_2.pose.position.y = -1.56
            pose_2.pose.orientation.z = 0.98
            pose_2.pose.orientation.w = 0.16
            self.navigator.goToPose(pose_2)
            self.navigation_msg.idx_of_dolly = 'dolly_02'
            self.navigation_node_pub.publish(self.navigation_msg)
            self.get_logger().info("Navigating to Dolly 2")
    
    def home(self, msg):

        self.go_to_home = msg.data
        print(self.go_to_home)

        pose_home = PoseStamped()

        if self.go_to_home is True:
            pose_home.header.frame_id = 'map'
            pose_home.header.stamp = self.navigator.get_clock().now().to_msg()
            pose_home.pose.position.x = 0.0
            pose_home.pose.position.y = 0.0
            pose_home.pose.orientation.z = 1.0
            pose_home.pose.orientation.w = 0.99
            self.navigator.goToPose(pose_home)
            self.navigation_msg.idx_of_dolly = '0'
            self.get_logger().info("Navigating to Home")

    # def docking_node_callback(self, msg):

    #     self.is_docked = msg.docked_to_target
    #     self.is_latched = msg.safe_to_latch

    #     self.dist_to_target = msg.distance_to_target
    #     self.angle_to_target = msg.angle_to_target

    #     self.tf_status = msg.target_tf_status
    #     return msg.docked_to_target
    
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
    robot_controller.start_navigation()
    rclpy.spin(robot_controller)
    rclpy.shutdown()

if __name__ == '__main__':
    main()