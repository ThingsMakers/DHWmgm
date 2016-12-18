/*
 * TimeTableActivity.cpp
 *
 *  Created on: 06. dec. 2016.
 *      Author: Nihad Hrnjic
 */

#include "TimeTableActivity.h"
#include <EnableInterrupt.h>

TimeTableActivity::TimeTableActivity() {

	 lastKeyPressTimestamp = 0;
	 ucg = new Ucglib_ST7735_18x128x160_HWSPI(9,10,8);

		    ucg->begin(UCG_FONT_MODE_SOLID);
			ucg->setRotate270();
			ucg->clearScreen();
			ucg->setFont(ucg_font_6x10_mf);
			ucg->setColor(255, 0, 0); // color for text
			ucg->setColor(1, 6,6,6);  // color for background, in this case matches the overall background (black).

}

TimeTableActivity::~TimeTableActivity() {
   delete ucg;
   ucg = nullptr;
}

byte TimeTableActivity::readKeypad(byte keyRepeatSpeed){

	byte DKpValue=0;
		DKpValue=31-digitalRead(7)-digitalRead(6)*2-digitalRead(5)*4-digitalRead(4)*8-digitalRead(3)*16;
		if(DKpValue != 0 && lastKeyPressTimestamp + keyRepeatSpeed * 10 < millis()) {
			lastKeyPressTimestamp = millis();
			return DKpValue;
			}

		return 0;
}

bool TimeTableActivity::canUpdate(){
	return (lastInterrupt + 150) < millis();
}

void TimeTableActivity::interuptFunctionOne(){

	if( (lastInterrupt + 150) < millis() ){
	dayIndex +=1;
	if(dayIndex > 6)
		dayIndex = 0;

	lastInterrupt = millis();
	}
}

void TimeTableActivity::interuptFunctionTwo(){

	if( (lastInterrupt + 150) < millis() ){
	dayIndex -= 1;
	if(dayIndex < 0)
		dayIndex = 8;

	lastInterrupt = millis();
	}
}

void TimeTableActivity::interuptEnterTimeTableModification(){

	if( (lastInterrupt + 150) < millis() ){
		runTimeTableModification = true;
        showTimeTableSettings = !showTimeTableSettings;
		lastInterrupt = millis();
	}

}

void TimeTableActivity::interuptColumnRight(){

	if( (lastInterrupt + 150) < millis() ){
	        col += 1;
	        if(col > 2)
	        	col = 0;
			lastInterrupt = millis();
		}
}

void TimeTableActivity::interuptColumnLeft(){

	if( (lastInterrupt + 150) < millis() ){
		        col -= 1;
		        if(col < 0)
		        	col = 2;
				lastInterrupt = millis();
			}
}

void TimeTableActivity::interuptRowDown(){


	if( (lastInterrupt + 150) < millis() ){
		        row += 1;
		        if(row > 2)
		        	row = 0;
				lastInterrupt = millis();
			}

}

void TimeTableActivity::interuptRowUp(){


	if( (lastInterrupt + 150) < millis() ){
		        row -= 1;

		        if(col == 0){
		        	if(row < 0){
		        		showTimeTableSettings = false;
		        		runTimeTableModification = false;
		        	}
		        }else{
		        	if(row < 0)
		        		row = 2;
		        }

				lastInterrupt = millis();
			}
}

void TimeTableActivity::toggleSelect(){
	if( (lastInterrupt + 150) < millis() ){
	isSelectedMode = !isSelectedMode;
	lastInterrupt = millis();
}
}

void TimeTableActivity::modificationInputUp(){
	if( (lastInterrupt + 100) < millis() ){
		modificationInput = 1;
		lastInterrupt = millis();
	}
}

void TimeTableActivity::modificationInputDown(){
	if( (lastInterrupt + 100) < millis() ){
		modificationInput = 2;
		lastInterrupt = millis();
	}
}

void TimeTableActivity::draw(){

	 enableInterrupt(3,&TimeTableActivity::interuptFunctionTwo, RISING);
	 enableInterrupt(6,&TimeTableActivity::interuptFunctionOne, RISING);
	 enableInterrupt(4,&TimeTableActivity::interuptEnterTimeTableModification, RISING);


	do{
		drawDaysMenu(dayIndex);


		if(showTimeTableSettings)
		handleTimeTableSettings(dayIndex);
		else
		drawDayTimeTable(dayIndex);

	}while(1);
}

void TimeTableActivity::drawDaysMenu(int day_index){

	int x = 15;
	int y = 20;

	  switch(day_index){
	      case 0:
	      ucg->setPrintPos(x,y);
	      ucg->print(" [P] U  S  C  P  S  N  ");
	      break;
	      case 1:
	      ucg->setPrintPos(x,y);
	      ucg->print("  P [U] S  C  P  S  N  ");
	      break;
	      case 2:
	      ucg->setPrintPos(x,y);
	      ucg->print("  P  U [S] C  P  S  N  ");
	      break;
	      case 3:
	      ucg->setPrintPos(x,y);
	      ucg->print("  P  U  S [C] P  S  N  ");
	      break;
	      case 4:
	      ucg->setPrintPos(x,y);
	      ucg->print("  P  U  S  C [P] S  N  ");
	      break;
	      case 5:
	      ucg->setPrintPos(x,y);
	      ucg->print("  P  U  S  C  P [S] N  ");
	      break;
	      case 6:
	      ucg->setPrintPos(x,y);
	      ucg->print("  P  U  S  C  P  S [N] ");
	      break;
	  }
}

void TimeTableActivity::drawDayTimeTable(int day_index){

    times[day_index].drawTimeTables(ucg);
}


void TimeTableActivity::handleTimeTableSettings(int day_index){


	  enableInterrupt(7, &TimeTableActivity::toggleSelect, RISING);

	  do{

		times[day_index].drawModificationTimeTables(row,col, ucg);

	    // ako sam u time-modification mode-u.
	    if(isSelectedMode){

        disableInterrupt(6);
        disableInterrupt(3);

        enableInterrupt(5, &TimeTableActivity::modificationInputUp,RISING);
        enableInterrupt(4, &TimeTableActivity::modificationInputDown,RISING);

	    times[day_index].checkAndSetTime(row, modificationInput, col); // provjeri da li je time iznad set-up, ako da, init ovaj na kraj onog iznad.
	    times[day_index].update(modificationInput, row,col); // metoda koja update-a model podataka.

	    }else{

	  	  enableInterrupt(6,&TimeTableActivity::interuptColumnRight, RISING);
	  	  enableInterrupt(3,&TimeTableActivity::interuptColumnLeft, RISING);
	  	  enableInterrupt(5,&TimeTableActivity::interuptRowUp, RISING);
	  	  enableInterrupt(4,&TimeTableActivity::interuptRowDown, RISING);
	    }

	    modificationInput = -1;

	    }while(runTimeTableModification);

		 enableInterrupt(3,&TimeTableActivity::interuptFunctionTwo, RISING);
		 enableInterrupt(6,&TimeTableActivity::interuptFunctionOne, RISING);
		 enableInterrupt(4,&TimeTableActivity::interuptEnterTimeTableModification, RISING);

}
