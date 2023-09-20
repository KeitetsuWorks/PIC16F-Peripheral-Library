/**
 * @file        ccp2.h
 * @brief       Capture/Compare/PWM (CCP2) Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#ifndef CCP2_H__
#define CCP2_H__

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

/**
 * @brief       Disable Capture/Compare/PWM (CCP2) Module
 */
void DisableCCP2(void);

/**
 * @brief       CCP2をPWMモードで初期化する
 * @param[in]       pr2             PR2値
 * @param[in]       t2ckps          プリスケール値
 */
void InitPWM2(const uint8_t pr2, const uint8_t t2ckps);

/**
 * @brief       CCP2のPWMデューティ比を設定する
 * @param[in]       duty            デューティ値
 */
void SetPWM2Duty(const uint16_t duty);

#endif /* CCP2_H__ */
