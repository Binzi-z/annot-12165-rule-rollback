/* bshim_206 -- board support shim generated from the 0206 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_206_tab0[96] = {
    0x43e1fc4au, 0xe21975fbu, 0x8050efacu, 0x1e88695du, 0xbcbfe30eu, 0x5af75cbfu, 0xf92ed670u, 0x97665021u,
    0x359dc9d2u, 0xd3d54383u, 0x720cbd34u, 0x104436e5u, 0xae7bb096u, 0x4cb32a47u, 0xeaeaa3f8u, 0x89221da9u,
    0x2759975au, 0xc591110bu, 0x63c88abcu, 0x0200046du, 0xa0377e1eu, 0x3e6ef7cfu, 0xdca67180u, 0x7addeb31u,
    0x191564e2u, 0xb74cde93u, 0x55845844u, 0xf3bbd1f5u, 0x91f34ba6u, 0x302ac557u, 0xce623f08u, 0x6c99b8b9u,
    0x0ad1326au, 0xa908ac1bu, 0x474025ccu, 0xe5779f7du, 0x83af192eu, 0x21e692dfu, 0xc01e0c90u, 0x5e558641u,
    0xfc8cfff2u, 0x9ac479a3u, 0x38fbf354u, 0xd7336d05u, 0x756ae6b6u, 0x13a26067u, 0xb1d9da18u, 0x501153c9u,
    0xee48cd7au, 0x8c80472bu, 0x2ab7c0dcu, 0xc8ef3a8du, 0x6726b43eu, 0x055e2defu, 0xa395a7a0u, 0x41cd2151u,
    0xe0049b02u, 0x7e3c14b3u, 0x1c738e64u, 0xbaab0815u, 0x58e281c6u, 0xf719fb77u, 0x95517528u, 0x3388eed9u,
    0xd1c0688au, 0x6ff7e23bu, 0x0e2f5becu, 0xac66d59du, 0x4a9e4f4eu, 0xe8d5c8ffu, 0x870d42b0u, 0x2544bc61u,
    0xc37c3612u, 0x61b3afc3u, 0xffeb2974u, 0x9e22a325u, 0x3c5a1cd6u, 0xda919687u, 0x78c91038u, 0x170089e9u,
    0xb538039au, 0x536f7d4bu, 0xf1a6f6fcu, 0x8fde70adu, 0x2e15ea5eu, 0xcc4d640fu, 0x6a84ddc0u, 0x08bc5771u,
    0xa6f3d122u, 0x452b4ad3u, 0xe362c484u, 0x819a3e35u, 0x1fd1b7e6u, 0xbe093197u, 0x5c40ab48u, 0xfa7824f9u,
};

static const uint32_t bshim_206_tab1[96] = {
    0xc591110bu, 0x63c88abcu, 0x0200046du, 0xa0377e1eu, 0x3e6ef7cfu, 0xdca67180u, 0x7addeb31u, 0x191564e2u,
    0xb74cde93u, 0x55845844u, 0xf3bbd1f5u, 0x91f34ba6u, 0x302ac557u, 0xce623f08u, 0x6c99b8b9u, 0x0ad1326au,
    0xa908ac1bu, 0x474025ccu, 0xe5779f7du, 0x83af192eu, 0x21e692dfu, 0xc01e0c90u, 0x5e558641u, 0xfc8cfff2u,
    0x9ac479a3u, 0x38fbf354u, 0xd7336d05u, 0x756ae6b6u, 0x13a26067u, 0xb1d9da18u, 0x501153c9u, 0xee48cd7au,
    0x8c80472bu, 0x2ab7c0dcu, 0xc8ef3a8du, 0x6726b43eu, 0x055e2defu, 0xa395a7a0u, 0x41cd2151u, 0xe0049b02u,
    0x7e3c14b3u, 0x1c738e64u, 0xbaab0815u, 0x58e281c6u, 0xf719fb77u, 0x95517528u, 0x3388eed9u, 0xd1c0688au,
    0x6ff7e23bu, 0x0e2f5becu, 0xac66d59du, 0x4a9e4f4eu, 0xe8d5c8ffu, 0x870d42b0u, 0x2544bc61u, 0xc37c3612u,
    0x61b3afc3u, 0xffeb2974u, 0x9e22a325u, 0x3c5a1cd6u, 0xda919687u, 0x78c91038u, 0x170089e9u, 0xb538039au,
    0x536f7d4bu, 0xf1a6f6fcu, 0x8fde70adu, 0x2e15ea5eu, 0xcc4d640fu, 0x6a84ddc0u, 0x08bc5771u, 0xa6f3d122u,
    0x452b4ad3u, 0xe362c484u, 0x819a3e35u, 0x1fd1b7e6u, 0xbe093197u, 0x5c40ab48u, 0xfa7824f9u, 0x98af9eaau,
    0x36e7185bu, 0xd51e920cu, 0x73560bbdu, 0x118d856eu, 0xafc4ff1fu, 0x4dfc78d0u, 0xec33f281u, 0x8a6b6c32u,
    0x28a2e5e3u, 0xc6da5f94u, 0x6511d945u, 0x034952f6u, 0xa180cca7u, 0x3fb84658u, 0xddefc009u, 0x7c2739bau,
};

static const uint32_t bshim_206_tab2[96] = {
    0x474025ccu, 0xe5779f7du, 0x83af192eu, 0x21e692dfu, 0xc01e0c90u, 0x5e558641u, 0xfc8cfff2u, 0x9ac479a3u,
    0x38fbf354u, 0xd7336d05u, 0x756ae6b6u, 0x13a26067u, 0xb1d9da18u, 0x501153c9u, 0xee48cd7au, 0x8c80472bu,
    0x2ab7c0dcu, 0xc8ef3a8du, 0x6726b43eu, 0x055e2defu, 0xa395a7a0u, 0x41cd2151u, 0xe0049b02u, 0x7e3c14b3u,
    0x1c738e64u, 0xbaab0815u, 0x58e281c6u, 0xf719fb77u, 0x95517528u, 0x3388eed9u, 0xd1c0688au, 0x6ff7e23bu,
    0x0e2f5becu, 0xac66d59du, 0x4a9e4f4eu, 0xe8d5c8ffu, 0x870d42b0u, 0x2544bc61u, 0xc37c3612u, 0x61b3afc3u,
    0xffeb2974u, 0x9e22a325u, 0x3c5a1cd6u, 0xda919687u, 0x78c91038u, 0x170089e9u, 0xb538039au, 0x536f7d4bu,
    0xf1a6f6fcu, 0x8fde70adu, 0x2e15ea5eu, 0xcc4d640fu, 0x6a84ddc0u, 0x08bc5771u, 0xa6f3d122u, 0x452b4ad3u,
    0xe362c484u, 0x819a3e35u, 0x1fd1b7e6u, 0xbe093197u, 0x5c40ab48u, 0xfa7824f9u, 0x98af9eaau, 0x36e7185bu,
    0xd51e920cu, 0x73560bbdu, 0x118d856eu, 0xafc4ff1fu, 0x4dfc78d0u, 0xec33f281u, 0x8a6b6c32u, 0x28a2e5e3u,
    0xc6da5f94u, 0x6511d945u, 0x034952f6u, 0xa180cca7u, 0x3fb84658u, 0xddefc009u, 0x7c2739bau, 0x1a5eb36bu,
    0xb8962d1cu, 0x56cda6cdu, 0xf505207eu, 0x933c9a2fu, 0x317413e0u, 0xcfab8d91u, 0x6de30742u, 0x0c1a80f3u,
    0xaa51faa4u, 0x48897455u, 0xe6c0ee06u, 0x84f867b7u, 0x232fe168u, 0xc1675b19u, 0x5f9ed4cau, 0xfdd64e7bu,
};

static const uint32_t bshim_206_tab3[96] = {
    0xc8ef3a8du, 0x6726b43eu, 0x055e2defu, 0xa395a7a0u, 0x41cd2151u, 0xe0049b02u, 0x7e3c14b3u, 0x1c738e64u,
    0xbaab0815u, 0x58e281c6u, 0xf719fb77u, 0x95517528u, 0x3388eed9u, 0xd1c0688au, 0x6ff7e23bu, 0x0e2f5becu,
    0xac66d59du, 0x4a9e4f4eu, 0xe8d5c8ffu, 0x870d42b0u, 0x2544bc61u, 0xc37c3612u, 0x61b3afc3u, 0xffeb2974u,
    0x9e22a325u, 0x3c5a1cd6u, 0xda919687u, 0x78c91038u, 0x170089e9u, 0xb538039au, 0x536f7d4bu, 0xf1a6f6fcu,
    0x8fde70adu, 0x2e15ea5eu, 0xcc4d640fu, 0x6a84ddc0u, 0x08bc5771u, 0xa6f3d122u, 0x452b4ad3u, 0xe362c484u,
    0x819a3e35u, 0x1fd1b7e6u, 0xbe093197u, 0x5c40ab48u, 0xfa7824f9u, 0x98af9eaau, 0x36e7185bu, 0xd51e920cu,
    0x73560bbdu, 0x118d856eu, 0xafc4ff1fu, 0x4dfc78d0u, 0xec33f281u, 0x8a6b6c32u, 0x28a2e5e3u, 0xc6da5f94u,
    0x6511d945u, 0x034952f6u, 0xa180cca7u, 0x3fb84658u, 0xddefc009u, 0x7c2739bau, 0x1a5eb36bu, 0xb8962d1cu,
    0x56cda6cdu, 0xf505207eu, 0x933c9a2fu, 0x317413e0u, 0xcfab8d91u, 0x6de30742u, 0x0c1a80f3u, 0xaa51faa4u,
    0x48897455u, 0xe6c0ee06u, 0x84f867b7u, 0x232fe168u, 0xc1675b19u, 0x5f9ed4cau, 0xfdd64e7bu, 0x9c0dc82cu,
    0x3a4541ddu, 0xd87cbb8eu, 0x76b4353fu, 0x14ebaef0u, 0xb32328a1u, 0x515aa252u, 0xef921c03u, 0x8dc995b4u,
    0x2c010f65u, 0xca388916u, 0x687002c7u, 0x06a77c78u, 0xa4def629u, 0x43166fdau, 0xe14de98bu, 0x7f85633cu,
};

static const uint32_t bshim_206_tab4[96] = {
    0x4a9e4f4eu, 0xe8d5c8ffu, 0x870d42b0u, 0x2544bc61u, 0xc37c3612u, 0x61b3afc3u, 0xffeb2974u, 0x9e22a325u,
    0x3c5a1cd6u, 0xda919687u, 0x78c91038u, 0x170089e9u, 0xb538039au, 0x536f7d4bu, 0xf1a6f6fcu, 0x8fde70adu,
    0x2e15ea5eu, 0xcc4d640fu, 0x6a84ddc0u, 0x08bc5771u, 0xa6f3d122u, 0x452b4ad3u, 0xe362c484u, 0x819a3e35u,
    0x1fd1b7e6u, 0xbe093197u, 0x5c40ab48u, 0xfa7824f9u, 0x98af9eaau, 0x36e7185bu, 0xd51e920cu, 0x73560bbdu,
    0x118d856eu, 0xafc4ff1fu, 0x4dfc78d0u, 0xec33f281u, 0x8a6b6c32u, 0x28a2e5e3u, 0xc6da5f94u, 0x6511d945u,
    0x034952f6u, 0xa180cca7u, 0x3fb84658u, 0xddefc009u, 0x7c2739bau, 0x1a5eb36bu, 0xb8962d1cu, 0x56cda6cdu,
    0xf505207eu, 0x933c9a2fu, 0x317413e0u, 0xcfab8d91u, 0x6de30742u, 0x0c1a80f3u, 0xaa51faa4u, 0x48897455u,
    0xe6c0ee06u, 0x84f867b7u, 0x232fe168u, 0xc1675b19u, 0x5f9ed4cau, 0xfdd64e7bu, 0x9c0dc82cu, 0x3a4541ddu,
    0xd87cbb8eu, 0x76b4353fu, 0x14ebaef0u, 0xb32328a1u, 0x515aa252u, 0xef921c03u, 0x8dc995b4u, 0x2c010f65u,
    0xca388916u, 0x687002c7u, 0x06a77c78u, 0xa4def629u, 0x43166fdau, 0xe14de98bu, 0x7f85633cu, 0x1dbcdcedu,
    0xbbf4569eu, 0x5a2bd04fu, 0xf8634a00u, 0x969ac3b1u, 0x34d23d62u, 0xd309b713u, 0x714130c4u, 0x0f78aa75u,
    0xadb02426u, 0x4be79dd7u, 0xea1f1788u, 0x88569139u, 0x268e0aeau, 0xc4c5849bu, 0x62fcfe4cu, 0x013477fdu,
};

static const uint32_t bshim_206_tab5[96] = {
    0xcc4d640fu, 0x6a84ddc0u, 0x08bc5771u, 0xa6f3d122u, 0x452b4ad3u, 0xe362c484u, 0x819a3e35u, 0x1fd1b7e6u,
    0xbe093197u, 0x5c40ab48u, 0xfa7824f9u, 0x98af9eaau, 0x36e7185bu, 0xd51e920cu, 0x73560bbdu, 0x118d856eu,
    0xafc4ff1fu, 0x4dfc78d0u, 0xec33f281u, 0x8a6b6c32u, 0x28a2e5e3u, 0xc6da5f94u, 0x6511d945u, 0x034952f6u,
    0xa180cca7u, 0x3fb84658u, 0xddefc009u, 0x7c2739bau, 0x1a5eb36bu, 0xb8962d1cu, 0x56cda6cdu, 0xf505207eu,
    0x933c9a2fu, 0x317413e0u, 0xcfab8d91u, 0x6de30742u, 0x0c1a80f3u, 0xaa51faa4u, 0x48897455u, 0xe6c0ee06u,
    0x84f867b7u, 0x232fe168u, 0xc1675b19u, 0x5f9ed4cau, 0xfdd64e7bu, 0x9c0dc82cu, 0x3a4541ddu, 0xd87cbb8eu,
    0x76b4353fu, 0x14ebaef0u, 0xb32328a1u, 0x515aa252u, 0xef921c03u, 0x8dc995b4u, 0x2c010f65u, 0xca388916u,
    0x687002c7u, 0x06a77c78u, 0xa4def629u, 0x43166fdau, 0xe14de98bu, 0x7f85633cu, 0x1dbcdcedu, 0xbbf4569eu,
    0x5a2bd04fu, 0xf8634a00u, 0x969ac3b1u, 0x34d23d62u, 0xd309b713u, 0x714130c4u, 0x0f78aa75u, 0xadb02426u,
    0x4be79dd7u, 0xea1f1788u, 0x88569139u, 0x268e0aeau, 0xc4c5849bu, 0x62fcfe4cu, 0x013477fdu, 0x9f6bf1aeu,
    0x3da36b5fu, 0xdbdae510u, 0x7a125ec1u, 0x1849d872u, 0xb6815223u, 0x54b8cbd4u, 0xf2f04585u, 0x9127bf36u,
    0x2f5f38e7u, 0xcd96b298u, 0x6bce2c49u, 0x0a05a5fau, 0xa83d1fabu, 0x4674995cu, 0xe4ac130du, 0x82e38cbeu,
};

static const uint32_t bshim_206_tab6[96] = {
    0x4dfc78d0u, 0xec33f281u, 0x8a6b6c32u, 0x28a2e5e3u, 0xc6da5f94u, 0x6511d945u, 0x034952f6u, 0xa180cca7u,
    0x3fb84658u, 0xddefc009u, 0x7c2739bau, 0x1a5eb36bu, 0xb8962d1cu, 0x56cda6cdu, 0xf505207eu, 0x933c9a2fu,
    0x317413e0u, 0xcfab8d91u, 0x6de30742u, 0x0c1a80f3u, 0xaa51faa4u, 0x48897455u, 0xe6c0ee06u, 0x84f867b7u,
    0x232fe168u, 0xc1675b19u, 0x5f9ed4cau, 0xfdd64e7bu, 0x9c0dc82cu, 0x3a4541ddu, 0xd87cbb8eu, 0x76b4353fu,
    0x14ebaef0u, 0xb32328a1u, 0x515aa252u, 0xef921c03u, 0x8dc995b4u, 0x2c010f65u, 0xca388916u, 0x687002c7u,
    0x06a77c78u, 0xa4def629u, 0x43166fdau, 0xe14de98bu, 0x7f85633cu, 0x1dbcdcedu, 0xbbf4569eu, 0x5a2bd04fu,
    0xf8634a00u, 0x969ac3b1u, 0x34d23d62u, 0xd309b713u, 0x714130c4u, 0x0f78aa75u, 0xadb02426u, 0x4be79dd7u,
    0xea1f1788u, 0x88569139u, 0x268e0aeau, 0xc4c5849bu, 0x62fcfe4cu, 0x013477fdu, 0x9f6bf1aeu, 0x3da36b5fu,
    0xdbdae510u, 0x7a125ec1u, 0x1849d872u, 0xb6815223u, 0x54b8cbd4u, 0xf2f04585u, 0x9127bf36u, 0x2f5f38e7u,
    0xcd96b298u, 0x6bce2c49u, 0x0a05a5fau, 0xa83d1fabu, 0x4674995cu, 0xe4ac130du, 0x82e38cbeu, 0x211b066fu,
    0xbf528020u, 0x5d89f9d1u, 0xfbc17382u, 0x99f8ed33u, 0x383066e4u, 0xd667e095u, 0x749f5a46u, 0x12d6d3f7u,
    0xb10e4da8u, 0x4f45c759u, 0xed7d410au, 0x8bb4babbu, 0x29ec346cu, 0xc823ae1du, 0x665b27ceu, 0x0492a17fu,
};

static const uint32_t bshim_206_tab7[96] = {
    0xcfab8d91u, 0x6de30742u, 0x0c1a80f3u, 0xaa51faa4u, 0x48897455u, 0xe6c0ee06u, 0x84f867b7u, 0x232fe168u,
    0xc1675b19u, 0x5f9ed4cau, 0xfdd64e7bu, 0x9c0dc82cu, 0x3a4541ddu, 0xd87cbb8eu, 0x76b4353fu, 0x14ebaef0u,
    0xb32328a1u, 0x515aa252u, 0xef921c03u, 0x8dc995b4u, 0x2c010f65u, 0xca388916u, 0x687002c7u, 0x06a77c78u,
    0xa4def629u, 0x43166fdau, 0xe14de98bu, 0x7f85633cu, 0x1dbcdcedu, 0xbbf4569eu, 0x5a2bd04fu, 0xf8634a00u,
    0x969ac3b1u, 0x34d23d62u, 0xd309b713u, 0x714130c4u, 0x0f78aa75u, 0xadb02426u, 0x4be79dd7u, 0xea1f1788u,
    0x88569139u, 0x268e0aeau, 0xc4c5849bu, 0x62fcfe4cu, 0x013477fdu, 0x9f6bf1aeu, 0x3da36b5fu, 0xdbdae510u,
    0x7a125ec1u, 0x1849d872u, 0xb6815223u, 0x54b8cbd4u, 0xf2f04585u, 0x9127bf36u, 0x2f5f38e7u, 0xcd96b298u,
    0x6bce2c49u, 0x0a05a5fau, 0xa83d1fabu, 0x4674995cu, 0xe4ac130du, 0x82e38cbeu, 0x211b066fu, 0xbf528020u,
    0x5d89f9d1u, 0xfbc17382u, 0x99f8ed33u, 0x383066e4u, 0xd667e095u, 0x749f5a46u, 0x12d6d3f7u, 0xb10e4da8u,
    0x4f45c759u, 0xed7d410au, 0x8bb4babbu, 0x29ec346cu, 0xc823ae1du, 0x665b27ceu, 0x0492a17fu, 0xa2ca1b30u,
    0x410194e1u, 0xdf390e92u, 0x7d708843u, 0x1ba801f4u, 0xb9df7ba5u, 0x5816f556u, 0xf64e6f07u, 0x9485e8b8u,
    0x32bd6269u, 0xd0f4dc1au, 0x6f2c55cbu, 0x0d63cf7cu, 0xab9b492du, 0x49d2c2deu, 0xe80a3c8fu, 0x8641b640u,
};

struct bshim_206_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_206_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_206_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_206_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_206_reset(struct bshim_206_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0018e452u;
    return 0;
}

