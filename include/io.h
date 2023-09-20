/**
 * @file        io.h
 * @brief       I/O Ports Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#ifndef IO_H__
#define IO_H__

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

/**
 * @brief       Set TRISA
 * @param[in]       tris            TRISA Value
 */
void SetTRISA(const uint8_t tris);

/**
 * @brief       Set TRISB
 * @param[in]       tris            TRISB Value
 */
void SetTRISB(const uint8_t tris);

/**
 * @brief       Set TRISC
 * @param[in]       tris            TRISC Value
 */
void SetTRISC(const uint8_t tris);

/**
 * @brief       Set TRISD
 * @param[in]       tris            TRISD Value
 */
void SetTRISD(const uint8_t tris);

/**
 * @brief       Set TRISE
 * @param[in]       tris            TRISE Value
 */
void SetTRISE(const uint8_t tris);

#endif /* IO_H__ */
