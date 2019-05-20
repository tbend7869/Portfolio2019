/*
  Fading

  This example shows how to fade an LED using the analogWrite() function.

  The circuit:
  - LED attached from digital pin 9 to ground.

  created 1 Nov 2008
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fading
*/

int red = 11;
int yellow = 10;
int green = 9;
int blue = 6;
int white = 5;
int spk = 3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5 ) {
    // sets the value (range from 0 to 255):
    analogWrite(red, fadeValue);
    Serial.println(10);
    tone(spk, 1, 500);
    delay(30);
  }
    delay(50);
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5 ) {
    
    // sets the value (range from 0 to 255):
    analogWrite(yellow, fadeValue);
    Serial.println(20);
    tone(spk, 200, 500);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5 ) {
    // sets the value (range from 0 to 255):
    analogWrite(green, fadeValue);
    Serial.println(30);
    tone(spk, 400, 500);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5 ) {
    
    // sets the value (range from 0 to 255):
    analogWrite(blue, fadeValue);
    Serial.println(40);
    tone(spk, 600, 500);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5 ) {
    
    // sets the value (range from 0 to 255):
    analogWrite(white, fadeValue);
    Serial.println(50);
    tone(spk, 600, 500);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(red, fadeValue);
    Serial.println(50);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }  
   // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(yellow, fadeValue);
    Serial.println(40);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

   // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(green, fadeValue);
    Serial.println(30);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  
   // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(blue, fadeValue);
    Serial.println(20);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(white, fadeValue);
    Serial.println(10);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}
