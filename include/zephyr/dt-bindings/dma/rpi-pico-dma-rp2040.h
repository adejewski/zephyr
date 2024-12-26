/*
 * Copyright (c) 2023 TOKITA Hiroshi <tokita.hiroshi@fujitsu.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_RPI_PICO_DMA_RP2040_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_RPI_PICO_DMA_RP2040_H_

#include "rpi-pico-dma-common.h"

#define RPI_PICO_DMA_SLOT_SPI0_TX    RPI_PICO_DMA_DREQ_TO_SLOT(0x10)
#define RPI_PICO_DMA_SLOT_SPI0_RX    RPI_PICO_DMA_DREQ_TO_SLOT(0x11)
#define RPI_PICO_DMA_SLOT_SPI1_TX    RPI_PICO_DMA_DREQ_TO_SLOT(0x12)
#define RPI_PICO_DMA_SLOT_SPI1_RX    RPI_PICO_DMA_DREQ_TO_SLOT(0x13)
#define RPI_PICO_DMA_SLOT_UART0_TX   RPI_PICO_DMA_DREQ_TO_SLOT(0x14)
#define RPI_PICO_DMA_SLOT_UART0_RX   RPI_PICO_DMA_DREQ_TO_SLOT(0x15)
#define RPI_PICO_DMA_SLOT_UART1_TX   RPI_PICO_DMA_DREQ_TO_SLOT(0x16)
#define RPI_PICO_DMA_SLOT_UART1_RX   RPI_PICO_DMA_DREQ_TO_SLOT(0x17)
#define RPI_PICO_DMA_SLOT_PWM_WRAP0  RPI_PICO_DMA_DREQ_TO_SLOT(0x18)
#define RPI_PICO_DMA_SLOT_PWM_WRAP1  RPI_PICO_DMA_DREQ_TO_SLOT(0x19)
#define RPI_PICO_DMA_SLOT_PWM_WRAP2  RPI_PICO_DMA_DREQ_TO_SLOT(0x1A)
#define RPI_PICO_DMA_SLOT_PWM_WRAP3  RPI_PICO_DMA_DREQ_TO_SLOT(0x1B)
#define RPI_PICO_DMA_SLOT_PWM_WRAP4  RPI_PICO_DMA_DREQ_TO_SLOT(0x1C)
#define RPI_PICO_DMA_SLOT_PWM_WRAP5  RPI_PICO_DMA_DREQ_TO_SLOT(0x1D)
#define RPI_PICO_DMA_SLOT_PWM_WRAP6  RPI_PICO_DMA_DREQ_TO_SLOT(0x1E)
#define RPI_PICO_DMA_SLOT_PWM_WRAP7  RPI_PICO_DMA_DREQ_TO_SLOT(0x1F)
#define RPI_PICO_DMA_SLOT_I2C0_TX    RPI_PICO_DMA_DREQ_TO_SLOT(0x30)
#define RPI_PICO_DMA_SLOT_I2C0_RX    RPI_PICO_DMA_DREQ_TO_SLOT(0x31)
#define RPI_PICO_DMA_SLOT_I2C1_TX    RPI_PICO_DMA_DREQ_TO_SLOT(0x32)
#define RPI_PICO_DMA_SLOT_I2C1_RX    RPI_PICO_DMA_DREQ_TO_SLOT(0x33)
#define RPI_PICO_DMA_SLOT_ADC        RPI_PICO_DMA_DREQ_TO_SLOT(0x34)
#define RPI_PICO_DMA_SLOT_XIP_STREAM RPI_PICO_DMA_DREQ_TO_SLOT(0x35)
#define RPI_PICO_DMA_SLOT_XIP_SSITX  RPI_PICO_DMA_DREQ_TO_SLOT(0x36)
#define RPI_PICO_DMA_SLOT_XIP_SSIRX  RPI_PICO_DMA_DREQ_TO_SLOT(0x37)

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_RPI_PICO_DMA_RP2040_H_ */