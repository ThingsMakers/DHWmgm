#include <Arduino.h>
#include <Ucglib.h>

#define TFT_CS   53
#define TFT_RST  48
#define TFT_DC   49
#define TFT_SCLK 52
#define TFT_MOSI 51

Ucglib_ST7735_18x128x160_HWSPI ucg(TFT_DC, TFT_CS, TFT_RST);

void setup(void){
  delay(1000);
  ucg.begin(UCG_FONT_MODE_TRANSPARENT);
  ucg.clearScreen();
}

void loop(void){
  ucg.setRotate270();
  ucg.setFont(ucg_font_ncenR14_tr);
  ucg.setPrintPos(0,25);
  ucg.setColor(255, 255, 0);
  ucg.print("Hello World!");
  ucg.setPrintPos(0,50);
  ucg.setColor(0, 255, 0);
  ucg.print("Hello World!");
  ucg.setPrintPos(0,75);
  ucg.setColor(0, 255, 255);
  ucg.print("Hello World!");
  ucg.setPrintPos(0,100);
  ucg.setColor(255, 0, 0);
  ucg.print("Hello World!");
  delay(500);
}
