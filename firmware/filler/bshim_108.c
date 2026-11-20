/* bshim_108 -- board support shim generated from the 0108 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_108_tab0[96] = {
    0xf1e15a04u, 0x9018d3b5u, 0x2e504d66u, 0xcc87c717u, 0x6abf40c8u, 0x08f6ba79u, 0xa72e342au, 0x4565addbu,
    0xe39d278cu, 0x81d4a13du, 0x200c1aeeu, 0xbe43949fu, 0x5c7b0e50u, 0xfab28801u, 0x98ea01b2u, 0x37217b63u,
    0xd558f514u, 0x73906ec5u, 0x11c7e876u, 0xafff6227u, 0x4e36dbd8u, 0xec6e5589u, 0x8aa5cf3au, 0x28dd48ebu,
    0xc714c29cu, 0x654c3c4du, 0x0383b5feu, 0xa1bb2fafu, 0x3ff2a960u, 0xde2a2311u, 0x7c619cc2u, 0x1a991673u,
    0xb8d09024u, 0x570809d5u, 0xf53f8386u, 0x9376fd37u, 0x31ae76e8u, 0xcfe5f099u, 0x6e1d6a4au, 0x0c54e3fbu,
    0xaa8c5dacu, 0x48c3d75du, 0xe6fb510eu, 0x8532cabfu, 0x236a4470u, 0xc1a1be21u, 0x5fd937d2u, 0xfe10b183u,
    0x9c482b34u, 0x3a7fa4e5u, 0xd8b71e96u, 0x76ee9847u, 0x152611f8u, 0xb35d8ba9u, 0x5195055au, 0xefcc7f0bu,
    0x8e03f8bcu, 0x2c3b726du, 0xca72ec1eu, 0x68aa65cfu, 0x06e1df80u, 0xa5195931u, 0x4350d2e2u, 0xe1884c93u,
    0x7fbfc644u, 0x1df73ff5u, 0xbc2eb9a6u, 0x5a663357u, 0xf89dad08u, 0x96d526b9u, 0x350ca06au, 0xd3441a1bu,
    0x717b93ccu, 0x0fb30d7du, 0xadea872eu, 0x4c2200dfu, 0xea597a90u, 0x8890f441u, 0x26c86df2u, 0xc4ffe7a3u,
    0x63376154u, 0x016edb05u, 0x9fa654b6u, 0x3dddce67u, 0xdc154818u, 0x7a4cc1c9u, 0x18843b7au, 0xb6bbb52bu,
    0x54f32edcu, 0xf32aa88du, 0x9162223eu, 0x2f999befu, 0xcdd115a0u, 0x6c088f51u, 0x0a400902u, 0xa87782b3u,
};

static const uint32_t bshim_108_tab1[96] = {
    0x73906ec5u, 0x11c7e876u, 0xafff6227u, 0x4e36dbd8u, 0xec6e5589u, 0x8aa5cf3au, 0x28dd48ebu, 0xc714c29cu,
    0x654c3c4du, 0x0383b5feu, 0xa1bb2fafu, 0x3ff2a960u, 0xde2a2311u, 0x7c619cc2u, 0x1a991673u, 0xb8d09024u,
    0x570809d5u, 0xf53f8386u, 0x9376fd37u, 0x31ae76e8u, 0xcfe5f099u, 0x6e1d6a4au, 0x0c54e3fbu, 0xaa8c5dacu,
    0x48c3d75du, 0xe6fb510eu, 0x8532cabfu, 0x236a4470u, 0xc1a1be21u, 0x5fd937d2u, 0xfe10b183u, 0x9c482b34u,
    0x3a7fa4e5u, 0xd8b71e96u, 0x76ee9847u, 0x152611f8u, 0xb35d8ba9u, 0x5195055au, 0xefcc7f0bu, 0x8e03f8bcu,
    0x2c3b726du, 0xca72ec1eu, 0x68aa65cfu, 0x06e1df80u, 0xa5195931u, 0x4350d2e2u, 0xe1884c93u, 0x7fbfc644u,
    0x1df73ff5u, 0xbc2eb9a6u, 0x5a663357u, 0xf89dad08u, 0x96d526b9u, 0x350ca06au, 0xd3441a1bu, 0x717b93ccu,
    0x0fb30d7du, 0xadea872eu, 0x4c2200dfu, 0xea597a90u, 0x8890f441u, 0x26c86df2u, 0xc4ffe7a3u, 0x63376154u,
    0x016edb05u, 0x9fa654b6u, 0x3dddce67u, 0xdc154818u, 0x7a4cc1c9u, 0x18843b7au, 0xb6bbb52bu, 0x54f32edcu,
    0xf32aa88du, 0x9162223eu, 0x2f999befu, 0xcdd115a0u, 0x6c088f51u, 0x0a400902u, 0xa87782b3u, 0x46aefc64u,
    0xe4e67615u, 0x831defc6u, 0x21556977u, 0xbf8ce328u, 0x5dc45cd9u, 0xfbfbd68au, 0x9a33503bu, 0x386ac9ecu,
    0xd6a2439du, 0x74d9bd4eu, 0x131136ffu, 0xb148b0b0u, 0x4f802a61u, 0xedb7a412u, 0x8bef1dc3u, 0x2a269774u,
};

static const uint32_t bshim_108_tab2[96] = {
    0xf53f8386u, 0x9376fd37u, 0x31ae76e8u, 0xcfe5f099u, 0x6e1d6a4au, 0x0c54e3fbu, 0xaa8c5dacu, 0x48c3d75du,
    0xe6fb510eu, 0x8532cabfu, 0x236a4470u, 0xc1a1be21u, 0x5fd937d2u, 0xfe10b183u, 0x9c482b34u, 0x3a7fa4e5u,
    0xd8b71e96u, 0x76ee9847u, 0x152611f8u, 0xb35d8ba9u, 0x5195055au, 0xefcc7f0bu, 0x8e03f8bcu, 0x2c3b726du,
    0xca72ec1eu, 0x68aa65cfu, 0x06e1df80u, 0xa5195931u, 0x4350d2e2u, 0xe1884c93u, 0x7fbfc644u, 0x1df73ff5u,
    0xbc2eb9a6u, 0x5a663357u, 0xf89dad08u, 0x96d526b9u, 0x350ca06au, 0xd3441a1bu, 0x717b93ccu, 0x0fb30d7du,
    0xadea872eu, 0x4c2200dfu, 0xea597a90u, 0x8890f441u, 0x26c86df2u, 0xc4ffe7a3u, 0x63376154u, 0x016edb05u,
    0x9fa654b6u, 0x3dddce67u, 0xdc154818u, 0x7a4cc1c9u, 0x18843b7au, 0xb6bbb52bu, 0x54f32edcu, 0xf32aa88du,
    0x9162223eu, 0x2f999befu, 0xcdd115a0u, 0x6c088f51u, 0x0a400902u, 0xa87782b3u, 0x46aefc64u, 0xe4e67615u,
    0x831defc6u, 0x21556977u, 0xbf8ce328u, 0x5dc45cd9u, 0xfbfbd68au, 0x9a33503bu, 0x386ac9ecu, 0xd6a2439du,
    0x74d9bd4eu, 0x131136ffu, 0xb148b0b0u, 0x4f802a61u, 0xedb7a412u, 0x8bef1dc3u, 0x2a269774u, 0xc85e1125u,
    0x66958ad6u, 0x04cd0487u, 0xa3047e38u, 0x413bf7e9u, 0xdf73719au, 0x7daaeb4bu, 0x1be264fcu, 0xba19deadu,
    0x5851585eu, 0xf688d20fu, 0x94c04bc0u, 0x32f7c571u, 0xd12f3f22u, 0x6f66b8d3u, 0x0d9e3284u, 0xabd5ac35u,
};

static const uint32_t bshim_108_tab3[96] = {
    0x76ee9847u, 0x152611f8u, 0xb35d8ba9u, 0x5195055au, 0xefcc7f0bu, 0x8e03f8bcu, 0x2c3b726du, 0xca72ec1eu,
    0x68aa65cfu, 0x06e1df80u, 0xa5195931u, 0x4350d2e2u, 0xe1884c93u, 0x7fbfc644u, 0x1df73ff5u, 0xbc2eb9a6u,
    0x5a663357u, 0xf89dad08u, 0x96d526b9u, 0x350ca06au, 0xd3441a1bu, 0x717b93ccu, 0x0fb30d7du, 0xadea872eu,
    0x4c2200dfu, 0xea597a90u, 0x8890f441u, 0x26c86df2u, 0xc4ffe7a3u, 0x63376154u, 0x016edb05u, 0x9fa654b6u,
    0x3dddce67u, 0xdc154818u, 0x7a4cc1c9u, 0x18843b7au, 0xb6bbb52bu, 0x54f32edcu, 0xf32aa88du, 0x9162223eu,
    0x2f999befu, 0xcdd115a0u, 0x6c088f51u, 0x0a400902u, 0xa87782b3u, 0x46aefc64u, 0xe4e67615u, 0x831defc6u,
    0x21556977u, 0xbf8ce328u, 0x5dc45cd9u, 0xfbfbd68au, 0x9a33503bu, 0x386ac9ecu, 0xd6a2439du, 0x74d9bd4eu,
    0x131136ffu, 0xb148b0b0u, 0x4f802a61u, 0xedb7a412u, 0x8bef1dc3u, 0x2a269774u, 0xc85e1125u, 0x66958ad6u,
    0x04cd0487u, 0xa3047e38u, 0x413bf7e9u, 0xdf73719au, 0x7daaeb4bu, 0x1be264fcu, 0xba19deadu, 0x5851585eu,
    0xf688d20fu, 0x94c04bc0u, 0x32f7c571u, 0xd12f3f22u, 0x6f66b8d3u, 0x0d9e3284u, 0xabd5ac35u, 0x4a0d25e6u,
    0xe8449f97u, 0x867c1948u, 0x24b392f9u, 0xc2eb0caau, 0x6122865bu, 0xff5a000cu, 0x9d9179bdu, 0x3bc8f36eu,
    0xda006d1fu, 0x7837e6d0u, 0x166f6081u, 0xb4a6da32u, 0x52de53e3u, 0xf115cd94u, 0x8f4d4745u, 0x2d84c0f6u,
};

static const uint32_t bshim_108_tab4[96] = {
    0xf89dad08u, 0x96d526b9u, 0x350ca06au, 0xd3441a1bu, 0x717b93ccu, 0x0fb30d7du, 0xadea872eu, 0x4c2200dfu,
    0xea597a90u, 0x8890f441u, 0x26c86df2u, 0xc4ffe7a3u, 0x63376154u, 0x016edb05u, 0x9fa654b6u, 0x3dddce67u,
    0xdc154818u, 0x7a4cc1c9u, 0x18843b7au, 0xb6bbb52bu, 0x54f32edcu, 0xf32aa88du, 0x9162223eu, 0x2f999befu,
    0xcdd115a0u, 0x6c088f51u, 0x0a400902u, 0xa87782b3u, 0x46aefc64u, 0xe4e67615u, 0x831defc6u, 0x21556977u,
    0xbf8ce328u, 0x5dc45cd9u, 0xfbfbd68au, 0x9a33503bu, 0x386ac9ecu, 0xd6a2439du, 0x74d9bd4eu, 0x131136ffu,
    0xb148b0b0u, 0x4f802a61u, 0xedb7a412u, 0x8bef1dc3u, 0x2a269774u, 0xc85e1125u, 0x66958ad6u, 0x04cd0487u,
    0xa3047e38u, 0x413bf7e9u, 0xdf73719au, 0x7daaeb4bu, 0x1be264fcu, 0xba19deadu, 0x5851585eu, 0xf688d20fu,
    0x94c04bc0u, 0x32f7c571u, 0xd12f3f22u, 0x6f66b8d3u, 0x0d9e3284u, 0xabd5ac35u, 0x4a0d25e6u, 0xe8449f97u,
    0x867c1948u, 0x24b392f9u, 0xc2eb0caau, 0x6122865bu, 0xff5a000cu, 0x9d9179bdu, 0x3bc8f36eu, 0xda006d1fu,
    0x7837e6d0u, 0x166f6081u, 0xb4a6da32u, 0x52de53e3u, 0xf115cd94u, 0x8f4d4745u, 0x2d84c0f6u, 0xcbbc3aa7u,
    0x69f3b458u, 0x082b2e09u, 0xa662a7bau, 0x449a216bu, 0xe2d19b1cu, 0x810914cdu, 0x1f408e7eu, 0xbd78082fu,
    0x5baf81e0u, 0xf9e6fb91u, 0x981e7542u, 0x3655eef3u, 0xd48d68a4u, 0x72c4e255u, 0x10fc5c06u, 0xaf33d5b7u,
};

static const uint32_t bshim_108_tab5[96] = {
    0x7a4cc1c9u, 0x18843b7au, 0xb6bbb52bu, 0x54f32edcu, 0xf32aa88du, 0x9162223eu, 0x2f999befu, 0xcdd115a0u,
    0x6c088f51u, 0x0a400902u, 0xa87782b3u, 0x46aefc64u, 0xe4e67615u, 0x831defc6u, 0x21556977u, 0xbf8ce328u,
    0x5dc45cd9u, 0xfbfbd68au, 0x9a33503bu, 0x386ac9ecu, 0xd6a2439du, 0x74d9bd4eu, 0x131136ffu, 0xb148b0b0u,
    0x4f802a61u, 0xedb7a412u, 0x8bef1dc3u, 0x2a269774u, 0xc85e1125u, 0x66958ad6u, 0x04cd0487u, 0xa3047e38u,
    0x413bf7e9u, 0xdf73719au, 0x7daaeb4bu, 0x1be264fcu, 0xba19deadu, 0x5851585eu, 0xf688d20fu, 0x94c04bc0u,
    0x32f7c571u, 0xd12f3f22u, 0x6f66b8d3u, 0x0d9e3284u, 0xabd5ac35u, 0x4a0d25e6u, 0xe8449f97u, 0x867c1948u,
    0x24b392f9u, 0xc2eb0caau, 0x6122865bu, 0xff5a000cu, 0x9d9179bdu, 0x3bc8f36eu, 0xda006d1fu, 0x7837e6d0u,
    0x166f6081u, 0xb4a6da32u, 0x52de53e3u, 0xf115cd94u, 0x8f4d4745u, 0x2d84c0f6u, 0xcbbc3aa7u, 0x69f3b458u,
    0x082b2e09u, 0xa662a7bau, 0x449a216bu, 0xe2d19b1cu, 0x810914cdu, 0x1f408e7eu, 0xbd78082fu, 0x5baf81e0u,
    0xf9e6fb91u, 0x981e7542u, 0x3655eef3u, 0xd48d68a4u, 0x72c4e255u, 0x10fc5c06u, 0xaf33d5b7u, 0x4d6b4f68u,
    0xeba2c919u, 0x89da42cau, 0x2811bc7bu, 0xc649362cu, 0x6480afddu, 0x02b8298eu, 0xa0efa33fu, 0x3f271cf0u,
    0xdd5e96a1u, 0x7b961052u, 0x19cd8a03u, 0xb80503b4u, 0x563c7d65u, 0xf473f716u, 0x92ab70c7u, 0x30e2ea78u,
};

static const uint32_t bshim_108_tab6[96] = {
    0xfbfbd68au, 0x9a33503bu, 0x386ac9ecu, 0xd6a2439du, 0x74d9bd4eu, 0x131136ffu, 0xb148b0b0u, 0x4f802a61u,
    0xedb7a412u, 0x8bef1dc3u, 0x2a269774u, 0xc85e1125u, 0x66958ad6u, 0x04cd0487u, 0xa3047e38u, 0x413bf7e9u,
    0xdf73719au, 0x7daaeb4bu, 0x1be264fcu, 0xba19deadu, 0x5851585eu, 0xf688d20fu, 0x94c04bc0u, 0x32f7c571u,
    0xd12f3f22u, 0x6f66b8d3u, 0x0d9e3284u, 0xabd5ac35u, 0x4a0d25e6u, 0xe8449f97u, 0x867c1948u, 0x24b392f9u,
    0xc2eb0caau, 0x6122865bu, 0xff5a000cu, 0x9d9179bdu, 0x3bc8f36eu, 0xda006d1fu, 0x7837e6d0u, 0x166f6081u,
    0xb4a6da32u, 0x52de53e3u, 0xf115cd94u, 0x8f4d4745u, 0x2d84c0f6u, 0xcbbc3aa7u, 0x69f3b458u, 0x082b2e09u,
    0xa662a7bau, 0x449a216bu, 0xe2d19b1cu, 0x810914cdu, 0x1f408e7eu, 0xbd78082fu, 0x5baf81e0u, 0xf9e6fb91u,
    0x981e7542u, 0x3655eef3u, 0xd48d68a4u, 0x72c4e255u, 0x10fc5c06u, 0xaf33d5b7u, 0x4d6b4f68u, 0xeba2c919u,
    0x89da42cau, 0x2811bc7bu, 0xc649362cu, 0x6480afddu, 0x02b8298eu, 0xa0efa33fu, 0x3f271cf0u, 0xdd5e96a1u,
    0x7b961052u, 0x19cd8a03u, 0xb80503b4u, 0x563c7d65u, 0xf473f716u, 0x92ab70c7u, 0x30e2ea78u, 0xcf1a6429u,
    0x6d51dddau, 0x0b89578bu, 0xa9c0d13cu, 0x47f84aedu, 0xe62fc49eu, 0x84673e4fu, 0x229eb800u, 0xc0d631b1u,
    0x5f0dab62u, 0xfd452513u, 0x9b7c9ec4u, 0x39b41875u, 0xd7eb9226u, 0x76230bd7u, 0x145a8588u, 0xb291ff39u,
};

static const uint32_t bshim_108_tab7[96] = {
    0x7daaeb4bu, 0x1be264fcu, 0xba19deadu, 0x5851585eu, 0xf688d20fu, 0x94c04bc0u, 0x32f7c571u, 0xd12f3f22u,
    0x6f66b8d3u, 0x0d9e3284u, 0xabd5ac35u, 0x4a0d25e6u, 0xe8449f97u, 0x867c1948u, 0x24b392f9u, 0xc2eb0caau,
    0x6122865bu, 0xff5a000cu, 0x9d9179bdu, 0x3bc8f36eu, 0xda006d1fu, 0x7837e6d0u, 0x166f6081u, 0xb4a6da32u,
    0x52de53e3u, 0xf115cd94u, 0x8f4d4745u, 0x2d84c0f6u, 0xcbbc3aa7u, 0x69f3b458u, 0x082b2e09u, 0xa662a7bau,
    0x449a216bu, 0xe2d19b1cu, 0x810914cdu, 0x1f408e7eu, 0xbd78082fu, 0x5baf81e0u, 0xf9e6fb91u, 0x981e7542u,
    0x3655eef3u, 0xd48d68a4u, 0x72c4e255u, 0x10fc5c06u, 0xaf33d5b7u, 0x4d6b4f68u, 0xeba2c919u, 0x89da42cau,
    0x2811bc7bu, 0xc649362cu, 0x6480afddu, 0x02b8298eu, 0xa0efa33fu, 0x3f271cf0u, 0xdd5e96a1u, 0x7b961052u,
    0x19cd8a03u, 0xb80503b4u, 0x563c7d65u, 0xf473f716u, 0x92ab70c7u, 0x30e2ea78u, 0xcf1a6429u, 0x6d51dddau,
    0x0b89578bu, 0xa9c0d13cu, 0x47f84aedu, 0xe62fc49eu, 0x84673e4fu, 0x229eb800u, 0xc0d631b1u, 0x5f0dab62u,
    0xfd452513u, 0x9b7c9ec4u, 0x39b41875u, 0xd7eb9226u, 0x76230bd7u, 0x145a8588u, 0xb291ff39u, 0x50c978eau,
    0xef00f29bu, 0x8d386c4cu, 0x2b6fe5fdu, 0xc9a75faeu, 0x67ded95fu, 0x06165310u, 0xa44dccc1u, 0x42854672u,
    0xe0bcc023u, 0x7ef439d4u, 0x1d2bb385u, 0xbb632d36u, 0x599aa6e7u, 0xf7d22098u, 0x96099a49u, 0x344113fau,
};

struct bshim_108_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_108_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_108_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_108_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_108_reset(struct bshim_108_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000d0cd4u;
    return 0;
}

