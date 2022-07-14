
 /*
 *
 *
 * Created: 9/24/2021 8:52:55 AM
 * Author : Ghaith
 */
#include "Std_Types.h"
#include "Macros.h"
#include "ADC_int.h"
#include "ADC_priv.h"
#include "ADC_config.h"


void ADC_void_initialize(void)
{
	/*Set ref volatage*/
#if ADC_Mode_Voltage ==ADC_AVCC

	SET_BIT(ADMUX , REFS0);
	CLEAR_BIT(ADMUX , REFS1);

#elif ADC_Mode_Voltage == ADC_Internal
	SET_BIT(ADMUX , REFS0);
	SET_BIT(ADMUX , REFS1);

#elif ADC_Mode_Voltage == ADC_Aref

	CLEAR_BIT(ADMUX , REFS0);
	CLEAR_BIT(ADMUX , REFS1);


#endif 

	/*prescaler value*/

#if ADC_Prescaler_Option == ADC_Prescaler_2

	CLEAR_BIT(ADCSRA , ADPS0 );
	CLEAR_BIT(ADCSRA , ADPS1 );
	CLEAR_BIT(ADCSRA , ADPS2 );

#elif ADC_Prescaler_Option == ADC_Prescaler_4
	CLEAR_BIT(ADCSRA , ADPS0 );
	SET_BIT(ADCSRA , ADPS1 );
	CLEAR_BIT(ADCSRA , ADPS2 );


#elif ADC_Prescaler_Option == ADC_Prescaler_8

	SET_BIT(ADCSRA , ADPS0 );
	SET_BIT(ADCSRA , ADPS1 );
	CLEAR_BIT(ADCSRA , ADPS2 );

#elif ADC_Prescaler_Option == ADC_Prescaler_16

	CLEAR_BIT(ADCSRA , ADPS0 );
	CLEAR_BIT(ADCSRA , ADPS1 );
	SET_BIT(ADCSRA , ADPS2 );

#elif ADC_Prescaler_Option == ADC_Prescaler_32

	SET_BIT(ADCSRA , ADPS0 );
	CLEAR_BIT(ADCSRA , ADPS1 );
	SET_BIT(ADCSRA , ADPS2 );

#elif ADC_Prescaler_Option == ADC_Prescaler_64

	CLEAR_BIT(ADCSRA , ADPS0 );
	SET_BIT(ADCSRA , ADPS1 );
	SET_BIT(ADCSRA , ADPS2 );



#elif ADC_Prescaler_Option == ADC_Prescaler_128

	SET_BIT(ADCSRA , ADPS0 );
	SET_BIT(ADCSRA , ADPS1 );
	SET_BIT(ADCSRA , ADPS2 );

#endif


#if ADC_Mode == Eight_Bit_Mode
	SET_BIT(ADMUX , ADLAR);
#else
	CLEAR_BIT(ADMUX , ADLAR);
#endif
	SET_BIT(ADCSRA , ADIF);
	CLEAR_BIT(ADCSRA , ADIE);

	SET_BIT(ADCSRA , ADEN);

}

void ADC_void_enableInterrupt(void)
{
	SET_BIT(ADCSRA , ADIE);
}

void ADC_void_disableInterrupt(void)
{
	CLEAR_BIT(ADCSRA , ADIE);
}



void ADC_void_enable(void)
{
	SET_BIT(ADCSRA , ADEN);
}

void ADC_void_disable(void)
{
	CLEAR_BIT(ADCSRA , ADEN);
}

#if ADC_Mode == Eight_Bit_Mode

u8 ADC_u8_getConversionValue(u8 Channel , u8 * Result)
{
	ADMUX &= 0b11100000 ;
	ADMUX |= Channel ;

	/*Start Coversion*/
	SET_BIT(ADCSRA , ADSC);
	/*Get Interrupt enable bit status*/
	if( GET_BIT(ADCSRA , ADIE))
	{
		return STD_LOW ;
	}else {
		while(!GET_BIT(ADCSRA , ADIF)); // wait for conversion
		SET_BIT(ADCSRA , ADIF);
		* Result = ADCH ;
		return STD_HIGH ;
	}

}

u8 ADC_u8_getLastConverted(void)
{
	return ADCH;
}


#else

u16 ADC_u16_getConversionValue(u8 Channel, u16 * Result){
	u8 LOW , HIGH ;
	//u16 result ;
	ADMUX &= 0b11100000 ;
	ADMUX |= Channel ;
	/*start convertion*/
	SET_BIT(ADCSRA , ADSC);
	if( GET_BIT(ADCSRA , ADIE) == 1)
	{
		return STD_LOW ;
	}else {
		while(GET_BIT(ADCSRA , 4) == 0);
		SET_BIT(ADCSRA , 4);
		LOW = ADCL ;
		HIGH = ADCH ;
		* Result = ( ( ( HIGH & 0b00000011)<<8 ) | LOW  ) ;
		return STD_HIGH ;
	}

}

u16 ADC_u16_getLastConverted(void){
	u16 result ;
	u8 LOW ;
	u8 HIGH ;
	LOW = ADCL ;
	HIGH = ADCH ;
	result = ( ( (HIGH & 0b00000011)<<8 )| LOW  ) ;
	return result ;
}

#endif
