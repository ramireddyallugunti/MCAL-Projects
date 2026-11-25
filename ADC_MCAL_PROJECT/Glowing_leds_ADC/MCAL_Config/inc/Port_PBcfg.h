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
**  FILENAME  : Port_PBcfg.h                                                                                         **
**                                                                                                                   **
**  VERSION   : 10.0.0                                                                                               **
**                                                                                                                   **
**  DATE, TIME: 2026-09-18, 14:31:06   !!!IGNORE-LINE!!!                                                             **
**                                                                                                                   **
**  GENERATOR : Build b250919-0131       !!!IGNORE-LINE!!!                                                           ** 
**                                                                                                                   **
**  BSW MODULE DECRIPTION : Port.bmd                                                                                 **
**                                                                                                                   **
**  VARIANT   : Variant PB                                                                                           **
**                                                                                                                   **
**  PLATFORM  : Infineon AURIX2G                                                                                     **
**                                                                                                                   **
**  AUTHOR    : DL-AUTOSAR-Engineering                                                                               **
**                                                                                                                   **
**  VENDOR    : Infineon Technologies                                                                                **
**                                                                                                                   **
**  DESCRIPTION  : Port configuration generated out of ECUC file                                                     **
**                                                                                                                   **
**  SPECIFICATION(S) : Specification of Port Driver, AUTOSAR Release 4.2.2, AUTOSAR Release 4.4.0 and                **
**                     AUTOSAR Release  R24-11                                                                       **
**                                                                                                                   **
**  MAY BE CHANGED BY USER : no                                                                                      **
**                                                                                                                   **
**********************************************************************************************************************/
#ifndef PORT_PBCFG_H
#define PORT_PBCFG_H

/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/
/*******************************************************************************
**                      Global Const Declaration                              **
*******************************************************************************/
#define PORT_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
/*MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header usage as per Autosar
guideline.*/
#include "Port_MemMap.h"
/* Extern declaration of Port Config Root */
extern const Port_ConfigType Port_Config;

#define PORT_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_UNSPECIFIED
/*MISRA2012_RULE_4_10_JUSTIFICATION: Memmap header usage as per Autosar
guideline.*/
#include "Port_MemMap.h"
#endif  /* PORT_PBCFG_H */
