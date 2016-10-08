/*
 * MenuActivity.cpp
 *
 *  Created on: 08. okt. 2016.
 *      Author: Nihad
 */

#include "MenuActivity.h"

MenuActivity::MenuActivity() {
	u8g = new U8GLIB_SSD1306_128X64(10, 9, 12, 11, 8);
	menu_index = 0;
	input = -1;

	menuItems[0] = "SET TIMETABLE";
	menuItems[1] = "SET DATE/TIME";
	menuItems[2] = "SET AL/AF";
	menuItems[3] = "SET SIM/SMS";
}

MenuActivity::~MenuActivity() {
	delete u8g;
	u8g = nullptr;
}

void MenuActivity::draw(){


   do{

   u8g->firstPage();
   do{

   u8g->setFont(u8g_font_6x10);

   makeMenu();

   }while(u8g->nextPage());

   input=analogRead(15)/140;
   delay(130);

   switch(input){
   case 1:
   menu_index -= 1;
   if(menu_index < 0)
	   menu_index = 3;
   break;

   case 2:
   menu_index += 1;
   if(menu_index > 3)
   	   menu_index = 0;
   break;

   case 5:
   handleSelect();
   break;

   }

   }while(input != 0);

}

void MenuActivity::makeMenu(){

	String menuItem;
	int y = 10;
	int size = 0;

	for(int i = 0; i < 4; i++){

		menuItem = "";

		if(menu_index == i){
			menuItem += "[";
			menuItem += menuItems[i];
			menuItem += "]";
		}else{
			menuItem += " ";
			menuItem += menuItems[i];
			menuItem += " ";
		}

		size = menuItem.length()+1;
		char buffer[size];
		menuItem.toCharArray(buffer, size);
		u8g->drawStr(10,y, buffer);
		y += 15;
	}
}

void MenuActivity::handleSelect(){

      switch(menu_index){

      case 0:
    	  TimeTableActivity timeTable;
    	  timeTable.draw();
    	  break;

      }
}



