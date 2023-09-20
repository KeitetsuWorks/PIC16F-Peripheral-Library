/**
 * @file        io.c
 * @brief       I/O Ports Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#include "io.h"

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

void SetTRISA(const uint8_t tris) {
  TRISA = tris;

  return;
}

void SetTRISB(const uint8_t tris) {
  TRISB = tris;

  return;
}

void SetTRISC(const uint8_t tris) {
  TRISC = tris;

  return;
}

void SetTRISD(const uint8_t tris) {
  TRISD = tris;

  return;
}

void SetTRISE(const uint8_t tris) {
  TRISE = (TRISE &
           ~(_TRISE_TRISE2_MASK | _TRISE_TRISE1_MASK | _TRISE_TRISE0_MASK)) |
          tris;

  return;
}
