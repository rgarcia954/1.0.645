/****************************************************************************
* The confidential and proprietary information contained in this file may   *
* only be used by a person authorised under and to the extent permitted     *
* by a subsisting licensing agreement from Arm Limited (or its affiliates). *
*     (C) COPYRIGHT [2001-2018] Arm Limited (or its affiliates).            *
*         ALL RIGHTS RESERVED                                               *
* This entire notice must be reproduced on all copies of this file          *
* and copies of this file may only be made by a person if such person is    *
* permitted to do so under the terms of a subsisting license agreement      *
* from Arm Limited (or its affiliates).                                     *
*****************************************************************************/

#ifndef __DX_HOST_H__
#define __DX_HOST_H__

// --------------------------------------
// BLOCK: HOST
// --------------------------------------
#define DX_HOST_IRR_REG_OFFSET  0x0A00UL
#define DX_HOST_IRR_SRAM_TO_DIN_INT_BIT_SHIFT   0x4UL
#define DX_HOST_IRR_SRAM_TO_DIN_INT_BIT_SIZE    0x1UL
#define DX_HOST_IRR_DOUT_TO_SRAM_INT_BIT_SHIFT  0x5UL
#define DX_HOST_IRR_DOUT_TO_SRAM_INT_BIT_SIZE   0x1UL
#define DX_HOST_IRR_MEM_TO_DIN_INT_BIT_SHIFT    0x6UL
#define DX_HOST_IRR_MEM_TO_DIN_INT_BIT_SIZE     0x1UL
#define DX_HOST_IRR_DOUT_TO_MEM_INT_BIT_SHIFT   0x7UL
#define DX_HOST_IRR_DOUT_TO_MEM_INT_BIT_SIZE    0x1UL
#define DX_HOST_IRR_AHB_ERR_INT_BIT_SHIFT   0x8UL
#define DX_HOST_IRR_AHB_ERR_INT_BIT_SIZE    0x1UL
#define DX_HOST_IRR_PKA_EXP_INT_BIT_SHIFT   0x9UL
#define DX_HOST_IRR_PKA_EXP_INT_BIT_SIZE    0x1UL
#define DX_HOST_IRR_RNG_INT_BIT_SHIFT   0xAUL
#define DX_HOST_IRR_RNG_INT_BIT_SIZE    0x1UL
#define DX_HOST_IRR_SYM_DMA_COMPLETED_BIT_SHIFT     0xBUL
#define DX_HOST_IRR_SYM_DMA_COMPLETED_BIT_SIZE  0x1UL
#define DX_HOST_IMR_REG_OFFSET  0x0A04UL
#define DX_HOST_IMR_SRAM_TO_DIN_MASK_BIT_SHIFT  0x4UL
#define DX_HOST_IMR_SRAM_TO_DIN_MASK_BIT_SIZE   0x1UL
#define DX_HOST_IMR_DOUT_TO_SRAM_MASK_BIT_SHIFT     0x5UL
#define DX_HOST_IMR_DOUT_TO_SRAM_MASK_BIT_SIZE  0x1UL
#define DX_HOST_IMR_MEM_TO_DIN_MASK_BIT_SHIFT   0x6UL
#define DX_HOST_IMR_MEM_TO_DIN_MASK_BIT_SIZE    0x1UL
#define DX_HOST_IMR_DOUT_TO_MEM_MASK_BIT_SHIFT  0x7UL
#define DX_HOST_IMR_DOUT_TO_MEM_MASK_BIT_SIZE   0x1UL
#define DX_HOST_IMR_AXI_ERR_MASK_BIT_SHIFT  0x8UL
#define DX_HOST_IMR_AXI_ERR_MASK_BIT_SIZE   0x1UL
#define DX_HOST_IMR_PKA_EXP_MASK_BIT_SHIFT  0x9UL
#define DX_HOST_IMR_PKA_EXP_MASK_BIT_SIZE   0x1UL
#define DX_HOST_IMR_RNG_INT_MASK_BIT_SHIFT  0xAUL
#define DX_HOST_IMR_RNG_INT_MASK_BIT_SIZE   0x1UL
#define DX_HOST_IMR_SYM_DMA_COMPLETED_MASK_BIT_SHIFT    0xBUL
#define DX_HOST_IMR_SYM_DMA_COMPLETED_MASK_BIT_SIZE     0x1UL
#define DX_HOST_ICR_REG_OFFSET  0x0A08UL
#define DX_HOST_ICR_SRAM_TO_DIN_CLEAR_BIT_SHIFT     0x4UL
#define DX_HOST_ICR_SRAM_TO_DIN_CLEAR_BIT_SIZE  0x1UL
#define DX_HOST_ICR_DOUT_TO_SRAM_CLEAR_BIT_SHIFT    0x5UL
#define DX_HOST_ICR_DOUT_TO_SRAM_CLEAR_BIT_SIZE     0x1UL
#define DX_HOST_ICR_MEM_TO_DIN_CLEAR_BIT_SHIFT  0x6UL
#define DX_HOST_ICR_MEM_TO_DIN_CLEAR_BIT_SIZE   0x1UL
#define DX_HOST_ICR_DOUT_TO_MEM_CLEAR_BIT_SHIFT     0x7UL
#define DX_HOST_ICR_DOUT_TO_MEM_CLEAR_BIT_SIZE  0x1UL
#define DX_HOST_ICR_AXI_ERR_CLEAR_BIT_SHIFT     0x8UL
#define DX_HOST_ICR_AXI_ERR_CLEAR_BIT_SIZE  0x1UL
#define DX_HOST_ICR_PKA_EXP_CLEAR_BIT_SHIFT     0x9UL
#define DX_HOST_ICR_PKA_EXP_CLEAR_BIT_SIZE  0x1UL
#define DX_HOST_ICR_RNG_INT_CLEAR_BIT_SHIFT     0xAUL
#define DX_HOST_ICR_RNG_INT_CLEAR_BIT_SIZE  0x1UL
#define DX_HOST_ICR_SYM_DMA_COMPLETED_CLEAR_BIT_SHIFT   0xBUL
#define DX_HOST_ICR_SYM_DMA_COMPLETED_CLEAR_BIT_SIZE    0x1UL
#define DX_HOST_ENDIAN_REG_OFFSET   0x0A0CUL
#define DX_HOST_ENDIAN_DOUT_WR_BG_BIT_SHIFT     0x3UL
#define DX_HOST_ENDIAN_DOUT_WR_BG_BIT_SIZE  0x1UL
#define DX_HOST_ENDIAN_DIN_RD_BG_BIT_SHIFT  0x7UL
#define DX_HOST_ENDIAN_DIN_RD_BG_BIT_SIZE   0x1UL
#define DX_HOST_ENDIAN_DOUT_WR_WBG_BIT_SHIFT    0xBUL
#define DX_HOST_ENDIAN_DOUT_WR_WBG_BIT_SIZE     0x1UL
#define DX_HOST_ENDIAN_DIN_RD_WBG_BIT_SHIFT     0xFUL
#define DX_HOST_ENDIAN_DIN_RD_WBG_BIT_SIZE  0x1UL
#define DX_HOST_SIGNATURE_REG_OFFSET    0x0A24UL
#define DX_HOST_SIGNATURE_VALUE_BIT_SHIFT   0x0UL
#define DX_HOST_SIGNATURE_VALUE_BIT_SIZE    0x20UL
#define DX_HOST_BOOT_REG_OFFSET     0x0A28UL
#define DX_HOST_BOOT_SYNTHESIS_CONFIG_BIT_SHIFT     0x0UL
#define DX_HOST_BOOT_SYNTHESIS_CONFIG_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_LARGE_RKEK_LOCAL_BIT_SHIFT     0x1UL
#define DX_HOST_BOOT_LARGE_RKEK_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_HASH_IN_FUSES_LOCAL_BIT_SHIFT  0x2UL
#define DX_HOST_BOOT_HASH_IN_FUSES_LOCAL_BIT_SIZE   0x1UL
#define DX_HOST_BOOT_EXT_MEM_SECURED_LOCAL_BIT_SHIFT    0x3UL
#define DX_HOST_BOOT_EXT_MEM_SECURED_LOCAL_BIT_SIZE     0x1UL
#define DX_HOST_BOOT_RKEK_ECC_EXISTS_LOCAL_N_BIT_SHIFT  0x5UL
#define DX_HOST_BOOT_RKEK_ECC_EXISTS_LOCAL_N_BIT_SIZE   0x1UL
#define DX_HOST_BOOT_SRAM_SIZE_LOCAL_BIT_SHIFT  0x6UL
#define DX_HOST_BOOT_SRAM_SIZE_LOCAL_BIT_SIZE   0x3UL
#define DX_HOST_BOOT_DSCRPTR_EXISTS_LOCAL_BIT_SHIFT     0x9UL
#define DX_HOST_BOOT_DSCRPTR_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_PAU_EXISTS_LOCAL_BIT_SHIFT     0xAUL
#define DX_HOST_BOOT_PAU_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_RNG_EXISTS_LOCAL_BIT_SHIFT     0xBUL
#define DX_HOST_BOOT_RNG_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_PKA_EXISTS_LOCAL_BIT_SHIFT     0xCUL
#define DX_HOST_BOOT_PKA_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_RC4_EXISTS_LOCAL_BIT_SHIFT     0xDUL
#define DX_HOST_BOOT_RC4_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_SHA_512_PRSNT_LOCAL_BIT_SHIFT  0xEUL
#define DX_HOST_BOOT_SHA_512_PRSNT_LOCAL_BIT_SIZE   0x1UL
#define DX_HOST_BOOT_SHA_256_PRSNT_LOCAL_BIT_SHIFT  0xFUL
#define DX_HOST_BOOT_SHA_256_PRSNT_LOCAL_BIT_SIZE   0x1UL
#define DX_HOST_BOOT_MD5_PRSNT_LOCAL_BIT_SHIFT  0x10UL
#define DX_HOST_BOOT_MD5_PRSNT_LOCAL_BIT_SIZE   0x1UL
#define DX_HOST_BOOT_HASH_EXISTS_LOCAL_BIT_SHIFT    0x11UL
#define DX_HOST_BOOT_HASH_EXISTS_LOCAL_BIT_SIZE     0x1UL
#define DX_HOST_BOOT_C2_EXISTS_LOCAL_BIT_SHIFT  0x12UL
#define DX_HOST_BOOT_C2_EXISTS_LOCAL_BIT_SIZE   0x1UL
#define DX_HOST_BOOT_DES_EXISTS_LOCAL_BIT_SHIFT     0x13UL
#define DX_HOST_BOOT_DES_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_AES_XCBC_MAC_EXISTS_LOCAL_BIT_SHIFT    0x14UL
#define DX_HOST_BOOT_AES_XCBC_MAC_EXISTS_LOCAL_BIT_SIZE     0x1UL
#define DX_HOST_BOOT_AES_CMAC_EXISTS_LOCAL_BIT_SHIFT    0x15UL
#define DX_HOST_BOOT_AES_CMAC_EXISTS_LOCAL_BIT_SIZE     0x1UL
#define DX_HOST_BOOT_AES_CCM_EXISTS_LOCAL_BIT_SHIFT     0x16UL
#define DX_HOST_BOOT_AES_CCM_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_AES_XEX_HW_T_CALC_LOCAL_BIT_SHIFT  0x17UL
#define DX_HOST_BOOT_AES_XEX_HW_T_CALC_LOCAL_BIT_SIZE   0x1UL
#define DX_HOST_BOOT_AES_XEX_EXISTS_LOCAL_BIT_SHIFT     0x18UL
#define DX_HOST_BOOT_AES_XEX_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_CTR_EXISTS_LOCAL_BIT_SHIFT     0x19UL
#define DX_HOST_BOOT_CTR_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_BOOT_AES_DIN_BYTE_RESOLUTION_LOCAL_BIT_SHIFT    0x1AUL
#define DX_HOST_BOOT_AES_DIN_BYTE_RESOLUTION_LOCAL_BIT_SIZE     0x1UL
#define DX_HOST_BOOT_TUNNELING_ENB_LOCAL_BIT_SHIFT  0x1BUL
#define DX_HOST_BOOT_TUNNELING_ENB_LOCAL_BIT_SIZE   0x1UL
#define DX_HOST_BOOT_SUPPORT_256_192_KEY_LOCAL_BIT_SHIFT    0x1CUL
#define DX_HOST_BOOT_SUPPORT_256_192_KEY_LOCAL_BIT_SIZE     0x1UL
#define DX_HOST_BOOT_ONLY_ENCRYPT_LOCAL_BIT_SHIFT   0x1DUL
#define DX_HOST_BOOT_ONLY_ENCRYPT_LOCAL_BIT_SIZE    0x1UL
#define DX_HOST_BOOT_AES_EXISTS_LOCAL_BIT_SHIFT     0x1EUL
#define DX_HOST_BOOT_AES_EXISTS_LOCAL_BIT_SIZE  0x1UL
#define DX_HOST_CRYPTOKEY_SEL_REG_OFFSET    0x0A38UL
#define DX_HOST_CRYPTOKEY_SEL_VALUE_BIT_SHIFT   0x0UL
#define DX_HOST_CRYPTOKEY_SEL_VALUE_BIT_SIZE    0x3UL
#define DX_HOST_CORE_CLK_GATING_ENABLE_REG_OFFSET   0x0A78UL
#define DX_HOST_CORE_CLK_GATING_ENABLE_VALUE_BIT_SHIFT  0x0UL
#define DX_HOST_CORE_CLK_GATING_ENABLE_VALUE_BIT_SIZE   0x1UL
#define DX_HOST_CC_IS_IDLE_REG_OFFSET   0x0A7CUL
#define DX_HOST_CC_IS_IDLE_HOST_CC_IS_IDLE_BIT_SHIFT    0x0UL
#define DX_HOST_CC_IS_IDLE_HOST_CC_IS_IDLE_BIT_SIZE     0x1UL
#define DX_HOST_CC_IS_IDLE_HOST_CC_IS_IDLE_EVENT_BIT_SHIFT  0x1UL
#define DX_HOST_CC_IS_IDLE_HOST_CC_IS_IDLE_EVENT_BIT_SIZE   0x1UL
#define DX_HOST_CC_IS_IDLE_SYM_IS_BUSY_BIT_SHIFT    0x2UL
#define DX_HOST_CC_IS_IDLE_SYM_IS_BUSY_BIT_SIZE     0x1UL
#define DX_HOST_CC_IS_IDLE_AHB_IS_IDLE_BIT_SHIFT    0x3UL
#define DX_HOST_CC_IS_IDLE_AHB_IS_IDLE_BIT_SIZE     0x1UL
#define DX_HOST_CC_IS_IDLE_NVM_ARB_IS_IDLE_BIT_SHIFT    0x4UL
#define DX_HOST_CC_IS_IDLE_NVM_ARB_IS_IDLE_BIT_SIZE     0x1UL
#define DX_HOST_CC_IS_IDLE_NVM_IS_IDLE_BIT_SHIFT    0x5UL
#define DX_HOST_CC_IS_IDLE_NVM_IS_IDLE_BIT_SIZE     0x1UL
#define DX_HOST_CC_IS_IDLE_FATAL_WR_BIT_SHIFT   0x6UL
#define DX_HOST_CC_IS_IDLE_FATAL_WR_BIT_SIZE    0x1UL
#define DX_HOST_CC_IS_IDLE_RNG_IS_IDLE_BIT_SHIFT    0x7UL
#define DX_HOST_CC_IS_IDLE_RNG_IS_IDLE_BIT_SIZE     0x1UL
#define DX_HOST_CC_IS_IDLE_PKA_IS_IDLE_BIT_SHIFT    0x8UL
#define DX_HOST_CC_IS_IDLE_PKA_IS_IDLE_BIT_SIZE     0x1UL
#define DX_HOST_CC_IS_IDLE_CRYPTO_IS_IDLE_BIT_SHIFT     0x9UL
#define DX_HOST_CC_IS_IDLE_CRYPTO_IS_IDLE_BIT_SIZE  0x1UL
#define DX_HOST_POWERDOWN_REG_OFFSET    0x0A80UL
#define DX_HOST_POWERDOWN_VALUE_BIT_SHIFT   0x0UL
#define DX_HOST_POWERDOWN_VALUE_BIT_SIZE    0x1UL
#define DX_HOST_REMOVE_GHASH_ENGINE_REG_OFFSET  0x0A84UL
#define DX_HOST_REMOVE_GHASH_ENGINE_VALUE_BIT_SHIFT     0x0UL
#define DX_HOST_REMOVE_GHASH_ENGINE_VALUE_BIT_SIZE  0x1UL
#define DX_HOST_REMOVE_CHACHA_ENGINE_REG_OFFSET     0x0A88UL
#define DX_HOST_REMOVE_CHACHA_ENGINE_VALUE_BIT_SHIFT    0x0UL
#define DX_HOST_REMOVE_CHACHA_ENGINE_VALUE_BIT_SIZE     0x1UL
// --------------------------------------
// BLOCK: HOST_SRAM
// --------------------------------------
#define DX_SRAM_DATA_REG_OFFSET     0x0F00UL
#define DX_SRAM_DATA_VALUE_BIT_SHIFT    0x0UL
#define DX_SRAM_DATA_VALUE_BIT_SIZE     0x20UL
#define DX_SRAM_ADDR_REG_OFFSET     0x0F04UL
#define DX_SRAM_ADDR_VALUE_BIT_SHIFT    0x0UL
#define DX_SRAM_ADDR_VALUE_BIT_SIZE     0xFUL
#define DX_SRAM_DATA_READY_REG_OFFSET   0x0F08UL
#define DX_SRAM_DATA_READY_VALUE_BIT_SHIFT  0x0UL
#define DX_SRAM_DATA_READY_VALUE_BIT_SIZE   0x1UL

#endif //__DX_HOST_H__
