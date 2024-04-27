#include <EEPROM.h>

String to_serial;

bool serial_port_flag = false;

void setup() {
  Serial.begin(9600);
  //Serial.println (EEPROM.read(0));
}

void loop() 
{
  counter_program();

}

void counter_program()
{
  int value = EEPROM.read(0);
  int limit_value = 255;

      
  if (value == 255)
  {
      value = 0;
  }  
  
  while (value < limit_value)
  {
    value ++;
    EEPROM.update(0, value);
    
    to_serial = String(value);
    Serial.println(to_serial);

    delay (500);
  }

}
