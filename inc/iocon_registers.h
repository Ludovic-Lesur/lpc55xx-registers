/*
 * iocon_registers.h
 *
 *  Created on: 08 mar. 2023
 *      Author: Ludo
 */

#ifndef LPC55XX_REGISTERS_DISABLE_FLAGS_FILE
#include "lpc55xx_registers_flags.h"
#endif

#ifndef LPC55XX_REGISTERS_DISABLE

#ifndef __IOCON_REGISTERS_H__
#define __IOCON_REGISTERS_H__

#include "types.h"

/*** IOCON REGISTERS macros ***/

#define IOCON   ((IOCON_registers_t*) ((uint32_t) 0x40001000))

/*** IOCON REGISTERS structures ***/

/*!******************************************************************
 * \struct IOCON_registers_t
 * \brief IOCON registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t PIO[2][32];
} IOCON_registers_t;

#endif /* __IOCON_REGISTERS_H__ */

#endif /* LPC55XX_REGISTERS_DISABLE */
