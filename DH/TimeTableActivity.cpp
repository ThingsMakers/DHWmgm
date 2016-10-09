/*
 * TimeTableActivity.cpp
 *
 *  Created on: 08. okt. 2016.
 *      Author: Nihad
 */

#include "TimeTableActivity.h"

TimeTableActivity::TimeTableActivity() {

	u8g = new U8GLIB_SSD1306_128X64(10, 9, 12, 11, 8);

}

TimeTableActivity::~TimeTableActivity() {
   delete u8g;
   u8g = nullptr;
}

void TimeTableActivity::draw(){

	int input;
	int day_index = 0;

	do{

		u8g->firstPage();
			do{
				drawDaysMenu(day_index);
			}while(u8g->nextPage());

	input=analogRead(15)/140;
	delay(130);

	if(input == 0 && day_index == 0)
		break; // exit case

	switch(input){
	case 0:
		day_index -= 1;
		break;

	case 3:
		day_index += 1;
		if(day_index > 6)
		day_index = 0;
		break;
	}

	}while(true);
}

void TimeTableActivity::drawDaysMenu(int day_index){

	  u8g->setFont(u8g_font_6x13);
	  switch(day_index){
	      case 0:
	      u8g->drawStr( 0, 13, "[P] U  S  C  P  S  N ");break;
	      case 1:
	      u8g->drawStr( 0, 13, " P [U] S  C  P  S  N ");break;
	      case 2:
	      u8g->drawStr( 0, 13, " P  U [S] C  P  S  N ");break;
	      case 3:
	      u8g->drawStr( 0, 13, " P  U  S [C] P  S  N ");break;
	      case 4:
	      u8g->drawStr( 0, 13, " P  U  S  C [P] S  N ");break;
	      case 5:
	      u8g->drawStr( 0, 13, " P  U  S  C  P [S] N ");break;
	      case 6:
	      u8g->drawStr( 0, 13, " P  U  S  C  P  S [N]");break;
	      case 7:
	      u8g->drawStr( 0, 13, "[P][U][S][C][P] S  N ");break;
	      case 8:
	      u8g->drawStr( 0, 13, " P  U  S  C  P [S][N]");break;
	  }

	  u8g->drawHLine(0,15,128);
}

