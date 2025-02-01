#include <Arduino.h>
#include <FastLED.h>

// put function declarations here:
const int LEDPin = 19;
const int numLEDS = 20;
CRGB leds[numLEDS];

void setup() {
  FastLED.addLeds<WS2812, LEDPin, GRB>(leds, numLEDS);
}

void loop() {
  for(int i = 0; i < numLEDS; i++){
    leds[i] = CRGB(255,0,0);
    FastLED.show();
    delay(50);
  }
  delay(50);
  for(int i = numLEDS - 1; i >= 0; i--){
    leds[i] = CRGB(0,0,0);
    FastLED.show();
    delay(50);
  }
  delay(50);
}