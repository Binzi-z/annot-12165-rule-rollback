/* bshim_149 -- board support shim generated from the 0149 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_149_tab0[96] = {
    0x67c77e8fu, 0x05fef840u, 0xa43671f1u, 0x426deba2u, 0xe0a56553u, 0x7edcdf04u, 0x1d1458b5u, 0xbb4bd266u,
    0x59834c17u, 0xf7bac5c8u, 0x95f23f79u, 0x3429b92au, 0xd26132dbu, 0x7098ac8cu, 0x0ed0263du, 0xad079feeu,
    0x4b3f199fu, 0xe9769350u, 0x87ae0d01u, 0x25e586b2u, 0xc41d0063u, 0x62547a14u, 0x008bf3c5u, 0x9ec36d76u,
    0x3cfae727u, 0xdb3260d8u, 0x7969da89u, 0x17a1543au, 0xb5d8cdebu, 0x5410479cu, 0xf247c14du, 0x907f3afeu,
    0x2eb6b4afu, 0xccee2e60u, 0x6b25a811u, 0x095d21c2u, 0xa7949b73u, 0x45cc1524u, 0xe4038ed5u, 0x823b0886u,
    0x20728237u, 0xbea9fbe8u, 0x5ce17599u, 0xfb18ef4au, 0x995068fbu, 0x3787e2acu, 0xd5bf5c5du, 0x73f6d60eu,
    0x122e4fbfu, 0xb065c970u, 0x4e9d4321u, 0xecd4bcd2u, 0x8b0c3683u, 0x2943b034u, 0xc77b29e5u, 0x65b2a396u,
    0x03ea1d47u, 0xa22196f8u, 0x405910a9u, 0xde908a5au, 0x7cc8040bu, 0x1aff7dbcu, 0xb936f76du, 0x576e711eu,
    0xf5a5eacfu, 0x93dd6480u, 0x3214de31u, 0xd04c57e2u, 0x6e83d193u, 0x0cbb4b44u, 0xaaf2c4f5u, 0x492a3ea6u,
    0xe761b857u, 0x85993208u, 0x23d0abb9u, 0xc208256au, 0x603f9f1bu, 0xfe7718ccu, 0x9cae927du, 0x3ae60c2eu,
    0xd91d85dfu, 0x7754ff90u, 0x158c7941u, 0xb3c3f2f2u, 0x51fb6ca3u, 0xf032e654u, 0x8e6a6005u, 0x2ca1d9b6u,
    0xcad95367u, 0x6910cd18u, 0x074846c9u, 0xa57fc07au, 0x43b73a2bu, 0xe1eeb3dcu, 0x80262d8du, 0x1e5da73eu,
};

static const uint32_t bshim_149_tab1[96] = {
    0xe9769350u, 0x87ae0d01u, 0x25e586b2u, 0xc41d0063u, 0x62547a14u, 0x008bf3c5u, 0x9ec36d76u, 0x3cfae727u,
    0xdb3260d8u, 0x7969da89u, 0x17a1543au, 0xb5d8cdebu, 0x5410479cu, 0xf247c14du, 0x907f3afeu, 0x2eb6b4afu,
    0xccee2e60u, 0x6b25a811u, 0x095d21c2u, 0xa7949b73u, 0x45cc1524u, 0xe4038ed5u, 0x823b0886u, 0x20728237u,
    0xbea9fbe8u, 0x5ce17599u, 0xfb18ef4au, 0x995068fbu, 0x3787e2acu, 0xd5bf5c5du, 0x73f6d60eu, 0x122e4fbfu,
    0xb065c970u, 0x4e9d4321u, 0xecd4bcd2u, 0x8b0c3683u, 0x2943b034u, 0xc77b29e5u, 0x65b2a396u, 0x03ea1d47u,
    0xa22196f8u, 0x405910a9u, 0xde908a5au, 0x7cc8040bu, 0x1aff7dbcu, 0xb936f76du, 0x576e711eu, 0xf5a5eacfu,
    0x93dd6480u, 0x3214de31u, 0xd04c57e2u, 0x6e83d193u, 0x0cbb4b44u, 0xaaf2c4f5u, 0x492a3ea6u, 0xe761b857u,
    0x85993208u, 0x23d0abb9u, 0xc208256au, 0x603f9f1bu, 0xfe7718ccu, 0x9cae927du, 0x3ae60c2eu, 0xd91d85dfu,
    0x7754ff90u, 0x158c7941u, 0xb3c3f2f2u, 0x51fb6ca3u, 0xf032e654u, 0x8e6a6005u, 0x2ca1d9b6u, 0xcad95367u,
    0x6910cd18u, 0x074846c9u, 0xa57fc07au, 0x43b73a2bu, 0xe1eeb3dcu, 0x80262d8du, 0x1e5da73eu, 0xbc9520efu,
    0x5acc9aa0u, 0xf9041451u, 0x973b8e02u, 0x357307b3u, 0xd3aa8164u, 0x71e1fb15u, 0x101974c6u, 0xae50ee77u,
    0x4c886828u, 0xeabfe1d9u, 0x88f75b8au, 0x272ed53bu, 0xc5664eecu, 0x639dc89du, 0x01d5424eu, 0xa00cbbffu,
};

static const uint32_t bshim_149_tab2[96] = {
    0x6b25a811u, 0x095d21c2u, 0xa7949b73u, 0x45cc1524u, 0xe4038ed5u, 0x823b0886u, 0x20728237u, 0xbea9fbe8u,
    0x5ce17599u, 0xfb18ef4au, 0x995068fbu, 0x3787e2acu, 0xd5bf5c5du, 0x73f6d60eu, 0x122e4fbfu, 0xb065c970u,
    0x4e9d4321u, 0xecd4bcd2u, 0x8b0c3683u, 0x2943b034u, 0xc77b29e5u, 0x65b2a396u, 0x03ea1d47u, 0xa22196f8u,
    0x405910a9u, 0xde908a5au, 0x7cc8040bu, 0x1aff7dbcu, 0xb936f76du, 0x576e711eu, 0xf5a5eacfu, 0x93dd6480u,
    0x3214de31u, 0xd04c57e2u, 0x6e83d193u, 0x0cbb4b44u, 0xaaf2c4f5u, 0x492a3ea6u, 0xe761b857u, 0x85993208u,
    0x23d0abb9u, 0xc208256au, 0x603f9f1bu, 0xfe7718ccu, 0x9cae927du, 0x3ae60c2eu, 0xd91d85dfu, 0x7754ff90u,
    0x158c7941u, 0xb3c3f2f2u, 0x51fb6ca3u, 0xf032e654u, 0x8e6a6005u, 0x2ca1d9b6u, 0xcad95367u, 0x6910cd18u,
    0x074846c9u, 0xa57fc07au, 0x43b73a2bu, 0xe1eeb3dcu, 0x80262d8du, 0x1e5da73eu, 0xbc9520efu, 0x5acc9aa0u,
    0xf9041451u, 0x973b8e02u, 0x357307b3u, 0xd3aa8164u, 0x71e1fb15u, 0x101974c6u, 0xae50ee77u, 0x4c886828u,
    0xeabfe1d9u, 0x88f75b8au, 0x272ed53bu, 0xc5664eecu, 0x639dc89du, 0x01d5424eu, 0xa00cbbffu, 0x3e4435b0u,
    0xdc7baf61u, 0x7ab32912u, 0x18eaa2c3u, 0xb7221c74u, 0x55599625u, 0xf3910fd6u, 0x91c88987u, 0x30000338u,
    0xce377ce9u, 0x6c6ef69au, 0x0aa6704bu, 0xa8dde9fcu, 0x471563adu, 0xe54cdd5eu, 0x8384570fu, 0x21bbd0c0u,
};

static const uint32_t bshim_149_tab3[96] = {
    0xecd4bcd2u, 0x8b0c3683u, 0x2943b034u, 0xc77b29e5u, 0x65b2a396u, 0x03ea1d47u, 0xa22196f8u, 0x405910a9u,
    0xde908a5au, 0x7cc8040bu, 0x1aff7dbcu, 0xb936f76du, 0x576e711eu, 0xf5a5eacfu, 0x93dd6480u, 0x3214de31u,
    0xd04c57e2u, 0x6e83d193u, 0x0cbb4b44u, 0xaaf2c4f5u, 0x492a3ea6u, 0xe761b857u, 0x85993208u, 0x23d0abb9u,
    0xc208256au, 0x603f9f1bu, 0xfe7718ccu, 0x9cae927du, 0x3ae60c2eu, 0xd91d85dfu, 0x7754ff90u, 0x158c7941u,
    0xb3c3f2f2u, 0x51fb6ca3u, 0xf032e654u, 0x8e6a6005u, 0x2ca1d9b6u, 0xcad95367u, 0x6910cd18u, 0x074846c9u,
    0xa57fc07au, 0x43b73a2bu, 0xe1eeb3dcu, 0x80262d8du, 0x1e5da73eu, 0xbc9520efu, 0x5acc9aa0u, 0xf9041451u,
    0x973b8e02u, 0x357307b3u, 0xd3aa8164u, 0x71e1fb15u, 0x101974c6u, 0xae50ee77u, 0x4c886828u, 0xeabfe1d9u,
    0x88f75b8au, 0x272ed53bu, 0xc5664eecu, 0x639dc89du, 0x01d5424eu, 0xa00cbbffu, 0x3e4435b0u, 0xdc7baf61u,
    0x7ab32912u, 0x18eaa2c3u, 0xb7221c74u, 0x55599625u, 0xf3910fd6u, 0x91c88987u, 0x30000338u, 0xce377ce9u,
    0x6c6ef69au, 0x0aa6704bu, 0xa8dde9fcu, 0x471563adu, 0xe54cdd5eu, 0x8384570fu, 0x21bbd0c0u, 0xbff34a71u,
    0x5e2ac422u, 0xfc623dd3u, 0x9a99b784u, 0x38d13135u, 0xd708aae6u, 0x75402497u, 0x13779e48u, 0xb1af17f9u,
    0x4fe691aau, 0xee1e0b5bu, 0x8c55850cu, 0x2a8cfebdu, 0xc8c4786eu, 0x66fbf21fu, 0x05336bd0u, 0xa36ae581u,
};

static const uint32_t bshim_149_tab4[96] = {
    0x6e83d193u, 0x0cbb4b44u, 0xaaf2c4f5u, 0x492a3ea6u, 0xe761b857u, 0x85993208u, 0x23d0abb9u, 0xc208256au,
    0x603f9f1bu, 0xfe7718ccu, 0x9cae927du, 0x3ae60c2eu, 0xd91d85dfu, 0x7754ff90u, 0x158c7941u, 0xb3c3f2f2u,
    0x51fb6ca3u, 0xf032e654u, 0x8e6a6005u, 0x2ca1d9b6u, 0xcad95367u, 0x6910cd18u, 0x074846c9u, 0xa57fc07au,
    0x43b73a2bu, 0xe1eeb3dcu, 0x80262d8du, 0x1e5da73eu, 0xbc9520efu, 0x5acc9aa0u, 0xf9041451u, 0x973b8e02u,
    0x357307b3u, 0xd3aa8164u, 0x71e1fb15u, 0x101974c6u, 0xae50ee77u, 0x4c886828u, 0xeabfe1d9u, 0x88f75b8au,
    0x272ed53bu, 0xc5664eecu, 0x639dc89du, 0x01d5424eu, 0xa00cbbffu, 0x3e4435b0u, 0xdc7baf61u, 0x7ab32912u,
    0x18eaa2c3u, 0xb7221c74u, 0x55599625u, 0xf3910fd6u, 0x91c88987u, 0x30000338u, 0xce377ce9u, 0x6c6ef69au,
    0x0aa6704bu, 0xa8dde9fcu, 0x471563adu, 0xe54cdd5eu, 0x8384570fu, 0x21bbd0c0u, 0xbff34a71u, 0x5e2ac422u,
    0xfc623dd3u, 0x9a99b784u, 0x38d13135u, 0xd708aae6u, 0x75402497u, 0x13779e48u, 0xb1af17f9u, 0x4fe691aau,
    0xee1e0b5bu, 0x8c55850cu, 0x2a8cfebdu, 0xc8c4786eu, 0x66fbf21fu, 0x05336bd0u, 0xa36ae581u, 0x41a25f32u,
    0xdfd9d8e3u, 0x7e115294u, 0x1c48cc45u, 0xba8045f6u, 0x58b7bfa7u, 0xf6ef3958u, 0x9526b309u, 0x335e2cbau,
    0xd195a66bu, 0x6fcd201cu, 0x0e0499cdu, 0xac3c137eu, 0x4a738d2fu, 0xe8ab06e0u, 0x86e28091u, 0x2519fa42u,
};

static const uint32_t bshim_149_tab5[96] = {
    0xf032e654u, 0x8e6a6005u, 0x2ca1d9b6u, 0xcad95367u, 0x6910cd18u, 0x074846c9u, 0xa57fc07au, 0x43b73a2bu,
    0xe1eeb3dcu, 0x80262d8du, 0x1e5da73eu, 0xbc9520efu, 0x5acc9aa0u, 0xf9041451u, 0x973b8e02u, 0x357307b3u,
    0xd3aa8164u, 0x71e1fb15u, 0x101974c6u, 0xae50ee77u, 0x4c886828u, 0xeabfe1d9u, 0x88f75b8au, 0x272ed53bu,
    0xc5664eecu, 0x639dc89du, 0x01d5424eu, 0xa00cbbffu, 0x3e4435b0u, 0xdc7baf61u, 0x7ab32912u, 0x18eaa2c3u,
    0xb7221c74u, 0x55599625u, 0xf3910fd6u, 0x91c88987u, 0x30000338u, 0xce377ce9u, 0x6c6ef69au, 0x0aa6704bu,
    0xa8dde9fcu, 0x471563adu, 0xe54cdd5eu, 0x8384570fu, 0x21bbd0c0u, 0xbff34a71u, 0x5e2ac422u, 0xfc623dd3u,
    0x9a99b784u, 0x38d13135u, 0xd708aae6u, 0x75402497u, 0x13779e48u, 0xb1af17f9u, 0x4fe691aau, 0xee1e0b5bu,
    0x8c55850cu, 0x2a8cfebdu, 0xc8c4786eu, 0x66fbf21fu, 0x05336bd0u, 0xa36ae581u, 0x41a25f32u, 0xdfd9d8e3u,
    0x7e115294u, 0x1c48cc45u, 0xba8045f6u, 0x58b7bfa7u, 0xf6ef3958u, 0x9526b309u, 0x335e2cbau, 0xd195a66bu,
    0x6fcd201cu, 0x0e0499cdu, 0xac3c137eu, 0x4a738d2fu, 0xe8ab06e0u, 0x86e28091u, 0x2519fa42u, 0xc35173f3u,
    0x6188eda4u, 0xffc06755u, 0x9df7e106u, 0x3c2f5ab7u, 0xda66d468u, 0x789e4e19u, 0x16d5c7cau, 0xb50d417bu,
    0x5344bb2cu, 0xf17c34ddu, 0x8fb3ae8eu, 0x2deb283fu, 0xcc22a1f0u, 0x6a5a1ba1u, 0x08919552u, 0xa6c90f03u,
};

static const uint32_t bshim_149_tab6[96] = {
    0x71e1fb15u, 0x101974c6u, 0xae50ee77u, 0x4c886828u, 0xeabfe1d9u, 0x88f75b8au, 0x272ed53bu, 0xc5664eecu,
    0x639dc89du, 0x01d5424eu, 0xa00cbbffu, 0x3e4435b0u, 0xdc7baf61u, 0x7ab32912u, 0x18eaa2c3u, 0xb7221c74u,
    0x55599625u, 0xf3910fd6u, 0x91c88987u, 0x30000338u, 0xce377ce9u, 0x6c6ef69au, 0x0aa6704bu, 0xa8dde9fcu,
    0x471563adu, 0xe54cdd5eu, 0x8384570fu, 0x21bbd0c0u, 0xbff34a71u, 0x5e2ac422u, 0xfc623dd3u, 0x9a99b784u,
    0x38d13135u, 0xd708aae6u, 0x75402497u, 0x13779e48u, 0xb1af17f9u, 0x4fe691aau, 0xee1e0b5bu, 0x8c55850cu,
    0x2a8cfebdu, 0xc8c4786eu, 0x66fbf21fu, 0x05336bd0u, 0xa36ae581u, 0x41a25f32u, 0xdfd9d8e3u, 0x7e115294u,
    0x1c48cc45u, 0xba8045f6u, 0x58b7bfa7u, 0xf6ef3958u, 0x9526b309u, 0x335e2cbau, 0xd195a66bu, 0x6fcd201cu,
    0x0e0499cdu, 0xac3c137eu, 0x4a738d2fu, 0xe8ab06e0u, 0x86e28091u, 0x2519fa42u, 0xc35173f3u, 0x6188eda4u,
    0xffc06755u, 0x9df7e106u, 0x3c2f5ab7u, 0xda66d468u, 0x789e4e19u, 0x16d5c7cau, 0xb50d417bu, 0x5344bb2cu,
    0xf17c34ddu, 0x8fb3ae8eu, 0x2deb283fu, 0xcc22a1f0u, 0x6a5a1ba1u, 0x08919552u, 0xa6c90f03u, 0x450088b4u,
    0xe3380265u, 0x816f7c16u, 0x1fa6f5c7u, 0xbdde6f78u, 0x5c15e929u, 0xfa4d62dau, 0x9884dc8bu, 0x36bc563cu,
    0xd4f3cfedu, 0x732b499eu, 0x1162c34fu, 0xaf9a3d00u, 0x4dd1b6b1u, 0xec093062u, 0x8a40aa13u, 0x287823c4u,
};

static const uint32_t bshim_149_tab7[96] = {
    0xf3910fd6u, 0x91c88987u, 0x30000338u, 0xce377ce9u, 0x6c6ef69au, 0x0aa6704bu, 0xa8dde9fcu, 0x471563adu,
    0xe54cdd5eu, 0x8384570fu, 0x21bbd0c0u, 0xbff34a71u, 0x5e2ac422u, 0xfc623dd3u, 0x9a99b784u, 0x38d13135u,
    0xd708aae6u, 0x75402497u, 0x13779e48u, 0xb1af17f9u, 0x4fe691aau, 0xee1e0b5bu, 0x8c55850cu, 0x2a8cfebdu,
    0xc8c4786eu, 0x66fbf21fu, 0x05336bd0u, 0xa36ae581u, 0x41a25f32u, 0xdfd9d8e3u, 0x7e115294u, 0x1c48cc45u,
    0xba8045f6u, 0x58b7bfa7u, 0xf6ef3958u, 0x9526b309u, 0x335e2cbau, 0xd195a66bu, 0x6fcd201cu, 0x0e0499cdu,
    0xac3c137eu, 0x4a738d2fu, 0xe8ab06e0u, 0x86e28091u, 0x2519fa42u, 0xc35173f3u, 0x6188eda4u, 0xffc06755u,
    0x9df7e106u, 0x3c2f5ab7u, 0xda66d468u, 0x789e4e19u, 0x16d5c7cau, 0xb50d417bu, 0x5344bb2cu, 0xf17c34ddu,
    0x8fb3ae8eu, 0x2deb283fu, 0xcc22a1f0u, 0x6a5a1ba1u, 0x08919552u, 0xa6c90f03u, 0x450088b4u, 0xe3380265u,
    0x816f7c16u, 0x1fa6f5c7u, 0xbdde6f78u, 0x5c15e929u, 0xfa4d62dau, 0x9884dc8bu, 0x36bc563cu, 0xd4f3cfedu,
    0x732b499eu, 0x1162c34fu, 0xaf9a3d00u, 0x4dd1b6b1u, 0xec093062u, 0x8a40aa13u, 0x287823c4u, 0xc6af9d75u,
    0x64e71726u, 0x031e90d7u, 0xa1560a88u, 0x3f8d8439u, 0xddc4fdeau, 0x7bfc779bu, 0x1a33f14cu, 0xb86b6afdu,
    0x56a2e4aeu, 0xf4da5e5fu, 0x9311d810u, 0x314951c1u, 0xcf80cb72u, 0x6db84523u, 0x0befbed4u, 0xaa273885u,
};

struct bshim_149_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_149_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_149_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_149_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_149_reset(struct bshim_149_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0012011bu;
    return 0;
}

