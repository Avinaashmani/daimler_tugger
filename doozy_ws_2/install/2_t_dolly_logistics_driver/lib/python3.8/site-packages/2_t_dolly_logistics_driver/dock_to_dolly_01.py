#!/usr/bin/env python 

import rclpy
import math
import time
from math import sqrt, pow, atan2
from std_msgs.msg import Bool, String
from rclpy.node import Node
from rclpy.time import Time

import tf2_ros
from geometry_msgs.msg import Twist
from doozy_actions.msg import Docking, Navigation

class DockDolly(Node):

    def __init__(self):

        super().__init__("dolly_docker")

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.dock_node_publisher = self.create_publisher(Docking, '/dolly_dock_node', 10)
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.create_subscription(Navigation, '/dolly_navigate_node', self.tf_callback, 10)

        self.base_frame = 'map'
        self.dolly_frame = 'dolly_01'
        self.shishimaru_frame = 'base_link'

        self.moved_to_spot = False
        self.idx_of_dolly = ''
        self.error = ''

        self.move_tug = Twist()

        self.is_moving = False  # Flag to indicate if the robot is moving

        self.spin_this()

    def tf_callback(self, msg):

        self.idx_of_dolly = msg.idx_of_dolly
        self.error = msg.error
        self.moved_to_spot = msg.moved_to_spot

        print (msg.moved_to_spot)
        print (self.moved_to_spot)

    def dock_to_dolly(self):

        try:
            shishimaru_transform = self.tf_buffer.lookup_transform('map', 'dolly_01', Time())
            dolly_transform = self.tf_buffer.lookup_transform('map', 'base_link', Time())

            self.update_transform(shishimaru_transform, dolly_transform)

            distance = math.fabs(sqrt(pow(self.dolly_tranx_x - self.shishimaru_tranx_x, 2) + pow(self.dolly_tranx_y - self.shishimaru_tranx_y, 2)))
            angle_difference = self.dolly_angle_z - self.shishimaru_angle_z
            yaw_angle_error = atan2(self.dolly_tranx_y - self.shishimaru_tranx_y, self.dolly_tranx_x - self.shishimaru_tranx_x) - self.shishimaru_angle_z
            
            if not self.is_moving:  # Check if the robot is not already moving
                if distance > 0.2:
                    print("Starting Movement")
                    self.is_moving = True  # Set the flag to indicate the robot is moving

            if self.is_moving:  # Only perform control when the robot is moving
                print("---------------")
                print(yaw_angle_error)
                print(distance)
                print("---------------")

                dock_to_dolly_msg = Docking()

                dock_to_dolly_msg.docked_to_target = False
                dock_to_dolly_msg.distance_to_target = distance
                dock_to_dolly_msg.angle_to_target = yaw_angle_error
                dock_to_dolly_msg.safe_to_latch = True

                self.dock_node_publisher.publish(dock_to_dolly_msg)

                if abs(yaw_angle_error) > 0.15:
                    if abs(angle_difference) > 0.1:
                        if yaw_angle_error > 0.0:
                            self.move_tug.angular.z = 0.1
                        else:
                            self.move_tug.angular.z = -0.1
                    else:
                        self.move_tug.linear.x = 0.05

                    self.cmd_pub.publish(self.move_tug)

                else:
                    print("Goal Reached")

                    self.cmd_pub.publish(self.move_tug)
                    self.move_tug.linear.x = 0.0
                    self.move_tug.angular.z = 0.0

                    dock_to_dolly_msg.safe_to_latch = True
                    dock_to_dolly_msg.docked_to_target = True

                    self.is_moving = False  # Reset the flag indicating the robot is moving


        except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
            self.get_logger().warn("LookupException: {0}".format(str(e)))
            dock_to_dolly_msg = Docking()
            dock_to_dolly_msg.error = str(e)
            self.dock_node_publisher.publish(dock_to_dolly_msg)

    def update_transform(self, shishimaru, dolly):

        self.shishimaru_tranx_x = shishimaru.transform.translation.x
        self.shishimaru_tranx_y = shishimaru.transform.translation.y
        self.shishimaru_rot_x = shishimaru.transform.rotation.x
        self.shishimaru_rot_y = shishimaru.transform.rotation.y
        self.shishimaru_rot_z = shishimaru.transform.rotation.z
        self.shishimaru_rot_w = shishimaru.transform.rotation.w

        self.dolly_tranx_x = dolly.transform.translation.x
        self.dolly_tranx_y = dolly.transform.translation.y
        self.dolly_rot_x = dolly.transform.rotation.x
        self.dolly_rot_y = dolly.transform.rotation.y
        self.dolly_rot_z = dolly.transform.rotation.z
        self.dolly_rot_w = dolly.transform.rotation.w

        self.shishimaru_angle_z = self.euler_from_quaternion(self.shishimaru_rot_x, self.shishimaru_rot_y, 
                                                             self.shishimaru_rot_z, self.shishimaru_rot_w)

        self.dolly_angle_z = self.euler_from_quaternion(self.dolly_rot_x, self.dolly_rot_y, 
                                                        self.dolly_rot_z, self.dolly_rot_w)


    def spin_this(self):

        while True:
        #if self.moved_to_spot:
            self.dock_to_dolly()

        #self.get_logger().warn("Docking Complete...")

def main():

    rclpy.init()
    dolly_docker = DockDolly()
    rclpy.spin(dolly_docker)

if __name__=='__main__':
    main()
