/* bshim_284 -- board support shim generated from the 0284 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_284_tab0[96] = {
    0x56212f14u, 0xf458a8c5u, 0x92902276u, 0x30c79c27u, 0xceff15d8u, 0x6d368f89u, 0x0b6e093au, 0xa9a582ebu,
    0x47dcfc9cu, 0xe614764du, 0x844beffeu, 0x228369afu, 0xc0bae360u, 0x5ef25d11u, 0xfd29d6c2u, 0x9b615073u,
    0x3998ca24u, 0xd7d043d5u, 0x7607bd86u, 0x143f3737u, 0xb276b0e8u, 0x50ae2a99u, 0xeee5a44au, 0x8d1d1dfbu,
    0x2b5497acu, 0xc98c115du, 0x67c38b0eu, 0x05fb04bfu, 0xa4327e70u, 0x4269f821u, 0xe0a171d2u, 0x7ed8eb83u,
    0x1d106534u, 0xbb47dee5u, 0x597f5896u, 0xf7b6d247u, 0x95ee4bf8u, 0x3425c5a9u, 0xd25d3f5au, 0x7094b90bu,
    0x0ecc32bcu, 0xad03ac6du, 0x4b3b261eu, 0xe9729fcfu, 0x87aa1980u, 0x25e19331u, 0xc4190ce2u, 0x62508693u,
    0x00880044u, 0x9ebf79f5u, 0x3cf6f3a6u, 0xdb2e6d57u, 0x7965e708u, 0x179d60b9u, 0xb5d4da6au, 0x540c541bu,
    0xf243cdccu, 0x907b477du, 0x2eb2c12eu, 0xccea3adfu, 0x6b21b490u, 0x09592e41u, 0xa790a7f2u, 0x45c821a3u,
    0xe3ff9b54u, 0x82371505u, 0x206e8eb6u, 0xbea60867u, 0x5cdd8218u, 0xfb14fbc9u, 0x994c757au, 0x3783ef2bu,
    0xd5bb68dcu, 0x73f2e28du, 0x122a5c3eu, 0xb061d5efu, 0x4e994fa0u, 0xecd0c951u, 0x8b084302u, 0x293fbcb3u,
    0xc7773664u, 0x65aeb015u, 0x03e629c6u, 0xa21da377u, 0x40551d28u, 0xde8c96d9u, 0x7cc4108au, 0x1afb8a3bu,
    0xb93303ecu, 0x576a7d9du, 0xf5a1f74eu, 0x93d970ffu, 0x3210eab0u, 0xd0486461u, 0x6e7fde12u, 0x0cb757c3u,
};

static const uint32_t bshim_284_tab1[96] = {
    0xd7d043d5u, 0x7607bd86u, 0x143f3737u, 0xb276b0e8u, 0x50ae2a99u, 0xeee5a44au, 0x8d1d1dfbu, 0x2b5497acu,
    0xc98c115du, 0x67c38b0eu, 0x05fb04bfu, 0xa4327e70u, 0x4269f821u, 0xe0a171d2u, 0x7ed8eb83u, 0x1d106534u,
    0xbb47dee5u, 0x597f5896u, 0xf7b6d247u, 0x95ee4bf8u, 0x3425c5a9u, 0xd25d3f5au, 0x7094b90bu, 0x0ecc32bcu,
    0xad03ac6du, 0x4b3b261eu, 0xe9729fcfu, 0x87aa1980u, 0x25e19331u, 0xc4190ce2u, 0x62508693u, 0x00880044u,
    0x9ebf79f5u, 0x3cf6f3a6u, 0xdb2e6d57u, 0x7965e708u, 0x179d60b9u, 0xb5d4da6au, 0x540c541bu, 0xf243cdccu,
    0x907b477du, 0x2eb2c12eu, 0xccea3adfu, 0x6b21b490u, 0x09592e41u, 0xa790a7f2u, 0x45c821a3u, 0xe3ff9b54u,
    0x82371505u, 0x206e8eb6u, 0xbea60867u, 0x5cdd8218u, 0xfb14fbc9u, 0x994c757au, 0x3783ef2bu, 0xd5bb68dcu,
    0x73f2e28du, 0x122a5c3eu, 0xb061d5efu, 0x4e994fa0u, 0xecd0c951u, 0x8b084302u, 0x293fbcb3u, 0xc7773664u,
    0x65aeb015u, 0x03e629c6u, 0xa21da377u, 0x40551d28u, 0xde8c96d9u, 0x7cc4108au, 0x1afb8a3bu, 0xb93303ecu,
    0x576a7d9du, 0xf5a1f74eu, 0x93d970ffu, 0x3210eab0u, 0xd0486461u, 0x6e7fde12u, 0x0cb757c3u, 0xaaeed174u,
    0x49264b25u, 0xe75dc4d6u, 0x85953e87u, 0x23ccb838u, 0xc20431e9u, 0x603bab9au, 0xfe73254bu, 0x9caa9efcu,
    0x3ae218adu, 0xd919925eu, 0x77510c0fu, 0x158885c0u, 0xb3bfff71u, 0x51f77922u, 0xf02ef2d3u, 0x8e666c84u,
};

static const uint32_t bshim_284_tab2[96] = {
    0x597f5896u, 0xf7b6d247u, 0x95ee4bf8u, 0x3425c5a9u, 0xd25d3f5au, 0x7094b90bu, 0x0ecc32bcu, 0xad03ac6du,
    0x4b3b261eu, 0xe9729fcfu, 0x87aa1980u, 0x25e19331u, 0xc4190ce2u, 0x62508693u, 0x00880044u, 0x9ebf79f5u,
    0x3cf6f3a6u, 0xdb2e6d57u, 0x7965e708u, 0x179d60b9u, 0xb5d4da6au, 0x540c541bu, 0xf243cdccu, 0x907b477du,
    0x2eb2c12eu, 0xccea3adfu, 0x6b21b490u, 0x09592e41u, 0xa790a7f2u, 0x45c821a3u, 0xe3ff9b54u, 0x82371505u,
    0x206e8eb6u, 0xbea60867u, 0x5cdd8218u, 0xfb14fbc9u, 0x994c757au, 0x3783ef2bu, 0xd5bb68dcu, 0x73f2e28du,
    0x122a5c3eu, 0xb061d5efu, 0x4e994fa0u, 0xecd0c951u, 0x8b084302u, 0x293fbcb3u, 0xc7773664u, 0x65aeb015u,
    0x03e629c6u, 0xa21da377u, 0x40551d28u, 0xde8c96d9u, 0x7cc4108au, 0x1afb8a3bu, 0xb93303ecu, 0x576a7d9du,
    0xf5a1f74eu, 0x93d970ffu, 0x3210eab0u, 0xd0486461u, 0x6e7fde12u, 0x0cb757c3u, 0xaaeed174u, 0x49264b25u,
    0xe75dc4d6u, 0x85953e87u, 0x23ccb838u, 0xc20431e9u, 0x603bab9au, 0xfe73254bu, 0x9caa9efcu, 0x3ae218adu,
    0xd919925eu, 0x77510c0fu, 0x158885c0u, 0xb3bfff71u, 0x51f77922u, 0xf02ef2d3u, 0x8e666c84u, 0x2c9de635u,
    0xcad55fe6u, 0x690cd997u, 0x07445348u, 0xa57bccf9u, 0x43b346aau, 0xe1eac05bu, 0x80223a0cu, 0x1e59b3bdu,
    0xbc912d6eu, 0x5ac8a71fu, 0xf90020d0u, 0x97379a81u, 0x356f1432u, 0xd3a68de3u, 0x71de0794u, 0x10158145u,
};

static const uint32_t bshim_284_tab3[96] = {
    0xdb2e6d57u, 0x7965e708u, 0x179d60b9u, 0xb5d4da6au, 0x540c541bu, 0xf243cdccu, 0x907b477du, 0x2eb2c12eu,
    0xccea3adfu, 0x6b21b490u, 0x09592e41u, 0xa790a7f2u, 0x45c821a3u, 0xe3ff9b54u, 0x82371505u, 0x206e8eb6u,
    0xbea60867u, 0x5cdd8218u, 0xfb14fbc9u, 0x994c757au, 0x3783ef2bu, 0xd5bb68dcu, 0x73f2e28du, 0x122a5c3eu,
    0xb061d5efu, 0x4e994fa0u, 0xecd0c951u, 0x8b084302u, 0x293fbcb3u, 0xc7773664u, 0x65aeb015u, 0x03e629c6u,
    0xa21da377u, 0x40551d28u, 0xde8c96d9u, 0x7cc4108au, 0x1afb8a3bu, 0xb93303ecu, 0x576a7d9du, 0xf5a1f74eu,
    0x93d970ffu, 0x3210eab0u, 0xd0486461u, 0x6e7fde12u, 0x0cb757c3u, 0xaaeed174u, 0x49264b25u, 0xe75dc4d6u,
    0x85953e87u, 0x23ccb838u, 0xc20431e9u, 0x603bab9au, 0xfe73254bu, 0x9caa9efcu, 0x3ae218adu, 0xd919925eu,
    0x77510c0fu, 0x158885c0u, 0xb3bfff71u, 0x51f77922u, 0xf02ef2d3u, 0x8e666c84u, 0x2c9de635u, 0xcad55fe6u,
    0x690cd997u, 0x07445348u, 0xa57bccf9u, 0x43b346aau, 0xe1eac05bu, 0x80223a0cu, 0x1e59b3bdu, 0xbc912d6eu,
    0x5ac8a71fu, 0xf90020d0u, 0x97379a81u, 0x356f1432u, 0xd3a68de3u, 0x71de0794u, 0x10158145u, 0xae4cfaf6u,
    0x4c8474a7u, 0xeabbee58u, 0x88f36809u, 0x272ae1bau, 0xc5625b6bu, 0x6399d51cu, 0x01d14ecdu, 0xa008c87eu,
    0x3e40422fu, 0xdc77bbe0u, 0x7aaf3591u, 0x18e6af42u, 0xb71e28f3u, 0x5555a2a4u, 0xf38d1c55u, 0x91c49606u,
};

static const uint32_t bshim_284_tab4[96] = {
    0x5cdd8218u, 0xfb14fbc9u, 0x994c757au, 0x3783ef2bu, 0xd5bb68dcu, 0x73f2e28du, 0x122a5c3eu, 0xb061d5efu,
    0x4e994fa0u, 0xecd0c951u, 0x8b084302u, 0x293fbcb3u, 0xc7773664u, 0x65aeb015u, 0x03e629c6u, 0xa21da377u,
    0x40551d28u, 0xde8c96d9u, 0x7cc4108au, 0x1afb8a3bu, 0xb93303ecu, 0x576a7d9du, 0xf5a1f74eu, 0x93d970ffu,
    0x3210eab0u, 0xd0486461u, 0x6e7fde12u, 0x0cb757c3u, 0xaaeed174u, 0x49264b25u, 0xe75dc4d6u, 0x85953e87u,
    0x23ccb838u, 0xc20431e9u, 0x603bab9au, 0xfe73254bu, 0x9caa9efcu, 0x3ae218adu, 0xd919925eu, 0x77510c0fu,
    0x158885c0u, 0xb3bfff71u, 0x51f77922u, 0xf02ef2d3u, 0x8e666c84u, 0x2c9de635u, 0xcad55fe6u, 0x690cd997u,
    0x07445348u, 0xa57bccf9u, 0x43b346aau, 0xe1eac05bu, 0x80223a0cu, 0x1e59b3bdu, 0xbc912d6eu, 0x5ac8a71fu,
    0xf90020d0u, 0x97379a81u, 0x356f1432u, 0xd3a68de3u, 0x71de0794u, 0x10158145u, 0xae4cfaf6u, 0x4c8474a7u,
    0xeabbee58u, 0x88f36809u, 0x272ae1bau, 0xc5625b6bu, 0x6399d51cu, 0x01d14ecdu, 0xa008c87eu, 0x3e40422fu,
    0xdc77bbe0u, 0x7aaf3591u, 0x18e6af42u, 0xb71e28f3u, 0x5555a2a4u, 0xf38d1c55u, 0x91c49606u, 0x2ffc0fb7u,
    0xce338968u, 0x6c6b0319u, 0x0aa27ccau, 0xa8d9f67bu, 0x4711702cu, 0xe548e9ddu, 0x8380638eu, 0x21b7dd3fu,
    0xbfef56f0u, 0x5e26d0a1u, 0xfc5e4a52u, 0x9a95c403u, 0x38cd3db4u, 0xd704b765u, 0x753c3116u, 0x1373aac7u,
};

static const uint32_t bshim_284_tab5[96] = {
    0xde8c96d9u, 0x7cc4108au, 0x1afb8a3bu, 0xb93303ecu, 0x576a7d9du, 0xf5a1f74eu, 0x93d970ffu, 0x3210eab0u,
    0xd0486461u, 0x6e7fde12u, 0x0cb757c3u, 0xaaeed174u, 0x49264b25u, 0xe75dc4d6u, 0x85953e87u, 0x23ccb838u,
    0xc20431e9u, 0x603bab9au, 0xfe73254bu, 0x9caa9efcu, 0x3ae218adu, 0xd919925eu, 0x77510c0fu, 0x158885c0u,
    0xb3bfff71u, 0x51f77922u, 0xf02ef2d3u, 0x8e666c84u, 0x2c9de635u, 0xcad55fe6u, 0x690cd997u, 0x07445348u,
    0xa57bccf9u, 0x43b346aau, 0xe1eac05bu, 0x80223a0cu, 0x1e59b3bdu, 0xbc912d6eu, 0x5ac8a71fu, 0xf90020d0u,
    0x97379a81u, 0x356f1432u, 0xd3a68de3u, 0x71de0794u, 0x10158145u, 0xae4cfaf6u, 0x4c8474a7u, 0xeabbee58u,
    0x88f36809u, 0x272ae1bau, 0xc5625b6bu, 0x6399d51cu, 0x01d14ecdu, 0xa008c87eu, 0x3e40422fu, 0xdc77bbe0u,
    0x7aaf3591u, 0x18e6af42u, 0xb71e28f3u, 0x5555a2a4u, 0xf38d1c55u, 0x91c49606u, 0x2ffc0fb7u, 0xce338968u,
    0x6c6b0319u, 0x0aa27ccau, 0xa8d9f67bu, 0x4711702cu, 0xe548e9ddu, 0x8380638eu, 0x21b7dd3fu, 0xbfef56f0u,
    0x5e26d0a1u, 0xfc5e4a52u, 0x9a95c403u, 0x38cd3db4u, 0xd704b765u, 0x753c3116u, 0x1373aac7u, 0xb1ab2478u,
    0x4fe29e29u, 0xee1a17dau, 0x8c51918bu, 0x2a890b3cu, 0xc8c084edu, 0x66f7fe9eu, 0x052f784fu, 0xa366f200u,
    0x419e6bb1u, 0xdfd5e562u, 0x7e0d5f13u, 0x1c44d8c4u, 0xba7c5275u, 0x58b3cc26u, 0xf6eb45d7u, 0x9522bf88u,
};

static const uint32_t bshim_284_tab6[96] = {
    0x603bab9au, 0xfe73254bu, 0x9caa9efcu, 0x3ae218adu, 0xd919925eu, 0x77510c0fu, 0x158885c0u, 0xb3bfff71u,
    0x51f77922u, 0xf02ef2d3u, 0x8e666c84u, 0x2c9de635u, 0xcad55fe6u, 0x690cd997u, 0x07445348u, 0xa57bccf9u,
    0x43b346aau, 0xe1eac05bu, 0x80223a0cu, 0x1e59b3bdu, 0xbc912d6eu, 0x5ac8a71fu, 0xf90020d0u, 0x97379a81u,
    0x356f1432u, 0xd3a68de3u, 0x71de0794u, 0x10158145u, 0xae4cfaf6u, 0x4c8474a7u, 0xeabbee58u, 0x88f36809u,
    0x272ae1bau, 0xc5625b6bu, 0x6399d51cu, 0x01d14ecdu, 0xa008c87eu, 0x3e40422fu, 0xdc77bbe0u, 0x7aaf3591u,
    0x18e6af42u, 0xb71e28f3u, 0x5555a2a4u, 0xf38d1c55u, 0x91c49606u, 0x2ffc0fb7u, 0xce338968u, 0x6c6b0319u,
    0x0aa27ccau, 0xa8d9f67bu, 0x4711702cu, 0xe548e9ddu, 0x8380638eu, 0x21b7dd3fu, 0xbfef56f0u, 0x5e26d0a1u,
    0xfc5e4a52u, 0x9a95c403u, 0x38cd3db4u, 0xd704b765u, 0x753c3116u, 0x1373aac7u, 0xb1ab2478u, 0x4fe29e29u,
    0xee1a17dau, 0x8c51918bu, 0x2a890b3cu, 0xc8c084edu, 0x66f7fe9eu, 0x052f784fu, 0xa366f200u, 0x419e6bb1u,
    0xdfd5e562u, 0x7e0d5f13u, 0x1c44d8c4u, 0xba7c5275u, 0x58b3cc26u, 0xf6eb45d7u, 0x9522bf88u, 0x335a3939u,
    0xd191b2eau, 0x6fc92c9bu, 0x0e00a64cu, 0xac381ffdu, 0x4a6f99aeu, 0xe8a7135fu, 0x86de8d10u, 0x251606c1u,
    0xc34d8072u, 0x6184fa23u, 0xffbc73d4u, 0x9df3ed85u, 0x3c2b6736u, 0xda62e0e7u, 0x789a5a98u, 0x16d1d449u,
};

static const uint32_t bshim_284_tab7[96] = {
    0xe1eac05bu, 0x80223a0cu, 0x1e59b3bdu, 0xbc912d6eu, 0x5ac8a71fu, 0xf90020d0u, 0x97379a81u, 0x356f1432u,
    0xd3a68de3u, 0x71de0794u, 0x10158145u, 0xae4cfaf6u, 0x4c8474a7u, 0xeabbee58u, 0x88f36809u, 0x272ae1bau,
    0xc5625b6bu, 0x6399d51cu, 0x01d14ecdu, 0xa008c87eu, 0x3e40422fu, 0xdc77bbe0u, 0x7aaf3591u, 0x18e6af42u,
    0xb71e28f3u, 0x5555a2a4u, 0xf38d1c55u, 0x91c49606u, 0x2ffc0fb7u, 0xce338968u, 0x6c6b0319u, 0x0aa27ccau,
    0xa8d9f67bu, 0x4711702cu, 0xe548e9ddu, 0x8380638eu, 0x21b7dd3fu, 0xbfef56f0u, 0x5e26d0a1u, 0xfc5e4a52u,
    0x9a95c403u, 0x38cd3db4u, 0xd704b765u, 0x753c3116u, 0x1373aac7u, 0xb1ab2478u, 0x4fe29e29u, 0xee1a17dau,
    0x8c51918bu, 0x2a890b3cu, 0xc8c084edu, 0x66f7fe9eu, 0x052f784fu, 0xa366f200u, 0x419e6bb1u, 0xdfd5e562u,
    0x7e0d5f13u, 0x1c44d8c4u, 0xba7c5275u, 0x58b3cc26u, 0xf6eb45d7u, 0x9522bf88u, 0x335a3939u, 0xd191b2eau,
    0x6fc92c9bu, 0x0e00a64cu, 0xac381ffdu, 0x4a6f99aeu, 0xe8a7135fu, 0x86de8d10u, 0x251606c1u, 0xc34d8072u,
    0x6184fa23u, 0xffbc73d4u, 0x9df3ed85u, 0x3c2b6736u, 0xda62e0e7u, 0x789a5a98u, 0x16d1d449u, 0xb5094dfau,
    0x5340c7abu, 0xf178415cu, 0x8fafbb0du, 0x2de734beu, 0xcc1eae6fu, 0x6a562820u, 0x088da1d1u, 0xa6c51b82u,
    0x44fc9533u, 0xe3340ee4u, 0x816b8895u, 0x1fa30246u, 0xbdda7bf7u, 0x5c11f5a8u, 0xfa496f59u, 0x9880e90au,
};

struct bshim_284_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_284_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_284_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_284_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_284_reset(struct bshim_284_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00225124u;
    return 0;
}

