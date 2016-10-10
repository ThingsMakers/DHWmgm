/*
 * TimeSpan.cpp
 *
 *  Created on: 09. okt. 2016.
 *      Author: Nihad
 */

#include "TimeSpan.h"

TimeSpan::TimeSpan() {

	 _hourBegin = -1;
     _hourEnd = -1;
     _minuteBegin = -1;
	 _minuteEnd = -1;
	 _temperature = -1;
}

TimeSpan::~TimeSpan() {
	// TODO Auto-generated destructor stub
}


int TimeSpan::getHourBegin()const{
	return _hourBegin;
}

int TimeSpan::getHourEnd()const{
	return _hourEnd;
}

int TimeSpan::getMinuteBegin()const{
	return _minuteBegin;
}

int TimeSpan::getMinuteEnd()const{
	return _minuteEnd;
}

int TimeSpan::getTemp()const{
	return _temperature;
}


void TimeSpan::setHourBegin(int h){
	_hourBegin = h;
}

void TimeSpan::setHourEnd(int h){
	_hourEnd = h;
}

void TimeSpan::setMinuteBegin(int m){
	_minuteBegin = m;
}

void TimeSpan::setMinuteEnd(int m){
	_minuteEnd = m;
}

void TimeSpan::setTemp(int t){
	_temperature = t;
}

void TimeSpan::incrementBegin(){

	  if(_minuteBegin == -1 && _hourBegin == -1){
	      _minuteBegin = 0;
	      _hourBegin = 0;
	    }

	    if(_minuteBegin == 0 && _hourBegin == 0)
	    incrementEnd();

	    _minuteBegin += 10;

	   if(_minuteBegin == 60){
	    _hourBegin += 1;
	    _minuteBegin = 0;
	   }

	   if(_hourBegin == _hourEnd)
	   if( (_minuteEnd - _minuteBegin) == 0)
	   incrementEnd();

}

void TimeSpan::incrementEnd(){

	if(_minuteBegin == -1 || _hourBegin == -1)
	   return;

	    if(_minuteEnd == -1 && _hourEnd == -1){
	      _minuteEnd = 0;
	      _hourEnd = 0;
	    }

	    _minuteEnd += 10;

	   if(_minuteEnd == 60){
	    _hourEnd += 1;
	    _minuteEnd = 0;
	   }
}

void TimeSpan::decrementBegin(){

	_minuteBegin -= 10;

	   if(_minuteBegin < 0){

	    _hourBegin -= 1;

	    if(_hourBegin < 0){
	    _hourBegin = -1;
	    _hourEnd = -1;
	    _minuteBegin = -1;
	    _minuteEnd = -1;
	    _temperature = -1;
	    }
	    else
	    _minuteBegin = 50;
	   }
}

void TimeSpan::decrementEnd(){


	   if(_minuteBegin == -1 || _hourBegin == -1)
	   return;

	    _minuteEnd -= 10;

	   if(_minuteEnd < 0){
	    _hourEnd -= 1;

	    if(_hourEnd < 0){

	    _hourBegin = -1;
	    _hourEnd = -1;
	    _minuteBegin = -1;
	    _minuteEnd = -1;
	    _temperature = -1;
	    }
	    else
	    _minuteEnd = 50;
	   }

	   if(_hourBegin == _hourEnd)
	   if( (_minuteEnd - _minuteBegin) == 0)
	   decrementBegin();
}

void TimeSpan::updateEnd(int minute, int hour){

	 _hourEnd = hour;
	 _minuteEnd = minute;

	 incrementEnd();

	 if(_minuteEnd > 50){
	      _minuteEnd = 0;
	      _hourEnd += 1;
	     }


}

void TimeSpan::incrementTemp(){

	if(_minuteBegin == -1 || _hourBegin == -1)
	   return;

	    _temperature += 1;
}

void TimeSpan::decrementTemp(){


	   if(_minuteBegin == -1 || _hourBegin == -1)
	   return;

	    _temperature -= 1;
}

String TimeSpan::getTextBegin()const{

	String begin = "";

	    if(_hourBegin == -1)
	    begin += "--";

	    else{
	    if(_hourBegin < 10){
	      begin += "0";
	      begin += _hourBegin;
	    }else{
	      begin += String(_hourBegin);
	    } }
	    begin += ":";

	    if(_minuteBegin == -1)
	    begin += "--";

	    else{
	    if(_minuteBegin < 10){
	      begin += "0";
	      begin += _minuteBegin;
	    }else{
	      begin += String(_minuteBegin);
	    } }
	      return begin;
}

String TimeSpan::getTextEnd()const{

	String end = "";

	    if(_hourEnd == -1)
	    end = "--";

	    else{
	    if(_hourEnd < 10){
	      end += "0";
	      end += _hourEnd;
	    }else{
	      end += String(_hourBegin);
	    } }
	    end += ":";

	    if(_minuteEnd == -1)
	    end += "--";

	    else{
	    if(_minuteEnd < 10){
	      end += "0";
	      end += _minuteEnd;
	    }else{
	      end += String(_minuteEnd);
	    } }
	      return end;
}

String TimeSpan::getTextTemp()const{

	String temp = "";

	    if(_temperature == -1)
	    temp += "--";

	    else{
	    if(_temperature < 10){
	      temp += "0";
	      temp += _temperature;
	    }else
	    temp += String(_temperature);
	  }

	    temp += " C";

	    return temp;
}



