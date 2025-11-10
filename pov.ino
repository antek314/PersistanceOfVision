#include "znaki.h"
#include "wyswietlanie.h"


#include <Adafruit_NeoPixel.h>
#include <string.h>


#define BUTTON_PIN   11
#define PIXEL_PIN    6
#define PIXEL_COUNT 16

int licznik =  0;
int klatka = 250;
unsigned long poprzedniCzas = 0;
unsigned long czas = 0;
unsigned long czasObrotu = 0;
uint8_t czasOpoznienia = 0;


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
  if(analogRead(A6) < 470){
    czas = micros();
    czasObrotu = czas - poprzedniCzas;
    float x = 0.00001666;
    float a = 0.00751;
    float b = 339.34;
    czasOpoznienia = czasObrotu * a + b;
    // 0.00008 < x < 0.000085
    // licznik = FunkcjaAnimacja(0.5, licznik, klatka);  
    //Funkcja(czasOpoznienia, "zpiec", "halo");


    /************************************/
    char predkosc[10] = "";
    sprintf(predkosc, "%lu", czasObrotu); // %lu = unsigned long
    //Funkcja(0.5, predkosc, "halo");
    /************************************/

    poprzedniCzas = czas;
  }
}

void Funkcja(uint8_t wait, char slowo_pierwsze[], char slowo_drugie[])
{
  uint32_t c = strip.Color(250, 0, 0);
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
      //delay(wait);
      delayMicroseconds(wait);
    }
  }
}

int FunkcjaAnimacja(uint8_t wait, int licznik, int klatka)
{
  if(licznik < klatka)
  {
    Funkcja(1,  "wzor", "jeden");
  }
  if(licznik > klatka && licznik < 2*klatka)
  {
    Funkcja(100, "wzor", "sto");
  }
  if(licznik > 2*klatka && licznik < 3*klatka)
  {
    Funkcja(850,  "wzor", "osip");
  }
  if(licznik > 3*klatka && licznik < 4*klatka)
  {
    Funkcja(750,  "wzor", "siep");
  }
  
  licznik++;
  if(licznik >= 1000 )
  {
    licznik = 0;  
  }
  return licznik;

}