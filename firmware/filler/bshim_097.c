/* bshim_097 -- board support shim generated from the 0097 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_097_tab0[96] = {
    0x5b9d5cb3u, 0xf9d4d664u, 0x980c5015u, 0x3643c9c6u, 0xd47b4377u, 0x72b2bd28u, 0x10ea36d9u, 0xaf21b08au,
    0x4d592a3bu, 0xeb90a3ecu, 0x89c81d9du, 0x27ff974eu, 0xc63710ffu, 0x646e8ab0u, 0x02a60461u, 0xa0dd7e12u,
    0x3f14f7c3u, 0xdd4c7174u, 0x7b83eb25u, 0x19bb64d6u, 0xb7f2de87u, 0x562a5838u, 0xf461d1e9u, 0x92994b9au,
    0x30d0c54bu, 0xcf083efcu, 0x6d3fb8adu, 0x0b77325eu, 0xa9aeac0fu, 0x47e625c0u, 0xe61d9f71u, 0x84551922u,
    0x228c92d3u, 0xc0c40c84u, 0x5efb8635u, 0xfd32ffe6u, 0x9b6a7997u, 0x39a1f348u, 0xd7d96cf9u, 0x7610e6aau,
    0x1448605bu, 0xb27fda0cu, 0x50b753bdu, 0xeeeecd6eu, 0x8d26471fu, 0x2b5dc0d0u, 0xc9953a81u, 0x67ccb432u,
    0x06042de3u, 0xa43ba794u, 0x42732145u, 0xe0aa9af6u, 0x7ee214a7u, 0x1d198e58u, 0xbb510809u, 0x598881bau,
    0xf7bffb6bu, 0x95f7751cu, 0x342eeecdu, 0xd266687eu, 0x709de22fu, 0x0ed55be0u, 0xad0cd591u, 0x4b444f42u,
    0xe97bc8f3u, 0x87b342a4u, 0x25eabc55u, 0xc4223606u, 0x6259afb7u, 0x00912968u, 0x9ec8a319u, 0x3d001ccau,
    0xdb37967bu, 0x796f102cu, 0x17a689ddu, 0xb5de038eu, 0x54157d3fu, 0xf24cf6f0u, 0x908470a1u, 0x2ebbea52u,
    0xccf36403u, 0x6b2addb4u, 0x09625765u, 0xa799d116u, 0x45d14ac7u, 0xe408c478u, 0x82403e29u, 0x2077b7dau,
    0xbeaf318bu, 0x5ce6ab3cu, 0xfb1e24edu, 0x99559e9eu, 0x378d184fu, 0xd5c49200u, 0x73fc0bb1u, 0x12338562u,
};

static const uint32_t bshim_097_tab1[96] = {
    0xdd4c7174u, 0x7b83eb25u, 0x19bb64d6u, 0xb7f2de87u, 0x562a5838u, 0xf461d1e9u, 0x92994b9au, 0x30d0c54bu,
    0xcf083efcu, 0x6d3fb8adu, 0x0b77325eu, 0xa9aeac0fu, 0x47e625c0u, 0xe61d9f71u, 0x84551922u, 0x228c92d3u,
    0xc0c40c84u, 0x5efb8635u, 0xfd32ffe6u, 0x9b6a7997u, 0x39a1f348u, 0xd7d96cf9u, 0x7610e6aau, 0x1448605bu,
    0xb27fda0cu, 0x50b753bdu, 0xeeeecd6eu, 0x8d26471fu, 0x2b5dc0d0u, 0xc9953a81u, 0x67ccb432u, 0x06042de3u,
    0xa43ba794u, 0x42732145u, 0xe0aa9af6u, 0x7ee214a7u, 0x1d198e58u, 0xbb510809u, 0x598881bau, 0xf7bffb6bu,
    0x95f7751cu, 0x342eeecdu, 0xd266687eu, 0x709de22fu, 0x0ed55be0u, 0xad0cd591u, 0x4b444f42u, 0xe97bc8f3u,
    0x87b342a4u, 0x25eabc55u, 0xc4223606u, 0x6259afb7u, 0x00912968u, 0x9ec8a319u, 0x3d001ccau, 0xdb37967bu,
    0x796f102cu, 0x17a689ddu, 0xb5de038eu, 0x54157d3fu, 0xf24cf6f0u, 0x908470a1u, 0x2ebbea52u, 0xccf36403u,
    0x6b2addb4u, 0x09625765u, 0xa799d116u, 0x45d14ac7u, 0xe408c478u, 0x82403e29u, 0x2077b7dau, 0xbeaf318bu,
    0x5ce6ab3cu, 0xfb1e24edu, 0x99559e9eu, 0x378d184fu, 0xd5c49200u, 0x73fc0bb1u, 0x12338562u, 0xb06aff13u,
    0x4ea278c4u, 0xecd9f275u, 0x8b116c26u, 0x2948e5d7u, 0xc7805f88u, 0x65b7d939u, 0x03ef52eau, 0xa226cc9bu,
    0x405e464cu, 0xde95bffdu, 0x7ccd39aeu, 0x1b04b35fu, 0xb93c2d10u, 0x5773a6c1u, 0xf5ab2072u, 0x93e29a23u,
};

static const uint32_t bshim_097_tab2[96] = {
    0x5efb8635u, 0xfd32ffe6u, 0x9b6a7997u, 0x39a1f348u, 0xd7d96cf9u, 0x7610e6aau, 0x1448605bu, 0xb27fda0cu,
    0x50b753bdu, 0xeeeecd6eu, 0x8d26471fu, 0x2b5dc0d0u, 0xc9953a81u, 0x67ccb432u, 0x06042de3u, 0xa43ba794u,
    0x42732145u, 0xe0aa9af6u, 0x7ee214a7u, 0x1d198e58u, 0xbb510809u, 0x598881bau, 0xf7bffb6bu, 0x95f7751cu,
    0x342eeecdu, 0xd266687eu, 0x709de22fu, 0x0ed55be0u, 0xad0cd591u, 0x4b444f42u, 0xe97bc8f3u, 0x87b342a4u,
    0x25eabc55u, 0xc4223606u, 0x6259afb7u, 0x00912968u, 0x9ec8a319u, 0x3d001ccau, 0xdb37967bu, 0x796f102cu,
    0x17a689ddu, 0xb5de038eu, 0x54157d3fu, 0xf24cf6f0u, 0x908470a1u, 0x2ebbea52u, 0xccf36403u, 0x6b2addb4u,
    0x09625765u, 0xa799d116u, 0x45d14ac7u, 0xe408c478u, 0x82403e29u, 0x2077b7dau, 0xbeaf318bu, 0x5ce6ab3cu,
    0xfb1e24edu, 0x99559e9eu, 0x378d184fu, 0xd5c49200u, 0x73fc0bb1u, 0x12338562u, 0xb06aff13u, 0x4ea278c4u,
    0xecd9f275u, 0x8b116c26u, 0x2948e5d7u, 0xc7805f88u, 0x65b7d939u, 0x03ef52eau, 0xa226cc9bu, 0x405e464cu,
    0xde95bffdu, 0x7ccd39aeu, 0x1b04b35fu, 0xb93c2d10u, 0x5773a6c1u, 0xf5ab2072u, 0x93e29a23u, 0x321a13d4u,
    0xd0518d85u, 0x6e890736u, 0x0cc080e7u, 0xaaf7fa98u, 0x492f7449u, 0xe766edfau, 0x859e67abu, 0x23d5e15cu,
    0xc20d5b0du, 0x6044d4beu, 0xfe7c4e6fu, 0x9cb3c820u, 0x3aeb41d1u, 0xd922bb82u, 0x775a3533u, 0x1591aee4u,
};

static const uint32_t bshim_097_tab3[96] = {
    0xe0aa9af6u, 0x7ee214a7u, 0x1d198e58u, 0xbb510809u, 0x598881bau, 0xf7bffb6bu, 0x95f7751cu, 0x342eeecdu,
    0xd266687eu, 0x709de22fu, 0x0ed55be0u, 0xad0cd591u, 0x4b444f42u, 0xe97bc8f3u, 0x87b342a4u, 0x25eabc55u,
    0xc4223606u, 0x6259afb7u, 0x00912968u, 0x9ec8a319u, 0x3d001ccau, 0xdb37967bu, 0x796f102cu, 0x17a689ddu,
    0xb5de038eu, 0x54157d3fu, 0xf24cf6f0u, 0x908470a1u, 0x2ebbea52u, 0xccf36403u, 0x6b2addb4u, 0x09625765u,
    0xa799d116u, 0x45d14ac7u, 0xe408c478u, 0x82403e29u, 0x2077b7dau, 0xbeaf318bu, 0x5ce6ab3cu, 0xfb1e24edu,
    0x99559e9eu, 0x378d184fu, 0xd5c49200u, 0x73fc0bb1u, 0x12338562u, 0xb06aff13u, 0x4ea278c4u, 0xecd9f275u,
    0x8b116c26u, 0x2948e5d7u, 0xc7805f88u, 0x65b7d939u, 0x03ef52eau, 0xa226cc9bu, 0x405e464cu, 0xde95bffdu,
    0x7ccd39aeu, 0x1b04b35fu, 0xb93c2d10u, 0x5773a6c1u, 0xf5ab2072u, 0x93e29a23u, 0x321a13d4u, 0xd0518d85u,
    0x6e890736u, 0x0cc080e7u, 0xaaf7fa98u, 0x492f7449u, 0xe766edfau, 0x859e67abu, 0x23d5e15cu, 0xc20d5b0du,
    0x6044d4beu, 0xfe7c4e6fu, 0x9cb3c820u, 0x3aeb41d1u, 0xd922bb82u, 0x775a3533u, 0x1591aee4u, 0xb3c92895u,
    0x5200a246u, 0xf0381bf7u, 0x8e6f95a8u, 0x2ca70f59u, 0xcade890au, 0x691602bbu, 0x074d7c6cu, 0xa584f61du,
    0x43bc6fceu, 0xe1f3e97fu, 0x802b6330u, 0x1e62dce1u, 0xbc9a5692u, 0x5ad1d043u, 0xf90949f4u, 0x9740c3a5u,
};

static const uint32_t bshim_097_tab4[96] = {
    0x6259afb7u, 0x00912968u, 0x9ec8a319u, 0x3d001ccau, 0xdb37967bu, 0x796f102cu, 0x17a689ddu, 0xb5de038eu,
    0x54157d3fu, 0xf24cf6f0u, 0x908470a1u, 0x2ebbea52u, 0xccf36403u, 0x6b2addb4u, 0x09625765u, 0xa799d116u,
    0x45d14ac7u, 0xe408c478u, 0x82403e29u, 0x2077b7dau, 0xbeaf318bu, 0x5ce6ab3cu, 0xfb1e24edu, 0x99559e9eu,
    0x378d184fu, 0xd5c49200u, 0x73fc0bb1u, 0x12338562u, 0xb06aff13u, 0x4ea278c4u, 0xecd9f275u, 0x8b116c26u,
    0x2948e5d7u, 0xc7805f88u, 0x65b7d939u, 0x03ef52eau, 0xa226cc9bu, 0x405e464cu, 0xde95bffdu, 0x7ccd39aeu,
    0x1b04b35fu, 0xb93c2d10u, 0x5773a6c1u, 0xf5ab2072u, 0x93e29a23u, 0x321a13d4u, 0xd0518d85u, 0x6e890736u,
    0x0cc080e7u, 0xaaf7fa98u, 0x492f7449u, 0xe766edfau, 0x859e67abu, 0x23d5e15cu, 0xc20d5b0du, 0x6044d4beu,
    0xfe7c4e6fu, 0x9cb3c820u, 0x3aeb41d1u, 0xd922bb82u, 0x775a3533u, 0x1591aee4u, 0xb3c92895u, 0x5200a246u,
    0xf0381bf7u, 0x8e6f95a8u, 0x2ca70f59u, 0xcade890au, 0x691602bbu, 0x074d7c6cu, 0xa584f61du, 0x43bc6fceu,
    0xe1f3e97fu, 0x802b6330u, 0x1e62dce1u, 0xbc9a5692u, 0x5ad1d043u, 0xf90949f4u, 0x9740c3a5u, 0x35783d56u,
    0xd3afb707u, 0x71e730b8u, 0x101eaa69u, 0xae56241au, 0x4c8d9dcbu, 0xeac5177cu, 0x88fc912du, 0x27340adeu,
    0xc56b848fu, 0x63a2fe40u, 0x01da77f1u, 0xa011f1a2u, 0x3e496b53u, 0xdc80e504u, 0x7ab85eb5u, 0x18efd866u,
};

static const uint32_t bshim_097_tab5[96] = {
    0xe408c478u, 0x82403e29u, 0x2077b7dau, 0xbeaf318bu, 0x5ce6ab3cu, 0xfb1e24edu, 0x99559e9eu, 0x378d184fu,
    0xd5c49200u, 0x73fc0bb1u, 0x12338562u, 0xb06aff13u, 0x4ea278c4u, 0xecd9f275u, 0x8b116c26u, 0x2948e5d7u,
    0xc7805f88u, 0x65b7d939u, 0x03ef52eau, 0xa226cc9bu, 0x405e464cu, 0xde95bffdu, 0x7ccd39aeu, 0x1b04b35fu,
    0xb93c2d10u, 0x5773a6c1u, 0xf5ab2072u, 0x93e29a23u, 0x321a13d4u, 0xd0518d85u, 0x6e890736u, 0x0cc080e7u,
    0xaaf7fa98u, 0x492f7449u, 0xe766edfau, 0x859e67abu, 0x23d5e15cu, 0xc20d5b0du, 0x6044d4beu, 0xfe7c4e6fu,
    0x9cb3c820u, 0x3aeb41d1u, 0xd922bb82u, 0x775a3533u, 0x1591aee4u, 0xb3c92895u, 0x5200a246u, 0xf0381bf7u,
    0x8e6f95a8u, 0x2ca70f59u, 0xcade890au, 0x691602bbu, 0x074d7c6cu, 0xa584f61du, 0x43bc6fceu, 0xe1f3e97fu,
    0x802b6330u, 0x1e62dce1u, 0xbc9a5692u, 0x5ad1d043u, 0xf90949f4u, 0x9740c3a5u, 0x35783d56u, 0xd3afb707u,
    0x71e730b8u, 0x101eaa69u, 0xae56241au, 0x4c8d9dcbu, 0xeac5177cu, 0x88fc912du, 0x27340adeu, 0xc56b848fu,
    0x63a2fe40u, 0x01da77f1u, 0xa011f1a2u, 0x3e496b53u, 0xdc80e504u, 0x7ab85eb5u, 0x18efd866u, 0xb7275217u,
    0x555ecbc8u, 0xf3964579u, 0x91cdbf2au, 0x300538dbu, 0xce3cb28cu, 0x6c742c3du, 0x0aaba5eeu, 0xa8e31f9fu,
    0x471a9950u, 0xe5521301u, 0x83898cb2u, 0x21c10663u, 0xbff88014u, 0x5e2ff9c5u, 0xfc677376u, 0x9a9eed27u,
};

static const uint32_t bshim_097_tab6[96] = {
    0x65b7d939u, 0x03ef52eau, 0xa226cc9bu, 0x405e464cu, 0xde95bffdu, 0x7ccd39aeu, 0x1b04b35fu, 0xb93c2d10u,
    0x5773a6c1u, 0xf5ab2072u, 0x93e29a23u, 0x321a13d4u, 0xd0518d85u, 0x6e890736u, 0x0cc080e7u, 0xaaf7fa98u,
    0x492f7449u, 0xe766edfau, 0x859e67abu, 0x23d5e15cu, 0xc20d5b0du, 0x6044d4beu, 0xfe7c4e6fu, 0x9cb3c820u,
    0x3aeb41d1u, 0xd922bb82u, 0x775a3533u, 0x1591aee4u, 0xb3c92895u, 0x5200a246u, 0xf0381bf7u, 0x8e6f95a8u,
    0x2ca70f59u, 0xcade890au, 0x691602bbu, 0x074d7c6cu, 0xa584f61du, 0x43bc6fceu, 0xe1f3e97fu, 0x802b6330u,
    0x1e62dce1u, 0xbc9a5692u, 0x5ad1d043u, 0xf90949f4u, 0x9740c3a5u, 0x35783d56u, 0xd3afb707u, 0x71e730b8u,
    0x101eaa69u, 0xae56241au, 0x4c8d9dcbu, 0xeac5177cu, 0x88fc912du, 0x27340adeu, 0xc56b848fu, 0x63a2fe40u,
    0x01da77f1u, 0xa011f1a2u, 0x3e496b53u, 0xdc80e504u, 0x7ab85eb5u, 0x18efd866u, 0xb7275217u, 0x555ecbc8u,
    0xf3964579u, 0x91cdbf2au, 0x300538dbu, 0xce3cb28cu, 0x6c742c3du, 0x0aaba5eeu, 0xa8e31f9fu, 0x471a9950u,
    0xe5521301u, 0x83898cb2u, 0x21c10663u, 0xbff88014u, 0x5e2ff9c5u, 0xfc677376u, 0x9a9eed27u, 0x38d666d8u,
    0xd70de089u, 0x75455a3au, 0x137cd3ebu, 0xb1b44d9cu, 0x4febc74du, 0xee2340feu, 0x8c5abaafu, 0x2a923460u,
    0xc8c9ae11u, 0x670127c2u, 0x0538a173u, 0xa3701b24u, 0x41a794d5u, 0xdfdf0e86u, 0x7e168837u, 0x1c4e01e8u,
};

static const uint32_t bshim_097_tab7[96] = {
    0xe766edfau, 0x859e67abu, 0x23d5e15cu, 0xc20d5b0du, 0x6044d4beu, 0xfe7c4e6fu, 0x9cb3c820u, 0x3aeb41d1u,
    0xd922bb82u, 0x775a3533u, 0x1591aee4u, 0xb3c92895u, 0x5200a246u, 0xf0381bf7u, 0x8e6f95a8u, 0x2ca70f59u,
    0xcade890au, 0x691602bbu, 0x074d7c6cu, 0xa584f61du, 0x43bc6fceu, 0xe1f3e97fu, 0x802b6330u, 0x1e62dce1u,
    0xbc9a5692u, 0x5ad1d043u, 0xf90949f4u, 0x9740c3a5u, 0x35783d56u, 0xd3afb707u, 0x71e730b8u, 0x101eaa69u,
    0xae56241au, 0x4c8d9dcbu, 0xeac5177cu, 0x88fc912du, 0x27340adeu, 0xc56b848fu, 0x63a2fe40u, 0x01da77f1u,
    0xa011f1a2u, 0x3e496b53u, 0xdc80e504u, 0x7ab85eb5u, 0x18efd866u, 0xb7275217u, 0x555ecbc8u, 0xf3964579u,
    0x91cdbf2au, 0x300538dbu, 0xce3cb28cu, 0x6c742c3du, 0x0aaba5eeu, 0xa8e31f9fu, 0x471a9950u, 0xe5521301u,
    0x83898cb2u, 0x21c10663u, 0xbff88014u, 0x5e2ff9c5u, 0xfc677376u, 0x9a9eed27u, 0x38d666d8u, 0xd70de089u,
    0x75455a3au, 0x137cd3ebu, 0xb1b44d9cu, 0x4febc74du, 0xee2340feu, 0x8c5abaafu, 0x2a923460u, 0xc8c9ae11u,
    0x670127c2u, 0x0538a173u, 0xa3701b24u, 0x41a794d5u, 0xdfdf0e86u, 0x7e168837u, 0x1c4e01e8u, 0xba857b99u,
    0x58bcf54au, 0xf6f46efbu, 0x952be8acu, 0x3363625du, 0xd19adc0eu, 0x6fd255bfu, 0x0e09cf70u, 0xac414921u,
    0x4a78c2d2u, 0xe8b03c83u, 0x86e7b634u, 0x251f2fe5u, 0xc356a996u, 0x618e2347u, 0xffc59cf8u, 0x9dfd16a9u,
};

struct bshim_097_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_097_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_097_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_097_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_097_reset(struct bshim_097_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000bb88fu;
    return 0;
}

