#include <Arduino.h>

#define ledPin 1 //LED
#define tempsense 2 //Motion Detector

int tempVal = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(tempsense, INPUT);

  Serial.begin(9600);

}

void loop()
{

  tempVal = analogRead(tempsense);

  Serial.print(tempVal);

  delay(1000);

  digitalWrite(ledPin, HIGH);

}