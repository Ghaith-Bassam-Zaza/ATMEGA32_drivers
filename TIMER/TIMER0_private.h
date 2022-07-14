/*
 * TIMER0_private.h
 *
 * Created: 9/30/2021 1:02:34 PM
 *  Author: Ghaith
 */ 
#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_
/*REGISTER*/
#ifndef TCCR0
#define TCCR0 (*(volatile u8 * )0x53) //Counter Control Register
#endif

/*PINES*/
#define FOC0  7 //Force Output Compare
#define WGM00 6 //Waveform Generation Mode
#define COM01 5 //Compare Match Output Mode
#define COM00 3 //Compare Match Output Mode
#define WGM01 3 //Waveform Generation Mode
#define CS02  2 //Clock Select
#define CS01  1 //Clock Select
#define CS00  0 //Clock Select
/*WGM modes*/
#define WGM0_normal					  0
#define WGM0_PWM_phaseCorrect		  1
#define WGM0_CTC					  2
#define WGM0_PWM_fast				  3
/*compare modes*/
#define COM0_normal 0	//Normal port operation, OC0 disconnected.
#define COM0_toggle 1	//Toggle OC0 on compare match
#define COM0_clear  2	//Clear OC0 on compare match					(non-inverting mode)	(clear on upcounting)
#define COM0_set    3	//Set OC0 on compare match						(inverting mode)		(set on upcounting)
/*prescaling modes*/
#define CLK0_non			0	//No clock source (Timer/Counter stopped).
#define CLK0_one			1	//clkIO/1	  (No prescaling)
#define CLK0_eight			2	//clkIO/8	  (From prescaler)
#define CLK0_sixtyFour		3	//clkIO/64	  (From prescaler)
#define CLK0_twoHunFiftySix	4	//clkIO/256   (From prescaler)
#define CLK0_touTwentyFour	5	//clkIO/1024  (From prescaler)
#define CLK0_ext_falling	6	//External clock source on T1 pin. Clock on falling edge.
#define CLK0_ext_Rising		7	//External clock source on T1 pin. Clock on rising edge.

/*REGISTERS*/
#ifndef TCNT0
#define TCNT0 (*(volatile u8 * )0x52) //Counter Register
#endif
#ifndef OCR0
#define OCR0  (*(volatile u8 * )0x5C) //Output Compare Register
#endif

#ifndef TIMSK
#define TIMSK (*(volatile u8 * )0x59) //Counter Interrupt Mask Register
#endif
/*PINES*/
#define OCIE0 1 //Output Compare Match Interrupt Enable
#define TOIE0 0	//Overflow Interrupt Enable

/*REGISTER*/
#ifndef TIFR
#define TIFR  (*(volatile u8 * )0x58)
#endif
/*PINES*/
#define OCF0 1 //Output Compare Flag 0
#define TOV0 0 //Overflow Flag

#endif   /*TIMER_PRIVATE_H_*/