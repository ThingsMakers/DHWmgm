/*
 * TimeSpan.h
 *
 *  Created on: 06. dec. 2016.
 *      Author: Nihad Hrnjic
 */

#ifndef TIMESPAN2_H_
#define TIMESPAN2_H_

#include "Arduino.h"

class TimeSpan2 {
public:
	TimeSpan2();
	virtual ~TimeSpan2();

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
	void reset();
	void initSelectedTime();

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


#endif /* TIMESPAN2_H_ */
