/**
 * @file HMAC_SHA224_vectors.h
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
#ifndef HMAC_SHA224_VECTORS_H_
#define HMAC_SHA224_VECTORS_H_

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


#ifndef _HMAC_STRUCTURE_DEFINED_
#define _HMAC_STRUCTURE_DEFINED_

typedef struct {
    uint32_t      keyLength;
    uint32_t      txtLength;
    uint32_t      macLength;
    const uint8_t *txt;
    const uint8_t *key;
    const uint8_t *mac;
} tHMACFields, *pHMACFields;

#endif /* _HMAC_STRUCTURE_DEFINED_ */ 

/**
 * @brief Define the text for sample: (64, 28)
 */
static const uint8_t HMAC_SHA224_64_28_TEXT[] __attribute__((aligned(16))) = {
        0x53, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x20, 0x6D, 
        0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x20, 0x66, 
        0x6F, 0x72, 0x20, 0x6B, 0x65, 0x79, 0x6C, 0x65, 
        0x6E, 0x3D, 0x62, 0x6C, 0x6F, 0x63, 0x6B, 0x6C, 
        0x65, 0x6E
    };

/**
 * @brief Define the key for sample: (64, 28)
 */
static const uint8_t HMAC_SHA224_64_28_KEY[] __attribute__((aligned(16))) = {
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
 * @brief Define the expected mac for sample: (64, 28)
 */
static const uint8_t HMAC_SHA224_64_28_MAC[] __attribute__((aligned(16))) = {
        0xC7, 0x40, 0x5E, 0x3A, 0xE0, 0x58, 0xE8, 0xCD, 
        0x30, 0xB0, 0x8B, 0x41, 0x40, 0x24, 0x85, 0x81, 
        0xED, 0x17, 0x4C, 0xB3, 0x4E, 0x12, 0x24, 0xBC, 
        0xC1, 0xEF, 0xC8, 0x1B
    };

/**
 * @brief Define the fields structure for (64, 28)
 */
static const tHMACFields HMAC_SHA224_64_28 = {
    .keyLength = 64,
    .txtLength = 34,
    .macLength = 28,
    .txt       = HMAC_SHA224_64_28_TEXT,
    .key       = HMAC_SHA224_64_28_KEY,
    .mac       = HMAC_SHA224_64_28_MAC
};

/**
 * @brief Define the text for sample: (28, 28)
 */
static const uint8_t HMAC_SHA224_28_28_TEXT[] __attribute__((aligned(16))) = {
        0x53, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x20, 0x6D, 
        0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x20, 0x66, 
        0x6F, 0x72, 0x20, 0x6B, 0x65, 0x79, 0x6C, 0x65, 
        0x6E, 0x3C, 0x62, 0x6C, 0x6F, 0x63, 0x6B, 0x6C, 
        0x65, 0x6E
    };

/**
 * @brief Define the key for sample: (28, 28)
 */
static const uint8_t HMAC_SHA224_28_28_KEY[] __attribute__((aligned(16))) = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
        0x18, 0x19, 0x1A, 0x1B
    };

/**
 * @brief Define the expected mac for sample: (28, 28)
 */
static const uint8_t HMAC_SHA224_28_28_MAC[] __attribute__((aligned(16))) = {
        0xE3, 0xD2, 0x49, 0xA8, 0xCF, 0xB6, 0x7E, 0xF8, 
        0xB7, 0xA1, 0x69, 0xE9, 0xA0, 0xA5, 0x99, 0x71, 
        0x4A, 0x2C, 0xEC, 0xBA, 0x65, 0x99, 0x9A, 0x51, 
        0xBE, 0xB8, 0xFB, 0xBE
    };

/**
 * @brief Define the fields structure for (28, 28)
 */
static const tHMACFields HMAC_SHA224_28_28 = {
    .keyLength = 28,
    .txtLength = 34,
    .macLength = 28,
    .txt       = HMAC_SHA224_28_28_TEXT,
    .key       = HMAC_SHA224_28_28_KEY,
    .mac       = HMAC_SHA224_28_28_MAC
};

/**
 * @brief Define the text for sample: (100, 28)
 */
static const uint8_t HMAC_SHA224_100_28_TEXT[] __attribute__((aligned(16))) = {
        0x53, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x20, 0x6D, 
        0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x20, 0x66, 
        0x6F, 0x72, 0x20, 0x6B, 0x65, 0x79, 0x6C, 0x65, 
        0x6E, 0x3D, 0x62, 0x6C, 0x6F, 0x63, 0x6B, 0x6C, 
        0x65, 0x6E
    };

/**
 * @brief Define the key for sample: (100, 28)
 */
static const uint8_t HMAC_SHA224_100_28_KEY[] __attribute__((aligned(16))) = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
        0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
        0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 
        0x60, 0x61, 0x62, 0x63
    };

/**
 * @brief Define the expected mac for sample: (100, 28)
 */
static const uint8_t HMAC_SHA224_100_28_MAC[] __attribute__((aligned(16))) = {
        0x91, 0xC5, 0x25, 0x09, 0xE5, 0xAF, 0x85, 0x31, 
        0x60, 0x1A, 0xE6, 0x23, 0x00, 0x99, 0xD9, 0x0B, 
        0xEF, 0x88, 0xAA, 0xEF, 0xB9, 0x61, 0xF4, 0x08, 
        0x0A, 0xBC, 0x01, 0x4D
    };

/**
 * @brief Define the fields structure for (100, 28)
 */
static const tHMACFields HMAC_SHA224_100_28 = {
    .keyLength = 100,
    .txtLength = 34,
    .macLength = 28,
    .txt       = HMAC_SHA224_100_28_TEXT,
    .key       = HMAC_SHA224_100_28_KEY,
    .mac       = HMAC_SHA224_100_28_MAC
};

/**
 * @brief Define the text for sample: (49, 28)
 */
static const uint8_t HMAC_SHA224_49_28_TEXT[] __attribute__((aligned(16))) = {
        0x53, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x20, 0x6D, 
        0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x20, 0x66, 
        0x6F, 0x72, 0x20, 0x6B, 0x65, 0x79, 0x6C, 0x65, 
        0x6E, 0x3C, 0x62, 0x6C, 0x6F, 0x63, 0x6B, 0x6C, 
        0x65, 0x6E, 0x2C, 0x20, 0x77, 0x69, 0x74, 0x68, 
        0x20, 0x74, 0x72, 0x75, 0x6E, 0x63, 0x61, 0x74, 
        0x65, 0x64, 0x20, 0x74, 0x61, 0x67, 0x00
    };

/**
 * @brief Define the key for sample: (49, 28)
 */
static const uint8_t HMAC_SHA224_49_28_KEY[] __attribute__((aligned(16))) = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
        0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
        0x30
    };

/**
 * @brief Define the expected mac for sample: (49, 28)
 */
static const uint8_t HMAC_SHA224_49_28_MAC[] __attribute__((aligned(16))) = {
        0xD5, 0x22, 0xF1, 0xDF, 0x59, 0x6C, 0xA4, 0xB4, 
        0xB1, 0xC2, 0x3D, 0x27, 0xBD, 0xE0, 0x67, 0xD6,
        0x15, 0x3b, 0xa9, 0x72, 0x5f, 0xd5, 0xcd, 0xe0,
        0xaf, 0x4a, 0x2a, 0x42
    };

/**
 * @brief Define the fields structure for (49, 28)
 */
static const tHMACFields HMAC_SHA224_49_28 = {
    .keyLength = 49,
    .txtLength = 55,
    .macLength = 28,
    .txt       = HMAC_SHA224_49_28_TEXT,
    .key       = HMAC_SHA224_49_28_KEY,
    .mac       = HMAC_SHA224_49_28_MAC
};



static const pHMACFields HMAC_SHA224_TABLES[] = {
    (const pHMACFields) &HMAC_SHA224_64_28,
    (const pHMACFields) &HMAC_SHA224_28_28,
    (const pHMACFields) &HMAC_SHA224_100_28,
    (const pHMACFields) &HMAC_SHA224_49_28
};

/* ----------------------------------------------------------------------------
 * Close the 'extern "C"' block
 * ------------------------------------------------------------------------- */
#ifdef __cplusplus
}
#endif    /* ifdef __cplusplus */

#endif /* HMAC_SHA224_VECTORS_H_ */
