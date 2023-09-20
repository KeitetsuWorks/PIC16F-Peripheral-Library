/**
 * @file        ccp1.h
 * @brief       Capture/Compare/PWM (CCP1) Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#ifndef CCP1_H__
#define CCP1_H__

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

/**
 * @brief       Disable Capture/Compare/PWM (CCP1) Module
 */
void DisableCCP1(void);

/**
 * @brief       CCP1をPWMモードで初期化する
 * @param[in]       pr2             PR2値
 * @param[in]       t2ckps          プリスケール値
 */
void InitPWM1(const uint8_t pr2, const uint8_t t2ckps);

/**
 * @brief       CCP1のPWMデューティ比を設定する
 * @param[in]       duty            デューティ値
 */
void SetPWM1Duty(const uint16_t duty);

#endif /* CCP1_H__ */
