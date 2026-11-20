/* bshim_079 -- board support shim generated from the 0079 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_079_tab0[96] = {
    0x08a2785du, 0xa6d9f20eu, 0x45116bbfu, 0xe348e570u, 0x81805f21u, 0x1fb7d8d2u, 0xbdef5283u, 0x5c26cc34u,
    0xfa5e45e5u, 0x9895bf96u, 0x36cd3947u, 0xd504b2f8u, 0x733c2ca9u, 0x1173a65au, 0xafab200bu, 0x4de299bcu,
    0xec1a136du, 0x8a518d1eu, 0x288906cfu, 0xc6c08080u, 0x64f7fa31u, 0x032f73e2u, 0xa166ed93u, 0x3f9e6744u,
    0xddd5e0f5u, 0x7c0d5aa6u, 0x1a44d457u, 0xb87c4e08u, 0x56b3c7b9u, 0xf4eb416au, 0x9322bb1bu, 0x315a34ccu,
    0xcf91ae7du, 0x6dc9282eu, 0x0c00a1dfu, 0xaa381b90u, 0x486f9541u, 0xe6a70ef2u, 0x84de88a3u, 0x23160254u,
    0xc14d7c05u, 0x5f84f5b6u, 0xfdbc6f67u, 0x9bf3e918u, 0x3a2b62c9u, 0xd862dc7au, 0x769a562bu, 0x14d1cfdcu,
    0xb309498du, 0x5140c33eu, 0xef783cefu, 0x8dafb6a0u, 0x2be73051u, 0xca1eaa02u, 0x685623b3u, 0x068d9d64u,
    0xa4c51715u, 0x42fc90c6u, 0xe1340a77u, 0x7f6b8428u, 0x1da2fdd9u, 0xbbda778au, 0x5a11f13bu, 0xf8496aecu,
    0x9680e49du, 0x34b85e4eu, 0xd2efd7ffu, 0x712751b0u, 0x0f5ecb61u, 0xad964512u, 0x4bcdbec3u, 0xea053874u,
    0x883cb225u, 0x26742bd6u, 0xc4aba587u, 0x62e31f38u, 0x011a98e9u, 0x9f52129au, 0x3d898c4bu, 0xdbc105fcu,
    0x79f87fadu, 0x182ff95eu, 0xb667730fu, 0x549eecc0u, 0xf2d66671u, 0x910de022u, 0x2f4559d3u, 0xcd7cd384u,
    0x6bb44d35u, 0x09ebc6e6u, 0xa8234097u, 0x465aba48u, 0xe49233f9u, 0x82c9adaau, 0x2101275bu, 0xbf38a10cu,
};

static const uint32_t bshim_079_tab1[96] = {
    0x8a518d1eu, 0x288906cfu, 0xc6c08080u, 0x64f7fa31u, 0x032f73e2u, 0xa166ed93u, 0x3f9e6744u, 0xddd5e0f5u,
    0x7c0d5aa6u, 0x1a44d457u, 0xb87c4e08u, 0x56b3c7b9u, 0xf4eb416au, 0x9322bb1bu, 0x315a34ccu, 0xcf91ae7du,
    0x6dc9282eu, 0x0c00a1dfu, 0xaa381b90u, 0x486f9541u, 0xe6a70ef2u, 0x84de88a3u, 0x23160254u, 0xc14d7c05u,
    0x5f84f5b6u, 0xfdbc6f67u, 0x9bf3e918u, 0x3a2b62c9u, 0xd862dc7au, 0x769a562bu, 0x14d1cfdcu, 0xb309498du,
    0x5140c33eu, 0xef783cefu, 0x8dafb6a0u, 0x2be73051u, 0xca1eaa02u, 0x685623b3u, 0x068d9d64u, 0xa4c51715u,
    0x42fc90c6u, 0xe1340a77u, 0x7f6b8428u, 0x1da2fdd9u, 0xbbda778au, 0x5a11f13bu, 0xf8496aecu, 0x9680e49du,
    0x34b85e4eu, 0xd2efd7ffu, 0x712751b0u, 0x0f5ecb61u, 0xad964512u, 0x4bcdbec3u, 0xea053874u, 0x883cb225u,
    0x26742bd6u, 0xc4aba587u, 0x62e31f38u, 0x011a98e9u, 0x9f52129au, 0x3d898c4bu, 0xdbc105fcu, 0x79f87fadu,
    0x182ff95eu, 0xb667730fu, 0x549eecc0u, 0xf2d66671u, 0x910de022u, 0x2f4559d3u, 0xcd7cd384u, 0x6bb44d35u,
    0x09ebc6e6u, 0xa8234097u, 0x465aba48u, 0xe49233f9u, 0x82c9adaau, 0x2101275bu, 0xbf38a10cu, 0x5d701abdu,
    0xfba7946eu, 0x99df0e1fu, 0x381687d0u, 0xd64e0181u, 0x74857b32u, 0x12bcf4e3u, 0xb0f46e94u, 0x4f2be845u,
    0xed6361f6u, 0x8b9adba7u, 0x29d25558u, 0xc809cf09u, 0x664148bau, 0x0478c26bu, 0xa2b03c1cu, 0x40e7b5cdu,
};

static const uint32_t bshim_079_tab2[96] = {
    0x0c00a1dfu, 0xaa381b90u, 0x486f9541u, 0xe6a70ef2u, 0x84de88a3u, 0x23160254u, 0xc14d7c05u, 0x5f84f5b6u,
    0xfdbc6f67u, 0x9bf3e918u, 0x3a2b62c9u, 0xd862dc7au, 0x769a562bu, 0x14d1cfdcu, 0xb309498du, 0x5140c33eu,
    0xef783cefu, 0x8dafb6a0u, 0x2be73051u, 0xca1eaa02u, 0x685623b3u, 0x068d9d64u, 0xa4c51715u, 0x42fc90c6u,
    0xe1340a77u, 0x7f6b8428u, 0x1da2fdd9u, 0xbbda778au, 0x5a11f13bu, 0xf8496aecu, 0x9680e49du, 0x34b85e4eu,
    0xd2efd7ffu, 0x712751b0u, 0x0f5ecb61u, 0xad964512u, 0x4bcdbec3u, 0xea053874u, 0x883cb225u, 0x26742bd6u,
    0xc4aba587u, 0x62e31f38u, 0x011a98e9u, 0x9f52129au, 0x3d898c4bu, 0xdbc105fcu, 0x79f87fadu, 0x182ff95eu,
    0xb667730fu, 0x549eecc0u, 0xf2d66671u, 0x910de022u, 0x2f4559d3u, 0xcd7cd384u, 0x6bb44d35u, 0x09ebc6e6u,
    0xa8234097u, 0x465aba48u, 0xe49233f9u, 0x82c9adaau, 0x2101275bu, 0xbf38a10cu, 0x5d701abdu, 0xfba7946eu,
    0x99df0e1fu, 0x381687d0u, 0xd64e0181u, 0x74857b32u, 0x12bcf4e3u, 0xb0f46e94u, 0x4f2be845u, 0xed6361f6u,
    0x8b9adba7u, 0x29d25558u, 0xc809cf09u, 0x664148bau, 0x0478c26bu, 0xa2b03c1cu, 0x40e7b5cdu, 0xdf1f2f7eu,
    0x7d56a92fu, 0x1b8e22e0u, 0xb9c59c91u, 0x57fd1642u, 0xf6348ff3u, 0x946c09a4u, 0x32a38355u, 0xd0dafd06u,
    0x6f1276b7u, 0x0d49f068u, 0xab816a19u, 0x49b8e3cau, 0xe7f05d7bu, 0x8627d72cu, 0x245f50ddu, 0xc296ca8eu,
};

static const uint32_t bshim_079_tab3[96] = {
    0x8dafb6a0u, 0x2be73051u, 0xca1eaa02u, 0x685623b3u, 0x068d9d64u, 0xa4c51715u, 0x42fc90c6u, 0xe1340a77u,
    0x7f6b8428u, 0x1da2fdd9u, 0xbbda778au, 0x5a11f13bu, 0xf8496aecu, 0x9680e49du, 0x34b85e4eu, 0xd2efd7ffu,
    0x712751b0u, 0x0f5ecb61u, 0xad964512u, 0x4bcdbec3u, 0xea053874u, 0x883cb225u, 0x26742bd6u, 0xc4aba587u,
    0x62e31f38u, 0x011a98e9u, 0x9f52129au, 0x3d898c4bu, 0xdbc105fcu, 0x79f87fadu, 0x182ff95eu, 0xb667730fu,
    0x549eecc0u, 0xf2d66671u, 0x910de022u, 0x2f4559d3u, 0xcd7cd384u, 0x6bb44d35u, 0x09ebc6e6u, 0xa8234097u,
    0x465aba48u, 0xe49233f9u, 0x82c9adaau, 0x2101275bu, 0xbf38a10cu, 0x5d701abdu, 0xfba7946eu, 0x99df0e1fu,
    0x381687d0u, 0xd64e0181u, 0x74857b32u, 0x12bcf4e3u, 0xb0f46e94u, 0x4f2be845u, 0xed6361f6u, 0x8b9adba7u,
    0x29d25558u, 0xc809cf09u, 0x664148bau, 0x0478c26bu, 0xa2b03c1cu, 0x40e7b5cdu, 0xdf1f2f7eu, 0x7d56a92fu,
    0x1b8e22e0u, 0xb9c59c91u, 0x57fd1642u, 0xf6348ff3u, 0x946c09a4u, 0x32a38355u, 0xd0dafd06u, 0x6f1276b7u,
    0x0d49f068u, 0xab816a19u, 0x49b8e3cau, 0xe7f05d7bu, 0x8627d72cu, 0x245f50ddu, 0xc296ca8eu, 0x60ce443fu,
    0xff05bdf0u, 0x9d3d37a1u, 0x3b74b152u, 0xd9ac2b03u, 0x77e3a4b4u, 0x161b1e65u, 0xb4529816u, 0x528a11c7u,
    0xf0c18b78u, 0x8ef90529u, 0x2d307edau, 0xcb67f88bu, 0x699f723cu, 0x07d6ebedu, 0xa60e659eu, 0x4445df4fu,
};

static const uint32_t bshim_079_tab4[96] = {
    0x0f5ecb61u, 0xad964512u, 0x4bcdbec3u, 0xea053874u, 0x883cb225u, 0x26742bd6u, 0xc4aba587u, 0x62e31f38u,
    0x011a98e9u, 0x9f52129au, 0x3d898c4bu, 0xdbc105fcu, 0x79f87fadu, 0x182ff95eu, 0xb667730fu, 0x549eecc0u,
    0xf2d66671u, 0x910de022u, 0x2f4559d3u, 0xcd7cd384u, 0x6bb44d35u, 0x09ebc6e6u, 0xa8234097u, 0x465aba48u,
    0xe49233f9u, 0x82c9adaau, 0x2101275bu, 0xbf38a10cu, 0x5d701abdu, 0xfba7946eu, 0x99df0e1fu, 0x381687d0u,
    0xd64e0181u, 0x74857b32u, 0x12bcf4e3u, 0xb0f46e94u, 0x4f2be845u, 0xed6361f6u, 0x8b9adba7u, 0x29d25558u,
    0xc809cf09u, 0x664148bau, 0x0478c26bu, 0xa2b03c1cu, 0x40e7b5cdu, 0xdf1f2f7eu, 0x7d56a92fu, 0x1b8e22e0u,
    0xb9c59c91u, 0x57fd1642u, 0xf6348ff3u, 0x946c09a4u, 0x32a38355u, 0xd0dafd06u, 0x6f1276b7u, 0x0d49f068u,
    0xab816a19u, 0x49b8e3cau, 0xe7f05d7bu, 0x8627d72cu, 0x245f50ddu, 0xc296ca8eu, 0x60ce443fu, 0xff05bdf0u,
    0x9d3d37a1u, 0x3b74b152u, 0xd9ac2b03u, 0x77e3a4b4u, 0x161b1e65u, 0xb4529816u, 0x528a11c7u, 0xf0c18b78u,
    0x8ef90529u, 0x2d307edau, 0xcb67f88bu, 0x699f723cu, 0x07d6ebedu, 0xa60e659eu, 0x4445df4fu, 0xe27d5900u,
    0x80b4d2b1u, 0x1eec4c62u, 0xbd23c613u, 0x5b5b3fc4u, 0xf992b975u, 0x97ca3326u, 0x3601acd7u, 0xd4392688u,
    0x7270a039u, 0x10a819eau, 0xaedf939bu, 0x4d170d4cu, 0xeb4e86fdu, 0x898600aeu, 0x27bd7a5fu, 0xc5f4f410u,
};

static const uint32_t bshim_079_tab5[96] = {
    0x910de022u, 0x2f4559d3u, 0xcd7cd384u, 0x6bb44d35u, 0x09ebc6e6u, 0xa8234097u, 0x465aba48u, 0xe49233f9u,
    0x82c9adaau, 0x2101275bu, 0xbf38a10cu, 0x5d701abdu, 0xfba7946eu, 0x99df0e1fu, 0x381687d0u, 0xd64e0181u,
    0x74857b32u, 0x12bcf4e3u, 0xb0f46e94u, 0x4f2be845u, 0xed6361f6u, 0x8b9adba7u, 0x29d25558u, 0xc809cf09u,
    0x664148bau, 0x0478c26bu, 0xa2b03c1cu, 0x40e7b5cdu, 0xdf1f2f7eu, 0x7d56a92fu, 0x1b8e22e0u, 0xb9c59c91u,
    0x57fd1642u, 0xf6348ff3u, 0x946c09a4u, 0x32a38355u, 0xd0dafd06u, 0x6f1276b7u, 0x0d49f068u, 0xab816a19u,
    0x49b8e3cau, 0xe7f05d7bu, 0x8627d72cu, 0x245f50ddu, 0xc296ca8eu, 0x60ce443fu, 0xff05bdf0u, 0x9d3d37a1u,
    0x3b74b152u, 0xd9ac2b03u, 0x77e3a4b4u, 0x161b1e65u, 0xb4529816u, 0x528a11c7u, 0xf0c18b78u, 0x8ef90529u,
    0x2d307edau, 0xcb67f88bu, 0x699f723cu, 0x07d6ebedu, 0xa60e659eu, 0x4445df4fu, 0xe27d5900u, 0x80b4d2b1u,
    0x1eec4c62u, 0xbd23c613u, 0x5b5b3fc4u, 0xf992b975u, 0x97ca3326u, 0x3601acd7u, 0xd4392688u, 0x7270a039u,
    0x10a819eau, 0xaedf939bu, 0x4d170d4cu, 0xeb4e86fdu, 0x898600aeu, 0x27bd7a5fu, 0xc5f4f410u, 0x642c6dc1u,
    0x0263e772u, 0xa09b6123u, 0x3ed2dad4u, 0xdd0a5485u, 0x7b41ce36u, 0x197947e7u, 0xb7b0c198u, 0x55e83b49u,
    0xf41fb4fau, 0x92572eabu, 0x308ea85cu, 0xcec6220du, 0x6cfd9bbeu, 0x0b35156fu, 0xa96c8f20u, 0x47a408d1u,
};

static const uint32_t bshim_079_tab6[96] = {
    0x12bcf4e3u, 0xb0f46e94u, 0x4f2be845u, 0xed6361f6u, 0x8b9adba7u, 0x29d25558u, 0xc809cf09u, 0x664148bau,
    0x0478c26bu, 0xa2b03c1cu, 0x40e7b5cdu, 0xdf1f2f7eu, 0x7d56a92fu, 0x1b8e22e0u, 0xb9c59c91u, 0x57fd1642u,
    0xf6348ff3u, 0x946c09a4u, 0x32a38355u, 0xd0dafd06u, 0x6f1276b7u, 0x0d49f068u, 0xab816a19u, 0x49b8e3cau,
    0xe7f05d7bu, 0x8627d72cu, 0x245f50ddu, 0xc296ca8eu, 0x60ce443fu, 0xff05bdf0u, 0x9d3d37a1u, 0x3b74b152u,
    0xd9ac2b03u, 0x77e3a4b4u, 0x161b1e65u, 0xb4529816u, 0x528a11c7u, 0xf0c18b78u, 0x8ef90529u, 0x2d307edau,
    0xcb67f88bu, 0x699f723cu, 0x07d6ebedu, 0xa60e659eu, 0x4445df4fu, 0xe27d5900u, 0x80b4d2b1u, 0x1eec4c62u,
    0xbd23c613u, 0x5b5b3fc4u, 0xf992b975u, 0x97ca3326u, 0x3601acd7u, 0xd4392688u, 0x7270a039u, 0x10a819eau,
    0xaedf939bu, 0x4d170d4cu, 0xeb4e86fdu, 0x898600aeu, 0x27bd7a5fu, 0xc5f4f410u, 0x642c6dc1u, 0x0263e772u,
    0xa09b6123u, 0x3ed2dad4u, 0xdd0a5485u, 0x7b41ce36u, 0x197947e7u, 0xb7b0c198u, 0x55e83b49u, 0xf41fb4fau,
    0x92572eabu, 0x308ea85cu, 0xcec6220du, 0x6cfd9bbeu, 0x0b35156fu, 0xa96c8f20u, 0x47a408d1u, 0xe5db8282u,
    0x8412fc33u, 0x224a75e4u, 0xc081ef95u, 0x5eb96946u, 0xfcf0e2f7u, 0x9b285ca8u, 0x395fd659u, 0xd797500au,
    0x75cec9bbu, 0x1406436cu, 0xb23dbd1du, 0x507536ceu, 0xeeacb07fu, 0x8ce42a30u, 0x2b1ba3e1u, 0xc9531d92u,
};

static const uint32_t bshim_079_tab7[96] = {
    0x946c09a4u, 0x32a38355u, 0xd0dafd06u, 0x6f1276b7u, 0x0d49f068u, 0xab816a19u, 0x49b8e3cau, 0xe7f05d7bu,
    0x8627d72cu, 0x245f50ddu, 0xc296ca8eu, 0x60ce443fu, 0xff05bdf0u, 0x9d3d37a1u, 0x3b74b152u, 0xd9ac2b03u,
    0x77e3a4b4u, 0x161b1e65u, 0xb4529816u, 0x528a11c7u, 0xf0c18b78u, 0x8ef90529u, 0x2d307edau, 0xcb67f88bu,
    0x699f723cu, 0x07d6ebedu, 0xa60e659eu, 0x4445df4fu, 0xe27d5900u, 0x80b4d2b1u, 0x1eec4c62u, 0xbd23c613u,
    0x5b5b3fc4u, 0xf992b975u, 0x97ca3326u, 0x3601acd7u, 0xd4392688u, 0x7270a039u, 0x10a819eau, 0xaedf939bu,
    0x4d170d4cu, 0xeb4e86fdu, 0x898600aeu, 0x27bd7a5fu, 0xc5f4f410u, 0x642c6dc1u, 0x0263e772u, 0xa09b6123u,
    0x3ed2dad4u, 0xdd0a5485u, 0x7b41ce36u, 0x197947e7u, 0xb7b0c198u, 0x55e83b49u, 0xf41fb4fau, 0x92572eabu,
    0x308ea85cu, 0xcec6220du, 0x6cfd9bbeu, 0x0b35156fu, 0xa96c8f20u, 0x47a408d1u, 0xe5db8282u, 0x8412fc33u,
    0x224a75e4u, 0xc081ef95u, 0x5eb96946u, 0xfcf0e2f7u, 0x9b285ca8u, 0x395fd659u, 0xd797500au, 0x75cec9bbu,
    0x1406436cu, 0xb23dbd1du, 0x507536ceu, 0xeeacb07fu, 0x8ce42a30u, 0x2b1ba3e1u, 0xc9531d92u, 0x678a9743u,
    0x05c210f4u, 0xa3f98aa5u, 0x42310456u, 0xe0687e07u, 0x7e9ff7b8u, 0x1cd77169u, 0xbb0eeb1au, 0x594664cbu,
    0xf77dde7cu, 0x95b5582du, 0x33ecd1deu, 0xd2244b8fu, 0x705bc540u, 0x0e933ef1u, 0xaccab8a2u, 0x4b023253u,
};

struct bshim_079_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_079_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_079_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_079_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_079_reset(struct bshim_079_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00098bc1u;
    return 0;
}

