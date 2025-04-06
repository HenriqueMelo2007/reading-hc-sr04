#include <Arduino.h>
#include "Ultrasonic.h"

Ultrasonic sensor(12, 13);
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distance = sensor.read();
  
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(1000);
}