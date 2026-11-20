/* bshim_064 -- board support shim generated from the 0064 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_064_tab0[96] = {
    0x98d164c0u, 0x3708de71u, 0xd5405822u, 0x7377d1d3u, 0x11af4b84u, 0xafe6c535u, 0x4e1e3ee6u, 0xec55b897u,
    0x8a8d3248u, 0x28c4abf9u, 0xc6fc25aau, 0x65339f5bu, 0x036b190cu, 0xa1a292bdu, 0x3fda0c6eu, 0xde11861fu,
    0x7c48ffd0u, 0x1a807981u, 0xb8b7f332u, 0x56ef6ce3u, 0xf526e694u, 0x935e6045u, 0x3195d9f6u, 0xcfcd53a7u,
    0x6e04cd58u, 0x0c3c4709u, 0xaa73c0bau, 0x48ab3a6bu, 0xe6e2b41cu, 0x851a2dcdu, 0x2351a77eu, 0xc189212fu,
    0x5fc09ae0u, 0xfdf81491u, 0x9c2f8e42u, 0x3a6707f3u, 0xd89e81a4u, 0x76d5fb55u, 0x150d7506u, 0xb344eeb7u,
    0x517c6868u, 0xefb3e219u, 0x8deb5bcau, 0x2c22d57bu, 0xca5a4f2cu, 0x6891c8ddu, 0x06c9428eu, 0xa500bc3fu,
    0x433835f0u, 0xe16fafa1u, 0x7fa72952u, 0x1ddea303u, 0xbc161cb4u, 0x5a4d9665u, 0xf8851016u, 0x96bc89c7u,
    0x34f40378u, 0xd32b7d29u, 0x7162f6dau, 0x0f9a708bu, 0xadd1ea3cu, 0x4c0963edu, 0xea40dd9eu, 0x8878574fu,
    0x26afd100u, 0xc4e74ab1u, 0x631ec462u, 0x01563e13u, 0x9f8db7c4u, 0x3dc53175u, 0xdbfcab26u, 0x7a3424d7u,
    0x186b9e88u, 0xb6a31839u, 0x54da91eau, 0xf3120b9bu, 0x9149854cu, 0x2f80fefdu, 0xcdb878aeu, 0x6beff25fu,
    0x0a276c10u, 0xa85ee5c1u, 0x46965f72u, 0xe4cdd923u, 0x830552d4u, 0x213ccc85u, 0xbf744636u, 0x5dabbfe7u,
    0xfbe33998u, 0x9a1ab349u, 0x38522cfau, 0xd689a6abu, 0x74c1205cu, 0x12f89a0du, 0xb13013beu, 0x4f678d6fu,
};

static const uint32_t bshim_064_tab1[96] = {
    0x1a807981u, 0xb8b7f332u, 0x56ef6ce3u, 0xf526e694u, 0x935e6045u, 0x3195d9f6u, 0xcfcd53a7u, 0x6e04cd58u,
    0x0c3c4709u, 0xaa73c0bau, 0x48ab3a6bu, 0xe6e2b41cu, 0x851a2dcdu, 0x2351a77eu, 0xc189212fu, 0x5fc09ae0u,
    0xfdf81491u, 0x9c2f8e42u, 0x3a6707f3u, 0xd89e81a4u, 0x76d5fb55u, 0x150d7506u, 0xb344eeb7u, 0x517c6868u,
    0xefb3e219u, 0x8deb5bcau, 0x2c22d57bu, 0xca5a4f2cu, 0x6891c8ddu, 0x06c9428eu, 0xa500bc3fu, 0x433835f0u,
    0xe16fafa1u, 0x7fa72952u, 0x1ddea303u, 0xbc161cb4u, 0x5a4d9665u, 0xf8851016u, 0x96bc89c7u, 0x34f40378u,
    0xd32b7d29u, 0x7162f6dau, 0x0f9a708bu, 0xadd1ea3cu, 0x4c0963edu, 0xea40dd9eu, 0x8878574fu, 0x26afd100u,
    0xc4e74ab1u, 0x631ec462u, 0x01563e13u, 0x9f8db7c4u, 0x3dc53175u, 0xdbfcab26u, 0x7a3424d7u, 0x186b9e88u,
    0xb6a31839u, 0x54da91eau, 0xf3120b9bu, 0x9149854cu, 0x2f80fefdu, 0xcdb878aeu, 0x6beff25fu, 0x0a276c10u,
    0xa85ee5c1u, 0x46965f72u, 0xe4cdd923u, 0x830552d4u, 0x213ccc85u, 0xbf744636u, 0x5dabbfe7u, 0xfbe33998u,
    0x9a1ab349u, 0x38522cfau, 0xd689a6abu, 0x74c1205cu, 0x12f89a0du, 0xb13013beu, 0x4f678d6fu, 0xed9f0720u,
    0x8bd680d1u, 0x2a0dfa82u, 0xc8457433u, 0x667cede4u, 0x04b46795u, 0xa2ebe146u, 0x41235af7u, 0xdf5ad4a8u,
    0x7d924e59u, 0x1bc9c80au, 0xba0141bbu, 0x5838bb6cu, 0xf670351du, 0x94a7aeceu, 0x32df287fu, 0xd116a230u,
};

static const uint32_t bshim_064_tab2[96] = {
    0x9c2f8e42u, 0x3a6707f3u, 0xd89e81a4u, 0x76d5fb55u, 0x150d7506u, 0xb344eeb7u, 0x517c6868u, 0xefb3e219u,
    0x8deb5bcau, 0x2c22d57bu, 0xca5a4f2cu, 0x6891c8ddu, 0x06c9428eu, 0xa500bc3fu, 0x433835f0u, 0xe16fafa1u,
    0x7fa72952u, 0x1ddea303u, 0xbc161cb4u, 0x5a4d9665u, 0xf8851016u, 0x96bc89c7u, 0x34f40378u, 0xd32b7d29u,
    0x7162f6dau, 0x0f9a708bu, 0xadd1ea3cu, 0x4c0963edu, 0xea40dd9eu, 0x8878574fu, 0x26afd100u, 0xc4e74ab1u,
    0x631ec462u, 0x01563e13u, 0x9f8db7c4u, 0x3dc53175u, 0xdbfcab26u, 0x7a3424d7u, 0x186b9e88u, 0xb6a31839u,
    0x54da91eau, 0xf3120b9bu, 0x9149854cu, 0x2f80fefdu, 0xcdb878aeu, 0x6beff25fu, 0x0a276c10u, 0xa85ee5c1u,
    0x46965f72u, 0xe4cdd923u, 0x830552d4u, 0x213ccc85u, 0xbf744636u, 0x5dabbfe7u, 0xfbe33998u, 0x9a1ab349u,
    0x38522cfau, 0xd689a6abu, 0x74c1205cu, 0x12f89a0du, 0xb13013beu, 0x4f678d6fu, 0xed9f0720u, 0x8bd680d1u,
    0x2a0dfa82u, 0xc8457433u, 0x667cede4u, 0x04b46795u, 0xa2ebe146u, 0x41235af7u, 0xdf5ad4a8u, 0x7d924e59u,
    0x1bc9c80au, 0xba0141bbu, 0x5838bb6cu, 0xf670351du, 0x94a7aeceu, 0x32df287fu, 0xd116a230u, 0x6f4e1be1u,
    0x0d859592u, 0xabbd0f43u, 0x49f488f4u, 0xe82c02a5u, 0x86637c56u, 0x249af607u, 0xc2d26fb8u, 0x6109e969u,
    0xff41631au, 0x9d78dccbu, 0x3bb0567cu, 0xd9e7d02du, 0x781f49deu, 0x1656c38fu, 0xb48e3d40u, 0x52c5b6f1u,
};

static const uint32_t bshim_064_tab3[96] = {
    0x1ddea303u, 0xbc161cb4u, 0x5a4d9665u, 0xf8851016u, 0x96bc89c7u, 0x34f40378u, 0xd32b7d29u, 0x7162f6dau,
    0x0f9a708bu, 0xadd1ea3cu, 0x4c0963edu, 0xea40dd9eu, 0x8878574fu, 0x26afd100u, 0xc4e74ab1u, 0x631ec462u,
    0x01563e13u, 0x9f8db7c4u, 0x3dc53175u, 0xdbfcab26u, 0x7a3424d7u, 0x186b9e88u, 0xb6a31839u, 0x54da91eau,
    0xf3120b9bu, 0x9149854cu, 0x2f80fefdu, 0xcdb878aeu, 0x6beff25fu, 0x0a276c10u, 0xa85ee5c1u, 0x46965f72u,
    0xe4cdd923u, 0x830552d4u, 0x213ccc85u, 0xbf744636u, 0x5dabbfe7u, 0xfbe33998u, 0x9a1ab349u, 0x38522cfau,
    0xd689a6abu, 0x74c1205cu, 0x12f89a0du, 0xb13013beu, 0x4f678d6fu, 0xed9f0720u, 0x8bd680d1u, 0x2a0dfa82u,
    0xc8457433u, 0x667cede4u, 0x04b46795u, 0xa2ebe146u, 0x41235af7u, 0xdf5ad4a8u, 0x7d924e59u, 0x1bc9c80au,
    0xba0141bbu, 0x5838bb6cu, 0xf670351du, 0x94a7aeceu, 0x32df287fu, 0xd116a230u, 0x6f4e1be1u, 0x0d859592u,
    0xabbd0f43u, 0x49f488f4u, 0xe82c02a5u, 0x86637c56u, 0x249af607u, 0xc2d26fb8u, 0x6109e969u, 0xff41631au,
    0x9d78dccbu, 0x3bb0567cu, 0xd9e7d02du, 0x781f49deu, 0x1656c38fu, 0xb48e3d40u, 0x52c5b6f1u, 0xf0fd30a2u,
    0x8f34aa53u, 0x2d6c2404u, 0xcba39db5u, 0x69db1766u, 0x08129117u, 0xa64a0ac8u, 0x44818479u, 0xe2b8fe2au,
    0x80f077dbu, 0x1f27f18cu, 0xbd5f6b3du, 0x5b96e4eeu, 0xf9ce5e9fu, 0x9805d850u, 0x363d5201u, 0xd474cbb2u,
};

static const uint32_t bshim_064_tab4[96] = {
    0x9f8db7c4u, 0x3dc53175u, 0xdbfcab26u, 0x7a3424d7u, 0x186b9e88u, 0xb6a31839u, 0x54da91eau, 0xf3120b9bu,
    0x9149854cu, 0x2f80fefdu, 0xcdb878aeu, 0x6beff25fu, 0x0a276c10u, 0xa85ee5c1u, 0x46965f72u, 0xe4cdd923u,
    0x830552d4u, 0x213ccc85u, 0xbf744636u, 0x5dabbfe7u, 0xfbe33998u, 0x9a1ab349u, 0x38522cfau, 0xd689a6abu,
    0x74c1205cu, 0x12f89a0du, 0xb13013beu, 0x4f678d6fu, 0xed9f0720u, 0x8bd680d1u, 0x2a0dfa82u, 0xc8457433u,
    0x667cede4u, 0x04b46795u, 0xa2ebe146u, 0x41235af7u, 0xdf5ad4a8u, 0x7d924e59u, 0x1bc9c80au, 0xba0141bbu,
    0x5838bb6cu, 0xf670351du, 0x94a7aeceu, 0x32df287fu, 0xd116a230u, 0x6f4e1be1u, 0x0d859592u, 0xabbd0f43u,
    0x49f488f4u, 0xe82c02a5u, 0x86637c56u, 0x249af607u, 0xc2d26fb8u, 0x6109e969u, 0xff41631au, 0x9d78dccbu,
    0x3bb0567cu, 0xd9e7d02du, 0x781f49deu, 0x1656c38fu, 0xb48e3d40u, 0x52c5b6f1u, 0xf0fd30a2u, 0x8f34aa53u,
    0x2d6c2404u, 0xcba39db5u, 0x69db1766u, 0x08129117u, 0xa64a0ac8u, 0x44818479u, 0xe2b8fe2au, 0x80f077dbu,
    0x1f27f18cu, 0xbd5f6b3du, 0x5b96e4eeu, 0xf9ce5e9fu, 0x9805d850u, 0x363d5201u, 0xd474cbb2u, 0x72ac4563u,
    0x10e3bf14u, 0xaf1b38c5u, 0x4d52b276u, 0xeb8a2c27u, 0x89c1a5d8u, 0x27f91f89u, 0xc630993au, 0x646812ebu,
    0x029f8c9cu, 0xa0d7064du, 0x3f0e7ffeu, 0xdd45f9afu, 0x7b7d7360u, 0x19b4ed11u, 0xb7ec66c2u, 0x5623e073u,
};

static const uint32_t bshim_064_tab5[96] = {
    0x213ccc85u, 0xbf744636u, 0x5dabbfe7u, 0xfbe33998u, 0x9a1ab349u, 0x38522cfau, 0xd689a6abu, 0x74c1205cu,
    0x12f89a0du, 0xb13013beu, 0x4f678d6fu, 0xed9f0720u, 0x8bd680d1u, 0x2a0dfa82u, 0xc8457433u, 0x667cede4u,
    0x04b46795u, 0xa2ebe146u, 0x41235af7u, 0xdf5ad4a8u, 0x7d924e59u, 0x1bc9c80au, 0xba0141bbu, 0x5838bb6cu,
    0xf670351du, 0x94a7aeceu, 0x32df287fu, 0xd116a230u, 0x6f4e1be1u, 0x0d859592u, 0xabbd0f43u, 0x49f488f4u,
    0xe82c02a5u, 0x86637c56u, 0x249af607u, 0xc2d26fb8u, 0x6109e969u, 0xff41631au, 0x9d78dccbu, 0x3bb0567cu,
    0xd9e7d02du, 0x781f49deu, 0x1656c38fu, 0xb48e3d40u, 0x52c5b6f1u, 0xf0fd30a2u, 0x8f34aa53u, 0x2d6c2404u,
    0xcba39db5u, 0x69db1766u, 0x08129117u, 0xa64a0ac8u, 0x44818479u, 0xe2b8fe2au, 0x80f077dbu, 0x1f27f18cu,
    0xbd5f6b3du, 0x5b96e4eeu, 0xf9ce5e9fu, 0x9805d850u, 0x363d5201u, 0xd474cbb2u, 0x72ac4563u, 0x10e3bf14u,
    0xaf1b38c5u, 0x4d52b276u, 0xeb8a2c27u, 0x89c1a5d8u, 0x27f91f89u, 0xc630993au, 0x646812ebu, 0x029f8c9cu,
    0xa0d7064du, 0x3f0e7ffeu, 0xdd45f9afu, 0x7b7d7360u, 0x19b4ed11u, 0xb7ec66c2u, 0x5623e073u, 0xf45b5a24u,
    0x9292d3d5u, 0x30ca4d86u, 0xcf01c737u, 0x6d3940e8u, 0x0b70ba99u, 0xa9a8344au, 0x47dfadfbu, 0xe61727acu,
    0x844ea15du, 0x22861b0eu, 0xc0bd94bfu, 0x5ef50e70u, 0xfd2c8821u, 0x9b6401d2u, 0x399b7b83u, 0xd7d2f534u,
};

static const uint32_t bshim_064_tab6[96] = {
    0xa2ebe146u, 0x41235af7u, 0xdf5ad4a8u, 0x7d924e59u, 0x1bc9c80au, 0xba0141bbu, 0x5838bb6cu, 0xf670351du,
    0x94a7aeceu, 0x32df287fu, 0xd116a230u, 0x6f4e1be1u, 0x0d859592u, 0xabbd0f43u, 0x49f488f4u, 0xe82c02a5u,
    0x86637c56u, 0x249af607u, 0xc2d26fb8u, 0x6109e969u, 0xff41631au, 0x9d78dccbu, 0x3bb0567cu, 0xd9e7d02du,
    0x781f49deu, 0x1656c38fu, 0xb48e3d40u, 0x52c5b6f1u, 0xf0fd30a2u, 0x8f34aa53u, 0x2d6c2404u, 0xcba39db5u,
    0x69db1766u, 0x08129117u, 0xa64a0ac8u, 0x44818479u, 0xe2b8fe2au, 0x80f077dbu, 0x1f27f18cu, 0xbd5f6b3du,
    0x5b96e4eeu, 0xf9ce5e9fu, 0x9805d850u, 0x363d5201u, 0xd474cbb2u, 0x72ac4563u, 0x10e3bf14u, 0xaf1b38c5u,
    0x4d52b276u, 0xeb8a2c27u, 0x89c1a5d8u, 0x27f91f89u, 0xc630993au, 0x646812ebu, 0x029f8c9cu, 0xa0d7064du,
    0x3f0e7ffeu, 0xdd45f9afu, 0x7b7d7360u, 0x19b4ed11u, 0xb7ec66c2u, 0x5623e073u, 0xf45b5a24u, 0x9292d3d5u,
    0x30ca4d86u, 0xcf01c737u, 0x6d3940e8u, 0x0b70ba99u, 0xa9a8344au, 0x47dfadfbu, 0xe61727acu, 0x844ea15du,
    0x22861b0eu, 0xc0bd94bfu, 0x5ef50e70u, 0xfd2c8821u, 0x9b6401d2u, 0x399b7b83u, 0xd7d2f534u, 0x760a6ee5u,
    0x1441e896u, 0xb2796247u, 0x50b0dbf8u, 0xeee855a9u, 0x8d1fcf5au, 0x2b57490bu, 0xc98ec2bcu, 0x67c63c6du,
    0x05fdb61eu, 0xa4352fcfu, 0x426ca980u, 0xe0a42331u, 0x7edb9ce2u, 0x1d131693u, 0xbb4a9044u, 0x598209f5u,
};

static const uint32_t bshim_064_tab7[96] = {
    0x249af607u, 0xc2d26fb8u, 0x6109e969u, 0xff41631au, 0x9d78dccbu, 0x3bb0567cu, 0xd9e7d02du, 0x781f49deu,
    0x1656c38fu, 0xb48e3d40u, 0x52c5b6f1u, 0xf0fd30a2u, 0x8f34aa53u, 0x2d6c2404u, 0xcba39db5u, 0x69db1766u,
    0x08129117u, 0xa64a0ac8u, 0x44818479u, 0xe2b8fe2au, 0x80f077dbu, 0x1f27f18cu, 0xbd5f6b3du, 0x5b96e4eeu,
    0xf9ce5e9fu, 0x9805d850u, 0x363d5201u, 0xd474cbb2u, 0x72ac4563u, 0x10e3bf14u, 0xaf1b38c5u, 0x4d52b276u,
    0xeb8a2c27u, 0x89c1a5d8u, 0x27f91f89u, 0xc630993au, 0x646812ebu, 0x029f8c9cu, 0xa0d7064du, 0x3f0e7ffeu,
    0xdd45f9afu, 0x7b7d7360u, 0x19b4ed11u, 0xb7ec66c2u, 0x5623e073u, 0xf45b5a24u, 0x9292d3d5u, 0x30ca4d86u,
    0xcf01c737u, 0x6d3940e8u, 0x0b70ba99u, 0xa9a8344au, 0x47dfadfbu, 0xe61727acu, 0x844ea15du, 0x22861b0eu,
    0xc0bd94bfu, 0x5ef50e70u, 0xfd2c8821u, 0x9b6401d2u, 0x399b7b83u, 0xd7d2f534u, 0x760a6ee5u, 0x1441e896u,
    0xb2796247u, 0x50b0dbf8u, 0xeee855a9u, 0x8d1fcf5au, 0x2b57490bu, 0xc98ec2bcu, 0x67c63c6du, 0x05fdb61eu,
    0xa4352fcfu, 0x426ca980u, 0xe0a42331u, 0x7edb9ce2u, 0x1d131693u, 0xbb4a9044u, 0x598209f5u, 0xf7b983a6u,
    0x95f0fd57u, 0x34287708u, 0xd25ff0b9u, 0x70976a6au, 0x0ecee41bu, 0xad065dccu, 0x4b3dd77du, 0xe975512eu,
    0x87accadfu, 0x25e44490u, 0xc41bbe41u, 0x625337f2u, 0x008ab1a3u, 0x9ec22b54u, 0x3cf9a505u, 0xdb311eb6u,
};

struct bshim_064_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_064_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_064_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_064_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_064_reset(struct bshim_064_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0007bbc0u;
    return 0;
}

