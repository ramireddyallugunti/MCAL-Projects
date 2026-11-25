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
**  FILENAME  : Mcu_17_TimerIp_Cfg.c                                                                                 **
**                                                                                                                   **
**  VERSION   : 23.0.0                                                                                               **
**                                                                                                                   **
**  DATE, TIME: 2026-09-17, 17:38:20     !!!IGNORE-LINE!!!                                                           **
**                                                                                                                   **
**  GENERATOR : Build b250919-0131         !!!IGNORE-LINE!!!                                                         **
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
**  DESCRIPTION :  Timer IP user configuration generated out of ECUC file                                            **
**                                                                                                                   **
**  SPECIFICATION(S) : NA                                                                                            **
**                                                                                                                   **
**  MAY BE CHANGED BY USER : no                                                                                      **
**                                                                                                                   **
**********************************************************************************************************************/

/*******************************************************************************
**                            Includes                                        **
*******************************************************************************/
/* Include module header file */
#include "Mcu_17_TimerIp_Cfg.h"
#include "Mcu_17_TimerIp_Local.h"


#define MCU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
without safegaurd. It complies to Autosar guidelines. */
#include "Mcu_MemMap.h"

/* MISRA2012_RULE_8_9_JUSTIFICATION: This constant is made used in ISRs
defined in Mcu_17_TimerIp.c for the channel user information.
The extern declaration is present in Mcu_17_TimerIp_Local.h. Hence can't
be made block scope. No side effects foreseen by violating this MISRA rule. */
const uint32 Mcu_17_Eru_ChUserData[MCU_17_ERU_NO_OF_OGU] =
{
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000
};

const uint32
/* MISRA2012_RULE_8_9_JUSTIFICATION: This constant is made used in ISRs
defined in Mcu_17_TimerIp.c for the channel user information.
The extern declaration is present in Mcu_17_TimerIp_Local.h. Hence can't
be made block scope. No side effects foreseen by violating this MISRA rule. */
Mcu_17_Gtm_AtomChUserData[MCU_17_GTM_NO_OF_ATOM_MODULES][MCU_17_GTM_NO_OF_ATOM_CHANNELS] =
{
  /* ATOM Module 0 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 1 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 2 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 3 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 4 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 5 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 6 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 7 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 8 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 9 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 10 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* ATOM Module 11 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  }
};


const uint32
/* MISRA2012_RULE_8_9_JUSTIFICATION: This constant is made used in ISRs
defined in Mcu_17_TimerIp.c for the channel user information.
The extern declaration is present in Mcu_17_TimerIp_Local.h. Hence can't
be made block scope. No side effects foreseen by violating this MISRA rule. */
Mcu_17_Gtm_TomChUserData[MCU_17_GTM_NO_OF_TOM_MODULES][MCU_17_GTM_NO_OF_TOM_CHANNELS] =
{
  /* TOM Module 0 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* TOM Module 1 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* TOM Module 2 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* TOM Module 3 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* TOM Module 4 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  },
  /* TOM Module 5 */
  {
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000
  }
};

#define MCU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
without safegaurd. It complies to Autosar guidelines. */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header included as per Autosar
guidelines. */
#include "Mcu_MemMap.h"

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers going beyond 32 chars.
in generated code due to Autosar Naming constraints.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: External identifiers going beyond 32 chars.
in generated code due to Autosar Naming constraints.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: External identifiers going beyond 32 chars.
in generated code due to Autosar Naming constraints.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: External identifiers going beyond 32 chars.
in generated code due to Autosar Naming constraints.*/
#define MCU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_16
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
without safegaurd. It complies to Autosar guidelines. */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header included as per Autosar
guidelines. */
#include "Mcu_MemMap.h"

const uint16
/* MISRA2012_RULE_8_9_JUSTIFICATION: This constant is made used in ISRs
defined in Mcu_17_TimerIp.c for the channel user information.
The extern declaration is present in Mcu_17_TimerIp_Local.h. Hence can't
be made block scope. No side effects foreseen by violating this MISRA rule. */
Mcu_17_Gtm_TimChUserData[MCU_17_GTM_NO_OF_TIM_MODULES][MCU_17_GTM_NO_OF_TIM_CHANNELS] =
{
  /* TIM Module 0 */
  {
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000
  },
  /* TIM Module 1 */
  {
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000
  },
  /* TIM Module 2 */
  {
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000
  },
  /* TIM Module 3 */
  {
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000
  },
  /* TIM Module 4 */
  {
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000
  },
  /* TIM Module 5 */
  {
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000
  },
  /* TIM Module 6 */
  {
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000
  },
  /* TIM Module 7 */
  {
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000
  }
};

const uint16
/* MISRA2012_RULE_8_9_JUSTIFICATION: This constant is made used in ISRs
defined in Mcu_17_TimerIp.c for the channel user information.
The extern declaration is present in Mcu_17_TimerIp_Local.h. Hence can't
be made block scope. No side effects foreseen by violating this MISRA rule. */
Mcu_17_Ccu6_ChUserData[MCU_17_CCU6_NO_OF_KERNELS][MCU_17_CCU6_NO_OF_COMPARATORS] =
{
  {
  0x0000,
  0x0000,
  0x0000,
  0x0000
  },
  {
  0x0000,
  0x0000,
  0x0000,
  0x0000
  }
};

/* MISRA2012_RULE_8_9_JUSTIFICATION: This constant is made used in ISRs
defined in Mcu_17_TimerIp.c for the channel user information.
The extern declaration is present in Mcu_17_TimerIp_Local.h. Hence can't
be made block scope. No side effects foreseen by violating this MISRA rule. */
const uint16 Mcu_17_Gpt12_ChUserData[MCU_17_GPT12_NO_OF_TIMERS] =
{
  0x0000,
  0x0000,
  0x0000,
  0x0000,
  0x0000
};


/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers going beyond 32 chars.
in generated code due to Autosar Naming constraints.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: External identifiers going beyond 32 chars.
in generated code due to Autosar Naming constraints.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: External identifiers going beyond 32 chars.
in generated code due to Autosar Naming constraints.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: External identifiers going beyond 32 chars.
in generated code due to Autosar Naming constraints.*/
#define MCU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_16
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
without safegaurd. It complies to Autosar guidelines. */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header included as per Autosar
guidelines. */
#include "Mcu_MemMap.h"



#define MCU_17_TIMERIP_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
without safegaurd. It complies to Autosar guidelines. */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header included as per Autosar
guidelines. */
#include "Mcu_MemMap.h"

/* MISRA2012_RULE_8_9_JUSTIFICATION: This constant is made used in ISRs
defined in Mcu_17_TimerIp.c for the channel user information.
The extern declaration is present in Mcu_17_TimerIp_Local.h. Hence can't
be made block scope. No side effects foreseen by violating this MISRA rule. */
const uint32 Mcu_17_Stm_ChUserData[MCU_17_STM_NO_OF_TIMERS] =
{
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000
};

#define MCU_17_TIMERIP_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
without safegaurd. It complies to Autosar guidelines. */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header included as per Autosar
guidelines. */
#include "Mcu_MemMap.h"

