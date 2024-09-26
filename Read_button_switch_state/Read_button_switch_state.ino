const int LED=9;
const int BUTTON=2;

int prev_state = LOW;
int curr_state = LOW;
boolean ledOn = false;


boolean B = true;


boolean& returnValue() {
  return B;
}

boolean A = false;

void setup() {

  A = returnValue();

  B = false;

  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
  Serial.begin(9600);      // open the serial port at 9600 bps: 


  Serial.println("----------------------------------");
  Serial.println(A);    

}

void loop() {
  // put your main code here, to run repeatedly:

  debounce();

  
 
  if(prev_state == LOW && curr_state == HIGH)  {

     ledOn = !ledOn;
  }

  prev_state = curr_state;

  digitalWrite(LED,ledOn);
}

void debounce() {
  curr_state = digitalRead(BUTTON);

 
  
//  Serial.print("curr----> ");
//  Serial.print(curr_state);
//  Serial.println("");


//  Serial.print("prev ----> ");
//  Serial.print(prev_state);
//  Serial.println("");
  
  if(curr_state != prev_state) {
    delay(5);
    curr_state = digitalRead(BUTTON);


//    Serial.print("Final----> ");
//    Serial.print(curr_state);
//    Serial.println("");

  }

}
