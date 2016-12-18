/*
 * TimeTable.cpp
 *
 *  Created on: 06. dec. 2016.
 *      Author: Nihad Hrnjic
 */

#include "TimeTable.h"

TimeTable::TimeTable() {
	// TODO Auto-generated constructor stub

}

TimeTable::~TimeTable() {
	// TODO Auto-generated destructor stub
}

void TimeTable::drawModificationTimeTables(int row, int col, Ucglib_ST7735_18x128x160_HWSPI *ucg){

	  int y = 55;
	  String newString;

	  for(int i = 0; i < 3;i++){
	    newString = "";

	    if(i == row){
	      switch(col){
	        case 0:
	        newString = " ["+vremena[i].getTextBegin()+"] -  "+vremena[i].getTextEnd()+"  " +vremena[i].getTextTemp()+"  ";
	        break;
	        case 1:
	        newString = "  "+vremena[i].getTextBegin()+"  - ["+vremena[i].getTextEnd()+"] " +vremena[i].getTextTemp()+"  ";
	        break;
	        case 2:
	        newString = "  "+vremena[i].getTextBegin()+"  -  "+vremena[i].getTextEnd()+" [" +vremena[i].getTextTemp()+"] ";
	        break;
	      }
	    }else{
	       newString = "  "+vremena[i].getTextBegin()+"  -  "+vremena[i].getTextEnd()+"  " +vremena[i].getTextTemp()+"  ";
	    }
	      ucg->setPrintPos(5, y);
	      ucg->print(newString);
	      y += 20;
	  }

}


void TimeTable::drawTimeTables(Ucglib_ST7735_18x128x160_HWSPI *ucg){

	  int y = 55;
	  for(int i = 0; i < 3;i++){
	   String newString = "  "+vremena[i].getTextBegin()+"  -  "+vremena[i].getTextEnd()+"  " +vremena[i].getTextTemp()+"  ";
	   ucg->setPrintPos(5,y);
	   ucg->print(newString);
	   y += 20;
	  }
}

void TimeTable::update(int cmd, int row, int col){

	   if(cmd == -1)
		   return;

	   if(row == 0 && col > 0){
		     if(vremena[row].getMinuteBegin() == -1 || vremena[row].getHourBegin() == -1)
		     return;
	   }

	   if(row > 0){
	     if(vremena[row-1].getMinuteBegin() == -1 || vremena[row-1].getHourBegin() == -1)
	     return;

	   }else if(row == 0 && cmd == 5 && (vremena[row].getMinuteBegin() == -1 || vremena[row].getHourBegin() == -1) ){
	    //vremena[row].incrementBegin();
		   vremena[row].initSelectedTime();
	    return;
	   }

	   switch(col){
	    case 0:
	    if(cmd == 1){
	    vremena[row].incrementBegin();
	    // ovde cross
	    if(vremena[row+1].getHourBegin() > -1){
	    	if( (vremena[row].getHourEnd() == vremena[row+1].getHourBegin() && vremena[row].getMinuteEnd() > vremena[row+1].getMinuteBegin()) || vremena[row].getHourEnd() > vremena[row+1].getHourBegin()){
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
	    	  if((vremena[row].getHourEnd() == vremena[row+1].getHourBegin() && vremena[row].getMinuteEnd() > vremena[row+1].getMinuteBegin()) || vremena[row].getHourEnd() > vremena[row+1].getHourBegin()){
	    	     vremena[row+1].incrementBegin(); }
	    	   }
	    }

	    if(cmd == 2){

	    if(vremena[row].getMinuteBegin() == vremena[row-1].getMinuteEnd() && vremena[row].getHourBegin() == vremena[row-1].getHourEnd())
	           vremena[row].reset();

	    else
		    vremena[row].decrementEnd();

	   }

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

	   if(cmd == -1)
		   return;

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

