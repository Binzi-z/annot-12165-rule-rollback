/* bshim_110 -- board support shim generated from the 0110 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_110_tab0[96] = {
    0xdea7e52au, 0x7cdf5edbu, 0x1b16d88cu, 0xb94e523du, 0x5785cbeeu, 0xf5bd459fu, 0x93f4bf50u, 0x322c3901u,
    0xd063b2b2u, 0x6e9b2c63u, 0x0cd2a614u, 0xab0a1fc5u, 0x49419976u, 0xe7791327u, 0x85b08cd8u, 0x23e80689u,
    0xc21f803au, 0x6056f9ebu, 0xfe8e739cu, 0x9cc5ed4du, 0x3afd66feu, 0xd934e0afu, 0x776c5a60u, 0x15a3d411u,
    0xb3db4dc2u, 0x5212c773u, 0xf04a4124u, 0x8e81bad5u, 0x2cb93486u, 0xcaf0ae37u, 0x692827e8u, 0x075fa199u,
    0xa5971b4au, 0x43ce94fbu, 0xe2060eacu, 0x803d885du, 0x1e75020eu, 0xbcac7bbfu, 0x5ae3f570u, 0xf91b6f21u,
    0x9752e8d2u, 0x358a6283u, 0xd3c1dc34u, 0x71f955e5u, 0x1030cf96u, 0xae684947u, 0x4c9fc2f8u, 0xead73ca9u,
    0x890eb65au, 0x2746300bu, 0xc57da9bcu, 0x63b5236du, 0x01ec9d1eu, 0xa02416cfu, 0x3e5b9080u, 0xdc930a31u,
    0x7aca83e2u, 0x1901fd93u, 0xb7397744u, 0x5570f0f5u, 0xf3a86aa6u, 0x91dfe457u, 0x30175e08u, 0xce4ed7b9u,
    0x6c86516au, 0x0abdcb1bu, 0xa8f544ccu, 0x472cbe7du, 0xe564382eu, 0x839bb1dfu, 0x21d32b90u, 0xc00aa541u,
    0x5e421ef2u, 0xfc7998a3u, 0x9ab11254u, 0x38e88c05u, 0xd72005b6u, 0x75577f67u, 0x138ef918u, 0xb1c672c9u,
    0x4ffdec7au, 0xee35662bu, 0x8c6cdfdcu, 0x2aa4598du, 0xc8dbd33eu, 0x67134cefu, 0x054ac6a0u, 0xa3824051u,
    0x41b9ba02u, 0xdff133b3u, 0x7e28ad64u, 0x1c602715u, 0xba97a0c6u, 0x58cf1a77u, 0xf7069428u, 0x953e0dd9u,
};

static const uint32_t bshim_110_tab1[96] = {
    0x6056f9ebu, 0xfe8e739cu, 0x9cc5ed4du, 0x3afd66feu, 0xd934e0afu, 0x776c5a60u, 0x15a3d411u, 0xb3db4dc2u,
    0x5212c773u, 0xf04a4124u, 0x8e81bad5u, 0x2cb93486u, 0xcaf0ae37u, 0x692827e8u, 0x075fa199u, 0xa5971b4au,
    0x43ce94fbu, 0xe2060eacu, 0x803d885du, 0x1e75020eu, 0xbcac7bbfu, 0x5ae3f570u, 0xf91b6f21u, 0x9752e8d2u,
    0x358a6283u, 0xd3c1dc34u, 0x71f955e5u, 0x1030cf96u, 0xae684947u, 0x4c9fc2f8u, 0xead73ca9u, 0x890eb65au,
    0x2746300bu, 0xc57da9bcu, 0x63b5236du, 0x01ec9d1eu, 0xa02416cfu, 0x3e5b9080u, 0xdc930a31u, 0x7aca83e2u,
    0x1901fd93u, 0xb7397744u, 0x5570f0f5u, 0xf3a86aa6u, 0x91dfe457u, 0x30175e08u, 0xce4ed7b9u, 0x6c86516au,
    0x0abdcb1bu, 0xa8f544ccu, 0x472cbe7du, 0xe564382eu, 0x839bb1dfu, 0x21d32b90u, 0xc00aa541u, 0x5e421ef2u,
    0xfc7998a3u, 0x9ab11254u, 0x38e88c05u, 0xd72005b6u, 0x75577f67u, 0x138ef918u, 0xb1c672c9u, 0x4ffdec7au,
    0xee35662bu, 0x8c6cdfdcu, 0x2aa4598du, 0xc8dbd33eu, 0x67134cefu, 0x054ac6a0u, 0xa3824051u, 0x41b9ba02u,
    0xdff133b3u, 0x7e28ad64u, 0x1c602715u, 0xba97a0c6u, 0x58cf1a77u, 0xf7069428u, 0x953e0dd9u, 0x3375878au,
    0xd1ad013bu, 0x6fe47aecu, 0x0e1bf49du, 0xac536e4eu, 0x4a8ae7ffu, 0xe8c261b0u, 0x86f9db61u, 0x25315512u,
    0xc368cec3u, 0x61a04874u, 0xffd7c225u, 0x9e0f3bd6u, 0x3c46b587u, 0xda7e2f38u, 0x78b5a8e9u, 0x16ed229au,
};

static const uint32_t bshim_110_tab2[96] = {
    0xe2060eacu, 0x803d885du, 0x1e75020eu, 0xbcac7bbfu, 0x5ae3f570u, 0xf91b6f21u, 0x9752e8d2u, 0x358a6283u,
    0xd3c1dc34u, 0x71f955e5u, 0x1030cf96u, 0xae684947u, 0x4c9fc2f8u, 0xead73ca9u, 0x890eb65au, 0x2746300bu,
    0xc57da9bcu, 0x63b5236du, 0x01ec9d1eu, 0xa02416cfu, 0x3e5b9080u, 0xdc930a31u, 0x7aca83e2u, 0x1901fd93u,
    0xb7397744u, 0x5570f0f5u, 0xf3a86aa6u, 0x91dfe457u, 0x30175e08u, 0xce4ed7b9u, 0x6c86516au, 0x0abdcb1bu,
    0xa8f544ccu, 0x472cbe7du, 0xe564382eu, 0x839bb1dfu, 0x21d32b90u, 0xc00aa541u, 0x5e421ef2u, 0xfc7998a3u,
    0x9ab11254u, 0x38e88c05u, 0xd72005b6u, 0x75577f67u, 0x138ef918u, 0xb1c672c9u, 0x4ffdec7au, 0xee35662bu,
    0x8c6cdfdcu, 0x2aa4598du, 0xc8dbd33eu, 0x67134cefu, 0x054ac6a0u, 0xa3824051u, 0x41b9ba02u, 0xdff133b3u,
    0x7e28ad64u, 0x1c602715u, 0xba97a0c6u, 0x58cf1a77u, 0xf7069428u, 0x953e0dd9u, 0x3375878au, 0xd1ad013bu,
    0x6fe47aecu, 0x0e1bf49du, 0xac536e4eu, 0x4a8ae7ffu, 0xe8c261b0u, 0x86f9db61u, 0x25315512u, 0xc368cec3u,
    0x61a04874u, 0xffd7c225u, 0x9e0f3bd6u, 0x3c46b587u, 0xda7e2f38u, 0x78b5a8e9u, 0x16ed229au, 0xb5249c4bu,
    0x535c15fcu, 0xf1938fadu, 0x8fcb095eu, 0x2e02830fu, 0xcc39fcc0u, 0x6a717671u, 0x08a8f022u, 0xa6e069d3u,
    0x4517e384u, 0xe34f5d35u, 0x8186d6e6u, 0x1fbe5097u, 0xbdf5ca48u, 0x5c2d43f9u, 0xfa64bdaau, 0x989c375bu,
};

static const uint32_t bshim_110_tab3[96] = {
    0x63b5236du, 0x01ec9d1eu, 0xa02416cfu, 0x3e5b9080u, 0xdc930a31u, 0x7aca83e2u, 0x1901fd93u, 0xb7397744u,
    0x5570f0f5u, 0xf3a86aa6u, 0x91dfe457u, 0x30175e08u, 0xce4ed7b9u, 0x6c86516au, 0x0abdcb1bu, 0xa8f544ccu,
    0x472cbe7du, 0xe564382eu, 0x839bb1dfu, 0x21d32b90u, 0xc00aa541u, 0x5e421ef2u, 0xfc7998a3u, 0x9ab11254u,
    0x38e88c05u, 0xd72005b6u, 0x75577f67u, 0x138ef918u, 0xb1c672c9u, 0x4ffdec7au, 0xee35662bu, 0x8c6cdfdcu,
    0x2aa4598du, 0xc8dbd33eu, 0x67134cefu, 0x054ac6a0u, 0xa3824051u, 0x41b9ba02u, 0xdff133b3u, 0x7e28ad64u,
    0x1c602715u, 0xba97a0c6u, 0x58cf1a77u, 0xf7069428u, 0x953e0dd9u, 0x3375878au, 0xd1ad013bu, 0x6fe47aecu,
    0x0e1bf49du, 0xac536e4eu, 0x4a8ae7ffu, 0xe8c261b0u, 0x86f9db61u, 0x25315512u, 0xc368cec3u, 0x61a04874u,
    0xffd7c225u, 0x9e0f3bd6u, 0x3c46b587u, 0xda7e2f38u, 0x78b5a8e9u, 0x16ed229au, 0xb5249c4bu, 0x535c15fcu,
    0xf1938fadu, 0x8fcb095eu, 0x2e02830fu, 0xcc39fcc0u, 0x6a717671u, 0x08a8f022u, 0xa6e069d3u, 0x4517e384u,
    0xe34f5d35u, 0x8186d6e6u, 0x1fbe5097u, 0xbdf5ca48u, 0x5c2d43f9u, 0xfa64bdaau, 0x989c375bu, 0x36d3b10cu,
    0xd50b2abdu, 0x7342a46eu, 0x117a1e1fu, 0xafb197d0u, 0x4de91181u, 0xec208b32u, 0x8a5804e3u, 0x288f7e94u,
    0xc6c6f845u, 0x64fe71f6u, 0x0335eba7u, 0xa16d6558u, 0x3fa4df09u, 0xdddc58bau, 0x7c13d26bu, 0x1a4b4c1cu,
};

static const uint32_t bshim_110_tab4[96] = {
    0xe564382eu, 0x839bb1dfu, 0x21d32b90u, 0xc00aa541u, 0x5e421ef2u, 0xfc7998a3u, 0x9ab11254u, 0x38e88c05u,
    0xd72005b6u, 0x75577f67u, 0x138ef918u, 0xb1c672c9u, 0x4ffdec7au, 0xee35662bu, 0x8c6cdfdcu, 0x2aa4598du,
    0xc8dbd33eu, 0x67134cefu, 0x054ac6a0u, 0xa3824051u, 0x41b9ba02u, 0xdff133b3u, 0x7e28ad64u, 0x1c602715u,
    0xba97a0c6u, 0x58cf1a77u, 0xf7069428u, 0x953e0dd9u, 0x3375878au, 0xd1ad013bu, 0x6fe47aecu, 0x0e1bf49du,
    0xac536e4eu, 0x4a8ae7ffu, 0xe8c261b0u, 0x86f9db61u, 0x25315512u, 0xc368cec3u, 0x61a04874u, 0xffd7c225u,
    0x9e0f3bd6u, 0x3c46b587u, 0xda7e2f38u, 0x78b5a8e9u, 0x16ed229au, 0xb5249c4bu, 0x535c15fcu, 0xf1938fadu,
    0x8fcb095eu, 0x2e02830fu, 0xcc39fcc0u, 0x6a717671u, 0x08a8f022u, 0xa6e069d3u, 0x4517e384u, 0xe34f5d35u,
    0x8186d6e6u, 0x1fbe5097u, 0xbdf5ca48u, 0x5c2d43f9u, 0xfa64bdaau, 0x989c375bu, 0x36d3b10cu, 0xd50b2abdu,
    0x7342a46eu, 0x117a1e1fu, 0xafb197d0u, 0x4de91181u, 0xec208b32u, 0x8a5804e3u, 0x288f7e94u, 0xc6c6f845u,
    0x64fe71f6u, 0x0335eba7u, 0xa16d6558u, 0x3fa4df09u, 0xdddc58bau, 0x7c13d26bu, 0x1a4b4c1cu, 0xb882c5cdu,
    0x56ba3f7eu, 0xf4f1b92fu, 0x932932e0u, 0x3160ac91u, 0xcf982642u, 0x6dcf9ff3u, 0x0c0719a4u, 0xaa3e9355u,
    0x48760d06u, 0xe6ad86b7u, 0x84e50068u, 0x231c7a19u, 0xc153f3cau, 0x5f8b6d7bu, 0xfdc2e72cu, 0x9bfa60ddu,
};

static const uint32_t bshim_110_tab5[96] = {
    0x67134cefu, 0x054ac6a0u, 0xa3824051u, 0x41b9ba02u, 0xdff133b3u, 0x7e28ad64u, 0x1c602715u, 0xba97a0c6u,
    0x58cf1a77u, 0xf7069428u, 0x953e0dd9u, 0x3375878au, 0xd1ad013bu, 0x6fe47aecu, 0x0e1bf49du, 0xac536e4eu,
    0x4a8ae7ffu, 0xe8c261b0u, 0x86f9db61u, 0x25315512u, 0xc368cec3u, 0x61a04874u, 0xffd7c225u, 0x9e0f3bd6u,
    0x3c46b587u, 0xda7e2f38u, 0x78b5a8e9u, 0x16ed229au, 0xb5249c4bu, 0x535c15fcu, 0xf1938fadu, 0x8fcb095eu,
    0x2e02830fu, 0xcc39fcc0u, 0x6a717671u, 0x08a8f022u, 0xa6e069d3u, 0x4517e384u, 0xe34f5d35u, 0x8186d6e6u,
    0x1fbe5097u, 0xbdf5ca48u, 0x5c2d43f9u, 0xfa64bdaau, 0x989c375bu, 0x36d3b10cu, 0xd50b2abdu, 0x7342a46eu,
    0x117a1e1fu, 0xafb197d0u, 0x4de91181u, 0xec208b32u, 0x8a5804e3u, 0x288f7e94u, 0xc6c6f845u, 0x64fe71f6u,
    0x0335eba7u, 0xa16d6558u, 0x3fa4df09u, 0xdddc58bau, 0x7c13d26bu, 0x1a4b4c1cu, 0xb882c5cdu, 0x56ba3f7eu,
    0xf4f1b92fu, 0x932932e0u, 0x3160ac91u, 0xcf982642u, 0x6dcf9ff3u, 0x0c0719a4u, 0xaa3e9355u, 0x48760d06u,
    0xe6ad86b7u, 0x84e50068u, 0x231c7a19u, 0xc153f3cau, 0x5f8b6d7bu, 0xfdc2e72cu, 0x9bfa60ddu, 0x3a31da8eu,
    0xd869543fu, 0x76a0cdf0u, 0x14d847a1u, 0xb30fc152u, 0x51473b03u, 0xef7eb4b4u, 0x8db62e65u, 0x2beda816u,
    0xca2521c7u, 0x685c9b78u, 0x06941529u, 0xa4cb8edau, 0x4303088bu, 0xe13a823cu, 0x7f71fbedu, 0x1da9759eu,
};

static const uint32_t bshim_110_tab6[96] = {
    0xe8c261b0u, 0x86f9db61u, 0x25315512u, 0xc368cec3u, 0x61a04874u, 0xffd7c225u, 0x9e0f3bd6u, 0x3c46b587u,
    0xda7e2f38u, 0x78b5a8e9u, 0x16ed229au, 0xb5249c4bu, 0x535c15fcu, 0xf1938fadu, 0x8fcb095eu, 0x2e02830fu,
    0xcc39fcc0u, 0x6a717671u, 0x08a8f022u, 0xa6e069d3u, 0x4517e384u, 0xe34f5d35u, 0x8186d6e6u, 0x1fbe5097u,
    0xbdf5ca48u, 0x5c2d43f9u, 0xfa64bdaau, 0x989c375bu, 0x36d3b10cu, 0xd50b2abdu, 0x7342a46eu, 0x117a1e1fu,
    0xafb197d0u, 0x4de91181u, 0xec208b32u, 0x8a5804e3u, 0x288f7e94u, 0xc6c6f845u, 0x64fe71f6u, 0x0335eba7u,
    0xa16d6558u, 0x3fa4df09u, 0xdddc58bau, 0x7c13d26bu, 0x1a4b4c1cu, 0xb882c5cdu, 0x56ba3f7eu, 0xf4f1b92fu,
    0x932932e0u, 0x3160ac91u, 0xcf982642u, 0x6dcf9ff3u, 0x0c0719a4u, 0xaa3e9355u, 0x48760d06u, 0xe6ad86b7u,
    0x84e50068u, 0x231c7a19u, 0xc153f3cau, 0x5f8b6d7bu, 0xfdc2e72cu, 0x9bfa60ddu, 0x3a31da8eu, 0xd869543fu,
    0x76a0cdf0u, 0x14d847a1u, 0xb30fc152u, 0x51473b03u, 0xef7eb4b4u, 0x8db62e65u, 0x2beda816u, 0xca2521c7u,
    0x685c9b78u, 0x06941529u, 0xa4cb8edau, 0x4303088bu, 0xe13a823cu, 0x7f71fbedu, 0x1da9759eu, 0xbbe0ef4fu,
    0x5a186900u, 0xf84fe2b1u, 0x96875c62u, 0x34bed613u, 0xd2f64fc4u, 0x712dc975u, 0x0f654326u, 0xad9cbcd7u,
    0x4bd43688u, 0xea0bb039u, 0x884329eau, 0x267aa39bu, 0xc4b21d4cu, 0x62e996fdu, 0x012110aeu, 0x9f588a5fu,
};

static const uint32_t bshim_110_tab7[96] = {
    0x6a717671u, 0x08a8f022u, 0xa6e069d3u, 0x4517e384u, 0xe34f5d35u, 0x8186d6e6u, 0x1fbe5097u, 0xbdf5ca48u,
    0x5c2d43f9u, 0xfa64bdaau, 0x989c375bu, 0x36d3b10cu, 0xd50b2abdu, 0x7342a46eu, 0x117a1e1fu, 0xafb197d0u,
    0x4de91181u, 0xec208b32u, 0x8a5804e3u, 0x288f7e94u, 0xc6c6f845u, 0x64fe71f6u, 0x0335eba7u, 0xa16d6558u,
    0x3fa4df09u, 0xdddc58bau, 0x7c13d26bu, 0x1a4b4c1cu, 0xb882c5cdu, 0x56ba3f7eu, 0xf4f1b92fu, 0x932932e0u,
    0x3160ac91u, 0xcf982642u, 0x6dcf9ff3u, 0x0c0719a4u, 0xaa3e9355u, 0x48760d06u, 0xe6ad86b7u, 0x84e50068u,
    0x231c7a19u, 0xc153f3cau, 0x5f8b6d7bu, 0xfdc2e72cu, 0x9bfa60ddu, 0x3a31da8eu, 0xd869543fu, 0x76a0cdf0u,
    0x14d847a1u, 0xb30fc152u, 0x51473b03u, 0xef7eb4b4u, 0x8db62e65u, 0x2beda816u, 0xca2521c7u, 0x685c9b78u,
    0x06941529u, 0xa4cb8edau, 0x4303088bu, 0xe13a823cu, 0x7f71fbedu, 0x1da9759eu, 0xbbe0ef4fu, 0x5a186900u,
    0xf84fe2b1u, 0x96875c62u, 0x34bed613u, 0xd2f64fc4u, 0x712dc975u, 0x0f654326u, 0xad9cbcd7u, 0x4bd43688u,
    0xea0bb039u, 0x884329eau, 0x267aa39bu, 0xc4b21d4cu, 0x62e996fdu, 0x012110aeu, 0x9f588a5fu, 0x3d900410u,
    0xdbc77dc1u, 0x79fef772u, 0x18367123u, 0xb66dead4u, 0x54a56485u, 0xf2dcde36u, 0x911457e7u, 0x2f4bd198u,
    0xcd834b49u, 0x6bbac4fau, 0x09f23eabu, 0xa829b85cu, 0x4661320du, 0xe498abbeu, 0x82d0256fu, 0x21079f20u,
};

struct bshim_110_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_110_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_110_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_110_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_110_reset(struct bshim_110_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000d4ab2u;
    return 0;
}

