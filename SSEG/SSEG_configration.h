/*
 * SSEG_configration.h
 *
 * Created: 9/11/2021 1:06:42 PM
 *  Author: Ghaith
 */ 


#ifndef SSEG_CONFIGRATION_H_
#define SSEG_CONFIGRATION_H_

/*
*
*
*change the numbers to the connected pins numbers
*
*/

#define pin_seg_a 40
#define pin_seg_b 39
#define pin_seg_c 38
#define pin_seg_d 37
#define pin_seg_e 36
#define pin_seg_f 35
#define pin_seg_g 34

/*
*
*   in case of using two displays:
*	1-remove the comment signs from pin_sec_seg_numbers
*	2-change number_of_displays into 2
*
*/
/*
#define pin_sec_seg_a 1
#define pin_sec_seg_b 2
#define pin_sec_seg_c 3
#define pin_sec_seg_d 4
#define pin_sec_seg_e 5
#define pin_sec_seg_f 6
#define pin_sec_seg_g 7
*/
#define number_of_displays 1

#define seg_a 0
#define seg_b 1
#define seg_c 2
#define seg_d 3
#define seg_e 4
#define seg_f 5
#define seg_g 6

/*
*
* options:
* A- SSEG_COM_ANOD
* B- SSEG_COM_CATHOD
*
*/
#define SSEG_TYPE SSEG_COM_CATHOD

#define NUMBER_ZERO 0
#define NUMBER_ONE 1
#define NUMBER_TWO 2
#define NUMBER_THREE 3
#define NUMBER_FOUR 4
#define NUMBER_FIVE 5
#define NUMBER_SIX 6
#define NUMBER_SEVEN 7
#define NUMBER_EIGHT 8
#define NUMBER_NINE 9

#endif /* SSEG_CONFIGRATION_H_ */