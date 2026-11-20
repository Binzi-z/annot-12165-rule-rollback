/* bshim_277 -- board support shim generated from the 0277 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_277_tab0[96] = {
    0x996a480fu, 0x37a1c1c0u, 0xd5d93b71u, 0x7410b522u, 0x12482ed3u, 0xb07fa884u, 0x4eb72235u, 0xecee9be6u,
    0x8b261597u, 0x295d8f48u, 0xc79508f9u, 0x65cc82aau, 0x0403fc5bu, 0xa23b760cu, 0x4072efbdu, 0xdeaa696eu,
    0x7ce1e31fu, 0x1b195cd0u, 0xb950d681u, 0x57885032u, 0xf5bfc9e3u, 0x93f74394u, 0x322ebd45u, 0xd06636f6u,
    0x6e9db0a7u, 0x0cd52a58u, 0xab0ca409u, 0x49441dbau, 0xe77b976bu, 0x85b3111cu, 0x23ea8acdu, 0xc222047eu,
    0x60597e2fu, 0xfe90f7e0u, 0x9cc87191u, 0x3affeb42u, 0xd93764f3u, 0x776edea4u, 0x15a65855u, 0xb3ddd206u,
    0x52154bb7u, 0xf04cc568u, 0x8e843f19u, 0x2cbbb8cau, 0xcaf3327bu, 0x692aac2cu, 0x076225ddu, 0xa5999f8eu,
    0x43d1193fu, 0xe20892f0u, 0x80400ca1u, 0x1e778652u, 0xbcaf0003u, 0x5ae679b4u, 0xf91df365u, 0x97556d16u,
    0x358ce6c7u, 0xd3c46078u, 0x71fbda29u, 0x103353dau, 0xae6acd8bu, 0x4ca2473cu, 0xead9c0edu, 0x89113a9eu,
    0x2748b44fu, 0xc5802e00u, 0x63b7a7b1u, 0x01ef2162u, 0xa0269b13u, 0x3e5e14c4u, 0xdc958e75u, 0x7acd0826u,
    0x190481d7u, 0xb73bfb88u, 0x55737539u, 0xf3aaeeeau, 0x91e2689bu, 0x3019e24cu, 0xce515bfdu, 0x6c88d5aeu,
    0x0ac04f5fu, 0xa8f7c910u, 0x472f42c1u, 0xe566bc72u, 0x839e3623u, 0x21d5afd4u, 0xc00d2985u, 0x5e44a336u,
    0xfc7c1ce7u, 0x9ab39698u, 0x38eb1049u, 0xd72289fau, 0x755a03abu, 0x13917d5cu, 0xb1c8f70du, 0x500070beu,
};

static const uint32_t bshim_277_tab1[96] = {
    0x1b195cd0u, 0xb950d681u, 0x57885032u, 0xf5bfc9e3u, 0x93f74394u, 0x322ebd45u, 0xd06636f6u, 0x6e9db0a7u,
    0x0cd52a58u, 0xab0ca409u, 0x49441dbau, 0xe77b976bu, 0x85b3111cu, 0x23ea8acdu, 0xc222047eu, 0x60597e2fu,
    0xfe90f7e0u, 0x9cc87191u, 0x3affeb42u, 0xd93764f3u, 0x776edea4u, 0x15a65855u, 0xb3ddd206u, 0x52154bb7u,
    0xf04cc568u, 0x8e843f19u, 0x2cbbb8cau, 0xcaf3327bu, 0x692aac2cu, 0x076225ddu, 0xa5999f8eu, 0x43d1193fu,
    0xe20892f0u, 0x80400ca1u, 0x1e778652u, 0xbcaf0003u, 0x5ae679b4u, 0xf91df365u, 0x97556d16u, 0x358ce6c7u,
    0xd3c46078u, 0x71fbda29u, 0x103353dau, 0xae6acd8bu, 0x4ca2473cu, 0xead9c0edu, 0x89113a9eu, 0x2748b44fu,
    0xc5802e00u, 0x63b7a7b1u, 0x01ef2162u, 0xa0269b13u, 0x3e5e14c4u, 0xdc958e75u, 0x7acd0826u, 0x190481d7u,
    0xb73bfb88u, 0x55737539u, 0xf3aaeeeau, 0x91e2689bu, 0x3019e24cu, 0xce515bfdu, 0x6c88d5aeu, 0x0ac04f5fu,
    0xa8f7c910u, 0x472f42c1u, 0xe566bc72u, 0x839e3623u, 0x21d5afd4u, 0xc00d2985u, 0x5e44a336u, 0xfc7c1ce7u,
    0x9ab39698u, 0x38eb1049u, 0xd72289fau, 0x755a03abu, 0x13917d5cu, 0xb1c8f70du, 0x500070beu, 0xee37ea6fu,
    0x8c6f6420u, 0x2aa6ddd1u, 0xc8de5782u, 0x6715d133u, 0x054d4ae4u, 0xa384c495u, 0x41bc3e46u, 0xdff3b7f7u,
    0x7e2b31a8u, 0x1c62ab59u, 0xba9a250au, 0x58d19ebbu, 0xf709186cu, 0x9540921du, 0x33780bceu, 0xd1af857fu,
};

static const uint32_t bshim_277_tab2[96] = {
    0x9cc87191u, 0x3affeb42u, 0xd93764f3u, 0x776edea4u, 0x15a65855u, 0xb3ddd206u, 0x52154bb7u, 0xf04cc568u,
    0x8e843f19u, 0x2cbbb8cau, 0xcaf3327bu, 0x692aac2cu, 0x076225ddu, 0xa5999f8eu, 0x43d1193fu, 0xe20892f0u,
    0x80400ca1u, 0x1e778652u, 0xbcaf0003u, 0x5ae679b4u, 0xf91df365u, 0x97556d16u, 0x358ce6c7u, 0xd3c46078u,
    0x71fbda29u, 0x103353dau, 0xae6acd8bu, 0x4ca2473cu, 0xead9c0edu, 0x89113a9eu, 0x2748b44fu, 0xc5802e00u,
    0x63b7a7b1u, 0x01ef2162u, 0xa0269b13u, 0x3e5e14c4u, 0xdc958e75u, 0x7acd0826u, 0x190481d7u, 0xb73bfb88u,
    0x55737539u, 0xf3aaeeeau, 0x91e2689bu, 0x3019e24cu, 0xce515bfdu, 0x6c88d5aeu, 0x0ac04f5fu, 0xa8f7c910u,
    0x472f42c1u, 0xe566bc72u, 0x839e3623u, 0x21d5afd4u, 0xc00d2985u, 0x5e44a336u, 0xfc7c1ce7u, 0x9ab39698u,
    0x38eb1049u, 0xd72289fau, 0x755a03abu, 0x13917d5cu, 0xb1c8f70du, 0x500070beu, 0xee37ea6fu, 0x8c6f6420u,
    0x2aa6ddd1u, 0xc8de5782u, 0x6715d133u, 0x054d4ae4u, 0xa384c495u, 0x41bc3e46u, 0xdff3b7f7u, 0x7e2b31a8u,
    0x1c62ab59u, 0xba9a250au, 0x58d19ebbu, 0xf709186cu, 0x9540921du, 0x33780bceu, 0xd1af857fu, 0x6fe6ff30u,
    0x0e1e78e1u, 0xac55f292u, 0x4a8d6c43u, 0xe8c4e5f4u, 0x86fc5fa5u, 0x2533d956u, 0xc36b5307u, 0x61a2ccb8u,
    0xffda4669u, 0x9e11c01au, 0x3c4939cbu, 0xda80b37cu, 0x78b82d2du, 0x16efa6deu, 0xb527208fu, 0x535e9a40u,
};

static const uint32_t bshim_277_tab3[96] = {
    0x1e778652u, 0xbcaf0003u, 0x5ae679b4u, 0xf91df365u, 0x97556d16u, 0x358ce6c7u, 0xd3c46078u, 0x71fbda29u,
    0x103353dau, 0xae6acd8bu, 0x4ca2473cu, 0xead9c0edu, 0x89113a9eu, 0x2748b44fu, 0xc5802e00u, 0x63b7a7b1u,
    0x01ef2162u, 0xa0269b13u, 0x3e5e14c4u, 0xdc958e75u, 0x7acd0826u, 0x190481d7u, 0xb73bfb88u, 0x55737539u,
    0xf3aaeeeau, 0x91e2689bu, 0x3019e24cu, 0xce515bfdu, 0x6c88d5aeu, 0x0ac04f5fu, 0xa8f7c910u, 0x472f42c1u,
    0xe566bc72u, 0x839e3623u, 0x21d5afd4u, 0xc00d2985u, 0x5e44a336u, 0xfc7c1ce7u, 0x9ab39698u, 0x38eb1049u,
    0xd72289fau, 0x755a03abu, 0x13917d5cu, 0xb1c8f70du, 0x500070beu, 0xee37ea6fu, 0x8c6f6420u, 0x2aa6ddd1u,
    0xc8de5782u, 0x6715d133u, 0x054d4ae4u, 0xa384c495u, 0x41bc3e46u, 0xdff3b7f7u, 0x7e2b31a8u, 0x1c62ab59u,
    0xba9a250au, 0x58d19ebbu, 0xf709186cu, 0x9540921du, 0x33780bceu, 0xd1af857fu, 0x6fe6ff30u, 0x0e1e78e1u,
    0xac55f292u, 0x4a8d6c43u, 0xe8c4e5f4u, 0x86fc5fa5u, 0x2533d956u, 0xc36b5307u, 0x61a2ccb8u, 0xffda4669u,
    0x9e11c01au, 0x3c4939cbu, 0xda80b37cu, 0x78b82d2du, 0x16efa6deu, 0xb527208fu, 0x535e9a40u, 0xf19613f1u,
    0x8fcd8da2u, 0x2e050753u, 0xcc3c8104u, 0x6a73fab5u, 0x08ab7466u, 0xa6e2ee17u, 0x451a67c8u, 0xe351e179u,
    0x81895b2au, 0x1fc0d4dbu, 0xbdf84e8cu, 0x5c2fc83du, 0xfa6741eeu, 0x989ebb9fu, 0x36d63550u, 0xd50daf01u,
};

static const uint32_t bshim_277_tab4[96] = {
    0xa0269b13u, 0x3e5e14c4u, 0xdc958e75u, 0x7acd0826u, 0x190481d7u, 0xb73bfb88u, 0x55737539u, 0xf3aaeeeau,
    0x91e2689bu, 0x3019e24cu, 0xce515bfdu, 0x6c88d5aeu, 0x0ac04f5fu, 0xa8f7c910u, 0x472f42c1u, 0xe566bc72u,
    0x839e3623u, 0x21d5afd4u, 0xc00d2985u, 0x5e44a336u, 0xfc7c1ce7u, 0x9ab39698u, 0x38eb1049u, 0xd72289fau,
    0x755a03abu, 0x13917d5cu, 0xb1c8f70du, 0x500070beu, 0xee37ea6fu, 0x8c6f6420u, 0x2aa6ddd1u, 0xc8de5782u,
    0x6715d133u, 0x054d4ae4u, 0xa384c495u, 0x41bc3e46u, 0xdff3b7f7u, 0x7e2b31a8u, 0x1c62ab59u, 0xba9a250au,
    0x58d19ebbu, 0xf709186cu, 0x9540921du, 0x33780bceu, 0xd1af857fu, 0x6fe6ff30u, 0x0e1e78e1u, 0xac55f292u,
    0x4a8d6c43u, 0xe8c4e5f4u, 0x86fc5fa5u, 0x2533d956u, 0xc36b5307u, 0x61a2ccb8u, 0xffda4669u, 0x9e11c01au,
    0x3c4939cbu, 0xda80b37cu, 0x78b82d2du, 0x16efa6deu, 0xb527208fu, 0x535e9a40u, 0xf19613f1u, 0x8fcd8da2u,
    0x2e050753u, 0xcc3c8104u, 0x6a73fab5u, 0x08ab7466u, 0xa6e2ee17u, 0x451a67c8u, 0xe351e179u, 0x81895b2au,
    0x1fc0d4dbu, 0xbdf84e8cu, 0x5c2fc83du, 0xfa6741eeu, 0x989ebb9fu, 0x36d63550u, 0xd50daf01u, 0x734528b2u,
    0x117ca263u, 0xafb41c14u, 0x4deb95c5u, 0xec230f76u, 0x8a5a8927u, 0x289202d8u, 0xc6c97c89u, 0x6500f63au,
    0x03386febu, 0xa16fe99cu, 0x3fa7634du, 0xdddedcfeu, 0x7c1656afu, 0x1a4dd060u, 0xb8854a11u, 0x56bcc3c2u,
};

static const uint32_t bshim_277_tab5[96] = {
    0x21d5afd4u, 0xc00d2985u, 0x5e44a336u, 0xfc7c1ce7u, 0x9ab39698u, 0x38eb1049u, 0xd72289fau, 0x755a03abu,
    0x13917d5cu, 0xb1c8f70du, 0x500070beu, 0xee37ea6fu, 0x8c6f6420u, 0x2aa6ddd1u, 0xc8de5782u, 0x6715d133u,
    0x054d4ae4u, 0xa384c495u, 0x41bc3e46u, 0xdff3b7f7u, 0x7e2b31a8u, 0x1c62ab59u, 0xba9a250au, 0x58d19ebbu,
    0xf709186cu, 0x9540921du, 0x33780bceu, 0xd1af857fu, 0x6fe6ff30u, 0x0e1e78e1u, 0xac55f292u, 0x4a8d6c43u,
    0xe8c4e5f4u, 0x86fc5fa5u, 0x2533d956u, 0xc36b5307u, 0x61a2ccb8u, 0xffda4669u, 0x9e11c01au, 0x3c4939cbu,
    0xda80b37cu, 0x78b82d2du, 0x16efa6deu, 0xb527208fu, 0x535e9a40u, 0xf19613f1u, 0x8fcd8da2u, 0x2e050753u,
    0xcc3c8104u, 0x6a73fab5u, 0x08ab7466u, 0xa6e2ee17u, 0x451a67c8u, 0xe351e179u, 0x81895b2au, 0x1fc0d4dbu,
    0xbdf84e8cu, 0x5c2fc83du, 0xfa6741eeu, 0x989ebb9fu, 0x36d63550u, 0xd50daf01u, 0x734528b2u, 0x117ca263u,
    0xafb41c14u, 0x4deb95c5u, 0xec230f76u, 0x8a5a8927u, 0x289202d8u, 0xc6c97c89u, 0x6500f63au, 0x03386febu,
    0xa16fe99cu, 0x3fa7634du, 0xdddedcfeu, 0x7c1656afu, 0x1a4dd060u, 0xb8854a11u, 0x56bcc3c2u, 0xf4f43d73u,
    0x932bb724u, 0x316330d5u, 0xcf9aaa86u, 0x6dd22437u, 0x0c099de8u, 0xaa411799u, 0x4878914au, 0xe6b00afbu,
    0x84e784acu, 0x231efe5du, 0xc156780eu, 0x5f8df1bfu, 0xfdc56b70u, 0x9bfce521u, 0x3a345ed2u, 0xd86bd883u,
};

static const uint32_t bshim_277_tab6[96] = {
    0xa384c495u, 0x41bc3e46u, 0xdff3b7f7u, 0x7e2b31a8u, 0x1c62ab59u, 0xba9a250au, 0x58d19ebbu, 0xf709186cu,
    0x9540921du, 0x33780bceu, 0xd1af857fu, 0x6fe6ff30u, 0x0e1e78e1u, 0xac55f292u, 0x4a8d6c43u, 0xe8c4e5f4u,
    0x86fc5fa5u, 0x2533d956u, 0xc36b5307u, 0x61a2ccb8u, 0xffda4669u, 0x9e11c01au, 0x3c4939cbu, 0xda80b37cu,
    0x78b82d2du, 0x16efa6deu, 0xb527208fu, 0x535e9a40u, 0xf19613f1u, 0x8fcd8da2u, 0x2e050753u, 0xcc3c8104u,
    0x6a73fab5u, 0x08ab7466u, 0xa6e2ee17u, 0x451a67c8u, 0xe351e179u, 0x81895b2au, 0x1fc0d4dbu, 0xbdf84e8cu,
    0x5c2fc83du, 0xfa6741eeu, 0x989ebb9fu, 0x36d63550u, 0xd50daf01u, 0x734528b2u, 0x117ca263u, 0xafb41c14u,
    0x4deb95c5u, 0xec230f76u, 0x8a5a8927u, 0x289202d8u, 0xc6c97c89u, 0x6500f63au, 0x03386febu, 0xa16fe99cu,
    0x3fa7634du, 0xdddedcfeu, 0x7c1656afu, 0x1a4dd060u, 0xb8854a11u, 0x56bcc3c2u, 0xf4f43d73u, 0x932bb724u,
    0x316330d5u, 0xcf9aaa86u, 0x6dd22437u, 0x0c099de8u, 0xaa411799u, 0x4878914au, 0xe6b00afbu, 0x84e784acu,
    0x231efe5du, 0xc156780eu, 0x5f8df1bfu, 0xfdc56b70u, 0x9bfce521u, 0x3a345ed2u, 0xd86bd883u, 0x76a35234u,
    0x14dacbe5u, 0xb3124596u, 0x5149bf47u, 0xef8138f8u, 0x8db8b2a9u, 0x2bf02c5au, 0xca27a60bu, 0x685f1fbcu,
    0x0696996du, 0xa4ce131eu, 0x43058ccfu, 0xe13d0680u, 0x7f748031u, 0x1dabf9e2u, 0xbbe37393u, 0x5a1aed44u,
};

static const uint32_t bshim_277_tab7[96] = {
    0x2533d956u, 0xc36b5307u, 0x61a2ccb8u, 0xffda4669u, 0x9e11c01au, 0x3c4939cbu, 0xda80b37cu, 0x78b82d2du,
    0x16efa6deu, 0xb527208fu, 0x535e9a40u, 0xf19613f1u, 0x8fcd8da2u, 0x2e050753u, 0xcc3c8104u, 0x6a73fab5u,
    0x08ab7466u, 0xa6e2ee17u, 0x451a67c8u, 0xe351e179u, 0x81895b2au, 0x1fc0d4dbu, 0xbdf84e8cu, 0x5c2fc83du,
    0xfa6741eeu, 0x989ebb9fu, 0x36d63550u, 0xd50daf01u, 0x734528b2u, 0x117ca263u, 0xafb41c14u, 0x4deb95c5u,
    0xec230f76u, 0x8a5a8927u, 0x289202d8u, 0xc6c97c89u, 0x6500f63au, 0x03386febu, 0xa16fe99cu, 0x3fa7634du,
    0xdddedcfeu, 0x7c1656afu, 0x1a4dd060u, 0xb8854a11u, 0x56bcc3c2u, 0xf4f43d73u, 0x932bb724u, 0x316330d5u,
    0xcf9aaa86u, 0x6dd22437u, 0x0c099de8u, 0xaa411799u, 0x4878914au, 0xe6b00afbu, 0x84e784acu, 0x231efe5du,
    0xc156780eu, 0x5f8df1bfu, 0xfdc56b70u, 0x9bfce521u, 0x3a345ed2u, 0xd86bd883u, 0x76a35234u, 0x14dacbe5u,
    0xb3124596u, 0x5149bf47u, 0xef8138f8u, 0x8db8b2a9u, 0x2bf02c5au, 0xca27a60bu, 0x685f1fbcu, 0x0696996du,
    0xa4ce131eu, 0x43058ccfu, 0xe13d0680u, 0x7f748031u, 0x1dabf9e2u, 0xbbe37393u, 0x5a1aed44u, 0xf85266f5u,
    0x9689e0a6u, 0x34c15a57u, 0xd2f8d408u, 0x71304db9u, 0x0f67c76au, 0xad9f411bu, 0x4bd6baccu, 0xea0e347du,
    0x8845ae2eu, 0x267d27dfu, 0xc4b4a190u, 0x62ec1b41u, 0x012394f2u, 0x9f5b0ea3u, 0x3d928854u, 0xdbca0205u,
};

struct bshim_277_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_277_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_277_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_277_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_277_reset(struct bshim_277_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0021789bu;
    return 0;
}

