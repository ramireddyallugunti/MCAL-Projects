/*
 * adc.c
 *
 *  Created on: Aug 10, 2026
 *      Author: mirafra
 */
#include "adc.h"
#include "led.h"
#include "registers.h"
void adc_init(void)
{
	//for initializing the clock for portA and ADC
	rcc_gpio(RCC_GPIOA);
	rcc_apb2(RCC_ADC);

	//prescaler clock devider
	adc_prescaler();

	//resolution 00 for 12-bit
	adc_resolution();

	//mode of gpio A as analog
	gpioa_mode();

	//length of the sequence
	adc_sequence_length();

	//order of sequence
	adc_sequence1();

	//for sampling time
	adc_sampling_time();

	//to enable the ADC
	adc_enable();

}

uint16_t adc_read()
{
	uint16_t value=0;

	//start of conversion
	adc_start();
	//end of conversion
	adc_end();
	//value from data register of ADC1
	value = adc_data();

	return value;
}
void adc_start()
{
	ADC1_CR2 |= (1 << SWSTART);
}
void adc_end()
{
	while(!(ADC1_SR & (1U << EOC)));
}
uint16_t adc_data()
{
	return ADC1_DR;
}
void adc_prescaler()
{
	ADC_CCR &= ~(3U << ADC_PRE);
	ADC_CCR |= (1U << ADC_PRE);
}
void adc_resolution()
{
	ADC1_CR1 |= (0U << ADC_RES);
}
void gpioa_mode()
{
	GPIOA_MODER &= ~(3U << ADC1_CH0);
	GPIOA_MODER |=  (3U << ADC1_CH0);
}
void adc_sequence_length()
{
	ADC1_SQR1 &= ~(0xFU << SQ_LENGTH);
}
void adc_sequence1()
{
	ADC1_SQR3 &= ~(0x1FU << SQ1);
	ADC1_SQR3 |= (0U << SQ1);
}
void adc_sampling_time()
{
	ADC1_SMPR2 &= ~(7U << SMP0);
	ADC1_SMPR2 |= (4U << SMP0);
}
void adc_enable()
{
	ADC1_CR2 |= (1U << ADC_ENABLE);
}
