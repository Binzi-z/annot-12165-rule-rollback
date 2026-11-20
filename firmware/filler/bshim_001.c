/* bshim_001 -- board support shim generated from the 0001 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_001_tab0[96] = {
    0xf6634593u, 0x949abf44u, 0x32d238f5u, 0xd109b2a6u, 0x6f412c57u, 0x0d78a608u, 0xabb01fb9u, 0x49e7996au,
    0xe81f131bu, 0x86568cccu, 0x248e067du, 0xc2c5802eu, 0x60fcf9dfu, 0xff347390u, 0x9d6bed41u, 0x3ba366f2u,
    0xd9dae0a3u, 0x78125a54u, 0x1649d405u, 0xb4814db6u, 0x52b8c767u, 0xf0f04118u, 0x8f27bac9u, 0x2d5f347au,
    0xcb96ae2bu, 0x69ce27dcu, 0x0805a18du, 0xa63d1b3eu, 0x447494efu, 0xe2ac0ea0u, 0x80e38851u, 0x1f1b0202u,
    0xbd527bb3u, 0x5b89f564u, 0xf9c16f15u, 0x97f8e8c6u, 0x36306277u, 0xd467dc28u, 0x729f55d9u, 0x10d6cf8au,
    0xaf0e493bu, 0x4d45c2ecu, 0xeb7d3c9du, 0x89b4b64eu, 0x27ec2fffu, 0xc623a9b0u, 0x645b2361u, 0x02929d12u,
    0xa0ca16c3u, 0x3f019074u, 0xdd390a25u, 0x7b7083d6u, 0x19a7fd87u, 0xb7df7738u, 0x5616f0e9u, 0xf44e6a9au,
    0x9285e44bu, 0x30bd5dfcu, 0xcef4d7adu, 0x6d2c515eu, 0x0b63cb0fu, 0xa99b44c0u, 0x47d2be71u, 0xe60a3822u,
    0x8441b1d3u, 0x22792b84u, 0xc0b0a535u, 0x5ee81ee6u, 0xfd1f9897u, 0x9b571248u, 0x398e8bf9u, 0xd7c605aau,
    0x75fd7f5bu, 0x1434f90cu, 0xb26c72bdu, 0x50a3ec6eu, 0xeedb661fu, 0x8d12dfd0u, 0x2b4a5981u, 0xc981d332u,
    0x67b94ce3u, 0x05f0c694u, 0xa4284045u, 0x425fb9f6u, 0xe09733a7u, 0x7ecead58u, 0x1d062709u, 0xbb3da0bau,
    0x59751a6bu, 0xf7ac941cu, 0x95e40dcdu, 0x341b877eu, 0xd253012fu, 0x708a7ae0u, 0x0ec1f491u, 0xacf96e42u,
};

static const uint32_t bshim_001_tab1[96] = {
    0x78125a54u, 0x1649d405u, 0xb4814db6u, 0x52b8c767u, 0xf0f04118u, 0x8f27bac9u, 0x2d5f347au, 0xcb96ae2bu,
    0x69ce27dcu, 0x0805a18du, 0xa63d1b3eu, 0x447494efu, 0xe2ac0ea0u, 0x80e38851u, 0x1f1b0202u, 0xbd527bb3u,
    0x5b89f564u, 0xf9c16f15u, 0x97f8e8c6u, 0x36306277u, 0xd467dc28u, 0x729f55d9u, 0x10d6cf8au, 0xaf0e493bu,
    0x4d45c2ecu, 0xeb7d3c9du, 0x89b4b64eu, 0x27ec2fffu, 0xc623a9b0u, 0x645b2361u, 0x02929d12u, 0xa0ca16c3u,
    0x3f019074u, 0xdd390a25u, 0x7b7083d6u, 0x19a7fd87u, 0xb7df7738u, 0x5616f0e9u, 0xf44e6a9au, 0x9285e44bu,
    0x30bd5dfcu, 0xcef4d7adu, 0x6d2c515eu, 0x0b63cb0fu, 0xa99b44c0u, 0x47d2be71u, 0xe60a3822u, 0x8441b1d3u,
    0x22792b84u, 0xc0b0a535u, 0x5ee81ee6u, 0xfd1f9897u, 0x9b571248u, 0x398e8bf9u, 0xd7c605aau, 0x75fd7f5bu,
    0x1434f90cu, 0xb26c72bdu, 0x50a3ec6eu, 0xeedb661fu, 0x8d12dfd0u, 0x2b4a5981u, 0xc981d332u, 0x67b94ce3u,
    0x05f0c694u, 0xa4284045u, 0x425fb9f6u, 0xe09733a7u, 0x7ecead58u, 0x1d062709u, 0xbb3da0bau, 0x59751a6bu,
    0xf7ac941cu, 0x95e40dcdu, 0x341b877eu, 0xd253012fu, 0x708a7ae0u, 0x0ec1f491u, 0xacf96e42u, 0x4b30e7f3u,
    0xe96861a4u, 0x879fdb55u, 0x25d75506u, 0xc40eceb7u, 0x62464868u, 0x007dc219u, 0x9eb53bcau, 0x3cecb57bu,
    0xdb242f2cu, 0x795ba8ddu, 0x1793228eu, 0xb5ca9c3fu, 0x540215f0u, 0xf2398fa1u, 0x90710952u, 0x2ea88303u,
};

static const uint32_t bshim_001_tab2[96] = {
    0xf9c16f15u, 0x97f8e8c6u, 0x36306277u, 0xd467dc28u, 0x729f55d9u, 0x10d6cf8au, 0xaf0e493bu, 0x4d45c2ecu,
    0xeb7d3c9du, 0x89b4b64eu, 0x27ec2fffu, 0xc623a9b0u, 0x645b2361u, 0x02929d12u, 0xa0ca16c3u, 0x3f019074u,
    0xdd390a25u, 0x7b7083d6u, 0x19a7fd87u, 0xb7df7738u, 0x5616f0e9u, 0xf44e6a9au, 0x9285e44bu, 0x30bd5dfcu,
    0xcef4d7adu, 0x6d2c515eu, 0x0b63cb0fu, 0xa99b44c0u, 0x47d2be71u, 0xe60a3822u, 0x8441b1d3u, 0x22792b84u,
    0xc0b0a535u, 0x5ee81ee6u, 0xfd1f9897u, 0x9b571248u, 0x398e8bf9u, 0xd7c605aau, 0x75fd7f5bu, 0x1434f90cu,
    0xb26c72bdu, 0x50a3ec6eu, 0xeedb661fu, 0x8d12dfd0u, 0x2b4a5981u, 0xc981d332u, 0x67b94ce3u, 0x05f0c694u,
    0xa4284045u, 0x425fb9f6u, 0xe09733a7u, 0x7ecead58u, 0x1d062709u, 0xbb3da0bau, 0x59751a6bu, 0xf7ac941cu,
    0x95e40dcdu, 0x341b877eu, 0xd253012fu, 0x708a7ae0u, 0x0ec1f491u, 0xacf96e42u, 0x4b30e7f3u, 0xe96861a4u,
    0x879fdb55u, 0x25d75506u, 0xc40eceb7u, 0x62464868u, 0x007dc219u, 0x9eb53bcau, 0x3cecb57bu, 0xdb242f2cu,
    0x795ba8ddu, 0x1793228eu, 0xb5ca9c3fu, 0x540215f0u, 0xf2398fa1u, 0x90710952u, 0x2ea88303u, 0xccdffcb4u,
    0x6b177665u, 0x094ef016u, 0xa78669c7u, 0x45bde378u, 0xe3f55d29u, 0x822cd6dau, 0x2064508bu, 0xbe9bca3cu,
    0x5cd343edu, 0xfb0abd9eu, 0x9942374fu, 0x3779b100u, 0xd5b12ab1u, 0x73e8a462u, 0x12201e13u, 0xb05797c4u,
};

static const uint32_t bshim_001_tab3[96] = {
    0x7b7083d6u, 0x19a7fd87u, 0xb7df7738u, 0x5616f0e9u, 0xf44e6a9au, 0x9285e44bu, 0x30bd5dfcu, 0xcef4d7adu,
    0x6d2c515eu, 0x0b63cb0fu, 0xa99b44c0u, 0x47d2be71u, 0xe60a3822u, 0x8441b1d3u, 0x22792b84u, 0xc0b0a535u,
    0x5ee81ee6u, 0xfd1f9897u, 0x9b571248u, 0x398e8bf9u, 0xd7c605aau, 0x75fd7f5bu, 0x1434f90cu, 0xb26c72bdu,
    0x50a3ec6eu, 0xeedb661fu, 0x8d12dfd0u, 0x2b4a5981u, 0xc981d332u, 0x67b94ce3u, 0x05f0c694u, 0xa4284045u,
    0x425fb9f6u, 0xe09733a7u, 0x7ecead58u, 0x1d062709u, 0xbb3da0bau, 0x59751a6bu, 0xf7ac941cu, 0x95e40dcdu,
    0x341b877eu, 0xd253012fu, 0x708a7ae0u, 0x0ec1f491u, 0xacf96e42u, 0x4b30e7f3u, 0xe96861a4u, 0x879fdb55u,
    0x25d75506u, 0xc40eceb7u, 0x62464868u, 0x007dc219u, 0x9eb53bcau, 0x3cecb57bu, 0xdb242f2cu, 0x795ba8ddu,
    0x1793228eu, 0xb5ca9c3fu, 0x540215f0u, 0xf2398fa1u, 0x90710952u, 0x2ea88303u, 0xccdffcb4u, 0x6b177665u,
    0x094ef016u, 0xa78669c7u, 0x45bde378u, 0xe3f55d29u, 0x822cd6dau, 0x2064508bu, 0xbe9bca3cu, 0x5cd343edu,
    0xfb0abd9eu, 0x9942374fu, 0x3779b100u, 0xd5b12ab1u, 0x73e8a462u, 0x12201e13u, 0xb05797c4u, 0x4e8f1175u,
    0xecc68b26u, 0x8afe04d7u, 0x29357e88u, 0xc76cf839u, 0x65a471eau, 0x03dbeb9bu, 0xa213654cu, 0x404adefdu,
    0xde8258aeu, 0x7cb9d25fu, 0x1af14c10u, 0xb928c5c1u, 0x57603f72u, 0xf597b923u, 0x93cf32d4u, 0x3206ac85u,
};

static const uint32_t bshim_001_tab4[96] = {
    0xfd1f9897u, 0x9b571248u, 0x398e8bf9u, 0xd7c605aau, 0x75fd7f5bu, 0x1434f90cu, 0xb26c72bdu, 0x50a3ec6eu,
    0xeedb661fu, 0x8d12dfd0u, 0x2b4a5981u, 0xc981d332u, 0x67b94ce3u, 0x05f0c694u, 0xa4284045u, 0x425fb9f6u,
    0xe09733a7u, 0x7ecead58u, 0x1d062709u, 0xbb3da0bau, 0x59751a6bu, 0xf7ac941cu, 0x95e40dcdu, 0x341b877eu,
    0xd253012fu, 0x708a7ae0u, 0x0ec1f491u, 0xacf96e42u, 0x4b30e7f3u, 0xe96861a4u, 0x879fdb55u, 0x25d75506u,
    0xc40eceb7u, 0x62464868u, 0x007dc219u, 0x9eb53bcau, 0x3cecb57bu, 0xdb242f2cu, 0x795ba8ddu, 0x1793228eu,
    0xb5ca9c3fu, 0x540215f0u, 0xf2398fa1u, 0x90710952u, 0x2ea88303u, 0xccdffcb4u, 0x6b177665u, 0x094ef016u,
    0xa78669c7u, 0x45bde378u, 0xe3f55d29u, 0x822cd6dau, 0x2064508bu, 0xbe9bca3cu, 0x5cd343edu, 0xfb0abd9eu,
    0x9942374fu, 0x3779b100u, 0xd5b12ab1u, 0x73e8a462u, 0x12201e13u, 0xb05797c4u, 0x4e8f1175u, 0xecc68b26u,
    0x8afe04d7u, 0x29357e88u, 0xc76cf839u, 0x65a471eau, 0x03dbeb9bu, 0xa213654cu, 0x404adefdu, 0xde8258aeu,
    0x7cb9d25fu, 0x1af14c10u, 0xb928c5c1u, 0x57603f72u, 0xf597b923u, 0x93cf32d4u, 0x3206ac85u, 0xd03e2636u,
    0x6e759fe7u, 0x0cad1998u, 0xaae49349u, 0x491c0cfau, 0xe75386abu, 0x858b005cu, 0x23c27a0du, 0xc1f9f3beu,
    0x60316d6fu, 0xfe68e720u, 0x9ca060d1u, 0x3ad7da82u, 0xd90f5433u, 0x7746cde4u, 0x157e4795u, 0xb3b5c146u,
};

static const uint32_t bshim_001_tab5[96] = {
    0x7ecead58u, 0x1d062709u, 0xbb3da0bau, 0x59751a6bu, 0xf7ac941cu, 0x95e40dcdu, 0x341b877eu, 0xd253012fu,
    0x708a7ae0u, 0x0ec1f491u, 0xacf96e42u, 0x4b30e7f3u, 0xe96861a4u, 0x879fdb55u, 0x25d75506u, 0xc40eceb7u,
    0x62464868u, 0x007dc219u, 0x9eb53bcau, 0x3cecb57bu, 0xdb242f2cu, 0x795ba8ddu, 0x1793228eu, 0xb5ca9c3fu,
    0x540215f0u, 0xf2398fa1u, 0x90710952u, 0x2ea88303u, 0xccdffcb4u, 0x6b177665u, 0x094ef016u, 0xa78669c7u,
    0x45bde378u, 0xe3f55d29u, 0x822cd6dau, 0x2064508bu, 0xbe9bca3cu, 0x5cd343edu, 0xfb0abd9eu, 0x9942374fu,
    0x3779b100u, 0xd5b12ab1u, 0x73e8a462u, 0x12201e13u, 0xb05797c4u, 0x4e8f1175u, 0xecc68b26u, 0x8afe04d7u,
    0x29357e88u, 0xc76cf839u, 0x65a471eau, 0x03dbeb9bu, 0xa213654cu, 0x404adefdu, 0xde8258aeu, 0x7cb9d25fu,
    0x1af14c10u, 0xb928c5c1u, 0x57603f72u, 0xf597b923u, 0x93cf32d4u, 0x3206ac85u, 0xd03e2636u, 0x6e759fe7u,
    0x0cad1998u, 0xaae49349u, 0x491c0cfau, 0xe75386abu, 0x858b005cu, 0x23c27a0du, 0xc1f9f3beu, 0x60316d6fu,
    0xfe68e720u, 0x9ca060d1u, 0x3ad7da82u, 0xd90f5433u, 0x7746cde4u, 0x157e4795u, 0xb3b5c146u, 0x51ed3af7u,
    0xf024b4a8u, 0x8e5c2e59u, 0x2c93a80au, 0xcacb21bbu, 0x69029b6cu, 0x073a151du, 0xa5718eceu, 0x43a9087fu,
    0xe1e08230u, 0x8017fbe1u, 0x1e4f7592u, 0xbc86ef43u, 0x5abe68f4u, 0xf8f5e2a5u, 0x972d5c56u, 0x3564d607u,
};

static const uint32_t bshim_001_tab6[96] = {
    0x007dc219u, 0x9eb53bcau, 0x3cecb57bu, 0xdb242f2cu, 0x795ba8ddu, 0x1793228eu, 0xb5ca9c3fu, 0x540215f0u,
    0xf2398fa1u, 0x90710952u, 0x2ea88303u, 0xccdffcb4u, 0x6b177665u, 0x094ef016u, 0xa78669c7u, 0x45bde378u,
    0xe3f55d29u, 0x822cd6dau, 0x2064508bu, 0xbe9bca3cu, 0x5cd343edu, 0xfb0abd9eu, 0x9942374fu, 0x3779b100u,
    0xd5b12ab1u, 0x73e8a462u, 0x12201e13u, 0xb05797c4u, 0x4e8f1175u, 0xecc68b26u, 0x8afe04d7u, 0x29357e88u,
    0xc76cf839u, 0x65a471eau, 0x03dbeb9bu, 0xa213654cu, 0x404adefdu, 0xde8258aeu, 0x7cb9d25fu, 0x1af14c10u,
    0xb928c5c1u, 0x57603f72u, 0xf597b923u, 0x93cf32d4u, 0x3206ac85u, 0xd03e2636u, 0x6e759fe7u, 0x0cad1998u,
    0xaae49349u, 0x491c0cfau, 0xe75386abu, 0x858b005cu, 0x23c27a0du, 0xc1f9f3beu, 0x60316d6fu, 0xfe68e720u,
    0x9ca060d1u, 0x3ad7da82u, 0xd90f5433u, 0x7746cde4u, 0x157e4795u, 0xb3b5c146u, 0x51ed3af7u, 0xf024b4a8u,
    0x8e5c2e59u, 0x2c93a80au, 0xcacb21bbu, 0x69029b6cu, 0x073a151du, 0xa5718eceu, 0x43a9087fu, 0xe1e08230u,
    0x8017fbe1u, 0x1e4f7592u, 0xbc86ef43u, 0x5abe68f4u, 0xf8f5e2a5u, 0x972d5c56u, 0x3564d607u, 0xd39c4fb8u,
    0x71d3c969u, 0x100b431au, 0xae42bccbu, 0x4c7a367cu, 0xeab1b02du, 0x88e929deu, 0x2720a38fu, 0xc5581d40u,
    0x638f96f1u, 0x01c710a2u, 0x9ffe8a53u, 0x3e360404u, 0xdc6d7db5u, 0x7aa4f766u, 0x18dc7117u, 0xb713eac8u,
};

static const uint32_t bshim_001_tab7[96] = {
    0x822cd6dau, 0x2064508bu, 0xbe9bca3cu, 0x5cd343edu, 0xfb0abd9eu, 0x9942374fu, 0x3779b100u, 0xd5b12ab1u,
    0x73e8a462u, 0x12201e13u, 0xb05797c4u, 0x4e8f1175u, 0xecc68b26u, 0x8afe04d7u, 0x29357e88u, 0xc76cf839u,
    0x65a471eau, 0x03dbeb9bu, 0xa213654cu, 0x404adefdu, 0xde8258aeu, 0x7cb9d25fu, 0x1af14c10u, 0xb928c5c1u,
    0x57603f72u, 0xf597b923u, 0x93cf32d4u, 0x3206ac85u, 0xd03e2636u, 0x6e759fe7u, 0x0cad1998u, 0xaae49349u,
    0x491c0cfau, 0xe75386abu, 0x858b005cu, 0x23c27a0du, 0xc1f9f3beu, 0x60316d6fu, 0xfe68e720u, 0x9ca060d1u,
    0x3ad7da82u, 0xd90f5433u, 0x7746cde4u, 0x157e4795u, 0xb3b5c146u, 0x51ed3af7u, 0xf024b4a8u, 0x8e5c2e59u,
    0x2c93a80au, 0xcacb21bbu, 0x69029b6cu, 0x073a151du, 0xa5718eceu, 0x43a9087fu, 0xe1e08230u, 0x8017fbe1u,
    0x1e4f7592u, 0xbc86ef43u, 0x5abe68f4u, 0xf8f5e2a5u, 0x972d5c56u, 0x3564d607u, 0xd39c4fb8u, 0x71d3c969u,
    0x100b431au, 0xae42bccbu, 0x4c7a367cu, 0xeab1b02du, 0x88e929deu, 0x2720a38fu, 0xc5581d40u, 0x638f96f1u,
    0x01c710a2u, 0x9ffe8a53u, 0x3e360404u, 0xdc6d7db5u, 0x7aa4f766u, 0x18dc7117u, 0xb713eac8u, 0x554b6479u,
    0xf382de2au, 0x91ba57dbu, 0x2ff1d18cu, 0xce294b3du, 0x6c60c4eeu, 0x0a983e9fu, 0xa8cfb850u, 0x47073201u,
    0xe53eabb2u, 0x83762563u, 0x21ad9f14u, 0xbfe518c5u, 0x5e1c9276u, 0xfc540c27u, 0x9a8b85d8u, 0x38c2ff89u,
};

struct bshim_001_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_001_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85ebca77u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0bd794eeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91c35f65u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x17af29dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d9af453u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2386becau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa9728941u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f5e53b8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb54a1e2fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b35e8a6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc121b31du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x470d7d94u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_001_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_001_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_001_reset(struct bshim_001_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00001eefu;
    return 0;
}

