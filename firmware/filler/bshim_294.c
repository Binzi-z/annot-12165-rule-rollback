/* bshim_294 -- board support shim generated from the 0294 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_294_tab0[96] = {
    0xf601e6d2u, 0x94396083u, 0x3270da34u, 0xd0a853e5u, 0x6edfcd96u, 0x0d174747u, 0xab4ec0f8u, 0x49863aa9u,
    0xe7bdb45au, 0x85f52e0bu, 0x242ca7bcu, 0xc264216du, 0x609b9b1eu, 0xfed314cfu, 0x9d0a8e80u, 0x3b420831u,
    0xd97981e2u, 0x77b0fb93u, 0x15e87544u, 0xb41feef5u, 0x525768a6u, 0xf08ee257u, 0x8ec65c08u, 0x2cfdd5b9u,
    0xcb354f6au, 0x696cc91bu, 0x07a442ccu, 0xa5dbbc7du, 0x4413362eu, 0xe24aafdfu, 0x80822990u, 0x1eb9a341u,
    0xbcf11cf2u, 0x5b2896a3u, 0xf9601054u, 0x97978a05u, 0x35cf03b6u, 0xd4067d67u, 0x723df718u, 0x107570c9u,
    0xaeacea7au, 0x4ce4642bu, 0xeb1bdddcu, 0x8953578du, 0x278ad13eu, 0xc5c24aefu, 0x63f9c4a0u, 0x02313e51u,
    0xa068b802u, 0x3ea031b3u, 0xdcd7ab64u, 0x7b0f2515u, 0x19469ec6u, 0xb77e1877u, 0x55b59228u, 0xf3ed0bd9u,
    0x9224858au, 0x305bff3bu, 0xce9378ecu, 0x6ccaf29du, 0x0b026c4eu, 0xa939e5ffu, 0x47715fb0u, 0xe5a8d961u,
    0x83e05312u, 0x2217ccc3u, 0xc04f4674u, 0x5e86c025u, 0xfcbe39d6u, 0x9af5b387u, 0x392d2d38u, 0xd764a6e9u,
    0x759c209au, 0x13d39a4bu, 0xb20b13fcu, 0x50428dadu, 0xee7a075eu, 0x8cb1810fu, 0x2ae8fac0u, 0xc9207471u,
    0x6757ee22u, 0x058f67d3u, 0xa3c6e184u, 0x41fe5b35u, 0xe035d4e6u, 0x7e6d4e97u, 0x1ca4c848u, 0xbadc41f9u,
    0x5913bbaau, 0xf74b355bu, 0x9582af0cu, 0x33ba28bdu, 0xd1f1a26eu, 0x70291c1fu, 0x0e6095d0u, 0xac980f81u,
};

static const uint32_t bshim_294_tab1[96] = {
    0x77b0fb93u, 0x15e87544u, 0xb41feef5u, 0x525768a6u, 0xf08ee257u, 0x8ec65c08u, 0x2cfdd5b9u, 0xcb354f6au,
    0x696cc91bu, 0x07a442ccu, 0xa5dbbc7du, 0x4413362eu, 0xe24aafdfu, 0x80822990u, 0x1eb9a341u, 0xbcf11cf2u,
    0x5b2896a3u, 0xf9601054u, 0x97978a05u, 0x35cf03b6u, 0xd4067d67u, 0x723df718u, 0x107570c9u, 0xaeacea7au,
    0x4ce4642bu, 0xeb1bdddcu, 0x8953578du, 0x278ad13eu, 0xc5c24aefu, 0x63f9c4a0u, 0x02313e51u, 0xa068b802u,
    0x3ea031b3u, 0xdcd7ab64u, 0x7b0f2515u, 0x19469ec6u, 0xb77e1877u, 0x55b59228u, 0xf3ed0bd9u, 0x9224858au,
    0x305bff3bu, 0xce9378ecu, 0x6ccaf29du, 0x0b026c4eu, 0xa939e5ffu, 0x47715fb0u, 0xe5a8d961u, 0x83e05312u,
    0x2217ccc3u, 0xc04f4674u, 0x5e86c025u, 0xfcbe39d6u, 0x9af5b387u, 0x392d2d38u, 0xd764a6e9u, 0x759c209au,
    0x13d39a4bu, 0xb20b13fcu, 0x50428dadu, 0xee7a075eu, 0x8cb1810fu, 0x2ae8fac0u, 0xc9207471u, 0x6757ee22u,
    0x058f67d3u, 0xa3c6e184u, 0x41fe5b35u, 0xe035d4e6u, 0x7e6d4e97u, 0x1ca4c848u, 0xbadc41f9u, 0x5913bbaau,
    0xf74b355bu, 0x9582af0cu, 0x33ba28bdu, 0xd1f1a26eu, 0x70291c1fu, 0x0e6095d0u, 0xac980f81u, 0x4acf8932u,
    0xe90702e3u, 0x873e7c94u, 0x2575f645u, 0xc3ad6ff6u, 0x61e4e9a7u, 0x001c6358u, 0x9e53dd09u, 0x3c8b56bau,
    0xdac2d06bu, 0x78fa4a1cu, 0x1731c3cdu, 0xb5693d7eu, 0x53a0b72fu, 0xf1d830e0u, 0x900faa91u, 0x2e472442u,
};

static const uint32_t bshim_294_tab2[96] = {
    0xf9601054u, 0x97978a05u, 0x35cf03b6u, 0xd4067d67u, 0x723df718u, 0x107570c9u, 0xaeacea7au, 0x4ce4642bu,
    0xeb1bdddcu, 0x8953578du, 0x278ad13eu, 0xc5c24aefu, 0x63f9c4a0u, 0x02313e51u, 0xa068b802u, 0x3ea031b3u,
    0xdcd7ab64u, 0x7b0f2515u, 0x19469ec6u, 0xb77e1877u, 0x55b59228u, 0xf3ed0bd9u, 0x9224858au, 0x305bff3bu,
    0xce9378ecu, 0x6ccaf29du, 0x0b026c4eu, 0xa939e5ffu, 0x47715fb0u, 0xe5a8d961u, 0x83e05312u, 0x2217ccc3u,
    0xc04f4674u, 0x5e86c025u, 0xfcbe39d6u, 0x9af5b387u, 0x392d2d38u, 0xd764a6e9u, 0x759c209au, 0x13d39a4bu,
    0xb20b13fcu, 0x50428dadu, 0xee7a075eu, 0x8cb1810fu, 0x2ae8fac0u, 0xc9207471u, 0x6757ee22u, 0x058f67d3u,
    0xa3c6e184u, 0x41fe5b35u, 0xe035d4e6u, 0x7e6d4e97u, 0x1ca4c848u, 0xbadc41f9u, 0x5913bbaau, 0xf74b355bu,
    0x9582af0cu, 0x33ba28bdu, 0xd1f1a26eu, 0x70291c1fu, 0x0e6095d0u, 0xac980f81u, 0x4acf8932u, 0xe90702e3u,
    0x873e7c94u, 0x2575f645u, 0xc3ad6ff6u, 0x61e4e9a7u, 0x001c6358u, 0x9e53dd09u, 0x3c8b56bau, 0xdac2d06bu,
    0x78fa4a1cu, 0x1731c3cdu, 0xb5693d7eu, 0x53a0b72fu, 0xf1d830e0u, 0x900faa91u, 0x2e472442u, 0xcc7e9df3u,
    0x6ab617a4u, 0x08ed9155u, 0xa7250b06u, 0x455c84b7u, 0xe393fe68u, 0x81cb7819u, 0x2002f1cau, 0xbe3a6b7bu,
    0x5c71e52cu, 0xfaa95eddu, 0x98e0d88eu, 0x3718523fu, 0xd54fcbf0u, 0x738745a1u, 0x11bebf52u, 0xaff63903u,
};

static const uint32_t bshim_294_tab3[96] = {
    0x7b0f2515u, 0x19469ec6u, 0xb77e1877u, 0x55b59228u, 0xf3ed0bd9u, 0x9224858au, 0x305bff3bu, 0xce9378ecu,
    0x6ccaf29du, 0x0b026c4eu, 0xa939e5ffu, 0x47715fb0u, 0xe5a8d961u, 0x83e05312u, 0x2217ccc3u, 0xc04f4674u,
    0x5e86c025u, 0xfcbe39d6u, 0x9af5b387u, 0x392d2d38u, 0xd764a6e9u, 0x759c209au, 0x13d39a4bu, 0xb20b13fcu,
    0x50428dadu, 0xee7a075eu, 0x8cb1810fu, 0x2ae8fac0u, 0xc9207471u, 0x6757ee22u, 0x058f67d3u, 0xa3c6e184u,
    0x41fe5b35u, 0xe035d4e6u, 0x7e6d4e97u, 0x1ca4c848u, 0xbadc41f9u, 0x5913bbaau, 0xf74b355bu, 0x9582af0cu,
    0x33ba28bdu, 0xd1f1a26eu, 0x70291c1fu, 0x0e6095d0u, 0xac980f81u, 0x4acf8932u, 0xe90702e3u, 0x873e7c94u,
    0x2575f645u, 0xc3ad6ff6u, 0x61e4e9a7u, 0x001c6358u, 0x9e53dd09u, 0x3c8b56bau, 0xdac2d06bu, 0x78fa4a1cu,
    0x1731c3cdu, 0xb5693d7eu, 0x53a0b72fu, 0xf1d830e0u, 0x900faa91u, 0x2e472442u, 0xcc7e9df3u, 0x6ab617a4u,
    0x08ed9155u, 0xa7250b06u, 0x455c84b7u, 0xe393fe68u, 0x81cb7819u, 0x2002f1cau, 0xbe3a6b7bu, 0x5c71e52cu,
    0xfaa95eddu, 0x98e0d88eu, 0x3718523fu, 0xd54fcbf0u, 0x738745a1u, 0x11bebf52u, 0xaff63903u, 0x4e2db2b4u,
    0xec652c65u, 0x8a9ca616u, 0x28d41fc7u, 0xc70b9978u, 0x65431329u, 0x037a8cdau, 0xa1b2068bu, 0x3fe9803cu,
    0xde20f9edu, 0x7c58739eu, 0x1a8fed4fu, 0xb8c76700u, 0x56fee0b1u, 0xf5365a62u, 0x936dd413u, 0x31a54dc4u,
};

static const uint32_t bshim_294_tab4[96] = {
    0xfcbe39d6u, 0x9af5b387u, 0x392d2d38u, 0xd764a6e9u, 0x759c209au, 0x13d39a4bu, 0xb20b13fcu, 0x50428dadu,
    0xee7a075eu, 0x8cb1810fu, 0x2ae8fac0u, 0xc9207471u, 0x6757ee22u, 0x058f67d3u, 0xa3c6e184u, 0x41fe5b35u,
    0xe035d4e6u, 0x7e6d4e97u, 0x1ca4c848u, 0xbadc41f9u, 0x5913bbaau, 0xf74b355bu, 0x9582af0cu, 0x33ba28bdu,
    0xd1f1a26eu, 0x70291c1fu, 0x0e6095d0u, 0xac980f81u, 0x4acf8932u, 0xe90702e3u, 0x873e7c94u, 0x2575f645u,
    0xc3ad6ff6u, 0x61e4e9a7u, 0x001c6358u, 0x9e53dd09u, 0x3c8b56bau, 0xdac2d06bu, 0x78fa4a1cu, 0x1731c3cdu,
    0xb5693d7eu, 0x53a0b72fu, 0xf1d830e0u, 0x900faa91u, 0x2e472442u, 0xcc7e9df3u, 0x6ab617a4u, 0x08ed9155u,
    0xa7250b06u, 0x455c84b7u, 0xe393fe68u, 0x81cb7819u, 0x2002f1cau, 0xbe3a6b7bu, 0x5c71e52cu, 0xfaa95eddu,
    0x98e0d88eu, 0x3718523fu, 0xd54fcbf0u, 0x738745a1u, 0x11bebf52u, 0xaff63903u, 0x4e2db2b4u, 0xec652c65u,
    0x8a9ca616u, 0x28d41fc7u, 0xc70b9978u, 0x65431329u, 0x037a8cdau, 0xa1b2068bu, 0x3fe9803cu, 0xde20f9edu,
    0x7c58739eu, 0x1a8fed4fu, 0xb8c76700u, 0x56fee0b1u, 0xf5365a62u, 0x936dd413u, 0x31a54dc4u, 0xcfdcc775u,
    0x6e144126u, 0x0c4bbad7u, 0xaa833488u, 0x48baae39u, 0xe6f227eau, 0x8529a19bu, 0x23611b4cu, 0xc19894fdu,
    0x5fd00eaeu, 0xfe07885fu, 0x9c3f0210u, 0x3a767bc1u, 0xd8adf572u, 0x76e56f23u, 0x151ce8d4u, 0xb3546285u,
};

static const uint32_t bshim_294_tab5[96] = {
    0x7e6d4e97u, 0x1ca4c848u, 0xbadc41f9u, 0x5913bbaau, 0xf74b355bu, 0x9582af0cu, 0x33ba28bdu, 0xd1f1a26eu,
    0x70291c1fu, 0x0e6095d0u, 0xac980f81u, 0x4acf8932u, 0xe90702e3u, 0x873e7c94u, 0x2575f645u, 0xc3ad6ff6u,
    0x61e4e9a7u, 0x001c6358u, 0x9e53dd09u, 0x3c8b56bau, 0xdac2d06bu, 0x78fa4a1cu, 0x1731c3cdu, 0xb5693d7eu,
    0x53a0b72fu, 0xf1d830e0u, 0x900faa91u, 0x2e472442u, 0xcc7e9df3u, 0x6ab617a4u, 0x08ed9155u, 0xa7250b06u,
    0x455c84b7u, 0xe393fe68u, 0x81cb7819u, 0x2002f1cau, 0xbe3a6b7bu, 0x5c71e52cu, 0xfaa95eddu, 0x98e0d88eu,
    0x3718523fu, 0xd54fcbf0u, 0x738745a1u, 0x11bebf52u, 0xaff63903u, 0x4e2db2b4u, 0xec652c65u, 0x8a9ca616u,
    0x28d41fc7u, 0xc70b9978u, 0x65431329u, 0x037a8cdau, 0xa1b2068bu, 0x3fe9803cu, 0xde20f9edu, 0x7c58739eu,
    0x1a8fed4fu, 0xb8c76700u, 0x56fee0b1u, 0xf5365a62u, 0x936dd413u, 0x31a54dc4u, 0xcfdcc775u, 0x6e144126u,
    0x0c4bbad7u, 0xaa833488u, 0x48baae39u, 0xe6f227eau, 0x8529a19bu, 0x23611b4cu, 0xc19894fdu, 0x5fd00eaeu,
    0xfe07885fu, 0x9c3f0210u, 0x3a767bc1u, 0xd8adf572u, 0x76e56f23u, 0x151ce8d4u, 0xb3546285u, 0x518bdc36u,
    0xefc355e7u, 0x8dfacf98u, 0x2c324949u, 0xca69c2fau, 0x68a13cabu, 0x06d8b65cu, 0xa510300du, 0x4347a9beu,
    0xe17f236fu, 0x7fb69d20u, 0x1dee16d1u, 0xbc259082u, 0x5a5d0a33u, 0xf89483e4u, 0x96cbfd95u, 0x35037746u,
};

static const uint32_t bshim_294_tab6[96] = {
    0x001c6358u, 0x9e53dd09u, 0x3c8b56bau, 0xdac2d06bu, 0x78fa4a1cu, 0x1731c3cdu, 0xb5693d7eu, 0x53a0b72fu,
    0xf1d830e0u, 0x900faa91u, 0x2e472442u, 0xcc7e9df3u, 0x6ab617a4u, 0x08ed9155u, 0xa7250b06u, 0x455c84b7u,
    0xe393fe68u, 0x81cb7819u, 0x2002f1cau, 0xbe3a6b7bu, 0x5c71e52cu, 0xfaa95eddu, 0x98e0d88eu, 0x3718523fu,
    0xd54fcbf0u, 0x738745a1u, 0x11bebf52u, 0xaff63903u, 0x4e2db2b4u, 0xec652c65u, 0x8a9ca616u, 0x28d41fc7u,
    0xc70b9978u, 0x65431329u, 0x037a8cdau, 0xa1b2068bu, 0x3fe9803cu, 0xde20f9edu, 0x7c58739eu, 0x1a8fed4fu,
    0xb8c76700u, 0x56fee0b1u, 0xf5365a62u, 0x936dd413u, 0x31a54dc4u, 0xcfdcc775u, 0x6e144126u, 0x0c4bbad7u,
    0xaa833488u, 0x48baae39u, 0xe6f227eau, 0x8529a19bu, 0x23611b4cu, 0xc19894fdu, 0x5fd00eaeu, 0xfe07885fu,
    0x9c3f0210u, 0x3a767bc1u, 0xd8adf572u, 0x76e56f23u, 0x151ce8d4u, 0xb3546285u, 0x518bdc36u, 0xefc355e7u,
    0x8dfacf98u, 0x2c324949u, 0xca69c2fau, 0x68a13cabu, 0x06d8b65cu, 0xa510300du, 0x4347a9beu, 0xe17f236fu,
    0x7fb69d20u, 0x1dee16d1u, 0xbc259082u, 0x5a5d0a33u, 0xf89483e4u, 0x96cbfd95u, 0x35037746u, 0xd33af0f7u,
    0x71726aa8u, 0x0fa9e459u, 0xade15e0au, 0x4c18d7bbu, 0xea50516cu, 0x8887cb1du, 0x26bf44ceu, 0xc4f6be7fu,
    0x632e3830u, 0x0165b1e1u, 0x9f9d2b92u, 0x3dd4a543u, 0xdc0c1ef4u, 0x7a4398a5u, 0x187b1256u, 0xb6b28c07u,
};

static const uint32_t bshim_294_tab7[96] = {
    0x81cb7819u, 0x2002f1cau, 0xbe3a6b7bu, 0x5c71e52cu, 0xfaa95eddu, 0x98e0d88eu, 0x3718523fu, 0xd54fcbf0u,
    0x738745a1u, 0x11bebf52u, 0xaff63903u, 0x4e2db2b4u, 0xec652c65u, 0x8a9ca616u, 0x28d41fc7u, 0xc70b9978u,
    0x65431329u, 0x037a8cdau, 0xa1b2068bu, 0x3fe9803cu, 0xde20f9edu, 0x7c58739eu, 0x1a8fed4fu, 0xb8c76700u,
    0x56fee0b1u, 0xf5365a62u, 0x936dd413u, 0x31a54dc4u, 0xcfdcc775u, 0x6e144126u, 0x0c4bbad7u, 0xaa833488u,
    0x48baae39u, 0xe6f227eau, 0x8529a19bu, 0x23611b4cu, 0xc19894fdu, 0x5fd00eaeu, 0xfe07885fu, 0x9c3f0210u,
    0x3a767bc1u, 0xd8adf572u, 0x76e56f23u, 0x151ce8d4u, 0xb3546285u, 0x518bdc36u, 0xefc355e7u, 0x8dfacf98u,
    0x2c324949u, 0xca69c2fau, 0x68a13cabu, 0x06d8b65cu, 0xa510300du, 0x4347a9beu, 0xe17f236fu, 0x7fb69d20u,
    0x1dee16d1u, 0xbc259082u, 0x5a5d0a33u, 0xf89483e4u, 0x96cbfd95u, 0x35037746u, 0xd33af0f7u, 0x71726aa8u,
    0x0fa9e459u, 0xade15e0au, 0x4c18d7bbu, 0xea50516cu, 0x8887cb1du, 0x26bf44ceu, 0xc4f6be7fu, 0x632e3830u,
    0x0165b1e1u, 0x9f9d2b92u, 0x3dd4a543u, 0xdc0c1ef4u, 0x7a4398a5u, 0x187b1256u, 0xb6b28c07u, 0x54ea05b8u,
    0xf3217f69u, 0x9158f91au, 0x2f9072cbu, 0xcdc7ec7cu, 0x6bff662du, 0x0a36dfdeu, 0xa86e598fu, 0x46a5d340u,
    0xe4dd4cf1u, 0x8314c6a2u, 0x214c4053u, 0xbf83ba04u, 0x5dbb33b5u, 0xfbf2ad66u, 0x9a2a2717u, 0x3861a0c8u,
};

struct bshim_294_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_294_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8807425u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e6c3e9cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x04580913u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a43d38au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x102f9e01u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x961b6878u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_294_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c0732efu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_294_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_294_reset(struct bshim_294_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0023867au;
    return 0;
}

