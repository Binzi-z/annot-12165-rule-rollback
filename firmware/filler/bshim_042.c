/* bshim_042 -- board support shim generated from the 0042 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_042_tab0[96] = {
    0x6c496a1eu, 0x0a80e3cfu, 0xa8b85d80u, 0x46efd731u, 0xe52750e2u, 0x835eca93u, 0x21964444u, 0xbfcdbdf5u,
    0x5e0537a6u, 0xfc3cb157u, 0x9a742b08u, 0x38aba4b9u, 0xd6e31e6au, 0x751a981bu, 0x135211ccu, 0xb1898b7du,
    0x4fc1052eu, 0xedf87edfu, 0x8c2ff890u, 0x2a677241u, 0xc89eebf2u, 0x66d665a3u, 0x050ddf54u, 0xa3455905u,
    0x417cd2b6u, 0xdfb44c67u, 0x7debc618u, 0x1c233fc9u, 0xba5ab97au, 0x5892332bu, 0xf6c9acdcu, 0x9501268du,
    0x3338a03eu, 0xd17019efu, 0x6fa793a0u, 0x0ddf0d51u, 0xac168702u, 0x4a4e00b3u, 0xe8857a64u, 0x86bcf415u,
    0x24f46dc6u, 0xc32be777u, 0x61636128u, 0xff9adad9u, 0x9dd2548au, 0x3c09ce3bu, 0xda4147ecu, 0x7878c19du,
    0x16b03b4eu, 0xb4e7b4ffu, 0x531f2eb0u, 0xf156a861u, 0x8f8e2212u, 0x2dc59bc3u, 0xcbfd1574u, 0x6a348f25u,
    0x086c08d6u, 0xa6a38287u, 0x44dafc38u, 0xe31275e9u, 0x8149ef9au, 0x1f81694bu, 0xbdb8e2fcu, 0x5bf05cadu,
    0xfa27d65eu, 0x985f500fu, 0x3696c9c0u, 0xd4ce4371u, 0x7305bd22u, 0x113d36d3u, 0xaf74b084u, 0x4dac2a35u,
    0xebe3a3e6u, 0x8a1b1d97u, 0x28529748u, 0xc68a10f9u, 0x64c18aaau, 0x02f9045bu, 0xa1307e0cu, 0x3f67f7bdu,
    0xdd9f716eu, 0x7bd6eb1fu, 0x1a0e64d0u, 0xb845de81u, 0x567d5832u, 0xf4b4d1e3u, 0x92ec4b94u, 0x3123c545u,
    0xcf5b3ef6u, 0x6d92b8a7u, 0x0bca3258u, 0xaa01ac09u, 0x483925bau, 0xe6709f6bu, 0x84a8191cu, 0x22df92cdu,
};

static const uint32_t bshim_042_tab1[96] = {
    0xedf87edfu, 0x8c2ff890u, 0x2a677241u, 0xc89eebf2u, 0x66d665a3u, 0x050ddf54u, 0xa3455905u, 0x417cd2b6u,
    0xdfb44c67u, 0x7debc618u, 0x1c233fc9u, 0xba5ab97au, 0x5892332bu, 0xf6c9acdcu, 0x9501268du, 0x3338a03eu,
    0xd17019efu, 0x6fa793a0u, 0x0ddf0d51u, 0xac168702u, 0x4a4e00b3u, 0xe8857a64u, 0x86bcf415u, 0x24f46dc6u,
    0xc32be777u, 0x61636128u, 0xff9adad9u, 0x9dd2548au, 0x3c09ce3bu, 0xda4147ecu, 0x7878c19du, 0x16b03b4eu,
    0xb4e7b4ffu, 0x531f2eb0u, 0xf156a861u, 0x8f8e2212u, 0x2dc59bc3u, 0xcbfd1574u, 0x6a348f25u, 0x086c08d6u,
    0xa6a38287u, 0x44dafc38u, 0xe31275e9u, 0x8149ef9au, 0x1f81694bu, 0xbdb8e2fcu, 0x5bf05cadu, 0xfa27d65eu,
    0x985f500fu, 0x3696c9c0u, 0xd4ce4371u, 0x7305bd22u, 0x113d36d3u, 0xaf74b084u, 0x4dac2a35u, 0xebe3a3e6u,
    0x8a1b1d97u, 0x28529748u, 0xc68a10f9u, 0x64c18aaau, 0x02f9045bu, 0xa1307e0cu, 0x3f67f7bdu, 0xdd9f716eu,
    0x7bd6eb1fu, 0x1a0e64d0u, 0xb845de81u, 0x567d5832u, 0xf4b4d1e3u, 0x92ec4b94u, 0x3123c545u, 0xcf5b3ef6u,
    0x6d92b8a7u, 0x0bca3258u, 0xaa01ac09u, 0x483925bau, 0xe6709f6bu, 0x84a8191cu, 0x22df92cdu, 0xc1170c7eu,
    0x5f4e862fu, 0xfd85ffe0u, 0x9bbd7991u, 0x39f4f342u, 0xd82c6cf3u, 0x7663e6a4u, 0x149b6055u, 0xb2d2da06u,
    0x510a53b7u, 0xef41cd68u, 0x8d794719u, 0x2bb0c0cau, 0xc9e83a7bu, 0x681fb42cu, 0x06572dddu, 0xa48ea78eu,
};

static const uint32_t bshim_042_tab2[96] = {
    0x6fa793a0u, 0x0ddf0d51u, 0xac168702u, 0x4a4e00b3u, 0xe8857a64u, 0x86bcf415u, 0x24f46dc6u, 0xc32be777u,
    0x61636128u, 0xff9adad9u, 0x9dd2548au, 0x3c09ce3bu, 0xda4147ecu, 0x7878c19du, 0x16b03b4eu, 0xb4e7b4ffu,
    0x531f2eb0u, 0xf156a861u, 0x8f8e2212u, 0x2dc59bc3u, 0xcbfd1574u, 0x6a348f25u, 0x086c08d6u, 0xa6a38287u,
    0x44dafc38u, 0xe31275e9u, 0x8149ef9au, 0x1f81694bu, 0xbdb8e2fcu, 0x5bf05cadu, 0xfa27d65eu, 0x985f500fu,
    0x3696c9c0u, 0xd4ce4371u, 0x7305bd22u, 0x113d36d3u, 0xaf74b084u, 0x4dac2a35u, 0xebe3a3e6u, 0x8a1b1d97u,
    0x28529748u, 0xc68a10f9u, 0x64c18aaau, 0x02f9045bu, 0xa1307e0cu, 0x3f67f7bdu, 0xdd9f716eu, 0x7bd6eb1fu,
    0x1a0e64d0u, 0xb845de81u, 0x567d5832u, 0xf4b4d1e3u, 0x92ec4b94u, 0x3123c545u, 0xcf5b3ef6u, 0x6d92b8a7u,
    0x0bca3258u, 0xaa01ac09u, 0x483925bau, 0xe6709f6bu, 0x84a8191cu, 0x22df92cdu, 0xc1170c7eu, 0x5f4e862fu,
    0xfd85ffe0u, 0x9bbd7991u, 0x39f4f342u, 0xd82c6cf3u, 0x7663e6a4u, 0x149b6055u, 0xb2d2da06u, 0x510a53b7u,
    0xef41cd68u, 0x8d794719u, 0x2bb0c0cau, 0xc9e83a7bu, 0x681fb42cu, 0x06572dddu, 0xa48ea78eu, 0x42c6213fu,
    0xe0fd9af0u, 0x7f3514a1u, 0x1d6c8e52u, 0xbba40803u, 0x59db81b4u, 0xf812fb65u, 0x964a7516u, 0x3481eec7u,
    0xd2b96878u, 0x70f0e229u, 0x0f285bdau, 0xad5fd58bu, 0x4b974f3cu, 0xe9cec8edu, 0x8806429eu, 0x263dbc4fu,
};

static const uint32_t bshim_042_tab3[96] = {
    0xf156a861u, 0x8f8e2212u, 0x2dc59bc3u, 0xcbfd1574u, 0x6a348f25u, 0x086c08d6u, 0xa6a38287u, 0x44dafc38u,
    0xe31275e9u, 0x8149ef9au, 0x1f81694bu, 0xbdb8e2fcu, 0x5bf05cadu, 0xfa27d65eu, 0x985f500fu, 0x3696c9c0u,
    0xd4ce4371u, 0x7305bd22u, 0x113d36d3u, 0xaf74b084u, 0x4dac2a35u, 0xebe3a3e6u, 0x8a1b1d97u, 0x28529748u,
    0xc68a10f9u, 0x64c18aaau, 0x02f9045bu, 0xa1307e0cu, 0x3f67f7bdu, 0xdd9f716eu, 0x7bd6eb1fu, 0x1a0e64d0u,
    0xb845de81u, 0x567d5832u, 0xf4b4d1e3u, 0x92ec4b94u, 0x3123c545u, 0xcf5b3ef6u, 0x6d92b8a7u, 0x0bca3258u,
    0xaa01ac09u, 0x483925bau, 0xe6709f6bu, 0x84a8191cu, 0x22df92cdu, 0xc1170c7eu, 0x5f4e862fu, 0xfd85ffe0u,
    0x9bbd7991u, 0x39f4f342u, 0xd82c6cf3u, 0x7663e6a4u, 0x149b6055u, 0xb2d2da06u, 0x510a53b7u, 0xef41cd68u,
    0x8d794719u, 0x2bb0c0cau, 0xc9e83a7bu, 0x681fb42cu, 0x06572dddu, 0xa48ea78eu, 0x42c6213fu, 0xe0fd9af0u,
    0x7f3514a1u, 0x1d6c8e52u, 0xbba40803u, 0x59db81b4u, 0xf812fb65u, 0x964a7516u, 0x3481eec7u, 0xd2b96878u,
    0x70f0e229u, 0x0f285bdau, 0xad5fd58bu, 0x4b974f3cu, 0xe9cec8edu, 0x8806429eu, 0x263dbc4fu, 0xc4753600u,
    0x62acafb1u, 0x00e42962u, 0x9f1ba313u, 0x3d531cc4u, 0xdb8a9675u, 0x79c21026u, 0x17f989d7u, 0xb6310388u,
    0x54687d39u, 0xf29ff6eau, 0x90d7709bu, 0x2f0eea4cu, 0xcd4663fdu, 0x6b7dddaeu, 0x09b5575fu, 0xa7ecd110u,
};

static const uint32_t bshim_042_tab4[96] = {
    0x7305bd22u, 0x113d36d3u, 0xaf74b084u, 0x4dac2a35u, 0xebe3a3e6u, 0x8a1b1d97u, 0x28529748u, 0xc68a10f9u,
    0x64c18aaau, 0x02f9045bu, 0xa1307e0cu, 0x3f67f7bdu, 0xdd9f716eu, 0x7bd6eb1fu, 0x1a0e64d0u, 0xb845de81u,
    0x567d5832u, 0xf4b4d1e3u, 0x92ec4b94u, 0x3123c545u, 0xcf5b3ef6u, 0x6d92b8a7u, 0x0bca3258u, 0xaa01ac09u,
    0x483925bau, 0xe6709f6bu, 0x84a8191cu, 0x22df92cdu, 0xc1170c7eu, 0x5f4e862fu, 0xfd85ffe0u, 0x9bbd7991u,
    0x39f4f342u, 0xd82c6cf3u, 0x7663e6a4u, 0x149b6055u, 0xb2d2da06u, 0x510a53b7u, 0xef41cd68u, 0x8d794719u,
    0x2bb0c0cau, 0xc9e83a7bu, 0x681fb42cu, 0x06572dddu, 0xa48ea78eu, 0x42c6213fu, 0xe0fd9af0u, 0x7f3514a1u,
    0x1d6c8e52u, 0xbba40803u, 0x59db81b4u, 0xf812fb65u, 0x964a7516u, 0x3481eec7u, 0xd2b96878u, 0x70f0e229u,
    0x0f285bdau, 0xad5fd58bu, 0x4b974f3cu, 0xe9cec8edu, 0x8806429eu, 0x263dbc4fu, 0xc4753600u, 0x62acafb1u,
    0x00e42962u, 0x9f1ba313u, 0x3d531cc4u, 0xdb8a9675u, 0x79c21026u, 0x17f989d7u, 0xb6310388u, 0x54687d39u,
    0xf29ff6eau, 0x90d7709bu, 0x2f0eea4cu, 0xcd4663fdu, 0x6b7dddaeu, 0x09b5575fu, 0xa7ecd110u, 0x46244ac1u,
    0xe45bc472u, 0x82933e23u, 0x20cab7d4u, 0xbf023185u, 0x5d39ab36u, 0xfb7124e7u, 0x99a89e98u, 0x37e01849u,
    0xd61791fau, 0x744f0babu, 0x1286855cu, 0xb0bdff0du, 0x4ef578beu, 0xed2cf26fu, 0x8b646c20u, 0x299be5d1u,
};

static const uint32_t bshim_042_tab5[96] = {
    0xf4b4d1e3u, 0x92ec4b94u, 0x3123c545u, 0xcf5b3ef6u, 0x6d92b8a7u, 0x0bca3258u, 0xaa01ac09u, 0x483925bau,
    0xe6709f6bu, 0x84a8191cu, 0x22df92cdu, 0xc1170c7eu, 0x5f4e862fu, 0xfd85ffe0u, 0x9bbd7991u, 0x39f4f342u,
    0xd82c6cf3u, 0x7663e6a4u, 0x149b6055u, 0xb2d2da06u, 0x510a53b7u, 0xef41cd68u, 0x8d794719u, 0x2bb0c0cau,
    0xc9e83a7bu, 0x681fb42cu, 0x06572dddu, 0xa48ea78eu, 0x42c6213fu, 0xe0fd9af0u, 0x7f3514a1u, 0x1d6c8e52u,
    0xbba40803u, 0x59db81b4u, 0xf812fb65u, 0x964a7516u, 0x3481eec7u, 0xd2b96878u, 0x70f0e229u, 0x0f285bdau,
    0xad5fd58bu, 0x4b974f3cu, 0xe9cec8edu, 0x8806429eu, 0x263dbc4fu, 0xc4753600u, 0x62acafb1u, 0x00e42962u,
    0x9f1ba313u, 0x3d531cc4u, 0xdb8a9675u, 0x79c21026u, 0x17f989d7u, 0xb6310388u, 0x54687d39u, 0xf29ff6eau,
    0x90d7709bu, 0x2f0eea4cu, 0xcd4663fdu, 0x6b7dddaeu, 0x09b5575fu, 0xa7ecd110u, 0x46244ac1u, 0xe45bc472u,
    0x82933e23u, 0x20cab7d4u, 0xbf023185u, 0x5d39ab36u, 0xfb7124e7u, 0x99a89e98u, 0x37e01849u, 0xd61791fau,
    0x744f0babu, 0x1286855cu, 0xb0bdff0du, 0x4ef578beu, 0xed2cf26fu, 0x8b646c20u, 0x299be5d1u, 0xc7d35f82u,
    0x660ad933u, 0x044252e4u, 0xa279cc95u, 0x40b14646u, 0xdee8bff7u, 0x7d2039a8u, 0x1b57b359u, 0xb98f2d0au,
    0x57c6a6bbu, 0xf5fe206cu, 0x94359a1du, 0x326d13ceu, 0xd0a48d7fu, 0x6edc0730u, 0x0d1380e1u, 0xab4afa92u,
};

static const uint32_t bshim_042_tab6[96] = {
    0x7663e6a4u, 0x149b6055u, 0xb2d2da06u, 0x510a53b7u, 0xef41cd68u, 0x8d794719u, 0x2bb0c0cau, 0xc9e83a7bu,
    0x681fb42cu, 0x06572dddu, 0xa48ea78eu, 0x42c6213fu, 0xe0fd9af0u, 0x7f3514a1u, 0x1d6c8e52u, 0xbba40803u,
    0x59db81b4u, 0xf812fb65u, 0x964a7516u, 0x3481eec7u, 0xd2b96878u, 0x70f0e229u, 0x0f285bdau, 0xad5fd58bu,
    0x4b974f3cu, 0xe9cec8edu, 0x8806429eu, 0x263dbc4fu, 0xc4753600u, 0x62acafb1u, 0x00e42962u, 0x9f1ba313u,
    0x3d531cc4u, 0xdb8a9675u, 0x79c21026u, 0x17f989d7u, 0xb6310388u, 0x54687d39u, 0xf29ff6eau, 0x90d7709bu,
    0x2f0eea4cu, 0xcd4663fdu, 0x6b7dddaeu, 0x09b5575fu, 0xa7ecd110u, 0x46244ac1u, 0xe45bc472u, 0x82933e23u,
    0x20cab7d4u, 0xbf023185u, 0x5d39ab36u, 0xfb7124e7u, 0x99a89e98u, 0x37e01849u, 0xd61791fau, 0x744f0babu,
    0x1286855cu, 0xb0bdff0du, 0x4ef578beu, 0xed2cf26fu, 0x8b646c20u, 0x299be5d1u, 0xc7d35f82u, 0x660ad933u,
    0x044252e4u, 0xa279cc95u, 0x40b14646u, 0xdee8bff7u, 0x7d2039a8u, 0x1b57b359u, 0xb98f2d0au, 0x57c6a6bbu,
    0xf5fe206cu, 0x94359a1du, 0x326d13ceu, 0xd0a48d7fu, 0x6edc0730u, 0x0d1380e1u, 0xab4afa92u, 0x49827443u,
    0xe7b9edf4u, 0x85f167a5u, 0x2428e156u, 0xc2605b07u, 0x6097d4b8u, 0xfecf4e69u, 0x9d06c81au, 0x3b3e41cbu,
    0xd975bb7cu, 0x77ad352du, 0x15e4aedeu, 0xb41c288fu, 0x5253a240u, 0xf08b1bf1u, 0x8ec295a2u, 0x2cfa0f53u,
};

static const uint32_t bshim_042_tab7[96] = {
    0xf812fb65u, 0x964a7516u, 0x3481eec7u, 0xd2b96878u, 0x70f0e229u, 0x0f285bdau, 0xad5fd58bu, 0x4b974f3cu,
    0xe9cec8edu, 0x8806429eu, 0x263dbc4fu, 0xc4753600u, 0x62acafb1u, 0x00e42962u, 0x9f1ba313u, 0x3d531cc4u,
    0xdb8a9675u, 0x79c21026u, 0x17f989d7u, 0xb6310388u, 0x54687d39u, 0xf29ff6eau, 0x90d7709bu, 0x2f0eea4cu,
    0xcd4663fdu, 0x6b7dddaeu, 0x09b5575fu, 0xa7ecd110u, 0x46244ac1u, 0xe45bc472u, 0x82933e23u, 0x20cab7d4u,
    0xbf023185u, 0x5d39ab36u, 0xfb7124e7u, 0x99a89e98u, 0x37e01849u, 0xd61791fau, 0x744f0babu, 0x1286855cu,
    0xb0bdff0du, 0x4ef578beu, 0xed2cf26fu, 0x8b646c20u, 0x299be5d1u, 0xc7d35f82u, 0x660ad933u, 0x044252e4u,
    0xa279cc95u, 0x40b14646u, 0xdee8bff7u, 0x7d2039a8u, 0x1b57b359u, 0xb98f2d0au, 0x57c6a6bbu, 0xf5fe206cu,
    0x94359a1du, 0x326d13ceu, 0xd0a48d7fu, 0x6edc0730u, 0x0d1380e1u, 0xab4afa92u, 0x49827443u, 0xe7b9edf4u,
    0x85f167a5u, 0x2428e156u, 0xc2605b07u, 0x6097d4b8u, 0xfecf4e69u, 0x9d06c81au, 0x3b3e41cbu, 0xd975bb7cu,
    0x77ad352du, 0x15e4aedeu, 0xb41c288fu, 0x5253a240u, 0xf08b1bf1u, 0x8ec295a2u, 0x2cfa0f53u, 0xcb318904u,
    0x696902b5u, 0x07a07c66u, 0xa5d7f617u, 0x440f6fc8u, 0xe246e979u, 0x807e632au, 0x1eb5dcdbu, 0xbced568cu,
    0x5b24d03du, 0xf95c49eeu, 0x9793c39fu, 0x35cb3d50u, 0xd402b701u, 0x723a30b2u, 0x1071aa63u, 0xaea92414u,
};

struct bshim_042_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_042_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_042_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_042_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_042_reset(struct bshim_042_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00051336u;
    return 0;
}

