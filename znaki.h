#pragma once
#include <Adafruit_NeoPixel.h>

extern Adafruit_NeoPixel strip;

void Napisz_Spacje(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  strip.setPixelColor(i, 0);
}
void Napisz_A(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  if((j==1) || (j==5))
  {
    if(x==15)
    {
      strip.setPixelColor(i, 0);
    }
    else
    {
      strip.setPixelColor(i, c);
    }
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if((x==12) || (x==15))
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
  int x = i;
  if(x<8){x=x+8;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==5)
  {
    if((x==10) || (x==11) || (x==14) || (x==13))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else
  {
    if((x==9) || (x==15) || (x==12))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}
void Napisz_C(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==5)
  {
    if((x==9) || (x==10) || (x==14) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
  }
  else
  {
    if((x==9) || (x== 15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}
void Napisz_D(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==5)
  {
    if((x==10) || (x==11) || (x==14) || (x==12) || (x==13))
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
    if((x==10) || (x==9) || (x==14) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else
  {
    if((x==9) || (x==15))
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
  int x = i;
  if(x<8){x=x+8;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==5)
  {
    if((x==9) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else
  {
    if((x==9) || (x==12) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_F(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if((x==12) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_G(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if((j==2) || (j==3))
  {
    if((x==9) || (x==15))
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
    if((x==9) || (x==11) || (x==15))
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
    if((x==12) || (x==13))
    {
      strip.setPixelColor(i, 0);
    }
    else
    {
      strip.setPixelColor(i, c);
    }
  }
}

void Napisz_H(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if( (j==1) || (j==5))
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if(x==12)
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_I(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if( (j==3))
  {
    strip.setPixelColor(i, c);
  }
  else
  {
    strip.setPixelColor(i, 0);
  }
}
void Napisz_J(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if(j==5)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if((j==3) || (j==4))
  {
    if((x==9) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if(j==2)
  {
    if((x==9) || (x==15) || (x==10))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if(j==1)
  {
    if(x==15)
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
  int x = i;
  if(x<9) {x=x+7;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==2)
  {
    if(x==12)
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
    if((x==11) || (x==13))
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
    if((x==10) || (x==14))
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
    if((x==9) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_L(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if(x==9)
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_M(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if((j==1) || (j==5))
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if((j==2) || (j==4))
  {
    if(x==14)
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
    if(x==13)
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
  int x = i;
  if(x<9) {x=x+7;}
  if( (j==1) || (j==5) )
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==2)
  {
    if((x==13) || (x==14))
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
    if((x==11) || (x==12) || (x==13))
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
    if((x==10) || (x== 11))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_O(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if((j==5) || (j==1))
  {
    if((x==10) || (x==11) || (x==14) || (x==12) || (x==13))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
    strip.setPixelColor(i, 0);
    }
  }
  else if((j==4) || (j==2))
  {
    if((x==10) || (x==9) || (x==14) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else
  {
    if((x==9) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_P(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==5)
  {
    if((x==13) || (x==14))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else
  {
    if((x==12) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_R(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  if(j==1)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==5)
  {
    if((x==13) || (x==14) || (x==9))
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
    if((x==12) || (x==15) || (x==10))
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
    if((x==12) || (x==15) || (x==11))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if(j==2)
  {
    if((x==12) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_S(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  if(j==1)
  {
    if((x==13) || (x==14))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if(j==5)
  {
    if((x==10) || (x==11) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if((j==4) || (j==3) || (j==2))
  {
    if((x==9) || (x==12) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_T(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if(j==3)
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if(x==15)
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_U(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if((j==1) || (j==5))
  {
    if(x==9)
    {
      strip.setPixelColor(i, 0);
    }
    else
    {
      strip.setPixelColor(i, c);
    }
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if(x==9)
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_W(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if((j==1) || (j==5))
  {
    strip.setPixelColor(i, c);
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else if((j==2) || (j==4))
  {
    if(x==10)
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
    if(x==11)
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}

void Napisz_Y(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if((j==1) || (j==5))
  {
    if((x==14) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
  else if((j==2) || (j==4))
  {
    if(x==13)
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
    if((x==13) || (x==14) || (x==15))
    {
      strip.setPixelColor(i, 0);
    }
    else
    {
      strip.setPixelColor(i, c);
    }
  }
  else if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
}

void Napisz_Z(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<9) {x=x+7;}
  if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if((x==9) || (x=9+j) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
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

