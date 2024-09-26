const int RLED = 11;
const int LIGHT=1;
const int MIN_LIGHT=200;
const int MAX_LIGHT=900;

int val = 0;

void setup() {
  
  //Serial.begin(9600);      // open the serial port at 9600 bps: 
  pinMode(RLED,OUTPUT);

}

void loop() {
  val = analogRead(LIGHT);
  val = map(val,MIN_LIGHT,MAX_LIGHT,255,0);
  val = constrain(val,0,255);
  analogWrite(RLED,val);
}
