/* bshim_008 -- board support shim generated from the 0008 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_008_tab0[96] = {
    0xb31a2c98u, 0x5151a649u, 0xef891ffau, 0x8dc099abu, 0x2bf8135cu, 0xca2f8d0du, 0x686706beu, 0x069e806fu,
    0xa4d5fa20u, 0x430d73d1u, 0xe144ed82u, 0x7f7c6733u, 0x1db3e0e4u, 0xbbeb5a95u, 0x5a22d446u, 0xf85a4df7u,
    0x9691c7a8u, 0x34c94159u, 0xd300bb0au, 0x713834bbu, 0x0f6fae6cu, 0xada7281du, 0x4bdea1ceu, 0xea161b7fu,
    0x884d9530u, 0x26850ee1u, 0xc4bc8892u, 0x62f40243u, 0x012b7bf4u, 0x9f62f5a5u, 0x3d9a6f56u, 0xdbd1e907u,
    0x7a0962b8u, 0x1840dc69u, 0xb678561au, 0x54afcfcbu, 0xf2e7497cu, 0x911ec32du, 0x2f563cdeu, 0xcd8db68fu,
    0x6bc53040u, 0x09fca9f1u, 0xa83423a2u, 0x466b9d53u, 0xe4a31704u, 0x82da90b5u, 0x21120a66u, 0xbf498417u,
    0x5d80fdc8u, 0xfbb87779u, 0x99eff12au, 0x38276adbu, 0xd65ee48cu, 0x74965e3du, 0x12cdd7eeu, 0xb105519fu,
    0x4f3ccb50u, 0xed744501u, 0x8babbeb2u, 0x29e33863u, 0xc81ab214u, 0x66522bc5u, 0x0489a576u, 0xa2c11f27u,
    0x40f898d8u, 0xdf301289u, 0x7d678c3au, 0x1b9f05ebu, 0xb9d67f9cu, 0x580df94du, 0xf64572feu, 0x947cecafu,
    0x32b46660u, 0xd0ebe011u, 0x6f2359c2u, 0x0d5ad373u, 0xab924d24u, 0x49c9c6d5u, 0xe8014086u, 0x8638ba37u,
    0x247033e8u, 0xc2a7ad99u, 0x60df274au, 0xff16a0fbu, 0x9d4e1aacu, 0x3b85945du, 0xd9bd0e0eu, 0x77f487bfu,
    0x162c0170u, 0xb4637b21u, 0x529af4d2u, 0xf0d26e83u, 0x8f09e834u, 0x2d4161e5u, 0xcb78db96u, 0x69b05547u,
};

static const uint32_t bshim_008_tab1[96] = {
    0x34c94159u, 0xd300bb0au, 0x713834bbu, 0x0f6fae6cu, 0xada7281du, 0x4bdea1ceu, 0xea161b7fu, 0x884d9530u,
    0x26850ee1u, 0xc4bc8892u, 0x62f40243u, 0x012b7bf4u, 0x9f62f5a5u, 0x3d9a6f56u, 0xdbd1e907u, 0x7a0962b8u,
    0x1840dc69u, 0xb678561au, 0x54afcfcbu, 0xf2e7497cu, 0x911ec32du, 0x2f563cdeu, 0xcd8db68fu, 0x6bc53040u,
    0x09fca9f1u, 0xa83423a2u, 0x466b9d53u, 0xe4a31704u, 0x82da90b5u, 0x21120a66u, 0xbf498417u, 0x5d80fdc8u,
    0xfbb87779u, 0x99eff12au, 0x38276adbu, 0xd65ee48cu, 0x74965e3du, 0x12cdd7eeu, 0xb105519fu, 0x4f3ccb50u,
    0xed744501u, 0x8babbeb2u, 0x29e33863u, 0xc81ab214u, 0x66522bc5u, 0x0489a576u, 0xa2c11f27u, 0x40f898d8u,
    0xdf301289u, 0x7d678c3au, 0x1b9f05ebu, 0xb9d67f9cu, 0x580df94du, 0xf64572feu, 0x947cecafu, 0x32b46660u,
    0xd0ebe011u, 0x6f2359c2u, 0x0d5ad373u, 0xab924d24u, 0x49c9c6d5u, 0xe8014086u, 0x8638ba37u, 0x247033e8u,
    0xc2a7ad99u, 0x60df274au, 0xff16a0fbu, 0x9d4e1aacu, 0x3b85945du, 0xd9bd0e0eu, 0x77f487bfu, 0x162c0170u,
    0xb4637b21u, 0x529af4d2u, 0xf0d26e83u, 0x8f09e834u, 0x2d4161e5u, 0xcb78db96u, 0x69b05547u, 0x07e7cef8u,
    0xa61f48a9u, 0x4456c25au, 0xe28e3c0bu, 0x80c5b5bcu, 0x1efd2f6du, 0xbd34a91eu, 0x5b6c22cfu, 0xf9a39c80u,
    0x97db1631u, 0x36128fe2u, 0xd44a0993u, 0x72818344u, 0x10b8fcf5u, 0xaef076a6u, 0x4d27f057u, 0xeb5f6a08u,
};

static const uint32_t bshim_008_tab2[96] = {
    0xb678561au, 0x54afcfcbu, 0xf2e7497cu, 0x911ec32du, 0x2f563cdeu, 0xcd8db68fu, 0x6bc53040u, 0x09fca9f1u,
    0xa83423a2u, 0x466b9d53u, 0xe4a31704u, 0x82da90b5u, 0x21120a66u, 0xbf498417u, 0x5d80fdc8u, 0xfbb87779u,
    0x99eff12au, 0x38276adbu, 0xd65ee48cu, 0x74965e3du, 0x12cdd7eeu, 0xb105519fu, 0x4f3ccb50u, 0xed744501u,
    0x8babbeb2u, 0x29e33863u, 0xc81ab214u, 0x66522bc5u, 0x0489a576u, 0xa2c11f27u, 0x40f898d8u, 0xdf301289u,
    0x7d678c3au, 0x1b9f05ebu, 0xb9d67f9cu, 0x580df94du, 0xf64572feu, 0x947cecafu, 0x32b46660u, 0xd0ebe011u,
    0x6f2359c2u, 0x0d5ad373u, 0xab924d24u, 0x49c9c6d5u, 0xe8014086u, 0x8638ba37u, 0x247033e8u, 0xc2a7ad99u,
    0x60df274au, 0xff16a0fbu, 0x9d4e1aacu, 0x3b85945du, 0xd9bd0e0eu, 0x77f487bfu, 0x162c0170u, 0xb4637b21u,
    0x529af4d2u, 0xf0d26e83u, 0x8f09e834u, 0x2d4161e5u, 0xcb78db96u, 0x69b05547u, 0x07e7cef8u, 0xa61f48a9u,
    0x4456c25au, 0xe28e3c0bu, 0x80c5b5bcu, 0x1efd2f6du, 0xbd34a91eu, 0x5b6c22cfu, 0xf9a39c80u, 0x97db1631u,
    0x36128fe2u, 0xd44a0993u, 0x72818344u, 0x10b8fcf5u, 0xaef076a6u, 0x4d27f057u, 0xeb5f6a08u, 0x8996e3b9u,
    0x27ce5d6au, 0xc605d71bu, 0x643d50ccu, 0x0274ca7du, 0xa0ac442eu, 0x3ee3bddfu, 0xdd1b3790u, 0x7b52b141u,
    0x198a2af2u, 0xb7c1a4a3u, 0x55f91e54u, 0xf4309805u, 0x926811b6u, 0x309f8b67u, 0xced70518u, 0x6d0e7ec9u,
};

static const uint32_t bshim_008_tab3[96] = {
    0x38276adbu, 0xd65ee48cu, 0x74965e3du, 0x12cdd7eeu, 0xb105519fu, 0x4f3ccb50u, 0xed744501u, 0x8babbeb2u,
    0x29e33863u, 0xc81ab214u, 0x66522bc5u, 0x0489a576u, 0xa2c11f27u, 0x40f898d8u, 0xdf301289u, 0x7d678c3au,
    0x1b9f05ebu, 0xb9d67f9cu, 0x580df94du, 0xf64572feu, 0x947cecafu, 0x32b46660u, 0xd0ebe011u, 0x6f2359c2u,
    0x0d5ad373u, 0xab924d24u, 0x49c9c6d5u, 0xe8014086u, 0x8638ba37u, 0x247033e8u, 0xc2a7ad99u, 0x60df274au,
    0xff16a0fbu, 0x9d4e1aacu, 0x3b85945du, 0xd9bd0e0eu, 0x77f487bfu, 0x162c0170u, 0xb4637b21u, 0x529af4d2u,
    0xf0d26e83u, 0x8f09e834u, 0x2d4161e5u, 0xcb78db96u, 0x69b05547u, 0x07e7cef8u, 0xa61f48a9u, 0x4456c25au,
    0xe28e3c0bu, 0x80c5b5bcu, 0x1efd2f6du, 0xbd34a91eu, 0x5b6c22cfu, 0xf9a39c80u, 0x97db1631u, 0x36128fe2u,
    0xd44a0993u, 0x72818344u, 0x10b8fcf5u, 0xaef076a6u, 0x4d27f057u, 0xeb5f6a08u, 0x8996e3b9u, 0x27ce5d6au,
    0xc605d71bu, 0x643d50ccu, 0x0274ca7du, 0xa0ac442eu, 0x3ee3bddfu, 0xdd1b3790u, 0x7b52b141u, 0x198a2af2u,
    0xb7c1a4a3u, 0x55f91e54u, 0xf4309805u, 0x926811b6u, 0x309f8b67u, 0xced70518u, 0x6d0e7ec9u, 0x0b45f87au,
    0xa97d722bu, 0x47b4ebdcu, 0xe5ec658du, 0x8423df3eu, 0x225b58efu, 0xc092d2a0u, 0x5eca4c51u, 0xfd01c602u,
    0x9b393fb3u, 0x3970b964u, 0xd7a83315u, 0x75dfacc6u, 0x14172677u, 0xb24ea028u, 0x508619d9u, 0xeebd938au,
};

static const uint32_t bshim_008_tab4[96] = {
    0xb9d67f9cu, 0x580df94du, 0xf64572feu, 0x947cecafu, 0x32b46660u, 0xd0ebe011u, 0x6f2359c2u, 0x0d5ad373u,
    0xab924d24u, 0x49c9c6d5u, 0xe8014086u, 0x8638ba37u, 0x247033e8u, 0xc2a7ad99u, 0x60df274au, 0xff16a0fbu,
    0x9d4e1aacu, 0x3b85945du, 0xd9bd0e0eu, 0x77f487bfu, 0x162c0170u, 0xb4637b21u, 0x529af4d2u, 0xf0d26e83u,
    0x8f09e834u, 0x2d4161e5u, 0xcb78db96u, 0x69b05547u, 0x07e7cef8u, 0xa61f48a9u, 0x4456c25au, 0xe28e3c0bu,
    0x80c5b5bcu, 0x1efd2f6du, 0xbd34a91eu, 0x5b6c22cfu, 0xf9a39c80u, 0x97db1631u, 0x36128fe2u, 0xd44a0993u,
    0x72818344u, 0x10b8fcf5u, 0xaef076a6u, 0x4d27f057u, 0xeb5f6a08u, 0x8996e3b9u, 0x27ce5d6au, 0xc605d71bu,
    0x643d50ccu, 0x0274ca7du, 0xa0ac442eu, 0x3ee3bddfu, 0xdd1b3790u, 0x7b52b141u, 0x198a2af2u, 0xb7c1a4a3u,
    0x55f91e54u, 0xf4309805u, 0x926811b6u, 0x309f8b67u, 0xced70518u, 0x6d0e7ec9u, 0x0b45f87au, 0xa97d722bu,
    0x47b4ebdcu, 0xe5ec658du, 0x8423df3eu, 0x225b58efu, 0xc092d2a0u, 0x5eca4c51u, 0xfd01c602u, 0x9b393fb3u,
    0x3970b964u, 0xd7a83315u, 0x75dfacc6u, 0x14172677u, 0xb24ea028u, 0x508619d9u, 0xeebd938au, 0x8cf50d3bu,
    0x2b2c86ecu, 0xc964009du, 0x679b7a4eu, 0x05d2f3ffu, 0xa40a6db0u, 0x4241e761u, 0xe0796112u, 0x7eb0dac3u,
    0x1ce85474u, 0xbb1fce25u, 0x595747d6u, 0xf78ec187u, 0x95c63b38u, 0x33fdb4e9u, 0xd2352e9au, 0x706ca84bu,
};

static const uint32_t bshim_008_tab5[96] = {
    0x3b85945du, 0xd9bd0e0eu, 0x77f487bfu, 0x162c0170u, 0xb4637b21u, 0x529af4d2u, 0xf0d26e83u, 0x8f09e834u,
    0x2d4161e5u, 0xcb78db96u, 0x69b05547u, 0x07e7cef8u, 0xa61f48a9u, 0x4456c25au, 0xe28e3c0bu, 0x80c5b5bcu,
    0x1efd2f6du, 0xbd34a91eu, 0x5b6c22cfu, 0xf9a39c80u, 0x97db1631u, 0x36128fe2u, 0xd44a0993u, 0x72818344u,
    0x10b8fcf5u, 0xaef076a6u, 0x4d27f057u, 0xeb5f6a08u, 0x8996e3b9u, 0x27ce5d6au, 0xc605d71bu, 0x643d50ccu,
    0x0274ca7du, 0xa0ac442eu, 0x3ee3bddfu, 0xdd1b3790u, 0x7b52b141u, 0x198a2af2u, 0xb7c1a4a3u, 0x55f91e54u,
    0xf4309805u, 0x926811b6u, 0x309f8b67u, 0xced70518u, 0x6d0e7ec9u, 0x0b45f87au, 0xa97d722bu, 0x47b4ebdcu,
    0xe5ec658du, 0x8423df3eu, 0x225b58efu, 0xc092d2a0u, 0x5eca4c51u, 0xfd01c602u, 0x9b393fb3u, 0x3970b964u,
    0xd7a83315u, 0x75dfacc6u, 0x14172677u, 0xb24ea028u, 0x508619d9u, 0xeebd938au, 0x8cf50d3bu, 0x2b2c86ecu,
    0xc964009du, 0x679b7a4eu, 0x05d2f3ffu, 0xa40a6db0u, 0x4241e761u, 0xe0796112u, 0x7eb0dac3u, 0x1ce85474u,
    0xbb1fce25u, 0x595747d6u, 0xf78ec187u, 0x95c63b38u, 0x33fdb4e9u, 0xd2352e9au, 0x706ca84bu, 0x0ea421fcu,
    0xacdb9badu, 0x4b13155eu, 0xe94a8f0fu, 0x878208c0u, 0x25b98271u, 0xc3f0fc22u, 0x622875d3u, 0x005fef84u,
    0x9e976935u, 0x3ccee2e6u, 0xdb065c97u, 0x793dd648u, 0x17754ff9u, 0xb5acc9aau, 0x53e4435bu, 0xf21bbd0cu,
};

static const uint32_t bshim_008_tab6[96] = {
    0xbd34a91eu, 0x5b6c22cfu, 0xf9a39c80u, 0x97db1631u, 0x36128fe2u, 0xd44a0993u, 0x72818344u, 0x10b8fcf5u,
    0xaef076a6u, 0x4d27f057u, 0xeb5f6a08u, 0x8996e3b9u, 0x27ce5d6au, 0xc605d71bu, 0x643d50ccu, 0x0274ca7du,
    0xa0ac442eu, 0x3ee3bddfu, 0xdd1b3790u, 0x7b52b141u, 0x198a2af2u, 0xb7c1a4a3u, 0x55f91e54u, 0xf4309805u,
    0x926811b6u, 0x309f8b67u, 0xced70518u, 0x6d0e7ec9u, 0x0b45f87au, 0xa97d722bu, 0x47b4ebdcu, 0xe5ec658du,
    0x8423df3eu, 0x225b58efu, 0xc092d2a0u, 0x5eca4c51u, 0xfd01c602u, 0x9b393fb3u, 0x3970b964u, 0xd7a83315u,
    0x75dfacc6u, 0x14172677u, 0xb24ea028u, 0x508619d9u, 0xeebd938au, 0x8cf50d3bu, 0x2b2c86ecu, 0xc964009du,
    0x679b7a4eu, 0x05d2f3ffu, 0xa40a6db0u, 0x4241e761u, 0xe0796112u, 0x7eb0dac3u, 0x1ce85474u, 0xbb1fce25u,
    0x595747d6u, 0xf78ec187u, 0x95c63b38u, 0x33fdb4e9u, 0xd2352e9au, 0x706ca84bu, 0x0ea421fcu, 0xacdb9badu,
    0x4b13155eu, 0xe94a8f0fu, 0x878208c0u, 0x25b98271u, 0xc3f0fc22u, 0x622875d3u, 0x005fef84u, 0x9e976935u,
    0x3ccee2e6u, 0xdb065c97u, 0x793dd648u, 0x17754ff9u, 0xb5acc9aau, 0x53e4435bu, 0xf21bbd0cu, 0x905336bdu,
    0x2e8ab06eu, 0xccc22a1fu, 0x6af9a3d0u, 0x09311d81u, 0xa7689732u, 0x45a010e3u, 0xe3d78a94u, 0x820f0445u,
    0x20467df6u, 0xbe7df7a7u, 0x5cb57158u, 0xfaeceb09u, 0x992464bau, 0x375bde6bu, 0xd593581cu, 0x73cad1cdu,
};

static const uint32_t bshim_008_tab7[96] = {
    0x3ee3bddfu, 0xdd1b3790u, 0x7b52b141u, 0x198a2af2u, 0xb7c1a4a3u, 0x55f91e54u, 0xf4309805u, 0x926811b6u,
    0x309f8b67u, 0xced70518u, 0x6d0e7ec9u, 0x0b45f87au, 0xa97d722bu, 0x47b4ebdcu, 0xe5ec658du, 0x8423df3eu,
    0x225b58efu, 0xc092d2a0u, 0x5eca4c51u, 0xfd01c602u, 0x9b393fb3u, 0x3970b964u, 0xd7a83315u, 0x75dfacc6u,
    0x14172677u, 0xb24ea028u, 0x508619d9u, 0xeebd938au, 0x8cf50d3bu, 0x2b2c86ecu, 0xc964009du, 0x679b7a4eu,
    0x05d2f3ffu, 0xa40a6db0u, 0x4241e761u, 0xe0796112u, 0x7eb0dac3u, 0x1ce85474u, 0xbb1fce25u, 0x595747d6u,
    0xf78ec187u, 0x95c63b38u, 0x33fdb4e9u, 0xd2352e9au, 0x706ca84bu, 0x0ea421fcu, 0xacdb9badu, 0x4b13155eu,
    0xe94a8f0fu, 0x878208c0u, 0x25b98271u, 0xc3f0fc22u, 0x622875d3u, 0x005fef84u, 0x9e976935u, 0x3ccee2e6u,
    0xdb065c97u, 0x793dd648u, 0x17754ff9u, 0xb5acc9aau, 0x53e4435bu, 0xf21bbd0cu, 0x905336bdu, 0x2e8ab06eu,
    0xccc22a1fu, 0x6af9a3d0u, 0x09311d81u, 0xa7689732u, 0x45a010e3u, 0xe3d78a94u, 0x820f0445u, 0x20467df6u,
    0xbe7df7a7u, 0x5cb57158u, 0xfaeceb09u, 0x992464bau, 0x375bde6bu, 0xd593581cu, 0x73cad1cdu, 0x12024b7eu,
    0xb039c52fu, 0x4e713ee0u, 0xeca8b891u, 0x8ae03242u, 0x2917abf3u, 0xc74f25a4u, 0x65869f55u, 0x03be1906u,
    0xa1f592b7u, 0x402d0c68u, 0xde648619u, 0x7c9bffcau, 0x1ad3797bu, 0xb90af32cu, 0x57426cddu, 0xf579e68eu,
};

struct bshim_008_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_008_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f5e53b8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb54a1e2fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b35e8a6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc121b31du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x470d7d94u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_008_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_008_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_008_reset(struct bshim_008_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0000f778u;
    return 0;
}

