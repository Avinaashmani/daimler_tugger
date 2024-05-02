import serial

# Open a serial connection
ser = serial.Serial('/dev/ttyUSB0', 9600)  # Adjust port name as needed

try:
    while True:
        # Read a line of data from the serial port
        data = ser.readline().decode().strip()
        encoder_value = int(data)
        if encoder_value > 0:
            serial.write(b'1')
            
            print("Moving motor ccw...")
        if encoder_value < 0:
            ArduinoSerial.write(b'5')
            print("Moving motor cw...")    
        elif encoder_value == 0:
             ArduinoSerial.write(b'7')
            print("Stopping motor...")
          
        
        print("Received:", data)

except KeyboardInterrupt:
   
    ser.close()

