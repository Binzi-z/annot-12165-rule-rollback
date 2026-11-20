/* bshim_177 -- board support shim generated from the 0177 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_177_tab0[96] = {
    0x5aa31aa3u, 0xf8da9454u, 0x97120e05u, 0x354987b6u, 0xd3810167u, 0x71b87b18u, 0x0feff4c9u, 0xae276e7au,
    0x4c5ee82bu, 0xea9661dcu, 0x88cddb8du, 0x2705553eu, 0xc53cceefu, 0x637448a0u, 0x01abc251u, 0x9fe33c02u,
    0x3e1ab5b3u, 0xdc522f64u, 0x7a89a915u, 0x18c122c6u, 0xb6f89c77u, 0x55301628u, 0xf3678fd9u, 0x919f098au,
    0x2fd6833bu, 0xce0dfcecu, 0x6c45769du, 0x0a7cf04eu, 0xa8b469ffu, 0x46ebe3b0u, 0xe5235d61u, 0x835ad712u,
    0x219250c3u, 0xbfc9ca74u, 0x5e014425u, 0xfc38bdd6u, 0x9a703787u, 0x38a7b138u, 0xd6df2ae9u, 0x7516a49au,
    0x134e1e4bu, 0xb18597fcu, 0x4fbd11adu, 0xedf48b5eu, 0x8c2c050fu, 0x2a637ec0u, 0xc89af871u, 0x66d27222u,
    0x0509ebd3u, 0xa3416584u, 0x4178df35u, 0xdfb058e6u, 0x7de7d297u, 0x1c1f4c48u, 0xba56c5f9u, 0x588e3faau,
    0xf6c5b95bu, 0x94fd330cu, 0x3334acbdu, 0xd16c266eu, 0x6fa3a01fu, 0x0ddb19d0u, 0xac129381u, 0x4a4a0d32u,
    0xe88186e3u, 0x86b90094u, 0x24f07a45u, 0xc327f3f6u, 0x615f6da7u, 0xff96e758u, 0x9dce6109u, 0x3c05dabau,
    0xda3d546bu, 0x7874ce1cu, 0x16ac47cdu, 0xb4e3c17eu, 0x531b3b2fu, 0xf152b4e0u, 0x8f8a2e91u, 0x2dc1a842u,
    0xcbf921f3u, 0x6a309ba4u, 0x08681555u, 0xa69f8f06u, 0x44d708b7u, 0xe30e8268u, 0x8145fc19u, 0x1f7d75cau,
    0xbdb4ef7bu, 0x5bec692cu, 0xfa23e2ddu, 0x985b5c8eu, 0x3692d63fu, 0xd4ca4ff0u, 0x7301c9a1u, 0x11394352u,
};

static const uint32_t bshim_177_tab1[96] = {
    0xdc522f64u, 0x7a89a915u, 0x18c122c6u, 0xb6f89c77u, 0x55301628u, 0xf3678fd9u, 0x919f098au, 0x2fd6833bu,
    0xce0dfcecu, 0x6c45769du, 0x0a7cf04eu, 0xa8b469ffu, 0x46ebe3b0u, 0xe5235d61u, 0x835ad712u, 0x219250c3u,
    0xbfc9ca74u, 0x5e014425u, 0xfc38bdd6u, 0x9a703787u, 0x38a7b138u, 0xd6df2ae9u, 0x7516a49au, 0x134e1e4bu,
    0xb18597fcu, 0x4fbd11adu, 0xedf48b5eu, 0x8c2c050fu, 0x2a637ec0u, 0xc89af871u, 0x66d27222u, 0x0509ebd3u,
    0xa3416584u, 0x4178df35u, 0xdfb058e6u, 0x7de7d297u, 0x1c1f4c48u, 0xba56c5f9u, 0x588e3faau, 0xf6c5b95bu,
    0x94fd330cu, 0x3334acbdu, 0xd16c266eu, 0x6fa3a01fu, 0x0ddb19d0u, 0xac129381u, 0x4a4a0d32u, 0xe88186e3u,
    0x86b90094u, 0x24f07a45u, 0xc327f3f6u, 0x615f6da7u, 0xff96e758u, 0x9dce6109u, 0x3c05dabau, 0xda3d546bu,
    0x7874ce1cu, 0x16ac47cdu, 0xb4e3c17eu, 0x531b3b2fu, 0xf152b4e0u, 0x8f8a2e91u, 0x2dc1a842u, 0xcbf921f3u,
    0x6a309ba4u, 0x08681555u, 0xa69f8f06u, 0x44d708b7u, 0xe30e8268u, 0x8145fc19u, 0x1f7d75cau, 0xbdb4ef7bu,
    0x5bec692cu, 0xfa23e2ddu, 0x985b5c8eu, 0x3692d63fu, 0xd4ca4ff0u, 0x7301c9a1u, 0x11394352u, 0xaf70bd03u,
    0x4da836b4u, 0xebdfb065u, 0x8a172a16u, 0x284ea3c7u, 0xc6861d78u, 0x64bd9729u, 0x02f510dau, 0xa12c8a8bu,
    0x3f64043cu, 0xdd9b7dedu, 0x7bd2f79eu, 0x1a0a714fu, 0xb841eb00u, 0x567964b1u, 0xf4b0de62u, 0x92e85813u,
};

static const uint32_t bshim_177_tab2[96] = {
    0x5e014425u, 0xfc38bdd6u, 0x9a703787u, 0x38a7b138u, 0xd6df2ae9u, 0x7516a49au, 0x134e1e4bu, 0xb18597fcu,
    0x4fbd11adu, 0xedf48b5eu, 0x8c2c050fu, 0x2a637ec0u, 0xc89af871u, 0x66d27222u, 0x0509ebd3u, 0xa3416584u,
    0x4178df35u, 0xdfb058e6u, 0x7de7d297u, 0x1c1f4c48u, 0xba56c5f9u, 0x588e3faau, 0xf6c5b95bu, 0x94fd330cu,
    0x3334acbdu, 0xd16c266eu, 0x6fa3a01fu, 0x0ddb19d0u, 0xac129381u, 0x4a4a0d32u, 0xe88186e3u, 0x86b90094u,
    0x24f07a45u, 0xc327f3f6u, 0x615f6da7u, 0xff96e758u, 0x9dce6109u, 0x3c05dabau, 0xda3d546bu, 0x7874ce1cu,
    0x16ac47cdu, 0xb4e3c17eu, 0x531b3b2fu, 0xf152b4e0u, 0x8f8a2e91u, 0x2dc1a842u, 0xcbf921f3u, 0x6a309ba4u,
    0x08681555u, 0xa69f8f06u, 0x44d708b7u, 0xe30e8268u, 0x8145fc19u, 0x1f7d75cau, 0xbdb4ef7bu, 0x5bec692cu,
    0xfa23e2ddu, 0x985b5c8eu, 0x3692d63fu, 0xd4ca4ff0u, 0x7301c9a1u, 0x11394352u, 0xaf70bd03u, 0x4da836b4u,
    0xebdfb065u, 0x8a172a16u, 0x284ea3c7u, 0xc6861d78u, 0x64bd9729u, 0x02f510dau, 0xa12c8a8bu, 0x3f64043cu,
    0xdd9b7dedu, 0x7bd2f79eu, 0x1a0a714fu, 0xb841eb00u, 0x567964b1u, 0xf4b0de62u, 0x92e85813u, 0x311fd1c4u,
    0xcf574b75u, 0x6d8ec526u, 0x0bc63ed7u, 0xa9fdb888u, 0x48353239u, 0xe66cabeau, 0x84a4259bu, 0x22db9f4cu,
    0xc11318fdu, 0x5f4a92aeu, 0xfd820c5fu, 0x9bb98610u, 0x39f0ffc1u, 0xd8287972u, 0x765ff323u, 0x14976cd4u,
};

static const uint32_t bshim_177_tab3[96] = {
    0xdfb058e6u, 0x7de7d297u, 0x1c1f4c48u, 0xba56c5f9u, 0x588e3faau, 0xf6c5b95bu, 0x94fd330cu, 0x3334acbdu,
    0xd16c266eu, 0x6fa3a01fu, 0x0ddb19d0u, 0xac129381u, 0x4a4a0d32u, 0xe88186e3u, 0x86b90094u, 0x24f07a45u,
    0xc327f3f6u, 0x615f6da7u, 0xff96e758u, 0x9dce6109u, 0x3c05dabau, 0xda3d546bu, 0x7874ce1cu, 0x16ac47cdu,
    0xb4e3c17eu, 0x531b3b2fu, 0xf152b4e0u, 0x8f8a2e91u, 0x2dc1a842u, 0xcbf921f3u, 0x6a309ba4u, 0x08681555u,
    0xa69f8f06u, 0x44d708b7u, 0xe30e8268u, 0x8145fc19u, 0x1f7d75cau, 0xbdb4ef7bu, 0x5bec692cu, 0xfa23e2ddu,
    0x985b5c8eu, 0x3692d63fu, 0xd4ca4ff0u, 0x7301c9a1u, 0x11394352u, 0xaf70bd03u, 0x4da836b4u, 0xebdfb065u,
    0x8a172a16u, 0x284ea3c7u, 0xc6861d78u, 0x64bd9729u, 0x02f510dau, 0xa12c8a8bu, 0x3f64043cu, 0xdd9b7dedu,
    0x7bd2f79eu, 0x1a0a714fu, 0xb841eb00u, 0x567964b1u, 0xf4b0de62u, 0x92e85813u, 0x311fd1c4u, 0xcf574b75u,
    0x6d8ec526u, 0x0bc63ed7u, 0xa9fdb888u, 0x48353239u, 0xe66cabeau, 0x84a4259bu, 0x22db9f4cu, 0xc11318fdu,
    0x5f4a92aeu, 0xfd820c5fu, 0x9bb98610u, 0x39f0ffc1u, 0xd8287972u, 0x765ff323u, 0x14976cd4u, 0xb2cee685u,
    0x51066036u, 0xef3dd9e7u, 0x8d755398u, 0x2baccd49u, 0xc9e446fau, 0x681bc0abu, 0x06533a5cu, 0xa48ab40du,
    0x42c22dbeu, 0xe0f9a76fu, 0x7f312120u, 0x1d689ad1u, 0xbba01482u, 0x59d78e33u, 0xf80f07e4u, 0x96468195u,
};

static const uint32_t bshim_177_tab4[96] = {
    0x615f6da7u, 0xff96e758u, 0x9dce6109u, 0x3c05dabau, 0xda3d546bu, 0x7874ce1cu, 0x16ac47cdu, 0xb4e3c17eu,
    0x531b3b2fu, 0xf152b4e0u, 0x8f8a2e91u, 0x2dc1a842u, 0xcbf921f3u, 0x6a309ba4u, 0x08681555u, 0xa69f8f06u,
    0x44d708b7u, 0xe30e8268u, 0x8145fc19u, 0x1f7d75cau, 0xbdb4ef7bu, 0x5bec692cu, 0xfa23e2ddu, 0x985b5c8eu,
    0x3692d63fu, 0xd4ca4ff0u, 0x7301c9a1u, 0x11394352u, 0xaf70bd03u, 0x4da836b4u, 0xebdfb065u, 0x8a172a16u,
    0x284ea3c7u, 0xc6861d78u, 0x64bd9729u, 0x02f510dau, 0xa12c8a8bu, 0x3f64043cu, 0xdd9b7dedu, 0x7bd2f79eu,
    0x1a0a714fu, 0xb841eb00u, 0x567964b1u, 0xf4b0de62u, 0x92e85813u, 0x311fd1c4u, 0xcf574b75u, 0x6d8ec526u,
    0x0bc63ed7u, 0xa9fdb888u, 0x48353239u, 0xe66cabeau, 0x84a4259bu, 0x22db9f4cu, 0xc11318fdu, 0x5f4a92aeu,
    0xfd820c5fu, 0x9bb98610u, 0x39f0ffc1u, 0xd8287972u, 0x765ff323u, 0x14976cd4u, 0xb2cee685u, 0x51066036u,
    0xef3dd9e7u, 0x8d755398u, 0x2baccd49u, 0xc9e446fau, 0x681bc0abu, 0x06533a5cu, 0xa48ab40du, 0x42c22dbeu,
    0xe0f9a76fu, 0x7f312120u, 0x1d689ad1u, 0xbba01482u, 0x59d78e33u, 0xf80f07e4u, 0x96468195u, 0x347dfb46u,
    0xd2b574f7u, 0x70eceea8u, 0x0f246859u, 0xad5be20au, 0x4b935bbbu, 0xe9cad56cu, 0x88024f1du, 0x2639c8ceu,
    0xc471427fu, 0x62a8bc30u, 0x00e035e1u, 0x9f17af92u, 0x3d4f2943u, 0xdb86a2f4u, 0x79be1ca5u, 0x17f59656u,
};

static const uint32_t bshim_177_tab5[96] = {
    0xe30e8268u, 0x8145fc19u, 0x1f7d75cau, 0xbdb4ef7bu, 0x5bec692cu, 0xfa23e2ddu, 0x985b5c8eu, 0x3692d63fu,
    0xd4ca4ff0u, 0x7301c9a1u, 0x11394352u, 0xaf70bd03u, 0x4da836b4u, 0xebdfb065u, 0x8a172a16u, 0x284ea3c7u,
    0xc6861d78u, 0x64bd9729u, 0x02f510dau, 0xa12c8a8bu, 0x3f64043cu, 0xdd9b7dedu, 0x7bd2f79eu, 0x1a0a714fu,
    0xb841eb00u, 0x567964b1u, 0xf4b0de62u, 0x92e85813u, 0x311fd1c4u, 0xcf574b75u, 0x6d8ec526u, 0x0bc63ed7u,
    0xa9fdb888u, 0x48353239u, 0xe66cabeau, 0x84a4259bu, 0x22db9f4cu, 0xc11318fdu, 0x5f4a92aeu, 0xfd820c5fu,
    0x9bb98610u, 0x39f0ffc1u, 0xd8287972u, 0x765ff323u, 0x14976cd4u, 0xb2cee685u, 0x51066036u, 0xef3dd9e7u,
    0x8d755398u, 0x2baccd49u, 0xc9e446fau, 0x681bc0abu, 0x06533a5cu, 0xa48ab40du, 0x42c22dbeu, 0xe0f9a76fu,
    0x7f312120u, 0x1d689ad1u, 0xbba01482u, 0x59d78e33u, 0xf80f07e4u, 0x96468195u, 0x347dfb46u, 0xd2b574f7u,
    0x70eceea8u, 0x0f246859u, 0xad5be20au, 0x4b935bbbu, 0xe9cad56cu, 0x88024f1du, 0x2639c8ceu, 0xc471427fu,
    0x62a8bc30u, 0x00e035e1u, 0x9f17af92u, 0x3d4f2943u, 0xdb86a2f4u, 0x79be1ca5u, 0x17f59656u, 0xb62d1007u,
    0x546489b8u, 0xf29c0369u, 0x90d37d1au, 0x2f0af6cbu, 0xcd42707cu, 0x6b79ea2du, 0x09b163deu, 0xa7e8dd8fu,
    0x46205740u, 0xe457d0f1u, 0x828f4aa2u, 0x20c6c453u, 0xbefe3e04u, 0x5d35b7b5u, 0xfb6d3166u, 0x99a4ab17u,
};

static const uint32_t bshim_177_tab6[96] = {
    0x64bd9729u, 0x02f510dau, 0xa12c8a8bu, 0x3f64043cu, 0xdd9b7dedu, 0x7bd2f79eu, 0x1a0a714fu, 0xb841eb00u,
    0x567964b1u, 0xf4b0de62u, 0x92e85813u, 0x311fd1c4u, 0xcf574b75u, 0x6d8ec526u, 0x0bc63ed7u, 0xa9fdb888u,
    0x48353239u, 0xe66cabeau, 0x84a4259bu, 0x22db9f4cu, 0xc11318fdu, 0x5f4a92aeu, 0xfd820c5fu, 0x9bb98610u,
    0x39f0ffc1u, 0xd8287972u, 0x765ff323u, 0x14976cd4u, 0xb2cee685u, 0x51066036u, 0xef3dd9e7u, 0x8d755398u,
    0x2baccd49u, 0xc9e446fau, 0x681bc0abu, 0x06533a5cu, 0xa48ab40du, 0x42c22dbeu, 0xe0f9a76fu, 0x7f312120u,
    0x1d689ad1u, 0xbba01482u, 0x59d78e33u, 0xf80f07e4u, 0x96468195u, 0x347dfb46u, 0xd2b574f7u, 0x70eceea8u,
    0x0f246859u, 0xad5be20au, 0x4b935bbbu, 0xe9cad56cu, 0x88024f1du, 0x2639c8ceu, 0xc471427fu, 0x62a8bc30u,
    0x00e035e1u, 0x9f17af92u, 0x3d4f2943u, 0xdb86a2f4u, 0x79be1ca5u, 0x17f59656u, 0xb62d1007u, 0x546489b8u,
    0xf29c0369u, 0x90d37d1au, 0x2f0af6cbu, 0xcd42707cu, 0x6b79ea2du, 0x09b163deu, 0xa7e8dd8fu, 0x46205740u,
    0xe457d0f1u, 0x828f4aa2u, 0x20c6c453u, 0xbefe3e04u, 0x5d35b7b5u, 0xfb6d3166u, 0x99a4ab17u, 0x37dc24c8u,
    0xd6139e79u, 0x744b182au, 0x128291dbu, 0xb0ba0b8cu, 0x4ef1853du, 0xed28feeeu, 0x8b60789fu, 0x2997f250u,
    0xc7cf6c01u, 0x6606e5b2u, 0x043e5f63u, 0xa275d914u, 0x40ad52c5u, 0xdee4cc76u, 0x7d1c4627u, 0x1b53bfd8u,
};

static const uint32_t bshim_177_tab7[96] = {
    0xe66cabeau, 0x84a4259bu, 0x22db9f4cu, 0xc11318fdu, 0x5f4a92aeu, 0xfd820c5fu, 0x9bb98610u, 0x39f0ffc1u,
    0xd8287972u, 0x765ff323u, 0x14976cd4u, 0xb2cee685u, 0x51066036u, 0xef3dd9e7u, 0x8d755398u, 0x2baccd49u,
    0xc9e446fau, 0x681bc0abu, 0x06533a5cu, 0xa48ab40du, 0x42c22dbeu, 0xe0f9a76fu, 0x7f312120u, 0x1d689ad1u,
    0xbba01482u, 0x59d78e33u, 0xf80f07e4u, 0x96468195u, 0x347dfb46u, 0xd2b574f7u, 0x70eceea8u, 0x0f246859u,
    0xad5be20au, 0x4b935bbbu, 0xe9cad56cu, 0x88024f1du, 0x2639c8ceu, 0xc471427fu, 0x62a8bc30u, 0x00e035e1u,
    0x9f17af92u, 0x3d4f2943u, 0xdb86a2f4u, 0x79be1ca5u, 0x17f59656u, 0xb62d1007u, 0x546489b8u, 0xf29c0369u,
    0x90d37d1au, 0x2f0af6cbu, 0xcd42707cu, 0x6b79ea2du, 0x09b163deu, 0xa7e8dd8fu, 0x46205740u, 0xe457d0f1u,
    0x828f4aa2u, 0x20c6c453u, 0xbefe3e04u, 0x5d35b7b5u, 0xfb6d3166u, 0x99a4ab17u, 0x37dc24c8u, 0xd6139e79u,
    0x744b182au, 0x128291dbu, 0xb0ba0b8cu, 0x4ef1853du, 0xed28feeeu, 0x8b60789fu, 0x2997f250u, 0xc7cf6c01u,
    0x6606e5b2u, 0x043e5f63u, 0xa275d914u, 0x40ad52c5u, 0xdee4cc76u, 0x7d1c4627u, 0x1b53bfd8u, 0xb98b3989u,
    0x57c2b33au, 0xf5fa2cebu, 0x9431a69cu, 0x3269204du, 0xd0a099feu, 0x6ed813afu, 0x0d0f8d60u, 0xab470711u,
    0x497e80c2u, 0xe7b5fa73u, 0x85ed7424u, 0x2424edd5u, 0xc25c6786u, 0x6093e137u, 0xfecb5ae8u, 0x9d02d499u,
};

struct bshim_177_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_177_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_177_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_177_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_177_reset(struct bshim_177_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0015633fu;
    return 0;
}

