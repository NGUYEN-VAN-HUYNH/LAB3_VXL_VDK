/*
 * light_traffic.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Admin
 */

#ifndef INC_LIGHT_TRAFFIC_H_
#define INC_LIGHT_TRAFFIC_H_
#include "main.h"
#include "global.h"
#include "7_Segment.h"
extern int check_color_east_west;
extern int check_color_north_south;
extern int counter_north_south;
extern int counter_east_west;
extern int count;
extern int count1;

void init_traffic_light(int check_color_ew,int led_status_ew, int counter_ew,  int check_color_ns,int led_status_ns , int counter_ns);
void light_traffic_run( int time_red, int time_yellow, int time_green);




#endif /* INC_LIGHT_TRAFFIC_H_ */
