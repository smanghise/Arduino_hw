void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
}
