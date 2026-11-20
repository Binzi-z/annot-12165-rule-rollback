/* bshim_234 -- board support shim generated from the 0234 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_234_tab0[96] = {
    0x36bd985eu, 0xd4f5120fu, 0x732c8bc0u, 0x11640571u, 0xaf9b7f22u, 0x4dd2f8d3u, 0xec0a7284u, 0x8a41ec35u,
    0x287965e6u, 0xc6b0df97u, 0x64e85948u, 0x031fd2f9u, 0xa1574caau, 0x3f8ec65bu, 0xddc6400cu, 0x7bfdb9bdu,
    0x1a35336eu, 0xb86cad1fu, 0x56a426d0u, 0xf4dba081u, 0x93131a32u, 0x314a93e3u, 0xcf820d94u, 0x6db98745u,
    0x0bf100f6u, 0xaa287aa7u, 0x485ff458u, 0xe6976e09u, 0x84cee7bau, 0x2306616bu, 0xc13ddb1cu, 0x5f7554cdu,
    0xfdacce7eu, 0x9be4482fu, 0x3a1bc1e0u, 0xd8533b91u, 0x768ab542u, 0x14c22ef3u, 0xb2f9a8a4u, 0x51312255u,
    0xef689c06u, 0x8da015b7u, 0x2bd78f68u, 0xca0f0919u, 0x684682cau, 0x067dfc7bu, 0xa4b5762cu, 0x42ecefddu,
    0xe124698eu, 0x7f5be33fu, 0x1d935cf0u, 0xbbcad6a1u, 0x5a025052u, 0xf839ca03u, 0x967143b4u, 0x34a8bd65u,
    0xd2e03716u, 0x7117b0c7u, 0x0f4f2a78u, 0xad86a429u, 0x4bbe1ddau, 0xe9f5978bu, 0x882d113cu, 0x26648aedu,
    0xc49c049eu, 0x62d37e4fu, 0x010af800u, 0x9f4271b1u, 0x3d79eb62u, 0xdbb16513u, 0x79e8dec4u, 0x18205875u,
    0xb657d226u, 0x548f4bd7u, 0xf2c6c588u, 0x90fe3f39u, 0x2f35b8eau, 0xcd6d329bu, 0x6ba4ac4cu, 0x09dc25fdu,
    0xa8139faeu, 0x464b195fu, 0xe4829310u, 0x82ba0cc1u, 0x20f18672u, 0xbf290023u, 0x5d6079d4u, 0xfb97f385u,
    0x99cf6d36u, 0x3806e6e7u, 0xd63e6098u, 0x7475da49u, 0x12ad53fau, 0xb0e4cdabu, 0x4f1c475cu, 0xed53c10du,
};

static const uint32_t bshim_234_tab1[96] = {
    0xb86cad1fu, 0x56a426d0u, 0xf4dba081u, 0x93131a32u, 0x314a93e3u, 0xcf820d94u, 0x6db98745u, 0x0bf100f6u,
    0xaa287aa7u, 0x485ff458u, 0xe6976e09u, 0x84cee7bau, 0x2306616bu, 0xc13ddb1cu, 0x5f7554cdu, 0xfdacce7eu,
    0x9be4482fu, 0x3a1bc1e0u, 0xd8533b91u, 0x768ab542u, 0x14c22ef3u, 0xb2f9a8a4u, 0x51312255u, 0xef689c06u,
    0x8da015b7u, 0x2bd78f68u, 0xca0f0919u, 0x684682cau, 0x067dfc7bu, 0xa4b5762cu, 0x42ecefddu, 0xe124698eu,
    0x7f5be33fu, 0x1d935cf0u, 0xbbcad6a1u, 0x5a025052u, 0xf839ca03u, 0x967143b4u, 0x34a8bd65u, 0xd2e03716u,
    0x7117b0c7u, 0x0f4f2a78u, 0xad86a429u, 0x4bbe1ddau, 0xe9f5978bu, 0x882d113cu, 0x26648aedu, 0xc49c049eu,
    0x62d37e4fu, 0x010af800u, 0x9f4271b1u, 0x3d79eb62u, 0xdbb16513u, 0x79e8dec4u, 0x18205875u, 0xb657d226u,
    0x548f4bd7u, 0xf2c6c588u, 0x90fe3f39u, 0x2f35b8eau, 0xcd6d329bu, 0x6ba4ac4cu, 0x09dc25fdu, 0xa8139faeu,
    0x464b195fu, 0xe4829310u, 0x82ba0cc1u, 0x20f18672u, 0xbf290023u, 0x5d6079d4u, 0xfb97f385u, 0x99cf6d36u,
    0x3806e6e7u, 0xd63e6098u, 0x7475da49u, 0x12ad53fau, 0xb0e4cdabu, 0x4f1c475cu, 0xed53c10du, 0x8b8b3abeu,
    0x29c2b46fu, 0xc7fa2e20u, 0x6631a7d1u, 0x04692182u, 0xa2a09b33u, 0x40d814e4u, 0xdf0f8e95u, 0x7d470846u,
    0x1b7e81f7u, 0xb9b5fba8u, 0x57ed7559u, 0xf624ef0au, 0x945c68bbu, 0x3293e26cu, 0xd0cb5c1du, 0x6f02d5ceu,
};

static const uint32_t bshim_234_tab2[96] = {
    0x3a1bc1e0u, 0xd8533b91u, 0x768ab542u, 0x14c22ef3u, 0xb2f9a8a4u, 0x51312255u, 0xef689c06u, 0x8da015b7u,
    0x2bd78f68u, 0xca0f0919u, 0x684682cau, 0x067dfc7bu, 0xa4b5762cu, 0x42ecefddu, 0xe124698eu, 0x7f5be33fu,
    0x1d935cf0u, 0xbbcad6a1u, 0x5a025052u, 0xf839ca03u, 0x967143b4u, 0x34a8bd65u, 0xd2e03716u, 0x7117b0c7u,
    0x0f4f2a78u, 0xad86a429u, 0x4bbe1ddau, 0xe9f5978bu, 0x882d113cu, 0x26648aedu, 0xc49c049eu, 0x62d37e4fu,
    0x010af800u, 0x9f4271b1u, 0x3d79eb62u, 0xdbb16513u, 0x79e8dec4u, 0x18205875u, 0xb657d226u, 0x548f4bd7u,
    0xf2c6c588u, 0x90fe3f39u, 0x2f35b8eau, 0xcd6d329bu, 0x6ba4ac4cu, 0x09dc25fdu, 0xa8139faeu, 0x464b195fu,
    0xe4829310u, 0x82ba0cc1u, 0x20f18672u, 0xbf290023u, 0x5d6079d4u, 0xfb97f385u, 0x99cf6d36u, 0x3806e6e7u,
    0xd63e6098u, 0x7475da49u, 0x12ad53fau, 0xb0e4cdabu, 0x4f1c475cu, 0xed53c10du, 0x8b8b3abeu, 0x29c2b46fu,
    0xc7fa2e20u, 0x6631a7d1u, 0x04692182u, 0xa2a09b33u, 0x40d814e4u, 0xdf0f8e95u, 0x7d470846u, 0x1b7e81f7u,
    0xb9b5fba8u, 0x57ed7559u, 0xf624ef0au, 0x945c68bbu, 0x3293e26cu, 0xd0cb5c1du, 0x6f02d5ceu, 0x0d3a4f7fu,
    0xab71c930u, 0x49a942e1u, 0xe7e0bc92u, 0x86183643u, 0x244faff4u, 0xc28729a5u, 0x60bea356u, 0xfef61d07u,
    0x9d2d96b8u, 0x3b651069u, 0xd99c8a1au, 0x77d403cbu, 0x160b7d7cu, 0xb442f72du, 0x527a70deu, 0xf0b1ea8fu,
};

static const uint32_t bshim_234_tab3[96] = {
    0xbbcad6a1u, 0x5a025052u, 0xf839ca03u, 0x967143b4u, 0x34a8bd65u, 0xd2e03716u, 0x7117b0c7u, 0x0f4f2a78u,
    0xad86a429u, 0x4bbe1ddau, 0xe9f5978bu, 0x882d113cu, 0x26648aedu, 0xc49c049eu, 0x62d37e4fu, 0x010af800u,
    0x9f4271b1u, 0x3d79eb62u, 0xdbb16513u, 0x79e8dec4u, 0x18205875u, 0xb657d226u, 0x548f4bd7u, 0xf2c6c588u,
    0x90fe3f39u, 0x2f35b8eau, 0xcd6d329bu, 0x6ba4ac4cu, 0x09dc25fdu, 0xa8139faeu, 0x464b195fu, 0xe4829310u,
    0x82ba0cc1u, 0x20f18672u, 0xbf290023u, 0x5d6079d4u, 0xfb97f385u, 0x99cf6d36u, 0x3806e6e7u, 0xd63e6098u,
    0x7475da49u, 0x12ad53fau, 0xb0e4cdabu, 0x4f1c475cu, 0xed53c10du, 0x8b8b3abeu, 0x29c2b46fu, 0xc7fa2e20u,
    0x6631a7d1u, 0x04692182u, 0xa2a09b33u, 0x40d814e4u, 0xdf0f8e95u, 0x7d470846u, 0x1b7e81f7u, 0xb9b5fba8u,
    0x57ed7559u, 0xf624ef0au, 0x945c68bbu, 0x3293e26cu, 0xd0cb5c1du, 0x6f02d5ceu, 0x0d3a4f7fu, 0xab71c930u,
    0x49a942e1u, 0xe7e0bc92u, 0x86183643u, 0x244faff4u, 0xc28729a5u, 0x60bea356u, 0xfef61d07u, 0x9d2d96b8u,
    0x3b651069u, 0xd99c8a1au, 0x77d403cbu, 0x160b7d7cu, 0xb442f72du, 0x527a70deu, 0xf0b1ea8fu, 0x8ee96440u,
    0x2d20ddf1u, 0xcb5857a2u, 0x698fd153u, 0x07c74b04u, 0xa5fec4b5u, 0x44363e66u, 0xe26db817u, 0x80a531c8u,
    0x1edcab79u, 0xbd14252au, 0x5b4b9edbu, 0xf983188cu, 0x97ba923du, 0x35f20beeu, 0xd429859fu, 0x7260ff50u,
};

static const uint32_t bshim_234_tab4[96] = {
    0x3d79eb62u, 0xdbb16513u, 0x79e8dec4u, 0x18205875u, 0xb657d226u, 0x548f4bd7u, 0xf2c6c588u, 0x90fe3f39u,
    0x2f35b8eau, 0xcd6d329bu, 0x6ba4ac4cu, 0x09dc25fdu, 0xa8139faeu, 0x464b195fu, 0xe4829310u, 0x82ba0cc1u,
    0x20f18672u, 0xbf290023u, 0x5d6079d4u, 0xfb97f385u, 0x99cf6d36u, 0x3806e6e7u, 0xd63e6098u, 0x7475da49u,
    0x12ad53fau, 0xb0e4cdabu, 0x4f1c475cu, 0xed53c10du, 0x8b8b3abeu, 0x29c2b46fu, 0xc7fa2e20u, 0x6631a7d1u,
    0x04692182u, 0xa2a09b33u, 0x40d814e4u, 0xdf0f8e95u, 0x7d470846u, 0x1b7e81f7u, 0xb9b5fba8u, 0x57ed7559u,
    0xf624ef0au, 0x945c68bbu, 0x3293e26cu, 0xd0cb5c1du, 0x6f02d5ceu, 0x0d3a4f7fu, 0xab71c930u, 0x49a942e1u,
    0xe7e0bc92u, 0x86183643u, 0x244faff4u, 0xc28729a5u, 0x60bea356u, 0xfef61d07u, 0x9d2d96b8u, 0x3b651069u,
    0xd99c8a1au, 0x77d403cbu, 0x160b7d7cu, 0xb442f72du, 0x527a70deu, 0xf0b1ea8fu, 0x8ee96440u, 0x2d20ddf1u,
    0xcb5857a2u, 0x698fd153u, 0x07c74b04u, 0xa5fec4b5u, 0x44363e66u, 0xe26db817u, 0x80a531c8u, 0x1edcab79u,
    0xbd14252au, 0x5b4b9edbu, 0xf983188cu, 0x97ba923du, 0x35f20beeu, 0xd429859fu, 0x7260ff50u, 0x10987901u,
    0xaecff2b2u, 0x4d076c63u, 0xeb3ee614u, 0x89765fc5u, 0x27add976u, 0xc5e55327u, 0x641cccd8u, 0x02544689u,
    0xa08bc03au, 0x3ec339ebu, 0xdcfab39cu, 0x7b322d4du, 0x1969a6feu, 0xb7a120afu, 0x55d89a60u, 0xf4101411u,
};

static const uint32_t bshim_234_tab5[96] = {
    0xbf290023u, 0x5d6079d4u, 0xfb97f385u, 0x99cf6d36u, 0x3806e6e7u, 0xd63e6098u, 0x7475da49u, 0x12ad53fau,
    0xb0e4cdabu, 0x4f1c475cu, 0xed53c10du, 0x8b8b3abeu, 0x29c2b46fu, 0xc7fa2e20u, 0x6631a7d1u, 0x04692182u,
    0xa2a09b33u, 0x40d814e4u, 0xdf0f8e95u, 0x7d470846u, 0x1b7e81f7u, 0xb9b5fba8u, 0x57ed7559u, 0xf624ef0au,
    0x945c68bbu, 0x3293e26cu, 0xd0cb5c1du, 0x6f02d5ceu, 0x0d3a4f7fu, 0xab71c930u, 0x49a942e1u, 0xe7e0bc92u,
    0x86183643u, 0x244faff4u, 0xc28729a5u, 0x60bea356u, 0xfef61d07u, 0x9d2d96b8u, 0x3b651069u, 0xd99c8a1au,
    0x77d403cbu, 0x160b7d7cu, 0xb442f72du, 0x527a70deu, 0xf0b1ea8fu, 0x8ee96440u, 0x2d20ddf1u, 0xcb5857a2u,
    0x698fd153u, 0x07c74b04u, 0xa5fec4b5u, 0x44363e66u, 0xe26db817u, 0x80a531c8u, 0x1edcab79u, 0xbd14252au,
    0x5b4b9edbu, 0xf983188cu, 0x97ba923du, 0x35f20beeu, 0xd429859fu, 0x7260ff50u, 0x10987901u, 0xaecff2b2u,
    0x4d076c63u, 0xeb3ee614u, 0x89765fc5u, 0x27add976u, 0xc5e55327u, 0x641cccd8u, 0x02544689u, 0xa08bc03au,
    0x3ec339ebu, 0xdcfab39cu, 0x7b322d4du, 0x1969a6feu, 0xb7a120afu, 0x55d89a60u, 0xf4101411u, 0x92478dc2u,
    0x307f0773u, 0xceb68124u, 0x6cedfad5u, 0x0b257486u, 0xa95cee37u, 0x479467e8u, 0xe5cbe199u, 0x84035b4au,
    0x223ad4fbu, 0xc0724eacu, 0x5ea9c85du, 0xfce1420eu, 0x9b18bbbfu, 0x39503570u, 0xd787af21u, 0x75bf28d2u,
};

static const uint32_t bshim_234_tab6[96] = {
    0x40d814e4u, 0xdf0f8e95u, 0x7d470846u, 0x1b7e81f7u, 0xb9b5fba8u, 0x57ed7559u, 0xf624ef0au, 0x945c68bbu,
    0x3293e26cu, 0xd0cb5c1du, 0x6f02d5ceu, 0x0d3a4f7fu, 0xab71c930u, 0x49a942e1u, 0xe7e0bc92u, 0x86183643u,
    0x244faff4u, 0xc28729a5u, 0x60bea356u, 0xfef61d07u, 0x9d2d96b8u, 0x3b651069u, 0xd99c8a1au, 0x77d403cbu,
    0x160b7d7cu, 0xb442f72du, 0x527a70deu, 0xf0b1ea8fu, 0x8ee96440u, 0x2d20ddf1u, 0xcb5857a2u, 0x698fd153u,
    0x07c74b04u, 0xa5fec4b5u, 0x44363e66u, 0xe26db817u, 0x80a531c8u, 0x1edcab79u, 0xbd14252au, 0x5b4b9edbu,
    0xf983188cu, 0x97ba923du, 0x35f20beeu, 0xd429859fu, 0x7260ff50u, 0x10987901u, 0xaecff2b2u, 0x4d076c63u,
    0xeb3ee614u, 0x89765fc5u, 0x27add976u, 0xc5e55327u, 0x641cccd8u, 0x02544689u, 0xa08bc03au, 0x3ec339ebu,
    0xdcfab39cu, 0x7b322d4du, 0x1969a6feu, 0xb7a120afu, 0x55d89a60u, 0xf4101411u, 0x92478dc2u, 0x307f0773u,
    0xceb68124u, 0x6cedfad5u, 0x0b257486u, 0xa95cee37u, 0x479467e8u, 0xe5cbe199u, 0x84035b4au, 0x223ad4fbu,
    0xc0724eacu, 0x5ea9c85du, 0xfce1420eu, 0x9b18bbbfu, 0x39503570u, 0xd787af21u, 0x75bf28d2u, 0x13f6a283u,
    0xb22e1c34u, 0x506595e5u, 0xee9d0f96u, 0x8cd48947u, 0x2b0c02f8u, 0xc9437ca9u, 0x677af65au, 0x05b2700bu,
    0xa3e9e9bcu, 0x4221636du, 0xe058dd1eu, 0x7e9056cfu, 0x1cc7d080u, 0xbaff4a31u, 0x5936c3e2u, 0xf76e3d93u,
};

static const uint32_t bshim_234_tab7[96] = {
    0xc28729a5u, 0x60bea356u, 0xfef61d07u, 0x9d2d96b8u, 0x3b651069u, 0xd99c8a1au, 0x77d403cbu, 0x160b7d7cu,
    0xb442f72du, 0x527a70deu, 0xf0b1ea8fu, 0x8ee96440u, 0x2d20ddf1u, 0xcb5857a2u, 0x698fd153u, 0x07c74b04u,
    0xa5fec4b5u, 0x44363e66u, 0xe26db817u, 0x80a531c8u, 0x1edcab79u, 0xbd14252au, 0x5b4b9edbu, 0xf983188cu,
    0x97ba923du, 0x35f20beeu, 0xd429859fu, 0x7260ff50u, 0x10987901u, 0xaecff2b2u, 0x4d076c63u, 0xeb3ee614u,
    0x89765fc5u, 0x27add976u, 0xc5e55327u, 0x641cccd8u, 0x02544689u, 0xa08bc03au, 0x3ec339ebu, 0xdcfab39cu,
    0x7b322d4du, 0x1969a6feu, 0xb7a120afu, 0x55d89a60u, 0xf4101411u, 0x92478dc2u, 0x307f0773u, 0xceb68124u,
    0x6cedfad5u, 0x0b257486u, 0xa95cee37u, 0x479467e8u, 0xe5cbe199u, 0x84035b4au, 0x223ad4fbu, 0xc0724eacu,
    0x5ea9c85du, 0xfce1420eu, 0x9b18bbbfu, 0x39503570u, 0xd787af21u, 0x75bf28d2u, 0x13f6a283u, 0xb22e1c34u,
    0x506595e5u, 0xee9d0f96u, 0x8cd48947u, 0x2b0c02f8u, 0xc9437ca9u, 0x677af65au, 0x05b2700bu, 0xa3e9e9bcu,
    0x4221636du, 0xe058dd1eu, 0x7e9056cfu, 0x1cc7d080u, 0xbaff4a31u, 0x5936c3e2u, 0xf76e3d93u, 0x95a5b744u,
    0x33dd30f5u, 0xd214aaa6u, 0x704c2457u, 0x0e839e08u, 0xacbb17b9u, 0x4af2916au, 0xe92a0b1bu, 0x876184ccu,
    0x2598fe7du, 0xc3d0782eu, 0x6207f1dfu, 0x003f6b90u, 0x9e76e541u, 0x3cae5ef2u, 0xdae5d8a3u, 0x791d5254u,
};

struct bshim_234_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_234_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_234_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_234_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_234_reset(struct bshim_234_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001c4676u;
    return 0;
}

