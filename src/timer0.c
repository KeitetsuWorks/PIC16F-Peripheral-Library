/**
 * @file        timer0.c
 * @brief       Timer0 Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#include "timer0.h"

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

void InitTimer0(const uint8_t mode) {
  OPTION_REG =
      (OPTION_REG & (_OPTION_REG_nRBPU_MASK | _OPTION_REG_INTEDG_MASK)) | mode;
  SetTimer0(0x00);

  return;
}

void SetTimer0(const uint8_t tmr0) {
  TMR0 = tmr0;

  return;
}
