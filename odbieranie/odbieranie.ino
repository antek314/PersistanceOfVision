#include <WiFi.h>
#include <WiFiUdp.h>
#include <Adafruit_NeoPixel.h>
#include <string.h>
#include<math.h>

#define PIXEL_PIN 8 // pin do ktorego podlaczono pasek led
#define PIXEL_COUNT 17 // liczba diod w pasku led

unsigned long poprzedniCzas = 0; // czas poprzedniego przeciecia czujnika halla z magnesem
unsigned long czas = 0; // aktualny czas, pobierany do obliczen
unsigned long czasObrotu = 0; // czas z jakim wykonany zostal aktualny obrot - obliczony jako czas - poprzedniCzas
uint32_t czasOpoznienia = 0; // regulowany czas pomiędzy wyswietlaniem kolejnej kombinacji diody - zalezny od predkosci obrotu

const char* ssid = "ESP-C3-AP";
const char* password = "12345678";

WiFiUDP Udp;
const int UDP_PORT = 4210;

uint8_t dataBuffer[108 * 34 * 3];
int receivedBytes = 0;

bool wyswietl = false;

int bitmapa_przeksztalcona[108][34][3] = {0};

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

//int data[108][34][3]; do usuniecia

void setup() {

  pinMode(A2, INPUT);
  strip.begin();
  strip.show();

  Serial.begin(115200);
  delay(1000);

  Serial.println("Startuję jako Access Point...");

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  Serial.print("AP IP: ");
  Serial.println(WiFi.softAPIP());

  Udp.begin(UDP_PORT);
  Serial.println("UDP serwer gotowy");
  wyswietl = true;
}

void loop() {
  if((analogRead(A2) > 470) && wyswietl){
  //while(true){
    czas = micros();
    //licznik = Animacja(czasOpoznienia, licznik, klatka);
    //Wyswietl(czasOpoznienia, "zupa", "halo");

// liczenie predkosci
/*******************************************/
    /*czasObrotu = czas - poprzedniCzas;

    char predkosc[10] = "";
    sprintf(predkosc, "%lu", czasObrotu); // %lu = unsigned long
    Wyswietl(750, "wzor", predkosc);

    poprzedniCzas = czas;*/

/*******************************************/


// regulacja opoznienia
/*******************************************/
    czasObrotu = czas - poprzedniCzas;
    //float x = 0.00001666;
    float a = 0.023125;
    float b = 968.75;
    float wynik = czasObrotu * a - b; 
    czasOpoznienia = static_cast<uint32_t>(wynik);
    czasOpoznienia = 200;
    /****************/
    char opoznienie[10] = "";
    //sprintf(opoznienie, "%lu", czasOpoznienia); 
    // %lu = unsigned long
    /**************/
/*******************************************/

    FunkcjaKtoraWyswietlaCalaMacierz(czasOpoznienia);
    //Wyswietl(czasOpoznienia, "wzor", "a");
    poprzedniCzas = czas;

/******************************************/
  //wyswietl = false;
  }
  // if((analogRead(A2) < 470) && !wyswietl){
  //   delayMicroseconds(10000);
  //   wyswietl = true;
  // }

  int packetSize = Udp.parsePacket();
  if (packetSize) {

    wyswietl = false;
    uint8_t buffer[512];   // jedna paczka
    int len = Udp.read(buffer, sizeof(buffer));

    // kopiowanie do pełnej tablicy
    for (int i = 0; i < len; i++) {
      if (receivedBytes < sizeof(dataBuffer)) {
        dataBuffer[receivedBytes++] = buffer[i];
      }
    }

    Serial.print("Odebrano paczkę: ");
    Serial.print(len);
    Serial.print(" bajtów, razem = ");
    Serial.println(receivedBytes);

    // jeśli całość przyszła – potwierdź
    if (receivedBytes >= sizeof(dataBuffer)) {
      Serial.println("=== ODEBRANO CAŁĄ TABLICĘ ===");

      Udp.beginPacket(Udp.remoteIP(), Udp.remotePort());
      Udp.print("DONE");
      Udp.endPacket();

      polacz();
      wyswietl_serial();

      receivedBytes = 0; // opcjonalnie reset
    }
  }
  wyswietl = true;
}
void polacz(){
  int x = 0;
  for (int i=0; i<108; i++)
    for (int j=0; j<34; j++)
      for (int k=0; k<3; k++){
        bitmapa_przeksztalcona[i][j][k] = dataBuffer[x];
        x++;}
}
void wyswietl_serial(){
  for (int i=0; i<108; i++)
    for (int j=0; j<34; j++)
      for (int k=0; k<3; k++)
        Serial.print(bitmapa_przeksztalcona[i][j][k]);
}

void FunkcjaKtoraWyswietlaCalaMacierz(uint32_t opoznienie)
{
  uint32_t color = strip.Color(250, 0, 0);
  for(int j=0; j<108; j++)
  {
    //if(analogRead(A2) > 470)
    //{
      for(int i=0; i<strip.numPixels(); i++)
      {
        WyswietlBitmape(j, i, color);
      }
    //}
    //else{break;}
    strip.show();
    //delay(wait);
    if(opoznienie>4000){opoznienie = 4000;}
    delayMicroseconds(opoznienie);
  }
}
void WyswietlBitmape(int j, int i, uint32_t c)
{
  if((bitmapa_przeksztalcona[j][i+9][0]!=0 || bitmapa_przeksztalcona[j][i+9][1]!=0 || bitmapa_przeksztalcona[j][i+9][2]!=0) && (j!=107))
  {
      uint32_t color = strip.Color(bitmapa_przeksztalcona[j][i+9][2], bitmapa_przeksztalcona[j][i+9][1], bitmapa_przeksztalcona[j][i+9][0]);
    strip.setPixelColor(i, color);
  }
  else
  {
    strip.setPixelColor(i, 0);
  }
}

