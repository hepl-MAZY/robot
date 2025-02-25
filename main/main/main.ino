#include "lib/Driver/Driver.h"

// ============================
//     GLOBAL DEFINITIONS
// ============================
#define MOTOR_LEFT_IN1 9
#define MOTOR_LEFT_IN2 10
#define MOTOR_RIGHT_IN1 11
#define MOTOR_RIGHT_IN2 12
#define MOTOR_SPEED 76

// ============================
//     OBJECT INSTANTIATION
// ============================
Driver motor(MOTOR_LEFT_IN1, MOTOR_LEFT_IN2, MOTOR_RIGHT_IN1, MOTOR_RIGHT_IN2);


// ============================
//          SETTINGS
// ============================
void setup() {
  Serial.begin(9600);
}

// ============================
//         MAIN LOOP
// ============================
void loop() {
  
}

// ============================
//          FUNCTIONS
// ============================
void testSteering(){
  motor.rampForwardLEFT(MOTOR_SPEED); 
  delay(1000);
  motor.stopLEFT(MOTOR_SPEED);
  motor.rampBackwardRIGHT(MOTOR_SPEED);
  delay(1000);
  motor.stopRIGHT(MOTOR_SPEED);
}