/* bshim_170 -- board support shim generated from the 0170 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_170_tab0[96] = {
    0x9dec339eu, 0x3c23ad4fu, 0xda5b2700u, 0x7892a0b1u, 0x16ca1a62u, 0xb5019413u, 0x53390dc4u, 0xf1708775u,
    0x8fa80126u, 0x2ddf7ad7u, 0xcc16f488u, 0x6a4e6e39u, 0x0885e7eau, 0xa6bd619bu, 0x44f4db4cu, 0xe32c54fdu,
    0x8163ceaeu, 0x1f9b485fu, 0xbdd2c210u, 0x5c0a3bc1u, 0xfa41b572u, 0x98792f23u, 0x36b0a8d4u, 0xd4e82285u,
    0x731f9c36u, 0x115715e7u, 0xaf8e8f98u, 0x4dc60949u, 0xebfd82fau, 0x8a34fcabu, 0x286c765cu, 0xc6a3f00du,
    0x64db69beu, 0x0312e36fu, 0xa14a5d20u, 0x3f81d6d1u, 0xddb95082u, 0x7bf0ca33u, 0x1a2843e4u, 0xb85fbd95u,
    0x56973746u, 0xf4ceb0f7u, 0x93062aa8u, 0x313da459u, 0xcf751e0au, 0x6dac97bbu, 0x0be4116cu, 0xaa1b8b1du,
    0x485304ceu, 0xe68a7e7fu, 0x84c1f830u, 0x22f971e1u, 0xc130eb92u, 0x5f686543u, 0xfd9fdef4u, 0x9bd758a5u,
    0x3a0ed256u, 0xd8464c07u, 0x767dc5b8u, 0x14b53f69u, 0xb2ecb91au, 0x512432cbu, 0xef5bac7cu, 0x8d93262du,
    0x2bca9fdeu, 0xca02198fu, 0x68399340u, 0x06710cf1u, 0xa4a886a2u, 0x42e00053u, 0xe1177a04u, 0x7f4ef3b5u,
    0x1d866d66u, 0xbbbde717u, 0x59f560c8u, 0xf82cda79u, 0x9664542au, 0x349bcddbu, 0xd2d3478cu, 0x710ac13du,
    0x0f423aeeu, 0xad79b49fu, 0x4bb12e50u, 0xe9e8a801u, 0x882021b2u, 0x26579b63u, 0xc48f1514u, 0x62c68ec5u,
    0x00fe0876u, 0x9f358227u, 0x3d6cfbd8u, 0xdba47589u, 0x79dbef3au, 0x181368ebu, 0xb64ae29cu, 0x54825c4du,
};

static const uint32_t bshim_170_tab1[96] = {
    0x1f9b485fu, 0xbdd2c210u, 0x5c0a3bc1u, 0xfa41b572u, 0x98792f23u, 0x36b0a8d4u, 0xd4e82285u, 0x731f9c36u,
    0x115715e7u, 0xaf8e8f98u, 0x4dc60949u, 0xebfd82fau, 0x8a34fcabu, 0x286c765cu, 0xc6a3f00du, 0x64db69beu,
    0x0312e36fu, 0xa14a5d20u, 0x3f81d6d1u, 0xddb95082u, 0x7bf0ca33u, 0x1a2843e4u, 0xb85fbd95u, 0x56973746u,
    0xf4ceb0f7u, 0x93062aa8u, 0x313da459u, 0xcf751e0au, 0x6dac97bbu, 0x0be4116cu, 0xaa1b8b1du, 0x485304ceu,
    0xe68a7e7fu, 0x84c1f830u, 0x22f971e1u, 0xc130eb92u, 0x5f686543u, 0xfd9fdef4u, 0x9bd758a5u, 0x3a0ed256u,
    0xd8464c07u, 0x767dc5b8u, 0x14b53f69u, 0xb2ecb91au, 0x512432cbu, 0xef5bac7cu, 0x8d93262du, 0x2bca9fdeu,
    0xca02198fu, 0x68399340u, 0x06710cf1u, 0xa4a886a2u, 0x42e00053u, 0xe1177a04u, 0x7f4ef3b5u, 0x1d866d66u,
    0xbbbde717u, 0x59f560c8u, 0xf82cda79u, 0x9664542au, 0x349bcddbu, 0xd2d3478cu, 0x710ac13du, 0x0f423aeeu,
    0xad79b49fu, 0x4bb12e50u, 0xe9e8a801u, 0x882021b2u, 0x26579b63u, 0xc48f1514u, 0x62c68ec5u, 0x00fe0876u,
    0x9f358227u, 0x3d6cfbd8u, 0xdba47589u, 0x79dbef3au, 0x181368ebu, 0xb64ae29cu, 0x54825c4du, 0xf2b9d5feu,
    0x90f14fafu, 0x2f28c960u, 0xcd604311u, 0x6b97bcc2u, 0x09cf3673u, 0xa806b024u, 0x463e29d5u, 0xe475a386u,
    0x82ad1d37u, 0x20e496e8u, 0xbf1c1099u, 0x5d538a4au, 0xfb8b03fbu, 0x99c27dacu, 0x37f9f75du, 0xd631710eu,
};

static const uint32_t bshim_170_tab2[96] = {
    0xa14a5d20u, 0x3f81d6d1u, 0xddb95082u, 0x7bf0ca33u, 0x1a2843e4u, 0xb85fbd95u, 0x56973746u, 0xf4ceb0f7u,
    0x93062aa8u, 0x313da459u, 0xcf751e0au, 0x6dac97bbu, 0x0be4116cu, 0xaa1b8b1du, 0x485304ceu, 0xe68a7e7fu,
    0x84c1f830u, 0x22f971e1u, 0xc130eb92u, 0x5f686543u, 0xfd9fdef4u, 0x9bd758a5u, 0x3a0ed256u, 0xd8464c07u,
    0x767dc5b8u, 0x14b53f69u, 0xb2ecb91au, 0x512432cbu, 0xef5bac7cu, 0x8d93262du, 0x2bca9fdeu, 0xca02198fu,
    0x68399340u, 0x06710cf1u, 0xa4a886a2u, 0x42e00053u, 0xe1177a04u, 0x7f4ef3b5u, 0x1d866d66u, 0xbbbde717u,
    0x59f560c8u, 0xf82cda79u, 0x9664542au, 0x349bcddbu, 0xd2d3478cu, 0x710ac13du, 0x0f423aeeu, 0xad79b49fu,
    0x4bb12e50u, 0xe9e8a801u, 0x882021b2u, 0x26579b63u, 0xc48f1514u, 0x62c68ec5u, 0x00fe0876u, 0x9f358227u,
    0x3d6cfbd8u, 0xdba47589u, 0x79dbef3au, 0x181368ebu, 0xb64ae29cu, 0x54825c4du, 0xf2b9d5feu, 0x90f14fafu,
    0x2f28c960u, 0xcd604311u, 0x6b97bcc2u, 0x09cf3673u, 0xa806b024u, 0x463e29d5u, 0xe475a386u, 0x82ad1d37u,
    0x20e496e8u, 0xbf1c1099u, 0x5d538a4au, 0xfb8b03fbu, 0x99c27dacu, 0x37f9f75du, 0xd631710eu, 0x7468eabfu,
    0x12a06470u, 0xb0d7de21u, 0x4f0f57d2u, 0xed46d183u, 0x8b7e4b34u, 0x29b5c4e5u, 0xc7ed3e96u, 0x6624b847u,
    0x045c31f8u, 0xa293aba9u, 0x40cb255au, 0xdf029f0bu, 0x7d3a18bcu, 0x1b71926du, 0xb9a90c1eu, 0x57e085cfu,
};

static const uint32_t bshim_170_tab3[96] = {
    0x22f971e1u, 0xc130eb92u, 0x5f686543u, 0xfd9fdef4u, 0x9bd758a5u, 0x3a0ed256u, 0xd8464c07u, 0x767dc5b8u,
    0x14b53f69u, 0xb2ecb91au, 0x512432cbu, 0xef5bac7cu, 0x8d93262du, 0x2bca9fdeu, 0xca02198fu, 0x68399340u,
    0x06710cf1u, 0xa4a886a2u, 0x42e00053u, 0xe1177a04u, 0x7f4ef3b5u, 0x1d866d66u, 0xbbbde717u, 0x59f560c8u,
    0xf82cda79u, 0x9664542au, 0x349bcddbu, 0xd2d3478cu, 0x710ac13du, 0x0f423aeeu, 0xad79b49fu, 0x4bb12e50u,
    0xe9e8a801u, 0x882021b2u, 0x26579b63u, 0xc48f1514u, 0x62c68ec5u, 0x00fe0876u, 0x9f358227u, 0x3d6cfbd8u,
    0xdba47589u, 0x79dbef3au, 0x181368ebu, 0xb64ae29cu, 0x54825c4du, 0xf2b9d5feu, 0x90f14fafu, 0x2f28c960u,
    0xcd604311u, 0x6b97bcc2u, 0x09cf3673u, 0xa806b024u, 0x463e29d5u, 0xe475a386u, 0x82ad1d37u, 0x20e496e8u,
    0xbf1c1099u, 0x5d538a4au, 0xfb8b03fbu, 0x99c27dacu, 0x37f9f75du, 0xd631710eu, 0x7468eabfu, 0x12a06470u,
    0xb0d7de21u, 0x4f0f57d2u, 0xed46d183u, 0x8b7e4b34u, 0x29b5c4e5u, 0xc7ed3e96u, 0x6624b847u, 0x045c31f8u,
    0xa293aba9u, 0x40cb255au, 0xdf029f0bu, 0x7d3a18bcu, 0x1b71926du, 0xb9a90c1eu, 0x57e085cfu, 0xf617ff80u,
    0x944f7931u, 0x3286f2e2u, 0xd0be6c93u, 0x6ef5e644u, 0x0d2d5ff5u, 0xab64d9a6u, 0x499c5357u, 0xe7d3cd08u,
    0x860b46b9u, 0x2442c06au, 0xc27a3a1bu, 0x60b1b3ccu, 0xfee92d7du, 0x9d20a72eu, 0x3b5820dfu, 0xd98f9a90u,
};

static const uint32_t bshim_170_tab4[96] = {
    0xa4a886a2u, 0x42e00053u, 0xe1177a04u, 0x7f4ef3b5u, 0x1d866d66u, 0xbbbde717u, 0x59f560c8u, 0xf82cda79u,
    0x9664542au, 0x349bcddbu, 0xd2d3478cu, 0x710ac13du, 0x0f423aeeu, 0xad79b49fu, 0x4bb12e50u, 0xe9e8a801u,
    0x882021b2u, 0x26579b63u, 0xc48f1514u, 0x62c68ec5u, 0x00fe0876u, 0x9f358227u, 0x3d6cfbd8u, 0xdba47589u,
    0x79dbef3au, 0x181368ebu, 0xb64ae29cu, 0x54825c4du, 0xf2b9d5feu, 0x90f14fafu, 0x2f28c960u, 0xcd604311u,
    0x6b97bcc2u, 0x09cf3673u, 0xa806b024u, 0x463e29d5u, 0xe475a386u, 0x82ad1d37u, 0x20e496e8u, 0xbf1c1099u,
    0x5d538a4au, 0xfb8b03fbu, 0x99c27dacu, 0x37f9f75du, 0xd631710eu, 0x7468eabfu, 0x12a06470u, 0xb0d7de21u,
    0x4f0f57d2u, 0xed46d183u, 0x8b7e4b34u, 0x29b5c4e5u, 0xc7ed3e96u, 0x6624b847u, 0x045c31f8u, 0xa293aba9u,
    0x40cb255au, 0xdf029f0bu, 0x7d3a18bcu, 0x1b71926du, 0xb9a90c1eu, 0x57e085cfu, 0xf617ff80u, 0x944f7931u,
    0x3286f2e2u, 0xd0be6c93u, 0x6ef5e644u, 0x0d2d5ff5u, 0xab64d9a6u, 0x499c5357u, 0xe7d3cd08u, 0x860b46b9u,
    0x2442c06au, 0xc27a3a1bu, 0x60b1b3ccu, 0xfee92d7du, 0x9d20a72eu, 0x3b5820dfu, 0xd98f9a90u, 0x77c71441u,
    0x15fe8df2u, 0xb43607a3u, 0x526d8154u, 0xf0a4fb05u, 0x8edc74b6u, 0x2d13ee67u, 0xcb4b6818u, 0x6982e1c9u,
    0x07ba5b7au, 0xa5f1d52bu, 0x44294edcu, 0xe260c88du, 0x8098423eu, 0x1ecfbbefu, 0xbd0735a0u, 0x5b3eaf51u,
};

static const uint32_t bshim_170_tab5[96] = {
    0x26579b63u, 0xc48f1514u, 0x62c68ec5u, 0x00fe0876u, 0x9f358227u, 0x3d6cfbd8u, 0xdba47589u, 0x79dbef3au,
    0x181368ebu, 0xb64ae29cu, 0x54825c4du, 0xf2b9d5feu, 0x90f14fafu, 0x2f28c960u, 0xcd604311u, 0x6b97bcc2u,
    0x09cf3673u, 0xa806b024u, 0x463e29d5u, 0xe475a386u, 0x82ad1d37u, 0x20e496e8u, 0xbf1c1099u, 0x5d538a4au,
    0xfb8b03fbu, 0x99c27dacu, 0x37f9f75du, 0xd631710eu, 0x7468eabfu, 0x12a06470u, 0xb0d7de21u, 0x4f0f57d2u,
    0xed46d183u, 0x8b7e4b34u, 0x29b5c4e5u, 0xc7ed3e96u, 0x6624b847u, 0x045c31f8u, 0xa293aba9u, 0x40cb255au,
    0xdf029f0bu, 0x7d3a18bcu, 0x1b71926du, 0xb9a90c1eu, 0x57e085cfu, 0xf617ff80u, 0x944f7931u, 0x3286f2e2u,
    0xd0be6c93u, 0x6ef5e644u, 0x0d2d5ff5u, 0xab64d9a6u, 0x499c5357u, 0xe7d3cd08u, 0x860b46b9u, 0x2442c06au,
    0xc27a3a1bu, 0x60b1b3ccu, 0xfee92d7du, 0x9d20a72eu, 0x3b5820dfu, 0xd98f9a90u, 0x77c71441u, 0x15fe8df2u,
    0xb43607a3u, 0x526d8154u, 0xf0a4fb05u, 0x8edc74b6u, 0x2d13ee67u, 0xcb4b6818u, 0x6982e1c9u, 0x07ba5b7au,
    0xa5f1d52bu, 0x44294edcu, 0xe260c88du, 0x8098423eu, 0x1ecfbbefu, 0xbd0735a0u, 0x5b3eaf51u, 0xf9762902u,
    0x97ada2b3u, 0x35e51c64u, 0xd41c9615u, 0x72540fc6u, 0x108b8977u, 0xaec30328u, 0x4cfa7cd9u, 0xeb31f68au,
    0x8969703bu, 0x27a0e9ecu, 0xc5d8639du, 0x640fdd4eu, 0x024756ffu, 0xa07ed0b0u, 0x3eb64a61u, 0xdcedc412u,
};

static const uint32_t bshim_170_tab6[96] = {
    0xa806b024u, 0x463e29d5u, 0xe475a386u, 0x82ad1d37u, 0x20e496e8u, 0xbf1c1099u, 0x5d538a4au, 0xfb8b03fbu,
    0x99c27dacu, 0x37f9f75du, 0xd631710eu, 0x7468eabfu, 0x12a06470u, 0xb0d7de21u, 0x4f0f57d2u, 0xed46d183u,
    0x8b7e4b34u, 0x29b5c4e5u, 0xc7ed3e96u, 0x6624b847u, 0x045c31f8u, 0xa293aba9u, 0x40cb255au, 0xdf029f0bu,
    0x7d3a18bcu, 0x1b71926du, 0xb9a90c1eu, 0x57e085cfu, 0xf617ff80u, 0x944f7931u, 0x3286f2e2u, 0xd0be6c93u,
    0x6ef5e644u, 0x0d2d5ff5u, 0xab64d9a6u, 0x499c5357u, 0xe7d3cd08u, 0x860b46b9u, 0x2442c06au, 0xc27a3a1bu,
    0x60b1b3ccu, 0xfee92d7du, 0x9d20a72eu, 0x3b5820dfu, 0xd98f9a90u, 0x77c71441u, 0x15fe8df2u, 0xb43607a3u,
    0x526d8154u, 0xf0a4fb05u, 0x8edc74b6u, 0x2d13ee67u, 0xcb4b6818u, 0x6982e1c9u, 0x07ba5b7au, 0xa5f1d52bu,
    0x44294edcu, 0xe260c88du, 0x8098423eu, 0x1ecfbbefu, 0xbd0735a0u, 0x5b3eaf51u, 0xf9762902u, 0x97ada2b3u,
    0x35e51c64u, 0xd41c9615u, 0x72540fc6u, 0x108b8977u, 0xaec30328u, 0x4cfa7cd9u, 0xeb31f68au, 0x8969703bu,
    0x27a0e9ecu, 0xc5d8639du, 0x640fdd4eu, 0x024756ffu, 0xa07ed0b0u, 0x3eb64a61u, 0xdcedc412u, 0x7b253dc3u,
    0x195cb774u, 0xb7943125u, 0x55cbaad6u, 0xf4032487u, 0x923a9e38u, 0x307217e9u, 0xcea9919au, 0x6ce10b4bu,
    0x0b1884fcu, 0xa94ffeadu, 0x4787785eu, 0xe5bef20fu, 0x83f66bc0u, 0x222de571u, 0xc0655f22u, 0x5e9cd8d3u,
};

static const uint32_t bshim_170_tab7[96] = {
    0x29b5c4e5u, 0xc7ed3e96u, 0x6624b847u, 0x045c31f8u, 0xa293aba9u, 0x40cb255au, 0xdf029f0bu, 0x7d3a18bcu,
    0x1b71926du, 0xb9a90c1eu, 0x57e085cfu, 0xf617ff80u, 0x944f7931u, 0x3286f2e2u, 0xd0be6c93u, 0x6ef5e644u,
    0x0d2d5ff5u, 0xab64d9a6u, 0x499c5357u, 0xe7d3cd08u, 0x860b46b9u, 0x2442c06au, 0xc27a3a1bu, 0x60b1b3ccu,
    0xfee92d7du, 0x9d20a72eu, 0x3b5820dfu, 0xd98f9a90u, 0x77c71441u, 0x15fe8df2u, 0xb43607a3u, 0x526d8154u,
    0xf0a4fb05u, 0x8edc74b6u, 0x2d13ee67u, 0xcb4b6818u, 0x6982e1c9u, 0x07ba5b7au, 0xa5f1d52bu, 0x44294edcu,
    0xe260c88du, 0x8098423eu, 0x1ecfbbefu, 0xbd0735a0u, 0x5b3eaf51u, 0xf9762902u, 0x97ada2b3u, 0x35e51c64u,
    0xd41c9615u, 0x72540fc6u, 0x108b8977u, 0xaec30328u, 0x4cfa7cd9u, 0xeb31f68au, 0x8969703bu, 0x27a0e9ecu,
    0xc5d8639du, 0x640fdd4eu, 0x024756ffu, 0xa07ed0b0u, 0x3eb64a61u, 0xdcedc412u, 0x7b253dc3u, 0x195cb774u,
    0xb7943125u, 0x55cbaad6u, 0xf4032487u, 0x923a9e38u, 0x307217e9u, 0xcea9919au, 0x6ce10b4bu, 0x0b1884fcu,
    0xa94ffeadu, 0x4787785eu, 0xe5bef20fu, 0x83f66bc0u, 0x222de571u, 0xc0655f22u, 0x5e9cd8d3u, 0xfcd45284u,
    0x9b0bcc35u, 0x394345e6u, 0xd77abf97u, 0x75b23948u, 0x13e9b2f9u, 0xb2212caau, 0x5058a65bu, 0xee90200cu,
    0x8cc799bdu, 0x2aff136eu, 0xc9368d1fu, 0x676e06d0u, 0x05a58081u, 0xa3dcfa32u, 0x421473e3u, 0xe04bed94u,
};

struct bshim_170_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_170_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_170_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_170_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_170_reset(struct bshim_170_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00148ab6u;
    return 0;
}

