/* bshim_241 -- board support shim generated from the 0241 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_241_tab0[96] = {
    0xf3747f63u, 0x91abf914u, 0x2fe372c5u, 0xce1aec76u, 0x6c526627u, 0x0a89dfd8u, 0xa8c15989u, 0x46f8d33au,
    0xe5304cebu, 0x8367c69cu, 0x219f404du, 0xbfd6b9feu, 0x5e0e33afu, 0xfc45ad60u, 0x9a7d2711u, 0x38b4a0c2u,
    0xd6ec1a73u, 0x75239424u, 0x135b0dd5u, 0xb1928786u, 0x4fca0137u, 0xee017ae8u, 0x8c38f499u, 0x2a706e4au,
    0xc8a7e7fbu, 0x66df61acu, 0x0516db5du, 0xa34e550eu, 0x4185cebfu, 0xdfbd4870u, 0x7df4c221u, 0x1c2c3bd2u,
    0xba63b583u, 0x589b2f34u, 0xf6d2a8e5u, 0x950a2296u, 0x33419c47u, 0xd17915f8u, 0x6fb08fa9u, 0x0de8095au,
    0xac1f830bu, 0x4a56fcbcu, 0xe88e766du, 0x86c5f01eu, 0x24fd69cfu, 0xc334e380u, 0x616c5d31u, 0xffa3d6e2u,
    0x9ddb5093u, 0x3c12ca44u, 0xda4a43f5u, 0x7881bda6u, 0x16b93757u, 0xb4f0b108u, 0x53282ab9u, 0xf15fa46au,
    0x8f971e1bu, 0x2dce97ccu, 0xcc06117du, 0x6a3d8b2eu, 0x087504dfu, 0xa6ac7e90u, 0x44e3f841u, 0xe31b71f2u,
    0x8152eba3u, 0x1f8a6554u, 0xbdc1df05u, 0x5bf958b6u, 0xfa30d267u, 0x98684c18u, 0x369fc5c9u, 0xd4d73f7au,
    0x730eb92bu, 0x114632dcu, 0xaf7dac8du, 0x4db5263eu, 0xebec9fefu, 0x8a2419a0u, 0x285b9351u, 0xc6930d02u,
    0x64ca86b3u, 0x03020064u, 0xa1397a15u, 0x3f70f3c6u, 0xdda86d77u, 0x7bdfe728u, 0x1a1760d9u, 0xb84eda8au,
    0x5686543bu, 0xf4bdcdecu, 0x92f5479du, 0x312cc14eu, 0xcf643affu, 0x6d9bb4b0u, 0x0bd32e61u, 0xaa0aa812u,
};

static const uint32_t bshim_241_tab1[96] = {
    0x75239424u, 0x135b0dd5u, 0xb1928786u, 0x4fca0137u, 0xee017ae8u, 0x8c38f499u, 0x2a706e4au, 0xc8a7e7fbu,
    0x66df61acu, 0x0516db5du, 0xa34e550eu, 0x4185cebfu, 0xdfbd4870u, 0x7df4c221u, 0x1c2c3bd2u, 0xba63b583u,
    0x589b2f34u, 0xf6d2a8e5u, 0x950a2296u, 0x33419c47u, 0xd17915f8u, 0x6fb08fa9u, 0x0de8095au, 0xac1f830bu,
    0x4a56fcbcu, 0xe88e766du, 0x86c5f01eu, 0x24fd69cfu, 0xc334e380u, 0x616c5d31u, 0xffa3d6e2u, 0x9ddb5093u,
    0x3c12ca44u, 0xda4a43f5u, 0x7881bda6u, 0x16b93757u, 0xb4f0b108u, 0x53282ab9u, 0xf15fa46au, 0x8f971e1bu,
    0x2dce97ccu, 0xcc06117du, 0x6a3d8b2eu, 0x087504dfu, 0xa6ac7e90u, 0x44e3f841u, 0xe31b71f2u, 0x8152eba3u,
    0x1f8a6554u, 0xbdc1df05u, 0x5bf958b6u, 0xfa30d267u, 0x98684c18u, 0x369fc5c9u, 0xd4d73f7au, 0x730eb92bu,
    0x114632dcu, 0xaf7dac8du, 0x4db5263eu, 0xebec9fefu, 0x8a2419a0u, 0x285b9351u, 0xc6930d02u, 0x64ca86b3u,
    0x03020064u, 0xa1397a15u, 0x3f70f3c6u, 0xdda86d77u, 0x7bdfe728u, 0x1a1760d9u, 0xb84eda8au, 0x5686543bu,
    0xf4bdcdecu, 0x92f5479du, 0x312cc14eu, 0xcf643affu, 0x6d9bb4b0u, 0x0bd32e61u, 0xaa0aa812u, 0x484221c3u,
    0xe6799b74u, 0x84b11525u, 0x22e88ed6u, 0xc1200887u, 0x5f578238u, 0xfd8efbe9u, 0x9bc6759au, 0x39fdef4bu,
    0xd83568fcu, 0x766ce2adu, 0x14a45c5eu, 0xb2dbd60fu, 0x51134fc0u, 0xef4ac971u, 0x8d824322u, 0x2bb9bcd3u,
};

static const uint32_t bshim_241_tab2[96] = {
    0xf6d2a8e5u, 0x950a2296u, 0x33419c47u, 0xd17915f8u, 0x6fb08fa9u, 0x0de8095au, 0xac1f830bu, 0x4a56fcbcu,
    0xe88e766du, 0x86c5f01eu, 0x24fd69cfu, 0xc334e380u, 0x616c5d31u, 0xffa3d6e2u, 0x9ddb5093u, 0x3c12ca44u,
    0xda4a43f5u, 0x7881bda6u, 0x16b93757u, 0xb4f0b108u, 0x53282ab9u, 0xf15fa46au, 0x8f971e1bu, 0x2dce97ccu,
    0xcc06117du, 0x6a3d8b2eu, 0x087504dfu, 0xa6ac7e90u, 0x44e3f841u, 0xe31b71f2u, 0x8152eba3u, 0x1f8a6554u,
    0xbdc1df05u, 0x5bf958b6u, 0xfa30d267u, 0x98684c18u, 0x369fc5c9u, 0xd4d73f7au, 0x730eb92bu, 0x114632dcu,
    0xaf7dac8du, 0x4db5263eu, 0xebec9fefu, 0x8a2419a0u, 0x285b9351u, 0xc6930d02u, 0x64ca86b3u, 0x03020064u,
    0xa1397a15u, 0x3f70f3c6u, 0xdda86d77u, 0x7bdfe728u, 0x1a1760d9u, 0xb84eda8au, 0x5686543bu, 0xf4bdcdecu,
    0x92f5479du, 0x312cc14eu, 0xcf643affu, 0x6d9bb4b0u, 0x0bd32e61u, 0xaa0aa812u, 0x484221c3u, 0xe6799b74u,
    0x84b11525u, 0x22e88ed6u, 0xc1200887u, 0x5f578238u, 0xfd8efbe9u, 0x9bc6759au, 0x39fdef4bu, 0xd83568fcu,
    0x766ce2adu, 0x14a45c5eu, 0xb2dbd60fu, 0x51134fc0u, 0xef4ac971u, 0x8d824322u, 0x2bb9bcd3u, 0xc9f13684u,
    0x6828b035u, 0x066029e6u, 0xa497a397u, 0x42cf1d48u, 0xe10696f9u, 0x7f3e10aau, 0x1d758a5bu, 0xbbad040cu,
    0x59e47dbdu, 0xf81bf76eu, 0x9653711fu, 0x348aead0u, 0xd2c26481u, 0x70f9de32u, 0x0f3157e3u, 0xad68d194u,
};

static const uint32_t bshim_241_tab3[96] = {
    0x7881bda6u, 0x16b93757u, 0xb4f0b108u, 0x53282ab9u, 0xf15fa46au, 0x8f971e1bu, 0x2dce97ccu, 0xcc06117du,
    0x6a3d8b2eu, 0x087504dfu, 0xa6ac7e90u, 0x44e3f841u, 0xe31b71f2u, 0x8152eba3u, 0x1f8a6554u, 0xbdc1df05u,
    0x5bf958b6u, 0xfa30d267u, 0x98684c18u, 0x369fc5c9u, 0xd4d73f7au, 0x730eb92bu, 0x114632dcu, 0xaf7dac8du,
    0x4db5263eu, 0xebec9fefu, 0x8a2419a0u, 0x285b9351u, 0xc6930d02u, 0x64ca86b3u, 0x03020064u, 0xa1397a15u,
    0x3f70f3c6u, 0xdda86d77u, 0x7bdfe728u, 0x1a1760d9u, 0xb84eda8au, 0x5686543bu, 0xf4bdcdecu, 0x92f5479du,
    0x312cc14eu, 0xcf643affu, 0x6d9bb4b0u, 0x0bd32e61u, 0xaa0aa812u, 0x484221c3u, 0xe6799b74u, 0x84b11525u,
    0x22e88ed6u, 0xc1200887u, 0x5f578238u, 0xfd8efbe9u, 0x9bc6759au, 0x39fdef4bu, 0xd83568fcu, 0x766ce2adu,
    0x14a45c5eu, 0xb2dbd60fu, 0x51134fc0u, 0xef4ac971u, 0x8d824322u, 0x2bb9bcd3u, 0xc9f13684u, 0x6828b035u,
    0x066029e6u, 0xa497a397u, 0x42cf1d48u, 0xe10696f9u, 0x7f3e10aau, 0x1d758a5bu, 0xbbad040cu, 0x59e47dbdu,
    0xf81bf76eu, 0x9653711fu, 0x348aead0u, 0xd2c26481u, 0x70f9de32u, 0x0f3157e3u, 0xad68d194u, 0x4ba04b45u,
    0xe9d7c4f6u, 0x880f3ea7u, 0x2646b858u, 0xc47e3209u, 0x62b5abbau, 0x00ed256bu, 0x9f249f1cu, 0x3d5c18cdu,
    0xdb93927eu, 0x79cb0c2fu, 0x180285e0u, 0xb639ff91u, 0x54717942u, 0xf2a8f2f3u, 0x90e06ca4u, 0x2f17e655u,
};

static const uint32_t bshim_241_tab4[96] = {
    0xfa30d267u, 0x98684c18u, 0x369fc5c9u, 0xd4d73f7au, 0x730eb92bu, 0x114632dcu, 0xaf7dac8du, 0x4db5263eu,
    0xebec9fefu, 0x8a2419a0u, 0x285b9351u, 0xc6930d02u, 0x64ca86b3u, 0x03020064u, 0xa1397a15u, 0x3f70f3c6u,
    0xdda86d77u, 0x7bdfe728u, 0x1a1760d9u, 0xb84eda8au, 0x5686543bu, 0xf4bdcdecu, 0x92f5479du, 0x312cc14eu,
    0xcf643affu, 0x6d9bb4b0u, 0x0bd32e61u, 0xaa0aa812u, 0x484221c3u, 0xe6799b74u, 0x84b11525u, 0x22e88ed6u,
    0xc1200887u, 0x5f578238u, 0xfd8efbe9u, 0x9bc6759au, 0x39fdef4bu, 0xd83568fcu, 0x766ce2adu, 0x14a45c5eu,
    0xb2dbd60fu, 0x51134fc0u, 0xef4ac971u, 0x8d824322u, 0x2bb9bcd3u, 0xc9f13684u, 0x6828b035u, 0x066029e6u,
    0xa497a397u, 0x42cf1d48u, 0xe10696f9u, 0x7f3e10aau, 0x1d758a5bu, 0xbbad040cu, 0x59e47dbdu, 0xf81bf76eu,
    0x9653711fu, 0x348aead0u, 0xd2c26481u, 0x70f9de32u, 0x0f3157e3u, 0xad68d194u, 0x4ba04b45u, 0xe9d7c4f6u,
    0x880f3ea7u, 0x2646b858u, 0xc47e3209u, 0x62b5abbau, 0x00ed256bu, 0x9f249f1cu, 0x3d5c18cdu, 0xdb93927eu,
    0x79cb0c2fu, 0x180285e0u, 0xb639ff91u, 0x54717942u, 0xf2a8f2f3u, 0x90e06ca4u, 0x2f17e655u, 0xcd4f6006u,
    0x6b86d9b7u, 0x09be5368u, 0xa7f5cd19u, 0x462d46cau, 0xe464c07bu, 0x829c3a2cu, 0x20d3b3ddu, 0xbf0b2d8eu,
    0x5d42a73fu, 0xfb7a20f0u, 0x99b19aa1u, 0x37e91452u, 0xd6208e03u, 0x745807b4u, 0x128f8165u, 0xb0c6fb16u,
};

static const uint32_t bshim_241_tab5[96] = {
    0x7bdfe728u, 0x1a1760d9u, 0xb84eda8au, 0x5686543bu, 0xf4bdcdecu, 0x92f5479du, 0x312cc14eu, 0xcf643affu,
    0x6d9bb4b0u, 0x0bd32e61u, 0xaa0aa812u, 0x484221c3u, 0xe6799b74u, 0x84b11525u, 0x22e88ed6u, 0xc1200887u,
    0x5f578238u, 0xfd8efbe9u, 0x9bc6759au, 0x39fdef4bu, 0xd83568fcu, 0x766ce2adu, 0x14a45c5eu, 0xb2dbd60fu,
    0x51134fc0u, 0xef4ac971u, 0x8d824322u, 0x2bb9bcd3u, 0xc9f13684u, 0x6828b035u, 0x066029e6u, 0xa497a397u,
    0x42cf1d48u, 0xe10696f9u, 0x7f3e10aau, 0x1d758a5bu, 0xbbad040cu, 0x59e47dbdu, 0xf81bf76eu, 0x9653711fu,
    0x348aead0u, 0xd2c26481u, 0x70f9de32u, 0x0f3157e3u, 0xad68d194u, 0x4ba04b45u, 0xe9d7c4f6u, 0x880f3ea7u,
    0x2646b858u, 0xc47e3209u, 0x62b5abbau, 0x00ed256bu, 0x9f249f1cu, 0x3d5c18cdu, 0xdb93927eu, 0x79cb0c2fu,
    0x180285e0u, 0xb639ff91u, 0x54717942u, 0xf2a8f2f3u, 0x90e06ca4u, 0x2f17e655u, 0xcd4f6006u, 0x6b86d9b7u,
    0x09be5368u, 0xa7f5cd19u, 0x462d46cau, 0xe464c07bu, 0x829c3a2cu, 0x20d3b3ddu, 0xbf0b2d8eu, 0x5d42a73fu,
    0xfb7a20f0u, 0x99b19aa1u, 0x37e91452u, 0xd6208e03u, 0x745807b4u, 0x128f8165u, 0xb0c6fb16u, 0x4efe74c7u,
    0xed35ee78u, 0x8b6d6829u, 0x29a4e1dau, 0xc7dc5b8bu, 0x6613d53cu, 0x044b4eedu, 0xa282c89eu, 0x40ba424fu,
    0xdef1bc00u, 0x7d2935b1u, 0x1b60af62u, 0xb9982913u, 0x57cfa2c4u, 0xf6071c75u, 0x943e9626u, 0x32760fd7u,
};

static const uint32_t bshim_241_tab6[96] = {
    0xfd8efbe9u, 0x9bc6759au, 0x39fdef4bu, 0xd83568fcu, 0x766ce2adu, 0x14a45c5eu, 0xb2dbd60fu, 0x51134fc0u,
    0xef4ac971u, 0x8d824322u, 0x2bb9bcd3u, 0xc9f13684u, 0x6828b035u, 0x066029e6u, 0xa497a397u, 0x42cf1d48u,
    0xe10696f9u, 0x7f3e10aau, 0x1d758a5bu, 0xbbad040cu, 0x59e47dbdu, 0xf81bf76eu, 0x9653711fu, 0x348aead0u,
    0xd2c26481u, 0x70f9de32u, 0x0f3157e3u, 0xad68d194u, 0x4ba04b45u, 0xe9d7c4f6u, 0x880f3ea7u, 0x2646b858u,
    0xc47e3209u, 0x62b5abbau, 0x00ed256bu, 0x9f249f1cu, 0x3d5c18cdu, 0xdb93927eu, 0x79cb0c2fu, 0x180285e0u,
    0xb639ff91u, 0x54717942u, 0xf2a8f2f3u, 0x90e06ca4u, 0x2f17e655u, 0xcd4f6006u, 0x6b86d9b7u, 0x09be5368u,
    0xa7f5cd19u, 0x462d46cau, 0xe464c07bu, 0x829c3a2cu, 0x20d3b3ddu, 0xbf0b2d8eu, 0x5d42a73fu, 0xfb7a20f0u,
    0x99b19aa1u, 0x37e91452u, 0xd6208e03u, 0x745807b4u, 0x128f8165u, 0xb0c6fb16u, 0x4efe74c7u, 0xed35ee78u,
    0x8b6d6829u, 0x29a4e1dau, 0xc7dc5b8bu, 0x6613d53cu, 0x044b4eedu, 0xa282c89eu, 0x40ba424fu, 0xdef1bc00u,
    0x7d2935b1u, 0x1b60af62u, 0xb9982913u, 0x57cfa2c4u, 0xf6071c75u, 0x943e9626u, 0x32760fd7u, 0xd0ad8988u,
    0x6ee50339u, 0x0d1c7ceau, 0xab53f69bu, 0x498b704cu, 0xe7c2e9fdu, 0x85fa63aeu, 0x2431dd5fu, 0xc2695710u,
    0x60a0d0c1u, 0xfed84a72u, 0x9d0fc423u, 0x3b473dd4u, 0xd97eb785u, 0x77b63136u, 0x15edaae7u, 0xb4252498u,
};

static const uint32_t bshim_241_tab7[96] = {
    0x7f3e10aau, 0x1d758a5bu, 0xbbad040cu, 0x59e47dbdu, 0xf81bf76eu, 0x9653711fu, 0x348aead0u, 0xd2c26481u,
    0x70f9de32u, 0x0f3157e3u, 0xad68d194u, 0x4ba04b45u, 0xe9d7c4f6u, 0x880f3ea7u, 0x2646b858u, 0xc47e3209u,
    0x62b5abbau, 0x00ed256bu, 0x9f249f1cu, 0x3d5c18cdu, 0xdb93927eu, 0x79cb0c2fu, 0x180285e0u, 0xb639ff91u,
    0x54717942u, 0xf2a8f2f3u, 0x90e06ca4u, 0x2f17e655u, 0xcd4f6006u, 0x6b86d9b7u, 0x09be5368u, 0xa7f5cd19u,
    0x462d46cau, 0xe464c07bu, 0x829c3a2cu, 0x20d3b3ddu, 0xbf0b2d8eu, 0x5d42a73fu, 0xfb7a20f0u, 0x99b19aa1u,
    0x37e91452u, 0xd6208e03u, 0x745807b4u, 0x128f8165u, 0xb0c6fb16u, 0x4efe74c7u, 0xed35ee78u, 0x8b6d6829u,
    0x29a4e1dau, 0xc7dc5b8bu, 0x6613d53cu, 0x044b4eedu, 0xa282c89eu, 0x40ba424fu, 0xdef1bc00u, 0x7d2935b1u,
    0x1b60af62u, 0xb9982913u, 0x57cfa2c4u, 0xf6071c75u, 0x943e9626u, 0x32760fd7u, 0xd0ad8988u, 0x6ee50339u,
    0x0d1c7ceau, 0xab53f69bu, 0x498b704cu, 0xe7c2e9fdu, 0x85fa63aeu, 0x2431dd5fu, 0xc2695710u, 0x60a0d0c1u,
    0xfed84a72u, 0x9d0fc423u, 0x3b473dd4u, 0xd97eb785u, 0x77b63136u, 0x15edaae7u, 0xb4252498u, 0x525c9e49u,
    0xf09417fau, 0x8ecb91abu, 0x2d030b5cu, 0xcb3a850du, 0x6971febeu, 0x07a9786fu, 0xa5e0f220u, 0x44186bd1u,
    0xe24fe582u, 0x80875f33u, 0x1ebed8e4u, 0xbcf65295u, 0x5b2dcc46u, 0xf96545f7u, 0x979cbfa8u, 0x35d43959u,
};

struct bshim_241_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_241_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_241_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_241_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_241_reset(struct bshim_241_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001d1effu;
    return 0;
}

