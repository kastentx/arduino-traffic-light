// Arduino Traffic Light
// Author: Nick Kasten

/* Global Variables */
// specifies ports we will have LEDs connected to
int red     = 13;
int yellow  = 12;
int green   = 11;
int button  =  0;
int buttonValue = 0;



/* Setup Function */
void setup() {
  pinMode(button, INPUT);
  
  // sets pins to OUTPUT mode (so we can turn on LEDS)
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
/* Main Loop */
void loop() {
  digitalWrite(red, HIGH);
  buttonValue = digitalRead(button);

  if (buttonValue == HIGH) {
    delay(1000);
    digitalWrite(red, LOW);
    changeLights();
  }
}
/* Utility Functions */
 void changeLights() {
  //green light go!
  digitalWrite(green, HIGH);
  delay(2000); 
  // green and yellow for 1.5 seconds
  digitalWrite(yellow, HIGH);
  delay(1500);
  // green off, yellow for 2 seconds
  digitalWrite(green, LOW);
  delay(2000);
  // turn off yellow, red on for 3 seconds
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(3000);
  // turn off red, turn on green
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);  
  delay(2000);
  // all lights off
  digitalWrite(green, LOW);
 }
