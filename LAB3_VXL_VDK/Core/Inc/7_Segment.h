/*
 * 7_Segment.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Admin
 */

#ifndef INC_7_SEGMENT_H_
#define INC_7_SEGMENT_H_
#include "global.h"
#include "main.h"
#define SEG_A GPIO_PIN_0 // PB0
#define SEG_B GPIO_PIN_1 // PB1
#define SEG_C GPIO_PIN_2 // PB2
#define SEG_D GPIO_PIN_3 // PB3
#define SEG_E GPIO_PIN_4 // PB4
#define SEG_F GPIO_PIN_5 // PB5
#define SEG_G GPIO_PIN_6 // PB6
#define SEG_A1 GPIO_PIN_7 // PB7
#define SEG_B1 GPIO_PIN_8 // PB8
#define SEG_C1 GPIO_PIN_9 // PB9
#define SEG_D1 GPIO_PIN_10 // PB10
#define SEG_E1 GPIO_PIN_11 // PB11
#define SEG_F1 GPIO_PIN_12 // PB12
#define SEG_G1 GPIO_PIN_13 // PB13
void display7SEG_North_South(int num);
void display7SEG_East_West(int num);



#endif /* INC_7_SEGMENT_H_ */
