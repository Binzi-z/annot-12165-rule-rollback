/* bshim_083 -- board support shim generated from the 0083 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_083_tab0[96] = {
    0xe22f8ea9u, 0x8067085au, 0x1e9e820bu, 0xbcd5fbbcu, 0x5b0d756du, 0xf944ef1eu, 0x977c68cfu, 0x35b3e280u,
    0xd3eb5c31u, 0x7222d5e2u, 0x105a4f93u, 0xae91c944u, 0x4cc942f5u, 0xeb00bca6u, 0x89383657u, 0x276fb008u,
    0xc5a729b9u, 0x63dea36au, 0x02161d1bu, 0xa04d96ccu, 0x3e85107du, 0xdcbc8a2eu, 0x7af403dfu, 0x192b7d90u,
    0xb762f741u, 0x559a70f2u, 0xf3d1eaa3u, 0x92096454u, 0x3040de05u, 0xce7857b6u, 0x6cafd167u, 0x0ae74b18u,
    0xa91ec4c9u, 0x47563e7au, 0xe58db82bu, 0x83c531dcu, 0x21fcab8du, 0xc034253eu, 0x5e6b9eefu, 0xfca318a0u,
    0x9ada9251u, 0x39120c02u, 0xd74985b3u, 0x7580ff64u, 0x13b87915u, 0xb1eff2c6u, 0x50276c77u, 0xee5ee628u,
    0x8c965fd9u, 0x2acdd98au, 0xc905533bu, 0x673cccecu, 0x0574469du, 0xa3abc04eu, 0x41e339ffu, 0xe01ab3b0u,
    0x7e522d61u, 0x1c89a712u, 0xbac120c3u, 0x58f89a74u, 0xf7301425u, 0x95678dd6u, 0x339f0787u, 0xd1d68138u,
    0x700dfae9u, 0x0e45749au, 0xac7cee4bu, 0x4ab467fcu, 0xe8ebe1adu, 0x87235b5eu, 0x255ad50fu, 0xc3924ec0u,
    0x61c9c871u, 0x00014222u, 0x9e38bbd3u, 0x3c703584u, 0xdaa7af35u, 0x78df28e6u, 0x1716a297u, 0xb54e1c48u,
    0x538595f9u, 0xf1bd0faau, 0x8ff4895bu, 0x2e2c030cu, 0xcc637cbdu, 0x6a9af66eu, 0x08d2701fu, 0xa709e9d0u,
    0x45416381u, 0xe378dd32u, 0x81b056e3u, 0x1fe7d094u, 0xbe1f4a45u, 0x5c56c3f6u, 0xfa8e3da7u, 0x98c5b758u,
};

static const uint32_t bshim_083_tab1[96] = {
    0x63dea36au, 0x02161d1bu, 0xa04d96ccu, 0x3e85107du, 0xdcbc8a2eu, 0x7af403dfu, 0x192b7d90u, 0xb762f741u,
    0x559a70f2u, 0xf3d1eaa3u, 0x92096454u, 0x3040de05u, 0xce7857b6u, 0x6cafd167u, 0x0ae74b18u, 0xa91ec4c9u,
    0x47563e7au, 0xe58db82bu, 0x83c531dcu, 0x21fcab8du, 0xc034253eu, 0x5e6b9eefu, 0xfca318a0u, 0x9ada9251u,
    0x39120c02u, 0xd74985b3u, 0x7580ff64u, 0x13b87915u, 0xb1eff2c6u, 0x50276c77u, 0xee5ee628u, 0x8c965fd9u,
    0x2acdd98au, 0xc905533bu, 0x673cccecu, 0x0574469du, 0xa3abc04eu, 0x41e339ffu, 0xe01ab3b0u, 0x7e522d61u,
    0x1c89a712u, 0xbac120c3u, 0x58f89a74u, 0xf7301425u, 0x95678dd6u, 0x339f0787u, 0xd1d68138u, 0x700dfae9u,
    0x0e45749au, 0xac7cee4bu, 0x4ab467fcu, 0xe8ebe1adu, 0x87235b5eu, 0x255ad50fu, 0xc3924ec0u, 0x61c9c871u,
    0x00014222u, 0x9e38bbd3u, 0x3c703584u, 0xdaa7af35u, 0x78df28e6u, 0x1716a297u, 0xb54e1c48u, 0x538595f9u,
    0xf1bd0faau, 0x8ff4895bu, 0x2e2c030cu, 0xcc637cbdu, 0x6a9af66eu, 0x08d2701fu, 0xa709e9d0u, 0x45416381u,
    0xe378dd32u, 0x81b056e3u, 0x1fe7d094u, 0xbe1f4a45u, 0x5c56c3f6u, 0xfa8e3da7u, 0x98c5b758u, 0x36fd3109u,
    0xd534aabau, 0x736c246bu, 0x11a39e1cu, 0xafdb17cdu, 0x4e12917eu, 0xec4a0b2fu, 0x8a8184e0u, 0x28b8fe91u,
    0xc6f07842u, 0x6527f1f3u, 0x035f6ba4u, 0xa196e555u, 0x3fce5f06u, 0xde05d8b7u, 0x7c3d5268u, 0x1a74cc19u,
};

static const uint32_t bshim_083_tab2[96] = {
    0xe58db82bu, 0x83c531dcu, 0x21fcab8du, 0xc034253eu, 0x5e6b9eefu, 0xfca318a0u, 0x9ada9251u, 0x39120c02u,
    0xd74985b3u, 0x7580ff64u, 0x13b87915u, 0xb1eff2c6u, 0x50276c77u, 0xee5ee628u, 0x8c965fd9u, 0x2acdd98au,
    0xc905533bu, 0x673cccecu, 0x0574469du, 0xa3abc04eu, 0x41e339ffu, 0xe01ab3b0u, 0x7e522d61u, 0x1c89a712u,
    0xbac120c3u, 0x58f89a74u, 0xf7301425u, 0x95678dd6u, 0x339f0787u, 0xd1d68138u, 0x700dfae9u, 0x0e45749au,
    0xac7cee4bu, 0x4ab467fcu, 0xe8ebe1adu, 0x87235b5eu, 0x255ad50fu, 0xc3924ec0u, 0x61c9c871u, 0x00014222u,
    0x9e38bbd3u, 0x3c703584u, 0xdaa7af35u, 0x78df28e6u, 0x1716a297u, 0xb54e1c48u, 0x538595f9u, 0xf1bd0faau,
    0x8ff4895bu, 0x2e2c030cu, 0xcc637cbdu, 0x6a9af66eu, 0x08d2701fu, 0xa709e9d0u, 0x45416381u, 0xe378dd32u,
    0x81b056e3u, 0x1fe7d094u, 0xbe1f4a45u, 0x5c56c3f6u, 0xfa8e3da7u, 0x98c5b758u, 0x36fd3109u, 0xd534aabau,
    0x736c246bu, 0x11a39e1cu, 0xafdb17cdu, 0x4e12917eu, 0xec4a0b2fu, 0x8a8184e0u, 0x28b8fe91u, 0xc6f07842u,
    0x6527f1f3u, 0x035f6ba4u, 0xa196e555u, 0x3fce5f06u, 0xde05d8b7u, 0x7c3d5268u, 0x1a74cc19u, 0xb8ac45cau,
    0x56e3bf7bu, 0xf51b392cu, 0x9352b2ddu, 0x318a2c8eu, 0xcfc1a63fu, 0x6df91ff0u, 0x0c3099a1u, 0xaa681352u,
    0x489f8d03u, 0xe6d706b4u, 0x850e8065u, 0x2345fa16u, 0xc17d73c7u, 0x5fb4ed78u, 0xfdec6729u, 0x9c23e0dau,
};

static const uint32_t bshim_083_tab3[96] = {
    0x673cccecu, 0x0574469du, 0xa3abc04eu, 0x41e339ffu, 0xe01ab3b0u, 0x7e522d61u, 0x1c89a712u, 0xbac120c3u,
    0x58f89a74u, 0xf7301425u, 0x95678dd6u, 0x339f0787u, 0xd1d68138u, 0x700dfae9u, 0x0e45749au, 0xac7cee4bu,
    0x4ab467fcu, 0xe8ebe1adu, 0x87235b5eu, 0x255ad50fu, 0xc3924ec0u, 0x61c9c871u, 0x00014222u, 0x9e38bbd3u,
    0x3c703584u, 0xdaa7af35u, 0x78df28e6u, 0x1716a297u, 0xb54e1c48u, 0x538595f9u, 0xf1bd0faau, 0x8ff4895bu,
    0x2e2c030cu, 0xcc637cbdu, 0x6a9af66eu, 0x08d2701fu, 0xa709e9d0u, 0x45416381u, 0xe378dd32u, 0x81b056e3u,
    0x1fe7d094u, 0xbe1f4a45u, 0x5c56c3f6u, 0xfa8e3da7u, 0x98c5b758u, 0x36fd3109u, 0xd534aabau, 0x736c246bu,
    0x11a39e1cu, 0xafdb17cdu, 0x4e12917eu, 0xec4a0b2fu, 0x8a8184e0u, 0x28b8fe91u, 0xc6f07842u, 0x6527f1f3u,
    0x035f6ba4u, 0xa196e555u, 0x3fce5f06u, 0xde05d8b7u, 0x7c3d5268u, 0x1a74cc19u, 0xb8ac45cau, 0x56e3bf7bu,
    0xf51b392cu, 0x9352b2ddu, 0x318a2c8eu, 0xcfc1a63fu, 0x6df91ff0u, 0x0c3099a1u, 0xaa681352u, 0x489f8d03u,
    0xe6d706b4u, 0x850e8065u, 0x2345fa16u, 0xc17d73c7u, 0x5fb4ed78u, 0xfdec6729u, 0x9c23e0dau, 0x3a5b5a8bu,
    0xd892d43cu, 0x76ca4dedu, 0x1501c79eu, 0xb339414fu, 0x5170bb00u, 0xefa834b1u, 0x8ddfae62u, 0x2c172813u,
    0xca4ea1c4u, 0x68861b75u, 0x06bd9526u, 0xa4f50ed7u, 0x432c8888u, 0xe1640239u, 0x7f9b7beau, 0x1dd2f59bu,
};

static const uint32_t bshim_083_tab4[96] = {
    0xe8ebe1adu, 0x87235b5eu, 0x255ad50fu, 0xc3924ec0u, 0x61c9c871u, 0x00014222u, 0x9e38bbd3u, 0x3c703584u,
    0xdaa7af35u, 0x78df28e6u, 0x1716a297u, 0xb54e1c48u, 0x538595f9u, 0xf1bd0faau, 0x8ff4895bu, 0x2e2c030cu,
    0xcc637cbdu, 0x6a9af66eu, 0x08d2701fu, 0xa709e9d0u, 0x45416381u, 0xe378dd32u, 0x81b056e3u, 0x1fe7d094u,
    0xbe1f4a45u, 0x5c56c3f6u, 0xfa8e3da7u, 0x98c5b758u, 0x36fd3109u, 0xd534aabau, 0x736c246bu, 0x11a39e1cu,
    0xafdb17cdu, 0x4e12917eu, 0xec4a0b2fu, 0x8a8184e0u, 0x28b8fe91u, 0xc6f07842u, 0x6527f1f3u, 0x035f6ba4u,
    0xa196e555u, 0x3fce5f06u, 0xde05d8b7u, 0x7c3d5268u, 0x1a74cc19u, 0xb8ac45cau, 0x56e3bf7bu, 0xf51b392cu,
    0x9352b2ddu, 0x318a2c8eu, 0xcfc1a63fu, 0x6df91ff0u, 0x0c3099a1u, 0xaa681352u, 0x489f8d03u, 0xe6d706b4u,
    0x850e8065u, 0x2345fa16u, 0xc17d73c7u, 0x5fb4ed78u, 0xfdec6729u, 0x9c23e0dau, 0x3a5b5a8bu, 0xd892d43cu,
    0x76ca4dedu, 0x1501c79eu, 0xb339414fu, 0x5170bb00u, 0xefa834b1u, 0x8ddfae62u, 0x2c172813u, 0xca4ea1c4u,
    0x68861b75u, 0x06bd9526u, 0xa4f50ed7u, 0x432c8888u, 0xe1640239u, 0x7f9b7beau, 0x1dd2f59bu, 0xbc0a6f4cu,
    0x5a41e8fdu, 0xf87962aeu, 0x96b0dc5fu, 0x34e85610u, 0xd31fcfc1u, 0x71574972u, 0x0f8ec323u, 0xadc63cd4u,
    0x4bfdb685u, 0xea353036u, 0x886ca9e7u, 0x26a42398u, 0xc4db9d49u, 0x631316fau, 0x014a90abu, 0x9f820a5cu,
};

static const uint32_t bshim_083_tab5[96] = {
    0x6a9af66eu, 0x08d2701fu, 0xa709e9d0u, 0x45416381u, 0xe378dd32u, 0x81b056e3u, 0x1fe7d094u, 0xbe1f4a45u,
    0x5c56c3f6u, 0xfa8e3da7u, 0x98c5b758u, 0x36fd3109u, 0xd534aabau, 0x736c246bu, 0x11a39e1cu, 0xafdb17cdu,
    0x4e12917eu, 0xec4a0b2fu, 0x8a8184e0u, 0x28b8fe91u, 0xc6f07842u, 0x6527f1f3u, 0x035f6ba4u, 0xa196e555u,
    0x3fce5f06u, 0xde05d8b7u, 0x7c3d5268u, 0x1a74cc19u, 0xb8ac45cau, 0x56e3bf7bu, 0xf51b392cu, 0x9352b2ddu,
    0x318a2c8eu, 0xcfc1a63fu, 0x6df91ff0u, 0x0c3099a1u, 0xaa681352u, 0x489f8d03u, 0xe6d706b4u, 0x850e8065u,
    0x2345fa16u, 0xc17d73c7u, 0x5fb4ed78u, 0xfdec6729u, 0x9c23e0dau, 0x3a5b5a8bu, 0xd892d43cu, 0x76ca4dedu,
    0x1501c79eu, 0xb339414fu, 0x5170bb00u, 0xefa834b1u, 0x8ddfae62u, 0x2c172813u, 0xca4ea1c4u, 0x68861b75u,
    0x06bd9526u, 0xa4f50ed7u, 0x432c8888u, 0xe1640239u, 0x7f9b7beau, 0x1dd2f59bu, 0xbc0a6f4cu, 0x5a41e8fdu,
    0xf87962aeu, 0x96b0dc5fu, 0x34e85610u, 0xd31fcfc1u, 0x71574972u, 0x0f8ec323u, 0xadc63cd4u, 0x4bfdb685u,
    0xea353036u, 0x886ca9e7u, 0x26a42398u, 0xc4db9d49u, 0x631316fau, 0x014a90abu, 0x9f820a5cu, 0x3db9840du,
    0xdbf0fdbeu, 0x7a28776fu, 0x185ff120u, 0xb6976ad1u, 0x54cee482u, 0xf3065e33u, 0x913dd7e4u, 0x2f755195u,
    0xcdaccb46u, 0x6be444f7u, 0x0a1bbea8u, 0xa8533859u, 0x468ab20au, 0xe4c22bbbu, 0x82f9a56cu, 0x21311f1du,
};

static const uint32_t bshim_083_tab6[96] = {
    0xec4a0b2fu, 0x8a8184e0u, 0x28b8fe91u, 0xc6f07842u, 0x6527f1f3u, 0x035f6ba4u, 0xa196e555u, 0x3fce5f06u,
    0xde05d8b7u, 0x7c3d5268u, 0x1a74cc19u, 0xb8ac45cau, 0x56e3bf7bu, 0xf51b392cu, 0x9352b2ddu, 0x318a2c8eu,
    0xcfc1a63fu, 0x6df91ff0u, 0x0c3099a1u, 0xaa681352u, 0x489f8d03u, 0xe6d706b4u, 0x850e8065u, 0x2345fa16u,
    0xc17d73c7u, 0x5fb4ed78u, 0xfdec6729u, 0x9c23e0dau, 0x3a5b5a8bu, 0xd892d43cu, 0x76ca4dedu, 0x1501c79eu,
    0xb339414fu, 0x5170bb00u, 0xefa834b1u, 0x8ddfae62u, 0x2c172813u, 0xca4ea1c4u, 0x68861b75u, 0x06bd9526u,
    0xa4f50ed7u, 0x432c8888u, 0xe1640239u, 0x7f9b7beau, 0x1dd2f59bu, 0xbc0a6f4cu, 0x5a41e8fdu, 0xf87962aeu,
    0x96b0dc5fu, 0x34e85610u, 0xd31fcfc1u, 0x71574972u, 0x0f8ec323u, 0xadc63cd4u, 0x4bfdb685u, 0xea353036u,
    0x886ca9e7u, 0x26a42398u, 0xc4db9d49u, 0x631316fau, 0x014a90abu, 0x9f820a5cu, 0x3db9840du, 0xdbf0fdbeu,
    0x7a28776fu, 0x185ff120u, 0xb6976ad1u, 0x54cee482u, 0xf3065e33u, 0x913dd7e4u, 0x2f755195u, 0xcdaccb46u,
    0x6be444f7u, 0x0a1bbea8u, 0xa8533859u, 0x468ab20au, 0xe4c22bbbu, 0x82f9a56cu, 0x21311f1du, 0xbf6898ceu,
    0x5da0127fu, 0xfbd78c30u, 0x9a0f05e1u, 0x38467f92u, 0xd67df943u, 0x74b572f4u, 0x12ececa5u, 0xb1246656u,
    0x4f5be007u, 0xed9359b8u, 0x8bcad369u, 0x2a024d1au, 0xc839c6cbu, 0x6671407cu, 0x04a8ba2du, 0xa2e033deu,
};

static const uint32_t bshim_083_tab7[96] = {
    0x6df91ff0u, 0x0c3099a1u, 0xaa681352u, 0x489f8d03u, 0xe6d706b4u, 0x850e8065u, 0x2345fa16u, 0xc17d73c7u,
    0x5fb4ed78u, 0xfdec6729u, 0x9c23e0dau, 0x3a5b5a8bu, 0xd892d43cu, 0x76ca4dedu, 0x1501c79eu, 0xb339414fu,
    0x5170bb00u, 0xefa834b1u, 0x8ddfae62u, 0x2c172813u, 0xca4ea1c4u, 0x68861b75u, 0x06bd9526u, 0xa4f50ed7u,
    0x432c8888u, 0xe1640239u, 0x7f9b7beau, 0x1dd2f59bu, 0xbc0a6f4cu, 0x5a41e8fdu, 0xf87962aeu, 0x96b0dc5fu,
    0x34e85610u, 0xd31fcfc1u, 0x71574972u, 0x0f8ec323u, 0xadc63cd4u, 0x4bfdb685u, 0xea353036u, 0x886ca9e7u,
    0x26a42398u, 0xc4db9d49u, 0x631316fau, 0x014a90abu, 0x9f820a5cu, 0x3db9840du, 0xdbf0fdbeu, 0x7a28776fu,
    0x185ff120u, 0xb6976ad1u, 0x54cee482u, 0xf3065e33u, 0x913dd7e4u, 0x2f755195u, 0xcdaccb46u, 0x6be444f7u,
    0x0a1bbea8u, 0xa8533859u, 0x468ab20au, 0xe4c22bbbu, 0x82f9a56cu, 0x21311f1du, 0xbf6898ceu, 0x5da0127fu,
    0xfbd78c30u, 0x9a0f05e1u, 0x38467f92u, 0xd67df943u, 0x74b572f4u, 0x12ececa5u, 0xb1246656u, 0x4f5be007u,
    0xed9359b8u, 0x8bcad369u, 0x2a024d1au, 0xc839c6cbu, 0x6671407cu, 0x04a8ba2du, 0xa2e033deu, 0x4117ad8fu,
    0xdf4f2740u, 0x7d86a0f1u, 0x1bbe1aa2u, 0xb9f59453u, 0x582d0e04u, 0xf66487b5u, 0x949c0166u, 0x32d37b17u,
    0xd10af4c8u, 0x6f426e79u, 0x0d79e82au, 0xabb161dbu, 0x49e8db8cu, 0xe820553du, 0x8657ceeeu, 0x248f489fu,
};

struct bshim_083_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_083_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_083_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_083_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_083_reset(struct bshim_083_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000a077du;
    return 0;
}

