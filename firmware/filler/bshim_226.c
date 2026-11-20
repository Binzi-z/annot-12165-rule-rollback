/* bshim_226 -- board support shim generated from the 0226 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_226_tab0[96] = {
    0x83a36bc6u, 0x21dae577u, 0xc0125f28u, 0x5e49d8d9u, 0xfc81528au, 0x9ab8cc3bu, 0x38f045ecu, 0xd727bf9du,
    0x755f394eu, 0x1396b2ffu, 0xb1ce2cb0u, 0x5005a661u, 0xee3d2012u, 0x8c7499c3u, 0x2aac1374u, 0xc8e38d25u,
    0x671b06d6u, 0x05528087u, 0xa389fa38u, 0x41c173e9u, 0xdff8ed9au, 0x7e30674bu, 0x1c67e0fcu, 0xba9f5aadu,
    0x58d6d45eu, 0xf70e4e0fu, 0x9545c7c0u, 0x337d4171u, 0xd1b4bb22u, 0x6fec34d3u, 0x0e23ae84u, 0xac5b2835u,
    0x4a92a1e6u, 0xe8ca1b97u, 0x87019548u, 0x25390ef9u, 0xc37088aau, 0x61a8025bu, 0xffdf7c0cu, 0x9e16f5bdu,
    0x3c4e6f6eu, 0xda85e91fu, 0x78bd62d0u, 0x16f4dc81u, 0xb52c5632u, 0x5363cfe3u, 0xf19b4994u, 0x8fd2c345u,
    0x2e0a3cf6u, 0xcc41b6a7u, 0x6a793058u, 0x08b0aa09u, 0xa6e823bau, 0x451f9d6bu, 0xe357171cu, 0x818e90cdu,
    0x1fc60a7eu, 0xbdfd842fu, 0x5c34fde0u, 0xfa6c7791u, 0x98a3f142u, 0x36db6af3u, 0xd512e4a4u, 0x734a5e55u,
    0x1181d806u, 0xafb951b7u, 0x4df0cb68u, 0xec284519u, 0x8a5fbecau, 0x2897387bu, 0xc6ceb22cu, 0x65062bddu,
    0x033da58eu, 0xa1751f3fu, 0x3fac98f0u, 0xdde412a1u, 0x7c1b8c52u, 0x1a530603u, 0xb88a7fb4u, 0x56c1f965u,
    0xf4f97316u, 0x9330ecc7u, 0x31686678u, 0xcf9fe029u, 0x6dd759dau, 0x0c0ed38bu, 0xaa464d3cu, 0x487dc6edu,
    0xe6b5409eu, 0x84ecba4fu, 0x23243400u, 0xc15badb1u, 0x5f932762u, 0xfdcaa113u, 0x9c021ac4u, 0x3a399475u,
};

static const uint32_t bshim_226_tab1[96] = {
    0x05528087u, 0xa389fa38u, 0x41c173e9u, 0xdff8ed9au, 0x7e30674bu, 0x1c67e0fcu, 0xba9f5aadu, 0x58d6d45eu,
    0xf70e4e0fu, 0x9545c7c0u, 0x337d4171u, 0xd1b4bb22u, 0x6fec34d3u, 0x0e23ae84u, 0xac5b2835u, 0x4a92a1e6u,
    0xe8ca1b97u, 0x87019548u, 0x25390ef9u, 0xc37088aau, 0x61a8025bu, 0xffdf7c0cu, 0x9e16f5bdu, 0x3c4e6f6eu,
    0xda85e91fu, 0x78bd62d0u, 0x16f4dc81u, 0xb52c5632u, 0x5363cfe3u, 0xf19b4994u, 0x8fd2c345u, 0x2e0a3cf6u,
    0xcc41b6a7u, 0x6a793058u, 0x08b0aa09u, 0xa6e823bau, 0x451f9d6bu, 0xe357171cu, 0x818e90cdu, 0x1fc60a7eu,
    0xbdfd842fu, 0x5c34fde0u, 0xfa6c7791u, 0x98a3f142u, 0x36db6af3u, 0xd512e4a4u, 0x734a5e55u, 0x1181d806u,
    0xafb951b7u, 0x4df0cb68u, 0xec284519u, 0x8a5fbecau, 0x2897387bu, 0xc6ceb22cu, 0x65062bddu, 0x033da58eu,
    0xa1751f3fu, 0x3fac98f0u, 0xdde412a1u, 0x7c1b8c52u, 0x1a530603u, 0xb88a7fb4u, 0x56c1f965u, 0xf4f97316u,
    0x9330ecc7u, 0x31686678u, 0xcf9fe029u, 0x6dd759dau, 0x0c0ed38bu, 0xaa464d3cu, 0x487dc6edu, 0xe6b5409eu,
    0x84ecba4fu, 0x23243400u, 0xc15badb1u, 0x5f932762u, 0xfdcaa113u, 0x9c021ac4u, 0x3a399475u, 0xd8710e26u,
    0x76a887d7u, 0x14e00188u, 0xb3177b39u, 0x514ef4eau, 0xef866e9bu, 0x8dbde84cu, 0x2bf561fdu, 0xca2cdbaeu,
    0x6864555fu, 0x069bcf10u, 0xa4d348c1u, 0x430ac272u, 0xe1423c23u, 0x7f79b5d4u, 0x1db12f85u, 0xbbe8a936u,
};

static const uint32_t bshim_226_tab2[96] = {
    0x87019548u, 0x25390ef9u, 0xc37088aau, 0x61a8025bu, 0xffdf7c0cu, 0x9e16f5bdu, 0x3c4e6f6eu, 0xda85e91fu,
    0x78bd62d0u, 0x16f4dc81u, 0xb52c5632u, 0x5363cfe3u, 0xf19b4994u, 0x8fd2c345u, 0x2e0a3cf6u, 0xcc41b6a7u,
    0x6a793058u, 0x08b0aa09u, 0xa6e823bau, 0x451f9d6bu, 0xe357171cu, 0x818e90cdu, 0x1fc60a7eu, 0xbdfd842fu,
    0x5c34fde0u, 0xfa6c7791u, 0x98a3f142u, 0x36db6af3u, 0xd512e4a4u, 0x734a5e55u, 0x1181d806u, 0xafb951b7u,
    0x4df0cb68u, 0xec284519u, 0x8a5fbecau, 0x2897387bu, 0xc6ceb22cu, 0x65062bddu, 0x033da58eu, 0xa1751f3fu,
    0x3fac98f0u, 0xdde412a1u, 0x7c1b8c52u, 0x1a530603u, 0xb88a7fb4u, 0x56c1f965u, 0xf4f97316u, 0x9330ecc7u,
    0x31686678u, 0xcf9fe029u, 0x6dd759dau, 0x0c0ed38bu, 0xaa464d3cu, 0x487dc6edu, 0xe6b5409eu, 0x84ecba4fu,
    0x23243400u, 0xc15badb1u, 0x5f932762u, 0xfdcaa113u, 0x9c021ac4u, 0x3a399475u, 0xd8710e26u, 0x76a887d7u,
    0x14e00188u, 0xb3177b39u, 0x514ef4eau, 0xef866e9bu, 0x8dbde84cu, 0x2bf561fdu, 0xca2cdbaeu, 0x6864555fu,
    0x069bcf10u, 0xa4d348c1u, 0x430ac272u, 0xe1423c23u, 0x7f79b5d4u, 0x1db12f85u, 0xbbe8a936u, 0x5a2022e7u,
    0xf8579c98u, 0x968f1649u, 0x34c68ffau, 0xd2fe09abu, 0x7135835cu, 0x0f6cfd0du, 0xada476beu, 0x4bdbf06fu,
    0xea136a20u, 0x884ae3d1u, 0x26825d82u, 0xc4b9d733u, 0x62f150e4u, 0x0128ca95u, 0x9f604446u, 0x3d97bdf7u,
};

static const uint32_t bshim_226_tab3[96] = {
    0x08b0aa09u, 0xa6e823bau, 0x451f9d6bu, 0xe357171cu, 0x818e90cdu, 0x1fc60a7eu, 0xbdfd842fu, 0x5c34fde0u,
    0xfa6c7791u, 0x98a3f142u, 0x36db6af3u, 0xd512e4a4u, 0x734a5e55u, 0x1181d806u, 0xafb951b7u, 0x4df0cb68u,
    0xec284519u, 0x8a5fbecau, 0x2897387bu, 0xc6ceb22cu, 0x65062bddu, 0x033da58eu, 0xa1751f3fu, 0x3fac98f0u,
    0xdde412a1u, 0x7c1b8c52u, 0x1a530603u, 0xb88a7fb4u, 0x56c1f965u, 0xf4f97316u, 0x9330ecc7u, 0x31686678u,
    0xcf9fe029u, 0x6dd759dau, 0x0c0ed38bu, 0xaa464d3cu, 0x487dc6edu, 0xe6b5409eu, 0x84ecba4fu, 0x23243400u,
    0xc15badb1u, 0x5f932762u, 0xfdcaa113u, 0x9c021ac4u, 0x3a399475u, 0xd8710e26u, 0x76a887d7u, 0x14e00188u,
    0xb3177b39u, 0x514ef4eau, 0xef866e9bu, 0x8dbde84cu, 0x2bf561fdu, 0xca2cdbaeu, 0x6864555fu, 0x069bcf10u,
    0xa4d348c1u, 0x430ac272u, 0xe1423c23u, 0x7f79b5d4u, 0x1db12f85u, 0xbbe8a936u, 0x5a2022e7u, 0xf8579c98u,
    0x968f1649u, 0x34c68ffau, 0xd2fe09abu, 0x7135835cu, 0x0f6cfd0du, 0xada476beu, 0x4bdbf06fu, 0xea136a20u,
    0x884ae3d1u, 0x26825d82u, 0xc4b9d733u, 0x62f150e4u, 0x0128ca95u, 0x9f604446u, 0x3d97bdf7u, 0xdbcf37a8u,
    0x7a06b159u, 0x183e2b0au, 0xb675a4bbu, 0x54ad1e6cu, 0xf2e4981du, 0x911c11ceu, 0x2f538b7fu, 0xcd8b0530u,
    0x6bc27ee1u, 0x09f9f892u, 0xa8317243u, 0x4668ebf4u, 0xe4a065a5u, 0x82d7df56u, 0x210f5907u, 0xbf46d2b8u,
};

static const uint32_t bshim_226_tab4[96] = {
    0x8a5fbecau, 0x2897387bu, 0xc6ceb22cu, 0x65062bddu, 0x033da58eu, 0xa1751f3fu, 0x3fac98f0u, 0xdde412a1u,
    0x7c1b8c52u, 0x1a530603u, 0xb88a7fb4u, 0x56c1f965u, 0xf4f97316u, 0x9330ecc7u, 0x31686678u, 0xcf9fe029u,
    0x6dd759dau, 0x0c0ed38bu, 0xaa464d3cu, 0x487dc6edu, 0xe6b5409eu, 0x84ecba4fu, 0x23243400u, 0xc15badb1u,
    0x5f932762u, 0xfdcaa113u, 0x9c021ac4u, 0x3a399475u, 0xd8710e26u, 0x76a887d7u, 0x14e00188u, 0xb3177b39u,
    0x514ef4eau, 0xef866e9bu, 0x8dbde84cu, 0x2bf561fdu, 0xca2cdbaeu, 0x6864555fu, 0x069bcf10u, 0xa4d348c1u,
    0x430ac272u, 0xe1423c23u, 0x7f79b5d4u, 0x1db12f85u, 0xbbe8a936u, 0x5a2022e7u, 0xf8579c98u, 0x968f1649u,
    0x34c68ffau, 0xd2fe09abu, 0x7135835cu, 0x0f6cfd0du, 0xada476beu, 0x4bdbf06fu, 0xea136a20u, 0x884ae3d1u,
    0x26825d82u, 0xc4b9d733u, 0x62f150e4u, 0x0128ca95u, 0x9f604446u, 0x3d97bdf7u, 0xdbcf37a8u, 0x7a06b159u,
    0x183e2b0au, 0xb675a4bbu, 0x54ad1e6cu, 0xf2e4981du, 0x911c11ceu, 0x2f538b7fu, 0xcd8b0530u, 0x6bc27ee1u,
    0x09f9f892u, 0xa8317243u, 0x4668ebf4u, 0xe4a065a5u, 0x82d7df56u, 0x210f5907u, 0xbf46d2b8u, 0x5d7e4c69u,
    0xfbb5c61au, 0x99ed3fcbu, 0x3824b97cu, 0xd65c332du, 0x7493acdeu, 0x12cb268fu, 0xb102a040u, 0x4f3a19f1u,
    0xed7193a2u, 0x8ba90d53u, 0x29e08704u, 0xc81800b5u, 0x664f7a66u, 0x0486f417u, 0xa2be6dc8u, 0x40f5e779u,
};

static const uint32_t bshim_226_tab5[96] = {
    0x0c0ed38bu, 0xaa464d3cu, 0x487dc6edu, 0xe6b5409eu, 0x84ecba4fu, 0x23243400u, 0xc15badb1u, 0x5f932762u,
    0xfdcaa113u, 0x9c021ac4u, 0x3a399475u, 0xd8710e26u, 0x76a887d7u, 0x14e00188u, 0xb3177b39u, 0x514ef4eau,
    0xef866e9bu, 0x8dbde84cu, 0x2bf561fdu, 0xca2cdbaeu, 0x6864555fu, 0x069bcf10u, 0xa4d348c1u, 0x430ac272u,
    0xe1423c23u, 0x7f79b5d4u, 0x1db12f85u, 0xbbe8a936u, 0x5a2022e7u, 0xf8579c98u, 0x968f1649u, 0x34c68ffau,
    0xd2fe09abu, 0x7135835cu, 0x0f6cfd0du, 0xada476beu, 0x4bdbf06fu, 0xea136a20u, 0x884ae3d1u, 0x26825d82u,
    0xc4b9d733u, 0x62f150e4u, 0x0128ca95u, 0x9f604446u, 0x3d97bdf7u, 0xdbcf37a8u, 0x7a06b159u, 0x183e2b0au,
    0xb675a4bbu, 0x54ad1e6cu, 0xf2e4981du, 0x911c11ceu, 0x2f538b7fu, 0xcd8b0530u, 0x6bc27ee1u, 0x09f9f892u,
    0xa8317243u, 0x4668ebf4u, 0xe4a065a5u, 0x82d7df56u, 0x210f5907u, 0xbf46d2b8u, 0x5d7e4c69u, 0xfbb5c61au,
    0x99ed3fcbu, 0x3824b97cu, 0xd65c332du, 0x7493acdeu, 0x12cb268fu, 0xb102a040u, 0x4f3a19f1u, 0xed7193a2u,
    0x8ba90d53u, 0x29e08704u, 0xc81800b5u, 0x664f7a66u, 0x0486f417u, 0xa2be6dc8u, 0x40f5e779u, 0xdf2d612au,
    0x7d64dadbu, 0x1b9c548cu, 0xb9d3ce3du, 0x580b47eeu, 0xf642c19fu, 0x947a3b50u, 0x32b1b501u, 0xd0e92eb2u,
    0x6f20a863u, 0x0d582214u, 0xab8f9bc5u, 0x49c71576u, 0xe7fe8f27u, 0x863608d8u, 0x246d8289u, 0xc2a4fc3au,
};

static const uint32_t bshim_226_tab6[96] = {
    0x8dbde84cu, 0x2bf561fdu, 0xca2cdbaeu, 0x6864555fu, 0x069bcf10u, 0xa4d348c1u, 0x430ac272u, 0xe1423c23u,
    0x7f79b5d4u, 0x1db12f85u, 0xbbe8a936u, 0x5a2022e7u, 0xf8579c98u, 0x968f1649u, 0x34c68ffau, 0xd2fe09abu,
    0x7135835cu, 0x0f6cfd0du, 0xada476beu, 0x4bdbf06fu, 0xea136a20u, 0x884ae3d1u, 0x26825d82u, 0xc4b9d733u,
    0x62f150e4u, 0x0128ca95u, 0x9f604446u, 0x3d97bdf7u, 0xdbcf37a8u, 0x7a06b159u, 0x183e2b0au, 0xb675a4bbu,
    0x54ad1e6cu, 0xf2e4981du, 0x911c11ceu, 0x2f538b7fu, 0xcd8b0530u, 0x6bc27ee1u, 0x09f9f892u, 0xa8317243u,
    0x4668ebf4u, 0xe4a065a5u, 0x82d7df56u, 0x210f5907u, 0xbf46d2b8u, 0x5d7e4c69u, 0xfbb5c61au, 0x99ed3fcbu,
    0x3824b97cu, 0xd65c332du, 0x7493acdeu, 0x12cb268fu, 0xb102a040u, 0x4f3a19f1u, 0xed7193a2u, 0x8ba90d53u,
    0x29e08704u, 0xc81800b5u, 0x664f7a66u, 0x0486f417u, 0xa2be6dc8u, 0x40f5e779u, 0xdf2d612au, 0x7d64dadbu,
    0x1b9c548cu, 0xb9d3ce3du, 0x580b47eeu, 0xf642c19fu, 0x947a3b50u, 0x32b1b501u, 0xd0e92eb2u, 0x6f20a863u,
    0x0d582214u, 0xab8f9bc5u, 0x49c71576u, 0xe7fe8f27u, 0x863608d8u, 0x246d8289u, 0xc2a4fc3au, 0x60dc75ebu,
    0xff13ef9cu, 0x9d4b694du, 0x3b82e2feu, 0xd9ba5cafu, 0x77f1d660u, 0x16295011u, 0xb460c9c2u, 0x52984373u,
    0xf0cfbd24u, 0x8f0736d5u, 0x2d3eb086u, 0xcb762a37u, 0x69ada3e8u, 0x07e51d99u, 0xa61c974au, 0x445410fbu,
};

static const uint32_t bshim_226_tab7[96] = {
    0x0f6cfd0du, 0xada476beu, 0x4bdbf06fu, 0xea136a20u, 0x884ae3d1u, 0x26825d82u, 0xc4b9d733u, 0x62f150e4u,
    0x0128ca95u, 0x9f604446u, 0x3d97bdf7u, 0xdbcf37a8u, 0x7a06b159u, 0x183e2b0au, 0xb675a4bbu, 0x54ad1e6cu,
    0xf2e4981du, 0x911c11ceu, 0x2f538b7fu, 0xcd8b0530u, 0x6bc27ee1u, 0x09f9f892u, 0xa8317243u, 0x4668ebf4u,
    0xe4a065a5u, 0x82d7df56u, 0x210f5907u, 0xbf46d2b8u, 0x5d7e4c69u, 0xfbb5c61au, 0x99ed3fcbu, 0x3824b97cu,
    0xd65c332du, 0x7493acdeu, 0x12cb268fu, 0xb102a040u, 0x4f3a19f1u, 0xed7193a2u, 0x8ba90d53u, 0x29e08704u,
    0xc81800b5u, 0x664f7a66u, 0x0486f417u, 0xa2be6dc8u, 0x40f5e779u, 0xdf2d612au, 0x7d64dadbu, 0x1b9c548cu,
    0xb9d3ce3du, 0x580b47eeu, 0xf642c19fu, 0x947a3b50u, 0x32b1b501u, 0xd0e92eb2u, 0x6f20a863u, 0x0d582214u,
    0xab8f9bc5u, 0x49c71576u, 0xe7fe8f27u, 0x863608d8u, 0x246d8289u, 0xc2a4fc3au, 0x60dc75ebu, 0xff13ef9cu,
    0x9d4b694du, 0x3b82e2feu, 0xd9ba5cafu, 0x77f1d660u, 0x16295011u, 0xb460c9c2u, 0x52984373u, 0xf0cfbd24u,
    0x8f0736d5u, 0x2d3eb086u, 0xcb762a37u, 0x69ada3e8u, 0x07e51d99u, 0xa61c974au, 0x445410fbu, 0xe28b8aacu,
    0x80c3045du, 0x1efa7e0eu, 0xbd31f7bfu, 0x5b697170u, 0xf9a0eb21u, 0x97d864d2u, 0x360fde83u, 0xd4475834u,
    0x727ed1e5u, 0x10b64b96u, 0xaeedc547u, 0x4d253ef8u, 0xeb5cb8a9u, 0x8994325au, 0x27cbac0bu, 0xc60325bcu,
};

struct bshim_226_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_226_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_226_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_226_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_226_reset(struct bshim_226_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001b4efeu;
    return 0;
}

