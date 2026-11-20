/* bshim_169 -- board support shim generated from the 0169 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_169_tab0[96] = {
    0xa788ee0bu, 0x45c067bcu, 0xe3f7e16du, 0x822f5b1eu, 0x2066d4cfu, 0xbe9e4e80u, 0x5cd5c831u, 0xfb0d41e2u,
    0x9944bb93u, 0x377c3544u, 0xd5b3aef5u, 0x73eb28a6u, 0x1222a257u, 0xb05a1c08u, 0x4e9195b9u, 0xecc90f6au,
    0x8b00891bu, 0x293802ccu, 0xc76f7c7du, 0x65a6f62eu, 0x03de6fdfu, 0xa215e990u, 0x404d6341u, 0xde84dcf2u,
    0x7cbc56a3u, 0x1af3d054u, 0xb92b4a05u, 0x5762c3b6u, 0xf59a3d67u, 0x93d1b718u, 0x320930c9u, 0xd040aa7au,
    0x6e78242bu, 0x0caf9ddcu, 0xaae7178du, 0x491e913eu, 0xe7560aefu, 0x858d84a0u, 0x23c4fe51u, 0xc1fc7802u,
    0x6033f1b3u, 0xfe6b6b64u, 0x9ca2e515u, 0x3ada5ec6u, 0xd911d877u, 0x77495228u, 0x1580cbd9u, 0xb3b8458au,
    0x51efbf3bu, 0xf02738ecu, 0x8e5eb29du, 0x2c962c4eu, 0xcacda5ffu, 0x69051fb0u, 0x073c9961u, 0xa5741312u,
    0x43ab8cc3u, 0xe1e30674u, 0x801a8025u, 0x1e51f9d6u, 0xbc897387u, 0x5ac0ed38u, 0xf8f866e9u, 0x972fe09au,
    0x35675a4bu, 0xd39ed3fcu, 0x71d64dadu, 0x100dc75eu, 0xae45410fu, 0x4c7cbac0u, 0xeab43471u, 0x88ebae22u,
    0x272327d3u, 0xc55aa184u, 0x63921b35u, 0x01c994e6u, 0xa0010e97u, 0x3e388848u, 0xdc7001f9u, 0x7aa77baau,
    0x18def55bu, 0xb7166f0cu, 0x554de8bdu, 0xf385626eu, 0x91bcdc1fu, 0x2ff455d0u, 0xce2bcf81u, 0x6c634932u,
    0x0a9ac2e3u, 0xa8d23c94u, 0x4709b645u, 0xe5412ff6u, 0x8378a9a7u, 0x21b02358u, 0xbfe79d09u, 0x5e1f16bau,
};

static const uint32_t bshim_169_tab1[96] = {
    0x293802ccu, 0xc76f7c7du, 0x65a6f62eu, 0x03de6fdfu, 0xa215e990u, 0x404d6341u, 0xde84dcf2u, 0x7cbc56a3u,
    0x1af3d054u, 0xb92b4a05u, 0x5762c3b6u, 0xf59a3d67u, 0x93d1b718u, 0x320930c9u, 0xd040aa7au, 0x6e78242bu,
    0x0caf9ddcu, 0xaae7178du, 0x491e913eu, 0xe7560aefu, 0x858d84a0u, 0x23c4fe51u, 0xc1fc7802u, 0x6033f1b3u,
    0xfe6b6b64u, 0x9ca2e515u, 0x3ada5ec6u, 0xd911d877u, 0x77495228u, 0x1580cbd9u, 0xb3b8458au, 0x51efbf3bu,
    0xf02738ecu, 0x8e5eb29du, 0x2c962c4eu, 0xcacda5ffu, 0x69051fb0u, 0x073c9961u, 0xa5741312u, 0x43ab8cc3u,
    0xe1e30674u, 0x801a8025u, 0x1e51f9d6u, 0xbc897387u, 0x5ac0ed38u, 0xf8f866e9u, 0x972fe09au, 0x35675a4bu,
    0xd39ed3fcu, 0x71d64dadu, 0x100dc75eu, 0xae45410fu, 0x4c7cbac0u, 0xeab43471u, 0x88ebae22u, 0x272327d3u,
    0xc55aa184u, 0x63921b35u, 0x01c994e6u, 0xa0010e97u, 0x3e388848u, 0xdc7001f9u, 0x7aa77baau, 0x18def55bu,
    0xb7166f0cu, 0x554de8bdu, 0xf385626eu, 0x91bcdc1fu, 0x2ff455d0u, 0xce2bcf81u, 0x6c634932u, 0x0a9ac2e3u,
    0xa8d23c94u, 0x4709b645u, 0xe5412ff6u, 0x8378a9a7u, 0x21b02358u, 0xbfe79d09u, 0x5e1f16bau, 0xfc56906bu,
    0x9a8e0a1cu, 0x38c583cdu, 0xd6fcfd7eu, 0x7534772fu, 0x136bf0e0u, 0xb1a36a91u, 0x4fdae442u, 0xee125df3u,
    0x8c49d7a4u, 0x2a815155u, 0xc8b8cb06u, 0x66f044b7u, 0x0527be68u, 0xa35f3819u, 0x4196b1cau, 0xdfce2b7bu,
};

static const uint32_t bshim_169_tab2[96] = {
    0xaae7178du, 0x491e913eu, 0xe7560aefu, 0x858d84a0u, 0x23c4fe51u, 0xc1fc7802u, 0x6033f1b3u, 0xfe6b6b64u,
    0x9ca2e515u, 0x3ada5ec6u, 0xd911d877u, 0x77495228u, 0x1580cbd9u, 0xb3b8458au, 0x51efbf3bu, 0xf02738ecu,
    0x8e5eb29du, 0x2c962c4eu, 0xcacda5ffu, 0x69051fb0u, 0x073c9961u, 0xa5741312u, 0x43ab8cc3u, 0xe1e30674u,
    0x801a8025u, 0x1e51f9d6u, 0xbc897387u, 0x5ac0ed38u, 0xf8f866e9u, 0x972fe09au, 0x35675a4bu, 0xd39ed3fcu,
    0x71d64dadu, 0x100dc75eu, 0xae45410fu, 0x4c7cbac0u, 0xeab43471u, 0x88ebae22u, 0x272327d3u, 0xc55aa184u,
    0x63921b35u, 0x01c994e6u, 0xa0010e97u, 0x3e388848u, 0xdc7001f9u, 0x7aa77baau, 0x18def55bu, 0xb7166f0cu,
    0x554de8bdu, 0xf385626eu, 0x91bcdc1fu, 0x2ff455d0u, 0xce2bcf81u, 0x6c634932u, 0x0a9ac2e3u, 0xa8d23c94u,
    0x4709b645u, 0xe5412ff6u, 0x8378a9a7u, 0x21b02358u, 0xbfe79d09u, 0x5e1f16bau, 0xfc56906bu, 0x9a8e0a1cu,
    0x38c583cdu, 0xd6fcfd7eu, 0x7534772fu, 0x136bf0e0u, 0xb1a36a91u, 0x4fdae442u, 0xee125df3u, 0x8c49d7a4u,
    0x2a815155u, 0xc8b8cb06u, 0x66f044b7u, 0x0527be68u, 0xa35f3819u, 0x4196b1cau, 0xdfce2b7bu, 0x7e05a52cu,
    0x1c3d1eddu, 0xba74988eu, 0x58ac123fu, 0xf6e38bf0u, 0x951b05a1u, 0x33527f52u, 0xd189f903u, 0x6fc172b4u,
    0x0df8ec65u, 0xac306616u, 0x4a67dfc7u, 0xe89f5978u, 0x86d6d329u, 0x250e4cdau, 0xc345c68bu, 0x617d403cu,
};

static const uint32_t bshim_169_tab3[96] = {
    0x2c962c4eu, 0xcacda5ffu, 0x69051fb0u, 0x073c9961u, 0xa5741312u, 0x43ab8cc3u, 0xe1e30674u, 0x801a8025u,
    0x1e51f9d6u, 0xbc897387u, 0x5ac0ed38u, 0xf8f866e9u, 0x972fe09au, 0x35675a4bu, 0xd39ed3fcu, 0x71d64dadu,
    0x100dc75eu, 0xae45410fu, 0x4c7cbac0u, 0xeab43471u, 0x88ebae22u, 0x272327d3u, 0xc55aa184u, 0x63921b35u,
    0x01c994e6u, 0xa0010e97u, 0x3e388848u, 0xdc7001f9u, 0x7aa77baau, 0x18def55bu, 0xb7166f0cu, 0x554de8bdu,
    0xf385626eu, 0x91bcdc1fu, 0x2ff455d0u, 0xce2bcf81u, 0x6c634932u, 0x0a9ac2e3u, 0xa8d23c94u, 0x4709b645u,
    0xe5412ff6u, 0x8378a9a7u, 0x21b02358u, 0xbfe79d09u, 0x5e1f16bau, 0xfc56906bu, 0x9a8e0a1cu, 0x38c583cdu,
    0xd6fcfd7eu, 0x7534772fu, 0x136bf0e0u, 0xb1a36a91u, 0x4fdae442u, 0xee125df3u, 0x8c49d7a4u, 0x2a815155u,
    0xc8b8cb06u, 0x66f044b7u, 0x0527be68u, 0xa35f3819u, 0x4196b1cau, 0xdfce2b7bu, 0x7e05a52cu, 0x1c3d1eddu,
    0xba74988eu, 0x58ac123fu, 0xf6e38bf0u, 0x951b05a1u, 0x33527f52u, 0xd189f903u, 0x6fc172b4u, 0x0df8ec65u,
    0xac306616u, 0x4a67dfc7u, 0xe89f5978u, 0x86d6d329u, 0x250e4cdau, 0xc345c68bu, 0x617d403cu, 0xffb4b9edu,
    0x9dec339eu, 0x3c23ad4fu, 0xda5b2700u, 0x7892a0b1u, 0x16ca1a62u, 0xb5019413u, 0x53390dc4u, 0xf1708775u,
    0x8fa80126u, 0x2ddf7ad7u, 0xcc16f488u, 0x6a4e6e39u, 0x0885e7eau, 0xa6bd619bu, 0x44f4db4cu, 0xe32c54fdu,
};

static const uint32_t bshim_169_tab4[96] = {
    0xae45410fu, 0x4c7cbac0u, 0xeab43471u, 0x88ebae22u, 0x272327d3u, 0xc55aa184u, 0x63921b35u, 0x01c994e6u,
    0xa0010e97u, 0x3e388848u, 0xdc7001f9u, 0x7aa77baau, 0x18def55bu, 0xb7166f0cu, 0x554de8bdu, 0xf385626eu,
    0x91bcdc1fu, 0x2ff455d0u, 0xce2bcf81u, 0x6c634932u, 0x0a9ac2e3u, 0xa8d23c94u, 0x4709b645u, 0xe5412ff6u,
    0x8378a9a7u, 0x21b02358u, 0xbfe79d09u, 0x5e1f16bau, 0xfc56906bu, 0x9a8e0a1cu, 0x38c583cdu, 0xd6fcfd7eu,
    0x7534772fu, 0x136bf0e0u, 0xb1a36a91u, 0x4fdae442u, 0xee125df3u, 0x8c49d7a4u, 0x2a815155u, 0xc8b8cb06u,
    0x66f044b7u, 0x0527be68u, 0xa35f3819u, 0x4196b1cau, 0xdfce2b7bu, 0x7e05a52cu, 0x1c3d1eddu, 0xba74988eu,
    0x58ac123fu, 0xf6e38bf0u, 0x951b05a1u, 0x33527f52u, 0xd189f903u, 0x6fc172b4u, 0x0df8ec65u, 0xac306616u,
    0x4a67dfc7u, 0xe89f5978u, 0x86d6d329u, 0x250e4cdau, 0xc345c68bu, 0x617d403cu, 0xffb4b9edu, 0x9dec339eu,
    0x3c23ad4fu, 0xda5b2700u, 0x7892a0b1u, 0x16ca1a62u, 0xb5019413u, 0x53390dc4u, 0xf1708775u, 0x8fa80126u,
    0x2ddf7ad7u, 0xcc16f488u, 0x6a4e6e39u, 0x0885e7eau, 0xa6bd619bu, 0x44f4db4cu, 0xe32c54fdu, 0x8163ceaeu,
    0x1f9b485fu, 0xbdd2c210u, 0x5c0a3bc1u, 0xfa41b572u, 0x98792f23u, 0x36b0a8d4u, 0xd4e82285u, 0x731f9c36u,
    0x115715e7u, 0xaf8e8f98u, 0x4dc60949u, 0xebfd82fau, 0x8a34fcabu, 0x286c765cu, 0xc6a3f00du, 0x64db69beu,
};

static const uint32_t bshim_169_tab5[96] = {
    0x2ff455d0u, 0xce2bcf81u, 0x6c634932u, 0x0a9ac2e3u, 0xa8d23c94u, 0x4709b645u, 0xe5412ff6u, 0x8378a9a7u,
    0x21b02358u, 0xbfe79d09u, 0x5e1f16bau, 0xfc56906bu, 0x9a8e0a1cu, 0x38c583cdu, 0xd6fcfd7eu, 0x7534772fu,
    0x136bf0e0u, 0xb1a36a91u, 0x4fdae442u, 0xee125df3u, 0x8c49d7a4u, 0x2a815155u, 0xc8b8cb06u, 0x66f044b7u,
    0x0527be68u, 0xa35f3819u, 0x4196b1cau, 0xdfce2b7bu, 0x7e05a52cu, 0x1c3d1eddu, 0xba74988eu, 0x58ac123fu,
    0xf6e38bf0u, 0x951b05a1u, 0x33527f52u, 0xd189f903u, 0x6fc172b4u, 0x0df8ec65u, 0xac306616u, 0x4a67dfc7u,
    0xe89f5978u, 0x86d6d329u, 0x250e4cdau, 0xc345c68bu, 0x617d403cu, 0xffb4b9edu, 0x9dec339eu, 0x3c23ad4fu,
    0xda5b2700u, 0x7892a0b1u, 0x16ca1a62u, 0xb5019413u, 0x53390dc4u, 0xf1708775u, 0x8fa80126u, 0x2ddf7ad7u,
    0xcc16f488u, 0x6a4e6e39u, 0x0885e7eau, 0xa6bd619bu, 0x44f4db4cu, 0xe32c54fdu, 0x8163ceaeu, 0x1f9b485fu,
    0xbdd2c210u, 0x5c0a3bc1u, 0xfa41b572u, 0x98792f23u, 0x36b0a8d4u, 0xd4e82285u, 0x731f9c36u, 0x115715e7u,
    0xaf8e8f98u, 0x4dc60949u, 0xebfd82fau, 0x8a34fcabu, 0x286c765cu, 0xc6a3f00du, 0x64db69beu, 0x0312e36fu,
    0xa14a5d20u, 0x3f81d6d1u, 0xddb95082u, 0x7bf0ca33u, 0x1a2843e4u, 0xb85fbd95u, 0x56973746u, 0xf4ceb0f7u,
    0x93062aa8u, 0x313da459u, 0xcf751e0au, 0x6dac97bbu, 0x0be4116cu, 0xaa1b8b1du, 0x485304ceu, 0xe68a7e7fu,
};

static const uint32_t bshim_169_tab6[96] = {
    0xb1a36a91u, 0x4fdae442u, 0xee125df3u, 0x8c49d7a4u, 0x2a815155u, 0xc8b8cb06u, 0x66f044b7u, 0x0527be68u,
    0xa35f3819u, 0x4196b1cau, 0xdfce2b7bu, 0x7e05a52cu, 0x1c3d1eddu, 0xba74988eu, 0x58ac123fu, 0xf6e38bf0u,
    0x951b05a1u, 0x33527f52u, 0xd189f903u, 0x6fc172b4u, 0x0df8ec65u, 0xac306616u, 0x4a67dfc7u, 0xe89f5978u,
    0x86d6d329u, 0x250e4cdau, 0xc345c68bu, 0x617d403cu, 0xffb4b9edu, 0x9dec339eu, 0x3c23ad4fu, 0xda5b2700u,
    0x7892a0b1u, 0x16ca1a62u, 0xb5019413u, 0x53390dc4u, 0xf1708775u, 0x8fa80126u, 0x2ddf7ad7u, 0xcc16f488u,
    0x6a4e6e39u, 0x0885e7eau, 0xa6bd619bu, 0x44f4db4cu, 0xe32c54fdu, 0x8163ceaeu, 0x1f9b485fu, 0xbdd2c210u,
    0x5c0a3bc1u, 0xfa41b572u, 0x98792f23u, 0x36b0a8d4u, 0xd4e82285u, 0x731f9c36u, 0x115715e7u, 0xaf8e8f98u,
    0x4dc60949u, 0xebfd82fau, 0x8a34fcabu, 0x286c765cu, 0xc6a3f00du, 0x64db69beu, 0x0312e36fu, 0xa14a5d20u,
    0x3f81d6d1u, 0xddb95082u, 0x7bf0ca33u, 0x1a2843e4u, 0xb85fbd95u, 0x56973746u, 0xf4ceb0f7u, 0x93062aa8u,
    0x313da459u, 0xcf751e0au, 0x6dac97bbu, 0x0be4116cu, 0xaa1b8b1du, 0x485304ceu, 0xe68a7e7fu, 0x84c1f830u,
    0x22f971e1u, 0xc130eb92u, 0x5f686543u, 0xfd9fdef4u, 0x9bd758a5u, 0x3a0ed256u, 0xd8464c07u, 0x767dc5b8u,
    0x14b53f69u, 0xb2ecb91au, 0x512432cbu, 0xef5bac7cu, 0x8d93262du, 0x2bca9fdeu, 0xca02198fu, 0x68399340u,
};

static const uint32_t bshim_169_tab7[96] = {
    0x33527f52u, 0xd189f903u, 0x6fc172b4u, 0x0df8ec65u, 0xac306616u, 0x4a67dfc7u, 0xe89f5978u, 0x86d6d329u,
    0x250e4cdau, 0xc345c68bu, 0x617d403cu, 0xffb4b9edu, 0x9dec339eu, 0x3c23ad4fu, 0xda5b2700u, 0x7892a0b1u,
    0x16ca1a62u, 0xb5019413u, 0x53390dc4u, 0xf1708775u, 0x8fa80126u, 0x2ddf7ad7u, 0xcc16f488u, 0x6a4e6e39u,
    0x0885e7eau, 0xa6bd619bu, 0x44f4db4cu, 0xe32c54fdu, 0x8163ceaeu, 0x1f9b485fu, 0xbdd2c210u, 0x5c0a3bc1u,
    0xfa41b572u, 0x98792f23u, 0x36b0a8d4u, 0xd4e82285u, 0x731f9c36u, 0x115715e7u, 0xaf8e8f98u, 0x4dc60949u,
    0xebfd82fau, 0x8a34fcabu, 0x286c765cu, 0xc6a3f00du, 0x64db69beu, 0x0312e36fu, 0xa14a5d20u, 0x3f81d6d1u,
    0xddb95082u, 0x7bf0ca33u, 0x1a2843e4u, 0xb85fbd95u, 0x56973746u, 0xf4ceb0f7u, 0x93062aa8u, 0x313da459u,
    0xcf751e0au, 0x6dac97bbu, 0x0be4116cu, 0xaa1b8b1du, 0x485304ceu, 0xe68a7e7fu, 0x84c1f830u, 0x22f971e1u,
    0xc130eb92u, 0x5f686543u, 0xfd9fdef4u, 0x9bd758a5u, 0x3a0ed256u, 0xd8464c07u, 0x767dc5b8u, 0x14b53f69u,
    0xb2ecb91au, 0x512432cbu, 0xef5bac7cu, 0x8d93262du, 0x2bca9fdeu, 0xca02198fu, 0x68399340u, 0x06710cf1u,
    0xa4a886a2u, 0x42e00053u, 0xe1177a04u, 0x7f4ef3b5u, 0x1d866d66u, 0xbbbde717u, 0x59f560c8u, 0xf82cda79u,
    0x9664542au, 0x349bcddbu, 0xd2d3478cu, 0x710ac13du, 0x0f423aeeu, 0xad79b49fu, 0x4bb12e50u, 0xe9e8a801u,
};

struct bshim_169_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_169_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_169_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_169_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_169_reset(struct bshim_169_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00146bc7u;
    return 0;
}

