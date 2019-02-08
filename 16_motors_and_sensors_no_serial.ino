#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

int readPinA0 = A0;

int addressA = 8;
int addressB = 9;
int addressC = 10;

int A = 0;      //Address pin A
int B = 0;      //Address pin B
int C = 0;      //Address pin C

int readPinA1 = A1;

int addressD = 5;
int addressE = 6;
int addressF = 7;

int D = 0;      //Address pin A
int E = 0;      //Address pin B
int F = 0;      //Address pin C

void setup() {
  pwm.begin();
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates

  pinMode(addressA, OUTPUT);
  pinMode(addressB, OUTPUT);
  pinMode(addressC, OUTPUT);
  pinMode(readPinA0, INPUT);

  pinMode(addressD, OUTPUT);
  pinMode(addressE, OUTPUT);
  pinMode(addressF, OUTPUT);
  pinMode(readPinA1, INPUT);
}

void loop() {

  /////////////////////////////// 000
  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////

  A = bitRead(1, 0); //Take first bit from binary value of i channel.
  B = bitRead(1, 1); //Take second bit from binary value of i channel.
  C = bitRead(1, 2); //Take third bit from value of i channel.
  digitalWrite(addressA, A);
  digitalWrite(addressB, B);
  digitalWrite(addressC, C);
  if (analogRead(readPinA0) > 380 ) {
    pwm.setPWM(0, 4096, 0);
  } else {
    pwm.setPWM(0, 0, 4096);
  }

  A = bitRead(3, 0); //Take first bit from binary value of i channel.
  B = bitRead(3, 1); //Take second bit from binary value of i channel.
  C = bitRead(3, 2); //Take third bit from value of i channel.
  digitalWrite(addressA, A);
  digitalWrite(addressB, B);
  digitalWrite(addressC, C);
  if (analogRead(readPinA0) > 380 ) {
    pwm.setPWM(1, 4096, 0);
  } else {
    pwm.setPWM(1, 0, 4096);
  }

  A = bitRead(7, 0); //Take first bit from binary value of i channel.
  B = bitRead(7, 1); //Take second bit from binary value of i channel.
  C = bitRead(7, 2); //Take third bit from value of i channel.
  digitalWrite(addressA, A);
  digitalWrite(addressB, B);
  digitalWrite(addressC, C);
  if (analogRead(readPinA0) > 380 ) {
    pwm.setPWM(2, 4096, 0);
  } else {
    pwm.setPWM(2, 0, 4096);
  }

  A = bitRead(5, 0); //Take first bit from binary value of i channel.
  B = bitRead(5, 1); //Take second bit from binary value of i channel.
  C = bitRead(5, 2); //Take third bit from value of i channel.
  digitalWrite(addressA, A);
  digitalWrite(addressB, B);
  digitalWrite(addressC, C);
  if (analogRead(readPinA0) > 380 ) {
    pwm.setPWM(3, 4096, 0);
  } else {
    pwm.setPWM(3, 0, 4096);
  }

  /////////////////////////////// 111
  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////

  D = bitRead(1, 0); //Take first bit from binary value of i channel.
  E = bitRead(1, 1); //Take second bit from binary value of i channel.
  F = bitRead(1, 2); //Take third bit from value of i channel.
  digitalWrite(addressD, D);
  digitalWrite(addressE, E);
  digitalWrite(addressF, F);
  if (analogRead(readPinA1) > 380 ) {
    pwm.setPWM(4, 4096, 0);
  } else {
    pwm.setPWM(4, 0, 4096);
  }

  D = bitRead(3, 0); //Take first bit from binary value of i channel.
  E = bitRead(3, 1); //Take second bit from binary value of i channel.
  F = bitRead(3, 2); //Take third bit from value of i channel.
  digitalWrite(addressD, D);
  digitalWrite(addressE, E);
  digitalWrite(addressF, F);
  if (analogRead(readPinA1) > 380 ) {
    pwm.setPWM(5, 4096, 0);
  } else {
    pwm.setPWM(5, 0, 4096);
  }

  D = bitRead(7, 0); //Take first bit from binary value of i channel.
  E = bitRead(7, 1); //Take second bit from binary value of i channel.
  F = bitRead(7, 2); //Take third bit from value of i channel.
  digitalWrite(addressD, D);
  digitalWrite(addressE, E);
  digitalWrite(addressF, F);
  if (analogRead(readPinA1) > 380 ) {
    pwm.setPWM(7, 4096, 0);
  } else {
    pwm.setPWM(7, 0, 4096);
  }

  D = bitRead(5, 0); //Take first bit from binary value of i channel.
  E = bitRead(5, 1); //Take second bit from binary value of i channel.
  F = bitRead(5, 2); //Take third bit from value of i channel.
  digitalWrite(addressD, D);
  digitalWrite(addressE, E);
  digitalWrite(addressF, F);
  if (analogRead(readPinA1) > 380 ) {
    pwm.setPWM(6, 4096, 0);
  } else {
    pwm.setPWM(6, 0, 4096);
  }

  /////////////////////////////// 222
  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////


  A = bitRead(2, 0); //Take first bit from binary value of i channel.
  B = bitRead(2, 1); //Take second bit from binary value of i channel.
  C = bitRead(2, 2); //Take third bit from value of i channel.
  digitalWrite(addressA, A);
  digitalWrite(addressB, B);
  digitalWrite(addressC, C);
  if (analogRead(readPinA0) > 380 ) {
    pwm.setPWM(8, 4096, 0);
  } else {
    pwm.setPWM(8, 0, 4096);
  }

  A = bitRead(4, 0); //Take first bit from binary value of i channel.
  B = bitRead(4, 1); //Take second bit from binary value of i channel.
  C = bitRead(4, 2); //Take third bit from value of i channel.
  digitalWrite(addressA, A);
  digitalWrite(addressB, B);
  digitalWrite(addressC, C);
  if (analogRead(readPinA0) > 380 ) {
    pwm.setPWM(9, 4096, 0);
  } else {
    pwm.setPWM(9, 0, 4096);
  }


  A = bitRead(0, 0); //Take first bit from binary value of i channel.
  B = bitRead(0, 1); //Take second bit from binary value of i channel.
  C = bitRead(0, 2); //Take third bit from value of i channel.
  digitalWrite(addressA, A);
  digitalWrite(addressB, B);
  digitalWrite(addressC, C);
  if (analogRead(readPinA0) > 380 ) {
    pwm.setPWM(10, 4096, 0);
  } else {
    pwm.setPWM(10, 0, 4096);
  }


  A = bitRead(6, 0); //Take first bit from binary value of i channel.
  B = bitRead(6, 1); //Take second bit from binary value of i channel.
  C = bitRead(6, 2); //Take third bit from value of i channel.
  digitalWrite(addressA, A);
  digitalWrite(addressB, B);
  digitalWrite(addressC, C);
  if (analogRead(readPinA0) > 380 ) {
    pwm.setPWM(11, 4096, 0);
  } else {
    pwm.setPWM(11, 0, 4096);
  }


  /////////////////////////////// 333
  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////
  ///////////////////////////////

  D = bitRead(2, 0); //Take first bit from binary value of i channel.
  E = bitRead(2, 1); //Take second bit from binary value of i channel.
  F = bitRead(2, 2); //Take third bit from value of i channel.
  digitalWrite(addressD, D);
  digitalWrite(addressE, E);
  digitalWrite(addressF, F);
  if (analogRead(readPinA1) > 380 ) {
    pwm.setPWM(12, 4096, 0);
  } else {
    pwm.setPWM(12, 0, 4096);
  }

  D = bitRead(4, 0); //Take first bit from binary value of i channel.
  E = bitRead(4, 1); //Take second bit from binary value of i channel.
  F = bitRead(4, 2); //Take third bit from value of i channel.
  digitalWrite(addressD, D);
  digitalWrite(addressE, E);
  digitalWrite(addressF, F);
  if (analogRead(readPinA1) > 380 ) {
    pwm.setPWM(13, 4096, 0);
  } else {
    pwm.setPWM(13, 0, 4096);
  }

  D = bitRead(0, 0); //Take first bit from binary value of i channel.
  E = bitRead(0, 1); //Take second bit from binary value of i channel.
  F = bitRead(0, 2); //Take third bit from value of i channel.
  digitalWrite(addressD, D);
  digitalWrite(addressE, E);
  digitalWrite(addressF, F);
  if (analogRead(readPinA1) > 380 ) {
    pwm.setPWM(14, 4096, 0);
  } else {
    pwm.setPWM(14, 0, 4096);
  }

  D = bitRead(6, 0); //Take first bit from binary value of i channel.
  E = bitRead(6, 1); //Take second bit from binary value of i channel.
  F = bitRead(6, 2); //Take third bit from value of i channel.
  digitalWrite(addressD, D);
  digitalWrite(addressE, E);
  digitalWrite(addressF, F);
  if (analogRead(readPinA1) > 380 ) {
    pwm.setPWM(15, 4096, 0);
  } else {
    pwm.setPWM(15, 0, 4096);
  }

}
