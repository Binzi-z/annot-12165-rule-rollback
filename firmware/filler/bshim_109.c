/* bshim_109 -- board support shim generated from the 0109 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_109_tab0[96] = {
    0xe8449f97u, 0x867c1948u, 0x24b392f9u, 0xc2eb0caau, 0x6122865bu, 0xff5a000cu, 0x9d9179bdu, 0x3bc8f36eu,
    0xda006d1fu, 0x7837e6d0u, 0x166f6081u, 0xb4a6da32u, 0x52de53e3u, 0xf115cd94u, 0x8f4d4745u, 0x2d84c0f6u,
    0xcbbc3aa7u, 0x69f3b458u, 0x082b2e09u, 0xa662a7bau, 0x449a216bu, 0xe2d19b1cu, 0x810914cdu, 0x1f408e7eu,
    0xbd78082fu, 0x5baf81e0u, 0xf9e6fb91u, 0x981e7542u, 0x3655eef3u, 0xd48d68a4u, 0x72c4e255u, 0x10fc5c06u,
    0xaf33d5b7u, 0x4d6b4f68u, 0xeba2c919u, 0x89da42cau, 0x2811bc7bu, 0xc649362cu, 0x6480afddu, 0x02b8298eu,
    0xa0efa33fu, 0x3f271cf0u, 0xdd5e96a1u, 0x7b961052u, 0x19cd8a03u, 0xb80503b4u, 0x563c7d65u, 0xf473f716u,
    0x92ab70c7u, 0x30e2ea78u, 0xcf1a6429u, 0x6d51dddau, 0x0b89578bu, 0xa9c0d13cu, 0x47f84aedu, 0xe62fc49eu,
    0x84673e4fu, 0x229eb800u, 0xc0d631b1u, 0x5f0dab62u, 0xfd452513u, 0x9b7c9ec4u, 0x39b41875u, 0xd7eb9226u,
    0x76230bd7u, 0x145a8588u, 0xb291ff39u, 0x50c978eau, 0xef00f29bu, 0x8d386c4cu, 0x2b6fe5fdu, 0xc9a75faeu,
    0x67ded95fu, 0x06165310u, 0xa44dccc1u, 0x42854672u, 0xe0bcc023u, 0x7ef439d4u, 0x1d2bb385u, 0xbb632d36u,
    0x599aa6e7u, 0xf7d22098u, 0x96099a49u, 0x344113fau, 0xd2788dabu, 0x70b0075cu, 0x0ee7810du, 0xad1efabeu,
    0x4b56746fu, 0xe98dee20u, 0x87c567d1u, 0x25fce182u, 0xc4345b33u, 0x626bd4e4u, 0x00a34e95u, 0x9edac846u,
};

static const uint32_t bshim_109_tab1[96] = {
    0x69f3b458u, 0x082b2e09u, 0xa662a7bau, 0x449a216bu, 0xe2d19b1cu, 0x810914cdu, 0x1f408e7eu, 0xbd78082fu,
    0x5baf81e0u, 0xf9e6fb91u, 0x981e7542u, 0x3655eef3u, 0xd48d68a4u, 0x72c4e255u, 0x10fc5c06u, 0xaf33d5b7u,
    0x4d6b4f68u, 0xeba2c919u, 0x89da42cau, 0x2811bc7bu, 0xc649362cu, 0x6480afddu, 0x02b8298eu, 0xa0efa33fu,
    0x3f271cf0u, 0xdd5e96a1u, 0x7b961052u, 0x19cd8a03u, 0xb80503b4u, 0x563c7d65u, 0xf473f716u, 0x92ab70c7u,
    0x30e2ea78u, 0xcf1a6429u, 0x6d51dddau, 0x0b89578bu, 0xa9c0d13cu, 0x47f84aedu, 0xe62fc49eu, 0x84673e4fu,
    0x229eb800u, 0xc0d631b1u, 0x5f0dab62u, 0xfd452513u, 0x9b7c9ec4u, 0x39b41875u, 0xd7eb9226u, 0x76230bd7u,
    0x145a8588u, 0xb291ff39u, 0x50c978eau, 0xef00f29bu, 0x8d386c4cu, 0x2b6fe5fdu, 0xc9a75faeu, 0x67ded95fu,
    0x06165310u, 0xa44dccc1u, 0x42854672u, 0xe0bcc023u, 0x7ef439d4u, 0x1d2bb385u, 0xbb632d36u, 0x599aa6e7u,
    0xf7d22098u, 0x96099a49u, 0x344113fau, 0xd2788dabu, 0x70b0075cu, 0x0ee7810du, 0xad1efabeu, 0x4b56746fu,
    0xe98dee20u, 0x87c567d1u, 0x25fce182u, 0xc4345b33u, 0x626bd4e4u, 0x00a34e95u, 0x9edac846u, 0x3d1241f7u,
    0xdb49bba8u, 0x79813559u, 0x17b8af0au, 0xb5f028bbu, 0x5427a26cu, 0xf25f1c1du, 0x909695ceu, 0x2ece0f7fu,
    0xcd058930u, 0x6b3d02e1u, 0x09747c92u, 0xa7abf643u, 0x45e36ff4u, 0xe41ae9a5u, 0x82526356u, 0x2089dd07u,
};

static const uint32_t bshim_109_tab2[96] = {
    0xeba2c919u, 0x89da42cau, 0x2811bc7bu, 0xc649362cu, 0x6480afddu, 0x02b8298eu, 0xa0efa33fu, 0x3f271cf0u,
    0xdd5e96a1u, 0x7b961052u, 0x19cd8a03u, 0xb80503b4u, 0x563c7d65u, 0xf473f716u, 0x92ab70c7u, 0x30e2ea78u,
    0xcf1a6429u, 0x6d51dddau, 0x0b89578bu, 0xa9c0d13cu, 0x47f84aedu, 0xe62fc49eu, 0x84673e4fu, 0x229eb800u,
    0xc0d631b1u, 0x5f0dab62u, 0xfd452513u, 0x9b7c9ec4u, 0x39b41875u, 0xd7eb9226u, 0x76230bd7u, 0x145a8588u,
    0xb291ff39u, 0x50c978eau, 0xef00f29bu, 0x8d386c4cu, 0x2b6fe5fdu, 0xc9a75faeu, 0x67ded95fu, 0x06165310u,
    0xa44dccc1u, 0x42854672u, 0xe0bcc023u, 0x7ef439d4u, 0x1d2bb385u, 0xbb632d36u, 0x599aa6e7u, 0xf7d22098u,
    0x96099a49u, 0x344113fau, 0xd2788dabu, 0x70b0075cu, 0x0ee7810du, 0xad1efabeu, 0x4b56746fu, 0xe98dee20u,
    0x87c567d1u, 0x25fce182u, 0xc4345b33u, 0x626bd4e4u, 0x00a34e95u, 0x9edac846u, 0x3d1241f7u, 0xdb49bba8u,
    0x79813559u, 0x17b8af0au, 0xb5f028bbu, 0x5427a26cu, 0xf25f1c1du, 0x909695ceu, 0x2ece0f7fu, 0xcd058930u,
    0x6b3d02e1u, 0x09747c92u, 0xa7abf643u, 0x45e36ff4u, 0xe41ae9a5u, 0x82526356u, 0x2089dd07u, 0xbec156b8u,
    0x5cf8d069u, 0xfb304a1au, 0x9967c3cbu, 0x379f3d7cu, 0xd5d6b72du, 0x740e30deu, 0x1245aa8fu, 0xb07d2440u,
    0x4eb49df1u, 0xecec17a2u, 0x8b239153u, 0x295b0b04u, 0xc79284b5u, 0x65c9fe66u, 0x04017817u, 0xa238f1c8u,
};

static const uint32_t bshim_109_tab3[96] = {
    0x6d51dddau, 0x0b89578bu, 0xa9c0d13cu, 0x47f84aedu, 0xe62fc49eu, 0x84673e4fu, 0x229eb800u, 0xc0d631b1u,
    0x5f0dab62u, 0xfd452513u, 0x9b7c9ec4u, 0x39b41875u, 0xd7eb9226u, 0x76230bd7u, 0x145a8588u, 0xb291ff39u,
    0x50c978eau, 0xef00f29bu, 0x8d386c4cu, 0x2b6fe5fdu, 0xc9a75faeu, 0x67ded95fu, 0x06165310u, 0xa44dccc1u,
    0x42854672u, 0xe0bcc023u, 0x7ef439d4u, 0x1d2bb385u, 0xbb632d36u, 0x599aa6e7u, 0xf7d22098u, 0x96099a49u,
    0x344113fau, 0xd2788dabu, 0x70b0075cu, 0x0ee7810du, 0xad1efabeu, 0x4b56746fu, 0xe98dee20u, 0x87c567d1u,
    0x25fce182u, 0xc4345b33u, 0x626bd4e4u, 0x00a34e95u, 0x9edac846u, 0x3d1241f7u, 0xdb49bba8u, 0x79813559u,
    0x17b8af0au, 0xb5f028bbu, 0x5427a26cu, 0xf25f1c1du, 0x909695ceu, 0x2ece0f7fu, 0xcd058930u, 0x6b3d02e1u,
    0x09747c92u, 0xa7abf643u, 0x45e36ff4u, 0xe41ae9a5u, 0x82526356u, 0x2089dd07u, 0xbec156b8u, 0x5cf8d069u,
    0xfb304a1au, 0x9967c3cbu, 0x379f3d7cu, 0xd5d6b72du, 0x740e30deu, 0x1245aa8fu, 0xb07d2440u, 0x4eb49df1u,
    0xecec17a2u, 0x8b239153u, 0x295b0b04u, 0xc79284b5u, 0x65c9fe66u, 0x04017817u, 0xa238f1c8u, 0x40706b79u,
    0xdea7e52au, 0x7cdf5edbu, 0x1b16d88cu, 0xb94e523du, 0x5785cbeeu, 0xf5bd459fu, 0x93f4bf50u, 0x322c3901u,
    0xd063b2b2u, 0x6e9b2c63u, 0x0cd2a614u, 0xab0a1fc5u, 0x49419976u, 0xe7791327u, 0x85b08cd8u, 0x23e80689u,
};

static const uint32_t bshim_109_tab4[96] = {
    0xef00f29bu, 0x8d386c4cu, 0x2b6fe5fdu, 0xc9a75faeu, 0x67ded95fu, 0x06165310u, 0xa44dccc1u, 0x42854672u,
    0xe0bcc023u, 0x7ef439d4u, 0x1d2bb385u, 0xbb632d36u, 0x599aa6e7u, 0xf7d22098u, 0x96099a49u, 0x344113fau,
    0xd2788dabu, 0x70b0075cu, 0x0ee7810du, 0xad1efabeu, 0x4b56746fu, 0xe98dee20u, 0x87c567d1u, 0x25fce182u,
    0xc4345b33u, 0x626bd4e4u, 0x00a34e95u, 0x9edac846u, 0x3d1241f7u, 0xdb49bba8u, 0x79813559u, 0x17b8af0au,
    0xb5f028bbu, 0x5427a26cu, 0xf25f1c1du, 0x909695ceu, 0x2ece0f7fu, 0xcd058930u, 0x6b3d02e1u, 0x09747c92u,
    0xa7abf643u, 0x45e36ff4u, 0xe41ae9a5u, 0x82526356u, 0x2089dd07u, 0xbec156b8u, 0x5cf8d069u, 0xfb304a1au,
    0x9967c3cbu, 0x379f3d7cu, 0xd5d6b72du, 0x740e30deu, 0x1245aa8fu, 0xb07d2440u, 0x4eb49df1u, 0xecec17a2u,
    0x8b239153u, 0x295b0b04u, 0xc79284b5u, 0x65c9fe66u, 0x04017817u, 0xa238f1c8u, 0x40706b79u, 0xdea7e52au,
    0x7cdf5edbu, 0x1b16d88cu, 0xb94e523du, 0x5785cbeeu, 0xf5bd459fu, 0x93f4bf50u, 0x322c3901u, 0xd063b2b2u,
    0x6e9b2c63u, 0x0cd2a614u, 0xab0a1fc5u, 0x49419976u, 0xe7791327u, 0x85b08cd8u, 0x23e80689u, 0xc21f803au,
    0x6056f9ebu, 0xfe8e739cu, 0x9cc5ed4du, 0x3afd66feu, 0xd934e0afu, 0x776c5a60u, 0x15a3d411u, 0xb3db4dc2u,
    0x5212c773u, 0xf04a4124u, 0x8e81bad5u, 0x2cb93486u, 0xcaf0ae37u, 0x692827e8u, 0x075fa199u, 0xa5971b4au,
};

static const uint32_t bshim_109_tab5[96] = {
    0x70b0075cu, 0x0ee7810du, 0xad1efabeu, 0x4b56746fu, 0xe98dee20u, 0x87c567d1u, 0x25fce182u, 0xc4345b33u,
    0x626bd4e4u, 0x00a34e95u, 0x9edac846u, 0x3d1241f7u, 0xdb49bba8u, 0x79813559u, 0x17b8af0au, 0xb5f028bbu,
    0x5427a26cu, 0xf25f1c1du, 0x909695ceu, 0x2ece0f7fu, 0xcd058930u, 0x6b3d02e1u, 0x09747c92u, 0xa7abf643u,
    0x45e36ff4u, 0xe41ae9a5u, 0x82526356u, 0x2089dd07u, 0xbec156b8u, 0x5cf8d069u, 0xfb304a1au, 0x9967c3cbu,
    0x379f3d7cu, 0xd5d6b72du, 0x740e30deu, 0x1245aa8fu, 0xb07d2440u, 0x4eb49df1u, 0xecec17a2u, 0x8b239153u,
    0x295b0b04u, 0xc79284b5u, 0x65c9fe66u, 0x04017817u, 0xa238f1c8u, 0x40706b79u, 0xdea7e52au, 0x7cdf5edbu,
    0x1b16d88cu, 0xb94e523du, 0x5785cbeeu, 0xf5bd459fu, 0x93f4bf50u, 0x322c3901u, 0xd063b2b2u, 0x6e9b2c63u,
    0x0cd2a614u, 0xab0a1fc5u, 0x49419976u, 0xe7791327u, 0x85b08cd8u, 0x23e80689u, 0xc21f803au, 0x6056f9ebu,
    0xfe8e739cu, 0x9cc5ed4du, 0x3afd66feu, 0xd934e0afu, 0x776c5a60u, 0x15a3d411u, 0xb3db4dc2u, 0x5212c773u,
    0xf04a4124u, 0x8e81bad5u, 0x2cb93486u, 0xcaf0ae37u, 0x692827e8u, 0x075fa199u, 0xa5971b4au, 0x43ce94fbu,
    0xe2060eacu, 0x803d885du, 0x1e75020eu, 0xbcac7bbfu, 0x5ae3f570u, 0xf91b6f21u, 0x9752e8d2u, 0x358a6283u,
    0xd3c1dc34u, 0x71f955e5u, 0x1030cf96u, 0xae684947u, 0x4c9fc2f8u, 0xead73ca9u, 0x890eb65au, 0x2746300bu,
};

static const uint32_t bshim_109_tab6[96] = {
    0xf25f1c1du, 0x909695ceu, 0x2ece0f7fu, 0xcd058930u, 0x6b3d02e1u, 0x09747c92u, 0xa7abf643u, 0x45e36ff4u,
    0xe41ae9a5u, 0x82526356u, 0x2089dd07u, 0xbec156b8u, 0x5cf8d069u, 0xfb304a1au, 0x9967c3cbu, 0x379f3d7cu,
    0xd5d6b72du, 0x740e30deu, 0x1245aa8fu, 0xb07d2440u, 0x4eb49df1u, 0xecec17a2u, 0x8b239153u, 0x295b0b04u,
    0xc79284b5u, 0x65c9fe66u, 0x04017817u, 0xa238f1c8u, 0x40706b79u, 0xdea7e52au, 0x7cdf5edbu, 0x1b16d88cu,
    0xb94e523du, 0x5785cbeeu, 0xf5bd459fu, 0x93f4bf50u, 0x322c3901u, 0xd063b2b2u, 0x6e9b2c63u, 0x0cd2a614u,
    0xab0a1fc5u, 0x49419976u, 0xe7791327u, 0x85b08cd8u, 0x23e80689u, 0xc21f803au, 0x6056f9ebu, 0xfe8e739cu,
    0x9cc5ed4du, 0x3afd66feu, 0xd934e0afu, 0x776c5a60u, 0x15a3d411u, 0xb3db4dc2u, 0x5212c773u, 0xf04a4124u,
    0x8e81bad5u, 0x2cb93486u, 0xcaf0ae37u, 0x692827e8u, 0x075fa199u, 0xa5971b4au, 0x43ce94fbu, 0xe2060eacu,
    0x803d885du, 0x1e75020eu, 0xbcac7bbfu, 0x5ae3f570u, 0xf91b6f21u, 0x9752e8d2u, 0x358a6283u, 0xd3c1dc34u,
    0x71f955e5u, 0x1030cf96u, 0xae684947u, 0x4c9fc2f8u, 0xead73ca9u, 0x890eb65au, 0x2746300bu, 0xc57da9bcu,
    0x63b5236du, 0x01ec9d1eu, 0xa02416cfu, 0x3e5b9080u, 0xdc930a31u, 0x7aca83e2u, 0x1901fd93u, 0xb7397744u,
    0x5570f0f5u, 0xf3a86aa6u, 0x91dfe457u, 0x30175e08u, 0xce4ed7b9u, 0x6c86516au, 0x0abdcb1bu, 0xa8f544ccu,
};

static const uint32_t bshim_109_tab7[96] = {
    0x740e30deu, 0x1245aa8fu, 0xb07d2440u, 0x4eb49df1u, 0xecec17a2u, 0x8b239153u, 0x295b0b04u, 0xc79284b5u,
    0x65c9fe66u, 0x04017817u, 0xa238f1c8u, 0x40706b79u, 0xdea7e52au, 0x7cdf5edbu, 0x1b16d88cu, 0xb94e523du,
    0x5785cbeeu, 0xf5bd459fu, 0x93f4bf50u, 0x322c3901u, 0xd063b2b2u, 0x6e9b2c63u, 0x0cd2a614u, 0xab0a1fc5u,
    0x49419976u, 0xe7791327u, 0x85b08cd8u, 0x23e80689u, 0xc21f803au, 0x6056f9ebu, 0xfe8e739cu, 0x9cc5ed4du,
    0x3afd66feu, 0xd934e0afu, 0x776c5a60u, 0x15a3d411u, 0xb3db4dc2u, 0x5212c773u, 0xf04a4124u, 0x8e81bad5u,
    0x2cb93486u, 0xcaf0ae37u, 0x692827e8u, 0x075fa199u, 0xa5971b4au, 0x43ce94fbu, 0xe2060eacu, 0x803d885du,
    0x1e75020eu, 0xbcac7bbfu, 0x5ae3f570u, 0xf91b6f21u, 0x9752e8d2u, 0x358a6283u, 0xd3c1dc34u, 0x71f955e5u,
    0x1030cf96u, 0xae684947u, 0x4c9fc2f8u, 0xead73ca9u, 0x890eb65au, 0x2746300bu, 0xc57da9bcu, 0x63b5236du,
    0x01ec9d1eu, 0xa02416cfu, 0x3e5b9080u, 0xdc930a31u, 0x7aca83e2u, 0x1901fd93u, 0xb7397744u, 0x5570f0f5u,
    0xf3a86aa6u, 0x91dfe457u, 0x30175e08u, 0xce4ed7b9u, 0x6c86516au, 0x0abdcb1bu, 0xa8f544ccu, 0x472cbe7du,
    0xe564382eu, 0x839bb1dfu, 0x21d32b90u, 0xc00aa541u, 0x5e421ef2u, 0xfc7998a3u, 0x9ab11254u, 0x38e88c05u,
    0xd72005b6u, 0x75577f67u, 0x138ef918u, 0xb1c672c9u, 0x4ffdec7au, 0xee35662bu, 0x8c6cdfdcu, 0x2aa4598du,
};

struct bshim_109_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_109_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_109_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_109_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_109_reset(struct bshim_109_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000d2bc3u;
    return 0;
}

