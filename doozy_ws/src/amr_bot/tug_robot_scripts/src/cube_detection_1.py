#!/usr/bin/env python3

## CUBE DETECTION AND TF CREATION BASED ON SIMPLE BLOB DETECTION ALGORITHM ##

import cv2 as cv
import numpy as np
import rospy
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image

class CubeIdentification:

    def __init__(self):

        self.camera_idx = 0
        
        self.detect_camera_feed()

    def detect_camera_feed(self):
        fpga = cv.bgsegm.createBackgroundSubtractorMOG()

        video = cv.VideoCapture(self.camera_idx)

        while True:

            _, frame = video.read()

            fg_mask = fpga.apply(frame)
            kernel = np.ones((10, 10), np.uint8)
            dilation = cv.dilate(fg_mask, kernel, iterations = 1)
            erosion = cv.erode(fg_mask, kernel, iterations = 1)

            contours, hierarchy = cv.findContours(fg_mask, cv.RETR_EXTERNAL,cv.CHAIN_APPROX_SIMPLE)

            for i in range (0, len(contours)):

                if (i % 1 == 0):
                    cnt = contours[i]

                    x, y, w, h = cv.boundingRect(cnt)
                    cv.drawContours(fg_mask, contours, -1, (255, 255, 0), 3)
                    cv.rectangle(fg_mask, (x, y), (x + w, y+h), (255, 0, 0), 2)


            cv.imshow('frame', fg_mask)
            cv.imshow('original', frame)

            if cv.waitKey(30) == ord('c'):
                break
        
def main():
    CubeIdentification()
if __name__=='__main__':
    main()
