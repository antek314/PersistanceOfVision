#include "znaki.h"
#include "wyswietlanie.h"


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
  Funkcja(0.5);
  }
}

void Funkcja(uint8_t wait)
{
  uint32_t c = strip.Color(10, 200, 0);
  char slowo_pierwsze[] = "kocham";
  char slowo_drugie[] = "cie";
  for(int g = 0; g < strlen(slowo_pierwsze); g++)
  {
    for(int j=1; j<7; j++) 
    {
      for(int i=0; i<strip.numPixels(); i++) 
      {
        if(i>8){Napisz(c, wait, slowo_pierwsze[g], i, j);}
        if((i<8) && (i>0)) {Napisz(c, wait, slowo_drugie[g], i, j);}
      }
      strip.show();
      delay(wait);
    }
  }
}

void FunkcjaAnimacja(uint8_t wait)
{
  uint32_t c = strip.Color(10, 200, 0);
  for(int g = 0; g < 5; g++)
  {
    for(int j=1; j<7; j++) 
    {
      for(int i=0; i<strip.numPixels(); i++) 
      {
        AnimacjaUsmiech(c, wait, g, i, j);
      }
      strip.show();
      delay(wait);
    }
  }
}

