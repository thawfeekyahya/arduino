const int POT = 1;
int val = 0;

void setup() {
  
  Serial.begin(9600);      // open the serial port at 9600 bps: 

}

void loop() {
  val = map(analogRead(POT),0,1023,0,255);
  Serial.println(val);
  delay(500);
}
