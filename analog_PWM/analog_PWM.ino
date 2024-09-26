const int LED=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i=0;
  for(i=0;i<255;i++) {
     analogWrite(LED,i);
     delay(4);
  }
  for(i=255;i>=0;i--){
    analogWrite(LED,i);
    delay(4);
  }

}
