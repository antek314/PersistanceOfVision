#include "znaki.h"
#include <string.h>


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

  if(znak == '1'){Napisz_A(i , j, c, wait);}
  if(znak == '2'){Napisz_B(i , j, c, wait);}
  if(znak == '3'){Napisz_C(i , j, c, wait);}
  if(znak == '4'){Napisz_D(i , j, c, wait);}
  if(znak == '5'){Napisz_E(i , j, c, wait);}
  if(znak == '6'){Napisz_F(i , j, c, wait);}
  if(znak == '7'){Napisz_G(i , j, c, wait);}
  if(znak == '8'){Napisz_H(i , j, c, wait);}
  if(znak == '9'){Napisz_I(i , j, c, wait);}
  if(znak == '0'){Napisz_J(i , j, c, wait);}
}


void AnimacjaUsmiech(uint32_t kolor, uint8_t wait, int g, int i, int j)
{
  // Zakładamy: i = 0–15 (pion), j = 1–6 (kolumna), g = 0–4 (klatka)
  
  // Oczy - zmieniają się co klatkę (mruganie)
  if ((j == 2 && (i == 5 || i == 10)) || (j == 4 && (i == 5 || i == 10))) {
    if (g % 2 == 0) {
      strip.setPixelColor(i, kolor); // oczy otwarte
    } else {
      strip.setPixelColor(i, 0); // oczy zamknięte (czarne)
    }
  }

  // Uśmiech - porusza się w prawo i lewo z klatki na klatkę
  if ((j == 3 || j == 4) && i == (11 + (g % 2))) {
    strip.setPixelColor(i, kolor);
  }

  // Policzki - migają na końcach
  if ((j == 1 && i == 7) || (j == 6 && i == 8)) {
    if (g % 2 == 1) {
      strip.setPixelColor(i, strip.Color(255, 0, 0)); // czerwone policzki
    }
  }
}
