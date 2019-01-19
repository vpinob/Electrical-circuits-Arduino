//
//  Task 2.ino
//  
//
//  Created by Victor Pino on 25/04/18.
//

int timer = 400;                            // The higher the number, the slower the timing.
int ledPins[] = { 2, 3, 4, 5, 6, 7 };       // array of pin numbers to which LEDs are attached
int pinCount = 6;                           // the number of pins

void setup() {
    
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {
        pinMode(ledPins[thisPin], OUTPUT);
    }
}

void loop() {
    
    turnOn();
  	delay(timer);
  	turnOff();
    delay(timer);
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
