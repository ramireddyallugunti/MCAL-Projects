#include "port_Cfg.h"

/* Generated automatically. Do not change this file manually. */
static const Port_PinConfigType Port_PinConfigs[] =
{

    {
        .PortNumber = 13U,
        .PinNumber = 0U,
        .Direction = PORT_PIN_OUT,
        .InitialMode = PORT_GPIO,
        .InputMode = PORT_INPUT_NOPULL,
        .OutputMode = PORT_OUTPUT_PUSHPULL,
        .InitialLevel = STD_HIGH,
        .DirectionChangeable = FALSE,
        .ModeChangeable = FALSE
    },

    {
        .PortNumber = 13U,
        .PinNumber = 1U,
        .Direction = PORT_PIN_OUT,
        .InitialMode = PORT_GPIO,
        .InputMode = PORT_INPUT_NOPULL,
        .OutputMode = PORT_OUTPUT_PUSHPULL,
        .InitialLevel = STD_HIGH,
        .DirectionChangeable = FALSE,
        .ModeChangeable = FALSE
    },

    {
        .PortNumber = 13U,
        .PinNumber = 2U,
        .Direction = PORT_PIN_OUT,
        .InitialMode = PORT_GPIO,
        .InputMode = PORT_INPUT_NOPULL,
        .OutputMode = PORT_OUTPUT_PUSHPULL,
        .InitialLevel = STD_LOW,
        .DirectionChangeable = FALSE,
        .ModeChangeable = FALSE
    }

};

const Port_ConfigType Port_Config =
{
    .Pins = Port_PinConfigs,
    .PinCount = 3U
};