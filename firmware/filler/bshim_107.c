/* bshim_107 -- board support shim generated from the 0107 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_107_tab0[96] = {
    0xfb7e1471u, 0x99b58e22u, 0x37ed07d3u, 0xd6248184u, 0x745bfb35u, 0x129374e6u, 0xb0caee97u, 0x4f026848u,
    0xed39e1f9u, 0x8b715baau, 0x29a8d55bu, 0xc7e04f0cu, 0x6617c8bdu, 0x044f426eu, 0xa286bc1fu, 0x40be35d0u,
    0xdef5af81u, 0x7d2d2932u, 0x1b64a2e3u, 0xb99c1c94u, 0x57d39645u, 0xf60b0ff6u, 0x944289a7u, 0x327a0358u,
    0xd0b17d09u, 0x6ee8f6bau, 0x0d20706bu, 0xab57ea1cu, 0x498f63cdu, 0xe7c6dd7eu, 0x85fe572fu, 0x2435d0e0u,
    0xc26d4a91u, 0x60a4c442u, 0xfedc3df3u, 0x9d13b7a4u, 0x3b4b3155u, 0xd982ab06u, 0x77ba24b7u, 0x15f19e68u,
    0xb4291819u, 0x526091cau, 0xf0980b7bu, 0x8ecf852cu, 0x2d06feddu, 0xcb3e788eu, 0x6975f23fu, 0x07ad6bf0u,
    0xa5e4e5a1u, 0x441c5f52u, 0xe253d903u, 0x808b52b4u, 0x1ec2cc65u, 0xbcfa4616u, 0x5b31bfc7u, 0xf9693978u,
    0x97a0b329u, 0x35d82cdau, 0xd40fa68bu, 0x7247203cu, 0x107e99edu, 0xaeb6139eu, 0x4ced8d4fu, 0xeb250700u,
    0x895c80b1u, 0x2793fa62u, 0xc5cb7413u, 0x6402edc4u, 0x023a6775u, 0xa071e126u, 0x3ea95ad7u, 0xdce0d488u,
    0x7b184e39u, 0x194fc7eau, 0xb787419bu, 0x55bebb4cu, 0xf3f634fdu, 0x922daeaeu, 0x3065285fu, 0xce9ca210u,
    0x6cd41bc1u, 0x0b0b9572u, 0xa9430f23u, 0x477a88d4u, 0xe5b20285u, 0x83e97c36u, 0x2220f5e7u, 0xc0586f98u,
    0x5e8fe949u, 0xfcc762fau, 0x9afedcabu, 0x3936565cu, 0xd76dd00du, 0x75a549beu, 0x13dcc36fu, 0xb2143d20u,
};

static const uint32_t bshim_107_tab1[96] = {
    0x7d2d2932u, 0x1b64a2e3u, 0xb99c1c94u, 0x57d39645u, 0xf60b0ff6u, 0x944289a7u, 0x327a0358u, 0xd0b17d09u,
    0x6ee8f6bau, 0x0d20706bu, 0xab57ea1cu, 0x498f63cdu, 0xe7c6dd7eu, 0x85fe572fu, 0x2435d0e0u, 0xc26d4a91u,
    0x60a4c442u, 0xfedc3df3u, 0x9d13b7a4u, 0x3b4b3155u, 0xd982ab06u, 0x77ba24b7u, 0x15f19e68u, 0xb4291819u,
    0x526091cau, 0xf0980b7bu, 0x8ecf852cu, 0x2d06feddu, 0xcb3e788eu, 0x6975f23fu, 0x07ad6bf0u, 0xa5e4e5a1u,
    0x441c5f52u, 0xe253d903u, 0x808b52b4u, 0x1ec2cc65u, 0xbcfa4616u, 0x5b31bfc7u, 0xf9693978u, 0x97a0b329u,
    0x35d82cdau, 0xd40fa68bu, 0x7247203cu, 0x107e99edu, 0xaeb6139eu, 0x4ced8d4fu, 0xeb250700u, 0x895c80b1u,
    0x2793fa62u, 0xc5cb7413u, 0x6402edc4u, 0x023a6775u, 0xa071e126u, 0x3ea95ad7u, 0xdce0d488u, 0x7b184e39u,
    0x194fc7eau, 0xb787419bu, 0x55bebb4cu, 0xf3f634fdu, 0x922daeaeu, 0x3065285fu, 0xce9ca210u, 0x6cd41bc1u,
    0x0b0b9572u, 0xa9430f23u, 0x477a88d4u, 0xe5b20285u, 0x83e97c36u, 0x2220f5e7u, 0xc0586f98u, 0x5e8fe949u,
    0xfcc762fau, 0x9afedcabu, 0x3936565cu, 0xd76dd00du, 0x75a549beu, 0x13dcc36fu, 0xb2143d20u, 0x504bb6d1u,
    0xee833082u, 0x8cbaaa33u, 0x2af223e4u, 0xc9299d95u, 0x67611746u, 0x059890f7u, 0xa3d00aa8u, 0x42078459u,
    0xe03efe0au, 0x7e7677bbu, 0x1cadf16cu, 0xbae56b1du, 0x591ce4ceu, 0xf7545e7fu, 0x958bd830u, 0x33c351e1u,
};

static const uint32_t bshim_107_tab2[96] = {
    0xfedc3df3u, 0x9d13b7a4u, 0x3b4b3155u, 0xd982ab06u, 0x77ba24b7u, 0x15f19e68u, 0xb4291819u, 0x526091cau,
    0xf0980b7bu, 0x8ecf852cu, 0x2d06feddu, 0xcb3e788eu, 0x6975f23fu, 0x07ad6bf0u, 0xa5e4e5a1u, 0x441c5f52u,
    0xe253d903u, 0x808b52b4u, 0x1ec2cc65u, 0xbcfa4616u, 0x5b31bfc7u, 0xf9693978u, 0x97a0b329u, 0x35d82cdau,
    0xd40fa68bu, 0x7247203cu, 0x107e99edu, 0xaeb6139eu, 0x4ced8d4fu, 0xeb250700u, 0x895c80b1u, 0x2793fa62u,
    0xc5cb7413u, 0x6402edc4u, 0x023a6775u, 0xa071e126u, 0x3ea95ad7u, 0xdce0d488u, 0x7b184e39u, 0x194fc7eau,
    0xb787419bu, 0x55bebb4cu, 0xf3f634fdu, 0x922daeaeu, 0x3065285fu, 0xce9ca210u, 0x6cd41bc1u, 0x0b0b9572u,
    0xa9430f23u, 0x477a88d4u, 0xe5b20285u, 0x83e97c36u, 0x2220f5e7u, 0xc0586f98u, 0x5e8fe949u, 0xfcc762fau,
    0x9afedcabu, 0x3936565cu, 0xd76dd00du, 0x75a549beu, 0x13dcc36fu, 0xb2143d20u, 0x504bb6d1u, 0xee833082u,
    0x8cbaaa33u, 0x2af223e4u, 0xc9299d95u, 0x67611746u, 0x059890f7u, 0xa3d00aa8u, 0x42078459u, 0xe03efe0au,
    0x7e7677bbu, 0x1cadf16cu, 0xbae56b1du, 0x591ce4ceu, 0xf7545e7fu, 0x958bd830u, 0x33c351e1u, 0xd1facb92u,
    0x70324543u, 0x0e69bef4u, 0xaca138a5u, 0x4ad8b256u, 0xe9102c07u, 0x8747a5b8u, 0x257f1f69u, 0xc3b6991au,
    0x61ee12cbu, 0x00258c7cu, 0x9e5d062du, 0x3c947fdeu, 0xdacbf98fu, 0x79037340u, 0x173aecf1u, 0xb57266a2u,
};

static const uint32_t bshim_107_tab3[96] = {
    0x808b52b4u, 0x1ec2cc65u, 0xbcfa4616u, 0x5b31bfc7u, 0xf9693978u, 0x97a0b329u, 0x35d82cdau, 0xd40fa68bu,
    0x7247203cu, 0x107e99edu, 0xaeb6139eu, 0x4ced8d4fu, 0xeb250700u, 0x895c80b1u, 0x2793fa62u, 0xc5cb7413u,
    0x6402edc4u, 0x023a6775u, 0xa071e126u, 0x3ea95ad7u, 0xdce0d488u, 0x7b184e39u, 0x194fc7eau, 0xb787419bu,
    0x55bebb4cu, 0xf3f634fdu, 0x922daeaeu, 0x3065285fu, 0xce9ca210u, 0x6cd41bc1u, 0x0b0b9572u, 0xa9430f23u,
    0x477a88d4u, 0xe5b20285u, 0x83e97c36u, 0x2220f5e7u, 0xc0586f98u, 0x5e8fe949u, 0xfcc762fau, 0x9afedcabu,
    0x3936565cu, 0xd76dd00du, 0x75a549beu, 0x13dcc36fu, 0xb2143d20u, 0x504bb6d1u, 0xee833082u, 0x8cbaaa33u,
    0x2af223e4u, 0xc9299d95u, 0x67611746u, 0x059890f7u, 0xa3d00aa8u, 0x42078459u, 0xe03efe0au, 0x7e7677bbu,
    0x1cadf16cu, 0xbae56b1du, 0x591ce4ceu, 0xf7545e7fu, 0x958bd830u, 0x33c351e1u, 0xd1facb92u, 0x70324543u,
    0x0e69bef4u, 0xaca138a5u, 0x4ad8b256u, 0xe9102c07u, 0x8747a5b8u, 0x257f1f69u, 0xc3b6991au, 0x61ee12cbu,
    0x00258c7cu, 0x9e5d062du, 0x3c947fdeu, 0xdacbf98fu, 0x79037340u, 0x173aecf1u, 0xb57266a2u, 0x53a9e053u,
    0xf1e15a04u, 0x9018d3b5u, 0x2e504d66u, 0xcc87c717u, 0x6abf40c8u, 0x08f6ba79u, 0xa72e342au, 0x4565addbu,
    0xe39d278cu, 0x81d4a13du, 0x200c1aeeu, 0xbe43949fu, 0x5c7b0e50u, 0xfab28801u, 0x98ea01b2u, 0x37217b63u,
};

static const uint32_t bshim_107_tab4[96] = {
    0x023a6775u, 0xa071e126u, 0x3ea95ad7u, 0xdce0d488u, 0x7b184e39u, 0x194fc7eau, 0xb787419bu, 0x55bebb4cu,
    0xf3f634fdu, 0x922daeaeu, 0x3065285fu, 0xce9ca210u, 0x6cd41bc1u, 0x0b0b9572u, 0xa9430f23u, 0x477a88d4u,
    0xe5b20285u, 0x83e97c36u, 0x2220f5e7u, 0xc0586f98u, 0x5e8fe949u, 0xfcc762fau, 0x9afedcabu, 0x3936565cu,
    0xd76dd00du, 0x75a549beu, 0x13dcc36fu, 0xb2143d20u, 0x504bb6d1u, 0xee833082u, 0x8cbaaa33u, 0x2af223e4u,
    0xc9299d95u, 0x67611746u, 0x059890f7u, 0xa3d00aa8u, 0x42078459u, 0xe03efe0au, 0x7e7677bbu, 0x1cadf16cu,
    0xbae56b1du, 0x591ce4ceu, 0xf7545e7fu, 0x958bd830u, 0x33c351e1u, 0xd1facb92u, 0x70324543u, 0x0e69bef4u,
    0xaca138a5u, 0x4ad8b256u, 0xe9102c07u, 0x8747a5b8u, 0x257f1f69u, 0xc3b6991au, 0x61ee12cbu, 0x00258c7cu,
    0x9e5d062du, 0x3c947fdeu, 0xdacbf98fu, 0x79037340u, 0x173aecf1u, 0xb57266a2u, 0x53a9e053u, 0xf1e15a04u,
    0x9018d3b5u, 0x2e504d66u, 0xcc87c717u, 0x6abf40c8u, 0x08f6ba79u, 0xa72e342au, 0x4565addbu, 0xe39d278cu,
    0x81d4a13du, 0x200c1aeeu, 0xbe43949fu, 0x5c7b0e50u, 0xfab28801u, 0x98ea01b2u, 0x37217b63u, 0xd558f514u,
    0x73906ec5u, 0x11c7e876u, 0xafff6227u, 0x4e36dbd8u, 0xec6e5589u, 0x8aa5cf3au, 0x28dd48ebu, 0xc714c29cu,
    0x654c3c4du, 0x0383b5feu, 0xa1bb2fafu, 0x3ff2a960u, 0xde2a2311u, 0x7c619cc2u, 0x1a991673u, 0xb8d09024u,
};

static const uint32_t bshim_107_tab5[96] = {
    0x83e97c36u, 0x2220f5e7u, 0xc0586f98u, 0x5e8fe949u, 0xfcc762fau, 0x9afedcabu, 0x3936565cu, 0xd76dd00du,
    0x75a549beu, 0x13dcc36fu, 0xb2143d20u, 0x504bb6d1u, 0xee833082u, 0x8cbaaa33u, 0x2af223e4u, 0xc9299d95u,
    0x67611746u, 0x059890f7u, 0xa3d00aa8u, 0x42078459u, 0xe03efe0au, 0x7e7677bbu, 0x1cadf16cu, 0xbae56b1du,
    0x591ce4ceu, 0xf7545e7fu, 0x958bd830u, 0x33c351e1u, 0xd1facb92u, 0x70324543u, 0x0e69bef4u, 0xaca138a5u,
    0x4ad8b256u, 0xe9102c07u, 0x8747a5b8u, 0x257f1f69u, 0xc3b6991au, 0x61ee12cbu, 0x00258c7cu, 0x9e5d062du,
    0x3c947fdeu, 0xdacbf98fu, 0x79037340u, 0x173aecf1u, 0xb57266a2u, 0x53a9e053u, 0xf1e15a04u, 0x9018d3b5u,
    0x2e504d66u, 0xcc87c717u, 0x6abf40c8u, 0x08f6ba79u, 0xa72e342au, 0x4565addbu, 0xe39d278cu, 0x81d4a13du,
    0x200c1aeeu, 0xbe43949fu, 0x5c7b0e50u, 0xfab28801u, 0x98ea01b2u, 0x37217b63u, 0xd558f514u, 0x73906ec5u,
    0x11c7e876u, 0xafff6227u, 0x4e36dbd8u, 0xec6e5589u, 0x8aa5cf3au, 0x28dd48ebu, 0xc714c29cu, 0x654c3c4du,
    0x0383b5feu, 0xa1bb2fafu, 0x3ff2a960u, 0xde2a2311u, 0x7c619cc2u, 0x1a991673u, 0xb8d09024u, 0x570809d5u,
    0xf53f8386u, 0x9376fd37u, 0x31ae76e8u, 0xcfe5f099u, 0x6e1d6a4au, 0x0c54e3fbu, 0xaa8c5dacu, 0x48c3d75du,
    0xe6fb510eu, 0x8532cabfu, 0x236a4470u, 0xc1a1be21u, 0x5fd937d2u, 0xfe10b183u, 0x9c482b34u, 0x3a7fa4e5u,
};

static const uint32_t bshim_107_tab6[96] = {
    0x059890f7u, 0xa3d00aa8u, 0x42078459u, 0xe03efe0au, 0x7e7677bbu, 0x1cadf16cu, 0xbae56b1du, 0x591ce4ceu,
    0xf7545e7fu, 0x958bd830u, 0x33c351e1u, 0xd1facb92u, 0x70324543u, 0x0e69bef4u, 0xaca138a5u, 0x4ad8b256u,
    0xe9102c07u, 0x8747a5b8u, 0x257f1f69u, 0xc3b6991au, 0x61ee12cbu, 0x00258c7cu, 0x9e5d062du, 0x3c947fdeu,
    0xdacbf98fu, 0x79037340u, 0x173aecf1u, 0xb57266a2u, 0x53a9e053u, 0xf1e15a04u, 0x9018d3b5u, 0x2e504d66u,
    0xcc87c717u, 0x6abf40c8u, 0x08f6ba79u, 0xa72e342au, 0x4565addbu, 0xe39d278cu, 0x81d4a13du, 0x200c1aeeu,
    0xbe43949fu, 0x5c7b0e50u, 0xfab28801u, 0x98ea01b2u, 0x37217b63u, 0xd558f514u, 0x73906ec5u, 0x11c7e876u,
    0xafff6227u, 0x4e36dbd8u, 0xec6e5589u, 0x8aa5cf3au, 0x28dd48ebu, 0xc714c29cu, 0x654c3c4du, 0x0383b5feu,
    0xa1bb2fafu, 0x3ff2a960u, 0xde2a2311u, 0x7c619cc2u, 0x1a991673u, 0xb8d09024u, 0x570809d5u, 0xf53f8386u,
    0x9376fd37u, 0x31ae76e8u, 0xcfe5f099u, 0x6e1d6a4au, 0x0c54e3fbu, 0xaa8c5dacu, 0x48c3d75du, 0xe6fb510eu,
    0x8532cabfu, 0x236a4470u, 0xc1a1be21u, 0x5fd937d2u, 0xfe10b183u, 0x9c482b34u, 0x3a7fa4e5u, 0xd8b71e96u,
    0x76ee9847u, 0x152611f8u, 0xb35d8ba9u, 0x5195055au, 0xefcc7f0bu, 0x8e03f8bcu, 0x2c3b726du, 0xca72ec1eu,
    0x68aa65cfu, 0x06e1df80u, 0xa5195931u, 0x4350d2e2u, 0xe1884c93u, 0x7fbfc644u, 0x1df73ff5u, 0xbc2eb9a6u,
};

static const uint32_t bshim_107_tab7[96] = {
    0x8747a5b8u, 0x257f1f69u, 0xc3b6991au, 0x61ee12cbu, 0x00258c7cu, 0x9e5d062du, 0x3c947fdeu, 0xdacbf98fu,
    0x79037340u, 0x173aecf1u, 0xb57266a2u, 0x53a9e053u, 0xf1e15a04u, 0x9018d3b5u, 0x2e504d66u, 0xcc87c717u,
    0x6abf40c8u, 0x08f6ba79u, 0xa72e342au, 0x4565addbu, 0xe39d278cu, 0x81d4a13du, 0x200c1aeeu, 0xbe43949fu,
    0x5c7b0e50u, 0xfab28801u, 0x98ea01b2u, 0x37217b63u, 0xd558f514u, 0x73906ec5u, 0x11c7e876u, 0xafff6227u,
    0x4e36dbd8u, 0xec6e5589u, 0x8aa5cf3au, 0x28dd48ebu, 0xc714c29cu, 0x654c3c4du, 0x0383b5feu, 0xa1bb2fafu,
    0x3ff2a960u, 0xde2a2311u, 0x7c619cc2u, 0x1a991673u, 0xb8d09024u, 0x570809d5u, 0xf53f8386u, 0x9376fd37u,
    0x31ae76e8u, 0xcfe5f099u, 0x6e1d6a4au, 0x0c54e3fbu, 0xaa8c5dacu, 0x48c3d75du, 0xe6fb510eu, 0x8532cabfu,
    0x236a4470u, 0xc1a1be21u, 0x5fd937d2u, 0xfe10b183u, 0x9c482b34u, 0x3a7fa4e5u, 0xd8b71e96u, 0x76ee9847u,
    0x152611f8u, 0xb35d8ba9u, 0x5195055au, 0xefcc7f0bu, 0x8e03f8bcu, 0x2c3b726du, 0xca72ec1eu, 0x68aa65cfu,
    0x06e1df80u, 0xa5195931u, 0x4350d2e2u, 0xe1884c93u, 0x7fbfc644u, 0x1df73ff5u, 0xbc2eb9a6u, 0x5a663357u,
    0xf89dad08u, 0x96d526b9u, 0x350ca06au, 0xd3441a1bu, 0x717b93ccu, 0x0fb30d7du, 0xadea872eu, 0x4c2200dfu,
    0xea597a90u, 0x8890f441u, 0x26c86df2u, 0xc4ffe7a3u, 0x63376154u, 0x016edb05u, 0x9fa654b6u, 0x3dddce67u,
};

struct bshim_107_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_107_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_107_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_107_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_107_reset(struct bshim_107_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000cede5u;
    return 0;
}

