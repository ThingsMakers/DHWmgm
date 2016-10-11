/*
 * TimeTable.h
 *
 *  Created on: 08. okt. 2016.
 *      Author: Nihad
 */

#ifndef BUILD_MODELS_TIMETABLE_H_
#define BUILD_MODELS_TIMETABLE_H_

#include "TimeSpan.h"
#include "U8glib.h"

class TimeTable {
public:

	TimeSpan vremena[3];
    TimeTable();
	virtual ~TimeTable();
	void drawModificationTimeTables(int, int, U8GLIB_SSD1306_128X64*);
	void drawTimeTables(U8GLIB_SSD1306_128X64*);
	void update(int, int, int);
	void checkAndSetTime(int, int, int);
	bool shouldDeselect(int);

private:
	 //TimeSpan vremena[3];
	 U8GLIB_SSD1306_128X64 *u8g;
};

#endif /* BUILD_MODELS_TIMETABLE_H_ */
