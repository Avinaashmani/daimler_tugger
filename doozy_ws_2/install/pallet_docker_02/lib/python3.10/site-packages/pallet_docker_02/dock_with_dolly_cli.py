#!/usr/bin/env python3

import rclpy
import tf2_ros
import math
from rclpy.node import Node
from rclpy.clock import Clock 
from math import radians, copysign, sqrt, pow, pi, atan2
from rclpy.qos import QoSHistoryPolicy, QoSProfile, QoSReliabilityPolicy
from std_msgs.msg import String, Bool
from geometry_msgs.msg import PoseStamped, Twist
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult


import math

class DollyDocker(Node):

    def __init__(self):
        super().__init__("dolly_docker")

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        self.cmd_velocity = Twist()

        self.cmd_pub = self.create_publisher(Twist, '/cmd_velocityocity', qos_profile=10)
        self.timer = self.create_timer(1.0, self.dock_to_dolly)
        self.now = Clock().now()

    
    def dock_to_dolly(self):

        prev_dist = 0.0
        total_distance = 0.0

        total_angle = 0.0
        previous_angle = 0.0
        
        try:
            robot_transform = self.tf_buffer.lookup_transform("odom", "base_link", rclpy.time.Time())
            dolly_transform = self.tf_buffer.lookup_transform("odom", "dolly_01", rclpy.time.Time())

            robot_x = robot_transform.transform.translation.x
            robot_y = robot_transform.transform.translation.y

            dolly_x = dolly_transform.transform.translation.x
            dolly_y = dolly_transform.transform.translation.y
            print("Here 1")
            self.get_logger().info("Robot position (x, y): {:.2f}, {:.2f}".format(robot_x, robot_y))
            self.get_logger().info("Dolly position (x, y): {:.2f}, {:.2f}".format(dolly_x, dolly_y))

            robot_x = robot_transform.transform.translation.x
            robot_y = robot_transform.transform.translation.y
            robot_angle = self.euler_from_quaternion(robot_transform.transform.rotation.x, robot_transform.transform.rotation.y,
                                                     robot_transform.transform.rotation.z, robot_transform.transform.rotation.w)
            
            dolly_x = dolly_transform.transform.translation.x 
            dolly_y = dolly_transform.transform.translation.y
            dolly_angle = self.euler_from_quaternion(dolly_transform.transform.rotation.x, dolly_transform.transform.rotation.y,
                                                     dolly_transform.transform.rotation.z, dolly_transform.transform.rotation.w)
            
            last_rotation = 0
            linear_speed = 1 
            angular_speed = 1

            dolly_distance = sqrt(pow(dolly_x - robot_x, 2) + pow ((dolly_y - robot_y), 2))
            distance = dolly_distance

            while distance > 0.05:

                path_angle = atan2(dolly_y - robot_y, dolly_x - robot_x)

            if path_angle < -pi/4 or path_angle > pi/4:
                if dolly_y < 0 and robot_y < dolly_y:
                    path_angle = -2*pi + path_angle
                elif dolly_y >= 0 and robot_y > dolly_y:
                    path_angle = 2*pi + path_angle
            if last_rotation > pi-0.1 and rotation <= 0:
                rotation = 2*pi + rotation
            elif last_rotation < -pi+0.1 and rotation > 0:
                rotation = -2*pi + rotation

            self.cmd_velocity.angular.z = angular_speed * path_angle-rotation
            self.cmd_velocity.linear.x = min(linear_speed * distance, 0.1)


            if self.cmd_velocity.angular.z > 0:
                self.cmd_velocity.angular.z = min(self.cmd_velocity.angular.z, 1.5)
            else:
                self.cmd_velocity.angular.z = max(self.cmd_velocity.angular.z, -1.5)
            
            last_rotation = rotation
            self.cmd_pub.publish(self.cmd_velocity)
            self.get_logger().info("Docking Completed ...")

            return True
        
        except tf2_ros.ExtrapolationException as e:
            pass

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
     
        return  yaw_z 

def main():
    rclpy.init()
    dd = DollyDocker()
    rclpy.spin(dd)
    dd.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
