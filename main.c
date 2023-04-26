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

DIO_enuInit();
Switch_enuInit(Switch_AstrSwitchState);
while (1)
	{
	
	}
}
