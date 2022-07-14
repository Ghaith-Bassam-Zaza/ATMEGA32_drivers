 /*
 *
 *
 * Created: 9/24/2021 8:52:55 AM
 * Author : Ghaith
 */

#ifndef ADC_INT_H_
#define ADC_INT_H_

void ADC_void_initialize(void);

void ADC_void_enableInterrupt(void);

void ADC_void_disableInterrupt(void);


void ADC_void_enable(void);

void ADC_void_disable(void);

#if ADC_Mode == Eight_Bit_Mode
u8 ADC_u8_getConversionValue(u8 Channel, u8 * Result);
u8 ADC_u8_getLastConverted(void);

#else
u16 ADC_u16_getConversionValue(u8 Channel, u16 * Result);
u16 ADC_u16_getLastConverted(void) ;

#endif





#endif
