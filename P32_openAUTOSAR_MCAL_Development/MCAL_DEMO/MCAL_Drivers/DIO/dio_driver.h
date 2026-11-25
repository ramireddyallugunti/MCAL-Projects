/*
 * port_driver.h
 *
 *  Created on: Nov 16, 2026
 *      Author: Admin
 */

#ifndef MCAL_DRIVERS_DIO_DIO_DRIVER_H_
#define MCAL_DRIVERS_DIO_DIO_DRIVER_H_

#include"Common/StandardTypes.h"

typedef uint16 Dio_ChannelType;

typedef uint8 Dio_PortType;

typedef struct{
        uint16   mask;
        uint8    offset;
        Dio_PortType port;
} Dio_ChannelGroupType;

typedef uint8 Dio_LevelType;

typedef uint16      Dio_PortLevelType;

#define DIO_CHANNEL_ID(port,pin)        ((Dio_ChannelType)((((uint16)(port)) << 4U)|((uint16)(pin))))

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);

Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);

void Dio_WritePort(Dio_PortType PortID, Dio_PortLevelType Level);

Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId);

void Dio_GetVersionInfo(Std_VersionInfoType* VersionInfo);



#endif /* MCAL_DRIVERS_DIO_DIO_DRIVER_H_ */
