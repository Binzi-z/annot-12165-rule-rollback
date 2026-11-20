/* bshim_187 -- board support shim generated from the 0187 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_187_tab0[96] = {
    0xfa83d261u, 0x98bb4c12u, 0x36f2c5c3u, 0xd52a3f74u, 0x7361b925u, 0x119932d6u, 0xafd0ac87u, 0x4e082638u,
    0xec3f9fe9u, 0x8a77199au, 0x28ae934bu, 0xc6e60cfcu, 0x651d86adu, 0x0355005eu, 0xa18c7a0fu, 0x3fc3f3c0u,
    0xddfb6d71u, 0x7c32e722u, 0x1a6a60d3u, 0xb8a1da84u, 0x56d95435u, 0xf510cde6u, 0x93484797u, 0x317fc148u,
    0xcfb73af9u, 0x6deeb4aau, 0x0c262e5bu, 0xaa5da80cu, 0x489521bdu, 0xe6cc9b6eu, 0x8504151fu, 0x233b8ed0u,
    0xc1730881u, 0x5faa8232u, 0xfde1fbe3u, 0x9c197594u, 0x3a50ef45u, 0xd88868f6u, 0x76bfe2a7u, 0x14f75c58u,
    0xb32ed609u, 0x51664fbau, 0xef9dc96bu, 0x8dd5431cu, 0x2c0cbccdu, 0xca44367eu, 0x687bb02fu, 0x06b329e0u,
    0xa4eaa391u, 0x43221d42u, 0xe15996f3u, 0x7f9110a4u, 0x1dc88a55u, 0xbc000406u, 0x5a377db7u, 0xf86ef768u,
    0x96a67119u, 0x34ddeacau, 0xd315647bu, 0x714cde2cu, 0x0f8457ddu, 0xadbbd18eu, 0x4bf34b3fu, 0xea2ac4f0u,
    0x88623ea1u, 0x2699b852u, 0xc4d13203u, 0x6308abb4u, 0x01402565u, 0x9f779f16u, 0x3daf18c7u, 0xdbe69278u,
    0x7a1e0c29u, 0x185585dau, 0xb68cff8bu, 0x54c4793cu, 0xf2fbf2edu, 0x91336c9eu, 0x2f6ae64fu, 0xcda26000u,
    0x6bd9d9b1u, 0x0a115362u, 0xa848cd13u, 0x468046c4u, 0xe4b7c075u, 0x82ef3a26u, 0x2126b3d7u, 0xbf5e2d88u,
    0x5d95a739u, 0xfbcd20eau, 0x9a049a9bu, 0x383c144cu, 0xd6738dfdu, 0x74ab07aeu, 0x12e2815fu, 0xb119fb10u,
};

static const uint32_t bshim_187_tab1[96] = {
    0x7c32e722u, 0x1a6a60d3u, 0xb8a1da84u, 0x56d95435u, 0xf510cde6u, 0x93484797u, 0x317fc148u, 0xcfb73af9u,
    0x6deeb4aau, 0x0c262e5bu, 0xaa5da80cu, 0x489521bdu, 0xe6cc9b6eu, 0x8504151fu, 0x233b8ed0u, 0xc1730881u,
    0x5faa8232u, 0xfde1fbe3u, 0x9c197594u, 0x3a50ef45u, 0xd88868f6u, 0x76bfe2a7u, 0x14f75c58u, 0xb32ed609u,
    0x51664fbau, 0xef9dc96bu, 0x8dd5431cu, 0x2c0cbccdu, 0xca44367eu, 0x687bb02fu, 0x06b329e0u, 0xa4eaa391u,
    0x43221d42u, 0xe15996f3u, 0x7f9110a4u, 0x1dc88a55u, 0xbc000406u, 0x5a377db7u, 0xf86ef768u, 0x96a67119u,
    0x34ddeacau, 0xd315647bu, 0x714cde2cu, 0x0f8457ddu, 0xadbbd18eu, 0x4bf34b3fu, 0xea2ac4f0u, 0x88623ea1u,
    0x2699b852u, 0xc4d13203u, 0x6308abb4u, 0x01402565u, 0x9f779f16u, 0x3daf18c7u, 0xdbe69278u, 0x7a1e0c29u,
    0x185585dau, 0xb68cff8bu, 0x54c4793cu, 0xf2fbf2edu, 0x91336c9eu, 0x2f6ae64fu, 0xcda26000u, 0x6bd9d9b1u,
    0x0a115362u, 0xa848cd13u, 0x468046c4u, 0xe4b7c075u, 0x82ef3a26u, 0x2126b3d7u, 0xbf5e2d88u, 0x5d95a739u,
    0xfbcd20eau, 0x9a049a9bu, 0x383c144cu, 0xd6738dfdu, 0x74ab07aeu, 0x12e2815fu, 0xb119fb10u, 0x4f5174c1u,
    0xed88ee72u, 0x8bc06823u, 0x29f7e1d4u, 0xc82f5b85u, 0x6666d536u, 0x049e4ee7u, 0xa2d5c898u, 0x410d4249u,
    0xdf44bbfau, 0x7d7c35abu, 0x1bb3af5cu, 0xb9eb290du, 0x5822a2beu, 0xf65a1c6fu, 0x94919620u, 0x32c90fd1u,
};

static const uint32_t bshim_187_tab2[96] = {
    0xfde1fbe3u, 0x9c197594u, 0x3a50ef45u, 0xd88868f6u, 0x76bfe2a7u, 0x14f75c58u, 0xb32ed609u, 0x51664fbau,
    0xef9dc96bu, 0x8dd5431cu, 0x2c0cbccdu, 0xca44367eu, 0x687bb02fu, 0x06b329e0u, 0xa4eaa391u, 0x43221d42u,
    0xe15996f3u, 0x7f9110a4u, 0x1dc88a55u, 0xbc000406u, 0x5a377db7u, 0xf86ef768u, 0x96a67119u, 0x34ddeacau,
    0xd315647bu, 0x714cde2cu, 0x0f8457ddu, 0xadbbd18eu, 0x4bf34b3fu, 0xea2ac4f0u, 0x88623ea1u, 0x2699b852u,
    0xc4d13203u, 0x6308abb4u, 0x01402565u, 0x9f779f16u, 0x3daf18c7u, 0xdbe69278u, 0x7a1e0c29u, 0x185585dau,
    0xb68cff8bu, 0x54c4793cu, 0xf2fbf2edu, 0x91336c9eu, 0x2f6ae64fu, 0xcda26000u, 0x6bd9d9b1u, 0x0a115362u,
    0xa848cd13u, 0x468046c4u, 0xe4b7c075u, 0x82ef3a26u, 0x2126b3d7u, 0xbf5e2d88u, 0x5d95a739u, 0xfbcd20eau,
    0x9a049a9bu, 0x383c144cu, 0xd6738dfdu, 0x74ab07aeu, 0x12e2815fu, 0xb119fb10u, 0x4f5174c1u, 0xed88ee72u,
    0x8bc06823u, 0x29f7e1d4u, 0xc82f5b85u, 0x6666d536u, 0x049e4ee7u, 0xa2d5c898u, 0x410d4249u, 0xdf44bbfau,
    0x7d7c35abu, 0x1bb3af5cu, 0xb9eb290du, 0x5822a2beu, 0xf65a1c6fu, 0x94919620u, 0x32c90fd1u, 0xd1008982u,
    0x6f380333u, 0x0d6f7ce4u, 0xaba6f695u, 0x49de7046u, 0xe815e9f7u, 0x864d63a8u, 0x2484dd59u, 0xc2bc570au,
    0x60f3d0bbu, 0xff2b4a6cu, 0x9d62c41du, 0x3b9a3dceu, 0xd9d1b77fu, 0x78093130u, 0x1640aae1u, 0xb4782492u,
};

static const uint32_t bshim_187_tab3[96] = {
    0x7f9110a4u, 0x1dc88a55u, 0xbc000406u, 0x5a377db7u, 0xf86ef768u, 0x96a67119u, 0x34ddeacau, 0xd315647bu,
    0x714cde2cu, 0x0f8457ddu, 0xadbbd18eu, 0x4bf34b3fu, 0xea2ac4f0u, 0x88623ea1u, 0x2699b852u, 0xc4d13203u,
    0x6308abb4u, 0x01402565u, 0x9f779f16u, 0x3daf18c7u, 0xdbe69278u, 0x7a1e0c29u, 0x185585dau, 0xb68cff8bu,
    0x54c4793cu, 0xf2fbf2edu, 0x91336c9eu, 0x2f6ae64fu, 0xcda26000u, 0x6bd9d9b1u, 0x0a115362u, 0xa848cd13u,
    0x468046c4u, 0xe4b7c075u, 0x82ef3a26u, 0x2126b3d7u, 0xbf5e2d88u, 0x5d95a739u, 0xfbcd20eau, 0x9a049a9bu,
    0x383c144cu, 0xd6738dfdu, 0x74ab07aeu, 0x12e2815fu, 0xb119fb10u, 0x4f5174c1u, 0xed88ee72u, 0x8bc06823u,
    0x29f7e1d4u, 0xc82f5b85u, 0x6666d536u, 0x049e4ee7u, 0xa2d5c898u, 0x410d4249u, 0xdf44bbfau, 0x7d7c35abu,
    0x1bb3af5cu, 0xb9eb290du, 0x5822a2beu, 0xf65a1c6fu, 0x94919620u, 0x32c90fd1u, 0xd1008982u, 0x6f380333u,
    0x0d6f7ce4u, 0xaba6f695u, 0x49de7046u, 0xe815e9f7u, 0x864d63a8u, 0x2484dd59u, 0xc2bc570au, 0x60f3d0bbu,
    0xff2b4a6cu, 0x9d62c41du, 0x3b9a3dceu, 0xd9d1b77fu, 0x78093130u, 0x1640aae1u, 0xb4782492u, 0x52af9e43u,
    0xf0e717f4u, 0x8f1e91a5u, 0x2d560b56u, 0xcb8d8507u, 0x69c4feb8u, 0x07fc7869u, 0xa633f21au, 0x446b6bcbu,
    0xe2a2e57cu, 0x80da5f2du, 0x1f11d8deu, 0xbd49528fu, 0x5b80cc40u, 0xf9b845f1u, 0x97efbfa2u, 0x36273953u,
};

static const uint32_t bshim_187_tab4[96] = {
    0x01402565u, 0x9f779f16u, 0x3daf18c7u, 0xdbe69278u, 0x7a1e0c29u, 0x185585dau, 0xb68cff8bu, 0x54c4793cu,
    0xf2fbf2edu, 0x91336c9eu, 0x2f6ae64fu, 0xcda26000u, 0x6bd9d9b1u, 0x0a115362u, 0xa848cd13u, 0x468046c4u,
    0xe4b7c075u, 0x82ef3a26u, 0x2126b3d7u, 0xbf5e2d88u, 0x5d95a739u, 0xfbcd20eau, 0x9a049a9bu, 0x383c144cu,
    0xd6738dfdu, 0x74ab07aeu, 0x12e2815fu, 0xb119fb10u, 0x4f5174c1u, 0xed88ee72u, 0x8bc06823u, 0x29f7e1d4u,
    0xc82f5b85u, 0x6666d536u, 0x049e4ee7u, 0xa2d5c898u, 0x410d4249u, 0xdf44bbfau, 0x7d7c35abu, 0x1bb3af5cu,
    0xb9eb290du, 0x5822a2beu, 0xf65a1c6fu, 0x94919620u, 0x32c90fd1u, 0xd1008982u, 0x6f380333u, 0x0d6f7ce4u,
    0xaba6f695u, 0x49de7046u, 0xe815e9f7u, 0x864d63a8u, 0x2484dd59u, 0xc2bc570au, 0x60f3d0bbu, 0xff2b4a6cu,
    0x9d62c41du, 0x3b9a3dceu, 0xd9d1b77fu, 0x78093130u, 0x1640aae1u, 0xb4782492u, 0x52af9e43u, 0xf0e717f4u,
    0x8f1e91a5u, 0x2d560b56u, 0xcb8d8507u, 0x69c4feb8u, 0x07fc7869u, 0xa633f21au, 0x446b6bcbu, 0xe2a2e57cu,
    0x80da5f2du, 0x1f11d8deu, 0xbd49528fu, 0x5b80cc40u, 0xf9b845f1u, 0x97efbfa2u, 0x36273953u, 0xd45eb304u,
    0x72962cb5u, 0x10cda666u, 0xaf052017u, 0x4d3c99c8u, 0xeb741379u, 0x89ab8d2au, 0x27e306dbu, 0xc61a808cu,
    0x6451fa3du, 0x028973eeu, 0xa0c0ed9fu, 0x3ef86750u, 0xdd2fe101u, 0x7b675ab2u, 0x199ed463u, 0xb7d64e14u,
};

static const uint32_t bshim_187_tab5[96] = {
    0x82ef3a26u, 0x2126b3d7u, 0xbf5e2d88u, 0x5d95a739u, 0xfbcd20eau, 0x9a049a9bu, 0x383c144cu, 0xd6738dfdu,
    0x74ab07aeu, 0x12e2815fu, 0xb119fb10u, 0x4f5174c1u, 0xed88ee72u, 0x8bc06823u, 0x29f7e1d4u, 0xc82f5b85u,
    0x6666d536u, 0x049e4ee7u, 0xa2d5c898u, 0x410d4249u, 0xdf44bbfau, 0x7d7c35abu, 0x1bb3af5cu, 0xb9eb290du,
    0x5822a2beu, 0xf65a1c6fu, 0x94919620u, 0x32c90fd1u, 0xd1008982u, 0x6f380333u, 0x0d6f7ce4u, 0xaba6f695u,
    0x49de7046u, 0xe815e9f7u, 0x864d63a8u, 0x2484dd59u, 0xc2bc570au, 0x60f3d0bbu, 0xff2b4a6cu, 0x9d62c41du,
    0x3b9a3dceu, 0xd9d1b77fu, 0x78093130u, 0x1640aae1u, 0xb4782492u, 0x52af9e43u, 0xf0e717f4u, 0x8f1e91a5u,
    0x2d560b56u, 0xcb8d8507u, 0x69c4feb8u, 0x07fc7869u, 0xa633f21au, 0x446b6bcbu, 0xe2a2e57cu, 0x80da5f2du,
    0x1f11d8deu, 0xbd49528fu, 0x5b80cc40u, 0xf9b845f1u, 0x97efbfa2u, 0x36273953u, 0xd45eb304u, 0x72962cb5u,
    0x10cda666u, 0xaf052017u, 0x4d3c99c8u, 0xeb741379u, 0x89ab8d2au, 0x27e306dbu, 0xc61a808cu, 0x6451fa3du,
    0x028973eeu, 0xa0c0ed9fu, 0x3ef86750u, 0xdd2fe101u, 0x7b675ab2u, 0x199ed463u, 0xb7d64e14u, 0x560dc7c5u,
    0xf4454176u, 0x927cbb27u, 0x30b434d8u, 0xceebae89u, 0x6d23283au, 0x0b5aa1ebu, 0xa9921b9cu, 0x47c9954du,
    0xe6010efeu, 0x843888afu, 0x22700260u, 0xc0a77c11u, 0x5edef5c2u, 0xfd166f73u, 0x9b4de924u, 0x398562d5u,
};

static const uint32_t bshim_187_tab6[96] = {
    0x049e4ee7u, 0xa2d5c898u, 0x410d4249u, 0xdf44bbfau, 0x7d7c35abu, 0x1bb3af5cu, 0xb9eb290du, 0x5822a2beu,
    0xf65a1c6fu, 0x94919620u, 0x32c90fd1u, 0xd1008982u, 0x6f380333u, 0x0d6f7ce4u, 0xaba6f695u, 0x49de7046u,
    0xe815e9f7u, 0x864d63a8u, 0x2484dd59u, 0xc2bc570au, 0x60f3d0bbu, 0xff2b4a6cu, 0x9d62c41du, 0x3b9a3dceu,
    0xd9d1b77fu, 0x78093130u, 0x1640aae1u, 0xb4782492u, 0x52af9e43u, 0xf0e717f4u, 0x8f1e91a5u, 0x2d560b56u,
    0xcb8d8507u, 0x69c4feb8u, 0x07fc7869u, 0xa633f21au, 0x446b6bcbu, 0xe2a2e57cu, 0x80da5f2du, 0x1f11d8deu,
    0xbd49528fu, 0x5b80cc40u, 0xf9b845f1u, 0x97efbfa2u, 0x36273953u, 0xd45eb304u, 0x72962cb5u, 0x10cda666u,
    0xaf052017u, 0x4d3c99c8u, 0xeb741379u, 0x89ab8d2au, 0x27e306dbu, 0xc61a808cu, 0x6451fa3du, 0x028973eeu,
    0xa0c0ed9fu, 0x3ef86750u, 0xdd2fe101u, 0x7b675ab2u, 0x199ed463u, 0xb7d64e14u, 0x560dc7c5u, 0xf4454176u,
    0x927cbb27u, 0x30b434d8u, 0xceebae89u, 0x6d23283au, 0x0b5aa1ebu, 0xa9921b9cu, 0x47c9954du, 0xe6010efeu,
    0x843888afu, 0x22700260u, 0xc0a77c11u, 0x5edef5c2u, 0xfd166f73u, 0x9b4de924u, 0x398562d5u, 0xd7bcdc86u,
    0x75f45637u, 0x142bcfe8u, 0xb2634999u, 0x509ac34au, 0xeed23cfbu, 0x8d09b6acu, 0x2b41305du, 0xc978aa0eu,
    0x67b023bfu, 0x05e79d70u, 0xa41f1721u, 0x425690d2u, 0xe08e0a83u, 0x7ec58434u, 0x1cfcfde5u, 0xbb347796u,
};

static const uint32_t bshim_187_tab7[96] = {
    0x864d63a8u, 0x2484dd59u, 0xc2bc570au, 0x60f3d0bbu, 0xff2b4a6cu, 0x9d62c41du, 0x3b9a3dceu, 0xd9d1b77fu,
    0x78093130u, 0x1640aae1u, 0xb4782492u, 0x52af9e43u, 0xf0e717f4u, 0x8f1e91a5u, 0x2d560b56u, 0xcb8d8507u,
    0x69c4feb8u, 0x07fc7869u, 0xa633f21au, 0x446b6bcbu, 0xe2a2e57cu, 0x80da5f2du, 0x1f11d8deu, 0xbd49528fu,
    0x5b80cc40u, 0xf9b845f1u, 0x97efbfa2u, 0x36273953u, 0xd45eb304u, 0x72962cb5u, 0x10cda666u, 0xaf052017u,
    0x4d3c99c8u, 0xeb741379u, 0x89ab8d2au, 0x27e306dbu, 0xc61a808cu, 0x6451fa3du, 0x028973eeu, 0xa0c0ed9fu,
    0x3ef86750u, 0xdd2fe101u, 0x7b675ab2u, 0x199ed463u, 0xb7d64e14u, 0x560dc7c5u, 0xf4454176u, 0x927cbb27u,
    0x30b434d8u, 0xceebae89u, 0x6d23283au, 0x0b5aa1ebu, 0xa9921b9cu, 0x47c9954du, 0xe6010efeu, 0x843888afu,
    0x22700260u, 0xc0a77c11u, 0x5edef5c2u, 0xfd166f73u, 0x9b4de924u, 0x398562d5u, 0xd7bcdc86u, 0x75f45637u,
    0x142bcfe8u, 0xb2634999u, 0x509ac34au, 0xeed23cfbu, 0x8d09b6acu, 0x2b41305du, 0xc978aa0eu, 0x67b023bfu,
    0x05e79d70u, 0xa41f1721u, 0x425690d2u, 0xe08e0a83u, 0x7ec58434u, 0x1cfcfde5u, 0xbb347796u, 0x596bf147u,
    0xf7a36af8u, 0x95dae4a9u, 0x34125e5au, 0xd249d80bu, 0x708151bcu, 0x0eb8cb6du, 0xacf0451eu, 0x4b27becfu,
    0xe95f3880u, 0x8796b231u, 0x25ce2be2u, 0xc405a593u, 0x623d1f44u, 0x007498f5u, 0x9eac12a6u, 0x3ce38c57u,
};

struct bshim_187_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_187_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_187_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_187_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_187_reset(struct bshim_187_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00169895u;
    return 0;
}

