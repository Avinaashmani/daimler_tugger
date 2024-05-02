#!/usr/bin/env python3
import serial

output_start = 0
output_end = 3500
input_start = 0
input_end = -2000

def main():
    output = 0
    arduino = serial.Serial(port='/dev/ttyUSB0', baudrate=9600, timeout=0.1)
    while True:
        msg_read = arduino.readline().decode().strip()
        if msg_read == '':
            continue
        else:
            int_value = int(float(msg_read))
            # output = output_start + ((output_end - output_start) / (input_end - input_start)) * (int_value - input_start)
            
            print("Encoder output " ,abs(int_value))
            # print("Mapped Value ", output)

if __name__=='__main__':
    while True:
        main()

