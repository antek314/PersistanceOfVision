#include "znaki.h"

#include <Adafruit_NeoPixel.h>
#include <string.h>


#define BUTTON_PIN   11
#define PIXEL_PIN    6
#define PIXEL_COUNT 16

// Parameter 1 = number of pixels in strip,  neopixel stick has 8
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_RGB     Pixels are wired for RGB bitstream
//   NEO_GRB     Pixels are wired for GRB bitstream, correct for neopixel stick
//   NEO_KHZ400  400 KHz bitstream (e.g. FLORA pixels)
//   NEO_KHZ800  800 KHz bitstream (e.g. High Density LED strip), correct for neopixel stick
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

bool oldState = HIGH;
int showType = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(A6, INPUT);
  strip.begin();
  strip.show();
}

void loop() {
  startShow(0);
}

void startShow(int i) {
  if(analogRead(A6) < 1005){
  Funkcja(0.05);
  }
}

void Funkcja(uint8_t wait)
{
  uint32_t c = strip.Color(255, 255, 0);

    char slowo[] = "abcdefghij";
    for(int g = 0; g < strlen(slowo); g++)
    {
      Napisz(c, wait, slowo[g]);
    }
}
void Napisz(uint32_t c, uint8_t wait, char znak)
{
    for(int j=1; j<7; j++) 
    {
      for(int i=9; i<strip.numPixels(); i++) 
      {
        if(znak == 'a'){Napisz_A(i , j, c, wait, strip);}
        if(znak == 'b'){Napisz_B(i , j, c, wait, strip);}
        if(znak == 'c'){Napisz_C(i , j, c, wait, strip);}
        if(znak == 'd'){Napisz_D(i , j, c, wait, strip);}
        if(znak == 'e'){Napisz_E(i , j, c, wait, strip);}
        if(znak == 'f'){Napisz_F(i , j, c, wait, strip);}
        if(znak == 'g'){Napisz_G(i , j, c, wait, strip);}
        if(znak == 'h'){Napisz_H(i , j, c, wait, strip);}
        if(znak == 'i'){Napisz_I(i , j, c, wait, strip);}
        if(znak == 'j'){Napisz_J(i , j, c, wait, strip);}
        if(znak == 'k'){Napisz_K(i , j, c, wait, strip);}
        if(znak == 'l'){Napisz_L(i , j, c, wait, strip);}
        if(znak == 'm'){Napisz_M(i , j, c, wait, strip);}
        if(znak == 'n'){Napisz_N(i , j, c, wait, strip);}
        if(znak == 'o'){Napisz_O(i , j, c, wait, strip);}
        if(znak == 'p'){Napisz_P(i , j, c, wait, strip);}
        if(znak == 'r'){Napisz_R(i , j, c, wait, strip);}
        if(znak == 's'){Napisz_S(i , j, c, wait, strip);}
        if(znak == 't'){Napisz_T(i , j, c, wait, strip);}
        if(znak == 'u'){Napisz_U(i , j, c, wait, strip);}
        if(znak == 'w'){Napisz_W(i , j, c, wait, strip);}
        if(znak == 'y'){Napisz_Y(i , j, c, wait, strip);}
        if(znak == 'z'){Napisz_Z(i , j, c, wait, strip);}
      }
      strip.show();
      delay(wait);
    }
}


void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();
     
      delay(wait);
     
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
        for (int i=0; i < strip.numPixels(); i=i+3) {
          strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
        }
        strip.show();
       
        delay(wait);
       
        for (int i=0; i < strip.numPixels(); i=i+3) {
          strip.setPixelColor(i+q, 0);        //turn every third pixel off
        }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else if(WheelPos < 170) {
    WheelPos -= 85;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  }
}