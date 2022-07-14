#include "Std_Types.h"
#include "Macros.h"
#include "DIO_interface.h"
#include "LCD_prive.h"
#include "LCD_config.h"
#include "LCD_int.h"
#include "Util/delay.h"


void LCD_void_Init(void)
{
	_delay_ms(35);
	LCD_void_WriteCom(Eight_Bit_Mode); // 2 lines and 5×8 matrix
	_delay_ms(1);
	LCD_void_WriteCom(CURSOR_STATE); // Display on, cursor blinking
	_delay_ms(1);
	LCD_void_WriteCom(CLEAR_COMMAND); // clear screen
	_delay_ms(2);
	LCD_void_WriteCom(RIGHT_SHIFT_CURSOR); // Increment cursor (shift cursor to right)
	
}
void LCD_void_WriteChar(u8 Copy_u8_Char)
{
	DIO_vidSetPinValue(LCD_Ctrl_Out,RW,WRITE);
	DIO_vidSetPinValue(LCD_Ctrl_Out,RS,STD_HIGH);
	
	DIO_vidSetPortValue(LCD_Data_Out,Copy_u8_Char);
	
	DIO_vidSetPinValue(LCD_Ctrl_Out,EN,STD_HIGH);
	_delay_us(1);
	DIO_vidSetPinValue(LCD_Ctrl_Out,EN,STD_LOW);
	_delay_us(1);
	
	
	
}

void LCD_void_WriteCom(u8 Copy_u8_Comand)
{
	DIO_vidSetPinValue(LCD_Ctrl_Out,RW,WRITE);
	DIO_vidSetPinValue(LCD_Ctrl_Out,RS,STD_LOW);
	
	DIO_vidSetPortValue(LCD_Data_Out,Copy_u8_Comand);
	
	DIO_vidSetPinValue(LCD_Ctrl_Out,EN,STD_HIGH);
	_delay_us(1);
	DIO_vidSetPinValue(LCD_Ctrl_Out,EN,STD_LOW);
	_delay_us(1);
	
	
	
}
void LCD_void_WriteStr(u8 *P_String)
{
	while(*P_String != '\0')
	{
		LCD_void_WriteChar(*P_String);
		P_String++;
	}
}
void LCD_void_GoToRowCol(u8 Copy_u8_Row , u8 Copy_u8_Column)
{
	u8 Local_u8Address ;
	switch(Copy_u8_Row)
	{
	case 0 :
		Local_u8Address = FL_ADDRESS + Copy_u8_Column ; 
		break ;
		
	case 1 :
		Local_u8Address = SL_ADDRESS + Copy_u8_Column ; 
		break ;
	}
	LCD_void_WriteCom(DDRAM_ADDRESS | Local_u8Address ); 
}
void LCD_void_ClearScreen(void)
{
	LCD_void_WriteCom(CLEAR_COMMAND);
	_delay_ms(2);
}