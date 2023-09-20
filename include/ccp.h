/**
 * @file        ccp.h
 * @brief       Capture/Compare/PWM (CCP) Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#ifndef CCP_H__
#define CCP_H__

#include "ccp1.h"
#include "ccp2.h"

/**
 * @name    Timer2 Clock Prescale Select bits
 */
/** @{ */
#define T2_DIV_BY_1 0b00  /**< Prescaler is 1 */
#define T2_DIV_BY_4 0b01  /**< Prescaler is 4 */
#define T2_DIV_BY_16 0b10 /**< Prescaler is 16 */
/** @} */

#endif /* CCP_H__ */
