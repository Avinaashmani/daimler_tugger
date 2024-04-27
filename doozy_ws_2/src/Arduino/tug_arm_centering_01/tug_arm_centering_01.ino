int tug_arm_cw = 4;
int tug_arm_ccw = 3;
int speed_control = 5;

void setup() {
 pinMode(tug_arm_cw, OUTPUT);
 pinMode(tug_arm_ccw, OUTPUT);
 pinMode(speed_control, OUTPUT);

 digitalWrite(tug_arm_cw, HIGH);
 digitalWrite(tug_arm_ccw, LOW);
 analogWrite(speed_control, 130);
 
 delay(3000);
 
 digitalWrite(tug_arm_cw, LOW);
 digitalWrite(tug_arm_ccw, LOW);
 analogWrite(speed_control, 0);
}

void loop() 
{
  
}

 
