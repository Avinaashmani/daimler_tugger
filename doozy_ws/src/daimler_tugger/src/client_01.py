#!/usr/bin env python3

import rospy
from daimler_tugger.srv import DaimlerServiceCall, DaimlerServiceCallRequest
from std_msgs.msg import Bool

def service_caller(dock, undock):

    rospy.wait_for_service('dock_undock_service')

    try:
        tugger_servcie = rospy.Service('dock_undock_service', 
                                       DaimlerServiceCall)
        
        req = DaimlerServiceCallRequest()
        req.Set_Dock_State = dock
        req.Set_Undock_State = undock

        response = tugger_servcie(req)
        rospy.loginfo(response.result)
        return response

    except rospy.ServiceException as e:
        rospy.logwarn(e)

if __name__=='__main__':

    try:
        while not rospy.is_shutdown():
            rospy.init_node('tugger_service')
            service_caller(True, False)
    except rospy.ROSInternalException as e:
        rospy.logwarn(e)
        rospy.on_shutdown(e)