

#include "HX711.h"
#include "AS5600.h"

unsigned long previousMillis = 0; 
const unsigned long interval = 13; //77Hz 

AS5600 as5600; 
// HX711 circuit wiring
const int LOADCELL_DOUT_PIN = 2;
const int LOADCELL_SCK_PIN = 3;


HX711 scale;

void setup() 
{
  Serial.begin(9600);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  scale.set_scale(17);         // this value is obtained by calibrating the scale with known weights
  scale.tare();                // reset the scale to 0
  as5600.begin();
  as5600.setDirection(AS5600_CLOCK_WISE);
  
}

void loop() 
{ 
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    Serial.print((int)scale.get_units(1));
    Serial.print(";");
    Serial.println((int)(as5600.readAngle()/11.377));
  }
}
