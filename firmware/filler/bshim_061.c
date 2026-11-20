/* bshim_061 -- board support shim generated from the 0061 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_061_tab0[96] = {
    0xb5a79407u, 0x53df0db8u, 0xf2168769u, 0x904e011au, 0x2e857acbu, 0xccbcf47cu, 0x6af46e2du, 0x092be7deu,
    0xa763618fu, 0x459adb40u, 0xe3d254f1u, 0x8209cea2u, 0x20414853u, 0xbe78c204u, 0x5cb03bb5u, 0xfae7b566u,
    0x991f2f17u, 0x3756a8c8u, 0xd58e2279u, 0x73c59c2au, 0x11fd15dbu, 0xb0348f8cu, 0x4e6c093du, 0xeca382eeu,
    0x8adafc9fu, 0x29127650u, 0xc749f001u, 0x658169b2u, 0x03b8e363u, 0xa1f05d14u, 0x4027d6c5u, 0xde5f5076u,
    0x7c96ca27u, 0x1ace43d8u, 0xb905bd89u, 0x573d373au, 0xf574b0ebu, 0x93ac2a9cu, 0x31e3a44du, 0xd01b1dfeu,
    0x6e5297afu, 0x0c8a1160u, 0xaac18b11u, 0x48f904c2u, 0xe7307e73u, 0x8567f824u, 0x239f71d5u, 0xc1d6eb86u,
    0x600e6537u, 0xfe45dee8u, 0x9c7d5899u, 0x3ab4d24au, 0xd8ec4bfbu, 0x7723c5acu, 0x155b3f5du, 0xb392b90eu,
    0x51ca32bfu, 0xf001ac70u, 0x8e392621u, 0x2c709fd2u, 0xcaa81983u, 0x68df9334u, 0x07170ce5u, 0xa54e8696u,
    0x43860047u, 0xe1bd79f8u, 0x7ff4f3a9u, 0x1e2c6d5au, 0xbc63e70bu, 0x5a9b60bcu, 0xf8d2da6du, 0x970a541eu,
    0x3541cdcfu, 0xd3794780u, 0x71b0c131u, 0x0fe83ae2u, 0xae1fb493u, 0x4c572e44u, 0xea8ea7f5u, 0x88c621a6u,
    0x26fd9b57u, 0xc5351508u, 0x636c8eb9u, 0x01a4086au, 0x9fdb821bu, 0x3e12fbccu, 0xdc4a757du, 0x7a81ef2eu,
    0x18b968dfu, 0xb6f0e290u, 0x55285c41u, 0xf35fd5f2u, 0x91974fa3u, 0x2fcec954u, 0xce064305u, 0x6c3dbcb6u,
};

static const uint32_t bshim_061_tab1[96] = {
    0x3756a8c8u, 0xd58e2279u, 0x73c59c2au, 0x11fd15dbu, 0xb0348f8cu, 0x4e6c093du, 0xeca382eeu, 0x8adafc9fu,
    0x29127650u, 0xc749f001u, 0x658169b2u, 0x03b8e363u, 0xa1f05d14u, 0x4027d6c5u, 0xde5f5076u, 0x7c96ca27u,
    0x1ace43d8u, 0xb905bd89u, 0x573d373au, 0xf574b0ebu, 0x93ac2a9cu, 0x31e3a44du, 0xd01b1dfeu, 0x6e5297afu,
    0x0c8a1160u, 0xaac18b11u, 0x48f904c2u, 0xe7307e73u, 0x8567f824u, 0x239f71d5u, 0xc1d6eb86u, 0x600e6537u,
    0xfe45dee8u, 0x9c7d5899u, 0x3ab4d24au, 0xd8ec4bfbu, 0x7723c5acu, 0x155b3f5du, 0xb392b90eu, 0x51ca32bfu,
    0xf001ac70u, 0x8e392621u, 0x2c709fd2u, 0xcaa81983u, 0x68df9334u, 0x07170ce5u, 0xa54e8696u, 0x43860047u,
    0xe1bd79f8u, 0x7ff4f3a9u, 0x1e2c6d5au, 0xbc63e70bu, 0x5a9b60bcu, 0xf8d2da6du, 0x970a541eu, 0x3541cdcfu,
    0xd3794780u, 0x71b0c131u, 0x0fe83ae2u, 0xae1fb493u, 0x4c572e44u, 0xea8ea7f5u, 0x88c621a6u, 0x26fd9b57u,
    0xc5351508u, 0x636c8eb9u, 0x01a4086au, 0x9fdb821bu, 0x3e12fbccu, 0xdc4a757du, 0x7a81ef2eu, 0x18b968dfu,
    0xb6f0e290u, 0x55285c41u, 0xf35fd5f2u, 0x91974fa3u, 0x2fcec954u, 0xce064305u, 0x6c3dbcb6u, 0x0a753667u,
    0xa8acb018u, 0x46e429c9u, 0xe51ba37au, 0x83531d2bu, 0x218a96dcu, 0xbfc2108du, 0x5df98a3eu, 0xfc3103efu,
    0x9a687da0u, 0x389ff751u, 0xd6d77102u, 0x750eeab3u, 0x13466464u, 0xb17dde15u, 0x4fb557c6u, 0xedecd177u,
};

static const uint32_t bshim_061_tab2[96] = {
    0xb905bd89u, 0x573d373au, 0xf574b0ebu, 0x93ac2a9cu, 0x31e3a44du, 0xd01b1dfeu, 0x6e5297afu, 0x0c8a1160u,
    0xaac18b11u, 0x48f904c2u, 0xe7307e73u, 0x8567f824u, 0x239f71d5u, 0xc1d6eb86u, 0x600e6537u, 0xfe45dee8u,
    0x9c7d5899u, 0x3ab4d24au, 0xd8ec4bfbu, 0x7723c5acu, 0x155b3f5du, 0xb392b90eu, 0x51ca32bfu, 0xf001ac70u,
    0x8e392621u, 0x2c709fd2u, 0xcaa81983u, 0x68df9334u, 0x07170ce5u, 0xa54e8696u, 0x43860047u, 0xe1bd79f8u,
    0x7ff4f3a9u, 0x1e2c6d5au, 0xbc63e70bu, 0x5a9b60bcu, 0xf8d2da6du, 0x970a541eu, 0x3541cdcfu, 0xd3794780u,
    0x71b0c131u, 0x0fe83ae2u, 0xae1fb493u, 0x4c572e44u, 0xea8ea7f5u, 0x88c621a6u, 0x26fd9b57u, 0xc5351508u,
    0x636c8eb9u, 0x01a4086au, 0x9fdb821bu, 0x3e12fbccu, 0xdc4a757du, 0x7a81ef2eu, 0x18b968dfu, 0xb6f0e290u,
    0x55285c41u, 0xf35fd5f2u, 0x91974fa3u, 0x2fcec954u, 0xce064305u, 0x6c3dbcb6u, 0x0a753667u, 0xa8acb018u,
    0x46e429c9u, 0xe51ba37au, 0x83531d2bu, 0x218a96dcu, 0xbfc2108du, 0x5df98a3eu, 0xfc3103efu, 0x9a687da0u,
    0x389ff751u, 0xd6d77102u, 0x750eeab3u, 0x13466464u, 0xb17dde15u, 0x4fb557c6u, 0xedecd177u, 0x8c244b28u,
    0x2a5bc4d9u, 0xc8933e8au, 0x66cab83bu, 0x050231ecu, 0xa339ab9du, 0x4171254eu, 0xdfa89effu, 0x7de018b0u,
    0x1c179261u, 0xba4f0c12u, 0x588685c3u, 0xf6bdff74u, 0x94f57925u, 0x332cf2d6u, 0xd1646c87u, 0x6f9be638u,
};

static const uint32_t bshim_061_tab3[96] = {
    0x3ab4d24au, 0xd8ec4bfbu, 0x7723c5acu, 0x155b3f5du, 0xb392b90eu, 0x51ca32bfu, 0xf001ac70u, 0x8e392621u,
    0x2c709fd2u, 0xcaa81983u, 0x68df9334u, 0x07170ce5u, 0xa54e8696u, 0x43860047u, 0xe1bd79f8u, 0x7ff4f3a9u,
    0x1e2c6d5au, 0xbc63e70bu, 0x5a9b60bcu, 0xf8d2da6du, 0x970a541eu, 0x3541cdcfu, 0xd3794780u, 0x71b0c131u,
    0x0fe83ae2u, 0xae1fb493u, 0x4c572e44u, 0xea8ea7f5u, 0x88c621a6u, 0x26fd9b57u, 0xc5351508u, 0x636c8eb9u,
    0x01a4086au, 0x9fdb821bu, 0x3e12fbccu, 0xdc4a757du, 0x7a81ef2eu, 0x18b968dfu, 0xb6f0e290u, 0x55285c41u,
    0xf35fd5f2u, 0x91974fa3u, 0x2fcec954u, 0xce064305u, 0x6c3dbcb6u, 0x0a753667u, 0xa8acb018u, 0x46e429c9u,
    0xe51ba37au, 0x83531d2bu, 0x218a96dcu, 0xbfc2108du, 0x5df98a3eu, 0xfc3103efu, 0x9a687da0u, 0x389ff751u,
    0xd6d77102u, 0x750eeab3u, 0x13466464u, 0xb17dde15u, 0x4fb557c6u, 0xedecd177u, 0x8c244b28u, 0x2a5bc4d9u,
    0xc8933e8au, 0x66cab83bu, 0x050231ecu, 0xa339ab9du, 0x4171254eu, 0xdfa89effu, 0x7de018b0u, 0x1c179261u,
    0xba4f0c12u, 0x588685c3u, 0xf6bdff74u, 0x94f57925u, 0x332cf2d6u, 0xd1646c87u, 0x6f9be638u, 0x0dd35fe9u,
    0xac0ad99au, 0x4a42534bu, 0xe879ccfcu, 0x86b146adu, 0x24e8c05eu, 0xc3203a0fu, 0x6157b3c0u, 0xff8f2d71u,
    0x9dc6a722u, 0x3bfe20d3u, 0xda359a84u, 0x786d1435u, 0x16a48de6u, 0xb4dc0797u, 0x53138148u, 0xf14afaf9u,
};

static const uint32_t bshim_061_tab4[96] = {
    0xbc63e70bu, 0x5a9b60bcu, 0xf8d2da6du, 0x970a541eu, 0x3541cdcfu, 0xd3794780u, 0x71b0c131u, 0x0fe83ae2u,
    0xae1fb493u, 0x4c572e44u, 0xea8ea7f5u, 0x88c621a6u, 0x26fd9b57u, 0xc5351508u, 0x636c8eb9u, 0x01a4086au,
    0x9fdb821bu, 0x3e12fbccu, 0xdc4a757du, 0x7a81ef2eu, 0x18b968dfu, 0xb6f0e290u, 0x55285c41u, 0xf35fd5f2u,
    0x91974fa3u, 0x2fcec954u, 0xce064305u, 0x6c3dbcb6u, 0x0a753667u, 0xa8acb018u, 0x46e429c9u, 0xe51ba37au,
    0x83531d2bu, 0x218a96dcu, 0xbfc2108du, 0x5df98a3eu, 0xfc3103efu, 0x9a687da0u, 0x389ff751u, 0xd6d77102u,
    0x750eeab3u, 0x13466464u, 0xb17dde15u, 0x4fb557c6u, 0xedecd177u, 0x8c244b28u, 0x2a5bc4d9u, 0xc8933e8au,
    0x66cab83bu, 0x050231ecu, 0xa339ab9du, 0x4171254eu, 0xdfa89effu, 0x7de018b0u, 0x1c179261u, 0xba4f0c12u,
    0x588685c3u, 0xf6bdff74u, 0x94f57925u, 0x332cf2d6u, 0xd1646c87u, 0x6f9be638u, 0x0dd35fe9u, 0xac0ad99au,
    0x4a42534bu, 0xe879ccfcu, 0x86b146adu, 0x24e8c05eu, 0xc3203a0fu, 0x6157b3c0u, 0xff8f2d71u, 0x9dc6a722u,
    0x3bfe20d3u, 0xda359a84u, 0x786d1435u, 0x16a48de6u, 0xb4dc0797u, 0x53138148u, 0xf14afaf9u, 0x8f8274aau,
    0x2db9ee5bu, 0xcbf1680cu, 0x6a28e1bdu, 0x08605b6eu, 0xa697d51fu, 0x44cf4ed0u, 0xe306c881u, 0x813e4232u,
    0x1f75bbe3u, 0xbdad3594u, 0x5be4af45u, 0xfa1c28f6u, 0x9853a2a7u, 0x368b1c58u, 0xd4c29609u, 0x72fa0fbau,
};

static const uint32_t bshim_061_tab5[96] = {
    0x3e12fbccu, 0xdc4a757du, 0x7a81ef2eu, 0x18b968dfu, 0xb6f0e290u, 0x55285c41u, 0xf35fd5f2u, 0x91974fa3u,
    0x2fcec954u, 0xce064305u, 0x6c3dbcb6u, 0x0a753667u, 0xa8acb018u, 0x46e429c9u, 0xe51ba37au, 0x83531d2bu,
    0x218a96dcu, 0xbfc2108du, 0x5df98a3eu, 0xfc3103efu, 0x9a687da0u, 0x389ff751u, 0xd6d77102u, 0x750eeab3u,
    0x13466464u, 0xb17dde15u, 0x4fb557c6u, 0xedecd177u, 0x8c244b28u, 0x2a5bc4d9u, 0xc8933e8au, 0x66cab83bu,
    0x050231ecu, 0xa339ab9du, 0x4171254eu, 0xdfa89effu, 0x7de018b0u, 0x1c179261u, 0xba4f0c12u, 0x588685c3u,
    0xf6bdff74u, 0x94f57925u, 0x332cf2d6u, 0xd1646c87u, 0x6f9be638u, 0x0dd35fe9u, 0xac0ad99au, 0x4a42534bu,
    0xe879ccfcu, 0x86b146adu, 0x24e8c05eu, 0xc3203a0fu, 0x6157b3c0u, 0xff8f2d71u, 0x9dc6a722u, 0x3bfe20d3u,
    0xda359a84u, 0x786d1435u, 0x16a48de6u, 0xb4dc0797u, 0x53138148u, 0xf14afaf9u, 0x8f8274aau, 0x2db9ee5bu,
    0xcbf1680cu, 0x6a28e1bdu, 0x08605b6eu, 0xa697d51fu, 0x44cf4ed0u, 0xe306c881u, 0x813e4232u, 0x1f75bbe3u,
    0xbdad3594u, 0x5be4af45u, 0xfa1c28f6u, 0x9853a2a7u, 0x368b1c58u, 0xd4c29609u, 0x72fa0fbau, 0x1131896bu,
    0xaf69031cu, 0x4da07ccdu, 0xebd7f67eu, 0x8a0f702fu, 0x2846e9e0u, 0xc67e6391u, 0x64b5dd42u, 0x02ed56f3u,
    0xa124d0a4u, 0x3f5c4a55u, 0xdd93c406u, 0x7bcb3db7u, 0x1a02b768u, 0xb83a3119u, 0x5671aacau, 0xf4a9247bu,
};

static const uint32_t bshim_061_tab6[96] = {
    0xbfc2108du, 0x5df98a3eu, 0xfc3103efu, 0x9a687da0u, 0x389ff751u, 0xd6d77102u, 0x750eeab3u, 0x13466464u,
    0xb17dde15u, 0x4fb557c6u, 0xedecd177u, 0x8c244b28u, 0x2a5bc4d9u, 0xc8933e8au, 0x66cab83bu, 0x050231ecu,
    0xa339ab9du, 0x4171254eu, 0xdfa89effu, 0x7de018b0u, 0x1c179261u, 0xba4f0c12u, 0x588685c3u, 0xf6bdff74u,
    0x94f57925u, 0x332cf2d6u, 0xd1646c87u, 0x6f9be638u, 0x0dd35fe9u, 0xac0ad99au, 0x4a42534bu, 0xe879ccfcu,
    0x86b146adu, 0x24e8c05eu, 0xc3203a0fu, 0x6157b3c0u, 0xff8f2d71u, 0x9dc6a722u, 0x3bfe20d3u, 0xda359a84u,
    0x786d1435u, 0x16a48de6u, 0xb4dc0797u, 0x53138148u, 0xf14afaf9u, 0x8f8274aau, 0x2db9ee5bu, 0xcbf1680cu,
    0x6a28e1bdu, 0x08605b6eu, 0xa697d51fu, 0x44cf4ed0u, 0xe306c881u, 0x813e4232u, 0x1f75bbe3u, 0xbdad3594u,
    0x5be4af45u, 0xfa1c28f6u, 0x9853a2a7u, 0x368b1c58u, 0xd4c29609u, 0x72fa0fbau, 0x1131896bu, 0xaf69031cu,
    0x4da07ccdu, 0xebd7f67eu, 0x8a0f702fu, 0x2846e9e0u, 0xc67e6391u, 0x64b5dd42u, 0x02ed56f3u, 0xa124d0a4u,
    0x3f5c4a55u, 0xdd93c406u, 0x7bcb3db7u, 0x1a02b768u, 0xb83a3119u, 0x5671aacau, 0xf4a9247bu, 0x92e09e2cu,
    0x311817ddu, 0xcf4f918eu, 0x6d870b3fu, 0x0bbe84f0u, 0xa9f5fea1u, 0x482d7852u, 0xe664f203u, 0x849c6bb4u,
    0x22d3e565u, 0xc10b5f16u, 0x5f42d8c7u, 0xfd7a5278u, 0x9bb1cc29u, 0x39e945dau, 0xd820bf8bu, 0x7658393cu,
};

static const uint32_t bshim_061_tab7[96] = {
    0x4171254eu, 0xdfa89effu, 0x7de018b0u, 0x1c179261u, 0xba4f0c12u, 0x588685c3u, 0xf6bdff74u, 0x94f57925u,
    0x332cf2d6u, 0xd1646c87u, 0x6f9be638u, 0x0dd35fe9u, 0xac0ad99au, 0x4a42534bu, 0xe879ccfcu, 0x86b146adu,
    0x24e8c05eu, 0xc3203a0fu, 0x6157b3c0u, 0xff8f2d71u, 0x9dc6a722u, 0x3bfe20d3u, 0xda359a84u, 0x786d1435u,
    0x16a48de6u, 0xb4dc0797u, 0x53138148u, 0xf14afaf9u, 0x8f8274aau, 0x2db9ee5bu, 0xcbf1680cu, 0x6a28e1bdu,
    0x08605b6eu, 0xa697d51fu, 0x44cf4ed0u, 0xe306c881u, 0x813e4232u, 0x1f75bbe3u, 0xbdad3594u, 0x5be4af45u,
    0xfa1c28f6u, 0x9853a2a7u, 0x368b1c58u, 0xd4c29609u, 0x72fa0fbau, 0x1131896bu, 0xaf69031cu, 0x4da07ccdu,
    0xebd7f67eu, 0x8a0f702fu, 0x2846e9e0u, 0xc67e6391u, 0x64b5dd42u, 0x02ed56f3u, 0xa124d0a4u, 0x3f5c4a55u,
    0xdd93c406u, 0x7bcb3db7u, 0x1a02b768u, 0xb83a3119u, 0x5671aacau, 0xf4a9247bu, 0x92e09e2cu, 0x311817ddu,
    0xcf4f918eu, 0x6d870b3fu, 0x0bbe84f0u, 0xa9f5fea1u, 0x482d7852u, 0xe664f203u, 0x849c6bb4u, 0x22d3e565u,
    0xc10b5f16u, 0x5f42d8c7u, 0xfd7a5278u, 0x9bb1cc29u, 0x39e945dau, 0xd820bf8bu, 0x7658393cu, 0x148fb2edu,
    0xb2c72c9eu, 0x50fea64fu, 0xef362000u, 0x8d6d99b1u, 0x2ba51362u, 0xc9dc8d13u, 0x681406c4u, 0x064b8075u,
    0xa482fa26u, 0x42ba73d7u, 0xe0f1ed88u, 0x7f296739u, 0x1d60e0eau, 0xbb985a9bu, 0x59cfd44cu, 0xf8074dfdu,
};

struct bshim_061_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_061_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_061_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_061_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_061_reset(struct bshim_061_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00075ef3u;
    return 0;
}

