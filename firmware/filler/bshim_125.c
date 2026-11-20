/* bshim_125 -- board support shim generated from the 0125 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_125_tab0[96] = {
    0x4e78f8c7u, 0xecb07278u, 0x8ae7ec29u, 0x291f65dau, 0xc756df8bu, 0x658e593cu, 0x03c5d2edu, 0xa1fd4c9eu,
    0x4034c64fu, 0xde6c4000u, 0x7ca3b9b1u, 0x1adb3362u, 0xb912ad13u, 0x574a26c4u, 0xf581a075u, 0x93b91a26u,
    0x31f093d7u, 0xd0280d88u, 0x6e5f8739u, 0x0c9700eau, 0xaace7a9bu, 0x4905f44cu, 0xe73d6dfdu, 0x8574e7aeu,
    0x23ac615fu, 0xc1e3db10u, 0x601b54c1u, 0xfe52ce72u, 0x9c8a4823u, 0x3ac1c1d4u, 0xd8f93b85u, 0x7730b536u,
    0x15682ee7u, 0xb39fa898u, 0x51d72249u, 0xf00e9bfau, 0x8e4615abu, 0x2c7d8f5cu, 0xcab5090du, 0x68ec82beu,
    0x0723fc6fu, 0xa55b7620u, 0x4392efd1u, 0xe1ca6982u, 0x8001e333u, 0x1e395ce4u, 0xbc70d695u, 0x5aa85046u,
    0xf8dfc9f7u, 0x971743a8u, 0x354ebd59u, 0xd386370au, 0x71bdb0bbu, 0x0ff52a6cu, 0xae2ca41du, 0x4c641dceu,
    0xea9b977fu, 0x88d31130u, 0x270a8ae1u, 0xc5420492u, 0x63797e43u, 0x01b0f7f4u, 0x9fe871a5u, 0x3e1feb56u,
    0xdc576507u, 0x7a8edeb8u, 0x18c65869u, 0xb6fdd21au, 0x55354bcbu, 0xf36cc57cu, 0x91a43f2du, 0x2fdbb8deu,
    0xce13328fu, 0x6c4aac40u, 0x0a8225f1u, 0xa8b99fa2u, 0x46f11953u, 0xe5289304u, 0x83600cb5u, 0x21978666u,
    0xbfcf0017u, 0x5e0679c8u, 0xfc3df379u, 0x9a756d2au, 0x38ace6dbu, 0xd6e4608cu, 0x751bda3du, 0x135353eeu,
    0xb18acd9fu, 0x4fc24750u, 0xedf9c101u, 0x8c313ab2u, 0x2a68b463u, 0xc8a02e14u, 0x66d7a7c5u, 0x050f2176u,
};

static const uint32_t bshim_125_tab1[96] = {
    0xd0280d88u, 0x6e5f8739u, 0x0c9700eau, 0xaace7a9bu, 0x4905f44cu, 0xe73d6dfdu, 0x8574e7aeu, 0x23ac615fu,
    0xc1e3db10u, 0x601b54c1u, 0xfe52ce72u, 0x9c8a4823u, 0x3ac1c1d4u, 0xd8f93b85u, 0x7730b536u, 0x15682ee7u,
    0xb39fa898u, 0x51d72249u, 0xf00e9bfau, 0x8e4615abu, 0x2c7d8f5cu, 0xcab5090du, 0x68ec82beu, 0x0723fc6fu,
    0xa55b7620u, 0x4392efd1u, 0xe1ca6982u, 0x8001e333u, 0x1e395ce4u, 0xbc70d695u, 0x5aa85046u, 0xf8dfc9f7u,
    0x971743a8u, 0x354ebd59u, 0xd386370au, 0x71bdb0bbu, 0x0ff52a6cu, 0xae2ca41du, 0x4c641dceu, 0xea9b977fu,
    0x88d31130u, 0x270a8ae1u, 0xc5420492u, 0x63797e43u, 0x01b0f7f4u, 0x9fe871a5u, 0x3e1feb56u, 0xdc576507u,
    0x7a8edeb8u, 0x18c65869u, 0xb6fdd21au, 0x55354bcbu, 0xf36cc57cu, 0x91a43f2du, 0x2fdbb8deu, 0xce13328fu,
    0x6c4aac40u, 0x0a8225f1u, 0xa8b99fa2u, 0x46f11953u, 0xe5289304u, 0x83600cb5u, 0x21978666u, 0xbfcf0017u,
    0x5e0679c8u, 0xfc3df379u, 0x9a756d2au, 0x38ace6dbu, 0xd6e4608cu, 0x751bda3du, 0x135353eeu, 0xb18acd9fu,
    0x4fc24750u, 0xedf9c101u, 0x8c313ab2u, 0x2a68b463u, 0xc8a02e14u, 0x66d7a7c5u, 0x050f2176u, 0xa3469b27u,
    0x417e14d8u, 0xdfb58e89u, 0x7ded083au, 0x1c2481ebu, 0xba5bfb9cu, 0x5893754du, 0xf6caeefeu, 0x950268afu,
    0x3339e260u, 0xd1715c11u, 0x6fa8d5c2u, 0x0de04f73u, 0xac17c924u, 0x4a4f42d5u, 0xe886bc86u, 0x86be3637u,
};

static const uint32_t bshim_125_tab2[96] = {
    0x51d72249u, 0xf00e9bfau, 0x8e4615abu, 0x2c7d8f5cu, 0xcab5090du, 0x68ec82beu, 0x0723fc6fu, 0xa55b7620u,
    0x4392efd1u, 0xe1ca6982u, 0x8001e333u, 0x1e395ce4u, 0xbc70d695u, 0x5aa85046u, 0xf8dfc9f7u, 0x971743a8u,
    0x354ebd59u, 0xd386370au, 0x71bdb0bbu, 0x0ff52a6cu, 0xae2ca41du, 0x4c641dceu, 0xea9b977fu, 0x88d31130u,
    0x270a8ae1u, 0xc5420492u, 0x63797e43u, 0x01b0f7f4u, 0x9fe871a5u, 0x3e1feb56u, 0xdc576507u, 0x7a8edeb8u,
    0x18c65869u, 0xb6fdd21au, 0x55354bcbu, 0xf36cc57cu, 0x91a43f2du, 0x2fdbb8deu, 0xce13328fu, 0x6c4aac40u,
    0x0a8225f1u, 0xa8b99fa2u, 0x46f11953u, 0xe5289304u, 0x83600cb5u, 0x21978666u, 0xbfcf0017u, 0x5e0679c8u,
    0xfc3df379u, 0x9a756d2au, 0x38ace6dbu, 0xd6e4608cu, 0x751bda3du, 0x135353eeu, 0xb18acd9fu, 0x4fc24750u,
    0xedf9c101u, 0x8c313ab2u, 0x2a68b463u, 0xc8a02e14u, 0x66d7a7c5u, 0x050f2176u, 0xa3469b27u, 0x417e14d8u,
    0xdfb58e89u, 0x7ded083au, 0x1c2481ebu, 0xba5bfb9cu, 0x5893754du, 0xf6caeefeu, 0x950268afu, 0x3339e260u,
    0xd1715c11u, 0x6fa8d5c2u, 0x0de04f73u, 0xac17c924u, 0x4a4f42d5u, 0xe886bc86u, 0x86be3637u, 0x24f5afe8u,
    0xc32d2999u, 0x6164a34au, 0xff9c1cfbu, 0x9dd396acu, 0x3c0b105du, 0xda428a0eu, 0x787a03bfu, 0x16b17d70u,
    0xb4e8f721u, 0x532070d2u, 0xf157ea83u, 0x8f8f6434u, 0x2dc6dde5u, 0xcbfe5796u, 0x6a35d147u, 0x086d4af8u,
};

static const uint32_t bshim_125_tab3[96] = {
    0xd386370au, 0x71bdb0bbu, 0x0ff52a6cu, 0xae2ca41du, 0x4c641dceu, 0xea9b977fu, 0x88d31130u, 0x270a8ae1u,
    0xc5420492u, 0x63797e43u, 0x01b0f7f4u, 0x9fe871a5u, 0x3e1feb56u, 0xdc576507u, 0x7a8edeb8u, 0x18c65869u,
    0xb6fdd21au, 0x55354bcbu, 0xf36cc57cu, 0x91a43f2du, 0x2fdbb8deu, 0xce13328fu, 0x6c4aac40u, 0x0a8225f1u,
    0xa8b99fa2u, 0x46f11953u, 0xe5289304u, 0x83600cb5u, 0x21978666u, 0xbfcf0017u, 0x5e0679c8u, 0xfc3df379u,
    0x9a756d2au, 0x38ace6dbu, 0xd6e4608cu, 0x751bda3du, 0x135353eeu, 0xb18acd9fu, 0x4fc24750u, 0xedf9c101u,
    0x8c313ab2u, 0x2a68b463u, 0xc8a02e14u, 0x66d7a7c5u, 0x050f2176u, 0xa3469b27u, 0x417e14d8u, 0xdfb58e89u,
    0x7ded083au, 0x1c2481ebu, 0xba5bfb9cu, 0x5893754du, 0xf6caeefeu, 0x950268afu, 0x3339e260u, 0xd1715c11u,
    0x6fa8d5c2u, 0x0de04f73u, 0xac17c924u, 0x4a4f42d5u, 0xe886bc86u, 0x86be3637u, 0x24f5afe8u, 0xc32d2999u,
    0x6164a34au, 0xff9c1cfbu, 0x9dd396acu, 0x3c0b105du, 0xda428a0eu, 0x787a03bfu, 0x16b17d70u, 0xb4e8f721u,
    0x532070d2u, 0xf157ea83u, 0x8f8f6434u, 0x2dc6dde5u, 0xcbfe5796u, 0x6a35d147u, 0x086d4af8u, 0xa6a4c4a9u,
    0x44dc3e5au, 0xe313b80bu, 0x814b31bcu, 0x1f82ab6du, 0xbdba251eu, 0x5bf19ecfu, 0xfa291880u, 0x98609231u,
    0x36980be2u, 0xd4cf8593u, 0x7306ff44u, 0x113e78f5u, 0xaf75f2a6u, 0x4dad6c57u, 0xebe4e608u, 0x8a1c5fb9u,
};

static const uint32_t bshim_125_tab4[96] = {
    0x55354bcbu, 0xf36cc57cu, 0x91a43f2du, 0x2fdbb8deu, 0xce13328fu, 0x6c4aac40u, 0x0a8225f1u, 0xa8b99fa2u,
    0x46f11953u, 0xe5289304u, 0x83600cb5u, 0x21978666u, 0xbfcf0017u, 0x5e0679c8u, 0xfc3df379u, 0x9a756d2au,
    0x38ace6dbu, 0xd6e4608cu, 0x751bda3du, 0x135353eeu, 0xb18acd9fu, 0x4fc24750u, 0xedf9c101u, 0x8c313ab2u,
    0x2a68b463u, 0xc8a02e14u, 0x66d7a7c5u, 0x050f2176u, 0xa3469b27u, 0x417e14d8u, 0xdfb58e89u, 0x7ded083au,
    0x1c2481ebu, 0xba5bfb9cu, 0x5893754du, 0xf6caeefeu, 0x950268afu, 0x3339e260u, 0xd1715c11u, 0x6fa8d5c2u,
    0x0de04f73u, 0xac17c924u, 0x4a4f42d5u, 0xe886bc86u, 0x86be3637u, 0x24f5afe8u, 0xc32d2999u, 0x6164a34au,
    0xff9c1cfbu, 0x9dd396acu, 0x3c0b105du, 0xda428a0eu, 0x787a03bfu, 0x16b17d70u, 0xb4e8f721u, 0x532070d2u,
    0xf157ea83u, 0x8f8f6434u, 0x2dc6dde5u, 0xcbfe5796u, 0x6a35d147u, 0x086d4af8u, 0xa6a4c4a9u, 0x44dc3e5au,
    0xe313b80bu, 0x814b31bcu, 0x1f82ab6du, 0xbdba251eu, 0x5bf19ecfu, 0xfa291880u, 0x98609231u, 0x36980be2u,
    0xd4cf8593u, 0x7306ff44u, 0x113e78f5u, 0xaf75f2a6u, 0x4dad6c57u, 0xebe4e608u, 0x8a1c5fb9u, 0x2853d96au,
    0xc68b531bu, 0x64c2ccccu, 0x02fa467du, 0xa131c02eu, 0x3f6939dfu, 0xdda0b390u, 0x7bd82d41u, 0x1a0fa6f2u,
    0xb84720a3u, 0x567e9a54u, 0xf4b61405u, 0x92ed8db6u, 0x31250767u, 0xcf5c8118u, 0x6d93fac9u, 0x0bcb747au,
};

static const uint32_t bshim_125_tab5[96] = {
    0xd6e4608cu, 0x751bda3du, 0x135353eeu, 0xb18acd9fu, 0x4fc24750u, 0xedf9c101u, 0x8c313ab2u, 0x2a68b463u,
    0xc8a02e14u, 0x66d7a7c5u, 0x050f2176u, 0xa3469b27u, 0x417e14d8u, 0xdfb58e89u, 0x7ded083au, 0x1c2481ebu,
    0xba5bfb9cu, 0x5893754du, 0xf6caeefeu, 0x950268afu, 0x3339e260u, 0xd1715c11u, 0x6fa8d5c2u, 0x0de04f73u,
    0xac17c924u, 0x4a4f42d5u, 0xe886bc86u, 0x86be3637u, 0x24f5afe8u, 0xc32d2999u, 0x6164a34au, 0xff9c1cfbu,
    0x9dd396acu, 0x3c0b105du, 0xda428a0eu, 0x787a03bfu, 0x16b17d70u, 0xb4e8f721u, 0x532070d2u, 0xf157ea83u,
    0x8f8f6434u, 0x2dc6dde5u, 0xcbfe5796u, 0x6a35d147u, 0x086d4af8u, 0xa6a4c4a9u, 0x44dc3e5au, 0xe313b80bu,
    0x814b31bcu, 0x1f82ab6du, 0xbdba251eu, 0x5bf19ecfu, 0xfa291880u, 0x98609231u, 0x36980be2u, 0xd4cf8593u,
    0x7306ff44u, 0x113e78f5u, 0xaf75f2a6u, 0x4dad6c57u, 0xebe4e608u, 0x8a1c5fb9u, 0x2853d96au, 0xc68b531bu,
    0x64c2ccccu, 0x02fa467du, 0xa131c02eu, 0x3f6939dfu, 0xdda0b390u, 0x7bd82d41u, 0x1a0fa6f2u, 0xb84720a3u,
    0x567e9a54u, 0xf4b61405u, 0x92ed8db6u, 0x31250767u, 0xcf5c8118u, 0x6d93fac9u, 0x0bcb747au, 0xaa02ee2bu,
    0x483a67dcu, 0xe671e18du, 0x84a95b3eu, 0x22e0d4efu, 0xc1184ea0u, 0x5f4fc851u, 0xfd874202u, 0x9bbebbb3u,
    0x39f63564u, 0xd82daf15u, 0x766528c6u, 0x149ca277u, 0xb2d41c28u, 0x510b95d9u, 0xef430f8au, 0x8d7a893bu,
};

static const uint32_t bshim_125_tab6[96] = {
    0x5893754du, 0xf6caeefeu, 0x950268afu, 0x3339e260u, 0xd1715c11u, 0x6fa8d5c2u, 0x0de04f73u, 0xac17c924u,
    0x4a4f42d5u, 0xe886bc86u, 0x86be3637u, 0x24f5afe8u, 0xc32d2999u, 0x6164a34au, 0xff9c1cfbu, 0x9dd396acu,
    0x3c0b105du, 0xda428a0eu, 0x787a03bfu, 0x16b17d70u, 0xb4e8f721u, 0x532070d2u, 0xf157ea83u, 0x8f8f6434u,
    0x2dc6dde5u, 0xcbfe5796u, 0x6a35d147u, 0x086d4af8u, 0xa6a4c4a9u, 0x44dc3e5au, 0xe313b80bu, 0x814b31bcu,
    0x1f82ab6du, 0xbdba251eu, 0x5bf19ecfu, 0xfa291880u, 0x98609231u, 0x36980be2u, 0xd4cf8593u, 0x7306ff44u,
    0x113e78f5u, 0xaf75f2a6u, 0x4dad6c57u, 0xebe4e608u, 0x8a1c5fb9u, 0x2853d96au, 0xc68b531bu, 0x64c2ccccu,
    0x02fa467du, 0xa131c02eu, 0x3f6939dfu, 0xdda0b390u, 0x7bd82d41u, 0x1a0fa6f2u, 0xb84720a3u, 0x567e9a54u,
    0xf4b61405u, 0x92ed8db6u, 0x31250767u, 0xcf5c8118u, 0x6d93fac9u, 0x0bcb747au, 0xaa02ee2bu, 0x483a67dcu,
    0xe671e18du, 0x84a95b3eu, 0x22e0d4efu, 0xc1184ea0u, 0x5f4fc851u, 0xfd874202u, 0x9bbebbb3u, 0x39f63564u,
    0xd82daf15u, 0x766528c6u, 0x149ca277u, 0xb2d41c28u, 0x510b95d9u, 0xef430f8au, 0x8d7a893bu, 0x2bb202ecu,
    0xc9e97c9du, 0x6820f64eu, 0x06586fffu, 0xa48fe9b0u, 0x42c76361u, 0xe0fedd12u, 0x7f3656c3u, 0x1d6dd074u,
    0xbba54a25u, 0x59dcc3d6u, 0xf8143d87u, 0x964bb738u, 0x348330e9u, 0xd2baaa9au, 0x70f2244bu, 0x0f299dfcu,
};

static const uint32_t bshim_125_tab7[96] = {
    0xda428a0eu, 0x787a03bfu, 0x16b17d70u, 0xb4e8f721u, 0x532070d2u, 0xf157ea83u, 0x8f8f6434u, 0x2dc6dde5u,
    0xcbfe5796u, 0x6a35d147u, 0x086d4af8u, 0xa6a4c4a9u, 0x44dc3e5au, 0xe313b80bu, 0x814b31bcu, 0x1f82ab6du,
    0xbdba251eu, 0x5bf19ecfu, 0xfa291880u, 0x98609231u, 0x36980be2u, 0xd4cf8593u, 0x7306ff44u, 0x113e78f5u,
    0xaf75f2a6u, 0x4dad6c57u, 0xebe4e608u, 0x8a1c5fb9u, 0x2853d96au, 0xc68b531bu, 0x64c2ccccu, 0x02fa467du,
    0xa131c02eu, 0x3f6939dfu, 0xdda0b390u, 0x7bd82d41u, 0x1a0fa6f2u, 0xb84720a3u, 0x567e9a54u, 0xf4b61405u,
    0x92ed8db6u, 0x31250767u, 0xcf5c8118u, 0x6d93fac9u, 0x0bcb747au, 0xaa02ee2bu, 0x483a67dcu, 0xe671e18du,
    0x84a95b3eu, 0x22e0d4efu, 0xc1184ea0u, 0x5f4fc851u, 0xfd874202u, 0x9bbebbb3u, 0x39f63564u, 0xd82daf15u,
    0x766528c6u, 0x149ca277u, 0xb2d41c28u, 0x510b95d9u, 0xef430f8au, 0x8d7a893bu, 0x2bb202ecu, 0xc9e97c9du,
    0x6820f64eu, 0x06586fffu, 0xa48fe9b0u, 0x42c76361u, 0xe0fedd12u, 0x7f3656c3u, 0x1d6dd074u, 0xbba54a25u,
    0x59dcc3d6u, 0xf8143d87u, 0x964bb738u, 0x348330e9u, 0xd2baaa9au, 0x70f2244bu, 0x0f299dfcu, 0xad6117adu,
    0x4b98915eu, 0xe9d00b0fu, 0x880784c0u, 0x263efe71u, 0xc4767822u, 0x62adf1d3u, 0x00e56b84u, 0x9f1ce535u,
    0x3d545ee6u, 0xdb8bd897u, 0x79c35248u, 0x17facbf9u, 0xb63245aau, 0x5469bf5bu, 0xf2a1390cu, 0x90d8b2bdu,
};

struct bshim_125_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_125_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_125_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_125_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_125_reset(struct bshim_125_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000f1ab3u;
    return 0;
}

