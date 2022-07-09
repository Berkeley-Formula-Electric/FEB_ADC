/*
 * FEB_ADC.h
 *
 *  Created on: Jul 5, 2022
 *      Author: TK
 */

#ifndef FEB_CAN_FEB_ADC_H_
#define FEB_CAN_FEB_ADC_H_

#include "stm32f4xx_hal.h"

/**
 * @brief Performs a blocking ADC sampling on specific channel
 * 
 * @param ADCx 
 * @param channel 
 * @return float 
 */
float FEB_ADC_sampleChannel(ADC_HandleTypeDef *ADCx, uint32_t channel);

#endif /* FEB_CAN_FEB_ADC_H_ */
