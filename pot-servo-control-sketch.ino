#include <Servo.h>

Servo myservo;
int potPin = A0;
int value = 0;

void setup()
{
    myservo.attach(9);
    pinMode(potPin, INPUT);
}

void loop()
{
  
  value = analogRead(potPin);

  value = map(value, 0, 1023, 0, 180);
    myservo.write(value);
  
    delay(10);
}