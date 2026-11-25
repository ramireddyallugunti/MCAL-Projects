

#ifndef MCAL_DRIVERS_PORT_PORT_REG_H_
#define MCAL_DRIVERS_PORT_PORT_REG_H_


#include"Common/Platform_Types.h"

/*          base address of ports         */
#define PORT_00_BASE            (0XF003A000UL)
#define PORT_01_BASE            (0XF003A100UL)
#define PORT_02_BASE            (0XF003A200UL)

#define PORT_10_BASE            (0XF003AA00UL)
#define PORT_11_BASE            (0XF003AB00UL)
#define PORT_12_BASE            (0XF003AC00UL)
#define PORT_13_BASE            (0XF003AD00UL)
#define PORT_14_BASE            (0XF003AE00UL)
#define PORT_15_BASE            (0XF003AF00UL)

#define PORT_20_BASE            (0XF003B400UL)
#define PORT_21_BASE            (0XF003B500UL)
#define PORT_22_BASE            (0XF003B600UL)
#define PORT_23_BASE            (0XF003B700UL)
#define PORT_24_BASE            (0XF003B800UL)
#define PORT_25_BASE            (0XF003B900UL)
#define PORT_26_BASE            (0XF003BA00UL)

#define PORT_30_BASE            (0XF003BE00UL)
#define PORT_31_BASE            (0XF003BF00UL)
#define PORT_32_BASE            (0XF003C000UL)
#define PORT_33_BASE            (0XF003C100UL)
#define PORT_34_BASE            (0XF003C200UL)

#define PORT_40_BASE            (0XF003C800UL)
#define PORT_41_BASE            (0XF003C900UL)


/*          offsets of the registers            */
#define OUT_OFFSET              (0X000UL)
#define OMR_OFFSET              (0X004UL)
#define ID_OFFSET               (0X008UL)
#define IOCR0_OFFSET            (0X010UL)
#define IOCR4_OFFSET            (0X014UL)
#define IOCR8_OFFSET            (0X018UL)
#define IOCR12_OFFSET           (0X01CUL)
#define IN_OFFSET               (0X024UL)



/*                register of port with offset            */
#define PORT_REG32(base, offset)   (*(volatile uint32 *)((base)+(offset)))


/*                  IOCR register containing this pin
 *
 *                  ex:pin = 1 ->  offset = 0x10 + ((1 / 4) * 4);
 *                                 offset = 0x10 + (0 * 4);
 *                                 offset = 0x10;
 */
#define PORT_IOCR_OFFSET(pin)     (IOCR0_OFFSET + ((((uint32)(pin))/ 4UL)* 4UL))



/*                  Position of the pin-control field
 *
 *                  ex:pin = 1 -> (1 % 4) * 8
 *                         = 1 * 8
 *                         = 8
 */
#define PORT_IOCR_SHIFT(pin)      ((((uint32)(pin)) % 4UL) * 8UL)



/*                  Five Control bits to control the direction of the pin       */
#define PORT_IOCR_PC_MASK       (0XF8UL)


/*                input for IOCRx                   */
#define PORT_INPUT_NO_PULL           (0X00UL)
#define PORT_INPUT_PULL_DOWN         (0X08UL)
#define PORT_INPUT_PULL_UP           (0X10UL)
#define PORT_INPUT_TRISTATE1         (0X18UL)


/*                  output for IOCRx                */
#define OUTPUT_PUSH_PULL         (0X80UL)
#define OUTPUT_OPEN_DRAIN        (0XC0UL)

#endif /* MCAL_DRIVERS_PORT_PORT_REG_H_ */
