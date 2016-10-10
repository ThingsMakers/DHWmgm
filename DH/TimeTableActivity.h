/*
 * TimeTableActivity.h
 *
 *  Created on: 08. okt. 2016.
 *      Author: Nihad
 */

#ifndef TIMETABLEACTIVITY_H_
#define TIMETABLEACTIVITY_H_

#include "U8glib.h"
#include <Arduino.h>
#include "TimeTable.h"

class TimeTableActivity {
public:
	TimeTableActivity();
	virtual ~TimeTableActivity();
	void draw();

private:
	U8GLIB_SSD1306_128X64 *u8g;
	TimeTable times[7];

	void drawDaysMenu(int);
	void drawDayTimeTable(int);
	void handleTimeTableSettings(int);
};

#endif /* TIMETABLEACTIVITY_H_ */
