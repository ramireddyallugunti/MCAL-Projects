
#ifndef MCAL_DRIVERS_PORT_PORT_DRIVER_H_
#define MCAL_DRIVERS_PORT_PORT_DRIVER_H_

#include"Common/StandardTypes.h"

typedef uint16       Port_PinType;

/*      macro for combination of both PORT and PIN      */
#define PORT_PIN_ID(port, pin)  ((Port_PinType)((((uint16)(port)) << 4U)|((uint16)(pin))))

typedef enum{
    PORT_PIN_IN = 0,
    PORT_PIN_OUT = 1
}Port_PinDirectionType;

typedef enum
{
    PORT_GPIO = 0,
    PORT_ALTERNATE1 = 1,
    PORT_ALTERNATE2 = 2,
    PORT_ALTERNATE3 = 3,
    PORT_ALTERNATE4 = 4,
    PORT_ALTERNATE5 = 5,
    PORT_ALTERNATE6 = 6,
    PORT_ALTERNATE7 = 7
}Port_PinInitialMode;

typedef uint8       Port_PinModeType;

typedef enum {
    PORT_INPUT_NOPULL = 0,
    PORT_INPUT_PULLDOWN = 1,
    PORT_INPUT_PULLUP = 2,
    PORT_INPUT_TRISTATE = 3
} Port_InputModeType;

typedef enum {
    PORT_OUTPUT_PUSHPULL = 0,
    PORT_OUTPUT_OPENDRAIN = 1
} Port_OutputModeType;

typedef struct
{
        uint8 PortNumber;
        uint8 PinNumber;

        Port_PinDirectionType Direction;
        Port_PinInitialMode   InitialMode;

        Port_InputModeType  InputMode;
        Port_OutputModeType OutputMode;

        uint8 InitialLevel;

        boolean DirectionChangeable;
        boolean ModeChangeable;
} Port_PinConfigType;

typedef struct{

        const Port_PinConfigType *Pins;
        uint16 PinCount;
}Port_ConfigType;

void Port_Init(const Port_ConfigType* ConfigPtr);

void Port_SetPinDirection(Port_PinType Pin,Port_PinDirectionType Direction);

void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode);

void Port_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr);


#endif /* MCAL_DRIVERS_PORT_PORT_DRIVER_H_ */
