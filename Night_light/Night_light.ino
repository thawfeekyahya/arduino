const int RLED=9;
const int GLED=10;
const int BLED=11;

int RED_VALUE = 0;
int GREEN_VALUE = 0;
int BLUE_VALUE  = 0;

const int BUTTON=2;

int ledMode = 0;


int prev_state = LOW;
int curr_state = LOW;

enum COLOR {
  RED,
  BLUE,
  GREEN,
  YELLOW,
  PURPLE,
  ORANGE,
  WHITE,
  TEAL,
  OFF
};




void setMode(COLOR mode){

  switch(mode){
    case COLOR::RED:
        digitalWrite(RLED,HIGH);
        digitalWrite(BLED,LOW);
        digitalWrite(GLED,LOW);   
    break;
    case COLOR::BLUE:
        digitalWrite(RLED,LOW);
        digitalWrite(BLED,HIGH);
        digitalWrite(GLED,LOW);   
    break;
    case COLOR::GREEN:
        digitalWrite(RLED,LOW);
        digitalWrite(BLED,LOW);
        digitalWrite(GLED,HIGH);   
    break;
    case COLOR::YELLOW:
        analogWrite(RLED,255);
        analogWrite(BLED,255);
        analogWrite(GLED,127);   
    break;
    case COLOR::PURPLE:
        analogWrite(RLED,127);
        analogWrite(BLED,127);
        analogWrite(GLED,0);   
    break;
    case COLOR::ORANGE:
        analogWrite(RLED,127);
        analogWrite(BLED,0);
        analogWrite(GLED,127);   
    break;
    case COLOR::WHITE:
        digitalWrite(RLED,HIGH);
        digitalWrite(BLED,HIGH);
        digitalWrite(GLED,HIGH);   
    break;
    case COLOR::TEAL:
        analogWrite(RLED,HIGH);
        analogWrite(BLED,127);
        analogWrite(GLED,127);   
    break;
    case COLOR::OFF:
        digitalWrite(RLED,LOW);
        digitalWrite(BLED,LOW);
        digitalWrite(GLED,LOW);   
    break;
  }

}

void setup() {

  // put your setup code here, to run once:
  
  pinMode(RLED,OUTPUT);
  pinMode(GLED,OUTPUT);
  pinMode(BLED,OUTPUT);

  pinMode(BUTTON,INPUT);

  
//  Serial.begin(9600);      // open the serial port at 9600 bps: 



}

void loop() {
  // put your main code here, to run repeatedly:

  debounce();

  
 
  if(prev_state == LOW && curr_state == HIGH)  {
     ledMode++;
  }

  if(ledMode == 9) ledMode=0;
  setMode(ledMode);
}

void debounce() {
  curr_state = digitalRead(BUTTON);

  if(curr_state != prev_state) {
    delay(5);
    curr_state = digitalRead(BUTTON);

  }

}
