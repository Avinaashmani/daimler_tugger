#!/usr/bin/env python3

import serial
import time

port = '/dev/ttyUSB0'
baudrate = 9600

try:
    arduino_nano = serial.Serial(port=port, baudrate=baudrate, timeout=0)
    time.sleep(2)  # Wait for Arduino to initialize

    def read_from():
        print(f"Opening port {port} with baudrate {baudrate}")
        while True:
            try:
                # Read data from Arduino
                line = arduino_nano.readline().decode().strip()
                print(line)
            except serial.serialutil.SerialException:
                # Handle serial errors
                print("Serial exception occurred. Reconnecting...")
                arduino_nano.close()
                time.sleep(2)
                arduino_nano.open()

    if __name__ == '__main__':
        read_from()

except serial.serialutil.SerialException:
    print(f"Failed to open port {port}. Check the connection and try again.")
