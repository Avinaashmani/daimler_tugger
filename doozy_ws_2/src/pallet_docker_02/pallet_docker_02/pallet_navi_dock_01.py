#!/usr/bin/env python3 

import rclpy

import numpy as np
import math
from rclpy.node import Node
from rclpy.time import Time
from tf2_ros import TransformBroadcaster
from nav2_simple_commander.robot_navigator import BasicNavigator
from geometry_msgs.msg import TransformStamped
from sick_visionary_t_mini.msg import SickTMini

# from sick_visionary_t_mini.msg import SickTMini

class PalletTF(Node):

    def __init__(self):
        
        super().__init__('pallet_tf_publisher')

        self.tf_broadcaster = TransformBroadcaster(self)

        self.rightCorner_x = 0.0
        self.rightCorner_y = 0.0
        self.rightCorner_z = 0.0

        self.leftCorner_x = 0.0
        self.leftCorner_y = 0.0
        self.leftCorner_z = 0.0

        self.x_point = 0.0
        self.y_point = 0.0
        self.z_point = 0.0

        self.dolly_found = False

        self.create_subscription(SickTMini, '/sick_vision_t_mini/one', self.sick_callback, 10)
        # self.create_timer(0.1, self.sick_callback)
        self.base_frame = 'map'

    # def publish_tf(self):

    #     tf1 = TransformStamped()
    #     tf1.header.frame_id = self.base_frame
    #     tf1.child_frame_id = 'dolly_01'
    #     tf1.header.stamp = Time().to_msg()
    #     tf1.transform.translation.x = 1.8147761821746826
    #     tf1.transform.translation.y = 1.222383975982666
    #     tf1.transform.rotation.z = 1.0 
    #     tf1.transform.rotation.w = 0.0
    #     self.tf_broadcaster.sendTransform(tf1)
        
        # tf2 = TransformStamped()
        # tf2.header.frame_id = self.base_frame
        # tf2.child_frame_id = 'dolly_02'
        # tf2.header.stamp = Time().to_msg()
        # tf2.transform.translation.x = -1.75910
        # tf2.transform.translation.y = -1.40089
        # tf2.transform.rotation.z = 1.0 
        # tf2.transform.rotation.w = 0.0
        # self.tf_broadcaster.sendTransform(tf2)

        # sick_tf = TransformStamped()
        # sick_tf.header.frame_id = self.base_frame
        # sick_tf.child_frame_id = 'sick_visionary_t_mini'
        # sick_tf.header.stamp = Time().to_msg()
        # sick_tf.transform.translation.x = self.x_point
        # sick_tf.transform.translation.y = self.y_point
        # sick_tf.transform.rotation.z = 1.0
        # sick_tf.transform.rotation.w = 0.0
        # self.tf_broadcaster.sendTransform(sick_tf)

        # print(self.x_point)
        # print(self.y_point)

    def sick_callback(self, msg ):

        # tf1 = TransformStamped()
        # tf1.header.frame_id = self.base_frame
        # tf1.child_frame_id = 'dolly_01'
        # tf1.header.stamp = Time().to_msg()
        # tf1.transform.translation.x = 1.8147761821746826
        # tf1.transform.translation.y = 1.222383975982666
        # tf1.transform.rotation.z = 1.0 
        # tf1.transform.rotation.w = 0.0
        # self.tf_broadcaster.sendTransform(tf1)
        
        # tf2 = TransformStamped()
        # tf2.header.frame_id = self.base_frame
        # tf2.child_frame_id = 'dolly_02'
        # tf2.header.stamp = Time().to_msg()
        # tf2.transform.translation.x = -1.75910
        # tf2.transform.translation.y = -1.40089
        # tf2.transform.rotation.z = 1.0 
        # tf2.transform.rotation.w = 0.0
        # self.tf_broadcaster.sendTransform(tf2)

        sick_tf = TransformStamped()
        sick_tf.header.frame_id = self.base_frame
        sick_tf.child_frame_id = 'sick_visionary_t_mini'
        sick_tf.header.stamp = Time().to_msg()
        sick_tf.transform.translation.x = msg.point.z
        sick_tf.transform.translation.y = msg.point.x
        #sick_tf.transform.translation.z = 0.0
        sick_tf.transform.rotation.z = 0.0
        sick_tf.transform.rotation.w = 1.0

 
        self.tf_broadcaster.sendTransform(sick_tf)

        self.rightCorner_x = msg.right_corners.x
        self.rightCorner_y = msg.right_corners.y
        self.rightCorner_z = msg.right_corners.z

        self.leftCorner_x = msg.left_corners.x 
        self.leftCorner_y = msg.left_corners.y
        self.leftCorner_z = msg.left_corners.z


        print(msg.point.z)
        print(msg.point.x)

def main():

    rclpy.init()
    tf_pub = PalletTF()
    rclpy.spin(tf_pub)

if __name__=='__main__':
    main()


