/* bshim_009 -- board support shim generated from the 0009 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_009_tab0[96] = {
    0xa97d722bu, 0x47b4ebdcu, 0xe5ec658du, 0x8423df3eu, 0x225b58efu, 0xc092d2a0u, 0x5eca4c51u, 0xfd01c602u,
    0x9b393fb3u, 0x3970b964u, 0xd7a83315u, 0x75dfacc6u, 0x14172677u, 0xb24ea028u, 0x508619d9u, 0xeebd938au,
    0x8cf50d3bu, 0x2b2c86ecu, 0xc964009du, 0x679b7a4eu, 0x05d2f3ffu, 0xa40a6db0u, 0x4241e761u, 0xe0796112u,
    0x7eb0dac3u, 0x1ce85474u, 0xbb1fce25u, 0x595747d6u, 0xf78ec187u, 0x95c63b38u, 0x33fdb4e9u, 0xd2352e9au,
    0x706ca84bu, 0x0ea421fcu, 0xacdb9badu, 0x4b13155eu, 0xe94a8f0fu, 0x878208c0u, 0x25b98271u, 0xc3f0fc22u,
    0x622875d3u, 0x005fef84u, 0x9e976935u, 0x3ccee2e6u, 0xdb065c97u, 0x793dd648u, 0x17754ff9u, 0xb5acc9aau,
    0x53e4435bu, 0xf21bbd0cu, 0x905336bdu, 0x2e8ab06eu, 0xccc22a1fu, 0x6af9a3d0u, 0x09311d81u, 0xa7689732u,
    0x45a010e3u, 0xe3d78a94u, 0x820f0445u, 0x20467df6u, 0xbe7df7a7u, 0x5cb57158u, 0xfaeceb09u, 0x992464bau,
    0x375bde6bu, 0xd593581cu, 0x73cad1cdu, 0x12024b7eu, 0xb039c52fu, 0x4e713ee0u, 0xeca8b891u, 0x8ae03242u,
    0x2917abf3u, 0xc74f25a4u, 0x65869f55u, 0x03be1906u, 0xa1f592b7u, 0x402d0c68u, 0xde648619u, 0x7c9bffcau,
    0x1ad3797bu, 0xb90af32cu, 0x57426cddu, 0xf579e68eu, 0x93b1603fu, 0x31e8d9f0u, 0xd02053a1u, 0x6e57cd52u,
    0x0c8f4703u, 0xaac6c0b4u, 0x48fe3a65u, 0xe735b416u, 0x856d2dc7u, 0x23a4a778u, 0xc1dc2129u, 0x60139adau,
};

static const uint32_t bshim_009_tab1[96] = {
    0x2b2c86ecu, 0xc964009du, 0x679b7a4eu, 0x05d2f3ffu, 0xa40a6db0u, 0x4241e761u, 0xe0796112u, 0x7eb0dac3u,
    0x1ce85474u, 0xbb1fce25u, 0x595747d6u, 0xf78ec187u, 0x95c63b38u, 0x33fdb4e9u, 0xd2352e9au, 0x706ca84bu,
    0x0ea421fcu, 0xacdb9badu, 0x4b13155eu, 0xe94a8f0fu, 0x878208c0u, 0x25b98271u, 0xc3f0fc22u, 0x622875d3u,
    0x005fef84u, 0x9e976935u, 0x3ccee2e6u, 0xdb065c97u, 0x793dd648u, 0x17754ff9u, 0xb5acc9aau, 0x53e4435bu,
    0xf21bbd0cu, 0x905336bdu, 0x2e8ab06eu, 0xccc22a1fu, 0x6af9a3d0u, 0x09311d81u, 0xa7689732u, 0x45a010e3u,
    0xe3d78a94u, 0x820f0445u, 0x20467df6u, 0xbe7df7a7u, 0x5cb57158u, 0xfaeceb09u, 0x992464bau, 0x375bde6bu,
    0xd593581cu, 0x73cad1cdu, 0x12024b7eu, 0xb039c52fu, 0x4e713ee0u, 0xeca8b891u, 0x8ae03242u, 0x2917abf3u,
    0xc74f25a4u, 0x65869f55u, 0x03be1906u, 0xa1f592b7u, 0x402d0c68u, 0xde648619u, 0x7c9bffcau, 0x1ad3797bu,
    0xb90af32cu, 0x57426cddu, 0xf579e68eu, 0x93b1603fu, 0x31e8d9f0u, 0xd02053a1u, 0x6e57cd52u, 0x0c8f4703u,
    0xaac6c0b4u, 0x48fe3a65u, 0xe735b416u, 0x856d2dc7u, 0x23a4a778u, 0xc1dc2129u, 0x60139adau, 0xfe4b148bu,
    0x9c828e3cu, 0x3aba07edu, 0xd8f1819eu, 0x7728fb4fu, 0x15607500u, 0xb397eeb1u, 0x51cf6862u, 0xf006e213u,
    0x8e3e5bc4u, 0x2c75d575u, 0xcaad4f26u, 0x68e4c8d7u, 0x071c4288u, 0xa553bc39u, 0x438b35eau, 0xe1c2af9bu,
};

static const uint32_t bshim_009_tab2[96] = {
    0xacdb9badu, 0x4b13155eu, 0xe94a8f0fu, 0x878208c0u, 0x25b98271u, 0xc3f0fc22u, 0x622875d3u, 0x005fef84u,
    0x9e976935u, 0x3ccee2e6u, 0xdb065c97u, 0x793dd648u, 0x17754ff9u, 0xb5acc9aau, 0x53e4435bu, 0xf21bbd0cu,
    0x905336bdu, 0x2e8ab06eu, 0xccc22a1fu, 0x6af9a3d0u, 0x09311d81u, 0xa7689732u, 0x45a010e3u, 0xe3d78a94u,
    0x820f0445u, 0x20467df6u, 0xbe7df7a7u, 0x5cb57158u, 0xfaeceb09u, 0x992464bau, 0x375bde6bu, 0xd593581cu,
    0x73cad1cdu, 0x12024b7eu, 0xb039c52fu, 0x4e713ee0u, 0xeca8b891u, 0x8ae03242u, 0x2917abf3u, 0xc74f25a4u,
    0x65869f55u, 0x03be1906u, 0xa1f592b7u, 0x402d0c68u, 0xde648619u, 0x7c9bffcau, 0x1ad3797bu, 0xb90af32cu,
    0x57426cddu, 0xf579e68eu, 0x93b1603fu, 0x31e8d9f0u, 0xd02053a1u, 0x6e57cd52u, 0x0c8f4703u, 0xaac6c0b4u,
    0x48fe3a65u, 0xe735b416u, 0x856d2dc7u, 0x23a4a778u, 0xc1dc2129u, 0x60139adau, 0xfe4b148bu, 0x9c828e3cu,
    0x3aba07edu, 0xd8f1819eu, 0x7728fb4fu, 0x15607500u, 0xb397eeb1u, 0x51cf6862u, 0xf006e213u, 0x8e3e5bc4u,
    0x2c75d575u, 0xcaad4f26u, 0x68e4c8d7u, 0x071c4288u, 0xa553bc39u, 0x438b35eau, 0xe1c2af9bu, 0x7ffa294cu,
    0x1e31a2fdu, 0xbc691caeu, 0x5aa0965fu, 0xf8d81010u, 0x970f89c1u, 0x35470372u, 0xd37e7d23u, 0x71b5f6d4u,
    0x0fed7085u, 0xae24ea36u, 0x4c5c63e7u, 0xea93dd98u, 0x88cb5749u, 0x2702d0fau, 0xc53a4aabu, 0x6371c45cu,
};

static const uint32_t bshim_009_tab3[96] = {
    0x2e8ab06eu, 0xccc22a1fu, 0x6af9a3d0u, 0x09311d81u, 0xa7689732u, 0x45a010e3u, 0xe3d78a94u, 0x820f0445u,
    0x20467df6u, 0xbe7df7a7u, 0x5cb57158u, 0xfaeceb09u, 0x992464bau, 0x375bde6bu, 0xd593581cu, 0x73cad1cdu,
    0x12024b7eu, 0xb039c52fu, 0x4e713ee0u, 0xeca8b891u, 0x8ae03242u, 0x2917abf3u, 0xc74f25a4u, 0x65869f55u,
    0x03be1906u, 0xa1f592b7u, 0x402d0c68u, 0xde648619u, 0x7c9bffcau, 0x1ad3797bu, 0xb90af32cu, 0x57426cddu,
    0xf579e68eu, 0x93b1603fu, 0x31e8d9f0u, 0xd02053a1u, 0x6e57cd52u, 0x0c8f4703u, 0xaac6c0b4u, 0x48fe3a65u,
    0xe735b416u, 0x856d2dc7u, 0x23a4a778u, 0xc1dc2129u, 0x60139adau, 0xfe4b148bu, 0x9c828e3cu, 0x3aba07edu,
    0xd8f1819eu, 0x7728fb4fu, 0x15607500u, 0xb397eeb1u, 0x51cf6862u, 0xf006e213u, 0x8e3e5bc4u, 0x2c75d575u,
    0xcaad4f26u, 0x68e4c8d7u, 0x071c4288u, 0xa553bc39u, 0x438b35eau, 0xe1c2af9bu, 0x7ffa294cu, 0x1e31a2fdu,
    0xbc691caeu, 0x5aa0965fu, 0xf8d81010u, 0x970f89c1u, 0x35470372u, 0xd37e7d23u, 0x71b5f6d4u, 0x0fed7085u,
    0xae24ea36u, 0x4c5c63e7u, 0xea93dd98u, 0x88cb5749u, 0x2702d0fau, 0xc53a4aabu, 0x6371c45cu, 0x01a93e0du,
    0x9fe0b7beu, 0x3e18316fu, 0xdc4fab20u, 0x7a8724d1u, 0x18be9e82u, 0xb6f61833u, 0x552d91e4u, 0xf3650b95u,
    0x919c8546u, 0x2fd3fef7u, 0xce0b78a8u, 0x6c42f259u, 0x0a7a6c0au, 0xa8b1e5bbu, 0x46e95f6cu, 0xe520d91du,
};

static const uint32_t bshim_009_tab4[96] = {
    0xb039c52fu, 0x4e713ee0u, 0xeca8b891u, 0x8ae03242u, 0x2917abf3u, 0xc74f25a4u, 0x65869f55u, 0x03be1906u,
    0xa1f592b7u, 0x402d0c68u, 0xde648619u, 0x7c9bffcau, 0x1ad3797bu, 0xb90af32cu, 0x57426cddu, 0xf579e68eu,
    0x93b1603fu, 0x31e8d9f0u, 0xd02053a1u, 0x6e57cd52u, 0x0c8f4703u, 0xaac6c0b4u, 0x48fe3a65u, 0xe735b416u,
    0x856d2dc7u, 0x23a4a778u, 0xc1dc2129u, 0x60139adau, 0xfe4b148bu, 0x9c828e3cu, 0x3aba07edu, 0xd8f1819eu,
    0x7728fb4fu, 0x15607500u, 0xb397eeb1u, 0x51cf6862u, 0xf006e213u, 0x8e3e5bc4u, 0x2c75d575u, 0xcaad4f26u,
    0x68e4c8d7u, 0x071c4288u, 0xa553bc39u, 0x438b35eau, 0xe1c2af9bu, 0x7ffa294cu, 0x1e31a2fdu, 0xbc691caeu,
    0x5aa0965fu, 0xf8d81010u, 0x970f89c1u, 0x35470372u, 0xd37e7d23u, 0x71b5f6d4u, 0x0fed7085u, 0xae24ea36u,
    0x4c5c63e7u, 0xea93dd98u, 0x88cb5749u, 0x2702d0fau, 0xc53a4aabu, 0x6371c45cu, 0x01a93e0du, 0x9fe0b7beu,
    0x3e18316fu, 0xdc4fab20u, 0x7a8724d1u, 0x18be9e82u, 0xb6f61833u, 0x552d91e4u, 0xf3650b95u, 0x919c8546u,
    0x2fd3fef7u, 0xce0b78a8u, 0x6c42f259u, 0x0a7a6c0au, 0xa8b1e5bbu, 0x46e95f6cu, 0xe520d91du, 0x835852ceu,
    0x218fcc7fu, 0xbfc74630u, 0x5dfebfe1u, 0xfc363992u, 0x9a6db343u, 0x38a52cf4u, 0xd6dca6a5u, 0x75142056u,
    0x134b9a07u, 0xb18313b8u, 0x4fba8d69u, 0xedf2071au, 0x8c2980cbu, 0x2a60fa7cu, 0xc898742du, 0x66cfeddeu,
};

static const uint32_t bshim_009_tab5[96] = {
    0x31e8d9f0u, 0xd02053a1u, 0x6e57cd52u, 0x0c8f4703u, 0xaac6c0b4u, 0x48fe3a65u, 0xe735b416u, 0x856d2dc7u,
    0x23a4a778u, 0xc1dc2129u, 0x60139adau, 0xfe4b148bu, 0x9c828e3cu, 0x3aba07edu, 0xd8f1819eu, 0x7728fb4fu,
    0x15607500u, 0xb397eeb1u, 0x51cf6862u, 0xf006e213u, 0x8e3e5bc4u, 0x2c75d575u, 0xcaad4f26u, 0x68e4c8d7u,
    0x071c4288u, 0xa553bc39u, 0x438b35eau, 0xe1c2af9bu, 0x7ffa294cu, 0x1e31a2fdu, 0xbc691caeu, 0x5aa0965fu,
    0xf8d81010u, 0x970f89c1u, 0x35470372u, 0xd37e7d23u, 0x71b5f6d4u, 0x0fed7085u, 0xae24ea36u, 0x4c5c63e7u,
    0xea93dd98u, 0x88cb5749u, 0x2702d0fau, 0xc53a4aabu, 0x6371c45cu, 0x01a93e0du, 0x9fe0b7beu, 0x3e18316fu,
    0xdc4fab20u, 0x7a8724d1u, 0x18be9e82u, 0xb6f61833u, 0x552d91e4u, 0xf3650b95u, 0x919c8546u, 0x2fd3fef7u,
    0xce0b78a8u, 0x6c42f259u, 0x0a7a6c0au, 0xa8b1e5bbu, 0x46e95f6cu, 0xe520d91du, 0x835852ceu, 0x218fcc7fu,
    0xbfc74630u, 0x5dfebfe1u, 0xfc363992u, 0x9a6db343u, 0x38a52cf4u, 0xd6dca6a5u, 0x75142056u, 0x134b9a07u,
    0xb18313b8u, 0x4fba8d69u, 0xedf2071au, 0x8c2980cbu, 0x2a60fa7cu, 0xc898742du, 0x66cfeddeu, 0x0507678fu,
    0xa33ee140u, 0x41765af1u, 0xdfadd4a2u, 0x7de54e53u, 0x1c1cc804u, 0xba5441b5u, 0x588bbb66u, 0xf6c33517u,
    0x94faaec8u, 0x33322879u, 0xd169a22au, 0x6fa11bdbu, 0x0dd8958cu, 0xac100f3du, 0x4a4788eeu, 0xe87f029fu,
};

static const uint32_t bshim_009_tab6[96] = {
    0xb397eeb1u, 0x51cf6862u, 0xf006e213u, 0x8e3e5bc4u, 0x2c75d575u, 0xcaad4f26u, 0x68e4c8d7u, 0x071c4288u,
    0xa553bc39u, 0x438b35eau, 0xe1c2af9bu, 0x7ffa294cu, 0x1e31a2fdu, 0xbc691caeu, 0x5aa0965fu, 0xf8d81010u,
    0x970f89c1u, 0x35470372u, 0xd37e7d23u, 0x71b5f6d4u, 0x0fed7085u, 0xae24ea36u, 0x4c5c63e7u, 0xea93dd98u,
    0x88cb5749u, 0x2702d0fau, 0xc53a4aabu, 0x6371c45cu, 0x01a93e0du, 0x9fe0b7beu, 0x3e18316fu, 0xdc4fab20u,
    0x7a8724d1u, 0x18be9e82u, 0xb6f61833u, 0x552d91e4u, 0xf3650b95u, 0x919c8546u, 0x2fd3fef7u, 0xce0b78a8u,
    0x6c42f259u, 0x0a7a6c0au, 0xa8b1e5bbu, 0x46e95f6cu, 0xe520d91du, 0x835852ceu, 0x218fcc7fu, 0xbfc74630u,
    0x5dfebfe1u, 0xfc363992u, 0x9a6db343u, 0x38a52cf4u, 0xd6dca6a5u, 0x75142056u, 0x134b9a07u, 0xb18313b8u,
    0x4fba8d69u, 0xedf2071au, 0x8c2980cbu, 0x2a60fa7cu, 0xc898742du, 0x66cfeddeu, 0x0507678fu, 0xa33ee140u,
    0x41765af1u, 0xdfadd4a2u, 0x7de54e53u, 0x1c1cc804u, 0xba5441b5u, 0x588bbb66u, 0xf6c33517u, 0x94faaec8u,
    0x33322879u, 0xd169a22au, 0x6fa11bdbu, 0x0dd8958cu, 0xac100f3du, 0x4a4788eeu, 0xe87f029fu, 0x86b67c50u,
    0x24edf601u, 0xc3256fb2u, 0x615ce963u, 0xff946314u, 0x9dcbdcc5u, 0x3c035676u, 0xda3ad027u, 0x787249d8u,
    0x16a9c389u, 0xb4e13d3au, 0x5318b6ebu, 0xf150309cu, 0x8f87aa4du, 0x2dbf23feu, 0xcbf69dafu, 0x6a2e1760u,
};

static const uint32_t bshim_009_tab7[96] = {
    0x35470372u, 0xd37e7d23u, 0x71b5f6d4u, 0x0fed7085u, 0xae24ea36u, 0x4c5c63e7u, 0xea93dd98u, 0x88cb5749u,
    0x2702d0fau, 0xc53a4aabu, 0x6371c45cu, 0x01a93e0du, 0x9fe0b7beu, 0x3e18316fu, 0xdc4fab20u, 0x7a8724d1u,
    0x18be9e82u, 0xb6f61833u, 0x552d91e4u, 0xf3650b95u, 0x919c8546u, 0x2fd3fef7u, 0xce0b78a8u, 0x6c42f259u,
    0x0a7a6c0au, 0xa8b1e5bbu, 0x46e95f6cu, 0xe520d91du, 0x835852ceu, 0x218fcc7fu, 0xbfc74630u, 0x5dfebfe1u,
    0xfc363992u, 0x9a6db343u, 0x38a52cf4u, 0xd6dca6a5u, 0x75142056u, 0x134b9a07u, 0xb18313b8u, 0x4fba8d69u,
    0xedf2071au, 0x8c2980cbu, 0x2a60fa7cu, 0xc898742du, 0x66cfeddeu, 0x0507678fu, 0xa33ee140u, 0x41765af1u,
    0xdfadd4a2u, 0x7de54e53u, 0x1c1cc804u, 0xba5441b5u, 0x588bbb66u, 0xf6c33517u, 0x94faaec8u, 0x33322879u,
    0xd169a22au, 0x6fa11bdbu, 0x0dd8958cu, 0xac100f3du, 0x4a4788eeu, 0xe87f029fu, 0x86b67c50u, 0x24edf601u,
    0xc3256fb2u, 0x615ce963u, 0xff946314u, 0x9dcbdcc5u, 0x3c035676u, 0xda3ad027u, 0x787249d8u, 0x16a9c389u,
    0xb4e13d3au, 0x5318b6ebu, 0xf150309cu, 0x8f87aa4du, 0x2dbf23feu, 0xcbf69dafu, 0x6a2e1760u, 0x08659111u,
    0xa69d0ac2u, 0x44d48473u, 0xe30bfe24u, 0x814377d5u, 0x1f7af186u, 0xbdb26b37u, 0x5be9e4e8u, 0xfa215e99u,
    0x9858d84au, 0x369051fbu, 0xd4c7cbacu, 0x72ff455du, 0x1136bf0eu, 0xaf6e38bfu, 0x4da5b270u, 0xebdd2c21u,
};

struct bshim_009_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_009_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb54a1e2fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b35e8a6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc121b31du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x470d7d94u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_009_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_009_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_009_reset(struct bshim_009_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00011667u;
    return 0;
}

