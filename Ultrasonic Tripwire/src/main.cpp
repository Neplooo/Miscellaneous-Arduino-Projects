#include <Arduino.h>

//Ultrasonic Sensor
const int trigPin = 11;
const int echoPin = 10;

//Piezo
const int piezo = 9;

//Ultrasonic Sensor Data Storage
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:

  //Declares Input and Output:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(piezo, OUTPUT);

  //Serial Monitor
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.println(distance);

  if (distance < 70){

    tone(piezo, 1000);
    delay(2000);

  }
  else
  {

    noTone(piezo);

  }

}