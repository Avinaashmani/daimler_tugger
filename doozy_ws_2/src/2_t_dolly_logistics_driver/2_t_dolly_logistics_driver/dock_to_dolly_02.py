#!/usr/bin/env python3

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
        super().__init__('dolly_dock')

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.dock_pub = self.create_publisher(Docking, 'dolly_dock_node', 10)
        self.cmd_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        self.create_subscription(Navigation, 'dolly_navigate_node', self.navigate_callback, 10)

        self.dolly_frame = 'dolly_01'
        self.source_frame = 'map'
        self.tb3_frame = 'base_link'

        self.tb3_x = 0.0
        self.tb3_y = 0.0
        self.tb3_angle_z = 0.0

        self.dolly_x = 0.0
        self.dolly_y = 0.0
        self.dolly_angle_z = 0.0

        self.navigate_flag = False
        self.dock_flag = False

        self.idx_number = ''
        self.navigate_err = ''

        self.move_tug = Twist()
        self.docking = Docking()
        self.navigate = Navigation()

        self.create_timer(0.1, self.dock_func)

    def dock_func(self):

        if self.navigate_flag:
            try:
                tb3_transform = self.tf_buffer.lookup_transform(self.source_frame, self.tb3_frame, Time())
                dolly_transform = self.tf_buffer.lookup_transform(self.source_frame, self.dolly_frame, Time())
                self.update_frame(tb3_frame=tb3_transform, target_frame=dolly_transform)

            except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
                self.get_logger().warn("LookupException: {0}".format(str(e)))
                pass
                
            distance = math.fabs(sqrt(pow(self.dolly_x - self.tb3_x, 2) + pow(self.dolly_y - self.tb3_y, 2)))
            angle_difference = self.dolly_angle_z - self.tb3_angle_z
            distance_error = atan2(self.dolly_y - self.tb3_y, self.dolly_x - self.tb3_x)
            yaw_angle_error = atan2(self.dolly_y - self.tb3_y, self.dolly_x - self.tb3_x) - self.tb3_angle_z

            if distance > 0.2:

                print("---------------")
                print(distance)
                print(distance_error)
                print(yaw_angle_error)
                print("---------------")

                self.docking.docked_to_target = False
                self.docking.angle_to_target = angle_difference
                self.docking.distance_to_target = distance
                self.dock_pub.publish(self.docking)

                if abs(yaw_angle_error) > 0.15:
                    if abs(angle_difference) > 0.1:
                        if yaw_angle_error > 0.0:
                            self.move_tug.angular.z = 0.1
                        else:
                            self.move_tug.angular.z = -0.1
                else:
                    self.move_tug.linear.x = 0.09
                self.cmd_pub.publish(self.move_tug)

            else:
                print("Goal Reached")
                self.docking.docked_to_target = True
                self.dock_pub.publish(self.docking)
                self.cmd_pub.publish(self.move_tug)
                self.move_tug.linear.x = 0.0
                self.move_tug.angular.z = 0.0
                self.dock_flag = False
        else:
            self.get_logger().warn("Navigation is still under process...")
                # Add a sleep to control the loop rate
    
    def update_frame(self, tb3_frame, target_frame):
        self.tb3_x = tb3_frame.transform.translation.x
        self.tb3_y = tb3_frame.transform.translation.y

        tb3_angle_x = tb3_frame.transform.rotation.x
        tb3_angle_y = tb3_frame.transform.rotation.y
        tb3_angle_z = tb3_frame.transform.rotation.z
        tb3_angle_w = tb3_frame.transform.rotation.w

        self.tb3_angle_z = self.euler_from_quaternion(tb3_angle_x, tb3_angle_y, 
                                                      tb3_angle_z, tb3_angle_w)
        
        self.dolly_x = target_frame.transform.translation.x
        self.dolly_y = target_frame.transform.translation.y

        dolly_angle_x = target_frame.transform.rotation.x
        dolly_angle_y = target_frame.transform.rotation.y
        dolly_angle_z = target_frame.transform.rotation.z
        dolly_angle_w = target_frame.transform.rotation.w

        self.dolly_angle_z = self.euler_from_quaternion(dolly_angle_x, dolly_angle_y, 
                                                        dolly_angle_z, dolly_angle_w)
        
    def navigate_callback(self, msg):
        self.idx_number = msg.idx_of_dolly
        self.navigate_flag = msg.moved_to_spot
        self.navigate_err = msg.error
        print(self.navigate_flag)

    def euler_from_quaternion(self, x, y, z, w):
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

        return yaw_z

def main():
    rclpy.init()
    docker = DockDolly()
    rclpy.spin(docker)
    rclpy.shutdown()

if __name__=='__main__':
    main()
