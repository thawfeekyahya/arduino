const int RED = 10;
const int GREEN = 9;
const int BLUE  = 8;

int rval = 127;
int bval = 255;
int gval = 127;

void setup() {
  Serial.begin(9600);
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
}

void loop(){
  while(Serial.available() > 0 ) {
    rval = Serial.parseInt();
    bval = Serial.parseInt();
    gval = Serial.parseInt();

    if(Serial.read() == '\n'){
      analogWrite(RED,rval);
      analogWrite(BLUE,bval);
      analogWrite(GREEN,gval);
    }
  }
}
