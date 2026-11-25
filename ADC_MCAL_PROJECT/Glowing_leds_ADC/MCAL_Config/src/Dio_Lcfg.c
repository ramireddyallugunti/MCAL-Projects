
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
**  FILENAME  : Dio_Lcfg.c                                                                                           **
**                                                                                                                   **
**  VERSION   : 8.0.0                                                                                                **
**                                                                                                                   **
**  DATE, TIME: 2026-09-17, 17:38:20       !!!IGNORE-LINE!!!                                                         **
**                                                                                                                   **
**  GENERATOR : Build b250919-0131           !!!IGNORE-LINE!!!                                                       **
**                                                                                                                   **
**  BSW MODULE DECRIPTION : Dio.bmd                                                                                  **
**                                                                                                                   **
**  VARIANT   : Variant LT                                                                                           **
**                                                                                                                   **
**  PLATFORM  : Infineon AURIX2G                                                                                     **
**                                                                                                                   **
**  AUTHOR    : DL-AUTOSAR-Engineering                                                                               **
**                                                                                                                   **
**  VENDOR    : Infineon Technologies                                                                                **
**                                                                                                                   **
**  DESCRIPTION  : Dio configuration generated out of ECUC file                                                      **
**                                                                                                                   **
**  SPECIFICATION(S) : Specification of Dio Driver, AUTOSAR Release 4.2.2, AUTOSAR Release 4.4.0 and                 **
**                    AUTOSAR Release 4.10.0                                                                         **
**                                                                                                                   **
** MAY BE CHANGED BY USER : no                                                                                       **
**                                                                                                                   **
**********************************************************************************************************************/


    
  /*******************************************************************************
  **                             Includes                                       **
  *******************************************************************************/

  /* Include Port Module File */
  #include "Dio.h"

  /*******************************************************************************
  **                      Private Macro Definitions                             **
  *******************************************************************************/

  /*******************************************************************************
  **                      Global Constant Definitions                           **
  *******************************************************************************/
  
  /* Memory mapping of the DIO configuration */
  #define DIO_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
  /* MISRA2012_RULE_4_10_JUSTIFICATION: To be compliant with autosar guidelines 
  Dio_Memmap.h header is included without safegaurd.*/
  #include "Dio_MemMap.h"
  /*
      Configuration of DIO Channel groups 
  */
    /* No Groups are configured */
  static const Dio_PortChannelIdType Dio_kPortChannelConfig[] =
  { 
    {
    /* Port0*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port1*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port2*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port10*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port11*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port12*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port13*/DIO_PORT_CONFIGURED,(0x0007U)
    },
    {
    /* Port14*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port15*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port20*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port21*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port22*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port23*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port32*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port33*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port34*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    },
    {
    /* Port40*/DIO_PORT_NOT_CONFIGURED,
      (0x0000U)
    }
  };
    const Dio_ConfigType Dio_Config =
    {
          
      /* Dio Port and Channelconfiguration */
            &Dio_kPortChannelConfig[0],
      /* Dio Channelgroup configuration */
      
      NULL_PTR,
      /* Configured number of Dio Channelgroups for configuration */
      DIO_CHANNELGROUPCOUNT
    };
  #define DIO_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
    /* MISRA2012_RULE_4_10_JUSTIFICATION: To be compliant with autosar guidelines 
    Dio_Memmap.h header is included without safegaurd.*/
    /* MISRA2012_RULE_20_1_JUSTIFICATION: Dio_Memmap.h header included as per Autosar 
    guidelines. */
  #include "Dio_MemMap.h"

/*******************************************************************************
**                      Private Constant Definitions                          **
*******************************************************************************/
