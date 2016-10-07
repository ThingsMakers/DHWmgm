/*
 * DateTimeActivity.h
 *
 *  Created on: 07. okt. 2016.
 *      Author: Nihad Hrnjic
 *
 *      Ovo je prva aktivnost koju korisnik vidi pritiskom na select dugme dok je ekran blank.
 */

#ifndef STATUSACTIVITY_H_
#define STATUSACTIVITY_H_

#include <U8glib.h>

class StatusActivity {
public:
	StatusActivity();
	virtual ~StatusActivity();
	void draw();
	void drawEmpty();

private:
	U8GLIB_SSD1306_128X64 *u8g;
	String _datum;
	String _vrijeme;
	String  _mode;
	String  _temp;
	void getStatusInfo();

};

#endif /* STATUSACTIVITY_H_ */
