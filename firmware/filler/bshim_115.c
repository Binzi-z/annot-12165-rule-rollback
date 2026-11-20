/* bshim_115 -- board support shim generated from the 0115 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_115_tab0[96] = {
    0xae984109u, 0x4ccfbabau, 0xeb07346bu, 0x893eae1cu, 0x277627cdu, 0xc5ada17eu, 0x63e51b2fu, 0x021c94e0u,
    0xa0540e91u, 0x3e8b8842u, 0xdcc301f3u, 0x7afa7ba4u, 0x1931f555u, 0xb7696f06u, 0x55a0e8b7u, 0xf3d86268u,
    0x920fdc19u, 0x304755cau, 0xce7ecf7bu, 0x6cb6492cu, 0x0aedc2ddu, 0xa9253c8eu, 0x475cb63fu, 0xe5942ff0u,
    0x83cba9a1u, 0x22032352u, 0xc03a9d03u, 0x5e7216b4u, 0xfca99065u, 0x9ae10a16u, 0x391883c7u, 0xd74ffd78u,
    0x75877729u, 0x13bef0dau, 0xb1f66a8bu, 0x502de43cu, 0xee655dedu, 0x8c9cd79eu, 0x2ad4514fu, 0xc90bcb00u,
    0x674344b1u, 0x057abe62u, 0xa3b23813u, 0x41e9b1c4u, 0xe0212b75u, 0x7e58a526u, 0x1c901ed7u, 0xbac79888u,
    0x58ff1239u, 0xf7368beau, 0x956e059bu, 0x33a57f4cu, 0xd1dcf8fdu, 0x701472aeu, 0x0e4bec5fu, 0xac836610u,
    0x4abadfc1u, 0xe8f25972u, 0x8729d323u, 0x25614cd4u, 0xc398c685u, 0x61d04036u, 0x0007b9e7u, 0x9e3f3398u,
    0x3c76ad49u, 0xdaae26fau, 0x78e5a0abu, 0x171d1a5cu, 0xb554940du, 0x538c0dbeu, 0xf1c3876fu, 0x8ffb0120u,
    0x2e327ad1u, 0xcc69f482u, 0x6aa16e33u, 0x08d8e7e4u, 0xa7106195u, 0x4547db46u, 0xe37f54f7u, 0x81b6cea8u,
    0x1fee4859u, 0xbe25c20au, 0x5c5d3bbbu, 0xfa94b56cu, 0x98cc2f1du, 0x3703a8ceu, 0xd53b227fu, 0x73729c30u,
    0x11aa15e1u, 0xafe18f92u, 0x4e190943u, 0xec5082f4u, 0x8a87fca5u, 0x28bf7656u, 0xc6f6f007u, 0x652e69b8u,
};

static const uint32_t bshim_115_tab1[96] = {
    0x304755cau, 0xce7ecf7bu, 0x6cb6492cu, 0x0aedc2ddu, 0xa9253c8eu, 0x475cb63fu, 0xe5942ff0u, 0x83cba9a1u,
    0x22032352u, 0xc03a9d03u, 0x5e7216b4u, 0xfca99065u, 0x9ae10a16u, 0x391883c7u, 0xd74ffd78u, 0x75877729u,
    0x13bef0dau, 0xb1f66a8bu, 0x502de43cu, 0xee655dedu, 0x8c9cd79eu, 0x2ad4514fu, 0xc90bcb00u, 0x674344b1u,
    0x057abe62u, 0xa3b23813u, 0x41e9b1c4u, 0xe0212b75u, 0x7e58a526u, 0x1c901ed7u, 0xbac79888u, 0x58ff1239u,
    0xf7368beau, 0x956e059bu, 0x33a57f4cu, 0xd1dcf8fdu, 0x701472aeu, 0x0e4bec5fu, 0xac836610u, 0x4abadfc1u,
    0xe8f25972u, 0x8729d323u, 0x25614cd4u, 0xc398c685u, 0x61d04036u, 0x0007b9e7u, 0x9e3f3398u, 0x3c76ad49u,
    0xdaae26fau, 0x78e5a0abu, 0x171d1a5cu, 0xb554940du, 0x538c0dbeu, 0xf1c3876fu, 0x8ffb0120u, 0x2e327ad1u,
    0xcc69f482u, 0x6aa16e33u, 0x08d8e7e4u, 0xa7106195u, 0x4547db46u, 0xe37f54f7u, 0x81b6cea8u, 0x1fee4859u,
    0xbe25c20au, 0x5c5d3bbbu, 0xfa94b56cu, 0x98cc2f1du, 0x3703a8ceu, 0xd53b227fu, 0x73729c30u, 0x11aa15e1u,
    0xafe18f92u, 0x4e190943u, 0xec5082f4u, 0x8a87fca5u, 0x28bf7656u, 0xc6f6f007u, 0x652e69b8u, 0x0365e369u,
    0xa19d5d1au, 0x3fd4d6cbu, 0xde0c507cu, 0x7c43ca2du, 0x1a7b43deu, 0xb8b2bd8fu, 0x56ea3740u, 0xf521b0f1u,
    0x93592aa2u, 0x3190a453u, 0xcfc81e04u, 0x6dff97b5u, 0x0c371166u, 0xaa6e8b17u, 0x48a604c8u, 0xe6dd7e79u,
};

static const uint32_t bshim_115_tab2[96] = {
    0xb1f66a8bu, 0x502de43cu, 0xee655dedu, 0x8c9cd79eu, 0x2ad4514fu, 0xc90bcb00u, 0x674344b1u, 0x057abe62u,
    0xa3b23813u, 0x41e9b1c4u, 0xe0212b75u, 0x7e58a526u, 0x1c901ed7u, 0xbac79888u, 0x58ff1239u, 0xf7368beau,
    0x956e059bu, 0x33a57f4cu, 0xd1dcf8fdu, 0x701472aeu, 0x0e4bec5fu, 0xac836610u, 0x4abadfc1u, 0xe8f25972u,
    0x8729d323u, 0x25614cd4u, 0xc398c685u, 0x61d04036u, 0x0007b9e7u, 0x9e3f3398u, 0x3c76ad49u, 0xdaae26fau,
    0x78e5a0abu, 0x171d1a5cu, 0xb554940du, 0x538c0dbeu, 0xf1c3876fu, 0x8ffb0120u, 0x2e327ad1u, 0xcc69f482u,
    0x6aa16e33u, 0x08d8e7e4u, 0xa7106195u, 0x4547db46u, 0xe37f54f7u, 0x81b6cea8u, 0x1fee4859u, 0xbe25c20au,
    0x5c5d3bbbu, 0xfa94b56cu, 0x98cc2f1du, 0x3703a8ceu, 0xd53b227fu, 0x73729c30u, 0x11aa15e1u, 0xafe18f92u,
    0x4e190943u, 0xec5082f4u, 0x8a87fca5u, 0x28bf7656u, 0xc6f6f007u, 0x652e69b8u, 0x0365e369u, 0xa19d5d1au,
    0x3fd4d6cbu, 0xde0c507cu, 0x7c43ca2du, 0x1a7b43deu, 0xb8b2bd8fu, 0x56ea3740u, 0xf521b0f1u, 0x93592aa2u,
    0x3190a453u, 0xcfc81e04u, 0x6dff97b5u, 0x0c371166u, 0xaa6e8b17u, 0x48a604c8u, 0xe6dd7e79u, 0x8514f82au,
    0x234c71dbu, 0xc183eb8cu, 0x5fbb653du, 0xfdf2deeeu, 0x9c2a589fu, 0x3a61d250u, 0xd8994c01u, 0x76d0c5b2u,
    0x15083f63u, 0xb33fb914u, 0x517732c5u, 0xefaeac76u, 0x8de62627u, 0x2c1d9fd8u, 0xca551989u, 0x688c933au,
};

static const uint32_t bshim_115_tab3[96] = {
    0x33a57f4cu, 0xd1dcf8fdu, 0x701472aeu, 0x0e4bec5fu, 0xac836610u, 0x4abadfc1u, 0xe8f25972u, 0x8729d323u,
    0x25614cd4u, 0xc398c685u, 0x61d04036u, 0x0007b9e7u, 0x9e3f3398u, 0x3c76ad49u, 0xdaae26fau, 0x78e5a0abu,
    0x171d1a5cu, 0xb554940du, 0x538c0dbeu, 0xf1c3876fu, 0x8ffb0120u, 0x2e327ad1u, 0xcc69f482u, 0x6aa16e33u,
    0x08d8e7e4u, 0xa7106195u, 0x4547db46u, 0xe37f54f7u, 0x81b6cea8u, 0x1fee4859u, 0xbe25c20au, 0x5c5d3bbbu,
    0xfa94b56cu, 0x98cc2f1du, 0x3703a8ceu, 0xd53b227fu, 0x73729c30u, 0x11aa15e1u, 0xafe18f92u, 0x4e190943u,
    0xec5082f4u, 0x8a87fca5u, 0x28bf7656u, 0xc6f6f007u, 0x652e69b8u, 0x0365e369u, 0xa19d5d1au, 0x3fd4d6cbu,
    0xde0c507cu, 0x7c43ca2du, 0x1a7b43deu, 0xb8b2bd8fu, 0x56ea3740u, 0xf521b0f1u, 0x93592aa2u, 0x3190a453u,
    0xcfc81e04u, 0x6dff97b5u, 0x0c371166u, 0xaa6e8b17u, 0x48a604c8u, 0xe6dd7e79u, 0x8514f82au, 0x234c71dbu,
    0xc183eb8cu, 0x5fbb653du, 0xfdf2deeeu, 0x9c2a589fu, 0x3a61d250u, 0xd8994c01u, 0x76d0c5b2u, 0x15083f63u,
    0xb33fb914u, 0x517732c5u, 0xefaeac76u, 0x8de62627u, 0x2c1d9fd8u, 0xca551989u, 0x688c933au, 0x06c40cebu,
    0xa4fb869cu, 0x4333004du, 0xe16a79feu, 0x7fa1f3afu, 0x1dd96d60u, 0xbc10e711u, 0x5a4860c2u, 0xf87fda73u,
    0x96b75424u, 0x34eecdd5u, 0xd3264786u, 0x715dc137u, 0x0f953ae8u, 0xadccb499u, 0x4c042e4au, 0xea3ba7fbu,
};

static const uint32_t bshim_115_tab4[96] = {
    0xb554940du, 0x538c0dbeu, 0xf1c3876fu, 0x8ffb0120u, 0x2e327ad1u, 0xcc69f482u, 0x6aa16e33u, 0x08d8e7e4u,
    0xa7106195u, 0x4547db46u, 0xe37f54f7u, 0x81b6cea8u, 0x1fee4859u, 0xbe25c20au, 0x5c5d3bbbu, 0xfa94b56cu,
    0x98cc2f1du, 0x3703a8ceu, 0xd53b227fu, 0x73729c30u, 0x11aa15e1u, 0xafe18f92u, 0x4e190943u, 0xec5082f4u,
    0x8a87fca5u, 0x28bf7656u, 0xc6f6f007u, 0x652e69b8u, 0x0365e369u, 0xa19d5d1au, 0x3fd4d6cbu, 0xde0c507cu,
    0x7c43ca2du, 0x1a7b43deu, 0xb8b2bd8fu, 0x56ea3740u, 0xf521b0f1u, 0x93592aa2u, 0x3190a453u, 0xcfc81e04u,
    0x6dff97b5u, 0x0c371166u, 0xaa6e8b17u, 0x48a604c8u, 0xe6dd7e79u, 0x8514f82au, 0x234c71dbu, 0xc183eb8cu,
    0x5fbb653du, 0xfdf2deeeu, 0x9c2a589fu, 0x3a61d250u, 0xd8994c01u, 0x76d0c5b2u, 0x15083f63u, 0xb33fb914u,
    0x517732c5u, 0xefaeac76u, 0x8de62627u, 0x2c1d9fd8u, 0xca551989u, 0x688c933au, 0x06c40cebu, 0xa4fb869cu,
    0x4333004du, 0xe16a79feu, 0x7fa1f3afu, 0x1dd96d60u, 0xbc10e711u, 0x5a4860c2u, 0xf87fda73u, 0x96b75424u,
    0x34eecdd5u, 0xd3264786u, 0x715dc137u, 0x0f953ae8u, 0xadccb499u, 0x4c042e4au, 0xea3ba7fbu, 0x887321acu,
    0x26aa9b5du, 0xc4e2150eu, 0x63198ebfu, 0x01510870u, 0x9f888221u, 0x3dbffbd2u, 0xdbf77583u, 0x7a2eef34u,
    0x186668e5u, 0xb69de296u, 0x54d55c47u, 0xf30cd5f8u, 0x91444fa9u, 0x2f7bc95au, 0xcdb3430bu, 0x6beabcbcu,
};

static const uint32_t bshim_115_tab5[96] = {
    0x3703a8ceu, 0xd53b227fu, 0x73729c30u, 0x11aa15e1u, 0xafe18f92u, 0x4e190943u, 0xec5082f4u, 0x8a87fca5u,
    0x28bf7656u, 0xc6f6f007u, 0x652e69b8u, 0x0365e369u, 0xa19d5d1au, 0x3fd4d6cbu, 0xde0c507cu, 0x7c43ca2du,
    0x1a7b43deu, 0xb8b2bd8fu, 0x56ea3740u, 0xf521b0f1u, 0x93592aa2u, 0x3190a453u, 0xcfc81e04u, 0x6dff97b5u,
    0x0c371166u, 0xaa6e8b17u, 0x48a604c8u, 0xe6dd7e79u, 0x8514f82au, 0x234c71dbu, 0xc183eb8cu, 0x5fbb653du,
    0xfdf2deeeu, 0x9c2a589fu, 0x3a61d250u, 0xd8994c01u, 0x76d0c5b2u, 0x15083f63u, 0xb33fb914u, 0x517732c5u,
    0xefaeac76u, 0x8de62627u, 0x2c1d9fd8u, 0xca551989u, 0x688c933au, 0x06c40cebu, 0xa4fb869cu, 0x4333004du,
    0xe16a79feu, 0x7fa1f3afu, 0x1dd96d60u, 0xbc10e711u, 0x5a4860c2u, 0xf87fda73u, 0x96b75424u, 0x34eecdd5u,
    0xd3264786u, 0x715dc137u, 0x0f953ae8u, 0xadccb499u, 0x4c042e4au, 0xea3ba7fbu, 0x887321acu, 0x26aa9b5du,
    0xc4e2150eu, 0x63198ebfu, 0x01510870u, 0x9f888221u, 0x3dbffbd2u, 0xdbf77583u, 0x7a2eef34u, 0x186668e5u,
    0xb69de296u, 0x54d55c47u, 0xf30cd5f8u, 0x91444fa9u, 0x2f7bc95au, 0xcdb3430bu, 0x6beabcbcu, 0x0a22366du,
    0xa859b01eu, 0x469129cfu, 0xe4c8a380u, 0x83001d31u, 0x213796e2u, 0xbf6f1093u, 0x5da68a44u, 0xfbde03f5u,
    0x9a157da6u, 0x384cf757u, 0xd6847108u, 0x74bbeab9u, 0x12f3646au, 0xb12ade1bu, 0x4f6257ccu, 0xed99d17du,
};

static const uint32_t bshim_115_tab6[96] = {
    0xb8b2bd8fu, 0x56ea3740u, 0xf521b0f1u, 0x93592aa2u, 0x3190a453u, 0xcfc81e04u, 0x6dff97b5u, 0x0c371166u,
    0xaa6e8b17u, 0x48a604c8u, 0xe6dd7e79u, 0x8514f82au, 0x234c71dbu, 0xc183eb8cu, 0x5fbb653du, 0xfdf2deeeu,
    0x9c2a589fu, 0x3a61d250u, 0xd8994c01u, 0x76d0c5b2u, 0x15083f63u, 0xb33fb914u, 0x517732c5u, 0xefaeac76u,
    0x8de62627u, 0x2c1d9fd8u, 0xca551989u, 0x688c933au, 0x06c40cebu, 0xa4fb869cu, 0x4333004du, 0xe16a79feu,
    0x7fa1f3afu, 0x1dd96d60u, 0xbc10e711u, 0x5a4860c2u, 0xf87fda73u, 0x96b75424u, 0x34eecdd5u, 0xd3264786u,
    0x715dc137u, 0x0f953ae8u, 0xadccb499u, 0x4c042e4au, 0xea3ba7fbu, 0x887321acu, 0x26aa9b5du, 0xc4e2150eu,
    0x63198ebfu, 0x01510870u, 0x9f888221u, 0x3dbffbd2u, 0xdbf77583u, 0x7a2eef34u, 0x186668e5u, 0xb69de296u,
    0x54d55c47u, 0xf30cd5f8u, 0x91444fa9u, 0x2f7bc95au, 0xcdb3430bu, 0x6beabcbcu, 0x0a22366du, 0xa859b01eu,
    0x469129cfu, 0xe4c8a380u, 0x83001d31u, 0x213796e2u, 0xbf6f1093u, 0x5da68a44u, 0xfbde03f5u, 0x9a157da6u,
    0x384cf757u, 0xd6847108u, 0x74bbeab9u, 0x12f3646au, 0xb12ade1bu, 0x4f6257ccu, 0xed99d17du, 0x8bd14b2eu,
    0x2a08c4dfu, 0xc8403e90u, 0x6677b841u, 0x04af31f2u, 0xa2e6aba3u, 0x411e2554u, 0xdf559f05u, 0x7d8d18b6u,
    0x1bc49267u, 0xb9fc0c18u, 0x583385c9u, 0xf66aff7au, 0x94a2792bu, 0x32d9f2dcu, 0xd1116c8du, 0x6f48e63eu,
};

static const uint32_t bshim_115_tab7[96] = {
    0x3a61d250u, 0xd8994c01u, 0x76d0c5b2u, 0x15083f63u, 0xb33fb914u, 0x517732c5u, 0xefaeac76u, 0x8de62627u,
    0x2c1d9fd8u, 0xca551989u, 0x688c933au, 0x06c40cebu, 0xa4fb869cu, 0x4333004du, 0xe16a79feu, 0x7fa1f3afu,
    0x1dd96d60u, 0xbc10e711u, 0x5a4860c2u, 0xf87fda73u, 0x96b75424u, 0x34eecdd5u, 0xd3264786u, 0x715dc137u,
    0x0f953ae8u, 0xadccb499u, 0x4c042e4au, 0xea3ba7fbu, 0x887321acu, 0x26aa9b5du, 0xc4e2150eu, 0x63198ebfu,
    0x01510870u, 0x9f888221u, 0x3dbffbd2u, 0xdbf77583u, 0x7a2eef34u, 0x186668e5u, 0xb69de296u, 0x54d55c47u,
    0xf30cd5f8u, 0x91444fa9u, 0x2f7bc95au, 0xcdb3430bu, 0x6beabcbcu, 0x0a22366du, 0xa859b01eu, 0x469129cfu,
    0xe4c8a380u, 0x83001d31u, 0x213796e2u, 0xbf6f1093u, 0x5da68a44u, 0xfbde03f5u, 0x9a157da6u, 0x384cf757u,
    0xd6847108u, 0x74bbeab9u, 0x12f3646au, 0xb12ade1bu, 0x4f6257ccu, 0xed99d17du, 0x8bd14b2eu, 0x2a08c4dfu,
    0xc8403e90u, 0x6677b841u, 0x04af31f2u, 0xa2e6aba3u, 0x411e2554u, 0xdf559f05u, 0x7d8d18b6u, 0x1bc49267u,
    0xb9fc0c18u, 0x583385c9u, 0xf66aff7au, 0x94a2792bu, 0x32d9f2dcu, 0xd1116c8du, 0x6f48e63eu, 0x0d805fefu,
    0xabb7d9a0u, 0x49ef5351u, 0xe826cd02u, 0x865e46b3u, 0x2495c064u, 0xc2cd3a15u, 0x6104b3c6u, 0xff3c2d77u,
    0x9d73a728u, 0x3bab20d9u, 0xd9e29a8au, 0x781a143bu, 0x16518decu, 0xb489079du, 0x52c0814eu, 0xf0f7faffu,
};

struct bshim_115_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_115_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_115_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_115_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_115_reset(struct bshim_115_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000de55du;
    return 0;
}

