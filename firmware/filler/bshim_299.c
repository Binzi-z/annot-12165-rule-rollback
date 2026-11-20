/* bshim_299 -- board support shim generated from the 0299 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_299_tab0[96] = {
    0xc5f242b1u, 0x6429bc62u, 0x02613613u, 0xa098afc4u, 0x3ed02975u, 0xdd07a326u, 0x7b3f1cd7u, 0x19769688u,
    0xb7ae1039u, 0x55e589eau, 0xf41d039bu, 0x92547d4cu, 0x308bf6fdu, 0xcec370aeu, 0x6cfaea5fu, 0x0b326410u,
    0xa969ddc1u, 0x47a15772u, 0xe5d8d123u, 0x84104ad4u, 0x2247c485u, 0xc07f3e36u, 0x5eb6b7e7u, 0xfcee3198u,
    0x9b25ab49u, 0x395d24fau, 0xd7949eabu, 0x75cc185cu, 0x1403920du, 0xb23b0bbeu, 0x5072856fu, 0xeea9ff20u,
    0x8ce178d1u, 0x2b18f282u, 0xc9506c33u, 0x6787e5e4u, 0x05bf5f95u, 0xa3f6d946u, 0x422e52f7u, 0xe065cca8u,
    0x7e9d4659u, 0x1cd4c00au, 0xbb0c39bbu, 0x5943b36cu, 0xf77b2d1du, 0x95b2a6ceu, 0x33ea207fu, 0xd2219a30u,
    0x705913e1u, 0x0e908d92u, 0xacc80743u, 0x4aff80f4u, 0xe936faa5u, 0x876e7456u, 0x25a5ee07u, 0xc3dd67b8u,
    0x6214e169u, 0x004c5b1au, 0x9e83d4cbu, 0x3cbb4e7cu, 0xdaf2c82du, 0x792a41deu, 0x1761bb8fu, 0xb5993540u,
    0x53d0aef1u, 0xf20828a2u, 0x903fa253u, 0x2e771c04u, 0xccae95b5u, 0x6ae60f66u, 0x091d8917u, 0xa75502c8u,
    0x458c7c79u, 0xe3c3f62au, 0x81fb6fdbu, 0x2032e98cu, 0xbe6a633du, 0x5ca1dceeu, 0xfad9569fu, 0x9910d050u,
    0x37484a01u, 0xd57fc3b2u, 0x73b73d63u, 0x11eeb714u, 0xb02630c5u, 0x4e5daa76u, 0xec952427u, 0x8acc9dd8u,
    0x29041789u, 0xc73b913au, 0x65730aebu, 0x03aa849cu, 0xa1e1fe4du, 0x401977feu, 0xde50f1afu, 0x7c886b60u,
};

static const uint32_t bshim_299_tab1[96] = {
    0x47a15772u, 0xe5d8d123u, 0x84104ad4u, 0x2247c485u, 0xc07f3e36u, 0x5eb6b7e7u, 0xfcee3198u, 0x9b25ab49u,
    0x395d24fau, 0xd7949eabu, 0x75cc185cu, 0x1403920du, 0xb23b0bbeu, 0x5072856fu, 0xeea9ff20u, 0x8ce178d1u,
    0x2b18f282u, 0xc9506c33u, 0x6787e5e4u, 0x05bf5f95u, 0xa3f6d946u, 0x422e52f7u, 0xe065cca8u, 0x7e9d4659u,
    0x1cd4c00au, 0xbb0c39bbu, 0x5943b36cu, 0xf77b2d1du, 0x95b2a6ceu, 0x33ea207fu, 0xd2219a30u, 0x705913e1u,
    0x0e908d92u, 0xacc80743u, 0x4aff80f4u, 0xe936faa5u, 0x876e7456u, 0x25a5ee07u, 0xc3dd67b8u, 0x6214e169u,
    0x004c5b1au, 0x9e83d4cbu, 0x3cbb4e7cu, 0xdaf2c82du, 0x792a41deu, 0x1761bb8fu, 0xb5993540u, 0x53d0aef1u,
    0xf20828a2u, 0x903fa253u, 0x2e771c04u, 0xccae95b5u, 0x6ae60f66u, 0x091d8917u, 0xa75502c8u, 0x458c7c79u,
    0xe3c3f62au, 0x81fb6fdbu, 0x2032e98cu, 0xbe6a633du, 0x5ca1dceeu, 0xfad9569fu, 0x9910d050u, 0x37484a01u,
    0xd57fc3b2u, 0x73b73d63u, 0x11eeb714u, 0xb02630c5u, 0x4e5daa76u, 0xec952427u, 0x8acc9dd8u, 0x29041789u,
    0xc73b913au, 0x65730aebu, 0x03aa849cu, 0xa1e1fe4du, 0x401977feu, 0xde50f1afu, 0x7c886b60u, 0x1abfe511u,
    0xb8f75ec2u, 0x572ed873u, 0xf5665224u, 0x939dcbd5u, 0x31d54586u, 0xd00cbf37u, 0x6e4438e8u, 0x0c7bb299u,
    0xaab32c4au, 0x48eaa5fbu, 0xe7221facu, 0x8559995du, 0x2391130eu, 0xc1c88cbfu, 0x60000670u, 0xfe378021u,
};

static const uint32_t bshim_299_tab2[96] = {
    0xc9506c33u, 0x6787e5e4u, 0x05bf5f95u, 0xa3f6d946u, 0x422e52f7u, 0xe065cca8u, 0x7e9d4659u, 0x1cd4c00au,
    0xbb0c39bbu, 0x5943b36cu, 0xf77b2d1du, 0x95b2a6ceu, 0x33ea207fu, 0xd2219a30u, 0x705913e1u, 0x0e908d92u,
    0xacc80743u, 0x4aff80f4u, 0xe936faa5u, 0x876e7456u, 0x25a5ee07u, 0xc3dd67b8u, 0x6214e169u, 0x004c5b1au,
    0x9e83d4cbu, 0x3cbb4e7cu, 0xdaf2c82du, 0x792a41deu, 0x1761bb8fu, 0xb5993540u, 0x53d0aef1u, 0xf20828a2u,
    0x903fa253u, 0x2e771c04u, 0xccae95b5u, 0x6ae60f66u, 0x091d8917u, 0xa75502c8u, 0x458c7c79u, 0xe3c3f62au,
    0x81fb6fdbu, 0x2032e98cu, 0xbe6a633du, 0x5ca1dceeu, 0xfad9569fu, 0x9910d050u, 0x37484a01u, 0xd57fc3b2u,
    0x73b73d63u, 0x11eeb714u, 0xb02630c5u, 0x4e5daa76u, 0xec952427u, 0x8acc9dd8u, 0x29041789u, 0xc73b913au,
    0x65730aebu, 0x03aa849cu, 0xa1e1fe4du, 0x401977feu, 0xde50f1afu, 0x7c886b60u, 0x1abfe511u, 0xb8f75ec2u,
    0x572ed873u, 0xf5665224u, 0x939dcbd5u, 0x31d54586u, 0xd00cbf37u, 0x6e4438e8u, 0x0c7bb299u, 0xaab32c4au,
    0x48eaa5fbu, 0xe7221facu, 0x8559995du, 0x2391130eu, 0xc1c88cbfu, 0x60000670u, 0xfe378021u, 0x9c6ef9d2u,
    0x3aa67383u, 0xd8dded34u, 0x771566e5u, 0x154ce096u, 0xb3845a47u, 0x51bbd3f8u, 0xeff34da9u, 0x8e2ac75au,
    0x2c62410bu, 0xca99babcu, 0x68d1346du, 0x0708ae1eu, 0xa54027cfu, 0x4377a180u, 0xe1af1b31u, 0x7fe694e2u,
};

static const uint32_t bshim_299_tab3[96] = {
    0x4aff80f4u, 0xe936faa5u, 0x876e7456u, 0x25a5ee07u, 0xc3dd67b8u, 0x6214e169u, 0x004c5b1au, 0x9e83d4cbu,
    0x3cbb4e7cu, 0xdaf2c82du, 0x792a41deu, 0x1761bb8fu, 0xb5993540u, 0x53d0aef1u, 0xf20828a2u, 0x903fa253u,
    0x2e771c04u, 0xccae95b5u, 0x6ae60f66u, 0x091d8917u, 0xa75502c8u, 0x458c7c79u, 0xe3c3f62au, 0x81fb6fdbu,
    0x2032e98cu, 0xbe6a633du, 0x5ca1dceeu, 0xfad9569fu, 0x9910d050u, 0x37484a01u, 0xd57fc3b2u, 0x73b73d63u,
    0x11eeb714u, 0xb02630c5u, 0x4e5daa76u, 0xec952427u, 0x8acc9dd8u, 0x29041789u, 0xc73b913au, 0x65730aebu,
    0x03aa849cu, 0xa1e1fe4du, 0x401977feu, 0xde50f1afu, 0x7c886b60u, 0x1abfe511u, 0xb8f75ec2u, 0x572ed873u,
    0xf5665224u, 0x939dcbd5u, 0x31d54586u, 0xd00cbf37u, 0x6e4438e8u, 0x0c7bb299u, 0xaab32c4au, 0x48eaa5fbu,
    0xe7221facu, 0x8559995du, 0x2391130eu, 0xc1c88cbfu, 0x60000670u, 0xfe378021u, 0x9c6ef9d2u, 0x3aa67383u,
    0xd8dded34u, 0x771566e5u, 0x154ce096u, 0xb3845a47u, 0x51bbd3f8u, 0xeff34da9u, 0x8e2ac75au, 0x2c62410bu,
    0xca99babcu, 0x68d1346du, 0x0708ae1eu, 0xa54027cfu, 0x4377a180u, 0xe1af1b31u, 0x7fe694e2u, 0x1e1e0e93u,
    0xbc558844u, 0x5a8d01f5u, 0xf8c47ba6u, 0x96fbf557u, 0x35336f08u, 0xd36ae8b9u, 0x71a2626au, 0x0fd9dc1bu,
    0xae1155ccu, 0x4c48cf7du, 0xea80492eu, 0x88b7c2dfu, 0x26ef3c90u, 0xc526b641u, 0x635e2ff2u, 0x0195a9a3u,
};

static const uint32_t bshim_299_tab4[96] = {
    0xccae95b5u, 0x6ae60f66u, 0x091d8917u, 0xa75502c8u, 0x458c7c79u, 0xe3c3f62au, 0x81fb6fdbu, 0x2032e98cu,
    0xbe6a633du, 0x5ca1dceeu, 0xfad9569fu, 0x9910d050u, 0x37484a01u, 0xd57fc3b2u, 0x73b73d63u, 0x11eeb714u,
    0xb02630c5u, 0x4e5daa76u, 0xec952427u, 0x8acc9dd8u, 0x29041789u, 0xc73b913au, 0x65730aebu, 0x03aa849cu,
    0xa1e1fe4du, 0x401977feu, 0xde50f1afu, 0x7c886b60u, 0x1abfe511u, 0xb8f75ec2u, 0x572ed873u, 0xf5665224u,
    0x939dcbd5u, 0x31d54586u, 0xd00cbf37u, 0x6e4438e8u, 0x0c7bb299u, 0xaab32c4au, 0x48eaa5fbu, 0xe7221facu,
    0x8559995du, 0x2391130eu, 0xc1c88cbfu, 0x60000670u, 0xfe378021u, 0x9c6ef9d2u, 0x3aa67383u, 0xd8dded34u,
    0x771566e5u, 0x154ce096u, 0xb3845a47u, 0x51bbd3f8u, 0xeff34da9u, 0x8e2ac75au, 0x2c62410bu, 0xca99babcu,
    0x68d1346du, 0x0708ae1eu, 0xa54027cfu, 0x4377a180u, 0xe1af1b31u, 0x7fe694e2u, 0x1e1e0e93u, 0xbc558844u,
    0x5a8d01f5u, 0xf8c47ba6u, 0x96fbf557u, 0x35336f08u, 0xd36ae8b9u, 0x71a2626au, 0x0fd9dc1bu, 0xae1155ccu,
    0x4c48cf7du, 0xea80492eu, 0x88b7c2dfu, 0x26ef3c90u, 0xc526b641u, 0x635e2ff2u, 0x0195a9a3u, 0x9fcd2354u,
    0x3e049d05u, 0xdc3c16b6u, 0x7a739067u, 0x18ab0a18u, 0xb6e283c9u, 0x5519fd7au, 0xf351772bu, 0x9188f0dcu,
    0x2fc06a8du, 0xcdf7e43eu, 0x6c2f5defu, 0x0a66d7a0u, 0xa89e5151u, 0x46d5cb02u, 0xe50d44b3u, 0x8344be64u,
};

static const uint32_t bshim_299_tab5[96] = {
    0x4e5daa76u, 0xec952427u, 0x8acc9dd8u, 0x29041789u, 0xc73b913au, 0x65730aebu, 0x03aa849cu, 0xa1e1fe4du,
    0x401977feu, 0xde50f1afu, 0x7c886b60u, 0x1abfe511u, 0xb8f75ec2u, 0x572ed873u, 0xf5665224u, 0x939dcbd5u,
    0x31d54586u, 0xd00cbf37u, 0x6e4438e8u, 0x0c7bb299u, 0xaab32c4au, 0x48eaa5fbu, 0xe7221facu, 0x8559995du,
    0x2391130eu, 0xc1c88cbfu, 0x60000670u, 0xfe378021u, 0x9c6ef9d2u, 0x3aa67383u, 0xd8dded34u, 0x771566e5u,
    0x154ce096u, 0xb3845a47u, 0x51bbd3f8u, 0xeff34da9u, 0x8e2ac75au, 0x2c62410bu, 0xca99babcu, 0x68d1346du,
    0x0708ae1eu, 0xa54027cfu, 0x4377a180u, 0xe1af1b31u, 0x7fe694e2u, 0x1e1e0e93u, 0xbc558844u, 0x5a8d01f5u,
    0xf8c47ba6u, 0x96fbf557u, 0x35336f08u, 0xd36ae8b9u, 0x71a2626au, 0x0fd9dc1bu, 0xae1155ccu, 0x4c48cf7du,
    0xea80492eu, 0x88b7c2dfu, 0x26ef3c90u, 0xc526b641u, 0x635e2ff2u, 0x0195a9a3u, 0x9fcd2354u, 0x3e049d05u,
    0xdc3c16b6u, 0x7a739067u, 0x18ab0a18u, 0xb6e283c9u, 0x5519fd7au, 0xf351772bu, 0x9188f0dcu, 0x2fc06a8du,
    0xcdf7e43eu, 0x6c2f5defu, 0x0a66d7a0u, 0xa89e5151u, 0x46d5cb02u, 0xe50d44b3u, 0x8344be64u, 0x217c3815u,
    0xbfb3b1c6u, 0x5deb2b77u, 0xfc22a528u, 0x9a5a1ed9u, 0x3891988au, 0xd6c9123bu, 0x75008becu, 0x1338059du,
    0xb16f7f4eu, 0x4fa6f8ffu, 0xedde72b0u, 0x8c15ec61u, 0x2a4d6612u, 0xc884dfc3u, 0x66bc5974u, 0x04f3d325u,
};

static const uint32_t bshim_299_tab6[96] = {
    0xd00cbf37u, 0x6e4438e8u, 0x0c7bb299u, 0xaab32c4au, 0x48eaa5fbu, 0xe7221facu, 0x8559995du, 0x2391130eu,
    0xc1c88cbfu, 0x60000670u, 0xfe378021u, 0x9c6ef9d2u, 0x3aa67383u, 0xd8dded34u, 0x771566e5u, 0x154ce096u,
    0xb3845a47u, 0x51bbd3f8u, 0xeff34da9u, 0x8e2ac75au, 0x2c62410bu, 0xca99babcu, 0x68d1346du, 0x0708ae1eu,
    0xa54027cfu, 0x4377a180u, 0xe1af1b31u, 0x7fe694e2u, 0x1e1e0e93u, 0xbc558844u, 0x5a8d01f5u, 0xf8c47ba6u,
    0x96fbf557u, 0x35336f08u, 0xd36ae8b9u, 0x71a2626au, 0x0fd9dc1bu, 0xae1155ccu, 0x4c48cf7du, 0xea80492eu,
    0x88b7c2dfu, 0x26ef3c90u, 0xc526b641u, 0x635e2ff2u, 0x0195a9a3u, 0x9fcd2354u, 0x3e049d05u, 0xdc3c16b6u,
    0x7a739067u, 0x18ab0a18u, 0xb6e283c9u, 0x5519fd7au, 0xf351772bu, 0x9188f0dcu, 0x2fc06a8du, 0xcdf7e43eu,
    0x6c2f5defu, 0x0a66d7a0u, 0xa89e5151u, 0x46d5cb02u, 0xe50d44b3u, 0x8344be64u, 0x217c3815u, 0xbfb3b1c6u,
    0x5deb2b77u, 0xfc22a528u, 0x9a5a1ed9u, 0x3891988au, 0xd6c9123bu, 0x75008becu, 0x1338059du, 0xb16f7f4eu,
    0x4fa6f8ffu, 0xedde72b0u, 0x8c15ec61u, 0x2a4d6612u, 0xc884dfc3u, 0x66bc5974u, 0x04f3d325u, 0xa32b4cd6u,
    0x4162c687u, 0xdf9a4038u, 0x7dd1b9e9u, 0x1c09339au, 0xba40ad4bu, 0x587826fcu, 0xf6afa0adu, 0x94e71a5eu,
    0x331e940fu, 0xd1560dc0u, 0x6f8d8771u, 0x0dc50122u, 0xabfc7ad3u, 0x4a33f484u, 0xe86b6e35u, 0x86a2e7e6u,
};

static const uint32_t bshim_299_tab7[96] = {
    0x51bbd3f8u, 0xeff34da9u, 0x8e2ac75au, 0x2c62410bu, 0xca99babcu, 0x68d1346du, 0x0708ae1eu, 0xa54027cfu,
    0x4377a180u, 0xe1af1b31u, 0x7fe694e2u, 0x1e1e0e93u, 0xbc558844u, 0x5a8d01f5u, 0xf8c47ba6u, 0x96fbf557u,
    0x35336f08u, 0xd36ae8b9u, 0x71a2626au, 0x0fd9dc1bu, 0xae1155ccu, 0x4c48cf7du, 0xea80492eu, 0x88b7c2dfu,
    0x26ef3c90u, 0xc526b641u, 0x635e2ff2u, 0x0195a9a3u, 0x9fcd2354u, 0x3e049d05u, 0xdc3c16b6u, 0x7a739067u,
    0x18ab0a18u, 0xb6e283c9u, 0x5519fd7au, 0xf351772bu, 0x9188f0dcu, 0x2fc06a8du, 0xcdf7e43eu, 0x6c2f5defu,
    0x0a66d7a0u, 0xa89e5151u, 0x46d5cb02u, 0xe50d44b3u, 0x8344be64u, 0x217c3815u, 0xbfb3b1c6u, 0x5deb2b77u,
    0xfc22a528u, 0x9a5a1ed9u, 0x3891988au, 0xd6c9123bu, 0x75008becu, 0x1338059du, 0xb16f7f4eu, 0x4fa6f8ffu,
    0xedde72b0u, 0x8c15ec61u, 0x2a4d6612u, 0xc884dfc3u, 0x66bc5974u, 0x04f3d325u, 0xa32b4cd6u, 0x4162c687u,
    0xdf9a4038u, 0x7dd1b9e9u, 0x1c09339au, 0xba40ad4bu, 0x587826fcu, 0xf6afa0adu, 0x94e71a5eu, 0x331e940fu,
    0xd1560dc0u, 0x6f8d8771u, 0x0dc50122u, 0xabfc7ad3u, 0x4a33f484u, 0xe86b6e35u, 0x86a2e7e6u, 0x24da6197u,
    0xc311db48u, 0x614954f9u, 0xff80ceaau, 0x9db8485bu, 0x3befc20cu, 0xda273bbdu, 0x785eb56eu, 0x16962f1fu,
    0xb4cda8d0u, 0x53052281u, 0xf13c9c32u, 0x8f7415e3u, 0x2dab8f94u, 0xcbe30945u, 0x6a1a82f6u, 0x0851fca7u,
};

struct bshim_299_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_299_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8807425u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e6c3e9cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x04580913u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a43d38au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x102f9e01u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x961b6878u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c0732efu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa1f2fd66u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27dec7ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadca9254u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33b65ccbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_299_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9a22742u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_299_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_299_reset(struct bshim_299_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00242125u;
    return 0;
}

