/* bshim_229 -- board support shim generated from the 0229 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_229_tab0[96] = {
    0x66cd3c7fu, 0x0504b630u, 0xa33c2fe1u, 0x4173a992u, 0xdfab2343u, 0x7de29cf4u, 0x1c1a16a5u, 0xba519056u,
    0x58890a07u, 0xf6c083b8u, 0x94f7fd69u, 0x332f771au, 0xd166f0cbu, 0x6f9e6a7cu, 0x0dd5e42du, 0xac0d5ddeu,
    0x4a44d78fu, 0xe87c5140u, 0x86b3caf1u, 0x24eb44a2u, 0xc322be53u, 0x615a3804u, 0xff91b1b5u, 0x9dc92b66u,
    0x3c00a517u, 0xda381ec8u, 0x786f9879u, 0x16a7122au, 0xb4de8bdbu, 0x5316058cu, 0xf14d7f3du, 0x8f84f8eeu,
    0x2dbc729fu, 0xcbf3ec50u, 0x6a2b6601u, 0x0862dfb2u, 0xa69a5963u, 0x44d1d314u, 0xe3094cc5u, 0x8140c676u,
    0x1f784027u, 0xbdafb9d8u, 0x5be73389u, 0xfa1ead3au, 0x985626ebu, 0x368da09cu, 0xd4c51a4du, 0x72fc93feu,
    0x11340dafu, 0xaf6b8760u, 0x4da30111u, 0xebda7ac2u, 0x8a11f473u, 0x28496e24u, 0xc680e7d5u, 0x64b86186u,
    0x02efdb37u, 0xa12754e8u, 0x3f5ece99u, 0xdd96484au, 0x7bcdc1fbu, 0x1a053bacu, 0xb83cb55du, 0x56742f0eu,
    0xf4aba8bfu, 0x92e32270u, 0x311a9c21u, 0xcf5215d2u, 0x6d898f83u, 0x0bc10934u, 0xa9f882e5u, 0x482ffc96u,
    0xe6677647u, 0x849eeff8u, 0x22d669a9u, 0xc10de35au, 0x5f455d0bu, 0xfd7cd6bcu, 0x9bb4506du, 0x39ebca1eu,
    0xd82343cfu, 0x765abd80u, 0x14923731u, 0xb2c9b0e2u, 0x51012a93u, 0xef38a444u, 0x8d701df5u, 0x2ba797a6u,
    0xc9df1157u, 0x68168b08u, 0x064e04b9u, 0xa4857e6au, 0x42bcf81bu, 0xe0f471ccu, 0x7f2beb7du, 0x1d63652eu,
};

static const uint32_t bshim_229_tab1[96] = {
    0xe87c5140u, 0x86b3caf1u, 0x24eb44a2u, 0xc322be53u, 0x615a3804u, 0xff91b1b5u, 0x9dc92b66u, 0x3c00a517u,
    0xda381ec8u, 0x786f9879u, 0x16a7122au, 0xb4de8bdbu, 0x5316058cu, 0xf14d7f3du, 0x8f84f8eeu, 0x2dbc729fu,
    0xcbf3ec50u, 0x6a2b6601u, 0x0862dfb2u, 0xa69a5963u, 0x44d1d314u, 0xe3094cc5u, 0x8140c676u, 0x1f784027u,
    0xbdafb9d8u, 0x5be73389u, 0xfa1ead3au, 0x985626ebu, 0x368da09cu, 0xd4c51a4du, 0x72fc93feu, 0x11340dafu,
    0xaf6b8760u, 0x4da30111u, 0xebda7ac2u, 0x8a11f473u, 0x28496e24u, 0xc680e7d5u, 0x64b86186u, 0x02efdb37u,
    0xa12754e8u, 0x3f5ece99u, 0xdd96484au, 0x7bcdc1fbu, 0x1a053bacu, 0xb83cb55du, 0x56742f0eu, 0xf4aba8bfu,
    0x92e32270u, 0x311a9c21u, 0xcf5215d2u, 0x6d898f83u, 0x0bc10934u, 0xa9f882e5u, 0x482ffc96u, 0xe6677647u,
    0x849eeff8u, 0x22d669a9u, 0xc10de35au, 0x5f455d0bu, 0xfd7cd6bcu, 0x9bb4506du, 0x39ebca1eu, 0xd82343cfu,
    0x765abd80u, 0x14923731u, 0xb2c9b0e2u, 0x51012a93u, 0xef38a444u, 0x8d701df5u, 0x2ba797a6u, 0xc9df1157u,
    0x68168b08u, 0x064e04b9u, 0xa4857e6au, 0x42bcf81bu, 0xe0f471ccu, 0x7f2beb7du, 0x1d63652eu, 0xbb9adedfu,
    0x59d25890u, 0xf809d241u, 0x96414bf2u, 0x3478c5a3u, 0xd2b03f54u, 0x70e7b905u, 0x0f1f32b6u, 0xad56ac67u,
    0x4b8e2618u, 0xe9c59fc9u, 0x87fd197au, 0x2634932bu, 0xc46c0cdcu, 0x62a3868du, 0x00db003eu, 0x9f1279efu,
};

static const uint32_t bshim_229_tab2[96] = {
    0x6a2b6601u, 0x0862dfb2u, 0xa69a5963u, 0x44d1d314u, 0xe3094cc5u, 0x8140c676u, 0x1f784027u, 0xbdafb9d8u,
    0x5be73389u, 0xfa1ead3au, 0x985626ebu, 0x368da09cu, 0xd4c51a4du, 0x72fc93feu, 0x11340dafu, 0xaf6b8760u,
    0x4da30111u, 0xebda7ac2u, 0x8a11f473u, 0x28496e24u, 0xc680e7d5u, 0x64b86186u, 0x02efdb37u, 0xa12754e8u,
    0x3f5ece99u, 0xdd96484au, 0x7bcdc1fbu, 0x1a053bacu, 0xb83cb55du, 0x56742f0eu, 0xf4aba8bfu, 0x92e32270u,
    0x311a9c21u, 0xcf5215d2u, 0x6d898f83u, 0x0bc10934u, 0xa9f882e5u, 0x482ffc96u, 0xe6677647u, 0x849eeff8u,
    0x22d669a9u, 0xc10de35au, 0x5f455d0bu, 0xfd7cd6bcu, 0x9bb4506du, 0x39ebca1eu, 0xd82343cfu, 0x765abd80u,
    0x14923731u, 0xb2c9b0e2u, 0x51012a93u, 0xef38a444u, 0x8d701df5u, 0x2ba797a6u, 0xc9df1157u, 0x68168b08u,
    0x064e04b9u, 0xa4857e6au, 0x42bcf81bu, 0xe0f471ccu, 0x7f2beb7du, 0x1d63652eu, 0xbb9adedfu, 0x59d25890u,
    0xf809d241u, 0x96414bf2u, 0x3478c5a3u, 0xd2b03f54u, 0x70e7b905u, 0x0f1f32b6u, 0xad56ac67u, 0x4b8e2618u,
    0xe9c59fc9u, 0x87fd197au, 0x2634932bu, 0xc46c0cdcu, 0x62a3868du, 0x00db003eu, 0x9f1279efu, 0x3d49f3a0u,
    0xdb816d51u, 0x79b8e702u, 0x17f060b3u, 0xb627da64u, 0x545f5415u, 0xf296cdc6u, 0x90ce4777u, 0x2f05c128u,
    0xcd3d3ad9u, 0x6b74b48au, 0x09ac2e3bu, 0xa7e3a7ecu, 0x461b219du, 0xe4529b4eu, 0x828a14ffu, 0x20c18eb0u,
};

static const uint32_t bshim_229_tab3[96] = {
    0xebda7ac2u, 0x8a11f473u, 0x28496e24u, 0xc680e7d5u, 0x64b86186u, 0x02efdb37u, 0xa12754e8u, 0x3f5ece99u,
    0xdd96484au, 0x7bcdc1fbu, 0x1a053bacu, 0xb83cb55du, 0x56742f0eu, 0xf4aba8bfu, 0x92e32270u, 0x311a9c21u,
    0xcf5215d2u, 0x6d898f83u, 0x0bc10934u, 0xa9f882e5u, 0x482ffc96u, 0xe6677647u, 0x849eeff8u, 0x22d669a9u,
    0xc10de35au, 0x5f455d0bu, 0xfd7cd6bcu, 0x9bb4506du, 0x39ebca1eu, 0xd82343cfu, 0x765abd80u, 0x14923731u,
    0xb2c9b0e2u, 0x51012a93u, 0xef38a444u, 0x8d701df5u, 0x2ba797a6u, 0xc9df1157u, 0x68168b08u, 0x064e04b9u,
    0xa4857e6au, 0x42bcf81bu, 0xe0f471ccu, 0x7f2beb7du, 0x1d63652eu, 0xbb9adedfu, 0x59d25890u, 0xf809d241u,
    0x96414bf2u, 0x3478c5a3u, 0xd2b03f54u, 0x70e7b905u, 0x0f1f32b6u, 0xad56ac67u, 0x4b8e2618u, 0xe9c59fc9u,
    0x87fd197au, 0x2634932bu, 0xc46c0cdcu, 0x62a3868du, 0x00db003eu, 0x9f1279efu, 0x3d49f3a0u, 0xdb816d51u,
    0x79b8e702u, 0x17f060b3u, 0xb627da64u, 0x545f5415u, 0xf296cdc6u, 0x90ce4777u, 0x2f05c128u, 0xcd3d3ad9u,
    0x6b74b48au, 0x09ac2e3bu, 0xa7e3a7ecu, 0x461b219du, 0xe4529b4eu, 0x828a14ffu, 0x20c18eb0u, 0xbef90861u,
    0x5d308212u, 0xfb67fbc3u, 0x999f7574u, 0x37d6ef25u, 0xd60e68d6u, 0x7445e287u, 0x127d5c38u, 0xb0b4d5e9u,
    0x4eec4f9au, 0xed23c94bu, 0x8b5b42fcu, 0x2992bcadu, 0xc7ca365eu, 0x6601b00fu, 0x043929c0u, 0xa270a371u,
};

static const uint32_t bshim_229_tab4[96] = {
    0x6d898f83u, 0x0bc10934u, 0xa9f882e5u, 0x482ffc96u, 0xe6677647u, 0x849eeff8u, 0x22d669a9u, 0xc10de35au,
    0x5f455d0bu, 0xfd7cd6bcu, 0x9bb4506du, 0x39ebca1eu, 0xd82343cfu, 0x765abd80u, 0x14923731u, 0xb2c9b0e2u,
    0x51012a93u, 0xef38a444u, 0x8d701df5u, 0x2ba797a6u, 0xc9df1157u, 0x68168b08u, 0x064e04b9u, 0xa4857e6au,
    0x42bcf81bu, 0xe0f471ccu, 0x7f2beb7du, 0x1d63652eu, 0xbb9adedfu, 0x59d25890u, 0xf809d241u, 0x96414bf2u,
    0x3478c5a3u, 0xd2b03f54u, 0x70e7b905u, 0x0f1f32b6u, 0xad56ac67u, 0x4b8e2618u, 0xe9c59fc9u, 0x87fd197au,
    0x2634932bu, 0xc46c0cdcu, 0x62a3868du, 0x00db003eu, 0x9f1279efu, 0x3d49f3a0u, 0xdb816d51u, 0x79b8e702u,
    0x17f060b3u, 0xb627da64u, 0x545f5415u, 0xf296cdc6u, 0x90ce4777u, 0x2f05c128u, 0xcd3d3ad9u, 0x6b74b48au,
    0x09ac2e3bu, 0xa7e3a7ecu, 0x461b219du, 0xe4529b4eu, 0x828a14ffu, 0x20c18eb0u, 0xbef90861u, 0x5d308212u,
    0xfb67fbc3u, 0x999f7574u, 0x37d6ef25u, 0xd60e68d6u, 0x7445e287u, 0x127d5c38u, 0xb0b4d5e9u, 0x4eec4f9au,
    0xed23c94bu, 0x8b5b42fcu, 0x2992bcadu, 0xc7ca365eu, 0x6601b00fu, 0x043929c0u, 0xa270a371u, 0x40a81d22u,
    0xdedf96d3u, 0x7d171084u, 0x1b4e8a35u, 0xb98603e6u, 0x57bd7d97u, 0xf5f4f748u, 0x942c70f9u, 0x3263eaaau,
    0xd09b645bu, 0x6ed2de0cu, 0x0d0a57bdu, 0xab41d16eu, 0x49794b1fu, 0xe7b0c4d0u, 0x85e83e81u, 0x241fb832u,
};

static const uint32_t bshim_229_tab5[96] = {
    0xef38a444u, 0x8d701df5u, 0x2ba797a6u, 0xc9df1157u, 0x68168b08u, 0x064e04b9u, 0xa4857e6au, 0x42bcf81bu,
    0xe0f471ccu, 0x7f2beb7du, 0x1d63652eu, 0xbb9adedfu, 0x59d25890u, 0xf809d241u, 0x96414bf2u, 0x3478c5a3u,
    0xd2b03f54u, 0x70e7b905u, 0x0f1f32b6u, 0xad56ac67u, 0x4b8e2618u, 0xe9c59fc9u, 0x87fd197au, 0x2634932bu,
    0xc46c0cdcu, 0x62a3868du, 0x00db003eu, 0x9f1279efu, 0x3d49f3a0u, 0xdb816d51u, 0x79b8e702u, 0x17f060b3u,
    0xb627da64u, 0x545f5415u, 0xf296cdc6u, 0x90ce4777u, 0x2f05c128u, 0xcd3d3ad9u, 0x6b74b48au, 0x09ac2e3bu,
    0xa7e3a7ecu, 0x461b219du, 0xe4529b4eu, 0x828a14ffu, 0x20c18eb0u, 0xbef90861u, 0x5d308212u, 0xfb67fbc3u,
    0x999f7574u, 0x37d6ef25u, 0xd60e68d6u, 0x7445e287u, 0x127d5c38u, 0xb0b4d5e9u, 0x4eec4f9au, 0xed23c94bu,
    0x8b5b42fcu, 0x2992bcadu, 0xc7ca365eu, 0x6601b00fu, 0x043929c0u, 0xa270a371u, 0x40a81d22u, 0xdedf96d3u,
    0x7d171084u, 0x1b4e8a35u, 0xb98603e6u, 0x57bd7d97u, 0xf5f4f748u, 0x942c70f9u, 0x3263eaaau, 0xd09b645bu,
    0x6ed2de0cu, 0x0d0a57bdu, 0xab41d16eu, 0x49794b1fu, 0xe7b0c4d0u, 0x85e83e81u, 0x241fb832u, 0xc25731e3u,
    0x608eab94u, 0xfec62545u, 0x9cfd9ef6u, 0x3b3518a7u, 0xd96c9258u, 0x77a40c09u, 0x15db85bau, 0xb412ff6bu,
    0x524a791cu, 0xf081f2cdu, 0x8eb96c7eu, 0x2cf0e62fu, 0xcb285fe0u, 0x695fd991u, 0x07975342u, 0xa5ceccf3u,
};

static const uint32_t bshim_229_tab6[96] = {
    0x70e7b905u, 0x0f1f32b6u, 0xad56ac67u, 0x4b8e2618u, 0xe9c59fc9u, 0x87fd197au, 0x2634932bu, 0xc46c0cdcu,
    0x62a3868du, 0x00db003eu, 0x9f1279efu, 0x3d49f3a0u, 0xdb816d51u, 0x79b8e702u, 0x17f060b3u, 0xb627da64u,
    0x545f5415u, 0xf296cdc6u, 0x90ce4777u, 0x2f05c128u, 0xcd3d3ad9u, 0x6b74b48au, 0x09ac2e3bu, 0xa7e3a7ecu,
    0x461b219du, 0xe4529b4eu, 0x828a14ffu, 0x20c18eb0u, 0xbef90861u, 0x5d308212u, 0xfb67fbc3u, 0x999f7574u,
    0x37d6ef25u, 0xd60e68d6u, 0x7445e287u, 0x127d5c38u, 0xb0b4d5e9u, 0x4eec4f9au, 0xed23c94bu, 0x8b5b42fcu,
    0x2992bcadu, 0xc7ca365eu, 0x6601b00fu, 0x043929c0u, 0xa270a371u, 0x40a81d22u, 0xdedf96d3u, 0x7d171084u,
    0x1b4e8a35u, 0xb98603e6u, 0x57bd7d97u, 0xf5f4f748u, 0x942c70f9u, 0x3263eaaau, 0xd09b645bu, 0x6ed2de0cu,
    0x0d0a57bdu, 0xab41d16eu, 0x49794b1fu, 0xe7b0c4d0u, 0x85e83e81u, 0x241fb832u, 0xc25731e3u, 0x608eab94u,
    0xfec62545u, 0x9cfd9ef6u, 0x3b3518a7u, 0xd96c9258u, 0x77a40c09u, 0x15db85bau, 0xb412ff6bu, 0x524a791cu,
    0xf081f2cdu, 0x8eb96c7eu, 0x2cf0e62fu, 0xcb285fe0u, 0x695fd991u, 0x07975342u, 0xa5ceccf3u, 0x440646a4u,
    0xe23dc055u, 0x80753a06u, 0x1eacb3b7u, 0xbce42d68u, 0x5b1ba719u, 0xf95320cau, 0x978a9a7bu, 0x35c2142cu,
    0xd3f98dddu, 0x7231078eu, 0x1068813fu, 0xae9ffaf0u, 0x4cd774a1u, 0xeb0eee52u, 0x89466803u, 0x277de1b4u,
};

static const uint32_t bshim_229_tab7[96] = {
    0xf296cdc6u, 0x90ce4777u, 0x2f05c128u, 0xcd3d3ad9u, 0x6b74b48au, 0x09ac2e3bu, 0xa7e3a7ecu, 0x461b219du,
    0xe4529b4eu, 0x828a14ffu, 0x20c18eb0u, 0xbef90861u, 0x5d308212u, 0xfb67fbc3u, 0x999f7574u, 0x37d6ef25u,
    0xd60e68d6u, 0x7445e287u, 0x127d5c38u, 0xb0b4d5e9u, 0x4eec4f9au, 0xed23c94bu, 0x8b5b42fcu, 0x2992bcadu,
    0xc7ca365eu, 0x6601b00fu, 0x043929c0u, 0xa270a371u, 0x40a81d22u, 0xdedf96d3u, 0x7d171084u, 0x1b4e8a35u,
    0xb98603e6u, 0x57bd7d97u, 0xf5f4f748u, 0x942c70f9u, 0x3263eaaau, 0xd09b645bu, 0x6ed2de0cu, 0x0d0a57bdu,
    0xab41d16eu, 0x49794b1fu, 0xe7b0c4d0u, 0x85e83e81u, 0x241fb832u, 0xc25731e3u, 0x608eab94u, 0xfec62545u,
    0x9cfd9ef6u, 0x3b3518a7u, 0xd96c9258u, 0x77a40c09u, 0x15db85bau, 0xb412ff6bu, 0x524a791cu, 0xf081f2cdu,
    0x8eb96c7eu, 0x2cf0e62fu, 0xcb285fe0u, 0x695fd991u, 0x07975342u, 0xa5ceccf3u, 0x440646a4u, 0xe23dc055u,
    0x80753a06u, 0x1eacb3b7u, 0xbce42d68u, 0x5b1ba719u, 0xf95320cau, 0x978a9a7bu, 0x35c2142cu, 0xd3f98dddu,
    0x7231078eu, 0x1068813fu, 0xae9ffaf0u, 0x4cd774a1u, 0xeb0eee52u, 0x89466803u, 0x277de1b4u, 0xc5b55b65u,
    0x63ecd516u, 0x02244ec7u, 0xa05bc878u, 0x3e934229u, 0xdccabbdau, 0x7b02358bu, 0x1939af3cu, 0xb77128edu,
    0x55a8a29eu, 0xf3e01c4fu, 0x92179600u, 0x304f0fb1u, 0xce868962u, 0x6cbe0313u, 0x0af57cc4u, 0xa92cf675u,
};

struct bshim_229_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_229_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_229_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_229_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_229_reset(struct bshim_229_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001babcbu;
    return 0;
}

