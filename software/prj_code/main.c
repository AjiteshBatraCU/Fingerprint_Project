/*
 * main.c
 *
 *  Created on: Aug 5, 2019
 *      Author: ben
 */

#include <stdio.h>
#include <unistd.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "sys/alt_alarm.h"
#include <io.h>

void main() {
	int count;
	int speed = alt_ticks_per_second();
	while(1) {
		count = alt_nticks();
		if(count%1000 == 0 && (count/1000)%2 == 0)
			IOWR(PWM_CONTROL_BASE,0,5);
		else if (count%1000 == 0 && (count/1000)%2 == 1)
			IOWR(PWM_CONTROL_BASE,0,10);
	}
	return;
}
