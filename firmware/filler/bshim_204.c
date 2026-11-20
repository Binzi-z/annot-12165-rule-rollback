/* bshim_204 -- board support shim generated from the 0204 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_204_tab0[96] = {
    0x571b7124u, 0xf552ead5u, 0x938a6486u, 0x31c1de37u, 0xcff957e8u, 0x6e30d199u, 0x0c684b4au, 0xaa9fc4fbu,
    0x48d73eacu, 0xe70eb85du, 0x8546320eu, 0x237dabbfu, 0xc1b52570u, 0x5fec9f21u, 0xfe2418d2u, 0x9c5b9283u,
    0x3a930c34u, 0xd8ca85e5u, 0x7701ff96u, 0x15397947u, 0xb370f2f8u, 0x51a86ca9u, 0xefdfe65au, 0x8e17600bu,
    0x2c4ed9bcu, 0xca86536du, 0x68bdcd1eu, 0x06f546cfu, 0xa52cc080u, 0x43643a31u, 0xe19bb3e2u, 0x7fd32d93u,
    0x1e0aa744u, 0xbc4220f5u, 0x5a799aa6u, 0xf8b11457u, 0x96e88e08u, 0x352007b9u, 0xd357816au, 0x718efb1bu,
    0x0fc674ccu, 0xadfdee7du, 0x4c35682eu, 0xea6ce1dfu, 0x88a45b90u, 0x26dbd541u, 0xc5134ef2u, 0x634ac8a3u,
    0x01824254u, 0x9fb9bc05u, 0x3df135b6u, 0xdc28af67u, 0x7a602918u, 0x1897a2c9u, 0xb6cf1c7au, 0x5506962bu,
    0xf33e0fdcu, 0x9175898du, 0x2fad033eu, 0xcde47cefu, 0x6c1bf6a0u, 0x0a537051u, 0xa88aea02u, 0x46c263b3u,
    0xe4f9dd64u, 0x83315715u, 0x2168d0c6u, 0xbfa04a77u, 0x5dd7c428u, 0xfc0f3dd9u, 0x9a46b78au, 0x387e313bu,
    0xd6b5aaecu, 0x74ed249du, 0x13249e4eu, 0xb15c17ffu, 0x4f9391b0u, 0xedcb0b61u, 0x8c028512u, 0x2a39fec3u,
    0xc8717874u, 0x66a8f225u, 0x04e06bd6u, 0xa317e587u, 0x414f5f38u, 0xdf86d8e9u, 0x7dbe529au, 0x1bf5cc4bu,
    0xba2d45fcu, 0x5864bfadu, 0xf69c395eu, 0x94d3b30fu, 0x330b2cc0u, 0xd142a671u, 0x6f7a2022u, 0x0db199d3u,
};

static const uint32_t bshim_204_tab1[96] = {
    0xd8ca85e5u, 0x7701ff96u, 0x15397947u, 0xb370f2f8u, 0x51a86ca9u, 0xefdfe65au, 0x8e17600bu, 0x2c4ed9bcu,
    0xca86536du, 0x68bdcd1eu, 0x06f546cfu, 0xa52cc080u, 0x43643a31u, 0xe19bb3e2u, 0x7fd32d93u, 0x1e0aa744u,
    0xbc4220f5u, 0x5a799aa6u, 0xf8b11457u, 0x96e88e08u, 0x352007b9u, 0xd357816au, 0x718efb1bu, 0x0fc674ccu,
    0xadfdee7du, 0x4c35682eu, 0xea6ce1dfu, 0x88a45b90u, 0x26dbd541u, 0xc5134ef2u, 0x634ac8a3u, 0x01824254u,
    0x9fb9bc05u, 0x3df135b6u, 0xdc28af67u, 0x7a602918u, 0x1897a2c9u, 0xb6cf1c7au, 0x5506962bu, 0xf33e0fdcu,
    0x9175898du, 0x2fad033eu, 0xcde47cefu, 0x6c1bf6a0u, 0x0a537051u, 0xa88aea02u, 0x46c263b3u, 0xe4f9dd64u,
    0x83315715u, 0x2168d0c6u, 0xbfa04a77u, 0x5dd7c428u, 0xfc0f3dd9u, 0x9a46b78au, 0x387e313bu, 0xd6b5aaecu,
    0x74ed249du, 0x13249e4eu, 0xb15c17ffu, 0x4f9391b0u, 0xedcb0b61u, 0x8c028512u, 0x2a39fec3u, 0xc8717874u,
    0x66a8f225u, 0x04e06bd6u, 0xa317e587u, 0x414f5f38u, 0xdf86d8e9u, 0x7dbe529au, 0x1bf5cc4bu, 0xba2d45fcu,
    0x5864bfadu, 0xf69c395eu, 0x94d3b30fu, 0x330b2cc0u, 0xd142a671u, 0x6f7a2022u, 0x0db199d3u, 0xabe91384u,
    0x4a208d35u, 0xe85806e6u, 0x868f8097u, 0x24c6fa48u, 0xc2fe73f9u, 0x6135edaau, 0xff6d675bu, 0x9da4e10cu,
    0x3bdc5abdu, 0xda13d46eu, 0x784b4e1fu, 0x1682c7d0u, 0xb4ba4181u, 0x52f1bb32u, 0xf12934e3u, 0x8f60ae94u,
};

static const uint32_t bshim_204_tab2[96] = {
    0x5a799aa6u, 0xf8b11457u, 0x96e88e08u, 0x352007b9u, 0xd357816au, 0x718efb1bu, 0x0fc674ccu, 0xadfdee7du,
    0x4c35682eu, 0xea6ce1dfu, 0x88a45b90u, 0x26dbd541u, 0xc5134ef2u, 0x634ac8a3u, 0x01824254u, 0x9fb9bc05u,
    0x3df135b6u, 0xdc28af67u, 0x7a602918u, 0x1897a2c9u, 0xb6cf1c7au, 0x5506962bu, 0xf33e0fdcu, 0x9175898du,
    0x2fad033eu, 0xcde47cefu, 0x6c1bf6a0u, 0x0a537051u, 0xa88aea02u, 0x46c263b3u, 0xe4f9dd64u, 0x83315715u,
    0x2168d0c6u, 0xbfa04a77u, 0x5dd7c428u, 0xfc0f3dd9u, 0x9a46b78au, 0x387e313bu, 0xd6b5aaecu, 0x74ed249du,
    0x13249e4eu, 0xb15c17ffu, 0x4f9391b0u, 0xedcb0b61u, 0x8c028512u, 0x2a39fec3u, 0xc8717874u, 0x66a8f225u,
    0x04e06bd6u, 0xa317e587u, 0x414f5f38u, 0xdf86d8e9u, 0x7dbe529au, 0x1bf5cc4bu, 0xba2d45fcu, 0x5864bfadu,
    0xf69c395eu, 0x94d3b30fu, 0x330b2cc0u, 0xd142a671u, 0x6f7a2022u, 0x0db199d3u, 0xabe91384u, 0x4a208d35u,
    0xe85806e6u, 0x868f8097u, 0x24c6fa48u, 0xc2fe73f9u, 0x6135edaau, 0xff6d675bu, 0x9da4e10cu, 0x3bdc5abdu,
    0xda13d46eu, 0x784b4e1fu, 0x1682c7d0u, 0xb4ba4181u, 0x52f1bb32u, 0xf12934e3u, 0x8f60ae94u, 0x2d982845u,
    0xcbcfa1f6u, 0x6a071ba7u, 0x083e9558u, 0xa6760f09u, 0x44ad88bau, 0xe2e5026bu, 0x811c7c1cu, 0x1f53f5cdu,
    0xbd8b6f7eu, 0x5bc2e92fu, 0xf9fa62e0u, 0x9831dc91u, 0x36695642u, 0xd4a0cff3u, 0x72d849a4u, 0x110fc355u,
};

static const uint32_t bshim_204_tab3[96] = {
    0xdc28af67u, 0x7a602918u, 0x1897a2c9u, 0xb6cf1c7au, 0x5506962bu, 0xf33e0fdcu, 0x9175898du, 0x2fad033eu,
    0xcde47cefu, 0x6c1bf6a0u, 0x0a537051u, 0xa88aea02u, 0x46c263b3u, 0xe4f9dd64u, 0x83315715u, 0x2168d0c6u,
    0xbfa04a77u, 0x5dd7c428u, 0xfc0f3dd9u, 0x9a46b78au, 0x387e313bu, 0xd6b5aaecu, 0x74ed249du, 0x13249e4eu,
    0xb15c17ffu, 0x4f9391b0u, 0xedcb0b61u, 0x8c028512u, 0x2a39fec3u, 0xc8717874u, 0x66a8f225u, 0x04e06bd6u,
    0xa317e587u, 0x414f5f38u, 0xdf86d8e9u, 0x7dbe529au, 0x1bf5cc4bu, 0xba2d45fcu, 0x5864bfadu, 0xf69c395eu,
    0x94d3b30fu, 0x330b2cc0u, 0xd142a671u, 0x6f7a2022u, 0x0db199d3u, 0xabe91384u, 0x4a208d35u, 0xe85806e6u,
    0x868f8097u, 0x24c6fa48u, 0xc2fe73f9u, 0x6135edaau, 0xff6d675bu, 0x9da4e10cu, 0x3bdc5abdu, 0xda13d46eu,
    0x784b4e1fu, 0x1682c7d0u, 0xb4ba4181u, 0x52f1bb32u, 0xf12934e3u, 0x8f60ae94u, 0x2d982845u, 0xcbcfa1f6u,
    0x6a071ba7u, 0x083e9558u, 0xa6760f09u, 0x44ad88bau, 0xe2e5026bu, 0x811c7c1cu, 0x1f53f5cdu, 0xbd8b6f7eu,
    0x5bc2e92fu, 0xf9fa62e0u, 0x9831dc91u, 0x36695642u, 0xd4a0cff3u, 0x72d849a4u, 0x110fc355u, 0xaf473d06u,
    0x4d7eb6b7u, 0xebb63068u, 0x89edaa19u, 0x282523cau, 0xc65c9d7bu, 0x6494172cu, 0x02cb90ddu, 0xa1030a8eu,
    0x3f3a843fu, 0xdd71fdf0u, 0x7ba977a1u, 0x19e0f152u, 0xb8186b03u, 0x564fe4b4u, 0xf4875e65u, 0x92bed816u,
};

static const uint32_t bshim_204_tab4[96] = {
    0x5dd7c428u, 0xfc0f3dd9u, 0x9a46b78au, 0x387e313bu, 0xd6b5aaecu, 0x74ed249du, 0x13249e4eu, 0xb15c17ffu,
    0x4f9391b0u, 0xedcb0b61u, 0x8c028512u, 0x2a39fec3u, 0xc8717874u, 0x66a8f225u, 0x04e06bd6u, 0xa317e587u,
    0x414f5f38u, 0xdf86d8e9u, 0x7dbe529au, 0x1bf5cc4bu, 0xba2d45fcu, 0x5864bfadu, 0xf69c395eu, 0x94d3b30fu,
    0x330b2cc0u, 0xd142a671u, 0x6f7a2022u, 0x0db199d3u, 0xabe91384u, 0x4a208d35u, 0xe85806e6u, 0x868f8097u,
    0x24c6fa48u, 0xc2fe73f9u, 0x6135edaau, 0xff6d675bu, 0x9da4e10cu, 0x3bdc5abdu, 0xda13d46eu, 0x784b4e1fu,
    0x1682c7d0u, 0xb4ba4181u, 0x52f1bb32u, 0xf12934e3u, 0x8f60ae94u, 0x2d982845u, 0xcbcfa1f6u, 0x6a071ba7u,
    0x083e9558u, 0xa6760f09u, 0x44ad88bau, 0xe2e5026bu, 0x811c7c1cu, 0x1f53f5cdu, 0xbd8b6f7eu, 0x5bc2e92fu,
    0xf9fa62e0u, 0x9831dc91u, 0x36695642u, 0xd4a0cff3u, 0x72d849a4u, 0x110fc355u, 0xaf473d06u, 0x4d7eb6b7u,
    0xebb63068u, 0x89edaa19u, 0x282523cau, 0xc65c9d7bu, 0x6494172cu, 0x02cb90ddu, 0xa1030a8eu, 0x3f3a843fu,
    0xdd71fdf0u, 0x7ba977a1u, 0x19e0f152u, 0xb8186b03u, 0x564fe4b4u, 0xf4875e65u, 0x92bed816u, 0x30f651c7u,
    0xcf2dcb78u, 0x6d654529u, 0x0b9cbedau, 0xa9d4388bu, 0x480bb23cu, 0xe6432bedu, 0x847aa59eu, 0x22b21f4fu,
    0xc0e99900u, 0x5f2112b1u, 0xfd588c62u, 0x9b900613u, 0x39c77fc4u, 0xd7fef975u, 0x76367326u, 0x146decd7u,
};

static const uint32_t bshim_204_tab5[96] = {
    0xdf86d8e9u, 0x7dbe529au, 0x1bf5cc4bu, 0xba2d45fcu, 0x5864bfadu, 0xf69c395eu, 0x94d3b30fu, 0x330b2cc0u,
    0xd142a671u, 0x6f7a2022u, 0x0db199d3u, 0xabe91384u, 0x4a208d35u, 0xe85806e6u, 0x868f8097u, 0x24c6fa48u,
    0xc2fe73f9u, 0x6135edaau, 0xff6d675bu, 0x9da4e10cu, 0x3bdc5abdu, 0xda13d46eu, 0x784b4e1fu, 0x1682c7d0u,
    0xb4ba4181u, 0x52f1bb32u, 0xf12934e3u, 0x8f60ae94u, 0x2d982845u, 0xcbcfa1f6u, 0x6a071ba7u, 0x083e9558u,
    0xa6760f09u, 0x44ad88bau, 0xe2e5026bu, 0x811c7c1cu, 0x1f53f5cdu, 0xbd8b6f7eu, 0x5bc2e92fu, 0xf9fa62e0u,
    0x9831dc91u, 0x36695642u, 0xd4a0cff3u, 0x72d849a4u, 0x110fc355u, 0xaf473d06u, 0x4d7eb6b7u, 0xebb63068u,
    0x89edaa19u, 0x282523cau, 0xc65c9d7bu, 0x6494172cu, 0x02cb90ddu, 0xa1030a8eu, 0x3f3a843fu, 0xdd71fdf0u,
    0x7ba977a1u, 0x19e0f152u, 0xb8186b03u, 0x564fe4b4u, 0xf4875e65u, 0x92bed816u, 0x30f651c7u, 0xcf2dcb78u,
    0x6d654529u, 0x0b9cbedau, 0xa9d4388bu, 0x480bb23cu, 0xe6432bedu, 0x847aa59eu, 0x22b21f4fu, 0xc0e99900u,
    0x5f2112b1u, 0xfd588c62u, 0x9b900613u, 0x39c77fc4u, 0xd7fef975u, 0x76367326u, 0x146decd7u, 0xb2a56688u,
    0x50dce039u, 0xef1459eau, 0x8d4bd39bu, 0x2b834d4cu, 0xc9bac6fdu, 0x67f240aeu, 0x0629ba5fu, 0xa4613410u,
    0x4298adc1u, 0xe0d02772u, 0x7f07a123u, 0x1d3f1ad4u, 0xbb769485u, 0x59ae0e36u, 0xf7e587e7u, 0x961d0198u,
};

static const uint32_t bshim_204_tab6[96] = {
    0x6135edaau, 0xff6d675bu, 0x9da4e10cu, 0x3bdc5abdu, 0xda13d46eu, 0x784b4e1fu, 0x1682c7d0u, 0xb4ba4181u,
    0x52f1bb32u, 0xf12934e3u, 0x8f60ae94u, 0x2d982845u, 0xcbcfa1f6u, 0x6a071ba7u, 0x083e9558u, 0xa6760f09u,
    0x44ad88bau, 0xe2e5026bu, 0x811c7c1cu, 0x1f53f5cdu, 0xbd8b6f7eu, 0x5bc2e92fu, 0xf9fa62e0u, 0x9831dc91u,
    0x36695642u, 0xd4a0cff3u, 0x72d849a4u, 0x110fc355u, 0xaf473d06u, 0x4d7eb6b7u, 0xebb63068u, 0x89edaa19u,
    0x282523cau, 0xc65c9d7bu, 0x6494172cu, 0x02cb90ddu, 0xa1030a8eu, 0x3f3a843fu, 0xdd71fdf0u, 0x7ba977a1u,
    0x19e0f152u, 0xb8186b03u, 0x564fe4b4u, 0xf4875e65u, 0x92bed816u, 0x30f651c7u, 0xcf2dcb78u, 0x6d654529u,
    0x0b9cbedau, 0xa9d4388bu, 0x480bb23cu, 0xe6432bedu, 0x847aa59eu, 0x22b21f4fu, 0xc0e99900u, 0x5f2112b1u,
    0xfd588c62u, 0x9b900613u, 0x39c77fc4u, 0xd7fef975u, 0x76367326u, 0x146decd7u, 0xb2a56688u, 0x50dce039u,
    0xef1459eau, 0x8d4bd39bu, 0x2b834d4cu, 0xc9bac6fdu, 0x67f240aeu, 0x0629ba5fu, 0xa4613410u, 0x4298adc1u,
    0xe0d02772u, 0x7f07a123u, 0x1d3f1ad4u, 0xbb769485u, 0x59ae0e36u, 0xf7e587e7u, 0x961d0198u, 0x34547b49u,
    0xd28bf4fau, 0x70c36eabu, 0x0efae85cu, 0xad32620du, 0x4b69dbbeu, 0xe9a1556fu, 0x87d8cf20u, 0x261048d1u,
    0xc447c282u, 0x627f3c33u, 0x00b6b5e4u, 0x9eee2f95u, 0x3d25a946u, 0xdb5d22f7u, 0x79949ca8u, 0x17cc1659u,
};

static const uint32_t bshim_204_tab7[96] = {
    0xe2e5026bu, 0x811c7c1cu, 0x1f53f5cdu, 0xbd8b6f7eu, 0x5bc2e92fu, 0xf9fa62e0u, 0x9831dc91u, 0x36695642u,
    0xd4a0cff3u, 0x72d849a4u, 0x110fc355u, 0xaf473d06u, 0x4d7eb6b7u, 0xebb63068u, 0x89edaa19u, 0x282523cau,
    0xc65c9d7bu, 0x6494172cu, 0x02cb90ddu, 0xa1030a8eu, 0x3f3a843fu, 0xdd71fdf0u, 0x7ba977a1u, 0x19e0f152u,
    0xb8186b03u, 0x564fe4b4u, 0xf4875e65u, 0x92bed816u, 0x30f651c7u, 0xcf2dcb78u, 0x6d654529u, 0x0b9cbedau,
    0xa9d4388bu, 0x480bb23cu, 0xe6432bedu, 0x847aa59eu, 0x22b21f4fu, 0xc0e99900u, 0x5f2112b1u, 0xfd588c62u,
    0x9b900613u, 0x39c77fc4u, 0xd7fef975u, 0x76367326u, 0x146decd7u, 0xb2a56688u, 0x50dce039u, 0xef1459eau,
    0x8d4bd39bu, 0x2b834d4cu, 0xc9bac6fdu, 0x67f240aeu, 0x0629ba5fu, 0xa4613410u, 0x4298adc1u, 0xe0d02772u,
    0x7f07a123u, 0x1d3f1ad4u, 0xbb769485u, 0x59ae0e36u, 0xf7e587e7u, 0x961d0198u, 0x34547b49u, 0xd28bf4fau,
    0x70c36eabu, 0x0efae85cu, 0xad32620du, 0x4b69dbbeu, 0xe9a1556fu, 0x87d8cf20u, 0x261048d1u, 0xc447c282u,
    0x627f3c33u, 0x00b6b5e4u, 0x9eee2f95u, 0x3d25a946u, 0xdb5d22f7u, 0x79949ca8u, 0x17cc1659u, 0xb603900au,
    0x543b09bbu, 0xf272836cu, 0x90a9fd1du, 0x2ee176ceu, 0xcd18f07fu, 0x6b506a30u, 0x0987e3e1u, 0xa7bf5d92u,
    0x45f6d743u, 0xe42e50f4u, 0x8265caa5u, 0x209d4456u, 0xbed4be07u, 0x5d0c37b8u, 0xfb43b169u, 0x997b2b1au,
};

struct bshim_204_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_204_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_204_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_204_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_204_reset(struct bshim_204_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0018a674u;
    return 0;
}

