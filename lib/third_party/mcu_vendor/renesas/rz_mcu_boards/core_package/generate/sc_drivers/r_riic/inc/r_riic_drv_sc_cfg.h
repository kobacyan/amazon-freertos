/******************************************************************************
 * DISCLAIMER
 * This software is supplied by Renesas Electronics Corporation and is only
 * intended for use with Renesas products. No other uses are authorized. This
 * software is owned by Renesas Electronics Corporation and is protected under
 * all applicable laws, including copyright laws.
 * THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
 * THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT
 * LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
 * TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS
 * ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE
 * FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR
 * ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE
 * BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * Renesas reserves the right, without notice, to make changes to this software
 * and to discontinue the availability of this software. By using this
 * software, you agree to the additional terms and conditions found by
 * accessing the following link:
 * http://www.renesas.com/disclaimer
 ******************************************************************************
 * Copyright (C) 2018 Renesas Electronics Corporation. All rights reserved.
 *****************************************************************************/
/******************************************************************************
 * File Name    : r_riic_drv_sc_cfg.h
 * Description  : RIIC low layer driver smart configuration header, part of
 *                the low layer driver.
 *****************************************************************************/

/**************************************************************************//**
 * @ingroup SSGSTARC_56_RIIC_API
 * @ingroup R_SW_PKG_93_SC_CFG
 * @defgroup RIIC_SC_IF SC RIIC API Interface
 * @brief Interface between Smart Configurator and the RIIC module.
 *
 * @anchor RIIC_DRIVER_SC_SUMMARY
 * @par Summary
 * @brief The interface allows Smart Configurator (SC) to manage the 
 * configuration of the RIIC driver.
 * Do not edit this file if using SC
 *
 * @anchor SSGSTARC_56_RIIC_SC_IF_API_LIMITATIONS
 * @par Known Limitations
 * DMA startup not implemented at this time
 *
 * @anchor SSGSTARC_56_RIIC_SC_IF_API_INSTANCES
 * @par Known Implementations
 * @ref NONE_YET
 *
 * @anchor SSGSTARC_56_RIIC_SC_IF_API_RELATED
 * @par Related modules
 * @ref NONE_YET
 * @{
 *****************************************************************************/
    #include "r_typedefs.h"
#include "r_gpio_drv_sc_cfg.h"
#include "r_rza2m_riic_lld_api.h"

/* Multiple inclusion prevention macro */
#ifndef SRC_RENESAS_CONFIG_R_RIIC_DRV_SC_CFG_H_
    #define SRC_RENESAS_CONFIG_R_RIIC_DRV_SC_CFG_H_

/* PCLK Frequency for Driver to use in Frequency calculations */
#define RIIC_CFG_PCLK_FREQUENCY_HZ  (66000000)

/* Default priority for RIIC interrupts */
#define RIIC_CFG_DEFAULT_INT_PRIORITY   (9)

/** status of i2c channel */
typedef struct r_drv_riic_lld_config_t
{
    int_t ch_available; /* R_CFG_RIIC_DRV_CHANNELS_AVAIL */
    int_t ch_supported; /* R_CFG_RIIC_CHANNELS_SUPPORTED */
} st_r_drv_riic_lld_config_t;


/**
 * @typedef st_r_drv_riic_sc_config_t Smart Configurator Interface
 */
typedef struct
{
    int_t                           channel;
    st_riic_config_t                config;
    st_r_drv_gpio_pin_init_table_t  pin;
} st_r_drv_riic_sc_config_t;


/**
 * @section R_RIIC_SC_CFG_80_TABLE Smart Configurator settings table.
 */
static const st_r_drv_riic_sc_config_t RIIC_SC_TABLE[] = // @suppress("Global static variable naming")
{
    /* This code is auto-generated. Do not edit manually */
    { 3, 
        {
            RIIC_MODE_MASTER, 
            true, 
            false, 
            false, 
            1, 
            1, 
            1, 
            RIIC_DEVICE_ADDR_7 , 
            RIIC_DEVICE_ADDR_7 , 
            RIIC_DEVICE_ADDR_7 , 
            RIIC_FREQUENCY_400KHZ, 
            RIIC_DUTY_50, 
            0, 
            0, 
            RIIC_FILTER_NOT_USED, 
            RIIC_TIMEOUT_NOT_USED, 
            RIIC_FORMAT_I2C, 
            false, 
            9, 
            9, 
            9, 
            9, 
            9, 
            9, 
            9, 
            9, 
        }, 
        {
            &GPIO_SC_TABLE_riic3[0], 
            sizeof(GPIO_SC_TABLE_riic3)/sizeof(st_r_drv_gpio_sc_config_t), 
        }
    },
    /* End of modification */
};

#endif /* SRC_RENESAS_CONFIG_R_RIIC_DRV_SC_CFG_H_ */


/**************************************************************************//**
 * @} (end addtogroup RIIC_SC_IF)
 *****************************************************************************/

/**************************************************************************//**
 End  Of File
 *****************************************************************************/
