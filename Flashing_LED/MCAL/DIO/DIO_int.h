/*
 * DIO_int.h
 *
 *  Created on: Oct 21, 2022
 *      Author: pc
 */

#ifndef MCAL_DIO_DIO_INT_H_
#define MCAL_DIO_DIO_INT_H_

void DIO_vSetPinDir(u8 A_u8PortNum,u8 A_u8PinNum,u8 A_u8PinDir);
void DIO_vSetPinVal(u8 A_u8PortNum,u8 A_u8PinNum,u8 A_u8PinVal);
u8   DIO_u8GetPinVal(u8 A_u8PortNum,u8 A_u8PinNum);
void DIO_vSetPortDir(u8 A_u8PortNum,u8 A_u8PortDir);
void DIO_vSetPortVal(u8 A_u8PortNum,u8 A_u8PortVal);
u8   DIO_u8GetPortVal(u8 A_u8PortNum);
void DIO_vTogPinVal(u8 A_u8PortNum,u8 A_u8PinNum);



#define DIO_PORTA    0
#define DIO_PORTB    1
#define DIO_PORTC    2
#define DIO_PORTD    3

#define DIO_PIN0     0
#define DIO_PIN1     1
#define DIO_PIN2     2
#define DIO_PIN3     3
#define DIO_PIN4     4
#define DIO_PIN5     5
#define DIO_PIN6     6
#define DIO_PIN7     7

#define DIO_OUTPUT   1
#define DIO_INPUT    0


#define DIO_HIGH     1
#define DIO_LOW      0


#endif /* MCAL_DIO_DIO_INT_H_ */
