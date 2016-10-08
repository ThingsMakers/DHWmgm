#include <Arduino.h>
#include <U8glib.h>
#include "StatusActivity.h"
#include "MenuActivity.h"

StatusActivity statusActivity;
MenuActivity menuActivity;

int kpin;
int activity_index = 0;

// Ovo je most-outter input handler. Moze ici ili 0 (aktivnost nazad) ili 5 (aktivnost naprijed).
// Svaka aktivnost ima svoj interni input-handler (sigurnije iz razloga sto tako sprecavamo mogucnost
// modifikovanja jedne aktivnosti iz druge) .

void handleInput(){

	kpin=analogRead(15)/140; // uzmi input sa tastature
	delay(130);

	switch(kpin){

		case 0:
          activity_index -= 1;
          if(activity_index < 0)
        	  activity_index = 0;
          break;

		case 5:
	          activity_index += 1;
	          if(activity_index > 2)
	        	  activity_index = 2;
	          break;
		}

}

// Ova funk. ispisuje aktivnost na osnovu globalnog activity indexa.
void drawActivity(){

	switch(activity_index){
	case 0: statusActivity.drawEmpty(); break;
	case 1: statusActivity.draw(); break;
	case 2: menuActivity.draw(); break;

	}

}

void setup() {

}

void loop() {

	drawActivity();
	handleInput();
}
