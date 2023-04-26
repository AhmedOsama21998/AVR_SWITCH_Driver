/*
 * main.c
 *
 *  Created on: Apr 23, 2023
 *      Author: Ahmed Osama
 */

#include "Std_Types.h"
#include "error_status.h"

#include "DIO_int.h"
#include "Switch_config.h"
#include "Switch_int.h"

extern SW_t Switch_AstrSwitchState[SW_NUM];
int main(void)
{
u8 PinState;
DIO_enuInit();
Switch_enuInit(Switch_AstrSwitchState);
	while (1)
	{
	Switch_enuGetState(&Switch_AstrSwitchState[0],&PinState);
	if(PinState==0)
		{
		DIO_enuSetPinValue(DIO_u8PORTA,DIO_u8PIN0,DIO_HIGH);
		}else {DIO_enuSetPinValue(DIO_u8PORTA,DIO_u8PIN0,DIO_LOW);}
	}
}
