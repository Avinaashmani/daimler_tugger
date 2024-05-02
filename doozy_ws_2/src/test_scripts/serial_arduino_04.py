#!/usr/bin/env python3

import serial
import time

encoder_serial_port = '/dev/ttyUSB0'
motor_serial_port = '/dev/ttyUSB1'  # Change this to your Arduino's serial port
baud_rate = 9600

def main():

    while True:
        motor_ser = serial.Serial(motor_serial_port, baud_rate)
        enc_ser = serial.Serial(encoder_serial_port, baud_rate)
        data_to_send = "<1#87687>\n"

        motor_ser.write(data_to_send.encode())
        # response = motor_ser.readline().decode().strip()
        encoder_response = enc_ser.readline().decode().strip()

        print("Response from Encoder: ", encoder_response)

if __name__=='__main__':
    while True:
        main()
