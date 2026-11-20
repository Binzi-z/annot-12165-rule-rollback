/* bshim_271 -- board support shim generated from the 0271 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_271_tab0[96] = {
    0xd316a69du, 0x714e204eu, 0x0f8599ffu, 0xadbd13b0u, 0x4bf48d61u, 0xea2c0712u, 0x886380c3u, 0x269afa74u,
    0xc4d27425u, 0x6309edd6u, 0x01416787u, 0x9f78e138u, 0x3db05ae9u, 0xdbe7d49au, 0x7a1f4e4bu, 0x1856c7fcu,
    0xb68e41adu, 0x54c5bb5eu, 0xf2fd350fu, 0x9134aec0u, 0x2f6c2871u, 0xcda3a222u, 0x6bdb1bd3u, 0x0a129584u,
    0xa84a0f35u, 0x468188e6u, 0xe4b90297u, 0x82f07c48u, 0x2127f5f9u, 0xbf5f6faau, 0x5d96e95bu, 0xfbce630cu,
    0x9a05dcbdu, 0x383d566eu, 0xd674d01fu, 0x74ac49d0u, 0x12e3c381u, 0xb11b3d32u, 0x4f52b6e3u, 0xed8a3094u,
    0x8bc1aa45u, 0x29f923f6u, 0xc8309da7u, 0x66681758u, 0x049f9109u, 0xa2d70abau, 0x410e846bu, 0xdf45fe1cu,
    0x7d7d77cdu, 0x1bb4f17eu, 0xb9ec6b2fu, 0x5823e4e0u, 0xf65b5e91u, 0x9492d842u, 0x32ca51f3u, 0xd101cba4u,
    0x6f394555u, 0x0d70bf06u, 0xaba838b7u, 0x49dfb268u, 0xe8172c19u, 0x864ea5cau, 0x24861f7bu, 0xc2bd992cu,
    0x60f512ddu, 0xff2c8c8eu, 0x9d64063fu, 0x3b9b7ff0u, 0xd9d2f9a1u, 0x780a7352u, 0x1641ed03u, 0xb47966b4u,
    0x52b0e065u, 0xf0e85a16u, 0x8f1fd3c7u, 0x2d574d78u, 0xcb8ec729u, 0x69c640dau, 0x07fdba8bu, 0xa635343cu,
    0x446cadedu, 0xe2a4279eu, 0x80dba14fu, 0x1f131b00u, 0xbd4a94b1u, 0x5b820e62u, 0xf9b98813u, 0x97f101c4u,
    0x36287b75u, 0xd45ff526u, 0x72976ed7u, 0x10cee888u, 0xaf066239u, 0x4d3ddbeau, 0xeb75559bu, 0x89accf4cu,
};

static const uint32_t bshim_271_tab1[96] = {
    0x54c5bb5eu, 0xf2fd350fu, 0x9134aec0u, 0x2f6c2871u, 0xcda3a222u, 0x6bdb1bd3u, 0x0a129584u, 0xa84a0f35u,
    0x468188e6u, 0xe4b90297u, 0x82f07c48u, 0x2127f5f9u, 0xbf5f6faau, 0x5d96e95bu, 0xfbce630cu, 0x9a05dcbdu,
    0x383d566eu, 0xd674d01fu, 0x74ac49d0u, 0x12e3c381u, 0xb11b3d32u, 0x4f52b6e3u, 0xed8a3094u, 0x8bc1aa45u,
    0x29f923f6u, 0xc8309da7u, 0x66681758u, 0x049f9109u, 0xa2d70abau, 0x410e846bu, 0xdf45fe1cu, 0x7d7d77cdu,
    0x1bb4f17eu, 0xb9ec6b2fu, 0x5823e4e0u, 0xf65b5e91u, 0x9492d842u, 0x32ca51f3u, 0xd101cba4u, 0x6f394555u,
    0x0d70bf06u, 0xaba838b7u, 0x49dfb268u, 0xe8172c19u, 0x864ea5cau, 0x24861f7bu, 0xc2bd992cu, 0x60f512ddu,
    0xff2c8c8eu, 0x9d64063fu, 0x3b9b7ff0u, 0xd9d2f9a1u, 0x780a7352u, 0x1641ed03u, 0xb47966b4u, 0x52b0e065u,
    0xf0e85a16u, 0x8f1fd3c7u, 0x2d574d78u, 0xcb8ec729u, 0x69c640dau, 0x07fdba8bu, 0xa635343cu, 0x446cadedu,
    0xe2a4279eu, 0x80dba14fu, 0x1f131b00u, 0xbd4a94b1u, 0x5b820e62u, 0xf9b98813u, 0x97f101c4u, 0x36287b75u,
    0xd45ff526u, 0x72976ed7u, 0x10cee888u, 0xaf066239u, 0x4d3ddbeau, 0xeb75559bu, 0x89accf4cu, 0x27e448fdu,
    0xc61bc2aeu, 0x64533c5fu, 0x028ab610u, 0xa0c22fc1u, 0x3ef9a972u, 0xdd312323u, 0x7b689cd4u, 0x19a01685u,
    0xb7d79036u, 0x560f09e7u, 0xf4468398u, 0x927dfd49u, 0x30b576fau, 0xceecf0abu, 0x6d246a5cu, 0x0b5be40du,
};

static const uint32_t bshim_271_tab2[96] = {
    0xd674d01fu, 0x74ac49d0u, 0x12e3c381u, 0xb11b3d32u, 0x4f52b6e3u, 0xed8a3094u, 0x8bc1aa45u, 0x29f923f6u,
    0xc8309da7u, 0x66681758u, 0x049f9109u, 0xa2d70abau, 0x410e846bu, 0xdf45fe1cu, 0x7d7d77cdu, 0x1bb4f17eu,
    0xb9ec6b2fu, 0x5823e4e0u, 0xf65b5e91u, 0x9492d842u, 0x32ca51f3u, 0xd101cba4u, 0x6f394555u, 0x0d70bf06u,
    0xaba838b7u, 0x49dfb268u, 0xe8172c19u, 0x864ea5cau, 0x24861f7bu, 0xc2bd992cu, 0x60f512ddu, 0xff2c8c8eu,
    0x9d64063fu, 0x3b9b7ff0u, 0xd9d2f9a1u, 0x780a7352u, 0x1641ed03u, 0xb47966b4u, 0x52b0e065u, 0xf0e85a16u,
    0x8f1fd3c7u, 0x2d574d78u, 0xcb8ec729u, 0x69c640dau, 0x07fdba8bu, 0xa635343cu, 0x446cadedu, 0xe2a4279eu,
    0x80dba14fu, 0x1f131b00u, 0xbd4a94b1u, 0x5b820e62u, 0xf9b98813u, 0x97f101c4u, 0x36287b75u, 0xd45ff526u,
    0x72976ed7u, 0x10cee888u, 0xaf066239u, 0x4d3ddbeau, 0xeb75559bu, 0x89accf4cu, 0x27e448fdu, 0xc61bc2aeu,
    0x64533c5fu, 0x028ab610u, 0xa0c22fc1u, 0x3ef9a972u, 0xdd312323u, 0x7b689cd4u, 0x19a01685u, 0xb7d79036u,
    0x560f09e7u, 0xf4468398u, 0x927dfd49u, 0x30b576fau, 0xceecf0abu, 0x6d246a5cu, 0x0b5be40du, 0xa9935dbeu,
    0x47cad76fu, 0xe6025120u, 0x8439cad1u, 0x22714482u, 0xc0a8be33u, 0x5ee037e4u, 0xfd17b195u, 0x9b4f2b46u,
    0x3986a4f7u, 0xd7be1ea8u, 0x75f59859u, 0x142d120au, 0xb2648bbbu, 0x509c056cu, 0xeed37f1du, 0x8d0af8ceu,
};

static const uint32_t bshim_271_tab3[96] = {
    0x5823e4e0u, 0xf65b5e91u, 0x9492d842u, 0x32ca51f3u, 0xd101cba4u, 0x6f394555u, 0x0d70bf06u, 0xaba838b7u,
    0x49dfb268u, 0xe8172c19u, 0x864ea5cau, 0x24861f7bu, 0xc2bd992cu, 0x60f512ddu, 0xff2c8c8eu, 0x9d64063fu,
    0x3b9b7ff0u, 0xd9d2f9a1u, 0x780a7352u, 0x1641ed03u, 0xb47966b4u, 0x52b0e065u, 0xf0e85a16u, 0x8f1fd3c7u,
    0x2d574d78u, 0xcb8ec729u, 0x69c640dau, 0x07fdba8bu, 0xa635343cu, 0x446cadedu, 0xe2a4279eu, 0x80dba14fu,
    0x1f131b00u, 0xbd4a94b1u, 0x5b820e62u, 0xf9b98813u, 0x97f101c4u, 0x36287b75u, 0xd45ff526u, 0x72976ed7u,
    0x10cee888u, 0xaf066239u, 0x4d3ddbeau, 0xeb75559bu, 0x89accf4cu, 0x27e448fdu, 0xc61bc2aeu, 0x64533c5fu,
    0x028ab610u, 0xa0c22fc1u, 0x3ef9a972u, 0xdd312323u, 0x7b689cd4u, 0x19a01685u, 0xb7d79036u, 0x560f09e7u,
    0xf4468398u, 0x927dfd49u, 0x30b576fau, 0xceecf0abu, 0x6d246a5cu, 0x0b5be40du, 0xa9935dbeu, 0x47cad76fu,
    0xe6025120u, 0x8439cad1u, 0x22714482u, 0xc0a8be33u, 0x5ee037e4u, 0xfd17b195u, 0x9b4f2b46u, 0x3986a4f7u,
    0xd7be1ea8u, 0x75f59859u, 0x142d120au, 0xb2648bbbu, 0x509c056cu, 0xeed37f1du, 0x8d0af8ceu, 0x2b42727fu,
    0xc979ec30u, 0x67b165e1u, 0x05e8df92u, 0xa4205943u, 0x4257d2f4u, 0xe08f4ca5u, 0x7ec6c656u, 0x1cfe4007u,
    0xbb35b9b8u, 0x596d3369u, 0xf7a4ad1au, 0x95dc26cbu, 0x3413a07cu, 0xd24b1a2du, 0x708293deu, 0x0eba0d8fu,
};

static const uint32_t bshim_271_tab4[96] = {
    0xd9d2f9a1u, 0x780a7352u, 0x1641ed03u, 0xb47966b4u, 0x52b0e065u, 0xf0e85a16u, 0x8f1fd3c7u, 0x2d574d78u,
    0xcb8ec729u, 0x69c640dau, 0x07fdba8bu, 0xa635343cu, 0x446cadedu, 0xe2a4279eu, 0x80dba14fu, 0x1f131b00u,
    0xbd4a94b1u, 0x5b820e62u, 0xf9b98813u, 0x97f101c4u, 0x36287b75u, 0xd45ff526u, 0x72976ed7u, 0x10cee888u,
    0xaf066239u, 0x4d3ddbeau, 0xeb75559bu, 0x89accf4cu, 0x27e448fdu, 0xc61bc2aeu, 0x64533c5fu, 0x028ab610u,
    0xa0c22fc1u, 0x3ef9a972u, 0xdd312323u, 0x7b689cd4u, 0x19a01685u, 0xb7d79036u, 0x560f09e7u, 0xf4468398u,
    0x927dfd49u, 0x30b576fau, 0xceecf0abu, 0x6d246a5cu, 0x0b5be40du, 0xa9935dbeu, 0x47cad76fu, 0xe6025120u,
    0x8439cad1u, 0x22714482u, 0xc0a8be33u, 0x5ee037e4u, 0xfd17b195u, 0x9b4f2b46u, 0x3986a4f7u, 0xd7be1ea8u,
    0x75f59859u, 0x142d120au, 0xb2648bbbu, 0x509c056cu, 0xeed37f1du, 0x8d0af8ceu, 0x2b42727fu, 0xc979ec30u,
    0x67b165e1u, 0x05e8df92u, 0xa4205943u, 0x4257d2f4u, 0xe08f4ca5u, 0x7ec6c656u, 0x1cfe4007u, 0xbb35b9b8u,
    0x596d3369u, 0xf7a4ad1au, 0x95dc26cbu, 0x3413a07cu, 0xd24b1a2du, 0x708293deu, 0x0eba0d8fu, 0xacf18740u,
    0x4b2900f1u, 0xe9607aa2u, 0x8797f453u, 0x25cf6e04u, 0xc406e7b5u, 0x623e6166u, 0x0075db17u, 0x9ead54c8u,
    0x3ce4ce79u, 0xdb1c482au, 0x7953c1dbu, 0x178b3b8cu, 0xb5c2b53du, 0x53fa2eeeu, 0xf231a89fu, 0x90692250u,
};

static const uint32_t bshim_271_tab5[96] = {
    0x5b820e62u, 0xf9b98813u, 0x97f101c4u, 0x36287b75u, 0xd45ff526u, 0x72976ed7u, 0x10cee888u, 0xaf066239u,
    0x4d3ddbeau, 0xeb75559bu, 0x89accf4cu, 0x27e448fdu, 0xc61bc2aeu, 0x64533c5fu, 0x028ab610u, 0xa0c22fc1u,
    0x3ef9a972u, 0xdd312323u, 0x7b689cd4u, 0x19a01685u, 0xb7d79036u, 0x560f09e7u, 0xf4468398u, 0x927dfd49u,
    0x30b576fau, 0xceecf0abu, 0x6d246a5cu, 0x0b5be40du, 0xa9935dbeu, 0x47cad76fu, 0xe6025120u, 0x8439cad1u,
    0x22714482u, 0xc0a8be33u, 0x5ee037e4u, 0xfd17b195u, 0x9b4f2b46u, 0x3986a4f7u, 0xd7be1ea8u, 0x75f59859u,
    0x142d120au, 0xb2648bbbu, 0x509c056cu, 0xeed37f1du, 0x8d0af8ceu, 0x2b42727fu, 0xc979ec30u, 0x67b165e1u,
    0x05e8df92u, 0xa4205943u, 0x4257d2f4u, 0xe08f4ca5u, 0x7ec6c656u, 0x1cfe4007u, 0xbb35b9b8u, 0x596d3369u,
    0xf7a4ad1au, 0x95dc26cbu, 0x3413a07cu, 0xd24b1a2du, 0x708293deu, 0x0eba0d8fu, 0xacf18740u, 0x4b2900f1u,
    0xe9607aa2u, 0x8797f453u, 0x25cf6e04u, 0xc406e7b5u, 0x623e6166u, 0x0075db17u, 0x9ead54c8u, 0x3ce4ce79u,
    0xdb1c482au, 0x7953c1dbu, 0x178b3b8cu, 0xb5c2b53du, 0x53fa2eeeu, 0xf231a89fu, 0x90692250u, 0x2ea09c01u,
    0xccd815b2u, 0x6b0f8f63u, 0x09470914u, 0xa77e82c5u, 0x45b5fc76u, 0xe3ed7627u, 0x8224efd8u, 0x205c6989u,
    0xbe93e33au, 0x5ccb5cebu, 0xfb02d69cu, 0x993a504du, 0x3771c9feu, 0xd5a943afu, 0x73e0bd60u, 0x12183711u,
};

static const uint32_t bshim_271_tab6[96] = {
    0xdd312323u, 0x7b689cd4u, 0x19a01685u, 0xb7d79036u, 0x560f09e7u, 0xf4468398u, 0x927dfd49u, 0x30b576fau,
    0xceecf0abu, 0x6d246a5cu, 0x0b5be40du, 0xa9935dbeu, 0x47cad76fu, 0xe6025120u, 0x8439cad1u, 0x22714482u,
    0xc0a8be33u, 0x5ee037e4u, 0xfd17b195u, 0x9b4f2b46u, 0x3986a4f7u, 0xd7be1ea8u, 0x75f59859u, 0x142d120au,
    0xb2648bbbu, 0x509c056cu, 0xeed37f1du, 0x8d0af8ceu, 0x2b42727fu, 0xc979ec30u, 0x67b165e1u, 0x05e8df92u,
    0xa4205943u, 0x4257d2f4u, 0xe08f4ca5u, 0x7ec6c656u, 0x1cfe4007u, 0xbb35b9b8u, 0x596d3369u, 0xf7a4ad1au,
    0x95dc26cbu, 0x3413a07cu, 0xd24b1a2du, 0x708293deu, 0x0eba0d8fu, 0xacf18740u, 0x4b2900f1u, 0xe9607aa2u,
    0x8797f453u, 0x25cf6e04u, 0xc406e7b5u, 0x623e6166u, 0x0075db17u, 0x9ead54c8u, 0x3ce4ce79u, 0xdb1c482au,
    0x7953c1dbu, 0x178b3b8cu, 0xb5c2b53du, 0x53fa2eeeu, 0xf231a89fu, 0x90692250u, 0x2ea09c01u, 0xccd815b2u,
    0x6b0f8f63u, 0x09470914u, 0xa77e82c5u, 0x45b5fc76u, 0xe3ed7627u, 0x8224efd8u, 0x205c6989u, 0xbe93e33au,
    0x5ccb5cebu, 0xfb02d69cu, 0x993a504du, 0x3771c9feu, 0xd5a943afu, 0x73e0bd60u, 0x12183711u, 0xb04fb0c2u,
    0x4e872a73u, 0xecbea424u, 0x8af61dd5u, 0x292d9786u, 0xc7651137u, 0x659c8ae8u, 0x03d40499u, 0xa20b7e4au,
    0x4042f7fbu, 0xde7a71acu, 0x7cb1eb5du, 0x1ae9650eu, 0xb920debfu, 0x57585870u, 0xf58fd221u, 0x93c74bd2u,
};

static const uint32_t bshim_271_tab7[96] = {
    0x5ee037e4u, 0xfd17b195u, 0x9b4f2b46u, 0x3986a4f7u, 0xd7be1ea8u, 0x75f59859u, 0x142d120au, 0xb2648bbbu,
    0x509c056cu, 0xeed37f1du, 0x8d0af8ceu, 0x2b42727fu, 0xc979ec30u, 0x67b165e1u, 0x05e8df92u, 0xa4205943u,
    0x4257d2f4u, 0xe08f4ca5u, 0x7ec6c656u, 0x1cfe4007u, 0xbb35b9b8u, 0x596d3369u, 0xf7a4ad1au, 0x95dc26cbu,
    0x3413a07cu, 0xd24b1a2du, 0x708293deu, 0x0eba0d8fu, 0xacf18740u, 0x4b2900f1u, 0xe9607aa2u, 0x8797f453u,
    0x25cf6e04u, 0xc406e7b5u, 0x623e6166u, 0x0075db17u, 0x9ead54c8u, 0x3ce4ce79u, 0xdb1c482au, 0x7953c1dbu,
    0x178b3b8cu, 0xb5c2b53du, 0x53fa2eeeu, 0xf231a89fu, 0x90692250u, 0x2ea09c01u, 0xccd815b2u, 0x6b0f8f63u,
    0x09470914u, 0xa77e82c5u, 0x45b5fc76u, 0xe3ed7627u, 0x8224efd8u, 0x205c6989u, 0xbe93e33au, 0x5ccb5cebu,
    0xfb02d69cu, 0x993a504du, 0x3771c9feu, 0xd5a943afu, 0x73e0bd60u, 0x12183711u, 0xb04fb0c2u, 0x4e872a73u,
    0xecbea424u, 0x8af61dd5u, 0x292d9786u, 0xc7651137u, 0x659c8ae8u, 0x03d40499u, 0xa20b7e4au, 0x4042f7fbu,
    0xde7a71acu, 0x7cb1eb5du, 0x1ae9650eu, 0xb920debfu, 0x57585870u, 0xf58fd221u, 0x93c74bd2u, 0x31fec583u,
    0xd0363f34u, 0x6e6db8e5u, 0x0ca53296u, 0xaadcac47u, 0x491425f8u, 0xe74b9fa9u, 0x8583195au, 0x23ba930bu,
    0xc1f20cbcu, 0x6029866du, 0xfe61001eu, 0x9c9879cfu, 0x3acff380u, 0xd9076d31u, 0x773ee6e2u, 0x15766093u,
};

struct bshim_271_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_271_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_271_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_271_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_271_reset(struct bshim_271_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0020bf01u;
    return 0;
}

