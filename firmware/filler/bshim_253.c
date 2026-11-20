/* bshim_253 -- board support shim generated from the 0253 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_253_tab0[96] = {
    0x801bc247u, 0x1e533bf8u, 0xbc8ab5a9u, 0x5ac22f5au, 0xf8f9a90bu, 0x973122bcu, 0x35689c6du, 0xd3a0161eu,
    0x71d78fcfu, 0x100f0980u, 0xae468331u, 0x4c7dfce2u, 0xeab57693u, 0x88ecf044u, 0x272469f5u, 0xc55be3a6u,
    0x63935d57u, 0x01cad708u, 0xa00250b9u, 0x3e39ca6au, 0xdc71441bu, 0x7aa8bdccu, 0x18e0377du, 0xb717b12eu,
    0x554f2adfu, 0xf386a490u, 0x91be1e41u, 0x2ff597f2u, 0xce2d11a3u, 0x6c648b54u, 0x0a9c0505u, 0xa8d37eb6u,
    0x470af867u, 0xe5427218u, 0x8379ebc9u, 0x21b1657au, 0xbfe8df2bu, 0x5e2058dcu, 0xfc57d28du, 0x9a8f4c3eu,
    0x38c6c5efu, 0xd6fe3fa0u, 0x7535b951u, 0x136d3302u, 0xb1a4acb3u, 0x4fdc2664u, 0xee13a015u, 0x8c4b19c6u,
    0x2a829377u, 0xc8ba0d28u, 0x66f186d9u, 0x0529008au, 0xa3607a3bu, 0x4197f3ecu, 0xdfcf6d9du, 0x7e06e74eu,
    0x1c3e60ffu, 0xba75dab0u, 0x58ad5461u, 0xf6e4ce12u, 0x951c47c3u, 0x3353c174u, 0xd18b3b25u, 0x6fc2b4d6u,
    0x0dfa2e87u, 0xac31a838u, 0x4a6921e9u, 0xe8a09b9au, 0x86d8154bu, 0x250f8efcu, 0xc34708adu, 0x617e825eu,
    0xffb5fc0fu, 0x9ded75c0u, 0x3c24ef71u, 0xda5c6922u, 0x7893e2d3u, 0x16cb5c84u, 0xb502d635u, 0x533a4fe6u,
    0xf171c997u, 0x8fa94348u, 0x2de0bcf9u, 0xcc1836aau, 0x6a4fb05bu, 0x08872a0cu, 0xa6bea3bdu, 0x44f61d6eu,
    0xe32d971fu, 0x816510d0u, 0x1f9c8a81u, 0xbdd40432u, 0x5c0b7de3u, 0xfa42f794u, 0x987a7145u, 0x36b1eaf6u,
};

static const uint32_t bshim_253_tab1[96] = {
    0x01cad708u, 0xa00250b9u, 0x3e39ca6au, 0xdc71441bu, 0x7aa8bdccu, 0x18e0377du, 0xb717b12eu, 0x554f2adfu,
    0xf386a490u, 0x91be1e41u, 0x2ff597f2u, 0xce2d11a3u, 0x6c648b54u, 0x0a9c0505u, 0xa8d37eb6u, 0x470af867u,
    0xe5427218u, 0x8379ebc9u, 0x21b1657au, 0xbfe8df2bu, 0x5e2058dcu, 0xfc57d28du, 0x9a8f4c3eu, 0x38c6c5efu,
    0xd6fe3fa0u, 0x7535b951u, 0x136d3302u, 0xb1a4acb3u, 0x4fdc2664u, 0xee13a015u, 0x8c4b19c6u, 0x2a829377u,
    0xc8ba0d28u, 0x66f186d9u, 0x0529008au, 0xa3607a3bu, 0x4197f3ecu, 0xdfcf6d9du, 0x7e06e74eu, 0x1c3e60ffu,
    0xba75dab0u, 0x58ad5461u, 0xf6e4ce12u, 0x951c47c3u, 0x3353c174u, 0xd18b3b25u, 0x6fc2b4d6u, 0x0dfa2e87u,
    0xac31a838u, 0x4a6921e9u, 0xe8a09b9au, 0x86d8154bu, 0x250f8efcu, 0xc34708adu, 0x617e825eu, 0xffb5fc0fu,
    0x9ded75c0u, 0x3c24ef71u, 0xda5c6922u, 0x7893e2d3u, 0x16cb5c84u, 0xb502d635u, 0x533a4fe6u, 0xf171c997u,
    0x8fa94348u, 0x2de0bcf9u, 0xcc1836aau, 0x6a4fb05bu, 0x08872a0cu, 0xa6bea3bdu, 0x44f61d6eu, 0xe32d971fu,
    0x816510d0u, 0x1f9c8a81u, 0xbdd40432u, 0x5c0b7de3u, 0xfa42f794u, 0x987a7145u, 0x36b1eaf6u, 0xd4e964a7u,
    0x7320de58u, 0x11585809u, 0xaf8fd1bau, 0x4dc74b6bu, 0xebfec51cu, 0x8a363ecdu, 0x286db87eu, 0xc6a5322fu,
    0x64dcabe0u, 0x03142591u, 0xa14b9f42u, 0x3f8318f3u, 0xddba92a4u, 0x7bf20c55u, 0x1a298606u, 0xb860ffb7u,
};

static const uint32_t bshim_253_tab2[96] = {
    0x8379ebc9u, 0x21b1657au, 0xbfe8df2bu, 0x5e2058dcu, 0xfc57d28du, 0x9a8f4c3eu, 0x38c6c5efu, 0xd6fe3fa0u,
    0x7535b951u, 0x136d3302u, 0xb1a4acb3u, 0x4fdc2664u, 0xee13a015u, 0x8c4b19c6u, 0x2a829377u, 0xc8ba0d28u,
    0x66f186d9u, 0x0529008au, 0xa3607a3bu, 0x4197f3ecu, 0xdfcf6d9du, 0x7e06e74eu, 0x1c3e60ffu, 0xba75dab0u,
    0x58ad5461u, 0xf6e4ce12u, 0x951c47c3u, 0x3353c174u, 0xd18b3b25u, 0x6fc2b4d6u, 0x0dfa2e87u, 0xac31a838u,
    0x4a6921e9u, 0xe8a09b9au, 0x86d8154bu, 0x250f8efcu, 0xc34708adu, 0x617e825eu, 0xffb5fc0fu, 0x9ded75c0u,
    0x3c24ef71u, 0xda5c6922u, 0x7893e2d3u, 0x16cb5c84u, 0xb502d635u, 0x533a4fe6u, 0xf171c997u, 0x8fa94348u,
    0x2de0bcf9u, 0xcc1836aau, 0x6a4fb05bu, 0x08872a0cu, 0xa6bea3bdu, 0x44f61d6eu, 0xe32d971fu, 0x816510d0u,
    0x1f9c8a81u, 0xbdd40432u, 0x5c0b7de3u, 0xfa42f794u, 0x987a7145u, 0x36b1eaf6u, 0xd4e964a7u, 0x7320de58u,
    0x11585809u, 0xaf8fd1bau, 0x4dc74b6bu, 0xebfec51cu, 0x8a363ecdu, 0x286db87eu, 0xc6a5322fu, 0x64dcabe0u,
    0x03142591u, 0xa14b9f42u, 0x3f8318f3u, 0xddba92a4u, 0x7bf20c55u, 0x1a298606u, 0xb860ffb7u, 0x56987968u,
    0xf4cff319u, 0x93076ccau, 0x313ee67bu, 0xcf76602cu, 0x6dadd9ddu, 0x0be5538eu, 0xaa1ccd3fu, 0x485446f0u,
    0xe68bc0a1u, 0x84c33a52u, 0x22fab403u, 0xc1322db4u, 0x5f69a765u, 0xfda12116u, 0x9bd89ac7u, 0x3a101478u,
};

static const uint32_t bshim_253_tab3[96] = {
    0x0529008au, 0xa3607a3bu, 0x4197f3ecu, 0xdfcf6d9du, 0x7e06e74eu, 0x1c3e60ffu, 0xba75dab0u, 0x58ad5461u,
    0xf6e4ce12u, 0x951c47c3u, 0x3353c174u, 0xd18b3b25u, 0x6fc2b4d6u, 0x0dfa2e87u, 0xac31a838u, 0x4a6921e9u,
    0xe8a09b9au, 0x86d8154bu, 0x250f8efcu, 0xc34708adu, 0x617e825eu, 0xffb5fc0fu, 0x9ded75c0u, 0x3c24ef71u,
    0xda5c6922u, 0x7893e2d3u, 0x16cb5c84u, 0xb502d635u, 0x533a4fe6u, 0xf171c997u, 0x8fa94348u, 0x2de0bcf9u,
    0xcc1836aau, 0x6a4fb05bu, 0x08872a0cu, 0xa6bea3bdu, 0x44f61d6eu, 0xe32d971fu, 0x816510d0u, 0x1f9c8a81u,
    0xbdd40432u, 0x5c0b7de3u, 0xfa42f794u, 0x987a7145u, 0x36b1eaf6u, 0xd4e964a7u, 0x7320de58u, 0x11585809u,
    0xaf8fd1bau, 0x4dc74b6bu, 0xebfec51cu, 0x8a363ecdu, 0x286db87eu, 0xc6a5322fu, 0x64dcabe0u, 0x03142591u,
    0xa14b9f42u, 0x3f8318f3u, 0xddba92a4u, 0x7bf20c55u, 0x1a298606u, 0xb860ffb7u, 0x56987968u, 0xf4cff319u,
    0x93076ccau, 0x313ee67bu, 0xcf76602cu, 0x6dadd9ddu, 0x0be5538eu, 0xaa1ccd3fu, 0x485446f0u, 0xe68bc0a1u,
    0x84c33a52u, 0x22fab403u, 0xc1322db4u, 0x5f69a765u, 0xfda12116u, 0x9bd89ac7u, 0x3a101478u, 0xd8478e29u,
    0x767f07dau, 0x14b6818bu, 0xb2edfb3cu, 0x512574edu, 0xef5cee9eu, 0x8d94684fu, 0x2bcbe200u, 0xca035bb1u,
    0x683ad562u, 0x06724f13u, 0xa4a9c8c4u, 0x42e14275u, 0xe118bc26u, 0x7f5035d7u, 0x1d87af88u, 0xbbbf2939u,
};

static const uint32_t bshim_253_tab4[96] = {
    0x86d8154bu, 0x250f8efcu, 0xc34708adu, 0x617e825eu, 0xffb5fc0fu, 0x9ded75c0u, 0x3c24ef71u, 0xda5c6922u,
    0x7893e2d3u, 0x16cb5c84u, 0xb502d635u, 0x533a4fe6u, 0xf171c997u, 0x8fa94348u, 0x2de0bcf9u, 0xcc1836aau,
    0x6a4fb05bu, 0x08872a0cu, 0xa6bea3bdu, 0x44f61d6eu, 0xe32d971fu, 0x816510d0u, 0x1f9c8a81u, 0xbdd40432u,
    0x5c0b7de3u, 0xfa42f794u, 0x987a7145u, 0x36b1eaf6u, 0xd4e964a7u, 0x7320de58u, 0x11585809u, 0xaf8fd1bau,
    0x4dc74b6bu, 0xebfec51cu, 0x8a363ecdu, 0x286db87eu, 0xc6a5322fu, 0x64dcabe0u, 0x03142591u, 0xa14b9f42u,
    0x3f8318f3u, 0xddba92a4u, 0x7bf20c55u, 0x1a298606u, 0xb860ffb7u, 0x56987968u, 0xf4cff319u, 0x93076ccau,
    0x313ee67bu, 0xcf76602cu, 0x6dadd9ddu, 0x0be5538eu, 0xaa1ccd3fu, 0x485446f0u, 0xe68bc0a1u, 0x84c33a52u,
    0x22fab403u, 0xc1322db4u, 0x5f69a765u, 0xfda12116u, 0x9bd89ac7u, 0x3a101478u, 0xd8478e29u, 0x767f07dau,
    0x14b6818bu, 0xb2edfb3cu, 0x512574edu, 0xef5cee9eu, 0x8d94684fu, 0x2bcbe200u, 0xca035bb1u, 0x683ad562u,
    0x06724f13u, 0xa4a9c8c4u, 0x42e14275u, 0xe118bc26u, 0x7f5035d7u, 0x1d87af88u, 0xbbbf2939u, 0x59f6a2eau,
    0xf82e1c9bu, 0x9665964cu, 0x349d0ffdu, 0xd2d489aeu, 0x710c035fu, 0x0f437d10u, 0xad7af6c1u, 0x4bb27072u,
    0xe9e9ea23u, 0x882163d4u, 0x2658dd85u, 0xc4905736u, 0x62c7d0e7u, 0x00ff4a98u, 0x9f36c449u, 0x3d6e3dfau,
};

static const uint32_t bshim_253_tab5[96] = {
    0x08872a0cu, 0xa6bea3bdu, 0x44f61d6eu, 0xe32d971fu, 0x816510d0u, 0x1f9c8a81u, 0xbdd40432u, 0x5c0b7de3u,
    0xfa42f794u, 0x987a7145u, 0x36b1eaf6u, 0xd4e964a7u, 0x7320de58u, 0x11585809u, 0xaf8fd1bau, 0x4dc74b6bu,
    0xebfec51cu, 0x8a363ecdu, 0x286db87eu, 0xc6a5322fu, 0x64dcabe0u, 0x03142591u, 0xa14b9f42u, 0x3f8318f3u,
    0xddba92a4u, 0x7bf20c55u, 0x1a298606u, 0xb860ffb7u, 0x56987968u, 0xf4cff319u, 0x93076ccau, 0x313ee67bu,
    0xcf76602cu, 0x6dadd9ddu, 0x0be5538eu, 0xaa1ccd3fu, 0x485446f0u, 0xe68bc0a1u, 0x84c33a52u, 0x22fab403u,
    0xc1322db4u, 0x5f69a765u, 0xfda12116u, 0x9bd89ac7u, 0x3a101478u, 0xd8478e29u, 0x767f07dau, 0x14b6818bu,
    0xb2edfb3cu, 0x512574edu, 0xef5cee9eu, 0x8d94684fu, 0x2bcbe200u, 0xca035bb1u, 0x683ad562u, 0x06724f13u,
    0xa4a9c8c4u, 0x42e14275u, 0xe118bc26u, 0x7f5035d7u, 0x1d87af88u, 0xbbbf2939u, 0x59f6a2eau, 0xf82e1c9bu,
    0x9665964cu, 0x349d0ffdu, 0xd2d489aeu, 0x710c035fu, 0x0f437d10u, 0xad7af6c1u, 0x4bb27072u, 0xe9e9ea23u,
    0x882163d4u, 0x2658dd85u, 0xc4905736u, 0x62c7d0e7u, 0x00ff4a98u, 0x9f36c449u, 0x3d6e3dfau, 0xdba5b7abu,
    0x79dd315cu, 0x1814ab0du, 0xb64c24beu, 0x54839e6fu, 0xf2bb1820u, 0x90f291d1u, 0x2f2a0b82u, 0xcd618533u,
    0x6b98fee4u, 0x09d07895u, 0xa807f246u, 0x463f6bf7u, 0xe476e5a8u, 0x82ae5f59u, 0x20e5d90au, 0xbf1d52bbu,
};

static const uint32_t bshim_253_tab6[96] = {
    0x8a363ecdu, 0x286db87eu, 0xc6a5322fu, 0x64dcabe0u, 0x03142591u, 0xa14b9f42u, 0x3f8318f3u, 0xddba92a4u,
    0x7bf20c55u, 0x1a298606u, 0xb860ffb7u, 0x56987968u, 0xf4cff319u, 0x93076ccau, 0x313ee67bu, 0xcf76602cu,
    0x6dadd9ddu, 0x0be5538eu, 0xaa1ccd3fu, 0x485446f0u, 0xe68bc0a1u, 0x84c33a52u, 0x22fab403u, 0xc1322db4u,
    0x5f69a765u, 0xfda12116u, 0x9bd89ac7u, 0x3a101478u, 0xd8478e29u, 0x767f07dau, 0x14b6818bu, 0xb2edfb3cu,
    0x512574edu, 0xef5cee9eu, 0x8d94684fu, 0x2bcbe200u, 0xca035bb1u, 0x683ad562u, 0x06724f13u, 0xa4a9c8c4u,
    0x42e14275u, 0xe118bc26u, 0x7f5035d7u, 0x1d87af88u, 0xbbbf2939u, 0x59f6a2eau, 0xf82e1c9bu, 0x9665964cu,
    0x349d0ffdu, 0xd2d489aeu, 0x710c035fu, 0x0f437d10u, 0xad7af6c1u, 0x4bb27072u, 0xe9e9ea23u, 0x882163d4u,
    0x2658dd85u, 0xc4905736u, 0x62c7d0e7u, 0x00ff4a98u, 0x9f36c449u, 0x3d6e3dfau, 0xdba5b7abu, 0x79dd315cu,
    0x1814ab0du, 0xb64c24beu, 0x54839e6fu, 0xf2bb1820u, 0x90f291d1u, 0x2f2a0b82u, 0xcd618533u, 0x6b98fee4u,
    0x09d07895u, 0xa807f246u, 0x463f6bf7u, 0xe476e5a8u, 0x82ae5f59u, 0x20e5d90au, 0xbf1d52bbu, 0x5d54cc6cu,
    0xfb8c461du, 0x99c3bfceu, 0x37fb397fu, 0xd632b330u, 0x746a2ce1u, 0x12a1a692u, 0xb0d92043u, 0x4f1099f4u,
    0xed4813a5u, 0x8b7f8d56u, 0x29b70707u, 0xc7ee80b8u, 0x6625fa69u, 0x045d741au, 0xa294edcbu, 0x40cc677cu,
};

static const uint32_t bshim_253_tab7[96] = {
    0x0be5538eu, 0xaa1ccd3fu, 0x485446f0u, 0xe68bc0a1u, 0x84c33a52u, 0x22fab403u, 0xc1322db4u, 0x5f69a765u,
    0xfda12116u, 0x9bd89ac7u, 0x3a101478u, 0xd8478e29u, 0x767f07dau, 0x14b6818bu, 0xb2edfb3cu, 0x512574edu,
    0xef5cee9eu, 0x8d94684fu, 0x2bcbe200u, 0xca035bb1u, 0x683ad562u, 0x06724f13u, 0xa4a9c8c4u, 0x42e14275u,
    0xe118bc26u, 0x7f5035d7u, 0x1d87af88u, 0xbbbf2939u, 0x59f6a2eau, 0xf82e1c9bu, 0x9665964cu, 0x349d0ffdu,
    0xd2d489aeu, 0x710c035fu, 0x0f437d10u, 0xad7af6c1u, 0x4bb27072u, 0xe9e9ea23u, 0x882163d4u, 0x2658dd85u,
    0xc4905736u, 0x62c7d0e7u, 0x00ff4a98u, 0x9f36c449u, 0x3d6e3dfau, 0xdba5b7abu, 0x79dd315cu, 0x1814ab0du,
    0xb64c24beu, 0x54839e6fu, 0xf2bb1820u, 0x90f291d1u, 0x2f2a0b82u, 0xcd618533u, 0x6b98fee4u, 0x09d07895u,
    0xa807f246u, 0x463f6bf7u, 0xe476e5a8u, 0x82ae5f59u, 0x20e5d90au, 0xbf1d52bbu, 0x5d54cc6cu, 0xfb8c461du,
    0x99c3bfceu, 0x37fb397fu, 0xd632b330u, 0x746a2ce1u, 0x12a1a692u, 0xb0d92043u, 0x4f1099f4u, 0xed4813a5u,
    0x8b7f8d56u, 0x29b70707u, 0xc7ee80b8u, 0x6625fa69u, 0x045d741au, 0xa294edcbu, 0x40cc677cu, 0xdf03e12du,
    0x7d3b5adeu, 0x1b72d48fu, 0xb9aa4e40u, 0x57e1c7f1u, 0xf61941a2u, 0x9450bb53u, 0x32883504u, 0xd0bfaeb5u,
    0x6ef72866u, 0x0d2ea217u, 0xab661bc8u, 0x499d9579u, 0xe7d50f2au, 0x860c88dbu, 0x2444028cu, 0xc27b7c3du,
};

struct bshim_253_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_253_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_253_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_253_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_253_reset(struct bshim_253_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001e9233u;
    return 0;
}

