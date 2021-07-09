// ORIGINAL FILE P02_SpaceshipInterface example basics
int switchstate = 0;

void setup() {
  // declare the LED pins as outputs
  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // declare the switch pin as an input
  pinMode(2, INPUT);
}

void loop() {

  // read the value of the switch
  // digitalRead() checks to see if there is voltage on the pin or not
  switchstate = digitalRead(2);

  // if the button is not pressed turn on the green LED and off the red LEDs
  if (switchstate == LOW) {
    digitalWrite(6, HIGH); // turn the green LED on pin 3 on
    digitalWrite(4, LOW);  // turn the red LED on pin 4 off
    digitalWrite(5, LOW);  // turn the red LED on pin 5 off
  }
  // this else is part of the above if() statement.
  // if the switch is not LOW (the button is pressed) turn off the green LED and
  // blink alternatively the red LEDs
  else {
    digitalWrite(6, HIGH);  // turn the green LED on pin 3 off
    digitalWrite(4, LOW);  // turn the red LED on pin 4 off
    digitalWrite(5, HIGH); // turn the red LED on pin 5 on
    // wait for a quarter second before changing the light
    delay(250);
    digitalWrite(4, HIGH); // turn the red LED on pin 4 on
    digitalWrite(5, LOW);  // turn the red LED on pin 5 off
    // wait for a quarter second before changing the light
    delay(250);
  }
}