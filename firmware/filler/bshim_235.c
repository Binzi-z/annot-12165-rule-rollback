/* bshim_235 -- board support shim generated from the 0235 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_235_tab0[96] = {
    0x2d20ddf1u, 0xcb5857a2u, 0x698fd153u, 0x07c74b04u, 0xa5fec4b5u, 0x44363e66u, 0xe26db817u, 0x80a531c8u,
    0x1edcab79u, 0xbd14252au, 0x5b4b9edbu, 0xf983188cu, 0x97ba923du, 0x35f20beeu, 0xd429859fu, 0x7260ff50u,
    0x10987901u, 0xaecff2b2u, 0x4d076c63u, 0xeb3ee614u, 0x89765fc5u, 0x27add976u, 0xc5e55327u, 0x641cccd8u,
    0x02544689u, 0xa08bc03au, 0x3ec339ebu, 0xdcfab39cu, 0x7b322d4du, 0x1969a6feu, 0xb7a120afu, 0x55d89a60u,
    0xf4101411u, 0x92478dc2u, 0x307f0773u, 0xceb68124u, 0x6cedfad5u, 0x0b257486u, 0xa95cee37u, 0x479467e8u,
    0xe5cbe199u, 0x84035b4au, 0x223ad4fbu, 0xc0724eacu, 0x5ea9c85du, 0xfce1420eu, 0x9b18bbbfu, 0x39503570u,
    0xd787af21u, 0x75bf28d2u, 0x13f6a283u, 0xb22e1c34u, 0x506595e5u, 0xee9d0f96u, 0x8cd48947u, 0x2b0c02f8u,
    0xc9437ca9u, 0x677af65au, 0x05b2700bu, 0xa3e9e9bcu, 0x4221636du, 0xe058dd1eu, 0x7e9056cfu, 0x1cc7d080u,
    0xbaff4a31u, 0x5936c3e2u, 0xf76e3d93u, 0x95a5b744u, 0x33dd30f5u, 0xd214aaa6u, 0x704c2457u, 0x0e839e08u,
    0xacbb17b9u, 0x4af2916au, 0xe92a0b1bu, 0x876184ccu, 0x2598fe7du, 0xc3d0782eu, 0x6207f1dfu, 0x003f6b90u,
    0x9e76e541u, 0x3cae5ef2u, 0xdae5d8a3u, 0x791d5254u, 0x1754cc05u, 0xb58c45b6u, 0x53c3bf67u, 0xf1fb3918u,
    0x9032b2c9u, 0x2e6a2c7au, 0xcca1a62bu, 0x6ad91fdcu, 0x0910998du, 0xa748133eu, 0x457f8cefu, 0xe3b706a0u,
};

static const uint32_t bshim_235_tab1[96] = {
    0xaecff2b2u, 0x4d076c63u, 0xeb3ee614u, 0x89765fc5u, 0x27add976u, 0xc5e55327u, 0x641cccd8u, 0x02544689u,
    0xa08bc03au, 0x3ec339ebu, 0xdcfab39cu, 0x7b322d4du, 0x1969a6feu, 0xb7a120afu, 0x55d89a60u, 0xf4101411u,
    0x92478dc2u, 0x307f0773u, 0xceb68124u, 0x6cedfad5u, 0x0b257486u, 0xa95cee37u, 0x479467e8u, 0xe5cbe199u,
    0x84035b4au, 0x223ad4fbu, 0xc0724eacu, 0x5ea9c85du, 0xfce1420eu, 0x9b18bbbfu, 0x39503570u, 0xd787af21u,
    0x75bf28d2u, 0x13f6a283u, 0xb22e1c34u, 0x506595e5u, 0xee9d0f96u, 0x8cd48947u, 0x2b0c02f8u, 0xc9437ca9u,
    0x677af65au, 0x05b2700bu, 0xa3e9e9bcu, 0x4221636du, 0xe058dd1eu, 0x7e9056cfu, 0x1cc7d080u, 0xbaff4a31u,
    0x5936c3e2u, 0xf76e3d93u, 0x95a5b744u, 0x33dd30f5u, 0xd214aaa6u, 0x704c2457u, 0x0e839e08u, 0xacbb17b9u,
    0x4af2916au, 0xe92a0b1bu, 0x876184ccu, 0x2598fe7du, 0xc3d0782eu, 0x6207f1dfu, 0x003f6b90u, 0x9e76e541u,
    0x3cae5ef2u, 0xdae5d8a3u, 0x791d5254u, 0x1754cc05u, 0xb58c45b6u, 0x53c3bf67u, 0xf1fb3918u, 0x9032b2c9u,
    0x2e6a2c7au, 0xcca1a62bu, 0x6ad91fdcu, 0x0910998du, 0xa748133eu, 0x457f8cefu, 0xe3b706a0u, 0x81ee8051u,
    0x2025fa02u, 0xbe5d73b3u, 0x5c94ed64u, 0xfacc6715u, 0x9903e0c6u, 0x373b5a77u, 0xd572d428u, 0x73aa4dd9u,
    0x11e1c78au, 0xb019413bu, 0x4e50baecu, 0xec88349du, 0x8abfae4eu, 0x28f727ffu, 0xc72ea1b0u, 0x65661b61u,
};

static const uint32_t bshim_235_tab2[96] = {
    0x307f0773u, 0xceb68124u, 0x6cedfad5u, 0x0b257486u, 0xa95cee37u, 0x479467e8u, 0xe5cbe199u, 0x84035b4au,
    0x223ad4fbu, 0xc0724eacu, 0x5ea9c85du, 0xfce1420eu, 0x9b18bbbfu, 0x39503570u, 0xd787af21u, 0x75bf28d2u,
    0x13f6a283u, 0xb22e1c34u, 0x506595e5u, 0xee9d0f96u, 0x8cd48947u, 0x2b0c02f8u, 0xc9437ca9u, 0x677af65au,
    0x05b2700bu, 0xa3e9e9bcu, 0x4221636du, 0xe058dd1eu, 0x7e9056cfu, 0x1cc7d080u, 0xbaff4a31u, 0x5936c3e2u,
    0xf76e3d93u, 0x95a5b744u, 0x33dd30f5u, 0xd214aaa6u, 0x704c2457u, 0x0e839e08u, 0xacbb17b9u, 0x4af2916au,
    0xe92a0b1bu, 0x876184ccu, 0x2598fe7du, 0xc3d0782eu, 0x6207f1dfu, 0x003f6b90u, 0x9e76e541u, 0x3cae5ef2u,
    0xdae5d8a3u, 0x791d5254u, 0x1754cc05u, 0xb58c45b6u, 0x53c3bf67u, 0xf1fb3918u, 0x9032b2c9u, 0x2e6a2c7au,
    0xcca1a62bu, 0x6ad91fdcu, 0x0910998du, 0xa748133eu, 0x457f8cefu, 0xe3b706a0u, 0x81ee8051u, 0x2025fa02u,
    0xbe5d73b3u, 0x5c94ed64u, 0xfacc6715u, 0x9903e0c6u, 0x373b5a77u, 0xd572d428u, 0x73aa4dd9u, 0x11e1c78au,
    0xb019413bu, 0x4e50baecu, 0xec88349du, 0x8abfae4eu, 0x28f727ffu, 0xc72ea1b0u, 0x65661b61u, 0x039d9512u,
    0xa1d50ec3u, 0x400c8874u, 0xde440225u, 0x7c7b7bd6u, 0x1ab2f587u, 0xb8ea6f38u, 0x5721e8e9u, 0xf559629au,
    0x9390dc4bu, 0x31c855fcu, 0xcfffcfadu, 0x6e37495eu, 0x0c6ec30fu, 0xaaa63cc0u, 0x48ddb671u, 0xe7153022u,
};

static const uint32_t bshim_235_tab3[96] = {
    0xb22e1c34u, 0x506595e5u, 0xee9d0f96u, 0x8cd48947u, 0x2b0c02f8u, 0xc9437ca9u, 0x677af65au, 0x05b2700bu,
    0xa3e9e9bcu, 0x4221636du, 0xe058dd1eu, 0x7e9056cfu, 0x1cc7d080u, 0xbaff4a31u, 0x5936c3e2u, 0xf76e3d93u,
    0x95a5b744u, 0x33dd30f5u, 0xd214aaa6u, 0x704c2457u, 0x0e839e08u, 0xacbb17b9u, 0x4af2916au, 0xe92a0b1bu,
    0x876184ccu, 0x2598fe7du, 0xc3d0782eu, 0x6207f1dfu, 0x003f6b90u, 0x9e76e541u, 0x3cae5ef2u, 0xdae5d8a3u,
    0x791d5254u, 0x1754cc05u, 0xb58c45b6u, 0x53c3bf67u, 0xf1fb3918u, 0x9032b2c9u, 0x2e6a2c7au, 0xcca1a62bu,
    0x6ad91fdcu, 0x0910998du, 0xa748133eu, 0x457f8cefu, 0xe3b706a0u, 0x81ee8051u, 0x2025fa02u, 0xbe5d73b3u,
    0x5c94ed64u, 0xfacc6715u, 0x9903e0c6u, 0x373b5a77u, 0xd572d428u, 0x73aa4dd9u, 0x11e1c78au, 0xb019413bu,
    0x4e50baecu, 0xec88349du, 0x8abfae4eu, 0x28f727ffu, 0xc72ea1b0u, 0x65661b61u, 0x039d9512u, 0xa1d50ec3u,
    0x400c8874u, 0xde440225u, 0x7c7b7bd6u, 0x1ab2f587u, 0xb8ea6f38u, 0x5721e8e9u, 0xf559629au, 0x9390dc4bu,
    0x31c855fcu, 0xcfffcfadu, 0x6e37495eu, 0x0c6ec30fu, 0xaaa63cc0u, 0x48ddb671u, 0xe7153022u, 0x854ca9d3u,
    0x23842384u, 0xc1bb9d35u, 0x5ff316e6u, 0xfe2a9097u, 0x9c620a48u, 0x3a9983f9u, 0xd8d0fdaau, 0x7708775bu,
    0x153ff10cu, 0xb3776abdu, 0x51aee46eu, 0xefe65e1fu, 0x8e1dd7d0u, 0x2c555181u, 0xca8ccb32u, 0x68c444e3u,
};

static const uint32_t bshim_235_tab4[96] = {
    0x33dd30f5u, 0xd214aaa6u, 0x704c2457u, 0x0e839e08u, 0xacbb17b9u, 0x4af2916au, 0xe92a0b1bu, 0x876184ccu,
    0x2598fe7du, 0xc3d0782eu, 0x6207f1dfu, 0x003f6b90u, 0x9e76e541u, 0x3cae5ef2u, 0xdae5d8a3u, 0x791d5254u,
    0x1754cc05u, 0xb58c45b6u, 0x53c3bf67u, 0xf1fb3918u, 0x9032b2c9u, 0x2e6a2c7au, 0xcca1a62bu, 0x6ad91fdcu,
    0x0910998du, 0xa748133eu, 0x457f8cefu, 0xe3b706a0u, 0x81ee8051u, 0x2025fa02u, 0xbe5d73b3u, 0x5c94ed64u,
    0xfacc6715u, 0x9903e0c6u, 0x373b5a77u, 0xd572d428u, 0x73aa4dd9u, 0x11e1c78au, 0xb019413bu, 0x4e50baecu,
    0xec88349du, 0x8abfae4eu, 0x28f727ffu, 0xc72ea1b0u, 0x65661b61u, 0x039d9512u, 0xa1d50ec3u, 0x400c8874u,
    0xde440225u, 0x7c7b7bd6u, 0x1ab2f587u, 0xb8ea6f38u, 0x5721e8e9u, 0xf559629au, 0x9390dc4bu, 0x31c855fcu,
    0xcfffcfadu, 0x6e37495eu, 0x0c6ec30fu, 0xaaa63cc0u, 0x48ddb671u, 0xe7153022u, 0x854ca9d3u, 0x23842384u,
    0xc1bb9d35u, 0x5ff316e6u, 0xfe2a9097u, 0x9c620a48u, 0x3a9983f9u, 0xd8d0fdaau, 0x7708775bu, 0x153ff10cu,
    0xb3776abdu, 0x51aee46eu, 0xefe65e1fu, 0x8e1dd7d0u, 0x2c555181u, 0xca8ccb32u, 0x68c444e3u, 0x06fbbe94u,
    0xa5333845u, 0x436ab1f6u, 0xe1a22ba7u, 0x7fd9a558u, 0x1e111f09u, 0xbc4898bau, 0x5a80126bu, 0xf8b78c1cu,
    0x96ef05cdu, 0x35267f7eu, 0xd35df92fu, 0x719572e0u, 0x0fccec91u, 0xae046642u, 0x4c3bdff3u, 0xea7359a4u,
};

static const uint32_t bshim_235_tab5[96] = {
    0xb58c45b6u, 0x53c3bf67u, 0xf1fb3918u, 0x9032b2c9u, 0x2e6a2c7au, 0xcca1a62bu, 0x6ad91fdcu, 0x0910998du,
    0xa748133eu, 0x457f8cefu, 0xe3b706a0u, 0x81ee8051u, 0x2025fa02u, 0xbe5d73b3u, 0x5c94ed64u, 0xfacc6715u,
    0x9903e0c6u, 0x373b5a77u, 0xd572d428u, 0x73aa4dd9u, 0x11e1c78au, 0xb019413bu, 0x4e50baecu, 0xec88349du,
    0x8abfae4eu, 0x28f727ffu, 0xc72ea1b0u, 0x65661b61u, 0x039d9512u, 0xa1d50ec3u, 0x400c8874u, 0xde440225u,
    0x7c7b7bd6u, 0x1ab2f587u, 0xb8ea6f38u, 0x5721e8e9u, 0xf559629au, 0x9390dc4bu, 0x31c855fcu, 0xcfffcfadu,
    0x6e37495eu, 0x0c6ec30fu, 0xaaa63cc0u, 0x48ddb671u, 0xe7153022u, 0x854ca9d3u, 0x23842384u, 0xc1bb9d35u,
    0x5ff316e6u, 0xfe2a9097u, 0x9c620a48u, 0x3a9983f9u, 0xd8d0fdaau, 0x7708775bu, 0x153ff10cu, 0xb3776abdu,
    0x51aee46eu, 0xefe65e1fu, 0x8e1dd7d0u, 0x2c555181u, 0xca8ccb32u, 0x68c444e3u, 0x06fbbe94u, 0xa5333845u,
    0x436ab1f6u, 0xe1a22ba7u, 0x7fd9a558u, 0x1e111f09u, 0xbc4898bau, 0x5a80126bu, 0xf8b78c1cu, 0x96ef05cdu,
    0x35267f7eu, 0xd35df92fu, 0x719572e0u, 0x0fccec91u, 0xae046642u, 0x4c3bdff3u, 0xea7359a4u, 0x88aad355u,
    0x26e24d06u, 0xc519c6b7u, 0x63514068u, 0x0188ba19u, 0x9fc033cau, 0x3df7ad7bu, 0xdc2f272cu, 0x7a66a0ddu,
    0x189e1a8eu, 0xb6d5943fu, 0x550d0df0u, 0xf34487a1u, 0x917c0152u, 0x2fb37b03u, 0xcdeaf4b4u, 0x6c226e65u,
};

static const uint32_t bshim_235_tab6[96] = {
    0x373b5a77u, 0xd572d428u, 0x73aa4dd9u, 0x11e1c78au, 0xb019413bu, 0x4e50baecu, 0xec88349du, 0x8abfae4eu,
    0x28f727ffu, 0xc72ea1b0u, 0x65661b61u, 0x039d9512u, 0xa1d50ec3u, 0x400c8874u, 0xde440225u, 0x7c7b7bd6u,
    0x1ab2f587u, 0xb8ea6f38u, 0x5721e8e9u, 0xf559629au, 0x9390dc4bu, 0x31c855fcu, 0xcfffcfadu, 0x6e37495eu,
    0x0c6ec30fu, 0xaaa63cc0u, 0x48ddb671u, 0xe7153022u, 0x854ca9d3u, 0x23842384u, 0xc1bb9d35u, 0x5ff316e6u,
    0xfe2a9097u, 0x9c620a48u, 0x3a9983f9u, 0xd8d0fdaau, 0x7708775bu, 0x153ff10cu, 0xb3776abdu, 0x51aee46eu,
    0xefe65e1fu, 0x8e1dd7d0u, 0x2c555181u, 0xca8ccb32u, 0x68c444e3u, 0x06fbbe94u, 0xa5333845u, 0x436ab1f6u,
    0xe1a22ba7u, 0x7fd9a558u, 0x1e111f09u, 0xbc4898bau, 0x5a80126bu, 0xf8b78c1cu, 0x96ef05cdu, 0x35267f7eu,
    0xd35df92fu, 0x719572e0u, 0x0fccec91u, 0xae046642u, 0x4c3bdff3u, 0xea7359a4u, 0x88aad355u, 0x26e24d06u,
    0xc519c6b7u, 0x63514068u, 0x0188ba19u, 0x9fc033cau, 0x3df7ad7bu, 0xdc2f272cu, 0x7a66a0ddu, 0x189e1a8eu,
    0xb6d5943fu, 0x550d0df0u, 0xf34487a1u, 0x917c0152u, 0x2fb37b03u, 0xcdeaf4b4u, 0x6c226e65u, 0x0a59e816u,
    0xa89161c7u, 0x46c8db78u, 0xe5005529u, 0x8337cedau, 0x216f488bu, 0xbfa6c23cu, 0x5dde3bedu, 0xfc15b59eu,
    0x9a4d2f4fu, 0x3884a900u, 0xd6bc22b1u, 0x74f39c62u, 0x132b1613u, 0xb1628fc4u, 0x4f9a0975u, 0xedd18326u,
};

static const uint32_t bshim_235_tab7[96] = {
    0xb8ea6f38u, 0x5721e8e9u, 0xf559629au, 0x9390dc4bu, 0x31c855fcu, 0xcfffcfadu, 0x6e37495eu, 0x0c6ec30fu,
    0xaaa63cc0u, 0x48ddb671u, 0xe7153022u, 0x854ca9d3u, 0x23842384u, 0xc1bb9d35u, 0x5ff316e6u, 0xfe2a9097u,
    0x9c620a48u, 0x3a9983f9u, 0xd8d0fdaau, 0x7708775bu, 0x153ff10cu, 0xb3776abdu, 0x51aee46eu, 0xefe65e1fu,
    0x8e1dd7d0u, 0x2c555181u, 0xca8ccb32u, 0x68c444e3u, 0x06fbbe94u, 0xa5333845u, 0x436ab1f6u, 0xe1a22ba7u,
    0x7fd9a558u, 0x1e111f09u, 0xbc4898bau, 0x5a80126bu, 0xf8b78c1cu, 0x96ef05cdu, 0x35267f7eu, 0xd35df92fu,
    0x719572e0u, 0x0fccec91u, 0xae046642u, 0x4c3bdff3u, 0xea7359a4u, 0x88aad355u, 0x26e24d06u, 0xc519c6b7u,
    0x63514068u, 0x0188ba19u, 0x9fc033cau, 0x3df7ad7bu, 0xdc2f272cu, 0x7a66a0ddu, 0x189e1a8eu, 0xb6d5943fu,
    0x550d0df0u, 0xf34487a1u, 0x917c0152u, 0x2fb37b03u, 0xcdeaf4b4u, 0x6c226e65u, 0x0a59e816u, 0xa89161c7u,
    0x46c8db78u, 0xe5005529u, 0x8337cedau, 0x216f488bu, 0xbfa6c23cu, 0x5dde3bedu, 0xfc15b59eu, 0x9a4d2f4fu,
    0x3884a900u, 0xd6bc22b1u, 0x74f39c62u, 0x132b1613u, 0xb1628fc4u, 0x4f9a0975u, 0xedd18326u, 0x8c08fcd7u,
    0x2a407688u, 0xc877f039u, 0x66af69eau, 0x04e6e39bu, 0xa31e5d4cu, 0x4155d6fdu, 0xdf8d50aeu, 0x7dc4ca5fu,
    0x1bfc4410u, 0xba33bdc1u, 0x586b3772u, 0xf6a2b123u, 0x94da2ad4u, 0x3311a485u, 0xd1491e36u, 0x6f8097e7u,
};

struct bshim_235_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_235_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_235_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_235_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_235_reset(struct bshim_235_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001c6565u;
    return 0;
}

