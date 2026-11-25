/*
 * dio_reg.h
 *
 *  Created on: Nov 16, 2026
 *      Author: Admin
 */

#ifndef MCAL_DRIVERS_DIO_DIO_REG_H_
#define MCAL_DRIVERS_DIO_DIO_REG_H_


#include"Common/Platform_Types.h"

/*          base address of ports         */
#define DIO_PORT_00_BASE            (0XF003A000UL)
#define DIO_PORT_01_BASE            (0XF003A100UL)
#define DIO_PORT_02_BASE            (0XF003A200UL)

#define DIO_PORT_10_BASE            (0XF003AA00UL)
#define DIO_PORT_11_BASE            (0XF003AB00UL)
#define DIO_PORT_12_BASE            (0XF003AC00UL)
#define DIO_PORT_13_BASE            (0XF003AD00UL)
#define DIO_PORT_14_BASE            (0XF003AE00UL)
#define DIO_PORT_15_BASE            (0XF003AF00UL)

#define DIO_PORT_20_BASE            (0XF003B400UL)
#define DIO_PORT_21_BASE            (0XF003B500UL)
#define DIO_PORT_22_BASE            (0XF003B600UL)
#define DIO_PORT_23_BASE            (0XF003B700UL)
#define DIO_PORT_24_BASE            (0XF003B800UL)
#define DIO_PORT_25_BASE            (0XF003B900UL)
#define DIO_PORT_26_BASE            (0XF003BA00UL)

#define DIO_PORT_30_BASE            (0XF003BE00UL)
#define DIO_PORT_31_BASE            (0XF003BF00UL)
#define DIO_PORT_32_BASE            (0XF003C000UL)
#define DIO_PORT_33_BASE            (0XF003C100UL)
#define DIO_PORT_34_BASE            (0XF003C200UL)

#define DIO_PORT_40_BASE            (0XF003C800UL)
#define DIO_PORT_41_BASE            (0XF003C900UL)


/*          offsets of the registers            */
#define DIO_OUT_OFFSET              (0X000UL)
#define DIO_OMR_OFFSET              (0X004UL)
#define DIO_IN_OFFSET               (0X024UL)



/*                register of port with offset            */
#define DIO_REG32(base, offset)   (*(volatile uint32 *)((base)+(offset)))



#endif /* MCAL_DRIVERS_DIO_DIO_REG_H_ */
