/* bshim_084 -- board support shim generated from the 0084 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_084_tab0[96] = {
    0xd892d43cu, 0x76ca4dedu, 0x1501c79eu, 0xb339414fu, 0x5170bb00u, 0xefa834b1u, 0x8ddfae62u, 0x2c172813u,
    0xca4ea1c4u, 0x68861b75u, 0x06bd9526u, 0xa4f50ed7u, 0x432c8888u, 0xe1640239u, 0x7f9b7beau, 0x1dd2f59bu,
    0xbc0a6f4cu, 0x5a41e8fdu, 0xf87962aeu, 0x96b0dc5fu, 0x34e85610u, 0xd31fcfc1u, 0x71574972u, 0x0f8ec323u,
    0xadc63cd4u, 0x4bfdb685u, 0xea353036u, 0x886ca9e7u, 0x26a42398u, 0xc4db9d49u, 0x631316fau, 0x014a90abu,
    0x9f820a5cu, 0x3db9840du, 0xdbf0fdbeu, 0x7a28776fu, 0x185ff120u, 0xb6976ad1u, 0x54cee482u, 0xf3065e33u,
    0x913dd7e4u, 0x2f755195u, 0xcdaccb46u, 0x6be444f7u, 0x0a1bbea8u, 0xa8533859u, 0x468ab20au, 0xe4c22bbbu,
    0x82f9a56cu, 0x21311f1du, 0xbf6898ceu, 0x5da0127fu, 0xfbd78c30u, 0x9a0f05e1u, 0x38467f92u, 0xd67df943u,
    0x74b572f4u, 0x12ececa5u, 0xb1246656u, 0x4f5be007u, 0xed9359b8u, 0x8bcad369u, 0x2a024d1au, 0xc839c6cbu,
    0x6671407cu, 0x04a8ba2du, 0xa2e033deu, 0x4117ad8fu, 0xdf4f2740u, 0x7d86a0f1u, 0x1bbe1aa2u, 0xb9f59453u,
    0x582d0e04u, 0xf66487b5u, 0x949c0166u, 0x32d37b17u, 0xd10af4c8u, 0x6f426e79u, 0x0d79e82au, 0xabb161dbu,
    0x49e8db8cu, 0xe820553du, 0x8657ceeeu, 0x248f489fu, 0xc2c6c250u, 0x60fe3c01u, 0xff35b5b2u, 0x9d6d2f63u,
    0x3ba4a914u, 0xd9dc22c5u, 0x78139c76u, 0x164b1627u, 0xb4828fd8u, 0x52ba0989u, 0xf0f1833au, 0x8f28fcebu,
};

static const uint32_t bshim_084_tab1[96] = {
    0x5a41e8fdu, 0xf87962aeu, 0x96b0dc5fu, 0x34e85610u, 0xd31fcfc1u, 0x71574972u, 0x0f8ec323u, 0xadc63cd4u,
    0x4bfdb685u, 0xea353036u, 0x886ca9e7u, 0x26a42398u, 0xc4db9d49u, 0x631316fau, 0x014a90abu, 0x9f820a5cu,
    0x3db9840du, 0xdbf0fdbeu, 0x7a28776fu, 0x185ff120u, 0xb6976ad1u, 0x54cee482u, 0xf3065e33u, 0x913dd7e4u,
    0x2f755195u, 0xcdaccb46u, 0x6be444f7u, 0x0a1bbea8u, 0xa8533859u, 0x468ab20au, 0xe4c22bbbu, 0x82f9a56cu,
    0x21311f1du, 0xbf6898ceu, 0x5da0127fu, 0xfbd78c30u, 0x9a0f05e1u, 0x38467f92u, 0xd67df943u, 0x74b572f4u,
    0x12ececa5u, 0xb1246656u, 0x4f5be007u, 0xed9359b8u, 0x8bcad369u, 0x2a024d1au, 0xc839c6cbu, 0x6671407cu,
    0x04a8ba2du, 0xa2e033deu, 0x4117ad8fu, 0xdf4f2740u, 0x7d86a0f1u, 0x1bbe1aa2u, 0xb9f59453u, 0x582d0e04u,
    0xf66487b5u, 0x949c0166u, 0x32d37b17u, 0xd10af4c8u, 0x6f426e79u, 0x0d79e82au, 0xabb161dbu, 0x49e8db8cu,
    0xe820553du, 0x8657ceeeu, 0x248f489fu, 0xc2c6c250u, 0x60fe3c01u, 0xff35b5b2u, 0x9d6d2f63u, 0x3ba4a914u,
    0xd9dc22c5u, 0x78139c76u, 0x164b1627u, 0xb4828fd8u, 0x52ba0989u, 0xf0f1833au, 0x8f28fcebu, 0x2d60769cu,
    0xcb97f04du, 0x69cf69feu, 0x0806e3afu, 0xa63e5d60u, 0x4475d711u, 0xe2ad50c2u, 0x80e4ca73u, 0x1f1c4424u,
    0xbd53bdd5u, 0x5b8b3786u, 0xf9c2b137u, 0x97fa2ae8u, 0x3631a499u, 0xd4691e4au, 0x72a097fbu, 0x10d811acu,
};

static const uint32_t bshim_084_tab2[96] = {
    0xdbf0fdbeu, 0x7a28776fu, 0x185ff120u, 0xb6976ad1u, 0x54cee482u, 0xf3065e33u, 0x913dd7e4u, 0x2f755195u,
    0xcdaccb46u, 0x6be444f7u, 0x0a1bbea8u, 0xa8533859u, 0x468ab20au, 0xe4c22bbbu, 0x82f9a56cu, 0x21311f1du,
    0xbf6898ceu, 0x5da0127fu, 0xfbd78c30u, 0x9a0f05e1u, 0x38467f92u, 0xd67df943u, 0x74b572f4u, 0x12ececa5u,
    0xb1246656u, 0x4f5be007u, 0xed9359b8u, 0x8bcad369u, 0x2a024d1au, 0xc839c6cbu, 0x6671407cu, 0x04a8ba2du,
    0xa2e033deu, 0x4117ad8fu, 0xdf4f2740u, 0x7d86a0f1u, 0x1bbe1aa2u, 0xb9f59453u, 0x582d0e04u, 0xf66487b5u,
    0x949c0166u, 0x32d37b17u, 0xd10af4c8u, 0x6f426e79u, 0x0d79e82au, 0xabb161dbu, 0x49e8db8cu, 0xe820553du,
    0x8657ceeeu, 0x248f489fu, 0xc2c6c250u, 0x60fe3c01u, 0xff35b5b2u, 0x9d6d2f63u, 0x3ba4a914u, 0xd9dc22c5u,
    0x78139c76u, 0x164b1627u, 0xb4828fd8u, 0x52ba0989u, 0xf0f1833au, 0x8f28fcebu, 0x2d60769cu, 0xcb97f04du,
    0x69cf69feu, 0x0806e3afu, 0xa63e5d60u, 0x4475d711u, 0xe2ad50c2u, 0x80e4ca73u, 0x1f1c4424u, 0xbd53bdd5u,
    0x5b8b3786u, 0xf9c2b137u, 0x97fa2ae8u, 0x3631a499u, 0xd4691e4au, 0x72a097fbu, 0x10d811acu, 0xaf0f8b5du,
    0x4d47050eu, 0xeb7e7ebfu, 0x89b5f870u, 0x27ed7221u, 0xc624ebd2u, 0x645c6583u, 0x0293df34u, 0xa0cb58e5u,
    0x3f02d296u, 0xdd3a4c47u, 0x7b71c5f8u, 0x19a93fa9u, 0xb7e0b95au, 0x5618330bu, 0xf44facbcu, 0x9287266du,
};

static const uint32_t bshim_084_tab3[96] = {
    0x5da0127fu, 0xfbd78c30u, 0x9a0f05e1u, 0x38467f92u, 0xd67df943u, 0x74b572f4u, 0x12ececa5u, 0xb1246656u,
    0x4f5be007u, 0xed9359b8u, 0x8bcad369u, 0x2a024d1au, 0xc839c6cbu, 0x6671407cu, 0x04a8ba2du, 0xa2e033deu,
    0x4117ad8fu, 0xdf4f2740u, 0x7d86a0f1u, 0x1bbe1aa2u, 0xb9f59453u, 0x582d0e04u, 0xf66487b5u, 0x949c0166u,
    0x32d37b17u, 0xd10af4c8u, 0x6f426e79u, 0x0d79e82au, 0xabb161dbu, 0x49e8db8cu, 0xe820553du, 0x8657ceeeu,
    0x248f489fu, 0xc2c6c250u, 0x60fe3c01u, 0xff35b5b2u, 0x9d6d2f63u, 0x3ba4a914u, 0xd9dc22c5u, 0x78139c76u,
    0x164b1627u, 0xb4828fd8u, 0x52ba0989u, 0xf0f1833au, 0x8f28fcebu, 0x2d60769cu, 0xcb97f04du, 0x69cf69feu,
    0x0806e3afu, 0xa63e5d60u, 0x4475d711u, 0xe2ad50c2u, 0x80e4ca73u, 0x1f1c4424u, 0xbd53bdd5u, 0x5b8b3786u,
    0xf9c2b137u, 0x97fa2ae8u, 0x3631a499u, 0xd4691e4au, 0x72a097fbu, 0x10d811acu, 0xaf0f8b5du, 0x4d47050eu,
    0xeb7e7ebfu, 0x89b5f870u, 0x27ed7221u, 0xc624ebd2u, 0x645c6583u, 0x0293df34u, 0xa0cb58e5u, 0x3f02d296u,
    0xdd3a4c47u, 0x7b71c5f8u, 0x19a93fa9u, 0xb7e0b95au, 0x5618330bu, 0xf44facbcu, 0x9287266du, 0x30bea01eu,
    0xcef619cfu, 0x6d2d9380u, 0x0b650d31u, 0xa99c86e2u, 0x47d40093u, 0xe60b7a44u, 0x8442f3f5u, 0x227a6da6u,
    0xc0b1e757u, 0x5ee96108u, 0xfd20dab9u, 0x9b58546au, 0x398fce1bu, 0xd7c747ccu, 0x75fec17du, 0x14363b2eu,
};

static const uint32_t bshim_084_tab4[96] = {
    0xdf4f2740u, 0x7d86a0f1u, 0x1bbe1aa2u, 0xb9f59453u, 0x582d0e04u, 0xf66487b5u, 0x949c0166u, 0x32d37b17u,
    0xd10af4c8u, 0x6f426e79u, 0x0d79e82au, 0xabb161dbu, 0x49e8db8cu, 0xe820553du, 0x8657ceeeu, 0x248f489fu,
    0xc2c6c250u, 0x60fe3c01u, 0xff35b5b2u, 0x9d6d2f63u, 0x3ba4a914u, 0xd9dc22c5u, 0x78139c76u, 0x164b1627u,
    0xb4828fd8u, 0x52ba0989u, 0xf0f1833au, 0x8f28fcebu, 0x2d60769cu, 0xcb97f04du, 0x69cf69feu, 0x0806e3afu,
    0xa63e5d60u, 0x4475d711u, 0xe2ad50c2u, 0x80e4ca73u, 0x1f1c4424u, 0xbd53bdd5u, 0x5b8b3786u, 0xf9c2b137u,
    0x97fa2ae8u, 0x3631a499u, 0xd4691e4au, 0x72a097fbu, 0x10d811acu, 0xaf0f8b5du, 0x4d47050eu, 0xeb7e7ebfu,
    0x89b5f870u, 0x27ed7221u, 0xc624ebd2u, 0x645c6583u, 0x0293df34u, 0xa0cb58e5u, 0x3f02d296u, 0xdd3a4c47u,
    0x7b71c5f8u, 0x19a93fa9u, 0xb7e0b95au, 0x5618330bu, 0xf44facbcu, 0x9287266du, 0x30bea01eu, 0xcef619cfu,
    0x6d2d9380u, 0x0b650d31u, 0xa99c86e2u, 0x47d40093u, 0xe60b7a44u, 0x8442f3f5u, 0x227a6da6u, 0xc0b1e757u,
    0x5ee96108u, 0xfd20dab9u, 0x9b58546au, 0x398fce1bu, 0xd7c747ccu, 0x75fec17du, 0x14363b2eu, 0xb26db4dfu,
    0x50a52e90u, 0xeedca841u, 0x8d1421f2u, 0x2b4b9ba3u, 0xc9831554u, 0x67ba8f05u, 0x05f208b6u, 0xa4298267u,
    0x4260fc18u, 0xe09875c9u, 0x7ecfef7au, 0x1d07692bu, 0xbb3ee2dcu, 0x59765c8du, 0xf7add63eu, 0x95e54fefu,
};

static const uint32_t bshim_084_tab5[96] = {
    0x60fe3c01u, 0xff35b5b2u, 0x9d6d2f63u, 0x3ba4a914u, 0xd9dc22c5u, 0x78139c76u, 0x164b1627u, 0xb4828fd8u,
    0x52ba0989u, 0xf0f1833au, 0x8f28fcebu, 0x2d60769cu, 0xcb97f04du, 0x69cf69feu, 0x0806e3afu, 0xa63e5d60u,
    0x4475d711u, 0xe2ad50c2u, 0x80e4ca73u, 0x1f1c4424u, 0xbd53bdd5u, 0x5b8b3786u, 0xf9c2b137u, 0x97fa2ae8u,
    0x3631a499u, 0xd4691e4au, 0x72a097fbu, 0x10d811acu, 0xaf0f8b5du, 0x4d47050eu, 0xeb7e7ebfu, 0x89b5f870u,
    0x27ed7221u, 0xc624ebd2u, 0x645c6583u, 0x0293df34u, 0xa0cb58e5u, 0x3f02d296u, 0xdd3a4c47u, 0x7b71c5f8u,
    0x19a93fa9u, 0xb7e0b95au, 0x5618330bu, 0xf44facbcu, 0x9287266du, 0x30bea01eu, 0xcef619cfu, 0x6d2d9380u,
    0x0b650d31u, 0xa99c86e2u, 0x47d40093u, 0xe60b7a44u, 0x8442f3f5u, 0x227a6da6u, 0xc0b1e757u, 0x5ee96108u,
    0xfd20dab9u, 0x9b58546au, 0x398fce1bu, 0xd7c747ccu, 0x75fec17du, 0x14363b2eu, 0xb26db4dfu, 0x50a52e90u,
    0xeedca841u, 0x8d1421f2u, 0x2b4b9ba3u, 0xc9831554u, 0x67ba8f05u, 0x05f208b6u, 0xa4298267u, 0x4260fc18u,
    0xe09875c9u, 0x7ecfef7au, 0x1d07692bu, 0xbb3ee2dcu, 0x59765c8du, 0xf7add63eu, 0x95e54fefu, 0x341cc9a0u,
    0xd2544351u, 0x708bbd02u, 0x0ec336b3u, 0xacfab064u, 0x4b322a15u, 0xe969a3c6u, 0x87a11d77u, 0x25d89728u,
    0xc41010d9u, 0x62478a8au, 0x007f043bu, 0x9eb67decu, 0x3cedf79du, 0xdb25714eu, 0x795ceaffu, 0x179464b0u,
};

static const uint32_t bshim_084_tab6[96] = {
    0xe2ad50c2u, 0x80e4ca73u, 0x1f1c4424u, 0xbd53bdd5u, 0x5b8b3786u, 0xf9c2b137u, 0x97fa2ae8u, 0x3631a499u,
    0xd4691e4au, 0x72a097fbu, 0x10d811acu, 0xaf0f8b5du, 0x4d47050eu, 0xeb7e7ebfu, 0x89b5f870u, 0x27ed7221u,
    0xc624ebd2u, 0x645c6583u, 0x0293df34u, 0xa0cb58e5u, 0x3f02d296u, 0xdd3a4c47u, 0x7b71c5f8u, 0x19a93fa9u,
    0xb7e0b95au, 0x5618330bu, 0xf44facbcu, 0x9287266du, 0x30bea01eu, 0xcef619cfu, 0x6d2d9380u, 0x0b650d31u,
    0xa99c86e2u, 0x47d40093u, 0xe60b7a44u, 0x8442f3f5u, 0x227a6da6u, 0xc0b1e757u, 0x5ee96108u, 0xfd20dab9u,
    0x9b58546au, 0x398fce1bu, 0xd7c747ccu, 0x75fec17du, 0x14363b2eu, 0xb26db4dfu, 0x50a52e90u, 0xeedca841u,
    0x8d1421f2u, 0x2b4b9ba3u, 0xc9831554u, 0x67ba8f05u, 0x05f208b6u, 0xa4298267u, 0x4260fc18u, 0xe09875c9u,
    0x7ecfef7au, 0x1d07692bu, 0xbb3ee2dcu, 0x59765c8du, 0xf7add63eu, 0x95e54fefu, 0x341cc9a0u, 0xd2544351u,
    0x708bbd02u, 0x0ec336b3u, 0xacfab064u, 0x4b322a15u, 0xe969a3c6u, 0x87a11d77u, 0x25d89728u, 0xc41010d9u,
    0x62478a8au, 0x007f043bu, 0x9eb67decu, 0x3cedf79du, 0xdb25714eu, 0x795ceaffu, 0x179464b0u, 0xb5cbde61u,
    0x54035812u, 0xf23ad1c3u, 0x90724b74u, 0x2ea9c525u, 0xcce13ed6u, 0x6b18b887u, 0x09503238u, 0xa787abe9u,
    0x45bf259au, 0xe3f69f4bu, 0x822e18fcu, 0x206592adu, 0xbe9d0c5eu, 0x5cd4860fu, 0xfb0bffc0u, 0x99437971u,
};

static const uint32_t bshim_084_tab7[96] = {
    0x645c6583u, 0x0293df34u, 0xa0cb58e5u, 0x3f02d296u, 0xdd3a4c47u, 0x7b71c5f8u, 0x19a93fa9u, 0xb7e0b95au,
    0x5618330bu, 0xf44facbcu, 0x9287266du, 0x30bea01eu, 0xcef619cfu, 0x6d2d9380u, 0x0b650d31u, 0xa99c86e2u,
    0x47d40093u, 0xe60b7a44u, 0x8442f3f5u, 0x227a6da6u, 0xc0b1e757u, 0x5ee96108u, 0xfd20dab9u, 0x9b58546au,
    0x398fce1bu, 0xd7c747ccu, 0x75fec17du, 0x14363b2eu, 0xb26db4dfu, 0x50a52e90u, 0xeedca841u, 0x8d1421f2u,
    0x2b4b9ba3u, 0xc9831554u, 0x67ba8f05u, 0x05f208b6u, 0xa4298267u, 0x4260fc18u, 0xe09875c9u, 0x7ecfef7au,
    0x1d07692bu, 0xbb3ee2dcu, 0x59765c8du, 0xf7add63eu, 0x95e54fefu, 0x341cc9a0u, 0xd2544351u, 0x708bbd02u,
    0x0ec336b3u, 0xacfab064u, 0x4b322a15u, 0xe969a3c6u, 0x87a11d77u, 0x25d89728u, 0xc41010d9u, 0x62478a8au,
    0x007f043bu, 0x9eb67decu, 0x3cedf79du, 0xdb25714eu, 0x795ceaffu, 0x179464b0u, 0xb5cbde61u, 0x54035812u,
    0xf23ad1c3u, 0x90724b74u, 0x2ea9c525u, 0xcce13ed6u, 0x6b18b887u, 0x09503238u, 0xa787abe9u, 0x45bf259au,
    0xe3f69f4bu, 0x822e18fcu, 0x206592adu, 0xbe9d0c5eu, 0x5cd4860fu, 0xfb0bffc0u, 0x99437971u, 0x377af322u,
    0xd5b26cd3u, 0x73e9e684u, 0x12216035u, 0xb058d9e6u, 0x4e905397u, 0xecc7cd48u, 0x8aff46f9u, 0x2936c0aau,
    0xc76e3a5bu, 0x65a5b40cu, 0x03dd2dbdu, 0xa214a76eu, 0x404c211fu, 0xde839ad0u, 0x7cbb1481u, 0x1af28e32u,
};

struct bshim_084_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_084_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_084_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_084_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_084_reset(struct bshim_084_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000a266cu;
    return 0;
}

