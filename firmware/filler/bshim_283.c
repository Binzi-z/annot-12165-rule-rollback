/* bshim_283 -- board support shim generated from the 0283 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_283_tab0[96] = {
    0x5fbde981u, 0xfdf56332u, 0x9c2cdce3u, 0x3a645694u, 0xd89bd045u, 0x76d349f6u, 0x150ac3a7u, 0xb3423d58u,
    0x5179b709u, 0xefb130bau, 0x8de8aa6bu, 0x2c20241cu, 0xca579dcdu, 0x688f177eu, 0x06c6912fu, 0xa4fe0ae0u,
    0x43358491u, 0xe16cfe42u, 0x7fa477f3u, 0x1ddbf1a4u, 0xbc136b55u, 0x5a4ae506u, 0xf8825eb7u, 0x96b9d868u,
    0x34f15219u, 0xd328cbcau, 0x7160457bu, 0x0f97bf2cu, 0xadcf38ddu, 0x4c06b28eu, 0xea3e2c3fu, 0x8875a5f0u,
    0x26ad1fa1u, 0xc4e49952u, 0x631c1303u, 0x01538cb4u, 0x9f8b0665u, 0x3dc28016u, 0xdbf9f9c7u, 0x7a317378u,
    0x1868ed29u, 0xb6a066dau, 0x54d7e08bu, 0xf30f5a3cu, 0x9146d3edu, 0x2f7e4d9eu, 0xcdb5c74fu, 0x6bed4100u,
    0x0a24bab1u, 0xa85c3462u, 0x4693ae13u, 0xe4cb27c4u, 0x8302a175u, 0x213a1b26u, 0xbf7194d7u, 0x5da90e88u,
    0xfbe08839u, 0x9a1801eau, 0x384f7b9bu, 0xd686f54cu, 0x74be6efdu, 0x12f5e8aeu, 0xb12d625fu, 0x4f64dc10u,
    0xed9c55c1u, 0x8bd3cf72u, 0x2a0b4923u, 0xc842c2d4u, 0x667a3c85u, 0x04b1b636u, 0xa2e92fe7u, 0x4120a998u,
    0xdf582349u, 0x7d8f9cfau, 0x1bc716abu, 0xb9fe905cu, 0x58360a0du, 0xf66d83beu, 0x94a4fd6fu, 0x32dc7720u,
    0xd113f0d1u, 0x6f4b6a82u, 0x0d82e433u, 0xabba5de4u, 0x49f1d795u, 0xe8295146u, 0x8660caf7u, 0x249844a8u,
    0xc2cfbe59u, 0x6107380au, 0xff3eb1bbu, 0x9d762b6cu, 0x3bada51du, 0xd9e51eceu, 0x781c987fu, 0x16541230u,
};

static const uint32_t bshim_283_tab1[96] = {
    0xe16cfe42u, 0x7fa477f3u, 0x1ddbf1a4u, 0xbc136b55u, 0x5a4ae506u, 0xf8825eb7u, 0x96b9d868u, 0x34f15219u,
    0xd328cbcau, 0x7160457bu, 0x0f97bf2cu, 0xadcf38ddu, 0x4c06b28eu, 0xea3e2c3fu, 0x8875a5f0u, 0x26ad1fa1u,
    0xc4e49952u, 0x631c1303u, 0x01538cb4u, 0x9f8b0665u, 0x3dc28016u, 0xdbf9f9c7u, 0x7a317378u, 0x1868ed29u,
    0xb6a066dau, 0x54d7e08bu, 0xf30f5a3cu, 0x9146d3edu, 0x2f7e4d9eu, 0xcdb5c74fu, 0x6bed4100u, 0x0a24bab1u,
    0xa85c3462u, 0x4693ae13u, 0xe4cb27c4u, 0x8302a175u, 0x213a1b26u, 0xbf7194d7u, 0x5da90e88u, 0xfbe08839u,
    0x9a1801eau, 0x384f7b9bu, 0xd686f54cu, 0x74be6efdu, 0x12f5e8aeu, 0xb12d625fu, 0x4f64dc10u, 0xed9c55c1u,
    0x8bd3cf72u, 0x2a0b4923u, 0xc842c2d4u, 0x667a3c85u, 0x04b1b636u, 0xa2e92fe7u, 0x4120a998u, 0xdf582349u,
    0x7d8f9cfau, 0x1bc716abu, 0xb9fe905cu, 0x58360a0du, 0xf66d83beu, 0x94a4fd6fu, 0x32dc7720u, 0xd113f0d1u,
    0x6f4b6a82u, 0x0d82e433u, 0xabba5de4u, 0x49f1d795u, 0xe8295146u, 0x8660caf7u, 0x249844a8u, 0xc2cfbe59u,
    0x6107380au, 0xff3eb1bbu, 0x9d762b6cu, 0x3bada51du, 0xd9e51eceu, 0x781c987fu, 0x16541230u, 0xb48b8be1u,
    0x52c30592u, 0xf0fa7f43u, 0x8f31f8f4u, 0x2d6972a5u, 0xcba0ec56u, 0x69d86607u, 0x080fdfb8u, 0xa6475969u,
    0x447ed31au, 0xe2b64ccbu, 0x80edc67cu, 0x1f25402du, 0xbd5cb9deu, 0x5b94338fu, 0xf9cbad40u, 0x980326f1u,
};

static const uint32_t bshim_283_tab2[96] = {
    0x631c1303u, 0x01538cb4u, 0x9f8b0665u, 0x3dc28016u, 0xdbf9f9c7u, 0x7a317378u, 0x1868ed29u, 0xb6a066dau,
    0x54d7e08bu, 0xf30f5a3cu, 0x9146d3edu, 0x2f7e4d9eu, 0xcdb5c74fu, 0x6bed4100u, 0x0a24bab1u, 0xa85c3462u,
    0x4693ae13u, 0xe4cb27c4u, 0x8302a175u, 0x213a1b26u, 0xbf7194d7u, 0x5da90e88u, 0xfbe08839u, 0x9a1801eau,
    0x384f7b9bu, 0xd686f54cu, 0x74be6efdu, 0x12f5e8aeu, 0xb12d625fu, 0x4f64dc10u, 0xed9c55c1u, 0x8bd3cf72u,
    0x2a0b4923u, 0xc842c2d4u, 0x667a3c85u, 0x04b1b636u, 0xa2e92fe7u, 0x4120a998u, 0xdf582349u, 0x7d8f9cfau,
    0x1bc716abu, 0xb9fe905cu, 0x58360a0du, 0xf66d83beu, 0x94a4fd6fu, 0x32dc7720u, 0xd113f0d1u, 0x6f4b6a82u,
    0x0d82e433u, 0xabba5de4u, 0x49f1d795u, 0xe8295146u, 0x8660caf7u, 0x249844a8u, 0xc2cfbe59u, 0x6107380au,
    0xff3eb1bbu, 0x9d762b6cu, 0x3bada51du, 0xd9e51eceu, 0x781c987fu, 0x16541230u, 0xb48b8be1u, 0x52c30592u,
    0xf0fa7f43u, 0x8f31f8f4u, 0x2d6972a5u, 0xcba0ec56u, 0x69d86607u, 0x080fdfb8u, 0xa6475969u, 0x447ed31au,
    0xe2b64ccbu, 0x80edc67cu, 0x1f25402du, 0xbd5cb9deu, 0x5b94338fu, 0xf9cbad40u, 0x980326f1u, 0x363aa0a2u,
    0xd4721a53u, 0x72a99404u, 0x10e10db5u, 0xaf188766u, 0x4d500117u, 0xeb877ac8u, 0x89bef479u, 0x27f66e2au,
    0xc62de7dbu, 0x6465618cu, 0x029cdb3du, 0xa0d454eeu, 0x3f0bce9fu, 0xdd434850u, 0x7b7ac201u, 0x19b23bb2u,
};

static const uint32_t bshim_283_tab3[96] = {
    0xe4cb27c4u, 0x8302a175u, 0x213a1b26u, 0xbf7194d7u, 0x5da90e88u, 0xfbe08839u, 0x9a1801eau, 0x384f7b9bu,
    0xd686f54cu, 0x74be6efdu, 0x12f5e8aeu, 0xb12d625fu, 0x4f64dc10u, 0xed9c55c1u, 0x8bd3cf72u, 0x2a0b4923u,
    0xc842c2d4u, 0x667a3c85u, 0x04b1b636u, 0xa2e92fe7u, 0x4120a998u, 0xdf582349u, 0x7d8f9cfau, 0x1bc716abu,
    0xb9fe905cu, 0x58360a0du, 0xf66d83beu, 0x94a4fd6fu, 0x32dc7720u, 0xd113f0d1u, 0x6f4b6a82u, 0x0d82e433u,
    0xabba5de4u, 0x49f1d795u, 0xe8295146u, 0x8660caf7u, 0x249844a8u, 0xc2cfbe59u, 0x6107380au, 0xff3eb1bbu,
    0x9d762b6cu, 0x3bada51du, 0xd9e51eceu, 0x781c987fu, 0x16541230u, 0xb48b8be1u, 0x52c30592u, 0xf0fa7f43u,
    0x8f31f8f4u, 0x2d6972a5u, 0xcba0ec56u, 0x69d86607u, 0x080fdfb8u, 0xa6475969u, 0x447ed31au, 0xe2b64ccbu,
    0x80edc67cu, 0x1f25402du, 0xbd5cb9deu, 0x5b94338fu, 0xf9cbad40u, 0x980326f1u, 0x363aa0a2u, 0xd4721a53u,
    0x72a99404u, 0x10e10db5u, 0xaf188766u, 0x4d500117u, 0xeb877ac8u, 0x89bef479u, 0x27f66e2au, 0xc62de7dbu,
    0x6465618cu, 0x029cdb3du, 0xa0d454eeu, 0x3f0bce9fu, 0xdd434850u, 0x7b7ac201u, 0x19b23bb2u, 0xb7e9b563u,
    0x56212f14u, 0xf458a8c5u, 0x92902276u, 0x30c79c27u, 0xceff15d8u, 0x6d368f89u, 0x0b6e093au, 0xa9a582ebu,
    0x47dcfc9cu, 0xe614764du, 0x844beffeu, 0x228369afu, 0xc0bae360u, 0x5ef25d11u, 0xfd29d6c2u, 0x9b615073u,
};

static const uint32_t bshim_283_tab4[96] = {
    0x667a3c85u, 0x04b1b636u, 0xa2e92fe7u, 0x4120a998u, 0xdf582349u, 0x7d8f9cfau, 0x1bc716abu, 0xb9fe905cu,
    0x58360a0du, 0xf66d83beu, 0x94a4fd6fu, 0x32dc7720u, 0xd113f0d1u, 0x6f4b6a82u, 0x0d82e433u, 0xabba5de4u,
    0x49f1d795u, 0xe8295146u, 0x8660caf7u, 0x249844a8u, 0xc2cfbe59u, 0x6107380au, 0xff3eb1bbu, 0x9d762b6cu,
    0x3bada51du, 0xd9e51eceu, 0x781c987fu, 0x16541230u, 0xb48b8be1u, 0x52c30592u, 0xf0fa7f43u, 0x8f31f8f4u,
    0x2d6972a5u, 0xcba0ec56u, 0x69d86607u, 0x080fdfb8u, 0xa6475969u, 0x447ed31au, 0xe2b64ccbu, 0x80edc67cu,
    0x1f25402du, 0xbd5cb9deu, 0x5b94338fu, 0xf9cbad40u, 0x980326f1u, 0x363aa0a2u, 0xd4721a53u, 0x72a99404u,
    0x10e10db5u, 0xaf188766u, 0x4d500117u, 0xeb877ac8u, 0x89bef479u, 0x27f66e2au, 0xc62de7dbu, 0x6465618cu,
    0x029cdb3du, 0xa0d454eeu, 0x3f0bce9fu, 0xdd434850u, 0x7b7ac201u, 0x19b23bb2u, 0xb7e9b563u, 0x56212f14u,
    0xf458a8c5u, 0x92902276u, 0x30c79c27u, 0xceff15d8u, 0x6d368f89u, 0x0b6e093au, 0xa9a582ebu, 0x47dcfc9cu,
    0xe614764du, 0x844beffeu, 0x228369afu, 0xc0bae360u, 0x5ef25d11u, 0xfd29d6c2u, 0x9b615073u, 0x3998ca24u,
    0xd7d043d5u, 0x7607bd86u, 0x143f3737u, 0xb276b0e8u, 0x50ae2a99u, 0xeee5a44au, 0x8d1d1dfbu, 0x2b5497acu,
    0xc98c115du, 0x67c38b0eu, 0x05fb04bfu, 0xa4327e70u, 0x4269f821u, 0xe0a171d2u, 0x7ed8eb83u, 0x1d106534u,
};

static const uint32_t bshim_283_tab5[96] = {
    0xe8295146u, 0x8660caf7u, 0x249844a8u, 0xc2cfbe59u, 0x6107380au, 0xff3eb1bbu, 0x9d762b6cu, 0x3bada51du,
    0xd9e51eceu, 0x781c987fu, 0x16541230u, 0xb48b8be1u, 0x52c30592u, 0xf0fa7f43u, 0x8f31f8f4u, 0x2d6972a5u,
    0xcba0ec56u, 0x69d86607u, 0x080fdfb8u, 0xa6475969u, 0x447ed31au, 0xe2b64ccbu, 0x80edc67cu, 0x1f25402du,
    0xbd5cb9deu, 0x5b94338fu, 0xf9cbad40u, 0x980326f1u, 0x363aa0a2u, 0xd4721a53u, 0x72a99404u, 0x10e10db5u,
    0xaf188766u, 0x4d500117u, 0xeb877ac8u, 0x89bef479u, 0x27f66e2au, 0xc62de7dbu, 0x6465618cu, 0x029cdb3du,
    0xa0d454eeu, 0x3f0bce9fu, 0xdd434850u, 0x7b7ac201u, 0x19b23bb2u, 0xb7e9b563u, 0x56212f14u, 0xf458a8c5u,
    0x92902276u, 0x30c79c27u, 0xceff15d8u, 0x6d368f89u, 0x0b6e093au, 0xa9a582ebu, 0x47dcfc9cu, 0xe614764du,
    0x844beffeu, 0x228369afu, 0xc0bae360u, 0x5ef25d11u, 0xfd29d6c2u, 0x9b615073u, 0x3998ca24u, 0xd7d043d5u,
    0x7607bd86u, 0x143f3737u, 0xb276b0e8u, 0x50ae2a99u, 0xeee5a44au, 0x8d1d1dfbu, 0x2b5497acu, 0xc98c115du,
    0x67c38b0eu, 0x05fb04bfu, 0xa4327e70u, 0x4269f821u, 0xe0a171d2u, 0x7ed8eb83u, 0x1d106534u, 0xbb47dee5u,
    0x597f5896u, 0xf7b6d247u, 0x95ee4bf8u, 0x3425c5a9u, 0xd25d3f5au, 0x7094b90bu, 0x0ecc32bcu, 0xad03ac6du,
    0x4b3b261eu, 0xe9729fcfu, 0x87aa1980u, 0x25e19331u, 0xc4190ce2u, 0x62508693u, 0x00880044u, 0x9ebf79f5u,
};

static const uint32_t bshim_283_tab6[96] = {
    0x69d86607u, 0x080fdfb8u, 0xa6475969u, 0x447ed31au, 0xe2b64ccbu, 0x80edc67cu, 0x1f25402du, 0xbd5cb9deu,
    0x5b94338fu, 0xf9cbad40u, 0x980326f1u, 0x363aa0a2u, 0xd4721a53u, 0x72a99404u, 0x10e10db5u, 0xaf188766u,
    0x4d500117u, 0xeb877ac8u, 0x89bef479u, 0x27f66e2au, 0xc62de7dbu, 0x6465618cu, 0x029cdb3du, 0xa0d454eeu,
    0x3f0bce9fu, 0xdd434850u, 0x7b7ac201u, 0x19b23bb2u, 0xb7e9b563u, 0x56212f14u, 0xf458a8c5u, 0x92902276u,
    0x30c79c27u, 0xceff15d8u, 0x6d368f89u, 0x0b6e093au, 0xa9a582ebu, 0x47dcfc9cu, 0xe614764du, 0x844beffeu,
    0x228369afu, 0xc0bae360u, 0x5ef25d11u, 0xfd29d6c2u, 0x9b615073u, 0x3998ca24u, 0xd7d043d5u, 0x7607bd86u,
    0x143f3737u, 0xb276b0e8u, 0x50ae2a99u, 0xeee5a44au, 0x8d1d1dfbu, 0x2b5497acu, 0xc98c115du, 0x67c38b0eu,
    0x05fb04bfu, 0xa4327e70u, 0x4269f821u, 0xe0a171d2u, 0x7ed8eb83u, 0x1d106534u, 0xbb47dee5u, 0x597f5896u,
    0xf7b6d247u, 0x95ee4bf8u, 0x3425c5a9u, 0xd25d3f5au, 0x7094b90bu, 0x0ecc32bcu, 0xad03ac6du, 0x4b3b261eu,
    0xe9729fcfu, 0x87aa1980u, 0x25e19331u, 0xc4190ce2u, 0x62508693u, 0x00880044u, 0x9ebf79f5u, 0x3cf6f3a6u,
    0xdb2e6d57u, 0x7965e708u, 0x179d60b9u, 0xb5d4da6au, 0x540c541bu, 0xf243cdccu, 0x907b477du, 0x2eb2c12eu,
    0xccea3adfu, 0x6b21b490u, 0x09592e41u, 0xa790a7f2u, 0x45c821a3u, 0xe3ff9b54u, 0x82371505u, 0x206e8eb6u,
};

static const uint32_t bshim_283_tab7[96] = {
    0xeb877ac8u, 0x89bef479u, 0x27f66e2au, 0xc62de7dbu, 0x6465618cu, 0x029cdb3du, 0xa0d454eeu, 0x3f0bce9fu,
    0xdd434850u, 0x7b7ac201u, 0x19b23bb2u, 0xb7e9b563u, 0x56212f14u, 0xf458a8c5u, 0x92902276u, 0x30c79c27u,
    0xceff15d8u, 0x6d368f89u, 0x0b6e093au, 0xa9a582ebu, 0x47dcfc9cu, 0xe614764du, 0x844beffeu, 0x228369afu,
    0xc0bae360u, 0x5ef25d11u, 0xfd29d6c2u, 0x9b615073u, 0x3998ca24u, 0xd7d043d5u, 0x7607bd86u, 0x143f3737u,
    0xb276b0e8u, 0x50ae2a99u, 0xeee5a44au, 0x8d1d1dfbu, 0x2b5497acu, 0xc98c115du, 0x67c38b0eu, 0x05fb04bfu,
    0xa4327e70u, 0x4269f821u, 0xe0a171d2u, 0x7ed8eb83u, 0x1d106534u, 0xbb47dee5u, 0x597f5896u, 0xf7b6d247u,
    0x95ee4bf8u, 0x3425c5a9u, 0xd25d3f5au, 0x7094b90bu, 0x0ecc32bcu, 0xad03ac6du, 0x4b3b261eu, 0xe9729fcfu,
    0x87aa1980u, 0x25e19331u, 0xc4190ce2u, 0x62508693u, 0x00880044u, 0x9ebf79f5u, 0x3cf6f3a6u, 0xdb2e6d57u,
    0x7965e708u, 0x179d60b9u, 0xb5d4da6au, 0x540c541bu, 0xf243cdccu, 0x907b477du, 0x2eb2c12eu, 0xccea3adfu,
    0x6b21b490u, 0x09592e41u, 0xa790a7f2u, 0x45c821a3u, 0xe3ff9b54u, 0x82371505u, 0x206e8eb6u, 0xbea60867u,
    0x5cdd8218u, 0xfb14fbc9u, 0x994c757au, 0x3783ef2bu, 0xd5bb68dcu, 0x73f2e28du, 0x122a5c3eu, 0xb061d5efu,
    0x4e994fa0u, 0xecd0c951u, 0x8b084302u, 0x293fbcb3u, 0xc7773664u, 0x65aeb015u, 0x03e629c6u, 0xa21da377u,
};

struct bshim_283_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_283_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_283_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_283_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_283_reset(struct bshim_283_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00223235u;
    return 0;
}

