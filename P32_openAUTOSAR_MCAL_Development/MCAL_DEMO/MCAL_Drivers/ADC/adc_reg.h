/*
 * adc_reg.h
 *
 *  Created on: Nov 17, 2026
 *      Author: Admin
 */

#ifndef MCAL_DRIVERS_ADC_ADC_REG_H_
#define MCAL_DRIVERS_ADC_ADC_REG_H_

#include "Common/StandardTypes.h"


/*          EVADC base address              */
#define ADC_BASE_ADDRESS                (0XF0020000UL)

/*          ADC group base addresses         */
#define ADC_GROUP0_BASE                 (0XF0020400UL)
#define ADC_GROUP1_BASE                 (0XF0020800UL)
#define ADC_GROUP2_BASE                 (0XF0020C00UL)
#define ADC_GROUP3_BASE                 (0XF0021000UL)
#define ADC_GROUP4_BASE                 (0XF0021400UL)
#define ADC_GROUP5_BASE                 (0XF0021800UL)
#define ADC_GROUP6_BASE                 (0XF0021C00UL)
#define ADC_GROUP7_BASE                 (0XF0022000UL)
#define ADC_GROUP8_BASE                 (0XF0022400UL)
#define ADC_GROUP9_BASE                 (0XF0022800UL)
#define ADC_GROUP10_BASE                (0XF0022C00UL)
#define ADC_GROUP11_BASE                (0XF0023000UL)


/*          Global registers of EVADC           */
#define ADC_CLC_OFFSET                  (0x0000UL)
#define ADC_GLOBCFG_OFFSET              (0x0080UL)


/*          group specific registers            */
#define ADC_ANCFG_OFFSET                (0X0088UL)
#define ADC_ARBCFG_OFFSET               (0X0080UL)
#define ADC_ARBPR_OFFSET                (0X0084UL)
#define ADC_ICLASS0_OFFSET              (0X00A0UL)

/*          group relative queue registers         */
#define ADC_QCTRL_OFFSET(i)             (0X0100UL + ((uint32)(i) * 0X20UL))
#define ADC_QMR_OFFSET(i)               (0X0104UL + ((uint32)(i) * 0X20UL))
#define ADC_QSR_OFFSET(i)               (0X0108UL + ((uint32)(i) * 0X20UL))
#define ADC_QBUR_OFFSET(i)              (0X010CUL + ((uint32)(i) * 0X20UL))
#define ADC_QINR_OFFSET(i)              (0X0110UL + ((uint32)(i) * 0X20UL))

#define ADC_CHCTR0_OFFSET               (0X0200UL)
#define ADC_RCR0_OFFSET                 (0X0280UL)
#define ADC_RES0_OFFSET                 (0X0300UL)
#define ADC_RESD0_OFFSET                (0X0380UL)

#define ADC_CHCTR_OFFSET(channel)       (ADC_CHCTR0_OFFSET + ((uint32)(channel)* 4UL))

#define ADC_RCR_OFFSET(result)          (ADC_RCR0_OFFSET + ((uint32)(result)* 4UL))

#define ADC_RES_OFFSET(result)          (ADC_RES0_OFFSET + ((uint32)(result)* 4UL))

#define ADC_RESD_OFFSET(result)         (ADC_RESD0_OFFSET + ((uint32)(result)* 4UL))

#define ADC_GET_KERNEL(groupId)         ((uint8)(((uint16)(groupId) >> 5U) & 0X0FU))





#define ADC_REG32(base,offset)         (*(volatile uint32 *)((base)+(offset)))


#endif /* MCAL_DRIVERS_ADC_ADC_REG_H_ */
