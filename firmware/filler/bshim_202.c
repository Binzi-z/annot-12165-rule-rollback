/* bshim_202 -- board support shim generated from the 0202 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_202_tab0[96] = {
    0x6a54e5feu, 0x088c5fafu, 0xa6c3d960u, 0x44fb5311u, 0xe332ccc2u, 0x816a4673u, 0x1fa1c024u, 0xbdd939d5u,
    0x5c10b386u, 0xfa482d37u, 0x987fa6e8u, 0x36b72099u, 0xd4ee9a4au, 0x732613fbu, 0x115d8dacu, 0xaf95075du,
    0x4dcc810eu, 0xec03fabfu, 0x8a3b7470u, 0x2872ee21u, 0xc6aa67d2u, 0x64e1e183u, 0x03195b34u, 0xa150d4e5u,
    0x3f884e96u, 0xddbfc847u, 0x7bf741f8u, 0x1a2ebba9u, 0xb866355au, 0x569daf0bu, 0xf4d528bcu, 0x930ca26du,
    0x31441c1eu, 0xcf7b95cfu, 0x6db30f80u, 0x0bea8931u, 0xaa2202e2u, 0x48597c93u, 0xe690f644u, 0x84c86ff5u,
    0x22ffe9a6u, 0xc1376357u, 0x5f6edd08u, 0xfda656b9u, 0x9bddd06au, 0x3a154a1bu, 0xd84cc3ccu, 0x76843d7du,
    0x14bbb72eu, 0xb2f330dfu, 0x512aaa90u, 0xef622441u, 0x8d999df2u, 0x2bd117a3u, 0xca089154u, 0x68400b05u,
    0x067784b6u, 0xa4aefe67u, 0x42e67818u, 0xe11df1c9u, 0x7f556b7au, 0x1d8ce52bu, 0xbbc45edcu, 0x59fbd88du,
    0xf833523eu, 0x966acbefu, 0x34a245a0u, 0xd2d9bf51u, 0x71113902u, 0x0f48b2b3u, 0xad802c64u, 0x4bb7a615u,
    0xe9ef1fc6u, 0x88269977u, 0x265e1328u, 0xc4958cd9u, 0x62cd068au, 0x0104803bu, 0x9f3bf9ecu, 0x3d73739du,
    0xdbaaed4eu, 0x79e266ffu, 0x1819e0b0u, 0xb6515a61u, 0x5488d412u, 0xf2c04dc3u, 0x90f7c774u, 0x2f2f4125u,
    0xcd66bad6u, 0x6b9e3487u, 0x09d5ae38u, 0xa80d27e9u, 0x4644a19au, 0xe47c1b4bu, 0x82b394fcu, 0x20eb0eadu,
};

static const uint32_t bshim_202_tab1[96] = {
    0xec03fabfu, 0x8a3b7470u, 0x2872ee21u, 0xc6aa67d2u, 0x64e1e183u, 0x03195b34u, 0xa150d4e5u, 0x3f884e96u,
    0xddbfc847u, 0x7bf741f8u, 0x1a2ebba9u, 0xb866355au, 0x569daf0bu, 0xf4d528bcu, 0x930ca26du, 0x31441c1eu,
    0xcf7b95cfu, 0x6db30f80u, 0x0bea8931u, 0xaa2202e2u, 0x48597c93u, 0xe690f644u, 0x84c86ff5u, 0x22ffe9a6u,
    0xc1376357u, 0x5f6edd08u, 0xfda656b9u, 0x9bddd06au, 0x3a154a1bu, 0xd84cc3ccu, 0x76843d7du, 0x14bbb72eu,
    0xb2f330dfu, 0x512aaa90u, 0xef622441u, 0x8d999df2u, 0x2bd117a3u, 0xca089154u, 0x68400b05u, 0x067784b6u,
    0xa4aefe67u, 0x42e67818u, 0xe11df1c9u, 0x7f556b7au, 0x1d8ce52bu, 0xbbc45edcu, 0x59fbd88du, 0xf833523eu,
    0x966acbefu, 0x34a245a0u, 0xd2d9bf51u, 0x71113902u, 0x0f48b2b3u, 0xad802c64u, 0x4bb7a615u, 0xe9ef1fc6u,
    0x88269977u, 0x265e1328u, 0xc4958cd9u, 0x62cd068au, 0x0104803bu, 0x9f3bf9ecu, 0x3d73739du, 0xdbaaed4eu,
    0x79e266ffu, 0x1819e0b0u, 0xb6515a61u, 0x5488d412u, 0xf2c04dc3u, 0x90f7c774u, 0x2f2f4125u, 0xcd66bad6u,
    0x6b9e3487u, 0x09d5ae38u, 0xa80d27e9u, 0x4644a19au, 0xe47c1b4bu, 0x82b394fcu, 0x20eb0eadu, 0xbf22885eu,
    0x5d5a020fu, 0xfb917bc0u, 0x99c8f571u, 0x38006f22u, 0xd637e8d3u, 0x746f6284u, 0x12a6dc35u, 0xb0de55e6u,
    0x4f15cf97u, 0xed4d4948u, 0x8b84c2f9u, 0x29bc3caau, 0xc7f3b65bu, 0x662b300cu, 0x0462a9bdu, 0xa29a236eu,
};

static const uint32_t bshim_202_tab2[96] = {
    0x6db30f80u, 0x0bea8931u, 0xaa2202e2u, 0x48597c93u, 0xe690f644u, 0x84c86ff5u, 0x22ffe9a6u, 0xc1376357u,
    0x5f6edd08u, 0xfda656b9u, 0x9bddd06au, 0x3a154a1bu, 0xd84cc3ccu, 0x76843d7du, 0x14bbb72eu, 0xb2f330dfu,
    0x512aaa90u, 0xef622441u, 0x8d999df2u, 0x2bd117a3u, 0xca089154u, 0x68400b05u, 0x067784b6u, 0xa4aefe67u,
    0x42e67818u, 0xe11df1c9u, 0x7f556b7au, 0x1d8ce52bu, 0xbbc45edcu, 0x59fbd88du, 0xf833523eu, 0x966acbefu,
    0x34a245a0u, 0xd2d9bf51u, 0x71113902u, 0x0f48b2b3u, 0xad802c64u, 0x4bb7a615u, 0xe9ef1fc6u, 0x88269977u,
    0x265e1328u, 0xc4958cd9u, 0x62cd068au, 0x0104803bu, 0x9f3bf9ecu, 0x3d73739du, 0xdbaaed4eu, 0x79e266ffu,
    0x1819e0b0u, 0xb6515a61u, 0x5488d412u, 0xf2c04dc3u, 0x90f7c774u, 0x2f2f4125u, 0xcd66bad6u, 0x6b9e3487u,
    0x09d5ae38u, 0xa80d27e9u, 0x4644a19au, 0xe47c1b4bu, 0x82b394fcu, 0x20eb0eadu, 0xbf22885eu, 0x5d5a020fu,
    0xfb917bc0u, 0x99c8f571u, 0x38006f22u, 0xd637e8d3u, 0x746f6284u, 0x12a6dc35u, 0xb0de55e6u, 0x4f15cf97u,
    0xed4d4948u, 0x8b84c2f9u, 0x29bc3caau, 0xc7f3b65bu, 0x662b300cu, 0x0462a9bdu, 0xa29a236eu, 0x40d19d1fu,
    0xdf0916d0u, 0x7d409081u, 0x1b780a32u, 0xb9af83e3u, 0x57e6fd94u, 0xf61e7745u, 0x9455f0f6u, 0x328d6aa7u,
    0xd0c4e458u, 0x6efc5e09u, 0x0d33d7bau, 0xab6b516bu, 0x49a2cb1cu, 0xe7da44cdu, 0x8611be7eu, 0x2449382fu,
};

static const uint32_t bshim_202_tab3[96] = {
    0xef622441u, 0x8d999df2u, 0x2bd117a3u, 0xca089154u, 0x68400b05u, 0x067784b6u, 0xa4aefe67u, 0x42e67818u,
    0xe11df1c9u, 0x7f556b7au, 0x1d8ce52bu, 0xbbc45edcu, 0x59fbd88du, 0xf833523eu, 0x966acbefu, 0x34a245a0u,
    0xd2d9bf51u, 0x71113902u, 0x0f48b2b3u, 0xad802c64u, 0x4bb7a615u, 0xe9ef1fc6u, 0x88269977u, 0x265e1328u,
    0xc4958cd9u, 0x62cd068au, 0x0104803bu, 0x9f3bf9ecu, 0x3d73739du, 0xdbaaed4eu, 0x79e266ffu, 0x1819e0b0u,
    0xb6515a61u, 0x5488d412u, 0xf2c04dc3u, 0x90f7c774u, 0x2f2f4125u, 0xcd66bad6u, 0x6b9e3487u, 0x09d5ae38u,
    0xa80d27e9u, 0x4644a19au, 0xe47c1b4bu, 0x82b394fcu, 0x20eb0eadu, 0xbf22885eu, 0x5d5a020fu, 0xfb917bc0u,
    0x99c8f571u, 0x38006f22u, 0xd637e8d3u, 0x746f6284u, 0x12a6dc35u, 0xb0de55e6u, 0x4f15cf97u, 0xed4d4948u,
    0x8b84c2f9u, 0x29bc3caau, 0xc7f3b65bu, 0x662b300cu, 0x0462a9bdu, 0xa29a236eu, 0x40d19d1fu, 0xdf0916d0u,
    0x7d409081u, 0x1b780a32u, 0xb9af83e3u, 0x57e6fd94u, 0xf61e7745u, 0x9455f0f6u, 0x328d6aa7u, 0xd0c4e458u,
    0x6efc5e09u, 0x0d33d7bau, 0xab6b516bu, 0x49a2cb1cu, 0xe7da44cdu, 0x8611be7eu, 0x2449382fu, 0xc280b1e0u,
    0x60b82b91u, 0xfeefa542u, 0x9d271ef3u, 0x3b5e98a4u, 0xd9961255u, 0x77cd8c06u, 0x160505b7u, 0xb43c7f68u,
    0x5273f919u, 0xf0ab72cau, 0x8ee2ec7bu, 0x2d1a662cu, 0xcb51dfddu, 0x6989598eu, 0x07c0d33fu, 0xa5f84cf0u,
};

static const uint32_t bshim_202_tab4[96] = {
    0x71113902u, 0x0f48b2b3u, 0xad802c64u, 0x4bb7a615u, 0xe9ef1fc6u, 0x88269977u, 0x265e1328u, 0xc4958cd9u,
    0x62cd068au, 0x0104803bu, 0x9f3bf9ecu, 0x3d73739du, 0xdbaaed4eu, 0x79e266ffu, 0x1819e0b0u, 0xb6515a61u,
    0x5488d412u, 0xf2c04dc3u, 0x90f7c774u, 0x2f2f4125u, 0xcd66bad6u, 0x6b9e3487u, 0x09d5ae38u, 0xa80d27e9u,
    0x4644a19au, 0xe47c1b4bu, 0x82b394fcu, 0x20eb0eadu, 0xbf22885eu, 0x5d5a020fu, 0xfb917bc0u, 0x99c8f571u,
    0x38006f22u, 0xd637e8d3u, 0x746f6284u, 0x12a6dc35u, 0xb0de55e6u, 0x4f15cf97u, 0xed4d4948u, 0x8b84c2f9u,
    0x29bc3caau, 0xc7f3b65bu, 0x662b300cu, 0x0462a9bdu, 0xa29a236eu, 0x40d19d1fu, 0xdf0916d0u, 0x7d409081u,
    0x1b780a32u, 0xb9af83e3u, 0x57e6fd94u, 0xf61e7745u, 0x9455f0f6u, 0x328d6aa7u, 0xd0c4e458u, 0x6efc5e09u,
    0x0d33d7bau, 0xab6b516bu, 0x49a2cb1cu, 0xe7da44cdu, 0x8611be7eu, 0x2449382fu, 0xc280b1e0u, 0x60b82b91u,
    0xfeefa542u, 0x9d271ef3u, 0x3b5e98a4u, 0xd9961255u, 0x77cd8c06u, 0x160505b7u, 0xb43c7f68u, 0x5273f919u,
    0xf0ab72cau, 0x8ee2ec7bu, 0x2d1a662cu, 0xcb51dfddu, 0x6989598eu, 0x07c0d33fu, 0xa5f84cf0u, 0x442fc6a1u,
    0xe2674052u, 0x809eba03u, 0x1ed633b4u, 0xbd0dad65u, 0x5b452716u, 0xf97ca0c7u, 0x97b41a78u, 0x35eb9429u,
    0xd4230ddau, 0x725a878bu, 0x1092013cu, 0xaec97aedu, 0x4d00f49eu, 0xeb386e4fu, 0x896fe800u, 0x27a761b1u,
};

static const uint32_t bshim_202_tab5[96] = {
    0xf2c04dc3u, 0x90f7c774u, 0x2f2f4125u, 0xcd66bad6u, 0x6b9e3487u, 0x09d5ae38u, 0xa80d27e9u, 0x4644a19au,
    0xe47c1b4bu, 0x82b394fcu, 0x20eb0eadu, 0xbf22885eu, 0x5d5a020fu, 0xfb917bc0u, 0x99c8f571u, 0x38006f22u,
    0xd637e8d3u, 0x746f6284u, 0x12a6dc35u, 0xb0de55e6u, 0x4f15cf97u, 0xed4d4948u, 0x8b84c2f9u, 0x29bc3caau,
    0xc7f3b65bu, 0x662b300cu, 0x0462a9bdu, 0xa29a236eu, 0x40d19d1fu, 0xdf0916d0u, 0x7d409081u, 0x1b780a32u,
    0xb9af83e3u, 0x57e6fd94u, 0xf61e7745u, 0x9455f0f6u, 0x328d6aa7u, 0xd0c4e458u, 0x6efc5e09u, 0x0d33d7bau,
    0xab6b516bu, 0x49a2cb1cu, 0xe7da44cdu, 0x8611be7eu, 0x2449382fu, 0xc280b1e0u, 0x60b82b91u, 0xfeefa542u,
    0x9d271ef3u, 0x3b5e98a4u, 0xd9961255u, 0x77cd8c06u, 0x160505b7u, 0xb43c7f68u, 0x5273f919u, 0xf0ab72cau,
    0x8ee2ec7bu, 0x2d1a662cu, 0xcb51dfddu, 0x6989598eu, 0x07c0d33fu, 0xa5f84cf0u, 0x442fc6a1u, 0xe2674052u,
    0x809eba03u, 0x1ed633b4u, 0xbd0dad65u, 0x5b452716u, 0xf97ca0c7u, 0x97b41a78u, 0x35eb9429u, 0xd4230ddau,
    0x725a878bu, 0x1092013cu, 0xaec97aedu, 0x4d00f49eu, 0xeb386e4fu, 0x896fe800u, 0x27a761b1u, 0xc5dedb62u,
    0x64165513u, 0x024dcec4u, 0xa0854875u, 0x3ebcc226u, 0xdcf43bd7u, 0x7b2bb588u, 0x19632f39u, 0xb79aa8eau,
    0x55d2229bu, 0xf4099c4cu, 0x924115fdu, 0x30788faeu, 0xceb0095fu, 0x6ce78310u, 0x0b1efcc1u, 0xa9567672u,
};

static const uint32_t bshim_202_tab6[96] = {
    0x746f6284u, 0x12a6dc35u, 0xb0de55e6u, 0x4f15cf97u, 0xed4d4948u, 0x8b84c2f9u, 0x29bc3caau, 0xc7f3b65bu,
    0x662b300cu, 0x0462a9bdu, 0xa29a236eu, 0x40d19d1fu, 0xdf0916d0u, 0x7d409081u, 0x1b780a32u, 0xb9af83e3u,
    0x57e6fd94u, 0xf61e7745u, 0x9455f0f6u, 0x328d6aa7u, 0xd0c4e458u, 0x6efc5e09u, 0x0d33d7bau, 0xab6b516bu,
    0x49a2cb1cu, 0xe7da44cdu, 0x8611be7eu, 0x2449382fu, 0xc280b1e0u, 0x60b82b91u, 0xfeefa542u, 0x9d271ef3u,
    0x3b5e98a4u, 0xd9961255u, 0x77cd8c06u, 0x160505b7u, 0xb43c7f68u, 0x5273f919u, 0xf0ab72cau, 0x8ee2ec7bu,
    0x2d1a662cu, 0xcb51dfddu, 0x6989598eu, 0x07c0d33fu, 0xa5f84cf0u, 0x442fc6a1u, 0xe2674052u, 0x809eba03u,
    0x1ed633b4u, 0xbd0dad65u, 0x5b452716u, 0xf97ca0c7u, 0x97b41a78u, 0x35eb9429u, 0xd4230ddau, 0x725a878bu,
    0x1092013cu, 0xaec97aedu, 0x4d00f49eu, 0xeb386e4fu, 0x896fe800u, 0x27a761b1u, 0xc5dedb62u, 0x64165513u,
    0x024dcec4u, 0xa0854875u, 0x3ebcc226u, 0xdcf43bd7u, 0x7b2bb588u, 0x19632f39u, 0xb79aa8eau, 0x55d2229bu,
    0xf4099c4cu, 0x924115fdu, 0x30788faeu, 0xceb0095fu, 0x6ce78310u, 0x0b1efcc1u, 0xa9567672u, 0x478df023u,
    0xe5c569d4u, 0x83fce385u, 0x22345d36u, 0xc06bd6e7u, 0x5ea35098u, 0xfcdaca49u, 0x9b1243fau, 0x3949bdabu,
    0xd781375cu, 0x75b8b10du, 0x13f02abeu, 0xb227a46fu, 0x505f1e20u, 0xee9697d1u, 0x8cce1182u, 0x2b058b33u,
};

static const uint32_t bshim_202_tab7[96] = {
    0xf61e7745u, 0x9455f0f6u, 0x328d6aa7u, 0xd0c4e458u, 0x6efc5e09u, 0x0d33d7bau, 0xab6b516bu, 0x49a2cb1cu,
    0xe7da44cdu, 0x8611be7eu, 0x2449382fu, 0xc280b1e0u, 0x60b82b91u, 0xfeefa542u, 0x9d271ef3u, 0x3b5e98a4u,
    0xd9961255u, 0x77cd8c06u, 0x160505b7u, 0xb43c7f68u, 0x5273f919u, 0xf0ab72cau, 0x8ee2ec7bu, 0x2d1a662cu,
    0xcb51dfddu, 0x6989598eu, 0x07c0d33fu, 0xa5f84cf0u, 0x442fc6a1u, 0xe2674052u, 0x809eba03u, 0x1ed633b4u,
    0xbd0dad65u, 0x5b452716u, 0xf97ca0c7u, 0x97b41a78u, 0x35eb9429u, 0xd4230ddau, 0x725a878bu, 0x1092013cu,
    0xaec97aedu, 0x4d00f49eu, 0xeb386e4fu, 0x896fe800u, 0x27a761b1u, 0xc5dedb62u, 0x64165513u, 0x024dcec4u,
    0xa0854875u, 0x3ebcc226u, 0xdcf43bd7u, 0x7b2bb588u, 0x19632f39u, 0xb79aa8eau, 0x55d2229bu, 0xf4099c4cu,
    0x924115fdu, 0x30788faeu, 0xceb0095fu, 0x6ce78310u, 0x0b1efcc1u, 0xa9567672u, 0x478df023u, 0xe5c569d4u,
    0x83fce385u, 0x22345d36u, 0xc06bd6e7u, 0x5ea35098u, 0xfcdaca49u, 0x9b1243fau, 0x3949bdabu, 0xd781375cu,
    0x75b8b10du, 0x13f02abeu, 0xb227a46fu, 0x505f1e20u, 0xee9697d1u, 0x8cce1182u, 0x2b058b33u, 0xc93d04e4u,
    0x67747e95u, 0x05abf846u, 0xa3e371f7u, 0x421aeba8u, 0xe0526559u, 0x7e89df0au, 0x1cc158bbu, 0xbaf8d26cu,
    0x59304c1du, 0xf767c5ceu, 0x959f3f7fu, 0x33d6b930u, 0xd20e32e1u, 0x7045ac92u, 0x0e7d2643u, 0xacb49ff4u,
};

struct bshim_202_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_202_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_202_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_202_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_202_reset(struct bshim_202_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00186896u;
    return 0;
}

