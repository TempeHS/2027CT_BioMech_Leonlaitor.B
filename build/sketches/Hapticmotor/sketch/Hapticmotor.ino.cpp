#include <Arduino.h>
#line 1 "/workspaces/2027CT_BioMech_Leonlaitor.B/Hapticmotor/Hapticmotor.ino"
#include <drv2605.h>

DRV2605 haptic;

#line 5 "/workspaces/2027CT_BioMech_Leonlaitor.B/Hapticmotor/Hapticmotor.ino"
void setup();
#line 14 "/workspaces/2027CT_BioMech_Leonlaitor.B/Hapticmotor/Hapticmotor.ino"
void loop();
#line 5 "/workspaces/2027CT_BioMech_Leonlaitor.B/Hapticmotor/Hapticmotor.ino"
void setup()
{
    Serial.begin(9600);
    /* Software I2C = false, Verbose = true */
    if (haptic.init(false, true) != 0) Serial.println("init failed!");
    if (haptic.drv2605_AutoCal() != 0) Serial.println("auto calibration failed!");
    delay(2000);
}

void loop()
{
/*
    unsigned char i;
    for(i=1;i<124;i++)
    {
        Serial.print("Effect No: ");
        Serial.println(i);
        
        haptic.drv2605_Play_Waveform(i);
        delay(2000);
    }
*/
    haptic.drv2605_Play_Waveform(118);
    delay(2000);
}
