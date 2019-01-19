//
//  Task 5.ino
//  
//
//  Created by Victor Pino on 25/04/18.
//

int pResistor = A5;                     // Photoresistor at Arduino analog pin A5
int ledPin=2;                           // Led pin at Arduino pin 2
int timer1 = 1000;                      // Uses when data threshold is below 500
int timer2 = 200;                       // Uses when data threshold is above 500
int value;                              // Store value from photoresistor

void setup(){
    pinMode(ledPin, OUTPUT);            // Set lepPin - 2 pin as an output
    pinMode(pResistor, INPUT);          // Set pResistor - A5 pin as an input
}

void loop(){
    
    value = analogRead(pResistor); // read the data from the photoresistor
    
    if (value > 500) {
        digitalWrite(ledPin, HIGH);     // Turn led on
        delay(timer2);                  // Wait 200ms before turn the led off
        digitalWrite(ledPin, LOW);      // Turn led off
        delay(timer2);                  // Wait 200ms before turn the led on
    }
    else{
        digitalWrite(ledPin, HIGH);     // Turn led on
        delay(timer1);                  // Wait 1000ms before turn the led off
        digitalWrite(ledPin, LOW);      // Turn led off
        delay(timer1);                  // Wait 1000ms before turn the led on
    }
}
