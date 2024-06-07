#!/usr/bin/env python3

import rclpy
import math
import time
from math import sqrt, pow, atan2
from std_msgs.msg import Bool, String
from geometry_msgs.msg import PoseStamped
from rclpy.node import Node
from rclpy.time import Time

import tf2_ros

class Tugger(Node):
    
    def __init__(self):
        
        super().__init__('tugger_dock_system')
        
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        
        self.dock_msg = Bool()
        self.navigate_flag = False
        self.map_frame = PoseStamped()
        
        self.map_frame.pose.position.x = 0.0
        self.map_frame.pose.position.y = 0.0
        self.map_frame.pose.position.z = 0.0
        
        self.map_frame.pose.orientation.x = 0.0
        self.map_frame.pose.orientation.y = 0.0
        self.map_frame.pose.orientation.z = 0.0
        self.map_frame.pose.orientation.w = 1.0
        
        self.dolly_frame ="sick_visionary_t_mini"
        self.source_frame = "map"
        
        self.docked_pub = self.create_publisher(Bool, 'dock_topic', 10)
        self.create_subscription(Bool, 'navigation_topic', self.navigation_callback,10)
        
        self.dolly_x = 0.0
        self.dolly_y = 0.0
        self.dolly_angle_z = 0.0

        self.dock_flag = False
        
        self.create_timer(0.1, self.dock_func)
        
    def dock_func(self):
        
        if self.navigate_flag:
            
            try:
                dolly_transform = self.tf_buffer.lookup_transform(self.source_frame, self.dolly_frame, Time())
                self.update_frame(target_frame=dolly_transform)

            except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
                self.get_logger().warn("LookupException: {0}".format(str(e)))
                pass
            
            distance = math.fabs(sqrt(pow(self.dolly_x - self.map_frame.pose.position.x, 2) + pow(self.dolly_y - self.map_frame.pose.position.y, 2)))
            
            if distance > 0.4:

                print("---------------")
                print(distance)
                print("---------------")

                self.dock_msg.data = False
                self.docked_pub.publish(self.dock_msg)
            else:
                print("Goal Reached")
                self.dock_msg.data = True
                self.docked_pub.publish(self.dock_msg)

                self.dock_flag = False
        else:
            self.get_logger().warn("Navigation is still under process...")
            
    def update_frame(self, target_frame):
        
        self.dolly_x = target_frame.transform.translation.x
        self.dolly_y = target_frame.transform.translation.y

        dolly_angle_x = target_frame.transform.rotation.x
        dolly_angle_y = target_frame.transform.rotation.y
        dolly_angle_z = target_frame.transform.rotation.z
        dolly_angle_w = target_frame.transform.rotation.w

        self.dolly_angle_z = self.euler_from_quaternion(dolly_angle_x, dolly_angle_y, 
                                                        dolly_angle_z, dolly_angle_w)
          
    def navigation_callback(self, msg):
        self.navigate_flag = msg.data
        
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
        
def main():
    rclpy.init()
    tugger = Tugger()
    rclpy.spin(tugger)
    rclpy.shutdown()

if __name__=='__main__':
    main()