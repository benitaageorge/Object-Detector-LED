void setup() {
  pinMode(7, OUTPUT); // led
  pinMode(8, INPUT); // ir sensor
  pinMode(9, OUTPUT); // active buzzer

}

void loop() {
  if(digitalRead(8) == LOW){
    digitalWrite(7, HIGH);
    digitalWrite(9, LOW);
  }
  else{
    digitalWrite(7, LOW);
    digitalWrite(9, HIGH);
  }
}
