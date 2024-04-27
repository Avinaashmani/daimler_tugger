#!/usr/bin/env python3 

import rospy
import actionlib
import tf
import math
import numpy as np
from std_msgs.msg import String
from geometry_msgs.msg import Twist, Point, Quaternion
from dolly_action_msgs.msg import amrDockAction, amrDockResult
from math import radians, copysign, sqrt, pow, pi, atan2
from tf.transformations import euler_from_quaternion


class DockToDolly:

    def __init__(self):

        rospy.init_node('dolly_docking')
        rospy.loginfo ("docking to dolly node has begun :))")
        
        self.base_frame = '/map'
        self.dock_tf = tf.TransformListener()
        self.robot_tf = tf.TransformListener()

        self.cmd_velocity_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=10.0)
        self.docking_server = actionlib.SimpleActionServer('amr_docking_srv', amrDockAction, self.align_robot, False)
        self.docking_server.start()

        self.x_dolly = 0.0
        self.y_dolly = 0.0
        self.z_dolly_angle = 0.0

        self.robot_position = Point()
        self.dolly_poistion = Point()

        self.robot_angle = Quaternion()
        self.dolly_angle = Quaternion()

    def align_robot(self, goal):
        global flag 
        global docking_frame

        flag = True
        rospy.loginfo("Received alignment request.")
        docking_id = goal.pallet_idx
        
        if docking_id == '1':
            docking_frame = '/dolly_01'

        elif docking_id == '2':
             docking_frame = '/dolly_02'

        else:
            docking_frame = '/charger'
        
        try:
            self.dock_tf.waitForTransform(self.base_frame, docking_frame, rospy.Time(), rospy.Duration(1))
            self.robot_tf.waitForTransform(self.base_frame, '/base_link', rospy.Time(), rospy.Duration(1))

            (dolly_trans, dolly_rot) = self.dock_tf.lookupTransform(self.base_frame, docking_frame, rospy.Time(0))
            (robot_trans, robot_rot) = self.robot_tf.lookupTransform(self.base_frame, '/base_link', rospy.Time(0))

            self.robot_position.x = robot_trans[0]
            self.robot_position.y = robot_trans[1]

            self.dolly_poistion.x = dolly_trans[0]
            self.dolly_poistion.y = dolly_trans[1]

            self.robot_angle = self.euler_from_quaternion(robot_rot[0], robot_rot[1], robot_rot[2], robot_rot[3])
            self.dolly_angle.z = self.euler_from_quaternion(dolly_rot[0], dolly_rot[1], dolly_rot[2], dolly_rot[3])

        except(tf.Exception, tf.ExtrapolationException, tf.LookupException, tf.ConnectivityException):
            rospy.logwarn(f"Tf Exception {docking_frame}")

        #print(docking_frame)
        #print(self.x_robot)
        #print(self.x_dolly)
 
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
     
        return np.rad2deg(yaw_z) 
    
if __name__ == '__main__':
    try:
        dock_server = DockToDolly()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass
