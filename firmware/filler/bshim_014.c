/* bshim_014 -- board support shim generated from the 0014 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_014_tab0[96] = {
    0x796dce0au, 0x17a547bbu, 0xb5dcc16cu, 0x54143b1du, 0xf24bb4ceu, 0x90832e7fu, 0x2ebaa830u, 0xccf221e1u,
    0x6b299b92u, 0x09611543u, 0xa7988ef4u, 0x45d008a5u, 0xe4078256u, 0x823efc07u, 0x207675b8u, 0xbeadef69u,
    0x5ce5691au, 0xfb1ce2cbu, 0x99545c7cu, 0x378bd62du, 0xd5c34fdeu, 0x73fac98fu, 0x12324340u, 0xb069bcf1u,
    0x4ea136a2u, 0xecd8b053u, 0x8b102a04u, 0x2947a3b5u, 0xc77f1d66u, 0x65b69717u, 0x03ee10c8u, 0xa2258a79u,
    0x405d042au, 0xde947ddbu, 0x7ccbf78cu, 0x1b03713du, 0xb93aeaeeu, 0x5772649fu, 0xf5a9de50u, 0x93e15801u,
    0x3218d1b2u, 0xd0504b63u, 0x6e87c514u, 0x0cbf3ec5u, 0xaaf6b876u, 0x492e3227u, 0xe765abd8u, 0x859d2589u,
    0x23d49f3au, 0xc20c18ebu, 0x6043929cu, 0xfe7b0c4du, 0x9cb285feu, 0x3ae9ffafu, 0xd9217960u, 0x7758f311u,
    0x15906cc2u, 0xb3c7e673u, 0x51ff6024u, 0xf036d9d5u, 0x8e6e5386u, 0x2ca5cd37u, 0xcadd46e8u, 0x6914c099u,
    0x074c3a4au, 0xa583b3fbu, 0x43bb2dacu, 0xe1f2a75du, 0x802a210eu, 0x1e619abfu, 0xbc991470u, 0x5ad08e21u,
    0xf90807d2u, 0x973f8183u, 0x3576fb34u, 0xd3ae74e5u, 0x71e5ee96u, 0x101d6847u, 0xae54e1f8u, 0x4c8c5ba9u,
    0xeac3d55au, 0x88fb4f0bu, 0x2732c8bcu, 0xc56a426du, 0x63a1bc1eu, 0x01d935cfu, 0xa010af80u, 0x3e482931u,
    0xdc7fa2e2u, 0x7ab71c93u, 0x18ee9644u, 0xb7260ff5u, 0x555d89a6u, 0xf3950357u, 0x91cc7d08u, 0x3003f6b9u,
};

static const uint32_t bshim_014_tab1[96] = {
    0xfb1ce2cbu, 0x99545c7cu, 0x378bd62du, 0xd5c34fdeu, 0x73fac98fu, 0x12324340u, 0xb069bcf1u, 0x4ea136a2u,
    0xecd8b053u, 0x8b102a04u, 0x2947a3b5u, 0xc77f1d66u, 0x65b69717u, 0x03ee10c8u, 0xa2258a79u, 0x405d042au,
    0xde947ddbu, 0x7ccbf78cu, 0x1b03713du, 0xb93aeaeeu, 0x5772649fu, 0xf5a9de50u, 0x93e15801u, 0x3218d1b2u,
    0xd0504b63u, 0x6e87c514u, 0x0cbf3ec5u, 0xaaf6b876u, 0x492e3227u, 0xe765abd8u, 0x859d2589u, 0x23d49f3au,
    0xc20c18ebu, 0x6043929cu, 0xfe7b0c4du, 0x9cb285feu, 0x3ae9ffafu, 0xd9217960u, 0x7758f311u, 0x15906cc2u,
    0xb3c7e673u, 0x51ff6024u, 0xf036d9d5u, 0x8e6e5386u, 0x2ca5cd37u, 0xcadd46e8u, 0x6914c099u, 0x074c3a4au,
    0xa583b3fbu, 0x43bb2dacu, 0xe1f2a75du, 0x802a210eu, 0x1e619abfu, 0xbc991470u, 0x5ad08e21u, 0xf90807d2u,
    0x973f8183u, 0x3576fb34u, 0xd3ae74e5u, 0x71e5ee96u, 0x101d6847u, 0xae54e1f8u, 0x4c8c5ba9u, 0xeac3d55au,
    0x88fb4f0bu, 0x2732c8bcu, 0xc56a426du, 0x63a1bc1eu, 0x01d935cfu, 0xa010af80u, 0x3e482931u, 0xdc7fa2e2u,
    0x7ab71c93u, 0x18ee9644u, 0xb7260ff5u, 0x555d89a6u, 0xf3950357u, 0x91cc7d08u, 0x3003f6b9u, 0xce3b706au,
    0x6c72ea1bu, 0x0aaa63ccu, 0xa8e1dd7du, 0x4719572eu, 0xe550d0dfu, 0x83884a90u, 0x21bfc441u, 0xbff73df2u,
    0x5e2eb7a3u, 0xfc663154u, 0x9a9dab05u, 0x38d524b6u, 0xd70c9e67u, 0x75441818u, 0x137b91c9u, 0xb1b30b7au,
};

static const uint32_t bshim_014_tab2[96] = {
    0x7ccbf78cu, 0x1b03713du, 0xb93aeaeeu, 0x5772649fu, 0xf5a9de50u, 0x93e15801u, 0x3218d1b2u, 0xd0504b63u,
    0x6e87c514u, 0x0cbf3ec5u, 0xaaf6b876u, 0x492e3227u, 0xe765abd8u, 0x859d2589u, 0x23d49f3au, 0xc20c18ebu,
    0x6043929cu, 0xfe7b0c4du, 0x9cb285feu, 0x3ae9ffafu, 0xd9217960u, 0x7758f311u, 0x15906cc2u, 0xb3c7e673u,
    0x51ff6024u, 0xf036d9d5u, 0x8e6e5386u, 0x2ca5cd37u, 0xcadd46e8u, 0x6914c099u, 0x074c3a4au, 0xa583b3fbu,
    0x43bb2dacu, 0xe1f2a75du, 0x802a210eu, 0x1e619abfu, 0xbc991470u, 0x5ad08e21u, 0xf90807d2u, 0x973f8183u,
    0x3576fb34u, 0xd3ae74e5u, 0x71e5ee96u, 0x101d6847u, 0xae54e1f8u, 0x4c8c5ba9u, 0xeac3d55au, 0x88fb4f0bu,
    0x2732c8bcu, 0xc56a426du, 0x63a1bc1eu, 0x01d935cfu, 0xa010af80u, 0x3e482931u, 0xdc7fa2e2u, 0x7ab71c93u,
    0x18ee9644u, 0xb7260ff5u, 0x555d89a6u, 0xf3950357u, 0x91cc7d08u, 0x3003f6b9u, 0xce3b706au, 0x6c72ea1bu,
    0x0aaa63ccu, 0xa8e1dd7du, 0x4719572eu, 0xe550d0dfu, 0x83884a90u, 0x21bfc441u, 0xbff73df2u, 0x5e2eb7a3u,
    0xfc663154u, 0x9a9dab05u, 0x38d524b6u, 0xd70c9e67u, 0x75441818u, 0x137b91c9u, 0xb1b30b7au, 0x4fea852bu,
    0xee21fedcu, 0x8c59788du, 0x2a90f23eu, 0xc8c86befu, 0x66ffe5a0u, 0x05375f51u, 0xa36ed902u, 0x41a652b3u,
    0xdfddcc64u, 0x7e154615u, 0x1c4cbfc6u, 0xba843977u, 0x58bbb328u, 0xf6f32cd9u, 0x952aa68au, 0x3362203bu,
};

static const uint32_t bshim_014_tab3[96] = {
    0xfe7b0c4du, 0x9cb285feu, 0x3ae9ffafu, 0xd9217960u, 0x7758f311u, 0x15906cc2u, 0xb3c7e673u, 0x51ff6024u,
    0xf036d9d5u, 0x8e6e5386u, 0x2ca5cd37u, 0xcadd46e8u, 0x6914c099u, 0x074c3a4au, 0xa583b3fbu, 0x43bb2dacu,
    0xe1f2a75du, 0x802a210eu, 0x1e619abfu, 0xbc991470u, 0x5ad08e21u, 0xf90807d2u, 0x973f8183u, 0x3576fb34u,
    0xd3ae74e5u, 0x71e5ee96u, 0x101d6847u, 0xae54e1f8u, 0x4c8c5ba9u, 0xeac3d55au, 0x88fb4f0bu, 0x2732c8bcu,
    0xc56a426du, 0x63a1bc1eu, 0x01d935cfu, 0xa010af80u, 0x3e482931u, 0xdc7fa2e2u, 0x7ab71c93u, 0x18ee9644u,
    0xb7260ff5u, 0x555d89a6u, 0xf3950357u, 0x91cc7d08u, 0x3003f6b9u, 0xce3b706au, 0x6c72ea1bu, 0x0aaa63ccu,
    0xa8e1dd7du, 0x4719572eu, 0xe550d0dfu, 0x83884a90u, 0x21bfc441u, 0xbff73df2u, 0x5e2eb7a3u, 0xfc663154u,
    0x9a9dab05u, 0x38d524b6u, 0xd70c9e67u, 0x75441818u, 0x137b91c9u, 0xb1b30b7au, 0x4fea852bu, 0xee21fedcu,
    0x8c59788du, 0x2a90f23eu, 0xc8c86befu, 0x66ffe5a0u, 0x05375f51u, 0xa36ed902u, 0x41a652b3u, 0xdfddcc64u,
    0x7e154615u, 0x1c4cbfc6u, 0xba843977u, 0x58bbb328u, 0xf6f32cd9u, 0x952aa68au, 0x3362203bu, 0xd19999ecu,
    0x6fd1139du, 0x0e088d4eu, 0xac4006ffu, 0x4a7780b0u, 0xe8aefa61u, 0x86e67412u, 0x251dedc3u, 0xc3556774u,
    0x618ce125u, 0xffc45ad6u, 0x9dfbd487u, 0x3c334e38u, 0xda6ac7e9u, 0x78a2419au, 0x16d9bb4bu, 0xb51134fcu,
};

static const uint32_t bshim_014_tab4[96] = {
    0x802a210eu, 0x1e619abfu, 0xbc991470u, 0x5ad08e21u, 0xf90807d2u, 0x973f8183u, 0x3576fb34u, 0xd3ae74e5u,
    0x71e5ee96u, 0x101d6847u, 0xae54e1f8u, 0x4c8c5ba9u, 0xeac3d55au, 0x88fb4f0bu, 0x2732c8bcu, 0xc56a426du,
    0x63a1bc1eu, 0x01d935cfu, 0xa010af80u, 0x3e482931u, 0xdc7fa2e2u, 0x7ab71c93u, 0x18ee9644u, 0xb7260ff5u,
    0x555d89a6u, 0xf3950357u, 0x91cc7d08u, 0x3003f6b9u, 0xce3b706au, 0x6c72ea1bu, 0x0aaa63ccu, 0xa8e1dd7du,
    0x4719572eu, 0xe550d0dfu, 0x83884a90u, 0x21bfc441u, 0xbff73df2u, 0x5e2eb7a3u, 0xfc663154u, 0x9a9dab05u,
    0x38d524b6u, 0xd70c9e67u, 0x75441818u, 0x137b91c9u, 0xb1b30b7au, 0x4fea852bu, 0xee21fedcu, 0x8c59788du,
    0x2a90f23eu, 0xc8c86befu, 0x66ffe5a0u, 0x05375f51u, 0xa36ed902u, 0x41a652b3u, 0xdfddcc64u, 0x7e154615u,
    0x1c4cbfc6u, 0xba843977u, 0x58bbb328u, 0xf6f32cd9u, 0x952aa68au, 0x3362203bu, 0xd19999ecu, 0x6fd1139du,
    0x0e088d4eu, 0xac4006ffu, 0x4a7780b0u, 0xe8aefa61u, 0x86e67412u, 0x251dedc3u, 0xc3556774u, 0x618ce125u,
    0xffc45ad6u, 0x9dfbd487u, 0x3c334e38u, 0xda6ac7e9u, 0x78a2419au, 0x16d9bb4bu, 0xb51134fcu, 0x5348aeadu,
    0xf180285eu, 0x8fb7a20fu, 0x2def1bc0u, 0xcc269571u, 0x6a5e0f22u, 0x089588d3u, 0xa6cd0284u, 0x45047c35u,
    0xe33bf5e6u, 0x81736f97u, 0x1faae948u, 0xbde262f9u, 0x5c19dcaau, 0xfa51565bu, 0x9888d00cu, 0x36c049bdu,
};

static const uint32_t bshim_014_tab5[96] = {
    0x01d935cfu, 0xa010af80u, 0x3e482931u, 0xdc7fa2e2u, 0x7ab71c93u, 0x18ee9644u, 0xb7260ff5u, 0x555d89a6u,
    0xf3950357u, 0x91cc7d08u, 0x3003f6b9u, 0xce3b706au, 0x6c72ea1bu, 0x0aaa63ccu, 0xa8e1dd7du, 0x4719572eu,
    0xe550d0dfu, 0x83884a90u, 0x21bfc441u, 0xbff73df2u, 0x5e2eb7a3u, 0xfc663154u, 0x9a9dab05u, 0x38d524b6u,
    0xd70c9e67u, 0x75441818u, 0x137b91c9u, 0xb1b30b7au, 0x4fea852bu, 0xee21fedcu, 0x8c59788du, 0x2a90f23eu,
    0xc8c86befu, 0x66ffe5a0u, 0x05375f51u, 0xa36ed902u, 0x41a652b3u, 0xdfddcc64u, 0x7e154615u, 0x1c4cbfc6u,
    0xba843977u, 0x58bbb328u, 0xf6f32cd9u, 0x952aa68au, 0x3362203bu, 0xd19999ecu, 0x6fd1139du, 0x0e088d4eu,
    0xac4006ffu, 0x4a7780b0u, 0xe8aefa61u, 0x86e67412u, 0x251dedc3u, 0xc3556774u, 0x618ce125u, 0xffc45ad6u,
    0x9dfbd487u, 0x3c334e38u, 0xda6ac7e9u, 0x78a2419au, 0x16d9bb4bu, 0xb51134fcu, 0x5348aeadu, 0xf180285eu,
    0x8fb7a20fu, 0x2def1bc0u, 0xcc269571u, 0x6a5e0f22u, 0x089588d3u, 0xa6cd0284u, 0x45047c35u, 0xe33bf5e6u,
    0x81736f97u, 0x1faae948u, 0xbde262f9u, 0x5c19dcaau, 0xfa51565bu, 0x9888d00cu, 0x36c049bdu, 0xd4f7c36eu,
    0x732f3d1fu, 0x1166b6d0u, 0xaf9e3081u, 0x4dd5aa32u, 0xec0d23e3u, 0x8a449d94u, 0x287c1745u, 0xc6b390f6u,
    0x64eb0aa7u, 0x03228458u, 0xa159fe09u, 0x3f9177bau, 0xddc8f16bu, 0x7c006b1cu, 0x1a37e4cdu, 0xb86f5e7eu,
};

static const uint32_t bshim_014_tab6[96] = {
    0x83884a90u, 0x21bfc441u, 0xbff73df2u, 0x5e2eb7a3u, 0xfc663154u, 0x9a9dab05u, 0x38d524b6u, 0xd70c9e67u,
    0x75441818u, 0x137b91c9u, 0xb1b30b7au, 0x4fea852bu, 0xee21fedcu, 0x8c59788du, 0x2a90f23eu, 0xc8c86befu,
    0x66ffe5a0u, 0x05375f51u, 0xa36ed902u, 0x41a652b3u, 0xdfddcc64u, 0x7e154615u, 0x1c4cbfc6u, 0xba843977u,
    0x58bbb328u, 0xf6f32cd9u, 0x952aa68au, 0x3362203bu, 0xd19999ecu, 0x6fd1139du, 0x0e088d4eu, 0xac4006ffu,
    0x4a7780b0u, 0xe8aefa61u, 0x86e67412u, 0x251dedc3u, 0xc3556774u, 0x618ce125u, 0xffc45ad6u, 0x9dfbd487u,
    0x3c334e38u, 0xda6ac7e9u, 0x78a2419au, 0x16d9bb4bu, 0xb51134fcu, 0x5348aeadu, 0xf180285eu, 0x8fb7a20fu,
    0x2def1bc0u, 0xcc269571u, 0x6a5e0f22u, 0x089588d3u, 0xa6cd0284u, 0x45047c35u, 0xe33bf5e6u, 0x81736f97u,
    0x1faae948u, 0xbde262f9u, 0x5c19dcaau, 0xfa51565bu, 0x9888d00cu, 0x36c049bdu, 0xd4f7c36eu, 0x732f3d1fu,
    0x1166b6d0u, 0xaf9e3081u, 0x4dd5aa32u, 0xec0d23e3u, 0x8a449d94u, 0x287c1745u, 0xc6b390f6u, 0x64eb0aa7u,
    0x03228458u, 0xa159fe09u, 0x3f9177bau, 0xddc8f16bu, 0x7c006b1cu, 0x1a37e4cdu, 0xb86f5e7eu, 0x56a6d82fu,
    0xf4de51e0u, 0x9315cb91u, 0x314d4542u, 0xcf84bef3u, 0x6dbc38a4u, 0x0bf3b255u, 0xaa2b2c06u, 0x4862a5b7u,
    0xe69a1f68u, 0x84d19919u, 0x230912cau, 0xc1408c7bu, 0x5f78062cu, 0xfdaf7fddu, 0x9be6f98eu, 0x3a1e733fu,
};

static const uint32_t bshim_014_tab7[96] = {
    0x05375f51u, 0xa36ed902u, 0x41a652b3u, 0xdfddcc64u, 0x7e154615u, 0x1c4cbfc6u, 0xba843977u, 0x58bbb328u,
    0xf6f32cd9u, 0x952aa68au, 0x3362203bu, 0xd19999ecu, 0x6fd1139du, 0x0e088d4eu, 0xac4006ffu, 0x4a7780b0u,
    0xe8aefa61u, 0x86e67412u, 0x251dedc3u, 0xc3556774u, 0x618ce125u, 0xffc45ad6u, 0x9dfbd487u, 0x3c334e38u,
    0xda6ac7e9u, 0x78a2419au, 0x16d9bb4bu, 0xb51134fcu, 0x5348aeadu, 0xf180285eu, 0x8fb7a20fu, 0x2def1bc0u,
    0xcc269571u, 0x6a5e0f22u, 0x089588d3u, 0xa6cd0284u, 0x45047c35u, 0xe33bf5e6u, 0x81736f97u, 0x1faae948u,
    0xbde262f9u, 0x5c19dcaau, 0xfa51565bu, 0x9888d00cu, 0x36c049bdu, 0xd4f7c36eu, 0x732f3d1fu, 0x1166b6d0u,
    0xaf9e3081u, 0x4dd5aa32u, 0xec0d23e3u, 0x8a449d94u, 0x287c1745u, 0xc6b390f6u, 0x64eb0aa7u, 0x03228458u,
    0xa159fe09u, 0x3f9177bau, 0xddc8f16bu, 0x7c006b1cu, 0x1a37e4cdu, 0xb86f5e7eu, 0x56a6d82fu, 0xf4de51e0u,
    0x9315cb91u, 0x314d4542u, 0xcf84bef3u, 0x6dbc38a4u, 0x0bf3b255u, 0xaa2b2c06u, 0x4862a5b7u, 0xe69a1f68u,
    0x84d19919u, 0x230912cau, 0xc1408c7bu, 0x5f78062cu, 0xfdaf7fddu, 0x9be6f98eu, 0x3a1e733fu, 0xd855ecf0u,
    0x768d66a1u, 0x14c4e052u, 0xb2fc5a03u, 0x5133d3b4u, 0xef6b4d65u, 0x8da2c716u, 0x2bda40c7u, 0xca11ba78u,
    0x68493429u, 0x0680addau, 0xa4b8278bu, 0x42efa13cu, 0xe1271aedu, 0x7f5e949eu, 0x1d960e4fu, 0xbbcd8800u,
};

struct bshim_014_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_014_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_014_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_014_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_014_reset(struct bshim_014_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0001b112u;
    return 0;
}

