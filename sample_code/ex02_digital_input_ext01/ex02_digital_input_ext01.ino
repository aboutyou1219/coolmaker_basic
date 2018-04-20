//Press once to switch led state.
byte led = 7;
byte button = 4;

boolean btnState = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(button) == LOW){
    delay(100);   //debounce
    if(digitalRead(button) == LOW){
      btnState = !btnState;
      digitalWrite(led, btnState); 
    }
  }
}
