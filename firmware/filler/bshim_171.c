/* bshim_171 -- board support shim generated from the 0171 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_171_tab0[96] = {
    0x944f7931u, 0x3286f2e2u, 0xd0be6c93u, 0x6ef5e644u, 0x0d2d5ff5u, 0xab64d9a6u, 0x499c5357u, 0xe7d3cd08u,
    0x860b46b9u, 0x2442c06au, 0xc27a3a1bu, 0x60b1b3ccu, 0xfee92d7du, 0x9d20a72eu, 0x3b5820dfu, 0xd98f9a90u,
    0x77c71441u, 0x15fe8df2u, 0xb43607a3u, 0x526d8154u, 0xf0a4fb05u, 0x8edc74b6u, 0x2d13ee67u, 0xcb4b6818u,
    0x6982e1c9u, 0x07ba5b7au, 0xa5f1d52bu, 0x44294edcu, 0xe260c88du, 0x8098423eu, 0x1ecfbbefu, 0xbd0735a0u,
    0x5b3eaf51u, 0xf9762902u, 0x97ada2b3u, 0x35e51c64u, 0xd41c9615u, 0x72540fc6u, 0x108b8977u, 0xaec30328u,
    0x4cfa7cd9u, 0xeb31f68au, 0x8969703bu, 0x27a0e9ecu, 0xc5d8639du, 0x640fdd4eu, 0x024756ffu, 0xa07ed0b0u,
    0x3eb64a61u, 0xdcedc412u, 0x7b253dc3u, 0x195cb774u, 0xb7943125u, 0x55cbaad6u, 0xf4032487u, 0x923a9e38u,
    0x307217e9u, 0xcea9919au, 0x6ce10b4bu, 0x0b1884fcu, 0xa94ffeadu, 0x4787785eu, 0xe5bef20fu, 0x83f66bc0u,
    0x222de571u, 0xc0655f22u, 0x5e9cd8d3u, 0xfcd45284u, 0x9b0bcc35u, 0x394345e6u, 0xd77abf97u, 0x75b23948u,
    0x13e9b2f9u, 0xb2212caau, 0x5058a65bu, 0xee90200cu, 0x8cc799bdu, 0x2aff136eu, 0xc9368d1fu, 0x676e06d0u,
    0x05a58081u, 0xa3dcfa32u, 0x421473e3u, 0xe04bed94u, 0x7e836745u, 0x1cbae0f6u, 0xbaf25aa7u, 0x5929d458u,
    0xf7614e09u, 0x9598c7bau, 0x33d0416bu, 0xd207bb1cu, 0x703f34cdu, 0x0e76ae7eu, 0xacae282fu, 0x4ae5a1e0u,
};

static const uint32_t bshim_171_tab1[96] = {
    0x15fe8df2u, 0xb43607a3u, 0x526d8154u, 0xf0a4fb05u, 0x8edc74b6u, 0x2d13ee67u, 0xcb4b6818u, 0x6982e1c9u,
    0x07ba5b7au, 0xa5f1d52bu, 0x44294edcu, 0xe260c88du, 0x8098423eu, 0x1ecfbbefu, 0xbd0735a0u, 0x5b3eaf51u,
    0xf9762902u, 0x97ada2b3u, 0x35e51c64u, 0xd41c9615u, 0x72540fc6u, 0x108b8977u, 0xaec30328u, 0x4cfa7cd9u,
    0xeb31f68au, 0x8969703bu, 0x27a0e9ecu, 0xc5d8639du, 0x640fdd4eu, 0x024756ffu, 0xa07ed0b0u, 0x3eb64a61u,
    0xdcedc412u, 0x7b253dc3u, 0x195cb774u, 0xb7943125u, 0x55cbaad6u, 0xf4032487u, 0x923a9e38u, 0x307217e9u,
    0xcea9919au, 0x6ce10b4bu, 0x0b1884fcu, 0xa94ffeadu, 0x4787785eu, 0xe5bef20fu, 0x83f66bc0u, 0x222de571u,
    0xc0655f22u, 0x5e9cd8d3u, 0xfcd45284u, 0x9b0bcc35u, 0x394345e6u, 0xd77abf97u, 0x75b23948u, 0x13e9b2f9u,
    0xb2212caau, 0x5058a65bu, 0xee90200cu, 0x8cc799bdu, 0x2aff136eu, 0xc9368d1fu, 0x676e06d0u, 0x05a58081u,
    0xa3dcfa32u, 0x421473e3u, 0xe04bed94u, 0x7e836745u, 0x1cbae0f6u, 0xbaf25aa7u, 0x5929d458u, 0xf7614e09u,
    0x9598c7bau, 0x33d0416bu, 0xd207bb1cu, 0x703f34cdu, 0x0e76ae7eu, 0xacae282fu, 0x4ae5a1e0u, 0xe91d1b91u,
    0x87549542u, 0x258c0ef3u, 0xc3c388a4u, 0x61fb0255u, 0x00327c06u, 0x9e69f5b7u, 0x3ca16f68u, 0xdad8e919u,
    0x791062cau, 0x1747dc7bu, 0xb57f562cu, 0x53b6cfddu, 0xf1ee498eu, 0x9025c33fu, 0x2e5d3cf0u, 0xcc94b6a1u,
};

static const uint32_t bshim_171_tab2[96] = {
    0x97ada2b3u, 0x35e51c64u, 0xd41c9615u, 0x72540fc6u, 0x108b8977u, 0xaec30328u, 0x4cfa7cd9u, 0xeb31f68au,
    0x8969703bu, 0x27a0e9ecu, 0xc5d8639du, 0x640fdd4eu, 0x024756ffu, 0xa07ed0b0u, 0x3eb64a61u, 0xdcedc412u,
    0x7b253dc3u, 0x195cb774u, 0xb7943125u, 0x55cbaad6u, 0xf4032487u, 0x923a9e38u, 0x307217e9u, 0xcea9919au,
    0x6ce10b4bu, 0x0b1884fcu, 0xa94ffeadu, 0x4787785eu, 0xe5bef20fu, 0x83f66bc0u, 0x222de571u, 0xc0655f22u,
    0x5e9cd8d3u, 0xfcd45284u, 0x9b0bcc35u, 0x394345e6u, 0xd77abf97u, 0x75b23948u, 0x13e9b2f9u, 0xb2212caau,
    0x5058a65bu, 0xee90200cu, 0x8cc799bdu, 0x2aff136eu, 0xc9368d1fu, 0x676e06d0u, 0x05a58081u, 0xa3dcfa32u,
    0x421473e3u, 0xe04bed94u, 0x7e836745u, 0x1cbae0f6u, 0xbaf25aa7u, 0x5929d458u, 0xf7614e09u, 0x9598c7bau,
    0x33d0416bu, 0xd207bb1cu, 0x703f34cdu, 0x0e76ae7eu, 0xacae282fu, 0x4ae5a1e0u, 0xe91d1b91u, 0x87549542u,
    0x258c0ef3u, 0xc3c388a4u, 0x61fb0255u, 0x00327c06u, 0x9e69f5b7u, 0x3ca16f68u, 0xdad8e919u, 0x791062cau,
    0x1747dc7bu, 0xb57f562cu, 0x53b6cfddu, 0xf1ee498eu, 0x9025c33fu, 0x2e5d3cf0u, 0xcc94b6a1u, 0x6acc3052u,
    0x0903aa03u, 0xa73b23b4u, 0x45729d65u, 0xe3aa1716u, 0x81e190c7u, 0x20190a78u, 0xbe508429u, 0x5c87fddau,
    0xfabf778bu, 0x98f6f13cu, 0x372e6aedu, 0xd565e49eu, 0x739d5e4fu, 0x11d4d800u, 0xb00c51b1u, 0x4e43cb62u,
};

static const uint32_t bshim_171_tab3[96] = {
    0x195cb774u, 0xb7943125u, 0x55cbaad6u, 0xf4032487u, 0x923a9e38u, 0x307217e9u, 0xcea9919au, 0x6ce10b4bu,
    0x0b1884fcu, 0xa94ffeadu, 0x4787785eu, 0xe5bef20fu, 0x83f66bc0u, 0x222de571u, 0xc0655f22u, 0x5e9cd8d3u,
    0xfcd45284u, 0x9b0bcc35u, 0x394345e6u, 0xd77abf97u, 0x75b23948u, 0x13e9b2f9u, 0xb2212caau, 0x5058a65bu,
    0xee90200cu, 0x8cc799bdu, 0x2aff136eu, 0xc9368d1fu, 0x676e06d0u, 0x05a58081u, 0xa3dcfa32u, 0x421473e3u,
    0xe04bed94u, 0x7e836745u, 0x1cbae0f6u, 0xbaf25aa7u, 0x5929d458u, 0xf7614e09u, 0x9598c7bau, 0x33d0416bu,
    0xd207bb1cu, 0x703f34cdu, 0x0e76ae7eu, 0xacae282fu, 0x4ae5a1e0u, 0xe91d1b91u, 0x87549542u, 0x258c0ef3u,
    0xc3c388a4u, 0x61fb0255u, 0x00327c06u, 0x9e69f5b7u, 0x3ca16f68u, 0xdad8e919u, 0x791062cau, 0x1747dc7bu,
    0xb57f562cu, 0x53b6cfddu, 0xf1ee498eu, 0x9025c33fu, 0x2e5d3cf0u, 0xcc94b6a1u, 0x6acc3052u, 0x0903aa03u,
    0xa73b23b4u, 0x45729d65u, 0xe3aa1716u, 0x81e190c7u, 0x20190a78u, 0xbe508429u, 0x5c87fddau, 0xfabf778bu,
    0x98f6f13cu, 0x372e6aedu, 0xd565e49eu, 0x739d5e4fu, 0x11d4d800u, 0xb00c51b1u, 0x4e43cb62u, 0xec7b4513u,
    0x8ab2bec4u, 0x28ea3875u, 0xc721b226u, 0x65592bd7u, 0x0390a588u, 0xa1c81f39u, 0x3fff98eau, 0xde37129bu,
    0x7c6e8c4cu, 0x1aa605fdu, 0xb8dd7faeu, 0x5714f95fu, 0xf54c7310u, 0x9383ecc1u, 0x31bb6672u, 0xcff2e023u,
};

static const uint32_t bshim_171_tab4[96] = {
    0x9b0bcc35u, 0x394345e6u, 0xd77abf97u, 0x75b23948u, 0x13e9b2f9u, 0xb2212caau, 0x5058a65bu, 0xee90200cu,
    0x8cc799bdu, 0x2aff136eu, 0xc9368d1fu, 0x676e06d0u, 0x05a58081u, 0xa3dcfa32u, 0x421473e3u, 0xe04bed94u,
    0x7e836745u, 0x1cbae0f6u, 0xbaf25aa7u, 0x5929d458u, 0xf7614e09u, 0x9598c7bau, 0x33d0416bu, 0xd207bb1cu,
    0x703f34cdu, 0x0e76ae7eu, 0xacae282fu, 0x4ae5a1e0u, 0xe91d1b91u, 0x87549542u, 0x258c0ef3u, 0xc3c388a4u,
    0x61fb0255u, 0x00327c06u, 0x9e69f5b7u, 0x3ca16f68u, 0xdad8e919u, 0x791062cau, 0x1747dc7bu, 0xb57f562cu,
    0x53b6cfddu, 0xf1ee498eu, 0x9025c33fu, 0x2e5d3cf0u, 0xcc94b6a1u, 0x6acc3052u, 0x0903aa03u, 0xa73b23b4u,
    0x45729d65u, 0xe3aa1716u, 0x81e190c7u, 0x20190a78u, 0xbe508429u, 0x5c87fddau, 0xfabf778bu, 0x98f6f13cu,
    0x372e6aedu, 0xd565e49eu, 0x739d5e4fu, 0x11d4d800u, 0xb00c51b1u, 0x4e43cb62u, 0xec7b4513u, 0x8ab2bec4u,
    0x28ea3875u, 0xc721b226u, 0x65592bd7u, 0x0390a588u, 0xa1c81f39u, 0x3fff98eau, 0xde37129bu, 0x7c6e8c4cu,
    0x1aa605fdu, 0xb8dd7faeu, 0x5714f95fu, 0xf54c7310u, 0x9383ecc1u, 0x31bb6672u, 0xcff2e023u, 0x6e2a59d4u,
    0x0c61d385u, 0xaa994d36u, 0x48d0c6e7u, 0xe7084098u, 0x853fba49u, 0x237733fau, 0xc1aeadabu, 0x5fe6275cu,
    0xfe1da10du, 0x9c551abeu, 0x3a8c946fu, 0xd8c40e20u, 0x76fb87d1u, 0x15330182u, 0xb36a7b33u, 0x51a1f4e4u,
};

static const uint32_t bshim_171_tab5[96] = {
    0x1cbae0f6u, 0xbaf25aa7u, 0x5929d458u, 0xf7614e09u, 0x9598c7bau, 0x33d0416bu, 0xd207bb1cu, 0x703f34cdu,
    0x0e76ae7eu, 0xacae282fu, 0x4ae5a1e0u, 0xe91d1b91u, 0x87549542u, 0x258c0ef3u, 0xc3c388a4u, 0x61fb0255u,
    0x00327c06u, 0x9e69f5b7u, 0x3ca16f68u, 0xdad8e919u, 0x791062cau, 0x1747dc7bu, 0xb57f562cu, 0x53b6cfddu,
    0xf1ee498eu, 0x9025c33fu, 0x2e5d3cf0u, 0xcc94b6a1u, 0x6acc3052u, 0x0903aa03u, 0xa73b23b4u, 0x45729d65u,
    0xe3aa1716u, 0x81e190c7u, 0x20190a78u, 0xbe508429u, 0x5c87fddau, 0xfabf778bu, 0x98f6f13cu, 0x372e6aedu,
    0xd565e49eu, 0x739d5e4fu, 0x11d4d800u, 0xb00c51b1u, 0x4e43cb62u, 0xec7b4513u, 0x8ab2bec4u, 0x28ea3875u,
    0xc721b226u, 0x65592bd7u, 0x0390a588u, 0xa1c81f39u, 0x3fff98eau, 0xde37129bu, 0x7c6e8c4cu, 0x1aa605fdu,
    0xb8dd7faeu, 0x5714f95fu, 0xf54c7310u, 0x9383ecc1u, 0x31bb6672u, 0xcff2e023u, 0x6e2a59d4u, 0x0c61d385u,
    0xaa994d36u, 0x48d0c6e7u, 0xe7084098u, 0x853fba49u, 0x237733fau, 0xc1aeadabu, 0x5fe6275cu, 0xfe1da10du,
    0x9c551abeu, 0x3a8c946fu, 0xd8c40e20u, 0x76fb87d1u, 0x15330182u, 0xb36a7b33u, 0x51a1f4e4u, 0xefd96e95u,
    0x8e10e846u, 0x2c4861f7u, 0xca7fdba8u, 0x68b75559u, 0x06eecf0au, 0xa52648bbu, 0x435dc26cu, 0xe1953c1du,
    0x7fccb5ceu, 0x1e042f7fu, 0xbc3ba930u, 0x5a7322e1u, 0xf8aa9c92u, 0x96e21643u, 0x35198ff4u, 0xd35109a5u,
};

static const uint32_t bshim_171_tab6[96] = {
    0x9e69f5b7u, 0x3ca16f68u, 0xdad8e919u, 0x791062cau, 0x1747dc7bu, 0xb57f562cu, 0x53b6cfddu, 0xf1ee498eu,
    0x9025c33fu, 0x2e5d3cf0u, 0xcc94b6a1u, 0x6acc3052u, 0x0903aa03u, 0xa73b23b4u, 0x45729d65u, 0xe3aa1716u,
    0x81e190c7u, 0x20190a78u, 0xbe508429u, 0x5c87fddau, 0xfabf778bu, 0x98f6f13cu, 0x372e6aedu, 0xd565e49eu,
    0x739d5e4fu, 0x11d4d800u, 0xb00c51b1u, 0x4e43cb62u, 0xec7b4513u, 0x8ab2bec4u, 0x28ea3875u, 0xc721b226u,
    0x65592bd7u, 0x0390a588u, 0xa1c81f39u, 0x3fff98eau, 0xde37129bu, 0x7c6e8c4cu, 0x1aa605fdu, 0xb8dd7faeu,
    0x5714f95fu, 0xf54c7310u, 0x9383ecc1u, 0x31bb6672u, 0xcff2e023u, 0x6e2a59d4u, 0x0c61d385u, 0xaa994d36u,
    0x48d0c6e7u, 0xe7084098u, 0x853fba49u, 0x237733fau, 0xc1aeadabu, 0x5fe6275cu, 0xfe1da10du, 0x9c551abeu,
    0x3a8c946fu, 0xd8c40e20u, 0x76fb87d1u, 0x15330182u, 0xb36a7b33u, 0x51a1f4e4u, 0xefd96e95u, 0x8e10e846u,
    0x2c4861f7u, 0xca7fdba8u, 0x68b75559u, 0x06eecf0au, 0xa52648bbu, 0x435dc26cu, 0xe1953c1du, 0x7fccb5ceu,
    0x1e042f7fu, 0xbc3ba930u, 0x5a7322e1u, 0xf8aa9c92u, 0x96e21643u, 0x35198ff4u, 0xd35109a5u, 0x71888356u,
    0x0fbffd07u, 0xadf776b8u, 0x4c2ef069u, 0xea666a1au, 0x889de3cbu, 0x26d55d7cu, 0xc50cd72du, 0x634450deu,
    0x017bca8fu, 0x9fb34440u, 0x3deabdf1u, 0xdc2237a2u, 0x7a59b153u, 0x18912b04u, 0xb6c8a4b5u, 0x55001e66u,
};

static const uint32_t bshim_171_tab7[96] = {
    0x20190a78u, 0xbe508429u, 0x5c87fddau, 0xfabf778bu, 0x98f6f13cu, 0x372e6aedu, 0xd565e49eu, 0x739d5e4fu,
    0x11d4d800u, 0xb00c51b1u, 0x4e43cb62u, 0xec7b4513u, 0x8ab2bec4u, 0x28ea3875u, 0xc721b226u, 0x65592bd7u,
    0x0390a588u, 0xa1c81f39u, 0x3fff98eau, 0xde37129bu, 0x7c6e8c4cu, 0x1aa605fdu, 0xb8dd7faeu, 0x5714f95fu,
    0xf54c7310u, 0x9383ecc1u, 0x31bb6672u, 0xcff2e023u, 0x6e2a59d4u, 0x0c61d385u, 0xaa994d36u, 0x48d0c6e7u,
    0xe7084098u, 0x853fba49u, 0x237733fau, 0xc1aeadabu, 0x5fe6275cu, 0xfe1da10du, 0x9c551abeu, 0x3a8c946fu,
    0xd8c40e20u, 0x76fb87d1u, 0x15330182u, 0xb36a7b33u, 0x51a1f4e4u, 0xefd96e95u, 0x8e10e846u, 0x2c4861f7u,
    0xca7fdba8u, 0x68b75559u, 0x06eecf0au, 0xa52648bbu, 0x435dc26cu, 0xe1953c1du, 0x7fccb5ceu, 0x1e042f7fu,
    0xbc3ba930u, 0x5a7322e1u, 0xf8aa9c92u, 0x96e21643u, 0x35198ff4u, 0xd35109a5u, 0x71888356u, 0x0fbffd07u,
    0xadf776b8u, 0x4c2ef069u, 0xea666a1au, 0x889de3cbu, 0x26d55d7cu, 0xc50cd72du, 0x634450deu, 0x017bca8fu,
    0x9fb34440u, 0x3deabdf1u, 0xdc2237a2u, 0x7a59b153u, 0x18912b04u, 0xb6c8a4b5u, 0x55001e66u, 0xf3379817u,
    0x916f11c8u, 0x2fa68b79u, 0xcdde052au, 0x6c157edbu, 0x0a4cf88cu, 0xa884723du, 0x46bbebeeu, 0xe4f3659fu,
    0x832adf50u, 0x21625901u, 0xbf99d2b2u, 0x5dd14c63u, 0xfc08c614u, 0x9a403fc5u, 0x3877b976u, 0xd6af3327u,
};

struct bshim_171_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_171_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_171_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_171_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_171_reset(struct bshim_171_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0014a9a5u;
    return 0;
}

