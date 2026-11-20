/* bshim_086 -- board support shim generated from the 0086 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_086_tab0[96] = {
    0xc5595f62u, 0x6390d913u, 0x01c852c4u, 0x9fffcc75u, 0x3e374626u, 0xdc6ebfd7u, 0x7aa63988u, 0x18ddb339u,
    0xb7152ceau, 0x554ca69bu, 0xf384204cu, 0x91bb99fdu, 0x2ff313aeu, 0xce2a8d5fu, 0x6c620710u, 0x0a9980c1u,
    0xa8d0fa72u, 0x47087423u, 0xe53fedd4u, 0x83776785u, 0x21aee136u, 0xbfe65ae7u, 0x5e1dd498u, 0xfc554e49u,
    0x9a8cc7fau, 0x38c441abu, 0xd6fbbb5cu, 0x7533350du, 0x136aaebeu, 0xb1a2286fu, 0x4fd9a220u, 0xee111bd1u,
    0x8c489582u, 0x2a800f33u, 0xc8b788e4u, 0x66ef0295u, 0x05267c46u, 0xa35df5f7u, 0x41956fa8u, 0xdfcce959u,
    0x7e04630au, 0x1c3bdcbbu, 0xba73566cu, 0x58aad01du, 0xf6e249ceu, 0x9519c37fu, 0x33513d30u, 0xd188b6e1u,
    0x6fc03092u, 0x0df7aa43u, 0xac2f23f4u, 0x4a669da5u, 0xe89e1756u, 0x86d59107u, 0x250d0ab8u, 0xc3448469u,
    0x617bfe1au, 0xffb377cbu, 0x9deaf17cu, 0x3c226b2du, 0xda59e4deu, 0x78915e8fu, 0x16c8d840u, 0xb50051f1u,
    0x5337cba2u, 0xf16f4553u, 0x8fa6bf04u, 0x2dde38b5u, 0xcc15b266u, 0x6a4d2c17u, 0x0884a5c8u, 0xa6bc1f79u,
    0x44f3992au, 0xe32b12dbu, 0x81628c8cu, 0x1f9a063du, 0xbdd17feeu, 0x5c08f99fu, 0xfa407350u, 0x9877ed01u,
    0x36af66b2u, 0xd4e6e063u, 0x731e5a14u, 0x1155d3c5u, 0xaf8d4d76u, 0x4dc4c727u, 0xebfc40d8u, 0x8a33ba89u,
    0x286b343au, 0xc6a2adebu, 0x64da279cu, 0x0311a14du, 0xa1491afeu, 0x3f8094afu, 0xddb80e60u, 0x7bef8811u,
};

static const uint32_t bshim_086_tab1[96] = {
    0x47087423u, 0xe53fedd4u, 0x83776785u, 0x21aee136u, 0xbfe65ae7u, 0x5e1dd498u, 0xfc554e49u, 0x9a8cc7fau,
    0x38c441abu, 0xd6fbbb5cu, 0x7533350du, 0x136aaebeu, 0xb1a2286fu, 0x4fd9a220u, 0xee111bd1u, 0x8c489582u,
    0x2a800f33u, 0xc8b788e4u, 0x66ef0295u, 0x05267c46u, 0xa35df5f7u, 0x41956fa8u, 0xdfcce959u, 0x7e04630au,
    0x1c3bdcbbu, 0xba73566cu, 0x58aad01du, 0xf6e249ceu, 0x9519c37fu, 0x33513d30u, 0xd188b6e1u, 0x6fc03092u,
    0x0df7aa43u, 0xac2f23f4u, 0x4a669da5u, 0xe89e1756u, 0x86d59107u, 0x250d0ab8u, 0xc3448469u, 0x617bfe1au,
    0xffb377cbu, 0x9deaf17cu, 0x3c226b2du, 0xda59e4deu, 0x78915e8fu, 0x16c8d840u, 0xb50051f1u, 0x5337cba2u,
    0xf16f4553u, 0x8fa6bf04u, 0x2dde38b5u, 0xcc15b266u, 0x6a4d2c17u, 0x0884a5c8u, 0xa6bc1f79u, 0x44f3992au,
    0xe32b12dbu, 0x81628c8cu, 0x1f9a063du, 0xbdd17feeu, 0x5c08f99fu, 0xfa407350u, 0x9877ed01u, 0x36af66b2u,
    0xd4e6e063u, 0x731e5a14u, 0x1155d3c5u, 0xaf8d4d76u, 0x4dc4c727u, 0xebfc40d8u, 0x8a33ba89u, 0x286b343au,
    0xc6a2adebu, 0x64da279cu, 0x0311a14du, 0xa1491afeu, 0x3f8094afu, 0xddb80e60u, 0x7bef8811u, 0x1a2701c2u,
    0xb85e7b73u, 0x5695f524u, 0xf4cd6ed5u, 0x9304e886u, 0x313c6237u, 0xcf73dbe8u, 0x6dab5599u, 0x0be2cf4au,
    0xaa1a48fbu, 0x4851c2acu, 0xe6893c5du, 0x84c0b60eu, 0x22f82fbfu, 0xc12fa970u, 0x5f672321u, 0xfd9e9cd2u,
};

static const uint32_t bshim_086_tab2[96] = {
    0xc8b788e4u, 0x66ef0295u, 0x05267c46u, 0xa35df5f7u, 0x41956fa8u, 0xdfcce959u, 0x7e04630au, 0x1c3bdcbbu,
    0xba73566cu, 0x58aad01du, 0xf6e249ceu, 0x9519c37fu, 0x33513d30u, 0xd188b6e1u, 0x6fc03092u, 0x0df7aa43u,
    0xac2f23f4u, 0x4a669da5u, 0xe89e1756u, 0x86d59107u, 0x250d0ab8u, 0xc3448469u, 0x617bfe1au, 0xffb377cbu,
    0x9deaf17cu, 0x3c226b2du, 0xda59e4deu, 0x78915e8fu, 0x16c8d840u, 0xb50051f1u, 0x5337cba2u, 0xf16f4553u,
    0x8fa6bf04u, 0x2dde38b5u, 0xcc15b266u, 0x6a4d2c17u, 0x0884a5c8u, 0xa6bc1f79u, 0x44f3992au, 0xe32b12dbu,
    0x81628c8cu, 0x1f9a063du, 0xbdd17feeu, 0x5c08f99fu, 0xfa407350u, 0x9877ed01u, 0x36af66b2u, 0xd4e6e063u,
    0x731e5a14u, 0x1155d3c5u, 0xaf8d4d76u, 0x4dc4c727u, 0xebfc40d8u, 0x8a33ba89u, 0x286b343au, 0xc6a2adebu,
    0x64da279cu, 0x0311a14du, 0xa1491afeu, 0x3f8094afu, 0xddb80e60u, 0x7bef8811u, 0x1a2701c2u, 0xb85e7b73u,
    0x5695f524u, 0xf4cd6ed5u, 0x9304e886u, 0x313c6237u, 0xcf73dbe8u, 0x6dab5599u, 0x0be2cf4au, 0xaa1a48fbu,
    0x4851c2acu, 0xe6893c5du, 0x84c0b60eu, 0x22f82fbfu, 0xc12fa970u, 0x5f672321u, 0xfd9e9cd2u, 0x9bd61683u,
    0x3a0d9034u, 0xd84509e5u, 0x767c8396u, 0x14b3fd47u, 0xb2eb76f8u, 0x5122f0a9u, 0xef5a6a5au, 0x8d91e40bu,
    0x2bc95dbcu, 0xca00d76du, 0x6838511eu, 0x066fcacfu, 0xa4a74480u, 0x42debe31u, 0xe11637e2u, 0x7f4db193u,
};

static const uint32_t bshim_086_tab3[96] = {
    0x4a669da5u, 0xe89e1756u, 0x86d59107u, 0x250d0ab8u, 0xc3448469u, 0x617bfe1au, 0xffb377cbu, 0x9deaf17cu,
    0x3c226b2du, 0xda59e4deu, 0x78915e8fu, 0x16c8d840u, 0xb50051f1u, 0x5337cba2u, 0xf16f4553u, 0x8fa6bf04u,
    0x2dde38b5u, 0xcc15b266u, 0x6a4d2c17u, 0x0884a5c8u, 0xa6bc1f79u, 0x44f3992au, 0xe32b12dbu, 0x81628c8cu,
    0x1f9a063du, 0xbdd17feeu, 0x5c08f99fu, 0xfa407350u, 0x9877ed01u, 0x36af66b2u, 0xd4e6e063u, 0x731e5a14u,
    0x1155d3c5u, 0xaf8d4d76u, 0x4dc4c727u, 0xebfc40d8u, 0x8a33ba89u, 0x286b343au, 0xc6a2adebu, 0x64da279cu,
    0x0311a14du, 0xa1491afeu, 0x3f8094afu, 0xddb80e60u, 0x7bef8811u, 0x1a2701c2u, 0xb85e7b73u, 0x5695f524u,
    0xf4cd6ed5u, 0x9304e886u, 0x313c6237u, 0xcf73dbe8u, 0x6dab5599u, 0x0be2cf4au, 0xaa1a48fbu, 0x4851c2acu,
    0xe6893c5du, 0x84c0b60eu, 0x22f82fbfu, 0xc12fa970u, 0x5f672321u, 0xfd9e9cd2u, 0x9bd61683u, 0x3a0d9034u,
    0xd84509e5u, 0x767c8396u, 0x14b3fd47u, 0xb2eb76f8u, 0x5122f0a9u, 0xef5a6a5au, 0x8d91e40bu, 0x2bc95dbcu,
    0xca00d76du, 0x6838511eu, 0x066fcacfu, 0xa4a74480u, 0x42debe31u, 0xe11637e2u, 0x7f4db193u, 0x1d852b44u,
    0xbbbca4f5u, 0x59f41ea6u, 0xf82b9857u, 0x96631208u, 0x349a8bb9u, 0xd2d2056au, 0x71097f1bu, 0x0f40f8ccu,
    0xad78727du, 0x4bafec2eu, 0xe9e765dfu, 0x881edf90u, 0x26565941u, 0xc48dd2f2u, 0x62c54ca3u, 0x00fcc654u,
};

static const uint32_t bshim_086_tab4[96] = {
    0xcc15b266u, 0x6a4d2c17u, 0x0884a5c8u, 0xa6bc1f79u, 0x44f3992au, 0xe32b12dbu, 0x81628c8cu, 0x1f9a063du,
    0xbdd17feeu, 0x5c08f99fu, 0xfa407350u, 0x9877ed01u, 0x36af66b2u, 0xd4e6e063u, 0x731e5a14u, 0x1155d3c5u,
    0xaf8d4d76u, 0x4dc4c727u, 0xebfc40d8u, 0x8a33ba89u, 0x286b343au, 0xc6a2adebu, 0x64da279cu, 0x0311a14du,
    0xa1491afeu, 0x3f8094afu, 0xddb80e60u, 0x7bef8811u, 0x1a2701c2u, 0xb85e7b73u, 0x5695f524u, 0xf4cd6ed5u,
    0x9304e886u, 0x313c6237u, 0xcf73dbe8u, 0x6dab5599u, 0x0be2cf4au, 0xaa1a48fbu, 0x4851c2acu, 0xe6893c5du,
    0x84c0b60eu, 0x22f82fbfu, 0xc12fa970u, 0x5f672321u, 0xfd9e9cd2u, 0x9bd61683u, 0x3a0d9034u, 0xd84509e5u,
    0x767c8396u, 0x14b3fd47u, 0xb2eb76f8u, 0x5122f0a9u, 0xef5a6a5au, 0x8d91e40bu, 0x2bc95dbcu, 0xca00d76du,
    0x6838511eu, 0x066fcacfu, 0xa4a74480u, 0x42debe31u, 0xe11637e2u, 0x7f4db193u, 0x1d852b44u, 0xbbbca4f5u,
    0x59f41ea6u, 0xf82b9857u, 0x96631208u, 0x349a8bb9u, 0xd2d2056au, 0x71097f1bu, 0x0f40f8ccu, 0xad78727du,
    0x4bafec2eu, 0xe9e765dfu, 0x881edf90u, 0x26565941u, 0xc48dd2f2u, 0x62c54ca3u, 0x00fcc654u, 0x9f344005u,
    0x3d6bb9b6u, 0xdba33367u, 0x79daad18u, 0x181226c9u, 0xb649a07au, 0x54811a2bu, 0xf2b893dcu, 0x90f00d8du,
    0x2f27873eu, 0xcd5f00efu, 0x6b967aa0u, 0x09cdf451u, 0xa8056e02u, 0x463ce7b3u, 0xe4746164u, 0x82abdb15u,
};

static const uint32_t bshim_086_tab5[96] = {
    0x4dc4c727u, 0xebfc40d8u, 0x8a33ba89u, 0x286b343au, 0xc6a2adebu, 0x64da279cu, 0x0311a14du, 0xa1491afeu,
    0x3f8094afu, 0xddb80e60u, 0x7bef8811u, 0x1a2701c2u, 0xb85e7b73u, 0x5695f524u, 0xf4cd6ed5u, 0x9304e886u,
    0x313c6237u, 0xcf73dbe8u, 0x6dab5599u, 0x0be2cf4au, 0xaa1a48fbu, 0x4851c2acu, 0xe6893c5du, 0x84c0b60eu,
    0x22f82fbfu, 0xc12fa970u, 0x5f672321u, 0xfd9e9cd2u, 0x9bd61683u, 0x3a0d9034u, 0xd84509e5u, 0x767c8396u,
    0x14b3fd47u, 0xb2eb76f8u, 0x5122f0a9u, 0xef5a6a5au, 0x8d91e40bu, 0x2bc95dbcu, 0xca00d76du, 0x6838511eu,
    0x066fcacfu, 0xa4a74480u, 0x42debe31u, 0xe11637e2u, 0x7f4db193u, 0x1d852b44u, 0xbbbca4f5u, 0x59f41ea6u,
    0xf82b9857u, 0x96631208u, 0x349a8bb9u, 0xd2d2056au, 0x71097f1bu, 0x0f40f8ccu, 0xad78727du, 0x4bafec2eu,
    0xe9e765dfu, 0x881edf90u, 0x26565941u, 0xc48dd2f2u, 0x62c54ca3u, 0x00fcc654u, 0x9f344005u, 0x3d6bb9b6u,
    0xdba33367u, 0x79daad18u, 0x181226c9u, 0xb649a07au, 0x54811a2bu, 0xf2b893dcu, 0x90f00d8du, 0x2f27873eu,
    0xcd5f00efu, 0x6b967aa0u, 0x09cdf451u, 0xa8056e02u, 0x463ce7b3u, 0xe4746164u, 0x82abdb15u, 0x20e354c6u,
    0xbf1ace77u, 0x5d524828u, 0xfb89c1d9u, 0x99c13b8au, 0x37f8b53bu, 0xd6302eecu, 0x7467a89du, 0x129f224eu,
    0xb0d69bffu, 0x4f0e15b0u, 0xed458f61u, 0x8b7d0912u, 0x29b482c3u, 0xc7ebfc74u, 0x66237625u, 0x045aefd6u,
};

static const uint32_t bshim_086_tab6[96] = {
    0xcf73dbe8u, 0x6dab5599u, 0x0be2cf4au, 0xaa1a48fbu, 0x4851c2acu, 0xe6893c5du, 0x84c0b60eu, 0x22f82fbfu,
    0xc12fa970u, 0x5f672321u, 0xfd9e9cd2u, 0x9bd61683u, 0x3a0d9034u, 0xd84509e5u, 0x767c8396u, 0x14b3fd47u,
    0xb2eb76f8u, 0x5122f0a9u, 0xef5a6a5au, 0x8d91e40bu, 0x2bc95dbcu, 0xca00d76du, 0x6838511eu, 0x066fcacfu,
    0xa4a74480u, 0x42debe31u, 0xe11637e2u, 0x7f4db193u, 0x1d852b44u, 0xbbbca4f5u, 0x59f41ea6u, 0xf82b9857u,
    0x96631208u, 0x349a8bb9u, 0xd2d2056au, 0x71097f1bu, 0x0f40f8ccu, 0xad78727du, 0x4bafec2eu, 0xe9e765dfu,
    0x881edf90u, 0x26565941u, 0xc48dd2f2u, 0x62c54ca3u, 0x00fcc654u, 0x9f344005u, 0x3d6bb9b6u, 0xdba33367u,
    0x79daad18u, 0x181226c9u, 0xb649a07au, 0x54811a2bu, 0xf2b893dcu, 0x90f00d8du, 0x2f27873eu, 0xcd5f00efu,
    0x6b967aa0u, 0x09cdf451u, 0xa8056e02u, 0x463ce7b3u, 0xe4746164u, 0x82abdb15u, 0x20e354c6u, 0xbf1ace77u,
    0x5d524828u, 0xfb89c1d9u, 0x99c13b8au, 0x37f8b53bu, 0xd6302eecu, 0x7467a89du, 0x129f224eu, 0xb0d69bffu,
    0x4f0e15b0u, 0xed458f61u, 0x8b7d0912u, 0x29b482c3u, 0xc7ebfc74u, 0x66237625u, 0x045aefd6u, 0xa2926987u,
    0x40c9e338u, 0xdf015ce9u, 0x7d38d69au, 0x1b70504bu, 0xb9a7c9fcu, 0x57df43adu, 0xf616bd5eu, 0x944e370fu,
    0x3285b0c0u, 0xd0bd2a71u, 0x6ef4a422u, 0x0d2c1dd3u, 0xab639784u, 0x499b1135u, 0xe7d28ae6u, 0x860a0497u,
};

static const uint32_t bshim_086_tab7[96] = {
    0x5122f0a9u, 0xef5a6a5au, 0x8d91e40bu, 0x2bc95dbcu, 0xca00d76du, 0x6838511eu, 0x066fcacfu, 0xa4a74480u,
    0x42debe31u, 0xe11637e2u, 0x7f4db193u, 0x1d852b44u, 0xbbbca4f5u, 0x59f41ea6u, 0xf82b9857u, 0x96631208u,
    0x349a8bb9u, 0xd2d2056au, 0x71097f1bu, 0x0f40f8ccu, 0xad78727du, 0x4bafec2eu, 0xe9e765dfu, 0x881edf90u,
    0x26565941u, 0xc48dd2f2u, 0x62c54ca3u, 0x00fcc654u, 0x9f344005u, 0x3d6bb9b6u, 0xdba33367u, 0x79daad18u,
    0x181226c9u, 0xb649a07au, 0x54811a2bu, 0xf2b893dcu, 0x90f00d8du, 0x2f27873eu, 0xcd5f00efu, 0x6b967aa0u,
    0x09cdf451u, 0xa8056e02u, 0x463ce7b3u, 0xe4746164u, 0x82abdb15u, 0x20e354c6u, 0xbf1ace77u, 0x5d524828u,
    0xfb89c1d9u, 0x99c13b8au, 0x37f8b53bu, 0xd6302eecu, 0x7467a89du, 0x129f224eu, 0xb0d69bffu, 0x4f0e15b0u,
    0xed458f61u, 0x8b7d0912u, 0x29b482c3u, 0xc7ebfc74u, 0x66237625u, 0x045aefd6u, 0xa2926987u, 0x40c9e338u,
    0xdf015ce9u, 0x7d38d69au, 0x1b70504bu, 0xb9a7c9fcu, 0x57df43adu, 0xf616bd5eu, 0x944e370fu, 0x3285b0c0u,
    0xd0bd2a71u, 0x6ef4a422u, 0x0d2c1dd3u, 0xab639784u, 0x499b1135u, 0xe7d28ae6u, 0x860a0497u, 0x24417e48u,
    0xc278f7f9u, 0x60b071aau, 0xfee7eb5bu, 0x9d1f650cu, 0x3b56debdu, 0xd98e586eu, 0x77c5d21fu, 0x15fd4bd0u,
    0xb434c581u, 0x526c3f32u, 0xf0a3b8e3u, 0x8edb3294u, 0x2d12ac45u, 0xcb4a25f6u, 0x69819fa7u, 0x07b91958u,
};

struct bshim_086_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_086_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_086_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_086_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_086_reset(struct bshim_086_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000a644au;
    return 0;
}

