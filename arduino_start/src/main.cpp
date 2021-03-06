#include <Arduino.h>

long int counter;

// put your setup code here, to run once:
void setup() {

  counter = 0;
  
  Serial.begin(9600);
  Serial.println("[ Serial Communication Started ]");
}

// put your main code here, to run repeatedly:
void loop() {
  // Increment the counter by 1
  counter += 1;

  // Send numbers to serial port
  Serial.print("#");
  Serial.println(counter);

  // Wait for 1 second
  delay(1000);
}