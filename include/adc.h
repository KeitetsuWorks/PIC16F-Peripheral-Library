/**
 * @file        adc.h
 * @brief       Analog-to-Digital (A/D) Converter Library
 * @author      Keitetsu
 * @date        2023/08/24
 * @copyright   Copyright (c) 2023 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#ifndef ADC_H__
#define ADC_H__

#include <stdint.h> /* For uint8_t definition */
#include <xc.h>     /* XC8 General Include File */

/**
 * @name    A/D Conversion Clock Select bits
 */
/** @{ */
#define ADC_CLOCK_DIV_2 0b000  /**< FOSC/2 */
#define ADC_CLOCK_DIV_8 0b001  /**< FOSC/8 */
#define ADC_CLOCK_DIV_32 0b010 /**< FOSC/32 */
#define ADC_CLOCK_INTERNAL \
  0b011 /**< FRC (clock derived from the internal A/D RC oscillator) */
#define ADC_CLOCK_DIV_4 0b100  /**< FOSC/4 */
#define ADC_CLOCK_DIV_16 0b101 /**< FOSC/16 */
#define ADC_CLOCK_DIV_64 0b110 /**< FOSC/64 */
/** @} */

/**
 * @name    A/D Port Configuration Control bits
 */
/** @{ */
#define ALL_ANALOG 0x0                 /**< ALL_ANALOG */
#define ANALOG_RA3_REF 0x1             /**< ANALOG_RA3_REF */
#define A_ANALOG 0x2                   /**< A_ANALOG */
#define A_ANALOG_RA3_REF 0x3           /**< A_ANALOG_RA3_REF */
#define RA0_RA1_RA3_ANALOG 0x4         /**< RA0_RA1_RA3_ANALOG */
#define RA0_RA1_ANALOG_RA3_REF 0x5     /**< RA0_RA1_ANALOG_RA3_REF */
#define NO_ANALOGS 0x6                 /**< NO_ANALOGS */
#define ANALOG_RA3_RA2_REF 0x8         /**< ANALOG_RA3_RA2_REF */
#define ANALOG_NOT_RE1_RE2 0x9         /**< ANALOG_NOT_RE1_RE2 */
#define ANALOG_NOT_RE1_RE2_REF_RA3 0xa /**< ANALOG_NOT_RE1_RE2_REF_RA3 */
#define ANALOG_NOT_RE1_RE2_REF_RA3_RA2 \
  0xb                                  /**< ANALOG_NOT_RE1_RE2_REF_RA3_RA2 */
#define A_ANALOG_RA3_RA2_REF 0xc       /**< A_ANALOG_RA3_RA2_REF */
#define RA0_RA1_ANALOG_RA3_RA2_REF 0xd /**< RA0_RA1_ANALOG_RA3_RA2_REF */
#define RA0_ANALOG 0xe                 /**< RA0_ANALOG */
#define RA0_ANALOG_RA3_RA2_REF 0xf     /**< RA0_ANALOG_RA3_RA2_REF */
/** @} */

/**
 * @brief       Disable A/D Converter Ports
 */
void DisableADCPorts(void);

/**
 * @brief       Initialize A/D Converter
 * @param[in]       mode            A/D Conversion Clock Select bits
 */
void InitADC(const uint8_t mode);

/**
 * @brief       Initialize A/D Converter Ports
 * @param[in]       value           A/D Port Configuration Control bits
 */
void SetADCPorts(const uint8_t value);

/**
 * @brief       Set A/D Converter Channel
 * @param[in]       channel         A/D Converter Channel
 */
void SetADCChannel(const uint8_t channel);

/**
 * @brief       Read A/D Converter Value
 */
uint16_t ReadADCValue(void);

#endif /* ADC_H__ */
