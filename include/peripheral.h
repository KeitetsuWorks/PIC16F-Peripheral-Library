/**
 * @file        peripheral.h
 * @brief       Peripheral Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#ifndef PERIPHERAL_H__
#define PERIPHERAL_H__

#include "adc.h"
#include "ccp.h"
#include "io.h"
#include "timer0.h"
#include "wdt.h"

/**
 * @brief       Disable Global Interrupt
 */
void DisableGlobalInterrupt(void);

/**
 * @brief       Disable Parallel Slave Port Mode
 */
void DisablePSP(void);

/**
 * @brief       Disable Master Synchronous Serial Port
 */
void DisableMSSP(void);

/**
 * @brief       Disable Comparator Module
 */
void DisableComparator(void);

/**
 * @brief       Disable Comparator Voltage Reference Generator
 */
void DisableVref(void);

#endif /* PERIPHERAL_H__ */
