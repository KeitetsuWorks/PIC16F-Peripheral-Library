/**
 * @file        peripheral.c
 * @brief       Peripheral Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#include "peripheral.h"

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

void DisableGlobalInterrupt(void) {
  INTCONbits.GIE = 0b0;

  return;
}

void DisablePSP(void) {
  TRISEbits.PSPMODE = 0b0;

  return;
}

void DisableMSSP(void) {
  SSPCONbits.SSPEN = 0b0;

  return;
}

void DisableComparator(void) {
  CMCONbits.CM = 0b111;

  return;
}

void DisableVref(void) {
  CVRCONbits.CVREN = 0b0;
  CVRCONbits.CVROE = 0b0;

  return;
}