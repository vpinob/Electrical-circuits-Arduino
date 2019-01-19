//
//  Task 7.ino
//  
//
//  Created by Victor Pino on 25/04/18.
//

const int switchOnePin = 8; //the switch connect to pin 8
const int switchTwoPin = 10; //the switch connect to pin 8
const int switchThreePin = 12; //the switch connect to pin 8
const int ledPins[] = { 2, 4, 6 };//the led connect to pin 6

int switchOneState = 0;         // variable for reading the pushbutton status
int switchTwoState = 0;         // variable for reading the pushbutton status
int switchThreeState = 0;         // variable for reading the pushbutton status

int pinCount = 3;			 // variable for leds 

void setup()
{
  pinMode(switchOnePin, INPUT); //initialize thebuttonPin as input
  pinMode(switchTwoPin, INPUT); //initialize thebuttonPin as input
  pinMode(switchThreePin, INPUT); //initialize thebuttonPin as input
  
  for (int thisPin = 0; thisPin < pinCount; thisPin++) { // use a for loop to initialize each pin as an output
        pinMode(ledPins[thisPin], OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  //read the state of the switch value
  switchOneState = digitalRead(switchOnePin);
  switchTwoState = digitalRead(switchTwoPin);
  switchThreeState = digitalRead(switchThreePin);
  
  if ((switchOneState == HIGH )&&(switchTwoState == HIGH )&&(switchThreeState == HIGH )) {
    	turnOn();
  }
  
  if ((switchOneState == LOW )&&(switchTwoState == HIGH )&&(switchThreeState == HIGH )) {
    	turnOn();
    	delay(500);
    	turnOff();
    	delay(500);
  }
  if ((switchOneState == HIGH )&&(switchTwoState == LOW )&&(switchThreeState == HIGH )) {
    	turnOn();
    	delay(500);
    	turnOff();
    	delay(500);
  }
  if ((switchOneState == HIGH )&&(switchTwoState == HIGH )&&(switchThreeState == LOW )) {
    	turnOn();
    	delay(500);
    	turnOff();
    	delay(500);
  }
  
  if ((switchOneState == HIGH )&&(switchTwoState == LOW )&&(switchThreeState == LOW )) {
    	Serial.println("First button is on...");
    	delay(100);
  }
  if ((switchOneState == LOW )&&(switchTwoState == HIGH )&&(switchThreeState == LOW )) {
    	Serial.println("Second button is on...");
    	delay(100);
  }
  if ((switchOneState == LOW )&&(switchTwoState == LOW )&&(switchThreeState == HIGH )) {
    	Serial.println("Third button is on...");
    	delay(100);
  }
  if ((switchOneState == LOW )&&(switchTwoState == LOW )&&(switchThreeState == LOW )) {
    	Serial.println("Data unavailable...");
    	delay(100);
  }
}

void turnOn() {
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {
        digitalWrite(ledPins[thisPin], HIGH);           // turn the pin on
    }
}

void turnOff() {
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {
        digitalWrite(ledPins[thisPin], LOW);            // turn the pin off
    }
}
