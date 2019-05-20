/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int red = 2;
int green = 4;
int blue = 6;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600); 
}

// the loop routine runs over and over again forever:
void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1);
  if (sensorValue >= 90){
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    delay(500);
  }
  if (sensorValue >10 && sensorValue <90){
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    delay(500);
  }
  if (sensorValue <=10){
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    delay(500);
  }
}
