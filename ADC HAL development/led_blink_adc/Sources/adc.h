/*
 * adc.h
 *
 *  Created on: Aug 10, 2026
 *      Author: mirafra
 */
#include<stdint.h>

#ifndef SOURCES_ADC_H_
#define SOURCES_ADC_H_


void adc_init(void);
uint16_t adc_read(void);
void adc_start();
void adc_end();
uint16_t adc_data();

void adc_prescaler();
void adc_resolution();
void gpioa_mode();
void adc_sequence_length();
void adc_sequence1();
void adc_sampling_time();
void adc_enable();

#endif /* SOURCES_ADC_H_ */
