/*
 * fsm_save_value.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Admin
 */

#include "fsm_save_value.h"
void fsm_save_value_run() {
	switch (status) {
	case RED_SAVE:
		time_red = time_red;
		clearLed();
		clearLed1();
		if (timer1_flag == 1) {
			status = INIT;
		}
		break;
	case GREEN_SAVE:
		time_green = time_green;
		clearLed();
		clearLed1();
		if (timer1_flag == 1) {
			status = INIT;
		}
		break;
	case YELLOW_SAVE:
		time_yellow = time_yellow;
		clearLed();
		clearLed1();
		if (timer1_flag == 1) {
			status = INIT;
		}
		break;
	}
}

