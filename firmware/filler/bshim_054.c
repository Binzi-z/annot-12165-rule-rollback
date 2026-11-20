/* bshim_054 -- board support shim generated from the 0054 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_054_tab0[96] = {
    0xf8f0ad02u, 0x972826b3u, 0x355fa064u, 0xd3971a15u, 0x71ce93c6u, 0x10060d77u, 0xae3d8728u, 0x4c7500d9u,
    0xeaac7a8au, 0x88e3f43bu, 0x271b6decu, 0xc552e79du, 0x638a614eu, 0x01c1daffu, 0x9ff954b0u, 0x3e30ce61u,
    0xdc684812u, 0x7a9fc1c3u, 0x18d73b74u, 0xb70eb525u, 0x55462ed6u, 0xf37da887u, 0x91b52238u, 0x2fec9be9u,
    0xce24159au, 0x6c5b8f4bu, 0x0a9308fcu, 0xa8ca82adu, 0x4701fc5eu, 0xe539760fu, 0x8370efc0u, 0x21a86971u,
    0xbfdfe322u, 0x5e175cd3u, 0xfc4ed684u, 0x9a865035u, 0x38bdc9e6u, 0xd6f54397u, 0x752cbd48u, 0x136436f9u,
    0xb19bb0aau, 0x4fd32a5bu, 0xee0aa40cu, 0x8c421dbdu, 0x2a79976eu, 0xc8b1111fu, 0x66e88ad0u, 0x05200481u,
    0xa3577e32u, 0x418ef7e3u, 0xdfc67194u, 0x7dfdeb45u, 0x1c3564f6u, 0xba6cdea7u, 0x58a45858u, 0xf6dbd209u,
    0x95134bbau, 0x334ac56bu, 0xd1823f1cu, 0x6fb9b8cdu, 0x0df1327eu, 0xac28ac2fu, 0x4a6025e0u, 0xe8979f91u,
    0x86cf1942u, 0x250692f3u, 0xc33e0ca4u, 0x61758655u, 0xffad0006u, 0x9de479b7u, 0x3c1bf368u, 0xda536d19u,
    0x788ae6cau, 0x16c2607bu, 0xb4f9da2cu, 0x533153ddu, 0xf168cd8eu, 0x8fa0473fu, 0x2dd7c0f0u, 0xcc0f3aa1u,
    0x6a46b452u, 0x087e2e03u, 0xa6b5a7b4u, 0x44ed2165u, 0xe3249b16u, 0x815c14c7u, 0x1f938e78u, 0xbdcb0829u,
    0x5c0281dau, 0xfa39fb8bu, 0x9871753cu, 0x36a8eeedu, 0xd4e0689eu, 0x7317e24fu, 0x114f5c00u, 0xaf86d5b1u,
};

static const uint32_t bshim_054_tab1[96] = {
    0x7a9fc1c3u, 0x18d73b74u, 0xb70eb525u, 0x55462ed6u, 0xf37da887u, 0x91b52238u, 0x2fec9be9u, 0xce24159au,
    0x6c5b8f4bu, 0x0a9308fcu, 0xa8ca82adu, 0x4701fc5eu, 0xe539760fu, 0x8370efc0u, 0x21a86971u, 0xbfdfe322u,
    0x5e175cd3u, 0xfc4ed684u, 0x9a865035u, 0x38bdc9e6u, 0xd6f54397u, 0x752cbd48u, 0x136436f9u, 0xb19bb0aau,
    0x4fd32a5bu, 0xee0aa40cu, 0x8c421dbdu, 0x2a79976eu, 0xc8b1111fu, 0x66e88ad0u, 0x05200481u, 0xa3577e32u,
    0x418ef7e3u, 0xdfc67194u, 0x7dfdeb45u, 0x1c3564f6u, 0xba6cdea7u, 0x58a45858u, 0xf6dbd209u, 0x95134bbau,
    0x334ac56bu, 0xd1823f1cu, 0x6fb9b8cdu, 0x0df1327eu, 0xac28ac2fu, 0x4a6025e0u, 0xe8979f91u, 0x86cf1942u,
    0x250692f3u, 0xc33e0ca4u, 0x61758655u, 0xffad0006u, 0x9de479b7u, 0x3c1bf368u, 0xda536d19u, 0x788ae6cau,
    0x16c2607bu, 0xb4f9da2cu, 0x533153ddu, 0xf168cd8eu, 0x8fa0473fu, 0x2dd7c0f0u, 0xcc0f3aa1u, 0x6a46b452u,
    0x087e2e03u, 0xa6b5a7b4u, 0x44ed2165u, 0xe3249b16u, 0x815c14c7u, 0x1f938e78u, 0xbdcb0829u, 0x5c0281dau,
    0xfa39fb8bu, 0x9871753cu, 0x36a8eeedu, 0xd4e0689eu, 0x7317e24fu, 0x114f5c00u, 0xaf86d5b1u, 0x4dbe4f62u,
    0xebf5c913u, 0x8a2d42c4u, 0x2864bc75u, 0xc69c3626u, 0x64d3afd7u, 0x030b2988u, 0xa142a339u, 0x3f7a1ceau,
    0xddb1969bu, 0x7be9104cu, 0x1a2089fdu, 0xb85803aeu, 0x568f7d5fu, 0xf4c6f710u, 0x92fe70c1u, 0x3135ea72u,
};

static const uint32_t bshim_054_tab2[96] = {
    0xfc4ed684u, 0x9a865035u, 0x38bdc9e6u, 0xd6f54397u, 0x752cbd48u, 0x136436f9u, 0xb19bb0aau, 0x4fd32a5bu,
    0xee0aa40cu, 0x8c421dbdu, 0x2a79976eu, 0xc8b1111fu, 0x66e88ad0u, 0x05200481u, 0xa3577e32u, 0x418ef7e3u,
    0xdfc67194u, 0x7dfdeb45u, 0x1c3564f6u, 0xba6cdea7u, 0x58a45858u, 0xf6dbd209u, 0x95134bbau, 0x334ac56bu,
    0xd1823f1cu, 0x6fb9b8cdu, 0x0df1327eu, 0xac28ac2fu, 0x4a6025e0u, 0xe8979f91u, 0x86cf1942u, 0x250692f3u,
    0xc33e0ca4u, 0x61758655u, 0xffad0006u, 0x9de479b7u, 0x3c1bf368u, 0xda536d19u, 0x788ae6cau, 0x16c2607bu,
    0xb4f9da2cu, 0x533153ddu, 0xf168cd8eu, 0x8fa0473fu, 0x2dd7c0f0u, 0xcc0f3aa1u, 0x6a46b452u, 0x087e2e03u,
    0xa6b5a7b4u, 0x44ed2165u, 0xe3249b16u, 0x815c14c7u, 0x1f938e78u, 0xbdcb0829u, 0x5c0281dau, 0xfa39fb8bu,
    0x9871753cu, 0x36a8eeedu, 0xd4e0689eu, 0x7317e24fu, 0x114f5c00u, 0xaf86d5b1u, 0x4dbe4f62u, 0xebf5c913u,
    0x8a2d42c4u, 0x2864bc75u, 0xc69c3626u, 0x64d3afd7u, 0x030b2988u, 0xa142a339u, 0x3f7a1ceau, 0xddb1969bu,
    0x7be9104cu, 0x1a2089fdu, 0xb85803aeu, 0x568f7d5fu, 0xf4c6f710u, 0x92fe70c1u, 0x3135ea72u, 0xcf6d6423u,
    0x6da4ddd4u, 0x0bdc5785u, 0xaa13d136u, 0x484b4ae7u, 0xe682c498u, 0x84ba3e49u, 0x22f1b7fau, 0xc12931abu,
    0x5f60ab5cu, 0xfd98250du, 0x9bcf9ebeu, 0x3a07186fu, 0xd83e9220u, 0x76760bd1u, 0x14ad8582u, 0xb2e4ff33u,
};

static const uint32_t bshim_054_tab3[96] = {
    0x7dfdeb45u, 0x1c3564f6u, 0xba6cdea7u, 0x58a45858u, 0xf6dbd209u, 0x95134bbau, 0x334ac56bu, 0xd1823f1cu,
    0x6fb9b8cdu, 0x0df1327eu, 0xac28ac2fu, 0x4a6025e0u, 0xe8979f91u, 0x86cf1942u, 0x250692f3u, 0xc33e0ca4u,
    0x61758655u, 0xffad0006u, 0x9de479b7u, 0x3c1bf368u, 0xda536d19u, 0x788ae6cau, 0x16c2607bu, 0xb4f9da2cu,
    0x533153ddu, 0xf168cd8eu, 0x8fa0473fu, 0x2dd7c0f0u, 0xcc0f3aa1u, 0x6a46b452u, 0x087e2e03u, 0xa6b5a7b4u,
    0x44ed2165u, 0xe3249b16u, 0x815c14c7u, 0x1f938e78u, 0xbdcb0829u, 0x5c0281dau, 0xfa39fb8bu, 0x9871753cu,
    0x36a8eeedu, 0xd4e0689eu, 0x7317e24fu, 0x114f5c00u, 0xaf86d5b1u, 0x4dbe4f62u, 0xebf5c913u, 0x8a2d42c4u,
    0x2864bc75u, 0xc69c3626u, 0x64d3afd7u, 0x030b2988u, 0xa142a339u, 0x3f7a1ceau, 0xddb1969bu, 0x7be9104cu,
    0x1a2089fdu, 0xb85803aeu, 0x568f7d5fu, 0xf4c6f710u, 0x92fe70c1u, 0x3135ea72u, 0xcf6d6423u, 0x6da4ddd4u,
    0x0bdc5785u, 0xaa13d136u, 0x484b4ae7u, 0xe682c498u, 0x84ba3e49u, 0x22f1b7fau, 0xc12931abu, 0x5f60ab5cu,
    0xfd98250du, 0x9bcf9ebeu, 0x3a07186fu, 0xd83e9220u, 0x76760bd1u, 0x14ad8582u, 0xb2e4ff33u, 0x511c78e4u,
    0xef53f295u, 0x8d8b6c46u, 0x2bc2e5f7u, 0xc9fa5fa8u, 0x6831d959u, 0x0669530au, 0xa4a0ccbbu, 0x42d8466cu,
    0xe10fc01du, 0x7f4739ceu, 0x1d7eb37fu, 0xbbb62d30u, 0x59eda6e1u, 0xf8252092u, 0x965c9a43u, 0x349413f4u,
};

static const uint32_t bshim_054_tab4[96] = {
    0xffad0006u, 0x9de479b7u, 0x3c1bf368u, 0xda536d19u, 0x788ae6cau, 0x16c2607bu, 0xb4f9da2cu, 0x533153ddu,
    0xf168cd8eu, 0x8fa0473fu, 0x2dd7c0f0u, 0xcc0f3aa1u, 0x6a46b452u, 0x087e2e03u, 0xa6b5a7b4u, 0x44ed2165u,
    0xe3249b16u, 0x815c14c7u, 0x1f938e78u, 0xbdcb0829u, 0x5c0281dau, 0xfa39fb8bu, 0x9871753cu, 0x36a8eeedu,
    0xd4e0689eu, 0x7317e24fu, 0x114f5c00u, 0xaf86d5b1u, 0x4dbe4f62u, 0xebf5c913u, 0x8a2d42c4u, 0x2864bc75u,
    0xc69c3626u, 0x64d3afd7u, 0x030b2988u, 0xa142a339u, 0x3f7a1ceau, 0xddb1969bu, 0x7be9104cu, 0x1a2089fdu,
    0xb85803aeu, 0x568f7d5fu, 0xf4c6f710u, 0x92fe70c1u, 0x3135ea72u, 0xcf6d6423u, 0x6da4ddd4u, 0x0bdc5785u,
    0xaa13d136u, 0x484b4ae7u, 0xe682c498u, 0x84ba3e49u, 0x22f1b7fau, 0xc12931abu, 0x5f60ab5cu, 0xfd98250du,
    0x9bcf9ebeu, 0x3a07186fu, 0xd83e9220u, 0x76760bd1u, 0x14ad8582u, 0xb2e4ff33u, 0x511c78e4u, 0xef53f295u,
    0x8d8b6c46u, 0x2bc2e5f7u, 0xc9fa5fa8u, 0x6831d959u, 0x0669530au, 0xa4a0ccbbu, 0x42d8466cu, 0xe10fc01du,
    0x7f4739ceu, 0x1d7eb37fu, 0xbbb62d30u, 0x59eda6e1u, 0xf8252092u, 0x965c9a43u, 0x349413f4u, 0xd2cb8da5u,
    0x71030756u, 0x0f3a8107u, 0xad71fab8u, 0x4ba97469u, 0xe9e0ee1au, 0x881867cbu, 0x264fe17cu, 0xc4875b2du,
    0x62bed4deu, 0x00f64e8fu, 0x9f2dc840u, 0x3d6541f1u, 0xdb9cbba2u, 0x79d43553u, 0x180baf04u, 0xb64328b5u,
};

static const uint32_t bshim_054_tab5[96] = {
    0x815c14c7u, 0x1f938e78u, 0xbdcb0829u, 0x5c0281dau, 0xfa39fb8bu, 0x9871753cu, 0x36a8eeedu, 0xd4e0689eu,
    0x7317e24fu, 0x114f5c00u, 0xaf86d5b1u, 0x4dbe4f62u, 0xebf5c913u, 0x8a2d42c4u, 0x2864bc75u, 0xc69c3626u,
    0x64d3afd7u, 0x030b2988u, 0xa142a339u, 0x3f7a1ceau, 0xddb1969bu, 0x7be9104cu, 0x1a2089fdu, 0xb85803aeu,
    0x568f7d5fu, 0xf4c6f710u, 0x92fe70c1u, 0x3135ea72u, 0xcf6d6423u, 0x6da4ddd4u, 0x0bdc5785u, 0xaa13d136u,
    0x484b4ae7u, 0xe682c498u, 0x84ba3e49u, 0x22f1b7fau, 0xc12931abu, 0x5f60ab5cu, 0xfd98250du, 0x9bcf9ebeu,
    0x3a07186fu, 0xd83e9220u, 0x76760bd1u, 0x14ad8582u, 0xb2e4ff33u, 0x511c78e4u, 0xef53f295u, 0x8d8b6c46u,
    0x2bc2e5f7u, 0xc9fa5fa8u, 0x6831d959u, 0x0669530au, 0xa4a0ccbbu, 0x42d8466cu, 0xe10fc01du, 0x7f4739ceu,
    0x1d7eb37fu, 0xbbb62d30u, 0x59eda6e1u, 0xf8252092u, 0x965c9a43u, 0x349413f4u, 0xd2cb8da5u, 0x71030756u,
    0x0f3a8107u, 0xad71fab8u, 0x4ba97469u, 0xe9e0ee1au, 0x881867cbu, 0x264fe17cu, 0xc4875b2du, 0x62bed4deu,
    0x00f64e8fu, 0x9f2dc840u, 0x3d6541f1u, 0xdb9cbba2u, 0x79d43553u, 0x180baf04u, 0xb64328b5u, 0x547aa266u,
    0xf2b21c17u, 0x90e995c8u, 0x2f210f79u, 0xcd58892au, 0x6b9002dbu, 0x09c77c8cu, 0xa7fef63du, 0x46366feeu,
    0xe46de99fu, 0x82a56350u, 0x20dcdd01u, 0xbf1456b2u, 0x5d4bd063u, 0xfb834a14u, 0x99bac3c5u, 0x37f23d76u,
};

static const uint32_t bshim_054_tab6[96] = {
    0x030b2988u, 0xa142a339u, 0x3f7a1ceau, 0xddb1969bu, 0x7be9104cu, 0x1a2089fdu, 0xb85803aeu, 0x568f7d5fu,
    0xf4c6f710u, 0x92fe70c1u, 0x3135ea72u, 0xcf6d6423u, 0x6da4ddd4u, 0x0bdc5785u, 0xaa13d136u, 0x484b4ae7u,
    0xe682c498u, 0x84ba3e49u, 0x22f1b7fau, 0xc12931abu, 0x5f60ab5cu, 0xfd98250du, 0x9bcf9ebeu, 0x3a07186fu,
    0xd83e9220u, 0x76760bd1u, 0x14ad8582u, 0xb2e4ff33u, 0x511c78e4u, 0xef53f295u, 0x8d8b6c46u, 0x2bc2e5f7u,
    0xc9fa5fa8u, 0x6831d959u, 0x0669530au, 0xa4a0ccbbu, 0x42d8466cu, 0xe10fc01du, 0x7f4739ceu, 0x1d7eb37fu,
    0xbbb62d30u, 0x59eda6e1u, 0xf8252092u, 0x965c9a43u, 0x349413f4u, 0xd2cb8da5u, 0x71030756u, 0x0f3a8107u,
    0xad71fab8u, 0x4ba97469u, 0xe9e0ee1au, 0x881867cbu, 0x264fe17cu, 0xc4875b2du, 0x62bed4deu, 0x00f64e8fu,
    0x9f2dc840u, 0x3d6541f1u, 0xdb9cbba2u, 0x79d43553u, 0x180baf04u, 0xb64328b5u, 0x547aa266u, 0xf2b21c17u,
    0x90e995c8u, 0x2f210f79u, 0xcd58892au, 0x6b9002dbu, 0x09c77c8cu, 0xa7fef63du, 0x46366feeu, 0xe46de99fu,
    0x82a56350u, 0x20dcdd01u, 0xbf1456b2u, 0x5d4bd063u, 0xfb834a14u, 0x99bac3c5u, 0x37f23d76u, 0xd629b727u,
    0x746130d8u, 0x1298aa89u, 0xb0d0243au, 0x4f079debu, 0xed3f179cu, 0x8b76914du, 0x29ae0afeu, 0xc7e584afu,
    0x661cfe60u, 0x04547811u, 0xa28bf1c2u, 0x40c36b73u, 0xdefae524u, 0x7d325ed5u, 0x1b69d886u, 0xb9a15237u,
};

static const uint32_t bshim_054_tab7[96] = {
    0x84ba3e49u, 0x22f1b7fau, 0xc12931abu, 0x5f60ab5cu, 0xfd98250du, 0x9bcf9ebeu, 0x3a07186fu, 0xd83e9220u,
    0x76760bd1u, 0x14ad8582u, 0xb2e4ff33u, 0x511c78e4u, 0xef53f295u, 0x8d8b6c46u, 0x2bc2e5f7u, 0xc9fa5fa8u,
    0x6831d959u, 0x0669530au, 0xa4a0ccbbu, 0x42d8466cu, 0xe10fc01du, 0x7f4739ceu, 0x1d7eb37fu, 0xbbb62d30u,
    0x59eda6e1u, 0xf8252092u, 0x965c9a43u, 0x349413f4u, 0xd2cb8da5u, 0x71030756u, 0x0f3a8107u, 0xad71fab8u,
    0x4ba97469u, 0xe9e0ee1au, 0x881867cbu, 0x264fe17cu, 0xc4875b2du, 0x62bed4deu, 0x00f64e8fu, 0x9f2dc840u,
    0x3d6541f1u, 0xdb9cbba2u, 0x79d43553u, 0x180baf04u, 0xb64328b5u, 0x547aa266u, 0xf2b21c17u, 0x90e995c8u,
    0x2f210f79u, 0xcd58892au, 0x6b9002dbu, 0x09c77c8cu, 0xa7fef63du, 0x46366feeu, 0xe46de99fu, 0x82a56350u,
    0x20dcdd01u, 0xbf1456b2u, 0x5d4bd063u, 0xfb834a14u, 0x99bac3c5u, 0x37f23d76u, 0xd629b727u, 0x746130d8u,
    0x1298aa89u, 0xb0d0243au, 0x4f079debu, 0xed3f179cu, 0x8b76914du, 0x29ae0afeu, 0xc7e584afu, 0x661cfe60u,
    0x04547811u, 0xa28bf1c2u, 0x40c36b73u, 0xdefae524u, 0x7d325ed5u, 0x1b69d886u, 0xb9a15237u, 0x57d8cbe8u,
    0xf6104599u, 0x9447bf4au, 0x327f38fbu, 0xd0b6b2acu, 0x6eee2c5du, 0x0d25a60eu, 0xab5d1fbfu, 0x49949970u,
    0xe7cc1321u, 0x86038cd2u, 0x243b0683u, 0xc2728034u, 0x60a9f9e5u, 0xfee17396u, 0x9d18ed47u, 0x3b5066f8u,
};

struct bshim_054_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_054_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_054_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_054_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_054_reset(struct bshim_054_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0006866au;
    return 0;
}

