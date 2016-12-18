#include <Arduino.h>
#include "TimeTableActivity.h"
#include "StatusActivity.h"
#include "MenuActivity.h"
#define LIBCALL_ENABLEINTERRUPT
#include "EnableInterrupt.h"

int TimeTableActivity::dayIndex = 0;
unsigned long TimeTableActivity::lastInterrupt = 0;
bool TimeTableActivity::showTimeTableSettings = false;
int TimeTableActivity::col = 0;
int TimeTableActivity::row = 0;
bool TimeTableActivity::runTimeTableModification = true;
bool TimeTableActivity::isSelectedMode = false;
int TimeTableActivity::modificationInput = -1;

bool StatusActivity::drawBlank = false;
bool StatusActivity::drawStatus = false;
unsigned long StatusActivity::lastInterrupt = 0;
int StatusActivity::pressedButton = -1;

bool MenuActivity::drawMenu = false;
int MenuActivity::pressedButton = -1;
unsigned long MenuActivity::lastInterrupt = 0;

int activityIndex = 0;

TimeTableActivity timetableActivity;
StatusActivity statusActivity;
MenuActivity menuActivity;

void setup(void) {

	Serial.begin(115200);

	pinMode(3, INPUT_PULLUP); // attach btnSELECT because can attach ext interrupt to pin 3
	pinMode(4, INPUT_PULLUP); // attach btnRIGHT
	pinMode(5, INPUT_PULLUP); // attach btnUP
	pinMode(6, INPUT_PULLUP); // attach btnDOWN
	pinMode(7, INPUT_PULLUP); // attach btnLEFT
	digitalWrite(A1, HIGH); // kroz analogni pin A1 se pali BackLight na LCD-u
}

void loop(void) {


	switch(activityIndex){

	case 0:
		statusActivity.drawEmpty(activityIndex);
		break;

	case 1:
		statusActivity.draw(activityIndex);
		break;

	case 2:
		menuActivity.draw(activityIndex);
		break;

	}

}


