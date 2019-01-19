//
//  Task 1.2.ino
//  
//
//  Created by Victor Pino on 25/04/18.
//

int potPin = A0;  					// Declare potPin to be analog pin A0
int LEDPin = 3;  					// Declare LEDPin to be arduino pin 9
int motorPin = 5;                    // Declare dcMotor to be arduino pin 5
int readValue;  					// Use this variable to read Potentiometer
int writeValue; 					// Use this variable for writing to LED

void setup() {
    
	pinMode(potPin, INPUT);  			//set potPin to be an input
    pinMode(LEDPin, OUTPUT); 			//set LEDPin to be an OUTPUT
    pinMode(motorPin, OUTPUT);          //set motorPin to be an OUTPUT
    Serial.begin(9600);      			// turn on Serial Port
}

void loop() {
  
  	readValue = analogRead(potPin);               //Read the voltage on the Potentiometer
    writeValue = (255./1023.) * readValue;        //Calculate Write Value for LED
    analogWrite(LEDPin, writeValue);              //Write to the LED
    analogWrite(motorPin, (255 - writeValue));    //Write speed to the motor
}
