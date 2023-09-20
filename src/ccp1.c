/**
 * @file        ccp1.c
 * @brief       Capture/Compare/PWM (CCP1) Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#include "ccp1.h"

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

#define _CCP1CON_CCP1M_PWM 0b1100 /**< PWM mode */

void DisableCCP1(void) {
  CCP1CONbits.CCP1M = 0b0000;

  return;
}

void InitPWM1(const uint8_t pr2, const uint8_t t2ckps) {
  PR2 = pr2;
  SetPWM1Duty(0);
  TRISCbits.TRISC2 = 0b0;
  T2CONbits.T2CKPS = t2ckps;
  T2CONbits.TMR2ON = 0b1;
  CCP1CONbits.CCP1M = _CCP1CON_CCP1M_PWM;

  return;
}

void SetPWM1Duty(const uint16_t duty) {
  CCPR1L = (uint8_t)(duty >> 2);
  CCP1CON = (CCP1CON & ~(_CCP1CON_CCP1X_MASK | _CCP1CON_CCP1Y_MASK)) |
            ((duty << _CCP1CON_CCP1Y_POSITION) &
             (_CCP1CON_CCP1X_MASK | _CCP1CON_CCP1Y_MASK));

  return;
}
