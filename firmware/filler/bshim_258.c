/* bshim_258 -- board support shim generated from the 0258 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_258_tab0[96] = {
    0x500c1e26u, 0xee4397d7u, 0x8c7b1188u, 0x2ab28b39u, 0xc8ea04eau, 0x67217e9bu, 0x0558f84cu, 0xa39071fdu,
    0x41c7ebaeu, 0xdfff655fu, 0x7e36df10u, 0x1c6e58c1u, 0xbaa5d272u, 0x58dd4c23u, 0xf714c5d4u, 0x954c3f85u,
    0x3383b936u, 0xd1bb32e7u, 0x6ff2ac98u, 0x0e2a2649u, 0xac619ffau, 0x4a9919abu, 0xe8d0935cu, 0x87080d0du,
    0x253f86beu, 0xc377006fu, 0x61ae7a20u, 0xffe5f3d1u, 0x9e1d6d82u, 0x3c54e733u, 0xda8c60e4u, 0x78c3da95u,
    0x16fb5446u, 0xb532cdf7u, 0x536a47a8u, 0xf1a1c159u, 0x8fd93b0au, 0x2e10b4bbu, 0xcc482e6cu, 0x6a7fa81du,
    0x08b721ceu, 0xa6ee9b7fu, 0x45261530u, 0xe35d8ee1u, 0x81950892u, 0x1fcc8243u, 0xbe03fbf4u, 0x5c3b75a5u,
    0xfa72ef56u, 0x98aa6907u, 0x36e1e2b8u, 0xd5195c69u, 0x7350d61au, 0x11884fcbu, 0xafbfc97cu, 0x4df7432du,
    0xec2ebcdeu, 0x8a66368fu, 0x289db040u, 0xc6d529f1u, 0x650ca3a2u, 0x03441d53u, 0xa17b9704u, 0x3fb310b5u,
    0xddea8a66u, 0x7c220417u, 0x1a597dc8u, 0xb890f779u, 0x56c8712au, 0xf4ffeadbu, 0x9337648cu, 0x316ede3du,
    0xcfa657eeu, 0x6dddd19fu, 0x0c154b50u, 0xaa4cc501u, 0x48843eb2u, 0xe6bbb863u, 0x84f33214u, 0x232aabc5u,
    0xc1622576u, 0x5f999f27u, 0xfdd118d8u, 0x9c089289u, 0x3a400c3au, 0xd87785ebu, 0x76aeff9cu, 0x14e6794du,
    0xb31df2feu, 0x51556cafu, 0xef8ce660u, 0x8dc46011u, 0x2bfbd9c2u, 0xca335373u, 0x686acd24u, 0x06a246d5u,
};

static const uint32_t bshim_258_tab1[96] = {
    0xd1bb32e7u, 0x6ff2ac98u, 0x0e2a2649u, 0xac619ffau, 0x4a9919abu, 0xe8d0935cu, 0x87080d0du, 0x253f86beu,
    0xc377006fu, 0x61ae7a20u, 0xffe5f3d1u, 0x9e1d6d82u, 0x3c54e733u, 0xda8c60e4u, 0x78c3da95u, 0x16fb5446u,
    0xb532cdf7u, 0x536a47a8u, 0xf1a1c159u, 0x8fd93b0au, 0x2e10b4bbu, 0xcc482e6cu, 0x6a7fa81du, 0x08b721ceu,
    0xa6ee9b7fu, 0x45261530u, 0xe35d8ee1u, 0x81950892u, 0x1fcc8243u, 0xbe03fbf4u, 0x5c3b75a5u, 0xfa72ef56u,
    0x98aa6907u, 0x36e1e2b8u, 0xd5195c69u, 0x7350d61au, 0x11884fcbu, 0xafbfc97cu, 0x4df7432du, 0xec2ebcdeu,
    0x8a66368fu, 0x289db040u, 0xc6d529f1u, 0x650ca3a2u, 0x03441d53u, 0xa17b9704u, 0x3fb310b5u, 0xddea8a66u,
    0x7c220417u, 0x1a597dc8u, 0xb890f779u, 0x56c8712au, 0xf4ffeadbu, 0x9337648cu, 0x316ede3du, 0xcfa657eeu,
    0x6dddd19fu, 0x0c154b50u, 0xaa4cc501u, 0x48843eb2u, 0xe6bbb863u, 0x84f33214u, 0x232aabc5u, 0xc1622576u,
    0x5f999f27u, 0xfdd118d8u, 0x9c089289u, 0x3a400c3au, 0xd87785ebu, 0x76aeff9cu, 0x14e6794du, 0xb31df2feu,
    0x51556cafu, 0xef8ce660u, 0x8dc46011u, 0x2bfbd9c2u, 0xca335373u, 0x686acd24u, 0x06a246d5u, 0xa4d9c086u,
    0x43113a37u, 0xe148b3e8u, 0x7f802d99u, 0x1db7a74au, 0xbbef20fbu, 0x5a269aacu, 0xf85e145du, 0x96958e0eu,
    0x34cd07bfu, 0xd3048170u, 0x713bfb21u, 0x0f7374d2u, 0xadaaee83u, 0x4be26834u, 0xea19e1e5u, 0x88515b96u,
};

static const uint32_t bshim_258_tab2[96] = {
    0x536a47a8u, 0xf1a1c159u, 0x8fd93b0au, 0x2e10b4bbu, 0xcc482e6cu, 0x6a7fa81du, 0x08b721ceu, 0xa6ee9b7fu,
    0x45261530u, 0xe35d8ee1u, 0x81950892u, 0x1fcc8243u, 0xbe03fbf4u, 0x5c3b75a5u, 0xfa72ef56u, 0x98aa6907u,
    0x36e1e2b8u, 0xd5195c69u, 0x7350d61au, 0x11884fcbu, 0xafbfc97cu, 0x4df7432du, 0xec2ebcdeu, 0x8a66368fu,
    0x289db040u, 0xc6d529f1u, 0x650ca3a2u, 0x03441d53u, 0xa17b9704u, 0x3fb310b5u, 0xddea8a66u, 0x7c220417u,
    0x1a597dc8u, 0xb890f779u, 0x56c8712au, 0xf4ffeadbu, 0x9337648cu, 0x316ede3du, 0xcfa657eeu, 0x6dddd19fu,
    0x0c154b50u, 0xaa4cc501u, 0x48843eb2u, 0xe6bbb863u, 0x84f33214u, 0x232aabc5u, 0xc1622576u, 0x5f999f27u,
    0xfdd118d8u, 0x9c089289u, 0x3a400c3au, 0xd87785ebu, 0x76aeff9cu, 0x14e6794du, 0xb31df2feu, 0x51556cafu,
    0xef8ce660u, 0x8dc46011u, 0x2bfbd9c2u, 0xca335373u, 0x686acd24u, 0x06a246d5u, 0xa4d9c086u, 0x43113a37u,
    0xe148b3e8u, 0x7f802d99u, 0x1db7a74au, 0xbbef20fbu, 0x5a269aacu, 0xf85e145du, 0x96958e0eu, 0x34cd07bfu,
    0xd3048170u, 0x713bfb21u, 0x0f7374d2u, 0xadaaee83u, 0x4be26834u, 0xea19e1e5u, 0x88515b96u, 0x2688d547u,
    0xc4c04ef8u, 0x62f7c8a9u, 0x012f425au, 0x9f66bc0bu, 0x3d9e35bcu, 0xdbd5af6du, 0x7a0d291eu, 0x1844a2cfu,
    0xb67c1c80u, 0x54b39631u, 0xf2eb0fe2u, 0x91228993u, 0x2f5a0344u, 0xcd917cf5u, 0x6bc8f6a6u, 0x0a007057u,
};

static const uint32_t bshim_258_tab3[96] = {
    0xd5195c69u, 0x7350d61au, 0x11884fcbu, 0xafbfc97cu, 0x4df7432du, 0xec2ebcdeu, 0x8a66368fu, 0x289db040u,
    0xc6d529f1u, 0x650ca3a2u, 0x03441d53u, 0xa17b9704u, 0x3fb310b5u, 0xddea8a66u, 0x7c220417u, 0x1a597dc8u,
    0xb890f779u, 0x56c8712au, 0xf4ffeadbu, 0x9337648cu, 0x316ede3du, 0xcfa657eeu, 0x6dddd19fu, 0x0c154b50u,
    0xaa4cc501u, 0x48843eb2u, 0xe6bbb863u, 0x84f33214u, 0x232aabc5u, 0xc1622576u, 0x5f999f27u, 0xfdd118d8u,
    0x9c089289u, 0x3a400c3au, 0xd87785ebu, 0x76aeff9cu, 0x14e6794du, 0xb31df2feu, 0x51556cafu, 0xef8ce660u,
    0x8dc46011u, 0x2bfbd9c2u, 0xca335373u, 0x686acd24u, 0x06a246d5u, 0xa4d9c086u, 0x43113a37u, 0xe148b3e8u,
    0x7f802d99u, 0x1db7a74au, 0xbbef20fbu, 0x5a269aacu, 0xf85e145du, 0x96958e0eu, 0x34cd07bfu, 0xd3048170u,
    0x713bfb21u, 0x0f7374d2u, 0xadaaee83u, 0x4be26834u, 0xea19e1e5u, 0x88515b96u, 0x2688d547u, 0xc4c04ef8u,
    0x62f7c8a9u, 0x012f425au, 0x9f66bc0bu, 0x3d9e35bcu, 0xdbd5af6du, 0x7a0d291eu, 0x1844a2cfu, 0xb67c1c80u,
    0x54b39631u, 0xf2eb0fe2u, 0x91228993u, 0x2f5a0344u, 0xcd917cf5u, 0x6bc8f6a6u, 0x0a007057u, 0xa837ea08u,
    0x466f63b9u, 0xe4a6dd6au, 0x82de571bu, 0x2115d0ccu, 0xbf4d4a7du, 0x5d84c42eu, 0xfbbc3ddfu, 0x99f3b790u,
    0x382b3141u, 0xd662aaf2u, 0x749a24a3u, 0x12d19e54u, 0xb1091805u, 0x4f4091b6u, 0xed780b67u, 0x8baf8518u,
};

static const uint32_t bshim_258_tab4[96] = {
    0x56c8712au, 0xf4ffeadbu, 0x9337648cu, 0x316ede3du, 0xcfa657eeu, 0x6dddd19fu, 0x0c154b50u, 0xaa4cc501u,
    0x48843eb2u, 0xe6bbb863u, 0x84f33214u, 0x232aabc5u, 0xc1622576u, 0x5f999f27u, 0xfdd118d8u, 0x9c089289u,
    0x3a400c3au, 0xd87785ebu, 0x76aeff9cu, 0x14e6794du, 0xb31df2feu, 0x51556cafu, 0xef8ce660u, 0x8dc46011u,
    0x2bfbd9c2u, 0xca335373u, 0x686acd24u, 0x06a246d5u, 0xa4d9c086u, 0x43113a37u, 0xe148b3e8u, 0x7f802d99u,
    0x1db7a74au, 0xbbef20fbu, 0x5a269aacu, 0xf85e145du, 0x96958e0eu, 0x34cd07bfu, 0xd3048170u, 0x713bfb21u,
    0x0f7374d2u, 0xadaaee83u, 0x4be26834u, 0xea19e1e5u, 0x88515b96u, 0x2688d547u, 0xc4c04ef8u, 0x62f7c8a9u,
    0x012f425au, 0x9f66bc0bu, 0x3d9e35bcu, 0xdbd5af6du, 0x7a0d291eu, 0x1844a2cfu, 0xb67c1c80u, 0x54b39631u,
    0xf2eb0fe2u, 0x91228993u, 0x2f5a0344u, 0xcd917cf5u, 0x6bc8f6a6u, 0x0a007057u, 0xa837ea08u, 0x466f63b9u,
    0xe4a6dd6au, 0x82de571bu, 0x2115d0ccu, 0xbf4d4a7du, 0x5d84c42eu, 0xfbbc3ddfu, 0x99f3b790u, 0x382b3141u,
    0xd662aaf2u, 0x749a24a3u, 0x12d19e54u, 0xb1091805u, 0x4f4091b6u, 0xed780b67u, 0x8baf8518u, 0x29e6fec9u,
    0xc81e787au, 0x6655f22bu, 0x048d6bdcu, 0xa2c4e58du, 0x40fc5f3eu, 0xdf33d8efu, 0x7d6b52a0u, 0x1ba2cc51u,
    0xb9da4602u, 0x5811bfb3u, 0xf6493964u, 0x9480b315u, 0x32b82cc6u, 0xd0efa677u, 0x6f272028u, 0x0d5e99d9u,
};

static const uint32_t bshim_258_tab5[96] = {
    0xd87785ebu, 0x76aeff9cu, 0x14e6794du, 0xb31df2feu, 0x51556cafu, 0xef8ce660u, 0x8dc46011u, 0x2bfbd9c2u,
    0xca335373u, 0x686acd24u, 0x06a246d5u, 0xa4d9c086u, 0x43113a37u, 0xe148b3e8u, 0x7f802d99u, 0x1db7a74au,
    0xbbef20fbu, 0x5a269aacu, 0xf85e145du, 0x96958e0eu, 0x34cd07bfu, 0xd3048170u, 0x713bfb21u, 0x0f7374d2u,
    0xadaaee83u, 0x4be26834u, 0xea19e1e5u, 0x88515b96u, 0x2688d547u, 0xc4c04ef8u, 0x62f7c8a9u, 0x012f425au,
    0x9f66bc0bu, 0x3d9e35bcu, 0xdbd5af6du, 0x7a0d291eu, 0x1844a2cfu, 0xb67c1c80u, 0x54b39631u, 0xf2eb0fe2u,
    0x91228993u, 0x2f5a0344u, 0xcd917cf5u, 0x6bc8f6a6u, 0x0a007057u, 0xa837ea08u, 0x466f63b9u, 0xe4a6dd6au,
    0x82de571bu, 0x2115d0ccu, 0xbf4d4a7du, 0x5d84c42eu, 0xfbbc3ddfu, 0x99f3b790u, 0x382b3141u, 0xd662aaf2u,
    0x749a24a3u, 0x12d19e54u, 0xb1091805u, 0x4f4091b6u, 0xed780b67u, 0x8baf8518u, 0x29e6fec9u, 0xc81e787au,
    0x6655f22bu, 0x048d6bdcu, 0xa2c4e58du, 0x40fc5f3eu, 0xdf33d8efu, 0x7d6b52a0u, 0x1ba2cc51u, 0xb9da4602u,
    0x5811bfb3u, 0xf6493964u, 0x9480b315u, 0x32b82cc6u, 0xd0efa677u, 0x6f272028u, 0x0d5e99d9u, 0xab96138au,
    0x49cd8d3bu, 0xe80506ecu, 0x863c809du, 0x2473fa4eu, 0xc2ab73ffu, 0x60e2edb0u, 0xff1a6761u, 0x9d51e112u,
    0x3b895ac3u, 0xd9c0d474u, 0x77f84e25u, 0x162fc7d6u, 0xb4674187u, 0x529ebb38u, 0xf0d634e9u, 0x8f0dae9au,
};

static const uint32_t bshim_258_tab6[96] = {
    0x5a269aacu, 0xf85e145du, 0x96958e0eu, 0x34cd07bfu, 0xd3048170u, 0x713bfb21u, 0x0f7374d2u, 0xadaaee83u,
    0x4be26834u, 0xea19e1e5u, 0x88515b96u, 0x2688d547u, 0xc4c04ef8u, 0x62f7c8a9u, 0x012f425au, 0x9f66bc0bu,
    0x3d9e35bcu, 0xdbd5af6du, 0x7a0d291eu, 0x1844a2cfu, 0xb67c1c80u, 0x54b39631u, 0xf2eb0fe2u, 0x91228993u,
    0x2f5a0344u, 0xcd917cf5u, 0x6bc8f6a6u, 0x0a007057u, 0xa837ea08u, 0x466f63b9u, 0xe4a6dd6au, 0x82de571bu,
    0x2115d0ccu, 0xbf4d4a7du, 0x5d84c42eu, 0xfbbc3ddfu, 0x99f3b790u, 0x382b3141u, 0xd662aaf2u, 0x749a24a3u,
    0x12d19e54u, 0xb1091805u, 0x4f4091b6u, 0xed780b67u, 0x8baf8518u, 0x29e6fec9u, 0xc81e787au, 0x6655f22bu,
    0x048d6bdcu, 0xa2c4e58du, 0x40fc5f3eu, 0xdf33d8efu, 0x7d6b52a0u, 0x1ba2cc51u, 0xb9da4602u, 0x5811bfb3u,
    0xf6493964u, 0x9480b315u, 0x32b82cc6u, 0xd0efa677u, 0x6f272028u, 0x0d5e99d9u, 0xab96138au, 0x49cd8d3bu,
    0xe80506ecu, 0x863c809du, 0x2473fa4eu, 0xc2ab73ffu, 0x60e2edb0u, 0xff1a6761u, 0x9d51e112u, 0x3b895ac3u,
    0xd9c0d474u, 0x77f84e25u, 0x162fc7d6u, 0xb4674187u, 0x529ebb38u, 0xf0d634e9u, 0x8f0dae9au, 0x2d45284bu,
    0xcb7ca1fcu, 0x69b41badu, 0x07eb955eu, 0xa6230f0fu, 0x445a88c0u, 0xe2920271u, 0x80c97c22u, 0x1f00f5d3u,
    0xbd386f84u, 0x5b6fe935u, 0xf9a762e6u, 0x97dedc97u, 0x36165648u, 0xd44dcff9u, 0x728549aau, 0x10bcc35bu,
};

static const uint32_t bshim_258_tab7[96] = {
    0xdbd5af6du, 0x7a0d291eu, 0x1844a2cfu, 0xb67c1c80u, 0x54b39631u, 0xf2eb0fe2u, 0x91228993u, 0x2f5a0344u,
    0xcd917cf5u, 0x6bc8f6a6u, 0x0a007057u, 0xa837ea08u, 0x466f63b9u, 0xe4a6dd6au, 0x82de571bu, 0x2115d0ccu,
    0xbf4d4a7du, 0x5d84c42eu, 0xfbbc3ddfu, 0x99f3b790u, 0x382b3141u, 0xd662aaf2u, 0x749a24a3u, 0x12d19e54u,
    0xb1091805u, 0x4f4091b6u, 0xed780b67u, 0x8baf8518u, 0x29e6fec9u, 0xc81e787au, 0x6655f22bu, 0x048d6bdcu,
    0xa2c4e58du, 0x40fc5f3eu, 0xdf33d8efu, 0x7d6b52a0u, 0x1ba2cc51u, 0xb9da4602u, 0x5811bfb3u, 0xf6493964u,
    0x9480b315u, 0x32b82cc6u, 0xd0efa677u, 0x6f272028u, 0x0d5e99d9u, 0xab96138au, 0x49cd8d3bu, 0xe80506ecu,
    0x863c809du, 0x2473fa4eu, 0xc2ab73ffu, 0x60e2edb0u, 0xff1a6761u, 0x9d51e112u, 0x3b895ac3u, 0xd9c0d474u,
    0x77f84e25u, 0x162fc7d6u, 0xb4674187u, 0x529ebb38u, 0xf0d634e9u, 0x8f0dae9au, 0x2d45284bu, 0xcb7ca1fcu,
    0x69b41badu, 0x07eb955eu, 0xa6230f0fu, 0x445a88c0u, 0xe2920271u, 0x80c97c22u, 0x1f00f5d3u, 0xbd386f84u,
    0x5b6fe935u, 0xf9a762e6u, 0x97dedc97u, 0x36165648u, 0xd44dcff9u, 0x728549aau, 0x10bcc35bu, 0xaef43d0cu,
    0x4d2bb6bdu, 0xeb63306eu, 0x899aaa1fu, 0x27d223d0u, 0xc6099d81u, 0x64411732u, 0x027890e3u, 0xa0b00a94u,
    0x3ee78445u, 0xdd1efdf6u, 0x7b5677a7u, 0x198df158u, 0xb7c56b09u, 0x55fce4bau, 0xf4345e6bu, 0x926bd81cu,
};

struct bshim_258_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_258_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_258_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_258_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_258_reset(struct bshim_258_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001f2cdeu;
    return 0;
}

