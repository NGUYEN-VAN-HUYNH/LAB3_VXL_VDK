/*
 * 7_Segment.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Admin
 */
#include "7_Segment.h"
#include "main.h"
void display7SEG_East_West(int num) {
    // ban dau tat led 7 doan
    HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_SET);

    // dieu khien led 7 doan
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOB, SEG_A, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G, GPIO_PIN_RESET);
            break;
        default:
            break; // khong lm gi ca
    }

}

void display7SEG_North_South(int num) {
    // ban dau tat led 7 doan
    HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_SET);

    // dieu khien led 7 doan
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_E1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOB, SEG_A1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_B1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_C1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_D1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_F1, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_G1, GPIO_PIN_RESET);
            break;
        default:
            break; // khong lm gi ca
    }

}



