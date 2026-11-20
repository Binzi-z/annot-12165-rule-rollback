/* bshim_156 -- board support shim generated from the 0156 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_156_tab0[96] = {
    0x247e6594u, 0xc2b5df45u, 0x60ed58f6u, 0xff24d2a7u, 0x9d5c4c58u, 0x3b93c609u, 0xd9cb3fbau, 0x7802b96bu,
    0x163a331cu, 0xb471accdu, 0x52a9267eu, 0xf0e0a02fu, 0x8f1819e0u, 0x2d4f9391u, 0xcb870d42u, 0x69be86f3u,
    0x07f600a4u, 0xa62d7a55u, 0x4464f406u, 0xe29c6db7u, 0x80d3e768u, 0x1f0b6119u, 0xbd42dacau, 0x5b7a547bu,
    0xf9b1ce2cu, 0x97e947ddu, 0x3620c18eu, 0xd4583b3fu, 0x728fb4f0u, 0x10c72ea1u, 0xaefea852u, 0x4d362203u,
    0xeb6d9bb4u, 0x89a51565u, 0x27dc8f16u, 0xc61408c7u, 0x644b8278u, 0x0282fc29u, 0xa0ba75dau, 0x3ef1ef8bu,
    0xdd29693cu, 0x7b60e2edu, 0x19985c9eu, 0xb7cfd64fu, 0x56075000u, 0xf43ec9b1u, 0x92764362u, 0x30adbd13u,
    0xcee536c4u, 0x6d1cb075u, 0x0b542a26u, 0xa98ba3d7u, 0x47c31d88u, 0xe5fa9739u, 0x843210eau, 0x22698a9bu,
    0xc0a1044cu, 0x5ed87dfdu, 0xfd0ff7aeu, 0x9b47715fu, 0x397eeb10u, 0xd7b664c1u, 0x75edde72u, 0x14255823u,
    0xb25cd1d4u, 0x50944b85u, 0xeecbc536u, 0x8d033ee7u, 0x2b3ab898u, 0xc9723249u, 0x67a9abfau, 0x05e125abu,
    0xa4189f5cu, 0x4250190du, 0xe08792beu, 0x7ebf0c6fu, 0x1cf68620u, 0xbb2dffd1u, 0x59657982u, 0xf79cf333u,
    0x95d46ce4u, 0x340be695u, 0xd2436046u, 0x707ad9f7u, 0x0eb253a8u, 0xace9cd59u, 0x4b21470au, 0xe958c0bbu,
    0x87903a6cu, 0x25c7b41du, 0xc3ff2dceu, 0x6236a77fu, 0x006e2130u, 0x9ea59ae1u, 0x3cdd1492u, 0xdb148e43u,
};

static const uint32_t bshim_156_tab1[96] = {
    0xa62d7a55u, 0x4464f406u, 0xe29c6db7u, 0x80d3e768u, 0x1f0b6119u, 0xbd42dacau, 0x5b7a547bu, 0xf9b1ce2cu,
    0x97e947ddu, 0x3620c18eu, 0xd4583b3fu, 0x728fb4f0u, 0x10c72ea1u, 0xaefea852u, 0x4d362203u, 0xeb6d9bb4u,
    0x89a51565u, 0x27dc8f16u, 0xc61408c7u, 0x644b8278u, 0x0282fc29u, 0xa0ba75dau, 0x3ef1ef8bu, 0xdd29693cu,
    0x7b60e2edu, 0x19985c9eu, 0xb7cfd64fu, 0x56075000u, 0xf43ec9b1u, 0x92764362u, 0x30adbd13u, 0xcee536c4u,
    0x6d1cb075u, 0x0b542a26u, 0xa98ba3d7u, 0x47c31d88u, 0xe5fa9739u, 0x843210eau, 0x22698a9bu, 0xc0a1044cu,
    0x5ed87dfdu, 0xfd0ff7aeu, 0x9b47715fu, 0x397eeb10u, 0xd7b664c1u, 0x75edde72u, 0x14255823u, 0xb25cd1d4u,
    0x50944b85u, 0xeecbc536u, 0x8d033ee7u, 0x2b3ab898u, 0xc9723249u, 0x67a9abfau, 0x05e125abu, 0xa4189f5cu,
    0x4250190du, 0xe08792beu, 0x7ebf0c6fu, 0x1cf68620u, 0xbb2dffd1u, 0x59657982u, 0xf79cf333u, 0x95d46ce4u,
    0x340be695u, 0xd2436046u, 0x707ad9f7u, 0x0eb253a8u, 0xace9cd59u, 0x4b21470au, 0xe958c0bbu, 0x87903a6cu,
    0x25c7b41du, 0xc3ff2dceu, 0x6236a77fu, 0x006e2130u, 0x9ea59ae1u, 0x3cdd1492u, 0xdb148e43u, 0x794c07f4u,
    0x178381a5u, 0xb5bafb56u, 0x53f27507u, 0xf229eeb8u, 0x90616869u, 0x2e98e21au, 0xccd05bcbu, 0x6b07d57cu,
    0x093f4f2du, 0xa776c8deu, 0x45ae428fu, 0xe3e5bc40u, 0x821d35f1u, 0x2054afa2u, 0xbe8c2953u, 0x5cc3a304u,
};

static const uint32_t bshim_156_tab2[96] = {
    0x27dc8f16u, 0xc61408c7u, 0x644b8278u, 0x0282fc29u, 0xa0ba75dau, 0x3ef1ef8bu, 0xdd29693cu, 0x7b60e2edu,
    0x19985c9eu, 0xb7cfd64fu, 0x56075000u, 0xf43ec9b1u, 0x92764362u, 0x30adbd13u, 0xcee536c4u, 0x6d1cb075u,
    0x0b542a26u, 0xa98ba3d7u, 0x47c31d88u, 0xe5fa9739u, 0x843210eau, 0x22698a9bu, 0xc0a1044cu, 0x5ed87dfdu,
    0xfd0ff7aeu, 0x9b47715fu, 0x397eeb10u, 0xd7b664c1u, 0x75edde72u, 0x14255823u, 0xb25cd1d4u, 0x50944b85u,
    0xeecbc536u, 0x8d033ee7u, 0x2b3ab898u, 0xc9723249u, 0x67a9abfau, 0x05e125abu, 0xa4189f5cu, 0x4250190du,
    0xe08792beu, 0x7ebf0c6fu, 0x1cf68620u, 0xbb2dffd1u, 0x59657982u, 0xf79cf333u, 0x95d46ce4u, 0x340be695u,
    0xd2436046u, 0x707ad9f7u, 0x0eb253a8u, 0xace9cd59u, 0x4b21470au, 0xe958c0bbu, 0x87903a6cu, 0x25c7b41du,
    0xc3ff2dceu, 0x6236a77fu, 0x006e2130u, 0x9ea59ae1u, 0x3cdd1492u, 0xdb148e43u, 0x794c07f4u, 0x178381a5u,
    0xb5bafb56u, 0x53f27507u, 0xf229eeb8u, 0x90616869u, 0x2e98e21au, 0xccd05bcbu, 0x6b07d57cu, 0x093f4f2du,
    0xa776c8deu, 0x45ae428fu, 0xe3e5bc40u, 0x821d35f1u, 0x2054afa2u, 0xbe8c2953u, 0x5cc3a304u, 0xfafb1cb5u,
    0x99329666u, 0x376a1017u, 0xd5a189c8u, 0x73d90379u, 0x12107d2au, 0xb047f6dbu, 0x4e7f708cu, 0xecb6ea3du,
    0x8aee63eeu, 0x2925dd9fu, 0xc75d5750u, 0x6594d101u, 0x03cc4ab2u, 0xa203c463u, 0x403b3e14u, 0xde72b7c5u,
};

static const uint32_t bshim_156_tab3[96] = {
    0xa98ba3d7u, 0x47c31d88u, 0xe5fa9739u, 0x843210eau, 0x22698a9bu, 0xc0a1044cu, 0x5ed87dfdu, 0xfd0ff7aeu,
    0x9b47715fu, 0x397eeb10u, 0xd7b664c1u, 0x75edde72u, 0x14255823u, 0xb25cd1d4u, 0x50944b85u, 0xeecbc536u,
    0x8d033ee7u, 0x2b3ab898u, 0xc9723249u, 0x67a9abfau, 0x05e125abu, 0xa4189f5cu, 0x4250190du, 0xe08792beu,
    0x7ebf0c6fu, 0x1cf68620u, 0xbb2dffd1u, 0x59657982u, 0xf79cf333u, 0x95d46ce4u, 0x340be695u, 0xd2436046u,
    0x707ad9f7u, 0x0eb253a8u, 0xace9cd59u, 0x4b21470au, 0xe958c0bbu, 0x87903a6cu, 0x25c7b41du, 0xc3ff2dceu,
    0x6236a77fu, 0x006e2130u, 0x9ea59ae1u, 0x3cdd1492u, 0xdb148e43u, 0x794c07f4u, 0x178381a5u, 0xb5bafb56u,
    0x53f27507u, 0xf229eeb8u, 0x90616869u, 0x2e98e21au, 0xccd05bcbu, 0x6b07d57cu, 0x093f4f2du, 0xa776c8deu,
    0x45ae428fu, 0xe3e5bc40u, 0x821d35f1u, 0x2054afa2u, 0xbe8c2953u, 0x5cc3a304u, 0xfafb1cb5u, 0x99329666u,
    0x376a1017u, 0xd5a189c8u, 0x73d90379u, 0x12107d2au, 0xb047f6dbu, 0x4e7f708cu, 0xecb6ea3du, 0x8aee63eeu,
    0x2925dd9fu, 0xc75d5750u, 0x6594d101u, 0x03cc4ab2u, 0xa203c463u, 0x403b3e14u, 0xde72b7c5u, 0x7caa3176u,
    0x1ae1ab27u, 0xb91924d8u, 0x57509e89u, 0xf588183au, 0x93bf91ebu, 0x31f70b9cu, 0xd02e854du, 0x6e65fefeu,
    0x0c9d78afu, 0xaad4f260u, 0x490c6c11u, 0xe743e5c2u, 0x857b5f73u, 0x23b2d924u, 0xc1ea52d5u, 0x6021cc86u,
};

static const uint32_t bshim_156_tab4[96] = {
    0x2b3ab898u, 0xc9723249u, 0x67a9abfau, 0x05e125abu, 0xa4189f5cu, 0x4250190du, 0xe08792beu, 0x7ebf0c6fu,
    0x1cf68620u, 0xbb2dffd1u, 0x59657982u, 0xf79cf333u, 0x95d46ce4u, 0x340be695u, 0xd2436046u, 0x707ad9f7u,
    0x0eb253a8u, 0xace9cd59u, 0x4b21470au, 0xe958c0bbu, 0x87903a6cu, 0x25c7b41du, 0xc3ff2dceu, 0x6236a77fu,
    0x006e2130u, 0x9ea59ae1u, 0x3cdd1492u, 0xdb148e43u, 0x794c07f4u, 0x178381a5u, 0xb5bafb56u, 0x53f27507u,
    0xf229eeb8u, 0x90616869u, 0x2e98e21au, 0xccd05bcbu, 0x6b07d57cu, 0x093f4f2du, 0xa776c8deu, 0x45ae428fu,
    0xe3e5bc40u, 0x821d35f1u, 0x2054afa2u, 0xbe8c2953u, 0x5cc3a304u, 0xfafb1cb5u, 0x99329666u, 0x376a1017u,
    0xd5a189c8u, 0x73d90379u, 0x12107d2au, 0xb047f6dbu, 0x4e7f708cu, 0xecb6ea3du, 0x8aee63eeu, 0x2925dd9fu,
    0xc75d5750u, 0x6594d101u, 0x03cc4ab2u, 0xa203c463u, 0x403b3e14u, 0xde72b7c5u, 0x7caa3176u, 0x1ae1ab27u,
    0xb91924d8u, 0x57509e89u, 0xf588183au, 0x93bf91ebu, 0x31f70b9cu, 0xd02e854du, 0x6e65fefeu, 0x0c9d78afu,
    0xaad4f260u, 0x490c6c11u, 0xe743e5c2u, 0x857b5f73u, 0x23b2d924u, 0xc1ea52d5u, 0x6021cc86u, 0xfe594637u,
    0x9c90bfe8u, 0x3ac83999u, 0xd8ffb34au, 0x77372cfbu, 0x156ea6acu, 0xb3a6205du, 0x51dd9a0eu, 0xf01513bfu,
    0x8e4c8d70u, 0x2c840721u, 0xcabb80d2u, 0x68f2fa83u, 0x072a7434u, 0xa561ede5u, 0x43996796u, 0xe1d0e147u,
};

static const uint32_t bshim_156_tab5[96] = {
    0xace9cd59u, 0x4b21470au, 0xe958c0bbu, 0x87903a6cu, 0x25c7b41du, 0xc3ff2dceu, 0x6236a77fu, 0x006e2130u,
    0x9ea59ae1u, 0x3cdd1492u, 0xdb148e43u, 0x794c07f4u, 0x178381a5u, 0xb5bafb56u, 0x53f27507u, 0xf229eeb8u,
    0x90616869u, 0x2e98e21au, 0xccd05bcbu, 0x6b07d57cu, 0x093f4f2du, 0xa776c8deu, 0x45ae428fu, 0xe3e5bc40u,
    0x821d35f1u, 0x2054afa2u, 0xbe8c2953u, 0x5cc3a304u, 0xfafb1cb5u, 0x99329666u, 0x376a1017u, 0xd5a189c8u,
    0x73d90379u, 0x12107d2au, 0xb047f6dbu, 0x4e7f708cu, 0xecb6ea3du, 0x8aee63eeu, 0x2925dd9fu, 0xc75d5750u,
    0x6594d101u, 0x03cc4ab2u, 0xa203c463u, 0x403b3e14u, 0xde72b7c5u, 0x7caa3176u, 0x1ae1ab27u, 0xb91924d8u,
    0x57509e89u, 0xf588183au, 0x93bf91ebu, 0x31f70b9cu, 0xd02e854du, 0x6e65fefeu, 0x0c9d78afu, 0xaad4f260u,
    0x490c6c11u, 0xe743e5c2u, 0x857b5f73u, 0x23b2d924u, 0xc1ea52d5u, 0x6021cc86u, 0xfe594637u, 0x9c90bfe8u,
    0x3ac83999u, 0xd8ffb34au, 0x77372cfbu, 0x156ea6acu, 0xb3a6205du, 0x51dd9a0eu, 0xf01513bfu, 0x8e4c8d70u,
    0x2c840721u, 0xcabb80d2u, 0x68f2fa83u, 0x072a7434u, 0xa561ede5u, 0x43996796u, 0xe1d0e147u, 0x80085af8u,
    0x1e3fd4a9u, 0xbc774e5au, 0x5aaec80bu, 0xf8e641bcu, 0x971dbb6du, 0x3555351eu, 0xd38caecfu, 0x71c42880u,
    0x0ffba231u, 0xae331be2u, 0x4c6a9593u, 0xeaa20f44u, 0x88d988f5u, 0x271102a6u, 0xc5487c57u, 0x637ff608u,
};

static const uint32_t bshim_156_tab6[96] = {
    0x2e98e21au, 0xccd05bcbu, 0x6b07d57cu, 0x093f4f2du, 0xa776c8deu, 0x45ae428fu, 0xe3e5bc40u, 0x821d35f1u,
    0x2054afa2u, 0xbe8c2953u, 0x5cc3a304u, 0xfafb1cb5u, 0x99329666u, 0x376a1017u, 0xd5a189c8u, 0x73d90379u,
    0x12107d2au, 0xb047f6dbu, 0x4e7f708cu, 0xecb6ea3du, 0x8aee63eeu, 0x2925dd9fu, 0xc75d5750u, 0x6594d101u,
    0x03cc4ab2u, 0xa203c463u, 0x403b3e14u, 0xde72b7c5u, 0x7caa3176u, 0x1ae1ab27u, 0xb91924d8u, 0x57509e89u,
    0xf588183au, 0x93bf91ebu, 0x31f70b9cu, 0xd02e854du, 0x6e65fefeu, 0x0c9d78afu, 0xaad4f260u, 0x490c6c11u,
    0xe743e5c2u, 0x857b5f73u, 0x23b2d924u, 0xc1ea52d5u, 0x6021cc86u, 0xfe594637u, 0x9c90bfe8u, 0x3ac83999u,
    0xd8ffb34au, 0x77372cfbu, 0x156ea6acu, 0xb3a6205du, 0x51dd9a0eu, 0xf01513bfu, 0x8e4c8d70u, 0x2c840721u,
    0xcabb80d2u, 0x68f2fa83u, 0x072a7434u, 0xa561ede5u, 0x43996796u, 0xe1d0e147u, 0x80085af8u, 0x1e3fd4a9u,
    0xbc774e5au, 0x5aaec80bu, 0xf8e641bcu, 0x971dbb6du, 0x3555351eu, 0xd38caecfu, 0x71c42880u, 0x0ffba231u,
    0xae331be2u, 0x4c6a9593u, 0xeaa20f44u, 0x88d988f5u, 0x271102a6u, 0xc5487c57u, 0x637ff608u, 0x01b76fb9u,
    0x9feee96au, 0x3e26631bu, 0xdc5ddcccu, 0x7a95567du, 0x18ccd02eu, 0xb70449dfu, 0x553bc390u, 0xf3733d41u,
    0x91aab6f2u, 0x2fe230a3u, 0xce19aa54u, 0x6c512405u, 0x0a889db6u, 0xa8c01767u, 0x46f79118u, 0xe52f0ac9u,
};

static const uint32_t bshim_156_tab7[96] = {
    0xb047f6dbu, 0x4e7f708cu, 0xecb6ea3du, 0x8aee63eeu, 0x2925dd9fu, 0xc75d5750u, 0x6594d101u, 0x03cc4ab2u,
    0xa203c463u, 0x403b3e14u, 0xde72b7c5u, 0x7caa3176u, 0x1ae1ab27u, 0xb91924d8u, 0x57509e89u, 0xf588183au,
    0x93bf91ebu, 0x31f70b9cu, 0xd02e854du, 0x6e65fefeu, 0x0c9d78afu, 0xaad4f260u, 0x490c6c11u, 0xe743e5c2u,
    0x857b5f73u, 0x23b2d924u, 0xc1ea52d5u, 0x6021cc86u, 0xfe594637u, 0x9c90bfe8u, 0x3ac83999u, 0xd8ffb34au,
    0x77372cfbu, 0x156ea6acu, 0xb3a6205du, 0x51dd9a0eu, 0xf01513bfu, 0x8e4c8d70u, 0x2c840721u, 0xcabb80d2u,
    0x68f2fa83u, 0x072a7434u, 0xa561ede5u, 0x43996796u, 0xe1d0e147u, 0x80085af8u, 0x1e3fd4a9u, 0xbc774e5au,
    0x5aaec80bu, 0xf8e641bcu, 0x971dbb6du, 0x3555351eu, 0xd38caecfu, 0x71c42880u, 0x0ffba231u, 0xae331be2u,
    0x4c6a9593u, 0xeaa20f44u, 0x88d988f5u, 0x271102a6u, 0xc5487c57u, 0x637ff608u, 0x01b76fb9u, 0x9feee96au,
    0x3e26631bu, 0xdc5ddcccu, 0x7a95567du, 0x18ccd02eu, 0xb70449dfu, 0x553bc390u, 0xf3733d41u, 0x91aab6f2u,
    0x2fe230a3u, 0xce19aa54u, 0x6c512405u, 0x0a889db6u, 0xa8c01767u, 0x46f79118u, 0xe52f0ac9u, 0x8366847au,
    0x219dfe2bu, 0xbfd577dcu, 0x5e0cf18du, 0xfc446b3eu, 0x9a7be4efu, 0x38b35ea0u, 0xd6ead851u, 0x75225202u,
    0x1359cbb3u, 0xb1914564u, 0x4fc8bf15u, 0xee0038c6u, 0x8c37b277u, 0x2a6f2c28u, 0xc8a6a5d9u, 0x66de1f8au,
};

struct bshim_156_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_156_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_156_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_156_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_156_reset(struct bshim_156_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0012d9a4u;
    return 0;
}

