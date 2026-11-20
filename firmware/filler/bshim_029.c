/* bshim_029 -- board support shim generated from the 0029 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_029_tab0[96] = {
    0xe93ee1a7u, 0x87765b58u, 0x25add509u, 0xc3e54ebau, 0x621cc86bu, 0x0054421cu, 0x9e8bbbcdu, 0x3cc3357eu,
    0xdafaaf2fu, 0x793228e0u, 0x1769a291u, 0xb5a11c42u, 0x53d895f3u, 0xf2100fa4u, 0x90478955u, 0x2e7f0306u,
    0xccb67cb7u, 0x6aedf668u, 0x09257019u, 0xa75ce9cau, 0x4594637bu, 0xe3cbdd2cu, 0x820356ddu, 0x203ad08eu,
    0xbe724a3fu, 0x5ca9c3f0u, 0xfae13da1u, 0x9918b752u, 0x37503103u, 0xd587aab4u, 0x73bf2465u, 0x11f69e16u,
    0xb02e17c7u, 0x4e659178u, 0xec9d0b29u, 0x8ad484dau, 0x290bfe8bu, 0xc743783cu, 0x657af1edu, 0x03b26b9eu,
    0xa1e9e54fu, 0x40215f00u, 0xde58d8b1u, 0x7c905262u, 0x1ac7cc13u, 0xb8ff45c4u, 0x5736bf75u, 0xf56e3926u,
    0x93a5b2d7u, 0x31dd2c88u, 0xd014a639u, 0x6e4c1feau, 0x0c83999bu, 0xaabb134cu, 0x48f28cfdu, 0xe72a06aeu,
    0x8561805fu, 0x2398fa10u, 0xc1d073c1u, 0x6007ed72u, 0xfe3f6723u, 0x9c76e0d4u, 0x3aae5a85u, 0xd8e5d436u,
    0x771d4de7u, 0x1554c798u, 0xb38c4149u, 0x51c3bafau, 0xeffb34abu, 0x8e32ae5cu, 0x2c6a280du, 0xcaa1a1beu,
    0x68d91b6fu, 0x07109520u, 0xa5480ed1u, 0x437f8882u, 0xe1b70233u, 0x7fee7be4u, 0x1e25f595u, 0xbc5d6f46u,
    0x5a94e8f7u, 0xf8cc62a8u, 0x9703dc59u, 0x353b560au, 0xd372cfbbu, 0x71aa496cu, 0x0fe1c31du, 0xae193cceu,
    0x4c50b67fu, 0xea883030u, 0x88bfa9e1u, 0x26f72392u, 0xc52e9d43u, 0x636616f4u, 0x019d90a5u, 0x9fd50a56u,
};

static const uint32_t bshim_029_tab1[96] = {
    0x6aedf668u, 0x09257019u, 0xa75ce9cau, 0x4594637bu, 0xe3cbdd2cu, 0x820356ddu, 0x203ad08eu, 0xbe724a3fu,
    0x5ca9c3f0u, 0xfae13da1u, 0x9918b752u, 0x37503103u, 0xd587aab4u, 0x73bf2465u, 0x11f69e16u, 0xb02e17c7u,
    0x4e659178u, 0xec9d0b29u, 0x8ad484dau, 0x290bfe8bu, 0xc743783cu, 0x657af1edu, 0x03b26b9eu, 0xa1e9e54fu,
    0x40215f00u, 0xde58d8b1u, 0x7c905262u, 0x1ac7cc13u, 0xb8ff45c4u, 0x5736bf75u, 0xf56e3926u, 0x93a5b2d7u,
    0x31dd2c88u, 0xd014a639u, 0x6e4c1feau, 0x0c83999bu, 0xaabb134cu, 0x48f28cfdu, 0xe72a06aeu, 0x8561805fu,
    0x2398fa10u, 0xc1d073c1u, 0x6007ed72u, 0xfe3f6723u, 0x9c76e0d4u, 0x3aae5a85u, 0xd8e5d436u, 0x771d4de7u,
    0x1554c798u, 0xb38c4149u, 0x51c3bafau, 0xeffb34abu, 0x8e32ae5cu, 0x2c6a280du, 0xcaa1a1beu, 0x68d91b6fu,
    0x07109520u, 0xa5480ed1u, 0x437f8882u, 0xe1b70233u, 0x7fee7be4u, 0x1e25f595u, 0xbc5d6f46u, 0x5a94e8f7u,
    0xf8cc62a8u, 0x9703dc59u, 0x353b560au, 0xd372cfbbu, 0x71aa496cu, 0x0fe1c31du, 0xae193cceu, 0x4c50b67fu,
    0xea883030u, 0x88bfa9e1u, 0x26f72392u, 0xc52e9d43u, 0x636616f4u, 0x019d90a5u, 0x9fd50a56u, 0x3e0c8407u,
    0xdc43fdb8u, 0x7a7b7769u, 0x18b2f11au, 0xb6ea6acbu, 0x5521e47cu, 0xf3595e2du, 0x9190d7deu, 0x2fc8518fu,
    0xcdffcb40u, 0x6c3744f1u, 0x0a6ebea2u, 0xa8a63853u, 0x46ddb204u, 0xe5152bb5u, 0x834ca566u, 0x21841f17u,
};

static const uint32_t bshim_029_tab2[96] = {
    0xec9d0b29u, 0x8ad484dau, 0x290bfe8bu, 0xc743783cu, 0x657af1edu, 0x03b26b9eu, 0xa1e9e54fu, 0x40215f00u,
    0xde58d8b1u, 0x7c905262u, 0x1ac7cc13u, 0xb8ff45c4u, 0x5736bf75u, 0xf56e3926u, 0x93a5b2d7u, 0x31dd2c88u,
    0xd014a639u, 0x6e4c1feau, 0x0c83999bu, 0xaabb134cu, 0x48f28cfdu, 0xe72a06aeu, 0x8561805fu, 0x2398fa10u,
    0xc1d073c1u, 0x6007ed72u, 0xfe3f6723u, 0x9c76e0d4u, 0x3aae5a85u, 0xd8e5d436u, 0x771d4de7u, 0x1554c798u,
    0xb38c4149u, 0x51c3bafau, 0xeffb34abu, 0x8e32ae5cu, 0x2c6a280du, 0xcaa1a1beu, 0x68d91b6fu, 0x07109520u,
    0xa5480ed1u, 0x437f8882u, 0xe1b70233u, 0x7fee7be4u, 0x1e25f595u, 0xbc5d6f46u, 0x5a94e8f7u, 0xf8cc62a8u,
    0x9703dc59u, 0x353b560au, 0xd372cfbbu, 0x71aa496cu, 0x0fe1c31du, 0xae193cceu, 0x4c50b67fu, 0xea883030u,
    0x88bfa9e1u, 0x26f72392u, 0xc52e9d43u, 0x636616f4u, 0x019d90a5u, 0x9fd50a56u, 0x3e0c8407u, 0xdc43fdb8u,
    0x7a7b7769u, 0x18b2f11au, 0xb6ea6acbu, 0x5521e47cu, 0xf3595e2du, 0x9190d7deu, 0x2fc8518fu, 0xcdffcb40u,
    0x6c3744f1u, 0x0a6ebea2u, 0xa8a63853u, 0x46ddb204u, 0xe5152bb5u, 0x834ca566u, 0x21841f17u, 0xbfbb98c8u,
    0x5df31279u, 0xfc2a8c2au, 0x9a6205dbu, 0x38997f8cu, 0xd6d0f93du, 0x750872eeu, 0x133fec9fu, 0xb1776650u,
    0x4faee001u, 0xede659b2u, 0x8c1dd363u, 0x2a554d14u, 0xc88cc6c5u, 0x66c44076u, 0x04fbba27u, 0xa33333d8u,
};

static const uint32_t bshim_029_tab3[96] = {
    0x6e4c1feau, 0x0c83999bu, 0xaabb134cu, 0x48f28cfdu, 0xe72a06aeu, 0x8561805fu, 0x2398fa10u, 0xc1d073c1u,
    0x6007ed72u, 0xfe3f6723u, 0x9c76e0d4u, 0x3aae5a85u, 0xd8e5d436u, 0x771d4de7u, 0x1554c798u, 0xb38c4149u,
    0x51c3bafau, 0xeffb34abu, 0x8e32ae5cu, 0x2c6a280du, 0xcaa1a1beu, 0x68d91b6fu, 0x07109520u, 0xa5480ed1u,
    0x437f8882u, 0xe1b70233u, 0x7fee7be4u, 0x1e25f595u, 0xbc5d6f46u, 0x5a94e8f7u, 0xf8cc62a8u, 0x9703dc59u,
    0x353b560au, 0xd372cfbbu, 0x71aa496cu, 0x0fe1c31du, 0xae193cceu, 0x4c50b67fu, 0xea883030u, 0x88bfa9e1u,
    0x26f72392u, 0xc52e9d43u, 0x636616f4u, 0x019d90a5u, 0x9fd50a56u, 0x3e0c8407u, 0xdc43fdb8u, 0x7a7b7769u,
    0x18b2f11au, 0xb6ea6acbu, 0x5521e47cu, 0xf3595e2du, 0x9190d7deu, 0x2fc8518fu, 0xcdffcb40u, 0x6c3744f1u,
    0x0a6ebea2u, 0xa8a63853u, 0x46ddb204u, 0xe5152bb5u, 0x834ca566u, 0x21841f17u, 0xbfbb98c8u, 0x5df31279u,
    0xfc2a8c2au, 0x9a6205dbu, 0x38997f8cu, 0xd6d0f93du, 0x750872eeu, 0x133fec9fu, 0xb1776650u, 0x4faee001u,
    0xede659b2u, 0x8c1dd363u, 0x2a554d14u, 0xc88cc6c5u, 0x66c44076u, 0x04fbba27u, 0xa33333d8u, 0x416aad89u,
    0xdfa2273au, 0x7dd9a0ebu, 0x1c111a9cu, 0xba48944du, 0x58800dfeu, 0xf6b787afu, 0x94ef0160u, 0x33267b11u,
    0xd15df4c2u, 0x6f956e73u, 0x0dcce824u, 0xac0461d5u, 0x4a3bdb86u, 0xe8735537u, 0x86aacee8u, 0x24e24899u,
};

static const uint32_t bshim_029_tab4[96] = {
    0xeffb34abu, 0x8e32ae5cu, 0x2c6a280du, 0xcaa1a1beu, 0x68d91b6fu, 0x07109520u, 0xa5480ed1u, 0x437f8882u,
    0xe1b70233u, 0x7fee7be4u, 0x1e25f595u, 0xbc5d6f46u, 0x5a94e8f7u, 0xf8cc62a8u, 0x9703dc59u, 0x353b560au,
    0xd372cfbbu, 0x71aa496cu, 0x0fe1c31du, 0xae193cceu, 0x4c50b67fu, 0xea883030u, 0x88bfa9e1u, 0x26f72392u,
    0xc52e9d43u, 0x636616f4u, 0x019d90a5u, 0x9fd50a56u, 0x3e0c8407u, 0xdc43fdb8u, 0x7a7b7769u, 0x18b2f11au,
    0xb6ea6acbu, 0x5521e47cu, 0xf3595e2du, 0x9190d7deu, 0x2fc8518fu, 0xcdffcb40u, 0x6c3744f1u, 0x0a6ebea2u,
    0xa8a63853u, 0x46ddb204u, 0xe5152bb5u, 0x834ca566u, 0x21841f17u, 0xbfbb98c8u, 0x5df31279u, 0xfc2a8c2au,
    0x9a6205dbu, 0x38997f8cu, 0xd6d0f93du, 0x750872eeu, 0x133fec9fu, 0xb1776650u, 0x4faee001u, 0xede659b2u,
    0x8c1dd363u, 0x2a554d14u, 0xc88cc6c5u, 0x66c44076u, 0x04fbba27u, 0xa33333d8u, 0x416aad89u, 0xdfa2273au,
    0x7dd9a0ebu, 0x1c111a9cu, 0xba48944du, 0x58800dfeu, 0xf6b787afu, 0x94ef0160u, 0x33267b11u, 0xd15df4c2u,
    0x6f956e73u, 0x0dcce824u, 0xac0461d5u, 0x4a3bdb86u, 0xe8735537u, 0x86aacee8u, 0x24e24899u, 0xc319c24au,
    0x61513bfbu, 0xff88b5acu, 0x9dc02f5du, 0x3bf7a90eu, 0xda2f22bfu, 0x78669c70u, 0x169e1621u, 0xb4d58fd2u,
    0x530d0983u, 0xf1448334u, 0x8f7bfce5u, 0x2db37696u, 0xcbeaf047u, 0x6a2269f8u, 0x0859e3a9u, 0xa6915d5au,
};

static const uint32_t bshim_029_tab5[96] = {
    0x71aa496cu, 0x0fe1c31du, 0xae193cceu, 0x4c50b67fu, 0xea883030u, 0x88bfa9e1u, 0x26f72392u, 0xc52e9d43u,
    0x636616f4u, 0x019d90a5u, 0x9fd50a56u, 0x3e0c8407u, 0xdc43fdb8u, 0x7a7b7769u, 0x18b2f11au, 0xb6ea6acbu,
    0x5521e47cu, 0xf3595e2du, 0x9190d7deu, 0x2fc8518fu, 0xcdffcb40u, 0x6c3744f1u, 0x0a6ebea2u, 0xa8a63853u,
    0x46ddb204u, 0xe5152bb5u, 0x834ca566u, 0x21841f17u, 0xbfbb98c8u, 0x5df31279u, 0xfc2a8c2au, 0x9a6205dbu,
    0x38997f8cu, 0xd6d0f93du, 0x750872eeu, 0x133fec9fu, 0xb1776650u, 0x4faee001u, 0xede659b2u, 0x8c1dd363u,
    0x2a554d14u, 0xc88cc6c5u, 0x66c44076u, 0x04fbba27u, 0xa33333d8u, 0x416aad89u, 0xdfa2273au, 0x7dd9a0ebu,
    0x1c111a9cu, 0xba48944du, 0x58800dfeu, 0xf6b787afu, 0x94ef0160u, 0x33267b11u, 0xd15df4c2u, 0x6f956e73u,
    0x0dcce824u, 0xac0461d5u, 0x4a3bdb86u, 0xe8735537u, 0x86aacee8u, 0x24e24899u, 0xc319c24au, 0x61513bfbu,
    0xff88b5acu, 0x9dc02f5du, 0x3bf7a90eu, 0xda2f22bfu, 0x78669c70u, 0x169e1621u, 0xb4d58fd2u, 0x530d0983u,
    0xf1448334u, 0x8f7bfce5u, 0x2db37696u, 0xcbeaf047u, 0x6a2269f8u, 0x0859e3a9u, 0xa6915d5au, 0x44c8d70bu,
    0xe30050bcu, 0x8137ca6du, 0x1f6f441eu, 0xbda6bdcfu, 0x5bde3780u, 0xfa15b131u, 0x984d2ae2u, 0x3684a493u,
    0xd4bc1e44u, 0x72f397f5u, 0x112b11a6u, 0xaf628b57u, 0x4d9a0508u, 0xebd17eb9u, 0x8a08f86au, 0x2840721bu,
};

static const uint32_t bshim_029_tab6[96] = {
    0xf3595e2du, 0x9190d7deu, 0x2fc8518fu, 0xcdffcb40u, 0x6c3744f1u, 0x0a6ebea2u, 0xa8a63853u, 0x46ddb204u,
    0xe5152bb5u, 0x834ca566u, 0x21841f17u, 0xbfbb98c8u, 0x5df31279u, 0xfc2a8c2au, 0x9a6205dbu, 0x38997f8cu,
    0xd6d0f93du, 0x750872eeu, 0x133fec9fu, 0xb1776650u, 0x4faee001u, 0xede659b2u, 0x8c1dd363u, 0x2a554d14u,
    0xc88cc6c5u, 0x66c44076u, 0x04fbba27u, 0xa33333d8u, 0x416aad89u, 0xdfa2273au, 0x7dd9a0ebu, 0x1c111a9cu,
    0xba48944du, 0x58800dfeu, 0xf6b787afu, 0x94ef0160u, 0x33267b11u, 0xd15df4c2u, 0x6f956e73u, 0x0dcce824u,
    0xac0461d5u, 0x4a3bdb86u, 0xe8735537u, 0x86aacee8u, 0x24e24899u, 0xc319c24au, 0x61513bfbu, 0xff88b5acu,
    0x9dc02f5du, 0x3bf7a90eu, 0xda2f22bfu, 0x78669c70u, 0x169e1621u, 0xb4d58fd2u, 0x530d0983u, 0xf1448334u,
    0x8f7bfce5u, 0x2db37696u, 0xcbeaf047u, 0x6a2269f8u, 0x0859e3a9u, 0xa6915d5au, 0x44c8d70bu, 0xe30050bcu,
    0x8137ca6du, 0x1f6f441eu, 0xbda6bdcfu, 0x5bde3780u, 0xfa15b131u, 0x984d2ae2u, 0x3684a493u, 0xd4bc1e44u,
    0x72f397f5u, 0x112b11a6u, 0xaf628b57u, 0x4d9a0508u, 0xebd17eb9u, 0x8a08f86au, 0x2840721bu, 0xc677ebccu,
    0x64af657du, 0x02e6df2eu, 0xa11e58dfu, 0x3f55d290u, 0xdd8d4c41u, 0x7bc4c5f2u, 0x19fc3fa3u, 0xb833b954u,
    0x566b3305u, 0xf4a2acb6u, 0x92da2667u, 0x3111a018u, 0xcf4919c9u, 0x6d80937au, 0x0bb80d2bu, 0xa9ef86dcu,
};

static const uint32_t bshim_029_tab7[96] = {
    0x750872eeu, 0x133fec9fu, 0xb1776650u, 0x4faee001u, 0xede659b2u, 0x8c1dd363u, 0x2a554d14u, 0xc88cc6c5u,
    0x66c44076u, 0x04fbba27u, 0xa33333d8u, 0x416aad89u, 0xdfa2273au, 0x7dd9a0ebu, 0x1c111a9cu, 0xba48944du,
    0x58800dfeu, 0xf6b787afu, 0x94ef0160u, 0x33267b11u, 0xd15df4c2u, 0x6f956e73u, 0x0dcce824u, 0xac0461d5u,
    0x4a3bdb86u, 0xe8735537u, 0x86aacee8u, 0x24e24899u, 0xc319c24au, 0x61513bfbu, 0xff88b5acu, 0x9dc02f5du,
    0x3bf7a90eu, 0xda2f22bfu, 0x78669c70u, 0x169e1621u, 0xb4d58fd2u, 0x530d0983u, 0xf1448334u, 0x8f7bfce5u,
    0x2db37696u, 0xcbeaf047u, 0x6a2269f8u, 0x0859e3a9u, 0xa6915d5au, 0x44c8d70bu, 0xe30050bcu, 0x8137ca6du,
    0x1f6f441eu, 0xbda6bdcfu, 0x5bde3780u, 0xfa15b131u, 0x984d2ae2u, 0x3684a493u, 0xd4bc1e44u, 0x72f397f5u,
    0x112b11a6u, 0xaf628b57u, 0x4d9a0508u, 0xebd17eb9u, 0x8a08f86au, 0x2840721bu, 0xc677ebccu, 0x64af657du,
    0x02e6df2eu, 0xa11e58dfu, 0x3f55d290u, 0xdd8d4c41u, 0x7bc4c5f2u, 0x19fc3fa3u, 0xb833b954u, 0x566b3305u,
    0xf4a2acb6u, 0x92da2667u, 0x3111a018u, 0xcf4919c9u, 0x6d80937au, 0x0bb80d2bu, 0xa9ef86dcu, 0x4827008du,
    0xe65e7a3eu, 0x8495f3efu, 0x22cd6da0u, 0xc104e751u, 0x5f3c6102u, 0xfd73dab3u, 0x9bab5464u, 0x39e2ce15u,
    0xd81a47c6u, 0x7651c177u, 0x14893b28u, 0xb2c0b4d9u, 0x50f82e8au, 0xef2fa83bu, 0x8d6721ecu, 0x2b9e9b9du,
};

struct bshim_029_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_029_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_029_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_029_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_029_reset(struct bshim_029_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00038113u;
    return 0;
}

