#!/usr/bin/env python3
import serial
import time

def main():
    arduino = serial.Serial(port='/dev/ttyUSB0', baudrate=9600, timeout=0.1)
    while True:
        msg_read = arduino.readline().decode().strip()
        print(msg_read)

if __name__=='__main__':
    while True:
        main()

