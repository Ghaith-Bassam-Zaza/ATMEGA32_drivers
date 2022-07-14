/*
 * KEYPAD_configration.h
 *
 * Created: 9/21/2021 10:27:06 AM
 *  Author: Ghaith
 */ 


#ifndef KEYPAD_CONFIGRATION_H_
#define KEYPAD_CONFIGRATION_H_

#define KEYPAD_u8ROW1 		0
#define KEYPAD_u8ROW2		1
#define KEYPAD_u8ROW3		2
#define KEYPAD_u8ROW4		3


#define KEYPAD_u8COL1		4
#define KEYPAD_u8COL2		5
#define KEYPAD_u8COL3		6
#define KEYPAD_u8COL4		7



#define KEYPAD_u8COL1_PORT		DIO_PORTC
#define KEYPAD_u8COL2_PORT		DIO_PORTC
#define KEYPAD_u8COL3_PORT		DIO_PORTC
#define KEYPAD_u8COL4_PORT		DIO_PORTC

#define KEYPAD_u8ROW1_PORT		DIO_PORTC
#define KEYPAD_u8ROW2_PORT		DIO_PORTC
#define KEYPAD_u8ROW3_PORT		DIO_PORTC
#define KEYPAD_u8ROW4_PORT		DIO_PORTC


#define KEYPAD_u8R1C1      '7'
#define KEYPAD_u8R1C2      '8'
#define KEYPAD_u8R1C3      '9'
#define KEYPAD_u8R1C4      '/'

#define KEYPAD_u8R2C1      '4'
#define KEYPAD_u8R2C2      '5'
#define KEYPAD_u8R2C3      '6'
#define KEYPAD_u8R2C4      '*'

#define KEYPAD_u8R3C1      '1'
#define KEYPAD_u8R3C2      '2'
#define KEYPAD_u8R3C3      '3'
#define KEYPAD_u8R3C4      '-'

#define KEYPAD_u8R4C1      ' '
#define KEYPAD_u8R4C2      '0'
#define KEYPAD_u8R4C3      '='
#define KEYPAD_u8R4C4      '+'

/*
*
*	OPTIONS:
*		A-	KEYPAD_u8INTERNAL
*		B-	KEYPAD_u8EXTERNAL
*
*
*
*/
#define KEYPAD_u8PULLUP		KEYPAD_u8INTERNAL

#endif /* KEYPAD_CONFIGRATION_H_ */