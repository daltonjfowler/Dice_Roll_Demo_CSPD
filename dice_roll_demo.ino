//Code for dice roll button press
int buttonPin = 2;    //holds location of button
int buttonState = 0;  //holds value of button, 1 is pressed 0 is not pressed
int dice = 0;
void setup() {
  Serial.begin(9600);  //start serial monitor with a refresh rate of 9600
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == 1) {
    dice = random(1, 7);            //generate a random number 1-6
    Serial.print("You rolled a ");  //print first part of text
    Serial.println(dice);           //print dice roll
    delay(250);                     //delay 1/4 second
  }
}