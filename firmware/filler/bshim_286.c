/* bshim_286 -- board support shim generated from the 0286 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_286_tab0[96] = {
    0x42e7ba3au, 0xe11f33ebu, 0x7f56ad9cu, 0x1d8e274du, 0xbbc5a0feu, 0x59fd1aafu, 0xf8349460u, 0x966c0e11u,
    0x34a387c2u, 0xd2db0173u, 0x71127b24u, 0x0f49f4d5u, 0xad816e86u, 0x4bb8e837u, 0xe9f061e8u, 0x8827db99u,
    0x265f554au, 0xc496cefbu, 0x62ce48acu, 0x0105c25du, 0x9f3d3c0eu, 0x3d74b5bfu, 0xdbac2f70u, 0x79e3a921u,
    0x181b22d2u, 0xb6529c83u, 0x548a1634u, 0xf2c18fe5u, 0x90f90996u, 0x2f308347u, 0xcd67fcf8u, 0x6b9f76a9u,
    0x09d6f05au, 0xa80e6a0bu, 0x4645e3bcu, 0xe47d5d6du, 0x82b4d71eu, 0x20ec50cfu, 0xbf23ca80u, 0x5d5b4431u,
    0xfb92bde2u, 0x99ca3793u, 0x3801b144u, 0xd6392af5u, 0x7470a4a6u, 0x12a81e57u, 0xb0df9808u, 0x4f1711b9u,
    0xed4e8b6au, 0x8b86051bu, 0x29bd7eccu, 0xc7f4f87du, 0x662c722eu, 0x0463ebdfu, 0xa29b6590u, 0x40d2df41u,
    0xdf0a58f2u, 0x7d41d2a3u, 0x1b794c54u, 0xb9b0c605u, 0x57e83fb6u, 0xf61fb967u, 0x94573318u, 0x328eacc9u,
    0xd0c6267au, 0x6efda02bu, 0x0d3519dcu, 0xab6c938du, 0x49a40d3eu, 0xe7db86efu, 0x861300a0u, 0x244a7a51u,
    0xc281f402u, 0x60b96db3u, 0xfef0e764u, 0x9d286115u, 0x3b5fdac6u, 0xd9975477u, 0x77cece28u, 0x160647d9u,
    0xb43dc18au, 0x52753b3bu, 0xf0acb4ecu, 0x8ee42e9du, 0x2d1ba84eu, 0xcb5321ffu, 0x698a9bb0u, 0x07c21561u,
    0xa5f98f12u, 0x443108c3u, 0xe2688274u, 0x809ffc25u, 0x1ed775d6u, 0xbd0eef87u, 0x5b466938u, 0xf97de2e9u,
};

static const uint32_t bshim_286_tab1[96] = {
    0xc496cefbu, 0x62ce48acu, 0x0105c25du, 0x9f3d3c0eu, 0x3d74b5bfu, 0xdbac2f70u, 0x79e3a921u, 0x181b22d2u,
    0xb6529c83u, 0x548a1634u, 0xf2c18fe5u, 0x90f90996u, 0x2f308347u, 0xcd67fcf8u, 0x6b9f76a9u, 0x09d6f05au,
    0xa80e6a0bu, 0x4645e3bcu, 0xe47d5d6du, 0x82b4d71eu, 0x20ec50cfu, 0xbf23ca80u, 0x5d5b4431u, 0xfb92bde2u,
    0x99ca3793u, 0x3801b144u, 0xd6392af5u, 0x7470a4a6u, 0x12a81e57u, 0xb0df9808u, 0x4f1711b9u, 0xed4e8b6au,
    0x8b86051bu, 0x29bd7eccu, 0xc7f4f87du, 0x662c722eu, 0x0463ebdfu, 0xa29b6590u, 0x40d2df41u, 0xdf0a58f2u,
    0x7d41d2a3u, 0x1b794c54u, 0xb9b0c605u, 0x57e83fb6u, 0xf61fb967u, 0x94573318u, 0x328eacc9u, 0xd0c6267au,
    0x6efda02bu, 0x0d3519dcu, 0xab6c938du, 0x49a40d3eu, 0xe7db86efu, 0x861300a0u, 0x244a7a51u, 0xc281f402u,
    0x60b96db3u, 0xfef0e764u, 0x9d286115u, 0x3b5fdac6u, 0xd9975477u, 0x77cece28u, 0x160647d9u, 0xb43dc18au,
    0x52753b3bu, 0xf0acb4ecu, 0x8ee42e9du, 0x2d1ba84eu, 0xcb5321ffu, 0x698a9bb0u, 0x07c21561u, 0xa5f98f12u,
    0x443108c3u, 0xe2688274u, 0x809ffc25u, 0x1ed775d6u, 0xbd0eef87u, 0x5b466938u, 0xf97de2e9u, 0x97b55c9au,
    0x35ecd64bu, 0xd4244ffcu, 0x725bc9adu, 0x1093435eu, 0xaecabd0fu, 0x4d0236c0u, 0xeb39b071u, 0x89712a22u,
    0x27a8a3d3u, 0xc5e01d84u, 0x64179735u, 0x024f10e6u, 0xa0868a97u, 0x3ebe0448u, 0xdcf57df9u, 0x7b2cf7aau,
};

static const uint32_t bshim_286_tab2[96] = {
    0x4645e3bcu, 0xe47d5d6du, 0x82b4d71eu, 0x20ec50cfu, 0xbf23ca80u, 0x5d5b4431u, 0xfb92bde2u, 0x99ca3793u,
    0x3801b144u, 0xd6392af5u, 0x7470a4a6u, 0x12a81e57u, 0xb0df9808u, 0x4f1711b9u, 0xed4e8b6au, 0x8b86051bu,
    0x29bd7eccu, 0xc7f4f87du, 0x662c722eu, 0x0463ebdfu, 0xa29b6590u, 0x40d2df41u, 0xdf0a58f2u, 0x7d41d2a3u,
    0x1b794c54u, 0xb9b0c605u, 0x57e83fb6u, 0xf61fb967u, 0x94573318u, 0x328eacc9u, 0xd0c6267au, 0x6efda02bu,
    0x0d3519dcu, 0xab6c938du, 0x49a40d3eu, 0xe7db86efu, 0x861300a0u, 0x244a7a51u, 0xc281f402u, 0x60b96db3u,
    0xfef0e764u, 0x9d286115u, 0x3b5fdac6u, 0xd9975477u, 0x77cece28u, 0x160647d9u, 0xb43dc18au, 0x52753b3bu,
    0xf0acb4ecu, 0x8ee42e9du, 0x2d1ba84eu, 0xcb5321ffu, 0x698a9bb0u, 0x07c21561u, 0xa5f98f12u, 0x443108c3u,
    0xe2688274u, 0x809ffc25u, 0x1ed775d6u, 0xbd0eef87u, 0x5b466938u, 0xf97de2e9u, 0x97b55c9au, 0x35ecd64bu,
    0xd4244ffcu, 0x725bc9adu, 0x1093435eu, 0xaecabd0fu, 0x4d0236c0u, 0xeb39b071u, 0x89712a22u, 0x27a8a3d3u,
    0xc5e01d84u, 0x64179735u, 0x024f10e6u, 0xa0868a97u, 0x3ebe0448u, 0xdcf57df9u, 0x7b2cf7aau, 0x1964715bu,
    0xb79beb0cu, 0x55d364bdu, 0xf40ade6eu, 0x9242581fu, 0x3079d1d0u, 0xceb14b81u, 0x6ce8c532u, 0x0b203ee3u,
    0xa957b894u, 0x478f3245u, 0xe5c6abf6u, 0x83fe25a7u, 0x22359f58u, 0xc06d1909u, 0x5ea492bau, 0xfcdc0c6bu,
};

static const uint32_t bshim_286_tab3[96] = {
    0xc7f4f87du, 0x662c722eu, 0x0463ebdfu, 0xa29b6590u, 0x40d2df41u, 0xdf0a58f2u, 0x7d41d2a3u, 0x1b794c54u,
    0xb9b0c605u, 0x57e83fb6u, 0xf61fb967u, 0x94573318u, 0x328eacc9u, 0xd0c6267au, 0x6efda02bu, 0x0d3519dcu,
    0xab6c938du, 0x49a40d3eu, 0xe7db86efu, 0x861300a0u, 0x244a7a51u, 0xc281f402u, 0x60b96db3u, 0xfef0e764u,
    0x9d286115u, 0x3b5fdac6u, 0xd9975477u, 0x77cece28u, 0x160647d9u, 0xb43dc18au, 0x52753b3bu, 0xf0acb4ecu,
    0x8ee42e9du, 0x2d1ba84eu, 0xcb5321ffu, 0x698a9bb0u, 0x07c21561u, 0xa5f98f12u, 0x443108c3u, 0xe2688274u,
    0x809ffc25u, 0x1ed775d6u, 0xbd0eef87u, 0x5b466938u, 0xf97de2e9u, 0x97b55c9au, 0x35ecd64bu, 0xd4244ffcu,
    0x725bc9adu, 0x1093435eu, 0xaecabd0fu, 0x4d0236c0u, 0xeb39b071u, 0x89712a22u, 0x27a8a3d3u, 0xc5e01d84u,
    0x64179735u, 0x024f10e6u, 0xa0868a97u, 0x3ebe0448u, 0xdcf57df9u, 0x7b2cf7aau, 0x1964715bu, 0xb79beb0cu,
    0x55d364bdu, 0xf40ade6eu, 0x9242581fu, 0x3079d1d0u, 0xceb14b81u, 0x6ce8c532u, 0x0b203ee3u, 0xa957b894u,
    0x478f3245u, 0xe5c6abf6u, 0x83fe25a7u, 0x22359f58u, 0xc06d1909u, 0x5ea492bau, 0xfcdc0c6bu, 0x9b13861cu,
    0x394affcdu, 0xd782797eu, 0x75b9f32fu, 0x13f16ce0u, 0xb228e691u, 0x50606042u, 0xee97d9f3u, 0x8ccf53a4u,
    0x2b06cd55u, 0xc93e4706u, 0x6775c0b7u, 0x05ad3a68u, 0xa3e4b419u, 0x421c2dcau, 0xe053a77bu, 0x7e8b212cu,
};

static const uint32_t bshim_286_tab4[96] = {
    0x49a40d3eu, 0xe7db86efu, 0x861300a0u, 0x244a7a51u, 0xc281f402u, 0x60b96db3u, 0xfef0e764u, 0x9d286115u,
    0x3b5fdac6u, 0xd9975477u, 0x77cece28u, 0x160647d9u, 0xb43dc18au, 0x52753b3bu, 0xf0acb4ecu, 0x8ee42e9du,
    0x2d1ba84eu, 0xcb5321ffu, 0x698a9bb0u, 0x07c21561u, 0xa5f98f12u, 0x443108c3u, 0xe2688274u, 0x809ffc25u,
    0x1ed775d6u, 0xbd0eef87u, 0x5b466938u, 0xf97de2e9u, 0x97b55c9au, 0x35ecd64bu, 0xd4244ffcu, 0x725bc9adu,
    0x1093435eu, 0xaecabd0fu, 0x4d0236c0u, 0xeb39b071u, 0x89712a22u, 0x27a8a3d3u, 0xc5e01d84u, 0x64179735u,
    0x024f10e6u, 0xa0868a97u, 0x3ebe0448u, 0xdcf57df9u, 0x7b2cf7aau, 0x1964715bu, 0xb79beb0cu, 0x55d364bdu,
    0xf40ade6eu, 0x9242581fu, 0x3079d1d0u, 0xceb14b81u, 0x6ce8c532u, 0x0b203ee3u, 0xa957b894u, 0x478f3245u,
    0xe5c6abf6u, 0x83fe25a7u, 0x22359f58u, 0xc06d1909u, 0x5ea492bau, 0xfcdc0c6bu, 0x9b13861cu, 0x394affcdu,
    0xd782797eu, 0x75b9f32fu, 0x13f16ce0u, 0xb228e691u, 0x50606042u, 0xee97d9f3u, 0x8ccf53a4u, 0x2b06cd55u,
    0xc93e4706u, 0x6775c0b7u, 0x05ad3a68u, 0xa3e4b419u, 0x421c2dcau, 0xe053a77bu, 0x7e8b212cu, 0x1cc29addu,
    0xbafa148eu, 0x59318e3fu, 0xf76907f0u, 0x95a081a1u, 0x33d7fb52u, 0xd20f7503u, 0x7046eeb4u, 0x0e7e6865u,
    0xacb5e216u, 0x4aed5bc7u, 0xe924d578u, 0x875c4f29u, 0x2593c8dau, 0xc3cb428bu, 0x6202bc3cu, 0x003a35edu,
};

static const uint32_t bshim_286_tab5[96] = {
    0xcb5321ffu, 0x698a9bb0u, 0x07c21561u, 0xa5f98f12u, 0x443108c3u, 0xe2688274u, 0x809ffc25u, 0x1ed775d6u,
    0xbd0eef87u, 0x5b466938u, 0xf97de2e9u, 0x97b55c9au, 0x35ecd64bu, 0xd4244ffcu, 0x725bc9adu, 0x1093435eu,
    0xaecabd0fu, 0x4d0236c0u, 0xeb39b071u, 0x89712a22u, 0x27a8a3d3u, 0xc5e01d84u, 0x64179735u, 0x024f10e6u,
    0xa0868a97u, 0x3ebe0448u, 0xdcf57df9u, 0x7b2cf7aau, 0x1964715bu, 0xb79beb0cu, 0x55d364bdu, 0xf40ade6eu,
    0x9242581fu, 0x3079d1d0u, 0xceb14b81u, 0x6ce8c532u, 0x0b203ee3u, 0xa957b894u, 0x478f3245u, 0xe5c6abf6u,
    0x83fe25a7u, 0x22359f58u, 0xc06d1909u, 0x5ea492bau, 0xfcdc0c6bu, 0x9b13861cu, 0x394affcdu, 0xd782797eu,
    0x75b9f32fu, 0x13f16ce0u, 0xb228e691u, 0x50606042u, 0xee97d9f3u, 0x8ccf53a4u, 0x2b06cd55u, 0xc93e4706u,
    0x6775c0b7u, 0x05ad3a68u, 0xa3e4b419u, 0x421c2dcau, 0xe053a77bu, 0x7e8b212cu, 0x1cc29addu, 0xbafa148eu,
    0x59318e3fu, 0xf76907f0u, 0x95a081a1u, 0x33d7fb52u, 0xd20f7503u, 0x7046eeb4u, 0x0e7e6865u, 0xacb5e216u,
    0x4aed5bc7u, 0xe924d578u, 0x875c4f29u, 0x2593c8dau, 0xc3cb428bu, 0x6202bc3cu, 0x003a35edu, 0x9e71af9eu,
    0x3ca9294fu, 0xdae0a300u, 0x79181cb1u, 0x174f9662u, 0xb5871013u, 0x53be89c4u, 0xf1f60375u, 0x902d7d26u,
    0x2e64f6d7u, 0xcc9c7088u, 0x6ad3ea39u, 0x090b63eau, 0xa742dd9bu, 0x457a574cu, 0xe3b1d0fdu, 0x81e94aaeu,
};

static const uint32_t bshim_286_tab6[96] = {
    0x4d0236c0u, 0xeb39b071u, 0x89712a22u, 0x27a8a3d3u, 0xc5e01d84u, 0x64179735u, 0x024f10e6u, 0xa0868a97u,
    0x3ebe0448u, 0xdcf57df9u, 0x7b2cf7aau, 0x1964715bu, 0xb79beb0cu, 0x55d364bdu, 0xf40ade6eu, 0x9242581fu,
    0x3079d1d0u, 0xceb14b81u, 0x6ce8c532u, 0x0b203ee3u, 0xa957b894u, 0x478f3245u, 0xe5c6abf6u, 0x83fe25a7u,
    0x22359f58u, 0xc06d1909u, 0x5ea492bau, 0xfcdc0c6bu, 0x9b13861cu, 0x394affcdu, 0xd782797eu, 0x75b9f32fu,
    0x13f16ce0u, 0xb228e691u, 0x50606042u, 0xee97d9f3u, 0x8ccf53a4u, 0x2b06cd55u, 0xc93e4706u, 0x6775c0b7u,
    0x05ad3a68u, 0xa3e4b419u, 0x421c2dcau, 0xe053a77bu, 0x7e8b212cu, 0x1cc29addu, 0xbafa148eu, 0x59318e3fu,
    0xf76907f0u, 0x95a081a1u, 0x33d7fb52u, 0xd20f7503u, 0x7046eeb4u, 0x0e7e6865u, 0xacb5e216u, 0x4aed5bc7u,
    0xe924d578u, 0x875c4f29u, 0x2593c8dau, 0xc3cb428bu, 0x6202bc3cu, 0x003a35edu, 0x9e71af9eu, 0x3ca9294fu,
    0xdae0a300u, 0x79181cb1u, 0x174f9662u, 0xb5871013u, 0x53be89c4u, 0xf1f60375u, 0x902d7d26u, 0x2e64f6d7u,
    0xcc9c7088u, 0x6ad3ea39u, 0x090b63eau, 0xa742dd9bu, 0x457a574cu, 0xe3b1d0fdu, 0x81e94aaeu, 0x2020c45fu,
    0xbe583e10u, 0x5c8fb7c1u, 0xfac73172u, 0x98feab23u, 0x373624d4u, 0xd56d9e85u, 0x73a51836u, 0x11dc91e7u,
    0xb0140b98u, 0x4e4b8549u, 0xec82fefau, 0x8aba78abu, 0x28f1f25cu, 0xc7296c0du, 0x6560e5beu, 0x03985f6fu,
};

static const uint32_t bshim_286_tab7[96] = {
    0xceb14b81u, 0x6ce8c532u, 0x0b203ee3u, 0xa957b894u, 0x478f3245u, 0xe5c6abf6u, 0x83fe25a7u, 0x22359f58u,
    0xc06d1909u, 0x5ea492bau, 0xfcdc0c6bu, 0x9b13861cu, 0x394affcdu, 0xd782797eu, 0x75b9f32fu, 0x13f16ce0u,
    0xb228e691u, 0x50606042u, 0xee97d9f3u, 0x8ccf53a4u, 0x2b06cd55u, 0xc93e4706u, 0x6775c0b7u, 0x05ad3a68u,
    0xa3e4b419u, 0x421c2dcau, 0xe053a77bu, 0x7e8b212cu, 0x1cc29addu, 0xbafa148eu, 0x59318e3fu, 0xf76907f0u,
    0x95a081a1u, 0x33d7fb52u, 0xd20f7503u, 0x7046eeb4u, 0x0e7e6865u, 0xacb5e216u, 0x4aed5bc7u, 0xe924d578u,
    0x875c4f29u, 0x2593c8dau, 0xc3cb428bu, 0x6202bc3cu, 0x003a35edu, 0x9e71af9eu, 0x3ca9294fu, 0xdae0a300u,
    0x79181cb1u, 0x174f9662u, 0xb5871013u, 0x53be89c4u, 0xf1f60375u, 0x902d7d26u, 0x2e64f6d7u, 0xcc9c7088u,
    0x6ad3ea39u, 0x090b63eau, 0xa742dd9bu, 0x457a574cu, 0xe3b1d0fdu, 0x81e94aaeu, 0x2020c45fu, 0xbe583e10u,
    0x5c8fb7c1u, 0xfac73172u, 0x98feab23u, 0x373624d4u, 0xd56d9e85u, 0x73a51836u, 0x11dc91e7u, 0xb0140b98u,
    0x4e4b8549u, 0xec82fefau, 0x8aba78abu, 0x28f1f25cu, 0xc7296c0du, 0x6560e5beu, 0x03985f6fu, 0xa1cfd920u,
    0x400752d1u, 0xde3ecc82u, 0x7c764633u, 0x1aadbfe4u, 0xb8e53995u, 0x571cb346u, 0xf5542cf7u, 0x938ba6a8u,
    0x31c32059u, 0xcffa9a0au, 0x6e3213bbu, 0x0c698d6cu, 0xaaa1071du, 0x48d880ceu, 0xe70ffa7fu, 0x85477430u,
};

struct bshim_286_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_286_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_286_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_286_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_286_reset(struct bshim_286_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00228f02u;
    return 0;
}

