/*
 * button.c
 *
 *  Created on: Oct 24, 2024
 *      Author: Admin
 */
/*
 * button.c
 *
 *  Created on: Oct 22, 2024
 *      Author: Admin
 */
#include "button.h"
#include "main.h"
// button 1
int KeyRegB1_0 = NORMAL_STATE;
int KeyRegB1_1 = NORMAL_STATE;
int KeyRegB1_2 = NORMAL_STATE;
int KeyRegB1_3 = NORMAL_STATE;
// button 2
int KeyRegB2_0 = NORMAL_STATE;
int KeyRegB2_1 = NORMAL_STATE;
int KeyRegB2_2 = NORMAL_STATE;
int KeyRegB2_3 = NORMAL_STATE;
// button 3
int KeyRegB3_0 = NORMAL_STATE;
int KeyRegB3_1 = NORMAL_STATE;
int KeyRegB3_2 = NORMAL_STATE;
int KeyRegB3_3 = NORMAL_STATE;

int TimeOutForKeyPress = 200;

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int isButton1Pressed() {
	if (button1_flag == 1) {
		button1_flag = 0;
		return 1;
	}
	return 0;
}

int isButton2Pressed() {
	if (button2_flag == 1) {
		button2_flag = 0;
		return 1;
	}
	return 0;
}

int isButton3Pressed() {
	if (button3_flag == 1) {
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput() {

	KeyRegB1_0 = KeyRegB1_1;
	KeyRegB1_1 = KeyRegB1_2;
	KeyRegB1_2 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);

	KeyRegB2_0 = KeyRegB2_1;
	KeyRegB2_1 = KeyRegB2_2;
	KeyRegB2_2 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);

	KeyRegB3_0 = KeyRegB3_1;
	KeyRegB3_1 = KeyRegB3_2;
	KeyRegB3_2 = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);

	// xu ly button 1
	if ((KeyRegB1_0 == KeyRegB1_1) && (KeyRegB1_1 == KeyRegB1_2)) {
		if (KeyRegB1_3 != KeyRegB1_2) {
			KeyRegB1_3 = KeyRegB1_2;

			if (KeyRegB1_2 == PRESSED_STATE) {
				TimeOutForKeyPress = 200;
				button1_flag = 1;
			}

		} else {
			TimeOutForKeyPress--;
			if (TimeOutForKeyPress == 0) {
				TimeOutForKeyPress = 200;
				if (KeyRegB1_2 == PRESSED_STATE) {
					button1_flag = 1;
				}
			}
		}
	}
	// xu ly button 2
	if ((KeyRegB2_0 == KeyRegB2_1) && (KeyRegB2_1 == KeyRegB2_2)) {
		if (KeyRegB2_3 != KeyRegB2_2) {
			KeyRegB2_3 = KeyRegB2_2;

			if (KeyRegB2_2 == PRESSED_STATE) {
				TimeOutForKeyPress = 200;
				button2_flag = 1;
			}

		} else {
			TimeOutForKeyPress--;
			if (TimeOutForKeyPress == 0) {
				TimeOutForKeyPress = 200;
				if (KeyRegB2_2 == PRESSED_STATE) {
					button2_flag = 1;
				}
			}
		}
	}
	// xu ly button 3
	if ((KeyRegB3_0 == KeyRegB3_1) && (KeyRegB3_1 == KeyRegB3_2)) {
		if (KeyRegB3_3 != KeyRegB3_2) {
			KeyRegB3_3 = KeyRegB3_2;

			if (KeyRegB3_2 == PRESSED_STATE) {
				TimeOutForKeyPress = 200;
				button3_flag = 1;
			}

		} else {
			TimeOutForKeyPress--;
			if (TimeOutForKeyPress == 0) {
				TimeOutForKeyPress = 200;
				if (KeyRegB3_2 == PRESSED_STATE) {
					button3_flag = 1;
				}
			}
		}
	}
}

