const byte led = 7;
const byte button = 4;
const byte ledRed = 3;
const byte ledGreen = 5;
const byte ledBlue = 6;
const byte cds = 0; //Photoresistor

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(cds, INPUT); 

  Serial.begin(9600);
}

void loop() {
  int brightness = analogRead(cds);
  Serial.print("Btightness=");
  Serial.println(brightness);

  //btnPress();
  //breathingLight(ledRed);
  //breathingLight(ledGreen);
  //breathingLight(ledBlue);
}

void breathingLight(byte ledColor){
  for(int i=0; i<=255; i++){
    analogWrite(ledColor, i);
    delay(5);
  }
  for(int i = 255; i>=0; i--){
    analogWrite(ledColor, i);
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

