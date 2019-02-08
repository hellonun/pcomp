#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup() {


  pwm.begin();
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
}

void loop() {


  pwm.setPWM(0, 4096, 0);
  delay (500);
  pwm.setPWM(0, 0, 4096);
  delay (500);

  pwm.setPWM(1, 4096, 0);
  delay (500);
  pwm.setPWM(1, 0, 4096);
  delay (500);

  pwm.setPWM(2, 4096, 0);
  delay (500);
  pwm.setPWM(2, 0, 4096);
  delay (500);

  pwm.setPWM(3, 4096, 0);
  delay (500);
  pwm.setPWM(3, 0, 4096);
  delay (500);

  pwm.setPWM(4, 4096, 0);
  delay (500);
  pwm.setPWM(4, 0, 4096);
  delay (500);


  pwm.setPWM(5, 4096, 0);
  delay (500);
  pwm.setPWM(5, 0, 4096);
  delay (500);

  pwm.setPWM(7, 4096, 0);
  delay (500);
  pwm.setPWM(7, 0, 4096);
  delay (500);

  pwm.setPWM(6, 4096, 0);
  delay (500);
  pwm.setPWM(6, 0, 4096);
  delay (500);

  pwm.setPWM(8, 4096, 0);
  delay (500);
  pwm.setPWM(8, 0, 4096);
  delay (500);

  pwm.setPWM(9, 4096, 0);
  delay (500);
  pwm.setPWM(9, 0, 4096);
  delay (500);


  pwm.setPWM(10, 4096, 0);
  delay (500);
  pwm.setPWM(10, 0, 4096);
  delay (500);

  pwm.setPWM(11, 4096, 0);
  delay (500);
  pwm.setPWM(11, 0, 4096);
  delay (500);

  pwm.setPWM(12, 4096, 0);
  delay (500);
  pwm.setPWM(12, 0, 4096);
  delay (500);

  pwm.setPWM(13, 4096, 0);
  delay (500);
  pwm.setPWM(13, 0, 4096);
  delay (500);

  pwm.setPWM(14, 4096, 0);
  delay (500);
  pwm.setPWM(14, 0, 4096);
  delay (500);


  pwm.setPWM(15, 4096, 0);
  delay (500);
  pwm.setPWM(15, 0, 4096);
  delay (500);

}
