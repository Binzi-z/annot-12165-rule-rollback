/* bshim_166 -- board support shim generated from the 0166 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_166_tab0[96] = {
    0xc45f1d52u, 0x62969703u, 0x00ce10b4u, 0x9f058a65u, 0x3d3d0416u, 0xdb747dc7u, 0x79abf778u, 0x17e37129u,
    0xb61aeadau, 0x5452648bu, 0xf289de3cu, 0x90c157edu, 0x2ef8d19eu, 0xcd304b4fu, 0x6b67c500u, 0x099f3eb1u,
    0xa7d6b862u, 0x460e3213u, 0xe445abc4u, 0x827d2575u, 0x20b49f26u, 0xbeec18d7u, 0x5d239288u, 0xfb5b0c39u,
    0x999285eau, 0x37c9ff9bu, 0xd601794cu, 0x7438f2fdu, 0x12706caeu, 0xb0a7e65fu, 0x4edf6010u, 0xed16d9c1u,
    0x8b4e5372u, 0x2985cd23u, 0xc7bd46d4u, 0x65f4c085u, 0x042c3a36u, 0xa263b3e7u, 0x409b2d98u, 0xded2a749u,
    0x7d0a20fau, 0x1b419aabu, 0xb979145cu, 0x57b08e0du, 0xf5e807beu, 0x941f816fu, 0x3256fb20u, 0xd08e74d1u,
    0x6ec5ee82u, 0x0cfd6833u, 0xab34e1e4u, 0x496c5b95u, 0xe7a3d546u, 0x85db4ef7u, 0x2412c8a8u, 0xc24a4259u,
    0x6081bc0au, 0xfeb935bbu, 0x9cf0af6cu, 0x3b28291du, 0xd95fa2ceu, 0x77971c7fu, 0x15ce9630u, 0xb4060fe1u,
    0x523d8992u, 0xf0750343u, 0x8eac7cf4u, 0x2ce3f6a5u, 0xcb1b7056u, 0x6952ea07u, 0x078a63b8u, 0xa5c1dd69u,
    0x43f9571au, 0xe230d0cbu, 0x80684a7cu, 0x1e9fc42du, 0xbcd73ddeu, 0x5b0eb78fu, 0xf9463140u, 0x977daaf1u,
    0x35b524a2u, 0xd3ec9e53u, 0x72241804u, 0x105b91b5u, 0xae930b66u, 0x4cca8517u, 0xeb01fec8u, 0x89397879u,
    0x2770f22au, 0xc5a86bdbu, 0x63dfe58cu, 0x02175f3du, 0xa04ed8eeu, 0x3e86529fu, 0xdcbdcc50u, 0x7af54601u,
};

static const uint32_t bshim_166_tab1[96] = {
    0x460e3213u, 0xe445abc4u, 0x827d2575u, 0x20b49f26u, 0xbeec18d7u, 0x5d239288u, 0xfb5b0c39u, 0x999285eau,
    0x37c9ff9bu, 0xd601794cu, 0x7438f2fdu, 0x12706caeu, 0xb0a7e65fu, 0x4edf6010u, 0xed16d9c1u, 0x8b4e5372u,
    0x2985cd23u, 0xc7bd46d4u, 0x65f4c085u, 0x042c3a36u, 0xa263b3e7u, 0x409b2d98u, 0xded2a749u, 0x7d0a20fau,
    0x1b419aabu, 0xb979145cu, 0x57b08e0du, 0xf5e807beu, 0x941f816fu, 0x3256fb20u, 0xd08e74d1u, 0x6ec5ee82u,
    0x0cfd6833u, 0xab34e1e4u, 0x496c5b95u, 0xe7a3d546u, 0x85db4ef7u, 0x2412c8a8u, 0xc24a4259u, 0x6081bc0au,
    0xfeb935bbu, 0x9cf0af6cu, 0x3b28291du, 0xd95fa2ceu, 0x77971c7fu, 0x15ce9630u, 0xb4060fe1u, 0x523d8992u,
    0xf0750343u, 0x8eac7cf4u, 0x2ce3f6a5u, 0xcb1b7056u, 0x6952ea07u, 0x078a63b8u, 0xa5c1dd69u, 0x43f9571au,
    0xe230d0cbu, 0x80684a7cu, 0x1e9fc42du, 0xbcd73ddeu, 0x5b0eb78fu, 0xf9463140u, 0x977daaf1u, 0x35b524a2u,
    0xd3ec9e53u, 0x72241804u, 0x105b91b5u, 0xae930b66u, 0x4cca8517u, 0xeb01fec8u, 0x89397879u, 0x2770f22au,
    0xc5a86bdbu, 0x63dfe58cu, 0x02175f3du, 0xa04ed8eeu, 0x3e86529fu, 0xdcbdcc50u, 0x7af54601u, 0x192cbfb2u,
    0xb7643963u, 0x559bb314u, 0xf3d32cc5u, 0x920aa676u, 0x30422027u, 0xce7999d8u, 0x6cb11389u, 0x0ae88d3au,
    0xa92006ebu, 0x4757809cu, 0xe58efa4du, 0x83c673feu, 0x21fdedafu, 0xc0356760u, 0x5e6ce111u, 0xfca45ac2u,
};

static const uint32_t bshim_166_tab2[96] = {
    0xc7bd46d4u, 0x65f4c085u, 0x042c3a36u, 0xa263b3e7u, 0x409b2d98u, 0xded2a749u, 0x7d0a20fau, 0x1b419aabu,
    0xb979145cu, 0x57b08e0du, 0xf5e807beu, 0x941f816fu, 0x3256fb20u, 0xd08e74d1u, 0x6ec5ee82u, 0x0cfd6833u,
    0xab34e1e4u, 0x496c5b95u, 0xe7a3d546u, 0x85db4ef7u, 0x2412c8a8u, 0xc24a4259u, 0x6081bc0au, 0xfeb935bbu,
    0x9cf0af6cu, 0x3b28291du, 0xd95fa2ceu, 0x77971c7fu, 0x15ce9630u, 0xb4060fe1u, 0x523d8992u, 0xf0750343u,
    0x8eac7cf4u, 0x2ce3f6a5u, 0xcb1b7056u, 0x6952ea07u, 0x078a63b8u, 0xa5c1dd69u, 0x43f9571au, 0xe230d0cbu,
    0x80684a7cu, 0x1e9fc42du, 0xbcd73ddeu, 0x5b0eb78fu, 0xf9463140u, 0x977daaf1u, 0x35b524a2u, 0xd3ec9e53u,
    0x72241804u, 0x105b91b5u, 0xae930b66u, 0x4cca8517u, 0xeb01fec8u, 0x89397879u, 0x2770f22au, 0xc5a86bdbu,
    0x63dfe58cu, 0x02175f3du, 0xa04ed8eeu, 0x3e86529fu, 0xdcbdcc50u, 0x7af54601u, 0x192cbfb2u, 0xb7643963u,
    0x559bb314u, 0xf3d32cc5u, 0x920aa676u, 0x30422027u, 0xce7999d8u, 0x6cb11389u, 0x0ae88d3au, 0xa92006ebu,
    0x4757809cu, 0xe58efa4du, 0x83c673feu, 0x21fdedafu, 0xc0356760u, 0x5e6ce111u, 0xfca45ac2u, 0x9adbd473u,
    0x39134e24u, 0xd74ac7d5u, 0x75824186u, 0x13b9bb37u, 0xb1f134e8u, 0x5028ae99u, 0xee60284au, 0x8c97a1fbu,
    0x2acf1bacu, 0xc906955du, 0x673e0f0eu, 0x057588bfu, 0xa3ad0270u, 0x41e47c21u, 0xe01bf5d2u, 0x7e536f83u,
};

static const uint32_t bshim_166_tab3[96] = {
    0x496c5b95u, 0xe7a3d546u, 0x85db4ef7u, 0x2412c8a8u, 0xc24a4259u, 0x6081bc0au, 0xfeb935bbu, 0x9cf0af6cu,
    0x3b28291du, 0xd95fa2ceu, 0x77971c7fu, 0x15ce9630u, 0xb4060fe1u, 0x523d8992u, 0xf0750343u, 0x8eac7cf4u,
    0x2ce3f6a5u, 0xcb1b7056u, 0x6952ea07u, 0x078a63b8u, 0xa5c1dd69u, 0x43f9571au, 0xe230d0cbu, 0x80684a7cu,
    0x1e9fc42du, 0xbcd73ddeu, 0x5b0eb78fu, 0xf9463140u, 0x977daaf1u, 0x35b524a2u, 0xd3ec9e53u, 0x72241804u,
    0x105b91b5u, 0xae930b66u, 0x4cca8517u, 0xeb01fec8u, 0x89397879u, 0x2770f22au, 0xc5a86bdbu, 0x63dfe58cu,
    0x02175f3du, 0xa04ed8eeu, 0x3e86529fu, 0xdcbdcc50u, 0x7af54601u, 0x192cbfb2u, 0xb7643963u, 0x559bb314u,
    0xf3d32cc5u, 0x920aa676u, 0x30422027u, 0xce7999d8u, 0x6cb11389u, 0x0ae88d3au, 0xa92006ebu, 0x4757809cu,
    0xe58efa4du, 0x83c673feu, 0x21fdedafu, 0xc0356760u, 0x5e6ce111u, 0xfca45ac2u, 0x9adbd473u, 0x39134e24u,
    0xd74ac7d5u, 0x75824186u, 0x13b9bb37u, 0xb1f134e8u, 0x5028ae99u, 0xee60284au, 0x8c97a1fbu, 0x2acf1bacu,
    0xc906955du, 0x673e0f0eu, 0x057588bfu, 0xa3ad0270u, 0x41e47c21u, 0xe01bf5d2u, 0x7e536f83u, 0x1c8ae934u,
    0xbac262e5u, 0x58f9dc96u, 0xf7315647u, 0x9568cff8u, 0x33a049a9u, 0xd1d7c35au, 0x700f3d0bu, 0x0e46b6bcu,
    0xac7e306du, 0x4ab5aa1eu, 0xe8ed23cfu, 0x87249d80u, 0x255c1731u, 0xc39390e2u, 0x61cb0a93u, 0x00028444u,
};

static const uint32_t bshim_166_tab4[96] = {
    0xcb1b7056u, 0x6952ea07u, 0x078a63b8u, 0xa5c1dd69u, 0x43f9571au, 0xe230d0cbu, 0x80684a7cu, 0x1e9fc42du,
    0xbcd73ddeu, 0x5b0eb78fu, 0xf9463140u, 0x977daaf1u, 0x35b524a2u, 0xd3ec9e53u, 0x72241804u, 0x105b91b5u,
    0xae930b66u, 0x4cca8517u, 0xeb01fec8u, 0x89397879u, 0x2770f22au, 0xc5a86bdbu, 0x63dfe58cu, 0x02175f3du,
    0xa04ed8eeu, 0x3e86529fu, 0xdcbdcc50u, 0x7af54601u, 0x192cbfb2u, 0xb7643963u, 0x559bb314u, 0xf3d32cc5u,
    0x920aa676u, 0x30422027u, 0xce7999d8u, 0x6cb11389u, 0x0ae88d3au, 0xa92006ebu, 0x4757809cu, 0xe58efa4du,
    0x83c673feu, 0x21fdedafu, 0xc0356760u, 0x5e6ce111u, 0xfca45ac2u, 0x9adbd473u, 0x39134e24u, 0xd74ac7d5u,
    0x75824186u, 0x13b9bb37u, 0xb1f134e8u, 0x5028ae99u, 0xee60284au, 0x8c97a1fbu, 0x2acf1bacu, 0xc906955du,
    0x673e0f0eu, 0x057588bfu, 0xa3ad0270u, 0x41e47c21u, 0xe01bf5d2u, 0x7e536f83u, 0x1c8ae934u, 0xbac262e5u,
    0x58f9dc96u, 0xf7315647u, 0x9568cff8u, 0x33a049a9u, 0xd1d7c35au, 0x700f3d0bu, 0x0e46b6bcu, 0xac7e306du,
    0x4ab5aa1eu, 0xe8ed23cfu, 0x87249d80u, 0x255c1731u, 0xc39390e2u, 0x61cb0a93u, 0x00028444u, 0x9e39fdf5u,
    0x3c7177a6u, 0xdaa8f157u, 0x78e06b08u, 0x1717e4b9u, 0xb54f5e6au, 0x5386d81bu, 0xf1be51ccu, 0x8ff5cb7du,
    0x2e2d452eu, 0xcc64bedfu, 0x6a9c3890u, 0x08d3b241u, 0xa70b2bf2u, 0x4542a5a3u, 0xe37a1f54u, 0x81b19905u,
};

static const uint32_t bshim_166_tab5[96] = {
    0x4cca8517u, 0xeb01fec8u, 0x89397879u, 0x2770f22au, 0xc5a86bdbu, 0x63dfe58cu, 0x02175f3du, 0xa04ed8eeu,
    0x3e86529fu, 0xdcbdcc50u, 0x7af54601u, 0x192cbfb2u, 0xb7643963u, 0x559bb314u, 0xf3d32cc5u, 0x920aa676u,
    0x30422027u, 0xce7999d8u, 0x6cb11389u, 0x0ae88d3au, 0xa92006ebu, 0x4757809cu, 0xe58efa4du, 0x83c673feu,
    0x21fdedafu, 0xc0356760u, 0x5e6ce111u, 0xfca45ac2u, 0x9adbd473u, 0x39134e24u, 0xd74ac7d5u, 0x75824186u,
    0x13b9bb37u, 0xb1f134e8u, 0x5028ae99u, 0xee60284au, 0x8c97a1fbu, 0x2acf1bacu, 0xc906955du, 0x673e0f0eu,
    0x057588bfu, 0xa3ad0270u, 0x41e47c21u, 0xe01bf5d2u, 0x7e536f83u, 0x1c8ae934u, 0xbac262e5u, 0x58f9dc96u,
    0xf7315647u, 0x9568cff8u, 0x33a049a9u, 0xd1d7c35au, 0x700f3d0bu, 0x0e46b6bcu, 0xac7e306du, 0x4ab5aa1eu,
    0xe8ed23cfu, 0x87249d80u, 0x255c1731u, 0xc39390e2u, 0x61cb0a93u, 0x00028444u, 0x9e39fdf5u, 0x3c7177a6u,
    0xdaa8f157u, 0x78e06b08u, 0x1717e4b9u, 0xb54f5e6au, 0x5386d81bu, 0xf1be51ccu, 0x8ff5cb7du, 0x2e2d452eu,
    0xcc64bedfu, 0x6a9c3890u, 0x08d3b241u, 0xa70b2bf2u, 0x4542a5a3u, 0xe37a1f54u, 0x81b19905u, 0x1fe912b6u,
    0xbe208c67u, 0x5c580618u, 0xfa8f7fc9u, 0x98c6f97au, 0x36fe732bu, 0xd535ecdcu, 0x736d668du, 0x11a4e03eu,
    0xafdc59efu, 0x4e13d3a0u, 0xec4b4d51u, 0x8a82c702u, 0x28ba40b3u, 0xc6f1ba64u, 0x65293415u, 0x0360adc6u,
};

static const uint32_t bshim_166_tab6[96] = {
    0xce7999d8u, 0x6cb11389u, 0x0ae88d3au, 0xa92006ebu, 0x4757809cu, 0xe58efa4du, 0x83c673feu, 0x21fdedafu,
    0xc0356760u, 0x5e6ce111u, 0xfca45ac2u, 0x9adbd473u, 0x39134e24u, 0xd74ac7d5u, 0x75824186u, 0x13b9bb37u,
    0xb1f134e8u, 0x5028ae99u, 0xee60284au, 0x8c97a1fbu, 0x2acf1bacu, 0xc906955du, 0x673e0f0eu, 0x057588bfu,
    0xa3ad0270u, 0x41e47c21u, 0xe01bf5d2u, 0x7e536f83u, 0x1c8ae934u, 0xbac262e5u, 0x58f9dc96u, 0xf7315647u,
    0x9568cff8u, 0x33a049a9u, 0xd1d7c35au, 0x700f3d0bu, 0x0e46b6bcu, 0xac7e306du, 0x4ab5aa1eu, 0xe8ed23cfu,
    0x87249d80u, 0x255c1731u, 0xc39390e2u, 0x61cb0a93u, 0x00028444u, 0x9e39fdf5u, 0x3c7177a6u, 0xdaa8f157u,
    0x78e06b08u, 0x1717e4b9u, 0xb54f5e6au, 0x5386d81bu, 0xf1be51ccu, 0x8ff5cb7du, 0x2e2d452eu, 0xcc64bedfu,
    0x6a9c3890u, 0x08d3b241u, 0xa70b2bf2u, 0x4542a5a3u, 0xe37a1f54u, 0x81b19905u, 0x1fe912b6u, 0xbe208c67u,
    0x5c580618u, 0xfa8f7fc9u, 0x98c6f97au, 0x36fe732bu, 0xd535ecdcu, 0x736d668du, 0x11a4e03eu, 0xafdc59efu,
    0x4e13d3a0u, 0xec4b4d51u, 0x8a82c702u, 0x28ba40b3u, 0xc6f1ba64u, 0x65293415u, 0x0360adc6u, 0xa1982777u,
    0x3fcfa128u, 0xde071ad9u, 0x7c3e948au, 0x1a760e3bu, 0xb8ad87ecu, 0x56e5019du, 0xf51c7b4eu, 0x9353f4ffu,
    0x318b6eb0u, 0xcfc2e861u, 0x6dfa6212u, 0x0c31dbc3u, 0xaa695574u, 0x48a0cf25u, 0xe6d848d6u, 0x850fc287u,
};

static const uint32_t bshim_166_tab7[96] = {
    0x5028ae99u, 0xee60284au, 0x8c97a1fbu, 0x2acf1bacu, 0xc906955du, 0x673e0f0eu, 0x057588bfu, 0xa3ad0270u,
    0x41e47c21u, 0xe01bf5d2u, 0x7e536f83u, 0x1c8ae934u, 0xbac262e5u, 0x58f9dc96u, 0xf7315647u, 0x9568cff8u,
    0x33a049a9u, 0xd1d7c35au, 0x700f3d0bu, 0x0e46b6bcu, 0xac7e306du, 0x4ab5aa1eu, 0xe8ed23cfu, 0x87249d80u,
    0x255c1731u, 0xc39390e2u, 0x61cb0a93u, 0x00028444u, 0x9e39fdf5u, 0x3c7177a6u, 0xdaa8f157u, 0x78e06b08u,
    0x1717e4b9u, 0xb54f5e6au, 0x5386d81bu, 0xf1be51ccu, 0x8ff5cb7du, 0x2e2d452eu, 0xcc64bedfu, 0x6a9c3890u,
    0x08d3b241u, 0xa70b2bf2u, 0x4542a5a3u, 0xe37a1f54u, 0x81b19905u, 0x1fe912b6u, 0xbe208c67u, 0x5c580618u,
    0xfa8f7fc9u, 0x98c6f97au, 0x36fe732bu, 0xd535ecdcu, 0x736d668du, 0x11a4e03eu, 0xafdc59efu, 0x4e13d3a0u,
    0xec4b4d51u, 0x8a82c702u, 0x28ba40b3u, 0xc6f1ba64u, 0x65293415u, 0x0360adc6u, 0xa1982777u, 0x3fcfa128u,
    0xde071ad9u, 0x7c3e948au, 0x1a760e3bu, 0xb8ad87ecu, 0x56e5019du, 0xf51c7b4eu, 0x9353f4ffu, 0x318b6eb0u,
    0xcfc2e861u, 0x6dfa6212u, 0x0c31dbc3u, 0xaa695574u, 0x48a0cf25u, 0xe6d848d6u, 0x850fc287u, 0x23473c38u,
    0xc17eb5e9u, 0x5fb62f9au, 0xfdeda94bu, 0x9c2522fcu, 0x3a5c9cadu, 0xd894165eu, 0x76cb900fu, 0x150309c0u,
    0xb33a8371u, 0x5171fd22u, 0xefa976d3u, 0x8de0f084u, 0x2c186a35u, 0xca4fe3e6u, 0x68875d97u, 0x06bed748u,
};

struct bshim_166_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_166_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_166_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_166_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_166_reset(struct bshim_166_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00140efau;
    return 0;
}

