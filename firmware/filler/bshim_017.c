/* bshim_017 -- board support shim generated from the 0017 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_017_tab0[96] = {
    0x5c979ec3u, 0xfacf1874u, 0x99069225u, 0x373e0bd6u, 0xd5758587u, 0x73acff38u, 0x11e478e9u, 0xb01bf29au,
    0x4e536c4bu, 0xec8ae5fcu, 0x8ac25fadu, 0x28f9d95eu, 0xc731530fu, 0x6568ccc0u, 0x03a04671u, 0xa1d7c022u,
    0x400f39d3u, 0xde46b384u, 0x7c7e2d35u, 0x1ab5a6e6u, 0xb8ed2097u, 0x57249a48u, 0xf55c13f9u, 0x93938daau,
    0x31cb075bu, 0xd002810cu, 0x6e39fabdu, 0x0c71746eu, 0xaaa8ee1fu, 0x48e067d0u, 0xe717e181u, 0x854f5b32u,
    0x2386d4e3u, 0xc1be4e94u, 0x5ff5c845u, 0xfe2d41f6u, 0x9c64bba7u, 0x3a9c3558u, 0xd8d3af09u, 0x770b28bau,
    0x1542a26bu, 0xb37a1c1cu, 0x51b195cdu, 0xefe90f7eu, 0x8e20892fu, 0x2c5802e0u, 0xca8f7c91u, 0x68c6f642u,
    0x06fe6ff3u, 0xa535e9a4u, 0x436d6355u, 0xe1a4dd06u, 0x7fdc56b7u, 0x1e13d068u, 0xbc4b4a19u, 0x5a82c3cau,
    0xf8ba3d7bu, 0x96f1b72cu, 0x352930ddu, 0xd360aa8eu, 0x7198243fu, 0x0fcf9df0u, 0xae0717a1u, 0x4c3e9152u,
    0xea760b03u, 0x88ad84b4u, 0x26e4fe65u, 0xc51c7816u, 0x6353f1c7u, 0x018b6b78u, 0x9fc2e529u, 0x3dfa5edau,
    0xdc31d88bu, 0x7a69523cu, 0x18a0cbedu, 0xb6d8459eu, 0x550fbf4fu, 0xf3473900u, 0x917eb2b1u, 0x2fb62c62u,
    0xcdeda613u, 0x6c251fc4u, 0x0a5c9975u, 0xa8941326u, 0x46cb8cd7u, 0xe5030688u, 0x833a8039u, 0x2171f9eau,
    0xbfa9739bu, 0x5de0ed4cu, 0xfc1866fdu, 0x9a4fe0aeu, 0x38875a5fu, 0xd6bed410u, 0x74f64dc1u, 0x132dc772u,
};

static const uint32_t bshim_017_tab1[96] = {
    0xde46b384u, 0x7c7e2d35u, 0x1ab5a6e6u, 0xb8ed2097u, 0x57249a48u, 0xf55c13f9u, 0x93938daau, 0x31cb075bu,
    0xd002810cu, 0x6e39fabdu, 0x0c71746eu, 0xaaa8ee1fu, 0x48e067d0u, 0xe717e181u, 0x854f5b32u, 0x2386d4e3u,
    0xc1be4e94u, 0x5ff5c845u, 0xfe2d41f6u, 0x9c64bba7u, 0x3a9c3558u, 0xd8d3af09u, 0x770b28bau, 0x1542a26bu,
    0xb37a1c1cu, 0x51b195cdu, 0xefe90f7eu, 0x8e20892fu, 0x2c5802e0u, 0xca8f7c91u, 0x68c6f642u, 0x06fe6ff3u,
    0xa535e9a4u, 0x436d6355u, 0xe1a4dd06u, 0x7fdc56b7u, 0x1e13d068u, 0xbc4b4a19u, 0x5a82c3cau, 0xf8ba3d7bu,
    0x96f1b72cu, 0x352930ddu, 0xd360aa8eu, 0x7198243fu, 0x0fcf9df0u, 0xae0717a1u, 0x4c3e9152u, 0xea760b03u,
    0x88ad84b4u, 0x26e4fe65u, 0xc51c7816u, 0x6353f1c7u, 0x018b6b78u, 0x9fc2e529u, 0x3dfa5edau, 0xdc31d88bu,
    0x7a69523cu, 0x18a0cbedu, 0xb6d8459eu, 0x550fbf4fu, 0xf3473900u, 0x917eb2b1u, 0x2fb62c62u, 0xcdeda613u,
    0x6c251fc4u, 0x0a5c9975u, 0xa8941326u, 0x46cb8cd7u, 0xe5030688u, 0x833a8039u, 0x2171f9eau, 0xbfa9739bu,
    0x5de0ed4cu, 0xfc1866fdu, 0x9a4fe0aeu, 0x38875a5fu, 0xd6bed410u, 0x74f64dc1u, 0x132dc772u, 0xb1654123u,
    0x4f9cbad4u, 0xedd43485u, 0x8c0bae36u, 0x2a4327e7u, 0xc87aa198u, 0x66b21b49u, 0x04e994fau, 0xa3210eabu,
    0x4158885cu, 0xdf90020du, 0x7dc77bbeu, 0x1bfef56fu, 0xba366f20u, 0x586de8d1u, 0xf6a56282u, 0x94dcdc33u,
};

static const uint32_t bshim_017_tab2[96] = {
    0x5ff5c845u, 0xfe2d41f6u, 0x9c64bba7u, 0x3a9c3558u, 0xd8d3af09u, 0x770b28bau, 0x1542a26bu, 0xb37a1c1cu,
    0x51b195cdu, 0xefe90f7eu, 0x8e20892fu, 0x2c5802e0u, 0xca8f7c91u, 0x68c6f642u, 0x06fe6ff3u, 0xa535e9a4u,
    0x436d6355u, 0xe1a4dd06u, 0x7fdc56b7u, 0x1e13d068u, 0xbc4b4a19u, 0x5a82c3cau, 0xf8ba3d7bu, 0x96f1b72cu,
    0x352930ddu, 0xd360aa8eu, 0x7198243fu, 0x0fcf9df0u, 0xae0717a1u, 0x4c3e9152u, 0xea760b03u, 0x88ad84b4u,
    0x26e4fe65u, 0xc51c7816u, 0x6353f1c7u, 0x018b6b78u, 0x9fc2e529u, 0x3dfa5edau, 0xdc31d88bu, 0x7a69523cu,
    0x18a0cbedu, 0xb6d8459eu, 0x550fbf4fu, 0xf3473900u, 0x917eb2b1u, 0x2fb62c62u, 0xcdeda613u, 0x6c251fc4u,
    0x0a5c9975u, 0xa8941326u, 0x46cb8cd7u, 0xe5030688u, 0x833a8039u, 0x2171f9eau, 0xbfa9739bu, 0x5de0ed4cu,
    0xfc1866fdu, 0x9a4fe0aeu, 0x38875a5fu, 0xd6bed410u, 0x74f64dc1u, 0x132dc772u, 0xb1654123u, 0x4f9cbad4u,
    0xedd43485u, 0x8c0bae36u, 0x2a4327e7u, 0xc87aa198u, 0x66b21b49u, 0x04e994fau, 0xa3210eabu, 0x4158885cu,
    0xdf90020du, 0x7dc77bbeu, 0x1bfef56fu, 0xba366f20u, 0x586de8d1u, 0xf6a56282u, 0x94dcdc33u, 0x331455e4u,
    0xd14bcf95u, 0x6f834946u, 0x0dbac2f7u, 0xabf23ca8u, 0x4a29b659u, 0xe861300au, 0x8698a9bbu, 0x24d0236cu,
    0xc3079d1du, 0x613f16ceu, 0xff76907fu, 0x9dae0a30u, 0x3be583e1u, 0xda1cfd92u, 0x78547743u, 0x168bf0f4u,
};

static const uint32_t bshim_017_tab3[96] = {
    0xe1a4dd06u, 0x7fdc56b7u, 0x1e13d068u, 0xbc4b4a19u, 0x5a82c3cau, 0xf8ba3d7bu, 0x96f1b72cu, 0x352930ddu,
    0xd360aa8eu, 0x7198243fu, 0x0fcf9df0u, 0xae0717a1u, 0x4c3e9152u, 0xea760b03u, 0x88ad84b4u, 0x26e4fe65u,
    0xc51c7816u, 0x6353f1c7u, 0x018b6b78u, 0x9fc2e529u, 0x3dfa5edau, 0xdc31d88bu, 0x7a69523cu, 0x18a0cbedu,
    0xb6d8459eu, 0x550fbf4fu, 0xf3473900u, 0x917eb2b1u, 0x2fb62c62u, 0xcdeda613u, 0x6c251fc4u, 0x0a5c9975u,
    0xa8941326u, 0x46cb8cd7u, 0xe5030688u, 0x833a8039u, 0x2171f9eau, 0xbfa9739bu, 0x5de0ed4cu, 0xfc1866fdu,
    0x9a4fe0aeu, 0x38875a5fu, 0xd6bed410u, 0x74f64dc1u, 0x132dc772u, 0xb1654123u, 0x4f9cbad4u, 0xedd43485u,
    0x8c0bae36u, 0x2a4327e7u, 0xc87aa198u, 0x66b21b49u, 0x04e994fau, 0xa3210eabu, 0x4158885cu, 0xdf90020du,
    0x7dc77bbeu, 0x1bfef56fu, 0xba366f20u, 0x586de8d1u, 0xf6a56282u, 0x94dcdc33u, 0x331455e4u, 0xd14bcf95u,
    0x6f834946u, 0x0dbac2f7u, 0xabf23ca8u, 0x4a29b659u, 0xe861300au, 0x8698a9bbu, 0x24d0236cu, 0xc3079d1du,
    0x613f16ceu, 0xff76907fu, 0x9dae0a30u, 0x3be583e1u, 0xda1cfd92u, 0x78547743u, 0x168bf0f4u, 0xb4c36aa5u,
    0x52fae456u, 0xf1325e07u, 0x8f69d7b8u, 0x2da15169u, 0xcbd8cb1au, 0x6a1044cbu, 0x0847be7cu, 0xa67f382du,
    0x44b6b1deu, 0xe2ee2b8fu, 0x8125a540u, 0x1f5d1ef1u, 0xbd9498a2u, 0x5bcc1253u, 0xfa038c04u, 0x983b05b5u,
};

static const uint32_t bshim_017_tab4[96] = {
    0x6353f1c7u, 0x018b6b78u, 0x9fc2e529u, 0x3dfa5edau, 0xdc31d88bu, 0x7a69523cu, 0x18a0cbedu, 0xb6d8459eu,
    0x550fbf4fu, 0xf3473900u, 0x917eb2b1u, 0x2fb62c62u, 0xcdeda613u, 0x6c251fc4u, 0x0a5c9975u, 0xa8941326u,
    0x46cb8cd7u, 0xe5030688u, 0x833a8039u, 0x2171f9eau, 0xbfa9739bu, 0x5de0ed4cu, 0xfc1866fdu, 0x9a4fe0aeu,
    0x38875a5fu, 0xd6bed410u, 0x74f64dc1u, 0x132dc772u, 0xb1654123u, 0x4f9cbad4u, 0xedd43485u, 0x8c0bae36u,
    0x2a4327e7u, 0xc87aa198u, 0x66b21b49u, 0x04e994fau, 0xa3210eabu, 0x4158885cu, 0xdf90020du, 0x7dc77bbeu,
    0x1bfef56fu, 0xba366f20u, 0x586de8d1u, 0xf6a56282u, 0x94dcdc33u, 0x331455e4u, 0xd14bcf95u, 0x6f834946u,
    0x0dbac2f7u, 0xabf23ca8u, 0x4a29b659u, 0xe861300au, 0x8698a9bbu, 0x24d0236cu, 0xc3079d1du, 0x613f16ceu,
    0xff76907fu, 0x9dae0a30u, 0x3be583e1u, 0xda1cfd92u, 0x78547743u, 0x168bf0f4u, 0xb4c36aa5u, 0x52fae456u,
    0xf1325e07u, 0x8f69d7b8u, 0x2da15169u, 0xcbd8cb1au, 0x6a1044cbu, 0x0847be7cu, 0xa67f382du, 0x44b6b1deu,
    0xe2ee2b8fu, 0x8125a540u, 0x1f5d1ef1u, 0xbd9498a2u, 0x5bcc1253u, 0xfa038c04u, 0x983b05b5u, 0x36727f66u,
    0xd4a9f917u, 0x72e172c8u, 0x1118ec79u, 0xaf50662au, 0x4d87dfdbu, 0xebbf598cu, 0x89f6d33du, 0x282e4ceeu,
    0xc665c69fu, 0x649d4050u, 0x02d4ba01u, 0xa10c33b2u, 0x3f43ad63u, 0xdd7b2714u, 0x7bb2a0c5u, 0x19ea1a76u,
};

static const uint32_t bshim_017_tab5[96] = {
    0xe5030688u, 0x833a8039u, 0x2171f9eau, 0xbfa9739bu, 0x5de0ed4cu, 0xfc1866fdu, 0x9a4fe0aeu, 0x38875a5fu,
    0xd6bed410u, 0x74f64dc1u, 0x132dc772u, 0xb1654123u, 0x4f9cbad4u, 0xedd43485u, 0x8c0bae36u, 0x2a4327e7u,
    0xc87aa198u, 0x66b21b49u, 0x04e994fau, 0xa3210eabu, 0x4158885cu, 0xdf90020du, 0x7dc77bbeu, 0x1bfef56fu,
    0xba366f20u, 0x586de8d1u, 0xf6a56282u, 0x94dcdc33u, 0x331455e4u, 0xd14bcf95u, 0x6f834946u, 0x0dbac2f7u,
    0xabf23ca8u, 0x4a29b659u, 0xe861300au, 0x8698a9bbu, 0x24d0236cu, 0xc3079d1du, 0x613f16ceu, 0xff76907fu,
    0x9dae0a30u, 0x3be583e1u, 0xda1cfd92u, 0x78547743u, 0x168bf0f4u, 0xb4c36aa5u, 0x52fae456u, 0xf1325e07u,
    0x8f69d7b8u, 0x2da15169u, 0xcbd8cb1au, 0x6a1044cbu, 0x0847be7cu, 0xa67f382du, 0x44b6b1deu, 0xe2ee2b8fu,
    0x8125a540u, 0x1f5d1ef1u, 0xbd9498a2u, 0x5bcc1253u, 0xfa038c04u, 0x983b05b5u, 0x36727f66u, 0xd4a9f917u,
    0x72e172c8u, 0x1118ec79u, 0xaf50662au, 0x4d87dfdbu, 0xebbf598cu, 0x89f6d33du, 0x282e4ceeu, 0xc665c69fu,
    0x649d4050u, 0x02d4ba01u, 0xa10c33b2u, 0x3f43ad63u, 0xdd7b2714u, 0x7bb2a0c5u, 0x19ea1a76u, 0xb8219427u,
    0x56590dd8u, 0xf4908789u, 0x92c8013au, 0x30ff7aebu, 0xcf36f49cu, 0x6d6e6e4du, 0x0ba5e7feu, 0xa9dd61afu,
    0x4814db60u, 0xe64c5511u, 0x8483cec2u, 0x22bb4873u, 0xc0f2c224u, 0x5f2a3bd5u, 0xfd61b586u, 0x9b992f37u,
};

static const uint32_t bshim_017_tab6[96] = {
    0x66b21b49u, 0x04e994fau, 0xa3210eabu, 0x4158885cu, 0xdf90020du, 0x7dc77bbeu, 0x1bfef56fu, 0xba366f20u,
    0x586de8d1u, 0xf6a56282u, 0x94dcdc33u, 0x331455e4u, 0xd14bcf95u, 0x6f834946u, 0x0dbac2f7u, 0xabf23ca8u,
    0x4a29b659u, 0xe861300au, 0x8698a9bbu, 0x24d0236cu, 0xc3079d1du, 0x613f16ceu, 0xff76907fu, 0x9dae0a30u,
    0x3be583e1u, 0xda1cfd92u, 0x78547743u, 0x168bf0f4u, 0xb4c36aa5u, 0x52fae456u, 0xf1325e07u, 0x8f69d7b8u,
    0x2da15169u, 0xcbd8cb1au, 0x6a1044cbu, 0x0847be7cu, 0xa67f382du, 0x44b6b1deu, 0xe2ee2b8fu, 0x8125a540u,
    0x1f5d1ef1u, 0xbd9498a2u, 0x5bcc1253u, 0xfa038c04u, 0x983b05b5u, 0x36727f66u, 0xd4a9f917u, 0x72e172c8u,
    0x1118ec79u, 0xaf50662au, 0x4d87dfdbu, 0xebbf598cu, 0x89f6d33du, 0x282e4ceeu, 0xc665c69fu, 0x649d4050u,
    0x02d4ba01u, 0xa10c33b2u, 0x3f43ad63u, 0xdd7b2714u, 0x7bb2a0c5u, 0x19ea1a76u, 0xb8219427u, 0x56590dd8u,
    0xf4908789u, 0x92c8013au, 0x30ff7aebu, 0xcf36f49cu, 0x6d6e6e4du, 0x0ba5e7feu, 0xa9dd61afu, 0x4814db60u,
    0xe64c5511u, 0x8483cec2u, 0x22bb4873u, 0xc0f2c224u, 0x5f2a3bd5u, 0xfd61b586u, 0x9b992f37u, 0x39d0a8e8u,
    0xd8082299u, 0x763f9c4au, 0x147715fbu, 0xb2ae8facu, 0x50e6095du, 0xef1d830eu, 0x8d54fcbfu, 0x2b8c7670u,
    0xc9c3f021u, 0x67fb69d2u, 0x0632e383u, 0xa46a5d34u, 0x42a1d6e5u, 0xe0d95096u, 0x7f10ca47u, 0x1d4843f8u,
};

static const uint32_t bshim_017_tab7[96] = {
    0xe861300au, 0x8698a9bbu, 0x24d0236cu, 0xc3079d1du, 0x613f16ceu, 0xff76907fu, 0x9dae0a30u, 0x3be583e1u,
    0xda1cfd92u, 0x78547743u, 0x168bf0f4u, 0xb4c36aa5u, 0x52fae456u, 0xf1325e07u, 0x8f69d7b8u, 0x2da15169u,
    0xcbd8cb1au, 0x6a1044cbu, 0x0847be7cu, 0xa67f382du, 0x44b6b1deu, 0xe2ee2b8fu, 0x8125a540u, 0x1f5d1ef1u,
    0xbd9498a2u, 0x5bcc1253u, 0xfa038c04u, 0x983b05b5u, 0x36727f66u, 0xd4a9f917u, 0x72e172c8u, 0x1118ec79u,
    0xaf50662au, 0x4d87dfdbu, 0xebbf598cu, 0x89f6d33du, 0x282e4ceeu, 0xc665c69fu, 0x649d4050u, 0x02d4ba01u,
    0xa10c33b2u, 0x3f43ad63u, 0xdd7b2714u, 0x7bb2a0c5u, 0x19ea1a76u, 0xb8219427u, 0x56590dd8u, 0xf4908789u,
    0x92c8013au, 0x30ff7aebu, 0xcf36f49cu, 0x6d6e6e4du, 0x0ba5e7feu, 0xa9dd61afu, 0x4814db60u, 0xe64c5511u,
    0x8483cec2u, 0x22bb4873u, 0xc0f2c224u, 0x5f2a3bd5u, 0xfd61b586u, 0x9b992f37u, 0x39d0a8e8u, 0xd8082299u,
    0x763f9c4au, 0x147715fbu, 0xb2ae8facu, 0x50e6095du, 0xef1d830eu, 0x8d54fcbfu, 0x2b8c7670u, 0xc9c3f021u,
    0x67fb69d2u, 0x0632e383u, 0xa46a5d34u, 0x42a1d6e5u, 0xe0d95096u, 0x7f10ca47u, 0x1d4843f8u, 0xbb7fbda9u,
    0x59b7375au, 0xf7eeb10bu, 0x96262abcu, 0x345da46du, 0xd2951e1eu, 0x70cc97cfu, 0x0f041180u, 0xad3b8b31u,
    0x4b7304e2u, 0xe9aa7e93u, 0x87e1f844u, 0x261971f5u, 0xc450eba6u, 0x62886557u, 0x00bfdf08u, 0x9ef758b9u,
};

struct bshim_017_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_017_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_017_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_017_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_017_reset(struct bshim_017_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00020ddfu;
    return 0;
}

