#ifndef LCD_CONF_H_
#define LCD_CONF_H_

#define LCD_Data_Out DIO_PORTA
#define LCD_Ctrl_Out DIO_PORTB

#define EN 3
#define RW 4
#define RS 5

/*
*
*	options:
*		A-CURSOR_OFF
*		B-CURSOR_ON
*/
#define CURSOR_STATE CURSOR_OFF

#endif