/* bshim_209 -- board support shim generated from the 0209 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_209_tab0[96] = {
    0x270bcd03u, 0xc54346b4u, 0x637ac065u, 0x01b23a16u, 0x9fe9b3c7u, 0x3e212d78u, 0xdc58a729u, 0x7a9020dau,
    0x18c79a8bu, 0xb6ff143cu, 0x55368dedu, 0xf36e079eu, 0x91a5814fu, 0x2fdcfb00u, 0xce1474b1u, 0x6c4bee62u,
    0x0a836813u, 0xa8bae1c4u, 0x46f25b75u, 0xe529d526u, 0x83614ed7u, 0x2198c888u, 0xbfd04239u, 0x5e07bbeau,
    0xfc3f359bu, 0x9a76af4cu, 0x38ae28fdu, 0xd6e5a2aeu, 0x751d1c5fu, 0x13549610u, 0xb18c0fc1u, 0x4fc38972u,
    0xedfb0323u, 0x8c327cd4u, 0x2a69f685u, 0xc8a17036u, 0x66d8e9e7u, 0x05106398u, 0xa347dd49u, 0x417f56fau,
    0xdfb6d0abu, 0x7dee4a5cu, 0x1c25c40du, 0xba5d3dbeu, 0x5894b76fu, 0xf6cc3120u, 0x9503aad1u, 0x333b2482u,
    0xd1729e33u, 0x6faa17e4u, 0x0de19195u, 0xac190b46u, 0x4a5084f7u, 0xe887fea8u, 0x86bf7859u, 0x24f6f20au,
    0xc32e6bbbu, 0x6165e56cu, 0xff9d5f1du, 0x9dd4d8ceu, 0x3c0c527fu, 0xda43cc30u, 0x787b45e1u, 0x16b2bf92u,
    0xb4ea3943u, 0x5321b2f4u, 0xf1592ca5u, 0x8f90a656u, 0x2dc82007u, 0xcbff99b8u, 0x6a371369u, 0x086e8d1au,
    0xa6a606cbu, 0x44dd807cu, 0xe314fa2du, 0x814c73deu, 0x1f83ed8fu, 0xbdbb6740u, 0x5bf2e0f1u, 0xfa2a5aa2u,
    0x9861d453u, 0x36994e04u, 0xd4d0c7b5u, 0x73084166u, 0x113fbb17u, 0xaf7734c8u, 0x4daeae79u, 0xebe6282au,
    0x8a1da1dbu, 0x28551b8cu, 0xc68c953du, 0x64c40eeeu, 0x02fb889fu, 0xa1330250u, 0x3f6a7c01u, 0xdda1f5b2u,
};

static const uint32_t bshim_209_tab1[96] = {
    0xa8bae1c4u, 0x46f25b75u, 0xe529d526u, 0x83614ed7u, 0x2198c888u, 0xbfd04239u, 0x5e07bbeau, 0xfc3f359bu,
    0x9a76af4cu, 0x38ae28fdu, 0xd6e5a2aeu, 0x751d1c5fu, 0x13549610u, 0xb18c0fc1u, 0x4fc38972u, 0xedfb0323u,
    0x8c327cd4u, 0x2a69f685u, 0xc8a17036u, 0x66d8e9e7u, 0x05106398u, 0xa347dd49u, 0x417f56fau, 0xdfb6d0abu,
    0x7dee4a5cu, 0x1c25c40du, 0xba5d3dbeu, 0x5894b76fu, 0xf6cc3120u, 0x9503aad1u, 0x333b2482u, 0xd1729e33u,
    0x6faa17e4u, 0x0de19195u, 0xac190b46u, 0x4a5084f7u, 0xe887fea8u, 0x86bf7859u, 0x24f6f20au, 0xc32e6bbbu,
    0x6165e56cu, 0xff9d5f1du, 0x9dd4d8ceu, 0x3c0c527fu, 0xda43cc30u, 0x787b45e1u, 0x16b2bf92u, 0xb4ea3943u,
    0x5321b2f4u, 0xf1592ca5u, 0x8f90a656u, 0x2dc82007u, 0xcbff99b8u, 0x6a371369u, 0x086e8d1au, 0xa6a606cbu,
    0x44dd807cu, 0xe314fa2du, 0x814c73deu, 0x1f83ed8fu, 0xbdbb6740u, 0x5bf2e0f1u, 0xfa2a5aa2u, 0x9861d453u,
    0x36994e04u, 0xd4d0c7b5u, 0x73084166u, 0x113fbb17u, 0xaf7734c8u, 0x4daeae79u, 0xebe6282au, 0x8a1da1dbu,
    0x28551b8cu, 0xc68c953du, 0x64c40eeeu, 0x02fb889fu, 0xa1330250u, 0x3f6a7c01u, 0xdda1f5b2u, 0x7bd96f63u,
    0x1a10e914u, 0xb84862c5u, 0x567fdc76u, 0xf4b75627u, 0x92eecfd8u, 0x31264989u, 0xcf5dc33au, 0x6d953cebu,
    0x0bccb69cu, 0xaa04304du, 0x483ba9feu, 0xe67323afu, 0x84aa9d60u, 0x22e21711u, 0xc11990c2u, 0x5f510a73u,
};

static const uint32_t bshim_209_tab2[96] = {
    0x2a69f685u, 0xc8a17036u, 0x66d8e9e7u, 0x05106398u, 0xa347dd49u, 0x417f56fau, 0xdfb6d0abu, 0x7dee4a5cu,
    0x1c25c40du, 0xba5d3dbeu, 0x5894b76fu, 0xf6cc3120u, 0x9503aad1u, 0x333b2482u, 0xd1729e33u, 0x6faa17e4u,
    0x0de19195u, 0xac190b46u, 0x4a5084f7u, 0xe887fea8u, 0x86bf7859u, 0x24f6f20au, 0xc32e6bbbu, 0x6165e56cu,
    0xff9d5f1du, 0x9dd4d8ceu, 0x3c0c527fu, 0xda43cc30u, 0x787b45e1u, 0x16b2bf92u, 0xb4ea3943u, 0x5321b2f4u,
    0xf1592ca5u, 0x8f90a656u, 0x2dc82007u, 0xcbff99b8u, 0x6a371369u, 0x086e8d1au, 0xa6a606cbu, 0x44dd807cu,
    0xe314fa2du, 0x814c73deu, 0x1f83ed8fu, 0xbdbb6740u, 0x5bf2e0f1u, 0xfa2a5aa2u, 0x9861d453u, 0x36994e04u,
    0xd4d0c7b5u, 0x73084166u, 0x113fbb17u, 0xaf7734c8u, 0x4daeae79u, 0xebe6282au, 0x8a1da1dbu, 0x28551b8cu,
    0xc68c953du, 0x64c40eeeu, 0x02fb889fu, 0xa1330250u, 0x3f6a7c01u, 0xdda1f5b2u, 0x7bd96f63u, 0x1a10e914u,
    0xb84862c5u, 0x567fdc76u, 0xf4b75627u, 0x92eecfd8u, 0x31264989u, 0xcf5dc33au, 0x6d953cebu, 0x0bccb69cu,
    0xaa04304du, 0x483ba9feu, 0xe67323afu, 0x84aa9d60u, 0x22e21711u, 0xc11990c2u, 0x5f510a73u, 0xfd888424u,
    0x9bbffdd5u, 0x39f77786u, 0xd82ef137u, 0x76666ae8u, 0x149de499u, 0xb2d55e4au, 0x510cd7fbu, 0xef4451acu,
    0x8d7bcb5du, 0x2bb3450eu, 0xc9eabebfu, 0x68223870u, 0x0659b221u, 0xa4912bd2u, 0x42c8a583u, 0xe1001f34u,
};

static const uint32_t bshim_209_tab3[96] = {
    0xac190b46u, 0x4a5084f7u, 0xe887fea8u, 0x86bf7859u, 0x24f6f20au, 0xc32e6bbbu, 0x6165e56cu, 0xff9d5f1du,
    0x9dd4d8ceu, 0x3c0c527fu, 0xda43cc30u, 0x787b45e1u, 0x16b2bf92u, 0xb4ea3943u, 0x5321b2f4u, 0xf1592ca5u,
    0x8f90a656u, 0x2dc82007u, 0xcbff99b8u, 0x6a371369u, 0x086e8d1au, 0xa6a606cbu, 0x44dd807cu, 0xe314fa2du,
    0x814c73deu, 0x1f83ed8fu, 0xbdbb6740u, 0x5bf2e0f1u, 0xfa2a5aa2u, 0x9861d453u, 0x36994e04u, 0xd4d0c7b5u,
    0x73084166u, 0x113fbb17u, 0xaf7734c8u, 0x4daeae79u, 0xebe6282au, 0x8a1da1dbu, 0x28551b8cu, 0xc68c953du,
    0x64c40eeeu, 0x02fb889fu, 0xa1330250u, 0x3f6a7c01u, 0xdda1f5b2u, 0x7bd96f63u, 0x1a10e914u, 0xb84862c5u,
    0x567fdc76u, 0xf4b75627u, 0x92eecfd8u, 0x31264989u, 0xcf5dc33au, 0x6d953cebu, 0x0bccb69cu, 0xaa04304du,
    0x483ba9feu, 0xe67323afu, 0x84aa9d60u, 0x22e21711u, 0xc11990c2u, 0x5f510a73u, 0xfd888424u, 0x9bbffdd5u,
    0x39f77786u, 0xd82ef137u, 0x76666ae8u, 0x149de499u, 0xb2d55e4au, 0x510cd7fbu, 0xef4451acu, 0x8d7bcb5du,
    0x2bb3450eu, 0xc9eabebfu, 0x68223870u, 0x0659b221u, 0xa4912bd2u, 0x42c8a583u, 0xe1001f34u, 0x7f3798e5u,
    0x1d6f1296u, 0xbba68c47u, 0x59de05f8u, 0xf8157fa9u, 0x964cf95au, 0x3484730bu, 0xd2bbecbcu, 0x70f3666du,
    0x0f2ae01eu, 0xad6259cfu, 0x4b99d380u, 0xe9d14d31u, 0x8808c6e2u, 0x26404093u, 0xc477ba44u, 0x62af33f5u,
};

static const uint32_t bshim_209_tab4[96] = {
    0x2dc82007u, 0xcbff99b8u, 0x6a371369u, 0x086e8d1au, 0xa6a606cbu, 0x44dd807cu, 0xe314fa2du, 0x814c73deu,
    0x1f83ed8fu, 0xbdbb6740u, 0x5bf2e0f1u, 0xfa2a5aa2u, 0x9861d453u, 0x36994e04u, 0xd4d0c7b5u, 0x73084166u,
    0x113fbb17u, 0xaf7734c8u, 0x4daeae79u, 0xebe6282au, 0x8a1da1dbu, 0x28551b8cu, 0xc68c953du, 0x64c40eeeu,
    0x02fb889fu, 0xa1330250u, 0x3f6a7c01u, 0xdda1f5b2u, 0x7bd96f63u, 0x1a10e914u, 0xb84862c5u, 0x567fdc76u,
    0xf4b75627u, 0x92eecfd8u, 0x31264989u, 0xcf5dc33au, 0x6d953cebu, 0x0bccb69cu, 0xaa04304du, 0x483ba9feu,
    0xe67323afu, 0x84aa9d60u, 0x22e21711u, 0xc11990c2u, 0x5f510a73u, 0xfd888424u, 0x9bbffdd5u, 0x39f77786u,
    0xd82ef137u, 0x76666ae8u, 0x149de499u, 0xb2d55e4au, 0x510cd7fbu, 0xef4451acu, 0x8d7bcb5du, 0x2bb3450eu,
    0xc9eabebfu, 0x68223870u, 0x0659b221u, 0xa4912bd2u, 0x42c8a583u, 0xe1001f34u, 0x7f3798e5u, 0x1d6f1296u,
    0xbba68c47u, 0x59de05f8u, 0xf8157fa9u, 0x964cf95au, 0x3484730bu, 0xd2bbecbcu, 0x70f3666du, 0x0f2ae01eu,
    0xad6259cfu, 0x4b99d380u, 0xe9d14d31u, 0x8808c6e2u, 0x26404093u, 0xc477ba44u, 0x62af33f5u, 0x00e6ada6u,
    0x9f1e2757u, 0x3d55a108u, 0xdb8d1ab9u, 0x79c4946au, 0x17fc0e1bu, 0xb63387ccu, 0x546b017du, 0xf2a27b2eu,
    0x90d9f4dfu, 0x2f116e90u, 0xcd48e841u, 0x6b8061f2u, 0x09b7dba3u, 0xa7ef5554u, 0x4626cf05u, 0xe45e48b6u,
};

static const uint32_t bshim_209_tab5[96] = {
    0xaf7734c8u, 0x4daeae79u, 0xebe6282au, 0x8a1da1dbu, 0x28551b8cu, 0xc68c953du, 0x64c40eeeu, 0x02fb889fu,
    0xa1330250u, 0x3f6a7c01u, 0xdda1f5b2u, 0x7bd96f63u, 0x1a10e914u, 0xb84862c5u, 0x567fdc76u, 0xf4b75627u,
    0x92eecfd8u, 0x31264989u, 0xcf5dc33au, 0x6d953cebu, 0x0bccb69cu, 0xaa04304du, 0x483ba9feu, 0xe67323afu,
    0x84aa9d60u, 0x22e21711u, 0xc11990c2u, 0x5f510a73u, 0xfd888424u, 0x9bbffdd5u, 0x39f77786u, 0xd82ef137u,
    0x76666ae8u, 0x149de499u, 0xb2d55e4au, 0x510cd7fbu, 0xef4451acu, 0x8d7bcb5du, 0x2bb3450eu, 0xc9eabebfu,
    0x68223870u, 0x0659b221u, 0xa4912bd2u, 0x42c8a583u, 0xe1001f34u, 0x7f3798e5u, 0x1d6f1296u, 0xbba68c47u,
    0x59de05f8u, 0xf8157fa9u, 0x964cf95au, 0x3484730bu, 0xd2bbecbcu, 0x70f3666du, 0x0f2ae01eu, 0xad6259cfu,
    0x4b99d380u, 0xe9d14d31u, 0x8808c6e2u, 0x26404093u, 0xc477ba44u, 0x62af33f5u, 0x00e6ada6u, 0x9f1e2757u,
    0x3d55a108u, 0xdb8d1ab9u, 0x79c4946au, 0x17fc0e1bu, 0xb63387ccu, 0x546b017du, 0xf2a27b2eu, 0x90d9f4dfu,
    0x2f116e90u, 0xcd48e841u, 0x6b8061f2u, 0x09b7dba3u, 0xa7ef5554u, 0x4626cf05u, 0xe45e48b6u, 0x8295c267u,
    0x20cd3c18u, 0xbf04b5c9u, 0x5d3c2f7au, 0xfb73a92bu, 0x99ab22dcu, 0x37e29c8du, 0xd61a163eu, 0x74518fefu,
    0x128909a0u, 0xb0c08351u, 0x4ef7fd02u, 0xed2f76b3u, 0x8b66f064u, 0x299e6a15u, 0xc7d5e3c6u, 0x660d5d77u,
};

static const uint32_t bshim_209_tab6[96] = {
    0x31264989u, 0xcf5dc33au, 0x6d953cebu, 0x0bccb69cu, 0xaa04304du, 0x483ba9feu, 0xe67323afu, 0x84aa9d60u,
    0x22e21711u, 0xc11990c2u, 0x5f510a73u, 0xfd888424u, 0x9bbffdd5u, 0x39f77786u, 0xd82ef137u, 0x76666ae8u,
    0x149de499u, 0xb2d55e4au, 0x510cd7fbu, 0xef4451acu, 0x8d7bcb5du, 0x2bb3450eu, 0xc9eabebfu, 0x68223870u,
    0x0659b221u, 0xa4912bd2u, 0x42c8a583u, 0xe1001f34u, 0x7f3798e5u, 0x1d6f1296u, 0xbba68c47u, 0x59de05f8u,
    0xf8157fa9u, 0x964cf95au, 0x3484730bu, 0xd2bbecbcu, 0x70f3666du, 0x0f2ae01eu, 0xad6259cfu, 0x4b99d380u,
    0xe9d14d31u, 0x8808c6e2u, 0x26404093u, 0xc477ba44u, 0x62af33f5u, 0x00e6ada6u, 0x9f1e2757u, 0x3d55a108u,
    0xdb8d1ab9u, 0x79c4946au, 0x17fc0e1bu, 0xb63387ccu, 0x546b017du, 0xf2a27b2eu, 0x90d9f4dfu, 0x2f116e90u,
    0xcd48e841u, 0x6b8061f2u, 0x09b7dba3u, 0xa7ef5554u, 0x4626cf05u, 0xe45e48b6u, 0x8295c267u, 0x20cd3c18u,
    0xbf04b5c9u, 0x5d3c2f7au, 0xfb73a92bu, 0x99ab22dcu, 0x37e29c8du, 0xd61a163eu, 0x74518fefu, 0x128909a0u,
    0xb0c08351u, 0x4ef7fd02u, 0xed2f76b3u, 0x8b66f064u, 0x299e6a15u, 0xc7d5e3c6u, 0x660d5d77u, 0x0444d728u,
    0xa27c50d9u, 0x40b3ca8au, 0xdeeb443bu, 0x7d22bdecu, 0x1b5a379du, 0xb991b14eu, 0x57c92affu, 0xf600a4b0u,
    0x94381e61u, 0x326f9812u, 0xd0a711c3u, 0x6ede8b74u, 0x0d160525u, 0xab4d7ed6u, 0x4984f887u, 0xe7bc7238u,
};

static const uint32_t bshim_209_tab7[96] = {
    0xb2d55e4au, 0x510cd7fbu, 0xef4451acu, 0x8d7bcb5du, 0x2bb3450eu, 0xc9eabebfu, 0x68223870u, 0x0659b221u,
    0xa4912bd2u, 0x42c8a583u, 0xe1001f34u, 0x7f3798e5u, 0x1d6f1296u, 0xbba68c47u, 0x59de05f8u, 0xf8157fa9u,
    0x964cf95au, 0x3484730bu, 0xd2bbecbcu, 0x70f3666du, 0x0f2ae01eu, 0xad6259cfu, 0x4b99d380u, 0xe9d14d31u,
    0x8808c6e2u, 0x26404093u, 0xc477ba44u, 0x62af33f5u, 0x00e6ada6u, 0x9f1e2757u, 0x3d55a108u, 0xdb8d1ab9u,
    0x79c4946au, 0x17fc0e1bu, 0xb63387ccu, 0x546b017du, 0xf2a27b2eu, 0x90d9f4dfu, 0x2f116e90u, 0xcd48e841u,
    0x6b8061f2u, 0x09b7dba3u, 0xa7ef5554u, 0x4626cf05u, 0xe45e48b6u, 0x8295c267u, 0x20cd3c18u, 0xbf04b5c9u,
    0x5d3c2f7au, 0xfb73a92bu, 0x99ab22dcu, 0x37e29c8du, 0xd61a163eu, 0x74518fefu, 0x128909a0u, 0xb0c08351u,
    0x4ef7fd02u, 0xed2f76b3u, 0x8b66f064u, 0x299e6a15u, 0xc7d5e3c6u, 0x660d5d77u, 0x0444d728u, 0xa27c50d9u,
    0x40b3ca8au, 0xdeeb443bu, 0x7d22bdecu, 0x1b5a379du, 0xb991b14eu, 0x57c92affu, 0xf600a4b0u, 0x94381e61u,
    0x326f9812u, 0xd0a711c3u, 0x6ede8b74u, 0x0d160525u, 0xab4d7ed6u, 0x4984f887u, 0xe7bc7238u, 0x85f3ebe9u,
    0x242b659au, 0xc262df4bu, 0x609a58fcu, 0xfed1d2adu, 0x9d094c5eu, 0x3b40c60fu, 0xd9783fc0u, 0x77afb971u,
    0x15e73322u, 0xb41eacd3u, 0x52562684u, 0xf08da035u, 0x8ec519e6u, 0x2cfc9397u, 0xcb340d48u, 0x696b86f9u,
};

struct bshim_209_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_209_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_209_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_209_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_209_reset(struct bshim_209_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0019411fu;
    return 0;
}

