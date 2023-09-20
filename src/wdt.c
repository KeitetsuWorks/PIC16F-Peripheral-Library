/**
 * @file        wdt.c
 * @brief       Watchdog Timer (WDT) Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#include "wdt.h"

#include <xc.h> /* XC8 General Include File */

void RestartWDT(void) {
  CLRWDT();

  return;
}
