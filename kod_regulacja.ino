#include "znaki.h"
#include "wyswietlanie.h"


#include <Adafruit_NeoPixel.h>
#include <string.h>


#define BUTTON_PIN   11
#define PIXEL_PIN 8
#define PIXEL_COUNT 17

int licznik =  0;
int klatka = 250;
unsigned long poprzedniCzas = 0;
unsigned long czas = 0;
unsigned long czasObrotu = 0;
uint32_t czasOpoznienia = 0;


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
  pinMode(A2, INPUT);
  strip.begin();
  strip.show();
}

void loop() {
  if(analogRead(A2) < 470){
  //while(true){
    czas = micros();
    //licznik = Animacja(czasOpoznienia, licznik, klatka);
    //Wyswietl(czasOpoznienia, "zupa", "halo");

// liczenie predkosci
/*******************************************/
    czasObrotu = czas - poprzedniCzas;

    char predkosc[10] = "";
    sprintf(predkosc, "%lu", czasObrotu); // %lu = unsigned long
    Wyswietl(2500, "wzor", predkosc);

    poprzedniCzas = czas;

/*******************************************/


// regulacja opoznienia
/*******************************************/
    /*czasObrotu = czas - poprzedniCzas;
    //float x = 0.00001666;
    float a = 0.023125;
    float b = 968.75;
    float wynik = czasObrotu * a - b; 
    czasOpoznienia = static_cast<uint32_t>(wynik);
    /****************/
    /*char opoznienie[10] = "";
    sprintf(opoznienie, "%lu", czasOpoznienia); // %lu = unsigned long*/
    /**************/
    /*Wyswietl(czasOpoznienia, "wzor", "a");

    poprzedniCzas = czas;*/

/******************************************/
  }
}

void Wyswietl(uint32_t opoznienie, char slowo_pierwsze[], char slowo_drugie[])
{
  uint32_t color = strip.Color(250, 0, 0);
  for(int g = 0; g < 8; g++)
  {
    for(int j=1; j<7; j++)
    {
      for(int i=0; i<strip.numPixels(); i++)
      {
        if(i>8){Napisz(color, opoznienie, slowo_pierwsze[g], i, j);}
        if((i<8) && (i>0)) {Napisz(color, opoznienie, slowo_drugie[g], i, j);}
      }
      strip.show();
      //delay(wait);
      if(opoznienie>4000){opoznienie = 4000;}
      delayMicroseconds(opoznienie);
    }
  }
}

int Animacja(uint32_t wait, int licznik, int klatka)
{
  if(licznik < klatka)
  {
    Wyswietl(100,  "wzor", "sto");
  }
  if(licznik > klatka && licznik < 2*klatka)
  {
    Wyswietl(200, "wzor", "dwie");
  }
  if(licznik > 2*klatka && licznik < 3*klatka)
  {
    Wyswietl(300,  "wzor", "trzy");
  }
  if(licznik > 3*klatka && licznik < 4*klatka)
  {
    Wyswietl(400,  "wzor", "cztery");
  }
  
  licznik++;
  if(licznik >= 1000 )
  {
    licznik = 0;  
  }
  return licznik;

}