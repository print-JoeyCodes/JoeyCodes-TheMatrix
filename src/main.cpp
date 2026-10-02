#include <Arduino.h>
#include <FastLED.h>


const int ledPin = 2;
const int numLeds = 8;

CRGB leds[numLeds];

void setup() {
  FastLED.addLeds<WS2812B, ledPin, GRB>(leds, numLeds);
}

void loop() {
  leds[0] = CRGB(255,0,0);
  FastLED.show();
  delay(500);
  leds[1] = CRGB(255,0,0);
  FastLED.show();
  delay(500);
  leds[2] = CRGB(255,0,0);
  FastLED.show();
  delay(500);
  leds[3] = CRGB(255,0,0);
  FastLED.show();
  delay(500);
  leds[4] = CRGB(255,0,0);
  FastLED.show();
  delay(500);
  leds[5] = CRGB(255,0,0);
  FastLED.show();
  delay(500);
  leds[6] = CRGB(255,0,0);
  FastLED.show();
  delay(500);
  leds[7] = CRGB(255,0,0);
  FastLED.show();
  delay(500);
}