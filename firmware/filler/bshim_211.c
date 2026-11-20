/* bshim_211 -- board support shim generated from the 0211 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_211_tab0[96] = {
    0x13d25829u, 0xb209d1dau, 0x50414b8bu, 0xee78c53cu, 0x8cb03eedu, 0x2ae7b89eu, 0xc91f324fu, 0x6756ac00u,
    0x058e25b1u, 0xa3c59f62u, 0x41fd1913u, 0xe03492c4u, 0x7e6c0c75u, 0x1ca38626u, 0xbadaffd7u, 0x59127988u,
    0xf749f339u, 0x95816ceau, 0x33b8e69bu, 0xd1f0604cu, 0x7027d9fdu, 0x0e5f53aeu, 0xac96cd5fu, 0x4ace4710u,
    0xe905c0c1u, 0x873d3a72u, 0x2574b423u, 0xc3ac2dd4u, 0x61e3a785u, 0x001b2136u, 0x9e529ae7u, 0x3c8a1498u,
    0xdac18e49u, 0x78f907fau, 0x173081abu, 0xb567fb5cu, 0x539f750du, 0xf1d6eebeu, 0x900e686fu, 0x2e45e220u,
    0xcc7d5bd1u, 0x6ab4d582u, 0x08ec4f33u, 0xa723c8e4u, 0x455b4295u, 0xe392bc46u, 0x81ca35f7u, 0x2001afa8u,
    0xbe392959u, 0x5c70a30au, 0xfaa81cbbu, 0x98df966cu, 0x3717101du, 0xd54e89ceu, 0x7386037fu, 0x11bd7d30u,
    0xaff4f6e1u, 0x4e2c7092u, 0xec63ea43u, 0x8a9b63f4u, 0x28d2dda5u, 0xc70a5756u, 0x6541d107u, 0x03794ab8u,
    0xa1b0c469u, 0x3fe83e1au, 0xde1fb7cbu, 0x7c57317cu, 0x1a8eab2du, 0xb8c624deu, 0x56fd9e8fu, 0xf5351840u,
    0x936c91f1u, 0x31a40ba2u, 0xcfdb8553u, 0x6e12ff04u, 0x0c4a78b5u, 0xaa81f266u, 0x48b96c17u, 0xe6f0e5c8u,
    0x85285f79u, 0x235fd92au, 0xc19752dbu, 0x5fcecc8cu, 0xfe06463du, 0x9c3dbfeeu, 0x3a75399fu, 0xd8acb350u,
    0x76e42d01u, 0x151ba6b2u, 0xb3532063u, 0x518a9a14u, 0xefc213c5u, 0x8df98d76u, 0x2c310727u, 0xca6880d8u,
};

static const uint32_t bshim_211_tab1[96] = {
    0x95816ceau, 0x33b8e69bu, 0xd1f0604cu, 0x7027d9fdu, 0x0e5f53aeu, 0xac96cd5fu, 0x4ace4710u, 0xe905c0c1u,
    0x873d3a72u, 0x2574b423u, 0xc3ac2dd4u, 0x61e3a785u, 0x001b2136u, 0x9e529ae7u, 0x3c8a1498u, 0xdac18e49u,
    0x78f907fau, 0x173081abu, 0xb567fb5cu, 0x539f750du, 0xf1d6eebeu, 0x900e686fu, 0x2e45e220u, 0xcc7d5bd1u,
    0x6ab4d582u, 0x08ec4f33u, 0xa723c8e4u, 0x455b4295u, 0xe392bc46u, 0x81ca35f7u, 0x2001afa8u, 0xbe392959u,
    0x5c70a30au, 0xfaa81cbbu, 0x98df966cu, 0x3717101du, 0xd54e89ceu, 0x7386037fu, 0x11bd7d30u, 0xaff4f6e1u,
    0x4e2c7092u, 0xec63ea43u, 0x8a9b63f4u, 0x28d2dda5u, 0xc70a5756u, 0x6541d107u, 0x03794ab8u, 0xa1b0c469u,
    0x3fe83e1au, 0xde1fb7cbu, 0x7c57317cu, 0x1a8eab2du, 0xb8c624deu, 0x56fd9e8fu, 0xf5351840u, 0x936c91f1u,
    0x31a40ba2u, 0xcfdb8553u, 0x6e12ff04u, 0x0c4a78b5u, 0xaa81f266u, 0x48b96c17u, 0xe6f0e5c8u, 0x85285f79u,
    0x235fd92au, 0xc19752dbu, 0x5fcecc8cu, 0xfe06463du, 0x9c3dbfeeu, 0x3a75399fu, 0xd8acb350u, 0x76e42d01u,
    0x151ba6b2u, 0xb3532063u, 0x518a9a14u, 0xefc213c5u, 0x8df98d76u, 0x2c310727u, 0xca6880d8u, 0x689ffa89u,
    0x06d7743au, 0xa50eedebu, 0x4346679cu, 0xe17de14du, 0x7fb55afeu, 0x1decd4afu, 0xbc244e60u, 0x5a5bc811u,
    0xf89341c2u, 0x96cabb73u, 0x35023524u, 0xd339aed5u, 0x71712886u, 0x0fa8a237u, 0xade01be8u, 0x4c179599u,
};

static const uint32_t bshim_211_tab2[96] = {
    0x173081abu, 0xb567fb5cu, 0x539f750du, 0xf1d6eebeu, 0x900e686fu, 0x2e45e220u, 0xcc7d5bd1u, 0x6ab4d582u,
    0x08ec4f33u, 0xa723c8e4u, 0x455b4295u, 0xe392bc46u, 0x81ca35f7u, 0x2001afa8u, 0xbe392959u, 0x5c70a30au,
    0xfaa81cbbu, 0x98df966cu, 0x3717101du, 0xd54e89ceu, 0x7386037fu, 0x11bd7d30u, 0xaff4f6e1u, 0x4e2c7092u,
    0xec63ea43u, 0x8a9b63f4u, 0x28d2dda5u, 0xc70a5756u, 0x6541d107u, 0x03794ab8u, 0xa1b0c469u, 0x3fe83e1au,
    0xde1fb7cbu, 0x7c57317cu, 0x1a8eab2du, 0xb8c624deu, 0x56fd9e8fu, 0xf5351840u, 0x936c91f1u, 0x31a40ba2u,
    0xcfdb8553u, 0x6e12ff04u, 0x0c4a78b5u, 0xaa81f266u, 0x48b96c17u, 0xe6f0e5c8u, 0x85285f79u, 0x235fd92au,
    0xc19752dbu, 0x5fcecc8cu, 0xfe06463du, 0x9c3dbfeeu, 0x3a75399fu, 0xd8acb350u, 0x76e42d01u, 0x151ba6b2u,
    0xb3532063u, 0x518a9a14u, 0xefc213c5u, 0x8df98d76u, 0x2c310727u, 0xca6880d8u, 0x689ffa89u, 0x06d7743au,
    0xa50eedebu, 0x4346679cu, 0xe17de14du, 0x7fb55afeu, 0x1decd4afu, 0xbc244e60u, 0x5a5bc811u, 0xf89341c2u,
    0x96cabb73u, 0x35023524u, 0xd339aed5u, 0x71712886u, 0x0fa8a237u, 0xade01be8u, 0x4c179599u, 0xea4f0f4au,
    0x888688fbu, 0x26be02acu, 0xc4f57c5du, 0x632cf60eu, 0x01646fbfu, 0x9f9be970u, 0x3dd36321u, 0xdc0adcd2u,
    0x7a425683u, 0x1879d034u, 0xb6b149e5u, 0x54e8c396u, 0xf3203d47u, 0x9157b6f8u, 0x2f8f30a9u, 0xcdc6aa5au,
};

static const uint32_t bshim_211_tab3[96] = {
    0x98df966cu, 0x3717101du, 0xd54e89ceu, 0x7386037fu, 0x11bd7d30u, 0xaff4f6e1u, 0x4e2c7092u, 0xec63ea43u,
    0x8a9b63f4u, 0x28d2dda5u, 0xc70a5756u, 0x6541d107u, 0x03794ab8u, 0xa1b0c469u, 0x3fe83e1au, 0xde1fb7cbu,
    0x7c57317cu, 0x1a8eab2du, 0xb8c624deu, 0x56fd9e8fu, 0xf5351840u, 0x936c91f1u, 0x31a40ba2u, 0xcfdb8553u,
    0x6e12ff04u, 0x0c4a78b5u, 0xaa81f266u, 0x48b96c17u, 0xe6f0e5c8u, 0x85285f79u, 0x235fd92au, 0xc19752dbu,
    0x5fcecc8cu, 0xfe06463du, 0x9c3dbfeeu, 0x3a75399fu, 0xd8acb350u, 0x76e42d01u, 0x151ba6b2u, 0xb3532063u,
    0x518a9a14u, 0xefc213c5u, 0x8df98d76u, 0x2c310727u, 0xca6880d8u, 0x689ffa89u, 0x06d7743au, 0xa50eedebu,
    0x4346679cu, 0xe17de14du, 0x7fb55afeu, 0x1decd4afu, 0xbc244e60u, 0x5a5bc811u, 0xf89341c2u, 0x96cabb73u,
    0x35023524u, 0xd339aed5u, 0x71712886u, 0x0fa8a237u, 0xade01be8u, 0x4c179599u, 0xea4f0f4au, 0x888688fbu,
    0x26be02acu, 0xc4f57c5du, 0x632cf60eu, 0x01646fbfu, 0x9f9be970u, 0x3dd36321u, 0xdc0adcd2u, 0x7a425683u,
    0x1879d034u, 0xb6b149e5u, 0x54e8c396u, 0xf3203d47u, 0x9157b6f8u, 0x2f8f30a9u, 0xcdc6aa5au, 0x6bfe240bu,
    0x0a359dbcu, 0xa86d176du, 0x46a4911eu, 0xe4dc0acfu, 0x83138480u, 0x214afe31u, 0xbf8277e2u, 0x5db9f193u,
    0xfbf16b44u, 0x9a28e4f5u, 0x38605ea6u, 0xd697d857u, 0x74cf5208u, 0x1306cbb9u, 0xb13e456au, 0x4f75bf1bu,
};

static const uint32_t bshim_211_tab4[96] = {
    0x1a8eab2du, 0xb8c624deu, 0x56fd9e8fu, 0xf5351840u, 0x936c91f1u, 0x31a40ba2u, 0xcfdb8553u, 0x6e12ff04u,
    0x0c4a78b5u, 0xaa81f266u, 0x48b96c17u, 0xe6f0e5c8u, 0x85285f79u, 0x235fd92au, 0xc19752dbu, 0x5fcecc8cu,
    0xfe06463du, 0x9c3dbfeeu, 0x3a75399fu, 0xd8acb350u, 0x76e42d01u, 0x151ba6b2u, 0xb3532063u, 0x518a9a14u,
    0xefc213c5u, 0x8df98d76u, 0x2c310727u, 0xca6880d8u, 0x689ffa89u, 0x06d7743au, 0xa50eedebu, 0x4346679cu,
    0xe17de14du, 0x7fb55afeu, 0x1decd4afu, 0xbc244e60u, 0x5a5bc811u, 0xf89341c2u, 0x96cabb73u, 0x35023524u,
    0xd339aed5u, 0x71712886u, 0x0fa8a237u, 0xade01be8u, 0x4c179599u, 0xea4f0f4au, 0x888688fbu, 0x26be02acu,
    0xc4f57c5du, 0x632cf60eu, 0x01646fbfu, 0x9f9be970u, 0x3dd36321u, 0xdc0adcd2u, 0x7a425683u, 0x1879d034u,
    0xb6b149e5u, 0x54e8c396u, 0xf3203d47u, 0x9157b6f8u, 0x2f8f30a9u, 0xcdc6aa5au, 0x6bfe240bu, 0x0a359dbcu,
    0xa86d176du, 0x46a4911eu, 0xe4dc0acfu, 0x83138480u, 0x214afe31u, 0xbf8277e2u, 0x5db9f193u, 0xfbf16b44u,
    0x9a28e4f5u, 0x38605ea6u, 0xd697d857u, 0x74cf5208u, 0x1306cbb9u, 0xb13e456au, 0x4f75bf1bu, 0xedad38ccu,
    0x8be4b27du, 0x2a1c2c2eu, 0xc853a5dfu, 0x668b1f90u, 0x04c29941u, 0xa2fa12f2u, 0x41318ca3u, 0xdf690654u,
    0x7da08005u, 0x1bd7f9b6u, 0xba0f7367u, 0x5846ed18u, 0xf67e66c9u, 0x94b5e07au, 0x32ed5a2bu, 0xd124d3dcu,
};

static const uint32_t bshim_211_tab5[96] = {
    0x9c3dbfeeu, 0x3a75399fu, 0xd8acb350u, 0x76e42d01u, 0x151ba6b2u, 0xb3532063u, 0x518a9a14u, 0xefc213c5u,
    0x8df98d76u, 0x2c310727u, 0xca6880d8u, 0x689ffa89u, 0x06d7743au, 0xa50eedebu, 0x4346679cu, 0xe17de14du,
    0x7fb55afeu, 0x1decd4afu, 0xbc244e60u, 0x5a5bc811u, 0xf89341c2u, 0x96cabb73u, 0x35023524u, 0xd339aed5u,
    0x71712886u, 0x0fa8a237u, 0xade01be8u, 0x4c179599u, 0xea4f0f4au, 0x888688fbu, 0x26be02acu, 0xc4f57c5du,
    0x632cf60eu, 0x01646fbfu, 0x9f9be970u, 0x3dd36321u, 0xdc0adcd2u, 0x7a425683u, 0x1879d034u, 0xb6b149e5u,
    0x54e8c396u, 0xf3203d47u, 0x9157b6f8u, 0x2f8f30a9u, 0xcdc6aa5au, 0x6bfe240bu, 0x0a359dbcu, 0xa86d176du,
    0x46a4911eu, 0xe4dc0acfu, 0x83138480u, 0x214afe31u, 0xbf8277e2u, 0x5db9f193u, 0xfbf16b44u, 0x9a28e4f5u,
    0x38605ea6u, 0xd697d857u, 0x74cf5208u, 0x1306cbb9u, 0xb13e456au, 0x4f75bf1bu, 0xedad38ccu, 0x8be4b27du,
    0x2a1c2c2eu, 0xc853a5dfu, 0x668b1f90u, 0x04c29941u, 0xa2fa12f2u, 0x41318ca3u, 0xdf690654u, 0x7da08005u,
    0x1bd7f9b6u, 0xba0f7367u, 0x5846ed18u, 0xf67e66c9u, 0x94b5e07au, 0x32ed5a2bu, 0xd124d3dcu, 0x6f5c4d8du,
    0x0d93c73eu, 0xabcb40efu, 0x4a02baa0u, 0xe83a3451u, 0x8671ae02u, 0x24a927b3u, 0xc2e0a164u, 0x61181b15u,
    0xff4f94c6u, 0x9d870e77u, 0x3bbe8828u, 0xd9f601d9u, 0x782d7b8au, 0x1664f53bu, 0xb49c6eecu, 0x52d3e89du,
};

static const uint32_t bshim_211_tab6[96] = {
    0x1decd4afu, 0xbc244e60u, 0x5a5bc811u, 0xf89341c2u, 0x96cabb73u, 0x35023524u, 0xd339aed5u, 0x71712886u,
    0x0fa8a237u, 0xade01be8u, 0x4c179599u, 0xea4f0f4au, 0x888688fbu, 0x26be02acu, 0xc4f57c5du, 0x632cf60eu,
    0x01646fbfu, 0x9f9be970u, 0x3dd36321u, 0xdc0adcd2u, 0x7a425683u, 0x1879d034u, 0xb6b149e5u, 0x54e8c396u,
    0xf3203d47u, 0x9157b6f8u, 0x2f8f30a9u, 0xcdc6aa5au, 0x6bfe240bu, 0x0a359dbcu, 0xa86d176du, 0x46a4911eu,
    0xe4dc0acfu, 0x83138480u, 0x214afe31u, 0xbf8277e2u, 0x5db9f193u, 0xfbf16b44u, 0x9a28e4f5u, 0x38605ea6u,
    0xd697d857u, 0x74cf5208u, 0x1306cbb9u, 0xb13e456au, 0x4f75bf1bu, 0xedad38ccu, 0x8be4b27du, 0x2a1c2c2eu,
    0xc853a5dfu, 0x668b1f90u, 0x04c29941u, 0xa2fa12f2u, 0x41318ca3u, 0xdf690654u, 0x7da08005u, 0x1bd7f9b6u,
    0xba0f7367u, 0x5846ed18u, 0xf67e66c9u, 0x94b5e07au, 0x32ed5a2bu, 0xd124d3dcu, 0x6f5c4d8du, 0x0d93c73eu,
    0xabcb40efu, 0x4a02baa0u, 0xe83a3451u, 0x8671ae02u, 0x24a927b3u, 0xc2e0a164u, 0x61181b15u, 0xff4f94c6u,
    0x9d870e77u, 0x3bbe8828u, 0xd9f601d9u, 0x782d7b8au, 0x1664f53bu, 0xb49c6eecu, 0x52d3e89du, 0xf10b624eu,
    0x8f42dbffu, 0x2d7a55b0u, 0xcbb1cf61u, 0x69e94912u, 0x0820c2c3u, 0xa6583c74u, 0x448fb625u, 0xe2c72fd6u,
    0x80fea987u, 0x1f362338u, 0xbd6d9ce9u, 0x5ba5169au, 0xf9dc904bu, 0x981409fcu, 0x364b83adu, 0xd482fd5eu,
};

static const uint32_t bshim_211_tab7[96] = {
    0x9f9be970u, 0x3dd36321u, 0xdc0adcd2u, 0x7a425683u, 0x1879d034u, 0xb6b149e5u, 0x54e8c396u, 0xf3203d47u,
    0x9157b6f8u, 0x2f8f30a9u, 0xcdc6aa5au, 0x6bfe240bu, 0x0a359dbcu, 0xa86d176du, 0x46a4911eu, 0xe4dc0acfu,
    0x83138480u, 0x214afe31u, 0xbf8277e2u, 0x5db9f193u, 0xfbf16b44u, 0x9a28e4f5u, 0x38605ea6u, 0xd697d857u,
    0x74cf5208u, 0x1306cbb9u, 0xb13e456au, 0x4f75bf1bu, 0xedad38ccu, 0x8be4b27du, 0x2a1c2c2eu, 0xc853a5dfu,
    0x668b1f90u, 0x04c29941u, 0xa2fa12f2u, 0x41318ca3u, 0xdf690654u, 0x7da08005u, 0x1bd7f9b6u, 0xba0f7367u,
    0x5846ed18u, 0xf67e66c9u, 0x94b5e07au, 0x32ed5a2bu, 0xd124d3dcu, 0x6f5c4d8du, 0x0d93c73eu, 0xabcb40efu,
    0x4a02baa0u, 0xe83a3451u, 0x8671ae02u, 0x24a927b3u, 0xc2e0a164u, 0x61181b15u, 0xff4f94c6u, 0x9d870e77u,
    0x3bbe8828u, 0xd9f601d9u, 0x782d7b8au, 0x1664f53bu, 0xb49c6eecu, 0x52d3e89du, 0xf10b624eu, 0x8f42dbffu,
    0x2d7a55b0u, 0xcbb1cf61u, 0x69e94912u, 0x0820c2c3u, 0xa6583c74u, 0x448fb625u, 0xe2c72fd6u, 0x80fea987u,
    0x1f362338u, 0xbd6d9ce9u, 0x5ba5169au, 0xf9dc904bu, 0x981409fcu, 0x364b83adu, 0xd482fd5eu, 0x72ba770fu,
    0x10f1f0c0u, 0xaf296a71u, 0x4d60e422u, 0xeb985dd3u, 0x89cfd784u, 0x28075135u, 0xc63ecae6u, 0x64764497u,
    0x02adbe48u, 0xa0e537f9u, 0x3f1cb1aau, 0xdd542b5bu, 0x7b8ba50cu, 0x19c31ebdu, 0xb7fa986eu, 0x5632121fu,
};

struct bshim_211_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_211_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_211_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_211_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_211_reset(struct bshim_211_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00197efdu;
    return 0;
}

