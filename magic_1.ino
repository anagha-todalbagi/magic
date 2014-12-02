#include <Adafruit_NeoPixel.h>
//#inlcude "WS2812_Definitions.h"

int PIN = 4;
int LED_COUNT = 1;

Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
    leds.begin();
    leds.setPixelColor(0, 0, 0, 0);
    leds.show();  
}

void loop() {
  // put your main code here, to run repeatedly:
  magic(100);

}

void magic(int time) {
    for(int i=0; i<=255;i++)
    {
        leds.setPixelColor(0, 0, i, 0);
        leds.show();
    }
    leds.setPixelColor(0, 0, 0, 0);
    leds.show();
    delay(time+time);
    leds.setPixelColor(0, 0, 255, 0);
    leds.show();
    delay(time+time);
    leds.setPixelColor(0, 0, 0, 0);
    leds.show();
    delay(time+time);
    for(int i=0; i<=255;i++)
    {
        leds.setPixelColor(0, 0, 255, i);
        leds.show();
    }
    for(int i=0; i<=255;i++)
    {
        leds.setPixelColor(0, 0, 255-i, 255);
        leds.show();
    }
    leds.setPixelColor(0, 0, 0, 0);
    leds.show();
    delay(time+time);
    leds.setPixelColor(0, 0, 0, 255);
    leds.show();
    delay(time+time);
    leds.setPixelColor(0, 0, 0, 0);
    leds.show();
    delay(time+time);
    for(int i=0; i<=255;i++)
    {
        leds.setPixelColor(0, i, 0, 255);
        leds.show();
    }
    for(int i=0; i<=255;i++)
    {
        leds.setPixelColor(0, 255, 0, 255-i);
        leds.show();
    }
    leds.setPixelColor(0, 0, 0, 0);
    leds.show();
    delay(time+time);
    leds.setPixelColor(0, 255, 0, 0);
    leds.show();
    delay(time+time);
    leds.setPixelColor(0, 0, 0, 0);
    leds.show();
    delay(time+time);
    for(int i=0; i<=255;i++)
    {
        leds.setPixelColor(0, 255, i, 0);
        leds.show();
    }
    for(int i=0; i<=255;i++)
    {
        leds.setPixelColor(0, 255-i, 255, 0);
        leds.show();
    }

    delay(time+time);
    
}    
