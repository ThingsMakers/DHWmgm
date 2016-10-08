/*
 * MenuActivity.h
 *
 *  Created on: 08. okt. 2016.
 *      Author: Nihad
 */

#ifndef MENUACTIVITY_H_
#define MENUACTIVITY_H_

#include <U8glib.h>
#include <Arduino.h>
#include "TimeTableActivity.h"

class MenuActivity {
public:
	MenuActivity();
	virtual ~MenuActivity();
	void draw();

private:
	String menuItems[4];
	U8GLIB_SSD1306_128X64 *u8g;
	int menu_index;
	int input;

	void makeMenu();
	void handleSelect();




};

#endif /* MENUACTIVITY_H_ */
