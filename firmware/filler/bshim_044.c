/* bshim_044 -- board support shim generated from the 0044 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_044_tab0[96] = {
    0x590ff544u, 0xf7476ef5u, 0x957ee8a6u, 0x33b66257u, 0xd1eddc08u, 0x702555b9u, 0x0e5ccf6au, 0xac94491bu,
    0x4acbc2ccu, 0xe9033c7du, 0x873ab62eu, 0x25722fdfu, 0xc3a9a990u, 0x61e12341u, 0x00189cf2u, 0x9e5016a3u,
    0x3c879054u, 0xdabf0a05u, 0x78f683b6u, 0x172dfd67u, 0xb5657718u, 0x539cf0c9u, 0xf1d46a7au, 0x900be42bu,
    0x2e435ddcu, 0xcc7ad78du, 0x6ab2513eu, 0x08e9caefu, 0xa72144a0u, 0x4558be51u, 0xe3903802u, 0x81c7b1b3u,
    0x1fff2b64u, 0xbe36a515u, 0x5c6e1ec6u, 0xfaa59877u, 0x98dd1228u, 0x37148bd9u, 0xd54c058au, 0x73837f3bu,
    0x11baf8ecu, 0xaff2729du, 0x4e29ec4eu, 0xec6165ffu, 0x8a98dfb0u, 0x28d05961u, 0xc707d312u, 0x653f4cc3u,
    0x0376c674u, 0xa1ae4025u, 0x3fe5b9d6u, 0xde1d3387u, 0x7c54ad38u, 0x1a8c26e9u, 0xb8c3a09au, 0x56fb1a4bu,
    0xf53293fcu, 0x936a0dadu, 0x31a1875eu, 0xcfd9010fu, 0x6e107ac0u, 0x0c47f471u, 0xaa7f6e22u, 0x48b6e7d3u,
    0xe6ee6184u, 0x8525db35u, 0x235d54e6u, 0xc194ce97u, 0x5fcc4848u, 0xfe03c1f9u, 0x9c3b3baau, 0x3a72b55bu,
    0xd8aa2f0cu, 0x76e1a8bdu, 0x1519226eu, 0xb3509c1fu, 0x518815d0u, 0xefbf8f81u, 0x8df70932u, 0x2c2e82e3u,
    0xca65fc94u, 0x689d7645u, 0x06d4eff6u, 0xa50c69a7u, 0x4343e358u, 0xe17b5d09u, 0x7fb2d6bau, 0x1dea506bu,
    0xbc21ca1cu, 0x5a5943cdu, 0xf890bd7eu, 0x96c8372fu, 0x34ffb0e0u, 0xd3372a91u, 0x716ea442u, 0x0fa61df3u,
};

static const uint32_t bshim_044_tab1[96] = {
    0xdabf0a05u, 0x78f683b6u, 0x172dfd67u, 0xb5657718u, 0x539cf0c9u, 0xf1d46a7au, 0x900be42bu, 0x2e435ddcu,
    0xcc7ad78du, 0x6ab2513eu, 0x08e9caefu, 0xa72144a0u, 0x4558be51u, 0xe3903802u, 0x81c7b1b3u, 0x1fff2b64u,
    0xbe36a515u, 0x5c6e1ec6u, 0xfaa59877u, 0x98dd1228u, 0x37148bd9u, 0xd54c058au, 0x73837f3bu, 0x11baf8ecu,
    0xaff2729du, 0x4e29ec4eu, 0xec6165ffu, 0x8a98dfb0u, 0x28d05961u, 0xc707d312u, 0x653f4cc3u, 0x0376c674u,
    0xa1ae4025u, 0x3fe5b9d6u, 0xde1d3387u, 0x7c54ad38u, 0x1a8c26e9u, 0xb8c3a09au, 0x56fb1a4bu, 0xf53293fcu,
    0x936a0dadu, 0x31a1875eu, 0xcfd9010fu, 0x6e107ac0u, 0x0c47f471u, 0xaa7f6e22u, 0x48b6e7d3u, 0xe6ee6184u,
    0x8525db35u, 0x235d54e6u, 0xc194ce97u, 0x5fcc4848u, 0xfe03c1f9u, 0x9c3b3baau, 0x3a72b55bu, 0xd8aa2f0cu,
    0x76e1a8bdu, 0x1519226eu, 0xb3509c1fu, 0x518815d0u, 0xefbf8f81u, 0x8df70932u, 0x2c2e82e3u, 0xca65fc94u,
    0x689d7645u, 0x06d4eff6u, 0xa50c69a7u, 0x4343e358u, 0xe17b5d09u, 0x7fb2d6bau, 0x1dea506bu, 0xbc21ca1cu,
    0x5a5943cdu, 0xf890bd7eu, 0x96c8372fu, 0x34ffb0e0u, 0xd3372a91u, 0x716ea442u, 0x0fa61df3u, 0xaddd97a4u,
    0x4c151155u, 0xea4c8b06u, 0x888404b7u, 0x26bb7e68u, 0xc4f2f819u, 0x632a71cau, 0x0161eb7bu, 0x9f99652cu,
    0x3dd0deddu, 0xdc08588eu, 0x7a3fd23fu, 0x18774bf0u, 0xb6aec5a1u, 0x54e63f52u, 0xf31db903u, 0x915532b4u,
};

static const uint32_t bshim_044_tab2[96] = {
    0x5c6e1ec6u, 0xfaa59877u, 0x98dd1228u, 0x37148bd9u, 0xd54c058au, 0x73837f3bu, 0x11baf8ecu, 0xaff2729du,
    0x4e29ec4eu, 0xec6165ffu, 0x8a98dfb0u, 0x28d05961u, 0xc707d312u, 0x653f4cc3u, 0x0376c674u, 0xa1ae4025u,
    0x3fe5b9d6u, 0xde1d3387u, 0x7c54ad38u, 0x1a8c26e9u, 0xb8c3a09au, 0x56fb1a4bu, 0xf53293fcu, 0x936a0dadu,
    0x31a1875eu, 0xcfd9010fu, 0x6e107ac0u, 0x0c47f471u, 0xaa7f6e22u, 0x48b6e7d3u, 0xe6ee6184u, 0x8525db35u,
    0x235d54e6u, 0xc194ce97u, 0x5fcc4848u, 0xfe03c1f9u, 0x9c3b3baau, 0x3a72b55bu, 0xd8aa2f0cu, 0x76e1a8bdu,
    0x1519226eu, 0xb3509c1fu, 0x518815d0u, 0xefbf8f81u, 0x8df70932u, 0x2c2e82e3u, 0xca65fc94u, 0x689d7645u,
    0x06d4eff6u, 0xa50c69a7u, 0x4343e358u, 0xe17b5d09u, 0x7fb2d6bau, 0x1dea506bu, 0xbc21ca1cu, 0x5a5943cdu,
    0xf890bd7eu, 0x96c8372fu, 0x34ffb0e0u, 0xd3372a91u, 0x716ea442u, 0x0fa61df3u, 0xaddd97a4u, 0x4c151155u,
    0xea4c8b06u, 0x888404b7u, 0x26bb7e68u, 0xc4f2f819u, 0x632a71cau, 0x0161eb7bu, 0x9f99652cu, 0x3dd0deddu,
    0xdc08588eu, 0x7a3fd23fu, 0x18774bf0u, 0xb6aec5a1u, 0x54e63f52u, 0xf31db903u, 0x915532b4u, 0x2f8cac65u,
    0xcdc42616u, 0x6bfb9fc7u, 0x0a331978u, 0xa86a9329u, 0x46a20cdau, 0xe4d9868bu, 0x8311003cu, 0x214879edu,
    0xbf7ff39eu, 0x5db76d4fu, 0xfbeee700u, 0x9a2660b1u, 0x385dda62u, 0xd6955413u, 0x74cccdc4u, 0x13044775u,
};

static const uint32_t bshim_044_tab3[96] = {
    0xde1d3387u, 0x7c54ad38u, 0x1a8c26e9u, 0xb8c3a09au, 0x56fb1a4bu, 0xf53293fcu, 0x936a0dadu, 0x31a1875eu,
    0xcfd9010fu, 0x6e107ac0u, 0x0c47f471u, 0xaa7f6e22u, 0x48b6e7d3u, 0xe6ee6184u, 0x8525db35u, 0x235d54e6u,
    0xc194ce97u, 0x5fcc4848u, 0xfe03c1f9u, 0x9c3b3baau, 0x3a72b55bu, 0xd8aa2f0cu, 0x76e1a8bdu, 0x1519226eu,
    0xb3509c1fu, 0x518815d0u, 0xefbf8f81u, 0x8df70932u, 0x2c2e82e3u, 0xca65fc94u, 0x689d7645u, 0x06d4eff6u,
    0xa50c69a7u, 0x4343e358u, 0xe17b5d09u, 0x7fb2d6bau, 0x1dea506bu, 0xbc21ca1cu, 0x5a5943cdu, 0xf890bd7eu,
    0x96c8372fu, 0x34ffb0e0u, 0xd3372a91u, 0x716ea442u, 0x0fa61df3u, 0xaddd97a4u, 0x4c151155u, 0xea4c8b06u,
    0x888404b7u, 0x26bb7e68u, 0xc4f2f819u, 0x632a71cau, 0x0161eb7bu, 0x9f99652cu, 0x3dd0deddu, 0xdc08588eu,
    0x7a3fd23fu, 0x18774bf0u, 0xb6aec5a1u, 0x54e63f52u, 0xf31db903u, 0x915532b4u, 0x2f8cac65u, 0xcdc42616u,
    0x6bfb9fc7u, 0x0a331978u, 0xa86a9329u, 0x46a20cdau, 0xe4d9868bu, 0x8311003cu, 0x214879edu, 0xbf7ff39eu,
    0x5db76d4fu, 0xfbeee700u, 0x9a2660b1u, 0x385dda62u, 0xd6955413u, 0x74cccdc4u, 0x13044775u, 0xb13bc126u,
    0x4f733ad7u, 0xedaab488u, 0x8be22e39u, 0x2a19a7eau, 0xc851219bu, 0x66889b4cu, 0x04c014fdu, 0xa2f78eaeu,
    0x412f085fu, 0xdf668210u, 0x7d9dfbc1u, 0x1bd57572u, 0xba0cef23u, 0x584468d4u, 0xf67be285u, 0x94b35c36u,
};

static const uint32_t bshim_044_tab4[96] = {
    0x5fcc4848u, 0xfe03c1f9u, 0x9c3b3baau, 0x3a72b55bu, 0xd8aa2f0cu, 0x76e1a8bdu, 0x1519226eu, 0xb3509c1fu,
    0x518815d0u, 0xefbf8f81u, 0x8df70932u, 0x2c2e82e3u, 0xca65fc94u, 0x689d7645u, 0x06d4eff6u, 0xa50c69a7u,
    0x4343e358u, 0xe17b5d09u, 0x7fb2d6bau, 0x1dea506bu, 0xbc21ca1cu, 0x5a5943cdu, 0xf890bd7eu, 0x96c8372fu,
    0x34ffb0e0u, 0xd3372a91u, 0x716ea442u, 0x0fa61df3u, 0xaddd97a4u, 0x4c151155u, 0xea4c8b06u, 0x888404b7u,
    0x26bb7e68u, 0xc4f2f819u, 0x632a71cau, 0x0161eb7bu, 0x9f99652cu, 0x3dd0deddu, 0xdc08588eu, 0x7a3fd23fu,
    0x18774bf0u, 0xb6aec5a1u, 0x54e63f52u, 0xf31db903u, 0x915532b4u, 0x2f8cac65u, 0xcdc42616u, 0x6bfb9fc7u,
    0x0a331978u, 0xa86a9329u, 0x46a20cdau, 0xe4d9868bu, 0x8311003cu, 0x214879edu, 0xbf7ff39eu, 0x5db76d4fu,
    0xfbeee700u, 0x9a2660b1u, 0x385dda62u, 0xd6955413u, 0x74cccdc4u, 0x13044775u, 0xb13bc126u, 0x4f733ad7u,
    0xedaab488u, 0x8be22e39u, 0x2a19a7eau, 0xc851219bu, 0x66889b4cu, 0x04c014fdu, 0xa2f78eaeu, 0x412f085fu,
    0xdf668210u, 0x7d9dfbc1u, 0x1bd57572u, 0xba0cef23u, 0x584468d4u, 0xf67be285u, 0x94b35c36u, 0x32ead5e7u,
    0xd1224f98u, 0x6f59c949u, 0x0d9142fau, 0xabc8bcabu, 0x4a00365cu, 0xe837b00du, 0x866f29beu, 0x24a6a36fu,
    0xc2de1d20u, 0x611596d1u, 0xff4d1082u, 0x9d848a33u, 0x3bbc03e4u, 0xd9f37d95u, 0x782af746u, 0x166270f7u,
};

static const uint32_t bshim_044_tab5[96] = {
    0xe17b5d09u, 0x7fb2d6bau, 0x1dea506bu, 0xbc21ca1cu, 0x5a5943cdu, 0xf890bd7eu, 0x96c8372fu, 0x34ffb0e0u,
    0xd3372a91u, 0x716ea442u, 0x0fa61df3u, 0xaddd97a4u, 0x4c151155u, 0xea4c8b06u, 0x888404b7u, 0x26bb7e68u,
    0xc4f2f819u, 0x632a71cau, 0x0161eb7bu, 0x9f99652cu, 0x3dd0deddu, 0xdc08588eu, 0x7a3fd23fu, 0x18774bf0u,
    0xb6aec5a1u, 0x54e63f52u, 0xf31db903u, 0x915532b4u, 0x2f8cac65u, 0xcdc42616u, 0x6bfb9fc7u, 0x0a331978u,
    0xa86a9329u, 0x46a20cdau, 0xe4d9868bu, 0x8311003cu, 0x214879edu, 0xbf7ff39eu, 0x5db76d4fu, 0xfbeee700u,
    0x9a2660b1u, 0x385dda62u, 0xd6955413u, 0x74cccdc4u, 0x13044775u, 0xb13bc126u, 0x4f733ad7u, 0xedaab488u,
    0x8be22e39u, 0x2a19a7eau, 0xc851219bu, 0x66889b4cu, 0x04c014fdu, 0xa2f78eaeu, 0x412f085fu, 0xdf668210u,
    0x7d9dfbc1u, 0x1bd57572u, 0xba0cef23u, 0x584468d4u, 0xf67be285u, 0x94b35c36u, 0x32ead5e7u, 0xd1224f98u,
    0x6f59c949u, 0x0d9142fau, 0xabc8bcabu, 0x4a00365cu, 0xe837b00du, 0x866f29beu, 0x24a6a36fu, 0xc2de1d20u,
    0x611596d1u, 0xff4d1082u, 0x9d848a33u, 0x3bbc03e4u, 0xd9f37d95u, 0x782af746u, 0x166270f7u, 0xb499eaa8u,
    0x52d16459u, 0xf108de0au, 0x8f4057bbu, 0x2d77d16cu, 0xcbaf4b1du, 0x69e6c4ceu, 0x081e3e7fu, 0xa655b830u,
    0x448d31e1u, 0xe2c4ab92u, 0x80fc2543u, 0x1f339ef4u, 0xbd6b18a5u, 0x5ba29256u, 0xf9da0c07u, 0x981185b8u,
};

static const uint32_t bshim_044_tab6[96] = {
    0x632a71cau, 0x0161eb7bu, 0x9f99652cu, 0x3dd0deddu, 0xdc08588eu, 0x7a3fd23fu, 0x18774bf0u, 0xb6aec5a1u,
    0x54e63f52u, 0xf31db903u, 0x915532b4u, 0x2f8cac65u, 0xcdc42616u, 0x6bfb9fc7u, 0x0a331978u, 0xa86a9329u,
    0x46a20cdau, 0xe4d9868bu, 0x8311003cu, 0x214879edu, 0xbf7ff39eu, 0x5db76d4fu, 0xfbeee700u, 0x9a2660b1u,
    0x385dda62u, 0xd6955413u, 0x74cccdc4u, 0x13044775u, 0xb13bc126u, 0x4f733ad7u, 0xedaab488u, 0x8be22e39u,
    0x2a19a7eau, 0xc851219bu, 0x66889b4cu, 0x04c014fdu, 0xa2f78eaeu, 0x412f085fu, 0xdf668210u, 0x7d9dfbc1u,
    0x1bd57572u, 0xba0cef23u, 0x584468d4u, 0xf67be285u, 0x94b35c36u, 0x32ead5e7u, 0xd1224f98u, 0x6f59c949u,
    0x0d9142fau, 0xabc8bcabu, 0x4a00365cu, 0xe837b00du, 0x866f29beu, 0x24a6a36fu, 0xc2de1d20u, 0x611596d1u,
    0xff4d1082u, 0x9d848a33u, 0x3bbc03e4u, 0xd9f37d95u, 0x782af746u, 0x166270f7u, 0xb499eaa8u, 0x52d16459u,
    0xf108de0au, 0x8f4057bbu, 0x2d77d16cu, 0xcbaf4b1du, 0x69e6c4ceu, 0x081e3e7fu, 0xa655b830u, 0x448d31e1u,
    0xe2c4ab92u, 0x80fc2543u, 0x1f339ef4u, 0xbd6b18a5u, 0x5ba29256u, 0xf9da0c07u, 0x981185b8u, 0x3648ff69u,
    0xd480791au, 0x72b7f2cbu, 0x10ef6c7cu, 0xaf26e62du, 0x4d5e5fdeu, 0xeb95d98fu, 0x89cd5340u, 0x2804ccf1u,
    0xc63c46a2u, 0x6473c053u, 0x02ab3a04u, 0xa0e2b3b5u, 0x3f1a2d66u, 0xdd51a717u, 0x7b8920c8u, 0x19c09a79u,
};

static const uint32_t bshim_044_tab7[96] = {
    0xe4d9868bu, 0x8311003cu, 0x214879edu, 0xbf7ff39eu, 0x5db76d4fu, 0xfbeee700u, 0x9a2660b1u, 0x385dda62u,
    0xd6955413u, 0x74cccdc4u, 0x13044775u, 0xb13bc126u, 0x4f733ad7u, 0xedaab488u, 0x8be22e39u, 0x2a19a7eau,
    0xc851219bu, 0x66889b4cu, 0x04c014fdu, 0xa2f78eaeu, 0x412f085fu, 0xdf668210u, 0x7d9dfbc1u, 0x1bd57572u,
    0xba0cef23u, 0x584468d4u, 0xf67be285u, 0x94b35c36u, 0x32ead5e7u, 0xd1224f98u, 0x6f59c949u, 0x0d9142fau,
    0xabc8bcabu, 0x4a00365cu, 0xe837b00du, 0x866f29beu, 0x24a6a36fu, 0xc2de1d20u, 0x611596d1u, 0xff4d1082u,
    0x9d848a33u, 0x3bbc03e4u, 0xd9f37d95u, 0x782af746u, 0x166270f7u, 0xb499eaa8u, 0x52d16459u, 0xf108de0au,
    0x8f4057bbu, 0x2d77d16cu, 0xcbaf4b1du, 0x69e6c4ceu, 0x081e3e7fu, 0xa655b830u, 0x448d31e1u, 0xe2c4ab92u,
    0x80fc2543u, 0x1f339ef4u, 0xbd6b18a5u, 0x5ba29256u, 0xf9da0c07u, 0x981185b8u, 0x3648ff69u, 0xd480791au,
    0x72b7f2cbu, 0x10ef6c7cu, 0xaf26e62du, 0x4d5e5fdeu, 0xeb95d98fu, 0x89cd5340u, 0x2804ccf1u, 0xc63c46a2u,
    0x6473c053u, 0x02ab3a04u, 0xa0e2b3b5u, 0x3f1a2d66u, 0xdd51a717u, 0x7b8920c8u, 0x19c09a79u, 0xb7f8142au,
    0x562f8ddbu, 0xf467078cu, 0x929e813du, 0x30d5faeeu, 0xcf0d749fu, 0x6d44ee50u, 0x0b7c6801u, 0xa9b3e1b2u,
    0x47eb5b63u, 0xe622d514u, 0x845a4ec5u, 0x2291c876u, 0xc0c94227u, 0x5f00bbd8u, 0xfd383589u, 0x9b6faf3au,
};

struct bshim_044_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_044_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_044_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_044_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_044_reset(struct bshim_044_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00055114u;
    return 0;
}

