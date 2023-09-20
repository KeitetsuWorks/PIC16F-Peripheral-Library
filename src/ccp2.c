/**
 * @file        ccp2.c
 * @brief       Capture/Compare/PWM (CCP2) Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#include "ccp2.h"

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

#define _CCP2CON_CCP2M_PWM 0b1100 /**< PWM mode */

void DisableCCP2(void) {
  CCP2CONbits.CCP2M = 0b0000;

  return;
}

void InitPWM2(const uint8_t pr2, const uint8_t t2ckps) {
  PR2 = pr2;
  SetPWM2Duty(0);
  TRISCbits.TRISC1 = 0b0;
  T2CONbits.T2CKPS = t2ckps;
  T2CONbits.TMR2ON = 0b1;
  CCP2CONbits.CCP2M = _CCP2CON_CCP2M_PWM;

  return;
}

void SetPWM2Duty(const uint16_t duty) {
  CCPR1L = (uint8_t)(duty >> 2);
  CCP2CON = (CCP2CON & ~(_CCP2CON_CCP2X_MASK | _CCP2CON_CCP2Y_MASK)) |
            ((duty << _CCP2CON_CCP2Y_POSITION) &
             (_CCP2CON_CCP2X_MASK | _CCP2CON_CCP2Y_MASK));

  return;
}