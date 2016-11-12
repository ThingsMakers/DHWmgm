#include <Arduino.h>
#include <Ucglib.h>

#define TFT_CS   10
#define TFT_RST  8
#define TFT_DC   9

Ucglib_ST7735_18x128x160_HWSPI ucg(TFT_DC, TFT_CS, TFT_RST);

void setup(void) {
	ucg.begin(UCG_FONT_MODE_SOLID);
	ucg.setRotate270();
	ucg.clearScreen();
	ucg.setFont(ucg_font_ncenB08_hf);
	ucg.setColor(255, 0, 0);
	digitalWrite(A1, HIGH); // kroz analogni pin A1 se pali BackLight na LCD-u
	ucg.setPrintPos(2,25);
	ucg.print("Hello World!");
	ucg.drawFrame(0,0,160,128);
}

void loop(void) {
	delay(1000);
}
