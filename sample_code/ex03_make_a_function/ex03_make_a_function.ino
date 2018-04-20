//When user prsee button, the led will be turn on.
const byte led = 7;
const byte button = 4;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  btnPress();
}

void btnPress(){
  if(digitalRead(button) == LOW){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}

