 /*
 *
 *
 * Created: 9/24/2021 8:52:55 AM
 * Author : Ghaith
 */

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/* reference mode */
/*
//5v
# ADC_AVCC       //AVCC with external capacitor at AREF pin
# ADC_Internal   //Internal 2.56V Voltage Reference with external capacitor at AREF pin
//external
# ADC_Aref       //Internal Vref turned off
*/
#define ADC_Mode_Voltage   ADC_AVCC


/* ADC Prescaler
*
*
*
* ADC_Prescaler_2     
* ADC_Prescaler_4		
* ADC_Prescaler_8	
* ADC_Prescaler_16	
* ADC_Prescaler_32	
* ADC_Prescaler_64	
* ADC_Prescaler_128	
*
*/

#define ADC_Prescaler_Option  ADC_Prescaler_2

/*ADC Bit Mode*/
/*
* Eight_Bit_Mode
* Ten_Bit_Mode
*/

#define ADC_Mode  Ten_Bit_Mode






#endif
