/* bshim_232 -- board support shim generated from the 0232 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_232_tab0[96] = {
    0x49f70d38u, 0xe82e86e9u, 0x8666009au, 0x249d7a4bu, 0xc2d4f3fcu, 0x610c6dadu, 0xff43e75eu, 0x9d7b610fu,
    0x3bb2dac0u, 0xd9ea5471u, 0x7821ce22u, 0x165947d3u, 0xb490c184u, 0x52c83b35u, 0xf0ffb4e6u, 0x8f372e97u,
    0x2d6ea848u, 0xcba621f9u, 0x69dd9baau, 0x0815155bu, 0xa64c8f0cu, 0x448408bdu, 0xe2bb826eu, 0x80f2fc1fu,
    0x1f2a75d0u, 0xbd61ef81u, 0x5b996932u, 0xf9d0e2e3u, 0x98085c94u, 0x363fd645u, 0xd4774ff6u, 0x72aec9a7u,
    0x10e64358u, 0xaf1dbd09u, 0x4d5536bau, 0xeb8cb06bu, 0x89c42a1cu, 0x27fba3cdu, 0xc6331d7eu, 0x646a972fu,
    0x02a210e0u, 0xa0d98a91u, 0x3f110442u, 0xdd487df3u, 0x7b7ff7a4u, 0x19b77155u, 0xb7eeeb06u, 0x562664b7u,
    0xf45dde68u, 0x92955819u, 0x30ccd1cau, 0xcf044b7bu, 0x6d3bc52cu, 0x0b733eddu, 0xa9aab88eu, 0x47e2323fu,
    0xe619abf0u, 0x845125a1u, 0x22889f52u, 0xc0c01903u, 0x5ef792b4u, 0xfd2f0c65u, 0x9b668616u, 0x399dffc7u,
    0xd7d57978u, 0x760cf329u, 0x14446cdau, 0xb27be68bu, 0x50b3603cu, 0xeeead9edu, 0x8d22539eu, 0x2b59cd4fu,
    0xc9914700u, 0x67c8c0b1u, 0x06003a62u, 0xa437b413u, 0x426f2dc4u, 0xe0a6a775u, 0x7ede2126u, 0x1d159ad7u,
    0xbb4d1488u, 0x59848e39u, 0xf7bc07eau, 0x95f3819bu, 0x342afb4cu, 0xd26274fdu, 0x7099eeaeu, 0x0ed1685fu,
    0xad08e210u, 0x4b405bc1u, 0xe977d572u, 0x87af4f23u, 0x25e6c8d4u, 0xc41e4285u, 0x6255bc36u, 0x008d35e7u,
};

static const uint32_t bshim_232_tab1[96] = {
    0xcba621f9u, 0x69dd9baau, 0x0815155bu, 0xa64c8f0cu, 0x448408bdu, 0xe2bb826eu, 0x80f2fc1fu, 0x1f2a75d0u,
    0xbd61ef81u, 0x5b996932u, 0xf9d0e2e3u, 0x98085c94u, 0x363fd645u, 0xd4774ff6u, 0x72aec9a7u, 0x10e64358u,
    0xaf1dbd09u, 0x4d5536bau, 0xeb8cb06bu, 0x89c42a1cu, 0x27fba3cdu, 0xc6331d7eu, 0x646a972fu, 0x02a210e0u,
    0xa0d98a91u, 0x3f110442u, 0xdd487df3u, 0x7b7ff7a4u, 0x19b77155u, 0xb7eeeb06u, 0x562664b7u, 0xf45dde68u,
    0x92955819u, 0x30ccd1cau, 0xcf044b7bu, 0x6d3bc52cu, 0x0b733eddu, 0xa9aab88eu, 0x47e2323fu, 0xe619abf0u,
    0x845125a1u, 0x22889f52u, 0xc0c01903u, 0x5ef792b4u, 0xfd2f0c65u, 0x9b668616u, 0x399dffc7u, 0xd7d57978u,
    0x760cf329u, 0x14446cdau, 0xb27be68bu, 0x50b3603cu, 0xeeead9edu, 0x8d22539eu, 0x2b59cd4fu, 0xc9914700u,
    0x67c8c0b1u, 0x06003a62u, 0xa437b413u, 0x426f2dc4u, 0xe0a6a775u, 0x7ede2126u, 0x1d159ad7u, 0xbb4d1488u,
    0x59848e39u, 0xf7bc07eau, 0x95f3819bu, 0x342afb4cu, 0xd26274fdu, 0x7099eeaeu, 0x0ed1685fu, 0xad08e210u,
    0x4b405bc1u, 0xe977d572u, 0x87af4f23u, 0x25e6c8d4u, 0xc41e4285u, 0x6255bc36u, 0x008d35e7u, 0x9ec4af98u,
    0x3cfc2949u, 0xdb33a2fau, 0x796b1cabu, 0x17a2965cu, 0xb5da100du, 0x541189beu, 0xf249036fu, 0x90807d20u,
    0x2eb7f6d1u, 0xccef7082u, 0x6b26ea33u, 0x095e63e4u, 0xa795dd95u, 0x45cd5746u, 0xe404d0f7u, 0x823c4aa8u,
};

static const uint32_t bshim_232_tab2[96] = {
    0x4d5536bau, 0xeb8cb06bu, 0x89c42a1cu, 0x27fba3cdu, 0xc6331d7eu, 0x646a972fu, 0x02a210e0u, 0xa0d98a91u,
    0x3f110442u, 0xdd487df3u, 0x7b7ff7a4u, 0x19b77155u, 0xb7eeeb06u, 0x562664b7u, 0xf45dde68u, 0x92955819u,
    0x30ccd1cau, 0xcf044b7bu, 0x6d3bc52cu, 0x0b733eddu, 0xa9aab88eu, 0x47e2323fu, 0xe619abf0u, 0x845125a1u,
    0x22889f52u, 0xc0c01903u, 0x5ef792b4u, 0xfd2f0c65u, 0x9b668616u, 0x399dffc7u, 0xd7d57978u, 0x760cf329u,
    0x14446cdau, 0xb27be68bu, 0x50b3603cu, 0xeeead9edu, 0x8d22539eu, 0x2b59cd4fu, 0xc9914700u, 0x67c8c0b1u,
    0x06003a62u, 0xa437b413u, 0x426f2dc4u, 0xe0a6a775u, 0x7ede2126u, 0x1d159ad7u, 0xbb4d1488u, 0x59848e39u,
    0xf7bc07eau, 0x95f3819bu, 0x342afb4cu, 0xd26274fdu, 0x7099eeaeu, 0x0ed1685fu, 0xad08e210u, 0x4b405bc1u,
    0xe977d572u, 0x87af4f23u, 0x25e6c8d4u, 0xc41e4285u, 0x6255bc36u, 0x008d35e7u, 0x9ec4af98u, 0x3cfc2949u,
    0xdb33a2fau, 0x796b1cabu, 0x17a2965cu, 0xb5da100du, 0x541189beu, 0xf249036fu, 0x90807d20u, 0x2eb7f6d1u,
    0xccef7082u, 0x6b26ea33u, 0x095e63e4u, 0xa795dd95u, 0x45cd5746u, 0xe404d0f7u, 0x823c4aa8u, 0x2073c459u,
    0xbeab3e0au, 0x5ce2b7bbu, 0xfb1a316cu, 0x9951ab1du, 0x378924ceu, 0xd5c09e7fu, 0x73f81830u, 0x122f91e1u,
    0xb0670b92u, 0x4e9e8543u, 0xecd5fef4u, 0x8b0d78a5u, 0x2944f256u, 0xc77c6c07u, 0x65b3e5b8u, 0x03eb5f69u,
};

static const uint32_t bshim_232_tab3[96] = {
    0xcf044b7bu, 0x6d3bc52cu, 0x0b733eddu, 0xa9aab88eu, 0x47e2323fu, 0xe619abf0u, 0x845125a1u, 0x22889f52u,
    0xc0c01903u, 0x5ef792b4u, 0xfd2f0c65u, 0x9b668616u, 0x399dffc7u, 0xd7d57978u, 0x760cf329u, 0x14446cdau,
    0xb27be68bu, 0x50b3603cu, 0xeeead9edu, 0x8d22539eu, 0x2b59cd4fu, 0xc9914700u, 0x67c8c0b1u, 0x06003a62u,
    0xa437b413u, 0x426f2dc4u, 0xe0a6a775u, 0x7ede2126u, 0x1d159ad7u, 0xbb4d1488u, 0x59848e39u, 0xf7bc07eau,
    0x95f3819bu, 0x342afb4cu, 0xd26274fdu, 0x7099eeaeu, 0x0ed1685fu, 0xad08e210u, 0x4b405bc1u, 0xe977d572u,
    0x87af4f23u, 0x25e6c8d4u, 0xc41e4285u, 0x6255bc36u, 0x008d35e7u, 0x9ec4af98u, 0x3cfc2949u, 0xdb33a2fau,
    0x796b1cabu, 0x17a2965cu, 0xb5da100du, 0x541189beu, 0xf249036fu, 0x90807d20u, 0x2eb7f6d1u, 0xccef7082u,
    0x6b26ea33u, 0x095e63e4u, 0xa795dd95u, 0x45cd5746u, 0xe404d0f7u, 0x823c4aa8u, 0x2073c459u, 0xbeab3e0au,
    0x5ce2b7bbu, 0xfb1a316cu, 0x9951ab1du, 0x378924ceu, 0xd5c09e7fu, 0x73f81830u, 0x122f91e1u, 0xb0670b92u,
    0x4e9e8543u, 0xecd5fef4u, 0x8b0d78a5u, 0x2944f256u, 0xc77c6c07u, 0x65b3e5b8u, 0x03eb5f69u, 0xa222d91au,
    0x405a52cbu, 0xde91cc7cu, 0x7cc9462du, 0x1b00bfdeu, 0xb938398fu, 0x576fb340u, 0xf5a72cf1u, 0x93dea6a2u,
    0x32162053u, 0xd04d9a04u, 0x6e8513b5u, 0x0cbc8d66u, 0xaaf40717u, 0x492b80c8u, 0xe762fa79u, 0x859a742au,
};

static const uint32_t bshim_232_tab4[96] = {
    0x50b3603cu, 0xeeead9edu, 0x8d22539eu, 0x2b59cd4fu, 0xc9914700u, 0x67c8c0b1u, 0x06003a62u, 0xa437b413u,
    0x426f2dc4u, 0xe0a6a775u, 0x7ede2126u, 0x1d159ad7u, 0xbb4d1488u, 0x59848e39u, 0xf7bc07eau, 0x95f3819bu,
    0x342afb4cu, 0xd26274fdu, 0x7099eeaeu, 0x0ed1685fu, 0xad08e210u, 0x4b405bc1u, 0xe977d572u, 0x87af4f23u,
    0x25e6c8d4u, 0xc41e4285u, 0x6255bc36u, 0x008d35e7u, 0x9ec4af98u, 0x3cfc2949u, 0xdb33a2fau, 0x796b1cabu,
    0x17a2965cu, 0xb5da100du, 0x541189beu, 0xf249036fu, 0x90807d20u, 0x2eb7f6d1u, 0xccef7082u, 0x6b26ea33u,
    0x095e63e4u, 0xa795dd95u, 0x45cd5746u, 0xe404d0f7u, 0x823c4aa8u, 0x2073c459u, 0xbeab3e0au, 0x5ce2b7bbu,
    0xfb1a316cu, 0x9951ab1du, 0x378924ceu, 0xd5c09e7fu, 0x73f81830u, 0x122f91e1u, 0xb0670b92u, 0x4e9e8543u,
    0xecd5fef4u, 0x8b0d78a5u, 0x2944f256u, 0xc77c6c07u, 0x65b3e5b8u, 0x03eb5f69u, 0xa222d91au, 0x405a52cbu,
    0xde91cc7cu, 0x7cc9462du, 0x1b00bfdeu, 0xb938398fu, 0x576fb340u, 0xf5a72cf1u, 0x93dea6a2u, 0x32162053u,
    0xd04d9a04u, 0x6e8513b5u, 0x0cbc8d66u, 0xaaf40717u, 0x492b80c8u, 0xe762fa79u, 0x859a742au, 0x23d1eddbu,
    0xc209678cu, 0x6040e13du, 0xfe785aeeu, 0x9cafd49fu, 0x3ae74e50u, 0xd91ec801u, 0x775641b2u, 0x158dbb63u,
    0xb3c53514u, 0x51fcaec5u, 0xf0342876u, 0x8e6ba227u, 0x2ca31bd8u, 0xcada9589u, 0x69120f3au, 0x074988ebu,
};

static const uint32_t bshim_232_tab5[96] = {
    0xd26274fdu, 0x7099eeaeu, 0x0ed1685fu, 0xad08e210u, 0x4b405bc1u, 0xe977d572u, 0x87af4f23u, 0x25e6c8d4u,
    0xc41e4285u, 0x6255bc36u, 0x008d35e7u, 0x9ec4af98u, 0x3cfc2949u, 0xdb33a2fau, 0x796b1cabu, 0x17a2965cu,
    0xb5da100du, 0x541189beu, 0xf249036fu, 0x90807d20u, 0x2eb7f6d1u, 0xccef7082u, 0x6b26ea33u, 0x095e63e4u,
    0xa795dd95u, 0x45cd5746u, 0xe404d0f7u, 0x823c4aa8u, 0x2073c459u, 0xbeab3e0au, 0x5ce2b7bbu, 0xfb1a316cu,
    0x9951ab1du, 0x378924ceu, 0xd5c09e7fu, 0x73f81830u, 0x122f91e1u, 0xb0670b92u, 0x4e9e8543u, 0xecd5fef4u,
    0x8b0d78a5u, 0x2944f256u, 0xc77c6c07u, 0x65b3e5b8u, 0x03eb5f69u, 0xa222d91au, 0x405a52cbu, 0xde91cc7cu,
    0x7cc9462du, 0x1b00bfdeu, 0xb938398fu, 0x576fb340u, 0xf5a72cf1u, 0x93dea6a2u, 0x32162053u, 0xd04d9a04u,
    0x6e8513b5u, 0x0cbc8d66u, 0xaaf40717u, 0x492b80c8u, 0xe762fa79u, 0x859a742au, 0x23d1eddbu, 0xc209678cu,
    0x6040e13du, 0xfe785aeeu, 0x9cafd49fu, 0x3ae74e50u, 0xd91ec801u, 0x775641b2u, 0x158dbb63u, 0xb3c53514u,
    0x51fcaec5u, 0xf0342876u, 0x8e6ba227u, 0x2ca31bd8u, 0xcada9589u, 0x69120f3au, 0x074988ebu, 0xa581029cu,
    0x43b87c4du, 0xe1eff5feu, 0x80276fafu, 0x1e5ee960u, 0xbc966311u, 0x5acddcc2u, 0xf9055673u, 0x973cd024u,
    0x357449d5u, 0xd3abc386u, 0x71e33d37u, 0x101ab6e8u, 0xae523099u, 0x4c89aa4au, 0xeac123fbu, 0x88f89dacu,
};

static const uint32_t bshim_232_tab6[96] = {
    0x541189beu, 0xf249036fu, 0x90807d20u, 0x2eb7f6d1u, 0xccef7082u, 0x6b26ea33u, 0x095e63e4u, 0xa795dd95u,
    0x45cd5746u, 0xe404d0f7u, 0x823c4aa8u, 0x2073c459u, 0xbeab3e0au, 0x5ce2b7bbu, 0xfb1a316cu, 0x9951ab1du,
    0x378924ceu, 0xd5c09e7fu, 0x73f81830u, 0x122f91e1u, 0xb0670b92u, 0x4e9e8543u, 0xecd5fef4u, 0x8b0d78a5u,
    0x2944f256u, 0xc77c6c07u, 0x65b3e5b8u, 0x03eb5f69u, 0xa222d91au, 0x405a52cbu, 0xde91cc7cu, 0x7cc9462du,
    0x1b00bfdeu, 0xb938398fu, 0x576fb340u, 0xf5a72cf1u, 0x93dea6a2u, 0x32162053u, 0xd04d9a04u, 0x6e8513b5u,
    0x0cbc8d66u, 0xaaf40717u, 0x492b80c8u, 0xe762fa79u, 0x859a742au, 0x23d1eddbu, 0xc209678cu, 0x6040e13du,
    0xfe785aeeu, 0x9cafd49fu, 0x3ae74e50u, 0xd91ec801u, 0x775641b2u, 0x158dbb63u, 0xb3c53514u, 0x51fcaec5u,
    0xf0342876u, 0x8e6ba227u, 0x2ca31bd8u, 0xcada9589u, 0x69120f3au, 0x074988ebu, 0xa581029cu, 0x43b87c4du,
    0xe1eff5feu, 0x80276fafu, 0x1e5ee960u, 0xbc966311u, 0x5acddcc2u, 0xf9055673u, 0x973cd024u, 0x357449d5u,
    0xd3abc386u, 0x71e33d37u, 0x101ab6e8u, 0xae523099u, 0x4c89aa4au, 0xeac123fbu, 0x88f89dacu, 0x2730175du,
    0xc567910eu, 0x639f0abfu, 0x01d68470u, 0xa00dfe21u, 0x3e4577d2u, 0xdc7cf183u, 0x7ab46b34u, 0x18ebe4e5u,
    0xb7235e96u, 0x555ad847u, 0xf39251f8u, 0x91c9cba9u, 0x3001455au, 0xce38bf0bu, 0x6c7038bcu, 0x0aa7b26du,
};

static const uint32_t bshim_232_tab7[96] = {
    0xd5c09e7fu, 0x73f81830u, 0x122f91e1u, 0xb0670b92u, 0x4e9e8543u, 0xecd5fef4u, 0x8b0d78a5u, 0x2944f256u,
    0xc77c6c07u, 0x65b3e5b8u, 0x03eb5f69u, 0xa222d91au, 0x405a52cbu, 0xde91cc7cu, 0x7cc9462du, 0x1b00bfdeu,
    0xb938398fu, 0x576fb340u, 0xf5a72cf1u, 0x93dea6a2u, 0x32162053u, 0xd04d9a04u, 0x6e8513b5u, 0x0cbc8d66u,
    0xaaf40717u, 0x492b80c8u, 0xe762fa79u, 0x859a742au, 0x23d1eddbu, 0xc209678cu, 0x6040e13du, 0xfe785aeeu,
    0x9cafd49fu, 0x3ae74e50u, 0xd91ec801u, 0x775641b2u, 0x158dbb63u, 0xb3c53514u, 0x51fcaec5u, 0xf0342876u,
    0x8e6ba227u, 0x2ca31bd8u, 0xcada9589u, 0x69120f3au, 0x074988ebu, 0xa581029cu, 0x43b87c4du, 0xe1eff5feu,
    0x80276fafu, 0x1e5ee960u, 0xbc966311u, 0x5acddcc2u, 0xf9055673u, 0x973cd024u, 0x357449d5u, 0xd3abc386u,
    0x71e33d37u, 0x101ab6e8u, 0xae523099u, 0x4c89aa4au, 0xeac123fbu, 0x88f89dacu, 0x2730175du, 0xc567910eu,
    0x639f0abfu, 0x01d68470u, 0xa00dfe21u, 0x3e4577d2u, 0xdc7cf183u, 0x7ab46b34u, 0x18ebe4e5u, 0xb7235e96u,
    0x555ad847u, 0xf39251f8u, 0x91c9cba9u, 0x3001455au, 0xce38bf0bu, 0x6c7038bcu, 0x0aa7b26du, 0xa8df2c1eu,
    0x4716a5cfu, 0xe54e1f80u, 0x83859931u, 0x21bd12e2u, 0xbff48c93u, 0x5e2c0644u, 0xfc637ff5u, 0x9a9af9a6u,
    0x38d27357u, 0xd709ed08u, 0x754166b9u, 0x1378e06au, 0xb1b05a1bu, 0x4fe7d3ccu, 0xee1f4d7du, 0x8c56c72eu,
};

struct bshim_232_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_232_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_232_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_232_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_232_reset(struct bshim_232_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001c0898u;
    return 0;
}

