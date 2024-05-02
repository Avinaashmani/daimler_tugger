#!/usr/bin/env python3 

import rospy
from daimler_tugger.srv import daimler_service_call, daimler_service_callResponse

def send_request(x, y):

    rospy.wait_for_service('docking_undocking', daimler_service_call)

    try:
        send_request_tugger = rospy.ServiceProxy('docking_undocking', daimler_service_call)
        resp = send_request_tugger(True, False)
        return resp
    except rospy.ServiceException as e:
        print(e)
if __name__=='__main__':
    rospy.init_node('send_docking_request')
    dock_ = True
    undock_ = True

    send_request(dock_, undock_)