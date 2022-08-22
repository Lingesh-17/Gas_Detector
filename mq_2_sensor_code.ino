int led = 13;
int buzzer = 11;
int mq2 = A0;
int analog_sensor;
int sensorThres = 400;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(mq2, INPUT);
  
}

void loop() {
  analog_sensor = analogRead(mq2);

  if (analog_sensor > sensorThres)
  {
    digitalWrite(led, 1);
    digitalWrite(buzzer, 1);
    delay(100);
    digitalWrite(led, 0);
    digitalWrite(buzzer, 0);
    delay(100);
  }
  else
  {
    digitalWrite(led, 0);
    digitalWrite(buzzer, 0);
  }
  delay(100);
}
