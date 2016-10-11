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

	int flag = EEPROM.read(0);
	if(flag == 28)
		readTimeTable();

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
	  bool end_loop = false;

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

	    times[day_index].checkAndSetTime(row, input, col); // provjeri da li je time iznad set-up, ako da, init ovaj na kraj onog iznad.
	    times[day_index].update(input, row,col); // metoda koja update-a model podataka.

	    }else{

	    switch(input){
	      case 0:
	      col -= 1;
	      if(col < 0)
	    	  col = 2;
	      break;
	      case 1:
	      if(row == 0 && col == 0)
	    	  end_loop = true;

	      row -= 1;
	      if(row < 0)
	    	  row = 2;
	      break;
	      case 2:
	      row += 1;
	      if(row > 2)
	    	  row = 0;
	      break;
	      case 3:
	      col += 1;
		  if(col > 2 )
		      col = 0;
	      break;
	      //case 5: selected = !selected; break;
	    }

	    if(end_loop == true)
	    	break;

	    }

	    }while(true);

	  // upon leaving timetable modificatin loop, save the new state to memory.
      saveTimeTable();

}

void TimeTableActivity::saveTimeTable(){

	int addr = 0;

	EEPROM.write(addr, 28); // 28 je flag na prvoj mem. lokaciji koji oznacava da je timetable upisivan u EEPROM barem jednom.

	addr += 1;

	for(int i = 0; i < 7; i++){

          for(int x = 0; x < 3; x++){

        	  EEPROM.write(addr, times[i].vremena[x].getHourBegin()); // spasi pocetni sat
        	  addr += 1;
        	  EEPROM.write(addr, times[i].vremena[x].getMinuteBegin()); // spasi pocetnu minutu
        	  addr += 1;
        	  EEPROM.write(addr, times[i].vremena[x].getHourEnd()); // spasi zavrsni sat
        	  addr += 1;
        	  EEPROM.write(addr, times[i].vremena[x].getMinuteEnd()); // spasi pocetni sat
        	  addr += 1;
        	  EEPROM.write(addr, times[x].vremena[x].getTemp()); // spasi pocetni sat
        	  addr += 1;

          }
	}
}

void TimeTableActivity::readTimeTable(){

	int addr = 1;
	int value;

	for(int i = 0; i < 7; i++){

          for(int x = 0; x < 3; x++){

        	 value = EEPROM.read(addr);
        	 if(value == 255)
        		 value = -1;
        	 times[i].vremena[x].setHourBegin(value);
        	 addr += 1;

        	 value = EEPROM.read(addr);
        	 if(value == 255)
        	     value = -1;
        	 times[i].vremena[x].setMinuteBegin(value);
        	 addr += 1;

        	 value = EEPROM.read(addr);
        	 if(value == 255)
        	  value = -1;
        	 times[i].vremena[x].setHourEnd(value);
        	 addr += 1;

        	 value = EEPROM.read(addr);
        	 if(value == 255)
        	     value = -1;
        	 times[i].vremena[x].setMinuteEnd(value);
        	 addr += 1;

        	 value = EEPROM.read(addr);
        	 if(value == 255)
        	     value = -1;
        	 times[i].vremena[x].setTemp(value);
        	 addr += 1;

          }
	}

}

void TimeTableActivity::clearMemory(){

	int addr = 1;

	for(int i = 0; i < 7; i++){

	          for(int x = 0; x < 3; x++){

	        	  EEPROM.write(addr, -1); // spasi pocetni sat
	        	  addr += 1;
	        	  EEPROM.write(addr, -1); // spasi pocetnu minutu
	        	  addr += 1;
	        	  EEPROM.write(addr, -1); // spasi zavrsni sat
	        	  addr += 1;
	        	  EEPROM.write(addr, -1); // spasi pocetni sat
	        	  addr += 1;
	        	  EEPROM.write(addr, -1); // spasi pocetni sat
	        	  addr += 1;

	          }
		}

}










