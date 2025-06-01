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
  uint32_t c = strip.Color(255, 255, 0);
  char slowo_pierwsze[] = "lokomotywa";
  char slowo_drugie[] = "bomba";
  for(int g = 0; g < strlen(slowo_pierwsze); g++)
  {
    for(int j=1; j<7; j++) 
    {
      for(int i=0; i<strip.numPixels(); i++) 
      {
        if(i>=8){Napisz(c, wait, slowo_pierwsze[g], i, j);}
        if(i<=7) {Napisz(c, wait, slowo_drugie[g], i, j);}
      }
      strip.show();
      delay(wait);
    }
  }
}
void Napisz(uint32_t c, uint8_t wait, char znak, int i, int j)
{
  if(znak == ' '){Napisz_Spacje(i , j, c, wait);}
  if(znak == 'a'){Napisz_A(i , j, c, wait);}
  if(znak == 'b'){Napisz_B(i , j, c, wait);}
  if(znak == 'c'){Napisz_C(i , j, c, wait);}
  if(znak == 'd'){Napisz_D(i , j, c, wait);}
  if(znak == 'e'){Napisz_E(i , j, c, wait);}
  if(znak == 'f'){Napisz_F(i , j, c, wait);}
  if(znak == 'g'){Napisz_G(i , j, c, wait);}
  if(znak == 'h'){Napisz_H(i , j, c, wait);}
  if(znak == 'i'){Napisz_I(i , j, c, wait);}
  if(znak == 'j'){Napisz_J(i , j, c, wait);}
  if(znak == 'k'){Napisz_K(i , j, c, wait);}
  if(znak == 'l'){Napisz_L(i , j, c, wait);}
  if(znak == 'm'){Napisz_M(i , j, c, wait);}
  if(znak == 'n'){Napisz_N(i , j, c, wait);}
  if(znak == 'o'){Napisz_O(i , j, c, wait);}
  if(znak == 'p'){Napisz_P(i , j, c, wait);}
  if(znak == 'r'){Napisz_R(i , j, c, wait);}
  if(znak == 's'){Napisz_S(i , j, c, wait);}
  if(znak == 't'){Napisz_T(i , j, c, wait);}
  if(znak == 'u'){Napisz_U(i , j, c, wait);}
  if(znak == 'w'){Napisz_W(i , j, c, wait);}
  if(znak == 'y'){Napisz_Y(i , j, c, wait);}
  if(znak == 'z'){Napisz_Z(i , j, c, wait);}
}

