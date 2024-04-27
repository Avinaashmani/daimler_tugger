#include <EEPROM.h>

String to_serial;
String flag;

bool serial_port_flag = false;

void setup() {
  Serial.begin(9600);
  //Serial.println (EEPROM.read(0));
}

void loop() 
{
//  counter_program();
  serial_reader();
}

void counter_program()
{
  int value = EEPROM.read(0);
  int limit_value = 255;
  
  if (value == 255)
  {
      value = 0;
  }  
  serial_reader();
  
  while (value < limit_value)
  {
    value ++;
    EEPROM.update(0, value);
    
    to_serial = String(value);
    Serial.println(to_serial);

    delay (500);
  }
}

void serial_reader()
{
  flag = String(Serial.println (Serial.read()));  
}
