#include <Arduino.h>

int redPin= 4; //Red
int greenPin= 6; //Green
int bluePin= 5; //Blue
int button= 2; //Button

int mode= 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (redPin, OUTPUT);
  pinMode (greenPin, OUTPUT);
  pinMode (bluePin, OUTPUT);
  pinMode (button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == LOW) {
    mode = mode + 1;
    delay(400);
  }
  //Off
  if (mode == 0){
    analogWrite(redPin, 0);
    analogWrite(bluePin, 0);
    analogWrite(greenPin, 0);
  }
  //Red
  if (mode == 1){
    analogWrite(redPin, 255);
    analogWrite(bluePin, 0);
    analogWrite(greenPin, 0);
  }
  //Green
  if (mode == 2){
    analogWrite(redPin, 0);
    analogWrite(bluePin, 0);
    analogWrite(greenPin, 255);
  }
  //Blue
  if (mode == 3){
    analogWrite(redPin, 0);
    analogWrite(bluePin, 255);
    analogWrite(greenPin, 0);
  }
  //Yellow
  if (mode == 4){
    analogWrite(redPin, 255);
    analogWrite(bluePin, 0);
    analogWrite(greenPin, 255);
  }
  //Cyan
  if (mode == 5){
    analogWrite(redPin, 0);
    analogWrite(bluePin, 255);
    analogWrite(greenPin, 255);
  }
  //Purple
  if (mode == 6){
    analogWrite(redPin, 255);
    analogWrite(bluePin, 255);
    analogWrite(greenPin, 0);
  }
  //White
  if (mode == 7){
    analogWrite(redPin, 255);
    analogWrite(bluePin, 255);
    analogWrite(greenPin, 255);
  }

  //Switch Off
  if (mode == 8){
  mode == 0;
  }
}