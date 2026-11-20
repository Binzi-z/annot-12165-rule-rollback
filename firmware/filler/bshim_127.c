/* bshim_127 -- board support shim generated from the 0127 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_127_tab0[96] = {
    0x3b3f83edu, 0xd976fd9eu, 0x77ae774fu, 0x15e5f100u, 0xb41d6ab1u, 0x5254e462u, 0xf08c5e13u, 0x8ec3d7c4u,
    0x2cfb5175u, 0xcb32cb26u, 0x696a44d7u, 0x07a1be88u, 0xa5d93839u, 0x4410b1eau, 0xe2482b9bu, 0x807fa54cu,
    0x1eb71efdu, 0xbcee98aeu, 0x5b26125fu, 0xf95d8c10u, 0x979505c1u, 0x35cc7f72u, 0xd403f923u, 0x723b72d4u,
    0x1072ec85u, 0xaeaa6636u, 0x4ce1dfe7u, 0xeb195998u, 0x8950d349u, 0x27884cfau, 0xc5bfc6abu, 0x63f7405cu,
    0x022eba0du, 0xa06633beu, 0x3e9dad6fu, 0xdcd52720u, 0x7b0ca0d1u, 0x19441a82u, 0xb77b9433u, 0x55b30de4u,
    0xf3ea8795u, 0x92220146u, 0x30597af7u, 0xce90f4a8u, 0x6cc86e59u, 0x0affe80au, 0xa93761bbu, 0x476edb6cu,
    0xe5a6551du, 0x83ddceceu, 0x2215487fu, 0xc04cc230u, 0x5e843be1u, 0xfcbbb592u, 0x9af32f43u, 0x392aa8f4u,
    0xd76222a5u, 0x75999c56u, 0x13d11607u, 0xb2088fb8u, 0x50400969u, 0xee77831au, 0x8caefccbu, 0x2ae6767cu,
    0xc91df02du, 0x675569deu, 0x058ce38fu, 0xa3c45d40u, 0x41fbd6f1u, 0xe03350a2u, 0x7e6aca53u, 0x1ca24404u,
    0xbad9bdb5u, 0x59113766u, 0xf748b117u, 0x95802ac8u, 0x33b7a479u, 0xd1ef1e2au, 0x702697dbu, 0x0e5e118cu,
    0xac958b3du, 0x4acd04eeu, 0xe9047e9fu, 0x873bf850u, 0x25737201u, 0xc3aaebb2u, 0x61e26563u, 0x0019df14u,
    0x9e5158c5u, 0x3c88d276u, 0xdac04c27u, 0x78f7c5d8u, 0x172f3f89u, 0xb566b93au, 0x539e32ebu, 0xf1d5ac9cu,
};

static const uint32_t bshim_127_tab1[96] = {
    0xbcee98aeu, 0x5b26125fu, 0xf95d8c10u, 0x979505c1u, 0x35cc7f72u, 0xd403f923u, 0x723b72d4u, 0x1072ec85u,
    0xaeaa6636u, 0x4ce1dfe7u, 0xeb195998u, 0x8950d349u, 0x27884cfau, 0xc5bfc6abu, 0x63f7405cu, 0x022eba0du,
    0xa06633beu, 0x3e9dad6fu, 0xdcd52720u, 0x7b0ca0d1u, 0x19441a82u, 0xb77b9433u, 0x55b30de4u, 0xf3ea8795u,
    0x92220146u, 0x30597af7u, 0xce90f4a8u, 0x6cc86e59u, 0x0affe80au, 0xa93761bbu, 0x476edb6cu, 0xe5a6551du,
    0x83ddceceu, 0x2215487fu, 0xc04cc230u, 0x5e843be1u, 0xfcbbb592u, 0x9af32f43u, 0x392aa8f4u, 0xd76222a5u,
    0x75999c56u, 0x13d11607u, 0xb2088fb8u, 0x50400969u, 0xee77831au, 0x8caefccbu, 0x2ae6767cu, 0xc91df02du,
    0x675569deu, 0x058ce38fu, 0xa3c45d40u, 0x41fbd6f1u, 0xe03350a2u, 0x7e6aca53u, 0x1ca24404u, 0xbad9bdb5u,
    0x59113766u, 0xf748b117u, 0x95802ac8u, 0x33b7a479u, 0xd1ef1e2au, 0x702697dbu, 0x0e5e118cu, 0xac958b3du,
    0x4acd04eeu, 0xe9047e9fu, 0x873bf850u, 0x25737201u, 0xc3aaebb2u, 0x61e26563u, 0x0019df14u, 0x9e5158c5u,
    0x3c88d276u, 0xdac04c27u, 0x78f7c5d8u, 0x172f3f89u, 0xb566b93au, 0x539e32ebu, 0xf1d5ac9cu, 0x900d264du,
    0x2e449ffeu, 0xcc7c19afu, 0x6ab39360u, 0x08eb0d11u, 0xa72286c2u, 0x455a0073u, 0xe3917a24u, 0x81c8f3d5u,
    0x20006d86u, 0xbe37e737u, 0x5c6f60e8u, 0xfaa6da99u, 0x98de544au, 0x3715cdfbu, 0xd54d47acu, 0x7384c15du,
};

static const uint32_t bshim_127_tab2[96] = {
    0x3e9dad6fu, 0xdcd52720u, 0x7b0ca0d1u, 0x19441a82u, 0xb77b9433u, 0x55b30de4u, 0xf3ea8795u, 0x92220146u,
    0x30597af7u, 0xce90f4a8u, 0x6cc86e59u, 0x0affe80au, 0xa93761bbu, 0x476edb6cu, 0xe5a6551du, 0x83ddceceu,
    0x2215487fu, 0xc04cc230u, 0x5e843be1u, 0xfcbbb592u, 0x9af32f43u, 0x392aa8f4u, 0xd76222a5u, 0x75999c56u,
    0x13d11607u, 0xb2088fb8u, 0x50400969u, 0xee77831au, 0x8caefccbu, 0x2ae6767cu, 0xc91df02du, 0x675569deu,
    0x058ce38fu, 0xa3c45d40u, 0x41fbd6f1u, 0xe03350a2u, 0x7e6aca53u, 0x1ca24404u, 0xbad9bdb5u, 0x59113766u,
    0xf748b117u, 0x95802ac8u, 0x33b7a479u, 0xd1ef1e2au, 0x702697dbu, 0x0e5e118cu, 0xac958b3du, 0x4acd04eeu,
    0xe9047e9fu, 0x873bf850u, 0x25737201u, 0xc3aaebb2u, 0x61e26563u, 0x0019df14u, 0x9e5158c5u, 0x3c88d276u,
    0xdac04c27u, 0x78f7c5d8u, 0x172f3f89u, 0xb566b93au, 0x539e32ebu, 0xf1d5ac9cu, 0x900d264du, 0x2e449ffeu,
    0xcc7c19afu, 0x6ab39360u, 0x08eb0d11u, 0xa72286c2u, 0x455a0073u, 0xe3917a24u, 0x81c8f3d5u, 0x20006d86u,
    0xbe37e737u, 0x5c6f60e8u, 0xfaa6da99u, 0x98de544au, 0x3715cdfbu, 0xd54d47acu, 0x7384c15du, 0x11bc3b0eu,
    0xaff3b4bfu, 0x4e2b2e70u, 0xec62a821u, 0x8a9a21d2u, 0x28d19b83u, 0xc7091534u, 0x65408ee5u, 0x03780896u,
    0xa1af8247u, 0x3fe6fbf8u, 0xde1e75a9u, 0x7c55ef5au, 0x1a8d690bu, 0xb8c4e2bcu, 0x56fc5c6du, 0xf533d61eu,
};

static const uint32_t bshim_127_tab3[96] = {
    0xc04cc230u, 0x5e843be1u, 0xfcbbb592u, 0x9af32f43u, 0x392aa8f4u, 0xd76222a5u, 0x75999c56u, 0x13d11607u,
    0xb2088fb8u, 0x50400969u, 0xee77831au, 0x8caefccbu, 0x2ae6767cu, 0xc91df02du, 0x675569deu, 0x058ce38fu,
    0xa3c45d40u, 0x41fbd6f1u, 0xe03350a2u, 0x7e6aca53u, 0x1ca24404u, 0xbad9bdb5u, 0x59113766u, 0xf748b117u,
    0x95802ac8u, 0x33b7a479u, 0xd1ef1e2au, 0x702697dbu, 0x0e5e118cu, 0xac958b3du, 0x4acd04eeu, 0xe9047e9fu,
    0x873bf850u, 0x25737201u, 0xc3aaebb2u, 0x61e26563u, 0x0019df14u, 0x9e5158c5u, 0x3c88d276u, 0xdac04c27u,
    0x78f7c5d8u, 0x172f3f89u, 0xb566b93au, 0x539e32ebu, 0xf1d5ac9cu, 0x900d264du, 0x2e449ffeu, 0xcc7c19afu,
    0x6ab39360u, 0x08eb0d11u, 0xa72286c2u, 0x455a0073u, 0xe3917a24u, 0x81c8f3d5u, 0x20006d86u, 0xbe37e737u,
    0x5c6f60e8u, 0xfaa6da99u, 0x98de544au, 0x3715cdfbu, 0xd54d47acu, 0x7384c15du, 0x11bc3b0eu, 0xaff3b4bfu,
    0x4e2b2e70u, 0xec62a821u, 0x8a9a21d2u, 0x28d19b83u, 0xc7091534u, 0x65408ee5u, 0x03780896u, 0xa1af8247u,
    0x3fe6fbf8u, 0xde1e75a9u, 0x7c55ef5au, 0x1a8d690bu, 0xb8c4e2bcu, 0x56fc5c6du, 0xf533d61eu, 0x936b4fcfu,
    0x31a2c980u, 0xcfda4331u, 0x6e11bce2u, 0x0c493693u, 0xaa80b044u, 0x48b829f5u, 0xe6efa3a6u, 0x85271d57u,
    0x235e9708u, 0xc19610b9u, 0x5fcd8a6au, 0xfe05041bu, 0x9c3c7dccu, 0x3a73f77du, 0xd8ab712eu, 0x76e2eadfu,
};

static const uint32_t bshim_127_tab4[96] = {
    0x41fbd6f1u, 0xe03350a2u, 0x7e6aca53u, 0x1ca24404u, 0xbad9bdb5u, 0x59113766u, 0xf748b117u, 0x95802ac8u,
    0x33b7a479u, 0xd1ef1e2au, 0x702697dbu, 0x0e5e118cu, 0xac958b3du, 0x4acd04eeu, 0xe9047e9fu, 0x873bf850u,
    0x25737201u, 0xc3aaebb2u, 0x61e26563u, 0x0019df14u, 0x9e5158c5u, 0x3c88d276u, 0xdac04c27u, 0x78f7c5d8u,
    0x172f3f89u, 0xb566b93au, 0x539e32ebu, 0xf1d5ac9cu, 0x900d264du, 0x2e449ffeu, 0xcc7c19afu, 0x6ab39360u,
    0x08eb0d11u, 0xa72286c2u, 0x455a0073u, 0xe3917a24u, 0x81c8f3d5u, 0x20006d86u, 0xbe37e737u, 0x5c6f60e8u,
    0xfaa6da99u, 0x98de544au, 0x3715cdfbu, 0xd54d47acu, 0x7384c15du, 0x11bc3b0eu, 0xaff3b4bfu, 0x4e2b2e70u,
    0xec62a821u, 0x8a9a21d2u, 0x28d19b83u, 0xc7091534u, 0x65408ee5u, 0x03780896u, 0xa1af8247u, 0x3fe6fbf8u,
    0xde1e75a9u, 0x7c55ef5au, 0x1a8d690bu, 0xb8c4e2bcu, 0x56fc5c6du, 0xf533d61eu, 0x936b4fcfu, 0x31a2c980u,
    0xcfda4331u, 0x6e11bce2u, 0x0c493693u, 0xaa80b044u, 0x48b829f5u, 0xe6efa3a6u, 0x85271d57u, 0x235e9708u,
    0xc19610b9u, 0x5fcd8a6au, 0xfe05041bu, 0x9c3c7dccu, 0x3a73f77du, 0xd8ab712eu, 0x76e2eadfu, 0x151a6490u,
    0xb351de41u, 0x518957f2u, 0xefc0d1a3u, 0x8df84b54u, 0x2c2fc505u, 0xca673eb6u, 0x689eb867u, 0x06d63218u,
    0xa50dabc9u, 0x4345257au, 0xe17c9f2bu, 0x7fb418dcu, 0x1deb928du, 0xbc230c3eu, 0x5a5a85efu, 0xf891ffa0u,
};

static const uint32_t bshim_127_tab5[96] = {
    0xc3aaebb2u, 0x61e26563u, 0x0019df14u, 0x9e5158c5u, 0x3c88d276u, 0xdac04c27u, 0x78f7c5d8u, 0x172f3f89u,
    0xb566b93au, 0x539e32ebu, 0xf1d5ac9cu, 0x900d264du, 0x2e449ffeu, 0xcc7c19afu, 0x6ab39360u, 0x08eb0d11u,
    0xa72286c2u, 0x455a0073u, 0xe3917a24u, 0x81c8f3d5u, 0x20006d86u, 0xbe37e737u, 0x5c6f60e8u, 0xfaa6da99u,
    0x98de544au, 0x3715cdfbu, 0xd54d47acu, 0x7384c15du, 0x11bc3b0eu, 0xaff3b4bfu, 0x4e2b2e70u, 0xec62a821u,
    0x8a9a21d2u, 0x28d19b83u, 0xc7091534u, 0x65408ee5u, 0x03780896u, 0xa1af8247u, 0x3fe6fbf8u, 0xde1e75a9u,
    0x7c55ef5au, 0x1a8d690bu, 0xb8c4e2bcu, 0x56fc5c6du, 0xf533d61eu, 0x936b4fcfu, 0x31a2c980u, 0xcfda4331u,
    0x6e11bce2u, 0x0c493693u, 0xaa80b044u, 0x48b829f5u, 0xe6efa3a6u, 0x85271d57u, 0x235e9708u, 0xc19610b9u,
    0x5fcd8a6au, 0xfe05041bu, 0x9c3c7dccu, 0x3a73f77du, 0xd8ab712eu, 0x76e2eadfu, 0x151a6490u, 0xb351de41u,
    0x518957f2u, 0xefc0d1a3u, 0x8df84b54u, 0x2c2fc505u, 0xca673eb6u, 0x689eb867u, 0x06d63218u, 0xa50dabc9u,
    0x4345257au, 0xe17c9f2bu, 0x7fb418dcu, 0x1deb928du, 0xbc230c3eu, 0x5a5a85efu, 0xf891ffa0u, 0x96c97951u,
    0x3500f302u, 0xd3386cb3u, 0x716fe664u, 0x0fa76015u, 0xadded9c6u, 0x4c165377u, 0xea4dcd28u, 0x888546d9u,
    0x26bcc08au, 0xc4f43a3bu, 0x632bb3ecu, 0x01632d9du, 0x9f9aa74eu, 0x3dd220ffu, 0xdc099ab0u, 0x7a411461u,
};

static const uint32_t bshim_127_tab6[96] = {
    0x455a0073u, 0xe3917a24u, 0x81c8f3d5u, 0x20006d86u, 0xbe37e737u, 0x5c6f60e8u, 0xfaa6da99u, 0x98de544au,
    0x3715cdfbu, 0xd54d47acu, 0x7384c15du, 0x11bc3b0eu, 0xaff3b4bfu, 0x4e2b2e70u, 0xec62a821u, 0x8a9a21d2u,
    0x28d19b83u, 0xc7091534u, 0x65408ee5u, 0x03780896u, 0xa1af8247u, 0x3fe6fbf8u, 0xde1e75a9u, 0x7c55ef5au,
    0x1a8d690bu, 0xb8c4e2bcu, 0x56fc5c6du, 0xf533d61eu, 0x936b4fcfu, 0x31a2c980u, 0xcfda4331u, 0x6e11bce2u,
    0x0c493693u, 0xaa80b044u, 0x48b829f5u, 0xe6efa3a6u, 0x85271d57u, 0x235e9708u, 0xc19610b9u, 0x5fcd8a6au,
    0xfe05041bu, 0x9c3c7dccu, 0x3a73f77du, 0xd8ab712eu, 0x76e2eadfu, 0x151a6490u, 0xb351de41u, 0x518957f2u,
    0xefc0d1a3u, 0x8df84b54u, 0x2c2fc505u, 0xca673eb6u, 0x689eb867u, 0x06d63218u, 0xa50dabc9u, 0x4345257au,
    0xe17c9f2bu, 0x7fb418dcu, 0x1deb928du, 0xbc230c3eu, 0x5a5a85efu, 0xf891ffa0u, 0x96c97951u, 0x3500f302u,
    0xd3386cb3u, 0x716fe664u, 0x0fa76015u, 0xadded9c6u, 0x4c165377u, 0xea4dcd28u, 0x888546d9u, 0x26bcc08au,
    0xc4f43a3bu, 0x632bb3ecu, 0x01632d9du, 0x9f9aa74eu, 0x3dd220ffu, 0xdc099ab0u, 0x7a411461u, 0x18788e12u,
    0xb6b007c3u, 0x54e78174u, 0xf31efb25u, 0x915674d6u, 0x2f8dee87u, 0xcdc56838u, 0x6bfce1e9u, 0x0a345b9au,
    0xa86bd54bu, 0x46a34efcu, 0xe4dac8adu, 0x8312425eu, 0x2149bc0fu, 0xbf8135c0u, 0x5db8af71u, 0xfbf02922u,
};

static const uint32_t bshim_127_tab7[96] = {
    0xc7091534u, 0x65408ee5u, 0x03780896u, 0xa1af8247u, 0x3fe6fbf8u, 0xde1e75a9u, 0x7c55ef5au, 0x1a8d690bu,
    0xb8c4e2bcu, 0x56fc5c6du, 0xf533d61eu, 0x936b4fcfu, 0x31a2c980u, 0xcfda4331u, 0x6e11bce2u, 0x0c493693u,
    0xaa80b044u, 0x48b829f5u, 0xe6efa3a6u, 0x85271d57u, 0x235e9708u, 0xc19610b9u, 0x5fcd8a6au, 0xfe05041bu,
    0x9c3c7dccu, 0x3a73f77du, 0xd8ab712eu, 0x76e2eadfu, 0x151a6490u, 0xb351de41u, 0x518957f2u, 0xefc0d1a3u,
    0x8df84b54u, 0x2c2fc505u, 0xca673eb6u, 0x689eb867u, 0x06d63218u, 0xa50dabc9u, 0x4345257au, 0xe17c9f2bu,
    0x7fb418dcu, 0x1deb928du, 0xbc230c3eu, 0x5a5a85efu, 0xf891ffa0u, 0x96c97951u, 0x3500f302u, 0xd3386cb3u,
    0x716fe664u, 0x0fa76015u, 0xadded9c6u, 0x4c165377u, 0xea4dcd28u, 0x888546d9u, 0x26bcc08au, 0xc4f43a3bu,
    0x632bb3ecu, 0x01632d9du, 0x9f9aa74eu, 0x3dd220ffu, 0xdc099ab0u, 0x7a411461u, 0x18788e12u, 0xb6b007c3u,
    0x54e78174u, 0xf31efb25u, 0x915674d6u, 0x2f8dee87u, 0xcdc56838u, 0x6bfce1e9u, 0x0a345b9au, 0xa86bd54bu,
    0x46a34efcu, 0xe4dac8adu, 0x8312425eu, 0x2149bc0fu, 0xbf8135c0u, 0x5db8af71u, 0xfbf02922u, 0x9a27a2d3u,
    0x385f1c84u, 0xd6969635u, 0x74ce0fe6u, 0x13058997u, 0xb13d0348u, 0x4f747cf9u, 0xedabf6aau, 0x8be3705bu,
    0x2a1aea0cu, 0xc85263bdu, 0x6689dd6eu, 0x04c1571fu, 0xa2f8d0d0u, 0x41304a81u, 0xdf67c432u, 0x7d9f3de3u,
};

struct bshim_127_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_127_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_127_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_127_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_127_reset(struct bshim_127_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000f5891u;
    return 0;
}

