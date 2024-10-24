/*
 * global.h
 *
 *  Created on: Oct 24, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "main.h"
#include "button.h"
#include "timer.h"
#define INIT 0
#define MODE_1 1
#define MODE_2 2
#define MODE_3 3
#define MODE_4 4
#define RED_AUTO 5
#define GREEN_AUTO 6
#define YELLOW_AUTO 7
#define RED_EDIT 8
#define RED_SAVE 9
#define GREEN_EDIT 10
#define GREEN_SAVE 11
#define YELLOW_EDIT 12
#define YELLOW_SAVE 13
extern int status;
void clearLed();
void setLedRed();
void setLedGreen();
void setLedYellow();

void clearLed1();
void setLedRed1();
void setLedGreen1();
void setLedYellow1();




#endif /* INC_GLOBAL_H_ */
