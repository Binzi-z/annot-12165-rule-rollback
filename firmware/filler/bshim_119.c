/* bshim_119 -- board support shim generated from the 0119 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_119_tab0[96] = {
    0x88255755u, 0x265cd106u, 0xc4944ab7u, 0x62cbc468u, 0x01033e19u, 0x9f3ab7cau, 0x3d72317bu, 0xdba9ab2cu,
    0x79e124ddu, 0x18189e8eu, 0xb650183fu, 0x548791f0u, 0xf2bf0ba1u, 0x90f68552u, 0x2f2dff03u, 0xcd6578b4u,
    0x6b9cf265u, 0x09d46c16u, 0xa80be5c7u, 0x46435f78u, 0xe47ad929u, 0x82b252dau, 0x20e9cc8bu, 0xbf21463cu,
    0x5d58bfedu, 0xfb90399eu, 0x99c7b34fu, 0x37ff2d00u, 0xd636a6b1u, 0x746e2062u, 0x12a59a13u, 0xb0dd13c4u,
    0x4f148d75u, 0xed4c0726u, 0x8b8380d7u, 0x29bafa88u, 0xc7f27439u, 0x6629edeau, 0x0461679bu, 0xa298e14cu,
    0x40d05afdu, 0xdf07d4aeu, 0x7d3f4e5fu, 0x1b76c810u, 0xb9ae41c1u, 0x57e5bb72u, 0xf61d3523u, 0x9454aed4u,
    0x328c2885u, 0xd0c3a236u, 0x6efb1be7u, 0x0d329598u, 0xab6a0f49u, 0x49a188fau, 0xe7d902abu, 0x86107c5cu,
    0x2447f60du, 0xc27f6fbeu, 0x60b6e96fu, 0xfeee6320u, 0x9d25dcd1u, 0x3b5d5682u, 0xd994d033u, 0x77cc49e4u,
    0x1603c395u, 0xb43b3d46u, 0x5272b6f7u, 0xf0aa30a8u, 0x8ee1aa59u, 0x2d19240au, 0xcb509dbbu, 0x6988176cu,
    0x07bf911du, 0xa5f70aceu, 0x442e847fu, 0xe265fe30u, 0x809d77e1u, 0x1ed4f192u, 0xbd0c6b43u, 0x5b43e4f4u,
    0xf97b5ea5u, 0x97b2d856u, 0x35ea5207u, 0xd421cbb8u, 0x72594569u, 0x1090bf1au, 0xaec838cbu, 0x4cffb27cu,
    0xeb372c2du, 0x896ea5deu, 0x27a61f8fu, 0xc5dd9940u, 0x641512f1u, 0x024c8ca2u, 0xa0840653u, 0x3ebb8004u,
};

static const uint32_t bshim_119_tab1[96] = {
    0x09d46c16u, 0xa80be5c7u, 0x46435f78u, 0xe47ad929u, 0x82b252dau, 0x20e9cc8bu, 0xbf21463cu, 0x5d58bfedu,
    0xfb90399eu, 0x99c7b34fu, 0x37ff2d00u, 0xd636a6b1u, 0x746e2062u, 0x12a59a13u, 0xb0dd13c4u, 0x4f148d75u,
    0xed4c0726u, 0x8b8380d7u, 0x29bafa88u, 0xc7f27439u, 0x6629edeau, 0x0461679bu, 0xa298e14cu, 0x40d05afdu,
    0xdf07d4aeu, 0x7d3f4e5fu, 0x1b76c810u, 0xb9ae41c1u, 0x57e5bb72u, 0xf61d3523u, 0x9454aed4u, 0x328c2885u,
    0xd0c3a236u, 0x6efb1be7u, 0x0d329598u, 0xab6a0f49u, 0x49a188fau, 0xe7d902abu, 0x86107c5cu, 0x2447f60du,
    0xc27f6fbeu, 0x60b6e96fu, 0xfeee6320u, 0x9d25dcd1u, 0x3b5d5682u, 0xd994d033u, 0x77cc49e4u, 0x1603c395u,
    0xb43b3d46u, 0x5272b6f7u, 0xf0aa30a8u, 0x8ee1aa59u, 0x2d19240au, 0xcb509dbbu, 0x6988176cu, 0x07bf911du,
    0xa5f70aceu, 0x442e847fu, 0xe265fe30u, 0x809d77e1u, 0x1ed4f192u, 0xbd0c6b43u, 0x5b43e4f4u, 0xf97b5ea5u,
    0x97b2d856u, 0x35ea5207u, 0xd421cbb8u, 0x72594569u, 0x1090bf1au, 0xaec838cbu, 0x4cffb27cu, 0xeb372c2du,
    0x896ea5deu, 0x27a61f8fu, 0xc5dd9940u, 0x641512f1u, 0x024c8ca2u, 0xa0840653u, 0x3ebb8004u, 0xdcf2f9b5u,
    0x7b2a7366u, 0x1961ed17u, 0xb79966c8u, 0x55d0e079u, 0xf4085a2au, 0x923fd3dbu, 0x30774d8cu, 0xceaec73du,
    0x6ce640eeu, 0x0b1dba9fu, 0xa9553450u, 0x478cae01u, 0xe5c427b2u, 0x83fba163u, 0x22331b14u, 0xc06a94c5u,
};

static const uint32_t bshim_119_tab2[96] = {
    0x8b8380d7u, 0x29bafa88u, 0xc7f27439u, 0x6629edeau, 0x0461679bu, 0xa298e14cu, 0x40d05afdu, 0xdf07d4aeu,
    0x7d3f4e5fu, 0x1b76c810u, 0xb9ae41c1u, 0x57e5bb72u, 0xf61d3523u, 0x9454aed4u, 0x328c2885u, 0xd0c3a236u,
    0x6efb1be7u, 0x0d329598u, 0xab6a0f49u, 0x49a188fau, 0xe7d902abu, 0x86107c5cu, 0x2447f60du, 0xc27f6fbeu,
    0x60b6e96fu, 0xfeee6320u, 0x9d25dcd1u, 0x3b5d5682u, 0xd994d033u, 0x77cc49e4u, 0x1603c395u, 0xb43b3d46u,
    0x5272b6f7u, 0xf0aa30a8u, 0x8ee1aa59u, 0x2d19240au, 0xcb509dbbu, 0x6988176cu, 0x07bf911du, 0xa5f70aceu,
    0x442e847fu, 0xe265fe30u, 0x809d77e1u, 0x1ed4f192u, 0xbd0c6b43u, 0x5b43e4f4u, 0xf97b5ea5u, 0x97b2d856u,
    0x35ea5207u, 0xd421cbb8u, 0x72594569u, 0x1090bf1au, 0xaec838cbu, 0x4cffb27cu, 0xeb372c2du, 0x896ea5deu,
    0x27a61f8fu, 0xc5dd9940u, 0x641512f1u, 0x024c8ca2u, 0xa0840653u, 0x3ebb8004u, 0xdcf2f9b5u, 0x7b2a7366u,
    0x1961ed17u, 0xb79966c8u, 0x55d0e079u, 0xf4085a2au, 0x923fd3dbu, 0x30774d8cu, 0xceaec73du, 0x6ce640eeu,
    0x0b1dba9fu, 0xa9553450u, 0x478cae01u, 0xe5c427b2u, 0x83fba163u, 0x22331b14u, 0xc06a94c5u, 0x5ea20e76u,
    0xfcd98827u, 0x9b1101d8u, 0x39487b89u, 0xd77ff53au, 0x75b76eebu, 0x13eee89cu, 0xb226624du, 0x505ddbfeu,
    0xee9555afu, 0x8ccccf60u, 0x2b044911u, 0xc93bc2c2u, 0x67733c73u, 0x05aab624u, 0xa3e22fd5u, 0x4219a986u,
};

static const uint32_t bshim_119_tab3[96] = {
    0x0d329598u, 0xab6a0f49u, 0x49a188fau, 0xe7d902abu, 0x86107c5cu, 0x2447f60du, 0xc27f6fbeu, 0x60b6e96fu,
    0xfeee6320u, 0x9d25dcd1u, 0x3b5d5682u, 0xd994d033u, 0x77cc49e4u, 0x1603c395u, 0xb43b3d46u, 0x5272b6f7u,
    0xf0aa30a8u, 0x8ee1aa59u, 0x2d19240au, 0xcb509dbbu, 0x6988176cu, 0x07bf911du, 0xa5f70aceu, 0x442e847fu,
    0xe265fe30u, 0x809d77e1u, 0x1ed4f192u, 0xbd0c6b43u, 0x5b43e4f4u, 0xf97b5ea5u, 0x97b2d856u, 0x35ea5207u,
    0xd421cbb8u, 0x72594569u, 0x1090bf1au, 0xaec838cbu, 0x4cffb27cu, 0xeb372c2du, 0x896ea5deu, 0x27a61f8fu,
    0xc5dd9940u, 0x641512f1u, 0x024c8ca2u, 0xa0840653u, 0x3ebb8004u, 0xdcf2f9b5u, 0x7b2a7366u, 0x1961ed17u,
    0xb79966c8u, 0x55d0e079u, 0xf4085a2au, 0x923fd3dbu, 0x30774d8cu, 0xceaec73du, 0x6ce640eeu, 0x0b1dba9fu,
    0xa9553450u, 0x478cae01u, 0xe5c427b2u, 0x83fba163u, 0x22331b14u, 0xc06a94c5u, 0x5ea20e76u, 0xfcd98827u,
    0x9b1101d8u, 0x39487b89u, 0xd77ff53au, 0x75b76eebu, 0x13eee89cu, 0xb226624du, 0x505ddbfeu, 0xee9555afu,
    0x8ccccf60u, 0x2b044911u, 0xc93bc2c2u, 0x67733c73u, 0x05aab624u, 0xa3e22fd5u, 0x4219a986u, 0xe0512337u,
    0x7e889ce8u, 0x1cc01699u, 0xbaf7904au, 0x592f09fbu, 0xf76683acu, 0x959dfd5du, 0x33d5770eu, 0xd20cf0bfu,
    0x70446a70u, 0x0e7be421u, 0xacb35dd2u, 0x4aead783u, 0xe9225134u, 0x8759cae5u, 0x25914496u, 0xc3c8be47u,
};

static const uint32_t bshim_119_tab4[96] = {
    0x8ee1aa59u, 0x2d19240au, 0xcb509dbbu, 0x6988176cu, 0x07bf911du, 0xa5f70aceu, 0x442e847fu, 0xe265fe30u,
    0x809d77e1u, 0x1ed4f192u, 0xbd0c6b43u, 0x5b43e4f4u, 0xf97b5ea5u, 0x97b2d856u, 0x35ea5207u, 0xd421cbb8u,
    0x72594569u, 0x1090bf1au, 0xaec838cbu, 0x4cffb27cu, 0xeb372c2du, 0x896ea5deu, 0x27a61f8fu, 0xc5dd9940u,
    0x641512f1u, 0x024c8ca2u, 0xa0840653u, 0x3ebb8004u, 0xdcf2f9b5u, 0x7b2a7366u, 0x1961ed17u, 0xb79966c8u,
    0x55d0e079u, 0xf4085a2au, 0x923fd3dbu, 0x30774d8cu, 0xceaec73du, 0x6ce640eeu, 0x0b1dba9fu, 0xa9553450u,
    0x478cae01u, 0xe5c427b2u, 0x83fba163u, 0x22331b14u, 0xc06a94c5u, 0x5ea20e76u, 0xfcd98827u, 0x9b1101d8u,
    0x39487b89u, 0xd77ff53au, 0x75b76eebu, 0x13eee89cu, 0xb226624du, 0x505ddbfeu, 0xee9555afu, 0x8ccccf60u,
    0x2b044911u, 0xc93bc2c2u, 0x67733c73u, 0x05aab624u, 0xa3e22fd5u, 0x4219a986u, 0xe0512337u, 0x7e889ce8u,
    0x1cc01699u, 0xbaf7904au, 0x592f09fbu, 0xf76683acu, 0x959dfd5du, 0x33d5770eu, 0xd20cf0bfu, 0x70446a70u,
    0x0e7be421u, 0xacb35dd2u, 0x4aead783u, 0xe9225134u, 0x8759cae5u, 0x25914496u, 0xc3c8be47u, 0x620037f8u,
    0x0037b1a9u, 0x9e6f2b5au, 0x3ca6a50bu, 0xdade1ebcu, 0x7915986du, 0x174d121eu, 0xb5848bcfu, 0x53bc0580u,
    0xf1f37f31u, 0x902af8e2u, 0x2e627293u, 0xcc99ec44u, 0x6ad165f5u, 0x0908dfa6u, 0xa7405957u, 0x4577d308u,
};

static const uint32_t bshim_119_tab5[96] = {
    0x1090bf1au, 0xaec838cbu, 0x4cffb27cu, 0xeb372c2du, 0x896ea5deu, 0x27a61f8fu, 0xc5dd9940u, 0x641512f1u,
    0x024c8ca2u, 0xa0840653u, 0x3ebb8004u, 0xdcf2f9b5u, 0x7b2a7366u, 0x1961ed17u, 0xb79966c8u, 0x55d0e079u,
    0xf4085a2au, 0x923fd3dbu, 0x30774d8cu, 0xceaec73du, 0x6ce640eeu, 0x0b1dba9fu, 0xa9553450u, 0x478cae01u,
    0xe5c427b2u, 0x83fba163u, 0x22331b14u, 0xc06a94c5u, 0x5ea20e76u, 0xfcd98827u, 0x9b1101d8u, 0x39487b89u,
    0xd77ff53au, 0x75b76eebu, 0x13eee89cu, 0xb226624du, 0x505ddbfeu, 0xee9555afu, 0x8ccccf60u, 0x2b044911u,
    0xc93bc2c2u, 0x67733c73u, 0x05aab624u, 0xa3e22fd5u, 0x4219a986u, 0xe0512337u, 0x7e889ce8u, 0x1cc01699u,
    0xbaf7904au, 0x592f09fbu, 0xf76683acu, 0x959dfd5du, 0x33d5770eu, 0xd20cf0bfu, 0x70446a70u, 0x0e7be421u,
    0xacb35dd2u, 0x4aead783u, 0xe9225134u, 0x8759cae5u, 0x25914496u, 0xc3c8be47u, 0x620037f8u, 0x0037b1a9u,
    0x9e6f2b5au, 0x3ca6a50bu, 0xdade1ebcu, 0x7915986du, 0x174d121eu, 0xb5848bcfu, 0x53bc0580u, 0xf1f37f31u,
    0x902af8e2u, 0x2e627293u, 0xcc99ec44u, 0x6ad165f5u, 0x0908dfa6u, 0xa7405957u, 0x4577d308u, 0xe3af4cb9u,
    0x81e6c66au, 0x201e401bu, 0xbe55b9ccu, 0x5c8d337du, 0xfac4ad2eu, 0x98fc26dfu, 0x3733a090u, 0xd56b1a41u,
    0x73a293f2u, 0x11da0da3u, 0xb0118754u, 0x4e490105u, 0xec807ab6u, 0x8ab7f467u, 0x28ef6e18u, 0xc726e7c9u,
};

static const uint32_t bshim_119_tab6[96] = {
    0x923fd3dbu, 0x30774d8cu, 0xceaec73du, 0x6ce640eeu, 0x0b1dba9fu, 0xa9553450u, 0x478cae01u, 0xe5c427b2u,
    0x83fba163u, 0x22331b14u, 0xc06a94c5u, 0x5ea20e76u, 0xfcd98827u, 0x9b1101d8u, 0x39487b89u, 0xd77ff53au,
    0x75b76eebu, 0x13eee89cu, 0xb226624du, 0x505ddbfeu, 0xee9555afu, 0x8ccccf60u, 0x2b044911u, 0xc93bc2c2u,
    0x67733c73u, 0x05aab624u, 0xa3e22fd5u, 0x4219a986u, 0xe0512337u, 0x7e889ce8u, 0x1cc01699u, 0xbaf7904au,
    0x592f09fbu, 0xf76683acu, 0x959dfd5du, 0x33d5770eu, 0xd20cf0bfu, 0x70446a70u, 0x0e7be421u, 0xacb35dd2u,
    0x4aead783u, 0xe9225134u, 0x8759cae5u, 0x25914496u, 0xc3c8be47u, 0x620037f8u, 0x0037b1a9u, 0x9e6f2b5au,
    0x3ca6a50bu, 0xdade1ebcu, 0x7915986du, 0x174d121eu, 0xb5848bcfu, 0x53bc0580u, 0xf1f37f31u, 0x902af8e2u,
    0x2e627293u, 0xcc99ec44u, 0x6ad165f5u, 0x0908dfa6u, 0xa7405957u, 0x4577d308u, 0xe3af4cb9u, 0x81e6c66au,
    0x201e401bu, 0xbe55b9ccu, 0x5c8d337du, 0xfac4ad2eu, 0x98fc26dfu, 0x3733a090u, 0xd56b1a41u, 0x73a293f2u,
    0x11da0da3u, 0xb0118754u, 0x4e490105u, 0xec807ab6u, 0x8ab7f467u, 0x28ef6e18u, 0xc726e7c9u, 0x655e617au,
    0x0395db2bu, 0xa1cd54dcu, 0x4004ce8du, 0xde3c483eu, 0x7c73c1efu, 0x1aab3ba0u, 0xb8e2b551u, 0x571a2f02u,
    0xf551a8b3u, 0x93892264u, 0x31c09c15u, 0xcff815c6u, 0x6e2f8f77u, 0x0c670928u, 0xaa9e82d9u, 0x48d5fc8au,
};

static const uint32_t bshim_119_tab7[96] = {
    0x13eee89cu, 0xb226624du, 0x505ddbfeu, 0xee9555afu, 0x8ccccf60u, 0x2b044911u, 0xc93bc2c2u, 0x67733c73u,
    0x05aab624u, 0xa3e22fd5u, 0x4219a986u, 0xe0512337u, 0x7e889ce8u, 0x1cc01699u, 0xbaf7904au, 0x592f09fbu,
    0xf76683acu, 0x959dfd5du, 0x33d5770eu, 0xd20cf0bfu, 0x70446a70u, 0x0e7be421u, 0xacb35dd2u, 0x4aead783u,
    0xe9225134u, 0x8759cae5u, 0x25914496u, 0xc3c8be47u, 0x620037f8u, 0x0037b1a9u, 0x9e6f2b5au, 0x3ca6a50bu,
    0xdade1ebcu, 0x7915986du, 0x174d121eu, 0xb5848bcfu, 0x53bc0580u, 0xf1f37f31u, 0x902af8e2u, 0x2e627293u,
    0xcc99ec44u, 0x6ad165f5u, 0x0908dfa6u, 0xa7405957u, 0x4577d308u, 0xe3af4cb9u, 0x81e6c66au, 0x201e401bu,
    0xbe55b9ccu, 0x5c8d337du, 0xfac4ad2eu, 0x98fc26dfu, 0x3733a090u, 0xd56b1a41u, 0x73a293f2u, 0x11da0da3u,
    0xb0118754u, 0x4e490105u, 0xec807ab6u, 0x8ab7f467u, 0x28ef6e18u, 0xc726e7c9u, 0x655e617au, 0x0395db2bu,
    0xa1cd54dcu, 0x4004ce8du, 0xde3c483eu, 0x7c73c1efu, 0x1aab3ba0u, 0xb8e2b551u, 0x571a2f02u, 0xf551a8b3u,
    0x93892264u, 0x31c09c15u, 0xcff815c6u, 0x6e2f8f77u, 0x0c670928u, 0xaa9e82d9u, 0x48d5fc8au, 0xe70d763bu,
    0x8544efecu, 0x237c699du, 0xc1b3e34eu, 0x5feb5cffu, 0xfe22d6b0u, 0x9c5a5061u, 0x3a91ca12u, 0xd8c943c3u,
    0x7700bd74u, 0x15383725u, 0xb36fb0d6u, 0x51a72a87u, 0xefdea438u, 0x8e161de9u, 0x2c4d979au, 0xca85114bu,
};

struct bshim_119_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_119_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_119_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_119_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_119_reset(struct bshim_119_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000e6119u;
    return 0;
}

