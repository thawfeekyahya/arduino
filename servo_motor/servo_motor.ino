#include <Servo.h>

const int SERVO = 9;
const int POT   = 0;

Servo servoMotor;

int val = 0;


void setup() {
    servoMotor.attach(SERVO);
}

void loop() {

  val = analogRead(POT);
  val = map(val,0,1023,0,179);
  servoMotor.write(val);
  delay(15);
}
