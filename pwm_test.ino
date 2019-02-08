
#include <I2C.h>



void setup() {
  PWMboard1.begin();
  Serial.begin(9600);

  PWMboard1.setFrequency(500);

  //turn everything off
  PWMboard1.setChannels8bit(0,15,0);
}

void loop() {
  //Red
  PWMboard1.setChannel8bit(0,0);
  //Green
  PWMboard1.setChannel8bit(1, 255);
  //Blue
  PWMboard1.setChannel8bit(2, 0);
  //White
  PWMboard1.setChannel8bit(3, 0);
}
