/*
 * main.c
 *
 *  Created on: Oct 21, 2022
 *      Author: pc
 */
#include "../LIB/STD_Types.h"
#include "../MCAL/DIO/DIO_int.h"

#include <util/delay.h>

int main(void)
{
	DIO_vSetPinDir(DIO_PORTA,DIO_PIN0,DIO_OUTPUT);

	while(1)
	{
		DIO_vSetPinVal(DIO_PORTA,DIO_PIN0,DIO_HIGH);
		_delay_ms(500);
		DIO_vSetPinVal(DIO_PORTA,DIO_PIN0,DIO_LOW);
		_delay_ms(500);

	}
}
