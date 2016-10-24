#include <Arduino.h>

#define btnLEFT    0
#define btnUP      2
#define btnDOWN    5
#define btnRIGHT   8
#define btnSELECT 12
#define btnNONE   17

unsigned long lastKeyPressedTime;

uint8_t readKeyPad(uint8_t keyRepeatSpeed){
	uint8_t kpVal=analogRead(0)/60;
	if (kpVal != btnNONE & lastKeyPressedTime + keyRepeatSpeed * 100 < millis()){
		lastKeyPressedTime = millis();
		return kpVal;
	}
	return btnNONE;
}

void setup(){
	Serial.begin(9600);
}

void loop(){
	Serial.println(readKeyPad(5));
}
