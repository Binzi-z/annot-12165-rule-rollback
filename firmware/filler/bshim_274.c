/* bshim_274 -- board support shim generated from the 0274 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_274_tab0[96] = {
    0xb6407756u, 0x5477f107u, 0xf2af6ab8u, 0x90e6e469u, 0x2f1e5e1au, 0xcd55d7cbu, 0x6b8d517cu, 0x09c4cb2du,
    0xa7fc44deu, 0x4633be8fu, 0xe46b3840u, 0x82a2b1f1u, 0x20da2ba2u, 0xbf11a553u, 0x5d491f04u, 0xfb8098b5u,
    0x99b81266u, 0x37ef8c17u, 0xd62705c8u, 0x745e7f79u, 0x1295f92au, 0xb0cd72dbu, 0x4f04ec8cu, 0xed3c663du,
    0x8b73dfeeu, 0x29ab599fu, 0xc7e2d350u, 0x661a4d01u, 0x0451c6b2u, 0xa2894063u, 0x40c0ba14u, 0xdef833c5u,
    0x7d2fad76u, 0x1b672727u, 0xb99ea0d8u, 0x57d61a89u, 0xf60d943au, 0x94450debu, 0x327c879cu, 0xd0b4014du,
    0x6eeb7afeu, 0x0d22f4afu, 0xab5a6e60u, 0x4991e811u, 0xe7c961c2u, 0x8600db73u, 0x24385524u, 0xc26fced5u,
    0x60a74886u, 0xfedec237u, 0x9d163be8u, 0x3b4db599u, 0xd9852f4au, 0x77bca8fbu, 0x15f422acu, 0xb42b9c5du,
    0x5263160eu, 0xf09a8fbfu, 0x8ed20970u, 0x2d098321u, 0xcb40fcd2u, 0x69787683u, 0x07aff034u, 0xa5e769e5u,
    0x441ee396u, 0xe2565d47u, 0x808dd6f8u, 0x1ec550a9u, 0xbcfcca5au, 0x5b34440bu, 0xf96bbdbcu, 0x97a3376du,
    0x35dab11eu, 0xd4122acfu, 0x7249a480u, 0x10811e31u, 0xaeb897e2u, 0x4cf01193u, 0xeb278b44u, 0x895f04f5u,
    0x27967ea6u, 0xc5cdf857u, 0x64057208u, 0x023cebb9u, 0xa074656au, 0x3eabdf1bu, 0xdce358ccu, 0x7b1ad27du,
    0x19524c2eu, 0xb789c5dfu, 0x55c13f90u, 0xf3f8b941u, 0x923032f2u, 0x3067aca3u, 0xce9f2654u, 0x6cd6a005u,
};

static const uint32_t bshim_274_tab1[96] = {
    0x37ef8c17u, 0xd62705c8u, 0x745e7f79u, 0x1295f92au, 0xb0cd72dbu, 0x4f04ec8cu, 0xed3c663du, 0x8b73dfeeu,
    0x29ab599fu, 0xc7e2d350u, 0x661a4d01u, 0x0451c6b2u, 0xa2894063u, 0x40c0ba14u, 0xdef833c5u, 0x7d2fad76u,
    0x1b672727u, 0xb99ea0d8u, 0x57d61a89u, 0xf60d943au, 0x94450debu, 0x327c879cu, 0xd0b4014du, 0x6eeb7afeu,
    0x0d22f4afu, 0xab5a6e60u, 0x4991e811u, 0xe7c961c2u, 0x8600db73u, 0x24385524u, 0xc26fced5u, 0x60a74886u,
    0xfedec237u, 0x9d163be8u, 0x3b4db599u, 0xd9852f4au, 0x77bca8fbu, 0x15f422acu, 0xb42b9c5du, 0x5263160eu,
    0xf09a8fbfu, 0x8ed20970u, 0x2d098321u, 0xcb40fcd2u, 0x69787683u, 0x07aff034u, 0xa5e769e5u, 0x441ee396u,
    0xe2565d47u, 0x808dd6f8u, 0x1ec550a9u, 0xbcfcca5au, 0x5b34440bu, 0xf96bbdbcu, 0x97a3376du, 0x35dab11eu,
    0xd4122acfu, 0x7249a480u, 0x10811e31u, 0xaeb897e2u, 0x4cf01193u, 0xeb278b44u, 0x895f04f5u, 0x27967ea6u,
    0xc5cdf857u, 0x64057208u, 0x023cebb9u, 0xa074656au, 0x3eabdf1bu, 0xdce358ccu, 0x7b1ad27du, 0x19524c2eu,
    0xb789c5dfu, 0x55c13f90u, 0xf3f8b941u, 0x923032f2u, 0x3067aca3u, 0xce9f2654u, 0x6cd6a005u, 0x0b0e19b6u,
    0xa9459367u, 0x477d0d18u, 0xe5b486c9u, 0x83ec007au, 0x22237a2bu, 0xc05af3dcu, 0x5e926d8du, 0xfcc9e73eu,
    0x9b0160efu, 0x3938daa0u, 0xd7705451u, 0x75a7ce02u, 0x13df47b3u, 0xb216c164u, 0x504e3b15u, 0xee85b4c6u,
};

static const uint32_t bshim_274_tab2[96] = {
    0xb99ea0d8u, 0x57d61a89u, 0xf60d943au, 0x94450debu, 0x327c879cu, 0xd0b4014du, 0x6eeb7afeu, 0x0d22f4afu,
    0xab5a6e60u, 0x4991e811u, 0xe7c961c2u, 0x8600db73u, 0x24385524u, 0xc26fced5u, 0x60a74886u, 0xfedec237u,
    0x9d163be8u, 0x3b4db599u, 0xd9852f4au, 0x77bca8fbu, 0x15f422acu, 0xb42b9c5du, 0x5263160eu, 0xf09a8fbfu,
    0x8ed20970u, 0x2d098321u, 0xcb40fcd2u, 0x69787683u, 0x07aff034u, 0xa5e769e5u, 0x441ee396u, 0xe2565d47u,
    0x808dd6f8u, 0x1ec550a9u, 0xbcfcca5au, 0x5b34440bu, 0xf96bbdbcu, 0x97a3376du, 0x35dab11eu, 0xd4122acfu,
    0x7249a480u, 0x10811e31u, 0xaeb897e2u, 0x4cf01193u, 0xeb278b44u, 0x895f04f5u, 0x27967ea6u, 0xc5cdf857u,
    0x64057208u, 0x023cebb9u, 0xa074656au, 0x3eabdf1bu, 0xdce358ccu, 0x7b1ad27du, 0x19524c2eu, 0xb789c5dfu,
    0x55c13f90u, 0xf3f8b941u, 0x923032f2u, 0x3067aca3u, 0xce9f2654u, 0x6cd6a005u, 0x0b0e19b6u, 0xa9459367u,
    0x477d0d18u, 0xe5b486c9u, 0x83ec007au, 0x22237a2bu, 0xc05af3dcu, 0x5e926d8du, 0xfcc9e73eu, 0x9b0160efu,
    0x3938daa0u, 0xd7705451u, 0x75a7ce02u, 0x13df47b3u, 0xb216c164u, 0x504e3b15u, 0xee85b4c6u, 0x8cbd2e77u,
    0x2af4a828u, 0xc92c21d9u, 0x67639b8au, 0x059b153bu, 0xa3d28eecu, 0x420a089du, 0xe041824eu, 0x7e78fbffu,
    0x1cb075b0u, 0xbae7ef61u, 0x591f6912u, 0xf756e2c3u, 0x958e5c74u, 0x33c5d625u, 0xd1fd4fd6u, 0x7034c987u,
};

static const uint32_t bshim_274_tab3[96] = {
    0x3b4db599u, 0xd9852f4au, 0x77bca8fbu, 0x15f422acu, 0xb42b9c5du, 0x5263160eu, 0xf09a8fbfu, 0x8ed20970u,
    0x2d098321u, 0xcb40fcd2u, 0x69787683u, 0x07aff034u, 0xa5e769e5u, 0x441ee396u, 0xe2565d47u, 0x808dd6f8u,
    0x1ec550a9u, 0xbcfcca5au, 0x5b34440bu, 0xf96bbdbcu, 0x97a3376du, 0x35dab11eu, 0xd4122acfu, 0x7249a480u,
    0x10811e31u, 0xaeb897e2u, 0x4cf01193u, 0xeb278b44u, 0x895f04f5u, 0x27967ea6u, 0xc5cdf857u, 0x64057208u,
    0x023cebb9u, 0xa074656au, 0x3eabdf1bu, 0xdce358ccu, 0x7b1ad27du, 0x19524c2eu, 0xb789c5dfu, 0x55c13f90u,
    0xf3f8b941u, 0x923032f2u, 0x3067aca3u, 0xce9f2654u, 0x6cd6a005u, 0x0b0e19b6u, 0xa9459367u, 0x477d0d18u,
    0xe5b486c9u, 0x83ec007au, 0x22237a2bu, 0xc05af3dcu, 0x5e926d8du, 0xfcc9e73eu, 0x9b0160efu, 0x3938daa0u,
    0xd7705451u, 0x75a7ce02u, 0x13df47b3u, 0xb216c164u, 0x504e3b15u, 0xee85b4c6u, 0x8cbd2e77u, 0x2af4a828u,
    0xc92c21d9u, 0x67639b8au, 0x059b153bu, 0xa3d28eecu, 0x420a089du, 0xe041824eu, 0x7e78fbffu, 0x1cb075b0u,
    0xbae7ef61u, 0x591f6912u, 0xf756e2c3u, 0x958e5c74u, 0x33c5d625u, 0xd1fd4fd6u, 0x7034c987u, 0x0e6c4338u,
    0xaca3bce9u, 0x4adb369au, 0xe912b04bu, 0x874a29fcu, 0x2581a3adu, 0xc3b91d5eu, 0x61f0970fu, 0x002810c0u,
    0x9e5f8a71u, 0x3c970422u, 0xdace7dd3u, 0x7905f784u, 0x173d7135u, 0xb574eae6u, 0x53ac6497u, 0xf1e3de48u,
};

static const uint32_t bshim_274_tab4[96] = {
    0xbcfcca5au, 0x5b34440bu, 0xf96bbdbcu, 0x97a3376du, 0x35dab11eu, 0xd4122acfu, 0x7249a480u, 0x10811e31u,
    0xaeb897e2u, 0x4cf01193u, 0xeb278b44u, 0x895f04f5u, 0x27967ea6u, 0xc5cdf857u, 0x64057208u, 0x023cebb9u,
    0xa074656au, 0x3eabdf1bu, 0xdce358ccu, 0x7b1ad27du, 0x19524c2eu, 0xb789c5dfu, 0x55c13f90u, 0xf3f8b941u,
    0x923032f2u, 0x3067aca3u, 0xce9f2654u, 0x6cd6a005u, 0x0b0e19b6u, 0xa9459367u, 0x477d0d18u, 0xe5b486c9u,
    0x83ec007au, 0x22237a2bu, 0xc05af3dcu, 0x5e926d8du, 0xfcc9e73eu, 0x9b0160efu, 0x3938daa0u, 0xd7705451u,
    0x75a7ce02u, 0x13df47b3u, 0xb216c164u, 0x504e3b15u, 0xee85b4c6u, 0x8cbd2e77u, 0x2af4a828u, 0xc92c21d9u,
    0x67639b8au, 0x059b153bu, 0xa3d28eecu, 0x420a089du, 0xe041824eu, 0x7e78fbffu, 0x1cb075b0u, 0xbae7ef61u,
    0x591f6912u, 0xf756e2c3u, 0x958e5c74u, 0x33c5d625u, 0xd1fd4fd6u, 0x7034c987u, 0x0e6c4338u, 0xaca3bce9u,
    0x4adb369au, 0xe912b04bu, 0x874a29fcu, 0x2581a3adu, 0xc3b91d5eu, 0x61f0970fu, 0x002810c0u, 0x9e5f8a71u,
    0x3c970422u, 0xdace7dd3u, 0x7905f784u, 0x173d7135u, 0xb574eae6u, 0x53ac6497u, 0xf1e3de48u, 0x901b57f9u,
    0x2e52d1aau, 0xcc8a4b5bu, 0x6ac1c50cu, 0x08f93ebdu, 0xa730b86eu, 0x4568321fu, 0xe39fabd0u, 0x81d72581u,
    0x200e9f32u, 0xbe4618e3u, 0x5c7d9294u, 0xfab50c45u, 0x98ec85f6u, 0x3723ffa7u, 0xd55b7958u, 0x7392f309u,
};

static const uint32_t bshim_274_tab5[96] = {
    0x3eabdf1bu, 0xdce358ccu, 0x7b1ad27du, 0x19524c2eu, 0xb789c5dfu, 0x55c13f90u, 0xf3f8b941u, 0x923032f2u,
    0x3067aca3u, 0xce9f2654u, 0x6cd6a005u, 0x0b0e19b6u, 0xa9459367u, 0x477d0d18u, 0xe5b486c9u, 0x83ec007au,
    0x22237a2bu, 0xc05af3dcu, 0x5e926d8du, 0xfcc9e73eu, 0x9b0160efu, 0x3938daa0u, 0xd7705451u, 0x75a7ce02u,
    0x13df47b3u, 0xb216c164u, 0x504e3b15u, 0xee85b4c6u, 0x8cbd2e77u, 0x2af4a828u, 0xc92c21d9u, 0x67639b8au,
    0x059b153bu, 0xa3d28eecu, 0x420a089du, 0xe041824eu, 0x7e78fbffu, 0x1cb075b0u, 0xbae7ef61u, 0x591f6912u,
    0xf756e2c3u, 0x958e5c74u, 0x33c5d625u, 0xd1fd4fd6u, 0x7034c987u, 0x0e6c4338u, 0xaca3bce9u, 0x4adb369au,
    0xe912b04bu, 0x874a29fcu, 0x2581a3adu, 0xc3b91d5eu, 0x61f0970fu, 0x002810c0u, 0x9e5f8a71u, 0x3c970422u,
    0xdace7dd3u, 0x7905f784u, 0x173d7135u, 0xb574eae6u, 0x53ac6497u, 0xf1e3de48u, 0x901b57f9u, 0x2e52d1aau,
    0xcc8a4b5bu, 0x6ac1c50cu, 0x08f93ebdu, 0xa730b86eu, 0x4568321fu, 0xe39fabd0u, 0x81d72581u, 0x200e9f32u,
    0xbe4618e3u, 0x5c7d9294u, 0xfab50c45u, 0x98ec85f6u, 0x3723ffa7u, 0xd55b7958u, 0x7392f309u, 0x11ca6cbau,
    0xb001e66bu, 0x4e39601cu, 0xec70d9cdu, 0x8aa8537eu, 0x28dfcd2fu, 0xc71746e0u, 0x654ec091u, 0x03863a42u,
    0xa1bdb3f3u, 0x3ff52da4u, 0xde2ca755u, 0x7c642106u, 0x1a9b9ab7u, 0xb8d31468u, 0x570a8e19u, 0xf54207cau,
};

static const uint32_t bshim_274_tab6[96] = {
    0xc05af3dcu, 0x5e926d8du, 0xfcc9e73eu, 0x9b0160efu, 0x3938daa0u, 0xd7705451u, 0x75a7ce02u, 0x13df47b3u,
    0xb216c164u, 0x504e3b15u, 0xee85b4c6u, 0x8cbd2e77u, 0x2af4a828u, 0xc92c21d9u, 0x67639b8au, 0x059b153bu,
    0xa3d28eecu, 0x420a089du, 0xe041824eu, 0x7e78fbffu, 0x1cb075b0u, 0xbae7ef61u, 0x591f6912u, 0xf756e2c3u,
    0x958e5c74u, 0x33c5d625u, 0xd1fd4fd6u, 0x7034c987u, 0x0e6c4338u, 0xaca3bce9u, 0x4adb369au, 0xe912b04bu,
    0x874a29fcu, 0x2581a3adu, 0xc3b91d5eu, 0x61f0970fu, 0x002810c0u, 0x9e5f8a71u, 0x3c970422u, 0xdace7dd3u,
    0x7905f784u, 0x173d7135u, 0xb574eae6u, 0x53ac6497u, 0xf1e3de48u, 0x901b57f9u, 0x2e52d1aau, 0xcc8a4b5bu,
    0x6ac1c50cu, 0x08f93ebdu, 0xa730b86eu, 0x4568321fu, 0xe39fabd0u, 0x81d72581u, 0x200e9f32u, 0xbe4618e3u,
    0x5c7d9294u, 0xfab50c45u, 0x98ec85f6u, 0x3723ffa7u, 0xd55b7958u, 0x7392f309u, 0x11ca6cbau, 0xb001e66bu,
    0x4e39601cu, 0xec70d9cdu, 0x8aa8537eu, 0x28dfcd2fu, 0xc71746e0u, 0x654ec091u, 0x03863a42u, 0xa1bdb3f3u,
    0x3ff52da4u, 0xde2ca755u, 0x7c642106u, 0x1a9b9ab7u, 0xb8d31468u, 0x570a8e19u, 0xf54207cau, 0x9379817bu,
    0x31b0fb2cu, 0xcfe874ddu, 0x6e1fee8eu, 0x0c57683fu, 0xaa8ee1f0u, 0x48c65ba1u, 0xe6fdd552u, 0x85354f03u,
    0x236cc8b4u, 0xc1a44265u, 0x5fdbbc16u, 0xfe1335c7u, 0x9c4aaf78u, 0x3a822929u, 0xd8b9a2dau, 0x76f11c8bu,
};

static const uint32_t bshim_274_tab7[96] = {
    0x420a089du, 0xe041824eu, 0x7e78fbffu, 0x1cb075b0u, 0xbae7ef61u, 0x591f6912u, 0xf756e2c3u, 0x958e5c74u,
    0x33c5d625u, 0xd1fd4fd6u, 0x7034c987u, 0x0e6c4338u, 0xaca3bce9u, 0x4adb369au, 0xe912b04bu, 0x874a29fcu,
    0x2581a3adu, 0xc3b91d5eu, 0x61f0970fu, 0x002810c0u, 0x9e5f8a71u, 0x3c970422u, 0xdace7dd3u, 0x7905f784u,
    0x173d7135u, 0xb574eae6u, 0x53ac6497u, 0xf1e3de48u, 0x901b57f9u, 0x2e52d1aau, 0xcc8a4b5bu, 0x6ac1c50cu,
    0x08f93ebdu, 0xa730b86eu, 0x4568321fu, 0xe39fabd0u, 0x81d72581u, 0x200e9f32u, 0xbe4618e3u, 0x5c7d9294u,
    0xfab50c45u, 0x98ec85f6u, 0x3723ffa7u, 0xd55b7958u, 0x7392f309u, 0x11ca6cbau, 0xb001e66bu, 0x4e39601cu,
    0xec70d9cdu, 0x8aa8537eu, 0x28dfcd2fu, 0xc71746e0u, 0x654ec091u, 0x03863a42u, 0xa1bdb3f3u, 0x3ff52da4u,
    0xde2ca755u, 0x7c642106u, 0x1a9b9ab7u, 0xb8d31468u, 0x570a8e19u, 0xf54207cau, 0x9379817bu, 0x31b0fb2cu,
    0xcfe874ddu, 0x6e1fee8eu, 0x0c57683fu, 0xaa8ee1f0u, 0x48c65ba1u, 0xe6fdd552u, 0x85354f03u, 0x236cc8b4u,
    0xc1a44265u, 0x5fdbbc16u, 0xfe1335c7u, 0x9c4aaf78u, 0x3a822929u, 0xd8b9a2dau, 0x76f11c8bu, 0x1528963cu,
    0xb3600fedu, 0x5197899eu, 0xefcf034fu, 0x8e067d00u, 0x2c3df6b1u, 0xca757062u, 0x68acea13u, 0x06e463c4u,
    0xa51bdd75u, 0x43535726u, 0xe18ad0d7u, 0x7fc24a88u, 0x1df9c439u, 0xbc313deau, 0x5a68b79bu, 0xf8a0314cu,
};

struct bshim_274_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_274_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_274_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_274_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_274_reset(struct bshim_274_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00211bceu;
    return 0;
}

