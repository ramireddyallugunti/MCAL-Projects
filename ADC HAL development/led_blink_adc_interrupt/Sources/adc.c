/*
 * adc.c
 *
 *  Created on: Aug 10, 2026
 *      Author: mirafra
 */
#include "adc.h"
#include "led.h"
#include "registers.h"

volatile uint16_t adc_value;
void adc_init(void)
{
	rcc_gpio(RCC_GPIOA);
	rcc_apb2(RCC_ADC);

	adc_prescaler();

	gpioa_mode();

	adc_sequence1();

	adc_sequence_length();

	adc_sampling_time();

	interrupt_eoc();

	enable_adc_interrupt();

	en_cont_convertion();

	adc_enable();


}
void ADC_IRQHandler(void)
{
	if(ADC1_SR & (1U << 1))
	{
		adc_value = ADC1_DR;
	}

}
void adc_start()
{
	ADC1_CR2 |= (1 << 30);
}
void adc_prescaler()
{
	ADC_CCR &= ~(3U << 16);
	ADC_CCR |= (1U << 16);
}
void adc_resolution()
{
	ADC1_CR1 |= (0U << 24);
}
void gpioa_mode()
{
	GPIOA_MODER &= ~(3U << 0);
	GPIOA_MODER |=  (3U << 0);
}
void adc_sequence_length()
{
	ADC1_SQR1 &= ~(0xFU << 20);
}
void adc_sequence1()
{
	ADC1_SQR3 &= ~(0x1FU << 0);
	ADC1_SQR3 |= (0U << 0);
}
void adc_sampling_time()
{
	ADC1_SMPR2 &= ~(7U << 0);
	ADC1_SMPR2 |= (4U << 0);
}
void adc_enable()
{
	ADC1_CR2 |= (1U << 0);
}
void interrupt_eoc()
{
	ADC1_CR1 |= (1U << 5);
}
void en_cont_convertion()
{
	ADC1_CR2 |= (1U << 1);
}
void enable_adc_interrupt()
{
	NVIC_ISER0 |= (1U << 18);
}
