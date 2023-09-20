/**
 * @file        timer0.h
 * @brief       Timer0 Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#ifndef TIMER0_H__
#define TIMER0_H__

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

#define RTCC_INTERNAL                                                      \
  (0b0 << _OPTION_REG_T0CS_POSITION) /**< Internal instruction cycle clock \
                                        (CLKO) */
/**
 * @name    TMR0 Rate
 */
/** @{ */
#define RTCC_DIV_2 0b0000   /**< 1:2 */
#define RTCC_DIV_4 0b0001   /**< 1:4 */
#define RTCC_DIV_8 0b0010   /**< 1:8 */
#define RTCC_DIV_16 0b0011  /**< 1:16 */
#define RTCC_DIV_32 0b0100  /**< 1:32 */
#define RTCC_DIV_64 0b0101  /**< 1:64 */
#define RTCC_DIV_128 0b0110 /**< 1:128 */
#define RTCC_DIV_256 0b0111 /**< 1:256 */
/** @} */

/**
 * @brief       Timer0を初期化する
 * @param[in]       mode            Mode
 */
void InitTimer0(const uint8_t mode);

/**
 * @brief       Timer0に値を設定する
 * @param[in]       tmr0            Timer0の設定値
 */
void SetTimer0(const uint8_t tmr0);

#endif /* TIMER0_H__ */
