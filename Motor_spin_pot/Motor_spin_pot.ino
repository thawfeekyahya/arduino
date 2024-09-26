const int MOTOR = 10;
int val = 0;
const int POT=0;

void setup() {

  pinMode(MOTOR,OUTPUT);
  //Serial.begin(9600);      // open the serial port at 9600 bps: 

}

void loop() {
  val = analogRead(POT);
  val = map(val,0,1023,0,255);
  analogWrite(MOTOR,val);
}
