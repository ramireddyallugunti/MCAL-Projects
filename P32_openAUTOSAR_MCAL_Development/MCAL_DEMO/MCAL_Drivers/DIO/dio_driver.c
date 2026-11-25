/*
 * dio_driver.c
 *
 *  Created on: Nov 16, 2026
 *      Author: Admin
 */

#include"dio_driver.h"
#include"dio_reg.h"
#include"det.h"

/*      service ID's of module and apis         */
#define DIO_MODULE_ID           (120U)
#define DIO_INSTANCE_ID         (0U)
#define DIO_READ_CH_SID         (0X00U)
#define DIO_WRITE_CH_SID        (0X01U)
#define DIO_READ_PORT_SID       (0X02U)
#define DIO_WRITE_PORT_SID      (0X03U)
#define DIO_READ_CH_GRP_SID     (0X04U)
#define DIO_WRITE_CH_GRP_SID    (0X05U)
#define DIO_VERSION_SID         (0X12U)
#define DIO_FLIP_CH_SID         (0X11U)


/*      error handling macros           */
#define DIO_E_PARAM_INVALID_PORT_ID         (0X14U)
#define DIO_E_PARAM_INVALID_CHANNEL_ID      (0X0AU)
#define DIO_E_PARAM_INVALID_GROUP           (0X1FU)
#define DIO_E_PARAM_INVALID_LEVEL           (0X32U)
#define DIO_E_PARAM_POINTER                 (0X20U)

static void Dio_Report(uint8 serviceid,uint8 errorid);

static uint32 GetDiobaseAddress(uint16 portnumber);

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    uint8 portnumber;
    uint8 pinnumber;

    uint32 baseAddress;
    uint32 inputvalue;

    Dio_LevelType level = STD_LOW;

    /*          port and pin numbers         */
    portnumber = (uint8)(ChannelId >> 4U);
    pinnumber  = (uint8)(ChannelId & 0x0FU);

    /*          base address of port         */
    baseAddress = GetDiobaseAddress(portnumber);

    /*      checking whether base address is valid      */
    if(baseAddress == 0U)
    {
        Dio_Report(DIO_READ_CH_SID,DIO_E_PARAM_INVALID_CHANNEL_ID);
        return STD_LOW;
    }

    /*          taking input value from the IN register     */
    inputvalue = DIO_REG32(baseAddress,DIO_IN_OFFSET);

    if((inputvalue & (1U << pinnumber))!= 0U)
    {
        level = STD_HIGH;
    }
    else
    {
        level = STD_LOW;
    }

    return level;
}

void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level)
{
    uint8 portnumber;
    uint8 pinnumber;

    uint32 baseAddress;
    uint32 omrvalue;

    /*      port and pin numbers        */
    portnumber = (uint8) (ChannelId >> 4U);
    pinnumber  = (uint8) (ChannelId & 0x0FU);

    /*      base address        */
    baseAddress = GetDiobaseAddress(portnumber);

    if(baseAddress == 0U)
    {
        Dio_Report(DIO_WRITE_CH_SID,DIO_E_PARAM_INVALID_CHANNEL_ID);
        return;
    }

    if(Level == STD_HIGH)
    {
        omrvalue =(1UL << pinnumber);
    }
    else
    {
        omrvalue =(1UL << pinnumber + 16U);
    }

    DIO_REG32(baseAddress , DIO_OMR_OFFSET) = omrvalue;
}

Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
{
    uint32 baseAddress;
    uint32 inputvalue;

    Dio_PortLevelType Level = 0U;

    /*          baseaddress of the port         */
    baseAddress = GetDiobaseAddress(PortId);

    if(baseAddress == 0U)
    {
        Dio_Report(DIO_READ_PORT_SID,DIO_E_PARAM_INVALID_PORT_ID);
        return STD_LOW;
    }

    inputvalue = DIO_REG32(baseAddress, DIO_IN_OFFSET);

    Level = (Dio_PortLevelType)(inputvalue & 0XFFFFU);

    return Level;
}

void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level)
{
    uint32 baseAddress;
    uint32 omrvalue =0U;

    baseAddress = GetDiobaseAddress(PortId);

    if(baseAddress == 0U)
    {
        Dio_Report(DIO_WRITE_PORT_SID,DIO_E_PARAM_INVALID_PORT_ID);
        return;
    }

    if(Level == 1U)
    {
        omrvalue = 0XFFFFU;
    }
    else
    {
        omrvalue = (0XFFFFU << 16U);
    }

    DIO_REG32(baseAddress, DIO_OMR_OFFSET) = omrvalue;

}

Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId)
{
    uint8 portnumber;
    uint8 pinnumber;

    uint32 baseAddress;
    uint32 outvalue=0U;
    uint32 omrvalue=0U;

    Dio_LevelType level=0U;


    portnumber =(uint8)(ChannelId >> 4U);
    pinnumber =(uint8)(ChannelId & 0X0FU);

    baseAddress = GetDiobaseAddress(portnumber);

    if(baseAddress ==0U)
    {
        Dio_Report(DIO_FLIP_CH_SID,DIO_E_PARAM_INVALID_CHANNEL_ID);
        return STD_LOW;
    }

    outvalue = DIO_REG32(baseAddress, DIO_OUT_OFFSET);

    if((outvalue&(1U << pinnumber))!=0)
    {
        omrvalue = (1U << (pinnumber + 16U));
        level = STD_LOW;
    }
    else
    {
        omrvalue = (1U << pinnumber);
        level = STD_HIGH;
    }

    DIO_REG32(baseAddress,DIO_OMR_OFFSET) = omrvalue;

    return level;
}

void Dio_GetVersionInfo(Std_VersionInfoType* VersionInfo)
{
    if(VersionInfo == NULL_PTR)
    {
        Dio_Report(DIO_VERSION_SID, DIO_E_PARAM_POINTER);
        return;
    }

    VersionInfo->vendorID = 0U;
    VersionInfo->moduleID = DIO_MODULE_ID;
    VersionInfo->sw_major_version = 0U;
    VersionInfo->sw_minor_version = 1U;
    VersionInfo->sw_patch_version =0U;
}
static void Dio_Report(uint8 serviceid,uint8 errorid)
{
    (void)Det_ReportError(DIO_MODULE_ID,DIO_INSTANCE_ID,serviceid,errorid);
}

static uint32 GetDiobaseAddress(uint16 portnumber)
{
    uint32 baseAddress=0U;

    switch(portnumber)
    {
        case 0U:baseAddress = DIO_PORT_00_BASE;break;
        case 1U:baseAddress = DIO_PORT_01_BASE;break;
        case 2U:baseAddress = DIO_PORT_02_BASE;break;
        case 10U:baseAddress = DIO_PORT_10_BASE;break;
        case 11U:baseAddress = DIO_PORT_11_BASE;break;
        case 12U:baseAddress = DIO_PORT_12_BASE;break;
        case 13U:baseAddress = DIO_PORT_13_BASE;break;
        case 14U:baseAddress = DIO_PORT_14_BASE;break;
        case 15U:baseAddress = DIO_PORT_15_BASE;break;
        case 20U:baseAddress = DIO_PORT_20_BASE;break;
        case 21U:baseAddress = DIO_PORT_21_BASE;break;
        case 22U:baseAddress = DIO_PORT_22_BASE;break;
        case 23U:baseAddress = DIO_PORT_23_BASE;break;
        case 24U:baseAddress = DIO_PORT_24_BASE;break;
        case 25U:baseAddress = DIO_PORT_25_BASE;break;
        case 26U:baseAddress = DIO_PORT_26_BASE;break;
        case 30U:baseAddress = DIO_PORT_30_BASE;break;
        case 31U:baseAddress = DIO_PORT_31_BASE;break;
        case 32U:baseAddress = DIO_PORT_32_BASE;break;
        case 33U:baseAddress = DIO_PORT_33_BASE;break;
        case 34U:baseAddress = DIO_PORT_34_BASE;break;
        case 40U:baseAddress = DIO_PORT_40_BASE;break;
        case 41U:baseAddress = DIO_PORT_41_BASE;break;
        default:break;

    }

    return baseAddress;
}
