/*
 * MenuActivity.cpp
 *
 *  Created on: 16. dec. 2016.
 *      Author: Nihad Hrnjic
 */

#include "MenuActivity.h"

#define LIBCALL_ENABLEINTERRUPT
#include "EnableInterrupt.h"

MenuActivity::MenuActivity() {

	 ucg = new Ucglib_ST7735_18x128x160_HWSPI(9,10,8);

		    ucg->begin(UCG_FONT_MODE_SOLID);
			ucg->setRotate270();
			ucg->clearScreen();
			ucg->setFont(ucg_font_6x10_mf);
			ucg->setColor(255, 0, 0); // color for text
			ucg->setColor(1, 6,6,6);  // color for background, in this case matches the overall background (black).


}

MenuActivity::~MenuActivity() {
	delete ucg;
	ucg = nullptr;
}


void MenuActivity::draw(int &index){

	drawMenu = true;
	enableInterrupt(3, MenuActivity::prevActivity, RISING);


	while(drawMenu){

		ucg->setPrintPos(30,15);
		ucg->print("Menu Activity");
   }

	if(pressedButton == 0)
		index -= 1;

	ucg->clearScreen();

}

void MenuActivity::prevActivity(){

	if( (lastInterrupt + 150) < millis() ){
			drawMenu = false;
			lastInterrupt = millis();
			pressedButton = 0;
		}

}
