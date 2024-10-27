/*
 * light_traffic.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Admin
 */
#include "light_traffic.h"
int check_color_east_west;
int check_color_north_south;
int counter_north_south;
int counter_east_west;
int led_status_east_west;
int led_status_north_south;
int count = 0;
int count1 = 0;

void init_traffic_light(int check_color_ew,int led_status_ew, int counter_ew,  int check_color_ns,int led_status_ns , int counter_ns){
	check_color_east_west = check_color_ew;
	check_color_north_south = check_color_ns;
	counter_north_south = counter_ns;
	counter_east_west = counter_ew;
	led_status_east_west = led_status_ew;
	led_status_north_south = led_status_ns;
}
void light_traffic_run( int time_red, int time_yellow, int time_green){

	//  thiet lap trang thai va thoi gian chuyen tin hieu he thong den 1 (led 7 doan o tren)
		if(counter_north_south <= 0 && check_color_north_south == GREEN_COLOR) {
			counter_north_south = time_yellow;
			check_color_north_south = YELLOW_COLOR; // den vang
		}
		if(counter_north_south <= 0 && check_color_north_south == YELLOW_COLOR) {
				counter_north_south = time_red;
				check_color_north_south = RED_COLOR; // den do
		}

		if(counter_north_south <= 0 && check_color_north_south == RED_COLOR) {
					counter_north_south = time_green;
					check_color_north_south = GREEN_COLOR; // den xanh
		}



	//  thiet lap trang thai va thoi gian chuyen tin hieu he thong den 2 (led 7 doan o duoi)
		if(counter_east_west <= 0 && check_color_east_west == RED_COLOR) {
		counter_east_west = time_green;
		check_color_east_west = GREEN_COLOR; // den xanh
		}
		if(counter_east_west <= 0 && check_color_east_west == GREEN_COLOR) {
			counter_east_west = time_yellow;
			check_color_east_west = YELLOW_COLOR; // den vang
		}
		if(counter_east_west <= 0 && check_color_east_west == YELLOW_COLOR) {
				counter_east_west = time_red;
				check_color_east_west = RED_COLOR; // den do
		}


//		// hien thi led 7 doan he thong den 1
//		display7SEG_North_South(counter_north_south--);
//		// hien thi led 7 doan he thong den 2
//		display7SEG_East_West(counter_east_west--);
		updateClockBuffer(counter_north_south--, counter_east_west--);


	// dieu khien chuyen tin hieu he thong  den 1 (led 7 doan o tren)
		if (led_status_north_south == GREEN_AUTO ) {
			setLedGreen1();
			count1 ++;
		}
		if(led_status_north_south == YELLOW_AUTO){
			setLedYellow1();
			count1++;
		}
		if (led_status_north_south == RED_AUTO ) {
			setLedRed1();
			count1 ++;
		}
		if(count1 == time_green && led_status_north_south == GREEN_AUTO ){
			led_status_north_south = YELLOW_AUTO;
			count1 = 0;
		}
		if(count1 == time_yellow && led_status_north_south == YELLOW_AUTO){
			led_status_north_south = RED_AUTO;
			count1 = 0;
		}
		if(count1 == time_red && led_status_north_south == RED_AUTO ){
			led_status_north_south = GREEN_AUTO;
			count1 = 0;
		}
		// dieu khien chuyen tin hieu he thong  den 2 ( led 7 doan o duoi)
		if (led_status_east_west == RED_AUTO ) {
			setLedRed();
			count ++;
		}
		if(led_status_east_west == YELLOW_AUTO){
			setLedYellow();
			count++;
		}
		if (led_status_east_west == GREEN_AUTO) {
			setLedGreen();
			count ++;
		}
		if(count == time_red && led_status_east_west == RED_AUTO ){
			led_status_east_west = GREEN_AUTO;
			count = 0;
		}
		if(count == time_green && led_status_east_west == GREEN_AUTO ){
			led_status_east_west = YELLOW_AUTO;
			count = 0;
		}
		if(count == time_yellow && led_status_east_west == YELLOW_AUTO){
			led_status_east_west = RED_AUTO;
			count = 0;
		}


}



