#include "pitches.h"


const int SPEAKER = 10;

#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_G 392
#define NOTE_A 440

const int BUTTON_C = 7;
const int BUTTON_D = 6;
const int BUTTON_E = 5;
const int BUTTON_G = 4;
const int BUTTON_A = 3;

void setup() {
      Serial.begin(9600);      // open the serial port at 9600 bps: 
      Serial.println("hello");

}

void loop() {
  while(digitalRead(BUTTON_C)) 
      tone(SPEAKER,NOTE_C);
  while(digitalRead(BUTTON_D)) 
    tone(SPEAKER,NOTE_D);
  while(digitalRead(BUTTON_E)) 
    tone(SPEAKER,NOTE_E);
  while(digitalRead(BUTTON_G)) 
    tone(SPEAKER,NOTE_G);
  while(digitalRead(BUTTON_A)) 
    tone(SPEAKER,NOTE_A);


  noTone(SPEAKER);
  


}
