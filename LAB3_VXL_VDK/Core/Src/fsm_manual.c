/*
 * fsm_manual.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Admin
 */
#include "fsm_manual.h"
void fsm_manual_run() {
	switch (status) {
	case MODE_2:
		if(counter_sch > 0){
			counter_sch --;
		}
		if (counter_sch == 0) {
			HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			counter_sch = 2;
		}

		if (isButton1Pressed() == 1) {
			status = MODE_3;
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
			display7SEG_North_South(3);
			clearLed();
			clearLed1();
			counter_sch = 2;
		}
		if (isButton2Pressed() == 1) {
			status = RED_EDIT;
			counter_sch = 1;
		}
		break;
	case MODE_3:
		if(counter_sch > 0){
			counter_sch --;
		}
		if (counter_sch == 0) {
			HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);
			HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
			counter_sch = 2;
		}

		if (isButton1Pressed() == 1) {
			status = MODE_4;
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
			display7SEG_North_South(4);
			clearLed();
			clearLed1();
			counter_sch = 2;
		}
		if (isButton2Pressed() == 1) {
			status = GREEN_EDIT;
			counter_sch = 1;
		}
		break;
	case MODE_4:
		if(counter_sch > 0){
			counter_sch --;
		}
		if (counter_sch == 0) {
			HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin);
			HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
			counter_sch = 2;
		}

		if (isButton1Pressed() == 1) {
			status = MODE_1;
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
			display7SEG_North_South(1);
			clearLed();
			clearLed1();
			counter_sch = 1;
		}
		if (isButton2Pressed() == 1) {
			status = YELLOW_EDIT;
			counter_sch = 1;
		}
		break;

	}

}

