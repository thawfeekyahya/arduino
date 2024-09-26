const int MOTOR = 10;
int val = 0;

void setup() {

  pinMode(MOTOR,OUTPUT);
  //Serial.begin(9600);      // open the serial port at 9600 bps: 

}

void loop() {
  int i=0;
  for(i=0;i<255;i++) {
    analogWrite(MOTOR,i);
    delay(10);
  }
  delay(2000);
  for(i=255;i>=0;i--){
    analogWrite(MOTOR,i);
    delay(10);
  }
  delay(2000);
}
