#pragma once
#include <Adafruit_NeoPixel.h>

extern Adafruit_NeoPixel strip;

void Napisz_Spacje(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8){x=x+8;}
  strip.setPixelColor(i, 0);
}
void Napisz_A(int i, int j, uint32_t c, uint8_t wait)
{
  int x = i;
  if(x<8) {x=x+8;}
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
  if(x<8){x=x+8;}
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
  if(x<8){x=x+8;}
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
  if(x<8){x=x+8;}
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
  if(x<8){x=x+8;}
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
  if(x<8){x=x+8;}
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
  if(x<8){x=x+8;}
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
  if(j==6)
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
  if(x<8){x=x+8;}
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
  if(x<8){x=x+8;}
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
  if(x<8){x=x+8;}
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
  if(x<8){x=x+8;}
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
  if(x<8){x=x+8;}
  if(j==6)
  {
    strip.setPixelColor(i, 0);
  }
  else
  {
    if((x==9) || (x==9+j) || (x==15))
    {
      strip.setPixelColor(i, c);
    }
    else
    {
      strip.setPixelColor(i, 0);
    }
  }
}
