/*
 * TimeSpan.h
 *
 *  Created on: 08. okt. 2016.
 *      Author: Nihad Hrnjic
 */

#ifndef BUILD_MODELS_TIMESPAN_H_
#define BUILD_MODELS_TIMESPAN_H_

#include "Arduino.h"

class TimeSpan {
public:
	TimeSpan();
	virtual ~TimeSpan();

	// getters
	int getHourBegin()const;
	int getMinuteBegin()const;
	int getHourEnd()const;
	int getMinuteEnd()const;
	int getTemp()const;

	// setters
	void setHourBegin(int);
	void setMinuteBegin(int);
	void setHourEnd(int);
	void setMinuteEnd(int);
	void setTemp(int);

	// update time
	void incrementBegin();
	void decrementBegin();
	void incrementEnd();
	void decrementEnd();
	void updateEnd(int,int);
	void incrementTemp();
	void decrementTemp();

	// text getters -> what will be displayed on screen
	String getTextBegin()const;
	String getTextEnd()const;
	String getTextTemp()const;


private:
	  int _hourBegin;
	  int _hourEnd;
	  int _minuteBegin;
	  int _minuteEnd;
	  int _temperature;

};

#endif /* BUILD_MODELS_TIMESPAN_H_ */
