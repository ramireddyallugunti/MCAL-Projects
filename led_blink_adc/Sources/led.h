/*
 * led.h
 *
 *  Created on: Aug 10, 2026
 *      Author: mirafra
 */
#include<stdint.h>

#ifndef SOURCES_LED_H_
#define SOURCES_LED_H_



void rcc_gpio(uint32_t rcc_gpio);
void rcc_apb2(uint32_t rcc_ph);
void led_init(void);
void led_mode(uint32_t led_mode);
void led_on(uint32_t led);
void led_off(uint32_t led);


#endif /* SOURCES_LED_H_ */
