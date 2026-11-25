/**********************************************************************************************************************
**                                                                                                                   **
** (c) 2017-2025, Infineon Technologies AG, or an affiliate of Infineon Technologies AG.                             **
**                                                                                                                   **
** All rights reserved.                                                                                              **
**                                                                                                                   **
** This software, associated documentation and materials ("Software") is owned by Infineon Technologies AG or one of **
** its affiliates ("Infineon") and is protected by and subject to worldwide patent protection, worldwide copyright   **
** laws, and international treaty provisions. Therefore, you may use this Software only as provided in the license   **
** agreement accompanying the software package from which you obtained this Software. If no license agreement        **
** applies, then any use, reproduction, modification, translation, or compilation of this Software is prohibited     **
** without the express written permission of Infineon.                                                               **
** Disclaimer: UNLESS OTHERWISE EXPRESSLY AGREED WITH INFINEON, THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF **
** ANY KIND, EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, ALL WARRANTIES OF NON-INFRINGEMENT OF THIRD-PARTY    **
** RIGHTS AND IMPLIED WARRANTIES SUCH AS WARRANTIES OF FITNESS FOR A SPECIFIC USE/PURPOSE OR MERCHANTABILITY.        **
** Infineon reserves the right to make changes to the Software without notice. You are responsible for properly      **
** designing, programming, and testing the functionality and safety of your intended application of the Software, as **
** well as complying with any legal requirements related to its use. Infineon does not guarantee that the Software   **
** will be free from intrusion, data theft or loss, or other breaches ("Security Breaches"), and Infineon shall have **
** no liability arising out of any Security Breaches. Unless otherwise explicitly approved by Infineon, the Software **
** may not be used in any application where a failure of the Product or any consequences of the use thereof can      **
** reasonably be expected to result in personal injury.                                                              **
**                                                                                                                   **
***********************************************************************************************************************
**                                                                                                                   **
**  FILENAME  : Mcu_17_TimerIp_Cfg.h                                                                                 **
**                                                                                                                   **
**  VERSION   : 12.0.0                                                                                               **
**                                                                                                                   **
**  DATE, TIME: 2026-09-17, 17:38:20       !!!IGNORE-LINE!!!                                                         **
**                                                                                                                   **
**  GENERATOR : Build b250919-0131           !!!IGNORE-LINE!!!                                                       **
**                                                                                                                   **
**  BSW MODULE DECRIPTION : Mcu.bmd                                                                                  **
**                                                                                                                   **
**  VARIANT   : Variant PB                                                                                           **
**                                                                                                                   **
**  PLATFORM  : Infineon AURIX2G                                                                                     **
**                                                                                                                   **
**  AUTHOR    : DL-AUTOSAR-Engineering                                                                               **
**                                                                                                                   **
**  VENDOR    : Infineon Technologies                                                                                **
**                                                                                                                   **
**  DESCRIPTION  : Timer IPs configuration file generated by Mcu module                                              **
**                                                                                                                   **
**  SPECIFICATION(S) : NA                                                                                            **
**                                                                                                                   **
**  MAY BE CHANGED BY USER : no                                                                                      **
**                                                                                                                   **
**********************************************************************************************************************/


#ifndef MCU_17_TIMERIP_CFG_H
#define MCU_17_TIMERIP_CFG_H

/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/
#include "Std_Types.h"
#include "Mcu_Cfg.h"

/*******************************************************************************
**                      Global Macro Definitions                              **
*******************************************************************************/

/*******************************************************************************
**                      Global Type Definitions                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Constant Declarations                          **
*******************************************************************************/

/*******************************************************************************
**                      Global Variable Declarations                          **
*******************************************************************************/

/*******************************************************************************
**                      Global Function Declarations                          **
*******************************************************************************/

#define MCU_17_GTM_NO_OF_TIM_MODULES              (0x8U)
#define MCU_17_GTM_NO_OF_TIM_CHANNELS             (0x8U)

#define MCU_17_GTM_NO_OF_TOM_MODULES              (0x6U)
#define MCU_17_GTM_NO_OF_TOM_CHANNELS             (0x10U)
#define MCU_17_GTM_NO_OF_TOM_TGC                  (0x2U)

#define MCU_17_GTM_NO_OF_ATOM_MODULES             (0xcU)
#define MCU_17_GTM_NO_OF_ATOM_CHANNELS            (0x8U)
#define MCU_17_GTM_NO_OF_ATOM_AGC                 (0x1U)
#define MCU_17_CCU6_NO_OF_KERNELS                 (0x2U)
#define MCU_17_CCU6_NO_OF_COMPARATORS             (0x4U)
#define MCU_17_GPT12_NO_OF_TIMERS                 (0x5U)
#define MCU_17_ERU_NO_OF_OGU                      (0x8U)
#define MCU_17_STM_NO_OF_TIMERS                   (0x6U)

#define MCU_17_TIMERIP_ADC_USER       (STD_OFF)
#define MCU_17_TIMERIP_WDG_USER       (STD_OFF)
#define MCU_17_TIMERIP_PWM_USER       (STD_OFF)
#define MCU_17_TIMERIP_GPT_USER       (STD_OFF)
#define MCU_17_TIMERIP_OCU_USER       (STD_OFF)
#define MCU_17_TIMERIP_ICU_USER       (STD_OFF)
#define MCU_17_TIMERIP_DSADC_USER     (STD_OFF)
#define MCU_17_TIMERIP_STM_USER       (STD_OFF)

#define GTM_SPINLOCK_TIMEOUT      10U

#endif /* end of MCU_17_TIMERIP_CFG_H */
