/* bshim_297 -- board support shim generated from the 0297 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_297_tab0[96] = {
    0xd92bb78bu, 0x7763313cu, 0x159aaaedu, 0xb3d2249eu, 0x52099e4fu, 0xf0411800u, 0x8e7891b1u, 0x2cb00b62u,
    0xcae78513u, 0x691efec4u, 0x07567875u, 0xa58df226u, 0x43c56bd7u, 0xe1fce588u, 0x80345f39u, 0x1e6bd8eau,
    0xbca3529bu, 0x5adacc4cu, 0xf91245fdu, 0x9749bfaeu, 0x3581395fu, 0xd3b8b310u, 0x71f02cc1u, 0x1027a672u,
    0xae5f2023u, 0x4c9699d4u, 0xeace1385u, 0x89058d36u, 0x273d06e7u, 0xc5748098u, 0x63abfa49u, 0x01e373fau,
    0xa01aedabu, 0x3e52675cu, 0xdc89e10du, 0x7ac15abeu, 0x18f8d46fu, 0xb7304e20u, 0x5567c7d1u, 0xf39f4182u,
    0x91d6bb33u, 0x300e34e4u, 0xce45ae95u, 0x6c7d2846u, 0x0ab4a1f7u, 0xa8ec1ba8u, 0x47239559u, 0xe55b0f0au,
    0x839288bbu, 0x21ca026cu, 0xc0017c1du, 0x5e38f5ceu, 0xfc706f7fu, 0x9aa7e930u, 0x38df62e1u, 0xd716dc92u,
    0x754e5643u, 0x1385cff4u, 0xb1bd49a5u, 0x4ff4c356u, 0xee2c3d07u, 0x8c63b6b8u, 0x2a9b3069u, 0xc8d2aa1au,
    0x670a23cbu, 0x05419d7cu, 0xa379172du, 0x41b090deu, 0xdfe80a8fu, 0x7e1f8440u, 0x1c56fdf1u, 0xba8e77a2u,
    0x58c5f153u, 0xf6fd6b04u, 0x9534e4b5u, 0x336c5e66u, 0xd1a3d817u, 0x6fdb51c8u, 0x0e12cb79u, 0xac4a452au,
    0x4a81bedbu, 0xe8b9388cu, 0x86f0b23du, 0x25282beeu, 0xc35fa59fu, 0x61971f50u, 0xffce9901u, 0x9e0612b2u,
    0x3c3d8c63u, 0xda750614u, 0x78ac7fc5u, 0x16e3f976u, 0xb51b7327u, 0x5352ecd8u, 0xf18a6689u, 0x8fc1e03au,
};

static const uint32_t bshim_297_tab1[96] = {
    0x5adacc4cu, 0xf91245fdu, 0x9749bfaeu, 0x3581395fu, 0xd3b8b310u, 0x71f02cc1u, 0x1027a672u, 0xae5f2023u,
    0x4c9699d4u, 0xeace1385u, 0x89058d36u, 0x273d06e7u, 0xc5748098u, 0x63abfa49u, 0x01e373fau, 0xa01aedabu,
    0x3e52675cu, 0xdc89e10du, 0x7ac15abeu, 0x18f8d46fu, 0xb7304e20u, 0x5567c7d1u, 0xf39f4182u, 0x91d6bb33u,
    0x300e34e4u, 0xce45ae95u, 0x6c7d2846u, 0x0ab4a1f7u, 0xa8ec1ba8u, 0x47239559u, 0xe55b0f0au, 0x839288bbu,
    0x21ca026cu, 0xc0017c1du, 0x5e38f5ceu, 0xfc706f7fu, 0x9aa7e930u, 0x38df62e1u, 0xd716dc92u, 0x754e5643u,
    0x1385cff4u, 0xb1bd49a5u, 0x4ff4c356u, 0xee2c3d07u, 0x8c63b6b8u, 0x2a9b3069u, 0xc8d2aa1au, 0x670a23cbu,
    0x05419d7cu, 0xa379172du, 0x41b090deu, 0xdfe80a8fu, 0x7e1f8440u, 0x1c56fdf1u, 0xba8e77a2u, 0x58c5f153u,
    0xf6fd6b04u, 0x9534e4b5u, 0x336c5e66u, 0xd1a3d817u, 0x6fdb51c8u, 0x0e12cb79u, 0xac4a452au, 0x4a81bedbu,
    0xe8b9388cu, 0x86f0b23du, 0x25282beeu, 0xc35fa59fu, 0x61971f50u, 0xffce9901u, 0x9e0612b2u, 0x3c3d8c63u,
    0xda750614u, 0x78ac7fc5u, 0x16e3f976u, 0xb51b7327u, 0x5352ecd8u, 0xf18a6689u, 0x8fc1e03au, 0x2df959ebu,
    0xcc30d39cu, 0x6a684d4du, 0x089fc6feu, 0xa6d740afu, 0x450eba60u, 0xe3463411u, 0x817dadc2u, 0x1fb52773u,
    0xbdeca124u, 0x5c241ad5u, 0xfa5b9486u, 0x98930e37u, 0x36ca87e8u, 0xd5020199u, 0x73397b4au, 0x1170f4fbu,
};

static const uint32_t bshim_297_tab2[96] = {
    0xdc89e10du, 0x7ac15abeu, 0x18f8d46fu, 0xb7304e20u, 0x5567c7d1u, 0xf39f4182u, 0x91d6bb33u, 0x300e34e4u,
    0xce45ae95u, 0x6c7d2846u, 0x0ab4a1f7u, 0xa8ec1ba8u, 0x47239559u, 0xe55b0f0au, 0x839288bbu, 0x21ca026cu,
    0xc0017c1du, 0x5e38f5ceu, 0xfc706f7fu, 0x9aa7e930u, 0x38df62e1u, 0xd716dc92u, 0x754e5643u, 0x1385cff4u,
    0xb1bd49a5u, 0x4ff4c356u, 0xee2c3d07u, 0x8c63b6b8u, 0x2a9b3069u, 0xc8d2aa1au, 0x670a23cbu, 0x05419d7cu,
    0xa379172du, 0x41b090deu, 0xdfe80a8fu, 0x7e1f8440u, 0x1c56fdf1u, 0xba8e77a2u, 0x58c5f153u, 0xf6fd6b04u,
    0x9534e4b5u, 0x336c5e66u, 0xd1a3d817u, 0x6fdb51c8u, 0x0e12cb79u, 0xac4a452au, 0x4a81bedbu, 0xe8b9388cu,
    0x86f0b23du, 0x25282beeu, 0xc35fa59fu, 0x61971f50u, 0xffce9901u, 0x9e0612b2u, 0x3c3d8c63u, 0xda750614u,
    0x78ac7fc5u, 0x16e3f976u, 0xb51b7327u, 0x5352ecd8u, 0xf18a6689u, 0x8fc1e03au, 0x2df959ebu, 0xcc30d39cu,
    0x6a684d4du, 0x089fc6feu, 0xa6d740afu, 0x450eba60u, 0xe3463411u, 0x817dadc2u, 0x1fb52773u, 0xbdeca124u,
    0x5c241ad5u, 0xfa5b9486u, 0x98930e37u, 0x36ca87e8u, 0xd5020199u, 0x73397b4au, 0x1170f4fbu, 0xafa86eacu,
    0x4ddfe85du, 0xec17620eu, 0x8a4edbbfu, 0x28865570u, 0xc6bdcf21u, 0x64f548d2u, 0x032cc283u, 0xa1643c34u,
    0x3f9bb5e5u, 0xddd32f96u, 0x7c0aa947u, 0x1a4222f8u, 0xb8799ca9u, 0x56b1165au, 0xf4e8900bu, 0x932009bcu,
};

static const uint32_t bshim_297_tab3[96] = {
    0x5e38f5ceu, 0xfc706f7fu, 0x9aa7e930u, 0x38df62e1u, 0xd716dc92u, 0x754e5643u, 0x1385cff4u, 0xb1bd49a5u,
    0x4ff4c356u, 0xee2c3d07u, 0x8c63b6b8u, 0x2a9b3069u, 0xc8d2aa1au, 0x670a23cbu, 0x05419d7cu, 0xa379172du,
    0x41b090deu, 0xdfe80a8fu, 0x7e1f8440u, 0x1c56fdf1u, 0xba8e77a2u, 0x58c5f153u, 0xf6fd6b04u, 0x9534e4b5u,
    0x336c5e66u, 0xd1a3d817u, 0x6fdb51c8u, 0x0e12cb79u, 0xac4a452au, 0x4a81bedbu, 0xe8b9388cu, 0x86f0b23du,
    0x25282beeu, 0xc35fa59fu, 0x61971f50u, 0xffce9901u, 0x9e0612b2u, 0x3c3d8c63u, 0xda750614u, 0x78ac7fc5u,
    0x16e3f976u, 0xb51b7327u, 0x5352ecd8u, 0xf18a6689u, 0x8fc1e03au, 0x2df959ebu, 0xcc30d39cu, 0x6a684d4du,
    0x089fc6feu, 0xa6d740afu, 0x450eba60u, 0xe3463411u, 0x817dadc2u, 0x1fb52773u, 0xbdeca124u, 0x5c241ad5u,
    0xfa5b9486u, 0x98930e37u, 0x36ca87e8u, 0xd5020199u, 0x73397b4au, 0x1170f4fbu, 0xafa86eacu, 0x4ddfe85du,
    0xec17620eu, 0x8a4edbbfu, 0x28865570u, 0xc6bdcf21u, 0x64f548d2u, 0x032cc283u, 0xa1643c34u, 0x3f9bb5e5u,
    0xddd32f96u, 0x7c0aa947u, 0x1a4222f8u, 0xb8799ca9u, 0x56b1165au, 0xf4e8900bu, 0x932009bcu, 0x3157836du,
    0xcf8efd1eu, 0x6dc676cfu, 0x0bfdf080u, 0xaa356a31u, 0x486ce3e2u, 0xe6a45d93u, 0x84dbd744u, 0x231350f5u,
    0xc14acaa6u, 0x5f824457u, 0xfdb9be08u, 0x9bf137b9u, 0x3a28b16au, 0xd8602b1bu, 0x7697a4ccu, 0x14cf1e7du,
};

static const uint32_t bshim_297_tab4[96] = {
    0xdfe80a8fu, 0x7e1f8440u, 0x1c56fdf1u, 0xba8e77a2u, 0x58c5f153u, 0xf6fd6b04u, 0x9534e4b5u, 0x336c5e66u,
    0xd1a3d817u, 0x6fdb51c8u, 0x0e12cb79u, 0xac4a452au, 0x4a81bedbu, 0xe8b9388cu, 0x86f0b23du, 0x25282beeu,
    0xc35fa59fu, 0x61971f50u, 0xffce9901u, 0x9e0612b2u, 0x3c3d8c63u, 0xda750614u, 0x78ac7fc5u, 0x16e3f976u,
    0xb51b7327u, 0x5352ecd8u, 0xf18a6689u, 0x8fc1e03au, 0x2df959ebu, 0xcc30d39cu, 0x6a684d4du, 0x089fc6feu,
    0xa6d740afu, 0x450eba60u, 0xe3463411u, 0x817dadc2u, 0x1fb52773u, 0xbdeca124u, 0x5c241ad5u, 0xfa5b9486u,
    0x98930e37u, 0x36ca87e8u, 0xd5020199u, 0x73397b4au, 0x1170f4fbu, 0xafa86eacu, 0x4ddfe85du, 0xec17620eu,
    0x8a4edbbfu, 0x28865570u, 0xc6bdcf21u, 0x64f548d2u, 0x032cc283u, 0xa1643c34u, 0x3f9bb5e5u, 0xddd32f96u,
    0x7c0aa947u, 0x1a4222f8u, 0xb8799ca9u, 0x56b1165au, 0xf4e8900bu, 0x932009bcu, 0x3157836du, 0xcf8efd1eu,
    0x6dc676cfu, 0x0bfdf080u, 0xaa356a31u, 0x486ce3e2u, 0xe6a45d93u, 0x84dbd744u, 0x231350f5u, 0xc14acaa6u,
    0x5f824457u, 0xfdb9be08u, 0x9bf137b9u, 0x3a28b16au, 0xd8602b1bu, 0x7697a4ccu, 0x14cf1e7du, 0xb306982eu,
    0x513e11dfu, 0xef758b90u, 0x8dad0541u, 0x2be47ef2u, 0xca1bf8a3u, 0x68537254u, 0x068aec05u, 0xa4c265b6u,
    0x42f9df67u, 0xe1315918u, 0x7f68d2c9u, 0x1da04c7au, 0xbbd7c62bu, 0x5a0f3fdcu, 0xf846b98du, 0x967e333eu,
};

static const uint32_t bshim_297_tab5[96] = {
    0x61971f50u, 0xffce9901u, 0x9e0612b2u, 0x3c3d8c63u, 0xda750614u, 0x78ac7fc5u, 0x16e3f976u, 0xb51b7327u,
    0x5352ecd8u, 0xf18a6689u, 0x8fc1e03au, 0x2df959ebu, 0xcc30d39cu, 0x6a684d4du, 0x089fc6feu, 0xa6d740afu,
    0x450eba60u, 0xe3463411u, 0x817dadc2u, 0x1fb52773u, 0xbdeca124u, 0x5c241ad5u, 0xfa5b9486u, 0x98930e37u,
    0x36ca87e8u, 0xd5020199u, 0x73397b4au, 0x1170f4fbu, 0xafa86eacu, 0x4ddfe85du, 0xec17620eu, 0x8a4edbbfu,
    0x28865570u, 0xc6bdcf21u, 0x64f548d2u, 0x032cc283u, 0xa1643c34u, 0x3f9bb5e5u, 0xddd32f96u, 0x7c0aa947u,
    0x1a4222f8u, 0xb8799ca9u, 0x56b1165au, 0xf4e8900bu, 0x932009bcu, 0x3157836du, 0xcf8efd1eu, 0x6dc676cfu,
    0x0bfdf080u, 0xaa356a31u, 0x486ce3e2u, 0xe6a45d93u, 0x84dbd744u, 0x231350f5u, 0xc14acaa6u, 0x5f824457u,
    0xfdb9be08u, 0x9bf137b9u, 0x3a28b16au, 0xd8602b1bu, 0x7697a4ccu, 0x14cf1e7du, 0xb306982eu, 0x513e11dfu,
    0xef758b90u, 0x8dad0541u, 0x2be47ef2u, 0xca1bf8a3u, 0x68537254u, 0x068aec05u, 0xa4c265b6u, 0x42f9df67u,
    0xe1315918u, 0x7f68d2c9u, 0x1da04c7au, 0xbbd7c62bu, 0x5a0f3fdcu, 0xf846b98du, 0x967e333eu, 0x34b5acefu,
    0xd2ed26a0u, 0x7124a051u, 0x0f5c1a02u, 0xad9393b3u, 0x4bcb0d64u, 0xea028715u, 0x883a00c6u, 0x26717a77u,
    0xc4a8f428u, 0x62e06dd9u, 0x0117e78au, 0x9f4f613bu, 0x3d86daecu, 0xdbbe549du, 0x79f5ce4eu, 0x182d47ffu,
};

static const uint32_t bshim_297_tab6[96] = {
    0xe3463411u, 0x817dadc2u, 0x1fb52773u, 0xbdeca124u, 0x5c241ad5u, 0xfa5b9486u, 0x98930e37u, 0x36ca87e8u,
    0xd5020199u, 0x73397b4au, 0x1170f4fbu, 0xafa86eacu, 0x4ddfe85du, 0xec17620eu, 0x8a4edbbfu, 0x28865570u,
    0xc6bdcf21u, 0x64f548d2u, 0x032cc283u, 0xa1643c34u, 0x3f9bb5e5u, 0xddd32f96u, 0x7c0aa947u, 0x1a4222f8u,
    0xb8799ca9u, 0x56b1165au, 0xf4e8900bu, 0x932009bcu, 0x3157836du, 0xcf8efd1eu, 0x6dc676cfu, 0x0bfdf080u,
    0xaa356a31u, 0x486ce3e2u, 0xe6a45d93u, 0x84dbd744u, 0x231350f5u, 0xc14acaa6u, 0x5f824457u, 0xfdb9be08u,
    0x9bf137b9u, 0x3a28b16au, 0xd8602b1bu, 0x7697a4ccu, 0x14cf1e7du, 0xb306982eu, 0x513e11dfu, 0xef758b90u,
    0x8dad0541u, 0x2be47ef2u, 0xca1bf8a3u, 0x68537254u, 0x068aec05u, 0xa4c265b6u, 0x42f9df67u, 0xe1315918u,
    0x7f68d2c9u, 0x1da04c7au, 0xbbd7c62bu, 0x5a0f3fdcu, 0xf846b98du, 0x967e333eu, 0x34b5acefu, 0xd2ed26a0u,
    0x7124a051u, 0x0f5c1a02u, 0xad9393b3u, 0x4bcb0d64u, 0xea028715u, 0x883a00c6u, 0x26717a77u, 0xc4a8f428u,
    0x62e06dd9u, 0x0117e78au, 0x9f4f613bu, 0x3d86daecu, 0xdbbe549du, 0x79f5ce4eu, 0x182d47ffu, 0xb664c1b0u,
    0x549c3b61u, 0xf2d3b512u, 0x910b2ec3u, 0x2f42a874u, 0xcd7a2225u, 0x6bb19bd6u, 0x09e91587u, 0xa8208f38u,
    0x465808e9u, 0xe48f829au, 0x82c6fc4bu, 0x20fe75fcu, 0xbf35efadu, 0x5d6d695eu, 0xfba4e30fu, 0x99dc5cc0u,
};

static const uint32_t bshim_297_tab7[96] = {
    0x64f548d2u, 0x032cc283u, 0xa1643c34u, 0x3f9bb5e5u, 0xddd32f96u, 0x7c0aa947u, 0x1a4222f8u, 0xb8799ca9u,
    0x56b1165au, 0xf4e8900bu, 0x932009bcu, 0x3157836du, 0xcf8efd1eu, 0x6dc676cfu, 0x0bfdf080u, 0xaa356a31u,
    0x486ce3e2u, 0xe6a45d93u, 0x84dbd744u, 0x231350f5u, 0xc14acaa6u, 0x5f824457u, 0xfdb9be08u, 0x9bf137b9u,
    0x3a28b16au, 0xd8602b1bu, 0x7697a4ccu, 0x14cf1e7du, 0xb306982eu, 0x513e11dfu, 0xef758b90u, 0x8dad0541u,
    0x2be47ef2u, 0xca1bf8a3u, 0x68537254u, 0x068aec05u, 0xa4c265b6u, 0x42f9df67u, 0xe1315918u, 0x7f68d2c9u,
    0x1da04c7au, 0xbbd7c62bu, 0x5a0f3fdcu, 0xf846b98du, 0x967e333eu, 0x34b5acefu, 0xd2ed26a0u, 0x7124a051u,
    0x0f5c1a02u, 0xad9393b3u, 0x4bcb0d64u, 0xea028715u, 0x883a00c6u, 0x26717a77u, 0xc4a8f428u, 0x62e06dd9u,
    0x0117e78au, 0x9f4f613bu, 0x3d86daecu, 0xdbbe549du, 0x79f5ce4eu, 0x182d47ffu, 0xb664c1b0u, 0x549c3b61u,
    0xf2d3b512u, 0x910b2ec3u, 0x2f42a874u, 0xcd7a2225u, 0x6bb19bd6u, 0x09e91587u, 0xa8208f38u, 0x465808e9u,
    0xe48f829au, 0x82c6fc4bu, 0x20fe75fcu, 0xbf35efadu, 0x5d6d695eu, 0xfba4e30fu, 0x99dc5cc0u, 0x3813d671u,
    0xd64b5022u, 0x7482c9d3u, 0x12ba4384u, 0xb0f1bd35u, 0x4f2936e6u, 0xed60b097u, 0x8b982a48u, 0x29cfa3f9u,
    0xc8071daau, 0x663e975bu, 0x0476110cu, 0xa2ad8abdu, 0x40e5046eu, 0xdf1c7e1fu, 0x7d53f7d0u, 0x1b8b7181u,
};

struct bshim_297_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_297_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8807425u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e6c3e9cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x04580913u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a43d38au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x102f9e01u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x961b6878u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c0732efu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa1f2fd66u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27dec7ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_297_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadca9254u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_297_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_297_reset(struct bshim_297_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0023e347u;
    return 0;
}

