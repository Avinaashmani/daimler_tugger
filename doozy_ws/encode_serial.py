#!/usr/bin/env python3
import serial

# Open a serial connection
ser = serial.Serial('/dev/ttyUSB0', 9600)  # Adjust port name as needed

try:
    while True:
        # Read a line of data from the serial port
        data = ser.readline().decode().strip()
        print("Received:", data)

except KeyboardInterrupt:
   
    ser.close()

