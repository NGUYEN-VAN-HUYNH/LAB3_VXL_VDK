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
#include "light_traffic.h"
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
#define RED_COLOR 22
#define GREEN_COLOR 23
#define YELLOW_COLOR 24
extern int status;
extern int index_led;
extern int led_buffer [4];
extern int red_buffer [2];
extern int yellow_buffer [2];
extern int green_buffer [2];
extern int time_red;
extern int time_green;
extern int time_yellow;
extern int count;
extern int count1;
extern int counter_sch;
void init_time_traffic(int red, int green, int yellow);
void clearLed();
void setLedRed();
void setLedGreen();
void setLedYellow();

void clearLed1();
void setLedRed1();
void setLedGreen1();
void setLedYellow1();

void updateClockBuffer(int hour, int minute);
void redBuffer(int red);
void yellowBuffer(int yellow);
void greenBuffer(int green);
void display();
void display_value_edit (int led_buffer[2]);

#endif /* INC_GLOBAL_H_ */
