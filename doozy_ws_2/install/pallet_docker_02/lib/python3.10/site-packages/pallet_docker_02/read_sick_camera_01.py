#!/usr/bin/env python3 

import rclpy

import requests
import json

respond = requests.get("http://192.168.1.10/api/detectionResult") 
print(respond)

Dolly = respond.json()['data']['detectionResult']['dollyFound']
leftCorner = respond.json()['data']['detectionResult']['leftCorner']
#centerPoint = respond.json()['data']['detectionResult']['centerPoint']
rightCorner = respond.json()['data']['detectionResult']['rightCorner']
#angle = respond.json()['data']['detectionResult']['Angle']

if Dolly == True:
    print('Pallet Found !!! ')

else : print('Pallet Not Found ??? ')

# print('Pallet =',Pallet)
print('Left Pocket ',leftCorner)
#print('Center Pocket',centerPoint)
print('Right Pocket',rightCorner)
#print('Angle',angle)