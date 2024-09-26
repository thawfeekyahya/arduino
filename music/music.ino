/* 
This code plays part of Beethoven's Ode to Joy on a speaker or piezo
*/

int speakerPin = 10; // Pin 8 has a speaker connected so we give it a name:

// create variables for notes
int c4 = 262;
int d4 = 294;
int e4 = 330;
int f4 = 349;
int g4 = 392;
int a4 = 440;
int b4 = 494;
int c5 = 523;

// create variables for note durations
int whole = 2000; //whole note
int half = whole/2; //half note
int quarter = whole/4; //quarter note
int eighth = whole/8; //eighth
int sixteenth = whole/16; //sixteenth 

// create a variable for a gap between notes
int gap = 20;

void setup() {
  pinMode(speakerPin, OUTPUT); // set the digital pin as an output.
}

void loop() {

  tone(speakerPin, e4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, e4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, f4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, g4, quarter); 
  delay(quarter+gap);
  
  tone(speakerPin, g4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, f4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, e4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, d4, quarter); 
  delay(quarter+gap);
  
  tone(speakerPin, c4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, c4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, d4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, e4, quarter); 
  delay(quarter+gap);
  
  tone(speakerPin, e4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, d4, quarter); 
  delay(quarter+gap);
  tone(speakerPin, d4, half); 
  delay(half+gap);
}
