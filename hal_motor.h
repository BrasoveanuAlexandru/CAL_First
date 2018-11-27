#ifndef __hal_motor.h_HEADER__
#define __hal_motor.h_HEADER__


void vMOtorInit();

void vSetMotorDir(T_U8 u8Dir); /*seteaza directia motorului */
void vSetMotorSpeed(T_U8 u8Speed); /*seteaza viteza motorului */
void vSetMotorDirSpeed(T_U8 u8Dir, T_U8 u8Speed); /*Set vit si Dir */