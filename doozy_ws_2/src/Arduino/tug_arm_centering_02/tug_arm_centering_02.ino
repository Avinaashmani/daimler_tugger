int tug_arm_cw = 3;
int tug_arm_ccw = 4;
int speed_control = 5;

bool flag = false;

void setup() 
{

 Serial.begin(9600);
 
 pinMode (tug_arm_cw, OUTPUT);
 pinMode (tug_arm_ccw, OUTPUT);
 pinMode (speed_control, OUTPUT);
}

void loop() 
{
   if (Serial.available() > 0)
 {
  char recieved_flag = Serial.read();
  if (recieved_flag == '1')
  {
    turn_tug();
  }

  else if (recieved_flag == '0')
  {  
    digitalWrite(tug_arm_cw, LOW);
    digitalWrite(tug_arm_ccw, LOW);
    analogWrite(speed_control, 0);
  }

 }
}

void turn_tug()
{

 digitalWrite(tug_arm_cw, LOW);
 digitalWrite(tug_arm_ccw, HIGH);
 analogWrite(speed_control, 125);
 
 delay(1000);

// Serial.println ("1");

 digitalWrite(tug_arm_cw, HIGH);
 digitalWrite(tug_arm_ccw, HIGH);
 analogWrite(speed_control, 0);

 Serial.println ("1");
 
}
