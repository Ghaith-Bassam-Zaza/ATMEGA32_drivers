/*
 * SSEG_private.h
 *
 * Created: 9/11/2021 1:08:49 PM
 *  Author: Ghaith
 */ 


#ifndef SSEG_PRIVATE_H_
#define SSEG_PRIVATE_H_

#define SSEG_COM_ANOD 0
#define SSEG_COM_CATHOD 1





#define SSEG_NUMBER_ZERO 0b00111111
#define SSEG_NUMBER_ONE 0b00000110
#define SSEG_NUMBER_TWO 0b01011011
#define SSEG_NUMBER_THREE 0b01001111
#define SSEG_NUMBER_FOUR  0b01100110
#define SSEG_NUMBER_FIVE 0b01101101
#define SSEG_NUMBER_SIX 0b01111101
#define SSEG_NUMBER_SEVEN 0b00000111
#define SSEG_NUMBER_EIGHT 0b01111111
#define SSEG_NUMBER_NINE 0b01101111

#if (pin_seg_a >= 33 && pin_seg_a <= 40) 
#define SEGA_PORT DIO_PORTA
#define SEGA_PIN (40 - pin_seg_a)

#elif (pin_seg_a <= 8)
#define SEGA_PORT DIO_PORTB
#define SEGA_PIN (pin_seg_a-1)

#elif (pin_seg_a >= 22 && pin_seg_a <= 29) 
#define SEGA_PORT DIO_PORTC
#define SEGA_PIN (pin_seg_a-22)

#elif (pin_seg_a >= 14 && pin_seg_a <= 21)
#define SEGA_PORT DIO_PORTD
#define SEGA_PIN (pin_seg_a-14)

#endif



#if (pin_seg_b >= 33 && pin_seg_b <= 40)
#define SEGB_PORT DIO_PORTA
#define SEGB_PIN (40 - pin_seg_b)

#elif (pin_seg_b <= 8)
#define SEGB_PORT DIO_PORTB
#define SEGB_PIN (pin_seg_b-1)

#elif (pin_seg_b >= 22 && pin_seg_b <= 29)
#define SEGB_PORT DIO_PORTC
#define SEGB_PIN (pin_seg_b-22)

#elif (pin_seg_b >= 14 && pin_seg_b <= 21)
#define SEGB_PORT DIO_PORTD
#define SEGB_PIN (pin_seg_b-14)

#endif




#if (pin_seg_c >= 33 && pin_seg_c <= 40)
#define SEGC_PORT DIO_PORTA
#define SEGC_PIN (40 - pin_seg_c)

#elif (pin_seg_c <= 8)
#define SEGC_PORT DIO_PORTB
#define SEGC_PIN (pin_seg_c-1)

#elif (pin_seg_c >= 22 && pin_seg_c <= 29)
#define SEGC_PORT DIO_PORTC
#define SEGC_PIN (pin_seg_c-22)

#elif (pin_seg_c >= 14 && pin_seg_c <= 21)
#define SEGC_PORT DIO_PORTD
#define SEGC_PIN (pin_seg_c-14)

#endif



#if (pin_seg_d >= 33 && pin_seg_d <= 40)
#define SEGD_PORT DIO_PORTA
#define SEGD_PIN (40 - pin_seg_d)

#elif (pin_seg_d <= 8)
#define SEGD_PORT DIO_PORTB
#define SEGD_PIN (pin_seg_d-1)

#elif (pin_seg_d >= 22 && pin_seg_d <= 29)
#define SEGD_PORT DIO_PORTC
#define SEGD_PIN (pin_seg_d-22)

#elif (pin_seg_d >= 14 && pin_seg_d <= 21)
#define SEGD_PORT DIO_PORTD
#define SEGD_PIN (pin_seg_d-14)

#endif




#if (pin_seg_e >= 33 && pin_seg_e <= 40)
#define SEGE_PORT DIO_PORTA
#define SEGE_PIN (40 - pin_seg_e)

#elif (pin_seg_e <= 8)
#define SEGE_PORT DIO_PORTB
#define SEGE_PIN (pin_seg_e-1)

#elif (pin_seg_e >= 22 && pin_seg_e <= 29)
#define SEGE_PORT DIO_PORTC
#define SEGE_PIN (pin_seg_e-22)

#elif (pin_seg_e >= 14 && pin_seg_e <= 21)
#define SEGE_PORT DIO_PORTD
#define SEGE_PIN (pin_seg_e-14)

#endif




#if (pin_seg_f >= 33 && pin_seg_f <= 40)
#define SEGF_PORT DIO_PORTA
#define SEGF_PIN (40 - pin_seg_f)

#elif (pin_seg_ff <= 8)
#define SEGF_PORT DIO_PORTB
#define SEGF_PIN (pin_seg_f-1)

#elif (pin_seg_f >= 22 && pin_seg_f <= 29)
#define SEGF_PORT DIO_PORTC
#define SEGF_PIN (pin_seg_f-22)

#elif (pin_seg_f >= 14 && pin_seg_f <= 21)
#define SEGF_PORT DIO_PORTD
#define SEGF_PIN (pin_seg_f-14)

#endif

#if (pin_seg_g >= 33 && pin_seg_gg <= 40)
#define SEGG_PORT DIO_PORTA
#define SEGG_PIN (40 - pin_seg_g)

#elif (pin_seg_g <= 8)
#define SEGG_PORT DIO_PORTB
#define SEGG_PIN (pin_seg_g-1)

#elif (pin_seg_g >= 22 && pin_seg_g <= 29)
#define SEGG_PORT DIO_PORTC
#define SEGG_PIN (pin_seg_g-22)

#elif (pin_seg_g >= 14 && pin_seg_g <= 21)
#define SEGG_PORT DIO_PORTD
#define SEGG_PIN (pin_seg_g-14)

#endif

/*
*
*
*	for the case of using two 7 segment displays
*
*/
#if (number_of_displays == 2)
#if (pin_sec_seg_a >= 33 && pin_sec_seg_a <= 40)
#define SEC_SEGA_PORT DIO_PORTA
#define SEC_SEGA_PIN (40 - pin_sec_seg_a)

#elif (pin_sec_seg_a <= 8)
#define SEC_SEGA_PORT DIO_PORTB
#define SEC_SEGA_PIN (pin_sec_seg_a-1)

#elif (pin_sec_seg_a >= 22 && pin_sec_seg_a <= 29)
#define SEC_SEGA_PORT DIO_PORTC
#define SEC_SEGA_PIN (pin_sec_seg_a-22)

#elif (pin_sec_seg_a >= 14 && pin_sec_seg_a <= 21)
#define SEC_SEGA_PORT DIO_PORTD
#define SEC_SEGA_PIN (pin_sec_seg_a-14)

#endif



#if (pin_sec_seg_b >= 33 && pin_sec_seg_b <= 40)
#define SEC_SEGB_PORT DIO_PORTA
#define SEC_SEGB_PIN (40 - pin_sec_seg_b)

#elif (pin_sec_seg_b <= 8)
#define SEC_SEGB_PORT DIO_PORTB
#define SEC_SEGB_PIN (pin_sec_seg_b-1)

#elif (pin_sec_seg_b >= 22 && pin_sec_seg_b <= 29)
#define SEC_SEGB_PORT DIO_PORTC
#define SEC_SEGB_PIN (pin_sec_seg_b-22)

#elif (pin_sec_seg_b >= 14 && pin_sec_seg_b <= 21)
#define SEC_SEGB_PORT DIO_PORTD
#define SEC_SEGB_PIN (pin_sec_seg_b-14)

#endif




#if (pin_sec_seg_c >= 33 && pin_sec_seg_c <= 40)
#define SEC_SEGC_PORT DIO_PORTA
#define SEC_SEGC_PIN (40 - pin_sec_seg_c)

#elif (pin_sec_seg_c <= 8)
#define SEC_SEGC_PORT DIO_PORTB
#define SEC_SEGC_PIN (pin_sec_seg_c-1)

#elif (pin_sec_seg_c >= 22 && pin_sec_seg_c <= 29)
#define SEC_SEGC_PORT DIO_PORTC
#define SEC_SEGC_PIN (pin_sec_seg_c-22)

#elif (pin_sec_seg_c >= 14 && pin_sec_seg_c <= 21)
#define SEC_SEGC_PORT DIO_PORTD
#define SEC_SEGC_PIN (pin_sec_seg_c-14)

#endif



#if (pin_sec_seg_d >= 33 && pin_sec_seg_d <= 40)
#define SEC_SEGD_PORT DIO_PORTA
#define SEC_SEGD_PIN (40 - pin_sec_seg_d)

#elif (pin_sec_seg_d <= 8)
#define SEC_SEGD_PORT DIO_PORTB
#define SEC_SEGD_PIN (pin_sec_seg_d-1)

#elif (pin_sec_seg_d >= 22 && pin_sec_seg_d <= 29)
#define SEC_SEGD_PORT DIO_PORTC
#define SEC_SEGD_PIN (pin_sec_seg_d-22)

#elif (pin_sec_seg_d >= 14 && pin_sec_seg_d <= 21)
#define SEC_SEGD_PORT DIO_PORTD
#define SEC_SEGD_PIN (pin_sec_seg_d-14)

#endif




#if (pin_sec_seg_e >= 33 && pin_sec_seg_e <= 40)
#define SEC_SEGE_PORT DIO_PORTA
#define SEC_SEGE_PIN (40 - pin_sec_seg_e)

#elif (pin_sec_seg_e <= 8)
#define SEC_SEGE_PORT DIO_PORTB
#define SEC_SEGE_PIN (pin_sec_seg_e-1)

#elif (pin_sec_seg_e >= 22 && pin_sec_seg_e <= 29)
#define SEC_SEGE_PORT DIO_PORTC
#define SEC_SEGE_PIN (pin_sec_seg_e-22)

#elif (pin_sec_seg_e >= 14 && pin_sec_seg_e <= 21)
#define SEC_SEGE_PORT DIO_PORTD
#define SEC_SEGE_PIN (pin_sec_seg_e-14)

#endif




#if (pin_sec_seg_f >= 33 && pin_sec_seg_f <= 40)
#define SEC_SEGF_PORT DIO_PORTA
#define SEC_SEGF_PIN (40 - pin_sec_seg_f)

#elif (pin_sec_seg_ff <= 8)
#define SEC_SEGF_PORT DIO_PORTB
#define SEC_SEGF_PIN (pin_sec_seg_f-1)

#elif (pin_sec_seg_f >= 22 && pin_sec_seg_f <= 29)
#define SEC_SEGF_PORT DIO_PORTC
#define SEC_SEGF_PIN (pin_sec_seg_f-22)

#elif (pin_sec_seg_f >= 14 && pin_sec_seg_f <= 21)
#define SEC_SEGF_PORT DIO_PORTD
#define SEC_SEGF_PIN (pin_sec_seg_f-14)

#endif

#if (pin_sec_seg_g >= 33 && pin_sec_seg_gg <= 40)
#define SEC_SEGG_PORT DIO_PORTA
#define SEC_SEGG_PIN (40 - pin_sec_seg_g)

#elif (pin_sec_seg_g <= 8)
#define SEC_SEGG_PORT DIO_PORTB
#define SEC_SEGG_PIN (pin_sec_seg_g-1)

#elif (pin_sec_seg_g >= 22 && pin_sec_seg_g <= 29)
#define SEC_SEGG_PORT DIO_PORTC
#define SEC_SEGG_PIN (pin_sec_seg_g-22)

#elif (pin_sec_seg_g >= 14 && pin_sec_seg_g <= 21)
#define SEC_SEGG_PORT DIO_PORTD
#define SEC_SEGG_PIN (pin_sec_seg_g-14)
#endif

u8 sec_ports[] = {SEC_SEGA_PORT,SEC_SEGB_PORT,SEC_SEGC_PORT,SEC_SEGD_PORT,SEC_SEGE_PORT,SEC_SEGF_PORT,SEC_SEGG_PORT};

u8 sec_pins [] = {SEC_SEGA_PIN,SEC_SEGB_PIN,SEC_SEGC_PIN,SEC_SEGD_PIN,SEC_SEGE_PIN,SEC_SEGF_PIN,SEC_SEGG_PIN};




#endif



u8 numbers[] = {SSEG_NUMBER_ZERO,SSEG_NUMBER_ONE,SSEG_NUMBER_TWO,SSEG_NUMBER_THREE,SSEG_NUMBER_FOUR,SSEG_NUMBER_FIVE,SSEG_NUMBER_SIX
						,SSEG_NUMBER_SEVEN,SSEG_NUMBER_EIGHT,SSEG_NUMBER_NINE};
						
u8 ports[] = {SEGA_PORT,SEGB_PORT,SEGC_PORT,SEGD_PORT,SEGE_PORT,SEGF_PORT,SEGG_PORT};
	
u8 pins [] = {SEGA_PIN,SEGB_PIN,SEGC_PIN,SEGD_PIN,SEGE_PIN,SEGF_PIN,SEGG_PIN};


#endif /* SSEG_PRIVATE_H_ */