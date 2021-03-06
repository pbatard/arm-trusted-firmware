/*
 * Copyright (c) 2019, Intel Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef AGX_RESETMANAGER_H
#define AGX_RESETMANAGER_H

#define AGX_RSTMGR_HDSKEN				0xffd11010
#define AGX_RSTMGR_PER0MODRST				0xffd11024
#define AGX_RSTMGR_PER1MODRST				0xffd11028
#define AGX_RSTMGR_BRGMODRST				0xffd1102c

#define AGX_RSTMGR_PER0MODRST_EMAC0			0x00000001
#define AGX_RSTMGR_PER0MODRST_EMAC1			0x00000002
#define AGX_RSTMGR_PER0MODRST_EMAC2			0x00000004
#define AGX_RSTMGR_PER0MODRST_USB0			0x00000008
#define AGX_RSTMGR_PER0MODRST_USB1			0x00000010
#define AGX_RSTMGR_PER0MODRST_NAND			0x00000020
#define AGX_RSTMGR_PER0MODRST_SDMMC			0x00000080
#define AGX_RSTMGR_PER0MODRST_EMAC0OCP			0x00000100
#define AGX_RSTMGR_PER0MODRST_EMAC1OCP			0x00000200
#define AGX_RSTMGR_PER0MODRST_EMAC2OCP			0x00000400
#define AGX_RSTMGR_PER0MODRST_USB0OCP			0x00000800
#define AGX_RSTMGR_PER0MODRST_USB1OCP			0x00001000
#define AGX_RSTMGR_PER0MODRST_NANDOCP			0x00002000
#define AGX_RSTMGR_PER0MODRST_SDMMCOCP			0x00008000
#define AGX_RSTMGR_PER0MODRST_DMA			0x00010000
#define AGX_RSTMGR_PER0MODRST_SPIM0			0x00020000
#define AGX_RSTMGR_PER0MODRST_SPIM1			0x00040000
#define AGX_RSTMGR_PER0MODRST_SPIS0			0x00080000
#define AGX_RSTMGR_PER0MODRST_SPIS1			0x00100000
#define AGX_RSTMGR_PER0MODRST_DMAOCP			0x00200000
#define AGX_RSTMGR_PER0MODRST_EMACPTP			0x00400000
#define AGX_RSTMGR_PER0MODRST_DMAIF0			0x01000000
#define AGX_RSTMGR_PER0MODRST_DMAIF1			0x02000000
#define AGX_RSTMGR_PER0MODRST_DMAIF2			0x04000000
#define AGX_RSTMGR_PER0MODRST_DMAIF3			0x08000000
#define AGX_RSTMGR_PER0MODRST_DMAIF4			0x10000000
#define AGX_RSTMGR_PER0MODRST_DMAIF5			0x20000000
#define AGX_RSTMGR_PER0MODRST_DMAIF6			0x40000000
#define AGX_RSTMGR_PER0MODRST_DMAIF7			0x80000000

#define AGX_RSTMGR_PER1MODRST_WATCHDOG0			0x1
#define AGX_RSTMGR_PER1MODRST_WATCHDOG1			0x2
#define AGX_RSTMGR_PER1MODRST_WATCHDOG2			0x4
#define AGX_RSTMGR_PER1MODRST_WATCHDOG3			0x8
#define AGX_RSTMGR_PER1MODRST_L4SYSTIMER0		0x00000010
#define AGX_RSTMGR_PER1MODRST_L4SYSTIMER1		0x00000020
#define AGX_RSTMGR_PER1MODRST_SPTIMER0			0x00000040
#define AGX_RSTMGR_PER1MODRST_SPTIMER1			0x00000080
#define AGX_RSTMGR_PER1MODRST_I2C0			0x00000100
#define AGX_RSTMGR_PER1MODRST_I2C1			0x00000200
#define AGX_RSTMGR_PER1MODRST_I2C2			0x00000400
#define AGX_RSTMGR_PER1MODRST_I2C3			0x00000800
#define AGX_RSTMGR_PER1MODRST_I2C4			0x00001000
#define AGX_RSTMGR_PER1MODRST_UART0			0x00010000
#define AGX_RSTMGR_PER1MODRST_UART1			0x00020000
#define AGX_RSTMGR_PER1MODRST_GPIO0			0x01000000
#define AGX_RSTMGR_PER1MODRST_GPIO1			0x02000000

#define AGX_RSTMGR_HDSKEN_FPGAHSEN			0x00000004
#define AGX_RSTMGR_HDSKEN_ETRSTALLEN			0x00000008
#define AGX_RSTMGR_HDSKEN_L2FLUSHEN			0x00000100
#define AGX_RSTMGR_HDSKEN_L3NOC_DBG			0x00010000
#define AGX_RSTMGR_HDSKEN_DEBUG_L3NOC			0x00020000
#define AGX_RSTMGR_HDSKEN_SDRSELFREFEN			0x00000001

#define AGX_RSTMGR_BRGMODRST_SOC2FPGA			0x1
#define AGX_RSTMGR_BRGMODRST_LWHPS2FPGA			0x2
#define AGX_RSTMGR_BRGMODRST_FPGA2SOC			0x4
#define AGX_RSTMGR_BRGMODRST_MPFE			0x40

void deassert_peripheral_reset(void);
void config_hps_hs_before_warm_reset(void);

#endif

