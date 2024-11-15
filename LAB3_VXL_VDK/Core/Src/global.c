/*
 * global.h
 *
 *  Created on: Oct 24, 2024
 *      Author: Admin
 */

#ifndef SRC_GLOBAL_C_
#define SRC_GLOBAL_C_
#include "global.h"
int status = 0;
int index_led = 0;
int led_buffer[4] = { 0, 0, 0, 0 };
int red_buffer[2] = { 0, 0 };
int yellow_buffer[2] = { 0, 0 };
int green_buffer[2] = { 0, 0 };

int time_red = 5;
int time_green = 3;
int time_yellow = 2;

int count = 0;
int count1 = 0;

void init_time_traffic(int red, int green, int yellow) {
	time_red = red;
	;
	time_green = green;
	time_yellow = yellow;
}
void clearLed() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void setLedRed() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}

void setLedGreen() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}

void setLedYellow() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}

void clearLed1() {
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
}
void setLedRed1() {
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
}

void setLedGreen1() {
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
}

void setLedYellow1() {
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
}

void updateClockBuffer(int hour, int minute) {
	// Update the hour display
	led_buffer[0] = hour / 10;  // Tens digit of the hour
	led_buffer[1] = hour % 10;  // Units digit of the hour

	// Update the minute display
	led_buffer[2] = minute / 10;  // Tens digit of the minute
	led_buffer[3] = minute % 10;  // Units digit of the minute
}
void redBuffer(int red) {
	red_buffer[0] = red / 10;
	red_buffer[1] = red % 10;
}
void greenBuffer(int green) {
	green_buffer[0] = green / 10;
	green_buffer[1] = green % 10;
}
void yellowBuffer(int yellow) {
	yellow_buffer[0] = yellow / 10;
	yellow_buffer[1] = yellow % 10;
}

void display() {
	switch (index_led) {
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		display7SEG_North_South(led_buffer[0]);
		display7SEG_East_West(led_buffer[2]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
		display7SEG_North_South(led_buffer[1]);
		display7SEG_East_West(led_buffer[3]);
		break;
	}

	index_led = (index_led + 1) % 2;
}

void display_value_edit(int led_buffer[2]) {
	switch (index_led) {
	case 0:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
		display7SEG_East_West(led_buffer[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
		display7SEG_East_West(led_buffer[1]);
		break;
	}

	index_led = (index_led + 1) % 2;
}

#endif /* SRC_GLOBAL_C_ */
