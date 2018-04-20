const byte led = 7;
const byte button = 4;
const byte ledRed = 3;
const byte ledGreen = 5;
const byte ledBlue = 6;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  btnPress();
  for(int i=0; i<=255; i++){
    analogWrite(ledRed, i);
    delay(5);
  }
  for(int i = 255; i>=0; i--){
    analogWrite(ledRed, i);
    delay(5);
  }
}

void btnPress(){
  if(digitalRead(button) == LOW){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}

