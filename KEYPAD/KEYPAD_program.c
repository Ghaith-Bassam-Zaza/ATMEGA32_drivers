/*
 * KEYPAD_program.c
 *
 * Created: 9/21/2021 10:27:56 AM
 *  Author: Ghaith
 */ 

#include "Std_Types.h"
#include "Macros.h"
#include "DIO_interface.h"
#include "KEYPAD_private.h"
#include "KEYPAD_configration.h"
#include "KEYPAD_interface.h"


void KEYPAD_init(void)
{
#if ( KEYPAD_u8_PULLUP == KEYPAD_u8_INTERNAL)
	DIO_vidSetPinDirection(KEYPAD_u8COL1_PORT,KEYPAD_u8COL1 , STD_HIGH);
	DIO_vidSetPinDirection(KEYPAD_u8COL2_PORT,KEYPAD_u8COL2 , STD_HIGH);
	DIO_vidSetPinDirection(KEYPAD_u8COL3_PORT,KEYPAD_u8COL3 , STD_HIGH);
	DIO_vidSetPinDirection(KEYPAD_u8COL4_PORT,KEYPAD_u8COL4 , STD_HIGH);
	
	DIO_vidSetPinDirection(KEYPAD_u8ROW1_PORT,KEYPAD_u8ROW1 , STD_LOW);
	DIO_vidSetPinDirection(KEYPAD_u8ROW2_PORT,KEYPAD_u8ROW2 , STD_LOW);
	DIO_vidSetPinDirection(KEYPAD_u8ROW3_PORT,KEYPAD_u8ROW3 , STD_LOW);
	DIO_vidSetPinDirection(KEYPAD_u8ROW4_PORT,KEYPAD_u8ROW4 , STD_LOW);
	
	
	DIO_vidSetPinValue(KEYPAD_u8COL1_PORT,KEYPAD_u8COL1 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL2_PORT,KEYPAD_u8COL2 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL3_PORT,KEYPAD_u8COL3 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL4_PORT,KEYPAD_u8COL4 , STD_HIGH);
	
	DIO_vidSetPinValue(KEYPAD_u8ROW1_PORT,KEYPAD_u8ROW1 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8ROW2_PORT,KEYPAD_u8ROW2 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8ROW3_PORT,KEYPAD_u8ROW3 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8ROW4_PORT,KEYPAD_u8ROW4 , STD_HIGH);

#endif

}


u8 KEYPAD_u8GetButton(void)
{
	u8 Button = '\0';

	/*Apply sequence 0 */
	DIO_vidSetPinValue(KEYPAD_u8COL1_PORT,KEYPAD_u8COL1 , STD_LOW);
	DIO_vidSetPinValue(KEYPAD_u8COL2_PORT,KEYPAD_u8COL2 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL3_PORT,KEYPAD_u8COL3 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL4_PORT,KEYPAD_u8COL4 , STD_HIGH);

	Button = KeyPad_u8CheckRow(0);
	if(Button != '\0')return Button;
	
	/*Apply sequence 1 */
	DIO_vidSetPinValue(KEYPAD_u8COL1_PORT,KEYPAD_u8COL1 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL2_PORT,KEYPAD_u8COL2 , STD_LOW);
	DIO_vidSetPinValue(KEYPAD_u8COL3_PORT,KEYPAD_u8COL3 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL4_PORT,KEYPAD_u8COL4 , STD_HIGH);

    Button = KeyPad_u8CheckRow(1);
	if(Button != '\0')return Button;

	/*Apply sequence 2 */
	DIO_vidSetPinValue(KEYPAD_u8COL1_PORT,KEYPAD_u8COL1 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL2_PORT,KEYPAD_u8COL2 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL3_PORT,KEYPAD_u8COL3 , STD_LOW);
	DIO_vidSetPinValue(KEYPAD_u8COL4_PORT,KEYPAD_u8COL4 , STD_HIGH);

	Button = KeyPad_u8CheckRow(2);
	if(Button != '\0')return Button;

	/*Apply sequence 3 */
	DIO_vidSetPinValue(KEYPAD_u8COL1_PORT,KEYPAD_u8COL1 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL2_PORT,KEYPAD_u8COL2 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL3_PORT,KEYPAD_u8COL3 , STD_HIGH);
	DIO_vidSetPinValue(KEYPAD_u8COL4_PORT,KEYPAD_u8COL4 , STD_LOW);

	Button = KeyPad_u8CheckRow(3);
	return Button;
}


static u8 KeyPad_u8CheckRow(u8 COL)
{
	if(DIO_u8GetPinValue(KEYPAD_u8ROW1_PORT,KEYPAD_u8ROW1) == STD_LOW)
	{
	    switch(COL)
		{
			case 0:
			return KEYPAD_u8R1C1;
			break;
			
			case 1:
			return KEYPAD_u8R1C2;
			break;
			
			case 2:
			return KEYPAD_u8R1C3;
			break;
			
			case 3:
			return KEYPAD_u8R1C4;
			break;
		}
	}
	if(DIO_u8GetPinValue(KEYPAD_u8ROW2_PORT,KEYPAD_u8ROW2) == STD_LOW)
	{
	    switch(COL)
		{
			case 0:
			return KEYPAD_u8R2C1;
			break;
			
			case 1:
			return KEYPAD_u8R2C2;
			break;
			
			case 2:
			return KEYPAD_u8R2C3;
			break;
			
			case 3:
			return KEYPAD_u8R2C4;
			break;
		}	
	}
	if(DIO_u8GetPinValue(KEYPAD_u8ROW3_PORT,KEYPAD_u8ROW3) == STD_LOW)
	{
	    switch(COL)
		{
			case 0:
			return KEYPAD_u8R3C1;
			break;
			
			case 1:
			return KEYPAD_u8R3C2;
			break;
			
			case 2:
			return KEYPAD_u8R3C3;
			break;
			
			case 3:
			return KEYPAD_u8R3C4;
			break;
		}	
	}
	if(DIO_u8GetPinValue(KEYPAD_u8ROW4_PORT,KEYPAD_u8ROW4) == STD_LOW)
	{
	    switch(COL)
		{
			case 0:
			return KEYPAD_u8R4C1;
			break;
			
			case 1:
			return KEYPAD_u8R4C2;
			break;
			
			case 2:
			return KEYPAD_u8R4C3;
			break;
			
			case 3:
			return KEYPAD_u8R4C4;
			break;
		}	
	}
	
	return '\0';
}
