/* bshim_062 -- board support shim generated from the 0062 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_062_tab0[96] = {
    0xac0ad99au, 0x4a42534bu, 0xe879ccfcu, 0x86b146adu, 0x24e8c05eu, 0xc3203a0fu, 0x6157b3c0u, 0xff8f2d71u,
    0x9dc6a722u, 0x3bfe20d3u, 0xda359a84u, 0x786d1435u, 0x16a48de6u, 0xb4dc0797u, 0x53138148u, 0xf14afaf9u,
    0x8f8274aau, 0x2db9ee5bu, 0xcbf1680cu, 0x6a28e1bdu, 0x08605b6eu, 0xa697d51fu, 0x44cf4ed0u, 0xe306c881u,
    0x813e4232u, 0x1f75bbe3u, 0xbdad3594u, 0x5be4af45u, 0xfa1c28f6u, 0x9853a2a7u, 0x368b1c58u, 0xd4c29609u,
    0x72fa0fbau, 0x1131896bu, 0xaf69031cu, 0x4da07ccdu, 0xebd7f67eu, 0x8a0f702fu, 0x2846e9e0u, 0xc67e6391u,
    0x64b5dd42u, 0x02ed56f3u, 0xa124d0a4u, 0x3f5c4a55u, 0xdd93c406u, 0x7bcb3db7u, 0x1a02b768u, 0xb83a3119u,
    0x5671aacau, 0xf4a9247bu, 0x92e09e2cu, 0x311817ddu, 0xcf4f918eu, 0x6d870b3fu, 0x0bbe84f0u, 0xa9f5fea1u,
    0x482d7852u, 0xe664f203u, 0x849c6bb4u, 0x22d3e565u, 0xc10b5f16u, 0x5f42d8c7u, 0xfd7a5278u, 0x9bb1cc29u,
    0x39e945dau, 0xd820bf8bu, 0x7658393cu, 0x148fb2edu, 0xb2c72c9eu, 0x50fea64fu, 0xef362000u, 0x8d6d99b1u,
    0x2ba51362u, 0xc9dc8d13u, 0x681406c4u, 0x064b8075u, 0xa482fa26u, 0x42ba73d7u, 0xe0f1ed88u, 0x7f296739u,
    0x1d60e0eau, 0xbb985a9bu, 0x59cfd44cu, 0xf8074dfdu, 0x963ec7aeu, 0x3476415fu, 0xd2adbb10u, 0x70e534c1u,
    0x0f1cae72u, 0xad542823u, 0x4b8ba1d4u, 0xe9c31b85u, 0x87fa9536u, 0x26320ee7u, 0xc4698898u, 0x62a10249u,
};

static const uint32_t bshim_062_tab1[96] = {
    0x2db9ee5bu, 0xcbf1680cu, 0x6a28e1bdu, 0x08605b6eu, 0xa697d51fu, 0x44cf4ed0u, 0xe306c881u, 0x813e4232u,
    0x1f75bbe3u, 0xbdad3594u, 0x5be4af45u, 0xfa1c28f6u, 0x9853a2a7u, 0x368b1c58u, 0xd4c29609u, 0x72fa0fbau,
    0x1131896bu, 0xaf69031cu, 0x4da07ccdu, 0xebd7f67eu, 0x8a0f702fu, 0x2846e9e0u, 0xc67e6391u, 0x64b5dd42u,
    0x02ed56f3u, 0xa124d0a4u, 0x3f5c4a55u, 0xdd93c406u, 0x7bcb3db7u, 0x1a02b768u, 0xb83a3119u, 0x5671aacau,
    0xf4a9247bu, 0x92e09e2cu, 0x311817ddu, 0xcf4f918eu, 0x6d870b3fu, 0x0bbe84f0u, 0xa9f5fea1u, 0x482d7852u,
    0xe664f203u, 0x849c6bb4u, 0x22d3e565u, 0xc10b5f16u, 0x5f42d8c7u, 0xfd7a5278u, 0x9bb1cc29u, 0x39e945dau,
    0xd820bf8bu, 0x7658393cu, 0x148fb2edu, 0xb2c72c9eu, 0x50fea64fu, 0xef362000u, 0x8d6d99b1u, 0x2ba51362u,
    0xc9dc8d13u, 0x681406c4u, 0x064b8075u, 0xa482fa26u, 0x42ba73d7u, 0xe0f1ed88u, 0x7f296739u, 0x1d60e0eau,
    0xbb985a9bu, 0x59cfd44cu, 0xf8074dfdu, 0x963ec7aeu, 0x3476415fu, 0xd2adbb10u, 0x70e534c1u, 0x0f1cae72u,
    0xad542823u, 0x4b8ba1d4u, 0xe9c31b85u, 0x87fa9536u, 0x26320ee7u, 0xc4698898u, 0x62a10249u, 0x00d87bfau,
    0x9f0ff5abu, 0x3d476f5cu, 0xdb7ee90du, 0x79b662beu, 0x17eddc6fu, 0xb6255620u, 0x545ccfd1u, 0xf2944982u,
    0x90cbc333u, 0x2f033ce4u, 0xcd3ab695u, 0x6b723046u, 0x09a9a9f7u, 0xa7e123a8u, 0x46189d59u, 0xe450170au,
};

static const uint32_t bshim_062_tab2[96] = {
    0xaf69031cu, 0x4da07ccdu, 0xebd7f67eu, 0x8a0f702fu, 0x2846e9e0u, 0xc67e6391u, 0x64b5dd42u, 0x02ed56f3u,
    0xa124d0a4u, 0x3f5c4a55u, 0xdd93c406u, 0x7bcb3db7u, 0x1a02b768u, 0xb83a3119u, 0x5671aacau, 0xf4a9247bu,
    0x92e09e2cu, 0x311817ddu, 0xcf4f918eu, 0x6d870b3fu, 0x0bbe84f0u, 0xa9f5fea1u, 0x482d7852u, 0xe664f203u,
    0x849c6bb4u, 0x22d3e565u, 0xc10b5f16u, 0x5f42d8c7u, 0xfd7a5278u, 0x9bb1cc29u, 0x39e945dau, 0xd820bf8bu,
    0x7658393cu, 0x148fb2edu, 0xb2c72c9eu, 0x50fea64fu, 0xef362000u, 0x8d6d99b1u, 0x2ba51362u, 0xc9dc8d13u,
    0x681406c4u, 0x064b8075u, 0xa482fa26u, 0x42ba73d7u, 0xe0f1ed88u, 0x7f296739u, 0x1d60e0eau, 0xbb985a9bu,
    0x59cfd44cu, 0xf8074dfdu, 0x963ec7aeu, 0x3476415fu, 0xd2adbb10u, 0x70e534c1u, 0x0f1cae72u, 0xad542823u,
    0x4b8ba1d4u, 0xe9c31b85u, 0x87fa9536u, 0x26320ee7u, 0xc4698898u, 0x62a10249u, 0x00d87bfau, 0x9f0ff5abu,
    0x3d476f5cu, 0xdb7ee90du, 0x79b662beu, 0x17eddc6fu, 0xb6255620u, 0x545ccfd1u, 0xf2944982u, 0x90cbc333u,
    0x2f033ce4u, 0xcd3ab695u, 0x6b723046u, 0x09a9a9f7u, 0xa7e123a8u, 0x46189d59u, 0xe450170au, 0x828790bbu,
    0x20bf0a6cu, 0xbef6841du, 0x5d2dfdceu, 0xfb65777fu, 0x999cf130u, 0x37d46ae1u, 0xd60be492u, 0x74435e43u,
    0x127ad7f4u, 0xb0b251a5u, 0x4ee9cb56u, 0xed214507u, 0x8b58beb8u, 0x29903869u, 0xc7c7b21au, 0x65ff2bcbu,
};

static const uint32_t bshim_062_tab3[96] = {
    0x311817ddu, 0xcf4f918eu, 0x6d870b3fu, 0x0bbe84f0u, 0xa9f5fea1u, 0x482d7852u, 0xe664f203u, 0x849c6bb4u,
    0x22d3e565u, 0xc10b5f16u, 0x5f42d8c7u, 0xfd7a5278u, 0x9bb1cc29u, 0x39e945dau, 0xd820bf8bu, 0x7658393cu,
    0x148fb2edu, 0xb2c72c9eu, 0x50fea64fu, 0xef362000u, 0x8d6d99b1u, 0x2ba51362u, 0xc9dc8d13u, 0x681406c4u,
    0x064b8075u, 0xa482fa26u, 0x42ba73d7u, 0xe0f1ed88u, 0x7f296739u, 0x1d60e0eau, 0xbb985a9bu, 0x59cfd44cu,
    0xf8074dfdu, 0x963ec7aeu, 0x3476415fu, 0xd2adbb10u, 0x70e534c1u, 0x0f1cae72u, 0xad542823u, 0x4b8ba1d4u,
    0xe9c31b85u, 0x87fa9536u, 0x26320ee7u, 0xc4698898u, 0x62a10249u, 0x00d87bfau, 0x9f0ff5abu, 0x3d476f5cu,
    0xdb7ee90du, 0x79b662beu, 0x17eddc6fu, 0xb6255620u, 0x545ccfd1u, 0xf2944982u, 0x90cbc333u, 0x2f033ce4u,
    0xcd3ab695u, 0x6b723046u, 0x09a9a9f7u, 0xa7e123a8u, 0x46189d59u, 0xe450170au, 0x828790bbu, 0x20bf0a6cu,
    0xbef6841du, 0x5d2dfdceu, 0xfb65777fu, 0x999cf130u, 0x37d46ae1u, 0xd60be492u, 0x74435e43u, 0x127ad7f4u,
    0xb0b251a5u, 0x4ee9cb56u, 0xed214507u, 0x8b58beb8u, 0x29903869u, 0xc7c7b21au, 0x65ff2bcbu, 0x0436a57cu,
    0xa26e1f2du, 0x40a598deu, 0xdedd128fu, 0x7d148c40u, 0x1b4c05f1u, 0xb9837fa2u, 0x57baf953u, 0xf5f27304u,
    0x9429ecb5u, 0x32616666u, 0xd098e017u, 0x6ed059c8u, 0x0d07d379u, 0xab3f4d2au, 0x4976c6dbu, 0xe7ae408cu,
};

static const uint32_t bshim_062_tab4[96] = {
    0xb2c72c9eu, 0x50fea64fu, 0xef362000u, 0x8d6d99b1u, 0x2ba51362u, 0xc9dc8d13u, 0x681406c4u, 0x064b8075u,
    0xa482fa26u, 0x42ba73d7u, 0xe0f1ed88u, 0x7f296739u, 0x1d60e0eau, 0xbb985a9bu, 0x59cfd44cu, 0xf8074dfdu,
    0x963ec7aeu, 0x3476415fu, 0xd2adbb10u, 0x70e534c1u, 0x0f1cae72u, 0xad542823u, 0x4b8ba1d4u, 0xe9c31b85u,
    0x87fa9536u, 0x26320ee7u, 0xc4698898u, 0x62a10249u, 0x00d87bfau, 0x9f0ff5abu, 0x3d476f5cu, 0xdb7ee90du,
    0x79b662beu, 0x17eddc6fu, 0xb6255620u, 0x545ccfd1u, 0xf2944982u, 0x90cbc333u, 0x2f033ce4u, 0xcd3ab695u,
    0x6b723046u, 0x09a9a9f7u, 0xa7e123a8u, 0x46189d59u, 0xe450170au, 0x828790bbu, 0x20bf0a6cu, 0xbef6841du,
    0x5d2dfdceu, 0xfb65777fu, 0x999cf130u, 0x37d46ae1u, 0xd60be492u, 0x74435e43u, 0x127ad7f4u, 0xb0b251a5u,
    0x4ee9cb56u, 0xed214507u, 0x8b58beb8u, 0x29903869u, 0xc7c7b21au, 0x65ff2bcbu, 0x0436a57cu, 0xa26e1f2du,
    0x40a598deu, 0xdedd128fu, 0x7d148c40u, 0x1b4c05f1u, 0xb9837fa2u, 0x57baf953u, 0xf5f27304u, 0x9429ecb5u,
    0x32616666u, 0xd098e017u, 0x6ed059c8u, 0x0d07d379u, 0xab3f4d2au, 0x4976c6dbu, 0xe7ae408cu, 0x85e5ba3du,
    0x241d33eeu, 0xc254ad9fu, 0x608c2750u, 0xfec3a101u, 0x9cfb1ab2u, 0x3b329463u, 0xd96a0e14u, 0x77a187c5u,
    0x15d90176u, 0xb4107b27u, 0x5247f4d8u, 0xf07f6e89u, 0x8eb6e83au, 0x2cee61ebu, 0xcb25db9cu, 0x695d554du,
};

static const uint32_t bshim_062_tab5[96] = {
    0x3476415fu, 0xd2adbb10u, 0x70e534c1u, 0x0f1cae72u, 0xad542823u, 0x4b8ba1d4u, 0xe9c31b85u, 0x87fa9536u,
    0x26320ee7u, 0xc4698898u, 0x62a10249u, 0x00d87bfau, 0x9f0ff5abu, 0x3d476f5cu, 0xdb7ee90du, 0x79b662beu,
    0x17eddc6fu, 0xb6255620u, 0x545ccfd1u, 0xf2944982u, 0x90cbc333u, 0x2f033ce4u, 0xcd3ab695u, 0x6b723046u,
    0x09a9a9f7u, 0xa7e123a8u, 0x46189d59u, 0xe450170au, 0x828790bbu, 0x20bf0a6cu, 0xbef6841du, 0x5d2dfdceu,
    0xfb65777fu, 0x999cf130u, 0x37d46ae1u, 0xd60be492u, 0x74435e43u, 0x127ad7f4u, 0xb0b251a5u, 0x4ee9cb56u,
    0xed214507u, 0x8b58beb8u, 0x29903869u, 0xc7c7b21au, 0x65ff2bcbu, 0x0436a57cu, 0xa26e1f2du, 0x40a598deu,
    0xdedd128fu, 0x7d148c40u, 0x1b4c05f1u, 0xb9837fa2u, 0x57baf953u, 0xf5f27304u, 0x9429ecb5u, 0x32616666u,
    0xd098e017u, 0x6ed059c8u, 0x0d07d379u, 0xab3f4d2au, 0x4976c6dbu, 0xe7ae408cu, 0x85e5ba3du, 0x241d33eeu,
    0xc254ad9fu, 0x608c2750u, 0xfec3a101u, 0x9cfb1ab2u, 0x3b329463u, 0xd96a0e14u, 0x77a187c5u, 0x15d90176u,
    0xb4107b27u, 0x5247f4d8u, 0xf07f6e89u, 0x8eb6e83au, 0x2cee61ebu, 0xcb25db9cu, 0x695d554du, 0x0794cefeu,
    0xa5cc48afu, 0x4403c260u, 0xe23b3c11u, 0x8072b5c2u, 0x1eaa2f73u, 0xbce1a924u, 0x5b1922d5u, 0xf9509c86u,
    0x97881637u, 0x35bf8fe8u, 0xd3f70999u, 0x722e834au, 0x1065fcfbu, 0xae9d76acu, 0x4cd4f05du, 0xeb0c6a0eu,
};

static const uint32_t bshim_062_tab6[96] = {
    0xb6255620u, 0x545ccfd1u, 0xf2944982u, 0x90cbc333u, 0x2f033ce4u, 0xcd3ab695u, 0x6b723046u, 0x09a9a9f7u,
    0xa7e123a8u, 0x46189d59u, 0xe450170au, 0x828790bbu, 0x20bf0a6cu, 0xbef6841du, 0x5d2dfdceu, 0xfb65777fu,
    0x999cf130u, 0x37d46ae1u, 0xd60be492u, 0x74435e43u, 0x127ad7f4u, 0xb0b251a5u, 0x4ee9cb56u, 0xed214507u,
    0x8b58beb8u, 0x29903869u, 0xc7c7b21au, 0x65ff2bcbu, 0x0436a57cu, 0xa26e1f2du, 0x40a598deu, 0xdedd128fu,
    0x7d148c40u, 0x1b4c05f1u, 0xb9837fa2u, 0x57baf953u, 0xf5f27304u, 0x9429ecb5u, 0x32616666u, 0xd098e017u,
    0x6ed059c8u, 0x0d07d379u, 0xab3f4d2au, 0x4976c6dbu, 0xe7ae408cu, 0x85e5ba3du, 0x241d33eeu, 0xc254ad9fu,
    0x608c2750u, 0xfec3a101u, 0x9cfb1ab2u, 0x3b329463u, 0xd96a0e14u, 0x77a187c5u, 0x15d90176u, 0xb4107b27u,
    0x5247f4d8u, 0xf07f6e89u, 0x8eb6e83au, 0x2cee61ebu, 0xcb25db9cu, 0x695d554du, 0x0794cefeu, 0xa5cc48afu,
    0x4403c260u, 0xe23b3c11u, 0x8072b5c2u, 0x1eaa2f73u, 0xbce1a924u, 0x5b1922d5u, 0xf9509c86u, 0x97881637u,
    0x35bf8fe8u, 0xd3f70999u, 0x722e834au, 0x1065fcfbu, 0xae9d76acu, 0x4cd4f05du, 0xeb0c6a0eu, 0x8943e3bfu,
    0x277b5d70u, 0xc5b2d721u, 0x63ea50d2u, 0x0221ca83u, 0xa0594434u, 0x3e90bde5u, 0xdcc83796u, 0x7affb147u,
    0x19372af8u, 0xb76ea4a9u, 0x55a61e5au, 0xf3dd980bu, 0x921511bcu, 0x304c8b6du, 0xce84051eu, 0x6cbb7ecfu,
};

static const uint32_t bshim_062_tab7[96] = {
    0x37d46ae1u, 0xd60be492u, 0x74435e43u, 0x127ad7f4u, 0xb0b251a5u, 0x4ee9cb56u, 0xed214507u, 0x8b58beb8u,
    0x29903869u, 0xc7c7b21au, 0x65ff2bcbu, 0x0436a57cu, 0xa26e1f2du, 0x40a598deu, 0xdedd128fu, 0x7d148c40u,
    0x1b4c05f1u, 0xb9837fa2u, 0x57baf953u, 0xf5f27304u, 0x9429ecb5u, 0x32616666u, 0xd098e017u, 0x6ed059c8u,
    0x0d07d379u, 0xab3f4d2au, 0x4976c6dbu, 0xe7ae408cu, 0x85e5ba3du, 0x241d33eeu, 0xc254ad9fu, 0x608c2750u,
    0xfec3a101u, 0x9cfb1ab2u, 0x3b329463u, 0xd96a0e14u, 0x77a187c5u, 0x15d90176u, 0xb4107b27u, 0x5247f4d8u,
    0xf07f6e89u, 0x8eb6e83au, 0x2cee61ebu, 0xcb25db9cu, 0x695d554du, 0x0794cefeu, 0xa5cc48afu, 0x4403c260u,
    0xe23b3c11u, 0x8072b5c2u, 0x1eaa2f73u, 0xbce1a924u, 0x5b1922d5u, 0xf9509c86u, 0x97881637u, 0x35bf8fe8u,
    0xd3f70999u, 0x722e834au, 0x1065fcfbu, 0xae9d76acu, 0x4cd4f05du, 0xeb0c6a0eu, 0x8943e3bfu, 0x277b5d70u,
    0xc5b2d721u, 0x63ea50d2u, 0x0221ca83u, 0xa0594434u, 0x3e90bde5u, 0xdcc83796u, 0x7affb147u, 0x19372af8u,
    0xb76ea4a9u, 0x55a61e5au, 0xf3dd980bu, 0x921511bcu, 0x304c8b6du, 0xce84051eu, 0x6cbb7ecfu, 0x0af2f880u,
    0xa92a7231u, 0x4761ebe2u, 0xe5996593u, 0x83d0df44u, 0x220858f5u, 0xc03fd2a6u, 0x5e774c57u, 0xfcaec608u,
    0x9ae63fb9u, 0x391db96au, 0xd755331bu, 0x758cacccu, 0x13c4267du, 0xb1fba02eu, 0x503319dfu, 0xee6a9390u,
};

struct bshim_062_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_062_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_062_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_062_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_062_reset(struct bshim_062_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00077de2u;
    return 0;
}

