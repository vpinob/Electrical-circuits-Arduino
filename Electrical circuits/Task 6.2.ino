//
//  Task 6.ino
//
//
//  Created by Victor Pino on 25/04/18.
//
int potPin = A0;                                            // Declare potPin to be analog pin A0
int ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };         // an array of pin numbers to which LEDs are attached
int pinCount = 10;                                          // the number of pins
int readValue = 0;                                              // Use this variable to read Potentiometer

void setup() {
    
    pinMode(potPin, INPUT);                                 //set potPin to be an input
    Serial.begin(9600);
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {  // use a for loop to initialize each pin as an output
        pinMode(ledPins[thisPin], OUTPUT);
    }
    // turn on Serial Port
}

void loop() {
  	
   if(readValue == 0)
   {
   		turnOn();                                           // turn the pin on
    	delay(1000);
    	turnOff();                                          // turn the pin off
   		delay(1000);
   }
  	readValue = analogRead(potPin);                         //Read the voltage on the Potentiometer
  
    if (readValue > 0 && readValue <= 100) {
        turnOn();                                         // turn the pin on
        delay(100);
      	turnOff();                                         // turn the pin off
    	delay(100);
    }
    if (readValue >= 400 && readValue <= 600) {
        turnOn();                                           // turn the pin on
        delay(500);
      	turnOff();                                          // turn the pin off
    	delay(500);
    }
  	if (((readValue > 100) && (readValue < 400)) ||((readValue > 600) && (readValue < 900))) {
        turnOn();                                           // turn the pin on
    }
    if (readValue >= 900) {
        turnOn();                                           // turn the pin on
        delay(1000);
      	turnOff();                                          // turn the pin off
    	delay(1000);
    }
  	Serial.println(readValue);
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
