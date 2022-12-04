/*
 * software_timer.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */
#include "software_timer.h"

int LEDtimer_counter = COUNT_RESET;
int LEDtimer_flag = FLAG_OFF;

int SEG7timer_counter = COUNT_RESET;
int SEG7timer_flag = FLAG_OFF;

int LONGtimer_counter = COUNT_RESET;
int LONGtimer_flag = FLAG_OFF;

void setLEDTimer(int duration){
	LEDtimer_counter = duration;
	LEDtimer_flag = FLAG_OFF;
}

void setSEG7Timer(int duration){
	SEG7timer_counter = duration;
	SEG7timer_flag = FLAG_OFF;
}

void setLONGTimer(int duration){
	LONGtimer_counter = duration;
	LONGtimer_flag = FLAG_OFF;
}

void timerRun(){
	if(LEDtimer_counter > COUNT_RESET){
		LEDtimer_counter--;
		if(LEDtimer_counter == COUNT_RESET) LEDtimer_flag = FLAG_ON;
	}

	if(SEG7timer_counter > COUNT_RESET){
		SEG7timer_counter--;
		if(SEG7timer_counter == COUNT_RESET) SEG7timer_flag = FLAG_ON;
	}

	if(LONGtimer_counter > COUNT_RESET){
		LONGtimer_counter--;
		if(LONGtimer_counter == COUNT_RESET) LONGtimer_flag = FLAG_ON;
	}
}
