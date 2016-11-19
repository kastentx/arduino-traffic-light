int red     = 13;
int yellow  = 12;
int green   = 11;



void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  changeLights();
}
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

