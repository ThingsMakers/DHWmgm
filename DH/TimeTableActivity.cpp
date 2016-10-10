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
				drawDayTimeTable(day_index);
			}while(u8g->nextPage());

	input=analogRead(15)/140;
	delay(130);

	if(input == 0 && day_index == 0)
		break; // exit case

	switch(input){
	case 0:
		day_index -= 1;
		break;

	case 2:
    handleTimeTableSettings(day_index);
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

void TimeTableActivity::drawDayTimeTable(int day_index){

    times[day_index].drawTimeTables(u8g);
}

void TimeTableActivity::handleTimeTableSettings(int day_index){

	  int row=0;
	  int col=0;
	  int input;
	  bool selected = false;

	  do{

	  u8g->firstPage();
	  do {
	    drawDaysMenu(day_index);
	    times[day_index].drawModificationTimeTables(row,col, u8g);

	      } while( u8g->nextPage() );

	    input=analogRead(15)/140; // uzmi input sa tastature
	    delay(130);

	    if(input == 5){
	    	selected = !selected;
	    }
	    // ako sam u time-modification mode-u.
	    if(selected == true){

	    times[day_index].checkAndSetTime(row, input); // provjeri da li je time iznad set-up, ako da, init ovaj na kraj onog iznad.
	    times[day_index].update(input, row,col); // metoda koja update-a model podataka.

	    }else{

	    switch(input){
	      case 0: col -= 1; break;
	      case 1: row -= 1; break;
	      case 2: row += 1; break;
	      case 3: col += 1; break;
	      //case 5: selected = !selected; break;
	    }

	    }


	    }while(row !=-1);
}



