/*
 * fsm_automatic.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Admin
 */
#include "fsm_automatic.h"
void fsm_automatic_run(){
	static int dem = 4;
	if (timer1_flag == 1){
		display();
		dem --;
		if(dem == 0){
			light_traffic_run(5, 2, 3);
			dem  = 4;
		    }
		setTimer1(25);
	}
}



