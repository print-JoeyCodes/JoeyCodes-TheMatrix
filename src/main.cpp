#include <Arduino.h>
#include <FastLED.h>


const int ledPin = 2;
const int numLeds = 8;
const int brightness = 10;

CRGB leds[numLeds];

uint8_t green = 0;

void setup() {
  FastLED.addLeds<WS2812B, ledPin, GRB>(leds, numLeds);
  FastLED.setBrightness(brightness);
}

void loop() {
  fill_rainbow(leds, numLeds, green, 7);
  FastLED.show();
  EVERY_N_MILLISECONDS(20) {
    green++;
  }
}