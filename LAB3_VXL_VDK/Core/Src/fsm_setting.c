/*
 * fsm_setting.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Admin
 */
#include "fsm_setting.h"
void fsm_setting_run() {
	switch (status) {
	case RED_EDIT:
		if(counter_sch > 0){
			counter_sch --;
		}
		int static dem_red = 0;
		if (counter_sch == 0) {
			dem_red++;
			display_value_edit(red_buffer);
			if (dem_red == 2) {
				HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
				HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
				dem_red = 0;
			}
			counter_sch = 1;
		}
		if (isButton2Pressed() == 1) {
			if (time_red < 7 || time_red > 0) {
				time_red++;
				if (time_red == 7) {
					time_red = 1;
				}
			}
		}
		redBuffer(time_red);
		if (isButton3Pressed() == 1) {
			status = RED_SAVE;
			counter_sch = 4;
		}
		break;
	case GREEN_EDIT:
		if(counter_sch > 0){
			counter_sch --;
		}
		int static dem_green = 0;
		if (counter_sch == 0) {
			dem_green++;
			display_value_edit(green_buffer);
			if (dem_green == 2) {
				HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);
				HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
				dem_green = 0;
			}
			counter_sch = 1;
		}
		if (isButton2Pressed() == 1) {
			if (time_green < 7 || time_green > 0) {
				time_green++;
				if (time_green == 7) {
					time_green = 1;
				}
			}
		}
		greenBuffer(time_green);
		if (isButton3Pressed() == 1) {
			status = GREEN_SAVE;
			counter_sch = 4;
		}
		break;
	case YELLOW_EDIT:
		if(counter_sch > 0){
			counter_sch --;
		}
		int static dem_yellow = 0;
		if (counter_sch == 0) {
			dem_yellow++;
			display_value_edit(yellow_buffer);
			if (dem_yellow == 2) {
				HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin);
				HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
				dem_yellow = 0;
			}
			counter_sch = 1;
		}
		if (isButton2Pressed() == 1) {
			if (time_yellow < 7 || time_yellow > 0) {
				time_yellow++;
				if (time_yellow == 7) {
					time_yellow = 1;
				}
			}
		}
		yellowBuffer(time_yellow);
		if (isButton3Pressed() == 1) {
			status = YELLOW_SAVE;
			counter_sch = 4;
		}
		break;
	}
}

