/*
 * TimeTableActivity.h
 *
 *  Created on: 06. dec. 2016.
 *      Author: Nihad Hrnjic
 */

#ifndef TIMETABLEACTIVITY_H_
#define TIMETABLEACTIVITY_H_

#include <Ucglib.h>
#include "TimeTable.h"

class TimeTableActivity {
public:
	TimeTableActivity();
	virtual ~TimeTableActivity();
	void draw();
	byte readKeypad(byte keyRepeatSpeed);
	static void interuptFunctionOne();
	static void interuptFunctionTwo();
    static void interuptEnterTimeTableModification();
    static void interuptColumnRight();
    static void interuptColumnLeft();
    static void interuptRowDown();
    static void interuptRowUp();
    static void toggleSelect();
    static void modificationInputUp();
    static void modificationInputDown();

private:
	TimeTable times[7];
	static int dayIndex;
	static int col;
	static int row;
	static bool runTimeTableModification;
	static unsigned long lastInterrupt;
	static bool showTimeTableSettings;
	static bool isSelectedMode;
	static int modificationInput;
	Ucglib_ST7735_18x128x160_HWSPI *ucg;
	unsigned long lastKeyPressTimestamp;
	void drawDaysMenu(int);
	void drawDayTimeTable(int);
	void handleTimeTableSettings(int);
	bool canUpdate();

};

#endif /* TIMETABLEACTIVITY_H_ */
