#include <Arduino.h>
#line 1 "/workspaces/2027CT_BioMech_Leonlaitor.B/UltrasonicSensor/UltrasonicSensor.ino"
#include "Ultrasonic.h"

<<<<<<< HEAD
Ultrasonic ultrasonic(2);  // Grove 3-pin ultrasonic on D2 (single signal pin)

const int BUZZER_PIN = 5;  // Grove Buzzer on D5
const int LED_PIN = 6;     // Grove LED on D6
=======
Ultrasonic ultrasonic(2);   // Grove 3-pin sensor: trigger and echo share D2
>>>>>>> 9f2e1b156786d09583bd4e268ef6886d1b41d396

void setup() {
  Serial.begin(115200);
}

void loop() {
<<<<<<< HEAD
int distance = ultrasonic.read();   // distance in cm
=======
  int distance = ultrasonic.read();   // distance in cm
>>>>>>> 9f2e1b156786d09583bd4e268ef6886d1b41d396
  Serial.println(distance);
  delay(100);
}
