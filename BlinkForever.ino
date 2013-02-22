/*
  BlinkForever
  Turns on an LED on for one second, then off for one second, repeatedly.
  
  The LED light stops flashing after it's flashed 100 times. 
 */
 
// Pin 13 has an LED connected on most Arduino boards
int led = 13;

void setup() {
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again
void loop() {
  for (int i = 1; i < 101; i++) { // Sets the amount of times the LED should turn ON and OFF 
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);               // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);              // wait again for a second
  }
}
