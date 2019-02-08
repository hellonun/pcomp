// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN  6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

int left = 5;
int right = 4;
int up = 3;
int down = 2;
int dataOut = 1;


void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  strip.setBrightness(20);

  Serial.begin(9600);
  pinMode(left, INPUT);
  pinMode(right, INPUT);
  pinMode(up, INPUT);
  pinMode(down, INPUT);

}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.


  int buttonState1 = digitalRead(left);
  int buttonState2 = digitalRead(right);
  int buttonState3 = digitalRead(up);
  int buttonState4 = digitalRead(down);

    theaterChaseRainbow(50);

  if (buttonState1 == 0) {
    for (int i = 0; i < 11; i++) {
      strip.setPixelColor(i, 255, 0, 0, 127);
    }
    dataOut = 10;
  } else if (buttonState2 == 0) {
    for (int i = 11; i < 28; i++) {
      strip.setPixelColor(i, 255, 0, 0, 127);
    }
    dataOut = 20;
  } else if (buttonState3 == 0) {
    for (int i = 28; i < 38; i++) {
      strip.setPixelColor(i, 255, 0, 0, 127);
    }
    dataOut = 30;
  } else if (buttonState4 == 0) {
    for (int i = 38; i < 53; i++) {
      strip.setPixelColor(i, 255, 0, 0, 127);
    }
    dataOut = 40;
  } else {
    for (int i = 0; i < 53; i++) {
      strip.setPixelColor(i, 0, 0, 0);
    }
    dataOut = 255;
  }
  strip.show();

  //  Serial.print("1 RED - LEFT: ");
  //  Serial.println(buttonState1);
  //  Serial.print("2 ORANGE - RIGHT: ");
  //  Serial.println(buttonState2);
  //  Serial.print("3 YELLOW - UP: ");
  //  Serial.println(buttonState3);
  //  Serial.print("4 GREEN - DOWN: ");
  //  Serial.println(buttonState4);
  Serial.write (dataOut);
  delay(1);
}

void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}
