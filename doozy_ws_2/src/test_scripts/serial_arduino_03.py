#!/usr/bin/env python3

import serial
import time

encoder_port = '/dev/ttyUSB0'
tug_port = '/dev/ttyUSB1'
baud_rate = 9600

encoder_serial = serial.Serial(encoder_port, baudrate=baud_rate, timeout=0.1)
tug_motor_serial = serial.Serial(tug_port, baudrate=baud_rate, timeout=0.1)

initial_position_recorded = False
initial_value = 0

final_position_recorded = False
final_value = 0


output_start = 0
output_end = 100
input_start = 0
input_end = 2100

tug_start = 'A'
tug_turn_back = 'B'
tug_stop = 'S'

def main():
    flag_begun = 1
    flag = False

    while True:

        encoder_data = encoder_serial.readline().decode().strip()
        
        if encoder_data == '':
            continue
        
        else:
            
            encoder_data_int = int (encoder_data)
            output = abs(int(output_start + ((output_end - output_start) / (input_end - input_start)) * (encoder_data_int - input_start)))
            
            print ("Encoder",encoder_data_int)

            print('Mapped: ', output)
            difference = (1000 - abs(encoder_data_int))
            print (difference)
            
            if difference > 0:

                if abs(difference) > 25:
                    tug_motor_serial.write(tug_turn_back.encode('ascii'))

                    if abs(difference) <= 25:
                        tug_motor_serial.write(tug_stop.encode('ascii'))
                else:
                    tug_motor_serial.write(tug_stop.encode('ascii'))
            
            elif difference < 0:
                if abs(difference) > 25:
                    tug_motor_serial.write(tug_start.encode('ascii'))
                
                    if output <= 25:
                        tug_motor_serial.write(tug_stop.encode('ascii'))
                else:
                    tug_motor_serial.write(tug_stop.encode('ascii'))

if __name__ == '__main__':
    while True:
        main()