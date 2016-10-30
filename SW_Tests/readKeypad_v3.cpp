#include <Arduino.h>

#define btnNONE   0
#define btnLEFT   1
#define btnDOWN   2
#define btnUP     4
#define btnRIGHT  8
#define btnSELECT 16


unsigned long lastKeyPressTimestamp;

void setup() {
	pinMode(3, INPUT_PULLUP); // attach btnSELECT because can attach ext interrupt to pin 3
	pinMode(4, INPUT_PULLUP); // attach btnRIGHT
	pinMode(5, INPUT_PULLUP); // attach btnUP
	pinMode(6, INPUT_PULLUP); // attach btnDOWN
	pinMode(7, INPUT_PULLUP); // attach btnLEFT
}

byte readKeypad(byte keyRepeatSpeed) {
	byte DKpValue=0;
	DKpValue=31-digitalRead(7)-digitalRead(6)*2-digitalRead(5)*4-digitalRead(4)*8-digitalRead(3)*16;
	if(DKpValue != btnNONE && lastKeyPressTimestamp + keyRepeatSpeed * 10 < millis()) {
		lastKeyPressTimestamp = millis();
		return DKpValue;
		}
	return btnNONE;
}

void loop() {

}
