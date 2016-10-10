/*
 * TimeTable.cpp
 *
 *  Created on: 08. okt. 2016.
 *      Author: Nihad
 */

#include "TimeTable.h"

TimeTable::TimeTable(){
     u8g = new U8GLIB_SSD1306_128X64(10, 9, 12, 11, 8);
}

TimeTable::~TimeTable() {
	delete u8g;
	u8g = nullptr;
}


void TimeTable::drawModificationTimeTables(int row, int col, U8GLIB_SSD1306_128X64 *_u8g){


	  _u8g->setFont(u8g_font_6x10);
	  int y = 30;
	  String newString;

	  for(int i = 0; i < 3;i++){
	    newString = "";

	    if(i == row){
	      switch(col){
	        case 0:
	        newString += "[";
	        newString += vremena[i].getTextBegin();
	        newString += "]";
	        newString += "- ";
	        newString += vremena[i].getTextEnd();
	        newString += " ";
	        newString += vremena[i].getTextTemp();
	        newString += " ";
	        break;
	        case 1:
	        newString += " ";
	        newString += vremena[i].getTextBegin();
	        newString += " -";
	        newString += "[";
	        newString += vremena[i].getTextEnd();
	        newString += "]";
	        newString += vremena[i].getTextTemp();
	        newString += " ";
	        break;
	        case 2:
	        newString += " ";
	        newString += vremena[i].getTextBegin();
	        newString += " - ";
	        newString += vremena[i].getTextEnd();
	        newString += "[";
	        newString += vremena[i].getTextTemp();
	        newString += "]";
	        break;
	      }
	    }else{
	      newString = " "+vremena[i].getTextBegin()+" - "+vremena[i].getTextEnd()+" " +vremena[i].getTextTemp()+" ";
	    }
	      int size = newString.length()+1;
	      char buffer[size];
	      newString.toCharArray(buffer,size);
	      _u8g->drawStr(1, y, buffer);
	      y += 14;
	  }

}


void TimeTable::drawTimeTables(U8GLIB_SSD1306_128X64 *_u8g){

	  _u8g->setFont(u8g_font_6x10);

	  int y = 30;
	  for(int i = 0; i < 3;i++){
	   String newString = " "+vremena[i].getTextBegin()+" - "+vremena[i].getTextEnd()+" " +vremena[i].getTextTemp()+" ";
	   int size = newString.length()+1;
	   char buffer[size];
	   newString.toCharArray(buffer,size);
	   _u8g->drawStr(1, y,buffer);
	   y += 14;
	  }
}

void TimeTable::update(int cmd, int row, int col){

	   if(row == 0 && col > 0){
		     if(vremena[row].getMinuteBegin() == -1 || vremena[row].getHourBegin() == -1)
		     return;
	   }

	   if(row > 0){
	     if(vremena[row-1].getMinuteBegin() == -1 || vremena[row-1].getHourBegin() == -1)
	     return;

	   }else if(row == 0 && cmd == 5 && (vremena[row].getMinuteBegin() == -1 || vremena[row].getHourBegin() == -1) ){
	    vremena[row].incrementBegin();
	    return;
	   }

	   switch(col){
	    case 0:
	    if(cmd == 1){
	    vremena[row].incrementBegin();
	    // ovde cross
	    if(vremena[row+1].getHourBegin() > -1){
	    	if( vremena[row].getHourEnd() == vremena[row+1].getHourBegin() && vremena[row].getMinuteEnd() > vremena[row+1].getMinuteBegin() ){
	    		vremena[row+1].incrementBegin();
	    	}
	    }

	    }

	    if(cmd == 2){
        if(vremena[row].getMinuteBegin() == vremena[row-1].getMinuteEnd() && vremena[row].getHourBegin() == vremena[row-1].getHourEnd())
        	vremena[row].reset();

        else
	    vremena[row].decrementBegin();
	    }
	    break;
	    case 1:
	    if(cmd == 1){
	    vremena[row].incrementEnd();

	    if(vremena[row+1].getHourBegin() > -1){
	    	  if(vremena[row].getHourEnd() == vremena[row+1].getHourBegin() && vremena[row].getMinuteEnd() > vremena[row+1].getMinuteBegin()){
	    	     vremena[row+1].incrementBegin(); }
	    	   }
	    }

	    if(cmd == 2)
	    vremena[row].decrementEnd();

	    break;
	    case 2:
	    if(cmd == 1)
	    vremena[row].incrementTemp();
	    if(cmd == 2)
	    vremena[row].decrementTemp();
	    break;
	   }
}

void TimeTable::checkAndSetTime(int row, int cmd, int col){

    if(row > 0){

    	if(col > 0 && (vremena[row].getMinuteBegin() == -1 || vremena[row].getHourBegin() == -1))
		return;

     if( cmd == 5 && (vremena[row].getMinuteBegin() == -1 || vremena[row].getHourBegin() == -1) &&  (vremena[row-1].getMinuteBegin() != -1 || vremena[row-1].getHourBegin() != -1)){
        vremena[row].setMinuteBegin(vremena[row-1].getMinuteEnd());
        vremena[row].setHourBegin(vremena[row-1].getHourEnd());
        //vremena[row].setMinEnd(vremena[row].getMinBegin()+10);
        //vremena[row].setHourEnd(vremena[row].getHourBegin());
        vremena[row].updateEnd(vremena[row-1].getMinuteEnd(), vremena[row-1].getHourEnd());
     }

    }
}

bool TimeTable::shouldDeselect(int row){

	 if(vremena[row].getMinuteBegin() == -1 || vremena[row].getHourBegin() == -1)
	     return true;

	     else
	     return false;

}


