/* bshim_007 -- board support shim generated from the 0007 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_007_tab0[96] = {
    0xbcb6e705u, 0x5aee60b6u, 0xf925da67u, 0x975d5418u, 0x3594cdc9u, 0xd3cc477au, 0x7203c12bu, 0x103b3adcu,
    0xae72b48du, 0x4caa2e3eu, 0xeae1a7efu, 0x891921a0u, 0x27509b51u, 0xc5881502u, 0x63bf8eb3u, 0x01f70864u,
    0xa02e8215u, 0x3e65fbc6u, 0xdc9d7577u, 0x7ad4ef28u, 0x190c68d9u, 0xb743e28au, 0x557b5c3bu, 0xf3b2d5ecu,
    0x91ea4f9du, 0x3021c94eu, 0xce5942ffu, 0x6c90bcb0u, 0x0ac83661u, 0xa8ffb012u, 0x473729c3u, 0xe56ea374u,
    0x83a61d25u, 0x21dd96d6u, 0xc0151087u, 0x5e4c8a38u, 0xfc8403e9u, 0x9abb7d9au, 0x38f2f74bu, 0xd72a70fcu,
    0x7561eaadu, 0x1399645eu, 0xb1d0de0fu, 0x500857c0u, 0xee3fd171u, 0x8c774b22u, 0x2aaec4d3u, 0xc8e63e84u,
    0x671db835u, 0x055531e6u, 0xa38cab97u, 0x41c42548u, 0xdffb9ef9u, 0x7e3318aau, 0x1c6a925bu, 0xbaa20c0cu,
    0x58d985bdu, 0xf710ff6eu, 0x9548791fu, 0x337ff2d0u, 0xd1b76c81u, 0x6feee632u, 0x0e265fe3u, 0xac5dd994u,
    0x4a955345u, 0xe8ccccf6u, 0x870446a7u, 0x253bc058u, 0xc3733a09u, 0x61aab3bau, 0xffe22d6bu, 0x9e19a71cu,
    0x3c5120cdu, 0xda889a7eu, 0x78c0142fu, 0x16f78de0u, 0xb52f0791u, 0x53668142u, 0xf19dfaf3u, 0x8fd574a4u,
    0x2e0cee55u, 0xcc446806u, 0x6a7be1b7u, 0x08b35b68u, 0xa6ead519u, 0x45224ecau, 0xe359c87bu, 0x8191422cu,
    0x1fc8bbddu, 0xbe00358eu, 0x5c37af3fu, 0xfa6f28f0u, 0x98a6a2a1u, 0x36de1c52u, 0xd5159603u, 0x734d0fb4u,
};

static const uint32_t bshim_007_tab1[96] = {
    0x3e65fbc6u, 0xdc9d7577u, 0x7ad4ef28u, 0x190c68d9u, 0xb743e28au, 0x557b5c3bu, 0xf3b2d5ecu, 0x91ea4f9du,
    0x3021c94eu, 0xce5942ffu, 0x6c90bcb0u, 0x0ac83661u, 0xa8ffb012u, 0x473729c3u, 0xe56ea374u, 0x83a61d25u,
    0x21dd96d6u, 0xc0151087u, 0x5e4c8a38u, 0xfc8403e9u, 0x9abb7d9au, 0x38f2f74bu, 0xd72a70fcu, 0x7561eaadu,
    0x1399645eu, 0xb1d0de0fu, 0x500857c0u, 0xee3fd171u, 0x8c774b22u, 0x2aaec4d3u, 0xc8e63e84u, 0x671db835u,
    0x055531e6u, 0xa38cab97u, 0x41c42548u, 0xdffb9ef9u, 0x7e3318aau, 0x1c6a925bu, 0xbaa20c0cu, 0x58d985bdu,
    0xf710ff6eu, 0x9548791fu, 0x337ff2d0u, 0xd1b76c81u, 0x6feee632u, 0x0e265fe3u, 0xac5dd994u, 0x4a955345u,
    0xe8ccccf6u, 0x870446a7u, 0x253bc058u, 0xc3733a09u, 0x61aab3bau, 0xffe22d6bu, 0x9e19a71cu, 0x3c5120cdu,
    0xda889a7eu, 0x78c0142fu, 0x16f78de0u, 0xb52f0791u, 0x53668142u, 0xf19dfaf3u, 0x8fd574a4u, 0x2e0cee55u,
    0xcc446806u, 0x6a7be1b7u, 0x08b35b68u, 0xa6ead519u, 0x45224ecau, 0xe359c87bu, 0x8191422cu, 0x1fc8bbddu,
    0xbe00358eu, 0x5c37af3fu, 0xfa6f28f0u, 0x98a6a2a1u, 0x36de1c52u, 0xd5159603u, 0x734d0fb4u, 0x11848965u,
    0xafbc0316u, 0x4df37cc7u, 0xec2af678u, 0x8a627029u, 0x2899e9dau, 0xc6d1638bu, 0x6508dd3cu, 0x034056edu,
    0xa177d09eu, 0x3faf4a4fu, 0xdde6c400u, 0x7c1e3db1u, 0x1a55b762u, 0xb88d3113u, 0x56c4aac4u, 0xf4fc2475u,
};

static const uint32_t bshim_007_tab2[96] = {
    0xc0151087u, 0x5e4c8a38u, 0xfc8403e9u, 0x9abb7d9au, 0x38f2f74bu, 0xd72a70fcu, 0x7561eaadu, 0x1399645eu,
    0xb1d0de0fu, 0x500857c0u, 0xee3fd171u, 0x8c774b22u, 0x2aaec4d3u, 0xc8e63e84u, 0x671db835u, 0x055531e6u,
    0xa38cab97u, 0x41c42548u, 0xdffb9ef9u, 0x7e3318aau, 0x1c6a925bu, 0xbaa20c0cu, 0x58d985bdu, 0xf710ff6eu,
    0x9548791fu, 0x337ff2d0u, 0xd1b76c81u, 0x6feee632u, 0x0e265fe3u, 0xac5dd994u, 0x4a955345u, 0xe8ccccf6u,
    0x870446a7u, 0x253bc058u, 0xc3733a09u, 0x61aab3bau, 0xffe22d6bu, 0x9e19a71cu, 0x3c5120cdu, 0xda889a7eu,
    0x78c0142fu, 0x16f78de0u, 0xb52f0791u, 0x53668142u, 0xf19dfaf3u, 0x8fd574a4u, 0x2e0cee55u, 0xcc446806u,
    0x6a7be1b7u, 0x08b35b68u, 0xa6ead519u, 0x45224ecau, 0xe359c87bu, 0x8191422cu, 0x1fc8bbddu, 0xbe00358eu,
    0x5c37af3fu, 0xfa6f28f0u, 0x98a6a2a1u, 0x36de1c52u, 0xd5159603u, 0x734d0fb4u, 0x11848965u, 0xafbc0316u,
    0x4df37cc7u, 0xec2af678u, 0x8a627029u, 0x2899e9dau, 0xc6d1638bu, 0x6508dd3cu, 0x034056edu, 0xa177d09eu,
    0x3faf4a4fu, 0xdde6c400u, 0x7c1e3db1u, 0x1a55b762u, 0xb88d3113u, 0x56c4aac4u, 0xf4fc2475u, 0x93339e26u,
    0x316b17d7u, 0xcfa29188u, 0x6dda0b39u, 0x0c1184eau, 0xaa48fe9bu, 0x4880784cu, 0xe6b7f1fdu, 0x84ef6baeu,
    0x2326e55fu, 0xc15e5f10u, 0x5f95d8c1u, 0xfdcd5272u, 0x9c04cc23u, 0x3a3c45d4u, 0xd873bf85u, 0x76ab3936u,
};

static const uint32_t bshim_007_tab3[96] = {
    0x41c42548u, 0xdffb9ef9u, 0x7e3318aau, 0x1c6a925bu, 0xbaa20c0cu, 0x58d985bdu, 0xf710ff6eu, 0x9548791fu,
    0x337ff2d0u, 0xd1b76c81u, 0x6feee632u, 0x0e265fe3u, 0xac5dd994u, 0x4a955345u, 0xe8ccccf6u, 0x870446a7u,
    0x253bc058u, 0xc3733a09u, 0x61aab3bau, 0xffe22d6bu, 0x9e19a71cu, 0x3c5120cdu, 0xda889a7eu, 0x78c0142fu,
    0x16f78de0u, 0xb52f0791u, 0x53668142u, 0xf19dfaf3u, 0x8fd574a4u, 0x2e0cee55u, 0xcc446806u, 0x6a7be1b7u,
    0x08b35b68u, 0xa6ead519u, 0x45224ecau, 0xe359c87bu, 0x8191422cu, 0x1fc8bbddu, 0xbe00358eu, 0x5c37af3fu,
    0xfa6f28f0u, 0x98a6a2a1u, 0x36de1c52u, 0xd5159603u, 0x734d0fb4u, 0x11848965u, 0xafbc0316u, 0x4df37cc7u,
    0xec2af678u, 0x8a627029u, 0x2899e9dau, 0xc6d1638bu, 0x6508dd3cu, 0x034056edu, 0xa177d09eu, 0x3faf4a4fu,
    0xdde6c400u, 0x7c1e3db1u, 0x1a55b762u, 0xb88d3113u, 0x56c4aac4u, 0xf4fc2475u, 0x93339e26u, 0x316b17d7u,
    0xcfa29188u, 0x6dda0b39u, 0x0c1184eau, 0xaa48fe9bu, 0x4880784cu, 0xe6b7f1fdu, 0x84ef6baeu, 0x2326e55fu,
    0xc15e5f10u, 0x5f95d8c1u, 0xfdcd5272u, 0x9c04cc23u, 0x3a3c45d4u, 0xd873bf85u, 0x76ab3936u, 0x14e2b2e7u,
    0xb31a2c98u, 0x5151a649u, 0xef891ffau, 0x8dc099abu, 0x2bf8135cu, 0xca2f8d0du, 0x686706beu, 0x069e806fu,
    0xa4d5fa20u, 0x430d73d1u, 0xe144ed82u, 0x7f7c6733u, 0x1db3e0e4u, 0xbbeb5a95u, 0x5a22d446u, 0xf85a4df7u,
};

static const uint32_t bshim_007_tab4[96] = {
    0xc3733a09u, 0x61aab3bau, 0xffe22d6bu, 0x9e19a71cu, 0x3c5120cdu, 0xda889a7eu, 0x78c0142fu, 0x16f78de0u,
    0xb52f0791u, 0x53668142u, 0xf19dfaf3u, 0x8fd574a4u, 0x2e0cee55u, 0xcc446806u, 0x6a7be1b7u, 0x08b35b68u,
    0xa6ead519u, 0x45224ecau, 0xe359c87bu, 0x8191422cu, 0x1fc8bbddu, 0xbe00358eu, 0x5c37af3fu, 0xfa6f28f0u,
    0x98a6a2a1u, 0x36de1c52u, 0xd5159603u, 0x734d0fb4u, 0x11848965u, 0xafbc0316u, 0x4df37cc7u, 0xec2af678u,
    0x8a627029u, 0x2899e9dau, 0xc6d1638bu, 0x6508dd3cu, 0x034056edu, 0xa177d09eu, 0x3faf4a4fu, 0xdde6c400u,
    0x7c1e3db1u, 0x1a55b762u, 0xb88d3113u, 0x56c4aac4u, 0xf4fc2475u, 0x93339e26u, 0x316b17d7u, 0xcfa29188u,
    0x6dda0b39u, 0x0c1184eau, 0xaa48fe9bu, 0x4880784cu, 0xe6b7f1fdu, 0x84ef6baeu, 0x2326e55fu, 0xc15e5f10u,
    0x5f95d8c1u, 0xfdcd5272u, 0x9c04cc23u, 0x3a3c45d4u, 0xd873bf85u, 0x76ab3936u, 0x14e2b2e7u, 0xb31a2c98u,
    0x5151a649u, 0xef891ffau, 0x8dc099abu, 0x2bf8135cu, 0xca2f8d0du, 0x686706beu, 0x069e806fu, 0xa4d5fa20u,
    0x430d73d1u, 0xe144ed82u, 0x7f7c6733u, 0x1db3e0e4u, 0xbbeb5a95u, 0x5a22d446u, 0xf85a4df7u, 0x9691c7a8u,
    0x34c94159u, 0xd300bb0au, 0x713834bbu, 0x0f6fae6cu, 0xada7281du, 0x4bdea1ceu, 0xea161b7fu, 0x884d9530u,
    0x26850ee1u, 0xc4bc8892u, 0x62f40243u, 0x012b7bf4u, 0x9f62f5a5u, 0x3d9a6f56u, 0xdbd1e907u, 0x7a0962b8u,
};

static const uint32_t bshim_007_tab5[96] = {
    0x45224ecau, 0xe359c87bu, 0x8191422cu, 0x1fc8bbddu, 0xbe00358eu, 0x5c37af3fu, 0xfa6f28f0u, 0x98a6a2a1u,
    0x36de1c52u, 0xd5159603u, 0x734d0fb4u, 0x11848965u, 0xafbc0316u, 0x4df37cc7u, 0xec2af678u, 0x8a627029u,
    0x2899e9dau, 0xc6d1638bu, 0x6508dd3cu, 0x034056edu, 0xa177d09eu, 0x3faf4a4fu, 0xdde6c400u, 0x7c1e3db1u,
    0x1a55b762u, 0xb88d3113u, 0x56c4aac4u, 0xf4fc2475u, 0x93339e26u, 0x316b17d7u, 0xcfa29188u, 0x6dda0b39u,
    0x0c1184eau, 0xaa48fe9bu, 0x4880784cu, 0xe6b7f1fdu, 0x84ef6baeu, 0x2326e55fu, 0xc15e5f10u, 0x5f95d8c1u,
    0xfdcd5272u, 0x9c04cc23u, 0x3a3c45d4u, 0xd873bf85u, 0x76ab3936u, 0x14e2b2e7u, 0xb31a2c98u, 0x5151a649u,
    0xef891ffau, 0x8dc099abu, 0x2bf8135cu, 0xca2f8d0du, 0x686706beu, 0x069e806fu, 0xa4d5fa20u, 0x430d73d1u,
    0xe144ed82u, 0x7f7c6733u, 0x1db3e0e4u, 0xbbeb5a95u, 0x5a22d446u, 0xf85a4df7u, 0x9691c7a8u, 0x34c94159u,
    0xd300bb0au, 0x713834bbu, 0x0f6fae6cu, 0xada7281du, 0x4bdea1ceu, 0xea161b7fu, 0x884d9530u, 0x26850ee1u,
    0xc4bc8892u, 0x62f40243u, 0x012b7bf4u, 0x9f62f5a5u, 0x3d9a6f56u, 0xdbd1e907u, 0x7a0962b8u, 0x1840dc69u,
    0xb678561au, 0x54afcfcbu, 0xf2e7497cu, 0x911ec32du, 0x2f563cdeu, 0xcd8db68fu, 0x6bc53040u, 0x09fca9f1u,
    0xa83423a2u, 0x466b9d53u, 0xe4a31704u, 0x82da90b5u, 0x21120a66u, 0xbf498417u, 0x5d80fdc8u, 0xfbb87779u,
};

static const uint32_t bshim_007_tab6[96] = {
    0xc6d1638bu, 0x6508dd3cu, 0x034056edu, 0xa177d09eu, 0x3faf4a4fu, 0xdde6c400u, 0x7c1e3db1u, 0x1a55b762u,
    0xb88d3113u, 0x56c4aac4u, 0xf4fc2475u, 0x93339e26u, 0x316b17d7u, 0xcfa29188u, 0x6dda0b39u, 0x0c1184eau,
    0xaa48fe9bu, 0x4880784cu, 0xe6b7f1fdu, 0x84ef6baeu, 0x2326e55fu, 0xc15e5f10u, 0x5f95d8c1u, 0xfdcd5272u,
    0x9c04cc23u, 0x3a3c45d4u, 0xd873bf85u, 0x76ab3936u, 0x14e2b2e7u, 0xb31a2c98u, 0x5151a649u, 0xef891ffau,
    0x8dc099abu, 0x2bf8135cu, 0xca2f8d0du, 0x686706beu, 0x069e806fu, 0xa4d5fa20u, 0x430d73d1u, 0xe144ed82u,
    0x7f7c6733u, 0x1db3e0e4u, 0xbbeb5a95u, 0x5a22d446u, 0xf85a4df7u, 0x9691c7a8u, 0x34c94159u, 0xd300bb0au,
    0x713834bbu, 0x0f6fae6cu, 0xada7281du, 0x4bdea1ceu, 0xea161b7fu, 0x884d9530u, 0x26850ee1u, 0xc4bc8892u,
    0x62f40243u, 0x012b7bf4u, 0x9f62f5a5u, 0x3d9a6f56u, 0xdbd1e907u, 0x7a0962b8u, 0x1840dc69u, 0xb678561au,
    0x54afcfcbu, 0xf2e7497cu, 0x911ec32du, 0x2f563cdeu, 0xcd8db68fu, 0x6bc53040u, 0x09fca9f1u, 0xa83423a2u,
    0x466b9d53u, 0xe4a31704u, 0x82da90b5u, 0x21120a66u, 0xbf498417u, 0x5d80fdc8u, 0xfbb87779u, 0x99eff12au,
    0x38276adbu, 0xd65ee48cu, 0x74965e3du, 0x12cdd7eeu, 0xb105519fu, 0x4f3ccb50u, 0xed744501u, 0x8babbeb2u,
    0x29e33863u, 0xc81ab214u, 0x66522bc5u, 0x0489a576u, 0xa2c11f27u, 0x40f898d8u, 0xdf301289u, 0x7d678c3au,
};

static const uint32_t bshim_007_tab7[96] = {
    0x4880784cu, 0xe6b7f1fdu, 0x84ef6baeu, 0x2326e55fu, 0xc15e5f10u, 0x5f95d8c1u, 0xfdcd5272u, 0x9c04cc23u,
    0x3a3c45d4u, 0xd873bf85u, 0x76ab3936u, 0x14e2b2e7u, 0xb31a2c98u, 0x5151a649u, 0xef891ffau, 0x8dc099abu,
    0x2bf8135cu, 0xca2f8d0du, 0x686706beu, 0x069e806fu, 0xa4d5fa20u, 0x430d73d1u, 0xe144ed82u, 0x7f7c6733u,
    0x1db3e0e4u, 0xbbeb5a95u, 0x5a22d446u, 0xf85a4df7u, 0x9691c7a8u, 0x34c94159u, 0xd300bb0au, 0x713834bbu,
    0x0f6fae6cu, 0xada7281du, 0x4bdea1ceu, 0xea161b7fu, 0x884d9530u, 0x26850ee1u, 0xc4bc8892u, 0x62f40243u,
    0x012b7bf4u, 0x9f62f5a5u, 0x3d9a6f56u, 0xdbd1e907u, 0x7a0962b8u, 0x1840dc69u, 0xb678561au, 0x54afcfcbu,
    0xf2e7497cu, 0x911ec32du, 0x2f563cdeu, 0xcd8db68fu, 0x6bc53040u, 0x09fca9f1u, 0xa83423a2u, 0x466b9d53u,
    0xe4a31704u, 0x82da90b5u, 0x21120a66u, 0xbf498417u, 0x5d80fdc8u, 0xfbb87779u, 0x99eff12au, 0x38276adbu,
    0xd65ee48cu, 0x74965e3du, 0x12cdd7eeu, 0xb105519fu, 0x4f3ccb50u, 0xed744501u, 0x8babbeb2u, 0x29e33863u,
    0xc81ab214u, 0x66522bc5u, 0x0489a576u, 0xa2c11f27u, 0x40f898d8u, 0xdf301289u, 0x7d678c3au, 0x1b9f05ebu,
    0xb9d67f9cu, 0x580df94du, 0xf64572feu, 0x947cecafu, 0x32b46660u, 0xd0ebe011u, 0x6f2359c2u, 0x0d5ad373u,
    0xab924d24u, 0x49c9c6d5u, 0xe8014086u, 0x8638ba37u, 0x247033e8u, 0xc2a7ad99u, 0x60df274au, 0xff16a0fbu,
};

struct bshim_007_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_007_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa9728941u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f5e53b8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb54a1e2fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b35e8a6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc121b31du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x470d7d94u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_007_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_007_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_007_reset(struct bshim_007_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0000d889u;
    return 0;
}

