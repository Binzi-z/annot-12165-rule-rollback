/* bshim_210 -- board support shim generated from the 0210 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_210_tab0[96] = {
    0x1d6f1296u, 0xbba68c47u, 0x59de05f8u, 0xf8157fa9u, 0x964cf95au, 0x3484730bu, 0xd2bbecbcu, 0x70f3666du,
    0x0f2ae01eu, 0xad6259cfu, 0x4b99d380u, 0xe9d14d31u, 0x8808c6e2u, 0x26404093u, 0xc477ba44u, 0x62af33f5u,
    0x00e6ada6u, 0x9f1e2757u, 0x3d55a108u, 0xdb8d1ab9u, 0x79c4946au, 0x17fc0e1bu, 0xb63387ccu, 0x546b017du,
    0xf2a27b2eu, 0x90d9f4dfu, 0x2f116e90u, 0xcd48e841u, 0x6b8061f2u, 0x09b7dba3u, 0xa7ef5554u, 0x4626cf05u,
    0xe45e48b6u, 0x8295c267u, 0x20cd3c18u, 0xbf04b5c9u, 0x5d3c2f7au, 0xfb73a92bu, 0x99ab22dcu, 0x37e29c8du,
    0xd61a163eu, 0x74518fefu, 0x128909a0u, 0xb0c08351u, 0x4ef7fd02u, 0xed2f76b3u, 0x8b66f064u, 0x299e6a15u,
    0xc7d5e3c6u, 0x660d5d77u, 0x0444d728u, 0xa27c50d9u, 0x40b3ca8au, 0xdeeb443bu, 0x7d22bdecu, 0x1b5a379du,
    0xb991b14eu, 0x57c92affu, 0xf600a4b0u, 0x94381e61u, 0x326f9812u, 0xd0a711c3u, 0x6ede8b74u, 0x0d160525u,
    0xab4d7ed6u, 0x4984f887u, 0xe7bc7238u, 0x85f3ebe9u, 0x242b659au, 0xc262df4bu, 0x609a58fcu, 0xfed1d2adu,
    0x9d094c5eu, 0x3b40c60fu, 0xd9783fc0u, 0x77afb971u, 0x15e73322u, 0xb41eacd3u, 0x52562684u, 0xf08da035u,
    0x8ec519e6u, 0x2cfc9397u, 0xcb340d48u, 0x696b86f9u, 0x07a300aau, 0xa5da7a5bu, 0x4411f40cu, 0xe2496dbdu,
    0x8080e76eu, 0x1eb8611fu, 0xbcefdad0u, 0x5b275481u, 0xf95ece32u, 0x979647e3u, 0x35cdc194u, 0xd4053b45u,
};

static const uint32_t bshim_210_tab1[96] = {
    0x9f1e2757u, 0x3d55a108u, 0xdb8d1ab9u, 0x79c4946au, 0x17fc0e1bu, 0xb63387ccu, 0x546b017du, 0xf2a27b2eu,
    0x90d9f4dfu, 0x2f116e90u, 0xcd48e841u, 0x6b8061f2u, 0x09b7dba3u, 0xa7ef5554u, 0x4626cf05u, 0xe45e48b6u,
    0x8295c267u, 0x20cd3c18u, 0xbf04b5c9u, 0x5d3c2f7au, 0xfb73a92bu, 0x99ab22dcu, 0x37e29c8du, 0xd61a163eu,
    0x74518fefu, 0x128909a0u, 0xb0c08351u, 0x4ef7fd02u, 0xed2f76b3u, 0x8b66f064u, 0x299e6a15u, 0xc7d5e3c6u,
    0x660d5d77u, 0x0444d728u, 0xa27c50d9u, 0x40b3ca8au, 0xdeeb443bu, 0x7d22bdecu, 0x1b5a379du, 0xb991b14eu,
    0x57c92affu, 0xf600a4b0u, 0x94381e61u, 0x326f9812u, 0xd0a711c3u, 0x6ede8b74u, 0x0d160525u, 0xab4d7ed6u,
    0x4984f887u, 0xe7bc7238u, 0x85f3ebe9u, 0x242b659au, 0xc262df4bu, 0x609a58fcu, 0xfed1d2adu, 0x9d094c5eu,
    0x3b40c60fu, 0xd9783fc0u, 0x77afb971u, 0x15e73322u, 0xb41eacd3u, 0x52562684u, 0xf08da035u, 0x8ec519e6u,
    0x2cfc9397u, 0xcb340d48u, 0x696b86f9u, 0x07a300aau, 0xa5da7a5bu, 0x4411f40cu, 0xe2496dbdu, 0x8080e76eu,
    0x1eb8611fu, 0xbcefdad0u, 0x5b275481u, 0xf95ece32u, 0x979647e3u, 0x35cdc194u, 0xd4053b45u, 0x723cb4f6u,
    0x10742ea7u, 0xaeaba858u, 0x4ce32209u, 0xeb1a9bbau, 0x8952156bu, 0x27898f1cu, 0xc5c108cdu, 0x63f8827eu,
    0x022ffc2fu, 0xa06775e0u, 0x3e9eef91u, 0xdcd66942u, 0x7b0de2f3u, 0x19455ca4u, 0xb77cd655u, 0x55b45006u,
};

static const uint32_t bshim_210_tab2[96] = {
    0x20cd3c18u, 0xbf04b5c9u, 0x5d3c2f7au, 0xfb73a92bu, 0x99ab22dcu, 0x37e29c8du, 0xd61a163eu, 0x74518fefu,
    0x128909a0u, 0xb0c08351u, 0x4ef7fd02u, 0xed2f76b3u, 0x8b66f064u, 0x299e6a15u, 0xc7d5e3c6u, 0x660d5d77u,
    0x0444d728u, 0xa27c50d9u, 0x40b3ca8au, 0xdeeb443bu, 0x7d22bdecu, 0x1b5a379du, 0xb991b14eu, 0x57c92affu,
    0xf600a4b0u, 0x94381e61u, 0x326f9812u, 0xd0a711c3u, 0x6ede8b74u, 0x0d160525u, 0xab4d7ed6u, 0x4984f887u,
    0xe7bc7238u, 0x85f3ebe9u, 0x242b659au, 0xc262df4bu, 0x609a58fcu, 0xfed1d2adu, 0x9d094c5eu, 0x3b40c60fu,
    0xd9783fc0u, 0x77afb971u, 0x15e73322u, 0xb41eacd3u, 0x52562684u, 0xf08da035u, 0x8ec519e6u, 0x2cfc9397u,
    0xcb340d48u, 0x696b86f9u, 0x07a300aau, 0xa5da7a5bu, 0x4411f40cu, 0xe2496dbdu, 0x8080e76eu, 0x1eb8611fu,
    0xbcefdad0u, 0x5b275481u, 0xf95ece32u, 0x979647e3u, 0x35cdc194u, 0xd4053b45u, 0x723cb4f6u, 0x10742ea7u,
    0xaeaba858u, 0x4ce32209u, 0xeb1a9bbau, 0x8952156bu, 0x27898f1cu, 0xc5c108cdu, 0x63f8827eu, 0x022ffc2fu,
    0xa06775e0u, 0x3e9eef91u, 0xdcd66942u, 0x7b0de2f3u, 0x19455ca4u, 0xb77cd655u, 0x55b45006u, 0xf3ebc9b7u,
    0x92234368u, 0x305abd19u, 0xce9236cau, 0x6cc9b07bu, 0x0b012a2cu, 0xa938a3ddu, 0x47701d8eu, 0xe5a7973fu,
    0x83df10f0u, 0x22168aa1u, 0xc04e0452u, 0x5e857e03u, 0xfcbcf7b4u, 0x9af47165u, 0x392beb16u, 0xd76364c7u,
};

static const uint32_t bshim_210_tab3[96] = {
    0xa27c50d9u, 0x40b3ca8au, 0xdeeb443bu, 0x7d22bdecu, 0x1b5a379du, 0xb991b14eu, 0x57c92affu, 0xf600a4b0u,
    0x94381e61u, 0x326f9812u, 0xd0a711c3u, 0x6ede8b74u, 0x0d160525u, 0xab4d7ed6u, 0x4984f887u, 0xe7bc7238u,
    0x85f3ebe9u, 0x242b659au, 0xc262df4bu, 0x609a58fcu, 0xfed1d2adu, 0x9d094c5eu, 0x3b40c60fu, 0xd9783fc0u,
    0x77afb971u, 0x15e73322u, 0xb41eacd3u, 0x52562684u, 0xf08da035u, 0x8ec519e6u, 0x2cfc9397u, 0xcb340d48u,
    0x696b86f9u, 0x07a300aau, 0xa5da7a5bu, 0x4411f40cu, 0xe2496dbdu, 0x8080e76eu, 0x1eb8611fu, 0xbcefdad0u,
    0x5b275481u, 0xf95ece32u, 0x979647e3u, 0x35cdc194u, 0xd4053b45u, 0x723cb4f6u, 0x10742ea7u, 0xaeaba858u,
    0x4ce32209u, 0xeb1a9bbau, 0x8952156bu, 0x27898f1cu, 0xc5c108cdu, 0x63f8827eu, 0x022ffc2fu, 0xa06775e0u,
    0x3e9eef91u, 0xdcd66942u, 0x7b0de2f3u, 0x19455ca4u, 0xb77cd655u, 0x55b45006u, 0xf3ebc9b7u, 0x92234368u,
    0x305abd19u, 0xce9236cau, 0x6cc9b07bu, 0x0b012a2cu, 0xa938a3ddu, 0x47701d8eu, 0xe5a7973fu, 0x83df10f0u,
    0x22168aa1u, 0xc04e0452u, 0x5e857e03u, 0xfcbcf7b4u, 0x9af47165u, 0x392beb16u, 0xd76364c7u, 0x759ade78u,
    0x13d25829u, 0xb209d1dau, 0x50414b8bu, 0xee78c53cu, 0x8cb03eedu, 0x2ae7b89eu, 0xc91f324fu, 0x6756ac00u,
    0x058e25b1u, 0xa3c59f62u, 0x41fd1913u, 0xe03492c4u, 0x7e6c0c75u, 0x1ca38626u, 0xbadaffd7u, 0x59127988u,
};

static const uint32_t bshim_210_tab4[96] = {
    0x242b659au, 0xc262df4bu, 0x609a58fcu, 0xfed1d2adu, 0x9d094c5eu, 0x3b40c60fu, 0xd9783fc0u, 0x77afb971u,
    0x15e73322u, 0xb41eacd3u, 0x52562684u, 0xf08da035u, 0x8ec519e6u, 0x2cfc9397u, 0xcb340d48u, 0x696b86f9u,
    0x07a300aau, 0xa5da7a5bu, 0x4411f40cu, 0xe2496dbdu, 0x8080e76eu, 0x1eb8611fu, 0xbcefdad0u, 0x5b275481u,
    0xf95ece32u, 0x979647e3u, 0x35cdc194u, 0xd4053b45u, 0x723cb4f6u, 0x10742ea7u, 0xaeaba858u, 0x4ce32209u,
    0xeb1a9bbau, 0x8952156bu, 0x27898f1cu, 0xc5c108cdu, 0x63f8827eu, 0x022ffc2fu, 0xa06775e0u, 0x3e9eef91u,
    0xdcd66942u, 0x7b0de2f3u, 0x19455ca4u, 0xb77cd655u, 0x55b45006u, 0xf3ebc9b7u, 0x92234368u, 0x305abd19u,
    0xce9236cau, 0x6cc9b07bu, 0x0b012a2cu, 0xa938a3ddu, 0x47701d8eu, 0xe5a7973fu, 0x83df10f0u, 0x22168aa1u,
    0xc04e0452u, 0x5e857e03u, 0xfcbcf7b4u, 0x9af47165u, 0x392beb16u, 0xd76364c7u, 0x759ade78u, 0x13d25829u,
    0xb209d1dau, 0x50414b8bu, 0xee78c53cu, 0x8cb03eedu, 0x2ae7b89eu, 0xc91f324fu, 0x6756ac00u, 0x058e25b1u,
    0xa3c59f62u, 0x41fd1913u, 0xe03492c4u, 0x7e6c0c75u, 0x1ca38626u, 0xbadaffd7u, 0x59127988u, 0xf749f339u,
    0x95816ceau, 0x33b8e69bu, 0xd1f0604cu, 0x7027d9fdu, 0x0e5f53aeu, 0xac96cd5fu, 0x4ace4710u, 0xe905c0c1u,
    0x873d3a72u, 0x2574b423u, 0xc3ac2dd4u, 0x61e3a785u, 0x001b2136u, 0x9e529ae7u, 0x3c8a1498u, 0xdac18e49u,
};

static const uint32_t bshim_210_tab5[96] = {
    0xa5da7a5bu, 0x4411f40cu, 0xe2496dbdu, 0x8080e76eu, 0x1eb8611fu, 0xbcefdad0u, 0x5b275481u, 0xf95ece32u,
    0x979647e3u, 0x35cdc194u, 0xd4053b45u, 0x723cb4f6u, 0x10742ea7u, 0xaeaba858u, 0x4ce32209u, 0xeb1a9bbau,
    0x8952156bu, 0x27898f1cu, 0xc5c108cdu, 0x63f8827eu, 0x022ffc2fu, 0xa06775e0u, 0x3e9eef91u, 0xdcd66942u,
    0x7b0de2f3u, 0x19455ca4u, 0xb77cd655u, 0x55b45006u, 0xf3ebc9b7u, 0x92234368u, 0x305abd19u, 0xce9236cau,
    0x6cc9b07bu, 0x0b012a2cu, 0xa938a3ddu, 0x47701d8eu, 0xe5a7973fu, 0x83df10f0u, 0x22168aa1u, 0xc04e0452u,
    0x5e857e03u, 0xfcbcf7b4u, 0x9af47165u, 0x392beb16u, 0xd76364c7u, 0x759ade78u, 0x13d25829u, 0xb209d1dau,
    0x50414b8bu, 0xee78c53cu, 0x8cb03eedu, 0x2ae7b89eu, 0xc91f324fu, 0x6756ac00u, 0x058e25b1u, 0xa3c59f62u,
    0x41fd1913u, 0xe03492c4u, 0x7e6c0c75u, 0x1ca38626u, 0xbadaffd7u, 0x59127988u, 0xf749f339u, 0x95816ceau,
    0x33b8e69bu, 0xd1f0604cu, 0x7027d9fdu, 0x0e5f53aeu, 0xac96cd5fu, 0x4ace4710u, 0xe905c0c1u, 0x873d3a72u,
    0x2574b423u, 0xc3ac2dd4u, 0x61e3a785u, 0x001b2136u, 0x9e529ae7u, 0x3c8a1498u, 0xdac18e49u, 0x78f907fau,
    0x173081abu, 0xb567fb5cu, 0x539f750du, 0xf1d6eebeu, 0x900e686fu, 0x2e45e220u, 0xcc7d5bd1u, 0x6ab4d582u,
    0x08ec4f33u, 0xa723c8e4u, 0x455b4295u, 0xe392bc46u, 0x81ca35f7u, 0x2001afa8u, 0xbe392959u, 0x5c70a30au,
};

static const uint32_t bshim_210_tab6[96] = {
    0x27898f1cu, 0xc5c108cdu, 0x63f8827eu, 0x022ffc2fu, 0xa06775e0u, 0x3e9eef91u, 0xdcd66942u, 0x7b0de2f3u,
    0x19455ca4u, 0xb77cd655u, 0x55b45006u, 0xf3ebc9b7u, 0x92234368u, 0x305abd19u, 0xce9236cau, 0x6cc9b07bu,
    0x0b012a2cu, 0xa938a3ddu, 0x47701d8eu, 0xe5a7973fu, 0x83df10f0u, 0x22168aa1u, 0xc04e0452u, 0x5e857e03u,
    0xfcbcf7b4u, 0x9af47165u, 0x392beb16u, 0xd76364c7u, 0x759ade78u, 0x13d25829u, 0xb209d1dau, 0x50414b8bu,
    0xee78c53cu, 0x8cb03eedu, 0x2ae7b89eu, 0xc91f324fu, 0x6756ac00u, 0x058e25b1u, 0xa3c59f62u, 0x41fd1913u,
    0xe03492c4u, 0x7e6c0c75u, 0x1ca38626u, 0xbadaffd7u, 0x59127988u, 0xf749f339u, 0x95816ceau, 0x33b8e69bu,
    0xd1f0604cu, 0x7027d9fdu, 0x0e5f53aeu, 0xac96cd5fu, 0x4ace4710u, 0xe905c0c1u, 0x873d3a72u, 0x2574b423u,
    0xc3ac2dd4u, 0x61e3a785u, 0x001b2136u, 0x9e529ae7u, 0x3c8a1498u, 0xdac18e49u, 0x78f907fau, 0x173081abu,
    0xb567fb5cu, 0x539f750du, 0xf1d6eebeu, 0x900e686fu, 0x2e45e220u, 0xcc7d5bd1u, 0x6ab4d582u, 0x08ec4f33u,
    0xa723c8e4u, 0x455b4295u, 0xe392bc46u, 0x81ca35f7u, 0x2001afa8u, 0xbe392959u, 0x5c70a30au, 0xfaa81cbbu,
    0x98df966cu, 0x3717101du, 0xd54e89ceu, 0x7386037fu, 0x11bd7d30u, 0xaff4f6e1u, 0x4e2c7092u, 0xec63ea43u,
    0x8a9b63f4u, 0x28d2dda5u, 0xc70a5756u, 0x6541d107u, 0x03794ab8u, 0xa1b0c469u, 0x3fe83e1au, 0xde1fb7cbu,
};

static const uint32_t bshim_210_tab7[96] = {
    0xa938a3ddu, 0x47701d8eu, 0xe5a7973fu, 0x83df10f0u, 0x22168aa1u, 0xc04e0452u, 0x5e857e03u, 0xfcbcf7b4u,
    0x9af47165u, 0x392beb16u, 0xd76364c7u, 0x759ade78u, 0x13d25829u, 0xb209d1dau, 0x50414b8bu, 0xee78c53cu,
    0x8cb03eedu, 0x2ae7b89eu, 0xc91f324fu, 0x6756ac00u, 0x058e25b1u, 0xa3c59f62u, 0x41fd1913u, 0xe03492c4u,
    0x7e6c0c75u, 0x1ca38626u, 0xbadaffd7u, 0x59127988u, 0xf749f339u, 0x95816ceau, 0x33b8e69bu, 0xd1f0604cu,
    0x7027d9fdu, 0x0e5f53aeu, 0xac96cd5fu, 0x4ace4710u, 0xe905c0c1u, 0x873d3a72u, 0x2574b423u, 0xc3ac2dd4u,
    0x61e3a785u, 0x001b2136u, 0x9e529ae7u, 0x3c8a1498u, 0xdac18e49u, 0x78f907fau, 0x173081abu, 0xb567fb5cu,
    0x539f750du, 0xf1d6eebeu, 0x900e686fu, 0x2e45e220u, 0xcc7d5bd1u, 0x6ab4d582u, 0x08ec4f33u, 0xa723c8e4u,
    0x455b4295u, 0xe392bc46u, 0x81ca35f7u, 0x2001afa8u, 0xbe392959u, 0x5c70a30au, 0xfaa81cbbu, 0x98df966cu,
    0x3717101du, 0xd54e89ceu, 0x7386037fu, 0x11bd7d30u, 0xaff4f6e1u, 0x4e2c7092u, 0xec63ea43u, 0x8a9b63f4u,
    0x28d2dda5u, 0xc70a5756u, 0x6541d107u, 0x03794ab8u, 0xa1b0c469u, 0x3fe83e1au, 0xde1fb7cbu, 0x7c57317cu,
    0x1a8eab2du, 0xb8c624deu, 0x56fd9e8fu, 0xf5351840u, 0x936c91f1u, 0x31a40ba2u, 0xcfdb8553u, 0x6e12ff04u,
    0x0c4a78b5u, 0xaa81f266u, 0x48b96c17u, 0xe6f0e5c8u, 0x85285f79u, 0x235fd92au, 0xc19752dbu, 0x5fcecc8cu,
};

struct bshim_210_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_210_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_210_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_210_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_210_reset(struct bshim_210_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0019600eu;
    return 0;
}

