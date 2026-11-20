/* bshim_261 -- board support shim generated from the 0261 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_261_tab0[96] = {
    0x3335eedfu, 0xd16d6890u, 0x6fa4e241u, 0x0ddc5bf2u, 0xac13d5a3u, 0x4a4b4f54u, 0xe882c905u, 0x86ba42b6u,
    0x24f1bc67u, 0xc3293618u, 0x6160afc9u, 0xff98297au, 0x9dcfa32bu, 0x3c071cdcu, 0xda3e968du, 0x7876103eu,
    0x16ad89efu, 0xb4e503a0u, 0x531c7d51u, 0xf153f702u, 0x8f8b70b3u, 0x2dc2ea64u, 0xcbfa6415u, 0x6a31ddc6u,
    0x08695777u, 0xa6a0d128u, 0x44d84ad9u, 0xe30fc48au, 0x81473e3bu, 0x1f7eb7ecu, 0xbdb6319du, 0x5bedab4eu,
    0xfa2524ffu, 0x985c9eb0u, 0x36941861u, 0xd4cb9212u, 0x73030bc3u, 0x113a8574u, 0xaf71ff25u, 0x4da978d6u,
    0xebe0f287u, 0x8a186c38u, 0x284fe5e9u, 0xc6875f9au, 0x64bed94bu, 0x02f652fcu, 0xa12dccadu, 0x3f65465eu,
    0xdd9cc00fu, 0x7bd439c0u, 0x1a0bb371u, 0xb8432d22u, 0x567aa6d3u, 0xf4b22084u, 0x92e99a35u, 0x312113e6u,
    0xcf588d97u, 0x6d900748u, 0x0bc780f9u, 0xa9fefaaau, 0x4836745bu, 0xe66dee0cu, 0x84a567bdu, 0x22dce16eu,
    0xc1145b1fu, 0x5f4bd4d0u, 0xfd834e81u, 0x9bbac832u, 0x39f241e3u, 0xd829bb94u, 0x76613545u, 0x1498aef6u,
    0xb2d028a7u, 0x5107a258u, 0xef3f1c09u, 0x8d7695bau, 0x2bae0f6bu, 0xc9e5891cu, 0x681d02cdu, 0x06547c7eu,
    0xa48bf62fu, 0x42c36fe0u, 0xe0fae991u, 0x7f326342u, 0x1d69dcf3u, 0xbba156a4u, 0x59d8d055u, 0xf8104a06u,
    0x9647c3b7u, 0x347f3d68u, 0xd2b6b719u, 0x70ee30cau, 0x0f25aa7bu, 0xad5d242cu, 0x4b949dddu, 0xe9cc178eu,
};

static const uint32_t bshim_261_tab1[96] = {
    0xb4e503a0u, 0x531c7d51u, 0xf153f702u, 0x8f8b70b3u, 0x2dc2ea64u, 0xcbfa6415u, 0x6a31ddc6u, 0x08695777u,
    0xa6a0d128u, 0x44d84ad9u, 0xe30fc48au, 0x81473e3bu, 0x1f7eb7ecu, 0xbdb6319du, 0x5bedab4eu, 0xfa2524ffu,
    0x985c9eb0u, 0x36941861u, 0xd4cb9212u, 0x73030bc3u, 0x113a8574u, 0xaf71ff25u, 0x4da978d6u, 0xebe0f287u,
    0x8a186c38u, 0x284fe5e9u, 0xc6875f9au, 0x64bed94bu, 0x02f652fcu, 0xa12dccadu, 0x3f65465eu, 0xdd9cc00fu,
    0x7bd439c0u, 0x1a0bb371u, 0xb8432d22u, 0x567aa6d3u, 0xf4b22084u, 0x92e99a35u, 0x312113e6u, 0xcf588d97u,
    0x6d900748u, 0x0bc780f9u, 0xa9fefaaau, 0x4836745bu, 0xe66dee0cu, 0x84a567bdu, 0x22dce16eu, 0xc1145b1fu,
    0x5f4bd4d0u, 0xfd834e81u, 0x9bbac832u, 0x39f241e3u, 0xd829bb94u, 0x76613545u, 0x1498aef6u, 0xb2d028a7u,
    0x5107a258u, 0xef3f1c09u, 0x8d7695bau, 0x2bae0f6bu, 0xc9e5891cu, 0x681d02cdu, 0x06547c7eu, 0xa48bf62fu,
    0x42c36fe0u, 0xe0fae991u, 0x7f326342u, 0x1d69dcf3u, 0xbba156a4u, 0x59d8d055u, 0xf8104a06u, 0x9647c3b7u,
    0x347f3d68u, 0xd2b6b719u, 0x70ee30cau, 0x0f25aa7bu, 0xad5d242cu, 0x4b949dddu, 0xe9cc178eu, 0x8803913fu,
    0x263b0af0u, 0xc47284a1u, 0x62a9fe52u, 0x00e17803u, 0x9f18f1b4u, 0x3d506b65u, 0xdb87e516u, 0x79bf5ec7u,
    0x17f6d878u, 0xb62e5229u, 0x5465cbdau, 0xf29d458bu, 0x90d4bf3cu, 0x2f0c38edu, 0xcd43b29eu, 0x6b7b2c4fu,
};

static const uint32_t bshim_261_tab2[96] = {
    0x36941861u, 0xd4cb9212u, 0x73030bc3u, 0x113a8574u, 0xaf71ff25u, 0x4da978d6u, 0xebe0f287u, 0x8a186c38u,
    0x284fe5e9u, 0xc6875f9au, 0x64bed94bu, 0x02f652fcu, 0xa12dccadu, 0x3f65465eu, 0xdd9cc00fu, 0x7bd439c0u,
    0x1a0bb371u, 0xb8432d22u, 0x567aa6d3u, 0xf4b22084u, 0x92e99a35u, 0x312113e6u, 0xcf588d97u, 0x6d900748u,
    0x0bc780f9u, 0xa9fefaaau, 0x4836745bu, 0xe66dee0cu, 0x84a567bdu, 0x22dce16eu, 0xc1145b1fu, 0x5f4bd4d0u,
    0xfd834e81u, 0x9bbac832u, 0x39f241e3u, 0xd829bb94u, 0x76613545u, 0x1498aef6u, 0xb2d028a7u, 0x5107a258u,
    0xef3f1c09u, 0x8d7695bau, 0x2bae0f6bu, 0xc9e5891cu, 0x681d02cdu, 0x06547c7eu, 0xa48bf62fu, 0x42c36fe0u,
    0xe0fae991u, 0x7f326342u, 0x1d69dcf3u, 0xbba156a4u, 0x59d8d055u, 0xf8104a06u, 0x9647c3b7u, 0x347f3d68u,
    0xd2b6b719u, 0x70ee30cau, 0x0f25aa7bu, 0xad5d242cu, 0x4b949dddu, 0xe9cc178eu, 0x8803913fu, 0x263b0af0u,
    0xc47284a1u, 0x62a9fe52u, 0x00e17803u, 0x9f18f1b4u, 0x3d506b65u, 0xdb87e516u, 0x79bf5ec7u, 0x17f6d878u,
    0xb62e5229u, 0x5465cbdau, 0xf29d458bu, 0x90d4bf3cu, 0x2f0c38edu, 0xcd43b29eu, 0x6b7b2c4fu, 0x09b2a600u,
    0xa7ea1fb1u, 0x46219962u, 0xe4591313u, 0x82908cc4u, 0x20c80675u, 0xbeff8026u, 0x5d36f9d7u, 0xfb6e7388u,
    0x99a5ed39u, 0x37dd66eau, 0xd614e09bu, 0x744c5a4cu, 0x1283d3fdu, 0xb0bb4daeu, 0x4ef2c75fu, 0xed2a4110u,
};

static const uint32_t bshim_261_tab3[96] = {
    0xb8432d22u, 0x567aa6d3u, 0xf4b22084u, 0x92e99a35u, 0x312113e6u, 0xcf588d97u, 0x6d900748u, 0x0bc780f9u,
    0xa9fefaaau, 0x4836745bu, 0xe66dee0cu, 0x84a567bdu, 0x22dce16eu, 0xc1145b1fu, 0x5f4bd4d0u, 0xfd834e81u,
    0x9bbac832u, 0x39f241e3u, 0xd829bb94u, 0x76613545u, 0x1498aef6u, 0xb2d028a7u, 0x5107a258u, 0xef3f1c09u,
    0x8d7695bau, 0x2bae0f6bu, 0xc9e5891cu, 0x681d02cdu, 0x06547c7eu, 0xa48bf62fu, 0x42c36fe0u, 0xe0fae991u,
    0x7f326342u, 0x1d69dcf3u, 0xbba156a4u, 0x59d8d055u, 0xf8104a06u, 0x9647c3b7u, 0x347f3d68u, 0xd2b6b719u,
    0x70ee30cau, 0x0f25aa7bu, 0xad5d242cu, 0x4b949dddu, 0xe9cc178eu, 0x8803913fu, 0x263b0af0u, 0xc47284a1u,
    0x62a9fe52u, 0x00e17803u, 0x9f18f1b4u, 0x3d506b65u, 0xdb87e516u, 0x79bf5ec7u, 0x17f6d878u, 0xb62e5229u,
    0x5465cbdau, 0xf29d458bu, 0x90d4bf3cu, 0x2f0c38edu, 0xcd43b29eu, 0x6b7b2c4fu, 0x09b2a600u, 0xa7ea1fb1u,
    0x46219962u, 0xe4591313u, 0x82908cc4u, 0x20c80675u, 0xbeff8026u, 0x5d36f9d7u, 0xfb6e7388u, 0x99a5ed39u,
    0x37dd66eau, 0xd614e09bu, 0x744c5a4cu, 0x1283d3fdu, 0xb0bb4daeu, 0x4ef2c75fu, 0xed2a4110u, 0x8b61bac1u,
    0x29993472u, 0xc7d0ae23u, 0x660827d4u, 0x043fa185u, 0xa2771b36u, 0x40ae94e7u, 0xdee60e98u, 0x7d1d8849u,
    0x1b5501fau, 0xb98c7babu, 0x57c3f55cu, 0xf5fb6f0du, 0x9432e8beu, 0x326a626fu, 0xd0a1dc20u, 0x6ed955d1u,
};

static const uint32_t bshim_261_tab4[96] = {
    0x39f241e3u, 0xd829bb94u, 0x76613545u, 0x1498aef6u, 0xb2d028a7u, 0x5107a258u, 0xef3f1c09u, 0x8d7695bau,
    0x2bae0f6bu, 0xc9e5891cu, 0x681d02cdu, 0x06547c7eu, 0xa48bf62fu, 0x42c36fe0u, 0xe0fae991u, 0x7f326342u,
    0x1d69dcf3u, 0xbba156a4u, 0x59d8d055u, 0xf8104a06u, 0x9647c3b7u, 0x347f3d68u, 0xd2b6b719u, 0x70ee30cau,
    0x0f25aa7bu, 0xad5d242cu, 0x4b949dddu, 0xe9cc178eu, 0x8803913fu, 0x263b0af0u, 0xc47284a1u, 0x62a9fe52u,
    0x00e17803u, 0x9f18f1b4u, 0x3d506b65u, 0xdb87e516u, 0x79bf5ec7u, 0x17f6d878u, 0xb62e5229u, 0x5465cbdau,
    0xf29d458bu, 0x90d4bf3cu, 0x2f0c38edu, 0xcd43b29eu, 0x6b7b2c4fu, 0x09b2a600u, 0xa7ea1fb1u, 0x46219962u,
    0xe4591313u, 0x82908cc4u, 0x20c80675u, 0xbeff8026u, 0x5d36f9d7u, 0xfb6e7388u, 0x99a5ed39u, 0x37dd66eau,
    0xd614e09bu, 0x744c5a4cu, 0x1283d3fdu, 0xb0bb4daeu, 0x4ef2c75fu, 0xed2a4110u, 0x8b61bac1u, 0x29993472u,
    0xc7d0ae23u, 0x660827d4u, 0x043fa185u, 0xa2771b36u, 0x40ae94e7u, 0xdee60e98u, 0x7d1d8849u, 0x1b5501fau,
    0xb98c7babu, 0x57c3f55cu, 0xf5fb6f0du, 0x9432e8beu, 0x326a626fu, 0xd0a1dc20u, 0x6ed955d1u, 0x0d10cf82u,
    0xab484933u, 0x497fc2e4u, 0xe7b73c95u, 0x85eeb646u, 0x24262ff7u, 0xc25da9a8u, 0x60952359u, 0xfecc9d0au,
    0x9d0416bbu, 0x3b3b906cu, 0xd9730a1du, 0x77aa83ceu, 0x15e1fd7fu, 0xb4197730u, 0x5250f0e1u, 0xf0886a92u,
};

static const uint32_t bshim_261_tab5[96] = {
    0xbba156a4u, 0x59d8d055u, 0xf8104a06u, 0x9647c3b7u, 0x347f3d68u, 0xd2b6b719u, 0x70ee30cau, 0x0f25aa7bu,
    0xad5d242cu, 0x4b949dddu, 0xe9cc178eu, 0x8803913fu, 0x263b0af0u, 0xc47284a1u, 0x62a9fe52u, 0x00e17803u,
    0x9f18f1b4u, 0x3d506b65u, 0xdb87e516u, 0x79bf5ec7u, 0x17f6d878u, 0xb62e5229u, 0x5465cbdau, 0xf29d458bu,
    0x90d4bf3cu, 0x2f0c38edu, 0xcd43b29eu, 0x6b7b2c4fu, 0x09b2a600u, 0xa7ea1fb1u, 0x46219962u, 0xe4591313u,
    0x82908cc4u, 0x20c80675u, 0xbeff8026u, 0x5d36f9d7u, 0xfb6e7388u, 0x99a5ed39u, 0x37dd66eau, 0xd614e09bu,
    0x744c5a4cu, 0x1283d3fdu, 0xb0bb4daeu, 0x4ef2c75fu, 0xed2a4110u, 0x8b61bac1u, 0x29993472u, 0xc7d0ae23u,
    0x660827d4u, 0x043fa185u, 0xa2771b36u, 0x40ae94e7u, 0xdee60e98u, 0x7d1d8849u, 0x1b5501fau, 0xb98c7babu,
    0x57c3f55cu, 0xf5fb6f0du, 0x9432e8beu, 0x326a626fu, 0xd0a1dc20u, 0x6ed955d1u, 0x0d10cf82u, 0xab484933u,
    0x497fc2e4u, 0xe7b73c95u, 0x85eeb646u, 0x24262ff7u, 0xc25da9a8u, 0x60952359u, 0xfecc9d0au, 0x9d0416bbu,
    0x3b3b906cu, 0xd9730a1du, 0x77aa83ceu, 0x15e1fd7fu, 0xb4197730u, 0x5250f0e1u, 0xf0886a92u, 0x8ebfe443u,
    0x2cf75df4u, 0xcb2ed7a5u, 0x69665156u, 0x079dcb07u, 0xa5d544b8u, 0x440cbe69u, 0xe244381au, 0x807bb1cbu,
    0x1eb32b7cu, 0xbceaa52du, 0x5b221edeu, 0xf959988fu, 0x97911240u, 0x35c88bf1u, 0xd40005a2u, 0x72377f53u,
};

static const uint32_t bshim_261_tab6[96] = {
    0x3d506b65u, 0xdb87e516u, 0x79bf5ec7u, 0x17f6d878u, 0xb62e5229u, 0x5465cbdau, 0xf29d458bu, 0x90d4bf3cu,
    0x2f0c38edu, 0xcd43b29eu, 0x6b7b2c4fu, 0x09b2a600u, 0xa7ea1fb1u, 0x46219962u, 0xe4591313u, 0x82908cc4u,
    0x20c80675u, 0xbeff8026u, 0x5d36f9d7u, 0xfb6e7388u, 0x99a5ed39u, 0x37dd66eau, 0xd614e09bu, 0x744c5a4cu,
    0x1283d3fdu, 0xb0bb4daeu, 0x4ef2c75fu, 0xed2a4110u, 0x8b61bac1u, 0x29993472u, 0xc7d0ae23u, 0x660827d4u,
    0x043fa185u, 0xa2771b36u, 0x40ae94e7u, 0xdee60e98u, 0x7d1d8849u, 0x1b5501fau, 0xb98c7babu, 0x57c3f55cu,
    0xf5fb6f0du, 0x9432e8beu, 0x326a626fu, 0xd0a1dc20u, 0x6ed955d1u, 0x0d10cf82u, 0xab484933u, 0x497fc2e4u,
    0xe7b73c95u, 0x85eeb646u, 0x24262ff7u, 0xc25da9a8u, 0x60952359u, 0xfecc9d0au, 0x9d0416bbu, 0x3b3b906cu,
    0xd9730a1du, 0x77aa83ceu, 0x15e1fd7fu, 0xb4197730u, 0x5250f0e1u, 0xf0886a92u, 0x8ebfe443u, 0x2cf75df4u,
    0xcb2ed7a5u, 0x69665156u, 0x079dcb07u, 0xa5d544b8u, 0x440cbe69u, 0xe244381au, 0x807bb1cbu, 0x1eb32b7cu,
    0xbceaa52du, 0x5b221edeu, 0xf959988fu, 0x97911240u, 0x35c88bf1u, 0xd40005a2u, 0x72377f53u, 0x106ef904u,
    0xaea672b5u, 0x4cddec66u, 0xeb156617u, 0x894cdfc8u, 0x27845979u, 0xc5bbd32au, 0x63f34cdbu, 0x022ac68cu,
    0xa062403du, 0x3e99b9eeu, 0xdcd1339fu, 0x7b08ad50u, 0x19402701u, 0xb777a0b2u, 0x55af1a63u, 0xf3e69414u,
};

static const uint32_t bshim_261_tab7[96] = {
    0xbeff8026u, 0x5d36f9d7u, 0xfb6e7388u, 0x99a5ed39u, 0x37dd66eau, 0xd614e09bu, 0x744c5a4cu, 0x1283d3fdu,
    0xb0bb4daeu, 0x4ef2c75fu, 0xed2a4110u, 0x8b61bac1u, 0x29993472u, 0xc7d0ae23u, 0x660827d4u, 0x043fa185u,
    0xa2771b36u, 0x40ae94e7u, 0xdee60e98u, 0x7d1d8849u, 0x1b5501fau, 0xb98c7babu, 0x57c3f55cu, 0xf5fb6f0du,
    0x9432e8beu, 0x326a626fu, 0xd0a1dc20u, 0x6ed955d1u, 0x0d10cf82u, 0xab484933u, 0x497fc2e4u, 0xe7b73c95u,
    0x85eeb646u, 0x24262ff7u, 0xc25da9a8u, 0x60952359u, 0xfecc9d0au, 0x9d0416bbu, 0x3b3b906cu, 0xd9730a1du,
    0x77aa83ceu, 0x15e1fd7fu, 0xb4197730u, 0x5250f0e1u, 0xf0886a92u, 0x8ebfe443u, 0x2cf75df4u, 0xcb2ed7a5u,
    0x69665156u, 0x079dcb07u, 0xa5d544b8u, 0x440cbe69u, 0xe244381au, 0x807bb1cbu, 0x1eb32b7cu, 0xbceaa52du,
    0x5b221edeu, 0xf959988fu, 0x97911240u, 0x35c88bf1u, 0xd40005a2u, 0x72377f53u, 0x106ef904u, 0xaea672b5u,
    0x4cddec66u, 0xeb156617u, 0x894cdfc8u, 0x27845979u, 0xc5bbd32au, 0x63f34cdbu, 0x022ac68cu, 0xa062403du,
    0x3e99b9eeu, 0xdcd1339fu, 0x7b08ad50u, 0x19402701u, 0xb777a0b2u, 0x55af1a63u, 0xf3e69414u, 0x921e0dc5u,
    0x30558776u, 0xce8d0127u, 0x6cc47ad8u, 0x0afbf489u, 0xa9336e3au, 0x476ae7ebu, 0xe5a2619cu, 0x83d9db4du,
    0x221154feu, 0xc048ceafu, 0x5e804860u, 0xfcb7c211u, 0x9aef3bc2u, 0x3926b573u, 0xd75e2f24u, 0x7595a8d5u,
};

struct bshim_261_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_261_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_261_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_261_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_261_reset(struct bshim_261_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001f89abu;
    return 0;
}

