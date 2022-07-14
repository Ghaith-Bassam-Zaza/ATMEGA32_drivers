/*
 * TIMER_configration.h
 *
 * Created: 9/30/2021 1:02:34 PM
 *  Author: Ghaith
 */ 


#ifndef TIMER1_CONFIGRATION_H_
#define TIMER1_CONFIGRATION_H_

/*
//		/*MODES*/		/*non PWM*/									
// //  COM1_normal	//Normal port operation, OC1A/OC1B disconnected. 
// //  COM1_toggle  //Toggle OC1A/OC1B on compare match 
// //  COM1_clear 	//Clear OC1A/OC1B on compare match					(non-inverting mode)	(clear on upcounting)
// //  COM1_set		//Set OC1A/OC1B on compare match					(inverting mode)		(set on upcounting)
/*/
#define TIMER1_compare_matchA COM1_toggle
#define TIMER1_compare_matchB COM1_toggle


/*
// / *PRESCALING MODES* /
// //  CLK1_non					//No clock source (Timer/Counter stopped).
// //  CLK1_one					//clkI/O/1	  (No prescaling)
// //  CLK1_eight				//clkI/O/8	  (From prescaler)
// //  CLK1_sixtyFour			//clkI/O/64	  (From prescaler)
// //  CLK1_twoHunFiftySix		//clkI/O/256  (From prescaler)
// //  CLK1_touTwentyFour		//clkI/O/1024 (From prescaler)
// //  CLK1_ext_falling			//External clock source on T1 pin. Clock on falling edge.
// //  CLK1_ext_Rising			//External clock source on T1 pin. Clock on rising edge.
*/
#define TIMER1_PRESCALING CLK1_one

/*
// / *WGM MODES* /
//  WGM1_normal								  
//  WGM1_PWM_phaseCorrect_8bit				  
//  WGM1_PWM_phaseCorrect_9bit				  
//  WGM1_PWM_phaseCorrect_10bit				  
//  WGM1_CTC_compare						  
//  WGM1_PWM_fast_8bit						  
//  WGM1_PWM_fast_9bit						  
//  WGM1_PWM_fast_10bit						  
//  WGM1_PWM_phaseAndFrequencyCorrect_capture 
//  WGM1_PWM_phaseAndFrequencyCorrect_compare 
//  WGM1_PWM_phaseCorrect_capture			  
//  WGM1_PWM_phaseCorrect_compare			  
//  WGM1_CTC_capture						  
//  WGM1_PWM_fast_capture					  
//  WGM1_PWM_fast_compare					  
*/
#define WGM1_mode WGM1_normal

/*
// / *edge capture* /
// // TIMER1_fallingEdge
// // TIMER1_risingEdge
*/
#define TIMER1_edgeCapture TIMER1_risingEdge

/*
// / *noise canceller (requires four cycles delay)* /
// //		CANCELLER1_ON  
// //		CANCELLER1_OFF 
*/
#define TIMER1_noiseCanceller CANCELLER1_OFF

#endif /* TIMER_CONFIGRATION_H_ */