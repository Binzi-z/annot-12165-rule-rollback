/* bshim_118 -- board support shim generated from the 0118 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_118_tab0[96] = {
    0x91c211c2u, 0x2ff98b73u, 0xce310524u, 0x6c687ed5u, 0x0a9ff886u, 0xa8d77237u, 0x470eebe8u, 0xe5466599u,
    0x837ddf4au, 0x21b558fbu, 0xbfecd2acu, 0x5e244c5du, 0xfc5bc60eu, 0x9a933fbfu, 0x38cab970u, 0xd7023321u,
    0x7539acd2u, 0x13712683u, 0xb1a8a034u, 0x4fe019e5u, 0xee179396u, 0x8c4f0d47u, 0x2a8686f8u, 0xc8be00a9u,
    0x66f57a5au, 0x052cf40bu, 0xa3646dbcu, 0x419be76du, 0xdfd3611eu, 0x7e0adacfu, 0x1c425480u, 0xba79ce31u,
    0x58b147e2u, 0xf6e8c193u, 0x95203b44u, 0x3357b4f5u, 0xd18f2ea6u, 0x6fc6a857u, 0x0dfe2208u, 0xac359bb9u,
    0x4a6d156au, 0xe8a48f1bu, 0x86dc08ccu, 0x2513827du, 0xc34afc2eu, 0x618275dfu, 0xffb9ef90u, 0x9df16941u,
    0x3c28e2f2u, 0xda605ca3u, 0x7897d654u, 0x16cf5005u, 0xb506c9b6u, 0x533e4367u, 0xf175bd18u, 0x8fad36c9u,
    0x2de4b07au, 0xcc1c2a2bu, 0x6a53a3dcu, 0x088b1d8du, 0xa6c2973eu, 0x44fa10efu, 0xe3318aa0u, 0x81690451u,
    0x1fa07e02u, 0xbdd7f7b3u, 0x5c0f7164u, 0xfa46eb15u, 0x987e64c6u, 0x36b5de77u, 0xd4ed5828u, 0x7324d1d9u,
    0x115c4b8au, 0xaf93c53bu, 0x4dcb3eecu, 0xec02b89du, 0x8a3a324eu, 0x2871abffu, 0xc6a925b0u, 0x64e09f61u,
    0x03181912u, 0xa14f92c3u, 0x3f870c74u, 0xddbe8625u, 0x7bf5ffd6u, 0x1a2d7987u, 0xb864f338u, 0x569c6ce9u,
    0xf4d3e69au, 0x930b604bu, 0x3142d9fcu, 0xcf7a53adu, 0x6db1cd5eu, 0x0be9470fu, 0xaa20c0c0u, 0x48583a71u,
};

static const uint32_t bshim_118_tab1[96] = {
    0x13712683u, 0xb1a8a034u, 0x4fe019e5u, 0xee179396u, 0x8c4f0d47u, 0x2a8686f8u, 0xc8be00a9u, 0x66f57a5au,
    0x052cf40bu, 0xa3646dbcu, 0x419be76du, 0xdfd3611eu, 0x7e0adacfu, 0x1c425480u, 0xba79ce31u, 0x58b147e2u,
    0xf6e8c193u, 0x95203b44u, 0x3357b4f5u, 0xd18f2ea6u, 0x6fc6a857u, 0x0dfe2208u, 0xac359bb9u, 0x4a6d156au,
    0xe8a48f1bu, 0x86dc08ccu, 0x2513827du, 0xc34afc2eu, 0x618275dfu, 0xffb9ef90u, 0x9df16941u, 0x3c28e2f2u,
    0xda605ca3u, 0x7897d654u, 0x16cf5005u, 0xb506c9b6u, 0x533e4367u, 0xf175bd18u, 0x8fad36c9u, 0x2de4b07au,
    0xcc1c2a2bu, 0x6a53a3dcu, 0x088b1d8du, 0xa6c2973eu, 0x44fa10efu, 0xe3318aa0u, 0x81690451u, 0x1fa07e02u,
    0xbdd7f7b3u, 0x5c0f7164u, 0xfa46eb15u, 0x987e64c6u, 0x36b5de77u, 0xd4ed5828u, 0x7324d1d9u, 0x115c4b8au,
    0xaf93c53bu, 0x4dcb3eecu, 0xec02b89du, 0x8a3a324eu, 0x2871abffu, 0xc6a925b0u, 0x64e09f61u, 0x03181912u,
    0xa14f92c3u, 0x3f870c74u, 0xddbe8625u, 0x7bf5ffd6u, 0x1a2d7987u, 0xb864f338u, 0x569c6ce9u, 0xf4d3e69au,
    0x930b604bu, 0x3142d9fcu, 0xcf7a53adu, 0x6db1cd5eu, 0x0be9470fu, 0xaa20c0c0u, 0x48583a71u, 0xe68fb422u,
    0x84c72dd3u, 0x22fea784u, 0xc1362135u, 0x5f6d9ae6u, 0xfda51497u, 0x9bdc8e48u, 0x3a1407f9u, 0xd84b81aau,
    0x7682fb5bu, 0x14ba750cu, 0xb2f1eebdu, 0x5129686eu, 0xef60e21fu, 0x8d985bd0u, 0x2bcfd581u, 0xca074f32u,
};

static const uint32_t bshim_118_tab2[96] = {
    0x95203b44u, 0x3357b4f5u, 0xd18f2ea6u, 0x6fc6a857u, 0x0dfe2208u, 0xac359bb9u, 0x4a6d156au, 0xe8a48f1bu,
    0x86dc08ccu, 0x2513827du, 0xc34afc2eu, 0x618275dfu, 0xffb9ef90u, 0x9df16941u, 0x3c28e2f2u, 0xda605ca3u,
    0x7897d654u, 0x16cf5005u, 0xb506c9b6u, 0x533e4367u, 0xf175bd18u, 0x8fad36c9u, 0x2de4b07au, 0xcc1c2a2bu,
    0x6a53a3dcu, 0x088b1d8du, 0xa6c2973eu, 0x44fa10efu, 0xe3318aa0u, 0x81690451u, 0x1fa07e02u, 0xbdd7f7b3u,
    0x5c0f7164u, 0xfa46eb15u, 0x987e64c6u, 0x36b5de77u, 0xd4ed5828u, 0x7324d1d9u, 0x115c4b8au, 0xaf93c53bu,
    0x4dcb3eecu, 0xec02b89du, 0x8a3a324eu, 0x2871abffu, 0xc6a925b0u, 0x64e09f61u, 0x03181912u, 0xa14f92c3u,
    0x3f870c74u, 0xddbe8625u, 0x7bf5ffd6u, 0x1a2d7987u, 0xb864f338u, 0x569c6ce9u, 0xf4d3e69au, 0x930b604bu,
    0x3142d9fcu, 0xcf7a53adu, 0x6db1cd5eu, 0x0be9470fu, 0xaa20c0c0u, 0x48583a71u, 0xe68fb422u, 0x84c72dd3u,
    0x22fea784u, 0xc1362135u, 0x5f6d9ae6u, 0xfda51497u, 0x9bdc8e48u, 0x3a1407f9u, 0xd84b81aau, 0x7682fb5bu,
    0x14ba750cu, 0xb2f1eebdu, 0x5129686eu, 0xef60e21fu, 0x8d985bd0u, 0x2bcfd581u, 0xca074f32u, 0x683ec8e3u,
    0x06764294u, 0xa4adbc45u, 0x42e535f6u, 0xe11cafa7u, 0x7f542958u, 0x1d8ba309u, 0xbbc31cbau, 0x59fa966bu,
    0xf832101cu, 0x966989cdu, 0x34a1037eu, 0xd2d87d2fu, 0x710ff6e0u, 0x0f477091u, 0xad7eea42u, 0x4bb663f3u,
};

static const uint32_t bshim_118_tab3[96] = {
    0x16cf5005u, 0xb506c9b6u, 0x533e4367u, 0xf175bd18u, 0x8fad36c9u, 0x2de4b07au, 0xcc1c2a2bu, 0x6a53a3dcu,
    0x088b1d8du, 0xa6c2973eu, 0x44fa10efu, 0xe3318aa0u, 0x81690451u, 0x1fa07e02u, 0xbdd7f7b3u, 0x5c0f7164u,
    0xfa46eb15u, 0x987e64c6u, 0x36b5de77u, 0xd4ed5828u, 0x7324d1d9u, 0x115c4b8au, 0xaf93c53bu, 0x4dcb3eecu,
    0xec02b89du, 0x8a3a324eu, 0x2871abffu, 0xc6a925b0u, 0x64e09f61u, 0x03181912u, 0xa14f92c3u, 0x3f870c74u,
    0xddbe8625u, 0x7bf5ffd6u, 0x1a2d7987u, 0xb864f338u, 0x569c6ce9u, 0xf4d3e69au, 0x930b604bu, 0x3142d9fcu,
    0xcf7a53adu, 0x6db1cd5eu, 0x0be9470fu, 0xaa20c0c0u, 0x48583a71u, 0xe68fb422u, 0x84c72dd3u, 0x22fea784u,
    0xc1362135u, 0x5f6d9ae6u, 0xfda51497u, 0x9bdc8e48u, 0x3a1407f9u, 0xd84b81aau, 0x7682fb5bu, 0x14ba750cu,
    0xb2f1eebdu, 0x5129686eu, 0xef60e21fu, 0x8d985bd0u, 0x2bcfd581u, 0xca074f32u, 0x683ec8e3u, 0x06764294u,
    0xa4adbc45u, 0x42e535f6u, 0xe11cafa7u, 0x7f542958u, 0x1d8ba309u, 0xbbc31cbau, 0x59fa966bu, 0xf832101cu,
    0x966989cdu, 0x34a1037eu, 0xd2d87d2fu, 0x710ff6e0u, 0x0f477091u, 0xad7eea42u, 0x4bb663f3u, 0xe9eddda4u,
    0x88255755u, 0x265cd106u, 0xc4944ab7u, 0x62cbc468u, 0x01033e19u, 0x9f3ab7cau, 0x3d72317bu, 0xdba9ab2cu,
    0x79e124ddu, 0x18189e8eu, 0xb650183fu, 0x548791f0u, 0xf2bf0ba1u, 0x90f68552u, 0x2f2dff03u, 0xcd6578b4u,
};

static const uint32_t bshim_118_tab4[96] = {
    0x987e64c6u, 0x36b5de77u, 0xd4ed5828u, 0x7324d1d9u, 0x115c4b8au, 0xaf93c53bu, 0x4dcb3eecu, 0xec02b89du,
    0x8a3a324eu, 0x2871abffu, 0xc6a925b0u, 0x64e09f61u, 0x03181912u, 0xa14f92c3u, 0x3f870c74u, 0xddbe8625u,
    0x7bf5ffd6u, 0x1a2d7987u, 0xb864f338u, 0x569c6ce9u, 0xf4d3e69au, 0x930b604bu, 0x3142d9fcu, 0xcf7a53adu,
    0x6db1cd5eu, 0x0be9470fu, 0xaa20c0c0u, 0x48583a71u, 0xe68fb422u, 0x84c72dd3u, 0x22fea784u, 0xc1362135u,
    0x5f6d9ae6u, 0xfda51497u, 0x9bdc8e48u, 0x3a1407f9u, 0xd84b81aau, 0x7682fb5bu, 0x14ba750cu, 0xb2f1eebdu,
    0x5129686eu, 0xef60e21fu, 0x8d985bd0u, 0x2bcfd581u, 0xca074f32u, 0x683ec8e3u, 0x06764294u, 0xa4adbc45u,
    0x42e535f6u, 0xe11cafa7u, 0x7f542958u, 0x1d8ba309u, 0xbbc31cbau, 0x59fa966bu, 0xf832101cu, 0x966989cdu,
    0x34a1037eu, 0xd2d87d2fu, 0x710ff6e0u, 0x0f477091u, 0xad7eea42u, 0x4bb663f3u, 0xe9eddda4u, 0x88255755u,
    0x265cd106u, 0xc4944ab7u, 0x62cbc468u, 0x01033e19u, 0x9f3ab7cau, 0x3d72317bu, 0xdba9ab2cu, 0x79e124ddu,
    0x18189e8eu, 0xb650183fu, 0x548791f0u, 0xf2bf0ba1u, 0x90f68552u, 0x2f2dff03u, 0xcd6578b4u, 0x6b9cf265u,
    0x09d46c16u, 0xa80be5c7u, 0x46435f78u, 0xe47ad929u, 0x82b252dau, 0x20e9cc8bu, 0xbf21463cu, 0x5d58bfedu,
    0xfb90399eu, 0x99c7b34fu, 0x37ff2d00u, 0xd636a6b1u, 0x746e2062u, 0x12a59a13u, 0xb0dd13c4u, 0x4f148d75u,
};

static const uint32_t bshim_118_tab5[96] = {
    0x1a2d7987u, 0xb864f338u, 0x569c6ce9u, 0xf4d3e69au, 0x930b604bu, 0x3142d9fcu, 0xcf7a53adu, 0x6db1cd5eu,
    0x0be9470fu, 0xaa20c0c0u, 0x48583a71u, 0xe68fb422u, 0x84c72dd3u, 0x22fea784u, 0xc1362135u, 0x5f6d9ae6u,
    0xfda51497u, 0x9bdc8e48u, 0x3a1407f9u, 0xd84b81aau, 0x7682fb5bu, 0x14ba750cu, 0xb2f1eebdu, 0x5129686eu,
    0xef60e21fu, 0x8d985bd0u, 0x2bcfd581u, 0xca074f32u, 0x683ec8e3u, 0x06764294u, 0xa4adbc45u, 0x42e535f6u,
    0xe11cafa7u, 0x7f542958u, 0x1d8ba309u, 0xbbc31cbau, 0x59fa966bu, 0xf832101cu, 0x966989cdu, 0x34a1037eu,
    0xd2d87d2fu, 0x710ff6e0u, 0x0f477091u, 0xad7eea42u, 0x4bb663f3u, 0xe9eddda4u, 0x88255755u, 0x265cd106u,
    0xc4944ab7u, 0x62cbc468u, 0x01033e19u, 0x9f3ab7cau, 0x3d72317bu, 0xdba9ab2cu, 0x79e124ddu, 0x18189e8eu,
    0xb650183fu, 0x548791f0u, 0xf2bf0ba1u, 0x90f68552u, 0x2f2dff03u, 0xcd6578b4u, 0x6b9cf265u, 0x09d46c16u,
    0xa80be5c7u, 0x46435f78u, 0xe47ad929u, 0x82b252dau, 0x20e9cc8bu, 0xbf21463cu, 0x5d58bfedu, 0xfb90399eu,
    0x99c7b34fu, 0x37ff2d00u, 0xd636a6b1u, 0x746e2062u, 0x12a59a13u, 0xb0dd13c4u, 0x4f148d75u, 0xed4c0726u,
    0x8b8380d7u, 0x29bafa88u, 0xc7f27439u, 0x6629edeau, 0x0461679bu, 0xa298e14cu, 0x40d05afdu, 0xdf07d4aeu,
    0x7d3f4e5fu, 0x1b76c810u, 0xb9ae41c1u, 0x57e5bb72u, 0xf61d3523u, 0x9454aed4u, 0x328c2885u, 0xd0c3a236u,
};

static const uint32_t bshim_118_tab6[96] = {
    0x9bdc8e48u, 0x3a1407f9u, 0xd84b81aau, 0x7682fb5bu, 0x14ba750cu, 0xb2f1eebdu, 0x5129686eu, 0xef60e21fu,
    0x8d985bd0u, 0x2bcfd581u, 0xca074f32u, 0x683ec8e3u, 0x06764294u, 0xa4adbc45u, 0x42e535f6u, 0xe11cafa7u,
    0x7f542958u, 0x1d8ba309u, 0xbbc31cbau, 0x59fa966bu, 0xf832101cu, 0x966989cdu, 0x34a1037eu, 0xd2d87d2fu,
    0x710ff6e0u, 0x0f477091u, 0xad7eea42u, 0x4bb663f3u, 0xe9eddda4u, 0x88255755u, 0x265cd106u, 0xc4944ab7u,
    0x62cbc468u, 0x01033e19u, 0x9f3ab7cau, 0x3d72317bu, 0xdba9ab2cu, 0x79e124ddu, 0x18189e8eu, 0xb650183fu,
    0x548791f0u, 0xf2bf0ba1u, 0x90f68552u, 0x2f2dff03u, 0xcd6578b4u, 0x6b9cf265u, 0x09d46c16u, 0xa80be5c7u,
    0x46435f78u, 0xe47ad929u, 0x82b252dau, 0x20e9cc8bu, 0xbf21463cu, 0x5d58bfedu, 0xfb90399eu, 0x99c7b34fu,
    0x37ff2d00u, 0xd636a6b1u, 0x746e2062u, 0x12a59a13u, 0xb0dd13c4u, 0x4f148d75u, 0xed4c0726u, 0x8b8380d7u,
    0x29bafa88u, 0xc7f27439u, 0x6629edeau, 0x0461679bu, 0xa298e14cu, 0x40d05afdu, 0xdf07d4aeu, 0x7d3f4e5fu,
    0x1b76c810u, 0xb9ae41c1u, 0x57e5bb72u, 0xf61d3523u, 0x9454aed4u, 0x328c2885u, 0xd0c3a236u, 0x6efb1be7u,
    0x0d329598u, 0xab6a0f49u, 0x49a188fau, 0xe7d902abu, 0x86107c5cu, 0x2447f60du, 0xc27f6fbeu, 0x60b6e96fu,
    0xfeee6320u, 0x9d25dcd1u, 0x3b5d5682u, 0xd994d033u, 0x77cc49e4u, 0x1603c395u, 0xb43b3d46u, 0x5272b6f7u,
};

static const uint32_t bshim_118_tab7[96] = {
    0x1d8ba309u, 0xbbc31cbau, 0x59fa966bu, 0xf832101cu, 0x966989cdu, 0x34a1037eu, 0xd2d87d2fu, 0x710ff6e0u,
    0x0f477091u, 0xad7eea42u, 0x4bb663f3u, 0xe9eddda4u, 0x88255755u, 0x265cd106u, 0xc4944ab7u, 0x62cbc468u,
    0x01033e19u, 0x9f3ab7cau, 0x3d72317bu, 0xdba9ab2cu, 0x79e124ddu, 0x18189e8eu, 0xb650183fu, 0x548791f0u,
    0xf2bf0ba1u, 0x90f68552u, 0x2f2dff03u, 0xcd6578b4u, 0x6b9cf265u, 0x09d46c16u, 0xa80be5c7u, 0x46435f78u,
    0xe47ad929u, 0x82b252dau, 0x20e9cc8bu, 0xbf21463cu, 0x5d58bfedu, 0xfb90399eu, 0x99c7b34fu, 0x37ff2d00u,
    0xd636a6b1u, 0x746e2062u, 0x12a59a13u, 0xb0dd13c4u, 0x4f148d75u, 0xed4c0726u, 0x8b8380d7u, 0x29bafa88u,
    0xc7f27439u, 0x6629edeau, 0x0461679bu, 0xa298e14cu, 0x40d05afdu, 0xdf07d4aeu, 0x7d3f4e5fu, 0x1b76c810u,
    0xb9ae41c1u, 0x57e5bb72u, 0xf61d3523u, 0x9454aed4u, 0x328c2885u, 0xd0c3a236u, 0x6efb1be7u, 0x0d329598u,
    0xab6a0f49u, 0x49a188fau, 0xe7d902abu, 0x86107c5cu, 0x2447f60du, 0xc27f6fbeu, 0x60b6e96fu, 0xfeee6320u,
    0x9d25dcd1u, 0x3b5d5682u, 0xd994d033u, 0x77cc49e4u, 0x1603c395u, 0xb43b3d46u, 0x5272b6f7u, 0xf0aa30a8u,
    0x8ee1aa59u, 0x2d19240au, 0xcb509dbbu, 0x6988176cu, 0x07bf911du, 0xa5f70aceu, 0x442e847fu, 0xe265fe30u,
    0x809d77e1u, 0x1ed4f192u, 0xbd0c6b43u, 0x5b43e4f4u, 0xf97b5ea5u, 0x97b2d856u, 0x35ea5207u, 0xd421cbb8u,
};

struct bshim_118_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_118_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_118_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_118_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_118_reset(struct bshim_118_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000e422au;
    return 0;
}

