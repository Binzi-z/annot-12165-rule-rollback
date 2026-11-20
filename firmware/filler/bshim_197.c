/* bshim_197 -- board support shim generated from the 0197 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_197_tab0[96] = {
    0x9a648a1fu, 0x389c03d0u, 0xd6d37d81u, 0x750af732u, 0x134270e3u, 0xb179ea94u, 0x4fb16445u, 0xede8ddf6u,
    0x8c2057a7u, 0x2a57d158u, 0xc88f4b09u, 0x66c6c4bau, 0x04fe3e6bu, 0xa335b81cu, 0x416d31cdu, 0xdfa4ab7eu,
    0x7ddc252fu, 0x1c139ee0u, 0xba4b1891u, 0x58829242u, 0xf6ba0bf3u, 0x94f185a4u, 0x3328ff55u, 0xd1607906u,
    0x6f97f2b7u, 0x0dcf6c68u, 0xac06e619u, 0x4a3e5fcau, 0xe875d97bu, 0x86ad532cu, 0x24e4ccddu, 0xc31c468eu,
    0x6153c03fu, 0xff8b39f0u, 0x9dc2b3a1u, 0x3bfa2d52u, 0xda31a703u, 0x786920b4u, 0x16a09a65u, 0xb4d81416u,
    0x530f8dc7u, 0xf1470778u, 0x8f7e8129u, 0x2db5fadau, 0xcbed748bu, 0x6a24ee3cu, 0x085c67edu, 0xa693e19eu,
    0x44cb5b4fu, 0xe302d500u, 0x813a4eb1u, 0x1f71c862u, 0xbda94213u, 0x5be0bbc4u, 0xfa183575u, 0x984faf26u,
    0x368728d7u, 0xd4bea288u, 0x72f61c39u, 0x112d95eau, 0xaf650f9bu, 0x4d9c894cu, 0xebd402fdu, 0x8a0b7caeu,
    0x2842f65fu, 0xc67a7010u, 0x64b1e9c1u, 0x02e96372u, 0xa120dd23u, 0x3f5856d4u, 0xdd8fd085u, 0x7bc74a36u,
    0x19fec3e7u, 0xb8363d98u, 0x566db749u, 0xf4a530fau, 0x92dcaaabu, 0x3114245cu, 0xcf4b9e0du, 0x6d8317beu,
    0x0bba916fu, 0xa9f20b20u, 0x482984d1u, 0xe660fe82u, 0x84987833u, 0x22cff1e4u, 0xc1076b95u, 0x5f3ee546u,
    0xfd765ef7u, 0x9badd8a8u, 0x39e55259u, 0xd81ccc0au, 0x765445bbu, 0x148bbf6cu, 0xb2c3391du, 0x50fab2ceu,
};

static const uint32_t bshim_197_tab1[96] = {
    0x1c139ee0u, 0xba4b1891u, 0x58829242u, 0xf6ba0bf3u, 0x94f185a4u, 0x3328ff55u, 0xd1607906u, 0x6f97f2b7u,
    0x0dcf6c68u, 0xac06e619u, 0x4a3e5fcau, 0xe875d97bu, 0x86ad532cu, 0x24e4ccddu, 0xc31c468eu, 0x6153c03fu,
    0xff8b39f0u, 0x9dc2b3a1u, 0x3bfa2d52u, 0xda31a703u, 0x786920b4u, 0x16a09a65u, 0xb4d81416u, 0x530f8dc7u,
    0xf1470778u, 0x8f7e8129u, 0x2db5fadau, 0xcbed748bu, 0x6a24ee3cu, 0x085c67edu, 0xa693e19eu, 0x44cb5b4fu,
    0xe302d500u, 0x813a4eb1u, 0x1f71c862u, 0xbda94213u, 0x5be0bbc4u, 0xfa183575u, 0x984faf26u, 0x368728d7u,
    0xd4bea288u, 0x72f61c39u, 0x112d95eau, 0xaf650f9bu, 0x4d9c894cu, 0xebd402fdu, 0x8a0b7caeu, 0x2842f65fu,
    0xc67a7010u, 0x64b1e9c1u, 0x02e96372u, 0xa120dd23u, 0x3f5856d4u, 0xdd8fd085u, 0x7bc74a36u, 0x19fec3e7u,
    0xb8363d98u, 0x566db749u, 0xf4a530fau, 0x92dcaaabu, 0x3114245cu, 0xcf4b9e0du, 0x6d8317beu, 0x0bba916fu,
    0xa9f20b20u, 0x482984d1u, 0xe660fe82u, 0x84987833u, 0x22cff1e4u, 0xc1076b95u, 0x5f3ee546u, 0xfd765ef7u,
    0x9badd8a8u, 0x39e55259u, 0xd81ccc0au, 0x765445bbu, 0x148bbf6cu, 0xb2c3391du, 0x50fab2ceu, 0xef322c7fu,
    0x8d69a630u, 0x2ba11fe1u, 0xc9d89992u, 0x68101343u, 0x06478cf4u, 0xa47f06a5u, 0x42b68056u, 0xe0edfa07u,
    0x7f2573b8u, 0x1d5ced69u, 0xbb94671au, 0x59cbe0cbu, 0xf8035a7cu, 0x963ad42du, 0x34724ddeu, 0xd2a9c78fu,
};

static const uint32_t bshim_197_tab2[96] = {
    0x9dc2b3a1u, 0x3bfa2d52u, 0xda31a703u, 0x786920b4u, 0x16a09a65u, 0xb4d81416u, 0x530f8dc7u, 0xf1470778u,
    0x8f7e8129u, 0x2db5fadau, 0xcbed748bu, 0x6a24ee3cu, 0x085c67edu, 0xa693e19eu, 0x44cb5b4fu, 0xe302d500u,
    0x813a4eb1u, 0x1f71c862u, 0xbda94213u, 0x5be0bbc4u, 0xfa183575u, 0x984faf26u, 0x368728d7u, 0xd4bea288u,
    0x72f61c39u, 0x112d95eau, 0xaf650f9bu, 0x4d9c894cu, 0xebd402fdu, 0x8a0b7caeu, 0x2842f65fu, 0xc67a7010u,
    0x64b1e9c1u, 0x02e96372u, 0xa120dd23u, 0x3f5856d4u, 0xdd8fd085u, 0x7bc74a36u, 0x19fec3e7u, 0xb8363d98u,
    0x566db749u, 0xf4a530fau, 0x92dcaaabu, 0x3114245cu, 0xcf4b9e0du, 0x6d8317beu, 0x0bba916fu, 0xa9f20b20u,
    0x482984d1u, 0xe660fe82u, 0x84987833u, 0x22cff1e4u, 0xc1076b95u, 0x5f3ee546u, 0xfd765ef7u, 0x9badd8a8u,
    0x39e55259u, 0xd81ccc0au, 0x765445bbu, 0x148bbf6cu, 0xb2c3391du, 0x50fab2ceu, 0xef322c7fu, 0x8d69a630u,
    0x2ba11fe1u, 0xc9d89992u, 0x68101343u, 0x06478cf4u, 0xa47f06a5u, 0x42b68056u, 0xe0edfa07u, 0x7f2573b8u,
    0x1d5ced69u, 0xbb94671au, 0x59cbe0cbu, 0xf8035a7cu, 0x963ad42du, 0x34724ddeu, 0xd2a9c78fu, 0x70e14140u,
    0x0f18baf1u, 0xad5034a2u, 0x4b87ae53u, 0xe9bf2804u, 0x87f6a1b5u, 0x262e1b66u, 0xc4659517u, 0x629d0ec8u,
    0x00d48879u, 0x9f0c022au, 0x3d437bdbu, 0xdb7af58cu, 0x79b26f3du, 0x17e9e8eeu, 0xb621629fu, 0x5458dc50u,
};

static const uint32_t bshim_197_tab3[96] = {
    0x1f71c862u, 0xbda94213u, 0x5be0bbc4u, 0xfa183575u, 0x984faf26u, 0x368728d7u, 0xd4bea288u, 0x72f61c39u,
    0x112d95eau, 0xaf650f9bu, 0x4d9c894cu, 0xebd402fdu, 0x8a0b7caeu, 0x2842f65fu, 0xc67a7010u, 0x64b1e9c1u,
    0x02e96372u, 0xa120dd23u, 0x3f5856d4u, 0xdd8fd085u, 0x7bc74a36u, 0x19fec3e7u, 0xb8363d98u, 0x566db749u,
    0xf4a530fau, 0x92dcaaabu, 0x3114245cu, 0xcf4b9e0du, 0x6d8317beu, 0x0bba916fu, 0xa9f20b20u, 0x482984d1u,
    0xe660fe82u, 0x84987833u, 0x22cff1e4u, 0xc1076b95u, 0x5f3ee546u, 0xfd765ef7u, 0x9badd8a8u, 0x39e55259u,
    0xd81ccc0au, 0x765445bbu, 0x148bbf6cu, 0xb2c3391du, 0x50fab2ceu, 0xef322c7fu, 0x8d69a630u, 0x2ba11fe1u,
    0xc9d89992u, 0x68101343u, 0x06478cf4u, 0xa47f06a5u, 0x42b68056u, 0xe0edfa07u, 0x7f2573b8u, 0x1d5ced69u,
    0xbb94671au, 0x59cbe0cbu, 0xf8035a7cu, 0x963ad42du, 0x34724ddeu, 0xd2a9c78fu, 0x70e14140u, 0x0f18baf1u,
    0xad5034a2u, 0x4b87ae53u, 0xe9bf2804u, 0x87f6a1b5u, 0x262e1b66u, 0xc4659517u, 0x629d0ec8u, 0x00d48879u,
    0x9f0c022au, 0x3d437bdbu, 0xdb7af58cu, 0x79b26f3du, 0x17e9e8eeu, 0xb621629fu, 0x5458dc50u, 0xf2905601u,
    0x90c7cfb2u, 0x2eff4963u, 0xcd36c314u, 0x6b6e3cc5u, 0x09a5b676u, 0xa7dd3027u, 0x4614a9d8u, 0xe44c2389u,
    0x82839d3au, 0x20bb16ebu, 0xbef2909cu, 0x5d2a0a4du, 0xfb6183feu, 0x9998fdafu, 0x37d07760u, 0xd607f111u,
};

static const uint32_t bshim_197_tab4[96] = {
    0xa120dd23u, 0x3f5856d4u, 0xdd8fd085u, 0x7bc74a36u, 0x19fec3e7u, 0xb8363d98u, 0x566db749u, 0xf4a530fau,
    0x92dcaaabu, 0x3114245cu, 0xcf4b9e0du, 0x6d8317beu, 0x0bba916fu, 0xa9f20b20u, 0x482984d1u, 0xe660fe82u,
    0x84987833u, 0x22cff1e4u, 0xc1076b95u, 0x5f3ee546u, 0xfd765ef7u, 0x9badd8a8u, 0x39e55259u, 0xd81ccc0au,
    0x765445bbu, 0x148bbf6cu, 0xb2c3391du, 0x50fab2ceu, 0xef322c7fu, 0x8d69a630u, 0x2ba11fe1u, 0xc9d89992u,
    0x68101343u, 0x06478cf4u, 0xa47f06a5u, 0x42b68056u, 0xe0edfa07u, 0x7f2573b8u, 0x1d5ced69u, 0xbb94671au,
    0x59cbe0cbu, 0xf8035a7cu, 0x963ad42du, 0x34724ddeu, 0xd2a9c78fu, 0x70e14140u, 0x0f18baf1u, 0xad5034a2u,
    0x4b87ae53u, 0xe9bf2804u, 0x87f6a1b5u, 0x262e1b66u, 0xc4659517u, 0x629d0ec8u, 0x00d48879u, 0x9f0c022au,
    0x3d437bdbu, 0xdb7af58cu, 0x79b26f3du, 0x17e9e8eeu, 0xb621629fu, 0x5458dc50u, 0xf2905601u, 0x90c7cfb2u,
    0x2eff4963u, 0xcd36c314u, 0x6b6e3cc5u, 0x09a5b676u, 0xa7dd3027u, 0x4614a9d8u, 0xe44c2389u, 0x82839d3au,
    0x20bb16ebu, 0xbef2909cu, 0x5d2a0a4du, 0xfb6183feu, 0x9998fdafu, 0x37d07760u, 0xd607f111u, 0x743f6ac2u,
    0x1276e473u, 0xb0ae5e24u, 0x4ee5d7d5u, 0xed1d5186u, 0x8b54cb37u, 0x298c44e8u, 0xc7c3be99u, 0x65fb384au,
    0x0432b1fbu, 0xa26a2bacu, 0x40a1a55du, 0xded91f0eu, 0x7d1098bfu, 0x1b481270u, 0xb97f8c21u, 0x57b705d2u,
};

static const uint32_t bshim_197_tab5[96] = {
    0x22cff1e4u, 0xc1076b95u, 0x5f3ee546u, 0xfd765ef7u, 0x9badd8a8u, 0x39e55259u, 0xd81ccc0au, 0x765445bbu,
    0x148bbf6cu, 0xb2c3391du, 0x50fab2ceu, 0xef322c7fu, 0x8d69a630u, 0x2ba11fe1u, 0xc9d89992u, 0x68101343u,
    0x06478cf4u, 0xa47f06a5u, 0x42b68056u, 0xe0edfa07u, 0x7f2573b8u, 0x1d5ced69u, 0xbb94671au, 0x59cbe0cbu,
    0xf8035a7cu, 0x963ad42du, 0x34724ddeu, 0xd2a9c78fu, 0x70e14140u, 0x0f18baf1u, 0xad5034a2u, 0x4b87ae53u,
    0xe9bf2804u, 0x87f6a1b5u, 0x262e1b66u, 0xc4659517u, 0x629d0ec8u, 0x00d48879u, 0x9f0c022au, 0x3d437bdbu,
    0xdb7af58cu, 0x79b26f3du, 0x17e9e8eeu, 0xb621629fu, 0x5458dc50u, 0xf2905601u, 0x90c7cfb2u, 0x2eff4963u,
    0xcd36c314u, 0x6b6e3cc5u, 0x09a5b676u, 0xa7dd3027u, 0x4614a9d8u, 0xe44c2389u, 0x82839d3au, 0x20bb16ebu,
    0xbef2909cu, 0x5d2a0a4du, 0xfb6183feu, 0x9998fdafu, 0x37d07760u, 0xd607f111u, 0x743f6ac2u, 0x1276e473u,
    0xb0ae5e24u, 0x4ee5d7d5u, 0xed1d5186u, 0x8b54cb37u, 0x298c44e8u, 0xc7c3be99u, 0x65fb384au, 0x0432b1fbu,
    0xa26a2bacu, 0x40a1a55du, 0xded91f0eu, 0x7d1098bfu, 0x1b481270u, 0xb97f8c21u, 0x57b705d2u, 0xf5ee7f83u,
    0x9425f934u, 0x325d72e5u, 0xd094ec96u, 0x6ecc6647u, 0x0d03dff8u, 0xab3b59a9u, 0x4972d35au, 0xe7aa4d0bu,
    0x85e1c6bcu, 0x2419406du, 0xc250ba1eu, 0x608833cfu, 0xfebfad80u, 0x9cf72731u, 0x3b2ea0e2u, 0xd9661a93u,
};

static const uint32_t bshim_197_tab6[96] = {
    0xa47f06a5u, 0x42b68056u, 0xe0edfa07u, 0x7f2573b8u, 0x1d5ced69u, 0xbb94671au, 0x59cbe0cbu, 0xf8035a7cu,
    0x963ad42du, 0x34724ddeu, 0xd2a9c78fu, 0x70e14140u, 0x0f18baf1u, 0xad5034a2u, 0x4b87ae53u, 0xe9bf2804u,
    0x87f6a1b5u, 0x262e1b66u, 0xc4659517u, 0x629d0ec8u, 0x00d48879u, 0x9f0c022au, 0x3d437bdbu, 0xdb7af58cu,
    0x79b26f3du, 0x17e9e8eeu, 0xb621629fu, 0x5458dc50u, 0xf2905601u, 0x90c7cfb2u, 0x2eff4963u, 0xcd36c314u,
    0x6b6e3cc5u, 0x09a5b676u, 0xa7dd3027u, 0x4614a9d8u, 0xe44c2389u, 0x82839d3au, 0x20bb16ebu, 0xbef2909cu,
    0x5d2a0a4du, 0xfb6183feu, 0x9998fdafu, 0x37d07760u, 0xd607f111u, 0x743f6ac2u, 0x1276e473u, 0xb0ae5e24u,
    0x4ee5d7d5u, 0xed1d5186u, 0x8b54cb37u, 0x298c44e8u, 0xc7c3be99u, 0x65fb384au, 0x0432b1fbu, 0xa26a2bacu,
    0x40a1a55du, 0xded91f0eu, 0x7d1098bfu, 0x1b481270u, 0xb97f8c21u, 0x57b705d2u, 0xf5ee7f83u, 0x9425f934u,
    0x325d72e5u, 0xd094ec96u, 0x6ecc6647u, 0x0d03dff8u, 0xab3b59a9u, 0x4972d35au, 0xe7aa4d0bu, 0x85e1c6bcu,
    0x2419406du, 0xc250ba1eu, 0x608833cfu, 0xfebfad80u, 0x9cf72731u, 0x3b2ea0e2u, 0xd9661a93u, 0x779d9444u,
    0x15d50df5u, 0xb40c87a6u, 0x52440157u, 0xf07b7b08u, 0x8eb2f4b9u, 0x2cea6e6au, 0xcb21e81bu, 0x695961ccu,
    0x0790db7du, 0xa5c8552eu, 0x43ffcedfu, 0xe2374890u, 0x806ec241u, 0x1ea63bf2u, 0xbcddb5a3u, 0x5b152f54u,
};

static const uint32_t bshim_197_tab7[96] = {
    0x262e1b66u, 0xc4659517u, 0x629d0ec8u, 0x00d48879u, 0x9f0c022au, 0x3d437bdbu, 0xdb7af58cu, 0x79b26f3du,
    0x17e9e8eeu, 0xb621629fu, 0x5458dc50u, 0xf2905601u, 0x90c7cfb2u, 0x2eff4963u, 0xcd36c314u, 0x6b6e3cc5u,
    0x09a5b676u, 0xa7dd3027u, 0x4614a9d8u, 0xe44c2389u, 0x82839d3au, 0x20bb16ebu, 0xbef2909cu, 0x5d2a0a4du,
    0xfb6183feu, 0x9998fdafu, 0x37d07760u, 0xd607f111u, 0x743f6ac2u, 0x1276e473u, 0xb0ae5e24u, 0x4ee5d7d5u,
    0xed1d5186u, 0x8b54cb37u, 0x298c44e8u, 0xc7c3be99u, 0x65fb384au, 0x0432b1fbu, 0xa26a2bacu, 0x40a1a55du,
    0xded91f0eu, 0x7d1098bfu, 0x1b481270u, 0xb97f8c21u, 0x57b705d2u, 0xf5ee7f83u, 0x9425f934u, 0x325d72e5u,
    0xd094ec96u, 0x6ecc6647u, 0x0d03dff8u, 0xab3b59a9u, 0x4972d35au, 0xe7aa4d0bu, 0x85e1c6bcu, 0x2419406du,
    0xc250ba1eu, 0x608833cfu, 0xfebfad80u, 0x9cf72731u, 0x3b2ea0e2u, 0xd9661a93u, 0x779d9444u, 0x15d50df5u,
    0xb40c87a6u, 0x52440157u, 0xf07b7b08u, 0x8eb2f4b9u, 0x2cea6e6au, 0xcb21e81bu, 0x695961ccu, 0x0790db7du,
    0xa5c8552eu, 0x43ffcedfu, 0xe2374890u, 0x806ec241u, 0x1ea63bf2u, 0xbcddb5a3u, 0x5b152f54u, 0xf94ca905u,
    0x978422b6u, 0x35bb9c67u, 0xd3f31618u, 0x722a8fc9u, 0x1062097au, 0xae99832bu, 0x4cd0fcdcu, 0xeb08768du,
    0x893ff03eu, 0x277769efu, 0xc5aee3a0u, 0x63e65d51u, 0x021dd702u, 0xa05550b3u, 0x3e8cca64u, 0xdcc44415u,
};

struct bshim_197_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_197_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_197_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_197_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_197_reset(struct bshim_197_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0017cdebu;
    return 0;
}

