/**
 * @file CCM_vectors.h
 *
 * @copyright @parblock
 * Copyright (c) 2021 Semiconductor Components Industries, LLC (d/b/a
 * onsemi), All Rights Reserved
 *
 * This code is the property of onsemi and may not be redistributed
 * in any form without prior written permission from onsemi.
 * The terms of use and warranty for this code are covered by contractual
 * agreements between onsemi and the licensee.
 *
 * This is Reusable Code.
 * @endparblock
 */
#ifndef CCM_VECTORS_H_
#define CCM_VECTORS_H_

/* ----------------------------------------------------------------------------
 * If building with a C++ compiler, make all of the definitions in this header
 * have a C binding.
 * ------------------------------------------------------------------------- */
#ifdef __cplusplus
extern "C"
{
#endif    /* ifdef __cplusplus */

/*
 * Autogenerated Test Vectors - Do Not Edit
 */

#ifndef _CCM_STRUCTURE_DEFINED_
#define _CCM_STRUCTURE_DEFINED_

typedef struct {
    uint32_t      tagLength;
    uint32_t      keyLength;
    uint32_t      ivLength;
    uint32_t      adLength;
    uint32_t      msgLength;
    uint32_t      resLength;
    const uint8_t *key;
    const uint8_t *iv;
    const uint8_t *ad;
    const uint8_t *msg;
    const uint8_t *res;
} tCCMFields, *pCCMFields;

#endif /* _CCM_STRUCTURE_DEFINED_ */ 

/**
 * @brief Define the key for sample: (16, 4)
 */
static const uint8_t CCM_AES128_16_4_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F
    };

/**
 * @brief Define the IV for sample: (16, 4)
 */
static const uint8_t CCM_AES128_16_4_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    };

/**
 * @brief Define the AD for sample: (16, 4)
 */
static const uint8_t CCM_AES128_16_4_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07
    };

/**
 * @brief Define the MSG for sample: (16, 4)
 */
static const uint8_t CCM_AES128_16_4_MSG[] = {
        0x20, 0x21, 0x22, 0x23
    };

/**
 * @brief Define the expected result for sample: (16, 4)
 */
static const uint8_t CCM_AES128_16_4_RES[] = {
        0x71, 0x62, 0x01, 0x5B, 0x4D, 0xAC, 0x25, 0x5D
    };

/**
 * @brief Define the fields structure for (16, 4)
 */
static const tCCMFields CCM_AES128_16_4 = {
    .tagLength = 4,
    .keyLength = 16,
    .ivLength  = 7,
    .adLength  = 8,
    .msgLength = 4,
    .resLength = 8,
    .key       = CCM_AES128_16_4_KEY,
    .iv        = CCM_AES128_16_4_IV,
    .ad        = CCM_AES128_16_4_AD,
    .msg       = CCM_AES128_16_4_MSG,
    .res       = CCM_AES128_16_4_RES
};

/**
 * @brief Define the key for sample: (16, 16)
 */
static const uint8_t CCM_AES128_16_16_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F
    };

/**
 * @brief Define the IV for sample: (16, 16)
 */
static const uint8_t CCM_AES128_16_16_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17
    };

/**
 * @brief Define the AD for sample: (16, 16)
 */
static const uint8_t CCM_AES128_16_16_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
    };

/**
 * @brief Define the MSG for sample: (16, 16)
 */
static const uint8_t CCM_AES128_16_16_MSG[] = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F
    };

/**
 * @brief Define the expected result for sample: (16, 16)
 */
static const uint8_t CCM_AES128_16_16_RES[] = {
        0xD2, 0xA1, 0xF0, 0xE0, 0x51, 0xEA, 0x5F, 0x62, 
        0x08, 0x1A, 0x77, 0x92, 0x07, 0x3D, 0x59, 0x3D, 
        0x1F, 0xC6, 0x4F, 0xBF, 0xAC, 0xCD
    };

/**
 * @brief Define the fields structure for (16, 16)
 */
static const tCCMFields CCM_AES128_16_16 = {
    .tagLength = 6,
    .keyLength = 16,
    .ivLength  = 8,
    .adLength  = 16,
    .msgLength = 16,
    .resLength = 22,
    .key       = CCM_AES128_16_16_KEY,
    .iv        = CCM_AES128_16_16_IV,
    .ad        = CCM_AES128_16_16_AD,
    .msg       = CCM_AES128_16_16_MSG,
    .res       = CCM_AES128_16_16_RES
};

/**
 * @brief Define the key for sample: (16, 24)
 */
static const uint8_t CCM_AES128_16_24_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F
    };

/**
 * @brief Define the IV for sample: (16, 24)
 */
static const uint8_t CCM_AES128_16_24_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
        0x18, 0x19, 0x1A, 0x1B
    };

/**
 * @brief Define the AD for sample: (16, 24)
 */
static const uint8_t CCM_AES128_16_24_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
        0x10, 0x11, 0x12, 0x13
    };

/**
 * @brief Define the MSG for sample: (16, 24)
 */
static const uint8_t CCM_AES128_16_24_MSG[] = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37
    };

/**
 * @brief Define the expected result for sample: (16, 24)
 */
static const uint8_t CCM_AES128_16_24_RES[] = {
        0xE3, 0xB2, 0x01, 0xA9, 0xF5, 0xB7, 0x1A, 0x7A, 
        0x9B, 0x1C, 0xEA, 0xEC, 0xCD, 0x97, 0xE7, 0x0B, 
        0x61, 0x76, 0xAA, 0xD9, 0xA4, 0x42, 0x8A, 0xA5, 
        0x48, 0x43, 0x92, 0xFB, 0xC1, 0xB0, 0x99, 0x51
    };

/**
 * @brief Define the fields structure for (16, 24)
 */
static const tCCMFields CCM_AES128_16_24 = {
    .tagLength = 8,
    .keyLength = 16,
    .ivLength  = 12,
    .adLength  = 20,
    .msgLength = 24,
    .resLength = 32,
    .key       = CCM_AES128_16_24_KEY,
    .iv        = CCM_AES128_16_24_IV,
    .ad        = CCM_AES128_16_24_AD,
    .msg       = CCM_AES128_16_24_MSG,
    .res       = CCM_AES128_16_24_RES
};

/**
 * @brief Define the key for sample: (16, 64)
 */
static const uint8_t CCM_AES128_16_64_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F
    };

/**
 * @brief Define the IV for sample: (16, 64)
 */
static const uint8_t CCM_AES128_16_64_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    };

/**
 * @brief Define the AD for sample: (16, 64)
 */
static const uint8_t CCM_AES128_16_64_AD[] = {
        /* Empty Array */
    };

/**
 * @brief Define the MSG for sample: (16, 64)
 */
static const uint8_t CCM_AES128_16_64_MSG[] = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
        0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F
    };

/**
 * @brief Define the expected result for sample: (16, 64)
 */
static const uint8_t CCM_AES128_16_64_RES[] = {
        0x71, 0x62, 0x01, 0x5B, 0xC0, 0x51, 0x95, 0x1E, 
        0x59, 0x18, 0xAE, 0xAF, 0x3C, 0x11, 0xF3, 0xD4, 
        0xAC, 0x36, 0x3F, 0x8D, 0x5B, 0x6A, 0xF3, 0xD3, 
        0x69, 0x60, 0x3B, 0x04, 0xF2, 0x4C, 0xAE, 0x29, 
        0x96, 0x4E, 0x2F, 0x2B, 0xF9, 0xD3, 0x11, 0x43, 
        0xF7, 0x25, 0x27, 0xCE, 0x2D, 0xB4, 0x02, 0xEA, 
        0xB7, 0x66, 0x0E, 0x4A, 0x10, 0xB0, 0x8E, 0x82, 
        0x26, 0x65, 0x17, 0xCD, 0xF6, 0x02, 0x67, 0xF9, 
        0xC6, 0x6B, 0x65, 0x5C
    };

/**
 * @brief Define the fields structure for (16, 64)
 */
static const tCCMFields CCM_AES128_16_64 = {
    .tagLength = 4,
    .keyLength = 16,
    .ivLength  = 7,
    .adLength  = 0,
    .msgLength = 64,
    .resLength = 68,
    .key       = CCM_AES128_16_64_KEY,
    .iv        = CCM_AES128_16_64_IV,
    .ad        = CCM_AES128_16_64_AD,
    .msg       = CCM_AES128_16_64_MSG,
    .res       = CCM_AES128_16_64_RES
};

/**
 * @brief Define the key for sample: (16, 0)
 */
static const uint8_t CCM_AES128_16_0_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F
    };

/**
 * @brief Define the IV for sample: (16, 0)
 */
static const uint8_t CCM_AES128_16_0_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    };

/**
 * @brief Define the AD for sample: (16, 0)
 */
static const uint8_t CCM_AES128_16_0_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
        0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
        0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F
    };

/**
 * @brief Define the MSG for sample: (16, 0)
 */
static const uint8_t CCM_AES128_16_0_MSG[] = {
        /* Empty Array */
    };

/**
 * @brief Define the expected result for sample: (16, 0)
 */
static const uint8_t CCM_AES128_16_0_RES[] = {
        0xE8, 0x40, 0x23, 0xF8
    };

/**
 * @brief Define the fields structure for (16, 0)
 */
static const tCCMFields CCM_AES128_16_0 = {
    .tagLength = 4,
    .keyLength = 16,
    .ivLength  = 7,
    .adLength  = 64,
    .msgLength = 0,
    .resLength = 4,
    .key       = CCM_AES128_16_0_KEY,
    .iv        = CCM_AES128_16_0_IV,
    .ad        = CCM_AES128_16_0_AD,
    .msg       = CCM_AES128_16_0_MSG,
    .res       = CCM_AES128_16_0_RES
};

/**
 * @brief Define the key for sample: (24, 4)
 */
static const uint8_t CCM_AES192_24_4_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57
    };

/**
 * @brief Define the IV for sample: (24, 4)
 */
static const uint8_t CCM_AES192_24_4_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    };

/**
 * @brief Define the AD for sample: (24, 4)
 */
static const uint8_t CCM_AES192_24_4_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07
    };

/**
 * @brief Define the MSG for sample: (24, 4)
 */
static const uint8_t CCM_AES192_24_4_MSG[] = {
        0x20, 0x21, 0x22, 0x23
    };

/**
 * @brief Define the expected result for sample: (24, 4)
 */
static const uint8_t CCM_AES192_24_4_RES[] = {
        0x18, 0xEE, 0x17, 0x30, 0xC8, 0xC3, 0x26, 0xD5
    };

/**
 * @brief Define the fields structure for (24, 4)
 */
static const tCCMFields CCM_AES192_24_4 = {
    .tagLength = 4,
    .keyLength = 24,
    .ivLength  = 7,
    .adLength  = 8,
    .msgLength = 4,
    .resLength = 8,
    .key       = CCM_AES192_24_4_KEY,
    .iv        = CCM_AES192_24_4_IV,
    .ad        = CCM_AES192_24_4_AD,
    .msg       = CCM_AES192_24_4_MSG,
    .res       = CCM_AES192_24_4_RES
};

/**
 * @brief Define the key for sample: (24, 16)
 */
static const uint8_t CCM_AES192_24_16_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57
    };

/**
 * @brief Define the IV for sample: (24, 16)
 */
static const uint8_t CCM_AES192_24_16_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17
    };

/**
 * @brief Define the AD for sample: (24, 16)
 */
static const uint8_t CCM_AES192_24_16_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
    };

/**
 * @brief Define the MSG for sample: (24, 16)
 */
static const uint8_t CCM_AES192_24_16_MSG[] = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F
    };

/**
 * @brief Define the expected result for sample: (24, 16)
 */
static const uint8_t CCM_AES192_24_16_RES[] = {
        0x22, 0x32, 0xB6, 0xE0, 0x92, 0x41, 0x48, 0xAE, 
        0x72, 0x39, 0xBC, 0xBD, 0x1A, 0x0F, 0x7E, 0xCB, 
        0x56, 0xE9, 0xCC, 0x28, 0xAA, 0x67
    };

/**
 * @brief Define the fields structure for (24, 16)
 */
static const tCCMFields CCM_AES192_24_16 = {
    .tagLength = 6,
    .keyLength = 24,
    .ivLength  = 8,
    .adLength  = 16,
    .msgLength = 16,
    .resLength = 22,
    .key       = CCM_AES192_24_16_KEY,
    .iv        = CCM_AES192_24_16_IV,
    .ad        = CCM_AES192_24_16_AD,
    .msg       = CCM_AES192_24_16_MSG,
    .res       = CCM_AES192_24_16_RES
};

/**
 * @brief Define the key for sample: (24, 24)
 */
static const uint8_t CCM_AES192_24_24_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57
    };

/**
 * @brief Define the IV for sample: (24, 24)
 */
static const uint8_t CCM_AES192_24_24_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
        0x18, 0x19, 0x1A, 0x1B
    };

/**
 * @brief Define the AD for sample: (24, 24)
 */
static const uint8_t CCM_AES192_24_24_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
        0x10, 0x11, 0x12, 0x13
    };

/**
 * @brief Define the MSG for sample: (24, 24)
 */
static const uint8_t CCM_AES192_24_24_MSG[] = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37
    };

/**
 * @brief Define the expected result for sample: (24, 24)
 */
static const uint8_t CCM_AES192_24_24_RES[] = {
        0x80, 0x81, 0x31, 0x6F, 0xD8, 0x96, 0x24, 0xD6, 
        0x2C, 0xE7, 0x63, 0x7F, 0xB9, 0x49, 0x95, 0xB6, 
        0x63, 0x1C, 0x50, 0xD6, 0x15, 0x86, 0xDE, 0x01, 
        0x42, 0x36, 0x69, 0x52, 0x50, 0x5F, 0x99, 0x5A
    };

/**
 * @brief Define the fields structure for (24, 24)
 */
static const tCCMFields CCM_AES192_24_24 = {
    .tagLength = 8,
    .keyLength = 24,
    .ivLength  = 12,
    .adLength  = 20,
    .msgLength = 24,
    .resLength = 32,
    .key       = CCM_AES192_24_24_KEY,
    .iv        = CCM_AES192_24_24_IV,
    .ad        = CCM_AES192_24_24_AD,
    .msg       = CCM_AES192_24_24_MSG,
    .res       = CCM_AES192_24_24_RES
};

/**
 * @brief Define the key for sample: (24, 64)
 */
static const uint8_t CCM_AES192_24_64_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57
    };

/**
 * @brief Define the IV for sample: (24, 64)
 */
static const uint8_t CCM_AES192_24_64_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    };

/**
 * @brief Define the AD for sample: (24, 64)
 */
static const uint8_t CCM_AES192_24_64_AD[] = {
        /* Empty Array */
    };

/**
 * @brief Define the MSG for sample: (24, 64)
 */
static const uint8_t CCM_AES192_24_64_MSG[] = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
        0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F
    };

/**
 * @brief Define the expected result for sample: (24, 64)
 */
static const uint8_t CCM_AES192_24_64_RES[] = {
        0x18, 0xEE, 0x17, 0x30, 0xF4, 0x49, 0x0E, 0xA8, 
        0x47, 0xA8, 0xE9, 0xC5, 0x32, 0xC6, 0x9F, 0x9C, 
        0x0A, 0x53, 0x9A, 0x58, 0x5C, 0x1E, 0x7B, 0x6A, 
        0x5A, 0xF9, 0x19, 0xF4, 0x81, 0x90, 0x88, 0xA9, 
        0x6E, 0xD6, 0x32, 0x55, 0x50, 0x98, 0xD3, 0x00, 
        0x7E, 0x7D, 0x96, 0x3C, 0x7B, 0xD0, 0x13, 0xEB, 
        0x30, 0x76, 0x71, 0xD0, 0xFB, 0xC3, 0x9A, 0x0D, 
        0xF4, 0xA2, 0x6A, 0x9F, 0x4B, 0x9E, 0x4D, 0xAD, 
        0xC9, 0xCE, 0x2F, 0xBC
    };

/**
 * @brief Define the fields structure for (24, 64)
 */
static const tCCMFields CCM_AES192_24_64 = {
    .tagLength = 4,
    .keyLength = 24,
    .ivLength  = 7,
    .adLength  = 0,
    .msgLength = 64,
    .resLength = 68,
    .key       = CCM_AES192_24_64_KEY,
    .iv        = CCM_AES192_24_64_IV,
    .ad        = CCM_AES192_24_64_AD,
    .msg       = CCM_AES192_24_64_MSG,
    .res       = CCM_AES192_24_64_RES
};

/**
 * @brief Define the key for sample: (24, 0)
 */
static const uint8_t CCM_AES192_24_0_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57
    };

/**
 * @brief Define the IV for sample: (24, 0)
 */
static const uint8_t CCM_AES192_24_0_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    };

/**
 * @brief Define the AD for sample: (24, 0)
 */
static const uint8_t CCM_AES192_24_0_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
        0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
        0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F
    };

/**
 * @brief Define the MSG for sample: (24, 0)
 */
static const uint8_t CCM_AES192_24_0_MSG[] = {
        /* Empty Array */
    };

/**
 * @brief Define the expected result for sample: (24, 0)
 */
static const uint8_t CCM_AES192_24_0_RES[] = {
        0xF1, 0xFB, 0x2A, 0x57
    };

/**
 * @brief Define the fields structure for (24, 0)
 */
static const tCCMFields CCM_AES192_24_0 = {
    .tagLength = 4,
    .keyLength = 24,
    .ivLength  = 7,
    .adLength  = 64,
    .msgLength = 0,
    .resLength = 4,
    .key       = CCM_AES192_24_0_KEY,
    .iv        = CCM_AES192_24_0_IV,
    .ad        = CCM_AES192_24_0_AD,
    .msg       = CCM_AES192_24_0_MSG,
    .res       = CCM_AES192_24_0_RES
};

/**
 * @brief Define the key for sample: (32, 4)
 */
static const uint8_t CCM_AES256_32_4_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F
    };

/**
 * @brief Define the IV for sample: (32, 4)
 */
static const uint8_t CCM_AES256_32_4_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    };

/**
 * @brief Define the AD for sample: (32, 4)
 */
static const uint8_t CCM_AES256_32_4_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07
    };

/**
 * @brief Define the MSG for sample: (32, 4)
 */
static const uint8_t CCM_AES256_32_4_MSG[] = {
        0x20, 0x21, 0x22, 0x23
    };

/**
 * @brief Define the expected result for sample: (32, 4)
 */
static const uint8_t CCM_AES256_32_4_RES[] = {
        0x8A, 0xB1, 0xA8, 0x74, 0x95, 0xFC, 0x08, 0x20
    };

/**
 * @brief Define the fields structure for (32, 4)
 */
static const tCCMFields CCM_AES256_32_4 = {
    .tagLength = 4,
    .keyLength = 32,
    .ivLength  = 7,
    .adLength  = 8,
    .msgLength = 4,
    .resLength = 8,
    .key       = CCM_AES256_32_4_KEY,
    .iv        = CCM_AES256_32_4_IV,
    .ad        = CCM_AES256_32_4_AD,
    .msg       = CCM_AES256_32_4_MSG,
    .res       = CCM_AES256_32_4_RES
};

/**
 * @brief Define the key for sample: (32, 16)
 */
static const uint8_t CCM_AES256_32_16_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F
    };

/**
 * @brief Define the IV for sample: (32, 16)
 */
static const uint8_t CCM_AES256_32_16_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17
    };

/**
 * @brief Define the AD for sample: (32, 16)
 */
static const uint8_t CCM_AES256_32_16_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
    };

/**
 * @brief Define the MSG for sample: (32, 16)
 */
static const uint8_t CCM_AES256_32_16_MSG[] = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F
    };

/**
 * @brief Define the expected result for sample: (32, 16)
 */
static const uint8_t CCM_AES256_32_16_RES[] = {
        0xAF, 0x17, 0x85, 0xFC, 0x0F, 0x5E, 0xA7, 0xD0, 
        0xCF, 0xBA, 0x83, 0x72, 0x46, 0x48, 0x44, 0x97, 
        0x94, 0xB8, 0x26, 0xC8, 0x84, 0x9E
    };

/**
 * @brief Define the fields structure for (32, 16)
 */
static const tCCMFields CCM_AES256_32_16 = {
    .tagLength = 6,
    .keyLength = 32,
    .ivLength  = 8,
    .adLength  = 16,
    .msgLength = 16,
    .resLength = 22,
    .key       = CCM_AES256_32_16_KEY,
    .iv        = CCM_AES256_32_16_IV,
    .ad        = CCM_AES256_32_16_AD,
    .msg       = CCM_AES256_32_16_MSG,
    .res       = CCM_AES256_32_16_RES
};

/**
 * @brief Define the key for sample: (32, 24)
 */
static const uint8_t CCM_AES256_32_24_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F
    };

/**
 * @brief Define the IV for sample: (32, 24)
 */
static const uint8_t CCM_AES256_32_24_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
        0x18, 0x19, 0x1A, 0x1B
    };

/**
 * @brief Define the AD for sample: (32, 24)
 */
static const uint8_t CCM_AES256_32_24_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
        0x10, 0x11, 0x12, 0x13
    };

/**
 * @brief Define the MSG for sample: (32, 24)
 */
static const uint8_t CCM_AES256_32_24_MSG[] = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37
    };

/**
 * @brief Define the expected result for sample: (32, 24)
 */
static const uint8_t CCM_AES256_32_24_RES[] = {
        0x04, 0xF8, 0x83, 0xAE, 0xB3, 0xBD, 0x07, 0x30, 
        0xEA, 0xF5, 0x0B, 0xB6, 0xDE, 0x4F, 0xA2, 0x21, 
        0x20, 0x34, 0xE4, 0xE4, 0x1B, 0x0E, 0x75, 0xE5, 
        0x2B, 0x48, 0xC8, 0x76, 0x6F, 0x7E, 0x76, 0x49
    };

/**
 * @brief Define the fields structure for (32, 24)
 */
static const tCCMFields CCM_AES256_32_24 = {
    .tagLength = 8,
    .keyLength = 32,
    .ivLength  = 12,
    .adLength  = 20,
    .msgLength = 24,
    .resLength = 32,
    .key       = CCM_AES256_32_24_KEY,
    .iv        = CCM_AES256_32_24_IV,
    .ad        = CCM_AES256_32_24_AD,
    .msg       = CCM_AES256_32_24_MSG,
    .res       = CCM_AES256_32_24_RES
};

/**
 * @brief Define the key for sample: (32, 64)
 */
static const uint8_t CCM_AES256_32_64_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F
    };

/**
 * @brief Define the IV for sample: (32, 64)
 */
static const uint8_t CCM_AES256_32_64_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    };

/**
 * @brief Define the AD for sample: (32, 64)
 */
static const uint8_t CCM_AES256_32_64_AD[] = {
        /* Empty Array */
    };

/**
 * @brief Define the MSG for sample: (32, 64)
 */
static const uint8_t CCM_AES256_32_64_MSG[] = {
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
        0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F
    };

/**
 * @brief Define the expected result for sample: (32, 64)
 */
static const uint8_t CCM_AES256_32_64_RES[] = {
        0x8A, 0xB1, 0xA8, 0x74, 0xF6, 0x85, 0x3F, 0x24, 
        0x43, 0xA5, 0x95, 0x00, 0xF7, 0x8D, 0x17, 0x27, 
        0x2D, 0x6D, 0x39, 0xDF, 0xA6, 0xD0, 0xE6, 0x51, 
        0x07, 0xB1, 0x07, 0x00, 0xC2, 0xCE, 0x9E, 0xE8, 
        0x66, 0x3D, 0x3E, 0x2A, 0x01, 0xC2, 0xE1, 0x2C, 
        0x32, 0xE9, 0x37, 0x74, 0x42, 0x23, 0x19, 0x20, 
        0xBE, 0x53, 0x27, 0x8F, 0x4F, 0x60, 0xA9, 0x72, 
        0xB7, 0x09, 0xBB, 0x16, 0x93, 0x29, 0x36, 0xBA, 
        0x3F, 0xBD, 0x0F, 0xAE
    };

/**
 * @brief Define the fields structure for (32, 64)
 */
static const tCCMFields CCM_AES256_32_64 = {
    .tagLength = 4,
    .keyLength = 32,
    .ivLength  = 7,
    .adLength  = 0,
    .msgLength = 64,
    .resLength = 68,
    .key       = CCM_AES256_32_64_KEY,
    .iv        = CCM_AES256_32_64_IV,
    .ad        = CCM_AES256_32_64_AD,
    .msg       = CCM_AES256_32_64_MSG,
    .res       = CCM_AES256_32_64_RES
};

/**
 * @brief Define the key for sample: (32, 0)
 */
static const uint8_t CCM_AES256_32_0_KEY[] = {
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F
    };

/**
 * @brief Define the IV for sample: (32, 0)
 */
static const uint8_t CCM_AES256_32_0_IV[] = {
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
    };

/**
 * @brief Define the AD for sample: (32, 0)
 */
static const uint8_t CCM_AES256_32_0_AD[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
        0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
        0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F
    };

/**
 * @brief Define the MSG for sample: (32, 0)
 */
static const uint8_t CCM_AES256_32_0_MSG[] = {
        /* Empty Array */
    };

/**
 * @brief Define the expected result for sample: (32, 0)
 */
static const uint8_t CCM_AES256_32_0_RES[] = {
        0xA6, 0xCF, 0x82, 0x30
    };

/**
 * @brief Define the fields structure for (32, 0)
 */
static const tCCMFields CCM_AES256_32_0 = {
    .tagLength = 4,
    .keyLength = 32,
    .ivLength  = 7,
    .adLength  = 64,
    .msgLength = 0,
    .resLength = 4,
    .key       = CCM_AES256_32_0_KEY,
    .iv        = CCM_AES256_32_0_IV,
    .ad        = CCM_AES256_32_0_AD,
    .msg       = CCM_AES256_32_0_MSG,
    .res       = CCM_AES256_32_0_RES
};


static const pCCMFields CCM_TABLES[] = {
    (const pCCMFields) &CCM_AES128_16_4,
    (const pCCMFields) &CCM_AES128_16_16,
    (const pCCMFields) &CCM_AES128_16_24,
    (const pCCMFields) &CCM_AES128_16_64,
    (const pCCMFields) &CCM_AES128_16_0,
    (const pCCMFields) &CCM_AES192_24_4,
    (const pCCMFields) &CCM_AES192_24_16,
    (const pCCMFields) &CCM_AES192_24_24,
    (const pCCMFields) &CCM_AES192_24_64,
    (const pCCMFields) &CCM_AES192_24_0,
    (const pCCMFields) &CCM_AES256_32_4,
    (const pCCMFields) &CCM_AES256_32_16,
    (const pCCMFields) &CCM_AES256_32_24,
    (const pCCMFields) &CCM_AES256_32_64,
    (const pCCMFields) &CCM_AES256_32_0,
    (const pCCMFields) NULL
};

/* ----------------------------------------------------------------------------
 * Close the 'extern "C"' block
 * ------------------------------------------------------------------------- */
#ifdef __cplusplus
}
#endif    /* ifdef __cplusplus */

#endif /* CCM_VECTORS_H_ */
