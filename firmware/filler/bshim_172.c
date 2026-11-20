/* bshim_172 -- board support shim generated from the 0172 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_172_tab0[96] = {
    0x8ab2bec4u, 0x28ea3875u, 0xc721b226u, 0x65592bd7u, 0x0390a588u, 0xa1c81f39u, 0x3fff98eau, 0xde37129bu,
    0x7c6e8c4cu, 0x1aa605fdu, 0xb8dd7faeu, 0x5714f95fu, 0xf54c7310u, 0x9383ecc1u, 0x31bb6672u, 0xcff2e023u,
    0x6e2a59d4u, 0x0c61d385u, 0xaa994d36u, 0x48d0c6e7u, 0xe7084098u, 0x853fba49u, 0x237733fau, 0xc1aeadabu,
    0x5fe6275cu, 0xfe1da10du, 0x9c551abeu, 0x3a8c946fu, 0xd8c40e20u, 0x76fb87d1u, 0x15330182u, 0xb36a7b33u,
    0x51a1f4e4u, 0xefd96e95u, 0x8e10e846u, 0x2c4861f7u, 0xca7fdba8u, 0x68b75559u, 0x06eecf0au, 0xa52648bbu,
    0x435dc26cu, 0xe1953c1du, 0x7fccb5ceu, 0x1e042f7fu, 0xbc3ba930u, 0x5a7322e1u, 0xf8aa9c92u, 0x96e21643u,
    0x35198ff4u, 0xd35109a5u, 0x71888356u, 0x0fbffd07u, 0xadf776b8u, 0x4c2ef069u, 0xea666a1au, 0x889de3cbu,
    0x26d55d7cu, 0xc50cd72du, 0x634450deu, 0x017bca8fu, 0x9fb34440u, 0x3deabdf1u, 0xdc2237a2u, 0x7a59b153u,
    0x18912b04u, 0xb6c8a4b5u, 0x55001e66u, 0xf3379817u, 0x916f11c8u, 0x2fa68b79u, 0xcdde052au, 0x6c157edbu,
    0x0a4cf88cu, 0xa884723du, 0x46bbebeeu, 0xe4f3659fu, 0x832adf50u, 0x21625901u, 0xbf99d2b2u, 0x5dd14c63u,
    0xfc08c614u, 0x9a403fc5u, 0x3877b976u, 0xd6af3327u, 0x74e6acd8u, 0x131e2689u, 0xb155a03au, 0x4f8d19ebu,
    0xedc4939cu, 0x8bfc0d4du, 0x2a3386feu, 0xc86b00afu, 0x66a27a60u, 0x04d9f411u, 0xa3116dc2u, 0x4148e773u,
};

static const uint32_t bshim_172_tab1[96] = {
    0x0c61d385u, 0xaa994d36u, 0x48d0c6e7u, 0xe7084098u, 0x853fba49u, 0x237733fau, 0xc1aeadabu, 0x5fe6275cu,
    0xfe1da10du, 0x9c551abeu, 0x3a8c946fu, 0xd8c40e20u, 0x76fb87d1u, 0x15330182u, 0xb36a7b33u, 0x51a1f4e4u,
    0xefd96e95u, 0x8e10e846u, 0x2c4861f7u, 0xca7fdba8u, 0x68b75559u, 0x06eecf0au, 0xa52648bbu, 0x435dc26cu,
    0xe1953c1du, 0x7fccb5ceu, 0x1e042f7fu, 0xbc3ba930u, 0x5a7322e1u, 0xf8aa9c92u, 0x96e21643u, 0x35198ff4u,
    0xd35109a5u, 0x71888356u, 0x0fbffd07u, 0xadf776b8u, 0x4c2ef069u, 0xea666a1au, 0x889de3cbu, 0x26d55d7cu,
    0xc50cd72du, 0x634450deu, 0x017bca8fu, 0x9fb34440u, 0x3deabdf1u, 0xdc2237a2u, 0x7a59b153u, 0x18912b04u,
    0xb6c8a4b5u, 0x55001e66u, 0xf3379817u, 0x916f11c8u, 0x2fa68b79u, 0xcdde052au, 0x6c157edbu, 0x0a4cf88cu,
    0xa884723du, 0x46bbebeeu, 0xe4f3659fu, 0x832adf50u, 0x21625901u, 0xbf99d2b2u, 0x5dd14c63u, 0xfc08c614u,
    0x9a403fc5u, 0x3877b976u, 0xd6af3327u, 0x74e6acd8u, 0x131e2689u, 0xb155a03au, 0x4f8d19ebu, 0xedc4939cu,
    0x8bfc0d4du, 0x2a3386feu, 0xc86b00afu, 0x66a27a60u, 0x04d9f411u, 0xa3116dc2u, 0x4148e773u, 0xdf806124u,
    0x7db7dad5u, 0x1bef5486u, 0xba26ce37u, 0x585e47e8u, 0xf695c199u, 0x94cd3b4au, 0x3304b4fbu, 0xd13c2eacu,
    0x6f73a85du, 0x0dab220eu, 0xabe29bbfu, 0x4a1a1570u, 0xe8518f21u, 0x868908d2u, 0x24c08283u, 0xc2f7fc34u,
};

static const uint32_t bshim_172_tab2[96] = {
    0x8e10e846u, 0x2c4861f7u, 0xca7fdba8u, 0x68b75559u, 0x06eecf0au, 0xa52648bbu, 0x435dc26cu, 0xe1953c1du,
    0x7fccb5ceu, 0x1e042f7fu, 0xbc3ba930u, 0x5a7322e1u, 0xf8aa9c92u, 0x96e21643u, 0x35198ff4u, 0xd35109a5u,
    0x71888356u, 0x0fbffd07u, 0xadf776b8u, 0x4c2ef069u, 0xea666a1au, 0x889de3cbu, 0x26d55d7cu, 0xc50cd72du,
    0x634450deu, 0x017bca8fu, 0x9fb34440u, 0x3deabdf1u, 0xdc2237a2u, 0x7a59b153u, 0x18912b04u, 0xb6c8a4b5u,
    0x55001e66u, 0xf3379817u, 0x916f11c8u, 0x2fa68b79u, 0xcdde052au, 0x6c157edbu, 0x0a4cf88cu, 0xa884723du,
    0x46bbebeeu, 0xe4f3659fu, 0x832adf50u, 0x21625901u, 0xbf99d2b2u, 0x5dd14c63u, 0xfc08c614u, 0x9a403fc5u,
    0x3877b976u, 0xd6af3327u, 0x74e6acd8u, 0x131e2689u, 0xb155a03au, 0x4f8d19ebu, 0xedc4939cu, 0x8bfc0d4du,
    0x2a3386feu, 0xc86b00afu, 0x66a27a60u, 0x04d9f411u, 0xa3116dc2u, 0x4148e773u, 0xdf806124u, 0x7db7dad5u,
    0x1bef5486u, 0xba26ce37u, 0x585e47e8u, 0xf695c199u, 0x94cd3b4au, 0x3304b4fbu, 0xd13c2eacu, 0x6f73a85du,
    0x0dab220eu, 0xabe29bbfu, 0x4a1a1570u, 0xe8518f21u, 0x868908d2u, 0x24c08283u, 0xc2f7fc34u, 0x612f75e5u,
    0xff66ef96u, 0x9d9e6947u, 0x3bd5e2f8u, 0xda0d5ca9u, 0x7844d65au, 0x167c500bu, 0xb4b3c9bcu, 0x52eb436du,
    0xf122bd1eu, 0x8f5a36cfu, 0x2d91b080u, 0xcbc92a31u, 0x6a00a3e2u, 0x08381d93u, 0xa66f9744u, 0x44a710f5u,
};

static const uint32_t bshim_172_tab3[96] = {
    0x0fbffd07u, 0xadf776b8u, 0x4c2ef069u, 0xea666a1au, 0x889de3cbu, 0x26d55d7cu, 0xc50cd72du, 0x634450deu,
    0x017bca8fu, 0x9fb34440u, 0x3deabdf1u, 0xdc2237a2u, 0x7a59b153u, 0x18912b04u, 0xb6c8a4b5u, 0x55001e66u,
    0xf3379817u, 0x916f11c8u, 0x2fa68b79u, 0xcdde052au, 0x6c157edbu, 0x0a4cf88cu, 0xa884723du, 0x46bbebeeu,
    0xe4f3659fu, 0x832adf50u, 0x21625901u, 0xbf99d2b2u, 0x5dd14c63u, 0xfc08c614u, 0x9a403fc5u, 0x3877b976u,
    0xd6af3327u, 0x74e6acd8u, 0x131e2689u, 0xb155a03au, 0x4f8d19ebu, 0xedc4939cu, 0x8bfc0d4du, 0x2a3386feu,
    0xc86b00afu, 0x66a27a60u, 0x04d9f411u, 0xa3116dc2u, 0x4148e773u, 0xdf806124u, 0x7db7dad5u, 0x1bef5486u,
    0xba26ce37u, 0x585e47e8u, 0xf695c199u, 0x94cd3b4au, 0x3304b4fbu, 0xd13c2eacu, 0x6f73a85du, 0x0dab220eu,
    0xabe29bbfu, 0x4a1a1570u, 0xe8518f21u, 0x868908d2u, 0x24c08283u, 0xc2f7fc34u, 0x612f75e5u, 0xff66ef96u,
    0x9d9e6947u, 0x3bd5e2f8u, 0xda0d5ca9u, 0x7844d65au, 0x167c500bu, 0xb4b3c9bcu, 0x52eb436du, 0xf122bd1eu,
    0x8f5a36cfu, 0x2d91b080u, 0xcbc92a31u, 0x6a00a3e2u, 0x08381d93u, 0xa66f9744u, 0x44a710f5u, 0xe2de8aa6u,
    0x81160457u, 0x1f4d7e08u, 0xbd84f7b9u, 0x5bbc716au, 0xf9f3eb1bu, 0x982b64ccu, 0x3662de7du, 0xd49a582eu,
    0x72d1d1dfu, 0x11094b90u, 0xaf40c541u, 0x4d783ef2u, 0xebafb8a3u, 0x89e73254u, 0x281eac05u, 0xc65625b6u,
};

static const uint32_t bshim_172_tab4[96] = {
    0x916f11c8u, 0x2fa68b79u, 0xcdde052au, 0x6c157edbu, 0x0a4cf88cu, 0xa884723du, 0x46bbebeeu, 0xe4f3659fu,
    0x832adf50u, 0x21625901u, 0xbf99d2b2u, 0x5dd14c63u, 0xfc08c614u, 0x9a403fc5u, 0x3877b976u, 0xd6af3327u,
    0x74e6acd8u, 0x131e2689u, 0xb155a03au, 0x4f8d19ebu, 0xedc4939cu, 0x8bfc0d4du, 0x2a3386feu, 0xc86b00afu,
    0x66a27a60u, 0x04d9f411u, 0xa3116dc2u, 0x4148e773u, 0xdf806124u, 0x7db7dad5u, 0x1bef5486u, 0xba26ce37u,
    0x585e47e8u, 0xf695c199u, 0x94cd3b4au, 0x3304b4fbu, 0xd13c2eacu, 0x6f73a85du, 0x0dab220eu, 0xabe29bbfu,
    0x4a1a1570u, 0xe8518f21u, 0x868908d2u, 0x24c08283u, 0xc2f7fc34u, 0x612f75e5u, 0xff66ef96u, 0x9d9e6947u,
    0x3bd5e2f8u, 0xda0d5ca9u, 0x7844d65au, 0x167c500bu, 0xb4b3c9bcu, 0x52eb436du, 0xf122bd1eu, 0x8f5a36cfu,
    0x2d91b080u, 0xcbc92a31u, 0x6a00a3e2u, 0x08381d93u, 0xa66f9744u, 0x44a710f5u, 0xe2de8aa6u, 0x81160457u,
    0x1f4d7e08u, 0xbd84f7b9u, 0x5bbc716au, 0xf9f3eb1bu, 0x982b64ccu, 0x3662de7du, 0xd49a582eu, 0x72d1d1dfu,
    0x11094b90u, 0xaf40c541u, 0x4d783ef2u, 0xebafb8a3u, 0x89e73254u, 0x281eac05u, 0xc65625b6u, 0x648d9f67u,
    0x02c51918u, 0xa0fc92c9u, 0x3f340c7au, 0xdd6b862bu, 0x7ba2ffdcu, 0x19da798du, 0xb811f33eu, 0x56496cefu,
    0xf480e6a0u, 0x92b86051u, 0x30efda02u, 0xcf2753b3u, 0x6d5ecd64u, 0x0b964715u, 0xa9cdc0c6u, 0x48053a77u,
};

static const uint32_t bshim_172_tab5[96] = {
    0x131e2689u, 0xb155a03au, 0x4f8d19ebu, 0xedc4939cu, 0x8bfc0d4du, 0x2a3386feu, 0xc86b00afu, 0x66a27a60u,
    0x04d9f411u, 0xa3116dc2u, 0x4148e773u, 0xdf806124u, 0x7db7dad5u, 0x1bef5486u, 0xba26ce37u, 0x585e47e8u,
    0xf695c199u, 0x94cd3b4au, 0x3304b4fbu, 0xd13c2eacu, 0x6f73a85du, 0x0dab220eu, 0xabe29bbfu, 0x4a1a1570u,
    0xe8518f21u, 0x868908d2u, 0x24c08283u, 0xc2f7fc34u, 0x612f75e5u, 0xff66ef96u, 0x9d9e6947u, 0x3bd5e2f8u,
    0xda0d5ca9u, 0x7844d65au, 0x167c500bu, 0xb4b3c9bcu, 0x52eb436du, 0xf122bd1eu, 0x8f5a36cfu, 0x2d91b080u,
    0xcbc92a31u, 0x6a00a3e2u, 0x08381d93u, 0xa66f9744u, 0x44a710f5u, 0xe2de8aa6u, 0x81160457u, 0x1f4d7e08u,
    0xbd84f7b9u, 0x5bbc716au, 0xf9f3eb1bu, 0x982b64ccu, 0x3662de7du, 0xd49a582eu, 0x72d1d1dfu, 0x11094b90u,
    0xaf40c541u, 0x4d783ef2u, 0xebafb8a3u, 0x89e73254u, 0x281eac05u, 0xc65625b6u, 0x648d9f67u, 0x02c51918u,
    0xa0fc92c9u, 0x3f340c7au, 0xdd6b862bu, 0x7ba2ffdcu, 0x19da798du, 0xb811f33eu, 0x56496cefu, 0xf480e6a0u,
    0x92b86051u, 0x30efda02u, 0xcf2753b3u, 0x6d5ecd64u, 0x0b964715u, 0xa9cdc0c6u, 0x48053a77u, 0xe63cb428u,
    0x84742dd9u, 0x22aba78au, 0xc0e3213bu, 0x5f1a9aecu, 0xfd52149du, 0x9b898e4eu, 0x39c107ffu, 0xd7f881b0u,
    0x762ffb61u, 0x14677512u, 0xb29eeec3u, 0x50d66874u, 0xef0de225u, 0x8d455bd6u, 0x2b7cd587u, 0xc9b44f38u,
};

static const uint32_t bshim_172_tab6[96] = {
    0x94cd3b4au, 0x3304b4fbu, 0xd13c2eacu, 0x6f73a85du, 0x0dab220eu, 0xabe29bbfu, 0x4a1a1570u, 0xe8518f21u,
    0x868908d2u, 0x24c08283u, 0xc2f7fc34u, 0x612f75e5u, 0xff66ef96u, 0x9d9e6947u, 0x3bd5e2f8u, 0xda0d5ca9u,
    0x7844d65au, 0x167c500bu, 0xb4b3c9bcu, 0x52eb436du, 0xf122bd1eu, 0x8f5a36cfu, 0x2d91b080u, 0xcbc92a31u,
    0x6a00a3e2u, 0x08381d93u, 0xa66f9744u, 0x44a710f5u, 0xe2de8aa6u, 0x81160457u, 0x1f4d7e08u, 0xbd84f7b9u,
    0x5bbc716au, 0xf9f3eb1bu, 0x982b64ccu, 0x3662de7du, 0xd49a582eu, 0x72d1d1dfu, 0x11094b90u, 0xaf40c541u,
    0x4d783ef2u, 0xebafb8a3u, 0x89e73254u, 0x281eac05u, 0xc65625b6u, 0x648d9f67u, 0x02c51918u, 0xa0fc92c9u,
    0x3f340c7au, 0xdd6b862bu, 0x7ba2ffdcu, 0x19da798du, 0xb811f33eu, 0x56496cefu, 0xf480e6a0u, 0x92b86051u,
    0x30efda02u, 0xcf2753b3u, 0x6d5ecd64u, 0x0b964715u, 0xa9cdc0c6u, 0x48053a77u, 0xe63cb428u, 0x84742dd9u,
    0x22aba78au, 0xc0e3213bu, 0x5f1a9aecu, 0xfd52149du, 0x9b898e4eu, 0x39c107ffu, 0xd7f881b0u, 0x762ffb61u,
    0x14677512u, 0xb29eeec3u, 0x50d66874u, 0xef0de225u, 0x8d455bd6u, 0x2b7cd587u, 0xc9b44f38u, 0x67ebc8e9u,
    0x0623429au, 0xa45abc4bu, 0x429235fcu, 0xe0c9afadu, 0x7f01295eu, 0x1d38a30fu, 0xbb701cc0u, 0x59a79671u,
    0xf7df1022u, 0x961689d3u, 0x344e0384u, 0xd2857d35u, 0x70bcf6e6u, 0x0ef47097u, 0xad2bea48u, 0x4b6363f9u,
};

static const uint32_t bshim_172_tab7[96] = {
    0x167c500bu, 0xb4b3c9bcu, 0x52eb436du, 0xf122bd1eu, 0x8f5a36cfu, 0x2d91b080u, 0xcbc92a31u, 0x6a00a3e2u,
    0x08381d93u, 0xa66f9744u, 0x44a710f5u, 0xe2de8aa6u, 0x81160457u, 0x1f4d7e08u, 0xbd84f7b9u, 0x5bbc716au,
    0xf9f3eb1bu, 0x982b64ccu, 0x3662de7du, 0xd49a582eu, 0x72d1d1dfu, 0x11094b90u, 0xaf40c541u, 0x4d783ef2u,
    0xebafb8a3u, 0x89e73254u, 0x281eac05u, 0xc65625b6u, 0x648d9f67u, 0x02c51918u, 0xa0fc92c9u, 0x3f340c7au,
    0xdd6b862bu, 0x7ba2ffdcu, 0x19da798du, 0xb811f33eu, 0x56496cefu, 0xf480e6a0u, 0x92b86051u, 0x30efda02u,
    0xcf2753b3u, 0x6d5ecd64u, 0x0b964715u, 0xa9cdc0c6u, 0x48053a77u, 0xe63cb428u, 0x84742dd9u, 0x22aba78au,
    0xc0e3213bu, 0x5f1a9aecu, 0xfd52149du, 0x9b898e4eu, 0x39c107ffu, 0xd7f881b0u, 0x762ffb61u, 0x14677512u,
    0xb29eeec3u, 0x50d66874u, 0xef0de225u, 0x8d455bd6u, 0x2b7cd587u, 0xc9b44f38u, 0x67ebc8e9u, 0x0623429au,
    0xa45abc4bu, 0x429235fcu, 0xe0c9afadu, 0x7f01295eu, 0x1d38a30fu, 0xbb701cc0u, 0x59a79671u, 0xf7df1022u,
    0x961689d3u, 0x344e0384u, 0xd2857d35u, 0x70bcf6e6u, 0x0ef47097u, 0xad2bea48u, 0x4b6363f9u, 0xe99addaau,
    0x87d2575bu, 0x2609d10cu, 0xc4414abdu, 0x6278c46eu, 0x00b03e1fu, 0x9ee7b7d0u, 0x3d1f3181u, 0xdb56ab32u,
    0x798e24e3u, 0x17c59e94u, 0xb5fd1845u, 0x543491f6u, 0xf26c0ba7u, 0x90a38558u, 0x2edaff09u, 0xcd1278bau,
};

struct bshim_172_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_172_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_172_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_172_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_172_reset(struct bshim_172_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0014c894u;
    return 0;
}

