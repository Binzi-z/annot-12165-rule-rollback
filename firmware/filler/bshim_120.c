/* bshim_120 -- board support shim generated from the 0120 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_120_tab0[96] = {
    0x7e889ce8u, 0x1cc01699u, 0xbaf7904au, 0x592f09fbu, 0xf76683acu, 0x959dfd5du, 0x33d5770eu, 0xd20cf0bfu,
    0x70446a70u, 0x0e7be421u, 0xacb35dd2u, 0x4aead783u, 0xe9225134u, 0x8759cae5u, 0x25914496u, 0xc3c8be47u,
    0x620037f8u, 0x0037b1a9u, 0x9e6f2b5au, 0x3ca6a50bu, 0xdade1ebcu, 0x7915986du, 0x174d121eu, 0xb5848bcfu,
    0x53bc0580u, 0xf1f37f31u, 0x902af8e2u, 0x2e627293u, 0xcc99ec44u, 0x6ad165f5u, 0x0908dfa6u, 0xa7405957u,
    0x4577d308u, 0xe3af4cb9u, 0x81e6c66au, 0x201e401bu, 0xbe55b9ccu, 0x5c8d337du, 0xfac4ad2eu, 0x98fc26dfu,
    0x3733a090u, 0xd56b1a41u, 0x73a293f2u, 0x11da0da3u, 0xb0118754u, 0x4e490105u, 0xec807ab6u, 0x8ab7f467u,
    0x28ef6e18u, 0xc726e7c9u, 0x655e617au, 0x0395db2bu, 0xa1cd54dcu, 0x4004ce8du, 0xde3c483eu, 0x7c73c1efu,
    0x1aab3ba0u, 0xb8e2b551u, 0x571a2f02u, 0xf551a8b3u, 0x93892264u, 0x31c09c15u, 0xcff815c6u, 0x6e2f8f77u,
    0x0c670928u, 0xaa9e82d9u, 0x48d5fc8au, 0xe70d763bu, 0x8544efecu, 0x237c699du, 0xc1b3e34eu, 0x5feb5cffu,
    0xfe22d6b0u, 0x9c5a5061u, 0x3a91ca12u, 0xd8c943c3u, 0x7700bd74u, 0x15383725u, 0xb36fb0d6u, 0x51a72a87u,
    0xefdea438u, 0x8e161de9u, 0x2c4d979au, 0xca85114bu, 0x68bc8afcu, 0x06f404adu, 0xa52b7e5eu, 0x4362f80fu,
    0xe19a71c0u, 0x7fd1eb71u, 0x1e096522u, 0xbc40ded3u, 0x5a785884u, 0xf8afd235u, 0x96e74be6u, 0x351ec597u,
};

static const uint32_t bshim_120_tab1[96] = {
    0x0037b1a9u, 0x9e6f2b5au, 0x3ca6a50bu, 0xdade1ebcu, 0x7915986du, 0x174d121eu, 0xb5848bcfu, 0x53bc0580u,
    0xf1f37f31u, 0x902af8e2u, 0x2e627293u, 0xcc99ec44u, 0x6ad165f5u, 0x0908dfa6u, 0xa7405957u, 0x4577d308u,
    0xe3af4cb9u, 0x81e6c66au, 0x201e401bu, 0xbe55b9ccu, 0x5c8d337du, 0xfac4ad2eu, 0x98fc26dfu, 0x3733a090u,
    0xd56b1a41u, 0x73a293f2u, 0x11da0da3u, 0xb0118754u, 0x4e490105u, 0xec807ab6u, 0x8ab7f467u, 0x28ef6e18u,
    0xc726e7c9u, 0x655e617au, 0x0395db2bu, 0xa1cd54dcu, 0x4004ce8du, 0xde3c483eu, 0x7c73c1efu, 0x1aab3ba0u,
    0xb8e2b551u, 0x571a2f02u, 0xf551a8b3u, 0x93892264u, 0x31c09c15u, 0xcff815c6u, 0x6e2f8f77u, 0x0c670928u,
    0xaa9e82d9u, 0x48d5fc8au, 0xe70d763bu, 0x8544efecu, 0x237c699du, 0xc1b3e34eu, 0x5feb5cffu, 0xfe22d6b0u,
    0x9c5a5061u, 0x3a91ca12u, 0xd8c943c3u, 0x7700bd74u, 0x15383725u, 0xb36fb0d6u, 0x51a72a87u, 0xefdea438u,
    0x8e161de9u, 0x2c4d979au, 0xca85114bu, 0x68bc8afcu, 0x06f404adu, 0xa52b7e5eu, 0x4362f80fu, 0xe19a71c0u,
    0x7fd1eb71u, 0x1e096522u, 0xbc40ded3u, 0x5a785884u, 0xf8afd235u, 0x96e74be6u, 0x351ec597u, 0xd3563f48u,
    0x718db8f9u, 0x0fc532aau, 0xadfcac5bu, 0x4c34260cu, 0xea6b9fbdu, 0x88a3196eu, 0x26da931fu, 0xc5120cd0u,
    0x63498681u, 0x01810032u, 0x9fb879e3u, 0x3deff394u, 0xdc276d45u, 0x7a5ee6f6u, 0x189660a7u, 0xb6cdda58u,
};

static const uint32_t bshim_120_tab2[96] = {
    0x81e6c66au, 0x201e401bu, 0xbe55b9ccu, 0x5c8d337du, 0xfac4ad2eu, 0x98fc26dfu, 0x3733a090u, 0xd56b1a41u,
    0x73a293f2u, 0x11da0da3u, 0xb0118754u, 0x4e490105u, 0xec807ab6u, 0x8ab7f467u, 0x28ef6e18u, 0xc726e7c9u,
    0x655e617au, 0x0395db2bu, 0xa1cd54dcu, 0x4004ce8du, 0xde3c483eu, 0x7c73c1efu, 0x1aab3ba0u, 0xb8e2b551u,
    0x571a2f02u, 0xf551a8b3u, 0x93892264u, 0x31c09c15u, 0xcff815c6u, 0x6e2f8f77u, 0x0c670928u, 0xaa9e82d9u,
    0x48d5fc8au, 0xe70d763bu, 0x8544efecu, 0x237c699du, 0xc1b3e34eu, 0x5feb5cffu, 0xfe22d6b0u, 0x9c5a5061u,
    0x3a91ca12u, 0xd8c943c3u, 0x7700bd74u, 0x15383725u, 0xb36fb0d6u, 0x51a72a87u, 0xefdea438u, 0x8e161de9u,
    0x2c4d979au, 0xca85114bu, 0x68bc8afcu, 0x06f404adu, 0xa52b7e5eu, 0x4362f80fu, 0xe19a71c0u, 0x7fd1eb71u,
    0x1e096522u, 0xbc40ded3u, 0x5a785884u, 0xf8afd235u, 0x96e74be6u, 0x351ec597u, 0xd3563f48u, 0x718db8f9u,
    0x0fc532aau, 0xadfcac5bu, 0x4c34260cu, 0xea6b9fbdu, 0x88a3196eu, 0x26da931fu, 0xc5120cd0u, 0x63498681u,
    0x01810032u, 0x9fb879e3u, 0x3deff394u, 0xdc276d45u, 0x7a5ee6f6u, 0x189660a7u, 0xb6cdda58u, 0x55055409u,
    0xf33ccdbau, 0x9174476bu, 0x2fabc11cu, 0xcde33acdu, 0x6c1ab47eu, 0x0a522e2fu, 0xa889a7e0u, 0x46c12191u,
    0xe4f89b42u, 0x833014f3u, 0x21678ea4u, 0xbf9f0855u, 0x5dd68206u, 0xfc0dfbb7u, 0x9a457568u, 0x387cef19u,
};

static const uint32_t bshim_120_tab3[96] = {
    0x0395db2bu, 0xa1cd54dcu, 0x4004ce8du, 0xde3c483eu, 0x7c73c1efu, 0x1aab3ba0u, 0xb8e2b551u, 0x571a2f02u,
    0xf551a8b3u, 0x93892264u, 0x31c09c15u, 0xcff815c6u, 0x6e2f8f77u, 0x0c670928u, 0xaa9e82d9u, 0x48d5fc8au,
    0xe70d763bu, 0x8544efecu, 0x237c699du, 0xc1b3e34eu, 0x5feb5cffu, 0xfe22d6b0u, 0x9c5a5061u, 0x3a91ca12u,
    0xd8c943c3u, 0x7700bd74u, 0x15383725u, 0xb36fb0d6u, 0x51a72a87u, 0xefdea438u, 0x8e161de9u, 0x2c4d979au,
    0xca85114bu, 0x68bc8afcu, 0x06f404adu, 0xa52b7e5eu, 0x4362f80fu, 0xe19a71c0u, 0x7fd1eb71u, 0x1e096522u,
    0xbc40ded3u, 0x5a785884u, 0xf8afd235u, 0x96e74be6u, 0x351ec597u, 0xd3563f48u, 0x718db8f9u, 0x0fc532aau,
    0xadfcac5bu, 0x4c34260cu, 0xea6b9fbdu, 0x88a3196eu, 0x26da931fu, 0xc5120cd0u, 0x63498681u, 0x01810032u,
    0x9fb879e3u, 0x3deff394u, 0xdc276d45u, 0x7a5ee6f6u, 0x189660a7u, 0xb6cdda58u, 0x55055409u, 0xf33ccdbau,
    0x9174476bu, 0x2fabc11cu, 0xcde33acdu, 0x6c1ab47eu, 0x0a522e2fu, 0xa889a7e0u, 0x46c12191u, 0xe4f89b42u,
    0x833014f3u, 0x21678ea4u, 0xbf9f0855u, 0x5dd68206u, 0xfc0dfbb7u, 0x9a457568u, 0x387cef19u, 0xd6b468cau,
    0x74ebe27bu, 0x13235c2cu, 0xb15ad5ddu, 0x4f924f8eu, 0xedc9c93fu, 0x8c0142f0u, 0x2a38bca1u, 0xc8703652u,
    0x66a7b003u, 0x04df29b4u, 0xa316a365u, 0x414e1d16u, 0xdf8596c7u, 0x7dbd1078u, 0x1bf48a29u, 0xba2c03dau,
};

static const uint32_t bshim_120_tab4[96] = {
    0x8544efecu, 0x237c699du, 0xc1b3e34eu, 0x5feb5cffu, 0xfe22d6b0u, 0x9c5a5061u, 0x3a91ca12u, 0xd8c943c3u,
    0x7700bd74u, 0x15383725u, 0xb36fb0d6u, 0x51a72a87u, 0xefdea438u, 0x8e161de9u, 0x2c4d979au, 0xca85114bu,
    0x68bc8afcu, 0x06f404adu, 0xa52b7e5eu, 0x4362f80fu, 0xe19a71c0u, 0x7fd1eb71u, 0x1e096522u, 0xbc40ded3u,
    0x5a785884u, 0xf8afd235u, 0x96e74be6u, 0x351ec597u, 0xd3563f48u, 0x718db8f9u, 0x0fc532aau, 0xadfcac5bu,
    0x4c34260cu, 0xea6b9fbdu, 0x88a3196eu, 0x26da931fu, 0xc5120cd0u, 0x63498681u, 0x01810032u, 0x9fb879e3u,
    0x3deff394u, 0xdc276d45u, 0x7a5ee6f6u, 0x189660a7u, 0xb6cdda58u, 0x55055409u, 0xf33ccdbau, 0x9174476bu,
    0x2fabc11cu, 0xcde33acdu, 0x6c1ab47eu, 0x0a522e2fu, 0xa889a7e0u, 0x46c12191u, 0xe4f89b42u, 0x833014f3u,
    0x21678ea4u, 0xbf9f0855u, 0x5dd68206u, 0xfc0dfbb7u, 0x9a457568u, 0x387cef19u, 0xd6b468cau, 0x74ebe27bu,
    0x13235c2cu, 0xb15ad5ddu, 0x4f924f8eu, 0xedc9c93fu, 0x8c0142f0u, 0x2a38bca1u, 0xc8703652u, 0x66a7b003u,
    0x04df29b4u, 0xa316a365u, 0x414e1d16u, 0xdf8596c7u, 0x7dbd1078u, 0x1bf48a29u, 0xba2c03dau, 0x58637d8bu,
    0xf69af73cu, 0x94d270edu, 0x3309ea9eu, 0xd141644fu, 0x6f78de00u, 0x0db057b1u, 0xabe7d162u, 0x4a1f4b13u,
    0xe856c4c4u, 0x868e3e75u, 0x24c5b826u, 0xc2fd31d7u, 0x6134ab88u, 0xff6c2539u, 0x9da39eeau, 0x3bdb189bu,
};

static const uint32_t bshim_120_tab5[96] = {
    0x06f404adu, 0xa52b7e5eu, 0x4362f80fu, 0xe19a71c0u, 0x7fd1eb71u, 0x1e096522u, 0xbc40ded3u, 0x5a785884u,
    0xf8afd235u, 0x96e74be6u, 0x351ec597u, 0xd3563f48u, 0x718db8f9u, 0x0fc532aau, 0xadfcac5bu, 0x4c34260cu,
    0xea6b9fbdu, 0x88a3196eu, 0x26da931fu, 0xc5120cd0u, 0x63498681u, 0x01810032u, 0x9fb879e3u, 0x3deff394u,
    0xdc276d45u, 0x7a5ee6f6u, 0x189660a7u, 0xb6cdda58u, 0x55055409u, 0xf33ccdbau, 0x9174476bu, 0x2fabc11cu,
    0xcde33acdu, 0x6c1ab47eu, 0x0a522e2fu, 0xa889a7e0u, 0x46c12191u, 0xe4f89b42u, 0x833014f3u, 0x21678ea4u,
    0xbf9f0855u, 0x5dd68206u, 0xfc0dfbb7u, 0x9a457568u, 0x387cef19u, 0xd6b468cau, 0x74ebe27bu, 0x13235c2cu,
    0xb15ad5ddu, 0x4f924f8eu, 0xedc9c93fu, 0x8c0142f0u, 0x2a38bca1u, 0xc8703652u, 0x66a7b003u, 0x04df29b4u,
    0xa316a365u, 0x414e1d16u, 0xdf8596c7u, 0x7dbd1078u, 0x1bf48a29u, 0xba2c03dau, 0x58637d8bu, 0xf69af73cu,
    0x94d270edu, 0x3309ea9eu, 0xd141644fu, 0x6f78de00u, 0x0db057b1u, 0xabe7d162u, 0x4a1f4b13u, 0xe856c4c4u,
    0x868e3e75u, 0x24c5b826u, 0xc2fd31d7u, 0x6134ab88u, 0xff6c2539u, 0x9da39eeau, 0x3bdb189bu, 0xda12924cu,
    0x784a0bfdu, 0x168185aeu, 0xb4b8ff5fu, 0x52f07910u, 0xf127f2c1u, 0x8f5f6c72u, 0x2d96e623u, 0xcbce5fd4u,
    0x6a05d985u, 0x083d5336u, 0xa674cce7u, 0x44ac4698u, 0xe2e3c049u, 0x811b39fau, 0x1f52b3abu, 0xbd8a2d5cu,
};

static const uint32_t bshim_120_tab6[96] = {
    0x88a3196eu, 0x26da931fu, 0xc5120cd0u, 0x63498681u, 0x01810032u, 0x9fb879e3u, 0x3deff394u, 0xdc276d45u,
    0x7a5ee6f6u, 0x189660a7u, 0xb6cdda58u, 0x55055409u, 0xf33ccdbau, 0x9174476bu, 0x2fabc11cu, 0xcde33acdu,
    0x6c1ab47eu, 0x0a522e2fu, 0xa889a7e0u, 0x46c12191u, 0xe4f89b42u, 0x833014f3u, 0x21678ea4u, 0xbf9f0855u,
    0x5dd68206u, 0xfc0dfbb7u, 0x9a457568u, 0x387cef19u, 0xd6b468cau, 0x74ebe27bu, 0x13235c2cu, 0xb15ad5ddu,
    0x4f924f8eu, 0xedc9c93fu, 0x8c0142f0u, 0x2a38bca1u, 0xc8703652u, 0x66a7b003u, 0x04df29b4u, 0xa316a365u,
    0x414e1d16u, 0xdf8596c7u, 0x7dbd1078u, 0x1bf48a29u, 0xba2c03dau, 0x58637d8bu, 0xf69af73cu, 0x94d270edu,
    0x3309ea9eu, 0xd141644fu, 0x6f78de00u, 0x0db057b1u, 0xabe7d162u, 0x4a1f4b13u, 0xe856c4c4u, 0x868e3e75u,
    0x24c5b826u, 0xc2fd31d7u, 0x6134ab88u, 0xff6c2539u, 0x9da39eeau, 0x3bdb189bu, 0xda12924cu, 0x784a0bfdu,
    0x168185aeu, 0xb4b8ff5fu, 0x52f07910u, 0xf127f2c1u, 0x8f5f6c72u, 0x2d96e623u, 0xcbce5fd4u, 0x6a05d985u,
    0x083d5336u, 0xa674cce7u, 0x44ac4698u, 0xe2e3c049u, 0x811b39fau, 0x1f52b3abu, 0xbd8a2d5cu, 0x5bc1a70du,
    0xf9f920beu, 0x98309a6fu, 0x36681420u, 0xd49f8dd1u, 0x72d70782u, 0x110e8133u, 0xaf45fae4u, 0x4d7d7495u,
    0xebb4ee46u, 0x89ec67f7u, 0x2823e1a8u, 0xc65b5b59u, 0x6492d50au, 0x02ca4ebbu, 0xa101c86cu, 0x3f39421du,
};

static const uint32_t bshim_120_tab7[96] = {
    0x0a522e2fu, 0xa889a7e0u, 0x46c12191u, 0xe4f89b42u, 0x833014f3u, 0x21678ea4u, 0xbf9f0855u, 0x5dd68206u,
    0xfc0dfbb7u, 0x9a457568u, 0x387cef19u, 0xd6b468cau, 0x74ebe27bu, 0x13235c2cu, 0xb15ad5ddu, 0x4f924f8eu,
    0xedc9c93fu, 0x8c0142f0u, 0x2a38bca1u, 0xc8703652u, 0x66a7b003u, 0x04df29b4u, 0xa316a365u, 0x414e1d16u,
    0xdf8596c7u, 0x7dbd1078u, 0x1bf48a29u, 0xba2c03dau, 0x58637d8bu, 0xf69af73cu, 0x94d270edu, 0x3309ea9eu,
    0xd141644fu, 0x6f78de00u, 0x0db057b1u, 0xabe7d162u, 0x4a1f4b13u, 0xe856c4c4u, 0x868e3e75u, 0x24c5b826u,
    0xc2fd31d7u, 0x6134ab88u, 0xff6c2539u, 0x9da39eeau, 0x3bdb189bu, 0xda12924cu, 0x784a0bfdu, 0x168185aeu,
    0xb4b8ff5fu, 0x52f07910u, 0xf127f2c1u, 0x8f5f6c72u, 0x2d96e623u, 0xcbce5fd4u, 0x6a05d985u, 0x083d5336u,
    0xa674cce7u, 0x44ac4698u, 0xe2e3c049u, 0x811b39fau, 0x1f52b3abu, 0xbd8a2d5cu, 0x5bc1a70du, 0xf9f920beu,
    0x98309a6fu, 0x36681420u, 0xd49f8dd1u, 0x72d70782u, 0x110e8133u, 0xaf45fae4u, 0x4d7d7495u, 0xebb4ee46u,
    0x89ec67f7u, 0x2823e1a8u, 0xc65b5b59u, 0x6492d50au, 0x02ca4ebbu, 0xa101c86cu, 0x3f39421du, 0xdd70bbceu,
    0x7ba8357fu, 0x19dfaf30u, 0xb81728e1u, 0x564ea292u, 0xf4861c43u, 0x92bd95f4u, 0x30f50fa5u, 0xcf2c8956u,
    0x6d640307u, 0x0b9b7cb8u, 0xa9d2f669u, 0x480a701au, 0xe641e9cbu, 0x8479637cu, 0x22b0dd2du, 0xc0e856deu,
};

struct bshim_120_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_120_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_120_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_120_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_120_reset(struct bshim_120_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000e8008u;
    return 0;
}

