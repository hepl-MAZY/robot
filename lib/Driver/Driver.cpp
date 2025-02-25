#include "Driver.h"

//Constructor
Driver::Driver(int leftIn1, int leftIn2, int rightIn1, int rightIn2) {
  _leftIn1 = leftIn1;
  _leftIn2 = leftIn2;
  _rightIn1 = rightIn1;
  _rightIn2 = rightIn2;

  pinMode(_leftIn1, OUTPUT);
  pinMode(_leftIn2, OUTPUT);
  pinMode(_rightIn1, OUTPUT);
  pinMode(_rightIn2, OUTPUT);
}

void Driver::rampForwardLEFT(int pwmSpeed) {
  digitalWrite(_leftIn1, LOW);
  digitalWrite(_leftIn2, HIGH);

  for (int i = 0; i <= pwmSpeed; i++) {
    analogWrite(_leftIn2, i);
    delay(10);
  }
}

// Stop LEFT
void Driver::stopLEFT(int pwmSpeed) {
  for (int i = pwmSpeed; i >= 0; i--) {
    analogWrite(_leftIn2, i);
    delay(10);
  }
  digitalWrite(_leftIn2, LOW);
}

void Driver::rampBackwardLEFT(int pwmSpeed) {
  digitalWrite(_leftIn2, LOW);
  digitalWrite(_leftIn1, HIGH);

  for (int i = 0; i <= pwmSpeed; i++) {
    analogWrite(_leftIn1, i);
    delay(10);
  }
}


void Driver::rampForwardRIGHT(int pwmSpeed) {
  digitalWrite(_rightIn1, LOW);
  digitalWrite(_rightIn2, HIGH);

  for (int i = 0; i <= pwmSpeed; i++) {
    analogWrite(_rightIn2, i);
    delay(10);
  }
}

void Driver::stopRIGHT(int pwmSpeed) {
  for (int i = pwmSpeed; i >= 0; i--) {
    analogWrite(_rightIn2, i);
    delay(10);
  }
  digitalWrite(_rightIn2, LOW);
}

void Driver::rampBackwardRIGHT(int pwmSpeed) {
  digitalWrite(_rightIn2, LOW);
  digitalWrite(_rightIn1, HIGH);

  for (int i = 0; i <= pwmSpeed; i++) {
    analogWrite(_rightIn1, i);
    delay(10);
  }
}
