/**
 * @file        adc.c
 * @brief       Analog-to-Digital (A/D) Converter Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#include "adc.h"

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

void DisableADCPorts(void) {
  ADCON0bits.ADON = 0b0;
  ADCON1bits.PCFG = NO_ANALOGS;

  return;
}

void InitADC(const uint8_t mode) {
  ADCON0bits.ADCS = 0b011 & mode;
  ADCON1bits.ADCS2 = mode >> 2;
  ADCON1bits.ADFM = 0b1;
  ADCON0bits.ADON = 0b1;

  return;
}

void SetADCPorts(const uint8_t value) {
  ADCON1bits.PCFG = value;

  return;
}

void SetADCChannel(const uint8_t channel) {
  ADCON0 = (ADCON0 & ~_ADCON0_CHS_MASK) | (uint8_t)(channel << 3);

  return;
}

uint16_t ReadADCValue() {
  ADCON0bits.GO_nDONE = 0b1;
  while (ADCON0bits.GO_nDONE)
    ;

  return (((uint16_t)ADRESH << 8) + (uint16_t)ADRESL);
}
