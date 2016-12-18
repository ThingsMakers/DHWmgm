/*
 * StatusActivity.cpp
 *
 *  Created on: 16. dec. 2016.
 *      Author: Nihad Hrnjic
 */

#include "StatusActivity.h"
#define LIBCALL_ENABLEINTERRUPT
#include "EnableInterrupt.h"

StatusActivity::StatusActivity() {

	oneWire = new OneWire(2);

	dt = new DallasTemperature(oneWire);
	dt->begin();

	rtc = new RTC_DS1307();
	rtc->begin();

	//rtc->adjust(DateTime(__DATE__, __TIME__));

	Wire.begin();

	 ucg = new Ucglib_ST7735_18x128x160_HWSPI(9,10,8);

		    ucg->begin(UCG_FONT_MODE_SOLID);
			ucg->setRotate270();
			ucg->clearScreen();
			ucg->setFont(ucg_font_6x10_mf);
			ucg->setColor(255, 0, 0); // color for text
			ucg->setColor(1, 6,6,6);  // color for background, in this case matches the overall background (black).
}

StatusActivity::~StatusActivity() {
	delete ucg;
	ucg = nullptr;

	delete rtc;
	rtc = nullptr;
}

void StatusActivity::drawEmpty(int &index){

	enableInterrupt(6, &StatusActivity::nextActivity, RISING);
    drawStatus = true;

	while(drawStatus){
		ucg->setPrintPos(0,0);
			ucg->print("");
	}

	index += 1;
}

void StatusActivity::draw(int &index){

	enableInterrupt(6, &StatusActivity::nextActivity, RISING);
	enableInterrupt(3, &StatusActivity::prevActivity, RISING);

	drawStatus = true;


	String timeDisplay = "";
	String dateDisplay = "";
	String dayName = "";
	String tempDisplay;
    String hourStr;
    String minStr;

	if(rtc->isrunning()){

	DateTime time = rtc->now();

	switch(time.dayOfTheWeek()){

	case 0:
		dayName = "Sunday";
		break;

	case 1:
		dayName = "Monday";
		break;

	case 2:
		dayName = "Tuesday";
		break;

	case 3:
		dayName = "Wednesday";
		break;

	case 4:
		dayName = "Thursday";
		break;

	case 5:
		dayName = "Friday";
		break;

	case 6:
		dayName = "Saturday";
		break;
	}

	if(time.hour() >= 10){
		hourStr = "";
		hourStr += time.hour();
	}else{
       hourStr = "0";
       hourStr += time.hour();
	}

	if(time.minute() >= 10){
			minStr = "";
			minStr += time.minute();
		}else{
	       minStr = "0";
		   minStr += time.minute();
		}

	timeDisplay = hourStr + ":"+minStr;

	dateDisplay =  time.day();
	dateDisplay += "-";
	dateDisplay += time.month();
	dateDisplay += "-";
	dateDisplay += time.year();

	dt->requestTemperatures();
	int temp = dt->getTempCByIndex(0);

	tempDisplay = "Temp: ";
	tempDisplay += temp;

	}else{
		timeDisplay = "RTC is not running";
	}

	while(drawStatus){
		ucg->setPrintPos(30,15);
		ucg->print("System Status");

		ucg->setPrintPos(30,30);
		ucg->print(timeDisplay);

		ucg->setPrintPos(30,45);
		ucg->print(dateDisplay);

		ucg->setPrintPos(30,60);
		ucg->print(dayName);

		ucg->setPrintPos(30,75);
		ucg->print(tempDisplay);

	}

	if(pressedButton == 0)
		index -= 1;
	if(pressedButton == 1)
		index += 1;

   ucg->clearScreen();
}

void StatusActivity::nextActivity(){

	if( (lastInterrupt + 150) < millis() ){
		drawStatus = false;
		lastInterrupt = millis();
		pressedButton = 1;
	}
}

void StatusActivity::prevActivity(){

	if( (lastInterrupt + 150) < millis() ){
		drawStatus = false;
		lastInterrupt = millis();
		pressedButton = 0;
	}
}



