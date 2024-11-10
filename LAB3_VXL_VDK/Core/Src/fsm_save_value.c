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
		if(counter_sch > 0){
			counter_sch --;
		}
		time_red = time_red;
		clearLed();
		clearLed1();
		if (counter_sch == 0) {
			status = INIT;

		}
		break;
	case GREEN_SAVE:
		if(counter_sch > 0){
			counter_sch --;
		}
		time_green = time_green;
		clearLed();
		clearLed1();
		if (counter_sch == 0) {
			status = INIT;
		}
		break;
	case YELLOW_SAVE:
		if(counter_sch > 0){
			counter_sch --;
		}
		time_yellow = time_yellow;
		clearLed();
		clearLed1();
		if (counter_sch == 0) {
			status = INIT;
		}
		break;
	}
}

