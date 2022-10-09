#include <Arduino.h>
#include <Servo.h>
Servo myServo;

const int piezo = A0;
const int switchPin = 2;
const int yellowPin = 3;
const int greenPin = 4;
const int redPin = 5;

int knockVal;
int switchVal;

const int quietKnock = 10;
const int loudKnock = 100;

boolean locked = false;
int numberOfKnocks = 0;

boolean checkForKnock(int value){

  if(value > quietKnock && value < loudKnock){

    digitalWrite(yellowPin, HIGH);
    delay(50);
    digitalWrite(yellowPin, LOW);
    Serial.print("Valid knock of value");
    Serial.println(value);

    return(true);

  }

  else{

    Serial.print("Bad knock value");
    Serial.println(value);

    return false;

  }

}

void setup() {
  // put your setup code here, to run once:

  myServo.attach(9);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(switchPin, OUTPUT);
  Serial.begin(9600);

  digitalWrite(greenPin, HIGH);
  myServo.write(0);
  Serial.println("The box is unlocked!");
}

void loop() {
  // put your main code here, to run repeatedly:

  if(locked == false){
    switchVal = digitalRead(switchPin);
  }

  if(switchVal == HIGH){

    locked = true;
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    myServo.write(90);
    Serial.println("The box is locked!");
    delay(1000);

  }

  if(locked == true){

    knockVal = analogRead(piezo);

    if(numberOfKnocks < 3 && knockVal > 0){
      if(checkForKnock(knockVal) == true){
        numberOfKnocks++;
      }
      Serial.print(3-numberOfKnocks);
      Serial.print("More knocks to go!");
    }

  }

  if(numberOfKnocks >= 3){
    locked = false;
    myServo.write(0);
    delay(20);
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    Serial.println("The box is unlocked");
    numberOfKnocks = 0;
  }
}

