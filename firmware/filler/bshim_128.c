/* bshim_128 -- board support shim generated from the 0128 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_128_tab0[96] = {
    0x31a2c980u, 0xcfda4331u, 0x6e11bce2u, 0x0c493693u, 0xaa80b044u, 0x48b829f5u, 0xe6efa3a6u, 0x85271d57u,
    0x235e9708u, 0xc19610b9u, 0x5fcd8a6au, 0xfe05041bu, 0x9c3c7dccu, 0x3a73f77du, 0xd8ab712eu, 0x76e2eadfu,
    0x151a6490u, 0xb351de41u, 0x518957f2u, 0xefc0d1a3u, 0x8df84b54u, 0x2c2fc505u, 0xca673eb6u, 0x689eb867u,
    0x06d63218u, 0xa50dabc9u, 0x4345257au, 0xe17c9f2bu, 0x7fb418dcu, 0x1deb928du, 0xbc230c3eu, 0x5a5a85efu,
    0xf891ffa0u, 0x96c97951u, 0x3500f302u, 0xd3386cb3u, 0x716fe664u, 0x0fa76015u, 0xadded9c6u, 0x4c165377u,
    0xea4dcd28u, 0x888546d9u, 0x26bcc08au, 0xc4f43a3bu, 0x632bb3ecu, 0x01632d9du, 0x9f9aa74eu, 0x3dd220ffu,
    0xdc099ab0u, 0x7a411461u, 0x18788e12u, 0xb6b007c3u, 0x54e78174u, 0xf31efb25u, 0x915674d6u, 0x2f8dee87u,
    0xcdc56838u, 0x6bfce1e9u, 0x0a345b9au, 0xa86bd54bu, 0x46a34efcu, 0xe4dac8adu, 0x8312425eu, 0x2149bc0fu,
    0xbf8135c0u, 0x5db8af71u, 0xfbf02922u, 0x9a27a2d3u, 0x385f1c84u, 0xd6969635u, 0x74ce0fe6u, 0x13058997u,
    0xb13d0348u, 0x4f747cf9u, 0xedabf6aau, 0x8be3705bu, 0x2a1aea0cu, 0xc85263bdu, 0x6689dd6eu, 0x04c1571fu,
    0xa2f8d0d0u, 0x41304a81u, 0xdf67c432u, 0x7d9f3de3u, 0x1bd6b794u, 0xba0e3145u, 0x5845aaf6u, 0xf67d24a7u,
    0x94b49e58u, 0x32ec1809u, 0xd12391bau, 0x6f5b0b6bu, 0x0d92851cu, 0xabc9fecdu, 0x4a01787eu, 0xe838f22fu,
};

static const uint32_t bshim_128_tab1[96] = {
    0xb351de41u, 0x518957f2u, 0xefc0d1a3u, 0x8df84b54u, 0x2c2fc505u, 0xca673eb6u, 0x689eb867u, 0x06d63218u,
    0xa50dabc9u, 0x4345257au, 0xe17c9f2bu, 0x7fb418dcu, 0x1deb928du, 0xbc230c3eu, 0x5a5a85efu, 0xf891ffa0u,
    0x96c97951u, 0x3500f302u, 0xd3386cb3u, 0x716fe664u, 0x0fa76015u, 0xadded9c6u, 0x4c165377u, 0xea4dcd28u,
    0x888546d9u, 0x26bcc08au, 0xc4f43a3bu, 0x632bb3ecu, 0x01632d9du, 0x9f9aa74eu, 0x3dd220ffu, 0xdc099ab0u,
    0x7a411461u, 0x18788e12u, 0xb6b007c3u, 0x54e78174u, 0xf31efb25u, 0x915674d6u, 0x2f8dee87u, 0xcdc56838u,
    0x6bfce1e9u, 0x0a345b9au, 0xa86bd54bu, 0x46a34efcu, 0xe4dac8adu, 0x8312425eu, 0x2149bc0fu, 0xbf8135c0u,
    0x5db8af71u, 0xfbf02922u, 0x9a27a2d3u, 0x385f1c84u, 0xd6969635u, 0x74ce0fe6u, 0x13058997u, 0xb13d0348u,
    0x4f747cf9u, 0xedabf6aau, 0x8be3705bu, 0x2a1aea0cu, 0xc85263bdu, 0x6689dd6eu, 0x04c1571fu, 0xa2f8d0d0u,
    0x41304a81u, 0xdf67c432u, 0x7d9f3de3u, 0x1bd6b794u, 0xba0e3145u, 0x5845aaf6u, 0xf67d24a7u, 0x94b49e58u,
    0x32ec1809u, 0xd12391bau, 0x6f5b0b6bu, 0x0d92851cu, 0xabc9fecdu, 0x4a01787eu, 0xe838f22fu, 0x86706be0u,
    0x24a7e591u, 0xc2df5f42u, 0x6116d8f3u, 0xff4e52a4u, 0x9d85cc55u, 0x3bbd4606u, 0xd9f4bfb7u, 0x782c3968u,
    0x1663b319u, 0xb49b2ccau, 0x52d2a67bu, 0xf10a202cu, 0x8f4199ddu, 0x2d79138eu, 0xcbb08d3fu, 0x69e806f0u,
};

static const uint32_t bshim_128_tab2[96] = {
    0x3500f302u, 0xd3386cb3u, 0x716fe664u, 0x0fa76015u, 0xadded9c6u, 0x4c165377u, 0xea4dcd28u, 0x888546d9u,
    0x26bcc08au, 0xc4f43a3bu, 0x632bb3ecu, 0x01632d9du, 0x9f9aa74eu, 0x3dd220ffu, 0xdc099ab0u, 0x7a411461u,
    0x18788e12u, 0xb6b007c3u, 0x54e78174u, 0xf31efb25u, 0x915674d6u, 0x2f8dee87u, 0xcdc56838u, 0x6bfce1e9u,
    0x0a345b9au, 0xa86bd54bu, 0x46a34efcu, 0xe4dac8adu, 0x8312425eu, 0x2149bc0fu, 0xbf8135c0u, 0x5db8af71u,
    0xfbf02922u, 0x9a27a2d3u, 0x385f1c84u, 0xd6969635u, 0x74ce0fe6u, 0x13058997u, 0xb13d0348u, 0x4f747cf9u,
    0xedabf6aau, 0x8be3705bu, 0x2a1aea0cu, 0xc85263bdu, 0x6689dd6eu, 0x04c1571fu, 0xa2f8d0d0u, 0x41304a81u,
    0xdf67c432u, 0x7d9f3de3u, 0x1bd6b794u, 0xba0e3145u, 0x5845aaf6u, 0xf67d24a7u, 0x94b49e58u, 0x32ec1809u,
    0xd12391bau, 0x6f5b0b6bu, 0x0d92851cu, 0xabc9fecdu, 0x4a01787eu, 0xe838f22fu, 0x86706be0u, 0x24a7e591u,
    0xc2df5f42u, 0x6116d8f3u, 0xff4e52a4u, 0x9d85cc55u, 0x3bbd4606u, 0xd9f4bfb7u, 0x782c3968u, 0x1663b319u,
    0xb49b2ccau, 0x52d2a67bu, 0xf10a202cu, 0x8f4199ddu, 0x2d79138eu, 0xcbb08d3fu, 0x69e806f0u, 0x081f80a1u,
    0xa656fa52u, 0x448e7403u, 0xe2c5edb4u, 0x80fd6765u, 0x1f34e116u, 0xbd6c5ac7u, 0x5ba3d478u, 0xf9db4e29u,
    0x9812c7dau, 0x364a418bu, 0xd481bb3cu, 0x72b934edu, 0x10f0ae9eu, 0xaf28284fu, 0x4d5fa200u, 0xeb971bb1u,
};

static const uint32_t bshim_128_tab3[96] = {
    0xb6b007c3u, 0x54e78174u, 0xf31efb25u, 0x915674d6u, 0x2f8dee87u, 0xcdc56838u, 0x6bfce1e9u, 0x0a345b9au,
    0xa86bd54bu, 0x46a34efcu, 0xe4dac8adu, 0x8312425eu, 0x2149bc0fu, 0xbf8135c0u, 0x5db8af71u, 0xfbf02922u,
    0x9a27a2d3u, 0x385f1c84u, 0xd6969635u, 0x74ce0fe6u, 0x13058997u, 0xb13d0348u, 0x4f747cf9u, 0xedabf6aau,
    0x8be3705bu, 0x2a1aea0cu, 0xc85263bdu, 0x6689dd6eu, 0x04c1571fu, 0xa2f8d0d0u, 0x41304a81u, 0xdf67c432u,
    0x7d9f3de3u, 0x1bd6b794u, 0xba0e3145u, 0x5845aaf6u, 0xf67d24a7u, 0x94b49e58u, 0x32ec1809u, 0xd12391bau,
    0x6f5b0b6bu, 0x0d92851cu, 0xabc9fecdu, 0x4a01787eu, 0xe838f22fu, 0x86706be0u, 0x24a7e591u, 0xc2df5f42u,
    0x6116d8f3u, 0xff4e52a4u, 0x9d85cc55u, 0x3bbd4606u, 0xd9f4bfb7u, 0x782c3968u, 0x1663b319u, 0xb49b2ccau,
    0x52d2a67bu, 0xf10a202cu, 0x8f4199ddu, 0x2d79138eu, 0xcbb08d3fu, 0x69e806f0u, 0x081f80a1u, 0xa656fa52u,
    0x448e7403u, 0xe2c5edb4u, 0x80fd6765u, 0x1f34e116u, 0xbd6c5ac7u, 0x5ba3d478u, 0xf9db4e29u, 0x9812c7dau,
    0x364a418bu, 0xd481bb3cu, 0x72b934edu, 0x10f0ae9eu, 0xaf28284fu, 0x4d5fa200u, 0xeb971bb1u, 0x89ce9562u,
    0x28060f13u, 0xc63d88c4u, 0x64750275u, 0x02ac7c26u, 0xa0e3f5d7u, 0x3f1b6f88u, 0xdd52e939u, 0x7b8a62eau,
    0x19c1dc9bu, 0xb7f9564cu, 0x5630cffdu, 0xf46849aeu, 0x929fc35fu, 0x30d73d10u, 0xcf0eb6c1u, 0x6d463072u,
};

static const uint32_t bshim_128_tab4[96] = {
    0x385f1c84u, 0xd6969635u, 0x74ce0fe6u, 0x13058997u, 0xb13d0348u, 0x4f747cf9u, 0xedabf6aau, 0x8be3705bu,
    0x2a1aea0cu, 0xc85263bdu, 0x6689dd6eu, 0x04c1571fu, 0xa2f8d0d0u, 0x41304a81u, 0xdf67c432u, 0x7d9f3de3u,
    0x1bd6b794u, 0xba0e3145u, 0x5845aaf6u, 0xf67d24a7u, 0x94b49e58u, 0x32ec1809u, 0xd12391bau, 0x6f5b0b6bu,
    0x0d92851cu, 0xabc9fecdu, 0x4a01787eu, 0xe838f22fu, 0x86706be0u, 0x24a7e591u, 0xc2df5f42u, 0x6116d8f3u,
    0xff4e52a4u, 0x9d85cc55u, 0x3bbd4606u, 0xd9f4bfb7u, 0x782c3968u, 0x1663b319u, 0xb49b2ccau, 0x52d2a67bu,
    0xf10a202cu, 0x8f4199ddu, 0x2d79138eu, 0xcbb08d3fu, 0x69e806f0u, 0x081f80a1u, 0xa656fa52u, 0x448e7403u,
    0xe2c5edb4u, 0x80fd6765u, 0x1f34e116u, 0xbd6c5ac7u, 0x5ba3d478u, 0xf9db4e29u, 0x9812c7dau, 0x364a418bu,
    0xd481bb3cu, 0x72b934edu, 0x10f0ae9eu, 0xaf28284fu, 0x4d5fa200u, 0xeb971bb1u, 0x89ce9562u, 0x28060f13u,
    0xc63d88c4u, 0x64750275u, 0x02ac7c26u, 0xa0e3f5d7u, 0x3f1b6f88u, 0xdd52e939u, 0x7b8a62eau, 0x19c1dc9bu,
    0xb7f9564cu, 0x5630cffdu, 0xf46849aeu, 0x929fc35fu, 0x30d73d10u, 0xcf0eb6c1u, 0x6d463072u, 0x0b7daa23u,
    0xa9b523d4u, 0x47ec9d85u, 0xe6241736u, 0x845b90e7u, 0x22930a98u, 0xc0ca8449u, 0x5f01fdfau, 0xfd3977abu,
    0x9b70f15cu, 0x39a86b0du, 0xd7dfe4beu, 0x76175e6fu, 0x144ed820u, 0xb28651d1u, 0x50bdcb82u, 0xeef54533u,
};

static const uint32_t bshim_128_tab5[96] = {
    0xba0e3145u, 0x5845aaf6u, 0xf67d24a7u, 0x94b49e58u, 0x32ec1809u, 0xd12391bau, 0x6f5b0b6bu, 0x0d92851cu,
    0xabc9fecdu, 0x4a01787eu, 0xe838f22fu, 0x86706be0u, 0x24a7e591u, 0xc2df5f42u, 0x6116d8f3u, 0xff4e52a4u,
    0x9d85cc55u, 0x3bbd4606u, 0xd9f4bfb7u, 0x782c3968u, 0x1663b319u, 0xb49b2ccau, 0x52d2a67bu, 0xf10a202cu,
    0x8f4199ddu, 0x2d79138eu, 0xcbb08d3fu, 0x69e806f0u, 0x081f80a1u, 0xa656fa52u, 0x448e7403u, 0xe2c5edb4u,
    0x80fd6765u, 0x1f34e116u, 0xbd6c5ac7u, 0x5ba3d478u, 0xf9db4e29u, 0x9812c7dau, 0x364a418bu, 0xd481bb3cu,
    0x72b934edu, 0x10f0ae9eu, 0xaf28284fu, 0x4d5fa200u, 0xeb971bb1u, 0x89ce9562u, 0x28060f13u, 0xc63d88c4u,
    0x64750275u, 0x02ac7c26u, 0xa0e3f5d7u, 0x3f1b6f88u, 0xdd52e939u, 0x7b8a62eau, 0x19c1dc9bu, 0xb7f9564cu,
    0x5630cffdu, 0xf46849aeu, 0x929fc35fu, 0x30d73d10u, 0xcf0eb6c1u, 0x6d463072u, 0x0b7daa23u, 0xa9b523d4u,
    0x47ec9d85u, 0xe6241736u, 0x845b90e7u, 0x22930a98u, 0xc0ca8449u, 0x5f01fdfau, 0xfd3977abu, 0x9b70f15cu,
    0x39a86b0du, 0xd7dfe4beu, 0x76175e6fu, 0x144ed820u, 0xb28651d1u, 0x50bdcb82u, 0xeef54533u, 0x8d2cbee4u,
    0x2b643895u, 0xc99bb246u, 0x67d32bf7u, 0x060aa5a8u, 0xa4421f59u, 0x4279990au, 0xe0b112bbu, 0x7ee88c6cu,
    0x1d20061du, 0xbb577fceu, 0x598ef97fu, 0xf7c67330u, 0x95fdece1u, 0x34356692u, 0xd26ce043u, 0x70a459f4u,
};

static const uint32_t bshim_128_tab6[96] = {
    0x3bbd4606u, 0xd9f4bfb7u, 0x782c3968u, 0x1663b319u, 0xb49b2ccau, 0x52d2a67bu, 0xf10a202cu, 0x8f4199ddu,
    0x2d79138eu, 0xcbb08d3fu, 0x69e806f0u, 0x081f80a1u, 0xa656fa52u, 0x448e7403u, 0xe2c5edb4u, 0x80fd6765u,
    0x1f34e116u, 0xbd6c5ac7u, 0x5ba3d478u, 0xf9db4e29u, 0x9812c7dau, 0x364a418bu, 0xd481bb3cu, 0x72b934edu,
    0x10f0ae9eu, 0xaf28284fu, 0x4d5fa200u, 0xeb971bb1u, 0x89ce9562u, 0x28060f13u, 0xc63d88c4u, 0x64750275u,
    0x02ac7c26u, 0xa0e3f5d7u, 0x3f1b6f88u, 0xdd52e939u, 0x7b8a62eau, 0x19c1dc9bu, 0xb7f9564cu, 0x5630cffdu,
    0xf46849aeu, 0x929fc35fu, 0x30d73d10u, 0xcf0eb6c1u, 0x6d463072u, 0x0b7daa23u, 0xa9b523d4u, 0x47ec9d85u,
    0xe6241736u, 0x845b90e7u, 0x22930a98u, 0xc0ca8449u, 0x5f01fdfau, 0xfd3977abu, 0x9b70f15cu, 0x39a86b0du,
    0xd7dfe4beu, 0x76175e6fu, 0x144ed820u, 0xb28651d1u, 0x50bdcb82u, 0xeef54533u, 0x8d2cbee4u, 0x2b643895u,
    0xc99bb246u, 0x67d32bf7u, 0x060aa5a8u, 0xa4421f59u, 0x4279990au, 0xe0b112bbu, 0x7ee88c6cu, 0x1d20061du,
    0xbb577fceu, 0x598ef97fu, 0xf7c67330u, 0x95fdece1u, 0x34356692u, 0xd26ce043u, 0x70a459f4u, 0x0edbd3a5u,
    0xad134d56u, 0x4b4ac707u, 0xe98240b8u, 0x87b9ba69u, 0x25f1341au, 0xc428adcbu, 0x6260277cu, 0x0097a12du,
    0x9ecf1adeu, 0x3d06948fu, 0xdb3e0e40u, 0x797587f1u, 0x17ad01a2u, 0xb5e47b53u, 0x541bf504u, 0xf2536eb5u,
};

static const uint32_t bshim_128_tab7[96] = {
    0xbd6c5ac7u, 0x5ba3d478u, 0xf9db4e29u, 0x9812c7dau, 0x364a418bu, 0xd481bb3cu, 0x72b934edu, 0x10f0ae9eu,
    0xaf28284fu, 0x4d5fa200u, 0xeb971bb1u, 0x89ce9562u, 0x28060f13u, 0xc63d88c4u, 0x64750275u, 0x02ac7c26u,
    0xa0e3f5d7u, 0x3f1b6f88u, 0xdd52e939u, 0x7b8a62eau, 0x19c1dc9bu, 0xb7f9564cu, 0x5630cffdu, 0xf46849aeu,
    0x929fc35fu, 0x30d73d10u, 0xcf0eb6c1u, 0x6d463072u, 0x0b7daa23u, 0xa9b523d4u, 0x47ec9d85u, 0xe6241736u,
    0x845b90e7u, 0x22930a98u, 0xc0ca8449u, 0x5f01fdfau, 0xfd3977abu, 0x9b70f15cu, 0x39a86b0du, 0xd7dfe4beu,
    0x76175e6fu, 0x144ed820u, 0xb28651d1u, 0x50bdcb82u, 0xeef54533u, 0x8d2cbee4u, 0x2b643895u, 0xc99bb246u,
    0x67d32bf7u, 0x060aa5a8u, 0xa4421f59u, 0x4279990au, 0xe0b112bbu, 0x7ee88c6cu, 0x1d20061du, 0xbb577fceu,
    0x598ef97fu, 0xf7c67330u, 0x95fdece1u, 0x34356692u, 0xd26ce043u, 0x70a459f4u, 0x0edbd3a5u, 0xad134d56u,
    0x4b4ac707u, 0xe98240b8u, 0x87b9ba69u, 0x25f1341au, 0xc428adcbu, 0x6260277cu, 0x0097a12du, 0x9ecf1adeu,
    0x3d06948fu, 0xdb3e0e40u, 0x797587f1u, 0x17ad01a2u, 0xb5e47b53u, 0x541bf504u, 0xf2536eb5u, 0x908ae866u,
    0x2ec26217u, 0xccf9dbc8u, 0x6b315579u, 0x0968cf2au, 0xa7a048dbu, 0x45d7c28cu, 0xe40f3c3du, 0x8246b5eeu,
    0x207e2f9fu, 0xbeb5a950u, 0x5ced2301u, 0xfb249cb2u, 0x995c1663u, 0x37939014u, 0xd5cb09c5u, 0x74028376u,
};

struct bshim_128_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_128_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_128_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_128_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_128_reset(struct bshim_128_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000f7780u;
    return 0;
}

