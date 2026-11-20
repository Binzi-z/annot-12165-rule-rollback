/* bshim_245 -- board support shim generated from the 0245 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_245_tab0[96] = {
    0xcd0195afu, 0x6b390f60u, 0x09708911u, 0xa7a802c2u, 0x45df7c73u, 0xe416f624u, 0x824e6fd5u, 0x2085e986u,
    0xbebd6337u, 0x5cf4dce8u, 0xfb2c5699u, 0x9963d04au, 0x379b49fbu, 0xd5d2c3acu, 0x740a3d5du, 0x1241b70eu,
    0xb07930bfu, 0x4eb0aa70u, 0xece82421u, 0x8b1f9dd2u, 0x29571783u, 0xc78e9134u, 0x65c60ae5u, 0x03fd8496u,
    0xa234fe47u, 0x406c77f8u, 0xdea3f1a9u, 0x7cdb6b5au, 0x1b12e50bu, 0xb94a5ebcu, 0x5781d86du, 0xf5b9521eu,
    0x93f0cbcfu, 0x32284580u, 0xd05fbf31u, 0x6e9738e2u, 0x0cceb293u, 0xab062c44u, 0x493da5f5u, 0xe7751fa6u,
    0x85ac9957u, 0x23e41308u, 0xc21b8cb9u, 0x6053066au, 0xfe8a801bu, 0x9cc1f9ccu, 0x3af9737du, 0xd930ed2eu,
    0x776866dfu, 0x159fe090u, 0xb3d75a41u, 0x520ed3f2u, 0xf0464da3u, 0x8e7dc754u, 0x2cb54105u, 0xcaecbab6u,
    0x69243467u, 0x075bae18u, 0xa59327c9u, 0x43caa17au, 0xe2021b2bu, 0x803994dcu, 0x1e710e8du, 0xbca8883eu,
    0x5ae001efu, 0xf9177ba0u, 0x974ef551u, 0x35866f02u, 0xd3bde8b3u, 0x71f56264u, 0x102cdc15u, 0xae6455c6u,
    0x4c9bcf77u, 0xead34928u, 0x890ac2d9u, 0x27423c8au, 0xc579b63bu, 0x63b12fecu, 0x01e8a99du, 0xa020234eu,
    0x3e579cffu, 0xdc8f16b0u, 0x7ac69061u, 0x18fe0a12u, 0xb73583c3u, 0x556cfd74u, 0xf3a47725u, 0x91dbf0d6u,
    0x30136a87u, 0xce4ae438u, 0x6c825de9u, 0x0ab9d79au, 0xa8f1514bu, 0x4728cafcu, 0xe56044adu, 0x8397be5eu,
};

static const uint32_t bshim_245_tab1[96] = {
    0x4eb0aa70u, 0xece82421u, 0x8b1f9dd2u, 0x29571783u, 0xc78e9134u, 0x65c60ae5u, 0x03fd8496u, 0xa234fe47u,
    0x406c77f8u, 0xdea3f1a9u, 0x7cdb6b5au, 0x1b12e50bu, 0xb94a5ebcu, 0x5781d86du, 0xf5b9521eu, 0x93f0cbcfu,
    0x32284580u, 0xd05fbf31u, 0x6e9738e2u, 0x0cceb293u, 0xab062c44u, 0x493da5f5u, 0xe7751fa6u, 0x85ac9957u,
    0x23e41308u, 0xc21b8cb9u, 0x6053066au, 0xfe8a801bu, 0x9cc1f9ccu, 0x3af9737du, 0xd930ed2eu, 0x776866dfu,
    0x159fe090u, 0xb3d75a41u, 0x520ed3f2u, 0xf0464da3u, 0x8e7dc754u, 0x2cb54105u, 0xcaecbab6u, 0x69243467u,
    0x075bae18u, 0xa59327c9u, 0x43caa17au, 0xe2021b2bu, 0x803994dcu, 0x1e710e8du, 0xbca8883eu, 0x5ae001efu,
    0xf9177ba0u, 0x974ef551u, 0x35866f02u, 0xd3bde8b3u, 0x71f56264u, 0x102cdc15u, 0xae6455c6u, 0x4c9bcf77u,
    0xead34928u, 0x890ac2d9u, 0x27423c8au, 0xc579b63bu, 0x63b12fecu, 0x01e8a99du, 0xa020234eu, 0x3e579cffu,
    0xdc8f16b0u, 0x7ac69061u, 0x18fe0a12u, 0xb73583c3u, 0x556cfd74u, 0xf3a47725u, 0x91dbf0d6u, 0x30136a87u,
    0xce4ae438u, 0x6c825de9u, 0x0ab9d79au, 0xa8f1514bu, 0x4728cafcu, 0xe56044adu, 0x8397be5eu, 0x21cf380fu,
    0xc006b1c0u, 0x5e3e2b71u, 0xfc75a522u, 0x9aad1ed3u, 0x38e49884u, 0xd71c1235u, 0x75538be6u, 0x138b0597u,
    0xb1c27f48u, 0x4ff9f8f9u, 0xee3172aau, 0x8c68ec5bu, 0x2aa0660cu, 0xc8d7dfbdu, 0x670f596eu, 0x0546d31fu,
};

static const uint32_t bshim_245_tab2[96] = {
    0xd05fbf31u, 0x6e9738e2u, 0x0cceb293u, 0xab062c44u, 0x493da5f5u, 0xe7751fa6u, 0x85ac9957u, 0x23e41308u,
    0xc21b8cb9u, 0x6053066au, 0xfe8a801bu, 0x9cc1f9ccu, 0x3af9737du, 0xd930ed2eu, 0x776866dfu, 0x159fe090u,
    0xb3d75a41u, 0x520ed3f2u, 0xf0464da3u, 0x8e7dc754u, 0x2cb54105u, 0xcaecbab6u, 0x69243467u, 0x075bae18u,
    0xa59327c9u, 0x43caa17au, 0xe2021b2bu, 0x803994dcu, 0x1e710e8du, 0xbca8883eu, 0x5ae001efu, 0xf9177ba0u,
    0x974ef551u, 0x35866f02u, 0xd3bde8b3u, 0x71f56264u, 0x102cdc15u, 0xae6455c6u, 0x4c9bcf77u, 0xead34928u,
    0x890ac2d9u, 0x27423c8au, 0xc579b63bu, 0x63b12fecu, 0x01e8a99du, 0xa020234eu, 0x3e579cffu, 0xdc8f16b0u,
    0x7ac69061u, 0x18fe0a12u, 0xb73583c3u, 0x556cfd74u, 0xf3a47725u, 0x91dbf0d6u, 0x30136a87u, 0xce4ae438u,
    0x6c825de9u, 0x0ab9d79au, 0xa8f1514bu, 0x4728cafcu, 0xe56044adu, 0x8397be5eu, 0x21cf380fu, 0xc006b1c0u,
    0x5e3e2b71u, 0xfc75a522u, 0x9aad1ed3u, 0x38e49884u, 0xd71c1235u, 0x75538be6u, 0x138b0597u, 0xb1c27f48u,
    0x4ff9f8f9u, 0xee3172aau, 0x8c68ec5bu, 0x2aa0660cu, 0xc8d7dfbdu, 0x670f596eu, 0x0546d31fu, 0xa37e4cd0u,
    0x41b5c681u, 0xdfed4032u, 0x7e24b9e3u, 0x1c5c3394u, 0xba93ad45u, 0x58cb26f6u, 0xf702a0a7u, 0x953a1a58u,
    0x33719409u, 0xd1a90dbau, 0x6fe0876bu, 0x0e18011cu, 0xac4f7acdu, 0x4a86f47eu, 0xe8be6e2fu, 0x86f5e7e0u,
};

static const uint32_t bshim_245_tab3[96] = {
    0x520ed3f2u, 0xf0464da3u, 0x8e7dc754u, 0x2cb54105u, 0xcaecbab6u, 0x69243467u, 0x075bae18u, 0xa59327c9u,
    0x43caa17au, 0xe2021b2bu, 0x803994dcu, 0x1e710e8du, 0xbca8883eu, 0x5ae001efu, 0xf9177ba0u, 0x974ef551u,
    0x35866f02u, 0xd3bde8b3u, 0x71f56264u, 0x102cdc15u, 0xae6455c6u, 0x4c9bcf77u, 0xead34928u, 0x890ac2d9u,
    0x27423c8au, 0xc579b63bu, 0x63b12fecu, 0x01e8a99du, 0xa020234eu, 0x3e579cffu, 0xdc8f16b0u, 0x7ac69061u,
    0x18fe0a12u, 0xb73583c3u, 0x556cfd74u, 0xf3a47725u, 0x91dbf0d6u, 0x30136a87u, 0xce4ae438u, 0x6c825de9u,
    0x0ab9d79au, 0xa8f1514bu, 0x4728cafcu, 0xe56044adu, 0x8397be5eu, 0x21cf380fu, 0xc006b1c0u, 0x5e3e2b71u,
    0xfc75a522u, 0x9aad1ed3u, 0x38e49884u, 0xd71c1235u, 0x75538be6u, 0x138b0597u, 0xb1c27f48u, 0x4ff9f8f9u,
    0xee3172aau, 0x8c68ec5bu, 0x2aa0660cu, 0xc8d7dfbdu, 0x670f596eu, 0x0546d31fu, 0xa37e4cd0u, 0x41b5c681u,
    0xdfed4032u, 0x7e24b9e3u, 0x1c5c3394u, 0xba93ad45u, 0x58cb26f6u, 0xf702a0a7u, 0x953a1a58u, 0x33719409u,
    0xd1a90dbau, 0x6fe0876bu, 0x0e18011cu, 0xac4f7acdu, 0x4a86f47eu, 0xe8be6e2fu, 0x86f5e7e0u, 0x252d6191u,
    0xc364db42u, 0x619c54f3u, 0xffd3cea4u, 0x9e0b4855u, 0x3c42c206u, 0xda7a3bb7u, 0x78b1b568u, 0x16e92f19u,
    0xb520a8cau, 0x5358227bu, 0xf18f9c2cu, 0x8fc715ddu, 0x2dfe8f8eu, 0xcc36093fu, 0x6a6d82f0u, 0x08a4fca1u,
};

static const uint32_t bshim_245_tab4[96] = {
    0xd3bde8b3u, 0x71f56264u, 0x102cdc15u, 0xae6455c6u, 0x4c9bcf77u, 0xead34928u, 0x890ac2d9u, 0x27423c8au,
    0xc579b63bu, 0x63b12fecu, 0x01e8a99du, 0xa020234eu, 0x3e579cffu, 0xdc8f16b0u, 0x7ac69061u, 0x18fe0a12u,
    0xb73583c3u, 0x556cfd74u, 0xf3a47725u, 0x91dbf0d6u, 0x30136a87u, 0xce4ae438u, 0x6c825de9u, 0x0ab9d79au,
    0xa8f1514bu, 0x4728cafcu, 0xe56044adu, 0x8397be5eu, 0x21cf380fu, 0xc006b1c0u, 0x5e3e2b71u, 0xfc75a522u,
    0x9aad1ed3u, 0x38e49884u, 0xd71c1235u, 0x75538be6u, 0x138b0597u, 0xb1c27f48u, 0x4ff9f8f9u, 0xee3172aau,
    0x8c68ec5bu, 0x2aa0660cu, 0xc8d7dfbdu, 0x670f596eu, 0x0546d31fu, 0xa37e4cd0u, 0x41b5c681u, 0xdfed4032u,
    0x7e24b9e3u, 0x1c5c3394u, 0xba93ad45u, 0x58cb26f6u, 0xf702a0a7u, 0x953a1a58u, 0x33719409u, 0xd1a90dbau,
    0x6fe0876bu, 0x0e18011cu, 0xac4f7acdu, 0x4a86f47eu, 0xe8be6e2fu, 0x86f5e7e0u, 0x252d6191u, 0xc364db42u,
    0x619c54f3u, 0xffd3cea4u, 0x9e0b4855u, 0x3c42c206u, 0xda7a3bb7u, 0x78b1b568u, 0x16e92f19u, 0xb520a8cau,
    0x5358227bu, 0xf18f9c2cu, 0x8fc715ddu, 0x2dfe8f8eu, 0xcc36093fu, 0x6a6d82f0u, 0x08a4fca1u, 0xa6dc7652u,
    0x4513f003u, 0xe34b69b4u, 0x8182e365u, 0x1fba5d16u, 0xbdf1d6c7u, 0x5c295078u, 0xfa60ca29u, 0x989843dau,
    0x36cfbd8bu, 0xd507373cu, 0x733eb0edu, 0x11762a9eu, 0xafada44fu, 0x4de51e00u, 0xec1c97b1u, 0x8a541162u,
};

static const uint32_t bshim_245_tab5[96] = {
    0x556cfd74u, 0xf3a47725u, 0x91dbf0d6u, 0x30136a87u, 0xce4ae438u, 0x6c825de9u, 0x0ab9d79au, 0xa8f1514bu,
    0x4728cafcu, 0xe56044adu, 0x8397be5eu, 0x21cf380fu, 0xc006b1c0u, 0x5e3e2b71u, 0xfc75a522u, 0x9aad1ed3u,
    0x38e49884u, 0xd71c1235u, 0x75538be6u, 0x138b0597u, 0xb1c27f48u, 0x4ff9f8f9u, 0xee3172aau, 0x8c68ec5bu,
    0x2aa0660cu, 0xc8d7dfbdu, 0x670f596eu, 0x0546d31fu, 0xa37e4cd0u, 0x41b5c681u, 0xdfed4032u, 0x7e24b9e3u,
    0x1c5c3394u, 0xba93ad45u, 0x58cb26f6u, 0xf702a0a7u, 0x953a1a58u, 0x33719409u, 0xd1a90dbau, 0x6fe0876bu,
    0x0e18011cu, 0xac4f7acdu, 0x4a86f47eu, 0xe8be6e2fu, 0x86f5e7e0u, 0x252d6191u, 0xc364db42u, 0x619c54f3u,
    0xffd3cea4u, 0x9e0b4855u, 0x3c42c206u, 0xda7a3bb7u, 0x78b1b568u, 0x16e92f19u, 0xb520a8cau, 0x5358227bu,
    0xf18f9c2cu, 0x8fc715ddu, 0x2dfe8f8eu, 0xcc36093fu, 0x6a6d82f0u, 0x08a4fca1u, 0xa6dc7652u, 0x4513f003u,
    0xe34b69b4u, 0x8182e365u, 0x1fba5d16u, 0xbdf1d6c7u, 0x5c295078u, 0xfa60ca29u, 0x989843dau, 0x36cfbd8bu,
    0xd507373cu, 0x733eb0edu, 0x11762a9eu, 0xafada44fu, 0x4de51e00u, 0xec1c97b1u, 0x8a541162u, 0x288b8b13u,
    0xc6c304c4u, 0x64fa7e75u, 0x0331f826u, 0xa16971d7u, 0x3fa0eb88u, 0xddd86539u, 0x7c0fdeeau, 0x1a47589bu,
    0xb87ed24cu, 0x56b64bfdu, 0xf4edc5aeu, 0x93253f5fu, 0x315cb910u, 0xcf9432c1u, 0x6dcbac72u, 0x0c032623u,
};

static const uint32_t bshim_245_tab6[96] = {
    0xd71c1235u, 0x75538be6u, 0x138b0597u, 0xb1c27f48u, 0x4ff9f8f9u, 0xee3172aau, 0x8c68ec5bu, 0x2aa0660cu,
    0xc8d7dfbdu, 0x670f596eu, 0x0546d31fu, 0xa37e4cd0u, 0x41b5c681u, 0xdfed4032u, 0x7e24b9e3u, 0x1c5c3394u,
    0xba93ad45u, 0x58cb26f6u, 0xf702a0a7u, 0x953a1a58u, 0x33719409u, 0xd1a90dbau, 0x6fe0876bu, 0x0e18011cu,
    0xac4f7acdu, 0x4a86f47eu, 0xe8be6e2fu, 0x86f5e7e0u, 0x252d6191u, 0xc364db42u, 0x619c54f3u, 0xffd3cea4u,
    0x9e0b4855u, 0x3c42c206u, 0xda7a3bb7u, 0x78b1b568u, 0x16e92f19u, 0xb520a8cau, 0x5358227bu, 0xf18f9c2cu,
    0x8fc715ddu, 0x2dfe8f8eu, 0xcc36093fu, 0x6a6d82f0u, 0x08a4fca1u, 0xa6dc7652u, 0x4513f003u, 0xe34b69b4u,
    0x8182e365u, 0x1fba5d16u, 0xbdf1d6c7u, 0x5c295078u, 0xfa60ca29u, 0x989843dau, 0x36cfbd8bu, 0xd507373cu,
    0x733eb0edu, 0x11762a9eu, 0xafada44fu, 0x4de51e00u, 0xec1c97b1u, 0x8a541162u, 0x288b8b13u, 0xc6c304c4u,
    0x64fa7e75u, 0x0331f826u, 0xa16971d7u, 0x3fa0eb88u, 0xddd86539u, 0x7c0fdeeau, 0x1a47589bu, 0xb87ed24cu,
    0x56b64bfdu, 0xf4edc5aeu, 0x93253f5fu, 0x315cb910u, 0xcf9432c1u, 0x6dcbac72u, 0x0c032623u, 0xaa3a9fd4u,
    0x48721985u, 0xe6a99336u, 0x84e10ce7u, 0x23188698u, 0xc1500049u, 0x5f8779fau, 0xfdbef3abu, 0x9bf66d5cu,
    0x3a2de70du, 0xd86560beu, 0x769cda6fu, 0x14d45420u, 0xb30bcdd1u, 0x51434782u, 0xef7ac133u, 0x8db23ae4u,
};

static const uint32_t bshim_245_tab7[96] = {
    0x58cb26f6u, 0xf702a0a7u, 0x953a1a58u, 0x33719409u, 0xd1a90dbau, 0x6fe0876bu, 0x0e18011cu, 0xac4f7acdu,
    0x4a86f47eu, 0xe8be6e2fu, 0x86f5e7e0u, 0x252d6191u, 0xc364db42u, 0x619c54f3u, 0xffd3cea4u, 0x9e0b4855u,
    0x3c42c206u, 0xda7a3bb7u, 0x78b1b568u, 0x16e92f19u, 0xb520a8cau, 0x5358227bu, 0xf18f9c2cu, 0x8fc715ddu,
    0x2dfe8f8eu, 0xcc36093fu, 0x6a6d82f0u, 0x08a4fca1u, 0xa6dc7652u, 0x4513f003u, 0xe34b69b4u, 0x8182e365u,
    0x1fba5d16u, 0xbdf1d6c7u, 0x5c295078u, 0xfa60ca29u, 0x989843dau, 0x36cfbd8bu, 0xd507373cu, 0x733eb0edu,
    0x11762a9eu, 0xafada44fu, 0x4de51e00u, 0xec1c97b1u, 0x8a541162u, 0x288b8b13u, 0xc6c304c4u, 0x64fa7e75u,
    0x0331f826u, 0xa16971d7u, 0x3fa0eb88u, 0xddd86539u, 0x7c0fdeeau, 0x1a47589bu, 0xb87ed24cu, 0x56b64bfdu,
    0xf4edc5aeu, 0x93253f5fu, 0x315cb910u, 0xcf9432c1u, 0x6dcbac72u, 0x0c032623u, 0xaa3a9fd4u, 0x48721985u,
    0xe6a99336u, 0x84e10ce7u, 0x23188698u, 0xc1500049u, 0x5f8779fau, 0xfdbef3abu, 0x9bf66d5cu, 0x3a2de70du,
    0xd86560beu, 0x769cda6fu, 0x14d45420u, 0xb30bcdd1u, 0x51434782u, 0xef7ac133u, 0x8db23ae4u, 0x2be9b495u,
    0xca212e46u, 0x6858a7f7u, 0x069021a8u, 0xa4c79b59u, 0x42ff150au, 0xe1368ebbu, 0x7f6e086cu, 0x1da5821du,
    0xbbdcfbceu, 0x5a14757fu, 0xf84bef30u, 0x968368e1u, 0x34bae292u, 0xd2f25c43u, 0x7129d5f4u, 0x0f614fa5u,
};

struct bshim_245_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_245_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_245_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_245_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_245_reset(struct bshim_245_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001d9abbu;
    return 0;
}

