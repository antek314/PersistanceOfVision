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
  strip.begin();
  strip.show();
}

void loop() {
  startShow(0);
}

void startShow(int i) {
  switch(i){
    case 0: Funkcja(3);
            break;
    /*case 1: colorWipe(strip.Color(255, 0, 0), 50);  // Red
            break;
    case 2: colorWipe(strip.Color(0, 255, 0), 50);  // Green
            break;
    case 3: colorWipe(strip.Color(0, 0, 255), 50);  // Blue
            break;
    case 4: theaterChase(strip.Color(127, 127, 127), 50); // White
            break;
    case 5: theaterChase(strip.Color(127,   0,   0), 50); // Red
            break;
    case 6: theaterChase(strip.Color(  0,   0, 127), 50); // Blue
            break;
    case 7: rainbow(20);
            break;
    case 8: rainbowCycle(20);
            break;
    case 9: theaterChaseRainbow(50);
            break;*/
  }
}

void Funkcja(uint8_t wait)
{
  uint32_t c = strip.Color(255, 0, 0);

  for(int n=0; n<500; n++)
  {
    char slowo[] = "antek";
    for(int g = 0; g < strlen(slowo); g++)
    {
      Napisz(c, wait, slowo[g]);
    }
  }
}
void Napisz(uint32_t c, uint8_t wait, char znak)
{
    for(int j=1; j<8; j++) 
    {
      for(int i=0; i<strip.numPixels(); i++) 
      {
        if(znak == 'a'){Napisz_A(i , j, c, wait);}
        if(znak == 'n'){Napisz_N(i , j, c, wait);}
        if(znak == 't'){Napisz_T(i , j, c, wait);}
        if(znak == 'e'){Napisz_E(i , j, c, wait);}
        if(znak == 'k'){Napisz_K(i , j, c, wait);}
      }
        strip.show();
        delay(wait);
    }
}
void Napisz_A(int i, int j, uint32_t c, uint8_t wait)
{
  if( (j==1) || (j==5))
  {
    strip.setPixelColor(i, c);
  }
  else if((j==7) || (j==8))
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if((i==7) || (i== 3))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}
void Napisz_B(int i, int j, uint32_t c, uint8_t wait)
{
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if((j==7) || (j==8))
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if((i==7) || (i== 3))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}
void Napisz_N(int i, int j, uint32_t c, uint8_t wait)
{
  if( (j==1) || (j==5) )
  {
    strip.setPixelColor(i, c);
  }
  else if((j==7) || (j==8))
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==2)
  {
    if((i==7) || (i== 6))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if(j==3)
  {
    if((i==5) || (i== 4) || (i==3) || (i== 2))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if(j==4)
  {
    if((i==1) || (i== 0))
    {
      strip.setPixelColor(i, c);
    }
    else if(j==7)
    {
      strip.setPixelColor(i, 0);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_T(int i, int j, uint32_t c, uint8_t wait)
{
  if(j==3)
  {
    strip.setPixelColor(i, c);
  }
  else if((j==7) || (j==8))
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if(i==7)
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}
void Napisz_E(int i, int j, uint32_t c, uint8_t wait)
{
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if((j==7) || (j==8))
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if((i==7) || (i==6) || (i==3) || (i==4) || (i==0) || (i==1))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}
void Napisz_K(int i, int j, uint32_t c, uint8_t wait)
{
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if((j==7) || (j==8))
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==2)
  {
    if((i==4) || (i==3))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if(j==3)
  {
    if((i==5) || (i==2))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if(j==4)
  {
    if((i==6) || (i==1))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if(j==5)
  {
    if((i==7) || (i==0))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
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