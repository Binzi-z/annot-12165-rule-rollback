/* bshim_124 -- board support shim generated from the 0124 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_124_tab0[96] = {
    0x5815b334u, 0xf64d2ce5u, 0x9484a696u, 0x32bc2047u, 0xd0f399f8u, 0x6f2b13a9u, 0x0d628d5au, 0xab9a070bu,
    0x49d180bcu, 0xe808fa6du, 0x8640741eu, 0x2477edcfu, 0xc2af6780u, 0x60e6e131u, 0xff1e5ae2u, 0x9d55d493u,
    0x3b8d4e44u, 0xd9c4c7f5u, 0x77fc41a6u, 0x1633bb57u, 0xb46b3508u, 0x52a2aeb9u, 0xf0da286au, 0x8f11a21bu,
    0x2d491bccu, 0xcb80957du, 0x69b80f2eu, 0x07ef88dfu, 0xa6270290u, 0x445e7c41u, 0xe295f5f2u, 0x80cd6fa3u,
    0x1f04e954u, 0xbd3c6305u, 0x5b73dcb6u, 0xf9ab5667u, 0x97e2d018u, 0x361a49c9u, 0xd451c37au, 0x72893d2bu,
    0x10c0b6dcu, 0xaef8308du, 0x4d2faa3eu, 0xeb6723efu, 0x899e9da0u, 0x27d61751u, 0xc60d9102u, 0x64450ab3u,
    0x027c8464u, 0xa0b3fe15u, 0x3eeb77c6u, 0xdd22f177u, 0x7b5a6b28u, 0x1991e4d9u, 0xb7c95e8au, 0x5600d83bu,
    0xf43851ecu, 0x926fcb9du, 0x30a7454eu, 0xcedebeffu, 0x6d1638b0u, 0x0b4db261u, 0xa9852c12u, 0x47bca5c3u,
    0xe5f41f74u, 0x842b9925u, 0x226312d6u, 0xc09a8c87u, 0x5ed20638u, 0xfd097fe9u, 0x9b40f99au, 0x3978734bu,
    0xd7afecfcu, 0x75e766adu, 0x141ee05eu, 0xb2565a0fu, 0x508dd3c0u, 0xeec54d71u, 0x8cfcc722u, 0x2b3440d3u,
    0xc96bba84u, 0x67a33435u, 0x05daade6u, 0xa4122797u, 0x4249a148u, 0xe0811af9u, 0x7eb894aau, 0x1cf00e5bu,
    0xbb27880cu, 0x595f01bdu, 0xf7967b6eu, 0x95cdf51fu, 0x34056ed0u, 0xd23ce881u, 0x70746232u, 0x0eabdbe3u,
};

static const uint32_t bshim_124_tab1[96] = {
    0xd9c4c7f5u, 0x77fc41a6u, 0x1633bb57u, 0xb46b3508u, 0x52a2aeb9u, 0xf0da286au, 0x8f11a21bu, 0x2d491bccu,
    0xcb80957du, 0x69b80f2eu, 0x07ef88dfu, 0xa6270290u, 0x445e7c41u, 0xe295f5f2u, 0x80cd6fa3u, 0x1f04e954u,
    0xbd3c6305u, 0x5b73dcb6u, 0xf9ab5667u, 0x97e2d018u, 0x361a49c9u, 0xd451c37au, 0x72893d2bu, 0x10c0b6dcu,
    0xaef8308du, 0x4d2faa3eu, 0xeb6723efu, 0x899e9da0u, 0x27d61751u, 0xc60d9102u, 0x64450ab3u, 0x027c8464u,
    0xa0b3fe15u, 0x3eeb77c6u, 0xdd22f177u, 0x7b5a6b28u, 0x1991e4d9u, 0xb7c95e8au, 0x5600d83bu, 0xf43851ecu,
    0x926fcb9du, 0x30a7454eu, 0xcedebeffu, 0x6d1638b0u, 0x0b4db261u, 0xa9852c12u, 0x47bca5c3u, 0xe5f41f74u,
    0x842b9925u, 0x226312d6u, 0xc09a8c87u, 0x5ed20638u, 0xfd097fe9u, 0x9b40f99au, 0x3978734bu, 0xd7afecfcu,
    0x75e766adu, 0x141ee05eu, 0xb2565a0fu, 0x508dd3c0u, 0xeec54d71u, 0x8cfcc722u, 0x2b3440d3u, 0xc96bba84u,
    0x67a33435u, 0x05daade6u, 0xa4122797u, 0x4249a148u, 0xe0811af9u, 0x7eb894aau, 0x1cf00e5bu, 0xbb27880cu,
    0x595f01bdu, 0xf7967b6eu, 0x95cdf51fu, 0x34056ed0u, 0xd23ce881u, 0x70746232u, 0x0eabdbe3u, 0xace35594u,
    0x4b1acf45u, 0xe95248f6u, 0x8789c2a7u, 0x25c13c58u, 0xc3f8b609u, 0x62302fbau, 0x0067a96bu, 0x9e9f231cu,
    0x3cd69ccdu, 0xdb0e167eu, 0x7945902fu, 0x177d09e0u, 0xb5b48391u, 0x53ebfd42u, 0xf22376f3u, 0x905af0a4u,
};

static const uint32_t bshim_124_tab2[96] = {
    0x5b73dcb6u, 0xf9ab5667u, 0x97e2d018u, 0x361a49c9u, 0xd451c37au, 0x72893d2bu, 0x10c0b6dcu, 0xaef8308du,
    0x4d2faa3eu, 0xeb6723efu, 0x899e9da0u, 0x27d61751u, 0xc60d9102u, 0x64450ab3u, 0x027c8464u, 0xa0b3fe15u,
    0x3eeb77c6u, 0xdd22f177u, 0x7b5a6b28u, 0x1991e4d9u, 0xb7c95e8au, 0x5600d83bu, 0xf43851ecu, 0x926fcb9du,
    0x30a7454eu, 0xcedebeffu, 0x6d1638b0u, 0x0b4db261u, 0xa9852c12u, 0x47bca5c3u, 0xe5f41f74u, 0x842b9925u,
    0x226312d6u, 0xc09a8c87u, 0x5ed20638u, 0xfd097fe9u, 0x9b40f99au, 0x3978734bu, 0xd7afecfcu, 0x75e766adu,
    0x141ee05eu, 0xb2565a0fu, 0x508dd3c0u, 0xeec54d71u, 0x8cfcc722u, 0x2b3440d3u, 0xc96bba84u, 0x67a33435u,
    0x05daade6u, 0xa4122797u, 0x4249a148u, 0xe0811af9u, 0x7eb894aau, 0x1cf00e5bu, 0xbb27880cu, 0x595f01bdu,
    0xf7967b6eu, 0x95cdf51fu, 0x34056ed0u, 0xd23ce881u, 0x70746232u, 0x0eabdbe3u, 0xace35594u, 0x4b1acf45u,
    0xe95248f6u, 0x8789c2a7u, 0x25c13c58u, 0xc3f8b609u, 0x62302fbau, 0x0067a96bu, 0x9e9f231cu, 0x3cd69ccdu,
    0xdb0e167eu, 0x7945902fu, 0x177d09e0u, 0xb5b48391u, 0x53ebfd42u, 0xf22376f3u, 0x905af0a4u, 0x2e926a55u,
    0xccc9e406u, 0x6b015db7u, 0x0938d768u, 0xa7705119u, 0x45a7cacau, 0xe3df447bu, 0x8216be2cu, 0x204e37ddu,
    0xbe85b18eu, 0x5cbd2b3fu, 0xfaf4a4f0u, 0x992c1ea1u, 0x37639852u, 0xd59b1203u, 0x73d28bb4u, 0x120a0565u,
};

static const uint32_t bshim_124_tab3[96] = {
    0xdd22f177u, 0x7b5a6b28u, 0x1991e4d9u, 0xb7c95e8au, 0x5600d83bu, 0xf43851ecu, 0x926fcb9du, 0x30a7454eu,
    0xcedebeffu, 0x6d1638b0u, 0x0b4db261u, 0xa9852c12u, 0x47bca5c3u, 0xe5f41f74u, 0x842b9925u, 0x226312d6u,
    0xc09a8c87u, 0x5ed20638u, 0xfd097fe9u, 0x9b40f99au, 0x3978734bu, 0xd7afecfcu, 0x75e766adu, 0x141ee05eu,
    0xb2565a0fu, 0x508dd3c0u, 0xeec54d71u, 0x8cfcc722u, 0x2b3440d3u, 0xc96bba84u, 0x67a33435u, 0x05daade6u,
    0xa4122797u, 0x4249a148u, 0xe0811af9u, 0x7eb894aau, 0x1cf00e5bu, 0xbb27880cu, 0x595f01bdu, 0xf7967b6eu,
    0x95cdf51fu, 0x34056ed0u, 0xd23ce881u, 0x70746232u, 0x0eabdbe3u, 0xace35594u, 0x4b1acf45u, 0xe95248f6u,
    0x8789c2a7u, 0x25c13c58u, 0xc3f8b609u, 0x62302fbau, 0x0067a96bu, 0x9e9f231cu, 0x3cd69ccdu, 0xdb0e167eu,
    0x7945902fu, 0x177d09e0u, 0xb5b48391u, 0x53ebfd42u, 0xf22376f3u, 0x905af0a4u, 0x2e926a55u, 0xccc9e406u,
    0x6b015db7u, 0x0938d768u, 0xa7705119u, 0x45a7cacau, 0xe3df447bu, 0x8216be2cu, 0x204e37ddu, 0xbe85b18eu,
    0x5cbd2b3fu, 0xfaf4a4f0u, 0x992c1ea1u, 0x37639852u, 0xd59b1203u, 0x73d28bb4u, 0x120a0565u, 0xb0417f16u,
    0x4e78f8c7u, 0xecb07278u, 0x8ae7ec29u, 0x291f65dau, 0xc756df8bu, 0x658e593cu, 0x03c5d2edu, 0xa1fd4c9eu,
    0x4034c64fu, 0xde6c4000u, 0x7ca3b9b1u, 0x1adb3362u, 0xb912ad13u, 0x574a26c4u, 0xf581a075u, 0x93b91a26u,
};

static const uint32_t bshim_124_tab4[96] = {
    0x5ed20638u, 0xfd097fe9u, 0x9b40f99au, 0x3978734bu, 0xd7afecfcu, 0x75e766adu, 0x141ee05eu, 0xb2565a0fu,
    0x508dd3c0u, 0xeec54d71u, 0x8cfcc722u, 0x2b3440d3u, 0xc96bba84u, 0x67a33435u, 0x05daade6u, 0xa4122797u,
    0x4249a148u, 0xe0811af9u, 0x7eb894aau, 0x1cf00e5bu, 0xbb27880cu, 0x595f01bdu, 0xf7967b6eu, 0x95cdf51fu,
    0x34056ed0u, 0xd23ce881u, 0x70746232u, 0x0eabdbe3u, 0xace35594u, 0x4b1acf45u, 0xe95248f6u, 0x8789c2a7u,
    0x25c13c58u, 0xc3f8b609u, 0x62302fbau, 0x0067a96bu, 0x9e9f231cu, 0x3cd69ccdu, 0xdb0e167eu, 0x7945902fu,
    0x177d09e0u, 0xb5b48391u, 0x53ebfd42u, 0xf22376f3u, 0x905af0a4u, 0x2e926a55u, 0xccc9e406u, 0x6b015db7u,
    0x0938d768u, 0xa7705119u, 0x45a7cacau, 0xe3df447bu, 0x8216be2cu, 0x204e37ddu, 0xbe85b18eu, 0x5cbd2b3fu,
    0xfaf4a4f0u, 0x992c1ea1u, 0x37639852u, 0xd59b1203u, 0x73d28bb4u, 0x120a0565u, 0xb0417f16u, 0x4e78f8c7u,
    0xecb07278u, 0x8ae7ec29u, 0x291f65dau, 0xc756df8bu, 0x658e593cu, 0x03c5d2edu, 0xa1fd4c9eu, 0x4034c64fu,
    0xde6c4000u, 0x7ca3b9b1u, 0x1adb3362u, 0xb912ad13u, 0x574a26c4u, 0xf581a075u, 0x93b91a26u, 0x31f093d7u,
    0xd0280d88u, 0x6e5f8739u, 0x0c9700eau, 0xaace7a9bu, 0x4905f44cu, 0xe73d6dfdu, 0x8574e7aeu, 0x23ac615fu,
    0xc1e3db10u, 0x601b54c1u, 0xfe52ce72u, 0x9c8a4823u, 0x3ac1c1d4u, 0xd8f93b85u, 0x7730b536u, 0x15682ee7u,
};

static const uint32_t bshim_124_tab5[96] = {
    0xe0811af9u, 0x7eb894aau, 0x1cf00e5bu, 0xbb27880cu, 0x595f01bdu, 0xf7967b6eu, 0x95cdf51fu, 0x34056ed0u,
    0xd23ce881u, 0x70746232u, 0x0eabdbe3u, 0xace35594u, 0x4b1acf45u, 0xe95248f6u, 0x8789c2a7u, 0x25c13c58u,
    0xc3f8b609u, 0x62302fbau, 0x0067a96bu, 0x9e9f231cu, 0x3cd69ccdu, 0xdb0e167eu, 0x7945902fu, 0x177d09e0u,
    0xb5b48391u, 0x53ebfd42u, 0xf22376f3u, 0x905af0a4u, 0x2e926a55u, 0xccc9e406u, 0x6b015db7u, 0x0938d768u,
    0xa7705119u, 0x45a7cacau, 0xe3df447bu, 0x8216be2cu, 0x204e37ddu, 0xbe85b18eu, 0x5cbd2b3fu, 0xfaf4a4f0u,
    0x992c1ea1u, 0x37639852u, 0xd59b1203u, 0x73d28bb4u, 0x120a0565u, 0xb0417f16u, 0x4e78f8c7u, 0xecb07278u,
    0x8ae7ec29u, 0x291f65dau, 0xc756df8bu, 0x658e593cu, 0x03c5d2edu, 0xa1fd4c9eu, 0x4034c64fu, 0xde6c4000u,
    0x7ca3b9b1u, 0x1adb3362u, 0xb912ad13u, 0x574a26c4u, 0xf581a075u, 0x93b91a26u, 0x31f093d7u, 0xd0280d88u,
    0x6e5f8739u, 0x0c9700eau, 0xaace7a9bu, 0x4905f44cu, 0xe73d6dfdu, 0x8574e7aeu, 0x23ac615fu, 0xc1e3db10u,
    0x601b54c1u, 0xfe52ce72u, 0x9c8a4823u, 0x3ac1c1d4u, 0xd8f93b85u, 0x7730b536u, 0x15682ee7u, 0xb39fa898u,
    0x51d72249u, 0xf00e9bfau, 0x8e4615abu, 0x2c7d8f5cu, 0xcab5090du, 0x68ec82beu, 0x0723fc6fu, 0xa55b7620u,
    0x4392efd1u, 0xe1ca6982u, 0x8001e333u, 0x1e395ce4u, 0xbc70d695u, 0x5aa85046u, 0xf8dfc9f7u, 0x971743a8u,
};

static const uint32_t bshim_124_tab6[96] = {
    0x62302fbau, 0x0067a96bu, 0x9e9f231cu, 0x3cd69ccdu, 0xdb0e167eu, 0x7945902fu, 0x177d09e0u, 0xb5b48391u,
    0x53ebfd42u, 0xf22376f3u, 0x905af0a4u, 0x2e926a55u, 0xccc9e406u, 0x6b015db7u, 0x0938d768u, 0xa7705119u,
    0x45a7cacau, 0xe3df447bu, 0x8216be2cu, 0x204e37ddu, 0xbe85b18eu, 0x5cbd2b3fu, 0xfaf4a4f0u, 0x992c1ea1u,
    0x37639852u, 0xd59b1203u, 0x73d28bb4u, 0x120a0565u, 0xb0417f16u, 0x4e78f8c7u, 0xecb07278u, 0x8ae7ec29u,
    0x291f65dau, 0xc756df8bu, 0x658e593cu, 0x03c5d2edu, 0xa1fd4c9eu, 0x4034c64fu, 0xde6c4000u, 0x7ca3b9b1u,
    0x1adb3362u, 0xb912ad13u, 0x574a26c4u, 0xf581a075u, 0x93b91a26u, 0x31f093d7u, 0xd0280d88u, 0x6e5f8739u,
    0x0c9700eau, 0xaace7a9bu, 0x4905f44cu, 0xe73d6dfdu, 0x8574e7aeu, 0x23ac615fu, 0xc1e3db10u, 0x601b54c1u,
    0xfe52ce72u, 0x9c8a4823u, 0x3ac1c1d4u, 0xd8f93b85u, 0x7730b536u, 0x15682ee7u, 0xb39fa898u, 0x51d72249u,
    0xf00e9bfau, 0x8e4615abu, 0x2c7d8f5cu, 0xcab5090du, 0x68ec82beu, 0x0723fc6fu, 0xa55b7620u, 0x4392efd1u,
    0xe1ca6982u, 0x8001e333u, 0x1e395ce4u, 0xbc70d695u, 0x5aa85046u, 0xf8dfc9f7u, 0x971743a8u, 0x354ebd59u,
    0xd386370au, 0x71bdb0bbu, 0x0ff52a6cu, 0xae2ca41du, 0x4c641dceu, 0xea9b977fu, 0x88d31130u, 0x270a8ae1u,
    0xc5420492u, 0x63797e43u, 0x01b0f7f4u, 0x9fe871a5u, 0x3e1feb56u, 0xdc576507u, 0x7a8edeb8u, 0x18c65869u,
};

static const uint32_t bshim_124_tab7[96] = {
    0xe3df447bu, 0x8216be2cu, 0x204e37ddu, 0xbe85b18eu, 0x5cbd2b3fu, 0xfaf4a4f0u, 0x992c1ea1u, 0x37639852u,
    0xd59b1203u, 0x73d28bb4u, 0x120a0565u, 0xb0417f16u, 0x4e78f8c7u, 0xecb07278u, 0x8ae7ec29u, 0x291f65dau,
    0xc756df8bu, 0x658e593cu, 0x03c5d2edu, 0xa1fd4c9eu, 0x4034c64fu, 0xde6c4000u, 0x7ca3b9b1u, 0x1adb3362u,
    0xb912ad13u, 0x574a26c4u, 0xf581a075u, 0x93b91a26u, 0x31f093d7u, 0xd0280d88u, 0x6e5f8739u, 0x0c9700eau,
    0xaace7a9bu, 0x4905f44cu, 0xe73d6dfdu, 0x8574e7aeu, 0x23ac615fu, 0xc1e3db10u, 0x601b54c1u, 0xfe52ce72u,
    0x9c8a4823u, 0x3ac1c1d4u, 0xd8f93b85u, 0x7730b536u, 0x15682ee7u, 0xb39fa898u, 0x51d72249u, 0xf00e9bfau,
    0x8e4615abu, 0x2c7d8f5cu, 0xcab5090du, 0x68ec82beu, 0x0723fc6fu, 0xa55b7620u, 0x4392efd1u, 0xe1ca6982u,
    0x8001e333u, 0x1e395ce4u, 0xbc70d695u, 0x5aa85046u, 0xf8dfc9f7u, 0x971743a8u, 0x354ebd59u, 0xd386370au,
    0x71bdb0bbu, 0x0ff52a6cu, 0xae2ca41du, 0x4c641dceu, 0xea9b977fu, 0x88d31130u, 0x270a8ae1u, 0xc5420492u,
    0x63797e43u, 0x01b0f7f4u, 0x9fe871a5u, 0x3e1feb56u, 0xdc576507u, 0x7a8edeb8u, 0x18c65869u, 0xb6fdd21au,
    0x55354bcbu, 0xf36cc57cu, 0x91a43f2du, 0x2fdbb8deu, 0xce13328fu, 0x6c4aac40u, 0x0a8225f1u, 0xa8b99fa2u,
    0x46f11953u, 0xe5289304u, 0x83600cb5u, 0x21978666u, 0xbfcf0017u, 0x5e0679c8u, 0xfc3df379u, 0x9a756d2au,
};

struct bshim_124_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_124_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_124_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_124_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_124_reset(struct bshim_124_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000efbc4u;
    return 0;
}

