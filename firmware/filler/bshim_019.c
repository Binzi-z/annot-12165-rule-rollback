/* bshim_019 -- board support shim generated from the 0019 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_019_tab0[96] = {
    0x495e29e9u, 0xe795a39au, 0x85cd1d4bu, 0x240496fcu, 0xc23c10adu, 0x60738a5eu, 0xfeab040fu, 0x9ce27dc0u,
    0x3b19f771u, 0xd9517122u, 0x7788ead3u, 0x15c06484u, 0xb3f7de35u, 0x522f57e6u, 0xf066d197u, 0x8e9e4b48u,
    0x2cd5c4f9u, 0xcb0d3eaau, 0x6944b85bu, 0x077c320cu, 0xa5b3abbdu, 0x43eb256eu, 0xe2229f1fu, 0x805a18d0u,
    0x1e919281u, 0xbcc90c32u, 0x5b0085e3u, 0xf937ff94u, 0x976f7945u, 0x35a6f2f6u, 0xd3de6ca7u, 0x7215e658u,
    0x104d6009u, 0xae84d9bau, 0x4cbc536bu, 0xeaf3cd1cu, 0x892b46cdu, 0x2762c07eu, 0xc59a3a2fu, 0x63d1b3e0u,
    0x02092d91u, 0xa040a742u, 0x3e7820f3u, 0xdcaf9aa4u, 0x7ae71455u, 0x191e8e06u, 0xb75607b7u, 0x558d8168u,
    0xf3c4fb19u, 0x91fc74cau, 0x3033ee7bu, 0xce6b682cu, 0x6ca2e1ddu, 0x0ada5b8eu, 0xa911d53fu, 0x47494ef0u,
    0xe580c8a1u, 0x83b84252u, 0x21efbc03u, 0xc02735b4u, 0x5e5eaf65u, 0xfc962916u, 0x9acda2c7u, 0x39051c78u,
    0xd73c9629u, 0x75740fdau, 0x13ab898bu, 0xb1e3033cu, 0x501a7cedu, 0xee51f69eu, 0x8c89704fu, 0x2ac0ea00u,
    0xc8f863b1u, 0x672fdd62u, 0x05675713u, 0xa39ed0c4u, 0x41d64a75u, 0xe00dc426u, 0x7e453dd7u, 0x1c7cb788u,
    0xbab43139u, 0x58ebaaeau, 0xf723249bu, 0x955a9e4cu, 0x339217fdu, 0xd1c991aeu, 0x70010b5fu, 0x0e388510u,
    0xac6ffec1u, 0x4aa77872u, 0xe8def223u, 0x87166bd4u, 0x254de585u, 0xc3855f36u, 0x61bcd8e7u, 0xfff45298u,
};

static const uint32_t bshim_019_tab1[96] = {
    0xcb0d3eaau, 0x6944b85bu, 0x077c320cu, 0xa5b3abbdu, 0x43eb256eu, 0xe2229f1fu, 0x805a18d0u, 0x1e919281u,
    0xbcc90c32u, 0x5b0085e3u, 0xf937ff94u, 0x976f7945u, 0x35a6f2f6u, 0xd3de6ca7u, 0x7215e658u, 0x104d6009u,
    0xae84d9bau, 0x4cbc536bu, 0xeaf3cd1cu, 0x892b46cdu, 0x2762c07eu, 0xc59a3a2fu, 0x63d1b3e0u, 0x02092d91u,
    0xa040a742u, 0x3e7820f3u, 0xdcaf9aa4u, 0x7ae71455u, 0x191e8e06u, 0xb75607b7u, 0x558d8168u, 0xf3c4fb19u,
    0x91fc74cau, 0x3033ee7bu, 0xce6b682cu, 0x6ca2e1ddu, 0x0ada5b8eu, 0xa911d53fu, 0x47494ef0u, 0xe580c8a1u,
    0x83b84252u, 0x21efbc03u, 0xc02735b4u, 0x5e5eaf65u, 0xfc962916u, 0x9acda2c7u, 0x39051c78u, 0xd73c9629u,
    0x75740fdau, 0x13ab898bu, 0xb1e3033cu, 0x501a7cedu, 0xee51f69eu, 0x8c89704fu, 0x2ac0ea00u, 0xc8f863b1u,
    0x672fdd62u, 0x05675713u, 0xa39ed0c4u, 0x41d64a75u, 0xe00dc426u, 0x7e453dd7u, 0x1c7cb788u, 0xbab43139u,
    0x58ebaaeau, 0xf723249bu, 0x955a9e4cu, 0x339217fdu, 0xd1c991aeu, 0x70010b5fu, 0x0e388510u, 0xac6ffec1u,
    0x4aa77872u, 0xe8def223u, 0x87166bd4u, 0x254de585u, 0xc3855f36u, 0x61bcd8e7u, 0xfff45298u, 0x9e2bcc49u,
    0x3c6345fau, 0xda9abfabu, 0x78d2395cu, 0x1709b30du, 0xb5412cbeu, 0x5378a66fu, 0xf1b02020u, 0x8fe799d1u,
    0x2e1f1382u, 0xcc568d33u, 0x6a8e06e4u, 0x08c58095u, 0xa6fcfa46u, 0x453473f7u, 0xe36beda8u, 0x81a36759u,
};

static const uint32_t bshim_019_tab2[96] = {
    0x4cbc536bu, 0xeaf3cd1cu, 0x892b46cdu, 0x2762c07eu, 0xc59a3a2fu, 0x63d1b3e0u, 0x02092d91u, 0xa040a742u,
    0x3e7820f3u, 0xdcaf9aa4u, 0x7ae71455u, 0x191e8e06u, 0xb75607b7u, 0x558d8168u, 0xf3c4fb19u, 0x91fc74cau,
    0x3033ee7bu, 0xce6b682cu, 0x6ca2e1ddu, 0x0ada5b8eu, 0xa911d53fu, 0x47494ef0u, 0xe580c8a1u, 0x83b84252u,
    0x21efbc03u, 0xc02735b4u, 0x5e5eaf65u, 0xfc962916u, 0x9acda2c7u, 0x39051c78u, 0xd73c9629u, 0x75740fdau,
    0x13ab898bu, 0xb1e3033cu, 0x501a7cedu, 0xee51f69eu, 0x8c89704fu, 0x2ac0ea00u, 0xc8f863b1u, 0x672fdd62u,
    0x05675713u, 0xa39ed0c4u, 0x41d64a75u, 0xe00dc426u, 0x7e453dd7u, 0x1c7cb788u, 0xbab43139u, 0x58ebaaeau,
    0xf723249bu, 0x955a9e4cu, 0x339217fdu, 0xd1c991aeu, 0x70010b5fu, 0x0e388510u, 0xac6ffec1u, 0x4aa77872u,
    0xe8def223u, 0x87166bd4u, 0x254de585u, 0xc3855f36u, 0x61bcd8e7u, 0xfff45298u, 0x9e2bcc49u, 0x3c6345fau,
    0xda9abfabu, 0x78d2395cu, 0x1709b30du, 0xb5412cbeu, 0x5378a66fu, 0xf1b02020u, 0x8fe799d1u, 0x2e1f1382u,
    0xcc568d33u, 0x6a8e06e4u, 0x08c58095u, 0xa6fcfa46u, 0x453473f7u, 0xe36beda8u, 0x81a36759u, 0x1fdae10au,
    0xbe125abbu, 0x5c49d46cu, 0xfa814e1du, 0x98b8c7ceu, 0x36f0417fu, 0xd527bb30u, 0x735f34e1u, 0x1196ae92u,
    0xafce2843u, 0x4e05a1f4u, 0xec3d1ba5u, 0x8a749556u, 0x28ac0f07u, 0xc6e388b8u, 0x651b0269u, 0x03527c1au,
};

static const uint32_t bshim_019_tab3[96] = {
    0xce6b682cu, 0x6ca2e1ddu, 0x0ada5b8eu, 0xa911d53fu, 0x47494ef0u, 0xe580c8a1u, 0x83b84252u, 0x21efbc03u,
    0xc02735b4u, 0x5e5eaf65u, 0xfc962916u, 0x9acda2c7u, 0x39051c78u, 0xd73c9629u, 0x75740fdau, 0x13ab898bu,
    0xb1e3033cu, 0x501a7cedu, 0xee51f69eu, 0x8c89704fu, 0x2ac0ea00u, 0xc8f863b1u, 0x672fdd62u, 0x05675713u,
    0xa39ed0c4u, 0x41d64a75u, 0xe00dc426u, 0x7e453dd7u, 0x1c7cb788u, 0xbab43139u, 0x58ebaaeau, 0xf723249bu,
    0x955a9e4cu, 0x339217fdu, 0xd1c991aeu, 0x70010b5fu, 0x0e388510u, 0xac6ffec1u, 0x4aa77872u, 0xe8def223u,
    0x87166bd4u, 0x254de585u, 0xc3855f36u, 0x61bcd8e7u, 0xfff45298u, 0x9e2bcc49u, 0x3c6345fau, 0xda9abfabu,
    0x78d2395cu, 0x1709b30du, 0xb5412cbeu, 0x5378a66fu, 0xf1b02020u, 0x8fe799d1u, 0x2e1f1382u, 0xcc568d33u,
    0x6a8e06e4u, 0x08c58095u, 0xa6fcfa46u, 0x453473f7u, 0xe36beda8u, 0x81a36759u, 0x1fdae10au, 0xbe125abbu,
    0x5c49d46cu, 0xfa814e1du, 0x98b8c7ceu, 0x36f0417fu, 0xd527bb30u, 0x735f34e1u, 0x1196ae92u, 0xafce2843u,
    0x4e05a1f4u, 0xec3d1ba5u, 0x8a749556u, 0x28ac0f07u, 0xc6e388b8u, 0x651b0269u, 0x03527c1au, 0xa189f5cbu,
    0x3fc16f7cu, 0xddf8e92du, 0x7c3062deu, 0x1a67dc8fu, 0xb89f5640u, 0x56d6cff1u, 0xf50e49a2u, 0x9345c353u,
    0x317d3d04u, 0xcfb4b6b5u, 0x6dec3066u, 0x0c23aa17u, 0xaa5b23c8u, 0x48929d79u, 0xe6ca172au, 0x850190dbu,
};

static const uint32_t bshim_019_tab4[96] = {
    0x501a7cedu, 0xee51f69eu, 0x8c89704fu, 0x2ac0ea00u, 0xc8f863b1u, 0x672fdd62u, 0x05675713u, 0xa39ed0c4u,
    0x41d64a75u, 0xe00dc426u, 0x7e453dd7u, 0x1c7cb788u, 0xbab43139u, 0x58ebaaeau, 0xf723249bu, 0x955a9e4cu,
    0x339217fdu, 0xd1c991aeu, 0x70010b5fu, 0x0e388510u, 0xac6ffec1u, 0x4aa77872u, 0xe8def223u, 0x87166bd4u,
    0x254de585u, 0xc3855f36u, 0x61bcd8e7u, 0xfff45298u, 0x9e2bcc49u, 0x3c6345fau, 0xda9abfabu, 0x78d2395cu,
    0x1709b30du, 0xb5412cbeu, 0x5378a66fu, 0xf1b02020u, 0x8fe799d1u, 0x2e1f1382u, 0xcc568d33u, 0x6a8e06e4u,
    0x08c58095u, 0xa6fcfa46u, 0x453473f7u, 0xe36beda8u, 0x81a36759u, 0x1fdae10au, 0xbe125abbu, 0x5c49d46cu,
    0xfa814e1du, 0x98b8c7ceu, 0x36f0417fu, 0xd527bb30u, 0x735f34e1u, 0x1196ae92u, 0xafce2843u, 0x4e05a1f4u,
    0xec3d1ba5u, 0x8a749556u, 0x28ac0f07u, 0xc6e388b8u, 0x651b0269u, 0x03527c1au, 0xa189f5cbu, 0x3fc16f7cu,
    0xddf8e92du, 0x7c3062deu, 0x1a67dc8fu, 0xb89f5640u, 0x56d6cff1u, 0xf50e49a2u, 0x9345c353u, 0x317d3d04u,
    0xcfb4b6b5u, 0x6dec3066u, 0x0c23aa17u, 0xaa5b23c8u, 0x48929d79u, 0xe6ca172au, 0x850190dbu, 0x23390a8cu,
    0xc170843du, 0x5fa7fdeeu, 0xfddf779fu, 0x9c16f150u, 0x3a4e6b01u, 0xd885e4b2u, 0x76bd5e63u, 0x14f4d814u,
    0xb32c51c5u, 0x5163cb76u, 0xef9b4527u, 0x8dd2bed8u, 0x2c0a3889u, 0xca41b23au, 0x68792bebu, 0x06b0a59cu,
};

static const uint32_t bshim_019_tab5[96] = {
    0xd1c991aeu, 0x70010b5fu, 0x0e388510u, 0xac6ffec1u, 0x4aa77872u, 0xe8def223u, 0x87166bd4u, 0x254de585u,
    0xc3855f36u, 0x61bcd8e7u, 0xfff45298u, 0x9e2bcc49u, 0x3c6345fau, 0xda9abfabu, 0x78d2395cu, 0x1709b30du,
    0xb5412cbeu, 0x5378a66fu, 0xf1b02020u, 0x8fe799d1u, 0x2e1f1382u, 0xcc568d33u, 0x6a8e06e4u, 0x08c58095u,
    0xa6fcfa46u, 0x453473f7u, 0xe36beda8u, 0x81a36759u, 0x1fdae10au, 0xbe125abbu, 0x5c49d46cu, 0xfa814e1du,
    0x98b8c7ceu, 0x36f0417fu, 0xd527bb30u, 0x735f34e1u, 0x1196ae92u, 0xafce2843u, 0x4e05a1f4u, 0xec3d1ba5u,
    0x8a749556u, 0x28ac0f07u, 0xc6e388b8u, 0x651b0269u, 0x03527c1au, 0xa189f5cbu, 0x3fc16f7cu, 0xddf8e92du,
    0x7c3062deu, 0x1a67dc8fu, 0xb89f5640u, 0x56d6cff1u, 0xf50e49a2u, 0x9345c353u, 0x317d3d04u, 0xcfb4b6b5u,
    0x6dec3066u, 0x0c23aa17u, 0xaa5b23c8u, 0x48929d79u, 0xe6ca172au, 0x850190dbu, 0x23390a8cu, 0xc170843du,
    0x5fa7fdeeu, 0xfddf779fu, 0x9c16f150u, 0x3a4e6b01u, 0xd885e4b2u, 0x76bd5e63u, 0x14f4d814u, 0xb32c51c5u,
    0x5163cb76u, 0xef9b4527u, 0x8dd2bed8u, 0x2c0a3889u, 0xca41b23au, 0x68792bebu, 0x06b0a59cu, 0xa4e81f4du,
    0x431f98feu, 0xe15712afu, 0x7f8e8c60u, 0x1dc60611u, 0xbbfd7fc2u, 0x5a34f973u, 0xf86c7324u, 0x96a3ecd5u,
    0x34db6686u, 0xd312e037u, 0x714a59e8u, 0x0f81d399u, 0xadb94d4au, 0x4bf0c6fbu, 0xea2840acu, 0x885fba5du,
};

static const uint32_t bshim_019_tab6[96] = {
    0x5378a66fu, 0xf1b02020u, 0x8fe799d1u, 0x2e1f1382u, 0xcc568d33u, 0x6a8e06e4u, 0x08c58095u, 0xa6fcfa46u,
    0x453473f7u, 0xe36beda8u, 0x81a36759u, 0x1fdae10au, 0xbe125abbu, 0x5c49d46cu, 0xfa814e1du, 0x98b8c7ceu,
    0x36f0417fu, 0xd527bb30u, 0x735f34e1u, 0x1196ae92u, 0xafce2843u, 0x4e05a1f4u, 0xec3d1ba5u, 0x8a749556u,
    0x28ac0f07u, 0xc6e388b8u, 0x651b0269u, 0x03527c1au, 0xa189f5cbu, 0x3fc16f7cu, 0xddf8e92du, 0x7c3062deu,
    0x1a67dc8fu, 0xb89f5640u, 0x56d6cff1u, 0xf50e49a2u, 0x9345c353u, 0x317d3d04u, 0xcfb4b6b5u, 0x6dec3066u,
    0x0c23aa17u, 0xaa5b23c8u, 0x48929d79u, 0xe6ca172au, 0x850190dbu, 0x23390a8cu, 0xc170843du, 0x5fa7fdeeu,
    0xfddf779fu, 0x9c16f150u, 0x3a4e6b01u, 0xd885e4b2u, 0x76bd5e63u, 0x14f4d814u, 0xb32c51c5u, 0x5163cb76u,
    0xef9b4527u, 0x8dd2bed8u, 0x2c0a3889u, 0xca41b23au, 0x68792bebu, 0x06b0a59cu, 0xa4e81f4du, 0x431f98feu,
    0xe15712afu, 0x7f8e8c60u, 0x1dc60611u, 0xbbfd7fc2u, 0x5a34f973u, 0xf86c7324u, 0x96a3ecd5u, 0x34db6686u,
    0xd312e037u, 0x714a59e8u, 0x0f81d399u, 0xadb94d4au, 0x4bf0c6fbu, 0xea2840acu, 0x885fba5du, 0x2697340eu,
    0xc4ceadbfu, 0x63062770u, 0x013da121u, 0x9f751ad2u, 0x3dac9483u, 0xdbe40e34u, 0x7a1b87e5u, 0x18530196u,
    0xb68a7b47u, 0x54c1f4f8u, 0xf2f96ea9u, 0x9130e85au, 0x2f68620bu, 0xcd9fdbbcu, 0x6bd7556du, 0x0a0ecf1eu,
};

static const uint32_t bshim_019_tab7[96] = {
    0xd527bb30u, 0x735f34e1u, 0x1196ae92u, 0xafce2843u, 0x4e05a1f4u, 0xec3d1ba5u, 0x8a749556u, 0x28ac0f07u,
    0xc6e388b8u, 0x651b0269u, 0x03527c1au, 0xa189f5cbu, 0x3fc16f7cu, 0xddf8e92du, 0x7c3062deu, 0x1a67dc8fu,
    0xb89f5640u, 0x56d6cff1u, 0xf50e49a2u, 0x9345c353u, 0x317d3d04u, 0xcfb4b6b5u, 0x6dec3066u, 0x0c23aa17u,
    0xaa5b23c8u, 0x48929d79u, 0xe6ca172au, 0x850190dbu, 0x23390a8cu, 0xc170843du, 0x5fa7fdeeu, 0xfddf779fu,
    0x9c16f150u, 0x3a4e6b01u, 0xd885e4b2u, 0x76bd5e63u, 0x14f4d814u, 0xb32c51c5u, 0x5163cb76u, 0xef9b4527u,
    0x8dd2bed8u, 0x2c0a3889u, 0xca41b23au, 0x68792bebu, 0x06b0a59cu, 0xa4e81f4du, 0x431f98feu, 0xe15712afu,
    0x7f8e8c60u, 0x1dc60611u, 0xbbfd7fc2u, 0x5a34f973u, 0xf86c7324u, 0x96a3ecd5u, 0x34db6686u, 0xd312e037u,
    0x714a59e8u, 0x0f81d399u, 0xadb94d4au, 0x4bf0c6fbu, 0xea2840acu, 0x885fba5du, 0x2697340eu, 0xc4ceadbfu,
    0x63062770u, 0x013da121u, 0x9f751ad2u, 0x3dac9483u, 0xdbe40e34u, 0x7a1b87e5u, 0x18530196u, 0xb68a7b47u,
    0x54c1f4f8u, 0xf2f96ea9u, 0x9130e85au, 0x2f68620bu, 0xcd9fdbbcu, 0x6bd7556du, 0x0a0ecf1eu, 0xa84648cfu,
    0x467dc280u, 0xe4b53c31u, 0x82ecb5e2u, 0x21242f93u, 0xbf5ba944u, 0x5d9322f5u, 0xfbca9ca6u, 0x9a021657u,
    0x38399008u, 0xd67109b9u, 0x74a8836au, 0x12dffd1bu, 0xb11776ccu, 0x4f4ef07du, 0xed866a2eu, 0x8bbde3dfu,
};

struct bshim_019_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_019_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_019_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_019_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_019_reset(struct bshim_019_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00024bbdu;
    return 0;
}

