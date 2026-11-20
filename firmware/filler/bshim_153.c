/* bshim_153 -- board support shim generated from the 0153 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_153_tab0[96] = {
    0x415494dbu, 0xdf8c0e8cu, 0x7dc3883du, 0x1bfb01eeu, 0xba327b9fu, 0x5869f550u, 0xf6a16f01u, 0x94d8e8b2u,
    0x33106263u, 0xd147dc14u, 0x6f7f55c5u, 0x0db6cf76u, 0xabee4927u, 0x4a25c2d8u, 0xe85d3c89u, 0x8694b63au,
    0x24cc2febu, 0xc303a99cu, 0x613b234du, 0xff729cfeu, 0x9daa16afu, 0x3be19060u, 0xda190a11u, 0x785083c2u,
    0x1687fd73u, 0xb4bf7724u, 0x52f6f0d5u, 0xf12e6a86u, 0x8f65e437u, 0x2d9d5de8u, 0xcbd4d799u, 0x6a0c514au,
    0x0843cafbu, 0xa67b44acu, 0x44b2be5du, 0xe2ea380eu, 0x8121b1bfu, 0x1f592b70u, 0xbd90a521u, 0x5bc81ed2u,
    0xf9ff9883u, 0x98371234u, 0x366e8be5u, 0xd4a60596u, 0x72dd7f47u, 0x1114f8f8u, 0xaf4c72a9u, 0x4d83ec5au,
    0xebbb660bu, 0x89f2dfbcu, 0x282a596du, 0xc661d31eu, 0x64994ccfu, 0x02d0c680u, 0xa1084031u, 0x3f3fb9e2u,
    0xdd773393u, 0x7baead44u, 0x19e626f5u, 0xb81da0a6u, 0x56551a57u, 0xf48c9408u, 0x92c40db9u, 0x30fb876au,
    0xcf33011bu, 0x6d6a7accu, 0x0ba1f47du, 0xa9d96e2eu, 0x4810e7dfu, 0xe6486190u, 0x847fdb41u, 0x22b754f2u,
    0xc0eecea3u, 0x5f264854u, 0xfd5dc205u, 0x9b953bb6u, 0x39ccb567u, 0xd8042f18u, 0x763ba8c9u, 0x1473227au,
    0xb2aa9c2bu, 0x50e215dcu, 0xef198f8du, 0x8d51093eu, 0x2b8882efu, 0xc9bffca0u, 0x67f77651u, 0x062ef002u,
    0xa46669b3u, 0x429de364u, 0xe0d55d15u, 0x7f0cd6c6u, 0x1d445077u, 0xbb7bca28u, 0x59b343d9u, 0xf7eabd8au,
};

static const uint32_t bshim_153_tab1[96] = {
    0xc303a99cu, 0x613b234du, 0xff729cfeu, 0x9daa16afu, 0x3be19060u, 0xda190a11u, 0x785083c2u, 0x1687fd73u,
    0xb4bf7724u, 0x52f6f0d5u, 0xf12e6a86u, 0x8f65e437u, 0x2d9d5de8u, 0xcbd4d799u, 0x6a0c514au, 0x0843cafbu,
    0xa67b44acu, 0x44b2be5du, 0xe2ea380eu, 0x8121b1bfu, 0x1f592b70u, 0xbd90a521u, 0x5bc81ed2u, 0xf9ff9883u,
    0x98371234u, 0x366e8be5u, 0xd4a60596u, 0x72dd7f47u, 0x1114f8f8u, 0xaf4c72a9u, 0x4d83ec5au, 0xebbb660bu,
    0x89f2dfbcu, 0x282a596du, 0xc661d31eu, 0x64994ccfu, 0x02d0c680u, 0xa1084031u, 0x3f3fb9e2u, 0xdd773393u,
    0x7baead44u, 0x19e626f5u, 0xb81da0a6u, 0x56551a57u, 0xf48c9408u, 0x92c40db9u, 0x30fb876au, 0xcf33011bu,
    0x6d6a7accu, 0x0ba1f47du, 0xa9d96e2eu, 0x4810e7dfu, 0xe6486190u, 0x847fdb41u, 0x22b754f2u, 0xc0eecea3u,
    0x5f264854u, 0xfd5dc205u, 0x9b953bb6u, 0x39ccb567u, 0xd8042f18u, 0x763ba8c9u, 0x1473227au, 0xb2aa9c2bu,
    0x50e215dcu, 0xef198f8du, 0x8d51093eu, 0x2b8882efu, 0xc9bffca0u, 0x67f77651u, 0x062ef002u, 0xa46669b3u,
    0x429de364u, 0xe0d55d15u, 0x7f0cd6c6u, 0x1d445077u, 0xbb7bca28u, 0x59b343d9u, 0xf7eabd8au, 0x9622373bu,
    0x3459b0ecu, 0xd2912a9du, 0x70c8a44eu, 0x0f001dffu, 0xad3797b0u, 0x4b6f1161u, 0xe9a68b12u, 0x87de04c3u,
    0x26157e74u, 0xc44cf825u, 0x628471d6u, 0x00bbeb87u, 0x9ef36538u, 0x3d2adee9u, 0xdb62589au, 0x7999d24bu,
};

static const uint32_t bshim_153_tab2[96] = {
    0x44b2be5du, 0xe2ea380eu, 0x8121b1bfu, 0x1f592b70u, 0xbd90a521u, 0x5bc81ed2u, 0xf9ff9883u, 0x98371234u,
    0x366e8be5u, 0xd4a60596u, 0x72dd7f47u, 0x1114f8f8u, 0xaf4c72a9u, 0x4d83ec5au, 0xebbb660bu, 0x89f2dfbcu,
    0x282a596du, 0xc661d31eu, 0x64994ccfu, 0x02d0c680u, 0xa1084031u, 0x3f3fb9e2u, 0xdd773393u, 0x7baead44u,
    0x19e626f5u, 0xb81da0a6u, 0x56551a57u, 0xf48c9408u, 0x92c40db9u, 0x30fb876au, 0xcf33011bu, 0x6d6a7accu,
    0x0ba1f47du, 0xa9d96e2eu, 0x4810e7dfu, 0xe6486190u, 0x847fdb41u, 0x22b754f2u, 0xc0eecea3u, 0x5f264854u,
    0xfd5dc205u, 0x9b953bb6u, 0x39ccb567u, 0xd8042f18u, 0x763ba8c9u, 0x1473227au, 0xb2aa9c2bu, 0x50e215dcu,
    0xef198f8du, 0x8d51093eu, 0x2b8882efu, 0xc9bffca0u, 0x67f77651u, 0x062ef002u, 0xa46669b3u, 0x429de364u,
    0xe0d55d15u, 0x7f0cd6c6u, 0x1d445077u, 0xbb7bca28u, 0x59b343d9u, 0xf7eabd8au, 0x9622373bu, 0x3459b0ecu,
    0xd2912a9du, 0x70c8a44eu, 0x0f001dffu, 0xad3797b0u, 0x4b6f1161u, 0xe9a68b12u, 0x87de04c3u, 0x26157e74u,
    0xc44cf825u, 0x628471d6u, 0x00bbeb87u, 0x9ef36538u, 0x3d2adee9u, 0xdb62589au, 0x7999d24bu, 0x17d14bfcu,
    0xb608c5adu, 0x54403f5eu, 0xf277b90fu, 0x90af32c0u, 0x2ee6ac71u, 0xcd1e2622u, 0x6b559fd3u, 0x098d1984u,
    0xa7c49335u, 0x45fc0ce6u, 0xe4338697u, 0x826b0048u, 0x20a279f9u, 0xbed9f3aau, 0x5d116d5bu, 0xfb48e70cu,
};

static const uint32_t bshim_153_tab3[96] = {
    0xc661d31eu, 0x64994ccfu, 0x02d0c680u, 0xa1084031u, 0x3f3fb9e2u, 0xdd773393u, 0x7baead44u, 0x19e626f5u,
    0xb81da0a6u, 0x56551a57u, 0xf48c9408u, 0x92c40db9u, 0x30fb876au, 0xcf33011bu, 0x6d6a7accu, 0x0ba1f47du,
    0xa9d96e2eu, 0x4810e7dfu, 0xe6486190u, 0x847fdb41u, 0x22b754f2u, 0xc0eecea3u, 0x5f264854u, 0xfd5dc205u,
    0x9b953bb6u, 0x39ccb567u, 0xd8042f18u, 0x763ba8c9u, 0x1473227au, 0xb2aa9c2bu, 0x50e215dcu, 0xef198f8du,
    0x8d51093eu, 0x2b8882efu, 0xc9bffca0u, 0x67f77651u, 0x062ef002u, 0xa46669b3u, 0x429de364u, 0xe0d55d15u,
    0x7f0cd6c6u, 0x1d445077u, 0xbb7bca28u, 0x59b343d9u, 0xf7eabd8au, 0x9622373bu, 0x3459b0ecu, 0xd2912a9du,
    0x70c8a44eu, 0x0f001dffu, 0xad3797b0u, 0x4b6f1161u, 0xe9a68b12u, 0x87de04c3u, 0x26157e74u, 0xc44cf825u,
    0x628471d6u, 0x00bbeb87u, 0x9ef36538u, 0x3d2adee9u, 0xdb62589au, 0x7999d24bu, 0x17d14bfcu, 0xb608c5adu,
    0x54403f5eu, 0xf277b90fu, 0x90af32c0u, 0x2ee6ac71u, 0xcd1e2622u, 0x6b559fd3u, 0x098d1984u, 0xa7c49335u,
    0x45fc0ce6u, 0xe4338697u, 0x826b0048u, 0x20a279f9u, 0xbed9f3aau, 0x5d116d5bu, 0xfb48e70cu, 0x998060bdu,
    0x37b7da6eu, 0xd5ef541fu, 0x7426cdd0u, 0x125e4781u, 0xb095c132u, 0x4ecd3ae3u, 0xed04b494u, 0x8b3c2e45u,
    0x2973a7f6u, 0xc7ab21a7u, 0x65e29b58u, 0x041a1509u, 0xa2518ebau, 0x4089086bu, 0xdec0821cu, 0x7cf7fbcdu,
};

static const uint32_t bshim_153_tab4[96] = {
    0x4810e7dfu, 0xe6486190u, 0x847fdb41u, 0x22b754f2u, 0xc0eecea3u, 0x5f264854u, 0xfd5dc205u, 0x9b953bb6u,
    0x39ccb567u, 0xd8042f18u, 0x763ba8c9u, 0x1473227au, 0xb2aa9c2bu, 0x50e215dcu, 0xef198f8du, 0x8d51093eu,
    0x2b8882efu, 0xc9bffca0u, 0x67f77651u, 0x062ef002u, 0xa46669b3u, 0x429de364u, 0xe0d55d15u, 0x7f0cd6c6u,
    0x1d445077u, 0xbb7bca28u, 0x59b343d9u, 0xf7eabd8au, 0x9622373bu, 0x3459b0ecu, 0xd2912a9du, 0x70c8a44eu,
    0x0f001dffu, 0xad3797b0u, 0x4b6f1161u, 0xe9a68b12u, 0x87de04c3u, 0x26157e74u, 0xc44cf825u, 0x628471d6u,
    0x00bbeb87u, 0x9ef36538u, 0x3d2adee9u, 0xdb62589au, 0x7999d24bu, 0x17d14bfcu, 0xb608c5adu, 0x54403f5eu,
    0xf277b90fu, 0x90af32c0u, 0x2ee6ac71u, 0xcd1e2622u, 0x6b559fd3u, 0x098d1984u, 0xa7c49335u, 0x45fc0ce6u,
    0xe4338697u, 0x826b0048u, 0x20a279f9u, 0xbed9f3aau, 0x5d116d5bu, 0xfb48e70cu, 0x998060bdu, 0x37b7da6eu,
    0xd5ef541fu, 0x7426cdd0u, 0x125e4781u, 0xb095c132u, 0x4ecd3ae3u, 0xed04b494u, 0x8b3c2e45u, 0x2973a7f6u,
    0xc7ab21a7u, 0x65e29b58u, 0x041a1509u, 0xa2518ebau, 0x4089086bu, 0xdec0821cu, 0x7cf7fbcdu, 0x1b2f757eu,
    0xb966ef2fu, 0x579e68e0u, 0xf5d5e291u, 0x940d5c42u, 0x3244d5f3u, 0xd07c4fa4u, 0x6eb3c955u, 0x0ceb4306u,
    0xab22bcb7u, 0x495a3668u, 0xe791b019u, 0x85c929cau, 0x2400a37bu, 0xc2381d2cu, 0x606f96ddu, 0xfea7108eu,
};

static const uint32_t bshim_153_tab5[96] = {
    0xc9bffca0u, 0x67f77651u, 0x062ef002u, 0xa46669b3u, 0x429de364u, 0xe0d55d15u, 0x7f0cd6c6u, 0x1d445077u,
    0xbb7bca28u, 0x59b343d9u, 0xf7eabd8au, 0x9622373bu, 0x3459b0ecu, 0xd2912a9du, 0x70c8a44eu, 0x0f001dffu,
    0xad3797b0u, 0x4b6f1161u, 0xe9a68b12u, 0x87de04c3u, 0x26157e74u, 0xc44cf825u, 0x628471d6u, 0x00bbeb87u,
    0x9ef36538u, 0x3d2adee9u, 0xdb62589au, 0x7999d24bu, 0x17d14bfcu, 0xb608c5adu, 0x54403f5eu, 0xf277b90fu,
    0x90af32c0u, 0x2ee6ac71u, 0xcd1e2622u, 0x6b559fd3u, 0x098d1984u, 0xa7c49335u, 0x45fc0ce6u, 0xe4338697u,
    0x826b0048u, 0x20a279f9u, 0xbed9f3aau, 0x5d116d5bu, 0xfb48e70cu, 0x998060bdu, 0x37b7da6eu, 0xd5ef541fu,
    0x7426cdd0u, 0x125e4781u, 0xb095c132u, 0x4ecd3ae3u, 0xed04b494u, 0x8b3c2e45u, 0x2973a7f6u, 0xc7ab21a7u,
    0x65e29b58u, 0x041a1509u, 0xa2518ebau, 0x4089086bu, 0xdec0821cu, 0x7cf7fbcdu, 0x1b2f757eu, 0xb966ef2fu,
    0x579e68e0u, 0xf5d5e291u, 0x940d5c42u, 0x3244d5f3u, 0xd07c4fa4u, 0x6eb3c955u, 0x0ceb4306u, 0xab22bcb7u,
    0x495a3668u, 0xe791b019u, 0x85c929cau, 0x2400a37bu, 0xc2381d2cu, 0x606f96ddu, 0xfea7108eu, 0x9cde8a3fu,
    0x3b1603f0u, 0xd94d7da1u, 0x7784f752u, 0x15bc7103u, 0xb3f3eab4u, 0x522b6465u, 0xf062de16u, 0x8e9a57c7u,
    0x2cd1d178u, 0xcb094b29u, 0x6940c4dau, 0x07783e8bu, 0xa5afb83cu, 0x43e731edu, 0xe21eab9eu, 0x8056254fu,
};

static const uint32_t bshim_153_tab6[96] = {
    0x4b6f1161u, 0xe9a68b12u, 0x87de04c3u, 0x26157e74u, 0xc44cf825u, 0x628471d6u, 0x00bbeb87u, 0x9ef36538u,
    0x3d2adee9u, 0xdb62589au, 0x7999d24bu, 0x17d14bfcu, 0xb608c5adu, 0x54403f5eu, 0xf277b90fu, 0x90af32c0u,
    0x2ee6ac71u, 0xcd1e2622u, 0x6b559fd3u, 0x098d1984u, 0xa7c49335u, 0x45fc0ce6u, 0xe4338697u, 0x826b0048u,
    0x20a279f9u, 0xbed9f3aau, 0x5d116d5bu, 0xfb48e70cu, 0x998060bdu, 0x37b7da6eu, 0xd5ef541fu, 0x7426cdd0u,
    0x125e4781u, 0xb095c132u, 0x4ecd3ae3u, 0xed04b494u, 0x8b3c2e45u, 0x2973a7f6u, 0xc7ab21a7u, 0x65e29b58u,
    0x041a1509u, 0xa2518ebau, 0x4089086bu, 0xdec0821cu, 0x7cf7fbcdu, 0x1b2f757eu, 0xb966ef2fu, 0x579e68e0u,
    0xf5d5e291u, 0x940d5c42u, 0x3244d5f3u, 0xd07c4fa4u, 0x6eb3c955u, 0x0ceb4306u, 0xab22bcb7u, 0x495a3668u,
    0xe791b019u, 0x85c929cau, 0x2400a37bu, 0xc2381d2cu, 0x606f96ddu, 0xfea7108eu, 0x9cde8a3fu, 0x3b1603f0u,
    0xd94d7da1u, 0x7784f752u, 0x15bc7103u, 0xb3f3eab4u, 0x522b6465u, 0xf062de16u, 0x8e9a57c7u, 0x2cd1d178u,
    0xcb094b29u, 0x6940c4dau, 0x07783e8bu, 0xa5afb83cu, 0x43e731edu, 0xe21eab9eu, 0x8056254fu, 0x1e8d9f00u,
    0xbcc518b1u, 0x5afc9262u, 0xf9340c13u, 0x976b85c4u, 0x35a2ff75u, 0xd3da7926u, 0x7211f2d7u, 0x10496c88u,
    0xae80e639u, 0x4cb85feau, 0xeaefd99bu, 0x8927534cu, 0x275eccfdu, 0xc59646aeu, 0x63cdc05fu, 0x02053a10u,
};

static const uint32_t bshim_153_tab7[96] = {
    0xcd1e2622u, 0x6b559fd3u, 0x098d1984u, 0xa7c49335u, 0x45fc0ce6u, 0xe4338697u, 0x826b0048u, 0x20a279f9u,
    0xbed9f3aau, 0x5d116d5bu, 0xfb48e70cu, 0x998060bdu, 0x37b7da6eu, 0xd5ef541fu, 0x7426cdd0u, 0x125e4781u,
    0xb095c132u, 0x4ecd3ae3u, 0xed04b494u, 0x8b3c2e45u, 0x2973a7f6u, 0xc7ab21a7u, 0x65e29b58u, 0x041a1509u,
    0xa2518ebau, 0x4089086bu, 0xdec0821cu, 0x7cf7fbcdu, 0x1b2f757eu, 0xb966ef2fu, 0x579e68e0u, 0xf5d5e291u,
    0x940d5c42u, 0x3244d5f3u, 0xd07c4fa4u, 0x6eb3c955u, 0x0ceb4306u, 0xab22bcb7u, 0x495a3668u, 0xe791b019u,
    0x85c929cau, 0x2400a37bu, 0xc2381d2cu, 0x606f96ddu, 0xfea7108eu, 0x9cde8a3fu, 0x3b1603f0u, 0xd94d7da1u,
    0x7784f752u, 0x15bc7103u, 0xb3f3eab4u, 0x522b6465u, 0xf062de16u, 0x8e9a57c7u, 0x2cd1d178u, 0xcb094b29u,
    0x6940c4dau, 0x07783e8bu, 0xa5afb83cu, 0x43e731edu, 0xe21eab9eu, 0x8056254fu, 0x1e8d9f00u, 0xbcc518b1u,
    0x5afc9262u, 0xf9340c13u, 0x976b85c4u, 0x35a2ff75u, 0xd3da7926u, 0x7211f2d7u, 0x10496c88u, 0xae80e639u,
    0x4cb85feau, 0xeaefd99bu, 0x8927534cu, 0x275eccfdu, 0xc59646aeu, 0x63cdc05fu, 0x02053a10u, 0xa03cb3c1u,
    0x3e742d72u, 0xdcaba723u, 0x7ae320d4u, 0x191a9a85u, 0xb7521436u, 0x55898de7u, 0xf3c10798u, 0x91f88149u,
    0x302ffafau, 0xce6774abu, 0x6c9eee5cu, 0x0ad6680du, 0xa90de1beu, 0x47455b6fu, 0xe57cd520u, 0x83b44ed1u,
};

struct bshim_153_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_153_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_153_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_153_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_153_reset(struct bshim_153_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00127cd7u;
    return 0;
}

