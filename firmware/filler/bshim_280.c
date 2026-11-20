/* bshim_280 -- board support shim generated from the 0280 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_280_tab0[96] = {
    0x7c9418c8u, 0x1acb9279u, 0xb9030c2au, 0x573a85dbu, 0xf571ff8cu, 0x93a9793du, 0x31e0f2eeu, 0xd0186c9fu,
    0x6e4fe650u, 0x0c876001u, 0xaabed9b2u, 0x48f65363u, 0xe72dcd14u, 0x856546c5u, 0x239cc076u, 0xc1d43a27u,
    0x600bb3d8u, 0xfe432d89u, 0x9c7aa73au, 0x3ab220ebu, 0xd8e99a9cu, 0x7721144du, 0x15588dfeu, 0xb39007afu,
    0x51c78160u, 0xeffefb11u, 0x8e3674c2u, 0x2c6dee73u, 0xcaa56824u, 0x68dce1d5u, 0x07145b86u, 0xa54bd537u,
    0x43834ee8u, 0xe1bac899u, 0x7ff2424au, 0x1e29bbfbu, 0xbc6135acu, 0x5a98af5du, 0xf8d0290eu, 0x9707a2bfu,
    0x353f1c70u, 0xd3769621u, 0x71ae0fd2u, 0x0fe58983u, 0xae1d0334u, 0x4c547ce5u, 0xea8bf696u, 0x88c37047u,
    0x26fae9f8u, 0xc53263a9u, 0x6369dd5au, 0x01a1570bu, 0x9fd8d0bcu, 0x3e104a6du, 0xdc47c41eu, 0x7a7f3dcfu,
    0x18b6b780u, 0xb6ee3131u, 0x5525aae2u, 0xf35d2493u, 0x91949e44u, 0x2fcc17f5u, 0xce0391a6u, 0x6c3b0b57u,
    0x0a728508u, 0xa8a9feb9u, 0x46e1786au, 0xe518f21bu, 0x83506bccu, 0x2187e57du, 0xbfbf5f2eu, 0x5df6d8dfu,
    0xfc2e5290u, 0x9a65cc41u, 0x389d45f2u, 0xd6d4bfa3u, 0x750c3954u, 0x1343b305u, 0xb17b2cb6u, 0x4fb2a667u,
    0xedea2018u, 0x8c2199c9u, 0x2a59137au, 0xc8908d2bu, 0x66c806dcu, 0x04ff808du, 0xa336fa3eu, 0x416e73efu,
    0xdfa5eda0u, 0x7ddd6751u, 0x1c14e102u, 0xba4c5ab3u, 0x5883d464u, 0xf6bb4e15u, 0x94f2c7c6u, 0x332a4177u,
};

static const uint32_t bshim_280_tab1[96] = {
    0xfe432d89u, 0x9c7aa73au, 0x3ab220ebu, 0xd8e99a9cu, 0x7721144du, 0x15588dfeu, 0xb39007afu, 0x51c78160u,
    0xeffefb11u, 0x8e3674c2u, 0x2c6dee73u, 0xcaa56824u, 0x68dce1d5u, 0x07145b86u, 0xa54bd537u, 0x43834ee8u,
    0xe1bac899u, 0x7ff2424au, 0x1e29bbfbu, 0xbc6135acu, 0x5a98af5du, 0xf8d0290eu, 0x9707a2bfu, 0x353f1c70u,
    0xd3769621u, 0x71ae0fd2u, 0x0fe58983u, 0xae1d0334u, 0x4c547ce5u, 0xea8bf696u, 0x88c37047u, 0x26fae9f8u,
    0xc53263a9u, 0x6369dd5au, 0x01a1570bu, 0x9fd8d0bcu, 0x3e104a6du, 0xdc47c41eu, 0x7a7f3dcfu, 0x18b6b780u,
    0xb6ee3131u, 0x5525aae2u, 0xf35d2493u, 0x91949e44u, 0x2fcc17f5u, 0xce0391a6u, 0x6c3b0b57u, 0x0a728508u,
    0xa8a9feb9u, 0x46e1786au, 0xe518f21bu, 0x83506bccu, 0x2187e57du, 0xbfbf5f2eu, 0x5df6d8dfu, 0xfc2e5290u,
    0x9a65cc41u, 0x389d45f2u, 0xd6d4bfa3u, 0x750c3954u, 0x1343b305u, 0xb17b2cb6u, 0x4fb2a667u, 0xedea2018u,
    0x8c2199c9u, 0x2a59137au, 0xc8908d2bu, 0x66c806dcu, 0x04ff808du, 0xa336fa3eu, 0x416e73efu, 0xdfa5eda0u,
    0x7ddd6751u, 0x1c14e102u, 0xba4c5ab3u, 0x5883d464u, 0xf6bb4e15u, 0x94f2c7c6u, 0x332a4177u, 0xd161bb28u,
    0x6f9934d9u, 0x0dd0ae8au, 0xac08283bu, 0x4a3fa1ecu, 0xe8771b9du, 0x86ae954eu, 0x24e60effu, 0xc31d88b0u,
    0x61550261u, 0xff8c7c12u, 0x9dc3f5c3u, 0x3bfb6f74u, 0xda32e925u, 0x786a62d6u, 0x16a1dc87u, 0xb4d95638u,
};

static const uint32_t bshim_280_tab2[96] = {
    0x7ff2424au, 0x1e29bbfbu, 0xbc6135acu, 0x5a98af5du, 0xf8d0290eu, 0x9707a2bfu, 0x353f1c70u, 0xd3769621u,
    0x71ae0fd2u, 0x0fe58983u, 0xae1d0334u, 0x4c547ce5u, 0xea8bf696u, 0x88c37047u, 0x26fae9f8u, 0xc53263a9u,
    0x6369dd5au, 0x01a1570bu, 0x9fd8d0bcu, 0x3e104a6du, 0xdc47c41eu, 0x7a7f3dcfu, 0x18b6b780u, 0xb6ee3131u,
    0x5525aae2u, 0xf35d2493u, 0x91949e44u, 0x2fcc17f5u, 0xce0391a6u, 0x6c3b0b57u, 0x0a728508u, 0xa8a9feb9u,
    0x46e1786au, 0xe518f21bu, 0x83506bccu, 0x2187e57du, 0xbfbf5f2eu, 0x5df6d8dfu, 0xfc2e5290u, 0x9a65cc41u,
    0x389d45f2u, 0xd6d4bfa3u, 0x750c3954u, 0x1343b305u, 0xb17b2cb6u, 0x4fb2a667u, 0xedea2018u, 0x8c2199c9u,
    0x2a59137au, 0xc8908d2bu, 0x66c806dcu, 0x04ff808du, 0xa336fa3eu, 0x416e73efu, 0xdfa5eda0u, 0x7ddd6751u,
    0x1c14e102u, 0xba4c5ab3u, 0x5883d464u, 0xf6bb4e15u, 0x94f2c7c6u, 0x332a4177u, 0xd161bb28u, 0x6f9934d9u,
    0x0dd0ae8au, 0xac08283bu, 0x4a3fa1ecu, 0xe8771b9du, 0x86ae954eu, 0x24e60effu, 0xc31d88b0u, 0x61550261u,
    0xff8c7c12u, 0x9dc3f5c3u, 0x3bfb6f74u, 0xda32e925u, 0x786a62d6u, 0x16a1dc87u, 0xb4d95638u, 0x5310cfe9u,
    0xf148499au, 0x8f7fc34bu, 0x2db73cfcu, 0xcbeeb6adu, 0x6a26305eu, 0x085daa0fu, 0xa69523c0u, 0x44cc9d71u,
    0xe3041722u, 0x813b90d3u, 0x1f730a84u, 0xbdaa8435u, 0x5be1fde6u, 0xfa197797u, 0x9850f148u, 0x36886af9u,
};

static const uint32_t bshim_280_tab3[96] = {
    0x01a1570bu, 0x9fd8d0bcu, 0x3e104a6du, 0xdc47c41eu, 0x7a7f3dcfu, 0x18b6b780u, 0xb6ee3131u, 0x5525aae2u,
    0xf35d2493u, 0x91949e44u, 0x2fcc17f5u, 0xce0391a6u, 0x6c3b0b57u, 0x0a728508u, 0xa8a9feb9u, 0x46e1786au,
    0xe518f21bu, 0x83506bccu, 0x2187e57du, 0xbfbf5f2eu, 0x5df6d8dfu, 0xfc2e5290u, 0x9a65cc41u, 0x389d45f2u,
    0xd6d4bfa3u, 0x750c3954u, 0x1343b305u, 0xb17b2cb6u, 0x4fb2a667u, 0xedea2018u, 0x8c2199c9u, 0x2a59137au,
    0xc8908d2bu, 0x66c806dcu, 0x04ff808du, 0xa336fa3eu, 0x416e73efu, 0xdfa5eda0u, 0x7ddd6751u, 0x1c14e102u,
    0xba4c5ab3u, 0x5883d464u, 0xf6bb4e15u, 0x94f2c7c6u, 0x332a4177u, 0xd161bb28u, 0x6f9934d9u, 0x0dd0ae8au,
    0xac08283bu, 0x4a3fa1ecu, 0xe8771b9du, 0x86ae954eu, 0x24e60effu, 0xc31d88b0u, 0x61550261u, 0xff8c7c12u,
    0x9dc3f5c3u, 0x3bfb6f74u, 0xda32e925u, 0x786a62d6u, 0x16a1dc87u, 0xb4d95638u, 0x5310cfe9u, 0xf148499au,
    0x8f7fc34bu, 0x2db73cfcu, 0xcbeeb6adu, 0x6a26305eu, 0x085daa0fu, 0xa69523c0u, 0x44cc9d71u, 0xe3041722u,
    0x813b90d3u, 0x1f730a84u, 0xbdaa8435u, 0x5be1fde6u, 0xfa197797u, 0x9850f148u, 0x36886af9u, 0xd4bfe4aau,
    0x72f75e5bu, 0x112ed80cu, 0xaf6651bdu, 0x4d9dcb6eu, 0xebd5451fu, 0x8a0cbed0u, 0x28443881u, 0xc67bb232u,
    0x64b32be3u, 0x02eaa594u, 0xa1221f45u, 0x3f5998f6u, 0xdd9112a7u, 0x7bc88c58u, 0x1a000609u, 0xb8377fbau,
};

static const uint32_t bshim_280_tab4[96] = {
    0x83506bccu, 0x2187e57du, 0xbfbf5f2eu, 0x5df6d8dfu, 0xfc2e5290u, 0x9a65cc41u, 0x389d45f2u, 0xd6d4bfa3u,
    0x750c3954u, 0x1343b305u, 0xb17b2cb6u, 0x4fb2a667u, 0xedea2018u, 0x8c2199c9u, 0x2a59137au, 0xc8908d2bu,
    0x66c806dcu, 0x04ff808du, 0xa336fa3eu, 0x416e73efu, 0xdfa5eda0u, 0x7ddd6751u, 0x1c14e102u, 0xba4c5ab3u,
    0x5883d464u, 0xf6bb4e15u, 0x94f2c7c6u, 0x332a4177u, 0xd161bb28u, 0x6f9934d9u, 0x0dd0ae8au, 0xac08283bu,
    0x4a3fa1ecu, 0xe8771b9du, 0x86ae954eu, 0x24e60effu, 0xc31d88b0u, 0x61550261u, 0xff8c7c12u, 0x9dc3f5c3u,
    0x3bfb6f74u, 0xda32e925u, 0x786a62d6u, 0x16a1dc87u, 0xb4d95638u, 0x5310cfe9u, 0xf148499au, 0x8f7fc34bu,
    0x2db73cfcu, 0xcbeeb6adu, 0x6a26305eu, 0x085daa0fu, 0xa69523c0u, 0x44cc9d71u, 0xe3041722u, 0x813b90d3u,
    0x1f730a84u, 0xbdaa8435u, 0x5be1fde6u, 0xfa197797u, 0x9850f148u, 0x36886af9u, 0xd4bfe4aau, 0x72f75e5bu,
    0x112ed80cu, 0xaf6651bdu, 0x4d9dcb6eu, 0xebd5451fu, 0x8a0cbed0u, 0x28443881u, 0xc67bb232u, 0x64b32be3u,
    0x02eaa594u, 0xa1221f45u, 0x3f5998f6u, 0xdd9112a7u, 0x7bc88c58u, 0x1a000609u, 0xb8377fbau, 0x566ef96bu,
    0xf4a6731cu, 0x92ddeccdu, 0x3115667eu, 0xcf4ce02fu, 0x6d8459e0u, 0x0bbbd391u, 0xa9f34d42u, 0x482ac6f3u,
    0xe66240a4u, 0x8499ba55u, 0x22d13406u, 0xc108adb7u, 0x5f402768u, 0xfd77a119u, 0x9baf1acau, 0x39e6947bu,
};

static const uint32_t bshim_280_tab5[96] = {
    0x04ff808du, 0xa336fa3eu, 0x416e73efu, 0xdfa5eda0u, 0x7ddd6751u, 0x1c14e102u, 0xba4c5ab3u, 0x5883d464u,
    0xf6bb4e15u, 0x94f2c7c6u, 0x332a4177u, 0xd161bb28u, 0x6f9934d9u, 0x0dd0ae8au, 0xac08283bu, 0x4a3fa1ecu,
    0xe8771b9du, 0x86ae954eu, 0x24e60effu, 0xc31d88b0u, 0x61550261u, 0xff8c7c12u, 0x9dc3f5c3u, 0x3bfb6f74u,
    0xda32e925u, 0x786a62d6u, 0x16a1dc87u, 0xb4d95638u, 0x5310cfe9u, 0xf148499au, 0x8f7fc34bu, 0x2db73cfcu,
    0xcbeeb6adu, 0x6a26305eu, 0x085daa0fu, 0xa69523c0u, 0x44cc9d71u, 0xe3041722u, 0x813b90d3u, 0x1f730a84u,
    0xbdaa8435u, 0x5be1fde6u, 0xfa197797u, 0x9850f148u, 0x36886af9u, 0xd4bfe4aau, 0x72f75e5bu, 0x112ed80cu,
    0xaf6651bdu, 0x4d9dcb6eu, 0xebd5451fu, 0x8a0cbed0u, 0x28443881u, 0xc67bb232u, 0x64b32be3u, 0x02eaa594u,
    0xa1221f45u, 0x3f5998f6u, 0xdd9112a7u, 0x7bc88c58u, 0x1a000609u, 0xb8377fbau, 0x566ef96bu, 0xf4a6731cu,
    0x92ddeccdu, 0x3115667eu, 0xcf4ce02fu, 0x6d8459e0u, 0x0bbbd391u, 0xa9f34d42u, 0x482ac6f3u, 0xe66240a4u,
    0x8499ba55u, 0x22d13406u, 0xc108adb7u, 0x5f402768u, 0xfd77a119u, 0x9baf1acau, 0x39e6947bu, 0xd81e0e2cu,
    0x765587ddu, 0x148d018eu, 0xb2c47b3fu, 0x50fbf4f0u, 0xef336ea1u, 0x8d6ae852u, 0x2ba26203u, 0xc9d9dbb4u,
    0x68115565u, 0x0648cf16u, 0xa48048c7u, 0x42b7c278u, 0xe0ef3c29u, 0x7f26b5dau, 0x1d5e2f8bu, 0xbb95a93cu,
};

static const uint32_t bshim_280_tab6[96] = {
    0x86ae954eu, 0x24e60effu, 0xc31d88b0u, 0x61550261u, 0xff8c7c12u, 0x9dc3f5c3u, 0x3bfb6f74u, 0xda32e925u,
    0x786a62d6u, 0x16a1dc87u, 0xb4d95638u, 0x5310cfe9u, 0xf148499au, 0x8f7fc34bu, 0x2db73cfcu, 0xcbeeb6adu,
    0x6a26305eu, 0x085daa0fu, 0xa69523c0u, 0x44cc9d71u, 0xe3041722u, 0x813b90d3u, 0x1f730a84u, 0xbdaa8435u,
    0x5be1fde6u, 0xfa197797u, 0x9850f148u, 0x36886af9u, 0xd4bfe4aau, 0x72f75e5bu, 0x112ed80cu, 0xaf6651bdu,
    0x4d9dcb6eu, 0xebd5451fu, 0x8a0cbed0u, 0x28443881u, 0xc67bb232u, 0x64b32be3u, 0x02eaa594u, 0xa1221f45u,
    0x3f5998f6u, 0xdd9112a7u, 0x7bc88c58u, 0x1a000609u, 0xb8377fbau, 0x566ef96bu, 0xf4a6731cu, 0x92ddeccdu,
    0x3115667eu, 0xcf4ce02fu, 0x6d8459e0u, 0x0bbbd391u, 0xa9f34d42u, 0x482ac6f3u, 0xe66240a4u, 0x8499ba55u,
    0x22d13406u, 0xc108adb7u, 0x5f402768u, 0xfd77a119u, 0x9baf1acau, 0x39e6947bu, 0xd81e0e2cu, 0x765587ddu,
    0x148d018eu, 0xb2c47b3fu, 0x50fbf4f0u, 0xef336ea1u, 0x8d6ae852u, 0x2ba26203u, 0xc9d9dbb4u, 0x68115565u,
    0x0648cf16u, 0xa48048c7u, 0x42b7c278u, 0xe0ef3c29u, 0x7f26b5dau, 0x1d5e2f8bu, 0xbb95a93cu, 0x59cd22edu,
    0xf8049c9eu, 0x963c164fu, 0x34739000u, 0xd2ab09b1u, 0x70e28362u, 0x0f19fd13u, 0xad5176c4u, 0x4b88f075u,
    0xe9c06a26u, 0x87f7e3d7u, 0x262f5d88u, 0xc466d739u, 0x629e50eau, 0x00d5ca9bu, 0x9f0d444cu, 0x3d44bdfdu,
};

static const uint32_t bshim_280_tab7[96] = {
    0x085daa0fu, 0xa69523c0u, 0x44cc9d71u, 0xe3041722u, 0x813b90d3u, 0x1f730a84u, 0xbdaa8435u, 0x5be1fde6u,
    0xfa197797u, 0x9850f148u, 0x36886af9u, 0xd4bfe4aau, 0x72f75e5bu, 0x112ed80cu, 0xaf6651bdu, 0x4d9dcb6eu,
    0xebd5451fu, 0x8a0cbed0u, 0x28443881u, 0xc67bb232u, 0x64b32be3u, 0x02eaa594u, 0xa1221f45u, 0x3f5998f6u,
    0xdd9112a7u, 0x7bc88c58u, 0x1a000609u, 0xb8377fbau, 0x566ef96bu, 0xf4a6731cu, 0x92ddeccdu, 0x3115667eu,
    0xcf4ce02fu, 0x6d8459e0u, 0x0bbbd391u, 0xa9f34d42u, 0x482ac6f3u, 0xe66240a4u, 0x8499ba55u, 0x22d13406u,
    0xc108adb7u, 0x5f402768u, 0xfd77a119u, 0x9baf1acau, 0x39e6947bu, 0xd81e0e2cu, 0x765587ddu, 0x148d018eu,
    0xb2c47b3fu, 0x50fbf4f0u, 0xef336ea1u, 0x8d6ae852u, 0x2ba26203u, 0xc9d9dbb4u, 0x68115565u, 0x0648cf16u,
    0xa48048c7u, 0x42b7c278u, 0xe0ef3c29u, 0x7f26b5dau, 0x1d5e2f8bu, 0xbb95a93cu, 0x59cd22edu, 0xf8049c9eu,
    0x963c164fu, 0x34739000u, 0xd2ab09b1u, 0x70e28362u, 0x0f19fd13u, 0xad5176c4u, 0x4b88f075u, 0xe9c06a26u,
    0x87f7e3d7u, 0x262f5d88u, 0xc466d739u, 0x629e50eau, 0x00d5ca9bu, 0x9f0d444cu, 0x3d44bdfdu, 0xdb7c37aeu,
    0x79b3b15fu, 0x17eb2b10u, 0xb622a4c1u, 0x545a1e72u, 0xf2919823u, 0x90c911d4u, 0x2f008b85u, 0xcd380536u,
    0x6b6f7ee7u, 0x09a6f898u, 0xa7de7249u, 0x4615ebfau, 0xe44d65abu, 0x8284df5cu, 0x20bc590du, 0xbef3d2beu,
};

struct bshim_280_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_280_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_280_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_280_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_280_reset(struct bshim_280_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0021d568u;
    return 0;
}

