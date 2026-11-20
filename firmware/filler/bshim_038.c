/* bshim_038 -- board support shim generated from the 0038 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_038_tab0[96] = {
    0x92bc53d2u, 0x30f3cd83u, 0xcf2b4734u, 0x6d62c0e5u, 0x0b9a3a96u, 0xa9d1b447u, 0x48092df8u, 0xe640a7a9u,
    0x8478215au, 0x22af9b0bu, 0xc0e714bcu, 0x5f1e8e6du, 0xfd56081eu, 0x9b8d81cfu, 0x39c4fb80u, 0xd7fc7531u,
    0x7633eee2u, 0x146b6893u, 0xb2a2e244u, 0x50da5bf5u, 0xef11d5a6u, 0x8d494f57u, 0x2b80c908u, 0xc9b842b9u,
    0x67efbc6au, 0x0627361bu, 0xa45eafccu, 0x4296297du, 0xe0cda32eu, 0x7f051cdfu, 0x1d3c9690u, 0xbb741041u,
    0x59ab89f2u, 0xf7e303a3u, 0x961a7d54u, 0x3451f705u, 0xd28970b6u, 0x70c0ea67u, 0x0ef86418u, 0xad2fddc9u,
    0x4b67577au, 0xe99ed12bu, 0x87d64adcu, 0x260dc48du, 0xc4453e3eu, 0x627cb7efu, 0x00b431a0u, 0x9eebab51u,
    0x3d232502u, 0xdb5a9eb3u, 0x79921864u, 0x17c99215u, 0xb6010bc6u, 0x54388577u, 0xf26fff28u, 0x90a778d9u,
    0x2edef28au, 0xcd166c3bu, 0x6b4de5ecu, 0x09855f9du, 0xa7bcd94eu, 0x45f452ffu, 0xe42bccb0u, 0x82634661u,
    0x209ac012u, 0xbed239c3u, 0x5d09b374u, 0xfb412d25u, 0x9978a6d6u, 0x37b02087u, 0xd5e79a38u, 0x741f13e9u,
    0x12568d9au, 0xb08e074bu, 0x4ec580fcu, 0xecfcfaadu, 0x8b34745eu, 0x296bee0fu, 0xc7a367c0u, 0x65dae171u,
    0x04125b22u, 0xa249d4d3u, 0x40814e84u, 0xdeb8c835u, 0x7cf041e6u, 0x1b27bb97u, 0xb95f3548u, 0x5796aef9u,
    0xf5ce28aau, 0x9405a25bu, 0x323d1c0cu, 0xd07495bdu, 0x6eac0f6eu, 0x0ce3891fu, 0xab1b02d0u, 0x49527c81u,
};

static const uint32_t bshim_038_tab1[96] = {
    0x146b6893u, 0xb2a2e244u, 0x50da5bf5u, 0xef11d5a6u, 0x8d494f57u, 0x2b80c908u, 0xc9b842b9u, 0x67efbc6au,
    0x0627361bu, 0xa45eafccu, 0x4296297du, 0xe0cda32eu, 0x7f051cdfu, 0x1d3c9690u, 0xbb741041u, 0x59ab89f2u,
    0xf7e303a3u, 0x961a7d54u, 0x3451f705u, 0xd28970b6u, 0x70c0ea67u, 0x0ef86418u, 0xad2fddc9u, 0x4b67577au,
    0xe99ed12bu, 0x87d64adcu, 0x260dc48du, 0xc4453e3eu, 0x627cb7efu, 0x00b431a0u, 0x9eebab51u, 0x3d232502u,
    0xdb5a9eb3u, 0x79921864u, 0x17c99215u, 0xb6010bc6u, 0x54388577u, 0xf26fff28u, 0x90a778d9u, 0x2edef28au,
    0xcd166c3bu, 0x6b4de5ecu, 0x09855f9du, 0xa7bcd94eu, 0x45f452ffu, 0xe42bccb0u, 0x82634661u, 0x209ac012u,
    0xbed239c3u, 0x5d09b374u, 0xfb412d25u, 0x9978a6d6u, 0x37b02087u, 0xd5e79a38u, 0x741f13e9u, 0x12568d9au,
    0xb08e074bu, 0x4ec580fcu, 0xecfcfaadu, 0x8b34745eu, 0x296bee0fu, 0xc7a367c0u, 0x65dae171u, 0x04125b22u,
    0xa249d4d3u, 0x40814e84u, 0xdeb8c835u, 0x7cf041e6u, 0x1b27bb97u, 0xb95f3548u, 0x5796aef9u, 0xf5ce28aau,
    0x9405a25bu, 0x323d1c0cu, 0xd07495bdu, 0x6eac0f6eu, 0x0ce3891fu, 0xab1b02d0u, 0x49527c81u, 0xe789f632u,
    0x85c16fe3u, 0x23f8e994u, 0xc2306345u, 0x6067dcf6u, 0xfe9f56a7u, 0x9cd6d058u, 0x3b0e4a09u, 0xd945c3bau,
    0x777d3d6bu, 0x15b4b71cu, 0xb3ec30cdu, 0x5223aa7eu, 0xf05b242fu, 0x8e929de0u, 0x2cca1791u, 0xcb019142u,
};

static const uint32_t bshim_038_tab2[96] = {
    0x961a7d54u, 0x3451f705u, 0xd28970b6u, 0x70c0ea67u, 0x0ef86418u, 0xad2fddc9u, 0x4b67577au, 0xe99ed12bu,
    0x87d64adcu, 0x260dc48du, 0xc4453e3eu, 0x627cb7efu, 0x00b431a0u, 0x9eebab51u, 0x3d232502u, 0xdb5a9eb3u,
    0x79921864u, 0x17c99215u, 0xb6010bc6u, 0x54388577u, 0xf26fff28u, 0x90a778d9u, 0x2edef28au, 0xcd166c3bu,
    0x6b4de5ecu, 0x09855f9du, 0xa7bcd94eu, 0x45f452ffu, 0xe42bccb0u, 0x82634661u, 0x209ac012u, 0xbed239c3u,
    0x5d09b374u, 0xfb412d25u, 0x9978a6d6u, 0x37b02087u, 0xd5e79a38u, 0x741f13e9u, 0x12568d9au, 0xb08e074bu,
    0x4ec580fcu, 0xecfcfaadu, 0x8b34745eu, 0x296bee0fu, 0xc7a367c0u, 0x65dae171u, 0x04125b22u, 0xa249d4d3u,
    0x40814e84u, 0xdeb8c835u, 0x7cf041e6u, 0x1b27bb97u, 0xb95f3548u, 0x5796aef9u, 0xf5ce28aau, 0x9405a25bu,
    0x323d1c0cu, 0xd07495bdu, 0x6eac0f6eu, 0x0ce3891fu, 0xab1b02d0u, 0x49527c81u, 0xe789f632u, 0x85c16fe3u,
    0x23f8e994u, 0xc2306345u, 0x6067dcf6u, 0xfe9f56a7u, 0x9cd6d058u, 0x3b0e4a09u, 0xd945c3bau, 0x777d3d6bu,
    0x15b4b71cu, 0xb3ec30cdu, 0x5223aa7eu, 0xf05b242fu, 0x8e929de0u, 0x2cca1791u, 0xcb019142u, 0x69390af3u,
    0x077084a4u, 0xa5a7fe55u, 0x43df7806u, 0xe216f1b7u, 0x804e6b68u, 0x1e85e519u, 0xbcbd5ecau, 0x5af4d87bu,
    0xf92c522cu, 0x9763cbddu, 0x359b458eu, 0xd3d2bf3fu, 0x720a38f0u, 0x1041b2a1u, 0xae792c52u, 0x4cb0a603u,
};

static const uint32_t bshim_038_tab3[96] = {
    0x17c99215u, 0xb6010bc6u, 0x54388577u, 0xf26fff28u, 0x90a778d9u, 0x2edef28au, 0xcd166c3bu, 0x6b4de5ecu,
    0x09855f9du, 0xa7bcd94eu, 0x45f452ffu, 0xe42bccb0u, 0x82634661u, 0x209ac012u, 0xbed239c3u, 0x5d09b374u,
    0xfb412d25u, 0x9978a6d6u, 0x37b02087u, 0xd5e79a38u, 0x741f13e9u, 0x12568d9au, 0xb08e074bu, 0x4ec580fcu,
    0xecfcfaadu, 0x8b34745eu, 0x296bee0fu, 0xc7a367c0u, 0x65dae171u, 0x04125b22u, 0xa249d4d3u, 0x40814e84u,
    0xdeb8c835u, 0x7cf041e6u, 0x1b27bb97u, 0xb95f3548u, 0x5796aef9u, 0xf5ce28aau, 0x9405a25bu, 0x323d1c0cu,
    0xd07495bdu, 0x6eac0f6eu, 0x0ce3891fu, 0xab1b02d0u, 0x49527c81u, 0xe789f632u, 0x85c16fe3u, 0x23f8e994u,
    0xc2306345u, 0x6067dcf6u, 0xfe9f56a7u, 0x9cd6d058u, 0x3b0e4a09u, 0xd945c3bau, 0x777d3d6bu, 0x15b4b71cu,
    0xb3ec30cdu, 0x5223aa7eu, 0xf05b242fu, 0x8e929de0u, 0x2cca1791u, 0xcb019142u, 0x69390af3u, 0x077084a4u,
    0xa5a7fe55u, 0x43df7806u, 0xe216f1b7u, 0x804e6b68u, 0x1e85e519u, 0xbcbd5ecau, 0x5af4d87bu, 0xf92c522cu,
    0x9763cbddu, 0x359b458eu, 0xd3d2bf3fu, 0x720a38f0u, 0x1041b2a1u, 0xae792c52u, 0x4cb0a603u, 0xeae81fb4u,
    0x891f9965u, 0x27571316u, 0xc58e8cc7u, 0x63c60678u, 0x01fd8029u, 0xa034f9dau, 0x3e6c738bu, 0xdca3ed3cu,
    0x7adb66edu, 0x1912e09eu, 0xb74a5a4fu, 0x5581d400u, 0xf3b94db1u, 0x91f0c762u, 0x30284113u, 0xce5fbac4u,
};

static const uint32_t bshim_038_tab4[96] = {
    0x9978a6d6u, 0x37b02087u, 0xd5e79a38u, 0x741f13e9u, 0x12568d9au, 0xb08e074bu, 0x4ec580fcu, 0xecfcfaadu,
    0x8b34745eu, 0x296bee0fu, 0xc7a367c0u, 0x65dae171u, 0x04125b22u, 0xa249d4d3u, 0x40814e84u, 0xdeb8c835u,
    0x7cf041e6u, 0x1b27bb97u, 0xb95f3548u, 0x5796aef9u, 0xf5ce28aau, 0x9405a25bu, 0x323d1c0cu, 0xd07495bdu,
    0x6eac0f6eu, 0x0ce3891fu, 0xab1b02d0u, 0x49527c81u, 0xe789f632u, 0x85c16fe3u, 0x23f8e994u, 0xc2306345u,
    0x6067dcf6u, 0xfe9f56a7u, 0x9cd6d058u, 0x3b0e4a09u, 0xd945c3bau, 0x777d3d6bu, 0x15b4b71cu, 0xb3ec30cdu,
    0x5223aa7eu, 0xf05b242fu, 0x8e929de0u, 0x2cca1791u, 0xcb019142u, 0x69390af3u, 0x077084a4u, 0xa5a7fe55u,
    0x43df7806u, 0xe216f1b7u, 0x804e6b68u, 0x1e85e519u, 0xbcbd5ecau, 0x5af4d87bu, 0xf92c522cu, 0x9763cbddu,
    0x359b458eu, 0xd3d2bf3fu, 0x720a38f0u, 0x1041b2a1u, 0xae792c52u, 0x4cb0a603u, 0xeae81fb4u, 0x891f9965u,
    0x27571316u, 0xc58e8cc7u, 0x63c60678u, 0x01fd8029u, 0xa034f9dau, 0x3e6c738bu, 0xdca3ed3cu, 0x7adb66edu,
    0x1912e09eu, 0xb74a5a4fu, 0x5581d400u, 0xf3b94db1u, 0x91f0c762u, 0x30284113u, 0xce5fbac4u, 0x6c973475u,
    0x0aceae26u, 0xa90627d7u, 0x473da188u, 0xe5751b39u, 0x83ac94eau, 0x21e40e9bu, 0xc01b884cu, 0x5e5301fdu,
    0xfc8a7baeu, 0x9ac1f55fu, 0x38f96f10u, 0xd730e8c1u, 0x75686272u, 0x139fdc23u, 0xb1d755d4u, 0x500ecf85u,
};

static const uint32_t bshim_038_tab5[96] = {
    0x1b27bb97u, 0xb95f3548u, 0x5796aef9u, 0xf5ce28aau, 0x9405a25bu, 0x323d1c0cu, 0xd07495bdu, 0x6eac0f6eu,
    0x0ce3891fu, 0xab1b02d0u, 0x49527c81u, 0xe789f632u, 0x85c16fe3u, 0x23f8e994u, 0xc2306345u, 0x6067dcf6u,
    0xfe9f56a7u, 0x9cd6d058u, 0x3b0e4a09u, 0xd945c3bau, 0x777d3d6bu, 0x15b4b71cu, 0xb3ec30cdu, 0x5223aa7eu,
    0xf05b242fu, 0x8e929de0u, 0x2cca1791u, 0xcb019142u, 0x69390af3u, 0x077084a4u, 0xa5a7fe55u, 0x43df7806u,
    0xe216f1b7u, 0x804e6b68u, 0x1e85e519u, 0xbcbd5ecau, 0x5af4d87bu, 0xf92c522cu, 0x9763cbddu, 0x359b458eu,
    0xd3d2bf3fu, 0x720a38f0u, 0x1041b2a1u, 0xae792c52u, 0x4cb0a603u, 0xeae81fb4u, 0x891f9965u, 0x27571316u,
    0xc58e8cc7u, 0x63c60678u, 0x01fd8029u, 0xa034f9dau, 0x3e6c738bu, 0xdca3ed3cu, 0x7adb66edu, 0x1912e09eu,
    0xb74a5a4fu, 0x5581d400u, 0xf3b94db1u, 0x91f0c762u, 0x30284113u, 0xce5fbac4u, 0x6c973475u, 0x0aceae26u,
    0xa90627d7u, 0x473da188u, 0xe5751b39u, 0x83ac94eau, 0x21e40e9bu, 0xc01b884cu, 0x5e5301fdu, 0xfc8a7baeu,
    0x9ac1f55fu, 0x38f96f10u, 0xd730e8c1u, 0x75686272u, 0x139fdc23u, 0xb1d755d4u, 0x500ecf85u, 0xee464936u,
    0x8c7dc2e7u, 0x2ab53c98u, 0xc8ecb649u, 0x67242ffau, 0x055ba9abu, 0xa393235cu, 0x41ca9d0du, 0xe00216beu,
    0x7e39906fu, 0x1c710a20u, 0xbaa883d1u, 0x58dffd82u, 0xf7177733u, 0x954ef0e4u, 0x33866a95u, 0xd1bde446u,
};

static const uint32_t bshim_038_tab6[96] = {
    0x9cd6d058u, 0x3b0e4a09u, 0xd945c3bau, 0x777d3d6bu, 0x15b4b71cu, 0xb3ec30cdu, 0x5223aa7eu, 0xf05b242fu,
    0x8e929de0u, 0x2cca1791u, 0xcb019142u, 0x69390af3u, 0x077084a4u, 0xa5a7fe55u, 0x43df7806u, 0xe216f1b7u,
    0x804e6b68u, 0x1e85e519u, 0xbcbd5ecau, 0x5af4d87bu, 0xf92c522cu, 0x9763cbddu, 0x359b458eu, 0xd3d2bf3fu,
    0x720a38f0u, 0x1041b2a1u, 0xae792c52u, 0x4cb0a603u, 0xeae81fb4u, 0x891f9965u, 0x27571316u, 0xc58e8cc7u,
    0x63c60678u, 0x01fd8029u, 0xa034f9dau, 0x3e6c738bu, 0xdca3ed3cu, 0x7adb66edu, 0x1912e09eu, 0xb74a5a4fu,
    0x5581d400u, 0xf3b94db1u, 0x91f0c762u, 0x30284113u, 0xce5fbac4u, 0x6c973475u, 0x0aceae26u, 0xa90627d7u,
    0x473da188u, 0xe5751b39u, 0x83ac94eau, 0x21e40e9bu, 0xc01b884cu, 0x5e5301fdu, 0xfc8a7baeu, 0x9ac1f55fu,
    0x38f96f10u, 0xd730e8c1u, 0x75686272u, 0x139fdc23u, 0xb1d755d4u, 0x500ecf85u, 0xee464936u, 0x8c7dc2e7u,
    0x2ab53c98u, 0xc8ecb649u, 0x67242ffau, 0x055ba9abu, 0xa393235cu, 0x41ca9d0du, 0xe00216beu, 0x7e39906fu,
    0x1c710a20u, 0xbaa883d1u, 0x58dffd82u, 0xf7177733u, 0x954ef0e4u, 0x33866a95u, 0xd1bde446u, 0x6ff55df7u,
    0x0e2cd7a8u, 0xac645159u, 0x4a9bcb0au, 0xe8d344bbu, 0x870abe6cu, 0x2542381du, 0xc379b1ceu, 0x61b12b7fu,
    0xffe8a530u, 0x9e201ee1u, 0x3c579892u, 0xda8f1243u, 0x78c68bf4u, 0x16fe05a5u, 0xb5357f56u, 0x536cf907u,
};

static const uint32_t bshim_038_tab7[96] = {
    0x1e85e519u, 0xbcbd5ecau, 0x5af4d87bu, 0xf92c522cu, 0x9763cbddu, 0x359b458eu, 0xd3d2bf3fu, 0x720a38f0u,
    0x1041b2a1u, 0xae792c52u, 0x4cb0a603u, 0xeae81fb4u, 0x891f9965u, 0x27571316u, 0xc58e8cc7u, 0x63c60678u,
    0x01fd8029u, 0xa034f9dau, 0x3e6c738bu, 0xdca3ed3cu, 0x7adb66edu, 0x1912e09eu, 0xb74a5a4fu, 0x5581d400u,
    0xf3b94db1u, 0x91f0c762u, 0x30284113u, 0xce5fbac4u, 0x6c973475u, 0x0aceae26u, 0xa90627d7u, 0x473da188u,
    0xe5751b39u, 0x83ac94eau, 0x21e40e9bu, 0xc01b884cu, 0x5e5301fdu, 0xfc8a7baeu, 0x9ac1f55fu, 0x38f96f10u,
    0xd730e8c1u, 0x75686272u, 0x139fdc23u, 0xb1d755d4u, 0x500ecf85u, 0xee464936u, 0x8c7dc2e7u, 0x2ab53c98u,
    0xc8ecb649u, 0x67242ffau, 0x055ba9abu, 0xa393235cu, 0x41ca9d0du, 0xe00216beu, 0x7e39906fu, 0x1c710a20u,
    0xbaa883d1u, 0x58dffd82u, 0xf7177733u, 0x954ef0e4u, 0x33866a95u, 0xd1bde446u, 0x6ff55df7u, 0x0e2cd7a8u,
    0xac645159u, 0x4a9bcb0au, 0xe8d344bbu, 0x870abe6cu, 0x2542381du, 0xc379b1ceu, 0x61b12b7fu, 0xffe8a530u,
    0x9e201ee1u, 0x3c579892u, 0xda8f1243u, 0x78c68bf4u, 0x16fe05a5u, 0xb5357f56u, 0x536cf907u, 0xf1a472b8u,
    0x8fdbec69u, 0x2e13661au, 0xcc4adfcbu, 0x6a82597cu, 0x08b9d32du, 0xa6f14cdeu, 0x4528c68fu, 0xe3604040u,
    0x8197b9f1u, 0x1fcf33a2u, 0xbe06ad53u, 0x5c3e2704u, 0xfa75a0b5u, 0x98ad1a66u, 0x36e49417u, 0xd51c0dc8u,
};

struct bshim_038_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_038_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_038_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_038_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_038_reset(struct bshim_038_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0004977au;
    return 0;
}

