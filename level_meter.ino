int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin1 = 5;
int ledPin2 = 6;
int ledPin3 = 9;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPins as OUTPUTs:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on depending on rotation of potentiometer
  if (sensorValue >= 768)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
  }
  else if (sensorValue >= 512)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,LOW);
  }
  else if (sensorValue >= 256)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
  }
  else
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
}
