/* bshim_250 -- board support shim generated from the 0250 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_250_tab0[96] = {
    0x9cf1f18eu, 0x3b296b3fu, 0xd960e4f0u, 0x77985ea1u, 0x15cfd852u, 0xb4075203u, 0x523ecbb4u, 0xf0764565u,
    0x8eadbf16u, 0x2ce538c7u, 0xcb1cb278u, 0x69542c29u, 0x078ba5dau, 0xa5c31f8bu, 0x43fa993cu, 0xe23212edu,
    0x80698c9eu, 0x1ea1064fu, 0xbcd88000u, 0x5b0ff9b1u, 0xf9477362u, 0x977eed13u, 0x35b666c4u, 0xd3ede075u,
    0x72255a26u, 0x105cd3d7u, 0xae944d88u, 0x4ccbc739u, 0xeb0340eau, 0x893aba9bu, 0x2772344cu, 0xc5a9adfdu,
    0x63e127aeu, 0x0218a15fu, 0xa0501b10u, 0x3e8794c1u, 0xdcbf0e72u, 0x7af68823u, 0x192e01d4u, 0xb7657b85u,
    0x559cf536u, 0xf3d46ee7u, 0x920be898u, 0x30436249u, 0xce7adbfau, 0x6cb255abu, 0x0ae9cf5cu, 0xa921490du,
    0x4758c2beu, 0xe5903c6fu, 0x83c7b620u, 0x21ff2fd1u, 0xc036a982u, 0x5e6e2333u, 0xfca59ce4u, 0x9add1695u,
    0x39149046u, 0xd74c09f7u, 0x758383a8u, 0x13bafd59u, 0xb1f2770au, 0x5029f0bbu, 0xee616a6cu, 0x8c98e41du,
    0x2ad05dceu, 0xc907d77fu, 0x673f5130u, 0x0576cae1u, 0xa3ae4492u, 0x41e5be43u, 0xe01d37f4u, 0x7e54b1a5u,
    0x1c8c2b56u, 0xbac3a507u, 0x58fb1eb8u, 0xf7329869u, 0x956a121au, 0x33a18bcbu, 0xd1d9057cu, 0x70107f2du,
    0x0e47f8deu, 0xac7f728fu, 0x4ab6ec40u, 0xe8ee65f1u, 0x8725dfa2u, 0x255d5953u, 0xc394d304u, 0x61cc4cb5u,
    0x0003c666u, 0x9e3b4017u, 0x3c72b9c8u, 0xdaaa3379u, 0x78e1ad2au, 0x171926dbu, 0xb550a08cu, 0x53881a3du,
};

static const uint32_t bshim_250_tab1[96] = {
    0x1ea1064fu, 0xbcd88000u, 0x5b0ff9b1u, 0xf9477362u, 0x977eed13u, 0x35b666c4u, 0xd3ede075u, 0x72255a26u,
    0x105cd3d7u, 0xae944d88u, 0x4ccbc739u, 0xeb0340eau, 0x893aba9bu, 0x2772344cu, 0xc5a9adfdu, 0x63e127aeu,
    0x0218a15fu, 0xa0501b10u, 0x3e8794c1u, 0xdcbf0e72u, 0x7af68823u, 0x192e01d4u, 0xb7657b85u, 0x559cf536u,
    0xf3d46ee7u, 0x920be898u, 0x30436249u, 0xce7adbfau, 0x6cb255abu, 0x0ae9cf5cu, 0xa921490du, 0x4758c2beu,
    0xe5903c6fu, 0x83c7b620u, 0x21ff2fd1u, 0xc036a982u, 0x5e6e2333u, 0xfca59ce4u, 0x9add1695u, 0x39149046u,
    0xd74c09f7u, 0x758383a8u, 0x13bafd59u, 0xb1f2770au, 0x5029f0bbu, 0xee616a6cu, 0x8c98e41du, 0x2ad05dceu,
    0xc907d77fu, 0x673f5130u, 0x0576cae1u, 0xa3ae4492u, 0x41e5be43u, 0xe01d37f4u, 0x7e54b1a5u, 0x1c8c2b56u,
    0xbac3a507u, 0x58fb1eb8u, 0xf7329869u, 0x956a121au, 0x33a18bcbu, 0xd1d9057cu, 0x70107f2du, 0x0e47f8deu,
    0xac7f728fu, 0x4ab6ec40u, 0xe8ee65f1u, 0x8725dfa2u, 0x255d5953u, 0xc394d304u, 0x61cc4cb5u, 0x0003c666u,
    0x9e3b4017u, 0x3c72b9c8u, 0xdaaa3379u, 0x78e1ad2au, 0x171926dbu, 0xb550a08cu, 0x53881a3du, 0xf1bf93eeu,
    0x8ff70d9fu, 0x2e2e8750u, 0xcc660101u, 0x6a9d7ab2u, 0x08d4f463u, 0xa70c6e14u, 0x4543e7c5u, 0xe37b6176u,
    0x81b2db27u, 0x1fea54d8u, 0xbe21ce89u, 0x5c59483au, 0xfa90c1ebu, 0x98c83b9cu, 0x36ffb54du, 0xd5372efeu,
};

static const uint32_t bshim_250_tab2[96] = {
    0xa0501b10u, 0x3e8794c1u, 0xdcbf0e72u, 0x7af68823u, 0x192e01d4u, 0xb7657b85u, 0x559cf536u, 0xf3d46ee7u,
    0x920be898u, 0x30436249u, 0xce7adbfau, 0x6cb255abu, 0x0ae9cf5cu, 0xa921490du, 0x4758c2beu, 0xe5903c6fu,
    0x83c7b620u, 0x21ff2fd1u, 0xc036a982u, 0x5e6e2333u, 0xfca59ce4u, 0x9add1695u, 0x39149046u, 0xd74c09f7u,
    0x758383a8u, 0x13bafd59u, 0xb1f2770au, 0x5029f0bbu, 0xee616a6cu, 0x8c98e41du, 0x2ad05dceu, 0xc907d77fu,
    0x673f5130u, 0x0576cae1u, 0xa3ae4492u, 0x41e5be43u, 0xe01d37f4u, 0x7e54b1a5u, 0x1c8c2b56u, 0xbac3a507u,
    0x58fb1eb8u, 0xf7329869u, 0x956a121au, 0x33a18bcbu, 0xd1d9057cu, 0x70107f2du, 0x0e47f8deu, 0xac7f728fu,
    0x4ab6ec40u, 0xe8ee65f1u, 0x8725dfa2u, 0x255d5953u, 0xc394d304u, 0x61cc4cb5u, 0x0003c666u, 0x9e3b4017u,
    0x3c72b9c8u, 0xdaaa3379u, 0x78e1ad2au, 0x171926dbu, 0xb550a08cu, 0x53881a3du, 0xf1bf93eeu, 0x8ff70d9fu,
    0x2e2e8750u, 0xcc660101u, 0x6a9d7ab2u, 0x08d4f463u, 0xa70c6e14u, 0x4543e7c5u, 0xe37b6176u, 0x81b2db27u,
    0x1fea54d8u, 0xbe21ce89u, 0x5c59483au, 0xfa90c1ebu, 0x98c83b9cu, 0x36ffb54du, 0xd5372efeu, 0x736ea8afu,
    0x11a62260u, 0xafdd9c11u, 0x4e1515c2u, 0xec4c8f73u, 0x8a840924u, 0x28bb82d5u, 0xc6f2fc86u, 0x652a7637u,
    0x0361efe8u, 0xa1996999u, 0x3fd0e34au, 0xde085cfbu, 0x7c3fd6acu, 0x1a77505du, 0xb8aeca0eu, 0x56e643bfu,
};

static const uint32_t bshim_250_tab3[96] = {
    0x21ff2fd1u, 0xc036a982u, 0x5e6e2333u, 0xfca59ce4u, 0x9add1695u, 0x39149046u, 0xd74c09f7u, 0x758383a8u,
    0x13bafd59u, 0xb1f2770au, 0x5029f0bbu, 0xee616a6cu, 0x8c98e41du, 0x2ad05dceu, 0xc907d77fu, 0x673f5130u,
    0x0576cae1u, 0xa3ae4492u, 0x41e5be43u, 0xe01d37f4u, 0x7e54b1a5u, 0x1c8c2b56u, 0xbac3a507u, 0x58fb1eb8u,
    0xf7329869u, 0x956a121au, 0x33a18bcbu, 0xd1d9057cu, 0x70107f2du, 0x0e47f8deu, 0xac7f728fu, 0x4ab6ec40u,
    0xe8ee65f1u, 0x8725dfa2u, 0x255d5953u, 0xc394d304u, 0x61cc4cb5u, 0x0003c666u, 0x9e3b4017u, 0x3c72b9c8u,
    0xdaaa3379u, 0x78e1ad2au, 0x171926dbu, 0xb550a08cu, 0x53881a3du, 0xf1bf93eeu, 0x8ff70d9fu, 0x2e2e8750u,
    0xcc660101u, 0x6a9d7ab2u, 0x08d4f463u, 0xa70c6e14u, 0x4543e7c5u, 0xe37b6176u, 0x81b2db27u, 0x1fea54d8u,
    0xbe21ce89u, 0x5c59483au, 0xfa90c1ebu, 0x98c83b9cu, 0x36ffb54du, 0xd5372efeu, 0x736ea8afu, 0x11a62260u,
    0xafdd9c11u, 0x4e1515c2u, 0xec4c8f73u, 0x8a840924u, 0x28bb82d5u, 0xc6f2fc86u, 0x652a7637u, 0x0361efe8u,
    0xa1996999u, 0x3fd0e34au, 0xde085cfbu, 0x7c3fd6acu, 0x1a77505du, 0xb8aeca0eu, 0x56e643bfu, 0xf51dbd70u,
    0x93553721u, 0x318cb0d2u, 0xcfc42a83u, 0x6dfba434u, 0x0c331de5u, 0xaa6a9796u, 0x48a21147u, 0xe6d98af8u,
    0x851104a9u, 0x23487e5au, 0xc17ff80bu, 0x5fb771bcu, 0xfdeeeb6du, 0x9c26651eu, 0x3a5ddecfu, 0xd8955880u,
};

static const uint32_t bshim_250_tab4[96] = {
    0xa3ae4492u, 0x41e5be43u, 0xe01d37f4u, 0x7e54b1a5u, 0x1c8c2b56u, 0xbac3a507u, 0x58fb1eb8u, 0xf7329869u,
    0x956a121au, 0x33a18bcbu, 0xd1d9057cu, 0x70107f2du, 0x0e47f8deu, 0xac7f728fu, 0x4ab6ec40u, 0xe8ee65f1u,
    0x8725dfa2u, 0x255d5953u, 0xc394d304u, 0x61cc4cb5u, 0x0003c666u, 0x9e3b4017u, 0x3c72b9c8u, 0xdaaa3379u,
    0x78e1ad2au, 0x171926dbu, 0xb550a08cu, 0x53881a3du, 0xf1bf93eeu, 0x8ff70d9fu, 0x2e2e8750u, 0xcc660101u,
    0x6a9d7ab2u, 0x08d4f463u, 0xa70c6e14u, 0x4543e7c5u, 0xe37b6176u, 0x81b2db27u, 0x1fea54d8u, 0xbe21ce89u,
    0x5c59483au, 0xfa90c1ebu, 0x98c83b9cu, 0x36ffb54du, 0xd5372efeu, 0x736ea8afu, 0x11a62260u, 0xafdd9c11u,
    0x4e1515c2u, 0xec4c8f73u, 0x8a840924u, 0x28bb82d5u, 0xc6f2fc86u, 0x652a7637u, 0x0361efe8u, 0xa1996999u,
    0x3fd0e34au, 0xde085cfbu, 0x7c3fd6acu, 0x1a77505du, 0xb8aeca0eu, 0x56e643bfu, 0xf51dbd70u, 0x93553721u,
    0x318cb0d2u, 0xcfc42a83u, 0x6dfba434u, 0x0c331de5u, 0xaa6a9796u, 0x48a21147u, 0xe6d98af8u, 0x851104a9u,
    0x23487e5au, 0xc17ff80bu, 0x5fb771bcu, 0xfdeeeb6du, 0x9c26651eu, 0x3a5ddecfu, 0xd8955880u, 0x76ccd231u,
    0x15044be2u, 0xb33bc593u, 0x51733f44u, 0xefaab8f5u, 0x8de232a6u, 0x2c19ac57u, 0xca512608u, 0x68889fb9u,
    0x06c0196au, 0xa4f7931bu, 0x432f0cccu, 0xe166867du, 0x7f9e002eu, 0x1dd579dfu, 0xbc0cf390u, 0x5a446d41u,
};

static const uint32_t bshim_250_tab5[96] = {
    0x255d5953u, 0xc394d304u, 0x61cc4cb5u, 0x0003c666u, 0x9e3b4017u, 0x3c72b9c8u, 0xdaaa3379u, 0x78e1ad2au,
    0x171926dbu, 0xb550a08cu, 0x53881a3du, 0xf1bf93eeu, 0x8ff70d9fu, 0x2e2e8750u, 0xcc660101u, 0x6a9d7ab2u,
    0x08d4f463u, 0xa70c6e14u, 0x4543e7c5u, 0xe37b6176u, 0x81b2db27u, 0x1fea54d8u, 0xbe21ce89u, 0x5c59483au,
    0xfa90c1ebu, 0x98c83b9cu, 0x36ffb54du, 0xd5372efeu, 0x736ea8afu, 0x11a62260u, 0xafdd9c11u, 0x4e1515c2u,
    0xec4c8f73u, 0x8a840924u, 0x28bb82d5u, 0xc6f2fc86u, 0x652a7637u, 0x0361efe8u, 0xa1996999u, 0x3fd0e34au,
    0xde085cfbu, 0x7c3fd6acu, 0x1a77505du, 0xb8aeca0eu, 0x56e643bfu, 0xf51dbd70u, 0x93553721u, 0x318cb0d2u,
    0xcfc42a83u, 0x6dfba434u, 0x0c331de5u, 0xaa6a9796u, 0x48a21147u, 0xe6d98af8u, 0x851104a9u, 0x23487e5au,
    0xc17ff80bu, 0x5fb771bcu, 0xfdeeeb6du, 0x9c26651eu, 0x3a5ddecfu, 0xd8955880u, 0x76ccd231u, 0x15044be2u,
    0xb33bc593u, 0x51733f44u, 0xefaab8f5u, 0x8de232a6u, 0x2c19ac57u, 0xca512608u, 0x68889fb9u, 0x06c0196au,
    0xa4f7931bu, 0x432f0cccu, 0xe166867du, 0x7f9e002eu, 0x1dd579dfu, 0xbc0cf390u, 0x5a446d41u, 0xf87be6f2u,
    0x96b360a3u, 0x34eada54u, 0xd3225405u, 0x7159cdb6u, 0x0f914767u, 0xadc8c118u, 0x4c003ac9u, 0xea37b47au,
    0x886f2e2bu, 0x26a6a7dcu, 0xc4de218du, 0x63159b3eu, 0x014d14efu, 0x9f848ea0u, 0x3dbc0851u, 0xdbf38202u,
};

static const uint32_t bshim_250_tab6[96] = {
    0xa70c6e14u, 0x4543e7c5u, 0xe37b6176u, 0x81b2db27u, 0x1fea54d8u, 0xbe21ce89u, 0x5c59483au, 0xfa90c1ebu,
    0x98c83b9cu, 0x36ffb54du, 0xd5372efeu, 0x736ea8afu, 0x11a62260u, 0xafdd9c11u, 0x4e1515c2u, 0xec4c8f73u,
    0x8a840924u, 0x28bb82d5u, 0xc6f2fc86u, 0x652a7637u, 0x0361efe8u, 0xa1996999u, 0x3fd0e34au, 0xde085cfbu,
    0x7c3fd6acu, 0x1a77505du, 0xb8aeca0eu, 0x56e643bfu, 0xf51dbd70u, 0x93553721u, 0x318cb0d2u, 0xcfc42a83u,
    0x6dfba434u, 0x0c331de5u, 0xaa6a9796u, 0x48a21147u, 0xe6d98af8u, 0x851104a9u, 0x23487e5au, 0xc17ff80bu,
    0x5fb771bcu, 0xfdeeeb6du, 0x9c26651eu, 0x3a5ddecfu, 0xd8955880u, 0x76ccd231u, 0x15044be2u, 0xb33bc593u,
    0x51733f44u, 0xefaab8f5u, 0x8de232a6u, 0x2c19ac57u, 0xca512608u, 0x68889fb9u, 0x06c0196au, 0xa4f7931bu,
    0x432f0cccu, 0xe166867du, 0x7f9e002eu, 0x1dd579dfu, 0xbc0cf390u, 0x5a446d41u, 0xf87be6f2u, 0x96b360a3u,
    0x34eada54u, 0xd3225405u, 0x7159cdb6u, 0x0f914767u, 0xadc8c118u, 0x4c003ac9u, 0xea37b47au, 0x886f2e2bu,
    0x26a6a7dcu, 0xc4de218du, 0x63159b3eu, 0x014d14efu, 0x9f848ea0u, 0x3dbc0851u, 0xdbf38202u, 0x7a2afbb3u,
    0x18627564u, 0xb699ef15u, 0x54d168c6u, 0xf308e277u, 0x91405c28u, 0x2f77d5d9u, 0xcdaf4f8au, 0x6be6c93bu,
    0x0a1e42ecu, 0xa855bc9du, 0x468d364eu, 0xe4c4afffu, 0x82fc29b0u, 0x2133a361u, 0xbf6b1d12u, 0x5da296c3u,
};

static const uint32_t bshim_250_tab7[96] = {
    0x28bb82d5u, 0xc6f2fc86u, 0x652a7637u, 0x0361efe8u, 0xa1996999u, 0x3fd0e34au, 0xde085cfbu, 0x7c3fd6acu,
    0x1a77505du, 0xb8aeca0eu, 0x56e643bfu, 0xf51dbd70u, 0x93553721u, 0x318cb0d2u, 0xcfc42a83u, 0x6dfba434u,
    0x0c331de5u, 0xaa6a9796u, 0x48a21147u, 0xe6d98af8u, 0x851104a9u, 0x23487e5au, 0xc17ff80bu, 0x5fb771bcu,
    0xfdeeeb6du, 0x9c26651eu, 0x3a5ddecfu, 0xd8955880u, 0x76ccd231u, 0x15044be2u, 0xb33bc593u, 0x51733f44u,
    0xefaab8f5u, 0x8de232a6u, 0x2c19ac57u, 0xca512608u, 0x68889fb9u, 0x06c0196au, 0xa4f7931bu, 0x432f0cccu,
    0xe166867du, 0x7f9e002eu, 0x1dd579dfu, 0xbc0cf390u, 0x5a446d41u, 0xf87be6f2u, 0x96b360a3u, 0x34eada54u,
    0xd3225405u, 0x7159cdb6u, 0x0f914767u, 0xadc8c118u, 0x4c003ac9u, 0xea37b47au, 0x886f2e2bu, 0x26a6a7dcu,
    0xc4de218du, 0x63159b3eu, 0x014d14efu, 0x9f848ea0u, 0x3dbc0851u, 0xdbf38202u, 0x7a2afbb3u, 0x18627564u,
    0xb699ef15u, 0x54d168c6u, 0xf308e277u, 0x91405c28u, 0x2f77d5d9u, 0xcdaf4f8au, 0x6be6c93bu, 0x0a1e42ecu,
    0xa855bc9du, 0x468d364eu, 0xe4c4afffu, 0x82fc29b0u, 0x2133a361u, 0xbf6b1d12u, 0x5da296c3u, 0xfbda1074u,
    0x9a118a25u, 0x384903d6u, 0xd6807d87u, 0x74b7f738u, 0x12ef70e9u, 0xb126ea9au, 0x4f5e644bu, 0xed95ddfcu,
    0x8bcd57adu, 0x2a04d15eu, 0xc83c4b0fu, 0x6673c4c0u, 0x04ab3e71u, 0xa2e2b822u, 0x411a31d3u, 0xdf51ab84u,
};

struct bshim_250_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_250_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_250_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_250_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_250_reset(struct bshim_250_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001e3566u;
    return 0;
}

