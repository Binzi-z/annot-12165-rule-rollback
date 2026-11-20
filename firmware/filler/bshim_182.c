/* bshim_182 -- board support shim generated from the 0182 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_182_tab0[96] = {
    0x2a937682u, 0xc8caf033u, 0x670269e4u, 0x0539e395u, 0xa3715d46u, 0x41a8d6f7u, 0xdfe050a8u, 0x7e17ca59u,
    0x1c4f440au, 0xba86bdbbu, 0x58be376cu, 0xf6f5b11du, 0x952d2aceu, 0x3364a47fu, 0xd19c1e30u, 0x6fd397e1u,
    0x0e0b1192u, 0xac428b43u, 0x4a7a04f4u, 0xe8b17ea5u, 0x86e8f856u, 0x25207207u, 0xc357ebb8u, 0x618f6569u,
    0xffc6df1au, 0x9dfe58cbu, 0x3c35d27cu, 0xda6d4c2du, 0x78a4c5deu, 0x16dc3f8fu, 0xb513b940u, 0x534b32f1u,
    0xf182aca2u, 0x8fba2653u, 0x2df1a004u, 0xcc2919b5u, 0x6a609366u, 0x08980d17u, 0xa6cf86c8u, 0x45070079u,
    0xe33e7a2au, 0x8175f3dbu, 0x1fad6d8cu, 0xbde4e73du, 0x5c1c60eeu, 0xfa53da9fu, 0x988b5450u, 0x36c2ce01u,
    0xd4fa47b2u, 0x7331c163u, 0x11693b14u, 0xafa0b4c5u, 0x4dd82e76u, 0xec0fa827u, 0x8a4721d8u, 0x287e9b89u,
    0xc6b6153au, 0x64ed8eebu, 0x0325089cu, 0xa15c824du, 0x3f93fbfeu, 0xddcb75afu, 0x7c02ef60u, 0x1a3a6911u,
    0xb871e2c2u, 0x56a95c73u, 0xf4e0d624u, 0x93184fd5u, 0x314fc986u, 0xcf874337u, 0x6dbebce8u, 0x0bf63699u,
    0xaa2db04au, 0x486529fbu, 0xe69ca3acu, 0x84d41d5du, 0x230b970eu, 0xc14310bfu, 0x5f7a8a70u, 0xfdb20421u,
    0x9be97dd2u, 0x3a20f783u, 0xd8587134u, 0x768feae5u, 0x14c76496u, 0xb2fede47u, 0x513657f8u, 0xef6dd1a9u,
    0x8da54b5au, 0x2bdcc50bu, 0xca143ebcu, 0x684bb86du, 0x0683321eu, 0xa4baabcfu, 0x42f22580u, 0xe1299f31u,
};

static const uint32_t bshim_182_tab1[96] = {
    0xac428b43u, 0x4a7a04f4u, 0xe8b17ea5u, 0x86e8f856u, 0x25207207u, 0xc357ebb8u, 0x618f6569u, 0xffc6df1au,
    0x9dfe58cbu, 0x3c35d27cu, 0xda6d4c2du, 0x78a4c5deu, 0x16dc3f8fu, 0xb513b940u, 0x534b32f1u, 0xf182aca2u,
    0x8fba2653u, 0x2df1a004u, 0xcc2919b5u, 0x6a609366u, 0x08980d17u, 0xa6cf86c8u, 0x45070079u, 0xe33e7a2au,
    0x8175f3dbu, 0x1fad6d8cu, 0xbde4e73du, 0x5c1c60eeu, 0xfa53da9fu, 0x988b5450u, 0x36c2ce01u, 0xd4fa47b2u,
    0x7331c163u, 0x11693b14u, 0xafa0b4c5u, 0x4dd82e76u, 0xec0fa827u, 0x8a4721d8u, 0x287e9b89u, 0xc6b6153au,
    0x64ed8eebu, 0x0325089cu, 0xa15c824du, 0x3f93fbfeu, 0xddcb75afu, 0x7c02ef60u, 0x1a3a6911u, 0xb871e2c2u,
    0x56a95c73u, 0xf4e0d624u, 0x93184fd5u, 0x314fc986u, 0xcf874337u, 0x6dbebce8u, 0x0bf63699u, 0xaa2db04au,
    0x486529fbu, 0xe69ca3acu, 0x84d41d5du, 0x230b970eu, 0xc14310bfu, 0x5f7a8a70u, 0xfdb20421u, 0x9be97dd2u,
    0x3a20f783u, 0xd8587134u, 0x768feae5u, 0x14c76496u, 0xb2fede47u, 0x513657f8u, 0xef6dd1a9u, 0x8da54b5au,
    0x2bdcc50bu, 0xca143ebcu, 0x684bb86du, 0x0683321eu, 0xa4baabcfu, 0x42f22580u, 0xe1299f31u, 0x7f6118e2u,
    0x1d989293u, 0xbbd00c44u, 0x5a0785f5u, 0xf83effa6u, 0x96767957u, 0x34adf308u, 0xd2e56cb9u, 0x711ce66au,
    0x0f54601bu, 0xad8bd9ccu, 0x4bc3537du, 0xe9facd2eu, 0x883246dfu, 0x2669c090u, 0xc4a13a41u, 0x62d8b3f2u,
};

static const uint32_t bshim_182_tab2[96] = {
    0x2df1a004u, 0xcc2919b5u, 0x6a609366u, 0x08980d17u, 0xa6cf86c8u, 0x45070079u, 0xe33e7a2au, 0x8175f3dbu,
    0x1fad6d8cu, 0xbde4e73du, 0x5c1c60eeu, 0xfa53da9fu, 0x988b5450u, 0x36c2ce01u, 0xd4fa47b2u, 0x7331c163u,
    0x11693b14u, 0xafa0b4c5u, 0x4dd82e76u, 0xec0fa827u, 0x8a4721d8u, 0x287e9b89u, 0xc6b6153au, 0x64ed8eebu,
    0x0325089cu, 0xa15c824du, 0x3f93fbfeu, 0xddcb75afu, 0x7c02ef60u, 0x1a3a6911u, 0xb871e2c2u, 0x56a95c73u,
    0xf4e0d624u, 0x93184fd5u, 0x314fc986u, 0xcf874337u, 0x6dbebce8u, 0x0bf63699u, 0xaa2db04au, 0x486529fbu,
    0xe69ca3acu, 0x84d41d5du, 0x230b970eu, 0xc14310bfu, 0x5f7a8a70u, 0xfdb20421u, 0x9be97dd2u, 0x3a20f783u,
    0xd8587134u, 0x768feae5u, 0x14c76496u, 0xb2fede47u, 0x513657f8u, 0xef6dd1a9u, 0x8da54b5au, 0x2bdcc50bu,
    0xca143ebcu, 0x684bb86du, 0x0683321eu, 0xa4baabcfu, 0x42f22580u, 0xe1299f31u, 0x7f6118e2u, 0x1d989293u,
    0xbbd00c44u, 0x5a0785f5u, 0xf83effa6u, 0x96767957u, 0x34adf308u, 0xd2e56cb9u, 0x711ce66au, 0x0f54601bu,
    0xad8bd9ccu, 0x4bc3537du, 0xe9facd2eu, 0x883246dfu, 0x2669c090u, 0xc4a13a41u, 0x62d8b3f2u, 0x01102da3u,
    0x9f47a754u, 0x3d7f2105u, 0xdbb69ab6u, 0x79ee1467u, 0x18258e18u, 0xb65d07c9u, 0x5494817au, 0xf2cbfb2bu,
    0x910374dcu, 0x2f3aee8du, 0xcd72683eu, 0x6ba9e1efu, 0x09e15ba0u, 0xa818d551u, 0x46504f02u, 0xe487c8b3u,
};

static const uint32_t bshim_182_tab3[96] = {
    0xafa0b4c5u, 0x4dd82e76u, 0xec0fa827u, 0x8a4721d8u, 0x287e9b89u, 0xc6b6153au, 0x64ed8eebu, 0x0325089cu,
    0xa15c824du, 0x3f93fbfeu, 0xddcb75afu, 0x7c02ef60u, 0x1a3a6911u, 0xb871e2c2u, 0x56a95c73u, 0xf4e0d624u,
    0x93184fd5u, 0x314fc986u, 0xcf874337u, 0x6dbebce8u, 0x0bf63699u, 0xaa2db04au, 0x486529fbu, 0xe69ca3acu,
    0x84d41d5du, 0x230b970eu, 0xc14310bfu, 0x5f7a8a70u, 0xfdb20421u, 0x9be97dd2u, 0x3a20f783u, 0xd8587134u,
    0x768feae5u, 0x14c76496u, 0xb2fede47u, 0x513657f8u, 0xef6dd1a9u, 0x8da54b5au, 0x2bdcc50bu, 0xca143ebcu,
    0x684bb86du, 0x0683321eu, 0xa4baabcfu, 0x42f22580u, 0xe1299f31u, 0x7f6118e2u, 0x1d989293u, 0xbbd00c44u,
    0x5a0785f5u, 0xf83effa6u, 0x96767957u, 0x34adf308u, 0xd2e56cb9u, 0x711ce66au, 0x0f54601bu, 0xad8bd9ccu,
    0x4bc3537du, 0xe9facd2eu, 0x883246dfu, 0x2669c090u, 0xc4a13a41u, 0x62d8b3f2u, 0x01102da3u, 0x9f47a754u,
    0x3d7f2105u, 0xdbb69ab6u, 0x79ee1467u, 0x18258e18u, 0xb65d07c9u, 0x5494817au, 0xf2cbfb2bu, 0x910374dcu,
    0x2f3aee8du, 0xcd72683eu, 0x6ba9e1efu, 0x09e15ba0u, 0xa818d551u, 0x46504f02u, 0xe487c8b3u, 0x82bf4264u,
    0x20f6bc15u, 0xbf2e35c6u, 0x5d65af77u, 0xfb9d2928u, 0x99d4a2d9u, 0x380c1c8au, 0xd643963bu, 0x747b0fecu,
    0x12b2899du, 0xb0ea034eu, 0x4f217cffu, 0xed58f6b0u, 0x8b907061u, 0x29c7ea12u, 0xc7ff63c3u, 0x6636dd74u,
};

static const uint32_t bshim_182_tab4[96] = {
    0x314fc986u, 0xcf874337u, 0x6dbebce8u, 0x0bf63699u, 0xaa2db04au, 0x486529fbu, 0xe69ca3acu, 0x84d41d5du,
    0x230b970eu, 0xc14310bfu, 0x5f7a8a70u, 0xfdb20421u, 0x9be97dd2u, 0x3a20f783u, 0xd8587134u, 0x768feae5u,
    0x14c76496u, 0xb2fede47u, 0x513657f8u, 0xef6dd1a9u, 0x8da54b5au, 0x2bdcc50bu, 0xca143ebcu, 0x684bb86du,
    0x0683321eu, 0xa4baabcfu, 0x42f22580u, 0xe1299f31u, 0x7f6118e2u, 0x1d989293u, 0xbbd00c44u, 0x5a0785f5u,
    0xf83effa6u, 0x96767957u, 0x34adf308u, 0xd2e56cb9u, 0x711ce66au, 0x0f54601bu, 0xad8bd9ccu, 0x4bc3537du,
    0xe9facd2eu, 0x883246dfu, 0x2669c090u, 0xc4a13a41u, 0x62d8b3f2u, 0x01102da3u, 0x9f47a754u, 0x3d7f2105u,
    0xdbb69ab6u, 0x79ee1467u, 0x18258e18u, 0xb65d07c9u, 0x5494817au, 0xf2cbfb2bu, 0x910374dcu, 0x2f3aee8du,
    0xcd72683eu, 0x6ba9e1efu, 0x09e15ba0u, 0xa818d551u, 0x46504f02u, 0xe487c8b3u, 0x82bf4264u, 0x20f6bc15u,
    0xbf2e35c6u, 0x5d65af77u, 0xfb9d2928u, 0x99d4a2d9u, 0x380c1c8au, 0xd643963bu, 0x747b0fecu, 0x12b2899du,
    0xb0ea034eu, 0x4f217cffu, 0xed58f6b0u, 0x8b907061u, 0x29c7ea12u, 0xc7ff63c3u, 0x6636dd74u, 0x046e5725u,
    0xa2a5d0d6u, 0x40dd4a87u, 0xdf14c438u, 0x7d4c3de9u, 0x1b83b79au, 0xb9bb314bu, 0x57f2aafcu, 0xf62a24adu,
    0x94619e5eu, 0x3299180fu, 0xd0d091c0u, 0x6f080b71u, 0x0d3f8522u, 0xab76fed3u, 0x49ae7884u, 0xe7e5f235u,
};

static const uint32_t bshim_182_tab5[96] = {
    0xb2fede47u, 0x513657f8u, 0xef6dd1a9u, 0x8da54b5au, 0x2bdcc50bu, 0xca143ebcu, 0x684bb86du, 0x0683321eu,
    0xa4baabcfu, 0x42f22580u, 0xe1299f31u, 0x7f6118e2u, 0x1d989293u, 0xbbd00c44u, 0x5a0785f5u, 0xf83effa6u,
    0x96767957u, 0x34adf308u, 0xd2e56cb9u, 0x711ce66au, 0x0f54601bu, 0xad8bd9ccu, 0x4bc3537du, 0xe9facd2eu,
    0x883246dfu, 0x2669c090u, 0xc4a13a41u, 0x62d8b3f2u, 0x01102da3u, 0x9f47a754u, 0x3d7f2105u, 0xdbb69ab6u,
    0x79ee1467u, 0x18258e18u, 0xb65d07c9u, 0x5494817au, 0xf2cbfb2bu, 0x910374dcu, 0x2f3aee8du, 0xcd72683eu,
    0x6ba9e1efu, 0x09e15ba0u, 0xa818d551u, 0x46504f02u, 0xe487c8b3u, 0x82bf4264u, 0x20f6bc15u, 0xbf2e35c6u,
    0x5d65af77u, 0xfb9d2928u, 0x99d4a2d9u, 0x380c1c8au, 0xd643963bu, 0x747b0fecu, 0x12b2899du, 0xb0ea034eu,
    0x4f217cffu, 0xed58f6b0u, 0x8b907061u, 0x29c7ea12u, 0xc7ff63c3u, 0x6636dd74u, 0x046e5725u, 0xa2a5d0d6u,
    0x40dd4a87u, 0xdf14c438u, 0x7d4c3de9u, 0x1b83b79au, 0xb9bb314bu, 0x57f2aafcu, 0xf62a24adu, 0x94619e5eu,
    0x3299180fu, 0xd0d091c0u, 0x6f080b71u, 0x0d3f8522u, 0xab76fed3u, 0x49ae7884u, 0xe7e5f235u, 0x861d6be6u,
    0x2454e597u, 0xc28c5f48u, 0x60c3d8f9u, 0xfefb52aau, 0x9d32cc5bu, 0x3b6a460cu, 0xd9a1bfbdu, 0x77d9396eu,
    0x1610b31fu, 0xb4482cd0u, 0x527fa681u, 0xf0b72032u, 0x8eee99e3u, 0x2d261394u, 0xcb5d8d45u, 0x699506f6u,
};

static const uint32_t bshim_182_tab6[96] = {
    0x34adf308u, 0xd2e56cb9u, 0x711ce66au, 0x0f54601bu, 0xad8bd9ccu, 0x4bc3537du, 0xe9facd2eu, 0x883246dfu,
    0x2669c090u, 0xc4a13a41u, 0x62d8b3f2u, 0x01102da3u, 0x9f47a754u, 0x3d7f2105u, 0xdbb69ab6u, 0x79ee1467u,
    0x18258e18u, 0xb65d07c9u, 0x5494817au, 0xf2cbfb2bu, 0x910374dcu, 0x2f3aee8du, 0xcd72683eu, 0x6ba9e1efu,
    0x09e15ba0u, 0xa818d551u, 0x46504f02u, 0xe487c8b3u, 0x82bf4264u, 0x20f6bc15u, 0xbf2e35c6u, 0x5d65af77u,
    0xfb9d2928u, 0x99d4a2d9u, 0x380c1c8au, 0xd643963bu, 0x747b0fecu, 0x12b2899du, 0xb0ea034eu, 0x4f217cffu,
    0xed58f6b0u, 0x8b907061u, 0x29c7ea12u, 0xc7ff63c3u, 0x6636dd74u, 0x046e5725u, 0xa2a5d0d6u, 0x40dd4a87u,
    0xdf14c438u, 0x7d4c3de9u, 0x1b83b79au, 0xb9bb314bu, 0x57f2aafcu, 0xf62a24adu, 0x94619e5eu, 0x3299180fu,
    0xd0d091c0u, 0x6f080b71u, 0x0d3f8522u, 0xab76fed3u, 0x49ae7884u, 0xe7e5f235u, 0x861d6be6u, 0x2454e597u,
    0xc28c5f48u, 0x60c3d8f9u, 0xfefb52aau, 0x9d32cc5bu, 0x3b6a460cu, 0xd9a1bfbdu, 0x77d9396eu, 0x1610b31fu,
    0xb4482cd0u, 0x527fa681u, 0xf0b72032u, 0x8eee99e3u, 0x2d261394u, 0xcb5d8d45u, 0x699506f6u, 0x07cc80a7u,
    0xa603fa58u, 0x443b7409u, 0xe272edbau, 0x80aa676bu, 0x1ee1e11cu, 0xbd195acdu, 0x5b50d47eu, 0xf9884e2fu,
    0x97bfc7e0u, 0x35f74191u, 0xd42ebb42u, 0x726634f3u, 0x109daea4u, 0xaed52855u, 0x4d0ca206u, 0xeb441bb7u,
};

static const uint32_t bshim_182_tab7[96] = {
    0xb65d07c9u, 0x5494817au, 0xf2cbfb2bu, 0x910374dcu, 0x2f3aee8du, 0xcd72683eu, 0x6ba9e1efu, 0x09e15ba0u,
    0xa818d551u, 0x46504f02u, 0xe487c8b3u, 0x82bf4264u, 0x20f6bc15u, 0xbf2e35c6u, 0x5d65af77u, 0xfb9d2928u,
    0x99d4a2d9u, 0x380c1c8au, 0xd643963bu, 0x747b0fecu, 0x12b2899du, 0xb0ea034eu, 0x4f217cffu, 0xed58f6b0u,
    0x8b907061u, 0x29c7ea12u, 0xc7ff63c3u, 0x6636dd74u, 0x046e5725u, 0xa2a5d0d6u, 0x40dd4a87u, 0xdf14c438u,
    0x7d4c3de9u, 0x1b83b79au, 0xb9bb314bu, 0x57f2aafcu, 0xf62a24adu, 0x94619e5eu, 0x3299180fu, 0xd0d091c0u,
    0x6f080b71u, 0x0d3f8522u, 0xab76fed3u, 0x49ae7884u, 0xe7e5f235u, 0x861d6be6u, 0x2454e597u, 0xc28c5f48u,
    0x60c3d8f9u, 0xfefb52aau, 0x9d32cc5bu, 0x3b6a460cu, 0xd9a1bfbdu, 0x77d9396eu, 0x1610b31fu, 0xb4482cd0u,
    0x527fa681u, 0xf0b72032u, 0x8eee99e3u, 0x2d261394u, 0xcb5d8d45u, 0x699506f6u, 0x07cc80a7u, 0xa603fa58u,
    0x443b7409u, 0xe272edbau, 0x80aa676bu, 0x1ee1e11cu, 0xbd195acdu, 0x5b50d47eu, 0xf9884e2fu, 0x97bfc7e0u,
    0x35f74191u, 0xd42ebb42u, 0x726634f3u, 0x109daea4u, 0xaed52855u, 0x4d0ca206u, 0xeb441bb7u, 0x897b9568u,
    0x27b30f19u, 0xc5ea88cau, 0x6422027bu, 0x02597c2cu, 0xa090f5ddu, 0x3ec86f8eu, 0xdcffe93fu, 0x7b3762f0u,
    0x196edca1u, 0xb7a65652u, 0x55ddd003u, 0xf41549b4u, 0x924cc365u, 0x30843d16u, 0xcebbb6c7u, 0x6cf33078u,
};

struct bshim_182_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_182_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_182_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_182_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_182_reset(struct bshim_182_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0015fdeau;
    return 0;
}

