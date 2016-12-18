/*
 * TimeTable.h
 *
 *  Created on: 06. dec. 2016.
 *      Author: Nihad Hrnjic
 */

#ifndef TIMETABLE_H_
#define TIMETABLE_H_

#include <Ucglib.h>
#include "TimeSpan2.h"

class TimeTable {
public:

	TimeSpan2 vremena[3];
    TimeTable();
	virtual ~TimeTable();
	void drawModificationTimeTables(int, int, Ucglib_ST7735_18x128x160_HWSPI*);
	void drawTimeTables(Ucglib_ST7735_18x128x160_HWSPI*);
	void update(int, int, int);
	void checkAndSetTime(int, int, int);
	bool shouldDeselect(int);

};

#endif /* TIMETABLE_H_ */
