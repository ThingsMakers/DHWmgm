/*
 * MenuActivity.h
 *
 *  Created on: 16. dec. 2016.
 *      Author: Nihad Hrnjic
 */

#ifndef MENUACTIVITY_H_
#define MENUACTIVITY_H_

#include <Ucglib.h>

class MenuActivity {
public:
	MenuActivity();
	virtual ~MenuActivity();
	static bool drawMenu;
	void draw(int&);
	static int pressedButton;
	static unsigned long lastInterrupt;
    static void prevActivity();


private:
	Ucglib_ST7735_18x128x160_HWSPI *ucg;
};

#endif /* MENUACTIVITY_H_ */
