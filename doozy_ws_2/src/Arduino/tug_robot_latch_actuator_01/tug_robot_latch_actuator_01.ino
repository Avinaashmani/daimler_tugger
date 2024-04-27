int rise_latch = 4;
int lower_latch = 3;
int speed_control = 5;
void setup() {
  pinMode(rise_latch, OUTPUT);
  pinMode(lower_latch, OUTPUT);
  pinMode(speed_control, OUTPUT);
  
  // Initialize the pins
  digitalWrite(rise_latch, LOW);
  digitalWrite(lower_latch, LOW);
  analogWrite(speed_control, 0);
  
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  if (Serial.available() > 0) { // Check if there's data available to read
    char receivedChar = Serial.read(); // Read the incoming byte

    if (receivedChar == '1') {
      // Activate rise_latch
      digitalWrite(rise_latch, HIGH);
      
      digitalWrite(lower_latch, LOW);
      analogWrite(speed_control, 255);
      Serial.println("Rise latch activated");
    } else if (receivedChar == '0') {
      // Activate lower_latch
      digitalWrite(rise_latch, LOW);
      digitalWrite(lower_latch, HIGH);
      analogWrite(speed_control, 255);
      Serial.println("Lower latch activated");
    }
  }
}
