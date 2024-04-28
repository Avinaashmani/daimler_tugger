#!/usr/bin/env python

import rospy
import math
import tf2_ros
from math import sqrt, pow, atan2
from std_msgs.msg import Bool, String
from geometry_msgs.msg import Twist

class DockDolly:

    def __init__(self):
        rospy.init_node('dolly_dock')

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer)

        self.dock_pub = rospy.Publisher('dolly_dock_node', Bool, queue_size=10)
        self.cmd_pub = rospy.Publisher('cmd_vel', Twist, queue_size=10)
        rospy.Subscriber('dock_topic', Bool, self.gui_callback)
        rospy.Subscriber('navigation_topic', Bool, self.navigation_callback)

        self.dolly_frame = ''
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

        self.move_tug = Twist()
        self.docking = Bool()
        self.navigate = Bool()

        rospy.Timer(rospy.Duration(0.1), self.dock_func)

    def dock_func(self, event):

        if self.navigate_flag and self.dolly_frame != '0':
            try:
                tb3_transform = self.tf_buffer.lookup_transform(self.source_frame, self.tb3_frame, rospy.Time())
                dolly_transform = self.tf_buffer.lookup_transform(self.source_frame, self.dolly_frame, rospy.Time())
                self.update_frame(tb3_frame=tb3_transform, target_frame=dolly_transform)

            except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
                rospy.logwarn("LookupException: {0}".format(str(e)))
                pass
                
            distance = math.fabs(sqrt(pow(self.dolly_x - self.tb3_x, 2) + pow(self.dolly_y - self.tb3_y, 2)))
            angle_difference = self.dolly_angle_z - self.tb3_angle_z
            distance_error = atan2(self.dolly_y - self.tb3_y, self.dolly_x - self.tb3_x)
            yaw_angle_error = atan2(self.dolly_y - self.tb3_y, self.dolly_x - self.tb3_x) - self.tb3_angle_z

            if distance > 0.2:
                rospy.loginfo("---------------")
                rospy.loginfo(distance)
                rospy.loginfo(distance_error)
                rospy.loginfo(yaw_angle_error)
                rospy.loginfo("---------------")

                self.docking.docked_to_target = False
                self.docking.angle_to_target = angle_difference
                self.docking.distance_to_target = distance
                self.dock_pub.publish(self.docking)

                if abs(yaw_angle_error) > 0.15:
                    if abs(angle_difference) > 0.1:
                        if yaw_angle_error > 0.0:
                            self.move_tug.angular.z = 0.2
                        else:
                            self.move_tug.angular.z = -0.2
                else:
                    self.move_tug.linear.x = 0.07
                self.move_tug.linear.x = 0.0
                self.move_tug.angular.z = 0.0
                self.cmd_pub.publish(self.move_tug)

            else:
                rospy.loginfo("Goal Reached")
                self.docking.docked_to_target = True
                self.dock_pub.publish(self.docking)
                self.cmd_pub.publish(self.move_tug)
                self.move_tug.linear.x = 0.0
                self.move_tug.angular.z = 0.0
                self.dock_flag = False
        else:
            rospy.logwarn("Navigation is still under process...")
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
        
    def gui_callback(self, msg):
        self.navigate_flag = msg.data
        rospy.loginfo(self.navigate_flag)

    def navigation_callback(self, msg):
        self.dolly_frame = msg.idx_of_dolly
        rospy.loginfo(self.dolly_frame)

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

if __name__ == '__main__':
    try:
        docker = DockDolly()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass
