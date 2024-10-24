/*
 * button.h
 *
 *  Created on: Oct 24, 2024
 *      Author: Admin
 */
#include "main.h"
#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int TimeOutForKeyPress;
extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

void getKeyInput();
int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();




#endif /* INC_BUTTON_H_ */
