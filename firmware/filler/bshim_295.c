/* bshim_295 -- board support shim generated from the 0295 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_295_tab0[96] = {
    0xec652c65u, 0x8a9ca616u, 0x28d41fc7u, 0xc70b9978u, 0x65431329u, 0x037a8cdau, 0xa1b2068bu, 0x3fe9803cu,
    0xde20f9edu, 0x7c58739eu, 0x1a8fed4fu, 0xb8c76700u, 0x56fee0b1u, 0xf5365a62u, 0x936dd413u, 0x31a54dc4u,
    0xcfdcc775u, 0x6e144126u, 0x0c4bbad7u, 0xaa833488u, 0x48baae39u, 0xe6f227eau, 0x8529a19bu, 0x23611b4cu,
    0xc19894fdu, 0x5fd00eaeu, 0xfe07885fu, 0x9c3f0210u, 0x3a767bc1u, 0xd8adf572u, 0x76e56f23u, 0x151ce8d4u,
    0xb3546285u, 0x518bdc36u, 0xefc355e7u, 0x8dfacf98u, 0x2c324949u, 0xca69c2fau, 0x68a13cabu, 0x06d8b65cu,
    0xa510300du, 0x4347a9beu, 0xe17f236fu, 0x7fb69d20u, 0x1dee16d1u, 0xbc259082u, 0x5a5d0a33u, 0xf89483e4u,
    0x96cbfd95u, 0x35037746u, 0xd33af0f7u, 0x71726aa8u, 0x0fa9e459u, 0xade15e0au, 0x4c18d7bbu, 0xea50516cu,
    0x8887cb1du, 0x26bf44ceu, 0xc4f6be7fu, 0x632e3830u, 0x0165b1e1u, 0x9f9d2b92u, 0x3dd4a543u, 0xdc0c1ef4u,
    0x7a4398a5u, 0x187b1256u, 0xb6b28c07u, 0x54ea05b8u, 0xf3217f69u, 0x9158f91au, 0x2f9072cbu, 0xcdc7ec7cu,
    0x6bff662du, 0x0a36dfdeu, 0xa86e598fu, 0x46a5d340u, 0xe4dd4cf1u, 0x8314c6a2u, 0x214c4053u, 0xbf83ba04u,
    0x5dbb33b5u, 0xfbf2ad66u, 0x9a2a2717u, 0x3861a0c8u, 0xd6991a79u, 0x74d0942au, 0x13080ddbu, 0xb13f878cu,
    0x4f77013du, 0xedae7aeeu, 0x8be5f49fu, 0x2a1d6e50u, 0xc854e801u, 0x668c61b2u, 0x04c3db63u, 0xa2fb5514u,
};

static const uint32_t bshim_295_tab1[96] = {
    0x6e144126u, 0x0c4bbad7u, 0xaa833488u, 0x48baae39u, 0xe6f227eau, 0x8529a19bu, 0x23611b4cu, 0xc19894fdu,
    0x5fd00eaeu, 0xfe07885fu, 0x9c3f0210u, 0x3a767bc1u, 0xd8adf572u, 0x76e56f23u, 0x151ce8d4u, 0xb3546285u,
    0x518bdc36u, 0xefc355e7u, 0x8dfacf98u, 0x2c324949u, 0xca69c2fau, 0x68a13cabu, 0x06d8b65cu, 0xa510300du,
    0x4347a9beu, 0xe17f236fu, 0x7fb69d20u, 0x1dee16d1u, 0xbc259082u, 0x5a5d0a33u, 0xf89483e4u, 0x96cbfd95u,
    0x35037746u, 0xd33af0f7u, 0x71726aa8u, 0x0fa9e459u, 0xade15e0au, 0x4c18d7bbu, 0xea50516cu, 0x8887cb1du,
    0x26bf44ceu, 0xc4f6be7fu, 0x632e3830u, 0x0165b1e1u, 0x9f9d2b92u, 0x3dd4a543u, 0xdc0c1ef4u, 0x7a4398a5u,
    0x187b1256u, 0xb6b28c07u, 0x54ea05b8u, 0xf3217f69u, 0x9158f91au, 0x2f9072cbu, 0xcdc7ec7cu, 0x6bff662du,
    0x0a36dfdeu, 0xa86e598fu, 0x46a5d340u, 0xe4dd4cf1u, 0x8314c6a2u, 0x214c4053u, 0xbf83ba04u, 0x5dbb33b5u,
    0xfbf2ad66u, 0x9a2a2717u, 0x3861a0c8u, 0xd6991a79u, 0x74d0942au, 0x13080ddbu, 0xb13f878cu, 0x4f77013du,
    0xedae7aeeu, 0x8be5f49fu, 0x2a1d6e50u, 0xc854e801u, 0x668c61b2u, 0x04c3db63u, 0xa2fb5514u, 0x4132cec5u,
    0xdf6a4876u, 0x7da1c227u, 0x1bd93bd8u, 0xba10b589u, 0x58482f3au, 0xf67fa8ebu, 0x94b7229cu, 0x32ee9c4du,
    0xd12615feu, 0x6f5d8fafu, 0x0d950960u, 0xabcc8311u, 0x4a03fcc2u, 0xe83b7673u, 0x8672f024u, 0x24aa69d5u,
};

static const uint32_t bshim_295_tab2[96] = {
    0xefc355e7u, 0x8dfacf98u, 0x2c324949u, 0xca69c2fau, 0x68a13cabu, 0x06d8b65cu, 0xa510300du, 0x4347a9beu,
    0xe17f236fu, 0x7fb69d20u, 0x1dee16d1u, 0xbc259082u, 0x5a5d0a33u, 0xf89483e4u, 0x96cbfd95u, 0x35037746u,
    0xd33af0f7u, 0x71726aa8u, 0x0fa9e459u, 0xade15e0au, 0x4c18d7bbu, 0xea50516cu, 0x8887cb1du, 0x26bf44ceu,
    0xc4f6be7fu, 0x632e3830u, 0x0165b1e1u, 0x9f9d2b92u, 0x3dd4a543u, 0xdc0c1ef4u, 0x7a4398a5u, 0x187b1256u,
    0xb6b28c07u, 0x54ea05b8u, 0xf3217f69u, 0x9158f91au, 0x2f9072cbu, 0xcdc7ec7cu, 0x6bff662du, 0x0a36dfdeu,
    0xa86e598fu, 0x46a5d340u, 0xe4dd4cf1u, 0x8314c6a2u, 0x214c4053u, 0xbf83ba04u, 0x5dbb33b5u, 0xfbf2ad66u,
    0x9a2a2717u, 0x3861a0c8u, 0xd6991a79u, 0x74d0942au, 0x13080ddbu, 0xb13f878cu, 0x4f77013du, 0xedae7aeeu,
    0x8be5f49fu, 0x2a1d6e50u, 0xc854e801u, 0x668c61b2u, 0x04c3db63u, 0xa2fb5514u, 0x4132cec5u, 0xdf6a4876u,
    0x7da1c227u, 0x1bd93bd8u, 0xba10b589u, 0x58482f3au, 0xf67fa8ebu, 0x94b7229cu, 0x32ee9c4du, 0xd12615feu,
    0x6f5d8fafu, 0x0d950960u, 0xabcc8311u, 0x4a03fcc2u, 0xe83b7673u, 0x8672f024u, 0x24aa69d5u, 0xc2e1e386u,
    0x61195d37u, 0xff50d6e8u, 0x9d885099u, 0x3bbfca4au, 0xd9f743fbu, 0x782ebdacu, 0x1666375du, 0xb49db10eu,
    0x52d52abfu, 0xf10ca470u, 0x8f441e21u, 0x2d7b97d2u, 0xcbb31183u, 0x69ea8b34u, 0x082204e5u, 0xa6597e96u,
};

static const uint32_t bshim_295_tab3[96] = {
    0x71726aa8u, 0x0fa9e459u, 0xade15e0au, 0x4c18d7bbu, 0xea50516cu, 0x8887cb1du, 0x26bf44ceu, 0xc4f6be7fu,
    0x632e3830u, 0x0165b1e1u, 0x9f9d2b92u, 0x3dd4a543u, 0xdc0c1ef4u, 0x7a4398a5u, 0x187b1256u, 0xb6b28c07u,
    0x54ea05b8u, 0xf3217f69u, 0x9158f91au, 0x2f9072cbu, 0xcdc7ec7cu, 0x6bff662du, 0x0a36dfdeu, 0xa86e598fu,
    0x46a5d340u, 0xe4dd4cf1u, 0x8314c6a2u, 0x214c4053u, 0xbf83ba04u, 0x5dbb33b5u, 0xfbf2ad66u, 0x9a2a2717u,
    0x3861a0c8u, 0xd6991a79u, 0x74d0942au, 0x13080ddbu, 0xb13f878cu, 0x4f77013du, 0xedae7aeeu, 0x8be5f49fu,
    0x2a1d6e50u, 0xc854e801u, 0x668c61b2u, 0x04c3db63u, 0xa2fb5514u, 0x4132cec5u, 0xdf6a4876u, 0x7da1c227u,
    0x1bd93bd8u, 0xba10b589u, 0x58482f3au, 0xf67fa8ebu, 0x94b7229cu, 0x32ee9c4du, 0xd12615feu, 0x6f5d8fafu,
    0x0d950960u, 0xabcc8311u, 0x4a03fcc2u, 0xe83b7673u, 0x8672f024u, 0x24aa69d5u, 0xc2e1e386u, 0x61195d37u,
    0xff50d6e8u, 0x9d885099u, 0x3bbfca4au, 0xd9f743fbu, 0x782ebdacu, 0x1666375du, 0xb49db10eu, 0x52d52abfu,
    0xf10ca470u, 0x8f441e21u, 0x2d7b97d2u, 0xcbb31183u, 0x69ea8b34u, 0x082204e5u, 0xa6597e96u, 0x4490f847u,
    0xe2c871f8u, 0x80ffeba9u, 0x1f37655au, 0xbd6edf0bu, 0x5ba658bcu, 0xf9ddd26du, 0x98154c1eu, 0x364cc5cfu,
    0xd4843f80u, 0x72bbb931u, 0x10f332e2u, 0xaf2aac93u, 0x4d622644u, 0xeb999ff5u, 0x89d119a6u, 0x28089357u,
};

static const uint32_t bshim_295_tab4[96] = {
    0xf3217f69u, 0x9158f91au, 0x2f9072cbu, 0xcdc7ec7cu, 0x6bff662du, 0x0a36dfdeu, 0xa86e598fu, 0x46a5d340u,
    0xe4dd4cf1u, 0x8314c6a2u, 0x214c4053u, 0xbf83ba04u, 0x5dbb33b5u, 0xfbf2ad66u, 0x9a2a2717u, 0x3861a0c8u,
    0xd6991a79u, 0x74d0942au, 0x13080ddbu, 0xb13f878cu, 0x4f77013du, 0xedae7aeeu, 0x8be5f49fu, 0x2a1d6e50u,
    0xc854e801u, 0x668c61b2u, 0x04c3db63u, 0xa2fb5514u, 0x4132cec5u, 0xdf6a4876u, 0x7da1c227u, 0x1bd93bd8u,
    0xba10b589u, 0x58482f3au, 0xf67fa8ebu, 0x94b7229cu, 0x32ee9c4du, 0xd12615feu, 0x6f5d8fafu, 0x0d950960u,
    0xabcc8311u, 0x4a03fcc2u, 0xe83b7673u, 0x8672f024u, 0x24aa69d5u, 0xc2e1e386u, 0x61195d37u, 0xff50d6e8u,
    0x9d885099u, 0x3bbfca4au, 0xd9f743fbu, 0x782ebdacu, 0x1666375du, 0xb49db10eu, 0x52d52abfu, 0xf10ca470u,
    0x8f441e21u, 0x2d7b97d2u, 0xcbb31183u, 0x69ea8b34u, 0x082204e5u, 0xa6597e96u, 0x4490f847u, 0xe2c871f8u,
    0x80ffeba9u, 0x1f37655au, 0xbd6edf0bu, 0x5ba658bcu, 0xf9ddd26du, 0x98154c1eu, 0x364cc5cfu, 0xd4843f80u,
    0x72bbb931u, 0x10f332e2u, 0xaf2aac93u, 0x4d622644u, 0xeb999ff5u, 0x89d119a6u, 0x28089357u, 0xc6400d08u,
    0x647786b9u, 0x02af006au, 0xa0e67a1bu, 0x3f1df3ccu, 0xdd556d7du, 0x7b8ce72eu, 0x19c460dfu, 0xb7fbda90u,
    0x56335441u, 0xf46acdf2u, 0x92a247a3u, 0x30d9c154u, 0xcf113b05u, 0x6d48b4b6u, 0x0b802e67u, 0xa9b7a818u,
};

static const uint32_t bshim_295_tab5[96] = {
    0x74d0942au, 0x13080ddbu, 0xb13f878cu, 0x4f77013du, 0xedae7aeeu, 0x8be5f49fu, 0x2a1d6e50u, 0xc854e801u,
    0x668c61b2u, 0x04c3db63u, 0xa2fb5514u, 0x4132cec5u, 0xdf6a4876u, 0x7da1c227u, 0x1bd93bd8u, 0xba10b589u,
    0x58482f3au, 0xf67fa8ebu, 0x94b7229cu, 0x32ee9c4du, 0xd12615feu, 0x6f5d8fafu, 0x0d950960u, 0xabcc8311u,
    0x4a03fcc2u, 0xe83b7673u, 0x8672f024u, 0x24aa69d5u, 0xc2e1e386u, 0x61195d37u, 0xff50d6e8u, 0x9d885099u,
    0x3bbfca4au, 0xd9f743fbu, 0x782ebdacu, 0x1666375du, 0xb49db10eu, 0x52d52abfu, 0xf10ca470u, 0x8f441e21u,
    0x2d7b97d2u, 0xcbb31183u, 0x69ea8b34u, 0x082204e5u, 0xa6597e96u, 0x4490f847u, 0xe2c871f8u, 0x80ffeba9u,
    0x1f37655au, 0xbd6edf0bu, 0x5ba658bcu, 0xf9ddd26du, 0x98154c1eu, 0x364cc5cfu, 0xd4843f80u, 0x72bbb931u,
    0x10f332e2u, 0xaf2aac93u, 0x4d622644u, 0xeb999ff5u, 0x89d119a6u, 0x28089357u, 0xc6400d08u, 0x647786b9u,
    0x02af006au, 0xa0e67a1bu, 0x3f1df3ccu, 0xdd556d7du, 0x7b8ce72eu, 0x19c460dfu, 0xb7fbda90u, 0x56335441u,
    0xf46acdf2u, 0x92a247a3u, 0x30d9c154u, 0xcf113b05u, 0x6d48b4b6u, 0x0b802e67u, 0xa9b7a818u, 0x47ef21c9u,
    0xe6269b7au, 0x845e152bu, 0x22958edcu, 0xc0cd088du, 0x5f04823eu, 0xfd3bfbefu, 0x9b7375a0u, 0x39aaef51u,
    0xd7e26902u, 0x7619e2b3u, 0x14515c64u, 0xb288d615u, 0x50c04fc6u, 0xeef7c977u, 0x8d2f4328u, 0x2b66bcd9u,
};

static const uint32_t bshim_295_tab6[96] = {
    0xf67fa8ebu, 0x94b7229cu, 0x32ee9c4du, 0xd12615feu, 0x6f5d8fafu, 0x0d950960u, 0xabcc8311u, 0x4a03fcc2u,
    0xe83b7673u, 0x8672f024u, 0x24aa69d5u, 0xc2e1e386u, 0x61195d37u, 0xff50d6e8u, 0x9d885099u, 0x3bbfca4au,
    0xd9f743fbu, 0x782ebdacu, 0x1666375du, 0xb49db10eu, 0x52d52abfu, 0xf10ca470u, 0x8f441e21u, 0x2d7b97d2u,
    0xcbb31183u, 0x69ea8b34u, 0x082204e5u, 0xa6597e96u, 0x4490f847u, 0xe2c871f8u, 0x80ffeba9u, 0x1f37655au,
    0xbd6edf0bu, 0x5ba658bcu, 0xf9ddd26du, 0x98154c1eu, 0x364cc5cfu, 0xd4843f80u, 0x72bbb931u, 0x10f332e2u,
    0xaf2aac93u, 0x4d622644u, 0xeb999ff5u, 0x89d119a6u, 0x28089357u, 0xc6400d08u, 0x647786b9u, 0x02af006au,
    0xa0e67a1bu, 0x3f1df3ccu, 0xdd556d7du, 0x7b8ce72eu, 0x19c460dfu, 0xb7fbda90u, 0x56335441u, 0xf46acdf2u,
    0x92a247a3u, 0x30d9c154u, 0xcf113b05u, 0x6d48b4b6u, 0x0b802e67u, 0xa9b7a818u, 0x47ef21c9u, 0xe6269b7au,
    0x845e152bu, 0x22958edcu, 0xc0cd088du, 0x5f04823eu, 0xfd3bfbefu, 0x9b7375a0u, 0x39aaef51u, 0xd7e26902u,
    0x7619e2b3u, 0x14515c64u, 0xb288d615u, 0x50c04fc6u, 0xeef7c977u, 0x8d2f4328u, 0x2b66bcd9u, 0xc99e368au,
    0x67d5b03bu, 0x060d29ecu, 0xa444a39du, 0x427c1d4eu, 0xe0b396ffu, 0x7eeb10b0u, 0x1d228a61u, 0xbb5a0412u,
    0x59917dc3u, 0xf7c8f774u, 0x96007125u, 0x3437ead6u, 0xd26f6487u, 0x70a6de38u, 0x0ede57e9u, 0xad15d19au,
};

static const uint32_t bshim_295_tab7[96] = {
    0x782ebdacu, 0x1666375du, 0xb49db10eu, 0x52d52abfu, 0xf10ca470u, 0x8f441e21u, 0x2d7b97d2u, 0xcbb31183u,
    0x69ea8b34u, 0x082204e5u, 0xa6597e96u, 0x4490f847u, 0xe2c871f8u, 0x80ffeba9u, 0x1f37655au, 0xbd6edf0bu,
    0x5ba658bcu, 0xf9ddd26du, 0x98154c1eu, 0x364cc5cfu, 0xd4843f80u, 0x72bbb931u, 0x10f332e2u, 0xaf2aac93u,
    0x4d622644u, 0xeb999ff5u, 0x89d119a6u, 0x28089357u, 0xc6400d08u, 0x647786b9u, 0x02af006au, 0xa0e67a1bu,
    0x3f1df3ccu, 0xdd556d7du, 0x7b8ce72eu, 0x19c460dfu, 0xb7fbda90u, 0x56335441u, 0xf46acdf2u, 0x92a247a3u,
    0x30d9c154u, 0xcf113b05u, 0x6d48b4b6u, 0x0b802e67u, 0xa9b7a818u, 0x47ef21c9u, 0xe6269b7au, 0x845e152bu,
    0x22958edcu, 0xc0cd088du, 0x5f04823eu, 0xfd3bfbefu, 0x9b7375a0u, 0x39aaef51u, 0xd7e26902u, 0x7619e2b3u,
    0x14515c64u, 0xb288d615u, 0x50c04fc6u, 0xeef7c977u, 0x8d2f4328u, 0x2b66bcd9u, 0xc99e368au, 0x67d5b03bu,
    0x060d29ecu, 0xa444a39du, 0x427c1d4eu, 0xe0b396ffu, 0x7eeb10b0u, 0x1d228a61u, 0xbb5a0412u, 0x59917dc3u,
    0xf7c8f774u, 0x96007125u, 0x3437ead6u, 0xd26f6487u, 0x70a6de38u, 0x0ede57e9u, 0xad15d19au, 0x4b4d4b4bu,
    0xe984c4fcu, 0x87bc3eadu, 0x25f3b85eu, 0xc42b320fu, 0x6262abc0u, 0x009a2571u, 0x9ed19f22u, 0x3d0918d3u,
    0xdb409284u, 0x79780c35u, 0x17af85e6u, 0xb5e6ff97u, 0x541e7948u, 0xf255f2f9u, 0x908d6caau, 0x2ec4e65bu,
};

struct bshim_295_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_295_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8807425u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e6c3e9cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x04580913u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a43d38au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x102f9e01u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x961b6878u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c0732efu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_295_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa1f2fd66u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_295_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_295_reset(struct bshim_295_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0023a569u;
    return 0;
}

