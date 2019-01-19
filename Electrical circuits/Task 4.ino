//
//  Task 4.ino 
//  
//
//  Created by Victor Pino on 25/04/18.
//

int timer1 = 100;
int timer2 = 200;
int ledPins[] = { 2, 3, 4, 5, 6, 7 };       // an array of pin numbers to which LEDs are attached
int pinCount = 6;                           // the number of pins

void setup() {
    
    for (int thisPin = 0; thisPin < pinCount; thisPin++) { // use a for loop to initialize each pin as an output
        pinMode(ledPins[thisPin], OUTPUT);
    }
}

void loop() {
    
    // loop from the left to right
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {
        
        digitalWrite(ledPins[thisPin], HIGH);   // turn the pin on
        delay(timer2);                          // delay the process 200ms
    }
    
    // loop from the right to left
    for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
        
        digitalWrite(ledPins[thisPin], LOW);    // turn the pin off
        delay(timer1);                          // delay the process 100ms
    }
}
