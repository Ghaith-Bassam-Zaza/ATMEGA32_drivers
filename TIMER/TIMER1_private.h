/*
 * TIMER_private.h
 *
 * Created: 9/30/2021 11:23:31 AM
 *  Author: Ghaith
 */ 


#ifndef TIMER1_PRIVATE_H_
#define TIMER1_PRIVATE_H_

/*REGISTER*/
#ifndef SFIOR
	#define SFIOR *((volatile u8*)0x50)	//Special Function IO Register
#endif
/*PORTS*/
#define PSR10 0 //Prescaler Reset Counter1 and Counter0



/******************************************** COUNTER1 ********************************************************/
/*REGISTER*/
#ifndef TCCR1A
	#define TCCR1A *((volatile u8*)0x4F) //Counter1 Control Register A
#endif
/*PINES*/
#define COM1A1 7	//Compare Output Mode for Compare unit A
#define COM1A0 6	//Compare Output Mode for Compare unit A
#define COM1B1 5	//Compare Output Mode for Compare unit B
#define COM1B0 4	//Compare Output Mode for Compare unit B
/*MODES*/
#define COM1_normal 0	//Normal port operation, OC1A/OC1B disconnected.
#define COM1_toggle 1	//Toggle OC1A/OC1B on compare match
#define COM1_clear  2	//Clear OC1A/OC1B on compare match					(non-inverting mode)	(clear on upcounting)
#define COM1_set    3	//Set OC1A/OC1B on compare match					(inverting mode)		(set on upcounting)
/*PINES*/
#define FOC1A 3		//Force Output Compare for Compare unit A
#define FOC1B 2		//Force Output Compare for Compare unit B
#define WGM11 1		//Waveform Generation Mode
#define WGM10 0		//Waveform Generation Mode




/*REGISTER*/
#ifndef TCCR1B
	#define TCCR1B *((volatile u8*)0x4E) //Counter1 Control Register B
#endif
/*PINS*/
#define ICNC1 7 //Input Capture Noise Canceler (requires four cycles delay)
#define ICES1 6 //Input Capture Edge Select
#define WGM13 4 //Waveform Generation Mode
#define WGM12 3 //Waveform Generation Mode
#define CS12  2 //Clock Select
#define CS11  1 //Clock Select
#define CS10  0 //Clock Select
/*MODES*/
#define CLK1_non			0	//No clock source (Timer/Counter stopped).
#define CLK1_one			1	//clkIO/1	  (No prescaling)
#define CLK1_eight			2	//clkIO/8	  (From prescaler)
#define CLK1_sixtyFour		3	//clkIO/64	  (From prescaler)
#define CLK1_twoHunFiftySix	4	//clkIO/256   (From prescaler)
#define CLK1_touTwentyFour	5	//clkIO/1024  (From prescaler)
#define CLK1_ext_falling	6	//External clock source on T1 pin. Clock on falling edge.
#define CLK1_ext_Rising		7	//External clock source on T1 pin. Clock on rising edge.
/*WGM MODES*/
#define WGM1_normal								  0
#define WGM1_PWM_phaseCorrect_8bit				  1
#define WGM1_PWM_phaseCorrect_9bit				  2 
#define WGM1_PWM_phaseCorrect_10bit				  3
#define WGM1_CTC_compare						  4
#define WGM1_PWM_fast_8bit						  5
#define WGM1_PWM_fast_9bit						  6
#define WGM1_PWM_fast_10bit						  7
#define WGM1_PWM_phaseAndFrequencyCorrect_capture 8
#define WGM1_PWM_phaseAndFrequencyCorrect_compare 9
#define WGM1_PWM_phaseCorrect_capture			  10
#define WGM1_PWM_phaseCorrect_compare			  11
#define WGM1_CTC_capture						  12
#define WGM1_PWM_fast_capture					  14
#define WGM1_PWM_fast_compare					  15


/*REGISTERS*/
#ifndef TCNT1H
#define TCNT1H *((volatile u8*)0x4D) //Counter High
#endif
#ifndef TCNT1L
#define TCNT1L *((volatile u8*)0x4C) //Counter Low
#endif
#ifndef OCR1AH
#define OCR1AH *((volatile u8*)0x4B) //Output Compare Register 1 A HIGH
#endif
#ifndef OCR1AL
#define OCR1AL *((volatile u8*)0x4A) //Output Compare Register 1 A LOW
#endif
#ifndef OCR1BH
#define OCR1BH *((volatile u8*)0x49) //Output Compare Register 1 B HIGH
#endif
#ifndef OCR1BL
#define OCR1BL *((volatile u8*)0x48) //Output Compare Register 1 B LOW
#endif
#ifndef ICR1H
#define ICR1H  *((volatile u8*)0x47) //Input  Capture Register 1   HIGH
#endif
#ifndef ICR1L
#define ICR1L  *((volatile u8*)0x46) //Input  Capture Register 1   LOW
#endif


#ifndef TIMSK
#define TIMSK (*(volatile u8 * )0x59) //Counter Interrupt Mask Register
#endif

/*PINES*/
#define TICIE1 5 //Counter1, Input Capture Interrupt Enable
#define OCIE1A 4 //Counter1, Output Compare A Match Interrupt Enable
#define OCIE1B 3 //Counter1, Output Compare B Match Interrupt Enable
#define TOIE1  2 //Counter1, Overflow Interrupt Enable


/*REGISTER*/
#ifndef TIFR
#define TIFR *((volatile u8*)0x58)	//Interrupt Flag Register
#endif

/*PINS*/
#define ICF1	5	//Input  Capture1 Flag
#define OCF1A	4	//Output Compare1 A Match Flag
#define OCF1B	3	//Output Compare1 B Match Flag
#define TOV1	2	//Overflow1 Flag


#define CANCELLER1_ON  1
#define CANCELLER1_OFF 0

#define TIMER1_risingEdge  1
#define TIMER1_fallingEdge 0
	

#endif /* TIMER_PRIVATE_H_ */