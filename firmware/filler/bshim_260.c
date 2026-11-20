/* bshim_260 -- board support shim generated from the 0260 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_260_tab0[96] = {
    0x3cd2a94cu, 0xdb0a22fdu, 0x79419caeu, 0x1779165fu, 0xb5b09010u, 0x53e809c1u, 0xf21f8372u, 0x9056fd23u,
    0x2e8e76d4u, 0xccc5f085u, 0x6afd6a36u, 0x0934e3e7u, 0xa76c5d98u, 0x45a3d749u, 0xe3db50fau, 0x8212caabu,
    0x204a445cu, 0xbe81be0du, 0x5cb937beu, 0xfaf0b16fu, 0x99282b20u, 0x375fa4d1u, 0xd5971e82u, 0x73ce9833u,
    0x120611e4u, 0xb03d8b95u, 0x4e750546u, 0xecac7ef7u, 0x8ae3f8a8u, 0x291b7259u, 0xc752ec0au, 0x658a65bbu,
    0x03c1df6cu, 0xa1f9591du, 0x4030d2ceu, 0xde684c7fu, 0x7c9fc630u, 0x1ad73fe1u, 0xb90eb992u, 0x57463343u,
    0xf57dacf4u, 0x93b526a5u, 0x31eca056u, 0xd0241a07u, 0x6e5b93b8u, 0x0c930d69u, 0xaaca871au, 0x490200cbu,
    0xe7397a7cu, 0x8570f42du, 0x23a86ddeu, 0xc1dfe78fu, 0x60176140u, 0xfe4edaf1u, 0x9c8654a2u, 0x3abdce53u,
    0xd8f54804u, 0x772cc1b5u, 0x15643b66u, 0xb39bb517u, 0x51d32ec8u, 0xf00aa879u, 0x8e42222au, 0x2c799bdbu,
    0xcab1158cu, 0x68e88f3du, 0x072008eeu, 0xa557829fu, 0x438efc50u, 0xe1c67601u, 0x7ffdefb2u, 0x1e356963u,
    0xbc6ce314u, 0x5aa45cc5u, 0xf8dbd676u, 0x97135027u, 0x354ac9d8u, 0xd3824389u, 0x71b9bd3au, 0x0ff136ebu,
    0xae28b09cu, 0x4c602a4du, 0xea97a3feu, 0x88cf1dafu, 0x27069760u, 0xc53e1111u, 0x63758ac2u, 0x01ad0473u,
    0x9fe47e24u, 0x3e1bf7d5u, 0xdc537186u, 0x7a8aeb37u, 0x18c264e8u, 0xb6f9de99u, 0x5531584au, 0xf368d1fbu,
};

static const uint32_t bshim_260_tab1[96] = {
    0xbe81be0du, 0x5cb937beu, 0xfaf0b16fu, 0x99282b20u, 0x375fa4d1u, 0xd5971e82u, 0x73ce9833u, 0x120611e4u,
    0xb03d8b95u, 0x4e750546u, 0xecac7ef7u, 0x8ae3f8a8u, 0x291b7259u, 0xc752ec0au, 0x658a65bbu, 0x03c1df6cu,
    0xa1f9591du, 0x4030d2ceu, 0xde684c7fu, 0x7c9fc630u, 0x1ad73fe1u, 0xb90eb992u, 0x57463343u, 0xf57dacf4u,
    0x93b526a5u, 0x31eca056u, 0xd0241a07u, 0x6e5b93b8u, 0x0c930d69u, 0xaaca871au, 0x490200cbu, 0xe7397a7cu,
    0x8570f42du, 0x23a86ddeu, 0xc1dfe78fu, 0x60176140u, 0xfe4edaf1u, 0x9c8654a2u, 0x3abdce53u, 0xd8f54804u,
    0x772cc1b5u, 0x15643b66u, 0xb39bb517u, 0x51d32ec8u, 0xf00aa879u, 0x8e42222au, 0x2c799bdbu, 0xcab1158cu,
    0x68e88f3du, 0x072008eeu, 0xa557829fu, 0x438efc50u, 0xe1c67601u, 0x7ffdefb2u, 0x1e356963u, 0xbc6ce314u,
    0x5aa45cc5u, 0xf8dbd676u, 0x97135027u, 0x354ac9d8u, 0xd3824389u, 0x71b9bd3au, 0x0ff136ebu, 0xae28b09cu,
    0x4c602a4du, 0xea97a3feu, 0x88cf1dafu, 0x27069760u, 0xc53e1111u, 0x63758ac2u, 0x01ad0473u, 0x9fe47e24u,
    0x3e1bf7d5u, 0xdc537186u, 0x7a8aeb37u, 0x18c264e8u, 0xb6f9de99u, 0x5531584au, 0xf368d1fbu, 0x91a04bacu,
    0x2fd7c55du, 0xce0f3f0eu, 0x6c46b8bfu, 0x0a7e3270u, 0xa8b5ac21u, 0x46ed25d2u, 0xe5249f83u, 0x835c1934u,
    0x219392e5u, 0xbfcb0c96u, 0x5e028647u, 0xfc39fff8u, 0x9a7179a9u, 0x38a8f35au, 0xd6e06d0bu, 0x7517e6bcu,
};

static const uint32_t bshim_260_tab2[96] = {
    0x4030d2ceu, 0xde684c7fu, 0x7c9fc630u, 0x1ad73fe1u, 0xb90eb992u, 0x57463343u, 0xf57dacf4u, 0x93b526a5u,
    0x31eca056u, 0xd0241a07u, 0x6e5b93b8u, 0x0c930d69u, 0xaaca871au, 0x490200cbu, 0xe7397a7cu, 0x8570f42du,
    0x23a86ddeu, 0xc1dfe78fu, 0x60176140u, 0xfe4edaf1u, 0x9c8654a2u, 0x3abdce53u, 0xd8f54804u, 0x772cc1b5u,
    0x15643b66u, 0xb39bb517u, 0x51d32ec8u, 0xf00aa879u, 0x8e42222au, 0x2c799bdbu, 0xcab1158cu, 0x68e88f3du,
    0x072008eeu, 0xa557829fu, 0x438efc50u, 0xe1c67601u, 0x7ffdefb2u, 0x1e356963u, 0xbc6ce314u, 0x5aa45cc5u,
    0xf8dbd676u, 0x97135027u, 0x354ac9d8u, 0xd3824389u, 0x71b9bd3au, 0x0ff136ebu, 0xae28b09cu, 0x4c602a4du,
    0xea97a3feu, 0x88cf1dafu, 0x27069760u, 0xc53e1111u, 0x63758ac2u, 0x01ad0473u, 0x9fe47e24u, 0x3e1bf7d5u,
    0xdc537186u, 0x7a8aeb37u, 0x18c264e8u, 0xb6f9de99u, 0x5531584au, 0xf368d1fbu, 0x91a04bacu, 0x2fd7c55du,
    0xce0f3f0eu, 0x6c46b8bfu, 0x0a7e3270u, 0xa8b5ac21u, 0x46ed25d2u, 0xe5249f83u, 0x835c1934u, 0x219392e5u,
    0xbfcb0c96u, 0x5e028647u, 0xfc39fff8u, 0x9a7179a9u, 0x38a8f35au, 0xd6e06d0bu, 0x7517e6bcu, 0x134f606du,
    0xb186da1eu, 0x4fbe53cfu, 0xedf5cd80u, 0x8c2d4731u, 0x2a64c0e2u, 0xc89c3a93u, 0x66d3b444u, 0x050b2df5u,
    0xa342a7a6u, 0x417a2157u, 0xdfb19b08u, 0x7de914b9u, 0x1c208e6au, 0xba58081bu, 0x588f81ccu, 0xf6c6fb7du,
};

static const uint32_t bshim_260_tab3[96] = {
    0xc1dfe78fu, 0x60176140u, 0xfe4edaf1u, 0x9c8654a2u, 0x3abdce53u, 0xd8f54804u, 0x772cc1b5u, 0x15643b66u,
    0xb39bb517u, 0x51d32ec8u, 0xf00aa879u, 0x8e42222au, 0x2c799bdbu, 0xcab1158cu, 0x68e88f3du, 0x072008eeu,
    0xa557829fu, 0x438efc50u, 0xe1c67601u, 0x7ffdefb2u, 0x1e356963u, 0xbc6ce314u, 0x5aa45cc5u, 0xf8dbd676u,
    0x97135027u, 0x354ac9d8u, 0xd3824389u, 0x71b9bd3au, 0x0ff136ebu, 0xae28b09cu, 0x4c602a4du, 0xea97a3feu,
    0x88cf1dafu, 0x27069760u, 0xc53e1111u, 0x63758ac2u, 0x01ad0473u, 0x9fe47e24u, 0x3e1bf7d5u, 0xdc537186u,
    0x7a8aeb37u, 0x18c264e8u, 0xb6f9de99u, 0x5531584au, 0xf368d1fbu, 0x91a04bacu, 0x2fd7c55du, 0xce0f3f0eu,
    0x6c46b8bfu, 0x0a7e3270u, 0xa8b5ac21u, 0x46ed25d2u, 0xe5249f83u, 0x835c1934u, 0x219392e5u, 0xbfcb0c96u,
    0x5e028647u, 0xfc39fff8u, 0x9a7179a9u, 0x38a8f35au, 0xd6e06d0bu, 0x7517e6bcu, 0x134f606du, 0xb186da1eu,
    0x4fbe53cfu, 0xedf5cd80u, 0x8c2d4731u, 0x2a64c0e2u, 0xc89c3a93u, 0x66d3b444u, 0x050b2df5u, 0xa342a7a6u,
    0x417a2157u, 0xdfb19b08u, 0x7de914b9u, 0x1c208e6au, 0xba58081bu, 0x588f81ccu, 0xf6c6fb7du, 0x94fe752eu,
    0x3335eedfu, 0xd16d6890u, 0x6fa4e241u, 0x0ddc5bf2u, 0xac13d5a3u, 0x4a4b4f54u, 0xe882c905u, 0x86ba42b6u,
    0x24f1bc67u, 0xc3293618u, 0x6160afc9u, 0xff98297au, 0x9dcfa32bu, 0x3c071cdcu, 0xda3e968du, 0x7876103eu,
};

static const uint32_t bshim_260_tab4[96] = {
    0x438efc50u, 0xe1c67601u, 0x7ffdefb2u, 0x1e356963u, 0xbc6ce314u, 0x5aa45cc5u, 0xf8dbd676u, 0x97135027u,
    0x354ac9d8u, 0xd3824389u, 0x71b9bd3au, 0x0ff136ebu, 0xae28b09cu, 0x4c602a4du, 0xea97a3feu, 0x88cf1dafu,
    0x27069760u, 0xc53e1111u, 0x63758ac2u, 0x01ad0473u, 0x9fe47e24u, 0x3e1bf7d5u, 0xdc537186u, 0x7a8aeb37u,
    0x18c264e8u, 0xb6f9de99u, 0x5531584au, 0xf368d1fbu, 0x91a04bacu, 0x2fd7c55du, 0xce0f3f0eu, 0x6c46b8bfu,
    0x0a7e3270u, 0xa8b5ac21u, 0x46ed25d2u, 0xe5249f83u, 0x835c1934u, 0x219392e5u, 0xbfcb0c96u, 0x5e028647u,
    0xfc39fff8u, 0x9a7179a9u, 0x38a8f35au, 0xd6e06d0bu, 0x7517e6bcu, 0x134f606du, 0xb186da1eu, 0x4fbe53cfu,
    0xedf5cd80u, 0x8c2d4731u, 0x2a64c0e2u, 0xc89c3a93u, 0x66d3b444u, 0x050b2df5u, 0xa342a7a6u, 0x417a2157u,
    0xdfb19b08u, 0x7de914b9u, 0x1c208e6au, 0xba58081bu, 0x588f81ccu, 0xf6c6fb7du, 0x94fe752eu, 0x3335eedfu,
    0xd16d6890u, 0x6fa4e241u, 0x0ddc5bf2u, 0xac13d5a3u, 0x4a4b4f54u, 0xe882c905u, 0x86ba42b6u, 0x24f1bc67u,
    0xc3293618u, 0x6160afc9u, 0xff98297au, 0x9dcfa32bu, 0x3c071cdcu, 0xda3e968du, 0x7876103eu, 0x16ad89efu,
    0xb4e503a0u, 0x531c7d51u, 0xf153f702u, 0x8f8b70b3u, 0x2dc2ea64u, 0xcbfa6415u, 0x6a31ddc6u, 0x08695777u,
    0xa6a0d128u, 0x44d84ad9u, 0xe30fc48au, 0x81473e3bu, 0x1f7eb7ecu, 0xbdb6319du, 0x5bedab4eu, 0xfa2524ffu,
};

static const uint32_t bshim_260_tab5[96] = {
    0xc53e1111u, 0x63758ac2u, 0x01ad0473u, 0x9fe47e24u, 0x3e1bf7d5u, 0xdc537186u, 0x7a8aeb37u, 0x18c264e8u,
    0xb6f9de99u, 0x5531584au, 0xf368d1fbu, 0x91a04bacu, 0x2fd7c55du, 0xce0f3f0eu, 0x6c46b8bfu, 0x0a7e3270u,
    0xa8b5ac21u, 0x46ed25d2u, 0xe5249f83u, 0x835c1934u, 0x219392e5u, 0xbfcb0c96u, 0x5e028647u, 0xfc39fff8u,
    0x9a7179a9u, 0x38a8f35au, 0xd6e06d0bu, 0x7517e6bcu, 0x134f606du, 0xb186da1eu, 0x4fbe53cfu, 0xedf5cd80u,
    0x8c2d4731u, 0x2a64c0e2u, 0xc89c3a93u, 0x66d3b444u, 0x050b2df5u, 0xa342a7a6u, 0x417a2157u, 0xdfb19b08u,
    0x7de914b9u, 0x1c208e6au, 0xba58081bu, 0x588f81ccu, 0xf6c6fb7du, 0x94fe752eu, 0x3335eedfu, 0xd16d6890u,
    0x6fa4e241u, 0x0ddc5bf2u, 0xac13d5a3u, 0x4a4b4f54u, 0xe882c905u, 0x86ba42b6u, 0x24f1bc67u, 0xc3293618u,
    0x6160afc9u, 0xff98297au, 0x9dcfa32bu, 0x3c071cdcu, 0xda3e968du, 0x7876103eu, 0x16ad89efu, 0xb4e503a0u,
    0x531c7d51u, 0xf153f702u, 0x8f8b70b3u, 0x2dc2ea64u, 0xcbfa6415u, 0x6a31ddc6u, 0x08695777u, 0xa6a0d128u,
    0x44d84ad9u, 0xe30fc48au, 0x81473e3bu, 0x1f7eb7ecu, 0xbdb6319du, 0x5bedab4eu, 0xfa2524ffu, 0x985c9eb0u,
    0x36941861u, 0xd4cb9212u, 0x73030bc3u, 0x113a8574u, 0xaf71ff25u, 0x4da978d6u, 0xebe0f287u, 0x8a186c38u,
    0x284fe5e9u, 0xc6875f9au, 0x64bed94bu, 0x02f652fcu, 0xa12dccadu, 0x3f65465eu, 0xdd9cc00fu, 0x7bd439c0u,
};

static const uint32_t bshim_260_tab6[96] = {
    0x46ed25d2u, 0xe5249f83u, 0x835c1934u, 0x219392e5u, 0xbfcb0c96u, 0x5e028647u, 0xfc39fff8u, 0x9a7179a9u,
    0x38a8f35au, 0xd6e06d0bu, 0x7517e6bcu, 0x134f606du, 0xb186da1eu, 0x4fbe53cfu, 0xedf5cd80u, 0x8c2d4731u,
    0x2a64c0e2u, 0xc89c3a93u, 0x66d3b444u, 0x050b2df5u, 0xa342a7a6u, 0x417a2157u, 0xdfb19b08u, 0x7de914b9u,
    0x1c208e6au, 0xba58081bu, 0x588f81ccu, 0xf6c6fb7du, 0x94fe752eu, 0x3335eedfu, 0xd16d6890u, 0x6fa4e241u,
    0x0ddc5bf2u, 0xac13d5a3u, 0x4a4b4f54u, 0xe882c905u, 0x86ba42b6u, 0x24f1bc67u, 0xc3293618u, 0x6160afc9u,
    0xff98297au, 0x9dcfa32bu, 0x3c071cdcu, 0xda3e968du, 0x7876103eu, 0x16ad89efu, 0xb4e503a0u, 0x531c7d51u,
    0xf153f702u, 0x8f8b70b3u, 0x2dc2ea64u, 0xcbfa6415u, 0x6a31ddc6u, 0x08695777u, 0xa6a0d128u, 0x44d84ad9u,
    0xe30fc48au, 0x81473e3bu, 0x1f7eb7ecu, 0xbdb6319du, 0x5bedab4eu, 0xfa2524ffu, 0x985c9eb0u, 0x36941861u,
    0xd4cb9212u, 0x73030bc3u, 0x113a8574u, 0xaf71ff25u, 0x4da978d6u, 0xebe0f287u, 0x8a186c38u, 0x284fe5e9u,
    0xc6875f9au, 0x64bed94bu, 0x02f652fcu, 0xa12dccadu, 0x3f65465eu, 0xdd9cc00fu, 0x7bd439c0u, 0x1a0bb371u,
    0xb8432d22u, 0x567aa6d3u, 0xf4b22084u, 0x92e99a35u, 0x312113e6u, 0xcf588d97u, 0x6d900748u, 0x0bc780f9u,
    0xa9fefaaau, 0x4836745bu, 0xe66dee0cu, 0x84a567bdu, 0x22dce16eu, 0xc1145b1fu, 0x5f4bd4d0u, 0xfd834e81u,
};

static const uint32_t bshim_260_tab7[96] = {
    0xc89c3a93u, 0x66d3b444u, 0x050b2df5u, 0xa342a7a6u, 0x417a2157u, 0xdfb19b08u, 0x7de914b9u, 0x1c208e6au,
    0xba58081bu, 0x588f81ccu, 0xf6c6fb7du, 0x94fe752eu, 0x3335eedfu, 0xd16d6890u, 0x6fa4e241u, 0x0ddc5bf2u,
    0xac13d5a3u, 0x4a4b4f54u, 0xe882c905u, 0x86ba42b6u, 0x24f1bc67u, 0xc3293618u, 0x6160afc9u, 0xff98297au,
    0x9dcfa32bu, 0x3c071cdcu, 0xda3e968du, 0x7876103eu, 0x16ad89efu, 0xb4e503a0u, 0x531c7d51u, 0xf153f702u,
    0x8f8b70b3u, 0x2dc2ea64u, 0xcbfa6415u, 0x6a31ddc6u, 0x08695777u, 0xa6a0d128u, 0x44d84ad9u, 0xe30fc48au,
    0x81473e3bu, 0x1f7eb7ecu, 0xbdb6319du, 0x5bedab4eu, 0xfa2524ffu, 0x985c9eb0u, 0x36941861u, 0xd4cb9212u,
    0x73030bc3u, 0x113a8574u, 0xaf71ff25u, 0x4da978d6u, 0xebe0f287u, 0x8a186c38u, 0x284fe5e9u, 0xc6875f9au,
    0x64bed94bu, 0x02f652fcu, 0xa12dccadu, 0x3f65465eu, 0xdd9cc00fu, 0x7bd439c0u, 0x1a0bb371u, 0xb8432d22u,
    0x567aa6d3u, 0xf4b22084u, 0x92e99a35u, 0x312113e6u, 0xcf588d97u, 0x6d900748u, 0x0bc780f9u, 0xa9fefaaau,
    0x4836745bu, 0xe66dee0cu, 0x84a567bdu, 0x22dce16eu, 0xc1145b1fu, 0x5f4bd4d0u, 0xfd834e81u, 0x9bbac832u,
    0x39f241e3u, 0xd829bb94u, 0x76613545u, 0x1498aef6u, 0xb2d028a7u, 0x5107a258u, 0xef3f1c09u, 0x8d7695bau,
    0x2bae0f6bu, 0xc9e5891cu, 0x681d02cdu, 0x06547c7eu, 0xa48bf62fu, 0x42c36fe0u, 0xe0fae991u, 0x7f326342u,
};

struct bshim_260_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_260_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_260_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_260_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_260_reset(struct bshim_260_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001f6abcu;
    return 0;
}

