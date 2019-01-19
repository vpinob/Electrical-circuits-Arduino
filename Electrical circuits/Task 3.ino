//
//  Task 3.ino
//  
//
//  Created by Victor Pino on 25/04/18.
//

int ledPin = 13; // choose the pin for the LED
int inPin = 7;   // choose the input pin (for a pushbutton)
int data = 0;     // variable for reading the pin status

void setup() {
    pinMode(ledPin, OUTPUT);  // declare LED as output
    pinMode(inPin, INPUT);    // declare pushbutton as input
}

void loop(){
    data = digitalRead(inPin);  // read input value
    if (data == HIGH) {         // check if the input is HIGH (button released)
        digitalWrite(ledPin, LOW);  // turn LED OFF
        
    } else {
        digitalWrite(ledPin, HIGH);  // turn LED ON
    }
    Serial.println(data);
}