#include <Arduino.h>
#line 1 "/workspaces/2027CT_BioMech_Leonlaitor.B/UltrasonicSensor/UltrasonicSensor.ino"
#include "Ultrasonic.h"

Ultrasonic ultrasonic(2);  // Grove 3-pin ultrasonic on D2 (single signal pin)

const int BUZZER_PIN = 5;  // Grove Buzzer on D5
const int LED_PIN = 6;     // Grove LED on D6

void setup() {
  Serial.begin(115200);
}

void loop() {
int distance = ultrasonic.read();   // distance in cm
  Serial.println(distance);
  delay(100);
}
