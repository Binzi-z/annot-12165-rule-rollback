/* bshim_034 -- board support shim generated from the 0034 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_034_tab0[96] = {
    0xb92f3d86u, 0x5766b737u, 0xf59e30e8u, 0x93d5aa99u, 0x320d244au, 0xd0449dfbu, 0x6e7c17acu, 0x0cb3915du,
    0xaaeb0b0eu, 0x492284bfu, 0xe759fe70u, 0x85917821u, 0x23c8f1d2u, 0xc2006b83u, 0x6037e534u, 0xfe6f5ee5u,
    0x9ca6d896u, 0x3ade5247u, 0xd915cbf8u, 0x774d45a9u, 0x1584bf5au, 0xb3bc390bu, 0x51f3b2bcu, 0xf02b2c6du,
    0x8e62a61eu, 0x2c9a1fcfu, 0xcad19980u, 0x69091331u, 0x07408ce2u, 0xa5780693u, 0x43af8044u, 0xe1e6f9f5u,
    0x801e73a6u, 0x1e55ed57u, 0xbc8d6708u, 0x5ac4e0b9u, 0xf8fc5a6au, 0x9733d41bu, 0x356b4dccu, 0xd3a2c77du,
    0x71da412eu, 0x1011badfu, 0xae493490u, 0x4c80ae41u, 0xeab827f2u, 0x88efa1a3u, 0x27271b54u, 0xc55e9505u,
    0x63960eb6u, 0x01cd8867u, 0xa0050218u, 0x3e3c7bc9u, 0xdc73f57au, 0x7aab6f2bu, 0x18e2e8dcu, 0xb71a628du,
    0x5551dc3eu, 0xf38955efu, 0x91c0cfa0u, 0x2ff84951u, 0xce2fc302u, 0x6c673cb3u, 0x0a9eb664u, 0xa8d63015u,
    0x470da9c6u, 0xe5452377u, 0x837c9d28u, 0x21b416d9u, 0xbfeb908au, 0x5e230a3bu, 0xfc5a83ecu, 0x9a91fd9du,
    0x38c9774eu, 0xd700f0ffu, 0x75386ab0u, 0x136fe461u, 0xb1a75e12u, 0x4fded7c3u, 0xee165174u, 0x8c4dcb25u,
    0x2a8544d6u, 0xc8bcbe87u, 0x66f43838u, 0x052bb1e9u, 0xa3632b9au, 0x419aa54bu, 0xdfd21efcu, 0x7e0998adu,
    0x1c41125eu, 0xba788c0fu, 0x58b005c0u, 0xf6e77f71u, 0x951ef922u, 0x335672d3u, 0xd18dec84u, 0x6fc56635u,
};

static const uint32_t bshim_034_tab1[96] = {
    0x3ade5247u, 0xd915cbf8u, 0x774d45a9u, 0x1584bf5au, 0xb3bc390bu, 0x51f3b2bcu, 0xf02b2c6du, 0x8e62a61eu,
    0x2c9a1fcfu, 0xcad19980u, 0x69091331u, 0x07408ce2u, 0xa5780693u, 0x43af8044u, 0xe1e6f9f5u, 0x801e73a6u,
    0x1e55ed57u, 0xbc8d6708u, 0x5ac4e0b9u, 0xf8fc5a6au, 0x9733d41bu, 0x356b4dccu, 0xd3a2c77du, 0x71da412eu,
    0x1011badfu, 0xae493490u, 0x4c80ae41u, 0xeab827f2u, 0x88efa1a3u, 0x27271b54u, 0xc55e9505u, 0x63960eb6u,
    0x01cd8867u, 0xa0050218u, 0x3e3c7bc9u, 0xdc73f57au, 0x7aab6f2bu, 0x18e2e8dcu, 0xb71a628du, 0x5551dc3eu,
    0xf38955efu, 0x91c0cfa0u, 0x2ff84951u, 0xce2fc302u, 0x6c673cb3u, 0x0a9eb664u, 0xa8d63015u, 0x470da9c6u,
    0xe5452377u, 0x837c9d28u, 0x21b416d9u, 0xbfeb908au, 0x5e230a3bu, 0xfc5a83ecu, 0x9a91fd9du, 0x38c9774eu,
    0xd700f0ffu, 0x75386ab0u, 0x136fe461u, 0xb1a75e12u, 0x4fded7c3u, 0xee165174u, 0x8c4dcb25u, 0x2a8544d6u,
    0xc8bcbe87u, 0x66f43838u, 0x052bb1e9u, 0xa3632b9au, 0x419aa54bu, 0xdfd21efcu, 0x7e0998adu, 0x1c41125eu,
    0xba788c0fu, 0x58b005c0u, 0xf6e77f71u, 0x951ef922u, 0x335672d3u, 0xd18dec84u, 0x6fc56635u, 0x0dfcdfe6u,
    0xac345997u, 0x4a6bd348u, 0xe8a34cf9u, 0x86dac6aau, 0x2512405bu, 0xc349ba0cu, 0x618133bdu, 0xffb8ad6eu,
    0x9df0271fu, 0x3c27a0d0u, 0xda5f1a81u, 0x78969432u, 0x16ce0de3u, 0xb5058794u, 0x533d0145u, 0xf1747af6u,
};

static const uint32_t bshim_034_tab2[96] = {
    0xbc8d6708u, 0x5ac4e0b9u, 0xf8fc5a6au, 0x9733d41bu, 0x356b4dccu, 0xd3a2c77du, 0x71da412eu, 0x1011badfu,
    0xae493490u, 0x4c80ae41u, 0xeab827f2u, 0x88efa1a3u, 0x27271b54u, 0xc55e9505u, 0x63960eb6u, 0x01cd8867u,
    0xa0050218u, 0x3e3c7bc9u, 0xdc73f57au, 0x7aab6f2bu, 0x18e2e8dcu, 0xb71a628du, 0x5551dc3eu, 0xf38955efu,
    0x91c0cfa0u, 0x2ff84951u, 0xce2fc302u, 0x6c673cb3u, 0x0a9eb664u, 0xa8d63015u, 0x470da9c6u, 0xe5452377u,
    0x837c9d28u, 0x21b416d9u, 0xbfeb908au, 0x5e230a3bu, 0xfc5a83ecu, 0x9a91fd9du, 0x38c9774eu, 0xd700f0ffu,
    0x75386ab0u, 0x136fe461u, 0xb1a75e12u, 0x4fded7c3u, 0xee165174u, 0x8c4dcb25u, 0x2a8544d6u, 0xc8bcbe87u,
    0x66f43838u, 0x052bb1e9u, 0xa3632b9au, 0x419aa54bu, 0xdfd21efcu, 0x7e0998adu, 0x1c41125eu, 0xba788c0fu,
    0x58b005c0u, 0xf6e77f71u, 0x951ef922u, 0x335672d3u, 0xd18dec84u, 0x6fc56635u, 0x0dfcdfe6u, 0xac345997u,
    0x4a6bd348u, 0xe8a34cf9u, 0x86dac6aau, 0x2512405bu, 0xc349ba0cu, 0x618133bdu, 0xffb8ad6eu, 0x9df0271fu,
    0x3c27a0d0u, 0xda5f1a81u, 0x78969432u, 0x16ce0de3u, 0xb5058794u, 0x533d0145u, 0xf1747af6u, 0x8fabf4a7u,
    0x2de36e58u, 0xcc1ae809u, 0x6a5261bau, 0x0889db6bu, 0xa6c1551cu, 0x44f8cecdu, 0xe330487eu, 0x8167c22fu,
    0x1f9f3be0u, 0xbdd6b591u, 0x5c0e2f42u, 0xfa45a8f3u, 0x987d22a4u, 0x36b49c55u, 0xd4ec1606u, 0x73238fb7u,
};

static const uint32_t bshim_034_tab3[96] = {
    0x3e3c7bc9u, 0xdc73f57au, 0x7aab6f2bu, 0x18e2e8dcu, 0xb71a628du, 0x5551dc3eu, 0xf38955efu, 0x91c0cfa0u,
    0x2ff84951u, 0xce2fc302u, 0x6c673cb3u, 0x0a9eb664u, 0xa8d63015u, 0x470da9c6u, 0xe5452377u, 0x837c9d28u,
    0x21b416d9u, 0xbfeb908au, 0x5e230a3bu, 0xfc5a83ecu, 0x9a91fd9du, 0x38c9774eu, 0xd700f0ffu, 0x75386ab0u,
    0x136fe461u, 0xb1a75e12u, 0x4fded7c3u, 0xee165174u, 0x8c4dcb25u, 0x2a8544d6u, 0xc8bcbe87u, 0x66f43838u,
    0x052bb1e9u, 0xa3632b9au, 0x419aa54bu, 0xdfd21efcu, 0x7e0998adu, 0x1c41125eu, 0xba788c0fu, 0x58b005c0u,
    0xf6e77f71u, 0x951ef922u, 0x335672d3u, 0xd18dec84u, 0x6fc56635u, 0x0dfcdfe6u, 0xac345997u, 0x4a6bd348u,
    0xe8a34cf9u, 0x86dac6aau, 0x2512405bu, 0xc349ba0cu, 0x618133bdu, 0xffb8ad6eu, 0x9df0271fu, 0x3c27a0d0u,
    0xda5f1a81u, 0x78969432u, 0x16ce0de3u, 0xb5058794u, 0x533d0145u, 0xf1747af6u, 0x8fabf4a7u, 0x2de36e58u,
    0xcc1ae809u, 0x6a5261bau, 0x0889db6bu, 0xa6c1551cu, 0x44f8cecdu, 0xe330487eu, 0x8167c22fu, 0x1f9f3be0u,
    0xbdd6b591u, 0x5c0e2f42u, 0xfa45a8f3u, 0x987d22a4u, 0x36b49c55u, 0xd4ec1606u, 0x73238fb7u, 0x115b0968u,
    0xaf928319u, 0x4dc9fccau, 0xec01767bu, 0x8a38f02cu, 0x287069ddu, 0xc6a7e38eu, 0x64df5d3fu, 0x0316d6f0u,
    0xa14e50a1u, 0x3f85ca52u, 0xddbd4403u, 0x7bf4bdb4u, 0x1a2c3765u, 0xb863b116u, 0x569b2ac7u, 0xf4d2a478u,
};

static const uint32_t bshim_034_tab4[96] = {
    0xbfeb908au, 0x5e230a3bu, 0xfc5a83ecu, 0x9a91fd9du, 0x38c9774eu, 0xd700f0ffu, 0x75386ab0u, 0x136fe461u,
    0xb1a75e12u, 0x4fded7c3u, 0xee165174u, 0x8c4dcb25u, 0x2a8544d6u, 0xc8bcbe87u, 0x66f43838u, 0x052bb1e9u,
    0xa3632b9au, 0x419aa54bu, 0xdfd21efcu, 0x7e0998adu, 0x1c41125eu, 0xba788c0fu, 0x58b005c0u, 0xf6e77f71u,
    0x951ef922u, 0x335672d3u, 0xd18dec84u, 0x6fc56635u, 0x0dfcdfe6u, 0xac345997u, 0x4a6bd348u, 0xe8a34cf9u,
    0x86dac6aau, 0x2512405bu, 0xc349ba0cu, 0x618133bdu, 0xffb8ad6eu, 0x9df0271fu, 0x3c27a0d0u, 0xda5f1a81u,
    0x78969432u, 0x16ce0de3u, 0xb5058794u, 0x533d0145u, 0xf1747af6u, 0x8fabf4a7u, 0x2de36e58u, 0xcc1ae809u,
    0x6a5261bau, 0x0889db6bu, 0xa6c1551cu, 0x44f8cecdu, 0xe330487eu, 0x8167c22fu, 0x1f9f3be0u, 0xbdd6b591u,
    0x5c0e2f42u, 0xfa45a8f3u, 0x987d22a4u, 0x36b49c55u, 0xd4ec1606u, 0x73238fb7u, 0x115b0968u, 0xaf928319u,
    0x4dc9fccau, 0xec01767bu, 0x8a38f02cu, 0x287069ddu, 0xc6a7e38eu, 0x64df5d3fu, 0x0316d6f0u, 0xa14e50a1u,
    0x3f85ca52u, 0xddbd4403u, 0x7bf4bdb4u, 0x1a2c3765u, 0xb863b116u, 0x569b2ac7u, 0xf4d2a478u, 0x930a1e29u,
    0x314197dau, 0xcf79118bu, 0x6db08b3cu, 0x0be804edu, 0xaa1f7e9eu, 0x4856f84fu, 0xe68e7200u, 0x84c5ebb1u,
    0x22fd6562u, 0xc134df13u, 0x5f6c58c4u, 0xfda3d275u, 0x9bdb4c26u, 0x3a12c5d7u, 0xd84a3f88u, 0x7681b939u,
};

static const uint32_t bshim_034_tab5[96] = {
    0x419aa54bu, 0xdfd21efcu, 0x7e0998adu, 0x1c41125eu, 0xba788c0fu, 0x58b005c0u, 0xf6e77f71u, 0x951ef922u,
    0x335672d3u, 0xd18dec84u, 0x6fc56635u, 0x0dfcdfe6u, 0xac345997u, 0x4a6bd348u, 0xe8a34cf9u, 0x86dac6aau,
    0x2512405bu, 0xc349ba0cu, 0x618133bdu, 0xffb8ad6eu, 0x9df0271fu, 0x3c27a0d0u, 0xda5f1a81u, 0x78969432u,
    0x16ce0de3u, 0xb5058794u, 0x533d0145u, 0xf1747af6u, 0x8fabf4a7u, 0x2de36e58u, 0xcc1ae809u, 0x6a5261bau,
    0x0889db6bu, 0xa6c1551cu, 0x44f8cecdu, 0xe330487eu, 0x8167c22fu, 0x1f9f3be0u, 0xbdd6b591u, 0x5c0e2f42u,
    0xfa45a8f3u, 0x987d22a4u, 0x36b49c55u, 0xd4ec1606u, 0x73238fb7u, 0x115b0968u, 0xaf928319u, 0x4dc9fccau,
    0xec01767bu, 0x8a38f02cu, 0x287069ddu, 0xc6a7e38eu, 0x64df5d3fu, 0x0316d6f0u, 0xa14e50a1u, 0x3f85ca52u,
    0xddbd4403u, 0x7bf4bdb4u, 0x1a2c3765u, 0xb863b116u, 0x569b2ac7u, 0xf4d2a478u, 0x930a1e29u, 0x314197dau,
    0xcf79118bu, 0x6db08b3cu, 0x0be804edu, 0xaa1f7e9eu, 0x4856f84fu, 0xe68e7200u, 0x84c5ebb1u, 0x22fd6562u,
    0xc134df13u, 0x5f6c58c4u, 0xfda3d275u, 0x9bdb4c26u, 0x3a12c5d7u, 0xd84a3f88u, 0x7681b939u, 0x14b932eau,
    0xb2f0ac9bu, 0x5128264cu, 0xef5f9ffdu, 0x8d9719aeu, 0x2bce935fu, 0xca060d10u, 0x683d86c1u, 0x06750072u,
    0xa4ac7a23u, 0x42e3f3d4u, 0xe11b6d85u, 0x7f52e736u, 0x1d8a60e7u, 0xbbc1da98u, 0x59f95449u, 0xf830cdfau,
};

static const uint32_t bshim_034_tab6[96] = {
    0xc349ba0cu, 0x618133bdu, 0xffb8ad6eu, 0x9df0271fu, 0x3c27a0d0u, 0xda5f1a81u, 0x78969432u, 0x16ce0de3u,
    0xb5058794u, 0x533d0145u, 0xf1747af6u, 0x8fabf4a7u, 0x2de36e58u, 0xcc1ae809u, 0x6a5261bau, 0x0889db6bu,
    0xa6c1551cu, 0x44f8cecdu, 0xe330487eu, 0x8167c22fu, 0x1f9f3be0u, 0xbdd6b591u, 0x5c0e2f42u, 0xfa45a8f3u,
    0x987d22a4u, 0x36b49c55u, 0xd4ec1606u, 0x73238fb7u, 0x115b0968u, 0xaf928319u, 0x4dc9fccau, 0xec01767bu,
    0x8a38f02cu, 0x287069ddu, 0xc6a7e38eu, 0x64df5d3fu, 0x0316d6f0u, 0xa14e50a1u, 0x3f85ca52u, 0xddbd4403u,
    0x7bf4bdb4u, 0x1a2c3765u, 0xb863b116u, 0x569b2ac7u, 0xf4d2a478u, 0x930a1e29u, 0x314197dau, 0xcf79118bu,
    0x6db08b3cu, 0x0be804edu, 0xaa1f7e9eu, 0x4856f84fu, 0xe68e7200u, 0x84c5ebb1u, 0x22fd6562u, 0xc134df13u,
    0x5f6c58c4u, 0xfda3d275u, 0x9bdb4c26u, 0x3a12c5d7u, 0xd84a3f88u, 0x7681b939u, 0x14b932eau, 0xb2f0ac9bu,
    0x5128264cu, 0xef5f9ffdu, 0x8d9719aeu, 0x2bce935fu, 0xca060d10u, 0x683d86c1u, 0x06750072u, 0xa4ac7a23u,
    0x42e3f3d4u, 0xe11b6d85u, 0x7f52e736u, 0x1d8a60e7u, 0xbbc1da98u, 0x59f95449u, 0xf830cdfau, 0x966847abu,
    0x349fc15cu, 0xd2d73b0du, 0x710eb4beu, 0x0f462e6fu, 0xad7da820u, 0x4bb521d1u, 0xe9ec9b82u, 0x88241533u,
    0x265b8ee4u, 0xc4930895u, 0x62ca8246u, 0x0101fbf7u, 0x9f3975a8u, 0x3d70ef59u, 0xdba8690au, 0x79dfe2bbu,
};

static const uint32_t bshim_034_tab7[96] = {
    0x44f8cecdu, 0xe330487eu, 0x8167c22fu, 0x1f9f3be0u, 0xbdd6b591u, 0x5c0e2f42u, 0xfa45a8f3u, 0x987d22a4u,
    0x36b49c55u, 0xd4ec1606u, 0x73238fb7u, 0x115b0968u, 0xaf928319u, 0x4dc9fccau, 0xec01767bu, 0x8a38f02cu,
    0x287069ddu, 0xc6a7e38eu, 0x64df5d3fu, 0x0316d6f0u, 0xa14e50a1u, 0x3f85ca52u, 0xddbd4403u, 0x7bf4bdb4u,
    0x1a2c3765u, 0xb863b116u, 0x569b2ac7u, 0xf4d2a478u, 0x930a1e29u, 0x314197dau, 0xcf79118bu, 0x6db08b3cu,
    0x0be804edu, 0xaa1f7e9eu, 0x4856f84fu, 0xe68e7200u, 0x84c5ebb1u, 0x22fd6562u, 0xc134df13u, 0x5f6c58c4u,
    0xfda3d275u, 0x9bdb4c26u, 0x3a12c5d7u, 0xd84a3f88u, 0x7681b939u, 0x14b932eau, 0xb2f0ac9bu, 0x5128264cu,
    0xef5f9ffdu, 0x8d9719aeu, 0x2bce935fu, 0xca060d10u, 0x683d86c1u, 0x06750072u, 0xa4ac7a23u, 0x42e3f3d4u,
    0xe11b6d85u, 0x7f52e736u, 0x1d8a60e7u, 0xbbc1da98u, 0x59f95449u, 0xf830cdfau, 0x966847abu, 0x349fc15cu,
    0xd2d73b0du, 0x710eb4beu, 0x0f462e6fu, 0xad7da820u, 0x4bb521d1u, 0xe9ec9b82u, 0x88241533u, 0x265b8ee4u,
    0xc4930895u, 0x62ca8246u, 0x0101fbf7u, 0x9f3975a8u, 0x3d70ef59u, 0xdba8690au, 0x79dfe2bbu, 0x18175c6cu,
    0xb64ed61du, 0x54864fceu, 0xf2bdc97fu, 0x90f54330u, 0x2f2cbce1u, 0xcd643692u, 0x6b9bb043u, 0x09d329f4u,
    0xa80aa3a5u, 0x46421d56u, 0xe4799707u, 0x82b110b8u, 0x20e88a69u, 0xbf20041au, 0x5d577dcbu, 0xfb8ef77cu,
};

struct bshim_034_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_034_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_034_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_034_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_034_reset(struct bshim_034_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00041bbeu;
    return 0;
}

