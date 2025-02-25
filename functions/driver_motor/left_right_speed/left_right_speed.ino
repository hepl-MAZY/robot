/*MOTOR steering left and right 30% speed 
IN1: DIRECTION PIN (LOW = FORWARD)
IN2: SPEED PWM PIN
*/
#define MOTOR_LEFT_IN1 9
#define MOTOR_LEFT_IN2 10

#define MOTOR_RIGHT_IN1 11
#define MOTOR_RIGHT_IN2 12

#define MOTOR_SPEED 76

void setup() {
  pinMode(MOTOR_LEFT_IN1, OUTPUT);
  pinMode(MOTOR_LEFT_IN2, OUTPUT);
  pinMode(MOTOR_RIGHT_IN1, OUTPUT);
  pinMode(MOTOR_RIGHT_IN2, OUTPUT);
}

void loop(){
  testSteering();
}

void testSteering(){
  rampForwardLEFT(MOTOR_SPEED);
  delay(1000);
  stopLEFT(MOTOR_SPEED);
  rampBackwardRIGHT(MOTOR_SPEED);
  delay(1000);
  stopRIGHT(MOTOR_SPEED);
}

void rampForwardLEFT(int pwmSpeed){
  digitalWrite(MOTOR_LEFT_IN1, LOW); 
  digitalWrite(MOTOR_LEFT_IN2, HIGH); 
  
  for (int i = 0; i <= pwmSpeed; i++) {
    analogWrite(MOTOR_LEFT_IN2, i); 
    delay(10);
  }
}

void stopLEFT(int pwmSpeed){
  for (int i = pwmSpeed; i >= 0; i--) {
    analogWrite(MOTOR_LEFT_IN2, i);    //Gradually decrease speed
    delay(10);
  }
  digitalWrite(MOTOR_LEFT_IN2, LOW);   //Fully stop the motor
}

void rampBackwardLEFT(int pwmSpeed) {
  digitalWrite(MOTOR_LEFT_IN2, LOW); 
  digitalWrite(MOTOR_LEFT_IN1, HIGH);  // Set direction backward

  for (int i = 0; i <= pwmSpeed; i++) {
    analogWrite(MOTOR_LEFT_IN1, i);  
    delay(10);
  }
}

void rampForwardRIGHT(int pwmSpeed){
  digitalWrite(MOTOR_RIGHT_IN1, LOW);  
  digitalWrite(MOTOR_RIGHT_IN2, HIGH);
  
  for (int i = 0; i <= pwmSpeed; i++) {
    analogWrite(MOTOR_RIGHT_IN2, i); 
    delay(10);
  }
}

void stopRIGHT(int pwmSpeed){
  for (int i = pwmSpeed; i >= 0; i--) {
    analogWrite(MOTOR_RIGHT_IN2, i);
    delay(10);
  }
  
  digitalWrite(MOTOR_RIGHT_IN2, LOW);
}

void rampBackwardRIGHT(int pwmSpeed){
  digitalWrite(MOTOR_RIGHT_IN2, LOW); 
  digitalWrite(MOTOR_RIGHT_IN1, HIGH); 

  for (int i = 0; i <= pwmSpeed; i++) {
    analogWrite(MOTOR_RIGHT_IN1, i);    
    delay(10);
  }
}

