/*
 * fsm_automatic.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Admin
 */
#include "fsm_automatic.h"
void fsm_automatic_run() {
	switch (status) {
	case INIT:
		init_time_traffic(time_red, time_green, time_yellow);
		init_traffic_light(RED_COLOR, RED_AUTO, time_red, GREEN_COLOR,
				GREEN_AUTO, time_green);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		updateClockBuffer(time_green, time_red);
		if (isButton1Pressed() == 1) {
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			display7SEG_North_South(1);
			status = MODE_1;
			//setTimer1(100);
			counter_sch = 4;
		}
		break;
	case MODE_1:
		if (1) {
		}
		if(counter_sch > 0){
			counter_sch--;
		}
		static int dem = 4;
		if (counter_sch == 0) {
			display();
			dem--;
			if (dem == 0) {
				light_traffic_run(time_red, time_yellow, time_green);
				dem = 4;
			}
			counter_sch = 1;
		}
		if (isButton1Pressed() == 1) {
			status = MODE_2;
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
			display7SEG_North_South(2);
			clearLed();
			clearLed1();
			counter_sch = 2;
		}
		break;
	}

}

