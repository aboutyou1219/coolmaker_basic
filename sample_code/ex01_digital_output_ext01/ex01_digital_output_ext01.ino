const byte led = 7;
const byte ledRed = 3;
const byte ledGreen =5;
const byte ledBlue = 6;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW); 
  delay(1000);
  digitalWrite(ledRed, HIGH);
  delay(1000);
  digitalWrite(ledRed, LOW); 
  delay(1000);
  digitalWrite(ledBlue, HIGH);
  delay(1000);
  digitalWrite(ledBlue, LOW); 
  delay(1000);
  digitalWrite(ledGreen, HIGH);
  delay(1000);
  digitalWrite(ledGreen, LOW); 
  delay(1000);
}
