void setup() {
  pinMode(7, OUTPUT); // led
  pinMode(8, INPUT); // ir sensor

}

void loop() {
  if(digitalRead(8) == LOW){
    digitalWrite(7, HIGH);
  }
  else
    digitalWrite(7, LOW);
}
