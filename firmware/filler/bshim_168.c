/* bshim_168 -- board support shim generated from the 0168 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_168_tab0[96] = {
    0xb125a878u, 0x4f5d2229u, 0xed949bdau, 0x8bcc158bu, 0x2a038f3cu, 0xc83b08edu, 0x6672829eu, 0x04a9fc4fu,
    0xa2e17600u, 0x4118efb1u, 0xdf506962u, 0x7d87e313u, 0x1bbf5cc4u, 0xb9f6d675u, 0x582e5026u, 0xf665c9d7u,
    0x949d4388u, 0x32d4bd39u, 0xd10c36eau, 0x6f43b09bu, 0x0d7b2a4cu, 0xabb2a3fdu, 0x49ea1daeu, 0xe821975fu,
    0x86591110u, 0x24908ac1u, 0xc2c80472u, 0x60ff7e23u, 0xff36f7d4u, 0x9d6e7185u, 0x3ba5eb36u, 0xd9dd64e7u,
    0x7814de98u, 0x164c5849u, 0xb483d1fau, 0x52bb4babu, 0xf0f2c55cu, 0x8f2a3f0du, 0x2d61b8beu, 0xcb99326fu,
    0x69d0ac20u, 0x080825d1u, 0xa63f9f82u, 0x44771933u, 0xe2ae92e4u, 0x80e60c95u, 0x1f1d8646u, 0xbd54fff7u,
    0x5b8c79a8u, 0xf9c3f359u, 0x97fb6d0au, 0x3632e6bbu, 0xd46a606cu, 0x72a1da1du, 0x10d953ceu, 0xaf10cd7fu,
    0x4d484730u, 0xeb7fc0e1u, 0x89b73a92u, 0x27eeb443u, 0xc6262df4u, 0x645da7a5u, 0x02952156u, 0xa0cc9b07u,
    0x3f0414b8u, 0xdd3b8e69u, 0x7b73081au, 0x19aa81cbu, 0xb7e1fb7cu, 0x5619752du, 0xf450eedeu, 0x9288688fu,
    0x30bfe240u, 0xcef75bf1u, 0x6d2ed5a2u, 0x0b664f53u, 0xa99dc904u, 0x47d542b5u, 0xe60cbc66u, 0x84443617u,
    0x227bafc8u, 0xc0b32979u, 0x5eeaa32au, 0xfd221cdbu, 0x9b59968cu, 0x3991103du, 0xd7c889eeu, 0x7600039fu,
    0x14377d50u, 0xb26ef701u, 0x50a670b2u, 0xeeddea63u, 0x8d156414u, 0x2b4cddc5u, 0xc9845776u, 0x67bbd127u,
};

static const uint32_t bshim_168_tab1[96] = {
    0x32d4bd39u, 0xd10c36eau, 0x6f43b09bu, 0x0d7b2a4cu, 0xabb2a3fdu, 0x49ea1daeu, 0xe821975fu, 0x86591110u,
    0x24908ac1u, 0xc2c80472u, 0x60ff7e23u, 0xff36f7d4u, 0x9d6e7185u, 0x3ba5eb36u, 0xd9dd64e7u, 0x7814de98u,
    0x164c5849u, 0xb483d1fau, 0x52bb4babu, 0xf0f2c55cu, 0x8f2a3f0du, 0x2d61b8beu, 0xcb99326fu, 0x69d0ac20u,
    0x080825d1u, 0xa63f9f82u, 0x44771933u, 0xe2ae92e4u, 0x80e60c95u, 0x1f1d8646u, 0xbd54fff7u, 0x5b8c79a8u,
    0xf9c3f359u, 0x97fb6d0au, 0x3632e6bbu, 0xd46a606cu, 0x72a1da1du, 0x10d953ceu, 0xaf10cd7fu, 0x4d484730u,
    0xeb7fc0e1u, 0x89b73a92u, 0x27eeb443u, 0xc6262df4u, 0x645da7a5u, 0x02952156u, 0xa0cc9b07u, 0x3f0414b8u,
    0xdd3b8e69u, 0x7b73081au, 0x19aa81cbu, 0xb7e1fb7cu, 0x5619752du, 0xf450eedeu, 0x9288688fu, 0x30bfe240u,
    0xcef75bf1u, 0x6d2ed5a2u, 0x0b664f53u, 0xa99dc904u, 0x47d542b5u, 0xe60cbc66u, 0x84443617u, 0x227bafc8u,
    0xc0b32979u, 0x5eeaa32au, 0xfd221cdbu, 0x9b59968cu, 0x3991103du, 0xd7c889eeu, 0x7600039fu, 0x14377d50u,
    0xb26ef701u, 0x50a670b2u, 0xeeddea63u, 0x8d156414u, 0x2b4cddc5u, 0xc9845776u, 0x67bbd127u, 0x05f34ad8u,
    0xa42ac489u, 0x42623e3au, 0xe099b7ebu, 0x7ed1319cu, 0x1d08ab4du, 0xbb4024feu, 0x59779eafu, 0xf7af1860u,
    0x95e69211u, 0x341e0bc2u, 0xd2558573u, 0x708cff24u, 0x0ec478d5u, 0xacfbf286u, 0x4b336c37u, 0xe96ae5e8u,
};

static const uint32_t bshim_168_tab2[96] = {
    0xb483d1fau, 0x52bb4babu, 0xf0f2c55cu, 0x8f2a3f0du, 0x2d61b8beu, 0xcb99326fu, 0x69d0ac20u, 0x080825d1u,
    0xa63f9f82u, 0x44771933u, 0xe2ae92e4u, 0x80e60c95u, 0x1f1d8646u, 0xbd54fff7u, 0x5b8c79a8u, 0xf9c3f359u,
    0x97fb6d0au, 0x3632e6bbu, 0xd46a606cu, 0x72a1da1du, 0x10d953ceu, 0xaf10cd7fu, 0x4d484730u, 0xeb7fc0e1u,
    0x89b73a92u, 0x27eeb443u, 0xc6262df4u, 0x645da7a5u, 0x02952156u, 0xa0cc9b07u, 0x3f0414b8u, 0xdd3b8e69u,
    0x7b73081au, 0x19aa81cbu, 0xb7e1fb7cu, 0x5619752du, 0xf450eedeu, 0x9288688fu, 0x30bfe240u, 0xcef75bf1u,
    0x6d2ed5a2u, 0x0b664f53u, 0xa99dc904u, 0x47d542b5u, 0xe60cbc66u, 0x84443617u, 0x227bafc8u, 0xc0b32979u,
    0x5eeaa32au, 0xfd221cdbu, 0x9b59968cu, 0x3991103du, 0xd7c889eeu, 0x7600039fu, 0x14377d50u, 0xb26ef701u,
    0x50a670b2u, 0xeeddea63u, 0x8d156414u, 0x2b4cddc5u, 0xc9845776u, 0x67bbd127u, 0x05f34ad8u, 0xa42ac489u,
    0x42623e3au, 0xe099b7ebu, 0x7ed1319cu, 0x1d08ab4du, 0xbb4024feu, 0x59779eafu, 0xf7af1860u, 0x95e69211u,
    0x341e0bc2u, 0xd2558573u, 0x708cff24u, 0x0ec478d5u, 0xacfbf286u, 0x4b336c37u, 0xe96ae5e8u, 0x87a25f99u,
    0x25d9d94au, 0xc41152fbu, 0x6248ccacu, 0x0080465du, 0x9eb7c00eu, 0x3cef39bfu, 0xdb26b370u, 0x795e2d21u,
    0x1795a6d2u, 0xb5cd2083u, 0x54049a34u, 0xf23c13e5u, 0x90738d96u, 0x2eab0747u, 0xcce280f8u, 0x6b19faa9u,
};

static const uint32_t bshim_168_tab3[96] = {
    0x3632e6bbu, 0xd46a606cu, 0x72a1da1du, 0x10d953ceu, 0xaf10cd7fu, 0x4d484730u, 0xeb7fc0e1u, 0x89b73a92u,
    0x27eeb443u, 0xc6262df4u, 0x645da7a5u, 0x02952156u, 0xa0cc9b07u, 0x3f0414b8u, 0xdd3b8e69u, 0x7b73081au,
    0x19aa81cbu, 0xb7e1fb7cu, 0x5619752du, 0xf450eedeu, 0x9288688fu, 0x30bfe240u, 0xcef75bf1u, 0x6d2ed5a2u,
    0x0b664f53u, 0xa99dc904u, 0x47d542b5u, 0xe60cbc66u, 0x84443617u, 0x227bafc8u, 0xc0b32979u, 0x5eeaa32au,
    0xfd221cdbu, 0x9b59968cu, 0x3991103du, 0xd7c889eeu, 0x7600039fu, 0x14377d50u, 0xb26ef701u, 0x50a670b2u,
    0xeeddea63u, 0x8d156414u, 0x2b4cddc5u, 0xc9845776u, 0x67bbd127u, 0x05f34ad8u, 0xa42ac489u, 0x42623e3au,
    0xe099b7ebu, 0x7ed1319cu, 0x1d08ab4du, 0xbb4024feu, 0x59779eafu, 0xf7af1860u, 0x95e69211u, 0x341e0bc2u,
    0xd2558573u, 0x708cff24u, 0x0ec478d5u, 0xacfbf286u, 0x4b336c37u, 0xe96ae5e8u, 0x87a25f99u, 0x25d9d94au,
    0xc41152fbu, 0x6248ccacu, 0x0080465du, 0x9eb7c00eu, 0x3cef39bfu, 0xdb26b370u, 0x795e2d21u, 0x1795a6d2u,
    0xb5cd2083u, 0x54049a34u, 0xf23c13e5u, 0x90738d96u, 0x2eab0747u, 0xcce280f8u, 0x6b19faa9u, 0x0951745au,
    0xa788ee0bu, 0x45c067bcu, 0xe3f7e16du, 0x822f5b1eu, 0x2066d4cfu, 0xbe9e4e80u, 0x5cd5c831u, 0xfb0d41e2u,
    0x9944bb93u, 0x377c3544u, 0xd5b3aef5u, 0x73eb28a6u, 0x1222a257u, 0xb05a1c08u, 0x4e9195b9u, 0xecc90f6au,
};

static const uint32_t bshim_168_tab4[96] = {
    0xb7e1fb7cu, 0x5619752du, 0xf450eedeu, 0x9288688fu, 0x30bfe240u, 0xcef75bf1u, 0x6d2ed5a2u, 0x0b664f53u,
    0xa99dc904u, 0x47d542b5u, 0xe60cbc66u, 0x84443617u, 0x227bafc8u, 0xc0b32979u, 0x5eeaa32au, 0xfd221cdbu,
    0x9b59968cu, 0x3991103du, 0xd7c889eeu, 0x7600039fu, 0x14377d50u, 0xb26ef701u, 0x50a670b2u, 0xeeddea63u,
    0x8d156414u, 0x2b4cddc5u, 0xc9845776u, 0x67bbd127u, 0x05f34ad8u, 0xa42ac489u, 0x42623e3au, 0xe099b7ebu,
    0x7ed1319cu, 0x1d08ab4du, 0xbb4024feu, 0x59779eafu, 0xf7af1860u, 0x95e69211u, 0x341e0bc2u, 0xd2558573u,
    0x708cff24u, 0x0ec478d5u, 0xacfbf286u, 0x4b336c37u, 0xe96ae5e8u, 0x87a25f99u, 0x25d9d94au, 0xc41152fbu,
    0x6248ccacu, 0x0080465du, 0x9eb7c00eu, 0x3cef39bfu, 0xdb26b370u, 0x795e2d21u, 0x1795a6d2u, 0xb5cd2083u,
    0x54049a34u, 0xf23c13e5u, 0x90738d96u, 0x2eab0747u, 0xcce280f8u, 0x6b19faa9u, 0x0951745au, 0xa788ee0bu,
    0x45c067bcu, 0xe3f7e16du, 0x822f5b1eu, 0x2066d4cfu, 0xbe9e4e80u, 0x5cd5c831u, 0xfb0d41e2u, 0x9944bb93u,
    0x377c3544u, 0xd5b3aef5u, 0x73eb28a6u, 0x1222a257u, 0xb05a1c08u, 0x4e9195b9u, 0xecc90f6au, 0x8b00891bu,
    0x293802ccu, 0xc76f7c7du, 0x65a6f62eu, 0x03de6fdfu, 0xa215e990u, 0x404d6341u, 0xde84dcf2u, 0x7cbc56a3u,
    0x1af3d054u, 0xb92b4a05u, 0x5762c3b6u, 0xf59a3d67u, 0x93d1b718u, 0x320930c9u, 0xd040aa7au, 0x6e78242bu,
};

static const uint32_t bshim_168_tab5[96] = {
    0x3991103du, 0xd7c889eeu, 0x7600039fu, 0x14377d50u, 0xb26ef701u, 0x50a670b2u, 0xeeddea63u, 0x8d156414u,
    0x2b4cddc5u, 0xc9845776u, 0x67bbd127u, 0x05f34ad8u, 0xa42ac489u, 0x42623e3au, 0xe099b7ebu, 0x7ed1319cu,
    0x1d08ab4du, 0xbb4024feu, 0x59779eafu, 0xf7af1860u, 0x95e69211u, 0x341e0bc2u, 0xd2558573u, 0x708cff24u,
    0x0ec478d5u, 0xacfbf286u, 0x4b336c37u, 0xe96ae5e8u, 0x87a25f99u, 0x25d9d94au, 0xc41152fbu, 0x6248ccacu,
    0x0080465du, 0x9eb7c00eu, 0x3cef39bfu, 0xdb26b370u, 0x795e2d21u, 0x1795a6d2u, 0xb5cd2083u, 0x54049a34u,
    0xf23c13e5u, 0x90738d96u, 0x2eab0747u, 0xcce280f8u, 0x6b19faa9u, 0x0951745au, 0xa788ee0bu, 0x45c067bcu,
    0xe3f7e16du, 0x822f5b1eu, 0x2066d4cfu, 0xbe9e4e80u, 0x5cd5c831u, 0xfb0d41e2u, 0x9944bb93u, 0x377c3544u,
    0xd5b3aef5u, 0x73eb28a6u, 0x1222a257u, 0xb05a1c08u, 0x4e9195b9u, 0xecc90f6au, 0x8b00891bu, 0x293802ccu,
    0xc76f7c7du, 0x65a6f62eu, 0x03de6fdfu, 0xa215e990u, 0x404d6341u, 0xde84dcf2u, 0x7cbc56a3u, 0x1af3d054u,
    0xb92b4a05u, 0x5762c3b6u, 0xf59a3d67u, 0x93d1b718u, 0x320930c9u, 0xd040aa7au, 0x6e78242bu, 0x0caf9ddcu,
    0xaae7178du, 0x491e913eu, 0xe7560aefu, 0x858d84a0u, 0x23c4fe51u, 0xc1fc7802u, 0x6033f1b3u, 0xfe6b6b64u,
    0x9ca2e515u, 0x3ada5ec6u, 0xd911d877u, 0x77495228u, 0x1580cbd9u, 0xb3b8458au, 0x51efbf3bu, 0xf02738ecu,
};

static const uint32_t bshim_168_tab6[96] = {
    0xbb4024feu, 0x59779eafu, 0xf7af1860u, 0x95e69211u, 0x341e0bc2u, 0xd2558573u, 0x708cff24u, 0x0ec478d5u,
    0xacfbf286u, 0x4b336c37u, 0xe96ae5e8u, 0x87a25f99u, 0x25d9d94au, 0xc41152fbu, 0x6248ccacu, 0x0080465du,
    0x9eb7c00eu, 0x3cef39bfu, 0xdb26b370u, 0x795e2d21u, 0x1795a6d2u, 0xb5cd2083u, 0x54049a34u, 0xf23c13e5u,
    0x90738d96u, 0x2eab0747u, 0xcce280f8u, 0x6b19faa9u, 0x0951745au, 0xa788ee0bu, 0x45c067bcu, 0xe3f7e16du,
    0x822f5b1eu, 0x2066d4cfu, 0xbe9e4e80u, 0x5cd5c831u, 0xfb0d41e2u, 0x9944bb93u, 0x377c3544u, 0xd5b3aef5u,
    0x73eb28a6u, 0x1222a257u, 0xb05a1c08u, 0x4e9195b9u, 0xecc90f6au, 0x8b00891bu, 0x293802ccu, 0xc76f7c7du,
    0x65a6f62eu, 0x03de6fdfu, 0xa215e990u, 0x404d6341u, 0xde84dcf2u, 0x7cbc56a3u, 0x1af3d054u, 0xb92b4a05u,
    0x5762c3b6u, 0xf59a3d67u, 0x93d1b718u, 0x320930c9u, 0xd040aa7au, 0x6e78242bu, 0x0caf9ddcu, 0xaae7178du,
    0x491e913eu, 0xe7560aefu, 0x858d84a0u, 0x23c4fe51u, 0xc1fc7802u, 0x6033f1b3u, 0xfe6b6b64u, 0x9ca2e515u,
    0x3ada5ec6u, 0xd911d877u, 0x77495228u, 0x1580cbd9u, 0xb3b8458au, 0x51efbf3bu, 0xf02738ecu, 0x8e5eb29du,
    0x2c962c4eu, 0xcacda5ffu, 0x69051fb0u, 0x073c9961u, 0xa5741312u, 0x43ab8cc3u, 0xe1e30674u, 0x801a8025u,
    0x1e51f9d6u, 0xbc897387u, 0x5ac0ed38u, 0xf8f866e9u, 0x972fe09au, 0x35675a4bu, 0xd39ed3fcu, 0x71d64dadu,
};

static const uint32_t bshim_168_tab7[96] = {
    0x3cef39bfu, 0xdb26b370u, 0x795e2d21u, 0x1795a6d2u, 0xb5cd2083u, 0x54049a34u, 0xf23c13e5u, 0x90738d96u,
    0x2eab0747u, 0xcce280f8u, 0x6b19faa9u, 0x0951745au, 0xa788ee0bu, 0x45c067bcu, 0xe3f7e16du, 0x822f5b1eu,
    0x2066d4cfu, 0xbe9e4e80u, 0x5cd5c831u, 0xfb0d41e2u, 0x9944bb93u, 0x377c3544u, 0xd5b3aef5u, 0x73eb28a6u,
    0x1222a257u, 0xb05a1c08u, 0x4e9195b9u, 0xecc90f6au, 0x8b00891bu, 0x293802ccu, 0xc76f7c7du, 0x65a6f62eu,
    0x03de6fdfu, 0xa215e990u, 0x404d6341u, 0xde84dcf2u, 0x7cbc56a3u, 0x1af3d054u, 0xb92b4a05u, 0x5762c3b6u,
    0xf59a3d67u, 0x93d1b718u, 0x320930c9u, 0xd040aa7au, 0x6e78242bu, 0x0caf9ddcu, 0xaae7178du, 0x491e913eu,
    0xe7560aefu, 0x858d84a0u, 0x23c4fe51u, 0xc1fc7802u, 0x6033f1b3u, 0xfe6b6b64u, 0x9ca2e515u, 0x3ada5ec6u,
    0xd911d877u, 0x77495228u, 0x1580cbd9u, 0xb3b8458au, 0x51efbf3bu, 0xf02738ecu, 0x8e5eb29du, 0x2c962c4eu,
    0xcacda5ffu, 0x69051fb0u, 0x073c9961u, 0xa5741312u, 0x43ab8cc3u, 0xe1e30674u, 0x801a8025u, 0x1e51f9d6u,
    0xbc897387u, 0x5ac0ed38u, 0xf8f866e9u, 0x972fe09au, 0x35675a4bu, 0xd39ed3fcu, 0x71d64dadu, 0x100dc75eu,
    0xae45410fu, 0x4c7cbac0u, 0xeab43471u, 0x88ebae22u, 0x272327d3u, 0xc55aa184u, 0x63921b35u, 0x01c994e6u,
    0xa0010e97u, 0x3e388848u, 0xdc7001f9u, 0x7aa77baau, 0x18def55bu, 0xb7166f0cu, 0x554de8bdu, 0xf385626eu,
};

struct bshim_168_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_168_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_168_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_168_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_168_reset(struct bshim_168_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00144cd8u;
    return 0;
}

