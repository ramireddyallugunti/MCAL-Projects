/*
 * led.c
 *
 *  Created on: Aug 10, 2026
 *      Author: mirafra
 */
#include "led.h"
#include "registers.h"
void led_init(void)
{

	rcc_gpio(RCC_GPIOD);

	led_mode(LED1_MODE);
	led_mode(LED2_MODE);
	led_mode(LED3_MODE);

	led_off(LED1);
	led_off(LED2);
	led_off(LED3);
}
void rcc_gpio(uint32_t rcc_gpio)
{
	RCC_AHB1ENR |= (1U << rcc_gpio);
}
void rcc_apb2(uint32_t rcc_ph)
{
	RCC_APB2ENR |= (1U << rcc_ph);
}

void led_mode(uint32_t led_mode)
{
	GPIOD_MODER &= ~(3U << led_mode);
	GPIOD_MODER |= (1U << led_mode);

}
void led_on(uint32_t led)
{
	GPIOD_ODR |= (1U << led);
}

void led_off(uint32_t led)
{
	GPIOD_ODR &= ~(1U << led);
}

