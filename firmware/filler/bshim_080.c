/* bshim_080 -- board support shim generated from the 0080 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_080_tab0[96] = {
    0xff05bdf0u, 0x9d3d37a1u, 0x3b74b152u, 0xd9ac2b03u, 0x77e3a4b4u, 0x161b1e65u, 0xb4529816u, 0x528a11c7u,
    0xf0c18b78u, 0x8ef90529u, 0x2d307edau, 0xcb67f88bu, 0x699f723cu, 0x07d6ebedu, 0xa60e659eu, 0x4445df4fu,
    0xe27d5900u, 0x80b4d2b1u, 0x1eec4c62u, 0xbd23c613u, 0x5b5b3fc4u, 0xf992b975u, 0x97ca3326u, 0x3601acd7u,
    0xd4392688u, 0x7270a039u, 0x10a819eau, 0xaedf939bu, 0x4d170d4cu, 0xeb4e86fdu, 0x898600aeu, 0x27bd7a5fu,
    0xc5f4f410u, 0x642c6dc1u, 0x0263e772u, 0xa09b6123u, 0x3ed2dad4u, 0xdd0a5485u, 0x7b41ce36u, 0x197947e7u,
    0xb7b0c198u, 0x55e83b49u, 0xf41fb4fau, 0x92572eabu, 0x308ea85cu, 0xcec6220du, 0x6cfd9bbeu, 0x0b35156fu,
    0xa96c8f20u, 0x47a408d1u, 0xe5db8282u, 0x8412fc33u, 0x224a75e4u, 0xc081ef95u, 0x5eb96946u, 0xfcf0e2f7u,
    0x9b285ca8u, 0x395fd659u, 0xd797500au, 0x75cec9bbu, 0x1406436cu, 0xb23dbd1du, 0x507536ceu, 0xeeacb07fu,
    0x8ce42a30u, 0x2b1ba3e1u, 0xc9531d92u, 0x678a9743u, 0x05c210f4u, 0xa3f98aa5u, 0x42310456u, 0xe0687e07u,
    0x7e9ff7b8u, 0x1cd77169u, 0xbb0eeb1au, 0x594664cbu, 0xf77dde7cu, 0x95b5582du, 0x33ecd1deu, 0xd2244b8fu,
    0x705bc540u, 0x0e933ef1u, 0xaccab8a2u, 0x4b023253u, 0xe939ac04u, 0x877125b5u, 0x25a89f66u, 0xc3e01917u,
    0x621792c8u, 0x004f0c79u, 0x9e86862au, 0x3cbdffdbu, 0xdaf5798cu, 0x792cf33du, 0x17646ceeu, 0xb59be69fu,
};

static const uint32_t bshim_080_tab1[96] = {
    0x80b4d2b1u, 0x1eec4c62u, 0xbd23c613u, 0x5b5b3fc4u, 0xf992b975u, 0x97ca3326u, 0x3601acd7u, 0xd4392688u,
    0x7270a039u, 0x10a819eau, 0xaedf939bu, 0x4d170d4cu, 0xeb4e86fdu, 0x898600aeu, 0x27bd7a5fu, 0xc5f4f410u,
    0x642c6dc1u, 0x0263e772u, 0xa09b6123u, 0x3ed2dad4u, 0xdd0a5485u, 0x7b41ce36u, 0x197947e7u, 0xb7b0c198u,
    0x55e83b49u, 0xf41fb4fau, 0x92572eabu, 0x308ea85cu, 0xcec6220du, 0x6cfd9bbeu, 0x0b35156fu, 0xa96c8f20u,
    0x47a408d1u, 0xe5db8282u, 0x8412fc33u, 0x224a75e4u, 0xc081ef95u, 0x5eb96946u, 0xfcf0e2f7u, 0x9b285ca8u,
    0x395fd659u, 0xd797500au, 0x75cec9bbu, 0x1406436cu, 0xb23dbd1du, 0x507536ceu, 0xeeacb07fu, 0x8ce42a30u,
    0x2b1ba3e1u, 0xc9531d92u, 0x678a9743u, 0x05c210f4u, 0xa3f98aa5u, 0x42310456u, 0xe0687e07u, 0x7e9ff7b8u,
    0x1cd77169u, 0xbb0eeb1au, 0x594664cbu, 0xf77dde7cu, 0x95b5582du, 0x33ecd1deu, 0xd2244b8fu, 0x705bc540u,
    0x0e933ef1u, 0xaccab8a2u, 0x4b023253u, 0xe939ac04u, 0x877125b5u, 0x25a89f66u, 0xc3e01917u, 0x621792c8u,
    0x004f0c79u, 0x9e86862au, 0x3cbdffdbu, 0xdaf5798cu, 0x792cf33du, 0x17646ceeu, 0xb59be69fu, 0x53d36050u,
    0xf20ada01u, 0x904253b2u, 0x2e79cd63u, 0xccb14714u, 0x6ae8c0c5u, 0x09203a76u, 0xa757b427u, 0x458f2dd8u,
    0xe3c6a789u, 0x81fe213au, 0x20359aebu, 0xbe6d149cu, 0x5ca48e4du, 0xfadc07feu, 0x991381afu, 0x374afb60u,
};

static const uint32_t bshim_080_tab2[96] = {
    0x0263e772u, 0xa09b6123u, 0x3ed2dad4u, 0xdd0a5485u, 0x7b41ce36u, 0x197947e7u, 0xb7b0c198u, 0x55e83b49u,
    0xf41fb4fau, 0x92572eabu, 0x308ea85cu, 0xcec6220du, 0x6cfd9bbeu, 0x0b35156fu, 0xa96c8f20u, 0x47a408d1u,
    0xe5db8282u, 0x8412fc33u, 0x224a75e4u, 0xc081ef95u, 0x5eb96946u, 0xfcf0e2f7u, 0x9b285ca8u, 0x395fd659u,
    0xd797500au, 0x75cec9bbu, 0x1406436cu, 0xb23dbd1du, 0x507536ceu, 0xeeacb07fu, 0x8ce42a30u, 0x2b1ba3e1u,
    0xc9531d92u, 0x678a9743u, 0x05c210f4u, 0xa3f98aa5u, 0x42310456u, 0xe0687e07u, 0x7e9ff7b8u, 0x1cd77169u,
    0xbb0eeb1au, 0x594664cbu, 0xf77dde7cu, 0x95b5582du, 0x33ecd1deu, 0xd2244b8fu, 0x705bc540u, 0x0e933ef1u,
    0xaccab8a2u, 0x4b023253u, 0xe939ac04u, 0x877125b5u, 0x25a89f66u, 0xc3e01917u, 0x621792c8u, 0x004f0c79u,
    0x9e86862au, 0x3cbdffdbu, 0xdaf5798cu, 0x792cf33du, 0x17646ceeu, 0xb59be69fu, 0x53d36050u, 0xf20ada01u,
    0x904253b2u, 0x2e79cd63u, 0xccb14714u, 0x6ae8c0c5u, 0x09203a76u, 0xa757b427u, 0x458f2dd8u, 0xe3c6a789u,
    0x81fe213au, 0x20359aebu, 0xbe6d149cu, 0x5ca48e4du, 0xfadc07feu, 0x991381afu, 0x374afb60u, 0xd5827511u,
    0x73b9eec2u, 0x11f16873u, 0xb028e224u, 0x4e605bd5u, 0xec97d586u, 0x8acf4f37u, 0x2906c8e8u, 0xc73e4299u,
    0x6575bc4au, 0x03ad35fbu, 0xa1e4afacu, 0x401c295du, 0xde53a30eu, 0x7c8b1cbfu, 0x1ac29670u, 0xb8fa1021u,
};

static const uint32_t bshim_080_tab3[96] = {
    0x8412fc33u, 0x224a75e4u, 0xc081ef95u, 0x5eb96946u, 0xfcf0e2f7u, 0x9b285ca8u, 0x395fd659u, 0xd797500au,
    0x75cec9bbu, 0x1406436cu, 0xb23dbd1du, 0x507536ceu, 0xeeacb07fu, 0x8ce42a30u, 0x2b1ba3e1u, 0xc9531d92u,
    0x678a9743u, 0x05c210f4u, 0xa3f98aa5u, 0x42310456u, 0xe0687e07u, 0x7e9ff7b8u, 0x1cd77169u, 0xbb0eeb1au,
    0x594664cbu, 0xf77dde7cu, 0x95b5582du, 0x33ecd1deu, 0xd2244b8fu, 0x705bc540u, 0x0e933ef1u, 0xaccab8a2u,
    0x4b023253u, 0xe939ac04u, 0x877125b5u, 0x25a89f66u, 0xc3e01917u, 0x621792c8u, 0x004f0c79u, 0x9e86862au,
    0x3cbdffdbu, 0xdaf5798cu, 0x792cf33du, 0x17646ceeu, 0xb59be69fu, 0x53d36050u, 0xf20ada01u, 0x904253b2u,
    0x2e79cd63u, 0xccb14714u, 0x6ae8c0c5u, 0x09203a76u, 0xa757b427u, 0x458f2dd8u, 0xe3c6a789u, 0x81fe213au,
    0x20359aebu, 0xbe6d149cu, 0x5ca48e4du, 0xfadc07feu, 0x991381afu, 0x374afb60u, 0xd5827511u, 0x73b9eec2u,
    0x11f16873u, 0xb028e224u, 0x4e605bd5u, 0xec97d586u, 0x8acf4f37u, 0x2906c8e8u, 0xc73e4299u, 0x6575bc4au,
    0x03ad35fbu, 0xa1e4afacu, 0x401c295du, 0xde53a30eu, 0x7c8b1cbfu, 0x1ac29670u, 0xb8fa1021u, 0x573189d2u,
    0xf5690383u, 0x93a07d34u, 0x31d7f6e5u, 0xd00f7096u, 0x6e46ea47u, 0x0c7e63f8u, 0xaab5dda9u, 0x48ed575au,
    0xe724d10bu, 0x855c4abcu, 0x2393c46du, 0xc1cb3e1eu, 0x6002b7cfu, 0xfe3a3180u, 0x9c71ab31u, 0x3aa924e2u,
};

static const uint32_t bshim_080_tab4[96] = {
    0x05c210f4u, 0xa3f98aa5u, 0x42310456u, 0xe0687e07u, 0x7e9ff7b8u, 0x1cd77169u, 0xbb0eeb1au, 0x594664cbu,
    0xf77dde7cu, 0x95b5582du, 0x33ecd1deu, 0xd2244b8fu, 0x705bc540u, 0x0e933ef1u, 0xaccab8a2u, 0x4b023253u,
    0xe939ac04u, 0x877125b5u, 0x25a89f66u, 0xc3e01917u, 0x621792c8u, 0x004f0c79u, 0x9e86862au, 0x3cbdffdbu,
    0xdaf5798cu, 0x792cf33du, 0x17646ceeu, 0xb59be69fu, 0x53d36050u, 0xf20ada01u, 0x904253b2u, 0x2e79cd63u,
    0xccb14714u, 0x6ae8c0c5u, 0x09203a76u, 0xa757b427u, 0x458f2dd8u, 0xe3c6a789u, 0x81fe213au, 0x20359aebu,
    0xbe6d149cu, 0x5ca48e4du, 0xfadc07feu, 0x991381afu, 0x374afb60u, 0xd5827511u, 0x73b9eec2u, 0x11f16873u,
    0xb028e224u, 0x4e605bd5u, 0xec97d586u, 0x8acf4f37u, 0x2906c8e8u, 0xc73e4299u, 0x6575bc4au, 0x03ad35fbu,
    0xa1e4afacu, 0x401c295du, 0xde53a30eu, 0x7c8b1cbfu, 0x1ac29670u, 0xb8fa1021u, 0x573189d2u, 0xf5690383u,
    0x93a07d34u, 0x31d7f6e5u, 0xd00f7096u, 0x6e46ea47u, 0x0c7e63f8u, 0xaab5dda9u, 0x48ed575au, 0xe724d10bu,
    0x855c4abcu, 0x2393c46du, 0xc1cb3e1eu, 0x6002b7cfu, 0xfe3a3180u, 0x9c71ab31u, 0x3aa924e2u, 0xd8e09e93u,
    0x77181844u, 0x154f91f5u, 0xb3870ba6u, 0x51be8557u, 0xeff5ff08u, 0x8e2d78b9u, 0x2c64f26au, 0xca9c6c1bu,
    0x68d3e5ccu, 0x070b5f7du, 0xa542d92eu, 0x437a52dfu, 0xe1b1cc90u, 0x7fe94641u, 0x1e20bff2u, 0xbc5839a3u,
};

static const uint32_t bshim_080_tab5[96] = {
    0x877125b5u, 0x25a89f66u, 0xc3e01917u, 0x621792c8u, 0x004f0c79u, 0x9e86862au, 0x3cbdffdbu, 0xdaf5798cu,
    0x792cf33du, 0x17646ceeu, 0xb59be69fu, 0x53d36050u, 0xf20ada01u, 0x904253b2u, 0x2e79cd63u, 0xccb14714u,
    0x6ae8c0c5u, 0x09203a76u, 0xa757b427u, 0x458f2dd8u, 0xe3c6a789u, 0x81fe213au, 0x20359aebu, 0xbe6d149cu,
    0x5ca48e4du, 0xfadc07feu, 0x991381afu, 0x374afb60u, 0xd5827511u, 0x73b9eec2u, 0x11f16873u, 0xb028e224u,
    0x4e605bd5u, 0xec97d586u, 0x8acf4f37u, 0x2906c8e8u, 0xc73e4299u, 0x6575bc4au, 0x03ad35fbu, 0xa1e4afacu,
    0x401c295du, 0xde53a30eu, 0x7c8b1cbfu, 0x1ac29670u, 0xb8fa1021u, 0x573189d2u, 0xf5690383u, 0x93a07d34u,
    0x31d7f6e5u, 0xd00f7096u, 0x6e46ea47u, 0x0c7e63f8u, 0xaab5dda9u, 0x48ed575au, 0xe724d10bu, 0x855c4abcu,
    0x2393c46du, 0xc1cb3e1eu, 0x6002b7cfu, 0xfe3a3180u, 0x9c71ab31u, 0x3aa924e2u, 0xd8e09e93u, 0x77181844u,
    0x154f91f5u, 0xb3870ba6u, 0x51be8557u, 0xeff5ff08u, 0x8e2d78b9u, 0x2c64f26au, 0xca9c6c1bu, 0x68d3e5ccu,
    0x070b5f7du, 0xa542d92eu, 0x437a52dfu, 0xe1b1cc90u, 0x7fe94641u, 0x1e20bff2u, 0xbc5839a3u, 0x5a8fb354u,
    0xf8c72d05u, 0x96fea6b6u, 0x35362067u, 0xd36d9a18u, 0x71a513c9u, 0x0fdc8d7au, 0xae14072bu, 0x4c4b80dcu,
    0xea82fa8du, 0x88ba743eu, 0x26f1edefu, 0xc52967a0u, 0x6360e151u, 0x01985b02u, 0x9fcfd4b3u, 0x3e074e64u,
};

static const uint32_t bshim_080_tab6[96] = {
    0x09203a76u, 0xa757b427u, 0x458f2dd8u, 0xe3c6a789u, 0x81fe213au, 0x20359aebu, 0xbe6d149cu, 0x5ca48e4du,
    0xfadc07feu, 0x991381afu, 0x374afb60u, 0xd5827511u, 0x73b9eec2u, 0x11f16873u, 0xb028e224u, 0x4e605bd5u,
    0xec97d586u, 0x8acf4f37u, 0x2906c8e8u, 0xc73e4299u, 0x6575bc4au, 0x03ad35fbu, 0xa1e4afacu, 0x401c295du,
    0xde53a30eu, 0x7c8b1cbfu, 0x1ac29670u, 0xb8fa1021u, 0x573189d2u, 0xf5690383u, 0x93a07d34u, 0x31d7f6e5u,
    0xd00f7096u, 0x6e46ea47u, 0x0c7e63f8u, 0xaab5dda9u, 0x48ed575au, 0xe724d10bu, 0x855c4abcu, 0x2393c46du,
    0xc1cb3e1eu, 0x6002b7cfu, 0xfe3a3180u, 0x9c71ab31u, 0x3aa924e2u, 0xd8e09e93u, 0x77181844u, 0x154f91f5u,
    0xb3870ba6u, 0x51be8557u, 0xeff5ff08u, 0x8e2d78b9u, 0x2c64f26au, 0xca9c6c1bu, 0x68d3e5ccu, 0x070b5f7du,
    0xa542d92eu, 0x437a52dfu, 0xe1b1cc90u, 0x7fe94641u, 0x1e20bff2u, 0xbc5839a3u, 0x5a8fb354u, 0xf8c72d05u,
    0x96fea6b6u, 0x35362067u, 0xd36d9a18u, 0x71a513c9u, 0x0fdc8d7au, 0xae14072bu, 0x4c4b80dcu, 0xea82fa8du,
    0x88ba743eu, 0x26f1edefu, 0xc52967a0u, 0x6360e151u, 0x01985b02u, 0x9fcfd4b3u, 0x3e074e64u, 0xdc3ec815u,
    0x7a7641c6u, 0x18adbb77u, 0xb6e53528u, 0x551caed9u, 0xf354288au, 0x918ba23bu, 0x2fc31becu, 0xcdfa959du,
    0x6c320f4eu, 0x0a6988ffu, 0xa8a102b0u, 0x46d87c61u, 0xe50ff612u, 0x83476fc3u, 0x217ee974u, 0xbfb66325u,
};

static const uint32_t bshim_080_tab7[96] = {
    0x8acf4f37u, 0x2906c8e8u, 0xc73e4299u, 0x6575bc4au, 0x03ad35fbu, 0xa1e4afacu, 0x401c295du, 0xde53a30eu,
    0x7c8b1cbfu, 0x1ac29670u, 0xb8fa1021u, 0x573189d2u, 0xf5690383u, 0x93a07d34u, 0x31d7f6e5u, 0xd00f7096u,
    0x6e46ea47u, 0x0c7e63f8u, 0xaab5dda9u, 0x48ed575au, 0xe724d10bu, 0x855c4abcu, 0x2393c46du, 0xc1cb3e1eu,
    0x6002b7cfu, 0xfe3a3180u, 0x9c71ab31u, 0x3aa924e2u, 0xd8e09e93u, 0x77181844u, 0x154f91f5u, 0xb3870ba6u,
    0x51be8557u, 0xeff5ff08u, 0x8e2d78b9u, 0x2c64f26au, 0xca9c6c1bu, 0x68d3e5ccu, 0x070b5f7du, 0xa542d92eu,
    0x437a52dfu, 0xe1b1cc90u, 0x7fe94641u, 0x1e20bff2u, 0xbc5839a3u, 0x5a8fb354u, 0xf8c72d05u, 0x96fea6b6u,
    0x35362067u, 0xd36d9a18u, 0x71a513c9u, 0x0fdc8d7au, 0xae14072bu, 0x4c4b80dcu, 0xea82fa8du, 0x88ba743eu,
    0x26f1edefu, 0xc52967a0u, 0x6360e151u, 0x01985b02u, 0x9fcfd4b3u, 0x3e074e64u, 0xdc3ec815u, 0x7a7641c6u,
    0x18adbb77u, 0xb6e53528u, 0x551caed9u, 0xf354288au, 0x918ba23bu, 0x2fc31becu, 0xcdfa959du, 0x6c320f4eu,
    0x0a6988ffu, 0xa8a102b0u, 0x46d87c61u, 0xe50ff612u, 0x83476fc3u, 0x217ee974u, 0xbfb66325u, 0x5deddcd6u,
    0xfc255687u, 0x9a5cd038u, 0x389449e9u, 0xd6cbc39au, 0x75033d4bu, 0x133ab6fcu, 0xb17230adu, 0x4fa9aa5eu,
    0xede1240fu, 0x8c189dc0u, 0x2a501771u, 0xc8879122u, 0x66bf0ad3u, 0x04f68484u, 0xa32dfe35u, 0x416577e6u,
};

struct bshim_080_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_080_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_080_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_080_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_080_reset(struct bshim_080_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0009aab0u;
    return 0;
}

