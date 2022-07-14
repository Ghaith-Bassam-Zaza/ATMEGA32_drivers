#ifndef LCD_INT_H_
#define LCD_INT_H_


void LCD_void_Init(void);
void LCD_void_WriteChar(u8 Copy_u8_Char);
void LCD_void_WriteCom(u8 Copy_u8_Comand);
void LCD_void_WriteStr(u8 *P_String);
void LCD_void_GoToRowCol(u8 Copy_u8_Row , u8 Copy_u8_Column);
void LCD_void_ClearScreen(void);



#endif