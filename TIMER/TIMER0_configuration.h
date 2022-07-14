/*
 * TIMER0_configration.h
 *
 * Created: 9/30/2021 1:02:34 PM
 *  Author: Ghaith
 */ 

#ifndef TIMER0_CONFIGURATION_H_
#define TIMER0_CONFIGURATION_H_

/*
//		MODES		non PWM
// //  COM0_normal	//Normal port operation, OC0 disconnected.
// //  COM0_toggle  //Toggle OC0 on compare match
// //  COM0_clear 	//Clear OC0 on compare match					(non-inverting mode)	(clear on upcounting)
// //  COM0_set		//Set OC0 on compare match						(inverting mode)		(set on upcounting)
*/
#define TIMER0_compare_match COM0_toggle



/*
// / *PRESCALING MODES* /
// //  CLK0_non					//No clock source (Timer/Counter stopped).
// //  CLK0_one					//clkIO/1	  (No prescaling)
// //  CLK0_eight				//clkIO/8	  (From prescaler)
// //  CLK0_sixtyFour			//clkIO/64	  (From prescaler)
// //  CLK0_twoHunFiftySix		//clkIO/256  (From prescaler)
// //  CLK0_touTwentyFour		//clkIO/1024 (From prescaler)
// //  CLK0_ext_falling			//External clock source on T1 pin. Clock on falling edge.
// //  CLK0_ext_Rising			//External clock source on T1 pin. Clock on rising edge.
*/
#define TIMER0_PRESCALING CLK0_one

/*
// / *WGM modes* /
// WGM0_normal					  
// WGM0_PWM_phaseCorrect		  
// WGM0_CTC					  
// WGM0_PWM_fast				  
*/
#define WGM0_mode WGM0_normal



#endif /*TIMER_CONFIGURATION_H_*/