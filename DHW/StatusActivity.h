/*
 * StatusActivity.h
 *
 *  Created on: 16. dec. 2016.
 *      Author: Nihad Hrnjic
 */

#ifndef STATUSACTIVITY_H_
#define STATUSACTIVITY_H_

#include <Ucglib.h>

#include "Wire.h"
#include "RTClib.h"
#include "OneWire.h"
#include "DallasTemperature.h"

class StatusActivity {
public:
	StatusActivity();
	virtual ~StatusActivity();
	void drawEmpty(int&);
	void draw(int&);
	static bool drawBlank;
	static bool drawStatus;
	static void nextActivity();
	static void prevActivity();
	static unsigned long lastInterrupt;
	static int pressedButton;

private:
	Ucglib_ST7735_18x128x160_HWSPI *ucg;
	RTC_DS1307 *rtc;
	OneWire *oneWire;
	DallasTemperature *dt;

};

#endif /* STATUSACTIVITY_H_ */
