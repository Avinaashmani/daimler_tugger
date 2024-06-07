#!/usr/bin/env python3

import rclpy
import math
from math import sqrt, pow, atan2
import time
from std_msgs.msg import Bool
from rclpy.node import Node
from rclpy.time import Time
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle
import tf2_ros
from geometry_msgs.msg import Twist
from doozy_actions.action import DollyDock
class DollyDocker(Node):

    def __init__(self):
        super().__init__("dolly_docker")

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.pub = self.create_publisher(Bool, "/dolly_docked", 10)
        self.docked = Bool()

        self.speed = Twist()

        self.move_tug = Twist()
        self.dolly_frame = "sick_visionary_t_mini"
        self.tb3_frame = "base_link"
        self.base_frame = "map"

        self.reached_goal = False

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', qos_profile=10)

        self.action_server = ActionServer(self, DollyDock, 'go_to_goal_client', self.tf_callback)
        self.tf_timer = None
        #self.create_timer(0.1, self.tf_callback)

    def tf_callback(self, goal_handle: ServerGoalHandle):

        try:
        
            tb3_transform = self.tf_buffer.lookup_transform(self.base_frame, self.tb3_frame, Time())
            dolly_transform = self.tf_buffer.lookup_transform(self.base_frame, 'sick_visionary_t_mini', Time())

            self.update_transforms(tb3_transform, dolly_transform)

            distance = math.fabs(sqrt(pow(self.dolly_trans_x - self.tb3_trans_x, 2) + pow(self.dolly_trans_y - self.tb3_trans_y, 2)))
            angle_difference = self.dolly_angle_z - self.tb3_angle_z
            distance_error = atan2(self.dolly_trans_y - self.tb3_trans_y, self.dolly_trans_x - self.tb3_trans_x)
            yaw_angle_error = atan2(self.dolly_trans_y - self.tb3_trans_y, self.dolly_trans_x - self.tb3_trans_x) - self.tb3_angle_z
            print("outside loop")
            if goal_handle.reached_point: 
                print("inside loop")
                if distance > 0.2:
                    print("---------------")
                    #print(distance)
                    #print(distance_error)
                    print(yaw_angle_error)
                    print("---------------")

                    self.docked.data = False
                    self.pub.publish(self.docked)

                    if abs(yaw_angle_error) > 0.15:

                        if abs(angle_difference) > 0.1:
                            if yaw_angle_error > 0.0:
                                self.move_tug.angular.z = 0.1
                            else:
                                self.move_tug.angular.z = -0.1
                                self.cmd_pub.publish(self.move_tug)
                    else:
                        self.move_tug.linear.x = 0.05
                    self.cmd_pub.publish(self.move_tug)
                else:
                    print("Goal Reached")
                    self.docked.data = True
                    self.pub.publish(self.docked)
                    self.cmd_pub.publish(self.move_tug)
                    self.move_tug.linear.x = 0.0
                    self.move_tug.angular.z = 0.0
                
                self.tf_timer = self.create_timer(3, self.stop_tf_timer)
            
            result = DollyDock.Result()
            result.docked_to_dolly = True
            self.get_logger().info(result)
                
        except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
            self.get_logger().warn("LookupException: {0}".format(str(e)))

    def stop_tf_timer(self):
        if self.tf_timer is not None:
            self.get_logger().warn("ON STAND BY MODE....")
            self.tf_timer.cancel()

    def update_transforms(self, tb3_transform, dolly_transform):
        self.tb3_trans_x = tb3_transform.transform.translation.x
        self.tb3_trans_y = tb3_transform.transform.translation.y
        self.tb3_rot_x = tb3_transform.transform.rotation.x
        self.tb3_rot_y = tb3_transform.transform.rotation.y
        self.tb3_rot_z = tb3_transform.transform.rotation.z
        self.tb3_rot_w = tb3_transform.transform.rotation.w

        self.dolly_trans_x = dolly_transform.transform.translation.x
        self.dolly_trans_y = dolly_transform.transform.translation.y
        self.dolly_rot_x = dolly_transform.transform.rotation.x
        self.dolly_rot_y = dolly_transform.transform.rotation.y
        self.dolly_rot_z = dolly_transform.transform.rotation.z
        self.dolly_rot_w = dolly_transform.transform.rotation.w

        self.tb3_angle_z = self.euler_from_quaternion(self.tb3_rot_x, self.tb3_rot_y,
                                                      self.tb3_rot_z, self.tb3_rot_w)

        self.dolly_angle_z = self.euler_from_quaternion(self.dolly_rot_x, self.dolly_rot_y,
                                                        self.dolly_rot_z, self.dolly_rot_w)

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
    dd = DollyDocker()
    rclpy.spin(dd)
    dd.destroy_node()
    rclpy.shutdown()

# if __name__ == '__main__':
#     main()

# import rclpy
# import math
# import time
# from math import sqrt, pow, atan2
# from std_msgs.msg import Bool
# from geometry_msgs.msg import Twist
# from rclpy.node import Node
# from rclpy.time import Time
# import tf2_ros

# class DollyDocker(Node):

#     def __init__(self):
#         super().__init__("dolly_docker")

#         self.tf_buffer = tf2_ros.Buffer()
#         self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

#         self.pub = self.create_publisher(Bool, "/dolly_docked", 10)
#         self.docked = Bool()

#         self.speed = Twist()

#         self.move_tug = Twist()
#         self.dolly_frame = "sick_visionary_t_mini"
#         self.tb3_frame = "base_link"
#         self.base_frame = "map"

#         self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', qos_profile=10)

#         self.create_timer(0.1, self.tf_callback)

#     def tf_callback(self):

#         try:
#             tb3_transform = self.tf_buffer.lookup_transform(self.base_frame, self.tb3_frame, Time())
#             dolly_transform = self.tf_buffer.lookup_transform(self.base_frame, 'sick_visionary_t_mini', Time())

#             self.update_transforms(tb3_transform, dolly_transform)

#             distance = math.fabs(sqrt(pow(self.dolly_trans_x - self.tb3_trans_x, 2) + pow(self.dolly_trans_y - self.tb3_trans_y, 2)))
#             angle_difference = self.dolly_angle_z - self.tb3_angle_z
#             distance_error = atan2(self.dolly_trans_y - self.tb3_trans_y, self.dolly_trans_x - self.tb3_trans_x)
#             yaw_angle_error = atan2(self.dolly_trans_y - self.tb3_trans_y, self.dolly_trans_x - self.tb3_trans_x) - self.tb3_angle_z

#             if distance > 0.2:
#                 self.docked.data = False
#                 self.pub.publish(self.docked)

#                 if abs(yaw_angle_error) > 0.15:
#                     if abs(angle_difference) > 0.1:
#                         if yaw_angle_error > 0.0:
#                             self.move_tug.angular.z = 0.1
#                         else:
#                             self.move_tug.angular.z = -0.1
#                         self.cmd_pub.publish(self.move_tug)
#                 else:
#                     self.move_tug.linear.x = 0.05
#                 self.cmd_pub.publish(self.move_tug)
#             else:
#                 print("Goal Reached")
#                 self.docked.data = True
#                 self.pub.publish(self.docked)
#                 self.cmd_pub.publish(self.move_tug)
#                 self.move_tug.linear.x = 0.0
#                 self.move_tug.angular.z = 0.0
                
#                 # Wait for 3 seconds after reaching the goal
#                 time.sleep(3)
                
#                 # Stop sending commands to align the robot
#                 self.cmd_pub.publish(Twist())
                
#         except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
#             self.get_logger().warn("LookupException: {0}".format(str(e)))

#     def update_transforms(self, tb3_transform, dolly_transform):
#         self.tb3_trans_x = tb3_transform.transform.translation.x
#         self.tb3_trans_y = tb3_transform.transform.translation.y
#         self.tb3_rot_x = tb3_transform.transform.rotation.x
#         self.tb3_rot_y = tb3_transform.transform.rotation.y
#         self.tb3_rot_z = tb3_transform.transform.rotation.z
#         self.tb3_rot_w = tb3_transform.transform.rotation.w

#         self.dolly_trans_x = dolly_transform.transform.translation.x
#         self.dolly_trans_y = dolly_transform.transform.translation.y
#         self.dolly_rot_x = dolly_transform.transform.rotation.x
#         self.dolly_rot_y = dolly_transform.transform.rotation.y
#         self.dolly_rot_z = dolly_transform.transform.rotation.z
#         self.dolly_rot_w = dolly_transform.transform.rotation.w

#         self.tb3_angle_z = self.euler_from_quaternion(self.tb3_rot_x, self.tb3_rot_y,
#                                                       self.tb3_rot_z, self.tb3_rot_w)

#         self.dolly_angle_z = self.euler_from_quaternion(self.dolly_rot_x, self.dolly_rot_y,
#                                                         self.dolly_rot_z, self.dolly_rot_w)

#     def euler_from_quaternion(self, x, y, z, w):
#         t0 = +2.0 * (w * x + y * z)
#         t1 = +1.0 - 2.0 * (x * x + y * y)
#         roll_x = math.atan2(t0, t1)

#         t2 = +2.0 * (w * y - z * x)
#         t2 = +1.0 if t2 > +1.0 else t2
#         t2 = -1.0 if t2 < -1.0 else t2
#         pitch_y = math.asin(t2)

#         t3 = +2.0 * (w * z + x * y)
#         t4 = +1.0 - 2.0 * (y * y + z * z)
#         yaw_z = math.atan2(t3, t4)

#         return yaw_z

# def main():
#     rclpy.init()
#     dd = DollyDocker()
#     rclpy.spin(dd)
#     dd.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()
