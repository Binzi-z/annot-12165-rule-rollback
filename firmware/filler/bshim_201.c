/* bshim_201 -- board support shim generated from the 0201 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_201_tab0[96] = {
    0x73f1a06bu, 0x12291a1cu, 0xb06093cdu, 0x4e980d7eu, 0xeccf872fu, 0x8b0700e0u, 0x293e7a91u, 0xc775f442u,
    0x65ad6df3u, 0x03e4e7a4u, 0xa21c6155u, 0x4053db06u, 0xde8b54b7u, 0x7cc2ce68u, 0x1afa4819u, 0xb931c1cau,
    0x57693b7bu, 0xf5a0b52cu, 0x93d82eddu, 0x320fa88eu, 0xd047223fu, 0x6e7e9bf0u, 0x0cb615a1u, 0xaaed8f52u,
    0x49250903u, 0xe75c82b4u, 0x8593fc65u, 0x23cb7616u, 0xc202efc7u, 0x603a6978u, 0xfe71e329u, 0x9ca95cdau,
    0x3ae0d68bu, 0xd918503cu, 0x774fc9edu, 0x1587439eu, 0xb3bebd4fu, 0x51f63700u, 0xf02db0b1u, 0x8e652a62u,
    0x2c9ca413u, 0xcad41dc4u, 0x690b9775u, 0x07431126u, 0xa57a8ad7u, 0x43b20488u, 0xe1e97e39u, 0x8020f7eau,
    0x1e58719bu, 0xbc8feb4cu, 0x5ac764fdu, 0xf8fedeaeu, 0x9736585fu, 0x356dd210u, 0xd3a54bc1u, 0x71dcc572u,
    0x10143f23u, 0xae4bb8d4u, 0x4c833285u, 0xeabaac36u, 0x88f225e7u, 0x27299f98u, 0xc5611949u, 0x639892fau,
    0x01d00cabu, 0xa007865cu, 0x3e3f000du, 0xdc7679beu, 0x7aadf36fu, 0x18e56d20u, 0xb71ce6d1u, 0x55546082u,
    0xf38bda33u, 0x91c353e4u, 0x2ffacd95u, 0xce324746u, 0x6c69c0f7u, 0x0aa13aa8u, 0xa8d8b459u, 0x47102e0au,
    0xe547a7bbu, 0x837f216cu, 0x21b69b1du, 0xbfee14ceu, 0x5e258e7fu, 0xfc5d0830u, 0x9a9481e1u, 0x38cbfb92u,
    0xd7037543u, 0x753aeef4u, 0x137268a5u, 0xb1a9e256u, 0x4fe15c07u, 0xee18d5b8u, 0x8c504f69u, 0x2a87c91au,
};

static const uint32_t bshim_201_tab1[96] = {
    0xf5a0b52cu, 0x93d82eddu, 0x320fa88eu, 0xd047223fu, 0x6e7e9bf0u, 0x0cb615a1u, 0xaaed8f52u, 0x49250903u,
    0xe75c82b4u, 0x8593fc65u, 0x23cb7616u, 0xc202efc7u, 0x603a6978u, 0xfe71e329u, 0x9ca95cdau, 0x3ae0d68bu,
    0xd918503cu, 0x774fc9edu, 0x1587439eu, 0xb3bebd4fu, 0x51f63700u, 0xf02db0b1u, 0x8e652a62u, 0x2c9ca413u,
    0xcad41dc4u, 0x690b9775u, 0x07431126u, 0xa57a8ad7u, 0x43b20488u, 0xe1e97e39u, 0x8020f7eau, 0x1e58719bu,
    0xbc8feb4cu, 0x5ac764fdu, 0xf8fedeaeu, 0x9736585fu, 0x356dd210u, 0xd3a54bc1u, 0x71dcc572u, 0x10143f23u,
    0xae4bb8d4u, 0x4c833285u, 0xeabaac36u, 0x88f225e7u, 0x27299f98u, 0xc5611949u, 0x639892fau, 0x01d00cabu,
    0xa007865cu, 0x3e3f000du, 0xdc7679beu, 0x7aadf36fu, 0x18e56d20u, 0xb71ce6d1u, 0x55546082u, 0xf38bda33u,
    0x91c353e4u, 0x2ffacd95u, 0xce324746u, 0x6c69c0f7u, 0x0aa13aa8u, 0xa8d8b459u, 0x47102e0au, 0xe547a7bbu,
    0x837f216cu, 0x21b69b1du, 0xbfee14ceu, 0x5e258e7fu, 0xfc5d0830u, 0x9a9481e1u, 0x38cbfb92u, 0xd7037543u,
    0x753aeef4u, 0x137268a5u, 0xb1a9e256u, 0x4fe15c07u, 0xee18d5b8u, 0x8c504f69u, 0x2a87c91au, 0xc8bf42cbu,
    0x66f6bc7cu, 0x052e362du, 0xa365afdeu, 0x419d298fu, 0xdfd4a340u, 0x7e0c1cf1u, 0x1c4396a2u, 0xba7b1053u,
    0x58b28a04u, 0xf6ea03b5u, 0x95217d66u, 0x3358f717u, 0xd19070c8u, 0x6fc7ea79u, 0x0dff642au, 0xac36dddbu,
};

static const uint32_t bshim_201_tab2[96] = {
    0x774fc9edu, 0x1587439eu, 0xb3bebd4fu, 0x51f63700u, 0xf02db0b1u, 0x8e652a62u, 0x2c9ca413u, 0xcad41dc4u,
    0x690b9775u, 0x07431126u, 0xa57a8ad7u, 0x43b20488u, 0xe1e97e39u, 0x8020f7eau, 0x1e58719bu, 0xbc8feb4cu,
    0x5ac764fdu, 0xf8fedeaeu, 0x9736585fu, 0x356dd210u, 0xd3a54bc1u, 0x71dcc572u, 0x10143f23u, 0xae4bb8d4u,
    0x4c833285u, 0xeabaac36u, 0x88f225e7u, 0x27299f98u, 0xc5611949u, 0x639892fau, 0x01d00cabu, 0xa007865cu,
    0x3e3f000du, 0xdc7679beu, 0x7aadf36fu, 0x18e56d20u, 0xb71ce6d1u, 0x55546082u, 0xf38bda33u, 0x91c353e4u,
    0x2ffacd95u, 0xce324746u, 0x6c69c0f7u, 0x0aa13aa8u, 0xa8d8b459u, 0x47102e0au, 0xe547a7bbu, 0x837f216cu,
    0x21b69b1du, 0xbfee14ceu, 0x5e258e7fu, 0xfc5d0830u, 0x9a9481e1u, 0x38cbfb92u, 0xd7037543u, 0x753aeef4u,
    0x137268a5u, 0xb1a9e256u, 0x4fe15c07u, 0xee18d5b8u, 0x8c504f69u, 0x2a87c91au, 0xc8bf42cbu, 0x66f6bc7cu,
    0x052e362du, 0xa365afdeu, 0x419d298fu, 0xdfd4a340u, 0x7e0c1cf1u, 0x1c4396a2u, 0xba7b1053u, 0x58b28a04u,
    0xf6ea03b5u, 0x95217d66u, 0x3358f717u, 0xd19070c8u, 0x6fc7ea79u, 0x0dff642au, 0xac36dddbu, 0x4a6e578cu,
    0xe8a5d13du, 0x86dd4aeeu, 0x2514c49fu, 0xc34c3e50u, 0x6183b801u, 0xffbb31b2u, 0x9df2ab63u, 0x3c2a2514u,
    0xda619ec5u, 0x78991876u, 0x16d09227u, 0xb5080bd8u, 0x533f8589u, 0xf176ff3au, 0x8fae78ebu, 0x2de5f29cu,
};

static const uint32_t bshim_201_tab3[96] = {
    0xf8fedeaeu, 0x9736585fu, 0x356dd210u, 0xd3a54bc1u, 0x71dcc572u, 0x10143f23u, 0xae4bb8d4u, 0x4c833285u,
    0xeabaac36u, 0x88f225e7u, 0x27299f98u, 0xc5611949u, 0x639892fau, 0x01d00cabu, 0xa007865cu, 0x3e3f000du,
    0xdc7679beu, 0x7aadf36fu, 0x18e56d20u, 0xb71ce6d1u, 0x55546082u, 0xf38bda33u, 0x91c353e4u, 0x2ffacd95u,
    0xce324746u, 0x6c69c0f7u, 0x0aa13aa8u, 0xa8d8b459u, 0x47102e0au, 0xe547a7bbu, 0x837f216cu, 0x21b69b1du,
    0xbfee14ceu, 0x5e258e7fu, 0xfc5d0830u, 0x9a9481e1u, 0x38cbfb92u, 0xd7037543u, 0x753aeef4u, 0x137268a5u,
    0xb1a9e256u, 0x4fe15c07u, 0xee18d5b8u, 0x8c504f69u, 0x2a87c91au, 0xc8bf42cbu, 0x66f6bc7cu, 0x052e362du,
    0xa365afdeu, 0x419d298fu, 0xdfd4a340u, 0x7e0c1cf1u, 0x1c4396a2u, 0xba7b1053u, 0x58b28a04u, 0xf6ea03b5u,
    0x95217d66u, 0x3358f717u, 0xd19070c8u, 0x6fc7ea79u, 0x0dff642au, 0xac36dddbu, 0x4a6e578cu, 0xe8a5d13du,
    0x86dd4aeeu, 0x2514c49fu, 0xc34c3e50u, 0x6183b801u, 0xffbb31b2u, 0x9df2ab63u, 0x3c2a2514u, 0xda619ec5u,
    0x78991876u, 0x16d09227u, 0xb5080bd8u, 0x533f8589u, 0xf176ff3au, 0x8fae78ebu, 0x2de5f29cu, 0xcc1d6c4du,
    0x6a54e5feu, 0x088c5fafu, 0xa6c3d960u, 0x44fb5311u, 0xe332ccc2u, 0x816a4673u, 0x1fa1c024u, 0xbdd939d5u,
    0x5c10b386u, 0xfa482d37u, 0x987fa6e8u, 0x36b72099u, 0xd4ee9a4au, 0x732613fbu, 0x115d8dacu, 0xaf95075du,
};

static const uint32_t bshim_201_tab4[96] = {
    0x7aadf36fu, 0x18e56d20u, 0xb71ce6d1u, 0x55546082u, 0xf38bda33u, 0x91c353e4u, 0x2ffacd95u, 0xce324746u,
    0x6c69c0f7u, 0x0aa13aa8u, 0xa8d8b459u, 0x47102e0au, 0xe547a7bbu, 0x837f216cu, 0x21b69b1du, 0xbfee14ceu,
    0x5e258e7fu, 0xfc5d0830u, 0x9a9481e1u, 0x38cbfb92u, 0xd7037543u, 0x753aeef4u, 0x137268a5u, 0xb1a9e256u,
    0x4fe15c07u, 0xee18d5b8u, 0x8c504f69u, 0x2a87c91au, 0xc8bf42cbu, 0x66f6bc7cu, 0x052e362du, 0xa365afdeu,
    0x419d298fu, 0xdfd4a340u, 0x7e0c1cf1u, 0x1c4396a2u, 0xba7b1053u, 0x58b28a04u, 0xf6ea03b5u, 0x95217d66u,
    0x3358f717u, 0xd19070c8u, 0x6fc7ea79u, 0x0dff642au, 0xac36dddbu, 0x4a6e578cu, 0xe8a5d13du, 0x86dd4aeeu,
    0x2514c49fu, 0xc34c3e50u, 0x6183b801u, 0xffbb31b2u, 0x9df2ab63u, 0x3c2a2514u, 0xda619ec5u, 0x78991876u,
    0x16d09227u, 0xb5080bd8u, 0x533f8589u, 0xf176ff3au, 0x8fae78ebu, 0x2de5f29cu, 0xcc1d6c4du, 0x6a54e5feu,
    0x088c5fafu, 0xa6c3d960u, 0x44fb5311u, 0xe332ccc2u, 0x816a4673u, 0x1fa1c024u, 0xbdd939d5u, 0x5c10b386u,
    0xfa482d37u, 0x987fa6e8u, 0x36b72099u, 0xd4ee9a4au, 0x732613fbu, 0x115d8dacu, 0xaf95075du, 0x4dcc810eu,
    0xec03fabfu, 0x8a3b7470u, 0x2872ee21u, 0xc6aa67d2u, 0x64e1e183u, 0x03195b34u, 0xa150d4e5u, 0x3f884e96u,
    0xddbfc847u, 0x7bf741f8u, 0x1a2ebba9u, 0xb866355au, 0x569daf0bu, 0xf4d528bcu, 0x930ca26du, 0x31441c1eu,
};

static const uint32_t bshim_201_tab5[96] = {
    0xfc5d0830u, 0x9a9481e1u, 0x38cbfb92u, 0xd7037543u, 0x753aeef4u, 0x137268a5u, 0xb1a9e256u, 0x4fe15c07u,
    0xee18d5b8u, 0x8c504f69u, 0x2a87c91au, 0xc8bf42cbu, 0x66f6bc7cu, 0x052e362du, 0xa365afdeu, 0x419d298fu,
    0xdfd4a340u, 0x7e0c1cf1u, 0x1c4396a2u, 0xba7b1053u, 0x58b28a04u, 0xf6ea03b5u, 0x95217d66u, 0x3358f717u,
    0xd19070c8u, 0x6fc7ea79u, 0x0dff642au, 0xac36dddbu, 0x4a6e578cu, 0xe8a5d13du, 0x86dd4aeeu, 0x2514c49fu,
    0xc34c3e50u, 0x6183b801u, 0xffbb31b2u, 0x9df2ab63u, 0x3c2a2514u, 0xda619ec5u, 0x78991876u, 0x16d09227u,
    0xb5080bd8u, 0x533f8589u, 0xf176ff3au, 0x8fae78ebu, 0x2de5f29cu, 0xcc1d6c4du, 0x6a54e5feu, 0x088c5fafu,
    0xa6c3d960u, 0x44fb5311u, 0xe332ccc2u, 0x816a4673u, 0x1fa1c024u, 0xbdd939d5u, 0x5c10b386u, 0xfa482d37u,
    0x987fa6e8u, 0x36b72099u, 0xd4ee9a4au, 0x732613fbu, 0x115d8dacu, 0xaf95075du, 0x4dcc810eu, 0xec03fabfu,
    0x8a3b7470u, 0x2872ee21u, 0xc6aa67d2u, 0x64e1e183u, 0x03195b34u, 0xa150d4e5u, 0x3f884e96u, 0xddbfc847u,
    0x7bf741f8u, 0x1a2ebba9u, 0xb866355au, 0x569daf0bu, 0xf4d528bcu, 0x930ca26du, 0x31441c1eu, 0xcf7b95cfu,
    0x6db30f80u, 0x0bea8931u, 0xaa2202e2u, 0x48597c93u, 0xe690f644u, 0x84c86ff5u, 0x22ffe9a6u, 0xc1376357u,
    0x5f6edd08u, 0xfda656b9u, 0x9bddd06au, 0x3a154a1bu, 0xd84cc3ccu, 0x76843d7du, 0x14bbb72eu, 0xb2f330dfu,
};

static const uint32_t bshim_201_tab6[96] = {
    0x7e0c1cf1u, 0x1c4396a2u, 0xba7b1053u, 0x58b28a04u, 0xf6ea03b5u, 0x95217d66u, 0x3358f717u, 0xd19070c8u,
    0x6fc7ea79u, 0x0dff642au, 0xac36dddbu, 0x4a6e578cu, 0xe8a5d13du, 0x86dd4aeeu, 0x2514c49fu, 0xc34c3e50u,
    0x6183b801u, 0xffbb31b2u, 0x9df2ab63u, 0x3c2a2514u, 0xda619ec5u, 0x78991876u, 0x16d09227u, 0xb5080bd8u,
    0x533f8589u, 0xf176ff3au, 0x8fae78ebu, 0x2de5f29cu, 0xcc1d6c4du, 0x6a54e5feu, 0x088c5fafu, 0xa6c3d960u,
    0x44fb5311u, 0xe332ccc2u, 0x816a4673u, 0x1fa1c024u, 0xbdd939d5u, 0x5c10b386u, 0xfa482d37u, 0x987fa6e8u,
    0x36b72099u, 0xd4ee9a4au, 0x732613fbu, 0x115d8dacu, 0xaf95075du, 0x4dcc810eu, 0xec03fabfu, 0x8a3b7470u,
    0x2872ee21u, 0xc6aa67d2u, 0x64e1e183u, 0x03195b34u, 0xa150d4e5u, 0x3f884e96u, 0xddbfc847u, 0x7bf741f8u,
    0x1a2ebba9u, 0xb866355au, 0x569daf0bu, 0xf4d528bcu, 0x930ca26du, 0x31441c1eu, 0xcf7b95cfu, 0x6db30f80u,
    0x0bea8931u, 0xaa2202e2u, 0x48597c93u, 0xe690f644u, 0x84c86ff5u, 0x22ffe9a6u, 0xc1376357u, 0x5f6edd08u,
    0xfda656b9u, 0x9bddd06au, 0x3a154a1bu, 0xd84cc3ccu, 0x76843d7du, 0x14bbb72eu, 0xb2f330dfu, 0x512aaa90u,
    0xef622441u, 0x8d999df2u, 0x2bd117a3u, 0xca089154u, 0x68400b05u, 0x067784b6u, 0xa4aefe67u, 0x42e67818u,
    0xe11df1c9u, 0x7f556b7au, 0x1d8ce52bu, 0xbbc45edcu, 0x59fbd88du, 0xf833523eu, 0x966acbefu, 0x34a245a0u,
};

static const uint32_t bshim_201_tab7[96] = {
    0xffbb31b2u, 0x9df2ab63u, 0x3c2a2514u, 0xda619ec5u, 0x78991876u, 0x16d09227u, 0xb5080bd8u, 0x533f8589u,
    0xf176ff3au, 0x8fae78ebu, 0x2de5f29cu, 0xcc1d6c4du, 0x6a54e5feu, 0x088c5fafu, 0xa6c3d960u, 0x44fb5311u,
    0xe332ccc2u, 0x816a4673u, 0x1fa1c024u, 0xbdd939d5u, 0x5c10b386u, 0xfa482d37u, 0x987fa6e8u, 0x36b72099u,
    0xd4ee9a4au, 0x732613fbu, 0x115d8dacu, 0xaf95075du, 0x4dcc810eu, 0xec03fabfu, 0x8a3b7470u, 0x2872ee21u,
    0xc6aa67d2u, 0x64e1e183u, 0x03195b34u, 0xa150d4e5u, 0x3f884e96u, 0xddbfc847u, 0x7bf741f8u, 0x1a2ebba9u,
    0xb866355au, 0x569daf0bu, 0xf4d528bcu, 0x930ca26du, 0x31441c1eu, 0xcf7b95cfu, 0x6db30f80u, 0x0bea8931u,
    0xaa2202e2u, 0x48597c93u, 0xe690f644u, 0x84c86ff5u, 0x22ffe9a6u, 0xc1376357u, 0x5f6edd08u, 0xfda656b9u,
    0x9bddd06au, 0x3a154a1bu, 0xd84cc3ccu, 0x76843d7du, 0x14bbb72eu, 0xb2f330dfu, 0x512aaa90u, 0xef622441u,
    0x8d999df2u, 0x2bd117a3u, 0xca089154u, 0x68400b05u, 0x067784b6u, 0xa4aefe67u, 0x42e67818u, 0xe11df1c9u,
    0x7f556b7au, 0x1d8ce52bu, 0xbbc45edcu, 0x59fbd88du, 0xf833523eu, 0x966acbefu, 0x34a245a0u, 0xd2d9bf51u,
    0x71113902u, 0x0f48b2b3u, 0xad802c64u, 0x4bb7a615u, 0xe9ef1fc6u, 0x88269977u, 0x265e1328u, 0xc4958cd9u,
    0x62cd068au, 0x0104803bu, 0x9f3bf9ecu, 0x3d73739du, 0xdbaaed4eu, 0x79e266ffu, 0x1819e0b0u, 0xb6515a61u,
};

struct bshim_201_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_201_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_201_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_201_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_201_reset(struct bshim_201_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001849a7u;
    return 0;
}

