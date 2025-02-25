//MOTOR steering left right slow
#define MOTOR_LEFT_IN1 9
#define MOTOR_LEFT_IN2 10

#define MOTOR_RIGHT_IN1 11
#define MOTOR_RIGHT_IN2 12

#define MAX_MOTOR_SPEED 76

void setup() {
  pinMode(MOTOR_LEFT_IN1, OUTPUT);
  pinMode(MOTOR_LEFT_IN2, OUTPUT);
  pinMode(MOTOR_RIGHT_IN1, OUTPUT);
  pinMode(MOTOR_RIGHT_IN2, OUTPUT);
}

void loop() {
  //Motor steering left right slowly with delay 1s
  rampForwardLEFT();
  delay(2000);
  rampDownLEFT();
  delay(1000);
  rampForwardRIGHT();
  delay(2000);
  rampDownRIGHT();
  delay(1000);
}


void rampForwardLEFT(){
  digitalWrite(MOTOR_LEFT_IN1, LOW);
  for (int i=0; i<=MAX_MOTOR_SPEED; i++) {
  analogWrite(MOTOR_LEFT_IN2, i);
  delay(10);
  }
}

void rampDownLEFT(){
  for (int i=MAX_MOTOR_SPEED; i>=0; i--) {
  analogWrite(MOTOR_LEFT_IN2, i);
  delay(10);
  }
}

void rampBackwardLEFT(){
  digitalWrite(MOTOR_LEFT_IN2, LOW);
  for (int i=0; i<=MAX_MOTOR_SPEED; i++) {
  analogWrite(MOTOR_LEFT_IN1, i);
  delay(10);
  }
}


void rampForwardRIGHT(){
  digitalWrite(MOTOR_RIGHT_IN1, LOW);
  for (int i=0; i<=MAX_MOTOR_SPEED; i++) {
  analogWrite(MOTOR_RIGHT_IN2, i);
  delay(10);
  }
}

void rampDownRIGHT(){
  for (int i=MAX_MOTOR_SPEED; i>=0; i--) {
  analogWrite(MOTOR_RIGHT_IN2, i);
  delay(10);
  }
}

void rampBackwardRIGHT(){
  digitalWrite(MOTOR_RIGHT_IN2, LOW);
  for (int i=0; i<=MAX_MOTOR_SPEED; i++) {
  analogWrite(MOTOR_RIGHT_IN1, i);
  delay(10);
  }
}