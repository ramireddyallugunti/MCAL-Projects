/**********************************************************************************************************************
**                                                                                                                   **
** (c) 2017-2025 , Infineon Technologies AG, or an affiliate of Infineon Technologies AG.                            **
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
**  FILENAME                : Adc_PBcfg.c                                                                            **
**                                                                                                                   **
**  VERSION                 : 15.0.0                                                                                 **
**                                                                                                                   **
**  DATE, TIME              : 2026-09-17, 17:38:20       !!!IGNORE-LINE!!!                                       **
**                                                                                                                   **
**  GENERATOR               : Build b250919-0131           !!!IGNORE-LINE!!!                                       **
**                                                                                                                   **
**  BSW MODULE DECRIPTION   : Adc.bmd                                                                                **
**                                                                                                                   **
**  VARIANT                 : Variant PB                                                                             **
**                                                                                                                   **
**  PLATFORM                : Infineon AURIX2G                                                                       **
**                                                                                                                   **
**  AUTHOR                  : DL-AUTOSAR-Engineering                                                                 **
**                                                                                                                   **
**  VENDOR                  : Infineon Technologies                                                                  **
**                                                                                                                   **
**  DESCRIPTION             :  Adc configuration generated out of ECUC file                                          **
**                                                                                                                   **
**  SPECIFICATION(S)        : AUTOSAR Specification of Adc Driver                                                    **
**                                                                                                                   **
**  MAY BE CHANGED BY USER  : no                                                                                     **
**                                                                                                                   **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                                                  Includes                                                         **
**********************************************************************************************************************/
/* Inclusion of module header file */
#include "Adc.h"

/***********Global configuration of EMUX feature***********/

/***********Configuration for External HW trigger and gating signals***********/

/*******************Group Definition - Channel Sequence*******************/
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/

#define ADC_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"
/**Group Definition of AdcGroup_0- ID64 of HW Unit 2 */
static const Adc_GroupDefType Adc_kHwUnit2GrpAdcGroup_0_Config[1]=
{
  /*AS Logical Channel*/ /*Analog Channel*/ /*Result Register*/ /*Channel Diagnostic Data*/
        {  0U,                   4U,                4U,                0x00000000U}
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/

#define ADC_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"

/***********************Group Configuration Definition***********************/
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/ 

#define ADC_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"

/*****Group Configuration Definition of HW Unit 2 ******/
static const Adc_GroupCfgType Adc_kHwUnit2Grp_Config[1]=
{

  {/*Group Configuration structure for AdcGroup_0 - ID64*/
    /*
      Group Properties:
      Trigger Source: ADC_TRIGG_SRC_SW
      Trigger Edge: 
      HW Trigger Source: ADC_TRIG_NONE
      HW Gate Source: ADC_GATE_NONE
      Gate Level: ADC_GATE_LVL_HIGH
    */
    /* Notification Function Address */
    (Adc_NotifyFnPtrType)0U,
    /*Address for Group Definition Structure*/
    &Adc_kHwUnit2GrpAdcGroup_0_Config[0U],
    /*Address for the GTM trigger configuration structure*/
    (const Mcu_17_Gtm_TomAtomChConfigType *)0U,
    /*Address for the GTM gate configuration structure*/
    (const Mcu_17_Gtm_TomAtomChConfigType *)0U,
    /*Address for the ERU trigger configuration structure*/
    (const Adc_EruChannelCfgType *)0U,
    /*Address for the ERU gate configuration structure*/
    (const Adc_EruChannelCfgType *)0U,
    /*Configuration value for the G2QCTRL register*/
    0x00000000U,
    /*Configuration value for the G2QMR register*/
    0x00000001U,
    /*Configuration value for the G2ALIAS register*/
    0x00000100U,
    /* Configuration value for G2REQTM register*/
    0x00000000U,
    /*Bit Mask for all the analog channels configured for the group*/
    0x0010U,
    /*Bit Mask for all the result registers configured for the group*/
    0x0010U,
    /*Bit Mask for all the analog channels configured for synchronous conversion*/
    0x0000U,
    /*Bit Mask for all the result registers configured for synchronous conversion*/
    0x0000U,
    ADC_TRIGG_SRC_SW,
    ADC_CONV_MODE_ONESHOT,
    ADC_ACCESS_MODE_SINGLE,
    ADC_STREAM_BUFFER_LINEAR,
    1U, /*Number of streaming samples for the group*/
    ADC_OTHER_HW_USED, /*HW peripheral used for Trigger*/
    ADC_OTHER_HW_USED, /*HW peripheral used for Gate*/
    0U, /*Priority Level for the group*/
    1U, /*Channel Count for the group*/
    0U, /*Limit Check enabled for the group*/
    0x00U, /* EMUX configuration of the Group */
    0U /* Diagnostic channels configured for the Group */
  }
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/

#define ADC_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"


/***********************Channel Configuration Definition***********************/
/*****Channel Configuration Definition of HW Unit 2 *****/
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/

#define ADC_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"
static const Adc_ChannelCfgType Adc_kHwUnit2Ch_Config[1]=
{

  {
    0x00000002U, /*Configuration value for the G2CHCTR4 register*/
    0x00000000U, /*Configuration value for the G2BOUND register*/
    4U, /*Analog Channel number for the corresponding Logical Channel*/
    0U /*Limit Check channel or not */
  }
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
#define ADC_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"

/********************HW Unit Converter Configurations********************/

/**HW Unit 2 Converter Configurations **/
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
#define ADC_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"
static const Adc_HwCfgType Adc_kHwUnit2Hw_Config=
{
  0x00600004U, /*Configuration value for G2ANCFG register*/
  0x00000003U, /*Configuration value for G2ARBCFG register*/
  0x01000000U, /*Configuration value for G2ARBPR register*/
  0x00000000U, /*Configuration value for G2ICLASS0 register*/
  0x00000000U, /*Configuration value for G2ICLASS1 register*/
  0x00000000U /*Configuration value for G2SYNCTR register*/
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
#define ADC_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"


/***************************HW Unit Configuration ***************************/

/*************HW Unit 2 Configuration **************/
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
   #define ADC_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"
static const Adc_HwUnitCfgType Adc_kHwUnit2_Config=
{
  &Adc_kHwUnit2Hw_Config, /*Analog Converter Configuration*/
  &Adc_kHwUnit2Ch_Config[0U], /*Channel Configuration structure*/
  &Adc_kHwUnit2Grp_Config[0U], /*Group Configuration structure*/
  0x00000001U, /* Mask for SW triggered groups*/
  0x00000000U,/* Mask for HW triggered groups*/
  ADC_SYNC_CONV_MODE_NONE, /* Synchronous conversion mode */
  { 0xffU, 0xffU, 0xffU }, /* Slave Kernels */
  1U, /* Group Count for HW Unit 2*/
  1U /* Bit Mask for SRNs used for HW Unit 2*/
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
#define ADC_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"


/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/

#define ADC_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"
/******************Global Configuration*******************/

static const Adc_GlobalCfgType Adc_kGlob_Config=
{
  0x00000000U, /*Configuration value for GLOBCFG register */
  0x00000014U, /*Configuration value for GLOBICLASS0 register */
  0x00000000U, /*Configuration value for GLOBICLASS1 register */
  0x00000000U /*Configuration value for EMUXSEL register */
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/

#define ADC_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"


/***************************Core Configuration ***************************/
/*******Core0 Configuration*******/
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/

#define ADC_START_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"
static const Adc_CoreConfigType Adc_kCore0_Config=
{
  {
    (Adc_HwUnitCfgType*)0U, /* HW Unit 1 Configuration */
    (Adc_HwUnitCfgType*)0U, /* HW Unit 2 Configuration */
    &Adc_kHwUnit2_Config, /* HW Unit 3 Configuration */
    (Adc_HwUnitCfgType*)0U, /* HW Unit 4 Configuration */
    (Adc_HwUnitCfgType*)0U, /* HW Unit 5 Configuration */
    (Adc_HwUnitCfgType*)0U, /* HW Unit 6 Configuration */
    (Adc_HwUnitCfgType*)0U, /* HW Unit 7 Configuration */
    (Adc_HwUnitCfgType*)0U, /* HW Unit 8 Configuration */
    (Adc_HwUnitCfgType*)0U, /* HW Unit 9 Configuration */
    (Adc_HwUnitCfgType*)0U, /* HW Unit 10 Configuration */
    (Adc_HwUnitCfgType*)0U, /* HW Unit 11 Configuration */
    (Adc_HwUnitCfgType*)0U /* HW Unit 12 Configuration */
  }
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Memmap macros are defined as per Autosar
   naming convention, hence it goes beyond 32 characters.*/

#define ADC_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"
  

/*******Configuration Root*******/ 
#define ADC_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar 
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"

const Adc_ConfigType Adc_Config=
{
  &Adc_kGlob_Config, /* Global Configuration */
  {
    &Adc_kCore0_Config, /* Core0 Configuration */
    (const Adc_CoreConfigType*)0U, /* Core1 Configuration */
    (const Adc_CoreConfigType*)0U, /* Core2 Configuration */
    (const Adc_CoreConfigType*)0U, /* Core3 Configuration */
    (const Adc_CoreConfigType*)0U, /* Core4 Configuration */
    (const Adc_CoreConfigType*)0U /* Core5 Configuration */
  }
};


#define ADC_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
/* MISRA2012_RULE_20_1_JUSTIFICATION: Memmap header usage as per Autosar
   guideline. */
/* MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header is repeatedly included
   without safegaurd. It complies to Autosar guidelines. */ 
#include "Adc_MemMap.h"


