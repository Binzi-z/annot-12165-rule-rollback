/* bshim_150 -- board support shim generated from the 0150 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_150_tab0[96] = {
    0x5e2ac422u, 0xfc623dd3u, 0x9a99b784u, 0x38d13135u, 0xd708aae6u, 0x75402497u, 0x13779e48u, 0xb1af17f9u,
    0x4fe691aau, 0xee1e0b5bu, 0x8c55850cu, 0x2a8cfebdu, 0xc8c4786eu, 0x66fbf21fu, 0x05336bd0u, 0xa36ae581u,
    0x41a25f32u, 0xdfd9d8e3u, 0x7e115294u, 0x1c48cc45u, 0xba8045f6u, 0x58b7bfa7u, 0xf6ef3958u, 0x9526b309u,
    0x335e2cbau, 0xd195a66bu, 0x6fcd201cu, 0x0e0499cdu, 0xac3c137eu, 0x4a738d2fu, 0xe8ab06e0u, 0x86e28091u,
    0x2519fa42u, 0xc35173f3u, 0x6188eda4u, 0xffc06755u, 0x9df7e106u, 0x3c2f5ab7u, 0xda66d468u, 0x789e4e19u,
    0x16d5c7cau, 0xb50d417bu, 0x5344bb2cu, 0xf17c34ddu, 0x8fb3ae8eu, 0x2deb283fu, 0xcc22a1f0u, 0x6a5a1ba1u,
    0x08919552u, 0xa6c90f03u, 0x450088b4u, 0xe3380265u, 0x816f7c16u, 0x1fa6f5c7u, 0xbdde6f78u, 0x5c15e929u,
    0xfa4d62dau, 0x9884dc8bu, 0x36bc563cu, 0xd4f3cfedu, 0x732b499eu, 0x1162c34fu, 0xaf9a3d00u, 0x4dd1b6b1u,
    0xec093062u, 0x8a40aa13u, 0x287823c4u, 0xc6af9d75u, 0x64e71726u, 0x031e90d7u, 0xa1560a88u, 0x3f8d8439u,
    0xddc4fdeau, 0x7bfc779bu, 0x1a33f14cu, 0xb86b6afdu, 0x56a2e4aeu, 0xf4da5e5fu, 0x9311d810u, 0x314951c1u,
    0xcf80cb72u, 0x6db84523u, 0x0befbed4u, 0xaa273885u, 0x485eb236u, 0xe6962be7u, 0x84cda598u, 0x23051f49u,
    0xc13c98fau, 0x5f7412abu, 0xfdab8c5cu, 0x9be3060du, 0x3a1a7fbeu, 0xd851f96fu, 0x76897320u, 0x14c0ecd1u,
};

static const uint32_t bshim_150_tab1[96] = {
    0xdfd9d8e3u, 0x7e115294u, 0x1c48cc45u, 0xba8045f6u, 0x58b7bfa7u, 0xf6ef3958u, 0x9526b309u, 0x335e2cbau,
    0xd195a66bu, 0x6fcd201cu, 0x0e0499cdu, 0xac3c137eu, 0x4a738d2fu, 0xe8ab06e0u, 0x86e28091u, 0x2519fa42u,
    0xc35173f3u, 0x6188eda4u, 0xffc06755u, 0x9df7e106u, 0x3c2f5ab7u, 0xda66d468u, 0x789e4e19u, 0x16d5c7cau,
    0xb50d417bu, 0x5344bb2cu, 0xf17c34ddu, 0x8fb3ae8eu, 0x2deb283fu, 0xcc22a1f0u, 0x6a5a1ba1u, 0x08919552u,
    0xa6c90f03u, 0x450088b4u, 0xe3380265u, 0x816f7c16u, 0x1fa6f5c7u, 0xbdde6f78u, 0x5c15e929u, 0xfa4d62dau,
    0x9884dc8bu, 0x36bc563cu, 0xd4f3cfedu, 0x732b499eu, 0x1162c34fu, 0xaf9a3d00u, 0x4dd1b6b1u, 0xec093062u,
    0x8a40aa13u, 0x287823c4u, 0xc6af9d75u, 0x64e71726u, 0x031e90d7u, 0xa1560a88u, 0x3f8d8439u, 0xddc4fdeau,
    0x7bfc779bu, 0x1a33f14cu, 0xb86b6afdu, 0x56a2e4aeu, 0xf4da5e5fu, 0x9311d810u, 0x314951c1u, 0xcf80cb72u,
    0x6db84523u, 0x0befbed4u, 0xaa273885u, 0x485eb236u, 0xe6962be7u, 0x84cda598u, 0x23051f49u, 0xc13c98fau,
    0x5f7412abu, 0xfdab8c5cu, 0x9be3060du, 0x3a1a7fbeu, 0xd851f96fu, 0x76897320u, 0x14c0ecd1u, 0xb2f86682u,
    0x512fe033u, 0xef6759e4u, 0x8d9ed395u, 0x2bd64d46u, 0xca0dc6f7u, 0x684540a8u, 0x067cba59u, 0xa4b4340au,
    0x42ebadbbu, 0xe123276cu, 0x7f5aa11du, 0x1d921aceu, 0xbbc9947fu, 0x5a010e30u, 0xf83887e1u, 0x96700192u,
};

static const uint32_t bshim_150_tab2[96] = {
    0x6188eda4u, 0xffc06755u, 0x9df7e106u, 0x3c2f5ab7u, 0xda66d468u, 0x789e4e19u, 0x16d5c7cau, 0xb50d417bu,
    0x5344bb2cu, 0xf17c34ddu, 0x8fb3ae8eu, 0x2deb283fu, 0xcc22a1f0u, 0x6a5a1ba1u, 0x08919552u, 0xa6c90f03u,
    0x450088b4u, 0xe3380265u, 0x816f7c16u, 0x1fa6f5c7u, 0xbdde6f78u, 0x5c15e929u, 0xfa4d62dau, 0x9884dc8bu,
    0x36bc563cu, 0xd4f3cfedu, 0x732b499eu, 0x1162c34fu, 0xaf9a3d00u, 0x4dd1b6b1u, 0xec093062u, 0x8a40aa13u,
    0x287823c4u, 0xc6af9d75u, 0x64e71726u, 0x031e90d7u, 0xa1560a88u, 0x3f8d8439u, 0xddc4fdeau, 0x7bfc779bu,
    0x1a33f14cu, 0xb86b6afdu, 0x56a2e4aeu, 0xf4da5e5fu, 0x9311d810u, 0x314951c1u, 0xcf80cb72u, 0x6db84523u,
    0x0befbed4u, 0xaa273885u, 0x485eb236u, 0xe6962be7u, 0x84cda598u, 0x23051f49u, 0xc13c98fau, 0x5f7412abu,
    0xfdab8c5cu, 0x9be3060du, 0x3a1a7fbeu, 0xd851f96fu, 0x76897320u, 0x14c0ecd1u, 0xb2f86682u, 0x512fe033u,
    0xef6759e4u, 0x8d9ed395u, 0x2bd64d46u, 0xca0dc6f7u, 0x684540a8u, 0x067cba59u, 0xa4b4340au, 0x42ebadbbu,
    0xe123276cu, 0x7f5aa11du, 0x1d921aceu, 0xbbc9947fu, 0x5a010e30u, 0xf83887e1u, 0x96700192u, 0x34a77b43u,
    0xd2def4f4u, 0x71166ea5u, 0x0f4de856u, 0xad856207u, 0x4bbcdbb8u, 0xe9f45569u, 0x882bcf1au, 0x266348cbu,
    0xc49ac27cu, 0x62d23c2du, 0x0109b5deu, 0x9f412f8fu, 0x3d78a940u, 0xdbb022f1u, 0x79e79ca2u, 0x181f1653u,
};

static const uint32_t bshim_150_tab3[96] = {
    0xe3380265u, 0x816f7c16u, 0x1fa6f5c7u, 0xbdde6f78u, 0x5c15e929u, 0xfa4d62dau, 0x9884dc8bu, 0x36bc563cu,
    0xd4f3cfedu, 0x732b499eu, 0x1162c34fu, 0xaf9a3d00u, 0x4dd1b6b1u, 0xec093062u, 0x8a40aa13u, 0x287823c4u,
    0xc6af9d75u, 0x64e71726u, 0x031e90d7u, 0xa1560a88u, 0x3f8d8439u, 0xddc4fdeau, 0x7bfc779bu, 0x1a33f14cu,
    0xb86b6afdu, 0x56a2e4aeu, 0xf4da5e5fu, 0x9311d810u, 0x314951c1u, 0xcf80cb72u, 0x6db84523u, 0x0befbed4u,
    0xaa273885u, 0x485eb236u, 0xe6962be7u, 0x84cda598u, 0x23051f49u, 0xc13c98fau, 0x5f7412abu, 0xfdab8c5cu,
    0x9be3060du, 0x3a1a7fbeu, 0xd851f96fu, 0x76897320u, 0x14c0ecd1u, 0xb2f86682u, 0x512fe033u, 0xef6759e4u,
    0x8d9ed395u, 0x2bd64d46u, 0xca0dc6f7u, 0x684540a8u, 0x067cba59u, 0xa4b4340au, 0x42ebadbbu, 0xe123276cu,
    0x7f5aa11du, 0x1d921aceu, 0xbbc9947fu, 0x5a010e30u, 0xf83887e1u, 0x96700192u, 0x34a77b43u, 0xd2def4f4u,
    0x71166ea5u, 0x0f4de856u, 0xad856207u, 0x4bbcdbb8u, 0xe9f45569u, 0x882bcf1au, 0x266348cbu, 0xc49ac27cu,
    0x62d23c2du, 0x0109b5deu, 0x9f412f8fu, 0x3d78a940u, 0xdbb022f1u, 0x79e79ca2u, 0x181f1653u, 0xb6569004u,
    0x548e09b5u, 0xf2c58366u, 0x90fcfd17u, 0x2f3476c8u, 0xcd6bf079u, 0x6ba36a2au, 0x09dae3dbu, 0xa8125d8cu,
    0x4649d73du, 0xe48150eeu, 0x82b8ca9fu, 0x20f04450u, 0xbf27be01u, 0x5d5f37b2u, 0xfb96b163u, 0x99ce2b14u,
};

static const uint32_t bshim_150_tab4[96] = {
    0x64e71726u, 0x031e90d7u, 0xa1560a88u, 0x3f8d8439u, 0xddc4fdeau, 0x7bfc779bu, 0x1a33f14cu, 0xb86b6afdu,
    0x56a2e4aeu, 0xf4da5e5fu, 0x9311d810u, 0x314951c1u, 0xcf80cb72u, 0x6db84523u, 0x0befbed4u, 0xaa273885u,
    0x485eb236u, 0xe6962be7u, 0x84cda598u, 0x23051f49u, 0xc13c98fau, 0x5f7412abu, 0xfdab8c5cu, 0x9be3060du,
    0x3a1a7fbeu, 0xd851f96fu, 0x76897320u, 0x14c0ecd1u, 0xb2f86682u, 0x512fe033u, 0xef6759e4u, 0x8d9ed395u,
    0x2bd64d46u, 0xca0dc6f7u, 0x684540a8u, 0x067cba59u, 0xa4b4340au, 0x42ebadbbu, 0xe123276cu, 0x7f5aa11du,
    0x1d921aceu, 0xbbc9947fu, 0x5a010e30u, 0xf83887e1u, 0x96700192u, 0x34a77b43u, 0xd2def4f4u, 0x71166ea5u,
    0x0f4de856u, 0xad856207u, 0x4bbcdbb8u, 0xe9f45569u, 0x882bcf1au, 0x266348cbu, 0xc49ac27cu, 0x62d23c2du,
    0x0109b5deu, 0x9f412f8fu, 0x3d78a940u, 0xdbb022f1u, 0x79e79ca2u, 0x181f1653u, 0xb6569004u, 0x548e09b5u,
    0xf2c58366u, 0x90fcfd17u, 0x2f3476c8u, 0xcd6bf079u, 0x6ba36a2au, 0x09dae3dbu, 0xa8125d8cu, 0x4649d73du,
    0xe48150eeu, 0x82b8ca9fu, 0x20f04450u, 0xbf27be01u, 0x5d5f37b2u, 0xfb96b163u, 0x99ce2b14u, 0x3805a4c5u,
    0xd63d1e76u, 0x74749827u, 0x12ac11d8u, 0xb0e38b89u, 0x4f1b053au, 0xed527eebu, 0x8b89f89cu, 0x29c1724du,
    0xc7f8ebfeu, 0x663065afu, 0x0467df60u, 0xa29f5911u, 0x40d6d2c2u, 0xdf0e4c73u, 0x7d45c624u, 0x1b7d3fd5u,
};

static const uint32_t bshim_150_tab5[96] = {
    0xe6962be7u, 0x84cda598u, 0x23051f49u, 0xc13c98fau, 0x5f7412abu, 0xfdab8c5cu, 0x9be3060du, 0x3a1a7fbeu,
    0xd851f96fu, 0x76897320u, 0x14c0ecd1u, 0xb2f86682u, 0x512fe033u, 0xef6759e4u, 0x8d9ed395u, 0x2bd64d46u,
    0xca0dc6f7u, 0x684540a8u, 0x067cba59u, 0xa4b4340au, 0x42ebadbbu, 0xe123276cu, 0x7f5aa11du, 0x1d921aceu,
    0xbbc9947fu, 0x5a010e30u, 0xf83887e1u, 0x96700192u, 0x34a77b43u, 0xd2def4f4u, 0x71166ea5u, 0x0f4de856u,
    0xad856207u, 0x4bbcdbb8u, 0xe9f45569u, 0x882bcf1au, 0x266348cbu, 0xc49ac27cu, 0x62d23c2du, 0x0109b5deu,
    0x9f412f8fu, 0x3d78a940u, 0xdbb022f1u, 0x79e79ca2u, 0x181f1653u, 0xb6569004u, 0x548e09b5u, 0xf2c58366u,
    0x90fcfd17u, 0x2f3476c8u, 0xcd6bf079u, 0x6ba36a2au, 0x09dae3dbu, 0xa8125d8cu, 0x4649d73du, 0xe48150eeu,
    0x82b8ca9fu, 0x20f04450u, 0xbf27be01u, 0x5d5f37b2u, 0xfb96b163u, 0x99ce2b14u, 0x3805a4c5u, 0xd63d1e76u,
    0x74749827u, 0x12ac11d8u, 0xb0e38b89u, 0x4f1b053au, 0xed527eebu, 0x8b89f89cu, 0x29c1724du, 0xc7f8ebfeu,
    0x663065afu, 0x0467df60u, 0xa29f5911u, 0x40d6d2c2u, 0xdf0e4c73u, 0x7d45c624u, 0x1b7d3fd5u, 0xb9b4b986u,
    0x57ec3337u, 0xf623ace8u, 0x945b2699u, 0x3292a04au, 0xd0ca19fbu, 0x6f0193acu, 0x0d390d5du, 0xab70870eu,
    0x49a800bfu, 0xe7df7a70u, 0x8616f421u, 0x244e6dd2u, 0xc285e783u, 0x60bd6134u, 0xfef4dae5u, 0x9d2c5496u,
};

static const uint32_t bshim_150_tab6[96] = {
    0x684540a8u, 0x067cba59u, 0xa4b4340au, 0x42ebadbbu, 0xe123276cu, 0x7f5aa11du, 0x1d921aceu, 0xbbc9947fu,
    0x5a010e30u, 0xf83887e1u, 0x96700192u, 0x34a77b43u, 0xd2def4f4u, 0x71166ea5u, 0x0f4de856u, 0xad856207u,
    0x4bbcdbb8u, 0xe9f45569u, 0x882bcf1au, 0x266348cbu, 0xc49ac27cu, 0x62d23c2du, 0x0109b5deu, 0x9f412f8fu,
    0x3d78a940u, 0xdbb022f1u, 0x79e79ca2u, 0x181f1653u, 0xb6569004u, 0x548e09b5u, 0xf2c58366u, 0x90fcfd17u,
    0x2f3476c8u, 0xcd6bf079u, 0x6ba36a2au, 0x09dae3dbu, 0xa8125d8cu, 0x4649d73du, 0xe48150eeu, 0x82b8ca9fu,
    0x20f04450u, 0xbf27be01u, 0x5d5f37b2u, 0xfb96b163u, 0x99ce2b14u, 0x3805a4c5u, 0xd63d1e76u, 0x74749827u,
    0x12ac11d8u, 0xb0e38b89u, 0x4f1b053au, 0xed527eebu, 0x8b89f89cu, 0x29c1724du, 0xc7f8ebfeu, 0x663065afu,
    0x0467df60u, 0xa29f5911u, 0x40d6d2c2u, 0xdf0e4c73u, 0x7d45c624u, 0x1b7d3fd5u, 0xb9b4b986u, 0x57ec3337u,
    0xf623ace8u, 0x945b2699u, 0x3292a04au, 0xd0ca19fbu, 0x6f0193acu, 0x0d390d5du, 0xab70870eu, 0x49a800bfu,
    0xe7df7a70u, 0x8616f421u, 0x244e6dd2u, 0xc285e783u, 0x60bd6134u, 0xfef4dae5u, 0x9d2c5496u, 0x3b63ce47u,
    0xd99b47f8u, 0x77d2c1a9u, 0x160a3b5au, 0xb441b50bu, 0x52792ebcu, 0xf0b0a86du, 0x8ee8221eu, 0x2d1f9bcfu,
    0xcb571580u, 0x698e8f31u, 0x07c608e2u, 0xa5fd8293u, 0x4434fc44u, 0xe26c75f5u, 0x80a3efa6u, 0x1edb6957u,
};

static const uint32_t bshim_150_tab7[96] = {
    0xe9f45569u, 0x882bcf1au, 0x266348cbu, 0xc49ac27cu, 0x62d23c2du, 0x0109b5deu, 0x9f412f8fu, 0x3d78a940u,
    0xdbb022f1u, 0x79e79ca2u, 0x181f1653u, 0xb6569004u, 0x548e09b5u, 0xf2c58366u, 0x90fcfd17u, 0x2f3476c8u,
    0xcd6bf079u, 0x6ba36a2au, 0x09dae3dbu, 0xa8125d8cu, 0x4649d73du, 0xe48150eeu, 0x82b8ca9fu, 0x20f04450u,
    0xbf27be01u, 0x5d5f37b2u, 0xfb96b163u, 0x99ce2b14u, 0x3805a4c5u, 0xd63d1e76u, 0x74749827u, 0x12ac11d8u,
    0xb0e38b89u, 0x4f1b053au, 0xed527eebu, 0x8b89f89cu, 0x29c1724du, 0xc7f8ebfeu, 0x663065afu, 0x0467df60u,
    0xa29f5911u, 0x40d6d2c2u, 0xdf0e4c73u, 0x7d45c624u, 0x1b7d3fd5u, 0xb9b4b986u, 0x57ec3337u, 0xf623ace8u,
    0x945b2699u, 0x3292a04au, 0xd0ca19fbu, 0x6f0193acu, 0x0d390d5du, 0xab70870eu, 0x49a800bfu, 0xe7df7a70u,
    0x8616f421u, 0x244e6dd2u, 0xc285e783u, 0x60bd6134u, 0xfef4dae5u, 0x9d2c5496u, 0x3b63ce47u, 0xd99b47f8u,
    0x77d2c1a9u, 0x160a3b5au, 0xb441b50bu, 0x52792ebcu, 0xf0b0a86du, 0x8ee8221eu, 0x2d1f9bcfu, 0xcb571580u,
    0x698e8f31u, 0x07c608e2u, 0xa5fd8293u, 0x4434fc44u, 0xe26c75f5u, 0x80a3efa6u, 0x1edb6957u, 0xbd12e308u,
    0x5b4a5cb9u, 0xf981d66au, 0x97b9501bu, 0x35f0c9ccu, 0xd428437du, 0x725fbd2eu, 0x109736dfu, 0xaeceb090u,
    0x4d062a41u, 0xeb3da3f2u, 0x89751da3u, 0x27ac9754u, 0xc5e41105u, 0x641b8ab6u, 0x02530467u, 0xa08a7e18u,
};

struct bshim_150_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_150_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_150_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_150_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_150_reset(struct bshim_150_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0012200au;
    return 0;
}

