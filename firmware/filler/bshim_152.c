/* bshim_152 -- board support shim generated from the 0152 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_152_tab0[96] = {
    0x4af14f48u, 0xe928c8f9u, 0x876042aau, 0x2597bc5bu, 0xc3cf360cu, 0x6206afbdu, 0x003e296eu, 0x9e75a31fu,
    0x3cad1cd0u, 0xdae49681u, 0x791c1032u, 0x175389e3u, 0xb58b0394u, 0x53c27d45u, 0xf1f9f6f6u, 0x903170a7u,
    0x2e68ea58u, 0xcca06409u, 0x6ad7ddbau, 0x090f576bu, 0xa746d11cu, 0x457e4acdu, 0xe3b5c47eu, 0x81ed3e2fu,
    0x2024b7e0u, 0xbe5c3191u, 0x5c93ab42u, 0xfacb24f3u, 0x99029ea4u, 0x373a1855u, 0xd5719206u, 0x73a90bb7u,
    0x11e08568u, 0xb017ff19u, 0x4e4f78cau, 0xec86f27bu, 0x8abe6c2cu, 0x28f5e5ddu, 0xc72d5f8eu, 0x6564d93fu,
    0x039c52f0u, 0xa1d3cca1u, 0x400b4652u, 0xde42c003u, 0x7c7a39b4u, 0x1ab1b365u, 0xb8e92d16u, 0x5720a6c7u,
    0xf5582078u, 0x938f9a29u, 0x31c713dau, 0xcffe8d8bu, 0x6e36073cu, 0x0c6d80edu, 0xaaa4fa9eu, 0x48dc744fu,
    0xe713ee00u, 0x854b67b1u, 0x2382e162u, 0xc1ba5b13u, 0x5ff1d4c4u, 0xfe294e75u, 0x9c60c826u, 0x3a9841d7u,
    0xd8cfbb88u, 0x77073539u, 0x153eaeeau, 0xb376289bu, 0x51ada24cu, 0xefe51bfdu, 0x8e1c95aeu, 0x2c540f5fu,
    0xca8b8910u, 0x68c302c1u, 0x06fa7c72u, 0xa531f623u, 0x43696fd4u, 0xe1a0e985u, 0x7fd86336u, 0x1e0fdce7u,
    0xbc475698u, 0x5a7ed049u, 0xf8b649fau, 0x96edc3abu, 0x35253d5cu, 0xd35cb70du, 0x719430beu, 0x0fcbaa6fu,
    0xae032420u, 0x4c3a9dd1u, 0xea721782u, 0x88a99133u, 0x26e10ae4u, 0xc5188495u, 0x634ffe46u, 0x018777f7u,
};

static const uint32_t bshim_152_tab1[96] = {
    0xcca06409u, 0x6ad7ddbau, 0x090f576bu, 0xa746d11cu, 0x457e4acdu, 0xe3b5c47eu, 0x81ed3e2fu, 0x2024b7e0u,
    0xbe5c3191u, 0x5c93ab42u, 0xfacb24f3u, 0x99029ea4u, 0x373a1855u, 0xd5719206u, 0x73a90bb7u, 0x11e08568u,
    0xb017ff19u, 0x4e4f78cau, 0xec86f27bu, 0x8abe6c2cu, 0x28f5e5ddu, 0xc72d5f8eu, 0x6564d93fu, 0x039c52f0u,
    0xa1d3cca1u, 0x400b4652u, 0xde42c003u, 0x7c7a39b4u, 0x1ab1b365u, 0xb8e92d16u, 0x5720a6c7u, 0xf5582078u,
    0x938f9a29u, 0x31c713dau, 0xcffe8d8bu, 0x6e36073cu, 0x0c6d80edu, 0xaaa4fa9eu, 0x48dc744fu, 0xe713ee00u,
    0x854b67b1u, 0x2382e162u, 0xc1ba5b13u, 0x5ff1d4c4u, 0xfe294e75u, 0x9c60c826u, 0x3a9841d7u, 0xd8cfbb88u,
    0x77073539u, 0x153eaeeau, 0xb376289bu, 0x51ada24cu, 0xefe51bfdu, 0x8e1c95aeu, 0x2c540f5fu, 0xca8b8910u,
    0x68c302c1u, 0x06fa7c72u, 0xa531f623u, 0x43696fd4u, 0xe1a0e985u, 0x7fd86336u, 0x1e0fdce7u, 0xbc475698u,
    0x5a7ed049u, 0xf8b649fau, 0x96edc3abu, 0x35253d5cu, 0xd35cb70du, 0x719430beu, 0x0fcbaa6fu, 0xae032420u,
    0x4c3a9dd1u, 0xea721782u, 0x88a99133u, 0x26e10ae4u, 0xc5188495u, 0x634ffe46u, 0x018777f7u, 0x9fbef1a8u,
    0x3df66b59u, 0xdc2de50au, 0x7a655ebbu, 0x189cd86cu, 0xb6d4521du, 0x550bcbceu, 0xf343457fu, 0x917abf30u,
    0x2fb238e1u, 0xcde9b292u, 0x6c212c43u, 0x0a58a5f4u, 0xa8901fa5u, 0x46c79956u, 0xe4ff1307u, 0x83368cb8u,
};

static const uint32_t bshim_152_tab2[96] = {
    0x4e4f78cau, 0xec86f27bu, 0x8abe6c2cu, 0x28f5e5ddu, 0xc72d5f8eu, 0x6564d93fu, 0x039c52f0u, 0xa1d3cca1u,
    0x400b4652u, 0xde42c003u, 0x7c7a39b4u, 0x1ab1b365u, 0xb8e92d16u, 0x5720a6c7u, 0xf5582078u, 0x938f9a29u,
    0x31c713dau, 0xcffe8d8bu, 0x6e36073cu, 0x0c6d80edu, 0xaaa4fa9eu, 0x48dc744fu, 0xe713ee00u, 0x854b67b1u,
    0x2382e162u, 0xc1ba5b13u, 0x5ff1d4c4u, 0xfe294e75u, 0x9c60c826u, 0x3a9841d7u, 0xd8cfbb88u, 0x77073539u,
    0x153eaeeau, 0xb376289bu, 0x51ada24cu, 0xefe51bfdu, 0x8e1c95aeu, 0x2c540f5fu, 0xca8b8910u, 0x68c302c1u,
    0x06fa7c72u, 0xa531f623u, 0x43696fd4u, 0xe1a0e985u, 0x7fd86336u, 0x1e0fdce7u, 0xbc475698u, 0x5a7ed049u,
    0xf8b649fau, 0x96edc3abu, 0x35253d5cu, 0xd35cb70du, 0x719430beu, 0x0fcbaa6fu, 0xae032420u, 0x4c3a9dd1u,
    0xea721782u, 0x88a99133u, 0x26e10ae4u, 0xc5188495u, 0x634ffe46u, 0x018777f7u, 0x9fbef1a8u, 0x3df66b59u,
    0xdc2de50au, 0x7a655ebbu, 0x189cd86cu, 0xb6d4521du, 0x550bcbceu, 0xf343457fu, 0x917abf30u, 0x2fb238e1u,
    0xcde9b292u, 0x6c212c43u, 0x0a58a5f4u, 0xa8901fa5u, 0x46c79956u, 0xe4ff1307u, 0x83368cb8u, 0x216e0669u,
    0xbfa5801au, 0x5ddcf9cbu, 0xfc14737cu, 0x9a4bed2du, 0x388366deu, 0xd6bae08fu, 0x74f25a40u, 0x1329d3f1u,
    0xb1614da2u, 0x4f98c753u, 0xedd04104u, 0x8c07bab5u, 0x2a3f3466u, 0xc876ae17u, 0x66ae27c8u, 0x04e5a179u,
};

static const uint32_t bshim_152_tab3[96] = {
    0xcffe8d8bu, 0x6e36073cu, 0x0c6d80edu, 0xaaa4fa9eu, 0x48dc744fu, 0xe713ee00u, 0x854b67b1u, 0x2382e162u,
    0xc1ba5b13u, 0x5ff1d4c4u, 0xfe294e75u, 0x9c60c826u, 0x3a9841d7u, 0xd8cfbb88u, 0x77073539u, 0x153eaeeau,
    0xb376289bu, 0x51ada24cu, 0xefe51bfdu, 0x8e1c95aeu, 0x2c540f5fu, 0xca8b8910u, 0x68c302c1u, 0x06fa7c72u,
    0xa531f623u, 0x43696fd4u, 0xe1a0e985u, 0x7fd86336u, 0x1e0fdce7u, 0xbc475698u, 0x5a7ed049u, 0xf8b649fau,
    0x96edc3abu, 0x35253d5cu, 0xd35cb70du, 0x719430beu, 0x0fcbaa6fu, 0xae032420u, 0x4c3a9dd1u, 0xea721782u,
    0x88a99133u, 0x26e10ae4u, 0xc5188495u, 0x634ffe46u, 0x018777f7u, 0x9fbef1a8u, 0x3df66b59u, 0xdc2de50au,
    0x7a655ebbu, 0x189cd86cu, 0xb6d4521du, 0x550bcbceu, 0xf343457fu, 0x917abf30u, 0x2fb238e1u, 0xcde9b292u,
    0x6c212c43u, 0x0a58a5f4u, 0xa8901fa5u, 0x46c79956u, 0xe4ff1307u, 0x83368cb8u, 0x216e0669u, 0xbfa5801au,
    0x5ddcf9cbu, 0xfc14737cu, 0x9a4bed2du, 0x388366deu, 0xd6bae08fu, 0x74f25a40u, 0x1329d3f1u, 0xb1614da2u,
    0x4f98c753u, 0xedd04104u, 0x8c07bab5u, 0x2a3f3466u, 0xc876ae17u, 0x66ae27c8u, 0x04e5a179u, 0xa31d1b2au,
    0x415494dbu, 0xdf8c0e8cu, 0x7dc3883du, 0x1bfb01eeu, 0xba327b9fu, 0x5869f550u, 0xf6a16f01u, 0x94d8e8b2u,
    0x33106263u, 0xd147dc14u, 0x6f7f55c5u, 0x0db6cf76u, 0xabee4927u, 0x4a25c2d8u, 0xe85d3c89u, 0x8694b63au,
};

static const uint32_t bshim_152_tab4[96] = {
    0x51ada24cu, 0xefe51bfdu, 0x8e1c95aeu, 0x2c540f5fu, 0xca8b8910u, 0x68c302c1u, 0x06fa7c72u, 0xa531f623u,
    0x43696fd4u, 0xe1a0e985u, 0x7fd86336u, 0x1e0fdce7u, 0xbc475698u, 0x5a7ed049u, 0xf8b649fau, 0x96edc3abu,
    0x35253d5cu, 0xd35cb70du, 0x719430beu, 0x0fcbaa6fu, 0xae032420u, 0x4c3a9dd1u, 0xea721782u, 0x88a99133u,
    0x26e10ae4u, 0xc5188495u, 0x634ffe46u, 0x018777f7u, 0x9fbef1a8u, 0x3df66b59u, 0xdc2de50au, 0x7a655ebbu,
    0x189cd86cu, 0xb6d4521du, 0x550bcbceu, 0xf343457fu, 0x917abf30u, 0x2fb238e1u, 0xcde9b292u, 0x6c212c43u,
    0x0a58a5f4u, 0xa8901fa5u, 0x46c79956u, 0xe4ff1307u, 0x83368cb8u, 0x216e0669u, 0xbfa5801au, 0x5ddcf9cbu,
    0xfc14737cu, 0x9a4bed2du, 0x388366deu, 0xd6bae08fu, 0x74f25a40u, 0x1329d3f1u, 0xb1614da2u, 0x4f98c753u,
    0xedd04104u, 0x8c07bab5u, 0x2a3f3466u, 0xc876ae17u, 0x66ae27c8u, 0x04e5a179u, 0xa31d1b2au, 0x415494dbu,
    0xdf8c0e8cu, 0x7dc3883du, 0x1bfb01eeu, 0xba327b9fu, 0x5869f550u, 0xf6a16f01u, 0x94d8e8b2u, 0x33106263u,
    0xd147dc14u, 0x6f7f55c5u, 0x0db6cf76u, 0xabee4927u, 0x4a25c2d8u, 0xe85d3c89u, 0x8694b63au, 0x24cc2febu,
    0xc303a99cu, 0x613b234du, 0xff729cfeu, 0x9daa16afu, 0x3be19060u, 0xda190a11u, 0x785083c2u, 0x1687fd73u,
    0xb4bf7724u, 0x52f6f0d5u, 0xf12e6a86u, 0x8f65e437u, 0x2d9d5de8u, 0xcbd4d799u, 0x6a0c514au, 0x0843cafbu,
};

static const uint32_t bshim_152_tab5[96] = {
    0xd35cb70du, 0x719430beu, 0x0fcbaa6fu, 0xae032420u, 0x4c3a9dd1u, 0xea721782u, 0x88a99133u, 0x26e10ae4u,
    0xc5188495u, 0x634ffe46u, 0x018777f7u, 0x9fbef1a8u, 0x3df66b59u, 0xdc2de50au, 0x7a655ebbu, 0x189cd86cu,
    0xb6d4521du, 0x550bcbceu, 0xf343457fu, 0x917abf30u, 0x2fb238e1u, 0xcde9b292u, 0x6c212c43u, 0x0a58a5f4u,
    0xa8901fa5u, 0x46c79956u, 0xe4ff1307u, 0x83368cb8u, 0x216e0669u, 0xbfa5801au, 0x5ddcf9cbu, 0xfc14737cu,
    0x9a4bed2du, 0x388366deu, 0xd6bae08fu, 0x74f25a40u, 0x1329d3f1u, 0xb1614da2u, 0x4f98c753u, 0xedd04104u,
    0x8c07bab5u, 0x2a3f3466u, 0xc876ae17u, 0x66ae27c8u, 0x04e5a179u, 0xa31d1b2au, 0x415494dbu, 0xdf8c0e8cu,
    0x7dc3883du, 0x1bfb01eeu, 0xba327b9fu, 0x5869f550u, 0xf6a16f01u, 0x94d8e8b2u, 0x33106263u, 0xd147dc14u,
    0x6f7f55c5u, 0x0db6cf76u, 0xabee4927u, 0x4a25c2d8u, 0xe85d3c89u, 0x8694b63au, 0x24cc2febu, 0xc303a99cu,
    0x613b234du, 0xff729cfeu, 0x9daa16afu, 0x3be19060u, 0xda190a11u, 0x785083c2u, 0x1687fd73u, 0xb4bf7724u,
    0x52f6f0d5u, 0xf12e6a86u, 0x8f65e437u, 0x2d9d5de8u, 0xcbd4d799u, 0x6a0c514au, 0x0843cafbu, 0xa67b44acu,
    0x44b2be5du, 0xe2ea380eu, 0x8121b1bfu, 0x1f592b70u, 0xbd90a521u, 0x5bc81ed2u, 0xf9ff9883u, 0x98371234u,
    0x366e8be5u, 0xd4a60596u, 0x72dd7f47u, 0x1114f8f8u, 0xaf4c72a9u, 0x4d83ec5au, 0xebbb660bu, 0x89f2dfbcu,
};

static const uint32_t bshim_152_tab6[96] = {
    0x550bcbceu, 0xf343457fu, 0x917abf30u, 0x2fb238e1u, 0xcde9b292u, 0x6c212c43u, 0x0a58a5f4u, 0xa8901fa5u,
    0x46c79956u, 0xe4ff1307u, 0x83368cb8u, 0x216e0669u, 0xbfa5801au, 0x5ddcf9cbu, 0xfc14737cu, 0x9a4bed2du,
    0x388366deu, 0xd6bae08fu, 0x74f25a40u, 0x1329d3f1u, 0xb1614da2u, 0x4f98c753u, 0xedd04104u, 0x8c07bab5u,
    0x2a3f3466u, 0xc876ae17u, 0x66ae27c8u, 0x04e5a179u, 0xa31d1b2au, 0x415494dbu, 0xdf8c0e8cu, 0x7dc3883du,
    0x1bfb01eeu, 0xba327b9fu, 0x5869f550u, 0xf6a16f01u, 0x94d8e8b2u, 0x33106263u, 0xd147dc14u, 0x6f7f55c5u,
    0x0db6cf76u, 0xabee4927u, 0x4a25c2d8u, 0xe85d3c89u, 0x8694b63au, 0x24cc2febu, 0xc303a99cu, 0x613b234du,
    0xff729cfeu, 0x9daa16afu, 0x3be19060u, 0xda190a11u, 0x785083c2u, 0x1687fd73u, 0xb4bf7724u, 0x52f6f0d5u,
    0xf12e6a86u, 0x8f65e437u, 0x2d9d5de8u, 0xcbd4d799u, 0x6a0c514au, 0x0843cafbu, 0xa67b44acu, 0x44b2be5du,
    0xe2ea380eu, 0x8121b1bfu, 0x1f592b70u, 0xbd90a521u, 0x5bc81ed2u, 0xf9ff9883u, 0x98371234u, 0x366e8be5u,
    0xd4a60596u, 0x72dd7f47u, 0x1114f8f8u, 0xaf4c72a9u, 0x4d83ec5au, 0xebbb660bu, 0x89f2dfbcu, 0x282a596du,
    0xc661d31eu, 0x64994ccfu, 0x02d0c680u, 0xa1084031u, 0x3f3fb9e2u, 0xdd773393u, 0x7baead44u, 0x19e626f5u,
    0xb81da0a6u, 0x56551a57u, 0xf48c9408u, 0x92c40db9u, 0x30fb876au, 0xcf33011bu, 0x6d6a7accu, 0x0ba1f47du,
};

static const uint32_t bshim_152_tab7[96] = {
    0xd6bae08fu, 0x74f25a40u, 0x1329d3f1u, 0xb1614da2u, 0x4f98c753u, 0xedd04104u, 0x8c07bab5u, 0x2a3f3466u,
    0xc876ae17u, 0x66ae27c8u, 0x04e5a179u, 0xa31d1b2au, 0x415494dbu, 0xdf8c0e8cu, 0x7dc3883du, 0x1bfb01eeu,
    0xba327b9fu, 0x5869f550u, 0xf6a16f01u, 0x94d8e8b2u, 0x33106263u, 0xd147dc14u, 0x6f7f55c5u, 0x0db6cf76u,
    0xabee4927u, 0x4a25c2d8u, 0xe85d3c89u, 0x8694b63au, 0x24cc2febu, 0xc303a99cu, 0x613b234du, 0xff729cfeu,
    0x9daa16afu, 0x3be19060u, 0xda190a11u, 0x785083c2u, 0x1687fd73u, 0xb4bf7724u, 0x52f6f0d5u, 0xf12e6a86u,
    0x8f65e437u, 0x2d9d5de8u, 0xcbd4d799u, 0x6a0c514au, 0x0843cafbu, 0xa67b44acu, 0x44b2be5du, 0xe2ea380eu,
    0x8121b1bfu, 0x1f592b70u, 0xbd90a521u, 0x5bc81ed2u, 0xf9ff9883u, 0x98371234u, 0x366e8be5u, 0xd4a60596u,
    0x72dd7f47u, 0x1114f8f8u, 0xaf4c72a9u, 0x4d83ec5au, 0xebbb660bu, 0x89f2dfbcu, 0x282a596du, 0xc661d31eu,
    0x64994ccfu, 0x02d0c680u, 0xa1084031u, 0x3f3fb9e2u, 0xdd773393u, 0x7baead44u, 0x19e626f5u, 0xb81da0a6u,
    0x56551a57u, 0xf48c9408u, 0x92c40db9u, 0x30fb876au, 0xcf33011bu, 0x6d6a7accu, 0x0ba1f47du, 0xa9d96e2eu,
    0x4810e7dfu, 0xe6486190u, 0x847fdb41u, 0x22b754f2u, 0xc0eecea3u, 0x5f264854u, 0xfd5dc205u, 0x9b953bb6u,
    0x39ccb567u, 0xd8042f18u, 0x763ba8c9u, 0x1473227au, 0xb2aa9c2bu, 0x50e215dcu, 0xef198f8du, 0x8d51093eu,
};

struct bshim_152_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_152_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_152_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_152_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_152_reset(struct bshim_152_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00125de8u;
    return 0;
}

