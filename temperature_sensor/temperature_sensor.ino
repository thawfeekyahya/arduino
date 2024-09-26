const int BLED = 9;
const int RLED = 10;
const int GLED = 11;

const int TEMP = 0;

const int LOWER_BOUND= 500;
const int UPPER_BOUND= 800;

int val = 0;


void setup() {
    pinMode(BLED,OUTPUT);
    pinMode(RLED,OUTPUT);
    pinMode(GLED,OUTPUT);
}

void loop() {
  val = analogRead(TEMP);

  if(val < LOWER_BOUND) {
    digitalWrite(RLED,LOW);
    digitalWrite(BLED,HIGH);
    digitalWrite(GLED,LOW);
  } else if (val > UPPER_BOUND) {
    digitalWrite(RLED,HIGH);
    digitalWrite(BLED,LOW);
    digitalWrite(GLED,LOW);
  } else {
    digitalWrite(RLED,LOW);
    digitalWrite(BLED,LOW);
    digitalWrite(GLED,HIGH);
  }
}
