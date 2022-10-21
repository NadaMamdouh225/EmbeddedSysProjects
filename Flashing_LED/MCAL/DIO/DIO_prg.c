/*
 * DIO_prg.c
 *
 *  Created on: Oct 21, 2022
 *      Author: Nada Mamdouh
 */
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_MATH.h"

#include "DIO_int.h"
#include "DIO_prv.h"
#include "DIO_cfg.h"

void DIO_vSetPinDir(u8 A_u8PortNum,u8 A_u8PinNum,u8 A_u8PinDir)
{
	if(A_u8PinDir == DIO_OUTPUT)
	{
		switch(A_u8PortNum)
		{
		case DIO_PORTA:
			SET_BIT(DDRA,A_u8PinNum);
			break;
		case DIO_PORTB:
			SET_BIT(DDRB,A_u8PinNum);
			break;
		case DIO_PORTC:
			SET_BIT(DDRC,A_u8PinNum);
			break;
		case DIO_PORTD:
			SET_BIT(DDRD,A_u8PinNum);
			break;
		}
	}else if(A_u8PinDir == DIO_INPUT)
	{
		switch(A_u8PortNum)
		{
		case DIO_PORTA:
			CLR_BIT(DDRA,A_u8PinNum);
			break;
		case DIO_PORTB:
			CLR_BIT(DDRB,A_u8PinNum);
			break;
		case DIO_PORTC:
			CLR_BIT(DDRC,A_u8PinNum);
			break;
		case DIO_PORTD:
			CLR_BIT(DDRD,A_u8PinNum);
			break;
		}
			}

}
void DIO_vSetPinVal(u8 A_u8PortNum,u8 A_u8PinNum,u8 A_u8PinVal)
{
	if(A_u8PinVal == DIO_HIGH)
	{
		switch(A_u8PortNum)
		{
		case DIO_PORTA:
			SET_BIT(PORTA,A_u8PinNum);
			break;
		case DIO_PORTB:
			SET_BIT(PORTB,A_u8PinNum);
			break;
		case DIO_PORTC:
			SET_BIT(PORTC,A_u8PinNum);
			break;
		case DIO_PORTD:
			SET_BIT(PORTD,A_u8PinNum);
			break;
		}
	}else if(A_u8PinVal == DIO_LOW)
	{
		switch(A_u8PortNum)
		{
		case DIO_PORTA:
			CLR_BIT(PORTA,A_u8PinNum);
			break;
		case DIO_PORTB:
			CLR_BIT(PORTB,A_u8PinNum);
			break;
		case DIO_PORTC:
			CLR_BIT(PORTC,A_u8PinNum);
			break;
		case DIO_PORTD:
			CLR_BIT(PORTD,A_u8PinNum);
			break;
		}
	}
}
u8   DIO_u8GetPinVal(u8 A_u8PortNum,u8 A_u8PinNum)
{
	u8 L_u8Val = 0;
	switch(A_u8PortNum)
			{
			case DIO_PORTA:
				L_u8Val = GET_BIT(PINA,A_u8PinNum);
				break;
			case DIO_PORTB:
				L_u8Val = GET_BIT(PINB,A_u8PinNum);
				break;
			case DIO_PORTC:
				L_u8Val = GET_BIT(PINC,A_u8PinNum);
				break;
			case DIO_PORTD:
				L_u8Val = GET_BIT(PIND,A_u8PinNum);
				break;
			}
	return L_u8Val;

}
void DIO_vSetPortDir(u8 A_u8PortNum,u8 A_u8PortDir)
{
	switch(A_u8PortNum)
	{
	case DIO_PORTA:
		DDRA = A_u8PortDir;
		break;
	case DIO_PORTB:
		DDRB = A_u8PortDir;
		break;
	case DIO_PORTC:
		DDRC = A_u8PortDir;
		break;
	case DIO_PORTD:
		DDRD = A_u8PortDir;
		break;
	}
}
void DIO_vSetPortVal(u8 A_u8PortNum,u8 A_u8PortVal)
{
	switch(A_u8PortNum)
	{
	case DIO_PORTA:
		PORTA = A_u8PortVal;
		break;
	case DIO_PORTB:
		PORTB = A_u8PortVal;
		break;
	case DIO_PORTC:
		PORTC = A_u8PortVal;
		break;
	case DIO_PORTD:
		PORTD = A_u8PortVal;
		break;

	}
}
u8   DIO_u8GetPortVal(u8 A_u8PortNum)
{
	u8 L_u8Val = 0;
	switch(A_u8PortNum)
	{
	case DIO_PORTA:
		L_u8Val = PINA;
		break;
	case DIO_PORTB:
		L_u8Val = PINB;
		break;
	case DIO_PORTC:
		L_u8Val = PINC;
		break;
	case DIO_PORTD:
		L_u8Val = PIND;
		break;
	}
	return L_u8Val;
}
void DIO_vTogPinVal(u8 A_u8PortNum,u8 A_u8PinNum)
{
	switch(A_u8PortNum)
	{
	case DIO_PORTA:
		TOGGLE_BIT(PORTA,A_u8PinNum);
		break;
	case DIO_PORTB:
		TOGGLE_BIT(PORTB,A_u8PinNum);
		break;
	case DIO_PORTC:
		TOGGLE_BIT(PORTC,A_u8PinNum);
		break;
	case DIO_PORTD:
		TOGGLE_BIT(PORTD,A_u8PinNum);
		break;

	}
}
