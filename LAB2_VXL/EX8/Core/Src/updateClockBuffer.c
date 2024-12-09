/*
 * updateClockBuffer.c
 *
 *  Created on: Oct 26, 2024
 *      Author: ACER
 */
#include <updateClockBuffer.h>
int index_led = 0;
int led_buffer[4] = {1,2,3,4} ;

void updateClockBuffer(int index)
{
	if(hour < 10)
		{
			led_buffer[0] = 0;
			led_buffer[1] = hour;
		}

		if(hour >= 10)
		{
			led_buffer[0] = hour/10;
			led_buffer[1] = hour%10;
		}

		if(minute < 10)
		{
			led_buffer[2] = 0;
			led_buffer[3] = minute;
		}

		if(minute >= 10)
		{
			led_buffer[2] = minute/10;
			led_buffer[3] = minute%10;
		}
}
