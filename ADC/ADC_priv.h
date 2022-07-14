 /*
 *
 *
 * Created: 9/24/2021 8:52:55 AM
 * Author : Ghaith
 */

#ifndef ADC_PRIV_H_
#define ADC_PRIV_H_

#define ADMUX  (*( (volatile u8 *)0x27) )
#define ADCSRA (*( (volatile u8 *)0x26) )
#define SFIOR  (*( (volatile u8 *)0x50) )
#define ADCL   (*( (volatile u8 *)0x24) )
#define ADCH   (*( (volatile u8 *)0x25) )

/*reference ref volatage*/

#define ADC_AVCC       0
#define ADC_Internal   1
#define ADC_Aref       2 

/* ADMUX PINS*/
#define REFS0		   6	//ADC Vref
#define REFS1          7	//ADC Vref
#define ADLAR		   5	//ADC Left Adjust Result


/*Prescaler*/

#define ADC_Prescaler_2     0
#define ADC_Prescaler_4		1
#define ADC_Prescaler_8		2
#define ADC_Prescaler_16	3
#define ADC_Prescaler_32	4
#define ADC_Prescaler_64	5
#define ADC_Prescaler_128	6

/*ADCSRA pins*/
#define ADEN		7	//ADC Enable
#define ADSC		6	//ADC Start Conversion
#define ADATE		5	//ADC Auto Trigger Enable
#define ADIF		4	//ADC Interrupt Flag
#define ADIE		3	//ADC Interrupt Enable	
#define ADPS2		2	//ADC Prescaler Select Bit2
#define ADPS1		1	//ADC Prescaler Select Bit1
#define ADPS0		0	//ADC Prescaler Select Bit0

/*ADC_Mode*/
#define Eight_Bit_Mode   8
#define Ten_Bit_Mode   10


#endif



