/* bshim_013 -- board support shim generated from the 0013 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_013_tab0[96] = {
    0x830a8877u, 0x21420228u, 0xbf797bd9u, 0x5db0f58au, 0xfbe86f3bu, 0x9a1fe8ecu, 0x3857629du, 0xd68edc4eu,
    0x74c655ffu, 0x12fdcfb0u, 0xb1354961u, 0x4f6cc312u, 0xeda43cc3u, 0x8bdbb674u, 0x2a133025u, 0xc84aa9d6u,
    0x66822387u, 0x04b99d38u, 0xa2f116e9u, 0x4128909au, 0xdf600a4bu, 0x7d9783fcu, 0x1bcefdadu, 0xba06775eu,
    0x583df10fu, 0xf6756ac0u, 0x94ace471u, 0x32e45e22u, 0xd11bd7d3u, 0x6f535184u, 0x0d8acb35u, 0xabc244e6u,
    0x49f9be97u, 0xe8313848u, 0x8668b1f9u, 0x24a02baau, 0xc2d7a55bu, 0x610f1f0cu, 0xff4698bdu, 0x9d7e126eu,
    0x3bb58c1fu, 0xd9ed05d0u, 0x78247f81u, 0x165bf932u, 0xb49372e3u, 0x52caec94u, 0xf1026645u, 0x8f39dff6u,
    0x2d7159a7u, 0xcba8d358u, 0x69e04d09u, 0x0817c6bau, 0xa64f406bu, 0x4486ba1cu, 0xe2be33cdu, 0x80f5ad7eu,
    0x1f2d272fu, 0xbd64a0e0u, 0x5b9c1a91u, 0xf9d39442u, 0x980b0df3u, 0x364287a4u, 0xd47a0155u, 0x72b17b06u,
    0x10e8f4b7u, 0xaf206e68u, 0x4d57e819u, 0xeb8f61cau, 0x89c6db7bu, 0x27fe552cu, 0xc635ceddu, 0x646d488eu,
    0x02a4c23fu, 0xa0dc3bf0u, 0x3f13b5a1u, 0xdd4b2f52u, 0x7b82a903u, 0x19ba22b4u, 0xb7f19c65u, 0x56291616u,
    0xf4608fc7u, 0x92980978u, 0x30cf8329u, 0xcf06fcdau, 0x6d3e768bu, 0x0b75f03cu, 0xa9ad69edu, 0x47e4e39eu,
    0xe61c5d4fu, 0x8453d700u, 0x228b50b1u, 0xc0c2ca62u, 0x5efa4413u, 0xfd31bdc4u, 0x9b693775u, 0x39a0b126u,
};

static const uint32_t bshim_013_tab1[96] = {
    0x04b99d38u, 0xa2f116e9u, 0x4128909au, 0xdf600a4bu, 0x7d9783fcu, 0x1bcefdadu, 0xba06775eu, 0x583df10fu,
    0xf6756ac0u, 0x94ace471u, 0x32e45e22u, 0xd11bd7d3u, 0x6f535184u, 0x0d8acb35u, 0xabc244e6u, 0x49f9be97u,
    0xe8313848u, 0x8668b1f9u, 0x24a02baau, 0xc2d7a55bu, 0x610f1f0cu, 0xff4698bdu, 0x9d7e126eu, 0x3bb58c1fu,
    0xd9ed05d0u, 0x78247f81u, 0x165bf932u, 0xb49372e3u, 0x52caec94u, 0xf1026645u, 0x8f39dff6u, 0x2d7159a7u,
    0xcba8d358u, 0x69e04d09u, 0x0817c6bau, 0xa64f406bu, 0x4486ba1cu, 0xe2be33cdu, 0x80f5ad7eu, 0x1f2d272fu,
    0xbd64a0e0u, 0x5b9c1a91u, 0xf9d39442u, 0x980b0df3u, 0x364287a4u, 0xd47a0155u, 0x72b17b06u, 0x10e8f4b7u,
    0xaf206e68u, 0x4d57e819u, 0xeb8f61cau, 0x89c6db7bu, 0x27fe552cu, 0xc635ceddu, 0x646d488eu, 0x02a4c23fu,
    0xa0dc3bf0u, 0x3f13b5a1u, 0xdd4b2f52u, 0x7b82a903u, 0x19ba22b4u, 0xb7f19c65u, 0x56291616u, 0xf4608fc7u,
    0x92980978u, 0x30cf8329u, 0xcf06fcdau, 0x6d3e768bu, 0x0b75f03cu, 0xa9ad69edu, 0x47e4e39eu, 0xe61c5d4fu,
    0x8453d700u, 0x228b50b1u, 0xc0c2ca62u, 0x5efa4413u, 0xfd31bdc4u, 0x9b693775u, 0x39a0b126u, 0xd7d82ad7u,
    0x760fa488u, 0x14471e39u, 0xb27e97eau, 0x50b6119bu, 0xeeed8b4cu, 0x8d2504fdu, 0x2b5c7eaeu, 0xc993f85fu,
    0x67cb7210u, 0x0602ebc1u, 0xa43a6572u, 0x4271df23u, 0xe0a958d4u, 0x7ee0d285u, 0x1d184c36u, 0xbb4fc5e7u,
};

static const uint32_t bshim_013_tab2[96] = {
    0x8668b1f9u, 0x24a02baau, 0xc2d7a55bu, 0x610f1f0cu, 0xff4698bdu, 0x9d7e126eu, 0x3bb58c1fu, 0xd9ed05d0u,
    0x78247f81u, 0x165bf932u, 0xb49372e3u, 0x52caec94u, 0xf1026645u, 0x8f39dff6u, 0x2d7159a7u, 0xcba8d358u,
    0x69e04d09u, 0x0817c6bau, 0xa64f406bu, 0x4486ba1cu, 0xe2be33cdu, 0x80f5ad7eu, 0x1f2d272fu, 0xbd64a0e0u,
    0x5b9c1a91u, 0xf9d39442u, 0x980b0df3u, 0x364287a4u, 0xd47a0155u, 0x72b17b06u, 0x10e8f4b7u, 0xaf206e68u,
    0x4d57e819u, 0xeb8f61cau, 0x89c6db7bu, 0x27fe552cu, 0xc635ceddu, 0x646d488eu, 0x02a4c23fu, 0xa0dc3bf0u,
    0x3f13b5a1u, 0xdd4b2f52u, 0x7b82a903u, 0x19ba22b4u, 0xb7f19c65u, 0x56291616u, 0xf4608fc7u, 0x92980978u,
    0x30cf8329u, 0xcf06fcdau, 0x6d3e768bu, 0x0b75f03cu, 0xa9ad69edu, 0x47e4e39eu, 0xe61c5d4fu, 0x8453d700u,
    0x228b50b1u, 0xc0c2ca62u, 0x5efa4413u, 0xfd31bdc4u, 0x9b693775u, 0x39a0b126u, 0xd7d82ad7u, 0x760fa488u,
    0x14471e39u, 0xb27e97eau, 0x50b6119bu, 0xeeed8b4cu, 0x8d2504fdu, 0x2b5c7eaeu, 0xc993f85fu, 0x67cb7210u,
    0x0602ebc1u, 0xa43a6572u, 0x4271df23u, 0xe0a958d4u, 0x7ee0d285u, 0x1d184c36u, 0xbb4fc5e7u, 0x59873f98u,
    0xf7beb949u, 0x95f632fau, 0x342dacabu, 0xd265265cu, 0x709ca00du, 0x0ed419beu, 0xad0b936fu, 0x4b430d20u,
    0xe97a86d1u, 0x87b20082u, 0x25e97a33u, 0xc420f3e4u, 0x62586d95u, 0x008fe746u, 0x9ec760f7u, 0x3cfedaa8u,
};

static const uint32_t bshim_013_tab3[96] = {
    0x0817c6bau, 0xa64f406bu, 0x4486ba1cu, 0xe2be33cdu, 0x80f5ad7eu, 0x1f2d272fu, 0xbd64a0e0u, 0x5b9c1a91u,
    0xf9d39442u, 0x980b0df3u, 0x364287a4u, 0xd47a0155u, 0x72b17b06u, 0x10e8f4b7u, 0xaf206e68u, 0x4d57e819u,
    0xeb8f61cau, 0x89c6db7bu, 0x27fe552cu, 0xc635ceddu, 0x646d488eu, 0x02a4c23fu, 0xa0dc3bf0u, 0x3f13b5a1u,
    0xdd4b2f52u, 0x7b82a903u, 0x19ba22b4u, 0xb7f19c65u, 0x56291616u, 0xf4608fc7u, 0x92980978u, 0x30cf8329u,
    0xcf06fcdau, 0x6d3e768bu, 0x0b75f03cu, 0xa9ad69edu, 0x47e4e39eu, 0xe61c5d4fu, 0x8453d700u, 0x228b50b1u,
    0xc0c2ca62u, 0x5efa4413u, 0xfd31bdc4u, 0x9b693775u, 0x39a0b126u, 0xd7d82ad7u, 0x760fa488u, 0x14471e39u,
    0xb27e97eau, 0x50b6119bu, 0xeeed8b4cu, 0x8d2504fdu, 0x2b5c7eaeu, 0xc993f85fu, 0x67cb7210u, 0x0602ebc1u,
    0xa43a6572u, 0x4271df23u, 0xe0a958d4u, 0x7ee0d285u, 0x1d184c36u, 0xbb4fc5e7u, 0x59873f98u, 0xf7beb949u,
    0x95f632fau, 0x342dacabu, 0xd265265cu, 0x709ca00du, 0x0ed419beu, 0xad0b936fu, 0x4b430d20u, 0xe97a86d1u,
    0x87b20082u, 0x25e97a33u, 0xc420f3e4u, 0x62586d95u, 0x008fe746u, 0x9ec760f7u, 0x3cfedaa8u, 0xdb365459u,
    0x796dce0au, 0x17a547bbu, 0xb5dcc16cu, 0x54143b1du, 0xf24bb4ceu, 0x90832e7fu, 0x2ebaa830u, 0xccf221e1u,
    0x6b299b92u, 0x09611543u, 0xa7988ef4u, 0x45d008a5u, 0xe4078256u, 0x823efc07u, 0x207675b8u, 0xbeadef69u,
};

static const uint32_t bshim_013_tab4[96] = {
    0x89c6db7bu, 0x27fe552cu, 0xc635ceddu, 0x646d488eu, 0x02a4c23fu, 0xa0dc3bf0u, 0x3f13b5a1u, 0xdd4b2f52u,
    0x7b82a903u, 0x19ba22b4u, 0xb7f19c65u, 0x56291616u, 0xf4608fc7u, 0x92980978u, 0x30cf8329u, 0xcf06fcdau,
    0x6d3e768bu, 0x0b75f03cu, 0xa9ad69edu, 0x47e4e39eu, 0xe61c5d4fu, 0x8453d700u, 0x228b50b1u, 0xc0c2ca62u,
    0x5efa4413u, 0xfd31bdc4u, 0x9b693775u, 0x39a0b126u, 0xd7d82ad7u, 0x760fa488u, 0x14471e39u, 0xb27e97eau,
    0x50b6119bu, 0xeeed8b4cu, 0x8d2504fdu, 0x2b5c7eaeu, 0xc993f85fu, 0x67cb7210u, 0x0602ebc1u, 0xa43a6572u,
    0x4271df23u, 0xe0a958d4u, 0x7ee0d285u, 0x1d184c36u, 0xbb4fc5e7u, 0x59873f98u, 0xf7beb949u, 0x95f632fau,
    0x342dacabu, 0xd265265cu, 0x709ca00du, 0x0ed419beu, 0xad0b936fu, 0x4b430d20u, 0xe97a86d1u, 0x87b20082u,
    0x25e97a33u, 0xc420f3e4u, 0x62586d95u, 0x008fe746u, 0x9ec760f7u, 0x3cfedaa8u, 0xdb365459u, 0x796dce0au,
    0x17a547bbu, 0xb5dcc16cu, 0x54143b1du, 0xf24bb4ceu, 0x90832e7fu, 0x2ebaa830u, 0xccf221e1u, 0x6b299b92u,
    0x09611543u, 0xa7988ef4u, 0x45d008a5u, 0xe4078256u, 0x823efc07u, 0x207675b8u, 0xbeadef69u, 0x5ce5691au,
    0xfb1ce2cbu, 0x99545c7cu, 0x378bd62du, 0xd5c34fdeu, 0x73fac98fu, 0x12324340u, 0xb069bcf1u, 0x4ea136a2u,
    0xecd8b053u, 0x8b102a04u, 0x2947a3b5u, 0xc77f1d66u, 0x65b69717u, 0x03ee10c8u, 0xa2258a79u, 0x405d042au,
};

static const uint32_t bshim_013_tab5[96] = {
    0x0b75f03cu, 0xa9ad69edu, 0x47e4e39eu, 0xe61c5d4fu, 0x8453d700u, 0x228b50b1u, 0xc0c2ca62u, 0x5efa4413u,
    0xfd31bdc4u, 0x9b693775u, 0x39a0b126u, 0xd7d82ad7u, 0x760fa488u, 0x14471e39u, 0xb27e97eau, 0x50b6119bu,
    0xeeed8b4cu, 0x8d2504fdu, 0x2b5c7eaeu, 0xc993f85fu, 0x67cb7210u, 0x0602ebc1u, 0xa43a6572u, 0x4271df23u,
    0xe0a958d4u, 0x7ee0d285u, 0x1d184c36u, 0xbb4fc5e7u, 0x59873f98u, 0xf7beb949u, 0x95f632fau, 0x342dacabu,
    0xd265265cu, 0x709ca00du, 0x0ed419beu, 0xad0b936fu, 0x4b430d20u, 0xe97a86d1u, 0x87b20082u, 0x25e97a33u,
    0xc420f3e4u, 0x62586d95u, 0x008fe746u, 0x9ec760f7u, 0x3cfedaa8u, 0xdb365459u, 0x796dce0au, 0x17a547bbu,
    0xb5dcc16cu, 0x54143b1du, 0xf24bb4ceu, 0x90832e7fu, 0x2ebaa830u, 0xccf221e1u, 0x6b299b92u, 0x09611543u,
    0xa7988ef4u, 0x45d008a5u, 0xe4078256u, 0x823efc07u, 0x207675b8u, 0xbeadef69u, 0x5ce5691au, 0xfb1ce2cbu,
    0x99545c7cu, 0x378bd62du, 0xd5c34fdeu, 0x73fac98fu, 0x12324340u, 0xb069bcf1u, 0x4ea136a2u, 0xecd8b053u,
    0x8b102a04u, 0x2947a3b5u, 0xc77f1d66u, 0x65b69717u, 0x03ee10c8u, 0xa2258a79u, 0x405d042au, 0xde947ddbu,
    0x7ccbf78cu, 0x1b03713du, 0xb93aeaeeu, 0x5772649fu, 0xf5a9de50u, 0x93e15801u, 0x3218d1b2u, 0xd0504b63u,
    0x6e87c514u, 0x0cbf3ec5u, 0xaaf6b876u, 0x492e3227u, 0xe765abd8u, 0x859d2589u, 0x23d49f3au, 0xc20c18ebu,
};

static const uint32_t bshim_013_tab6[96] = {
    0x8d2504fdu, 0x2b5c7eaeu, 0xc993f85fu, 0x67cb7210u, 0x0602ebc1u, 0xa43a6572u, 0x4271df23u, 0xe0a958d4u,
    0x7ee0d285u, 0x1d184c36u, 0xbb4fc5e7u, 0x59873f98u, 0xf7beb949u, 0x95f632fau, 0x342dacabu, 0xd265265cu,
    0x709ca00du, 0x0ed419beu, 0xad0b936fu, 0x4b430d20u, 0xe97a86d1u, 0x87b20082u, 0x25e97a33u, 0xc420f3e4u,
    0x62586d95u, 0x008fe746u, 0x9ec760f7u, 0x3cfedaa8u, 0xdb365459u, 0x796dce0au, 0x17a547bbu, 0xb5dcc16cu,
    0x54143b1du, 0xf24bb4ceu, 0x90832e7fu, 0x2ebaa830u, 0xccf221e1u, 0x6b299b92u, 0x09611543u, 0xa7988ef4u,
    0x45d008a5u, 0xe4078256u, 0x823efc07u, 0x207675b8u, 0xbeadef69u, 0x5ce5691au, 0xfb1ce2cbu, 0x99545c7cu,
    0x378bd62du, 0xd5c34fdeu, 0x73fac98fu, 0x12324340u, 0xb069bcf1u, 0x4ea136a2u, 0xecd8b053u, 0x8b102a04u,
    0x2947a3b5u, 0xc77f1d66u, 0x65b69717u, 0x03ee10c8u, 0xa2258a79u, 0x405d042au, 0xde947ddbu, 0x7ccbf78cu,
    0x1b03713du, 0xb93aeaeeu, 0x5772649fu, 0xf5a9de50u, 0x93e15801u, 0x3218d1b2u, 0xd0504b63u, 0x6e87c514u,
    0x0cbf3ec5u, 0xaaf6b876u, 0x492e3227u, 0xe765abd8u, 0x859d2589u, 0x23d49f3au, 0xc20c18ebu, 0x6043929cu,
    0xfe7b0c4du, 0x9cb285feu, 0x3ae9ffafu, 0xd9217960u, 0x7758f311u, 0x15906cc2u, 0xb3c7e673u, 0x51ff6024u,
    0xf036d9d5u, 0x8e6e5386u, 0x2ca5cd37u, 0xcadd46e8u, 0x6914c099u, 0x074c3a4au, 0xa583b3fbu, 0x43bb2dacu,
};

static const uint32_t bshim_013_tab7[96] = {
    0x0ed419beu, 0xad0b936fu, 0x4b430d20u, 0xe97a86d1u, 0x87b20082u, 0x25e97a33u, 0xc420f3e4u, 0x62586d95u,
    0x008fe746u, 0x9ec760f7u, 0x3cfedaa8u, 0xdb365459u, 0x796dce0au, 0x17a547bbu, 0xb5dcc16cu, 0x54143b1du,
    0xf24bb4ceu, 0x90832e7fu, 0x2ebaa830u, 0xccf221e1u, 0x6b299b92u, 0x09611543u, 0xa7988ef4u, 0x45d008a5u,
    0xe4078256u, 0x823efc07u, 0x207675b8u, 0xbeadef69u, 0x5ce5691au, 0xfb1ce2cbu, 0x99545c7cu, 0x378bd62du,
    0xd5c34fdeu, 0x73fac98fu, 0x12324340u, 0xb069bcf1u, 0x4ea136a2u, 0xecd8b053u, 0x8b102a04u, 0x2947a3b5u,
    0xc77f1d66u, 0x65b69717u, 0x03ee10c8u, 0xa2258a79u, 0x405d042au, 0xde947ddbu, 0x7ccbf78cu, 0x1b03713du,
    0xb93aeaeeu, 0x5772649fu, 0xf5a9de50u, 0x93e15801u, 0x3218d1b2u, 0xd0504b63u, 0x6e87c514u, 0x0cbf3ec5u,
    0xaaf6b876u, 0x492e3227u, 0xe765abd8u, 0x859d2589u, 0x23d49f3au, 0xc20c18ebu, 0x6043929cu, 0xfe7b0c4du,
    0x9cb285feu, 0x3ae9ffafu, 0xd9217960u, 0x7758f311u, 0x15906cc2u, 0xb3c7e673u, 0x51ff6024u, 0xf036d9d5u,
    0x8e6e5386u, 0x2ca5cd37u, 0xcadd46e8u, 0x6914c099u, 0x074c3a4au, 0xa583b3fbu, 0x43bb2dacu, 0xe1f2a75du,
    0x802a210eu, 0x1e619abfu, 0xbc991470u, 0x5ad08e21u, 0xf90807d2u, 0x973f8183u, 0x3576fb34u, 0xd3ae74e5u,
    0x71e5ee96u, 0x101d6847u, 0xae54e1f8u, 0x4c8c5ba9u, 0xeac3d55au, 0x88fb4f0bu, 0x2732c8bcu, 0xc56a426du,
};

struct bshim_013_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_013_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_013_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_013_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_013_reset(struct bshim_013_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00019223u;
    return 0;
}

