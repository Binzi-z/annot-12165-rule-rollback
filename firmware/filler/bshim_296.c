/* bshim_296 -- board support shim generated from the 0296 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_296_tab0[96] = {
    0xe2c871f8u, 0x80ffeba9u, 0x1f37655au, 0xbd6edf0bu, 0x5ba658bcu, 0xf9ddd26du, 0x98154c1eu, 0x364cc5cfu,
    0xd4843f80u, 0x72bbb931u, 0x10f332e2u, 0xaf2aac93u, 0x4d622644u, 0xeb999ff5u, 0x89d119a6u, 0x28089357u,
    0xc6400d08u, 0x647786b9u, 0x02af006au, 0xa0e67a1bu, 0x3f1df3ccu, 0xdd556d7du, 0x7b8ce72eu, 0x19c460dfu,
    0xb7fbda90u, 0x56335441u, 0xf46acdf2u, 0x92a247a3u, 0x30d9c154u, 0xcf113b05u, 0x6d48b4b6u, 0x0b802e67u,
    0xa9b7a818u, 0x47ef21c9u, 0xe6269b7au, 0x845e152bu, 0x22958edcu, 0xc0cd088du, 0x5f04823eu, 0xfd3bfbefu,
    0x9b7375a0u, 0x39aaef51u, 0xd7e26902u, 0x7619e2b3u, 0x14515c64u, 0xb288d615u, 0x50c04fc6u, 0xeef7c977u,
    0x8d2f4328u, 0x2b66bcd9u, 0xc99e368au, 0x67d5b03bu, 0x060d29ecu, 0xa444a39du, 0x427c1d4eu, 0xe0b396ffu,
    0x7eeb10b0u, 0x1d228a61u, 0xbb5a0412u, 0x59917dc3u, 0xf7c8f774u, 0x96007125u, 0x3437ead6u, 0xd26f6487u,
    0x70a6de38u, 0x0ede57e9u, 0xad15d19au, 0x4b4d4b4bu, 0xe984c4fcu, 0x87bc3eadu, 0x25f3b85eu, 0xc42b320fu,
    0x6262abc0u, 0x009a2571u, 0x9ed19f22u, 0x3d0918d3u, 0xdb409284u, 0x79780c35u, 0x17af85e6u, 0xb5e6ff97u,
    0x541e7948u, 0xf255f2f9u, 0x908d6caau, 0x2ec4e65bu, 0xccfc600cu, 0x6b33d9bdu, 0x096b536eu, 0xa7a2cd1fu,
    0x45da46d0u, 0xe411c081u, 0x82493a32u, 0x2080b3e3u, 0xbeb82d94u, 0x5cefa745u, 0xfb2720f6u, 0x995e9aa7u,
};

static const uint32_t bshim_296_tab1[96] = {
    0x647786b9u, 0x02af006au, 0xa0e67a1bu, 0x3f1df3ccu, 0xdd556d7du, 0x7b8ce72eu, 0x19c460dfu, 0xb7fbda90u,
    0x56335441u, 0xf46acdf2u, 0x92a247a3u, 0x30d9c154u, 0xcf113b05u, 0x6d48b4b6u, 0x0b802e67u, 0xa9b7a818u,
    0x47ef21c9u, 0xe6269b7au, 0x845e152bu, 0x22958edcu, 0xc0cd088du, 0x5f04823eu, 0xfd3bfbefu, 0x9b7375a0u,
    0x39aaef51u, 0xd7e26902u, 0x7619e2b3u, 0x14515c64u, 0xb288d615u, 0x50c04fc6u, 0xeef7c977u, 0x8d2f4328u,
    0x2b66bcd9u, 0xc99e368au, 0x67d5b03bu, 0x060d29ecu, 0xa444a39du, 0x427c1d4eu, 0xe0b396ffu, 0x7eeb10b0u,
    0x1d228a61u, 0xbb5a0412u, 0x59917dc3u, 0xf7c8f774u, 0x96007125u, 0x3437ead6u, 0xd26f6487u, 0x70a6de38u,
    0x0ede57e9u, 0xad15d19au, 0x4b4d4b4bu, 0xe984c4fcu, 0x87bc3eadu, 0x25f3b85eu, 0xc42b320fu, 0x6262abc0u,
    0x009a2571u, 0x9ed19f22u, 0x3d0918d3u, 0xdb409284u, 0x79780c35u, 0x17af85e6u, 0xb5e6ff97u, 0x541e7948u,
    0xf255f2f9u, 0x908d6caau, 0x2ec4e65bu, 0xccfc600cu, 0x6b33d9bdu, 0x096b536eu, 0xa7a2cd1fu, 0x45da46d0u,
    0xe411c081u, 0x82493a32u, 0x2080b3e3u, 0xbeb82d94u, 0x5cefa745u, 0xfb2720f6u, 0x995e9aa7u, 0x37961458u,
    0xd5cd8e09u, 0x740507bau, 0x123c816bu, 0xb073fb1cu, 0x4eab74cdu, 0xece2ee7eu, 0x8b1a682fu, 0x2951e1e0u,
    0xc7895b91u, 0x65c0d542u, 0x03f84ef3u, 0xa22fc8a4u, 0x40674255u, 0xde9ebc06u, 0x7cd635b7u, 0x1b0daf68u,
};

static const uint32_t bshim_296_tab2[96] = {
    0xe6269b7au, 0x845e152bu, 0x22958edcu, 0xc0cd088du, 0x5f04823eu, 0xfd3bfbefu, 0x9b7375a0u, 0x39aaef51u,
    0xd7e26902u, 0x7619e2b3u, 0x14515c64u, 0xb288d615u, 0x50c04fc6u, 0xeef7c977u, 0x8d2f4328u, 0x2b66bcd9u,
    0xc99e368au, 0x67d5b03bu, 0x060d29ecu, 0xa444a39du, 0x427c1d4eu, 0xe0b396ffu, 0x7eeb10b0u, 0x1d228a61u,
    0xbb5a0412u, 0x59917dc3u, 0xf7c8f774u, 0x96007125u, 0x3437ead6u, 0xd26f6487u, 0x70a6de38u, 0x0ede57e9u,
    0xad15d19au, 0x4b4d4b4bu, 0xe984c4fcu, 0x87bc3eadu, 0x25f3b85eu, 0xc42b320fu, 0x6262abc0u, 0x009a2571u,
    0x9ed19f22u, 0x3d0918d3u, 0xdb409284u, 0x79780c35u, 0x17af85e6u, 0xb5e6ff97u, 0x541e7948u, 0xf255f2f9u,
    0x908d6caau, 0x2ec4e65bu, 0xccfc600cu, 0x6b33d9bdu, 0x096b536eu, 0xa7a2cd1fu, 0x45da46d0u, 0xe411c081u,
    0x82493a32u, 0x2080b3e3u, 0xbeb82d94u, 0x5cefa745u, 0xfb2720f6u, 0x995e9aa7u, 0x37961458u, 0xd5cd8e09u,
    0x740507bau, 0x123c816bu, 0xb073fb1cu, 0x4eab74cdu, 0xece2ee7eu, 0x8b1a682fu, 0x2951e1e0u, 0xc7895b91u,
    0x65c0d542u, 0x03f84ef3u, 0xa22fc8a4u, 0x40674255u, 0xde9ebc06u, 0x7cd635b7u, 0x1b0daf68u, 0xb9452919u,
    0x577ca2cau, 0xf5b41c7bu, 0x93eb962cu, 0x32230fddu, 0xd05a898eu, 0x6e92033fu, 0x0cc97cf0u, 0xab00f6a1u,
    0x49387052u, 0xe76fea03u, 0x85a763b4u, 0x23dedd65u, 0xc2165716u, 0x604dd0c7u, 0xfe854a78u, 0x9cbcc429u,
};

static const uint32_t bshim_296_tab3[96] = {
    0x67d5b03bu, 0x060d29ecu, 0xa444a39du, 0x427c1d4eu, 0xe0b396ffu, 0x7eeb10b0u, 0x1d228a61u, 0xbb5a0412u,
    0x59917dc3u, 0xf7c8f774u, 0x96007125u, 0x3437ead6u, 0xd26f6487u, 0x70a6de38u, 0x0ede57e9u, 0xad15d19au,
    0x4b4d4b4bu, 0xe984c4fcu, 0x87bc3eadu, 0x25f3b85eu, 0xc42b320fu, 0x6262abc0u, 0x009a2571u, 0x9ed19f22u,
    0x3d0918d3u, 0xdb409284u, 0x79780c35u, 0x17af85e6u, 0xb5e6ff97u, 0x541e7948u, 0xf255f2f9u, 0x908d6caau,
    0x2ec4e65bu, 0xccfc600cu, 0x6b33d9bdu, 0x096b536eu, 0xa7a2cd1fu, 0x45da46d0u, 0xe411c081u, 0x82493a32u,
    0x2080b3e3u, 0xbeb82d94u, 0x5cefa745u, 0xfb2720f6u, 0x995e9aa7u, 0x37961458u, 0xd5cd8e09u, 0x740507bau,
    0x123c816bu, 0xb073fb1cu, 0x4eab74cdu, 0xece2ee7eu, 0x8b1a682fu, 0x2951e1e0u, 0xc7895b91u, 0x65c0d542u,
    0x03f84ef3u, 0xa22fc8a4u, 0x40674255u, 0xde9ebc06u, 0x7cd635b7u, 0x1b0daf68u, 0xb9452919u, 0x577ca2cau,
    0xf5b41c7bu, 0x93eb962cu, 0x32230fddu, 0xd05a898eu, 0x6e92033fu, 0x0cc97cf0u, 0xab00f6a1u, 0x49387052u,
    0xe76fea03u, 0x85a763b4u, 0x23dedd65u, 0xc2165716u, 0x604dd0c7u, 0xfe854a78u, 0x9cbcc429u, 0x3af43ddau,
    0xd92bb78bu, 0x7763313cu, 0x159aaaedu, 0xb3d2249eu, 0x52099e4fu, 0xf0411800u, 0x8e7891b1u, 0x2cb00b62u,
    0xcae78513u, 0x691efec4u, 0x07567875u, 0xa58df226u, 0x43c56bd7u, 0xe1fce588u, 0x80345f39u, 0x1e6bd8eau,
};

static const uint32_t bshim_296_tab4[96] = {
    0xe984c4fcu, 0x87bc3eadu, 0x25f3b85eu, 0xc42b320fu, 0x6262abc0u, 0x009a2571u, 0x9ed19f22u, 0x3d0918d3u,
    0xdb409284u, 0x79780c35u, 0x17af85e6u, 0xb5e6ff97u, 0x541e7948u, 0xf255f2f9u, 0x908d6caau, 0x2ec4e65bu,
    0xccfc600cu, 0x6b33d9bdu, 0x096b536eu, 0xa7a2cd1fu, 0x45da46d0u, 0xe411c081u, 0x82493a32u, 0x2080b3e3u,
    0xbeb82d94u, 0x5cefa745u, 0xfb2720f6u, 0x995e9aa7u, 0x37961458u, 0xd5cd8e09u, 0x740507bau, 0x123c816bu,
    0xb073fb1cu, 0x4eab74cdu, 0xece2ee7eu, 0x8b1a682fu, 0x2951e1e0u, 0xc7895b91u, 0x65c0d542u, 0x03f84ef3u,
    0xa22fc8a4u, 0x40674255u, 0xde9ebc06u, 0x7cd635b7u, 0x1b0daf68u, 0xb9452919u, 0x577ca2cau, 0xf5b41c7bu,
    0x93eb962cu, 0x32230fddu, 0xd05a898eu, 0x6e92033fu, 0x0cc97cf0u, 0xab00f6a1u, 0x49387052u, 0xe76fea03u,
    0x85a763b4u, 0x23dedd65u, 0xc2165716u, 0x604dd0c7u, 0xfe854a78u, 0x9cbcc429u, 0x3af43ddau, 0xd92bb78bu,
    0x7763313cu, 0x159aaaedu, 0xb3d2249eu, 0x52099e4fu, 0xf0411800u, 0x8e7891b1u, 0x2cb00b62u, 0xcae78513u,
    0x691efec4u, 0x07567875u, 0xa58df226u, 0x43c56bd7u, 0xe1fce588u, 0x80345f39u, 0x1e6bd8eau, 0xbca3529bu,
    0x5adacc4cu, 0xf91245fdu, 0x9749bfaeu, 0x3581395fu, 0xd3b8b310u, 0x71f02cc1u, 0x1027a672u, 0xae5f2023u,
    0x4c9699d4u, 0xeace1385u, 0x89058d36u, 0x273d06e7u, 0xc5748098u, 0x63abfa49u, 0x01e373fau, 0xa01aedabu,
};

static const uint32_t bshim_296_tab5[96] = {
    0x6b33d9bdu, 0x096b536eu, 0xa7a2cd1fu, 0x45da46d0u, 0xe411c081u, 0x82493a32u, 0x2080b3e3u, 0xbeb82d94u,
    0x5cefa745u, 0xfb2720f6u, 0x995e9aa7u, 0x37961458u, 0xd5cd8e09u, 0x740507bau, 0x123c816bu, 0xb073fb1cu,
    0x4eab74cdu, 0xece2ee7eu, 0x8b1a682fu, 0x2951e1e0u, 0xc7895b91u, 0x65c0d542u, 0x03f84ef3u, 0xa22fc8a4u,
    0x40674255u, 0xde9ebc06u, 0x7cd635b7u, 0x1b0daf68u, 0xb9452919u, 0x577ca2cau, 0xf5b41c7bu, 0x93eb962cu,
    0x32230fddu, 0xd05a898eu, 0x6e92033fu, 0x0cc97cf0u, 0xab00f6a1u, 0x49387052u, 0xe76fea03u, 0x85a763b4u,
    0x23dedd65u, 0xc2165716u, 0x604dd0c7u, 0xfe854a78u, 0x9cbcc429u, 0x3af43ddau, 0xd92bb78bu, 0x7763313cu,
    0x159aaaedu, 0xb3d2249eu, 0x52099e4fu, 0xf0411800u, 0x8e7891b1u, 0x2cb00b62u, 0xcae78513u, 0x691efec4u,
    0x07567875u, 0xa58df226u, 0x43c56bd7u, 0xe1fce588u, 0x80345f39u, 0x1e6bd8eau, 0xbca3529bu, 0x5adacc4cu,
    0xf91245fdu, 0x9749bfaeu, 0x3581395fu, 0xd3b8b310u, 0x71f02cc1u, 0x1027a672u, 0xae5f2023u, 0x4c9699d4u,
    0xeace1385u, 0x89058d36u, 0x273d06e7u, 0xc5748098u, 0x63abfa49u, 0x01e373fau, 0xa01aedabu, 0x3e52675cu,
    0xdc89e10du, 0x7ac15abeu, 0x18f8d46fu, 0xb7304e20u, 0x5567c7d1u, 0xf39f4182u, 0x91d6bb33u, 0x300e34e4u,
    0xce45ae95u, 0x6c7d2846u, 0x0ab4a1f7u, 0xa8ec1ba8u, 0x47239559u, 0xe55b0f0au, 0x839288bbu, 0x21ca026cu,
};

static const uint32_t bshim_296_tab6[96] = {
    0xece2ee7eu, 0x8b1a682fu, 0x2951e1e0u, 0xc7895b91u, 0x65c0d542u, 0x03f84ef3u, 0xa22fc8a4u, 0x40674255u,
    0xde9ebc06u, 0x7cd635b7u, 0x1b0daf68u, 0xb9452919u, 0x577ca2cau, 0xf5b41c7bu, 0x93eb962cu, 0x32230fddu,
    0xd05a898eu, 0x6e92033fu, 0x0cc97cf0u, 0xab00f6a1u, 0x49387052u, 0xe76fea03u, 0x85a763b4u, 0x23dedd65u,
    0xc2165716u, 0x604dd0c7u, 0xfe854a78u, 0x9cbcc429u, 0x3af43ddau, 0xd92bb78bu, 0x7763313cu, 0x159aaaedu,
    0xb3d2249eu, 0x52099e4fu, 0xf0411800u, 0x8e7891b1u, 0x2cb00b62u, 0xcae78513u, 0x691efec4u, 0x07567875u,
    0xa58df226u, 0x43c56bd7u, 0xe1fce588u, 0x80345f39u, 0x1e6bd8eau, 0xbca3529bu, 0x5adacc4cu, 0xf91245fdu,
    0x9749bfaeu, 0x3581395fu, 0xd3b8b310u, 0x71f02cc1u, 0x1027a672u, 0xae5f2023u, 0x4c9699d4u, 0xeace1385u,
    0x89058d36u, 0x273d06e7u, 0xc5748098u, 0x63abfa49u, 0x01e373fau, 0xa01aedabu, 0x3e52675cu, 0xdc89e10du,
    0x7ac15abeu, 0x18f8d46fu, 0xb7304e20u, 0x5567c7d1u, 0xf39f4182u, 0x91d6bb33u, 0x300e34e4u, 0xce45ae95u,
    0x6c7d2846u, 0x0ab4a1f7u, 0xa8ec1ba8u, 0x47239559u, 0xe55b0f0au, 0x839288bbu, 0x21ca026cu, 0xc0017c1du,
    0x5e38f5ceu, 0xfc706f7fu, 0x9aa7e930u, 0x38df62e1u, 0xd716dc92u, 0x754e5643u, 0x1385cff4u, 0xb1bd49a5u,
    0x4ff4c356u, 0xee2c3d07u, 0x8c63b6b8u, 0x2a9b3069u, 0xc8d2aa1au, 0x670a23cbu, 0x05419d7cu, 0xa379172du,
};

static const uint32_t bshim_296_tab7[96] = {
    0x6e92033fu, 0x0cc97cf0u, 0xab00f6a1u, 0x49387052u, 0xe76fea03u, 0x85a763b4u, 0x23dedd65u, 0xc2165716u,
    0x604dd0c7u, 0xfe854a78u, 0x9cbcc429u, 0x3af43ddau, 0xd92bb78bu, 0x7763313cu, 0x159aaaedu, 0xb3d2249eu,
    0x52099e4fu, 0xf0411800u, 0x8e7891b1u, 0x2cb00b62u, 0xcae78513u, 0x691efec4u, 0x07567875u, 0xa58df226u,
    0x43c56bd7u, 0xe1fce588u, 0x80345f39u, 0x1e6bd8eau, 0xbca3529bu, 0x5adacc4cu, 0xf91245fdu, 0x9749bfaeu,
    0x3581395fu, 0xd3b8b310u, 0x71f02cc1u, 0x1027a672u, 0xae5f2023u, 0x4c9699d4u, 0xeace1385u, 0x89058d36u,
    0x273d06e7u, 0xc5748098u, 0x63abfa49u, 0x01e373fau, 0xa01aedabu, 0x3e52675cu, 0xdc89e10du, 0x7ac15abeu,
    0x18f8d46fu, 0xb7304e20u, 0x5567c7d1u, 0xf39f4182u, 0x91d6bb33u, 0x300e34e4u, 0xce45ae95u, 0x6c7d2846u,
    0x0ab4a1f7u, 0xa8ec1ba8u, 0x47239559u, 0xe55b0f0au, 0x839288bbu, 0x21ca026cu, 0xc0017c1du, 0x5e38f5ceu,
    0xfc706f7fu, 0x9aa7e930u, 0x38df62e1u, 0xd716dc92u, 0x754e5643u, 0x1385cff4u, 0xb1bd49a5u, 0x4ff4c356u,
    0xee2c3d07u, 0x8c63b6b8u, 0x2a9b3069u, 0xc8d2aa1au, 0x670a23cbu, 0x05419d7cu, 0xa379172du, 0x41b090deu,
    0xdfe80a8fu, 0x7e1f8440u, 0x1c56fdf1u, 0xba8e77a2u, 0x58c5f153u, 0xf6fd6b04u, 0x9534e4b5u, 0x336c5e66u,
    0xd1a3d817u, 0x6fdb51c8u, 0x0e12cb79u, 0xac4a452au, 0x4a81bedbu, 0xe8b9388cu, 0x86f0b23du, 0x25282beeu,
};

struct bshim_296_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_296_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8807425u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e6c3e9cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x04580913u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a43d38au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x102f9e01u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x961b6878u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c0732efu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa1f2fd66u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_296_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27dec7ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_296_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_296_reset(struct bshim_296_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0023c458u;
    return 0;
}

