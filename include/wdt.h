/**
 * @file        wdt.h
 * @brief       Watchdog Timer (WDT) Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#ifndef WDT_H__
#define WDT_H__

#include <xc.h> /* XC8 General Include File */

/**
 * @brief       Restart Watchdog Timer
 */
void RestartWDT(void);

#endif /* WDT_H__ */
