/*
 * timer.c
 *
 *  Created on: Oct 26, 2024
 *      Author: ACER
 */

#include <clocks.h>


void clocks(){
	second++;
	if(second == 60)
	{
		minute++;
		second = 0;
	}

	if(minute == 60)
	{
		hour++;
		minute = 0;
	}

	if(hour == 24)
	{
		hour = 0;
	}
}
