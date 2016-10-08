/*
 * TimeTableActivity.cpp
 *
 *  Created on: 08. okt. 2016.
 *      Author: Nihad
 */

#include "TimeTableActivity.h"

TimeTableActivity::TimeTableActivity() {

	u8g = new U8GLIB_SSD1306_128X64(10, 9, 12, 11, 8);
	input = -1;

}

TimeTableActivity::~TimeTableActivity() {
   delete u8g;
   u8g = nullptr;
}

void TimeTableActivity::draw(){

	do{

		u8g->firstPage();
			do{
				u8g->setFont(u8g_font_6x10);
				u8g->drawStr(10,10, "Timetable activity");
			}while(u8g->nextPage());

	input=analogRead(15)/140;
	delay(130);

	}while(input != 0);
}

