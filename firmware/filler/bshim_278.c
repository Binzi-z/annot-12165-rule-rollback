/* bshim_278 -- board support shim generated from the 0278 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_278_tab0[96] = {
    0x8fcd8da2u, 0x2e050753u, 0xcc3c8104u, 0x6a73fab5u, 0x08ab7466u, 0xa6e2ee17u, 0x451a67c8u, 0xe351e179u,
    0x81895b2au, 0x1fc0d4dbu, 0xbdf84e8cu, 0x5c2fc83du, 0xfa6741eeu, 0x989ebb9fu, 0x36d63550u, 0xd50daf01u,
    0x734528b2u, 0x117ca263u, 0xafb41c14u, 0x4deb95c5u, 0xec230f76u, 0x8a5a8927u, 0x289202d8u, 0xc6c97c89u,
    0x6500f63au, 0x03386febu, 0xa16fe99cu, 0x3fa7634du, 0xdddedcfeu, 0x7c1656afu, 0x1a4dd060u, 0xb8854a11u,
    0x56bcc3c2u, 0xf4f43d73u, 0x932bb724u, 0x316330d5u, 0xcf9aaa86u, 0x6dd22437u, 0x0c099de8u, 0xaa411799u,
    0x4878914au, 0xe6b00afbu, 0x84e784acu, 0x231efe5du, 0xc156780eu, 0x5f8df1bfu, 0xfdc56b70u, 0x9bfce521u,
    0x3a345ed2u, 0xd86bd883u, 0x76a35234u, 0x14dacbe5u, 0xb3124596u, 0x5149bf47u, 0xef8138f8u, 0x8db8b2a9u,
    0x2bf02c5au, 0xca27a60bu, 0x685f1fbcu, 0x0696996du, 0xa4ce131eu, 0x43058ccfu, 0xe13d0680u, 0x7f748031u,
    0x1dabf9e2u, 0xbbe37393u, 0x5a1aed44u, 0xf85266f5u, 0x9689e0a6u, 0x34c15a57u, 0xd2f8d408u, 0x71304db9u,
    0x0f67c76au, 0xad9f411bu, 0x4bd6baccu, 0xea0e347du, 0x8845ae2eu, 0x267d27dfu, 0xc4b4a190u, 0x62ec1b41u,
    0x012394f2u, 0x9f5b0ea3u, 0x3d928854u, 0xdbca0205u, 0x7a017bb6u, 0x1838f567u, 0xb6706f18u, 0x54a7e8c9u,
    0xf2df627au, 0x9116dc2bu, 0x2f4e55dcu, 0xcd85cf8du, 0x6bbd493eu, 0x09f4c2efu, 0xa82c3ca0u, 0x4663b651u,
};

static const uint32_t bshim_278_tab1[96] = {
    0x117ca263u, 0xafb41c14u, 0x4deb95c5u, 0xec230f76u, 0x8a5a8927u, 0x289202d8u, 0xc6c97c89u, 0x6500f63au,
    0x03386febu, 0xa16fe99cu, 0x3fa7634du, 0xdddedcfeu, 0x7c1656afu, 0x1a4dd060u, 0xb8854a11u, 0x56bcc3c2u,
    0xf4f43d73u, 0x932bb724u, 0x316330d5u, 0xcf9aaa86u, 0x6dd22437u, 0x0c099de8u, 0xaa411799u, 0x4878914au,
    0xe6b00afbu, 0x84e784acu, 0x231efe5du, 0xc156780eu, 0x5f8df1bfu, 0xfdc56b70u, 0x9bfce521u, 0x3a345ed2u,
    0xd86bd883u, 0x76a35234u, 0x14dacbe5u, 0xb3124596u, 0x5149bf47u, 0xef8138f8u, 0x8db8b2a9u, 0x2bf02c5au,
    0xca27a60bu, 0x685f1fbcu, 0x0696996du, 0xa4ce131eu, 0x43058ccfu, 0xe13d0680u, 0x7f748031u, 0x1dabf9e2u,
    0xbbe37393u, 0x5a1aed44u, 0xf85266f5u, 0x9689e0a6u, 0x34c15a57u, 0xd2f8d408u, 0x71304db9u, 0x0f67c76au,
    0xad9f411bu, 0x4bd6baccu, 0xea0e347du, 0x8845ae2eu, 0x267d27dfu, 0xc4b4a190u, 0x62ec1b41u, 0x012394f2u,
    0x9f5b0ea3u, 0x3d928854u, 0xdbca0205u, 0x7a017bb6u, 0x1838f567u, 0xb6706f18u, 0x54a7e8c9u, 0xf2df627au,
    0x9116dc2bu, 0x2f4e55dcu, 0xcd85cf8du, 0x6bbd493eu, 0x09f4c2efu, 0xa82c3ca0u, 0x4663b651u, 0xe49b3002u,
    0x82d2a9b3u, 0x210a2364u, 0xbf419d15u, 0x5d7916c6u, 0xfbb09077u, 0x99e80a28u, 0x381f83d9u, 0xd656fd8au,
    0x748e773bu, 0x12c5f0ecu, 0xb0fd6a9du, 0x4f34e44eu, 0xed6c5dffu, 0x8ba3d7b0u, 0x29db5161u, 0xc812cb12u,
};

static const uint32_t bshim_278_tab2[96] = {
    0x932bb724u, 0x316330d5u, 0xcf9aaa86u, 0x6dd22437u, 0x0c099de8u, 0xaa411799u, 0x4878914au, 0xe6b00afbu,
    0x84e784acu, 0x231efe5du, 0xc156780eu, 0x5f8df1bfu, 0xfdc56b70u, 0x9bfce521u, 0x3a345ed2u, 0xd86bd883u,
    0x76a35234u, 0x14dacbe5u, 0xb3124596u, 0x5149bf47u, 0xef8138f8u, 0x8db8b2a9u, 0x2bf02c5au, 0xca27a60bu,
    0x685f1fbcu, 0x0696996du, 0xa4ce131eu, 0x43058ccfu, 0xe13d0680u, 0x7f748031u, 0x1dabf9e2u, 0xbbe37393u,
    0x5a1aed44u, 0xf85266f5u, 0x9689e0a6u, 0x34c15a57u, 0xd2f8d408u, 0x71304db9u, 0x0f67c76au, 0xad9f411bu,
    0x4bd6baccu, 0xea0e347du, 0x8845ae2eu, 0x267d27dfu, 0xc4b4a190u, 0x62ec1b41u, 0x012394f2u, 0x9f5b0ea3u,
    0x3d928854u, 0xdbca0205u, 0x7a017bb6u, 0x1838f567u, 0xb6706f18u, 0x54a7e8c9u, 0xf2df627au, 0x9116dc2bu,
    0x2f4e55dcu, 0xcd85cf8du, 0x6bbd493eu, 0x09f4c2efu, 0xa82c3ca0u, 0x4663b651u, 0xe49b3002u, 0x82d2a9b3u,
    0x210a2364u, 0xbf419d15u, 0x5d7916c6u, 0xfbb09077u, 0x99e80a28u, 0x381f83d9u, 0xd656fd8au, 0x748e773bu,
    0x12c5f0ecu, 0xb0fd6a9du, 0x4f34e44eu, 0xed6c5dffu, 0x8ba3d7b0u, 0x29db5161u, 0xc812cb12u, 0x664a44c3u,
    0x0481be74u, 0xa2b93825u, 0x40f0b1d6u, 0xdf282b87u, 0x7d5fa538u, 0x1b971ee9u, 0xb9ce989au, 0x5806124bu,
    0xf63d8bfcu, 0x947505adu, 0x32ac7f5eu, 0xd0e3f90fu, 0x6f1b72c0u, 0x0d52ec71u, 0xab8a6622u, 0x49c1dfd3u,
};

static const uint32_t bshim_278_tab3[96] = {
    0x14dacbe5u, 0xb3124596u, 0x5149bf47u, 0xef8138f8u, 0x8db8b2a9u, 0x2bf02c5au, 0xca27a60bu, 0x685f1fbcu,
    0x0696996du, 0xa4ce131eu, 0x43058ccfu, 0xe13d0680u, 0x7f748031u, 0x1dabf9e2u, 0xbbe37393u, 0x5a1aed44u,
    0xf85266f5u, 0x9689e0a6u, 0x34c15a57u, 0xd2f8d408u, 0x71304db9u, 0x0f67c76au, 0xad9f411bu, 0x4bd6baccu,
    0xea0e347du, 0x8845ae2eu, 0x267d27dfu, 0xc4b4a190u, 0x62ec1b41u, 0x012394f2u, 0x9f5b0ea3u, 0x3d928854u,
    0xdbca0205u, 0x7a017bb6u, 0x1838f567u, 0xb6706f18u, 0x54a7e8c9u, 0xf2df627au, 0x9116dc2bu, 0x2f4e55dcu,
    0xcd85cf8du, 0x6bbd493eu, 0x09f4c2efu, 0xa82c3ca0u, 0x4663b651u, 0xe49b3002u, 0x82d2a9b3u, 0x210a2364u,
    0xbf419d15u, 0x5d7916c6u, 0xfbb09077u, 0x99e80a28u, 0x381f83d9u, 0xd656fd8au, 0x748e773bu, 0x12c5f0ecu,
    0xb0fd6a9du, 0x4f34e44eu, 0xed6c5dffu, 0x8ba3d7b0u, 0x29db5161u, 0xc812cb12u, 0x664a44c3u, 0x0481be74u,
    0xa2b93825u, 0x40f0b1d6u, 0xdf282b87u, 0x7d5fa538u, 0x1b971ee9u, 0xb9ce989au, 0x5806124bu, 0xf63d8bfcu,
    0x947505adu, 0x32ac7f5eu, 0xd0e3f90fu, 0x6f1b72c0u, 0x0d52ec71u, 0xab8a6622u, 0x49c1dfd3u, 0xe7f95984u,
    0x8630d335u, 0x24684ce6u, 0xc29fc697u, 0x60d74048u, 0xff0eb9f9u, 0x9d4633aau, 0x3b7dad5bu, 0xd9b5270cu,
    0x77eca0bdu, 0x16241a6eu, 0xb45b941fu, 0x52930dd0u, 0xf0ca8781u, 0x8f020132u, 0x2d397ae3u, 0xcb70f494u,
};

static const uint32_t bshim_278_tab4[96] = {
    0x9689e0a6u, 0x34c15a57u, 0xd2f8d408u, 0x71304db9u, 0x0f67c76au, 0xad9f411bu, 0x4bd6baccu, 0xea0e347du,
    0x8845ae2eu, 0x267d27dfu, 0xc4b4a190u, 0x62ec1b41u, 0x012394f2u, 0x9f5b0ea3u, 0x3d928854u, 0xdbca0205u,
    0x7a017bb6u, 0x1838f567u, 0xb6706f18u, 0x54a7e8c9u, 0xf2df627au, 0x9116dc2bu, 0x2f4e55dcu, 0xcd85cf8du,
    0x6bbd493eu, 0x09f4c2efu, 0xa82c3ca0u, 0x4663b651u, 0xe49b3002u, 0x82d2a9b3u, 0x210a2364u, 0xbf419d15u,
    0x5d7916c6u, 0xfbb09077u, 0x99e80a28u, 0x381f83d9u, 0xd656fd8au, 0x748e773bu, 0x12c5f0ecu, 0xb0fd6a9du,
    0x4f34e44eu, 0xed6c5dffu, 0x8ba3d7b0u, 0x29db5161u, 0xc812cb12u, 0x664a44c3u, 0x0481be74u, 0xa2b93825u,
    0x40f0b1d6u, 0xdf282b87u, 0x7d5fa538u, 0x1b971ee9u, 0xb9ce989au, 0x5806124bu, 0xf63d8bfcu, 0x947505adu,
    0x32ac7f5eu, 0xd0e3f90fu, 0x6f1b72c0u, 0x0d52ec71u, 0xab8a6622u, 0x49c1dfd3u, 0xe7f95984u, 0x8630d335u,
    0x24684ce6u, 0xc29fc697u, 0x60d74048u, 0xff0eb9f9u, 0x9d4633aau, 0x3b7dad5bu, 0xd9b5270cu, 0x77eca0bdu,
    0x16241a6eu, 0xb45b941fu, 0x52930dd0u, 0xf0ca8781u, 0x8f020132u, 0x2d397ae3u, 0xcb70f494u, 0x69a86e45u,
    0x07dfe7f6u, 0xa61761a7u, 0x444edb58u, 0xe2865509u, 0x80bdcebau, 0x1ef5486bu, 0xbd2cc21cu, 0x5b643bcdu,
    0xf99bb57eu, 0x97d32f2fu, 0x360aa8e0u, 0xd4422291u, 0x72799c42u, 0x10b115f3u, 0xaee88fa4u, 0x4d200955u,
};

static const uint32_t bshim_278_tab5[96] = {
    0x1838f567u, 0xb6706f18u, 0x54a7e8c9u, 0xf2df627au, 0x9116dc2bu, 0x2f4e55dcu, 0xcd85cf8du, 0x6bbd493eu,
    0x09f4c2efu, 0xa82c3ca0u, 0x4663b651u, 0xe49b3002u, 0x82d2a9b3u, 0x210a2364u, 0xbf419d15u, 0x5d7916c6u,
    0xfbb09077u, 0x99e80a28u, 0x381f83d9u, 0xd656fd8au, 0x748e773bu, 0x12c5f0ecu, 0xb0fd6a9du, 0x4f34e44eu,
    0xed6c5dffu, 0x8ba3d7b0u, 0x29db5161u, 0xc812cb12u, 0x664a44c3u, 0x0481be74u, 0xa2b93825u, 0x40f0b1d6u,
    0xdf282b87u, 0x7d5fa538u, 0x1b971ee9u, 0xb9ce989au, 0x5806124bu, 0xf63d8bfcu, 0x947505adu, 0x32ac7f5eu,
    0xd0e3f90fu, 0x6f1b72c0u, 0x0d52ec71u, 0xab8a6622u, 0x49c1dfd3u, 0xe7f95984u, 0x8630d335u, 0x24684ce6u,
    0xc29fc697u, 0x60d74048u, 0xff0eb9f9u, 0x9d4633aau, 0x3b7dad5bu, 0xd9b5270cu, 0x77eca0bdu, 0x16241a6eu,
    0xb45b941fu, 0x52930dd0u, 0xf0ca8781u, 0x8f020132u, 0x2d397ae3u, 0xcb70f494u, 0x69a86e45u, 0x07dfe7f6u,
    0xa61761a7u, 0x444edb58u, 0xe2865509u, 0x80bdcebau, 0x1ef5486bu, 0xbd2cc21cu, 0x5b643bcdu, 0xf99bb57eu,
    0x97d32f2fu, 0x360aa8e0u, 0xd4422291u, 0x72799c42u, 0x10b115f3u, 0xaee88fa4u, 0x4d200955u, 0xeb578306u,
    0x898efcb7u, 0x27c67668u, 0xc5fdf019u, 0x643569cau, 0x026ce37bu, 0xa0a45d2cu, 0x3edbd6ddu, 0xdd13508eu,
    0x7b4aca3fu, 0x198243f0u, 0xb7b9bda1u, 0x55f13752u, 0xf428b103u, 0x92602ab4u, 0x3097a465u, 0xcecf1e16u,
};

static const uint32_t bshim_278_tab6[96] = {
    0x99e80a28u, 0x381f83d9u, 0xd656fd8au, 0x748e773bu, 0x12c5f0ecu, 0xb0fd6a9du, 0x4f34e44eu, 0xed6c5dffu,
    0x8ba3d7b0u, 0x29db5161u, 0xc812cb12u, 0x664a44c3u, 0x0481be74u, 0xa2b93825u, 0x40f0b1d6u, 0xdf282b87u,
    0x7d5fa538u, 0x1b971ee9u, 0xb9ce989au, 0x5806124bu, 0xf63d8bfcu, 0x947505adu, 0x32ac7f5eu, 0xd0e3f90fu,
    0x6f1b72c0u, 0x0d52ec71u, 0xab8a6622u, 0x49c1dfd3u, 0xe7f95984u, 0x8630d335u, 0x24684ce6u, 0xc29fc697u,
    0x60d74048u, 0xff0eb9f9u, 0x9d4633aau, 0x3b7dad5bu, 0xd9b5270cu, 0x77eca0bdu, 0x16241a6eu, 0xb45b941fu,
    0x52930dd0u, 0xf0ca8781u, 0x8f020132u, 0x2d397ae3u, 0xcb70f494u, 0x69a86e45u, 0x07dfe7f6u, 0xa61761a7u,
    0x444edb58u, 0xe2865509u, 0x80bdcebau, 0x1ef5486bu, 0xbd2cc21cu, 0x5b643bcdu, 0xf99bb57eu, 0x97d32f2fu,
    0x360aa8e0u, 0xd4422291u, 0x72799c42u, 0x10b115f3u, 0xaee88fa4u, 0x4d200955u, 0xeb578306u, 0x898efcb7u,
    0x27c67668u, 0xc5fdf019u, 0x643569cau, 0x026ce37bu, 0xa0a45d2cu, 0x3edbd6ddu, 0xdd13508eu, 0x7b4aca3fu,
    0x198243f0u, 0xb7b9bda1u, 0x55f13752u, 0xf428b103u, 0x92602ab4u, 0x3097a465u, 0xcecf1e16u, 0x6d0697c7u,
    0x0b3e1178u, 0xa9758b29u, 0x47ad04dau, 0xe5e47e8bu, 0x841bf83cu, 0x225371edu, 0xc08aeb9eu, 0x5ec2654fu,
    0xfcf9df00u, 0x9b3158b1u, 0x3968d262u, 0xd7a04c13u, 0x75d7c5c4u, 0x140f3f75u, 0xb246b926u, 0x507e32d7u,
};

static const uint32_t bshim_278_tab7[96] = {
    0x1b971ee9u, 0xb9ce989au, 0x5806124bu, 0xf63d8bfcu, 0x947505adu, 0x32ac7f5eu, 0xd0e3f90fu, 0x6f1b72c0u,
    0x0d52ec71u, 0xab8a6622u, 0x49c1dfd3u, 0xe7f95984u, 0x8630d335u, 0x24684ce6u, 0xc29fc697u, 0x60d74048u,
    0xff0eb9f9u, 0x9d4633aau, 0x3b7dad5bu, 0xd9b5270cu, 0x77eca0bdu, 0x16241a6eu, 0xb45b941fu, 0x52930dd0u,
    0xf0ca8781u, 0x8f020132u, 0x2d397ae3u, 0xcb70f494u, 0x69a86e45u, 0x07dfe7f6u, 0xa61761a7u, 0x444edb58u,
    0xe2865509u, 0x80bdcebau, 0x1ef5486bu, 0xbd2cc21cu, 0x5b643bcdu, 0xf99bb57eu, 0x97d32f2fu, 0x360aa8e0u,
    0xd4422291u, 0x72799c42u, 0x10b115f3u, 0xaee88fa4u, 0x4d200955u, 0xeb578306u, 0x898efcb7u, 0x27c67668u,
    0xc5fdf019u, 0x643569cau, 0x026ce37bu, 0xa0a45d2cu, 0x3edbd6ddu, 0xdd13508eu, 0x7b4aca3fu, 0x198243f0u,
    0xb7b9bda1u, 0x55f13752u, 0xf428b103u, 0x92602ab4u, 0x3097a465u, 0xcecf1e16u, 0x6d0697c7u, 0x0b3e1178u,
    0xa9758b29u, 0x47ad04dau, 0xe5e47e8bu, 0x841bf83cu, 0x225371edu, 0xc08aeb9eu, 0x5ec2654fu, 0xfcf9df00u,
    0x9b3158b1u, 0x3968d262u, 0xd7a04c13u, 0x75d7c5c4u, 0x140f3f75u, 0xb246b926u, 0x507e32d7u, 0xeeb5ac88u,
    0x8ced2639u, 0x2b249feau, 0xc95c199bu, 0x6793934cu, 0x05cb0cfdu, 0xa40286aeu, 0x423a005fu, 0xe0717a10u,
    0x7ea8f3c1u, 0x1ce06d72u, 0xbb17e723u, 0x594f60d4u, 0xf786da85u, 0x95be5436u, 0x33f5cde7u, 0xd22d4798u,
};

struct bshim_278_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_278_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_278_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_278_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_278_reset(struct bshim_278_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0021978au;
    return 0;
}

