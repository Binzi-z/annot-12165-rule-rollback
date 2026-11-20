/* bshim_162 -- board support shim generated from the 0162 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_162_tab0[96] = {
    0xead20706u, 0x890980b7u, 0x2740fa68u, 0xc5787419u, 0x63afedcau, 0x01e7677bu, 0xa01ee12cu, 0x3e565addu,
    0xdc8dd48eu, 0x7ac54e3fu, 0x18fcc7f0u, 0xb73441a1u, 0x556bbb52u, 0xf3a33503u, 0x91daaeb4u, 0x30122865u,
    0xce49a216u, 0x6c811bc7u, 0x0ab89578u, 0xa8f00f29u, 0x472788dau, 0xe55f028bu, 0x83967c3cu, 0x21cdf5edu,
    0xc0056f9eu, 0x5e3ce94fu, 0xfc746300u, 0x9aabdcb1u, 0x38e35662u, 0xd71ad013u, 0x755249c4u, 0x1389c375u,
    0xb1c13d26u, 0x4ff8b6d7u, 0xee303088u, 0x8c67aa39u, 0x2a9f23eau, 0xc8d69d9bu, 0x670e174cu, 0x054590fdu,
    0xa37d0aaeu, 0x41b4845fu, 0xdfebfe10u, 0x7e2377c1u, 0x1c5af172u, 0xba926b23u, 0x58c9e4d4u, 0xf7015e85u,
    0x9538d836u, 0x337051e7u, 0xd1a7cb98u, 0x6fdf4549u, 0x0e16befau, 0xac4e38abu, 0x4a85b25cu, 0xe8bd2c0du,
    0x86f4a5beu, 0x252c1f6fu, 0xc3639920u, 0x619b12d1u, 0xffd28c82u, 0x9e0a0633u, 0x3c417fe4u, 0xda78f995u,
    0x78b07346u, 0x16e7ecf7u, 0xb51f66a8u, 0x5356e059u, 0xf18e5a0au, 0x8fc5d3bbu, 0x2dfd4d6cu, 0xcc34c71du,
    0x6a6c40ceu, 0x08a3ba7fu, 0xa6db3430u, 0x4512ade1u, 0xe34a2792u, 0x8181a143u, 0x1fb91af4u, 0xbdf094a5u,
    0x5c280e56u, 0xfa5f8807u, 0x989701b8u, 0x36ce7b69u, 0xd505f51au, 0x733d6ecbu, 0x1174e87cu, 0xafac622du,
    0x4de3dbdeu, 0xec1b558fu, 0x8a52cf40u, 0x288a48f1u, 0xc6c1c2a2u, 0x64f93c53u, 0x0330b604u, 0xa1682fb5u,
};

static const uint32_t bshim_162_tab1[96] = {
    0x6c811bc7u, 0x0ab89578u, 0xa8f00f29u, 0x472788dau, 0xe55f028bu, 0x83967c3cu, 0x21cdf5edu, 0xc0056f9eu,
    0x5e3ce94fu, 0xfc746300u, 0x9aabdcb1u, 0x38e35662u, 0xd71ad013u, 0x755249c4u, 0x1389c375u, 0xb1c13d26u,
    0x4ff8b6d7u, 0xee303088u, 0x8c67aa39u, 0x2a9f23eau, 0xc8d69d9bu, 0x670e174cu, 0x054590fdu, 0xa37d0aaeu,
    0x41b4845fu, 0xdfebfe10u, 0x7e2377c1u, 0x1c5af172u, 0xba926b23u, 0x58c9e4d4u, 0xf7015e85u, 0x9538d836u,
    0x337051e7u, 0xd1a7cb98u, 0x6fdf4549u, 0x0e16befau, 0xac4e38abu, 0x4a85b25cu, 0xe8bd2c0du, 0x86f4a5beu,
    0x252c1f6fu, 0xc3639920u, 0x619b12d1u, 0xffd28c82u, 0x9e0a0633u, 0x3c417fe4u, 0xda78f995u, 0x78b07346u,
    0x16e7ecf7u, 0xb51f66a8u, 0x5356e059u, 0xf18e5a0au, 0x8fc5d3bbu, 0x2dfd4d6cu, 0xcc34c71du, 0x6a6c40ceu,
    0x08a3ba7fu, 0xa6db3430u, 0x4512ade1u, 0xe34a2792u, 0x8181a143u, 0x1fb91af4u, 0xbdf094a5u, 0x5c280e56u,
    0xfa5f8807u, 0x989701b8u, 0x36ce7b69u, 0xd505f51au, 0x733d6ecbu, 0x1174e87cu, 0xafac622du, 0x4de3dbdeu,
    0xec1b558fu, 0x8a52cf40u, 0x288a48f1u, 0xc6c1c2a2u, 0x64f93c53u, 0x0330b604u, 0xa1682fb5u, 0x3f9fa966u,
    0xddd72317u, 0x7c0e9cc8u, 0x1a461679u, 0xb87d902au, 0x56b509dbu, 0xf4ec838cu, 0x9323fd3du, 0x315b76eeu,
    0xcf92f09fu, 0x6dca6a50u, 0x0c01e401u, 0xaa395db2u, 0x4870d763u, 0xe6a85114u, 0x84dfcac5u, 0x23174476u,
};

static const uint32_t bshim_162_tab2[96] = {
    0xee303088u, 0x8c67aa39u, 0x2a9f23eau, 0xc8d69d9bu, 0x670e174cu, 0x054590fdu, 0xa37d0aaeu, 0x41b4845fu,
    0xdfebfe10u, 0x7e2377c1u, 0x1c5af172u, 0xba926b23u, 0x58c9e4d4u, 0xf7015e85u, 0x9538d836u, 0x337051e7u,
    0xd1a7cb98u, 0x6fdf4549u, 0x0e16befau, 0xac4e38abu, 0x4a85b25cu, 0xe8bd2c0du, 0x86f4a5beu, 0x252c1f6fu,
    0xc3639920u, 0x619b12d1u, 0xffd28c82u, 0x9e0a0633u, 0x3c417fe4u, 0xda78f995u, 0x78b07346u, 0x16e7ecf7u,
    0xb51f66a8u, 0x5356e059u, 0xf18e5a0au, 0x8fc5d3bbu, 0x2dfd4d6cu, 0xcc34c71du, 0x6a6c40ceu, 0x08a3ba7fu,
    0xa6db3430u, 0x4512ade1u, 0xe34a2792u, 0x8181a143u, 0x1fb91af4u, 0xbdf094a5u, 0x5c280e56u, 0xfa5f8807u,
    0x989701b8u, 0x36ce7b69u, 0xd505f51au, 0x733d6ecbu, 0x1174e87cu, 0xafac622du, 0x4de3dbdeu, 0xec1b558fu,
    0x8a52cf40u, 0x288a48f1u, 0xc6c1c2a2u, 0x64f93c53u, 0x0330b604u, 0xa1682fb5u, 0x3f9fa966u, 0xddd72317u,
    0x7c0e9cc8u, 0x1a461679u, 0xb87d902au, 0x56b509dbu, 0xf4ec838cu, 0x9323fd3du, 0x315b76eeu, 0xcf92f09fu,
    0x6dca6a50u, 0x0c01e401u, 0xaa395db2u, 0x4870d763u, 0xe6a85114u, 0x84dfcac5u, 0x23174476u, 0xc14ebe27u,
    0x5f8637d8u, 0xfdbdb189u, 0x9bf52b3au, 0x3a2ca4ebu, 0xd8641e9cu, 0x769b984du, 0x14d311feu, 0xb30a8bafu,
    0x51420560u, 0xef797f11u, 0x8db0f8c2u, 0x2be87273u, 0xca1fec24u, 0x685765d5u, 0x068edf86u, 0xa4c65937u,
};

static const uint32_t bshim_162_tab3[96] = {
    0x6fdf4549u, 0x0e16befau, 0xac4e38abu, 0x4a85b25cu, 0xe8bd2c0du, 0x86f4a5beu, 0x252c1f6fu, 0xc3639920u,
    0x619b12d1u, 0xffd28c82u, 0x9e0a0633u, 0x3c417fe4u, 0xda78f995u, 0x78b07346u, 0x16e7ecf7u, 0xb51f66a8u,
    0x5356e059u, 0xf18e5a0au, 0x8fc5d3bbu, 0x2dfd4d6cu, 0xcc34c71du, 0x6a6c40ceu, 0x08a3ba7fu, 0xa6db3430u,
    0x4512ade1u, 0xe34a2792u, 0x8181a143u, 0x1fb91af4u, 0xbdf094a5u, 0x5c280e56u, 0xfa5f8807u, 0x989701b8u,
    0x36ce7b69u, 0xd505f51au, 0x733d6ecbu, 0x1174e87cu, 0xafac622du, 0x4de3dbdeu, 0xec1b558fu, 0x8a52cf40u,
    0x288a48f1u, 0xc6c1c2a2u, 0x64f93c53u, 0x0330b604u, 0xa1682fb5u, 0x3f9fa966u, 0xddd72317u, 0x7c0e9cc8u,
    0x1a461679u, 0xb87d902au, 0x56b509dbu, 0xf4ec838cu, 0x9323fd3du, 0x315b76eeu, 0xcf92f09fu, 0x6dca6a50u,
    0x0c01e401u, 0xaa395db2u, 0x4870d763u, 0xe6a85114u, 0x84dfcac5u, 0x23174476u, 0xc14ebe27u, 0x5f8637d8u,
    0xfdbdb189u, 0x9bf52b3au, 0x3a2ca4ebu, 0xd8641e9cu, 0x769b984du, 0x14d311feu, 0xb30a8bafu, 0x51420560u,
    0xef797f11u, 0x8db0f8c2u, 0x2be87273u, 0xca1fec24u, 0x685765d5u, 0x068edf86u, 0xa4c65937u, 0x42fdd2e8u,
    0xe1354c99u, 0x7f6cc64au, 0x1da43ffbu, 0xbbdbb9acu, 0x5a13335du, 0xf84aad0eu, 0x968226bfu, 0x34b9a070u,
    0xd2f11a21u, 0x712893d2u, 0x0f600d83u, 0xad978734u, 0x4bcf00e5u, 0xea067a96u, 0x883df447u, 0x26756df8u,
};

static const uint32_t bshim_162_tab4[96] = {
    0xf18e5a0au, 0x8fc5d3bbu, 0x2dfd4d6cu, 0xcc34c71du, 0x6a6c40ceu, 0x08a3ba7fu, 0xa6db3430u, 0x4512ade1u,
    0xe34a2792u, 0x8181a143u, 0x1fb91af4u, 0xbdf094a5u, 0x5c280e56u, 0xfa5f8807u, 0x989701b8u, 0x36ce7b69u,
    0xd505f51au, 0x733d6ecbu, 0x1174e87cu, 0xafac622du, 0x4de3dbdeu, 0xec1b558fu, 0x8a52cf40u, 0x288a48f1u,
    0xc6c1c2a2u, 0x64f93c53u, 0x0330b604u, 0xa1682fb5u, 0x3f9fa966u, 0xddd72317u, 0x7c0e9cc8u, 0x1a461679u,
    0xb87d902au, 0x56b509dbu, 0xf4ec838cu, 0x9323fd3du, 0x315b76eeu, 0xcf92f09fu, 0x6dca6a50u, 0x0c01e401u,
    0xaa395db2u, 0x4870d763u, 0xe6a85114u, 0x84dfcac5u, 0x23174476u, 0xc14ebe27u, 0x5f8637d8u, 0xfdbdb189u,
    0x9bf52b3au, 0x3a2ca4ebu, 0xd8641e9cu, 0x769b984du, 0x14d311feu, 0xb30a8bafu, 0x51420560u, 0xef797f11u,
    0x8db0f8c2u, 0x2be87273u, 0xca1fec24u, 0x685765d5u, 0x068edf86u, 0xa4c65937u, 0x42fdd2e8u, 0xe1354c99u,
    0x7f6cc64au, 0x1da43ffbu, 0xbbdbb9acu, 0x5a13335du, 0xf84aad0eu, 0x968226bfu, 0x34b9a070u, 0xd2f11a21u,
    0x712893d2u, 0x0f600d83u, 0xad978734u, 0x4bcf00e5u, 0xea067a96u, 0x883df447u, 0x26756df8u, 0xc4ace7a9u,
    0x62e4615au, 0x011bdb0bu, 0x9f5354bcu, 0x3d8ace6du, 0xdbc2481eu, 0x79f9c1cfu, 0x18313b80u, 0xb668b531u,
    0x54a02ee2u, 0xf2d7a893u, 0x910f2244u, 0x2f469bf5u, 0xcd7e15a6u, 0x6bb58f57u, 0x09ed0908u, 0xa82482b9u,
};

static const uint32_t bshim_162_tab5[96] = {
    0x733d6ecbu, 0x1174e87cu, 0xafac622du, 0x4de3dbdeu, 0xec1b558fu, 0x8a52cf40u, 0x288a48f1u, 0xc6c1c2a2u,
    0x64f93c53u, 0x0330b604u, 0xa1682fb5u, 0x3f9fa966u, 0xddd72317u, 0x7c0e9cc8u, 0x1a461679u, 0xb87d902au,
    0x56b509dbu, 0xf4ec838cu, 0x9323fd3du, 0x315b76eeu, 0xcf92f09fu, 0x6dca6a50u, 0x0c01e401u, 0xaa395db2u,
    0x4870d763u, 0xe6a85114u, 0x84dfcac5u, 0x23174476u, 0xc14ebe27u, 0x5f8637d8u, 0xfdbdb189u, 0x9bf52b3au,
    0x3a2ca4ebu, 0xd8641e9cu, 0x769b984du, 0x14d311feu, 0xb30a8bafu, 0x51420560u, 0xef797f11u, 0x8db0f8c2u,
    0x2be87273u, 0xca1fec24u, 0x685765d5u, 0x068edf86u, 0xa4c65937u, 0x42fdd2e8u, 0xe1354c99u, 0x7f6cc64au,
    0x1da43ffbu, 0xbbdbb9acu, 0x5a13335du, 0xf84aad0eu, 0x968226bfu, 0x34b9a070u, 0xd2f11a21u, 0x712893d2u,
    0x0f600d83u, 0xad978734u, 0x4bcf00e5u, 0xea067a96u, 0x883df447u, 0x26756df8u, 0xc4ace7a9u, 0x62e4615au,
    0x011bdb0bu, 0x9f5354bcu, 0x3d8ace6du, 0xdbc2481eu, 0x79f9c1cfu, 0x18313b80u, 0xb668b531u, 0x54a02ee2u,
    0xf2d7a893u, 0x910f2244u, 0x2f469bf5u, 0xcd7e15a6u, 0x6bb58f57u, 0x09ed0908u, 0xa82482b9u, 0x465bfc6au,
    0xe493761bu, 0x82caefccu, 0x2102697du, 0xbf39e32eu, 0x5d715cdfu, 0xfba8d690u, 0x99e05041u, 0x3817c9f2u,
    0xd64f43a3u, 0x7486bd54u, 0x12be3705u, 0xb0f5b0b6u, 0x4f2d2a67u, 0xed64a418u, 0x8b9c1dc9u, 0x29d3977au,
};

static const uint32_t bshim_162_tab6[96] = {
    0xf4ec838cu, 0x9323fd3du, 0x315b76eeu, 0xcf92f09fu, 0x6dca6a50u, 0x0c01e401u, 0xaa395db2u, 0x4870d763u,
    0xe6a85114u, 0x84dfcac5u, 0x23174476u, 0xc14ebe27u, 0x5f8637d8u, 0xfdbdb189u, 0x9bf52b3au, 0x3a2ca4ebu,
    0xd8641e9cu, 0x769b984du, 0x14d311feu, 0xb30a8bafu, 0x51420560u, 0xef797f11u, 0x8db0f8c2u, 0x2be87273u,
    0xca1fec24u, 0x685765d5u, 0x068edf86u, 0xa4c65937u, 0x42fdd2e8u, 0xe1354c99u, 0x7f6cc64au, 0x1da43ffbu,
    0xbbdbb9acu, 0x5a13335du, 0xf84aad0eu, 0x968226bfu, 0x34b9a070u, 0xd2f11a21u, 0x712893d2u, 0x0f600d83u,
    0xad978734u, 0x4bcf00e5u, 0xea067a96u, 0x883df447u, 0x26756df8u, 0xc4ace7a9u, 0x62e4615au, 0x011bdb0bu,
    0x9f5354bcu, 0x3d8ace6du, 0xdbc2481eu, 0x79f9c1cfu, 0x18313b80u, 0xb668b531u, 0x54a02ee2u, 0xf2d7a893u,
    0x910f2244u, 0x2f469bf5u, 0xcd7e15a6u, 0x6bb58f57u, 0x09ed0908u, 0xa82482b9u, 0x465bfc6au, 0xe493761bu,
    0x82caefccu, 0x2102697du, 0xbf39e32eu, 0x5d715cdfu, 0xfba8d690u, 0x99e05041u, 0x3817c9f2u, 0xd64f43a3u,
    0x7486bd54u, 0x12be3705u, 0xb0f5b0b6u, 0x4f2d2a67u, 0xed64a418u, 0x8b9c1dc9u, 0x29d3977au, 0xc80b112bu,
    0x66428adcu, 0x047a048du, 0xa2b17e3eu, 0x40e8f7efu, 0xdf2071a0u, 0x7d57eb51u, 0x1b8f6502u, 0xb9c6deb3u,
    0x57fe5864u, 0xf635d215u, 0x946d4bc6u, 0x32a4c577u, 0xd0dc3f28u, 0x6f13b8d9u, 0x0d4b328au, 0xab82ac3bu,
};

static const uint32_t bshim_162_tab7[96] = {
    0x769b984du, 0x14d311feu, 0xb30a8bafu, 0x51420560u, 0xef797f11u, 0x8db0f8c2u, 0x2be87273u, 0xca1fec24u,
    0x685765d5u, 0x068edf86u, 0xa4c65937u, 0x42fdd2e8u, 0xe1354c99u, 0x7f6cc64au, 0x1da43ffbu, 0xbbdbb9acu,
    0x5a13335du, 0xf84aad0eu, 0x968226bfu, 0x34b9a070u, 0xd2f11a21u, 0x712893d2u, 0x0f600d83u, 0xad978734u,
    0x4bcf00e5u, 0xea067a96u, 0x883df447u, 0x26756df8u, 0xc4ace7a9u, 0x62e4615au, 0x011bdb0bu, 0x9f5354bcu,
    0x3d8ace6du, 0xdbc2481eu, 0x79f9c1cfu, 0x18313b80u, 0xb668b531u, 0x54a02ee2u, 0xf2d7a893u, 0x910f2244u,
    0x2f469bf5u, 0xcd7e15a6u, 0x6bb58f57u, 0x09ed0908u, 0xa82482b9u, 0x465bfc6au, 0xe493761bu, 0x82caefccu,
    0x2102697du, 0xbf39e32eu, 0x5d715cdfu, 0xfba8d690u, 0x99e05041u, 0x3817c9f2u, 0xd64f43a3u, 0x7486bd54u,
    0x12be3705u, 0xb0f5b0b6u, 0x4f2d2a67u, 0xed64a418u, 0x8b9c1dc9u, 0x29d3977au, 0xc80b112bu, 0x66428adcu,
    0x047a048du, 0xa2b17e3eu, 0x40e8f7efu, 0xdf2071a0u, 0x7d57eb51u, 0x1b8f6502u, 0xb9c6deb3u, 0x57fe5864u,
    0xf635d215u, 0x946d4bc6u, 0x32a4c577u, 0xd0dc3f28u, 0x6f13b8d9u, 0x0d4b328au, 0xab82ac3bu, 0x49ba25ecu,
    0xe7f19f9du, 0x8629194eu, 0x246092ffu, 0xc2980cb0u, 0x60cf8661u, 0xff070012u, 0x9d3e79c3u, 0x3b75f374u,
    0xd9ad6d25u, 0x77e4e6d6u, 0x161c6087u, 0xb453da38u, 0x528b53e9u, 0xf0c2cd9au, 0x8efa474bu, 0x2d31c0fcu,
};

struct bshim_162_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_162_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_162_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_162_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_162_reset(struct bshim_162_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0013933eu;
    return 0;
}

