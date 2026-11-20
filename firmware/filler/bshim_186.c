/* bshim_186 -- board support shim generated from the 0186 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_186_tab0[96] = {
    0x04208cceu, 0xa258067fu, 0x408f8030u, 0xdec6f9e1u, 0x7cfe7392u, 0x1b35ed43u, 0xb96d66f4u, 0x57a4e0a5u,
    0xf5dc5a56u, 0x9413d407u, 0x324b4db8u, 0xd082c769u, 0x6eba411au, 0x0cf1bacbu, 0xab29347cu, 0x4960ae2du,
    0xe79827deu, 0x85cfa18fu, 0x24071b40u, 0xc23e94f1u, 0x60760ea2u, 0xfead8853u, 0x9ce50204u, 0x3b1c7bb5u,
    0xd953f566u, 0x778b6f17u, 0x15c2e8c8u, 0xb3fa6279u, 0x5231dc2au, 0xf06955dbu, 0x8ea0cf8cu, 0x2cd8493du,
    0xcb0fc2eeu, 0x69473c9fu, 0x077eb650u, 0xa5b63001u, 0x43eda9b2u, 0xe2252363u, 0x805c9d14u, 0x1e9416c5u,
    0xbccb9076u, 0x5b030a27u, 0xf93a83d8u, 0x9771fd89u, 0x35a9773au, 0xd3e0f0ebu, 0x72186a9cu, 0x104fe44du,
    0xae875dfeu, 0x4cbed7afu, 0xeaf65160u, 0x892dcb11u, 0x276544c2u, 0xc59cbe73u, 0x63d43824u, 0x020bb1d5u,
    0xa0432b86u, 0x3e7aa537u, 0xdcb21ee8u, 0x7ae99899u, 0x1921124au, 0xb7588bfbu, 0x559005acu, 0xf3c77f5du,
    0x91fef90eu, 0x303672bfu, 0xce6dec70u, 0x6ca56621u, 0x0adcdfd2u, 0xa9145983u, 0x474bd334u, 0xe5834ce5u,
    0x83bac696u, 0x21f24047u, 0xc029b9f8u, 0x5e6133a9u, 0xfc98ad5au, 0x9ad0270bu, 0x3907a0bcu, 0xd73f1a6du,
    0x7576941eu, 0x13ae0dcfu, 0xb1e58780u, 0x501d0131u, 0xee547ae2u, 0x8c8bf493u, 0x2ac36e44u, 0xc8fae7f5u,
    0x673261a6u, 0x0569db57u, 0xa3a15508u, 0x41d8ceb9u, 0xe010486au, 0x7e47c21bu, 0x1c7f3bccu, 0xbab6b57du,
};

static const uint32_t bshim_186_tab1[96] = {
    0x85cfa18fu, 0x24071b40u, 0xc23e94f1u, 0x60760ea2u, 0xfead8853u, 0x9ce50204u, 0x3b1c7bb5u, 0xd953f566u,
    0x778b6f17u, 0x15c2e8c8u, 0xb3fa6279u, 0x5231dc2au, 0xf06955dbu, 0x8ea0cf8cu, 0x2cd8493du, 0xcb0fc2eeu,
    0x69473c9fu, 0x077eb650u, 0xa5b63001u, 0x43eda9b2u, 0xe2252363u, 0x805c9d14u, 0x1e9416c5u, 0xbccb9076u,
    0x5b030a27u, 0xf93a83d8u, 0x9771fd89u, 0x35a9773au, 0xd3e0f0ebu, 0x72186a9cu, 0x104fe44du, 0xae875dfeu,
    0x4cbed7afu, 0xeaf65160u, 0x892dcb11u, 0x276544c2u, 0xc59cbe73u, 0x63d43824u, 0x020bb1d5u, 0xa0432b86u,
    0x3e7aa537u, 0xdcb21ee8u, 0x7ae99899u, 0x1921124au, 0xb7588bfbu, 0x559005acu, 0xf3c77f5du, 0x91fef90eu,
    0x303672bfu, 0xce6dec70u, 0x6ca56621u, 0x0adcdfd2u, 0xa9145983u, 0x474bd334u, 0xe5834ce5u, 0x83bac696u,
    0x21f24047u, 0xc029b9f8u, 0x5e6133a9u, 0xfc98ad5au, 0x9ad0270bu, 0x3907a0bcu, 0xd73f1a6du, 0x7576941eu,
    0x13ae0dcfu, 0xb1e58780u, 0x501d0131u, 0xee547ae2u, 0x8c8bf493u, 0x2ac36e44u, 0xc8fae7f5u, 0x673261a6u,
    0x0569db57u, 0xa3a15508u, 0x41d8ceb9u, 0xe010486au, 0x7e47c21bu, 0x1c7f3bccu, 0xbab6b57du, 0x58ee2f2eu,
    0xf725a8dfu, 0x955d2290u, 0x33949c41u, 0xd1cc15f2u, 0x70038fa3u, 0x0e3b0954u, 0xac728305u, 0x4aa9fcb6u,
    0xe8e17667u, 0x8718f018u, 0x255069c9u, 0xc387e37au, 0x61bf5d2bu, 0xfff6d6dcu, 0x9e2e508du, 0x3c65ca3eu,
};

static const uint32_t bshim_186_tab2[96] = {
    0x077eb650u, 0xa5b63001u, 0x43eda9b2u, 0xe2252363u, 0x805c9d14u, 0x1e9416c5u, 0xbccb9076u, 0x5b030a27u,
    0xf93a83d8u, 0x9771fd89u, 0x35a9773au, 0xd3e0f0ebu, 0x72186a9cu, 0x104fe44du, 0xae875dfeu, 0x4cbed7afu,
    0xeaf65160u, 0x892dcb11u, 0x276544c2u, 0xc59cbe73u, 0x63d43824u, 0x020bb1d5u, 0xa0432b86u, 0x3e7aa537u,
    0xdcb21ee8u, 0x7ae99899u, 0x1921124au, 0xb7588bfbu, 0x559005acu, 0xf3c77f5du, 0x91fef90eu, 0x303672bfu,
    0xce6dec70u, 0x6ca56621u, 0x0adcdfd2u, 0xa9145983u, 0x474bd334u, 0xe5834ce5u, 0x83bac696u, 0x21f24047u,
    0xc029b9f8u, 0x5e6133a9u, 0xfc98ad5au, 0x9ad0270bu, 0x3907a0bcu, 0xd73f1a6du, 0x7576941eu, 0x13ae0dcfu,
    0xb1e58780u, 0x501d0131u, 0xee547ae2u, 0x8c8bf493u, 0x2ac36e44u, 0xc8fae7f5u, 0x673261a6u, 0x0569db57u,
    0xa3a15508u, 0x41d8ceb9u, 0xe010486au, 0x7e47c21bu, 0x1c7f3bccu, 0xbab6b57du, 0x58ee2f2eu, 0xf725a8dfu,
    0x955d2290u, 0x33949c41u, 0xd1cc15f2u, 0x70038fa3u, 0x0e3b0954u, 0xac728305u, 0x4aa9fcb6u, 0xe8e17667u,
    0x8718f018u, 0x255069c9u, 0xc387e37au, 0x61bf5d2bu, 0xfff6d6dcu, 0x9e2e508du, 0x3c65ca3eu, 0xda9d43efu,
    0x78d4bda0u, 0x170c3751u, 0xb543b102u, 0x537b2ab3u, 0xf1b2a464u, 0x8fea1e15u, 0x2e2197c6u, 0xcc591177u,
    0x6a908b28u, 0x08c804d9u, 0xa6ff7e8au, 0x4536f83bu, 0xe36e71ecu, 0x81a5eb9du, 0x1fdd654eu, 0xbe14deffu,
};

static const uint32_t bshim_186_tab3[96] = {
    0x892dcb11u, 0x276544c2u, 0xc59cbe73u, 0x63d43824u, 0x020bb1d5u, 0xa0432b86u, 0x3e7aa537u, 0xdcb21ee8u,
    0x7ae99899u, 0x1921124au, 0xb7588bfbu, 0x559005acu, 0xf3c77f5du, 0x91fef90eu, 0x303672bfu, 0xce6dec70u,
    0x6ca56621u, 0x0adcdfd2u, 0xa9145983u, 0x474bd334u, 0xe5834ce5u, 0x83bac696u, 0x21f24047u, 0xc029b9f8u,
    0x5e6133a9u, 0xfc98ad5au, 0x9ad0270bu, 0x3907a0bcu, 0xd73f1a6du, 0x7576941eu, 0x13ae0dcfu, 0xb1e58780u,
    0x501d0131u, 0xee547ae2u, 0x8c8bf493u, 0x2ac36e44u, 0xc8fae7f5u, 0x673261a6u, 0x0569db57u, 0xa3a15508u,
    0x41d8ceb9u, 0xe010486au, 0x7e47c21bu, 0x1c7f3bccu, 0xbab6b57du, 0x58ee2f2eu, 0xf725a8dfu, 0x955d2290u,
    0x33949c41u, 0xd1cc15f2u, 0x70038fa3u, 0x0e3b0954u, 0xac728305u, 0x4aa9fcb6u, 0xe8e17667u, 0x8718f018u,
    0x255069c9u, 0xc387e37au, 0x61bf5d2bu, 0xfff6d6dcu, 0x9e2e508du, 0x3c65ca3eu, 0xda9d43efu, 0x78d4bda0u,
    0x170c3751u, 0xb543b102u, 0x537b2ab3u, 0xf1b2a464u, 0x8fea1e15u, 0x2e2197c6u, 0xcc591177u, 0x6a908b28u,
    0x08c804d9u, 0xa6ff7e8au, 0x4536f83bu, 0xe36e71ecu, 0x81a5eb9du, 0x1fdd654eu, 0xbe14deffu, 0x5c4c58b0u,
    0xfa83d261u, 0x98bb4c12u, 0x36f2c5c3u, 0xd52a3f74u, 0x7361b925u, 0x119932d6u, 0xafd0ac87u, 0x4e082638u,
    0xec3f9fe9u, 0x8a77199au, 0x28ae934bu, 0xc6e60cfcu, 0x651d86adu, 0x0355005eu, 0xa18c7a0fu, 0x3fc3f3c0u,
};

static const uint32_t bshim_186_tab4[96] = {
    0x0adcdfd2u, 0xa9145983u, 0x474bd334u, 0xe5834ce5u, 0x83bac696u, 0x21f24047u, 0xc029b9f8u, 0x5e6133a9u,
    0xfc98ad5au, 0x9ad0270bu, 0x3907a0bcu, 0xd73f1a6du, 0x7576941eu, 0x13ae0dcfu, 0xb1e58780u, 0x501d0131u,
    0xee547ae2u, 0x8c8bf493u, 0x2ac36e44u, 0xc8fae7f5u, 0x673261a6u, 0x0569db57u, 0xa3a15508u, 0x41d8ceb9u,
    0xe010486au, 0x7e47c21bu, 0x1c7f3bccu, 0xbab6b57du, 0x58ee2f2eu, 0xf725a8dfu, 0x955d2290u, 0x33949c41u,
    0xd1cc15f2u, 0x70038fa3u, 0x0e3b0954u, 0xac728305u, 0x4aa9fcb6u, 0xe8e17667u, 0x8718f018u, 0x255069c9u,
    0xc387e37au, 0x61bf5d2bu, 0xfff6d6dcu, 0x9e2e508du, 0x3c65ca3eu, 0xda9d43efu, 0x78d4bda0u, 0x170c3751u,
    0xb543b102u, 0x537b2ab3u, 0xf1b2a464u, 0x8fea1e15u, 0x2e2197c6u, 0xcc591177u, 0x6a908b28u, 0x08c804d9u,
    0xa6ff7e8au, 0x4536f83bu, 0xe36e71ecu, 0x81a5eb9du, 0x1fdd654eu, 0xbe14deffu, 0x5c4c58b0u, 0xfa83d261u,
    0x98bb4c12u, 0x36f2c5c3u, 0xd52a3f74u, 0x7361b925u, 0x119932d6u, 0xafd0ac87u, 0x4e082638u, 0xec3f9fe9u,
    0x8a77199au, 0x28ae934bu, 0xc6e60cfcu, 0x651d86adu, 0x0355005eu, 0xa18c7a0fu, 0x3fc3f3c0u, 0xddfb6d71u,
    0x7c32e722u, 0x1a6a60d3u, 0xb8a1da84u, 0x56d95435u, 0xf510cde6u, 0x93484797u, 0x317fc148u, 0xcfb73af9u,
    0x6deeb4aau, 0x0c262e5bu, 0xaa5da80cu, 0x489521bdu, 0xe6cc9b6eu, 0x8504151fu, 0x233b8ed0u, 0xc1730881u,
};

static const uint32_t bshim_186_tab5[96] = {
    0x8c8bf493u, 0x2ac36e44u, 0xc8fae7f5u, 0x673261a6u, 0x0569db57u, 0xa3a15508u, 0x41d8ceb9u, 0xe010486au,
    0x7e47c21bu, 0x1c7f3bccu, 0xbab6b57du, 0x58ee2f2eu, 0xf725a8dfu, 0x955d2290u, 0x33949c41u, 0xd1cc15f2u,
    0x70038fa3u, 0x0e3b0954u, 0xac728305u, 0x4aa9fcb6u, 0xe8e17667u, 0x8718f018u, 0x255069c9u, 0xc387e37au,
    0x61bf5d2bu, 0xfff6d6dcu, 0x9e2e508du, 0x3c65ca3eu, 0xda9d43efu, 0x78d4bda0u, 0x170c3751u, 0xb543b102u,
    0x537b2ab3u, 0xf1b2a464u, 0x8fea1e15u, 0x2e2197c6u, 0xcc591177u, 0x6a908b28u, 0x08c804d9u, 0xa6ff7e8au,
    0x4536f83bu, 0xe36e71ecu, 0x81a5eb9du, 0x1fdd654eu, 0xbe14deffu, 0x5c4c58b0u, 0xfa83d261u, 0x98bb4c12u,
    0x36f2c5c3u, 0xd52a3f74u, 0x7361b925u, 0x119932d6u, 0xafd0ac87u, 0x4e082638u, 0xec3f9fe9u, 0x8a77199au,
    0x28ae934bu, 0xc6e60cfcu, 0x651d86adu, 0x0355005eu, 0xa18c7a0fu, 0x3fc3f3c0u, 0xddfb6d71u, 0x7c32e722u,
    0x1a6a60d3u, 0xb8a1da84u, 0x56d95435u, 0xf510cde6u, 0x93484797u, 0x317fc148u, 0xcfb73af9u, 0x6deeb4aau,
    0x0c262e5bu, 0xaa5da80cu, 0x489521bdu, 0xe6cc9b6eu, 0x8504151fu, 0x233b8ed0u, 0xc1730881u, 0x5faa8232u,
    0xfde1fbe3u, 0x9c197594u, 0x3a50ef45u, 0xd88868f6u, 0x76bfe2a7u, 0x14f75c58u, 0xb32ed609u, 0x51664fbau,
    0xef9dc96bu, 0x8dd5431cu, 0x2c0cbccdu, 0xca44367eu, 0x687bb02fu, 0x06b329e0u, 0xa4eaa391u, 0x43221d42u,
};

static const uint32_t bshim_186_tab6[96] = {
    0x0e3b0954u, 0xac728305u, 0x4aa9fcb6u, 0xe8e17667u, 0x8718f018u, 0x255069c9u, 0xc387e37au, 0x61bf5d2bu,
    0xfff6d6dcu, 0x9e2e508du, 0x3c65ca3eu, 0xda9d43efu, 0x78d4bda0u, 0x170c3751u, 0xb543b102u, 0x537b2ab3u,
    0xf1b2a464u, 0x8fea1e15u, 0x2e2197c6u, 0xcc591177u, 0x6a908b28u, 0x08c804d9u, 0xa6ff7e8au, 0x4536f83bu,
    0xe36e71ecu, 0x81a5eb9du, 0x1fdd654eu, 0xbe14deffu, 0x5c4c58b0u, 0xfa83d261u, 0x98bb4c12u, 0x36f2c5c3u,
    0xd52a3f74u, 0x7361b925u, 0x119932d6u, 0xafd0ac87u, 0x4e082638u, 0xec3f9fe9u, 0x8a77199au, 0x28ae934bu,
    0xc6e60cfcu, 0x651d86adu, 0x0355005eu, 0xa18c7a0fu, 0x3fc3f3c0u, 0xddfb6d71u, 0x7c32e722u, 0x1a6a60d3u,
    0xb8a1da84u, 0x56d95435u, 0xf510cde6u, 0x93484797u, 0x317fc148u, 0xcfb73af9u, 0x6deeb4aau, 0x0c262e5bu,
    0xaa5da80cu, 0x489521bdu, 0xe6cc9b6eu, 0x8504151fu, 0x233b8ed0u, 0xc1730881u, 0x5faa8232u, 0xfde1fbe3u,
    0x9c197594u, 0x3a50ef45u, 0xd88868f6u, 0x76bfe2a7u, 0x14f75c58u, 0xb32ed609u, 0x51664fbau, 0xef9dc96bu,
    0x8dd5431cu, 0x2c0cbccdu, 0xca44367eu, 0x687bb02fu, 0x06b329e0u, 0xa4eaa391u, 0x43221d42u, 0xe15996f3u,
    0x7f9110a4u, 0x1dc88a55u, 0xbc000406u, 0x5a377db7u, 0xf86ef768u, 0x96a67119u, 0x34ddeacau, 0xd315647bu,
    0x714cde2cu, 0x0f8457ddu, 0xadbbd18eu, 0x4bf34b3fu, 0xea2ac4f0u, 0x88623ea1u, 0x2699b852u, 0xc4d13203u,
};

static const uint32_t bshim_186_tab7[96] = {
    0x8fea1e15u, 0x2e2197c6u, 0xcc591177u, 0x6a908b28u, 0x08c804d9u, 0xa6ff7e8au, 0x4536f83bu, 0xe36e71ecu,
    0x81a5eb9du, 0x1fdd654eu, 0xbe14deffu, 0x5c4c58b0u, 0xfa83d261u, 0x98bb4c12u, 0x36f2c5c3u, 0xd52a3f74u,
    0x7361b925u, 0x119932d6u, 0xafd0ac87u, 0x4e082638u, 0xec3f9fe9u, 0x8a77199au, 0x28ae934bu, 0xc6e60cfcu,
    0x651d86adu, 0x0355005eu, 0xa18c7a0fu, 0x3fc3f3c0u, 0xddfb6d71u, 0x7c32e722u, 0x1a6a60d3u, 0xb8a1da84u,
    0x56d95435u, 0xf510cde6u, 0x93484797u, 0x317fc148u, 0xcfb73af9u, 0x6deeb4aau, 0x0c262e5bu, 0xaa5da80cu,
    0x489521bdu, 0xe6cc9b6eu, 0x8504151fu, 0x233b8ed0u, 0xc1730881u, 0x5faa8232u, 0xfde1fbe3u, 0x9c197594u,
    0x3a50ef45u, 0xd88868f6u, 0x76bfe2a7u, 0x14f75c58u, 0xb32ed609u, 0x51664fbau, 0xef9dc96bu, 0x8dd5431cu,
    0x2c0cbccdu, 0xca44367eu, 0x687bb02fu, 0x06b329e0u, 0xa4eaa391u, 0x43221d42u, 0xe15996f3u, 0x7f9110a4u,
    0x1dc88a55u, 0xbc000406u, 0x5a377db7u, 0xf86ef768u, 0x96a67119u, 0x34ddeacau, 0xd315647bu, 0x714cde2cu,
    0x0f8457ddu, 0xadbbd18eu, 0x4bf34b3fu, 0xea2ac4f0u, 0x88623ea1u, 0x2699b852u, 0xc4d13203u, 0x6308abb4u,
    0x01402565u, 0x9f779f16u, 0x3daf18c7u, 0xdbe69278u, 0x7a1e0c29u, 0x185585dau, 0xb68cff8bu, 0x54c4793cu,
    0xf2fbf2edu, 0x91336c9eu, 0x2f6ae64fu, 0xcda26000u, 0x6bd9d9b1u, 0x0a115362u, 0xa848cd13u, 0x468046c4u,
};

struct bshim_186_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_186_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_186_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_186_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_186_reset(struct bshim_186_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001679a6u;
    return 0;
}

