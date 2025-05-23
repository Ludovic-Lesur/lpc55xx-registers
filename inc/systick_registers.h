/*
 * systick_registers.h
 *
 *  Created on: 14 mar. 2023
 *      Author: Ludo
 */

#ifndef LPC55XX_REGISTERS_DISABLE_FLAGS_FILE
#include "lpc55xx_registers_flags.h"
#endif

#ifndef LPC55XX_REGISTERS_DISABLE

#ifndef __SYSTICK_REGISTERS_H__
#define __SYSTICK_REGISTERS_H__

/*** SYSTICK REGISTERS macros ***/

#define SYSTICK     ((SYSTICK_registers_t*) ((uint32_t) 0xE000E010))

/*** SYSTICK REGISTERS structures ***/

/*!******************************************************************
 * \struct SYSTICK_registers_t
 * \brief SYSTICK registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CTRL;
    volatile uint32_t LOAD;
    volatile uint32_t VAL;
    volatile uint32_t CALIB;
} SYSTICK_registers_t;

#endif /* __SYSTICK_REGISTERS_H__ */

#endif /* LPC55XX_REGISTERS_DISABLE */
