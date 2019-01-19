//
//  Task 6.2.ino
//
//
//  Created by Victor Pino on 25/04/18.
                                          
int ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };         // an array of pin numbers to which LEDs are attached
int pinCount = 10;                                          // the number of pins                                 
void setup() {
    
    Serial.begin(9600);
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {  // use a for loop to initialize each pin as an output
        pinMode(ledPins[thisPin], OUTPUT);
    }
    // turn on Serial Port
}

void loop() {
  	
   		turnOn();                                           // turn the pin on
    	delay(1000);
    	turnOff();                                          // turn the pin off
   		delay(1000);
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
