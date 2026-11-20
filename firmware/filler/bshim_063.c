/* bshim_063 -- board support shim generated from the 0063 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_063_tab0[96] = {
    0xa26e1f2du, 0x40a598deu, 0xdedd128fu, 0x7d148c40u, 0x1b4c05f1u, 0xb9837fa2u, 0x57baf953u, 0xf5f27304u,
    0x9429ecb5u, 0x32616666u, 0xd098e017u, 0x6ed059c8u, 0x0d07d379u, 0xab3f4d2au, 0x4976c6dbu, 0xe7ae408cu,
    0x85e5ba3du, 0x241d33eeu, 0xc254ad9fu, 0x608c2750u, 0xfec3a101u, 0x9cfb1ab2u, 0x3b329463u, 0xd96a0e14u,
    0x77a187c5u, 0x15d90176u, 0xb4107b27u, 0x5247f4d8u, 0xf07f6e89u, 0x8eb6e83au, 0x2cee61ebu, 0xcb25db9cu,
    0x695d554du, 0x0794cefeu, 0xa5cc48afu, 0x4403c260u, 0xe23b3c11u, 0x8072b5c2u, 0x1eaa2f73u, 0xbce1a924u,
    0x5b1922d5u, 0xf9509c86u, 0x97881637u, 0x35bf8fe8u, 0xd3f70999u, 0x722e834au, 0x1065fcfbu, 0xae9d76acu,
    0x4cd4f05du, 0xeb0c6a0eu, 0x8943e3bfu, 0x277b5d70u, 0xc5b2d721u, 0x63ea50d2u, 0x0221ca83u, 0xa0594434u,
    0x3e90bde5u, 0xdcc83796u, 0x7affb147u, 0x19372af8u, 0xb76ea4a9u, 0x55a61e5au, 0xf3dd980bu, 0x921511bcu,
    0x304c8b6du, 0xce84051eu, 0x6cbb7ecfu, 0x0af2f880u, 0xa92a7231u, 0x4761ebe2u, 0xe5996593u, 0x83d0df44u,
    0x220858f5u, 0xc03fd2a6u, 0x5e774c57u, 0xfcaec608u, 0x9ae63fb9u, 0x391db96au, 0xd755331bu, 0x758cacccu,
    0x13c4267du, 0xb1fba02eu, 0x503319dfu, 0xee6a9390u, 0x8ca20d41u, 0x2ad986f2u, 0xc91100a3u, 0x67487a54u,
    0x057ff405u, 0xa3b76db6u, 0x41eee767u, 0xe0266118u, 0x7e5ddac9u, 0x1c95547au, 0xbaccce2bu, 0x590447dcu,
};

static const uint32_t bshim_063_tab1[96] = {
    0x241d33eeu, 0xc254ad9fu, 0x608c2750u, 0xfec3a101u, 0x9cfb1ab2u, 0x3b329463u, 0xd96a0e14u, 0x77a187c5u,
    0x15d90176u, 0xb4107b27u, 0x5247f4d8u, 0xf07f6e89u, 0x8eb6e83au, 0x2cee61ebu, 0xcb25db9cu, 0x695d554du,
    0x0794cefeu, 0xa5cc48afu, 0x4403c260u, 0xe23b3c11u, 0x8072b5c2u, 0x1eaa2f73u, 0xbce1a924u, 0x5b1922d5u,
    0xf9509c86u, 0x97881637u, 0x35bf8fe8u, 0xd3f70999u, 0x722e834au, 0x1065fcfbu, 0xae9d76acu, 0x4cd4f05du,
    0xeb0c6a0eu, 0x8943e3bfu, 0x277b5d70u, 0xc5b2d721u, 0x63ea50d2u, 0x0221ca83u, 0xa0594434u, 0x3e90bde5u,
    0xdcc83796u, 0x7affb147u, 0x19372af8u, 0xb76ea4a9u, 0x55a61e5au, 0xf3dd980bu, 0x921511bcu, 0x304c8b6du,
    0xce84051eu, 0x6cbb7ecfu, 0x0af2f880u, 0xa92a7231u, 0x4761ebe2u, 0xe5996593u, 0x83d0df44u, 0x220858f5u,
    0xc03fd2a6u, 0x5e774c57u, 0xfcaec608u, 0x9ae63fb9u, 0x391db96au, 0xd755331bu, 0x758cacccu, 0x13c4267du,
    0xb1fba02eu, 0x503319dfu, 0xee6a9390u, 0x8ca20d41u, 0x2ad986f2u, 0xc91100a3u, 0x67487a54u, 0x057ff405u,
    0xa3b76db6u, 0x41eee767u, 0xe0266118u, 0x7e5ddac9u, 0x1c95547au, 0xbaccce2bu, 0x590447dcu, 0xf73bc18du,
    0x95733b3eu, 0x33aab4efu, 0xd1e22ea0u, 0x7019a851u, 0x0e512202u, 0xac889bb3u, 0x4ac01564u, 0xe8f78f15u,
    0x872f08c6u, 0x25668277u, 0xc39dfc28u, 0x61d575d9u, 0x000cef8au, 0x9e44693bu, 0x3c7be2ecu, 0xdab35c9du,
};

static const uint32_t bshim_063_tab2[96] = {
    0xa5cc48afu, 0x4403c260u, 0xe23b3c11u, 0x8072b5c2u, 0x1eaa2f73u, 0xbce1a924u, 0x5b1922d5u, 0xf9509c86u,
    0x97881637u, 0x35bf8fe8u, 0xd3f70999u, 0x722e834au, 0x1065fcfbu, 0xae9d76acu, 0x4cd4f05du, 0xeb0c6a0eu,
    0x8943e3bfu, 0x277b5d70u, 0xc5b2d721u, 0x63ea50d2u, 0x0221ca83u, 0xa0594434u, 0x3e90bde5u, 0xdcc83796u,
    0x7affb147u, 0x19372af8u, 0xb76ea4a9u, 0x55a61e5au, 0xf3dd980bu, 0x921511bcu, 0x304c8b6du, 0xce84051eu,
    0x6cbb7ecfu, 0x0af2f880u, 0xa92a7231u, 0x4761ebe2u, 0xe5996593u, 0x83d0df44u, 0x220858f5u, 0xc03fd2a6u,
    0x5e774c57u, 0xfcaec608u, 0x9ae63fb9u, 0x391db96au, 0xd755331bu, 0x758cacccu, 0x13c4267du, 0xb1fba02eu,
    0x503319dfu, 0xee6a9390u, 0x8ca20d41u, 0x2ad986f2u, 0xc91100a3u, 0x67487a54u, 0x057ff405u, 0xa3b76db6u,
    0x41eee767u, 0xe0266118u, 0x7e5ddac9u, 0x1c95547au, 0xbaccce2bu, 0x590447dcu, 0xf73bc18du, 0x95733b3eu,
    0x33aab4efu, 0xd1e22ea0u, 0x7019a851u, 0x0e512202u, 0xac889bb3u, 0x4ac01564u, 0xe8f78f15u, 0x872f08c6u,
    0x25668277u, 0xc39dfc28u, 0x61d575d9u, 0x000cef8au, 0x9e44693bu, 0x3c7be2ecu, 0xdab35c9du, 0x78ead64eu,
    0x17224fffu, 0xb559c9b0u, 0x53914361u, 0xf1c8bd12u, 0x900036c3u, 0x2e37b074u, 0xcc6f2a25u, 0x6aa6a3d6u,
    0x08de1d87u, 0xa7159738u, 0x454d10e9u, 0xe3848a9au, 0x81bc044bu, 0x1ff37dfcu, 0xbe2af7adu, 0x5c62715eu,
};

static const uint32_t bshim_063_tab3[96] = {
    0x277b5d70u, 0xc5b2d721u, 0x63ea50d2u, 0x0221ca83u, 0xa0594434u, 0x3e90bde5u, 0xdcc83796u, 0x7affb147u,
    0x19372af8u, 0xb76ea4a9u, 0x55a61e5au, 0xf3dd980bu, 0x921511bcu, 0x304c8b6du, 0xce84051eu, 0x6cbb7ecfu,
    0x0af2f880u, 0xa92a7231u, 0x4761ebe2u, 0xe5996593u, 0x83d0df44u, 0x220858f5u, 0xc03fd2a6u, 0x5e774c57u,
    0xfcaec608u, 0x9ae63fb9u, 0x391db96au, 0xd755331bu, 0x758cacccu, 0x13c4267du, 0xb1fba02eu, 0x503319dfu,
    0xee6a9390u, 0x8ca20d41u, 0x2ad986f2u, 0xc91100a3u, 0x67487a54u, 0x057ff405u, 0xa3b76db6u, 0x41eee767u,
    0xe0266118u, 0x7e5ddac9u, 0x1c95547au, 0xbaccce2bu, 0x590447dcu, 0xf73bc18du, 0x95733b3eu, 0x33aab4efu,
    0xd1e22ea0u, 0x7019a851u, 0x0e512202u, 0xac889bb3u, 0x4ac01564u, 0xe8f78f15u, 0x872f08c6u, 0x25668277u,
    0xc39dfc28u, 0x61d575d9u, 0x000cef8au, 0x9e44693bu, 0x3c7be2ecu, 0xdab35c9du, 0x78ead64eu, 0x17224fffu,
    0xb559c9b0u, 0x53914361u, 0xf1c8bd12u, 0x900036c3u, 0x2e37b074u, 0xcc6f2a25u, 0x6aa6a3d6u, 0x08de1d87u,
    0xa7159738u, 0x454d10e9u, 0xe3848a9au, 0x81bc044bu, 0x1ff37dfcu, 0xbe2af7adu, 0x5c62715eu, 0xfa99eb0fu,
    0x98d164c0u, 0x3708de71u, 0xd5405822u, 0x7377d1d3u, 0x11af4b84u, 0xafe6c535u, 0x4e1e3ee6u, 0xec55b897u,
    0x8a8d3248u, 0x28c4abf9u, 0xc6fc25aau, 0x65339f5bu, 0x036b190cu, 0xa1a292bdu, 0x3fda0c6eu, 0xde11861fu,
};

static const uint32_t bshim_063_tab4[96] = {
    0xa92a7231u, 0x4761ebe2u, 0xe5996593u, 0x83d0df44u, 0x220858f5u, 0xc03fd2a6u, 0x5e774c57u, 0xfcaec608u,
    0x9ae63fb9u, 0x391db96au, 0xd755331bu, 0x758cacccu, 0x13c4267du, 0xb1fba02eu, 0x503319dfu, 0xee6a9390u,
    0x8ca20d41u, 0x2ad986f2u, 0xc91100a3u, 0x67487a54u, 0x057ff405u, 0xa3b76db6u, 0x41eee767u, 0xe0266118u,
    0x7e5ddac9u, 0x1c95547au, 0xbaccce2bu, 0x590447dcu, 0xf73bc18du, 0x95733b3eu, 0x33aab4efu, 0xd1e22ea0u,
    0x7019a851u, 0x0e512202u, 0xac889bb3u, 0x4ac01564u, 0xe8f78f15u, 0x872f08c6u, 0x25668277u, 0xc39dfc28u,
    0x61d575d9u, 0x000cef8au, 0x9e44693bu, 0x3c7be2ecu, 0xdab35c9du, 0x78ead64eu, 0x17224fffu, 0xb559c9b0u,
    0x53914361u, 0xf1c8bd12u, 0x900036c3u, 0x2e37b074u, 0xcc6f2a25u, 0x6aa6a3d6u, 0x08de1d87u, 0xa7159738u,
    0x454d10e9u, 0xe3848a9au, 0x81bc044bu, 0x1ff37dfcu, 0xbe2af7adu, 0x5c62715eu, 0xfa99eb0fu, 0x98d164c0u,
    0x3708de71u, 0xd5405822u, 0x7377d1d3u, 0x11af4b84u, 0xafe6c535u, 0x4e1e3ee6u, 0xec55b897u, 0x8a8d3248u,
    0x28c4abf9u, 0xc6fc25aau, 0x65339f5bu, 0x036b190cu, 0xa1a292bdu, 0x3fda0c6eu, 0xde11861fu, 0x7c48ffd0u,
    0x1a807981u, 0xb8b7f332u, 0x56ef6ce3u, 0xf526e694u, 0x935e6045u, 0x3195d9f6u, 0xcfcd53a7u, 0x6e04cd58u,
    0x0c3c4709u, 0xaa73c0bau, 0x48ab3a6bu, 0xe6e2b41cu, 0x851a2dcdu, 0x2351a77eu, 0xc189212fu, 0x5fc09ae0u,
};

static const uint32_t bshim_063_tab5[96] = {
    0x2ad986f2u, 0xc91100a3u, 0x67487a54u, 0x057ff405u, 0xa3b76db6u, 0x41eee767u, 0xe0266118u, 0x7e5ddac9u,
    0x1c95547au, 0xbaccce2bu, 0x590447dcu, 0xf73bc18du, 0x95733b3eu, 0x33aab4efu, 0xd1e22ea0u, 0x7019a851u,
    0x0e512202u, 0xac889bb3u, 0x4ac01564u, 0xe8f78f15u, 0x872f08c6u, 0x25668277u, 0xc39dfc28u, 0x61d575d9u,
    0x000cef8au, 0x9e44693bu, 0x3c7be2ecu, 0xdab35c9du, 0x78ead64eu, 0x17224fffu, 0xb559c9b0u, 0x53914361u,
    0xf1c8bd12u, 0x900036c3u, 0x2e37b074u, 0xcc6f2a25u, 0x6aa6a3d6u, 0x08de1d87u, 0xa7159738u, 0x454d10e9u,
    0xe3848a9au, 0x81bc044bu, 0x1ff37dfcu, 0xbe2af7adu, 0x5c62715eu, 0xfa99eb0fu, 0x98d164c0u, 0x3708de71u,
    0xd5405822u, 0x7377d1d3u, 0x11af4b84u, 0xafe6c535u, 0x4e1e3ee6u, 0xec55b897u, 0x8a8d3248u, 0x28c4abf9u,
    0xc6fc25aau, 0x65339f5bu, 0x036b190cu, 0xa1a292bdu, 0x3fda0c6eu, 0xde11861fu, 0x7c48ffd0u, 0x1a807981u,
    0xb8b7f332u, 0x56ef6ce3u, 0xf526e694u, 0x935e6045u, 0x3195d9f6u, 0xcfcd53a7u, 0x6e04cd58u, 0x0c3c4709u,
    0xaa73c0bau, 0x48ab3a6bu, 0xe6e2b41cu, 0x851a2dcdu, 0x2351a77eu, 0xc189212fu, 0x5fc09ae0u, 0xfdf81491u,
    0x9c2f8e42u, 0x3a6707f3u, 0xd89e81a4u, 0x76d5fb55u, 0x150d7506u, 0xb344eeb7u, 0x517c6868u, 0xefb3e219u,
    0x8deb5bcau, 0x2c22d57bu, 0xca5a4f2cu, 0x6891c8ddu, 0x06c9428eu, 0xa500bc3fu, 0x433835f0u, 0xe16fafa1u,
};

static const uint32_t bshim_063_tab6[96] = {
    0xac889bb3u, 0x4ac01564u, 0xe8f78f15u, 0x872f08c6u, 0x25668277u, 0xc39dfc28u, 0x61d575d9u, 0x000cef8au,
    0x9e44693bu, 0x3c7be2ecu, 0xdab35c9du, 0x78ead64eu, 0x17224fffu, 0xb559c9b0u, 0x53914361u, 0xf1c8bd12u,
    0x900036c3u, 0x2e37b074u, 0xcc6f2a25u, 0x6aa6a3d6u, 0x08de1d87u, 0xa7159738u, 0x454d10e9u, 0xe3848a9au,
    0x81bc044bu, 0x1ff37dfcu, 0xbe2af7adu, 0x5c62715eu, 0xfa99eb0fu, 0x98d164c0u, 0x3708de71u, 0xd5405822u,
    0x7377d1d3u, 0x11af4b84u, 0xafe6c535u, 0x4e1e3ee6u, 0xec55b897u, 0x8a8d3248u, 0x28c4abf9u, 0xc6fc25aau,
    0x65339f5bu, 0x036b190cu, 0xa1a292bdu, 0x3fda0c6eu, 0xde11861fu, 0x7c48ffd0u, 0x1a807981u, 0xb8b7f332u,
    0x56ef6ce3u, 0xf526e694u, 0x935e6045u, 0x3195d9f6u, 0xcfcd53a7u, 0x6e04cd58u, 0x0c3c4709u, 0xaa73c0bau,
    0x48ab3a6bu, 0xe6e2b41cu, 0x851a2dcdu, 0x2351a77eu, 0xc189212fu, 0x5fc09ae0u, 0xfdf81491u, 0x9c2f8e42u,
    0x3a6707f3u, 0xd89e81a4u, 0x76d5fb55u, 0x150d7506u, 0xb344eeb7u, 0x517c6868u, 0xefb3e219u, 0x8deb5bcau,
    0x2c22d57bu, 0xca5a4f2cu, 0x6891c8ddu, 0x06c9428eu, 0xa500bc3fu, 0x433835f0u, 0xe16fafa1u, 0x7fa72952u,
    0x1ddea303u, 0xbc161cb4u, 0x5a4d9665u, 0xf8851016u, 0x96bc89c7u, 0x34f40378u, 0xd32b7d29u, 0x7162f6dau,
    0x0f9a708bu, 0xadd1ea3cu, 0x4c0963edu, 0xea40dd9eu, 0x8878574fu, 0x26afd100u, 0xc4e74ab1u, 0x631ec462u,
};

static const uint32_t bshim_063_tab7[96] = {
    0x2e37b074u, 0xcc6f2a25u, 0x6aa6a3d6u, 0x08de1d87u, 0xa7159738u, 0x454d10e9u, 0xe3848a9au, 0x81bc044bu,
    0x1ff37dfcu, 0xbe2af7adu, 0x5c62715eu, 0xfa99eb0fu, 0x98d164c0u, 0x3708de71u, 0xd5405822u, 0x7377d1d3u,
    0x11af4b84u, 0xafe6c535u, 0x4e1e3ee6u, 0xec55b897u, 0x8a8d3248u, 0x28c4abf9u, 0xc6fc25aau, 0x65339f5bu,
    0x036b190cu, 0xa1a292bdu, 0x3fda0c6eu, 0xde11861fu, 0x7c48ffd0u, 0x1a807981u, 0xb8b7f332u, 0x56ef6ce3u,
    0xf526e694u, 0x935e6045u, 0x3195d9f6u, 0xcfcd53a7u, 0x6e04cd58u, 0x0c3c4709u, 0xaa73c0bau, 0x48ab3a6bu,
    0xe6e2b41cu, 0x851a2dcdu, 0x2351a77eu, 0xc189212fu, 0x5fc09ae0u, 0xfdf81491u, 0x9c2f8e42u, 0x3a6707f3u,
    0xd89e81a4u, 0x76d5fb55u, 0x150d7506u, 0xb344eeb7u, 0x517c6868u, 0xefb3e219u, 0x8deb5bcau, 0x2c22d57bu,
    0xca5a4f2cu, 0x6891c8ddu, 0x06c9428eu, 0xa500bc3fu, 0x433835f0u, 0xe16fafa1u, 0x7fa72952u, 0x1ddea303u,
    0xbc161cb4u, 0x5a4d9665u, 0xf8851016u, 0x96bc89c7u, 0x34f40378u, 0xd32b7d29u, 0x7162f6dau, 0x0f9a708bu,
    0xadd1ea3cu, 0x4c0963edu, 0xea40dd9eu, 0x8878574fu, 0x26afd100u, 0xc4e74ab1u, 0x631ec462u, 0x01563e13u,
    0x9f8db7c4u, 0x3dc53175u, 0xdbfcab26u, 0x7a3424d7u, 0x186b9e88u, 0xb6a31839u, 0x54da91eau, 0xf3120b9bu,
    0x9149854cu, 0x2f80fefdu, 0xcdb878aeu, 0x6beff25fu, 0x0a276c10u, 0xa85ee5c1u, 0x46965f72u, 0xe4cdd923u,
};

struct bshim_063_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_063_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_063_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_063_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_063_reset(struct bshim_063_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00079cd1u;
    return 0;
}

