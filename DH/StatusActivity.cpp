/*
 *
 *  Created on: 07. okt. 2016.
 *      Author: Nihad
 */

#include "StatusActivity.h"

StatusActivity::StatusActivity() {
	u8g = new U8GLIB_SSD1306_128X64(10, 9, 12, 11, 8);
}

StatusActivity::~StatusActivity() {

	delete u8g;
	u8g = nullptr;
}

void StatusActivity::getStatusInfo(){

	// citaj sa senzora/memorije te upisi vrijednosti u varijable.
	_datum = "12.03.2016";
	_vrijeme = "15:30";
	_mode = "Auto/AL";
	_temp = "22 C";

}

void StatusActivity::draw(){

	getStatusInfo(); // prije ispisa, uzmi nove statusne informacije.

	char tmp_datum[_datum.length()+1];
	char tmp_vrijeme[_vrijeme.length()+1];
	char tmp_mode[_mode.length()+1];
	char tmp_temp[ _temp.length()+1];

	_datum.toCharArray(tmp_datum, _datum.length()+1);
	_vrijeme.toCharArray(tmp_vrijeme, _vrijeme.length()+1);
	_mode.toCharArray(tmp_mode, _mode.length()+1);
	_temp.toCharArray(tmp_temp, _temp.length()+1);

	u8g->firstPage();
	do{
		  u8g->setFont(u8g_font_6x13);
		  u8g->drawStr( 10, 13, tmp_datum);
		  u8g->drawStr( 75, 13, tmp_vrijeme);
		  u8g->drawStr( 40, 38, tmp_mode);
		  u8g->drawStr( 40, 55, tmp_temp);

	}while(u8g->nextPage());
}

void StatusActivity::drawEmpty(){
	u8g->firstPage();
		do{
			  u8g->setFont(u8g_font_6x13);
			  u8g->drawStr( 10, 13, "");

		}while(u8g->nextPage());
}

