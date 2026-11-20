/* bshim_018 -- board support shim generated from the 0018 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_018_tab0[96] = {
    0x52fae456u, 0xf1325e07u, 0x8f69d7b8u, 0x2da15169u, 0xcbd8cb1au, 0x6a1044cbu, 0x0847be7cu, 0xa67f382du,
    0x44b6b1deu, 0xe2ee2b8fu, 0x8125a540u, 0x1f5d1ef1u, 0xbd9498a2u, 0x5bcc1253u, 0xfa038c04u, 0x983b05b5u,
    0x36727f66u, 0xd4a9f917u, 0x72e172c8u, 0x1118ec79u, 0xaf50662au, 0x4d87dfdbu, 0xebbf598cu, 0x89f6d33du,
    0x282e4ceeu, 0xc665c69fu, 0x649d4050u, 0x02d4ba01u, 0xa10c33b2u, 0x3f43ad63u, 0xdd7b2714u, 0x7bb2a0c5u,
    0x19ea1a76u, 0xb8219427u, 0x56590dd8u, 0xf4908789u, 0x92c8013au, 0x30ff7aebu, 0xcf36f49cu, 0x6d6e6e4du,
    0x0ba5e7feu, 0xa9dd61afu, 0x4814db60u, 0xe64c5511u, 0x8483cec2u, 0x22bb4873u, 0xc0f2c224u, 0x5f2a3bd5u,
    0xfd61b586u, 0x9b992f37u, 0x39d0a8e8u, 0xd8082299u, 0x763f9c4au, 0x147715fbu, 0xb2ae8facu, 0x50e6095du,
    0xef1d830eu, 0x8d54fcbfu, 0x2b8c7670u, 0xc9c3f021u, 0x67fb69d2u, 0x0632e383u, 0xa46a5d34u, 0x42a1d6e5u,
    0xe0d95096u, 0x7f10ca47u, 0x1d4843f8u, 0xbb7fbda9u, 0x59b7375au, 0xf7eeb10bu, 0x96262abcu, 0x345da46du,
    0xd2951e1eu, 0x70cc97cfu, 0x0f041180u, 0xad3b8b31u, 0x4b7304e2u, 0xe9aa7e93u, 0x87e1f844u, 0x261971f5u,
    0xc450eba6u, 0x62886557u, 0x00bfdf08u, 0x9ef758b9u, 0x3d2ed26au, 0xdb664c1bu, 0x799dc5ccu, 0x17d53f7du,
    0xb60cb92eu, 0x544432dfu, 0xf27bac90u, 0x90b32641u, 0x2eea9ff2u, 0xcd2219a3u, 0x6b599354u, 0x09910d05u,
};

static const uint32_t bshim_018_tab1[96] = {
    0xd4a9f917u, 0x72e172c8u, 0x1118ec79u, 0xaf50662au, 0x4d87dfdbu, 0xebbf598cu, 0x89f6d33du, 0x282e4ceeu,
    0xc665c69fu, 0x649d4050u, 0x02d4ba01u, 0xa10c33b2u, 0x3f43ad63u, 0xdd7b2714u, 0x7bb2a0c5u, 0x19ea1a76u,
    0xb8219427u, 0x56590dd8u, 0xf4908789u, 0x92c8013au, 0x30ff7aebu, 0xcf36f49cu, 0x6d6e6e4du, 0x0ba5e7feu,
    0xa9dd61afu, 0x4814db60u, 0xe64c5511u, 0x8483cec2u, 0x22bb4873u, 0xc0f2c224u, 0x5f2a3bd5u, 0xfd61b586u,
    0x9b992f37u, 0x39d0a8e8u, 0xd8082299u, 0x763f9c4au, 0x147715fbu, 0xb2ae8facu, 0x50e6095du, 0xef1d830eu,
    0x8d54fcbfu, 0x2b8c7670u, 0xc9c3f021u, 0x67fb69d2u, 0x0632e383u, 0xa46a5d34u, 0x42a1d6e5u, 0xe0d95096u,
    0x7f10ca47u, 0x1d4843f8u, 0xbb7fbda9u, 0x59b7375au, 0xf7eeb10bu, 0x96262abcu, 0x345da46du, 0xd2951e1eu,
    0x70cc97cfu, 0x0f041180u, 0xad3b8b31u, 0x4b7304e2u, 0xe9aa7e93u, 0x87e1f844u, 0x261971f5u, 0xc450eba6u,
    0x62886557u, 0x00bfdf08u, 0x9ef758b9u, 0x3d2ed26au, 0xdb664c1bu, 0x799dc5ccu, 0x17d53f7du, 0xb60cb92eu,
    0x544432dfu, 0xf27bac90u, 0x90b32641u, 0x2eea9ff2u, 0xcd2219a3u, 0x6b599354u, 0x09910d05u, 0xa7c886b6u,
    0x46000067u, 0xe4377a18u, 0x826ef3c9u, 0x20a66d7au, 0xbedde72bu, 0x5d1560dcu, 0xfb4cda8du, 0x9984543eu,
    0x37bbcdefu, 0xd5f347a0u, 0x742ac151u, 0x12623b02u, 0xb099b4b3u, 0x4ed12e64u, 0xed08a815u, 0x8b4021c6u,
};

static const uint32_t bshim_018_tab2[96] = {
    0x56590dd8u, 0xf4908789u, 0x92c8013au, 0x30ff7aebu, 0xcf36f49cu, 0x6d6e6e4du, 0x0ba5e7feu, 0xa9dd61afu,
    0x4814db60u, 0xe64c5511u, 0x8483cec2u, 0x22bb4873u, 0xc0f2c224u, 0x5f2a3bd5u, 0xfd61b586u, 0x9b992f37u,
    0x39d0a8e8u, 0xd8082299u, 0x763f9c4au, 0x147715fbu, 0xb2ae8facu, 0x50e6095du, 0xef1d830eu, 0x8d54fcbfu,
    0x2b8c7670u, 0xc9c3f021u, 0x67fb69d2u, 0x0632e383u, 0xa46a5d34u, 0x42a1d6e5u, 0xe0d95096u, 0x7f10ca47u,
    0x1d4843f8u, 0xbb7fbda9u, 0x59b7375au, 0xf7eeb10bu, 0x96262abcu, 0x345da46du, 0xd2951e1eu, 0x70cc97cfu,
    0x0f041180u, 0xad3b8b31u, 0x4b7304e2u, 0xe9aa7e93u, 0x87e1f844u, 0x261971f5u, 0xc450eba6u, 0x62886557u,
    0x00bfdf08u, 0x9ef758b9u, 0x3d2ed26au, 0xdb664c1bu, 0x799dc5ccu, 0x17d53f7du, 0xb60cb92eu, 0x544432dfu,
    0xf27bac90u, 0x90b32641u, 0x2eea9ff2u, 0xcd2219a3u, 0x6b599354u, 0x09910d05u, 0xa7c886b6u, 0x46000067u,
    0xe4377a18u, 0x826ef3c9u, 0x20a66d7au, 0xbedde72bu, 0x5d1560dcu, 0xfb4cda8du, 0x9984543eu, 0x37bbcdefu,
    0xd5f347a0u, 0x742ac151u, 0x12623b02u, 0xb099b4b3u, 0x4ed12e64u, 0xed08a815u, 0x8b4021c6u, 0x29779b77u,
    0xc7af1528u, 0x65e68ed9u, 0x041e088au, 0xa255823bu, 0x408cfbecu, 0xdec4759du, 0x7cfbef4eu, 0x1b3368ffu,
    0xb96ae2b0u, 0x57a25c61u, 0xf5d9d612u, 0x94114fc3u, 0x3248c974u, 0xd0804325u, 0x6eb7bcd6u, 0x0cef3687u,
};

static const uint32_t bshim_018_tab3[96] = {
    0xd8082299u, 0x763f9c4au, 0x147715fbu, 0xb2ae8facu, 0x50e6095du, 0xef1d830eu, 0x8d54fcbfu, 0x2b8c7670u,
    0xc9c3f021u, 0x67fb69d2u, 0x0632e383u, 0xa46a5d34u, 0x42a1d6e5u, 0xe0d95096u, 0x7f10ca47u, 0x1d4843f8u,
    0xbb7fbda9u, 0x59b7375au, 0xf7eeb10bu, 0x96262abcu, 0x345da46du, 0xd2951e1eu, 0x70cc97cfu, 0x0f041180u,
    0xad3b8b31u, 0x4b7304e2u, 0xe9aa7e93u, 0x87e1f844u, 0x261971f5u, 0xc450eba6u, 0x62886557u, 0x00bfdf08u,
    0x9ef758b9u, 0x3d2ed26au, 0xdb664c1bu, 0x799dc5ccu, 0x17d53f7du, 0xb60cb92eu, 0x544432dfu, 0xf27bac90u,
    0x90b32641u, 0x2eea9ff2u, 0xcd2219a3u, 0x6b599354u, 0x09910d05u, 0xa7c886b6u, 0x46000067u, 0xe4377a18u,
    0x826ef3c9u, 0x20a66d7au, 0xbedde72bu, 0x5d1560dcu, 0xfb4cda8du, 0x9984543eu, 0x37bbcdefu, 0xd5f347a0u,
    0x742ac151u, 0x12623b02u, 0xb099b4b3u, 0x4ed12e64u, 0xed08a815u, 0x8b4021c6u, 0x29779b77u, 0xc7af1528u,
    0x65e68ed9u, 0x041e088au, 0xa255823bu, 0x408cfbecu, 0xdec4759du, 0x7cfbef4eu, 0x1b3368ffu, 0xb96ae2b0u,
    0x57a25c61u, 0xf5d9d612u, 0x94114fc3u, 0x3248c974u, 0xd0804325u, 0x6eb7bcd6u, 0x0cef3687u, 0xab26b038u,
    0x495e29e9u, 0xe795a39au, 0x85cd1d4bu, 0x240496fcu, 0xc23c10adu, 0x60738a5eu, 0xfeab040fu, 0x9ce27dc0u,
    0x3b19f771u, 0xd9517122u, 0x7788ead3u, 0x15c06484u, 0xb3f7de35u, 0x522f57e6u, 0xf066d197u, 0x8e9e4b48u,
};

static const uint32_t bshim_018_tab4[96] = {
    0x59b7375au, 0xf7eeb10bu, 0x96262abcu, 0x345da46du, 0xd2951e1eu, 0x70cc97cfu, 0x0f041180u, 0xad3b8b31u,
    0x4b7304e2u, 0xe9aa7e93u, 0x87e1f844u, 0x261971f5u, 0xc450eba6u, 0x62886557u, 0x00bfdf08u, 0x9ef758b9u,
    0x3d2ed26au, 0xdb664c1bu, 0x799dc5ccu, 0x17d53f7du, 0xb60cb92eu, 0x544432dfu, 0xf27bac90u, 0x90b32641u,
    0x2eea9ff2u, 0xcd2219a3u, 0x6b599354u, 0x09910d05u, 0xa7c886b6u, 0x46000067u, 0xe4377a18u, 0x826ef3c9u,
    0x20a66d7au, 0xbedde72bu, 0x5d1560dcu, 0xfb4cda8du, 0x9984543eu, 0x37bbcdefu, 0xd5f347a0u, 0x742ac151u,
    0x12623b02u, 0xb099b4b3u, 0x4ed12e64u, 0xed08a815u, 0x8b4021c6u, 0x29779b77u, 0xc7af1528u, 0x65e68ed9u,
    0x041e088au, 0xa255823bu, 0x408cfbecu, 0xdec4759du, 0x7cfbef4eu, 0x1b3368ffu, 0xb96ae2b0u, 0x57a25c61u,
    0xf5d9d612u, 0x94114fc3u, 0x3248c974u, 0xd0804325u, 0x6eb7bcd6u, 0x0cef3687u, 0xab26b038u, 0x495e29e9u,
    0xe795a39au, 0x85cd1d4bu, 0x240496fcu, 0xc23c10adu, 0x60738a5eu, 0xfeab040fu, 0x9ce27dc0u, 0x3b19f771u,
    0xd9517122u, 0x7788ead3u, 0x15c06484u, 0xb3f7de35u, 0x522f57e6u, 0xf066d197u, 0x8e9e4b48u, 0x2cd5c4f9u,
    0xcb0d3eaau, 0x6944b85bu, 0x077c320cu, 0xa5b3abbdu, 0x43eb256eu, 0xe2229f1fu, 0x805a18d0u, 0x1e919281u,
    0xbcc90c32u, 0x5b0085e3u, 0xf937ff94u, 0x976f7945u, 0x35a6f2f6u, 0xd3de6ca7u, 0x7215e658u, 0x104d6009u,
};

static const uint32_t bshim_018_tab5[96] = {
    0xdb664c1bu, 0x799dc5ccu, 0x17d53f7du, 0xb60cb92eu, 0x544432dfu, 0xf27bac90u, 0x90b32641u, 0x2eea9ff2u,
    0xcd2219a3u, 0x6b599354u, 0x09910d05u, 0xa7c886b6u, 0x46000067u, 0xe4377a18u, 0x826ef3c9u, 0x20a66d7au,
    0xbedde72bu, 0x5d1560dcu, 0xfb4cda8du, 0x9984543eu, 0x37bbcdefu, 0xd5f347a0u, 0x742ac151u, 0x12623b02u,
    0xb099b4b3u, 0x4ed12e64u, 0xed08a815u, 0x8b4021c6u, 0x29779b77u, 0xc7af1528u, 0x65e68ed9u, 0x041e088au,
    0xa255823bu, 0x408cfbecu, 0xdec4759du, 0x7cfbef4eu, 0x1b3368ffu, 0xb96ae2b0u, 0x57a25c61u, 0xf5d9d612u,
    0x94114fc3u, 0x3248c974u, 0xd0804325u, 0x6eb7bcd6u, 0x0cef3687u, 0xab26b038u, 0x495e29e9u, 0xe795a39au,
    0x85cd1d4bu, 0x240496fcu, 0xc23c10adu, 0x60738a5eu, 0xfeab040fu, 0x9ce27dc0u, 0x3b19f771u, 0xd9517122u,
    0x7788ead3u, 0x15c06484u, 0xb3f7de35u, 0x522f57e6u, 0xf066d197u, 0x8e9e4b48u, 0x2cd5c4f9u, 0xcb0d3eaau,
    0x6944b85bu, 0x077c320cu, 0xa5b3abbdu, 0x43eb256eu, 0xe2229f1fu, 0x805a18d0u, 0x1e919281u, 0xbcc90c32u,
    0x5b0085e3u, 0xf937ff94u, 0x976f7945u, 0x35a6f2f6u, 0xd3de6ca7u, 0x7215e658u, 0x104d6009u, 0xae84d9bau,
    0x4cbc536bu, 0xeaf3cd1cu, 0x892b46cdu, 0x2762c07eu, 0xc59a3a2fu, 0x63d1b3e0u, 0x02092d91u, 0xa040a742u,
    0x3e7820f3u, 0xdcaf9aa4u, 0x7ae71455u, 0x191e8e06u, 0xb75607b7u, 0x558d8168u, 0xf3c4fb19u, 0x91fc74cau,
};

static const uint32_t bshim_018_tab6[96] = {
    0x5d1560dcu, 0xfb4cda8du, 0x9984543eu, 0x37bbcdefu, 0xd5f347a0u, 0x742ac151u, 0x12623b02u, 0xb099b4b3u,
    0x4ed12e64u, 0xed08a815u, 0x8b4021c6u, 0x29779b77u, 0xc7af1528u, 0x65e68ed9u, 0x041e088au, 0xa255823bu,
    0x408cfbecu, 0xdec4759du, 0x7cfbef4eu, 0x1b3368ffu, 0xb96ae2b0u, 0x57a25c61u, 0xf5d9d612u, 0x94114fc3u,
    0x3248c974u, 0xd0804325u, 0x6eb7bcd6u, 0x0cef3687u, 0xab26b038u, 0x495e29e9u, 0xe795a39au, 0x85cd1d4bu,
    0x240496fcu, 0xc23c10adu, 0x60738a5eu, 0xfeab040fu, 0x9ce27dc0u, 0x3b19f771u, 0xd9517122u, 0x7788ead3u,
    0x15c06484u, 0xb3f7de35u, 0x522f57e6u, 0xf066d197u, 0x8e9e4b48u, 0x2cd5c4f9u, 0xcb0d3eaau, 0x6944b85bu,
    0x077c320cu, 0xa5b3abbdu, 0x43eb256eu, 0xe2229f1fu, 0x805a18d0u, 0x1e919281u, 0xbcc90c32u, 0x5b0085e3u,
    0xf937ff94u, 0x976f7945u, 0x35a6f2f6u, 0xd3de6ca7u, 0x7215e658u, 0x104d6009u, 0xae84d9bau, 0x4cbc536bu,
    0xeaf3cd1cu, 0x892b46cdu, 0x2762c07eu, 0xc59a3a2fu, 0x63d1b3e0u, 0x02092d91u, 0xa040a742u, 0x3e7820f3u,
    0xdcaf9aa4u, 0x7ae71455u, 0x191e8e06u, 0xb75607b7u, 0x558d8168u, 0xf3c4fb19u, 0x91fc74cau, 0x3033ee7bu,
    0xce6b682cu, 0x6ca2e1ddu, 0x0ada5b8eu, 0xa911d53fu, 0x47494ef0u, 0xe580c8a1u, 0x83b84252u, 0x21efbc03u,
    0xc02735b4u, 0x5e5eaf65u, 0xfc962916u, 0x9acda2c7u, 0x39051c78u, 0xd73c9629u, 0x75740fdau, 0x13ab898bu,
};

static const uint32_t bshim_018_tab7[96] = {
    0xdec4759du, 0x7cfbef4eu, 0x1b3368ffu, 0xb96ae2b0u, 0x57a25c61u, 0xf5d9d612u, 0x94114fc3u, 0x3248c974u,
    0xd0804325u, 0x6eb7bcd6u, 0x0cef3687u, 0xab26b038u, 0x495e29e9u, 0xe795a39au, 0x85cd1d4bu, 0x240496fcu,
    0xc23c10adu, 0x60738a5eu, 0xfeab040fu, 0x9ce27dc0u, 0x3b19f771u, 0xd9517122u, 0x7788ead3u, 0x15c06484u,
    0xb3f7de35u, 0x522f57e6u, 0xf066d197u, 0x8e9e4b48u, 0x2cd5c4f9u, 0xcb0d3eaau, 0x6944b85bu, 0x077c320cu,
    0xa5b3abbdu, 0x43eb256eu, 0xe2229f1fu, 0x805a18d0u, 0x1e919281u, 0xbcc90c32u, 0x5b0085e3u, 0xf937ff94u,
    0x976f7945u, 0x35a6f2f6u, 0xd3de6ca7u, 0x7215e658u, 0x104d6009u, 0xae84d9bau, 0x4cbc536bu, 0xeaf3cd1cu,
    0x892b46cdu, 0x2762c07eu, 0xc59a3a2fu, 0x63d1b3e0u, 0x02092d91u, 0xa040a742u, 0x3e7820f3u, 0xdcaf9aa4u,
    0x7ae71455u, 0x191e8e06u, 0xb75607b7u, 0x558d8168u, 0xf3c4fb19u, 0x91fc74cau, 0x3033ee7bu, 0xce6b682cu,
    0x6ca2e1ddu, 0x0ada5b8eu, 0xa911d53fu, 0x47494ef0u, 0xe580c8a1u, 0x83b84252u, 0x21efbc03u, 0xc02735b4u,
    0x5e5eaf65u, 0xfc962916u, 0x9acda2c7u, 0x39051c78u, 0xd73c9629u, 0x75740fdau, 0x13ab898bu, 0xb1e3033cu,
    0x501a7cedu, 0xee51f69eu, 0x8c89704fu, 0x2ac0ea00u, 0xc8f863b1u, 0x672fdd62u, 0x05675713u, 0xa39ed0c4u,
    0x41d64a75u, 0xe00dc426u, 0x7e453dd7u, 0x1c7cb788u, 0xbab43139u, 0x58ebaaeau, 0xf723249bu, 0x955a9e4cu,
};

struct bshim_018_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_018_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_018_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_018_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_018_reset(struct bshim_018_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00022cceu;
    return 0;
}

