/* bshim_138 -- board support shim generated from the 0138 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_138_tab0[96] = {
    0xd183813eu, 0x6fbafaefu, 0x0df274a0u, 0xac29ee51u, 0x4a616802u, 0xe898e1b3u, 0x86d05b64u, 0x2507d515u,
    0xc33f4ec6u, 0x6176c877u, 0xffae4228u, 0x9de5bbd9u, 0x3c1d358au, 0xda54af3bu, 0x788c28ecu, 0x16c3a29du,
    0xb4fb1c4eu, 0x533295ffu, 0xf16a0fb0u, 0x8fa18961u, 0x2dd90312u, 0xcc107cc3u, 0x6a47f674u, 0x087f7025u,
    0xa6b6e9d6u, 0x44ee6387u, 0xe325dd38u, 0x815d56e9u, 0x1f94d09au, 0xbdcc4a4bu, 0x5c03c3fcu, 0xfa3b3dadu,
    0x9872b75eu, 0x36aa310fu, 0xd4e1aac0u, 0x73192471u, 0x11509e22u, 0xaf8817d3u, 0x4dbf9184u, 0xebf70b35u,
    0x8a2e84e6u, 0x2865fe97u, 0xc69d7848u, 0x64d4f1f9u, 0x030c6baau, 0xa143e55bu, 0x3f7b5f0cu, 0xddb2d8bdu,
    0x7bea526eu, 0x1a21cc1fu, 0xb85945d0u, 0x5690bf81u, 0xf4c83932u, 0x92ffb2e3u, 0x31372c94u, 0xcf6ea645u,
    0x6da61ff6u, 0x0bdd99a7u, 0xaa151358u, 0x484c8d09u, 0xe68406bau, 0x84bb806bu, 0x22f2fa1cu, 0xc12a73cdu,
    0x5f61ed7eu, 0xfd99672fu, 0x9bd0e0e0u, 0x3a085a91u, 0xd83fd442u, 0x76774df3u, 0x14aec7a4u, 0xb2e64155u,
    0x511dbb06u, 0xef5534b7u, 0x8d8cae68u, 0x2bc42819u, 0xc9fba1cau, 0x68331b7bu, 0x066a952cu, 0xa4a20eddu,
    0x42d9888eu, 0xe111023fu, 0x7f487bf0u, 0x1d7ff5a1u, 0xbbb76f52u, 0x59eee903u, 0xf82662b4u, 0x965ddc65u,
    0x34955616u, 0xd2cccfc7u, 0x71044978u, 0x0f3bc329u, 0xad733cdau, 0x4baab68bu, 0xe9e2303cu, 0x8819a9edu,
};

static const uint32_t bshim_138_tab1[96] = {
    0x533295ffu, 0xf16a0fb0u, 0x8fa18961u, 0x2dd90312u, 0xcc107cc3u, 0x6a47f674u, 0x087f7025u, 0xa6b6e9d6u,
    0x44ee6387u, 0xe325dd38u, 0x815d56e9u, 0x1f94d09au, 0xbdcc4a4bu, 0x5c03c3fcu, 0xfa3b3dadu, 0x9872b75eu,
    0x36aa310fu, 0xd4e1aac0u, 0x73192471u, 0x11509e22u, 0xaf8817d3u, 0x4dbf9184u, 0xebf70b35u, 0x8a2e84e6u,
    0x2865fe97u, 0xc69d7848u, 0x64d4f1f9u, 0x030c6baau, 0xa143e55bu, 0x3f7b5f0cu, 0xddb2d8bdu, 0x7bea526eu,
    0x1a21cc1fu, 0xb85945d0u, 0x5690bf81u, 0xf4c83932u, 0x92ffb2e3u, 0x31372c94u, 0xcf6ea645u, 0x6da61ff6u,
    0x0bdd99a7u, 0xaa151358u, 0x484c8d09u, 0xe68406bau, 0x84bb806bu, 0x22f2fa1cu, 0xc12a73cdu, 0x5f61ed7eu,
    0xfd99672fu, 0x9bd0e0e0u, 0x3a085a91u, 0xd83fd442u, 0x76774df3u, 0x14aec7a4u, 0xb2e64155u, 0x511dbb06u,
    0xef5534b7u, 0x8d8cae68u, 0x2bc42819u, 0xc9fba1cau, 0x68331b7bu, 0x066a952cu, 0xa4a20eddu, 0x42d9888eu,
    0xe111023fu, 0x7f487bf0u, 0x1d7ff5a1u, 0xbbb76f52u, 0x59eee903u, 0xf82662b4u, 0x965ddc65u, 0x34955616u,
    0xd2cccfc7u, 0x71044978u, 0x0f3bc329u, 0xad733cdau, 0x4baab68bu, 0xe9e2303cu, 0x8819a9edu, 0x2651239eu,
    0xc4889d4fu, 0x62c01700u, 0x00f790b1u, 0x9f2f0a62u, 0x3d668413u, 0xdb9dfdc4u, 0x79d57775u, 0x180cf126u,
    0xb6446ad7u, 0x547be488u, 0xf2b35e39u, 0x90ead7eau, 0x2f22519bu, 0xcd59cb4cu, 0x6b9144fdu, 0x09c8beaeu,
};

static const uint32_t bshim_138_tab2[96] = {
    0xd4e1aac0u, 0x73192471u, 0x11509e22u, 0xaf8817d3u, 0x4dbf9184u, 0xebf70b35u, 0x8a2e84e6u, 0x2865fe97u,
    0xc69d7848u, 0x64d4f1f9u, 0x030c6baau, 0xa143e55bu, 0x3f7b5f0cu, 0xddb2d8bdu, 0x7bea526eu, 0x1a21cc1fu,
    0xb85945d0u, 0x5690bf81u, 0xf4c83932u, 0x92ffb2e3u, 0x31372c94u, 0xcf6ea645u, 0x6da61ff6u, 0x0bdd99a7u,
    0xaa151358u, 0x484c8d09u, 0xe68406bau, 0x84bb806bu, 0x22f2fa1cu, 0xc12a73cdu, 0x5f61ed7eu, 0xfd99672fu,
    0x9bd0e0e0u, 0x3a085a91u, 0xd83fd442u, 0x76774df3u, 0x14aec7a4u, 0xb2e64155u, 0x511dbb06u, 0xef5534b7u,
    0x8d8cae68u, 0x2bc42819u, 0xc9fba1cau, 0x68331b7bu, 0x066a952cu, 0xa4a20eddu, 0x42d9888eu, 0xe111023fu,
    0x7f487bf0u, 0x1d7ff5a1u, 0xbbb76f52u, 0x59eee903u, 0xf82662b4u, 0x965ddc65u, 0x34955616u, 0xd2cccfc7u,
    0x71044978u, 0x0f3bc329u, 0xad733cdau, 0x4baab68bu, 0xe9e2303cu, 0x8819a9edu, 0x2651239eu, 0xc4889d4fu,
    0x62c01700u, 0x00f790b1u, 0x9f2f0a62u, 0x3d668413u, 0xdb9dfdc4u, 0x79d57775u, 0x180cf126u, 0xb6446ad7u,
    0x547be488u, 0xf2b35e39u, 0x90ead7eau, 0x2f22519bu, 0xcd59cb4cu, 0x6b9144fdu, 0x09c8beaeu, 0xa800385fu,
    0x4637b210u, 0xe46f2bc1u, 0x82a6a572u, 0x20de1f23u, 0xbf1598d4u, 0x5d4d1285u, 0xfb848c36u, 0x99bc05e7u,
    0x37f37f98u, 0xd62af949u, 0x746272fau, 0x1299ecabu, 0xb0d1665cu, 0x4f08e00du, 0xed4059beu, 0x8b77d36fu,
};

static const uint32_t bshim_138_tab3[96] = {
    0x5690bf81u, 0xf4c83932u, 0x92ffb2e3u, 0x31372c94u, 0xcf6ea645u, 0x6da61ff6u, 0x0bdd99a7u, 0xaa151358u,
    0x484c8d09u, 0xe68406bau, 0x84bb806bu, 0x22f2fa1cu, 0xc12a73cdu, 0x5f61ed7eu, 0xfd99672fu, 0x9bd0e0e0u,
    0x3a085a91u, 0xd83fd442u, 0x76774df3u, 0x14aec7a4u, 0xb2e64155u, 0x511dbb06u, 0xef5534b7u, 0x8d8cae68u,
    0x2bc42819u, 0xc9fba1cau, 0x68331b7bu, 0x066a952cu, 0xa4a20eddu, 0x42d9888eu, 0xe111023fu, 0x7f487bf0u,
    0x1d7ff5a1u, 0xbbb76f52u, 0x59eee903u, 0xf82662b4u, 0x965ddc65u, 0x34955616u, 0xd2cccfc7u, 0x71044978u,
    0x0f3bc329u, 0xad733cdau, 0x4baab68bu, 0xe9e2303cu, 0x8819a9edu, 0x2651239eu, 0xc4889d4fu, 0x62c01700u,
    0x00f790b1u, 0x9f2f0a62u, 0x3d668413u, 0xdb9dfdc4u, 0x79d57775u, 0x180cf126u, 0xb6446ad7u, 0x547be488u,
    0xf2b35e39u, 0x90ead7eau, 0x2f22519bu, 0xcd59cb4cu, 0x6b9144fdu, 0x09c8beaeu, 0xa800385fu, 0x4637b210u,
    0xe46f2bc1u, 0x82a6a572u, 0x20de1f23u, 0xbf1598d4u, 0x5d4d1285u, 0xfb848c36u, 0x99bc05e7u, 0x37f37f98u,
    0xd62af949u, 0x746272fau, 0x1299ecabu, 0xb0d1665cu, 0x4f08e00du, 0xed4059beu, 0x8b77d36fu, 0x29af4d20u,
    0xc7e6c6d1u, 0x661e4082u, 0x0455ba33u, 0xa28d33e4u, 0x40c4ad95u, 0xdefc2746u, 0x7d33a0f7u, 0x1b6b1aa8u,
    0xb9a29459u, 0x57da0e0au, 0xf61187bbu, 0x9449016cu, 0x32807b1du, 0xd0b7f4ceu, 0x6eef6e7fu, 0x0d26e830u,
};

static const uint32_t bshim_138_tab4[96] = {
    0xd83fd442u, 0x76774df3u, 0x14aec7a4u, 0xb2e64155u, 0x511dbb06u, 0xef5534b7u, 0x8d8cae68u, 0x2bc42819u,
    0xc9fba1cau, 0x68331b7bu, 0x066a952cu, 0xa4a20eddu, 0x42d9888eu, 0xe111023fu, 0x7f487bf0u, 0x1d7ff5a1u,
    0xbbb76f52u, 0x59eee903u, 0xf82662b4u, 0x965ddc65u, 0x34955616u, 0xd2cccfc7u, 0x71044978u, 0x0f3bc329u,
    0xad733cdau, 0x4baab68bu, 0xe9e2303cu, 0x8819a9edu, 0x2651239eu, 0xc4889d4fu, 0x62c01700u, 0x00f790b1u,
    0x9f2f0a62u, 0x3d668413u, 0xdb9dfdc4u, 0x79d57775u, 0x180cf126u, 0xb6446ad7u, 0x547be488u, 0xf2b35e39u,
    0x90ead7eau, 0x2f22519bu, 0xcd59cb4cu, 0x6b9144fdu, 0x09c8beaeu, 0xa800385fu, 0x4637b210u, 0xe46f2bc1u,
    0x82a6a572u, 0x20de1f23u, 0xbf1598d4u, 0x5d4d1285u, 0xfb848c36u, 0x99bc05e7u, 0x37f37f98u, 0xd62af949u,
    0x746272fau, 0x1299ecabu, 0xb0d1665cu, 0x4f08e00du, 0xed4059beu, 0x8b77d36fu, 0x29af4d20u, 0xc7e6c6d1u,
    0x661e4082u, 0x0455ba33u, 0xa28d33e4u, 0x40c4ad95u, 0xdefc2746u, 0x7d33a0f7u, 0x1b6b1aa8u, 0xb9a29459u,
    0x57da0e0au, 0xf61187bbu, 0x9449016cu, 0x32807b1du, 0xd0b7f4ceu, 0x6eef6e7fu, 0x0d26e830u, 0xab5e61e1u,
    0x4995db92u, 0xe7cd5543u, 0x8604cef4u, 0x243c48a5u, 0xc273c256u, 0x60ab3c07u, 0xfee2b5b8u, 0x9d1a2f69u,
    0x3b51a91au, 0xd98922cbu, 0x77c09c7cu, 0x15f8162du, 0xb42f8fdeu, 0x5267098fu, 0xf09e8340u, 0x8ed5fcf1u,
};

static const uint32_t bshim_138_tab5[96] = {
    0x59eee903u, 0xf82662b4u, 0x965ddc65u, 0x34955616u, 0xd2cccfc7u, 0x71044978u, 0x0f3bc329u, 0xad733cdau,
    0x4baab68bu, 0xe9e2303cu, 0x8819a9edu, 0x2651239eu, 0xc4889d4fu, 0x62c01700u, 0x00f790b1u, 0x9f2f0a62u,
    0x3d668413u, 0xdb9dfdc4u, 0x79d57775u, 0x180cf126u, 0xb6446ad7u, 0x547be488u, 0xf2b35e39u, 0x90ead7eau,
    0x2f22519bu, 0xcd59cb4cu, 0x6b9144fdu, 0x09c8beaeu, 0xa800385fu, 0x4637b210u, 0xe46f2bc1u, 0x82a6a572u,
    0x20de1f23u, 0xbf1598d4u, 0x5d4d1285u, 0xfb848c36u, 0x99bc05e7u, 0x37f37f98u, 0xd62af949u, 0x746272fau,
    0x1299ecabu, 0xb0d1665cu, 0x4f08e00du, 0xed4059beu, 0x8b77d36fu, 0x29af4d20u, 0xc7e6c6d1u, 0x661e4082u,
    0x0455ba33u, 0xa28d33e4u, 0x40c4ad95u, 0xdefc2746u, 0x7d33a0f7u, 0x1b6b1aa8u, 0xb9a29459u, 0x57da0e0au,
    0xf61187bbu, 0x9449016cu, 0x32807b1du, 0xd0b7f4ceu, 0x6eef6e7fu, 0x0d26e830u, 0xab5e61e1u, 0x4995db92u,
    0xe7cd5543u, 0x8604cef4u, 0x243c48a5u, 0xc273c256u, 0x60ab3c07u, 0xfee2b5b8u, 0x9d1a2f69u, 0x3b51a91au,
    0xd98922cbu, 0x77c09c7cu, 0x15f8162du, 0xb42f8fdeu, 0x5267098fu, 0xf09e8340u, 0x8ed5fcf1u, 0x2d0d76a2u,
    0xcb44f053u, 0x697c6a04u, 0x07b3e3b5u, 0xa5eb5d66u, 0x4422d717u, 0xe25a50c8u, 0x8091ca79u, 0x1ec9442au,
    0xbd00bddbu, 0x5b38378cu, 0xf96fb13du, 0x97a72aeeu, 0x35dea49fu, 0xd4161e50u, 0x724d9801u, 0x108511b2u,
};

static const uint32_t bshim_138_tab6[96] = {
    0xdb9dfdc4u, 0x79d57775u, 0x180cf126u, 0xb6446ad7u, 0x547be488u, 0xf2b35e39u, 0x90ead7eau, 0x2f22519bu,
    0xcd59cb4cu, 0x6b9144fdu, 0x09c8beaeu, 0xa800385fu, 0x4637b210u, 0xe46f2bc1u, 0x82a6a572u, 0x20de1f23u,
    0xbf1598d4u, 0x5d4d1285u, 0xfb848c36u, 0x99bc05e7u, 0x37f37f98u, 0xd62af949u, 0x746272fau, 0x1299ecabu,
    0xb0d1665cu, 0x4f08e00du, 0xed4059beu, 0x8b77d36fu, 0x29af4d20u, 0xc7e6c6d1u, 0x661e4082u, 0x0455ba33u,
    0xa28d33e4u, 0x40c4ad95u, 0xdefc2746u, 0x7d33a0f7u, 0x1b6b1aa8u, 0xb9a29459u, 0x57da0e0au, 0xf61187bbu,
    0x9449016cu, 0x32807b1du, 0xd0b7f4ceu, 0x6eef6e7fu, 0x0d26e830u, 0xab5e61e1u, 0x4995db92u, 0xe7cd5543u,
    0x8604cef4u, 0x243c48a5u, 0xc273c256u, 0x60ab3c07u, 0xfee2b5b8u, 0x9d1a2f69u, 0x3b51a91au, 0xd98922cbu,
    0x77c09c7cu, 0x15f8162du, 0xb42f8fdeu, 0x5267098fu, 0xf09e8340u, 0x8ed5fcf1u, 0x2d0d76a2u, 0xcb44f053u,
    0x697c6a04u, 0x07b3e3b5u, 0xa5eb5d66u, 0x4422d717u, 0xe25a50c8u, 0x8091ca79u, 0x1ec9442au, 0xbd00bddbu,
    0x5b38378cu, 0xf96fb13du, 0x97a72aeeu, 0x35dea49fu, 0xd4161e50u, 0x724d9801u, 0x108511b2u, 0xaebc8b63u,
    0x4cf40514u, 0xeb2b7ec5u, 0x8962f876u, 0x279a7227u, 0xc5d1ebd8u, 0x64096589u, 0x0240df3au, 0xa07858ebu,
    0x3eafd29cu, 0xdce74c4du, 0x7b1ec5feu, 0x19563fafu, 0xb78db960u, 0x55c53311u, 0xf3fcacc2u, 0x92342673u,
};

static const uint32_t bshim_138_tab7[96] = {
    0x5d4d1285u, 0xfb848c36u, 0x99bc05e7u, 0x37f37f98u, 0xd62af949u, 0x746272fau, 0x1299ecabu, 0xb0d1665cu,
    0x4f08e00du, 0xed4059beu, 0x8b77d36fu, 0x29af4d20u, 0xc7e6c6d1u, 0x661e4082u, 0x0455ba33u, 0xa28d33e4u,
    0x40c4ad95u, 0xdefc2746u, 0x7d33a0f7u, 0x1b6b1aa8u, 0xb9a29459u, 0x57da0e0au, 0xf61187bbu, 0x9449016cu,
    0x32807b1du, 0xd0b7f4ceu, 0x6eef6e7fu, 0x0d26e830u, 0xab5e61e1u, 0x4995db92u, 0xe7cd5543u, 0x8604cef4u,
    0x243c48a5u, 0xc273c256u, 0x60ab3c07u, 0xfee2b5b8u, 0x9d1a2f69u, 0x3b51a91au, 0xd98922cbu, 0x77c09c7cu,
    0x15f8162du, 0xb42f8fdeu, 0x5267098fu, 0xf09e8340u, 0x8ed5fcf1u, 0x2d0d76a2u, 0xcb44f053u, 0x697c6a04u,
    0x07b3e3b5u, 0xa5eb5d66u, 0x4422d717u, 0xe25a50c8u, 0x8091ca79u, 0x1ec9442au, 0xbd00bddbu, 0x5b38378cu,
    0xf96fb13du, 0x97a72aeeu, 0x35dea49fu, 0xd4161e50u, 0x724d9801u, 0x108511b2u, 0xaebc8b63u, 0x4cf40514u,
    0xeb2b7ec5u, 0x8962f876u, 0x279a7227u, 0xc5d1ebd8u, 0x64096589u, 0x0240df3au, 0xa07858ebu, 0x3eafd29cu,
    0xdce74c4du, 0x7b1ec5feu, 0x19563fafu, 0xb78db960u, 0x55c53311u, 0xf3fcacc2u, 0x92342673u, 0x306ba024u,
    0xcea319d5u, 0x6cda9386u, 0x0b120d37u, 0xa94986e8u, 0x47810099u, 0xe5b87a4au, 0x83eff3fbu, 0x22276dacu,
    0xc05ee75du, 0x5e96610eu, 0xfccddabfu, 0x9b055470u, 0x393cce21u, 0xd77447d2u, 0x75abc183u, 0x13e33b34u,
};

struct bshim_138_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_138_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_138_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_138_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_138_reset(struct bshim_138_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0010acd6u;
    return 0;
}

