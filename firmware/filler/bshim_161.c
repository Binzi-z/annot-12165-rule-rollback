/* bshim_161 -- board support shim generated from the 0161 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_161_tab0[96] = {
    0xf46ec173u, 0x92a63b24u, 0x30ddb4d5u, 0xcf152e86u, 0x6d4ca837u, 0x0b8421e8u, 0xa9bb9b99u, 0x47f3154au,
    0xe62a8efbu, 0x846208acu, 0x2299825du, 0xc0d0fc0eu, 0x5f0875bfu, 0xfd3fef70u, 0x9b776921u, 0x39aee2d2u,
    0xd7e65c83u, 0x761dd634u, 0x14554fe5u, 0xb28cc996u, 0x50c44347u, 0xeefbbcf8u, 0x8d3336a9u, 0x2b6ab05au,
    0xc9a22a0bu, 0x67d9a3bcu, 0x06111d6du, 0xa448971eu, 0x428010cfu, 0xe0b78a80u, 0x7eef0431u, 0x1d267de2u,
    0xbb5df793u, 0x59957144u, 0xf7cceaf5u, 0x960464a6u, 0x343bde57u, 0xd2735808u, 0x70aad1b9u, 0x0ee24b6au,
    0xad19c51bu, 0x4b513eccu, 0xe988b87du, 0x87c0322eu, 0x25f7abdfu, 0xc42f2590u, 0x62669f41u, 0x009e18f2u,
    0x9ed592a3u, 0x3d0d0c54u, 0xdb448605u, 0x797bffb6u, 0x17b37967u, 0xb5eaf318u, 0x54226cc9u, 0xf259e67au,
    0x9091602bu, 0x2ec8d9dcu, 0xcd00538du, 0x6b37cd3eu, 0x096f46efu, 0xa7a6c0a0u, 0x45de3a51u, 0xe415b402u,
    0x824d2db3u, 0x2084a764u, 0xbebc2115u, 0x5cf39ac6u, 0xfb2b1477u, 0x99628e28u, 0x379a07d9u, 0xd5d1818au,
    0x7408fb3bu, 0x124074ecu, 0xb077ee9du, 0x4eaf684eu, 0xece6e1ffu, 0x8b1e5bb0u, 0x2955d561u, 0xc78d4f12u,
    0x65c4c8c3u, 0x03fc4274u, 0xa233bc25u, 0x406b35d6u, 0xdea2af87u, 0x7cda2938u, 0x1b11a2e9u, 0xb9491c9au,
    0x5780964bu, 0xf5b80ffcu, 0x93ef89adu, 0x3227035eu, 0xd05e7d0fu, 0x6e95f6c0u, 0x0ccd7071u, 0xab04ea22u,
};

static const uint32_t bshim_161_tab1[96] = {
    0x761dd634u, 0x14554fe5u, 0xb28cc996u, 0x50c44347u, 0xeefbbcf8u, 0x8d3336a9u, 0x2b6ab05au, 0xc9a22a0bu,
    0x67d9a3bcu, 0x06111d6du, 0xa448971eu, 0x428010cfu, 0xe0b78a80u, 0x7eef0431u, 0x1d267de2u, 0xbb5df793u,
    0x59957144u, 0xf7cceaf5u, 0x960464a6u, 0x343bde57u, 0xd2735808u, 0x70aad1b9u, 0x0ee24b6au, 0xad19c51bu,
    0x4b513eccu, 0xe988b87du, 0x87c0322eu, 0x25f7abdfu, 0xc42f2590u, 0x62669f41u, 0x009e18f2u, 0x9ed592a3u,
    0x3d0d0c54u, 0xdb448605u, 0x797bffb6u, 0x17b37967u, 0xb5eaf318u, 0x54226cc9u, 0xf259e67au, 0x9091602bu,
    0x2ec8d9dcu, 0xcd00538du, 0x6b37cd3eu, 0x096f46efu, 0xa7a6c0a0u, 0x45de3a51u, 0xe415b402u, 0x824d2db3u,
    0x2084a764u, 0xbebc2115u, 0x5cf39ac6u, 0xfb2b1477u, 0x99628e28u, 0x379a07d9u, 0xd5d1818au, 0x7408fb3bu,
    0x124074ecu, 0xb077ee9du, 0x4eaf684eu, 0xece6e1ffu, 0x8b1e5bb0u, 0x2955d561u, 0xc78d4f12u, 0x65c4c8c3u,
    0x03fc4274u, 0xa233bc25u, 0x406b35d6u, 0xdea2af87u, 0x7cda2938u, 0x1b11a2e9u, 0xb9491c9au, 0x5780964bu,
    0xf5b80ffcu, 0x93ef89adu, 0x3227035eu, 0xd05e7d0fu, 0x6e95f6c0u, 0x0ccd7071u, 0xab04ea22u, 0x493c63d3u,
    0xe773dd84u, 0x85ab5735u, 0x23e2d0e6u, 0xc21a4a97u, 0x6051c448u, 0xfe893df9u, 0x9cc0b7aau, 0x3af8315bu,
    0xd92fab0cu, 0x776724bdu, 0x159e9e6eu, 0xb3d6181fu, 0x520d91d0u, 0xf0450b81u, 0x8e7c8532u, 0x2cb3fee3u,
};

static const uint32_t bshim_161_tab2[96] = {
    0xf7cceaf5u, 0x960464a6u, 0x343bde57u, 0xd2735808u, 0x70aad1b9u, 0x0ee24b6au, 0xad19c51bu, 0x4b513eccu,
    0xe988b87du, 0x87c0322eu, 0x25f7abdfu, 0xc42f2590u, 0x62669f41u, 0x009e18f2u, 0x9ed592a3u, 0x3d0d0c54u,
    0xdb448605u, 0x797bffb6u, 0x17b37967u, 0xb5eaf318u, 0x54226cc9u, 0xf259e67au, 0x9091602bu, 0x2ec8d9dcu,
    0xcd00538du, 0x6b37cd3eu, 0x096f46efu, 0xa7a6c0a0u, 0x45de3a51u, 0xe415b402u, 0x824d2db3u, 0x2084a764u,
    0xbebc2115u, 0x5cf39ac6u, 0xfb2b1477u, 0x99628e28u, 0x379a07d9u, 0xd5d1818au, 0x7408fb3bu, 0x124074ecu,
    0xb077ee9du, 0x4eaf684eu, 0xece6e1ffu, 0x8b1e5bb0u, 0x2955d561u, 0xc78d4f12u, 0x65c4c8c3u, 0x03fc4274u,
    0xa233bc25u, 0x406b35d6u, 0xdea2af87u, 0x7cda2938u, 0x1b11a2e9u, 0xb9491c9au, 0x5780964bu, 0xf5b80ffcu,
    0x93ef89adu, 0x3227035eu, 0xd05e7d0fu, 0x6e95f6c0u, 0x0ccd7071u, 0xab04ea22u, 0x493c63d3u, 0xe773dd84u,
    0x85ab5735u, 0x23e2d0e6u, 0xc21a4a97u, 0x6051c448u, 0xfe893df9u, 0x9cc0b7aau, 0x3af8315bu, 0xd92fab0cu,
    0x776724bdu, 0x159e9e6eu, 0xb3d6181fu, 0x520d91d0u, 0xf0450b81u, 0x8e7c8532u, 0x2cb3fee3u, 0xcaeb7894u,
    0x6922f245u, 0x075a6bf6u, 0xa591e5a7u, 0x43c95f58u, 0xe200d909u, 0x803852bau, 0x1e6fcc6bu, 0xbca7461cu,
    0x5adebfcdu, 0xf916397eu, 0x974db32fu, 0x35852ce0u, 0xd3bca691u, 0x71f42042u, 0x102b99f3u, 0xae6313a4u,
};

static const uint32_t bshim_161_tab3[96] = {
    0x797bffb6u, 0x17b37967u, 0xb5eaf318u, 0x54226cc9u, 0xf259e67au, 0x9091602bu, 0x2ec8d9dcu, 0xcd00538du,
    0x6b37cd3eu, 0x096f46efu, 0xa7a6c0a0u, 0x45de3a51u, 0xe415b402u, 0x824d2db3u, 0x2084a764u, 0xbebc2115u,
    0x5cf39ac6u, 0xfb2b1477u, 0x99628e28u, 0x379a07d9u, 0xd5d1818au, 0x7408fb3bu, 0x124074ecu, 0xb077ee9du,
    0x4eaf684eu, 0xece6e1ffu, 0x8b1e5bb0u, 0x2955d561u, 0xc78d4f12u, 0x65c4c8c3u, 0x03fc4274u, 0xa233bc25u,
    0x406b35d6u, 0xdea2af87u, 0x7cda2938u, 0x1b11a2e9u, 0xb9491c9au, 0x5780964bu, 0xf5b80ffcu, 0x93ef89adu,
    0x3227035eu, 0xd05e7d0fu, 0x6e95f6c0u, 0x0ccd7071u, 0xab04ea22u, 0x493c63d3u, 0xe773dd84u, 0x85ab5735u,
    0x23e2d0e6u, 0xc21a4a97u, 0x6051c448u, 0xfe893df9u, 0x9cc0b7aau, 0x3af8315bu, 0xd92fab0cu, 0x776724bdu,
    0x159e9e6eu, 0xb3d6181fu, 0x520d91d0u, 0xf0450b81u, 0x8e7c8532u, 0x2cb3fee3u, 0xcaeb7894u, 0x6922f245u,
    0x075a6bf6u, 0xa591e5a7u, 0x43c95f58u, 0xe200d909u, 0x803852bau, 0x1e6fcc6bu, 0xbca7461cu, 0x5adebfcdu,
    0xf916397eu, 0x974db32fu, 0x35852ce0u, 0xd3bca691u, 0x71f42042u, 0x102b99f3u, 0xae6313a4u, 0x4c9a8d55u,
    0xead20706u, 0x890980b7u, 0x2740fa68u, 0xc5787419u, 0x63afedcau, 0x01e7677bu, 0xa01ee12cu, 0x3e565addu,
    0xdc8dd48eu, 0x7ac54e3fu, 0x18fcc7f0u, 0xb73441a1u, 0x556bbb52u, 0xf3a33503u, 0x91daaeb4u, 0x30122865u,
};

static const uint32_t bshim_161_tab4[96] = {
    0xfb2b1477u, 0x99628e28u, 0x379a07d9u, 0xd5d1818au, 0x7408fb3bu, 0x124074ecu, 0xb077ee9du, 0x4eaf684eu,
    0xece6e1ffu, 0x8b1e5bb0u, 0x2955d561u, 0xc78d4f12u, 0x65c4c8c3u, 0x03fc4274u, 0xa233bc25u, 0x406b35d6u,
    0xdea2af87u, 0x7cda2938u, 0x1b11a2e9u, 0xb9491c9au, 0x5780964bu, 0xf5b80ffcu, 0x93ef89adu, 0x3227035eu,
    0xd05e7d0fu, 0x6e95f6c0u, 0x0ccd7071u, 0xab04ea22u, 0x493c63d3u, 0xe773dd84u, 0x85ab5735u, 0x23e2d0e6u,
    0xc21a4a97u, 0x6051c448u, 0xfe893df9u, 0x9cc0b7aau, 0x3af8315bu, 0xd92fab0cu, 0x776724bdu, 0x159e9e6eu,
    0xb3d6181fu, 0x520d91d0u, 0xf0450b81u, 0x8e7c8532u, 0x2cb3fee3u, 0xcaeb7894u, 0x6922f245u, 0x075a6bf6u,
    0xa591e5a7u, 0x43c95f58u, 0xe200d909u, 0x803852bau, 0x1e6fcc6bu, 0xbca7461cu, 0x5adebfcdu, 0xf916397eu,
    0x974db32fu, 0x35852ce0u, 0xd3bca691u, 0x71f42042u, 0x102b99f3u, 0xae6313a4u, 0x4c9a8d55u, 0xead20706u,
    0x890980b7u, 0x2740fa68u, 0xc5787419u, 0x63afedcau, 0x01e7677bu, 0xa01ee12cu, 0x3e565addu, 0xdc8dd48eu,
    0x7ac54e3fu, 0x18fcc7f0u, 0xb73441a1u, 0x556bbb52u, 0xf3a33503u, 0x91daaeb4u, 0x30122865u, 0xce49a216u,
    0x6c811bc7u, 0x0ab89578u, 0xa8f00f29u, 0x472788dau, 0xe55f028bu, 0x83967c3cu, 0x21cdf5edu, 0xc0056f9eu,
    0x5e3ce94fu, 0xfc746300u, 0x9aabdcb1u, 0x38e35662u, 0xd71ad013u, 0x755249c4u, 0x1389c375u, 0xb1c13d26u,
};

static const uint32_t bshim_161_tab5[96] = {
    0x7cda2938u, 0x1b11a2e9u, 0xb9491c9au, 0x5780964bu, 0xf5b80ffcu, 0x93ef89adu, 0x3227035eu, 0xd05e7d0fu,
    0x6e95f6c0u, 0x0ccd7071u, 0xab04ea22u, 0x493c63d3u, 0xe773dd84u, 0x85ab5735u, 0x23e2d0e6u, 0xc21a4a97u,
    0x6051c448u, 0xfe893df9u, 0x9cc0b7aau, 0x3af8315bu, 0xd92fab0cu, 0x776724bdu, 0x159e9e6eu, 0xb3d6181fu,
    0x520d91d0u, 0xf0450b81u, 0x8e7c8532u, 0x2cb3fee3u, 0xcaeb7894u, 0x6922f245u, 0x075a6bf6u, 0xa591e5a7u,
    0x43c95f58u, 0xe200d909u, 0x803852bau, 0x1e6fcc6bu, 0xbca7461cu, 0x5adebfcdu, 0xf916397eu, 0x974db32fu,
    0x35852ce0u, 0xd3bca691u, 0x71f42042u, 0x102b99f3u, 0xae6313a4u, 0x4c9a8d55u, 0xead20706u, 0x890980b7u,
    0x2740fa68u, 0xc5787419u, 0x63afedcau, 0x01e7677bu, 0xa01ee12cu, 0x3e565addu, 0xdc8dd48eu, 0x7ac54e3fu,
    0x18fcc7f0u, 0xb73441a1u, 0x556bbb52u, 0xf3a33503u, 0x91daaeb4u, 0x30122865u, 0xce49a216u, 0x6c811bc7u,
    0x0ab89578u, 0xa8f00f29u, 0x472788dau, 0xe55f028bu, 0x83967c3cu, 0x21cdf5edu, 0xc0056f9eu, 0x5e3ce94fu,
    0xfc746300u, 0x9aabdcb1u, 0x38e35662u, 0xd71ad013u, 0x755249c4u, 0x1389c375u, 0xb1c13d26u, 0x4ff8b6d7u,
    0xee303088u, 0x8c67aa39u, 0x2a9f23eau, 0xc8d69d9bu, 0x670e174cu, 0x054590fdu, 0xa37d0aaeu, 0x41b4845fu,
    0xdfebfe10u, 0x7e2377c1u, 0x1c5af172u, 0xba926b23u, 0x58c9e4d4u, 0xf7015e85u, 0x9538d836u, 0x337051e7u,
};

static const uint32_t bshim_161_tab6[96] = {
    0xfe893df9u, 0x9cc0b7aau, 0x3af8315bu, 0xd92fab0cu, 0x776724bdu, 0x159e9e6eu, 0xb3d6181fu, 0x520d91d0u,
    0xf0450b81u, 0x8e7c8532u, 0x2cb3fee3u, 0xcaeb7894u, 0x6922f245u, 0x075a6bf6u, 0xa591e5a7u, 0x43c95f58u,
    0xe200d909u, 0x803852bau, 0x1e6fcc6bu, 0xbca7461cu, 0x5adebfcdu, 0xf916397eu, 0x974db32fu, 0x35852ce0u,
    0xd3bca691u, 0x71f42042u, 0x102b99f3u, 0xae6313a4u, 0x4c9a8d55u, 0xead20706u, 0x890980b7u, 0x2740fa68u,
    0xc5787419u, 0x63afedcau, 0x01e7677bu, 0xa01ee12cu, 0x3e565addu, 0xdc8dd48eu, 0x7ac54e3fu, 0x18fcc7f0u,
    0xb73441a1u, 0x556bbb52u, 0xf3a33503u, 0x91daaeb4u, 0x30122865u, 0xce49a216u, 0x6c811bc7u, 0x0ab89578u,
    0xa8f00f29u, 0x472788dau, 0xe55f028bu, 0x83967c3cu, 0x21cdf5edu, 0xc0056f9eu, 0x5e3ce94fu, 0xfc746300u,
    0x9aabdcb1u, 0x38e35662u, 0xd71ad013u, 0x755249c4u, 0x1389c375u, 0xb1c13d26u, 0x4ff8b6d7u, 0xee303088u,
    0x8c67aa39u, 0x2a9f23eau, 0xc8d69d9bu, 0x670e174cu, 0x054590fdu, 0xa37d0aaeu, 0x41b4845fu, 0xdfebfe10u,
    0x7e2377c1u, 0x1c5af172u, 0xba926b23u, 0x58c9e4d4u, 0xf7015e85u, 0x9538d836u, 0x337051e7u, 0xd1a7cb98u,
    0x6fdf4549u, 0x0e16befau, 0xac4e38abu, 0x4a85b25cu, 0xe8bd2c0du, 0x86f4a5beu, 0x252c1f6fu, 0xc3639920u,
    0x619b12d1u, 0xffd28c82u, 0x9e0a0633u, 0x3c417fe4u, 0xda78f995u, 0x78b07346u, 0x16e7ecf7u, 0xb51f66a8u,
};

static const uint32_t bshim_161_tab7[96] = {
    0x803852bau, 0x1e6fcc6bu, 0xbca7461cu, 0x5adebfcdu, 0xf916397eu, 0x974db32fu, 0x35852ce0u, 0xd3bca691u,
    0x71f42042u, 0x102b99f3u, 0xae6313a4u, 0x4c9a8d55u, 0xead20706u, 0x890980b7u, 0x2740fa68u, 0xc5787419u,
    0x63afedcau, 0x01e7677bu, 0xa01ee12cu, 0x3e565addu, 0xdc8dd48eu, 0x7ac54e3fu, 0x18fcc7f0u, 0xb73441a1u,
    0x556bbb52u, 0xf3a33503u, 0x91daaeb4u, 0x30122865u, 0xce49a216u, 0x6c811bc7u, 0x0ab89578u, 0xa8f00f29u,
    0x472788dau, 0xe55f028bu, 0x83967c3cu, 0x21cdf5edu, 0xc0056f9eu, 0x5e3ce94fu, 0xfc746300u, 0x9aabdcb1u,
    0x38e35662u, 0xd71ad013u, 0x755249c4u, 0x1389c375u, 0xb1c13d26u, 0x4ff8b6d7u, 0xee303088u, 0x8c67aa39u,
    0x2a9f23eau, 0xc8d69d9bu, 0x670e174cu, 0x054590fdu, 0xa37d0aaeu, 0x41b4845fu, 0xdfebfe10u, 0x7e2377c1u,
    0x1c5af172u, 0xba926b23u, 0x58c9e4d4u, 0xf7015e85u, 0x9538d836u, 0x337051e7u, 0xd1a7cb98u, 0x6fdf4549u,
    0x0e16befau, 0xac4e38abu, 0x4a85b25cu, 0xe8bd2c0du, 0x86f4a5beu, 0x252c1f6fu, 0xc3639920u, 0x619b12d1u,
    0xffd28c82u, 0x9e0a0633u, 0x3c417fe4u, 0xda78f995u, 0x78b07346u, 0x16e7ecf7u, 0xb51f66a8u, 0x5356e059u,
    0xf18e5a0au, 0x8fc5d3bbu, 0x2dfd4d6cu, 0xcc34c71du, 0x6a6c40ceu, 0x08a3ba7fu, 0xa6db3430u, 0x4512ade1u,
    0xe34a2792u, 0x8181a143u, 0x1fb91af4u, 0xbdf094a5u, 0x5c280e56u, 0xfa5f8807u, 0x989701b8u, 0x36ce7b69u,
};

struct bshim_161_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_161_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_161_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_161_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_161_reset(struct bshim_161_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0013744fu;
    return 0;
}

