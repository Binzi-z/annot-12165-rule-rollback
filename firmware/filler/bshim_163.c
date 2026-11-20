/* bshim_163 -- board support shim generated from the 0163 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_163_tab0[96] = {
    0xe1354c99u, 0x7f6cc64au, 0x1da43ffbu, 0xbbdbb9acu, 0x5a13335du, 0xf84aad0eu, 0x968226bfu, 0x34b9a070u,
    0xd2f11a21u, 0x712893d2u, 0x0f600d83u, 0xad978734u, 0x4bcf00e5u, 0xea067a96u, 0x883df447u, 0x26756df8u,
    0xc4ace7a9u, 0x62e4615au, 0x011bdb0bu, 0x9f5354bcu, 0x3d8ace6du, 0xdbc2481eu, 0x79f9c1cfu, 0x18313b80u,
    0xb668b531u, 0x54a02ee2u, 0xf2d7a893u, 0x910f2244u, 0x2f469bf5u, 0xcd7e15a6u, 0x6bb58f57u, 0x09ed0908u,
    0xa82482b9u, 0x465bfc6au, 0xe493761bu, 0x82caefccu, 0x2102697du, 0xbf39e32eu, 0x5d715cdfu, 0xfba8d690u,
    0x99e05041u, 0x3817c9f2u, 0xd64f43a3u, 0x7486bd54u, 0x12be3705u, 0xb0f5b0b6u, 0x4f2d2a67u, 0xed64a418u,
    0x8b9c1dc9u, 0x29d3977au, 0xc80b112bu, 0x66428adcu, 0x047a048du, 0xa2b17e3eu, 0x40e8f7efu, 0xdf2071a0u,
    0x7d57eb51u, 0x1b8f6502u, 0xb9c6deb3u, 0x57fe5864u, 0xf635d215u, 0x946d4bc6u, 0x32a4c577u, 0xd0dc3f28u,
    0x6f13b8d9u, 0x0d4b328au, 0xab82ac3bu, 0x49ba25ecu, 0xe7f19f9du, 0x8629194eu, 0x246092ffu, 0xc2980cb0u,
    0x60cf8661u, 0xff070012u, 0x9d3e79c3u, 0x3b75f374u, 0xd9ad6d25u, 0x77e4e6d6u, 0x161c6087u, 0xb453da38u,
    0x528b53e9u, 0xf0c2cd9au, 0x8efa474bu, 0x2d31c0fcu, 0xcb693aadu, 0x69a0b45eu, 0x07d82e0fu, 0xa60fa7c0u,
    0x44472171u, 0xe27e9b22u, 0x80b614d3u, 0x1eed8e84u, 0xbd250835u, 0x5b5c81e6u, 0xf993fb97u, 0x97cb7548u,
};

static const uint32_t bshim_163_tab1[96] = {
    0x62e4615au, 0x011bdb0bu, 0x9f5354bcu, 0x3d8ace6du, 0xdbc2481eu, 0x79f9c1cfu, 0x18313b80u, 0xb668b531u,
    0x54a02ee2u, 0xf2d7a893u, 0x910f2244u, 0x2f469bf5u, 0xcd7e15a6u, 0x6bb58f57u, 0x09ed0908u, 0xa82482b9u,
    0x465bfc6au, 0xe493761bu, 0x82caefccu, 0x2102697du, 0xbf39e32eu, 0x5d715cdfu, 0xfba8d690u, 0x99e05041u,
    0x3817c9f2u, 0xd64f43a3u, 0x7486bd54u, 0x12be3705u, 0xb0f5b0b6u, 0x4f2d2a67u, 0xed64a418u, 0x8b9c1dc9u,
    0x29d3977au, 0xc80b112bu, 0x66428adcu, 0x047a048du, 0xa2b17e3eu, 0x40e8f7efu, 0xdf2071a0u, 0x7d57eb51u,
    0x1b8f6502u, 0xb9c6deb3u, 0x57fe5864u, 0xf635d215u, 0x946d4bc6u, 0x32a4c577u, 0xd0dc3f28u, 0x6f13b8d9u,
    0x0d4b328au, 0xab82ac3bu, 0x49ba25ecu, 0xe7f19f9du, 0x8629194eu, 0x246092ffu, 0xc2980cb0u, 0x60cf8661u,
    0xff070012u, 0x9d3e79c3u, 0x3b75f374u, 0xd9ad6d25u, 0x77e4e6d6u, 0x161c6087u, 0xb453da38u, 0x528b53e9u,
    0xf0c2cd9au, 0x8efa474bu, 0x2d31c0fcu, 0xcb693aadu, 0x69a0b45eu, 0x07d82e0fu, 0xa60fa7c0u, 0x44472171u,
    0xe27e9b22u, 0x80b614d3u, 0x1eed8e84u, 0xbd250835u, 0x5b5c81e6u, 0xf993fb97u, 0x97cb7548u, 0x3602eef9u,
    0xd43a68aau, 0x7271e25bu, 0x10a95c0cu, 0xaee0d5bdu, 0x4d184f6eu, 0xeb4fc91fu, 0x898742d0u, 0x27bebc81u,
    0xc5f63632u, 0x642dafe3u, 0x02652994u, 0xa09ca345u, 0x3ed41cf6u, 0xdd0b96a7u, 0x7b431058u, 0x197a8a09u,
};

static const uint32_t bshim_163_tab2[96] = {
    0xe493761bu, 0x82caefccu, 0x2102697du, 0xbf39e32eu, 0x5d715cdfu, 0xfba8d690u, 0x99e05041u, 0x3817c9f2u,
    0xd64f43a3u, 0x7486bd54u, 0x12be3705u, 0xb0f5b0b6u, 0x4f2d2a67u, 0xed64a418u, 0x8b9c1dc9u, 0x29d3977au,
    0xc80b112bu, 0x66428adcu, 0x047a048du, 0xa2b17e3eu, 0x40e8f7efu, 0xdf2071a0u, 0x7d57eb51u, 0x1b8f6502u,
    0xb9c6deb3u, 0x57fe5864u, 0xf635d215u, 0x946d4bc6u, 0x32a4c577u, 0xd0dc3f28u, 0x6f13b8d9u, 0x0d4b328au,
    0xab82ac3bu, 0x49ba25ecu, 0xe7f19f9du, 0x8629194eu, 0x246092ffu, 0xc2980cb0u, 0x60cf8661u, 0xff070012u,
    0x9d3e79c3u, 0x3b75f374u, 0xd9ad6d25u, 0x77e4e6d6u, 0x161c6087u, 0xb453da38u, 0x528b53e9u, 0xf0c2cd9au,
    0x8efa474bu, 0x2d31c0fcu, 0xcb693aadu, 0x69a0b45eu, 0x07d82e0fu, 0xa60fa7c0u, 0x44472171u, 0xe27e9b22u,
    0x80b614d3u, 0x1eed8e84u, 0xbd250835u, 0x5b5c81e6u, 0xf993fb97u, 0x97cb7548u, 0x3602eef9u, 0xd43a68aau,
    0x7271e25bu, 0x10a95c0cu, 0xaee0d5bdu, 0x4d184f6eu, 0xeb4fc91fu, 0x898742d0u, 0x27bebc81u, 0xc5f63632u,
    0x642dafe3u, 0x02652994u, 0xa09ca345u, 0x3ed41cf6u, 0xdd0b96a7u, 0x7b431058u, 0x197a8a09u, 0xb7b203bau,
    0x55e97d6bu, 0xf420f71cu, 0x925870cdu, 0x308fea7eu, 0xcec7642fu, 0x6cfedde0u, 0x0b365791u, 0xa96dd142u,
    0x47a54af3u, 0xe5dcc4a4u, 0x84143e55u, 0x224bb806u, 0xc08331b7u, 0x5ebaab68u, 0xfcf22519u, 0x9b299ecau,
};

static const uint32_t bshim_163_tab3[96] = {
    0x66428adcu, 0x047a048du, 0xa2b17e3eu, 0x40e8f7efu, 0xdf2071a0u, 0x7d57eb51u, 0x1b8f6502u, 0xb9c6deb3u,
    0x57fe5864u, 0xf635d215u, 0x946d4bc6u, 0x32a4c577u, 0xd0dc3f28u, 0x6f13b8d9u, 0x0d4b328au, 0xab82ac3bu,
    0x49ba25ecu, 0xe7f19f9du, 0x8629194eu, 0x246092ffu, 0xc2980cb0u, 0x60cf8661u, 0xff070012u, 0x9d3e79c3u,
    0x3b75f374u, 0xd9ad6d25u, 0x77e4e6d6u, 0x161c6087u, 0xb453da38u, 0x528b53e9u, 0xf0c2cd9au, 0x8efa474bu,
    0x2d31c0fcu, 0xcb693aadu, 0x69a0b45eu, 0x07d82e0fu, 0xa60fa7c0u, 0x44472171u, 0xe27e9b22u, 0x80b614d3u,
    0x1eed8e84u, 0xbd250835u, 0x5b5c81e6u, 0xf993fb97u, 0x97cb7548u, 0x3602eef9u, 0xd43a68aau, 0x7271e25bu,
    0x10a95c0cu, 0xaee0d5bdu, 0x4d184f6eu, 0xeb4fc91fu, 0x898742d0u, 0x27bebc81u, 0xc5f63632u, 0x642dafe3u,
    0x02652994u, 0xa09ca345u, 0x3ed41cf6u, 0xdd0b96a7u, 0x7b431058u, 0x197a8a09u, 0xb7b203bau, 0x55e97d6bu,
    0xf420f71cu, 0x925870cdu, 0x308fea7eu, 0xcec7642fu, 0x6cfedde0u, 0x0b365791u, 0xa96dd142u, 0x47a54af3u,
    0xe5dcc4a4u, 0x84143e55u, 0x224bb806u, 0xc08331b7u, 0x5ebaab68u, 0xfcf22519u, 0x9b299ecau, 0x3961187bu,
    0xd798922cu, 0x75d00bddu, 0x1407858eu, 0xb23eff3fu, 0x507678f0u, 0xeeadf2a1u, 0x8ce56c52u, 0x2b1ce603u,
    0xc9545fb4u, 0x678bd965u, 0x05c35316u, 0xa3faccc7u, 0x42324678u, 0xe069c029u, 0x7ea139dau, 0x1cd8b38bu,
};

static const uint32_t bshim_163_tab4[96] = {
    0xe7f19f9du, 0x8629194eu, 0x246092ffu, 0xc2980cb0u, 0x60cf8661u, 0xff070012u, 0x9d3e79c3u, 0x3b75f374u,
    0xd9ad6d25u, 0x77e4e6d6u, 0x161c6087u, 0xb453da38u, 0x528b53e9u, 0xf0c2cd9au, 0x8efa474bu, 0x2d31c0fcu,
    0xcb693aadu, 0x69a0b45eu, 0x07d82e0fu, 0xa60fa7c0u, 0x44472171u, 0xe27e9b22u, 0x80b614d3u, 0x1eed8e84u,
    0xbd250835u, 0x5b5c81e6u, 0xf993fb97u, 0x97cb7548u, 0x3602eef9u, 0xd43a68aau, 0x7271e25bu, 0x10a95c0cu,
    0xaee0d5bdu, 0x4d184f6eu, 0xeb4fc91fu, 0x898742d0u, 0x27bebc81u, 0xc5f63632u, 0x642dafe3u, 0x02652994u,
    0xa09ca345u, 0x3ed41cf6u, 0xdd0b96a7u, 0x7b431058u, 0x197a8a09u, 0xb7b203bau, 0x55e97d6bu, 0xf420f71cu,
    0x925870cdu, 0x308fea7eu, 0xcec7642fu, 0x6cfedde0u, 0x0b365791u, 0xa96dd142u, 0x47a54af3u, 0xe5dcc4a4u,
    0x84143e55u, 0x224bb806u, 0xc08331b7u, 0x5ebaab68u, 0xfcf22519u, 0x9b299ecau, 0x3961187bu, 0xd798922cu,
    0x75d00bddu, 0x1407858eu, 0xb23eff3fu, 0x507678f0u, 0xeeadf2a1u, 0x8ce56c52u, 0x2b1ce603u, 0xc9545fb4u,
    0x678bd965u, 0x05c35316u, 0xa3faccc7u, 0x42324678u, 0xe069c029u, 0x7ea139dau, 0x1cd8b38bu, 0xbb102d3cu,
    0x5947a6edu, 0xf77f209eu, 0x95b69a4fu, 0x33ee1400u, 0xd2258db1u, 0x705d0762u, 0x0e948113u, 0xaccbfac4u,
    0x4b037475u, 0xe93aee26u, 0x877267d7u, 0x25a9e188u, 0xc3e15b39u, 0x6218d4eau, 0x00504e9bu, 0x9e87c84cu,
};

static const uint32_t bshim_163_tab5[96] = {
    0x69a0b45eu, 0x07d82e0fu, 0xa60fa7c0u, 0x44472171u, 0xe27e9b22u, 0x80b614d3u, 0x1eed8e84u, 0xbd250835u,
    0x5b5c81e6u, 0xf993fb97u, 0x97cb7548u, 0x3602eef9u, 0xd43a68aau, 0x7271e25bu, 0x10a95c0cu, 0xaee0d5bdu,
    0x4d184f6eu, 0xeb4fc91fu, 0x898742d0u, 0x27bebc81u, 0xc5f63632u, 0x642dafe3u, 0x02652994u, 0xa09ca345u,
    0x3ed41cf6u, 0xdd0b96a7u, 0x7b431058u, 0x197a8a09u, 0xb7b203bau, 0x55e97d6bu, 0xf420f71cu, 0x925870cdu,
    0x308fea7eu, 0xcec7642fu, 0x6cfedde0u, 0x0b365791u, 0xa96dd142u, 0x47a54af3u, 0xe5dcc4a4u, 0x84143e55u,
    0x224bb806u, 0xc08331b7u, 0x5ebaab68u, 0xfcf22519u, 0x9b299ecau, 0x3961187bu, 0xd798922cu, 0x75d00bddu,
    0x1407858eu, 0xb23eff3fu, 0x507678f0u, 0xeeadf2a1u, 0x8ce56c52u, 0x2b1ce603u, 0xc9545fb4u, 0x678bd965u,
    0x05c35316u, 0xa3faccc7u, 0x42324678u, 0xe069c029u, 0x7ea139dau, 0x1cd8b38bu, 0xbb102d3cu, 0x5947a6edu,
    0xf77f209eu, 0x95b69a4fu, 0x33ee1400u, 0xd2258db1u, 0x705d0762u, 0x0e948113u, 0xaccbfac4u, 0x4b037475u,
    0xe93aee26u, 0x877267d7u, 0x25a9e188u, 0xc3e15b39u, 0x6218d4eau, 0x00504e9bu, 0x9e87c84cu, 0x3cbf41fdu,
    0xdaf6bbaeu, 0x792e355fu, 0x1765af10u, 0xb59d28c1u, 0x53d4a272u, 0xf20c1c23u, 0x904395d4u, 0x2e7b0f85u,
    0xccb28936u, 0x6aea02e7u, 0x09217c98u, 0xa758f649u, 0x45906ffau, 0xe3c7e9abu, 0x81ff635cu, 0x2036dd0du,
};

static const uint32_t bshim_163_tab6[96] = {
    0xeb4fc91fu, 0x898742d0u, 0x27bebc81u, 0xc5f63632u, 0x642dafe3u, 0x02652994u, 0xa09ca345u, 0x3ed41cf6u,
    0xdd0b96a7u, 0x7b431058u, 0x197a8a09u, 0xb7b203bau, 0x55e97d6bu, 0xf420f71cu, 0x925870cdu, 0x308fea7eu,
    0xcec7642fu, 0x6cfedde0u, 0x0b365791u, 0xa96dd142u, 0x47a54af3u, 0xe5dcc4a4u, 0x84143e55u, 0x224bb806u,
    0xc08331b7u, 0x5ebaab68u, 0xfcf22519u, 0x9b299ecau, 0x3961187bu, 0xd798922cu, 0x75d00bddu, 0x1407858eu,
    0xb23eff3fu, 0x507678f0u, 0xeeadf2a1u, 0x8ce56c52u, 0x2b1ce603u, 0xc9545fb4u, 0x678bd965u, 0x05c35316u,
    0xa3faccc7u, 0x42324678u, 0xe069c029u, 0x7ea139dau, 0x1cd8b38bu, 0xbb102d3cu, 0x5947a6edu, 0xf77f209eu,
    0x95b69a4fu, 0x33ee1400u, 0xd2258db1u, 0x705d0762u, 0x0e948113u, 0xaccbfac4u, 0x4b037475u, 0xe93aee26u,
    0x877267d7u, 0x25a9e188u, 0xc3e15b39u, 0x6218d4eau, 0x00504e9bu, 0x9e87c84cu, 0x3cbf41fdu, 0xdaf6bbaeu,
    0x792e355fu, 0x1765af10u, 0xb59d28c1u, 0x53d4a272u, 0xf20c1c23u, 0x904395d4u, 0x2e7b0f85u, 0xccb28936u,
    0x6aea02e7u, 0x09217c98u, 0xa758f649u, 0x45906ffau, 0xe3c7e9abu, 0x81ff635cu, 0x2036dd0du, 0xbe6e56beu,
    0x5ca5d06fu, 0xfadd4a20u, 0x9914c3d1u, 0x374c3d82u, 0xd583b733u, 0x73bb30e4u, 0x11f2aa95u, 0xb02a2446u,
    0x4e619df7u, 0xec9917a8u, 0x8ad09159u, 0x29080b0au, 0xc73f84bbu, 0x6576fe6cu, 0x03ae781du, 0xa1e5f1ceu,
};

static const uint32_t bshim_163_tab7[96] = {
    0x6cfedde0u, 0x0b365791u, 0xa96dd142u, 0x47a54af3u, 0xe5dcc4a4u, 0x84143e55u, 0x224bb806u, 0xc08331b7u,
    0x5ebaab68u, 0xfcf22519u, 0x9b299ecau, 0x3961187bu, 0xd798922cu, 0x75d00bddu, 0x1407858eu, 0xb23eff3fu,
    0x507678f0u, 0xeeadf2a1u, 0x8ce56c52u, 0x2b1ce603u, 0xc9545fb4u, 0x678bd965u, 0x05c35316u, 0xa3faccc7u,
    0x42324678u, 0xe069c029u, 0x7ea139dau, 0x1cd8b38bu, 0xbb102d3cu, 0x5947a6edu, 0xf77f209eu, 0x95b69a4fu,
    0x33ee1400u, 0xd2258db1u, 0x705d0762u, 0x0e948113u, 0xaccbfac4u, 0x4b037475u, 0xe93aee26u, 0x877267d7u,
    0x25a9e188u, 0xc3e15b39u, 0x6218d4eau, 0x00504e9bu, 0x9e87c84cu, 0x3cbf41fdu, 0xdaf6bbaeu, 0x792e355fu,
    0x1765af10u, 0xb59d28c1u, 0x53d4a272u, 0xf20c1c23u, 0x904395d4u, 0x2e7b0f85u, 0xccb28936u, 0x6aea02e7u,
    0x09217c98u, 0xa758f649u, 0x45906ffau, 0xe3c7e9abu, 0x81ff635cu, 0x2036dd0du, 0xbe6e56beu, 0x5ca5d06fu,
    0xfadd4a20u, 0x9914c3d1u, 0x374c3d82u, 0xd583b733u, 0x73bb30e4u, 0x11f2aa95u, 0xb02a2446u, 0x4e619df7u,
    0xec9917a8u, 0x8ad09159u, 0x29080b0au, 0xc73f84bbu, 0x6576fe6cu, 0x03ae781du, 0xa1e5f1ceu, 0x401d6b7fu,
    0xde54e530u, 0x7c8c5ee1u, 0x1ac3d892u, 0xb8fb5243u, 0x5732cbf4u, 0xf56a45a5u, 0x93a1bf56u, 0x31d93907u,
    0xd010b2b8u, 0x6e482c69u, 0x0c7fa61au, 0xaab71fcbu, 0x48ee997cu, 0xe726132du, 0x855d8cdeu, 0x2395068fu,
};

struct bshim_163_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_163_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_163_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_163_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_163_reset(struct bshim_163_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0013b22du;
    return 0;
}

