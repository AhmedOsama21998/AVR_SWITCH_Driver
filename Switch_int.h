/*
 * Switch_int.h
 *
 *  Created on: Apr 23, 2023
 *      Author: Ahmed Osama
 */
/*
 * In this file we put API's
 *
 */
#ifndef SWITCH_INT_H_
#define SWITCH_INT_H_

ES_t Switch_enuInit(SW_t * Copy_AstrSwitchs);
ES_t Switch_enuGetState(SW_t * Copy_AstrSwitchs ,u8 *Copypu8Swstate);

#endif /* SWITCH_INT_H_ */
