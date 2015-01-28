/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_PIT_REGISTERS_H__
#define __HW_PIT_REGISTERS_H__

#include "MK20D5.h"
#include "fsl_bitband.h"

/*
 * MK20D5 PIT
 *
 * Periodic Interrupt Timer
 *
 * Registers defined in this header file:
 * - HW_PIT_MCR - PIT Module Control Register
 * - HW_PIT_LDVALn - Timer Load Value Register
 * - HW_PIT_CVALn - Current Timer Value Register
 * - HW_PIT_TCTRLn - Timer Control Register
 * - HW_PIT_TFLGn - Timer Flag Register
 *
 * - hw_pit_t - Struct containing all module registers.
 */

#define HW_PIT_INSTANCE_COUNT (1U) /*!< Number of instances of the PIT module. */

/*******************************************************************************
 * HW_PIT_MCR - PIT Module Control Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_MCR - PIT Module Control Register (RW)
 *
 * Reset value: 0x00000002U
 *
 * This register controls whether the timer clocks should be enabled and whether
 * the timers should run in debug mode.
 */
typedef union _hw_pit_mcr
{
    uint32_t U;
    struct _hw_pit_mcr_bitfields
    {
        uint32_t FRZ : 1;              /*!< [0] Freeze */
        uint32_t MDIS : 1;             /*!< [1] Module Disable */
        uint32_t RESERVED0 : 30;       /*!< [31:2]  */
    } B;
} hw_pit_mcr_t;

/*!
 * @name Constants and macros for entire PIT_MCR register
 */
/*@{*/
#define HW_PIT_MCR_ADDR(x)       ((x) + 0x0U)

#define HW_PIT_MCR(x)            (*(__IO hw_pit_mcr_t *) HW_PIT_MCR_ADDR(x))
#define HW_PIT_MCR_RD(x)         (HW_PIT_MCR(x).U)
#define HW_PIT_MCR_WR(x, v)      (HW_PIT_MCR(x).U = (v))
#define HW_PIT_MCR_SET(x, v)     (HW_PIT_MCR_WR(x, HW_PIT_MCR_RD(x) |  (v)))
#define HW_PIT_MCR_CLR(x, v)     (HW_PIT_MCR_WR(x, HW_PIT_MCR_RD(x) & ~(v)))
#define HW_PIT_MCR_TOG(x, v)     (HW_PIT_MCR_WR(x, HW_PIT_MCR_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual PIT_MCR bitfields
 */

/*!
 * @name Register PIT_MCR, field FRZ[0] (RW)
 *
 * Allows the timers to be stopped when the device enters debug mode.
 *
 * Values:
 * - 0 - Timers continue to run in debug mode.
 * - 1 - Timers are stopped in debug mode.
 */
/*@{*/
#define BP_PIT_MCR_FRZ       (0U)          /*!< Bit position for PIT_MCR_FRZ. */
#define BM_PIT_MCR_FRZ       (0x00000001U) /*!< Bit mask for PIT_MCR_FRZ. */
#define BS_PIT_MCR_FRZ       (1U)          /*!< Bit field size in bits for PIT_MCR_FRZ. */

/*! @brief Read current value of the PIT_MCR_FRZ field. */
#define BR_PIT_MCR_FRZ(x)    (BITBAND_ACCESS32(HW_PIT_MCR_ADDR(x), BP_PIT_MCR_FRZ))

/*! @brief Format value for bitfield PIT_MCR_FRZ. */
#define BF_PIT_MCR_FRZ(v)    ((uint32_t)((uint32_t)(v) << BP_PIT_MCR_FRZ) & BM_PIT_MCR_FRZ)

/*! @brief Set the FRZ field to a new value. */
#define BW_PIT_MCR_FRZ(x, v) (BITBAND_ACCESS32(HW_PIT_MCR_ADDR(x), BP_PIT_MCR_FRZ) = (v))
/*@}*/

/*!
 * @name Register PIT_MCR, field MDIS[1] (RW)
 *
 * This is used to disable the module clock. This bit must be enabled before any
 * other setup is done.
 *
 * Values:
 * - 0 - Clock for PIT Timers is enabled.
 * - 1 - Clock for PIT Timers is disabled.
 */
/*@{*/
#define BP_PIT_MCR_MDIS      (1U)          /*!< Bit position for PIT_MCR_MDIS. */
#define BM_PIT_MCR_MDIS      (0x00000002U) /*!< Bit mask for PIT_MCR_MDIS. */
#define BS_PIT_MCR_MDIS      (1U)          /*!< Bit field size in bits for PIT_MCR_MDIS. */

/*! @brief Read current value of the PIT_MCR_MDIS field. */
#define BR_PIT_MCR_MDIS(x)   (BITBAND_ACCESS32(HW_PIT_MCR_ADDR(x), BP_PIT_MCR_MDIS))

/*! @brief Format value for bitfield PIT_MCR_MDIS. */
#define BF_PIT_MCR_MDIS(v)   ((uint32_t)((uint32_t)(v) << BP_PIT_MCR_MDIS) & BM_PIT_MCR_MDIS)

/*! @brief Set the MDIS field to a new value. */
#define BW_PIT_MCR_MDIS(x, v) (BITBAND_ACCESS32(HW_PIT_MCR_ADDR(x), BP_PIT_MCR_MDIS) = (v))
/*@}*/

/*******************************************************************************
 * HW_PIT_LDVALn - Timer Load Value Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_LDVALn - Timer Load Value Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * These registers select the timeout period for the timer interrupts.
 */
typedef union _hw_pit_ldvaln
{
    uint32_t U;
    struct _hw_pit_ldvaln_bitfields
    {
        uint32_t TSV : 32;             /*!< [31:0] Timer Start Value Bits */
    } B;
} hw_pit_ldvaln_t;

/*!
 * @name Constants and macros for entire PIT_LDVALn register
 */
/*@{*/
#define HW_PIT_LDVALn_COUNT (4U)

#define HW_PIT_LDVALn_ADDR(x, n) ((x) + 0x100U + (0x10U * (n)))

#define HW_PIT_LDVALn(x, n)      (*(__IO hw_pit_ldvaln_t *) HW_PIT_LDVALn_ADDR(x, n))
#define HW_PIT_LDVALn_RD(x, n)   (HW_PIT_LDVALn(x, n).U)
#define HW_PIT_LDVALn_WR(x, n, v) (HW_PIT_LDVALn(x, n).U = (v))
#define HW_PIT_LDVALn_SET(x, n, v) (HW_PIT_LDVALn_WR(x, n, HW_PIT_LDVALn_RD(x, n) |  (v)))
#define HW_PIT_LDVALn_CLR(x, n, v) (HW_PIT_LDVALn_WR(x, n, HW_PIT_LDVALn_RD(x, n) & ~(v)))
#define HW_PIT_LDVALn_TOG(x, n, v) (HW_PIT_LDVALn_WR(x, n, HW_PIT_LDVALn_RD(x, n) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual PIT_LDVALn bitfields
 */

/*!
 * @name Register PIT_LDVALn, field TSV[31:0] (RW)
 */
/*@{*/
#define BP_PIT_LDVALn_TSV    (0U)          /*!< Bit position for PIT_LDVALn_TSV. */
#define BM_PIT_LDVALn_TSV    (0xFFFFFFFFU) /*!< Bit mask for PIT_LDVALn_TSV. */
#define BS_PIT_LDVALn_TSV    (32U)         /*!< Bit field size in bits for PIT_LDVALn_TSV. */

/*! @brief Read current value of the PIT_LDVALn_TSV field. */
#define BR_PIT_LDVALn_TSV(x, n) (HW_PIT_LDVALn(x, n).U)

/*! @brief Format value for bitfield PIT_LDVALn_TSV. */
#define BF_PIT_LDVALn_TSV(v) ((uint32_t)((uint32_t)(v) << BP_PIT_LDVALn_TSV) & BM_PIT_LDVALn_TSV)

/*! @brief Set the TSV field to a new value. */
#define BW_PIT_LDVALn_TSV(x, n, v) (HW_PIT_LDVALn_WR(x, n, v))
/*@}*/
/*******************************************************************************
 * HW_PIT_CVALn - Current Timer Value Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_CVALn - Current Timer Value Register (RO)
 *
 * Reset value: 0x00000000U
 *
 * These registers indicate the current timer position.
 */
typedef union _hw_pit_cvaln
{
    uint32_t U;
    struct _hw_pit_cvaln_bitfields
    {
        uint32_t TVL : 32;             /*!< [31:0] Current Timer Value */
    } B;
} hw_pit_cvaln_t;

/*!
 * @name Constants and macros for entire PIT_CVALn register
 */
/*@{*/
#define HW_PIT_CVALn_COUNT (4U)

#define HW_PIT_CVALn_ADDR(x, n)  ((x) + 0x104U + (0x10U * (n)))

#define HW_PIT_CVALn(x, n)       (*(__I hw_pit_cvaln_t *) HW_PIT_CVALn_ADDR(x, n))
#define HW_PIT_CVALn_RD(x, n)    (HW_PIT_CVALn(x, n).U)
/*@}*/

/*
 * Constants & macros for individual PIT_CVALn bitfields
 */

/*!
 * @name Register PIT_CVALn, field TVL[31:0] (RO)
 */
/*@{*/
#define BP_PIT_CVALn_TVL     (0U)          /*!< Bit position for PIT_CVALn_TVL. */
#define BM_PIT_CVALn_TVL     (0xFFFFFFFFU) /*!< Bit mask for PIT_CVALn_TVL. */
#define BS_PIT_CVALn_TVL     (32U)         /*!< Bit field size in bits for PIT_CVALn_TVL. */

/*! @brief Read current value of the PIT_CVALn_TVL field. */
#define BR_PIT_CVALn_TVL(x, n) (HW_PIT_CVALn(x, n).U)
/*@}*/
/*******************************************************************************
 * HW_PIT_TCTRLn - Timer Control Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_TCTRLn - Timer Control Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * These register contain the control bits for each timer.
 */
typedef union _hw_pit_tctrln
{
    uint32_t U;
    struct _hw_pit_tctrln_bitfields
    {
        uint32_t TEN : 1;              /*!< [0] Timer Enable Bit. */
        uint32_t TIE : 1;              /*!< [1] Timer Interrupt Enable Bit. */
        uint32_t RESERVED0 : 30;       /*!< [31:2]  */
    } B;
} hw_pit_tctrln_t;

/*!
 * @name Constants and macros for entire PIT_TCTRLn register
 */
/*@{*/
#define HW_PIT_TCTRLn_COUNT (4U)

#define HW_PIT_TCTRLn_ADDR(x, n) ((x) + 0x108U + (0x10U * (n)))

#define HW_PIT_TCTRLn(x, n)      (*(__IO hw_pit_tctrln_t *) HW_PIT_TCTRLn_ADDR(x, n))
#define HW_PIT_TCTRLn_RD(x, n)   (HW_PIT_TCTRLn(x, n).U)
#define HW_PIT_TCTRLn_WR(x, n, v) (HW_PIT_TCTRLn(x, n).U = (v))
#define HW_PIT_TCTRLn_SET(x, n, v) (HW_PIT_TCTRLn_WR(x, n, HW_PIT_TCTRLn_RD(x, n) |  (v)))
#define HW_PIT_TCTRLn_CLR(x, n, v) (HW_PIT_TCTRLn_WR(x, n, HW_PIT_TCTRLn_RD(x, n) & ~(v)))
#define HW_PIT_TCTRLn_TOG(x, n, v) (HW_PIT_TCTRLn_WR(x, n, HW_PIT_TCTRLn_RD(x, n) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual PIT_TCTRLn bitfields
 */

/*!
 * @name Register PIT_TCTRLn, field TEN[0] (RW)
 *
 * Values:
 * - 0 - Timer n is disabled.
 * - 1 - Timer n is active.
 */
/*@{*/
#define BP_PIT_TCTRLn_TEN    (0U)          /*!< Bit position for PIT_TCTRLn_TEN. */
#define BM_PIT_TCTRLn_TEN    (0x00000001U) /*!< Bit mask for PIT_TCTRLn_TEN. */
#define BS_PIT_TCTRLn_TEN    (1U)          /*!< Bit field size in bits for PIT_TCTRLn_TEN. */

/*! @brief Read current value of the PIT_TCTRLn_TEN field. */
#define BR_PIT_TCTRLn_TEN(x, n) (BITBAND_ACCESS32(HW_PIT_TCTRLn_ADDR(x, n), BP_PIT_TCTRLn_TEN))

/*! @brief Format value for bitfield PIT_TCTRLn_TEN. */
#define BF_PIT_TCTRLn_TEN(v) ((uint32_t)((uint32_t)(v) << BP_PIT_TCTRLn_TEN) & BM_PIT_TCTRLn_TEN)

/*! @brief Set the TEN field to a new value. */
#define BW_PIT_TCTRLn_TEN(x, n, v) (BITBAND_ACCESS32(HW_PIT_TCTRLn_ADDR(x, n), BP_PIT_TCTRLn_TEN) = (v))
/*@}*/

/*!
 * @name Register PIT_TCTRLn, field TIE[1] (RW)
 *
 * Values:
 * - 0 - Interrupt requests from Timer n are disabled.
 * - 1 - Interrupt will be requested whenever TIF is set.
 */
/*@{*/
#define BP_PIT_TCTRLn_TIE    (1U)          /*!< Bit position for PIT_TCTRLn_TIE. */
#define BM_PIT_TCTRLn_TIE    (0x00000002U) /*!< Bit mask for PIT_TCTRLn_TIE. */
#define BS_PIT_TCTRLn_TIE    (1U)          /*!< Bit field size in bits for PIT_TCTRLn_TIE. */

/*! @brief Read current value of the PIT_TCTRLn_TIE field. */
#define BR_PIT_TCTRLn_TIE(x, n) (BITBAND_ACCESS32(HW_PIT_TCTRLn_ADDR(x, n), BP_PIT_TCTRLn_TIE))

/*! @brief Format value for bitfield PIT_TCTRLn_TIE. */
#define BF_PIT_TCTRLn_TIE(v) ((uint32_t)((uint32_t)(v) << BP_PIT_TCTRLn_TIE) & BM_PIT_TCTRLn_TIE)

/*! @brief Set the TIE field to a new value. */
#define BW_PIT_TCTRLn_TIE(x, n, v) (BITBAND_ACCESS32(HW_PIT_TCTRLn_ADDR(x, n), BP_PIT_TCTRLn_TIE) = (v))
/*@}*/
/*******************************************************************************
 * HW_PIT_TFLGn - Timer Flag Register
 ******************************************************************************/

/*!
 * @brief HW_PIT_TFLGn - Timer Flag Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * These registers hold the PIT interrupt flags.
 */
typedef union _hw_pit_tflgn
{
    uint32_t U;
    struct _hw_pit_tflgn_bitfields
    {
        uint32_t TIF : 1;              /*!< [0] Timer Interrupt Flag. */
        uint32_t RESERVED0 : 31;       /*!< [31:1]  */
    } B;
} hw_pit_tflgn_t;

/*!
 * @name Constants and macros for entire PIT_TFLGn register
 */
/*@{*/
#define HW_PIT_TFLGn_COUNT (4U)

#define HW_PIT_TFLGn_ADDR(x, n)  ((x) + 0x10CU + (0x10U * (n)))

#define HW_PIT_TFLGn(x, n)       (*(__IO hw_pit_tflgn_t *) HW_PIT_TFLGn_ADDR(x, n))
#define HW_PIT_TFLGn_RD(x, n)    (HW_PIT_TFLGn(x, n).U)
#define HW_PIT_TFLGn_WR(x, n, v) (HW_PIT_TFLGn(x, n).U = (v))
#define HW_PIT_TFLGn_SET(x, n, v) (HW_PIT_TFLGn_WR(x, n, HW_PIT_TFLGn_RD(x, n) |  (v)))
#define HW_PIT_TFLGn_CLR(x, n, v) (HW_PIT_TFLGn_WR(x, n, HW_PIT_TFLGn_RD(x, n) & ~(v)))
#define HW_PIT_TFLGn_TOG(x, n, v) (HW_PIT_TFLGn_WR(x, n, HW_PIT_TFLGn_RD(x, n) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual PIT_TFLGn bitfields
 */

/*!
 * @name Register PIT_TFLGn, field TIF[0] (W1C)
 *
 * Values:
 * - 0 - Time-out has not yet occurred.
 * - 1 - Time-out has occurred.
 */
/*@{*/
#define BP_PIT_TFLGn_TIF     (0U)          /*!< Bit position for PIT_TFLGn_TIF. */
#define BM_PIT_TFLGn_TIF     (0x00000001U) /*!< Bit mask for PIT_TFLGn_TIF. */
#define BS_PIT_TFLGn_TIF     (1U)          /*!< Bit field size in bits for PIT_TFLGn_TIF. */

/*! @brief Read current value of the PIT_TFLGn_TIF field. */
#define BR_PIT_TFLGn_TIF(x, n) (BITBAND_ACCESS32(HW_PIT_TFLGn_ADDR(x, n), BP_PIT_TFLGn_TIF))

/*! @brief Format value for bitfield PIT_TFLGn_TIF. */
#define BF_PIT_TFLGn_TIF(v)  ((uint32_t)((uint32_t)(v) << BP_PIT_TFLGn_TIF) & BM_PIT_TFLGn_TIF)

/*! @brief Set the TIF field to a new value. */
#define BW_PIT_TFLGn_TIF(x, n, v) (BITBAND_ACCESS32(HW_PIT_TFLGn_ADDR(x, n), BP_PIT_TFLGn_TIF) = (v))
/*@}*/

/*******************************************************************************
 * hw_pit_t - module struct
 ******************************************************************************/
/*!
 * @brief All PIT module registers.
 */
#pragma pack(1)
typedef struct _hw_pit
{
    __IO hw_pit_mcr_t MCR;                 /*!< [0x0] PIT Module Control Register */
    uint8_t _reserved0[252];
    struct {
        __IO hw_pit_ldvaln_t LDVALn;       /*!< [0x100] Timer Load Value Register */
        __I hw_pit_cvaln_t CVALn;          /*!< [0x104] Current Timer Value Register */
        __IO hw_pit_tctrln_t TCTRLn;       /*!< [0x108] Timer Control Register */
        __IO hw_pit_tflgn_t TFLGn;         /*!< [0x10C] Timer Flag Register */
    } CHANNEL[4];
} hw_pit_t;
#pragma pack()

/*! @brief Macro to access all PIT registers. */
/*! @param x PIT module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_PIT(PIT_BASE)</code>. */
#define HW_PIT(x)      (*(hw_pit_t *)(x))

#endif /* __HW_PIT_REGISTERS_H__ */
/* v33/140401/2.1.0 */
/* EOF */
