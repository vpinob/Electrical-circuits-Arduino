//
//  Task 8.ino
//  
//
//  Created by Victor Pino on 25/04/18.
//

const int ledPin = 13;                                    // choose the pin for the LED
const int buttonFirst = 2;                                // choose the input pin (for first pushbutton)
const int buttonSecond = 3;                               // choose the input pin (for second pushbutton)

int buttonStateFirst = 0;                           // variable for reading the buttonFirst status
int buttonStateSecond = 0;                          // variable for reading the buttonFirst status

void setup() {
    pinMode(ledPin, OUTPUT);                        // declare LED as output
    pinMode(buttonFirst, INPUT);                    // declare pushbutton as input
    pinMode(buttonSecond, INPUT);                   // declare pushbutton as input
}

void loop(){
    
    buttonStateFirst = digitalRead(buttonFirst);    // read input value
    buttonStateSecond = digitalRead(buttonSecond);  // read input value
    
    if (buttonStateFirst == HIGH) {                 // check if the input is HIGH
        for(int i = 0; i <= 255; i++) {
            analogWrite(ledPin, i);
        }
    }
    
    if (buttonStateSecond == HIGH) {                // check if the input is HIGH
        int i = 255;
        while(i >=0) {
            analogWrite(ledPin, i);
            i= i - 1;
        }
    }
}
