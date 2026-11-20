/* bshim_052 -- board support shim generated from the 0052 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_052_tab0[96] = {
    0x0c2a21dcu, 0xaa619b8du, 0x4899153eu, 0xe6d08eefu, 0x850808a0u, 0x233f8251u, 0xc176fc02u, 0x5fae75b3u,
    0xfde5ef64u, 0x9c1d6915u, 0x3a54e2c6u, 0xd88c5c77u, 0x76c3d628u, 0x14fb4fd9u, 0xb332c98au, 0x516a433bu,
    0xefa1bcecu, 0x8dd9369du, 0x2c10b04eu, 0xca4829ffu, 0x687fa3b0u, 0x06b71d61u, 0xa4ee9712u, 0x432610c3u,
    0xe15d8a74u, 0x7f950425u, 0x1dcc7dd6u, 0xbc03f787u, 0x5a3b7138u, 0xf872eae9u, 0x96aa649au, 0x34e1de4bu,
    0xd31957fcu, 0x7150d1adu, 0x0f884b5eu, 0xadbfc50fu, 0x4bf73ec0u, 0xea2eb871u, 0x88663222u, 0x269dabd3u,
    0xc4d52584u, 0x630c9f35u, 0x014418e6u, 0x9f7b9297u, 0x3db30c48u, 0xdbea85f9u, 0x7a21ffaau, 0x1859795bu,
    0xb690f30cu, 0x54c86cbdu, 0xf2ffe66eu, 0x9137601fu, 0x2f6ed9d0u, 0xcda65381u, 0x6bddcd32u, 0x0a1546e3u,
    0xa84cc094u, 0x46843a45u, 0xe4bbb3f6u, 0x82f32da7u, 0x212aa758u, 0xbf622109u, 0x5d999abau, 0xfbd1146bu,
    0x9a088e1cu, 0x384007cdu, 0xd677817eu, 0x74aefb2fu, 0x12e674e0u, 0xb11dee91u, 0x4f556842u, 0xed8ce1f3u,
    0x8bc45ba4u, 0x29fbd555u, 0xc8334f06u, 0x666ac8b7u, 0x04a24268u, 0xa2d9bc19u, 0x411135cau, 0xdf48af7bu,
    0x7d80292cu, 0x1bb7a2ddu, 0xb9ef1c8eu, 0x5826963fu, 0xf65e0ff0u, 0x949589a1u, 0x32cd0352u, 0xd1047d03u,
    0x6f3bf6b4u, 0x0d737065u, 0xabaaea16u, 0x49e263c7u, 0xe819dd78u, 0x86515729u, 0x2488d0dau, 0xc2c04a8bu,
};

static const uint32_t bshim_052_tab1[96] = {
    0x8dd9369du, 0x2c10b04eu, 0xca4829ffu, 0x687fa3b0u, 0x06b71d61u, 0xa4ee9712u, 0x432610c3u, 0xe15d8a74u,
    0x7f950425u, 0x1dcc7dd6u, 0xbc03f787u, 0x5a3b7138u, 0xf872eae9u, 0x96aa649au, 0x34e1de4bu, 0xd31957fcu,
    0x7150d1adu, 0x0f884b5eu, 0xadbfc50fu, 0x4bf73ec0u, 0xea2eb871u, 0x88663222u, 0x269dabd3u, 0xc4d52584u,
    0x630c9f35u, 0x014418e6u, 0x9f7b9297u, 0x3db30c48u, 0xdbea85f9u, 0x7a21ffaau, 0x1859795bu, 0xb690f30cu,
    0x54c86cbdu, 0xf2ffe66eu, 0x9137601fu, 0x2f6ed9d0u, 0xcda65381u, 0x6bddcd32u, 0x0a1546e3u, 0xa84cc094u,
    0x46843a45u, 0xe4bbb3f6u, 0x82f32da7u, 0x212aa758u, 0xbf622109u, 0x5d999abau, 0xfbd1146bu, 0x9a088e1cu,
    0x384007cdu, 0xd677817eu, 0x74aefb2fu, 0x12e674e0u, 0xb11dee91u, 0x4f556842u, 0xed8ce1f3u, 0x8bc45ba4u,
    0x29fbd555u, 0xc8334f06u, 0x666ac8b7u, 0x04a24268u, 0xa2d9bc19u, 0x411135cau, 0xdf48af7bu, 0x7d80292cu,
    0x1bb7a2ddu, 0xb9ef1c8eu, 0x5826963fu, 0xf65e0ff0u, 0x949589a1u, 0x32cd0352u, 0xd1047d03u, 0x6f3bf6b4u,
    0x0d737065u, 0xabaaea16u, 0x49e263c7u, 0xe819dd78u, 0x86515729u, 0x2488d0dau, 0xc2c04a8bu, 0x60f7c43cu,
    0xff2f3dedu, 0x9d66b79eu, 0x3b9e314fu, 0xd9d5ab00u, 0x780d24b1u, 0x16449e62u, 0xb47c1813u, 0x52b391c4u,
    0xf0eb0b75u, 0x8f228526u, 0x2d59fed7u, 0xcb917888u, 0x69c8f239u, 0x08006beau, 0xa637e59bu, 0x446f5f4cu,
};

static const uint32_t bshim_052_tab2[96] = {
    0x0f884b5eu, 0xadbfc50fu, 0x4bf73ec0u, 0xea2eb871u, 0x88663222u, 0x269dabd3u, 0xc4d52584u, 0x630c9f35u,
    0x014418e6u, 0x9f7b9297u, 0x3db30c48u, 0xdbea85f9u, 0x7a21ffaau, 0x1859795bu, 0xb690f30cu, 0x54c86cbdu,
    0xf2ffe66eu, 0x9137601fu, 0x2f6ed9d0u, 0xcda65381u, 0x6bddcd32u, 0x0a1546e3u, 0xa84cc094u, 0x46843a45u,
    0xe4bbb3f6u, 0x82f32da7u, 0x212aa758u, 0xbf622109u, 0x5d999abau, 0xfbd1146bu, 0x9a088e1cu, 0x384007cdu,
    0xd677817eu, 0x74aefb2fu, 0x12e674e0u, 0xb11dee91u, 0x4f556842u, 0xed8ce1f3u, 0x8bc45ba4u, 0x29fbd555u,
    0xc8334f06u, 0x666ac8b7u, 0x04a24268u, 0xa2d9bc19u, 0x411135cau, 0xdf48af7bu, 0x7d80292cu, 0x1bb7a2ddu,
    0xb9ef1c8eu, 0x5826963fu, 0xf65e0ff0u, 0x949589a1u, 0x32cd0352u, 0xd1047d03u, 0x6f3bf6b4u, 0x0d737065u,
    0xabaaea16u, 0x49e263c7u, 0xe819dd78u, 0x86515729u, 0x2488d0dau, 0xc2c04a8bu, 0x60f7c43cu, 0xff2f3dedu,
    0x9d66b79eu, 0x3b9e314fu, 0xd9d5ab00u, 0x780d24b1u, 0x16449e62u, 0xb47c1813u, 0x52b391c4u, 0xf0eb0b75u,
    0x8f228526u, 0x2d59fed7u, 0xcb917888u, 0x69c8f239u, 0x08006beau, 0xa637e59bu, 0x446f5f4cu, 0xe2a6d8fdu,
    0x80de52aeu, 0x1f15cc5fu, 0xbd4d4610u, 0x5b84bfc1u, 0xf9bc3972u, 0x97f3b323u, 0x362b2cd4u, 0xd462a685u,
    0x729a2036u, 0x10d199e7u, 0xaf091398u, 0x4d408d49u, 0xeb7806fau, 0x89af80abu, 0x27e6fa5cu, 0xc61e740du,
};

static const uint32_t bshim_052_tab3[96] = {
    0x9137601fu, 0x2f6ed9d0u, 0xcda65381u, 0x6bddcd32u, 0x0a1546e3u, 0xa84cc094u, 0x46843a45u, 0xe4bbb3f6u,
    0x82f32da7u, 0x212aa758u, 0xbf622109u, 0x5d999abau, 0xfbd1146bu, 0x9a088e1cu, 0x384007cdu, 0xd677817eu,
    0x74aefb2fu, 0x12e674e0u, 0xb11dee91u, 0x4f556842u, 0xed8ce1f3u, 0x8bc45ba4u, 0x29fbd555u, 0xc8334f06u,
    0x666ac8b7u, 0x04a24268u, 0xa2d9bc19u, 0x411135cau, 0xdf48af7bu, 0x7d80292cu, 0x1bb7a2ddu, 0xb9ef1c8eu,
    0x5826963fu, 0xf65e0ff0u, 0x949589a1u, 0x32cd0352u, 0xd1047d03u, 0x6f3bf6b4u, 0x0d737065u, 0xabaaea16u,
    0x49e263c7u, 0xe819dd78u, 0x86515729u, 0x2488d0dau, 0xc2c04a8bu, 0x60f7c43cu, 0xff2f3dedu, 0x9d66b79eu,
    0x3b9e314fu, 0xd9d5ab00u, 0x780d24b1u, 0x16449e62u, 0xb47c1813u, 0x52b391c4u, 0xf0eb0b75u, 0x8f228526u,
    0x2d59fed7u, 0xcb917888u, 0x69c8f239u, 0x08006beau, 0xa637e59bu, 0x446f5f4cu, 0xe2a6d8fdu, 0x80de52aeu,
    0x1f15cc5fu, 0xbd4d4610u, 0x5b84bfc1u, 0xf9bc3972u, 0x97f3b323u, 0x362b2cd4u, 0xd462a685u, 0x729a2036u,
    0x10d199e7u, 0xaf091398u, 0x4d408d49u, 0xeb7806fau, 0x89af80abu, 0x27e6fa5cu, 0xc61e740du, 0x6455edbeu,
    0x028d676fu, 0xa0c4e120u, 0x3efc5ad1u, 0xdd33d482u, 0x7b6b4e33u, 0x19a2c7e4u, 0xb7da4195u, 0x5611bb46u,
    0xf44934f7u, 0x9280aea8u, 0x30b82859u, 0xceefa20au, 0x6d271bbbu, 0x0b5e956cu, 0xa9960f1du, 0x47cd88ceu,
};

static const uint32_t bshim_052_tab4[96] = {
    0x12e674e0u, 0xb11dee91u, 0x4f556842u, 0xed8ce1f3u, 0x8bc45ba4u, 0x29fbd555u, 0xc8334f06u, 0x666ac8b7u,
    0x04a24268u, 0xa2d9bc19u, 0x411135cau, 0xdf48af7bu, 0x7d80292cu, 0x1bb7a2ddu, 0xb9ef1c8eu, 0x5826963fu,
    0xf65e0ff0u, 0x949589a1u, 0x32cd0352u, 0xd1047d03u, 0x6f3bf6b4u, 0x0d737065u, 0xabaaea16u, 0x49e263c7u,
    0xe819dd78u, 0x86515729u, 0x2488d0dau, 0xc2c04a8bu, 0x60f7c43cu, 0xff2f3dedu, 0x9d66b79eu, 0x3b9e314fu,
    0xd9d5ab00u, 0x780d24b1u, 0x16449e62u, 0xb47c1813u, 0x52b391c4u, 0xf0eb0b75u, 0x8f228526u, 0x2d59fed7u,
    0xcb917888u, 0x69c8f239u, 0x08006beau, 0xa637e59bu, 0x446f5f4cu, 0xe2a6d8fdu, 0x80de52aeu, 0x1f15cc5fu,
    0xbd4d4610u, 0x5b84bfc1u, 0xf9bc3972u, 0x97f3b323u, 0x362b2cd4u, 0xd462a685u, 0x729a2036u, 0x10d199e7u,
    0xaf091398u, 0x4d408d49u, 0xeb7806fau, 0x89af80abu, 0x27e6fa5cu, 0xc61e740du, 0x6455edbeu, 0x028d676fu,
    0xa0c4e120u, 0x3efc5ad1u, 0xdd33d482u, 0x7b6b4e33u, 0x19a2c7e4u, 0xb7da4195u, 0x5611bb46u, 0xf44934f7u,
    0x9280aea8u, 0x30b82859u, 0xceefa20au, 0x6d271bbbu, 0x0b5e956cu, 0xa9960f1du, 0x47cd88ceu, 0xe605027fu,
    0x843c7c30u, 0x2273f5e1u, 0xc0ab6f92u, 0x5ee2e943u, 0xfd1a62f4u, 0x9b51dca5u, 0x39895656u, 0xd7c0d007u,
    0x75f849b8u, 0x142fc369u, 0xb2673d1au, 0x509eb6cbu, 0xeed6307cu, 0x8d0daa2du, 0x2b4523deu, 0xc97c9d8fu,
};

static const uint32_t bshim_052_tab5[96] = {
    0x949589a1u, 0x32cd0352u, 0xd1047d03u, 0x6f3bf6b4u, 0x0d737065u, 0xabaaea16u, 0x49e263c7u, 0xe819dd78u,
    0x86515729u, 0x2488d0dau, 0xc2c04a8bu, 0x60f7c43cu, 0xff2f3dedu, 0x9d66b79eu, 0x3b9e314fu, 0xd9d5ab00u,
    0x780d24b1u, 0x16449e62u, 0xb47c1813u, 0x52b391c4u, 0xf0eb0b75u, 0x8f228526u, 0x2d59fed7u, 0xcb917888u,
    0x69c8f239u, 0x08006beau, 0xa637e59bu, 0x446f5f4cu, 0xe2a6d8fdu, 0x80de52aeu, 0x1f15cc5fu, 0xbd4d4610u,
    0x5b84bfc1u, 0xf9bc3972u, 0x97f3b323u, 0x362b2cd4u, 0xd462a685u, 0x729a2036u, 0x10d199e7u, 0xaf091398u,
    0x4d408d49u, 0xeb7806fau, 0x89af80abu, 0x27e6fa5cu, 0xc61e740du, 0x6455edbeu, 0x028d676fu, 0xa0c4e120u,
    0x3efc5ad1u, 0xdd33d482u, 0x7b6b4e33u, 0x19a2c7e4u, 0xb7da4195u, 0x5611bb46u, 0xf44934f7u, 0x9280aea8u,
    0x30b82859u, 0xceefa20au, 0x6d271bbbu, 0x0b5e956cu, 0xa9960f1du, 0x47cd88ceu, 0xe605027fu, 0x843c7c30u,
    0x2273f5e1u, 0xc0ab6f92u, 0x5ee2e943u, 0xfd1a62f4u, 0x9b51dca5u, 0x39895656u, 0xd7c0d007u, 0x75f849b8u,
    0x142fc369u, 0xb2673d1au, 0x509eb6cbu, 0xeed6307cu, 0x8d0daa2du, 0x2b4523deu, 0xc97c9d8fu, 0x67b41740u,
    0x05eb90f1u, 0xa4230aa2u, 0x425a8453u, 0xe091fe04u, 0x7ec977b5u, 0x1d00f166u, 0xbb386b17u, 0x596fe4c8u,
    0xf7a75e79u, 0x95ded82au, 0x341651dbu, 0xd24dcb8cu, 0x7085453du, 0x0ebcbeeeu, 0xacf4389fu, 0x4b2bb250u,
};

static const uint32_t bshim_052_tab6[96] = {
    0x16449e62u, 0xb47c1813u, 0x52b391c4u, 0xf0eb0b75u, 0x8f228526u, 0x2d59fed7u, 0xcb917888u, 0x69c8f239u,
    0x08006beau, 0xa637e59bu, 0x446f5f4cu, 0xe2a6d8fdu, 0x80de52aeu, 0x1f15cc5fu, 0xbd4d4610u, 0x5b84bfc1u,
    0xf9bc3972u, 0x97f3b323u, 0x362b2cd4u, 0xd462a685u, 0x729a2036u, 0x10d199e7u, 0xaf091398u, 0x4d408d49u,
    0xeb7806fau, 0x89af80abu, 0x27e6fa5cu, 0xc61e740du, 0x6455edbeu, 0x028d676fu, 0xa0c4e120u, 0x3efc5ad1u,
    0xdd33d482u, 0x7b6b4e33u, 0x19a2c7e4u, 0xb7da4195u, 0x5611bb46u, 0xf44934f7u, 0x9280aea8u, 0x30b82859u,
    0xceefa20au, 0x6d271bbbu, 0x0b5e956cu, 0xa9960f1du, 0x47cd88ceu, 0xe605027fu, 0x843c7c30u, 0x2273f5e1u,
    0xc0ab6f92u, 0x5ee2e943u, 0xfd1a62f4u, 0x9b51dca5u, 0x39895656u, 0xd7c0d007u, 0x75f849b8u, 0x142fc369u,
    0xb2673d1au, 0x509eb6cbu, 0xeed6307cu, 0x8d0daa2du, 0x2b4523deu, 0xc97c9d8fu, 0x67b41740u, 0x05eb90f1u,
    0xa4230aa2u, 0x425a8453u, 0xe091fe04u, 0x7ec977b5u, 0x1d00f166u, 0xbb386b17u, 0x596fe4c8u, 0xf7a75e79u,
    0x95ded82au, 0x341651dbu, 0xd24dcb8cu, 0x7085453du, 0x0ebcbeeeu, 0xacf4389fu, 0x4b2bb250u, 0xe9632c01u,
    0x879aa5b2u, 0x25d21f63u, 0xc4099914u, 0x624112c5u, 0x00788c76u, 0x9eb00627u, 0x3ce77fd8u, 0xdb1ef989u,
    0x7956733au, 0x178decebu, 0xb5c5669cu, 0x53fce04du, 0xf23459feu, 0x906bd3afu, 0x2ea34d60u, 0xccdac711u,
};

static const uint32_t bshim_052_tab7[96] = {
    0x97f3b323u, 0x362b2cd4u, 0xd462a685u, 0x729a2036u, 0x10d199e7u, 0xaf091398u, 0x4d408d49u, 0xeb7806fau,
    0x89af80abu, 0x27e6fa5cu, 0xc61e740du, 0x6455edbeu, 0x028d676fu, 0xa0c4e120u, 0x3efc5ad1u, 0xdd33d482u,
    0x7b6b4e33u, 0x19a2c7e4u, 0xb7da4195u, 0x5611bb46u, 0xf44934f7u, 0x9280aea8u, 0x30b82859u, 0xceefa20au,
    0x6d271bbbu, 0x0b5e956cu, 0xa9960f1du, 0x47cd88ceu, 0xe605027fu, 0x843c7c30u, 0x2273f5e1u, 0xc0ab6f92u,
    0x5ee2e943u, 0xfd1a62f4u, 0x9b51dca5u, 0x39895656u, 0xd7c0d007u, 0x75f849b8u, 0x142fc369u, 0xb2673d1au,
    0x509eb6cbu, 0xeed6307cu, 0x8d0daa2du, 0x2b4523deu, 0xc97c9d8fu, 0x67b41740u, 0x05eb90f1u, 0xa4230aa2u,
    0x425a8453u, 0xe091fe04u, 0x7ec977b5u, 0x1d00f166u, 0xbb386b17u, 0x596fe4c8u, 0xf7a75e79u, 0x95ded82au,
    0x341651dbu, 0xd24dcb8cu, 0x7085453du, 0x0ebcbeeeu, 0xacf4389fu, 0x4b2bb250u, 0xe9632c01u, 0x879aa5b2u,
    0x25d21f63u, 0xc4099914u, 0x624112c5u, 0x00788c76u, 0x9eb00627u, 0x3ce77fd8u, 0xdb1ef989u, 0x7956733au,
    0x178decebu, 0xb5c5669cu, 0x53fce04du, 0xf23459feu, 0x906bd3afu, 0x2ea34d60u, 0xccdac711u, 0x6b1240c2u,
    0x0949ba73u, 0xa7813424u, 0x45b8add5u, 0xe3f02786u, 0x8227a137u, 0x205f1ae8u, 0xbe969499u, 0x5cce0e4au,
    0xfb0587fbu, 0x993d01acu, 0x37747b5du, 0xd5abf50eu, 0x73e36ebfu, 0x121ae870u, 0xb0526221u, 0x4e89dbd2u,
};

struct bshim_052_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_052_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_052_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_052_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_052_reset(struct bshim_052_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0006488cu;
    return 0;
}

