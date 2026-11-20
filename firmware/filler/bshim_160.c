/* bshim_160 -- board support shim generated from the 0160 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_160_tab0[96] = {
    0xfe0b7be0u, 0x9c42f591u, 0x3a7a6f42u, 0xd8b1e8f3u, 0x76e962a4u, 0x1520dc55u, 0xb3585606u, 0x518fcfb7u,
    0xefc74968u, 0x8dfec319u, 0x2c363ccau, 0xca6db67bu, 0x68a5302cu, 0x06dca9ddu, 0xa514238eu, 0x434b9d3fu,
    0xe18316f0u, 0x7fba90a1u, 0x1df20a52u, 0xbc298403u, 0x5a60fdb4u, 0xf8987765u, 0x96cff116u, 0x35076ac7u,
    0xd33ee478u, 0x71765e29u, 0x0fadd7dau, 0xade5518bu, 0x4c1ccb3cu, 0xea5444edu, 0x888bbe9eu, 0x26c3384fu,
    0xc4fab200u, 0x63322bb1u, 0x0169a562u, 0x9fa11f13u, 0x3dd898c4u, 0xdc101275u, 0x7a478c26u, 0x187f05d7u,
    0xb6b67f88u, 0x54edf939u, 0xf32572eau, 0x915cec9bu, 0x2f94664cu, 0xcdcbdffdu, 0x6c0359aeu, 0x0a3ad35fu,
    0xa8724d10u, 0x46a9c6c1u, 0xe4e14072u, 0x8318ba23u, 0x215033d4u, 0xbf87ad85u, 0x5dbf2736u, 0xfbf6a0e7u,
    0x9a2e1a98u, 0x38659449u, 0xd69d0dfau, 0x74d487abu, 0x130c015cu, 0xb1437b0du, 0x4f7af4beu, 0xedb26e6fu,
    0x8be9e820u, 0x2a2161d1u, 0xc858db82u, 0x66905533u, 0x04c7cee4u, 0xa2ff4895u, 0x4136c246u, 0xdf6e3bf7u,
    0x7da5b5a8u, 0x1bdd2f59u, 0xba14a90au, 0x584c22bbu, 0xf6839c6cu, 0x94bb161du, 0x32f28fceu, 0xd12a097fu,
    0x6f618330u, 0x0d98fce1u, 0xabd07692u, 0x4a07f043u, 0xe83f69f4u, 0x8676e3a5u, 0x24ae5d56u, 0xc2e5d707u,
    0x611d50b8u, 0xff54ca69u, 0x9d8c441au, 0x3bc3bdcbu, 0xd9fb377cu, 0x7832b12du, 0x166a2adeu, 0xb4a1a48fu,
};

static const uint32_t bshim_160_tab1[96] = {
    0x7fba90a1u, 0x1df20a52u, 0xbc298403u, 0x5a60fdb4u, 0xf8987765u, 0x96cff116u, 0x35076ac7u, 0xd33ee478u,
    0x71765e29u, 0x0fadd7dau, 0xade5518bu, 0x4c1ccb3cu, 0xea5444edu, 0x888bbe9eu, 0x26c3384fu, 0xc4fab200u,
    0x63322bb1u, 0x0169a562u, 0x9fa11f13u, 0x3dd898c4u, 0xdc101275u, 0x7a478c26u, 0x187f05d7u, 0xb6b67f88u,
    0x54edf939u, 0xf32572eau, 0x915cec9bu, 0x2f94664cu, 0xcdcbdffdu, 0x6c0359aeu, 0x0a3ad35fu, 0xa8724d10u,
    0x46a9c6c1u, 0xe4e14072u, 0x8318ba23u, 0x215033d4u, 0xbf87ad85u, 0x5dbf2736u, 0xfbf6a0e7u, 0x9a2e1a98u,
    0x38659449u, 0xd69d0dfau, 0x74d487abu, 0x130c015cu, 0xb1437b0du, 0x4f7af4beu, 0xedb26e6fu, 0x8be9e820u,
    0x2a2161d1u, 0xc858db82u, 0x66905533u, 0x04c7cee4u, 0xa2ff4895u, 0x4136c246u, 0xdf6e3bf7u, 0x7da5b5a8u,
    0x1bdd2f59u, 0xba14a90au, 0x584c22bbu, 0xf6839c6cu, 0x94bb161du, 0x32f28fceu, 0xd12a097fu, 0x6f618330u,
    0x0d98fce1u, 0xabd07692u, 0x4a07f043u, 0xe83f69f4u, 0x8676e3a5u, 0x24ae5d56u, 0xc2e5d707u, 0x611d50b8u,
    0xff54ca69u, 0x9d8c441au, 0x3bc3bdcbu, 0xd9fb377cu, 0x7832b12du, 0x166a2adeu, 0xb4a1a48fu, 0x52d91e40u,
    0xf11097f1u, 0x8f4811a2u, 0x2d7f8b53u, 0xcbb70504u, 0x69ee7eb5u, 0x0825f866u, 0xa65d7217u, 0x4494ebc8u,
    0xe2cc6579u, 0x8103df2au, 0x1f3b58dbu, 0xbd72d28cu, 0x5baa4c3du, 0xf9e1c5eeu, 0x98193f9fu, 0x3650b950u,
};

static const uint32_t bshim_160_tab2[96] = {
    0x0169a562u, 0x9fa11f13u, 0x3dd898c4u, 0xdc101275u, 0x7a478c26u, 0x187f05d7u, 0xb6b67f88u, 0x54edf939u,
    0xf32572eau, 0x915cec9bu, 0x2f94664cu, 0xcdcbdffdu, 0x6c0359aeu, 0x0a3ad35fu, 0xa8724d10u, 0x46a9c6c1u,
    0xe4e14072u, 0x8318ba23u, 0x215033d4u, 0xbf87ad85u, 0x5dbf2736u, 0xfbf6a0e7u, 0x9a2e1a98u, 0x38659449u,
    0xd69d0dfau, 0x74d487abu, 0x130c015cu, 0xb1437b0du, 0x4f7af4beu, 0xedb26e6fu, 0x8be9e820u, 0x2a2161d1u,
    0xc858db82u, 0x66905533u, 0x04c7cee4u, 0xa2ff4895u, 0x4136c246u, 0xdf6e3bf7u, 0x7da5b5a8u, 0x1bdd2f59u,
    0xba14a90au, 0x584c22bbu, 0xf6839c6cu, 0x94bb161du, 0x32f28fceu, 0xd12a097fu, 0x6f618330u, 0x0d98fce1u,
    0xabd07692u, 0x4a07f043u, 0xe83f69f4u, 0x8676e3a5u, 0x24ae5d56u, 0xc2e5d707u, 0x611d50b8u, 0xff54ca69u,
    0x9d8c441au, 0x3bc3bdcbu, 0xd9fb377cu, 0x7832b12du, 0x166a2adeu, 0xb4a1a48fu, 0x52d91e40u, 0xf11097f1u,
    0x8f4811a2u, 0x2d7f8b53u, 0xcbb70504u, 0x69ee7eb5u, 0x0825f866u, 0xa65d7217u, 0x4494ebc8u, 0xe2cc6579u,
    0x8103df2au, 0x1f3b58dbu, 0xbd72d28cu, 0x5baa4c3du, 0xf9e1c5eeu, 0x98193f9fu, 0x3650b950u, 0xd4883301u,
    0x72bfacb2u, 0x10f72663u, 0xaf2ea014u, 0x4d6619c5u, 0xeb9d9376u, 0x89d50d27u, 0x280c86d8u, 0xc6440089u,
    0x647b7a3au, 0x02b2f3ebu, 0xa0ea6d9cu, 0x3f21e74du, 0xdd5960feu, 0x7b90daafu, 0x19c85460u, 0xb7ffce11u,
};

static const uint32_t bshim_160_tab3[96] = {
    0x8318ba23u, 0x215033d4u, 0xbf87ad85u, 0x5dbf2736u, 0xfbf6a0e7u, 0x9a2e1a98u, 0x38659449u, 0xd69d0dfau,
    0x74d487abu, 0x130c015cu, 0xb1437b0du, 0x4f7af4beu, 0xedb26e6fu, 0x8be9e820u, 0x2a2161d1u, 0xc858db82u,
    0x66905533u, 0x04c7cee4u, 0xa2ff4895u, 0x4136c246u, 0xdf6e3bf7u, 0x7da5b5a8u, 0x1bdd2f59u, 0xba14a90au,
    0x584c22bbu, 0xf6839c6cu, 0x94bb161du, 0x32f28fceu, 0xd12a097fu, 0x6f618330u, 0x0d98fce1u, 0xabd07692u,
    0x4a07f043u, 0xe83f69f4u, 0x8676e3a5u, 0x24ae5d56u, 0xc2e5d707u, 0x611d50b8u, 0xff54ca69u, 0x9d8c441au,
    0x3bc3bdcbu, 0xd9fb377cu, 0x7832b12du, 0x166a2adeu, 0xb4a1a48fu, 0x52d91e40u, 0xf11097f1u, 0x8f4811a2u,
    0x2d7f8b53u, 0xcbb70504u, 0x69ee7eb5u, 0x0825f866u, 0xa65d7217u, 0x4494ebc8u, 0xe2cc6579u, 0x8103df2au,
    0x1f3b58dbu, 0xbd72d28cu, 0x5baa4c3du, 0xf9e1c5eeu, 0x98193f9fu, 0x3650b950u, 0xd4883301u, 0x72bfacb2u,
    0x10f72663u, 0xaf2ea014u, 0x4d6619c5u, 0xeb9d9376u, 0x89d50d27u, 0x280c86d8u, 0xc6440089u, 0x647b7a3au,
    0x02b2f3ebu, 0xa0ea6d9cu, 0x3f21e74du, 0xdd5960feu, 0x7b90daafu, 0x19c85460u, 0xb7ffce11u, 0x563747c2u,
    0xf46ec173u, 0x92a63b24u, 0x30ddb4d5u, 0xcf152e86u, 0x6d4ca837u, 0x0b8421e8u, 0xa9bb9b99u, 0x47f3154au,
    0xe62a8efbu, 0x846208acu, 0x2299825du, 0xc0d0fc0eu, 0x5f0875bfu, 0xfd3fef70u, 0x9b776921u, 0x39aee2d2u,
};

static const uint32_t bshim_160_tab4[96] = {
    0x04c7cee4u, 0xa2ff4895u, 0x4136c246u, 0xdf6e3bf7u, 0x7da5b5a8u, 0x1bdd2f59u, 0xba14a90au, 0x584c22bbu,
    0xf6839c6cu, 0x94bb161du, 0x32f28fceu, 0xd12a097fu, 0x6f618330u, 0x0d98fce1u, 0xabd07692u, 0x4a07f043u,
    0xe83f69f4u, 0x8676e3a5u, 0x24ae5d56u, 0xc2e5d707u, 0x611d50b8u, 0xff54ca69u, 0x9d8c441au, 0x3bc3bdcbu,
    0xd9fb377cu, 0x7832b12du, 0x166a2adeu, 0xb4a1a48fu, 0x52d91e40u, 0xf11097f1u, 0x8f4811a2u, 0x2d7f8b53u,
    0xcbb70504u, 0x69ee7eb5u, 0x0825f866u, 0xa65d7217u, 0x4494ebc8u, 0xe2cc6579u, 0x8103df2au, 0x1f3b58dbu,
    0xbd72d28cu, 0x5baa4c3du, 0xf9e1c5eeu, 0x98193f9fu, 0x3650b950u, 0xd4883301u, 0x72bfacb2u, 0x10f72663u,
    0xaf2ea014u, 0x4d6619c5u, 0xeb9d9376u, 0x89d50d27u, 0x280c86d8u, 0xc6440089u, 0x647b7a3au, 0x02b2f3ebu,
    0xa0ea6d9cu, 0x3f21e74du, 0xdd5960feu, 0x7b90daafu, 0x19c85460u, 0xb7ffce11u, 0x563747c2u, 0xf46ec173u,
    0x92a63b24u, 0x30ddb4d5u, 0xcf152e86u, 0x6d4ca837u, 0x0b8421e8u, 0xa9bb9b99u, 0x47f3154au, 0xe62a8efbu,
    0x846208acu, 0x2299825du, 0xc0d0fc0eu, 0x5f0875bfu, 0xfd3fef70u, 0x9b776921u, 0x39aee2d2u, 0xd7e65c83u,
    0x761dd634u, 0x14554fe5u, 0xb28cc996u, 0x50c44347u, 0xeefbbcf8u, 0x8d3336a9u, 0x2b6ab05au, 0xc9a22a0bu,
    0x67d9a3bcu, 0x06111d6du, 0xa448971eu, 0x428010cfu, 0xe0b78a80u, 0x7eef0431u, 0x1d267de2u, 0xbb5df793u,
};

static const uint32_t bshim_160_tab5[96] = {
    0x8676e3a5u, 0x24ae5d56u, 0xc2e5d707u, 0x611d50b8u, 0xff54ca69u, 0x9d8c441au, 0x3bc3bdcbu, 0xd9fb377cu,
    0x7832b12du, 0x166a2adeu, 0xb4a1a48fu, 0x52d91e40u, 0xf11097f1u, 0x8f4811a2u, 0x2d7f8b53u, 0xcbb70504u,
    0x69ee7eb5u, 0x0825f866u, 0xa65d7217u, 0x4494ebc8u, 0xe2cc6579u, 0x8103df2au, 0x1f3b58dbu, 0xbd72d28cu,
    0x5baa4c3du, 0xf9e1c5eeu, 0x98193f9fu, 0x3650b950u, 0xd4883301u, 0x72bfacb2u, 0x10f72663u, 0xaf2ea014u,
    0x4d6619c5u, 0xeb9d9376u, 0x89d50d27u, 0x280c86d8u, 0xc6440089u, 0x647b7a3au, 0x02b2f3ebu, 0xa0ea6d9cu,
    0x3f21e74du, 0xdd5960feu, 0x7b90daafu, 0x19c85460u, 0xb7ffce11u, 0x563747c2u, 0xf46ec173u, 0x92a63b24u,
    0x30ddb4d5u, 0xcf152e86u, 0x6d4ca837u, 0x0b8421e8u, 0xa9bb9b99u, 0x47f3154au, 0xe62a8efbu, 0x846208acu,
    0x2299825du, 0xc0d0fc0eu, 0x5f0875bfu, 0xfd3fef70u, 0x9b776921u, 0x39aee2d2u, 0xd7e65c83u, 0x761dd634u,
    0x14554fe5u, 0xb28cc996u, 0x50c44347u, 0xeefbbcf8u, 0x8d3336a9u, 0x2b6ab05au, 0xc9a22a0bu, 0x67d9a3bcu,
    0x06111d6du, 0xa448971eu, 0x428010cfu, 0xe0b78a80u, 0x7eef0431u, 0x1d267de2u, 0xbb5df793u, 0x59957144u,
    0xf7cceaf5u, 0x960464a6u, 0x343bde57u, 0xd2735808u, 0x70aad1b9u, 0x0ee24b6au, 0xad19c51bu, 0x4b513eccu,
    0xe988b87du, 0x87c0322eu, 0x25f7abdfu, 0xc42f2590u, 0x62669f41u, 0x009e18f2u, 0x9ed592a3u, 0x3d0d0c54u,
};

static const uint32_t bshim_160_tab6[96] = {
    0x0825f866u, 0xa65d7217u, 0x4494ebc8u, 0xe2cc6579u, 0x8103df2au, 0x1f3b58dbu, 0xbd72d28cu, 0x5baa4c3du,
    0xf9e1c5eeu, 0x98193f9fu, 0x3650b950u, 0xd4883301u, 0x72bfacb2u, 0x10f72663u, 0xaf2ea014u, 0x4d6619c5u,
    0xeb9d9376u, 0x89d50d27u, 0x280c86d8u, 0xc6440089u, 0x647b7a3au, 0x02b2f3ebu, 0xa0ea6d9cu, 0x3f21e74du,
    0xdd5960feu, 0x7b90daafu, 0x19c85460u, 0xb7ffce11u, 0x563747c2u, 0xf46ec173u, 0x92a63b24u, 0x30ddb4d5u,
    0xcf152e86u, 0x6d4ca837u, 0x0b8421e8u, 0xa9bb9b99u, 0x47f3154au, 0xe62a8efbu, 0x846208acu, 0x2299825du,
    0xc0d0fc0eu, 0x5f0875bfu, 0xfd3fef70u, 0x9b776921u, 0x39aee2d2u, 0xd7e65c83u, 0x761dd634u, 0x14554fe5u,
    0xb28cc996u, 0x50c44347u, 0xeefbbcf8u, 0x8d3336a9u, 0x2b6ab05au, 0xc9a22a0bu, 0x67d9a3bcu, 0x06111d6du,
    0xa448971eu, 0x428010cfu, 0xe0b78a80u, 0x7eef0431u, 0x1d267de2u, 0xbb5df793u, 0x59957144u, 0xf7cceaf5u,
    0x960464a6u, 0x343bde57u, 0xd2735808u, 0x70aad1b9u, 0x0ee24b6au, 0xad19c51bu, 0x4b513eccu, 0xe988b87du,
    0x87c0322eu, 0x25f7abdfu, 0xc42f2590u, 0x62669f41u, 0x009e18f2u, 0x9ed592a3u, 0x3d0d0c54u, 0xdb448605u,
    0x797bffb6u, 0x17b37967u, 0xb5eaf318u, 0x54226cc9u, 0xf259e67au, 0x9091602bu, 0x2ec8d9dcu, 0xcd00538du,
    0x6b37cd3eu, 0x096f46efu, 0xa7a6c0a0u, 0x45de3a51u, 0xe415b402u, 0x824d2db3u, 0x2084a764u, 0xbebc2115u,
};

static const uint32_t bshim_160_tab7[96] = {
    0x89d50d27u, 0x280c86d8u, 0xc6440089u, 0x647b7a3au, 0x02b2f3ebu, 0xa0ea6d9cu, 0x3f21e74du, 0xdd5960feu,
    0x7b90daafu, 0x19c85460u, 0xb7ffce11u, 0x563747c2u, 0xf46ec173u, 0x92a63b24u, 0x30ddb4d5u, 0xcf152e86u,
    0x6d4ca837u, 0x0b8421e8u, 0xa9bb9b99u, 0x47f3154au, 0xe62a8efbu, 0x846208acu, 0x2299825du, 0xc0d0fc0eu,
    0x5f0875bfu, 0xfd3fef70u, 0x9b776921u, 0x39aee2d2u, 0xd7e65c83u, 0x761dd634u, 0x14554fe5u, 0xb28cc996u,
    0x50c44347u, 0xeefbbcf8u, 0x8d3336a9u, 0x2b6ab05au, 0xc9a22a0bu, 0x67d9a3bcu, 0x06111d6du, 0xa448971eu,
    0x428010cfu, 0xe0b78a80u, 0x7eef0431u, 0x1d267de2u, 0xbb5df793u, 0x59957144u, 0xf7cceaf5u, 0x960464a6u,
    0x343bde57u, 0xd2735808u, 0x70aad1b9u, 0x0ee24b6au, 0xad19c51bu, 0x4b513eccu, 0xe988b87du, 0x87c0322eu,
    0x25f7abdfu, 0xc42f2590u, 0x62669f41u, 0x009e18f2u, 0x9ed592a3u, 0x3d0d0c54u, 0xdb448605u, 0x797bffb6u,
    0x17b37967u, 0xb5eaf318u, 0x54226cc9u, 0xf259e67au, 0x9091602bu, 0x2ec8d9dcu, 0xcd00538du, 0x6b37cd3eu,
    0x096f46efu, 0xa7a6c0a0u, 0x45de3a51u, 0xe415b402u, 0x824d2db3u, 0x2084a764u, 0xbebc2115u, 0x5cf39ac6u,
    0xfb2b1477u, 0x99628e28u, 0x379a07d9u, 0xd5d1818au, 0x7408fb3bu, 0x124074ecu, 0xb077ee9du, 0x4eaf684eu,
    0xece6e1ffu, 0x8b1e5bb0u, 0x2955d561u, 0xc78d4f12u, 0x65c4c8c3u, 0x03fc4274u, 0xa233bc25u, 0x406b35d6u,
};

struct bshim_160_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_160_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_160_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_160_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_160_reset(struct bshim_160_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00135560u;
    return 0;
}

