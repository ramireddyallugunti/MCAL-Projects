/*
 * registers.h
 *
 *  Created on: Aug 12, 2026
 *      Author: mirafra
 */

#ifndef SOURCES_REGISTERS_H_
#define SOURCES_REGISTERS_H_

#define RCC_BASE	0x40023800U
#define RCC_AHB1ENR (*(volatile uint32_t *)(RCC_BASE + 0x30U))
#define RCC_APB2ENR (*(volatile uint32_t *)(RCC_BASE + 0x44U))

#define GPIOA_BASE  0x40020000U
#define GPIOD_BASE  0x40020C00U
#define GPIOA_MODER (*(volatile uint32_t *)(GPIOA_BASE + 0x00U))
#define GPIOD_MODER (*(volatile uint32_t *)(GPIOD_BASE + 0x00U))
#define GPIOD_ODR	(*(volatile uint32_t *)(GPIOD_BASE + 0x14U))


#define ADC1_BASE		0x40012000U
#define ADC1_SR		(*(volatile uint32_t *)(ADC1_BASE + 0x00U))
#define ADC1_CR1	(*(volatile uint32_t *)(ADC1_BASE + 0x04U))
#define ADC1_CR2    (*(volatile uint32_t *)(ADC1_BASE + 0x08U))
#define ADC1_SMPR2  (*(volatile uint32_t *)(ADC1_BASE + 0x10U))
#define ADC1_SQR1 	(*(volatile uint32_t *)(ADC1_BASE + 0x2CU))
#define ADC1_SQR3	(*(volatile uint32_t *)(ADC1_BASE + 0x34U))
#define ADC1_DR 	(*(volatile uint32_t *)(ADC1_BASE + 0x4CU))

#define ADC_COMMON_BASE 0x40012300U
#define ADC_CCR		(*(volatile uint32_t *)(ADC_COMMON_BASE + 0x04U))

#define LED1		12
#define LED2		13
#define LED3		14
#define ADC1_CH0    0

#define LED1_MODE	24
#define LED2_MODE   26
#define LED3_MODE   28

#define GPIOA_MODE 0
#define GPIOD_MODE 1

#define RCC_GPIOA	0
#define RCC_GPIOD	3
#define RCC_ADC		8

#define ADC_ENABLE  0
#define SMP0 		0
#define SQ_LENGTH   20
#define SQ1			0
#define ADC_RES		24
#define ADC_PRE		16
#define EOC			1
#define SWSTART		30

#define INPUT		0
#define OUTPUT		1
#define AF			2
#define ANALOG      3


#endif /* SOURCES_REGISTERS_H_ */
