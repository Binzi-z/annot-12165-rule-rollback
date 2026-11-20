/* bshim_131 -- board support shim generated from the 0131 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_131_tab0[96] = {
    0x14cc9a39u, 0xb30413eau, 0x513b8d9bu, 0xef73074cu, 0x8daa80fdu, 0x2be1faaeu, 0xca19745fu, 0x6850ee10u,
    0x068867c1u, 0xa4bfe172u, 0x42f75b23u, 0xe12ed4d4u, 0x7f664e85u, 0x1d9dc836u, 0xbbd541e7u, 0x5a0cbb98u,
    0xf8443549u, 0x967baefau, 0x34b328abu, 0xd2eaa25cu, 0x71221c0du, 0x0f5995beu, 0xad910f6fu, 0x4bc88920u,
    0xea0002d1u, 0x88377c82u, 0x266ef633u, 0xc4a66fe4u, 0x62dde995u, 0x01156346u, 0x9f4cdcf7u, 0x3d8456a8u,
    0xdbbbd059u, 0x79f34a0au, 0x182ac3bbu, 0xb6623d6cu, 0x5499b71du, 0xf2d130ceu, 0x9108aa7fu, 0x2f402430u,
    0xcd779de1u, 0x6baf1792u, 0x09e69143u, 0xa81e0af4u, 0x465584a5u, 0xe48cfe56u, 0x82c47807u, 0x20fbf1b8u,
    0xbf336b69u, 0x5d6ae51au, 0xfba25ecbu, 0x99d9d87cu, 0x3811522du, 0xd648cbdeu, 0x7480458fu, 0x12b7bf40u,
    0xb0ef38f1u, 0x4f26b2a2u, 0xed5e2c53u, 0x8b95a604u, 0x29cd1fb5u, 0xc8049966u, 0x663c1317u, 0x04738cc8u,
    0xa2ab0679u, 0x40e2802au, 0xdf19f9dbu, 0x7d51738cu, 0x1b88ed3du, 0xb9c066eeu, 0x57f7e09fu, 0xf62f5a50u,
    0x9466d401u, 0x329e4db2u, 0xd0d5c763u, 0x6f0d4114u, 0x0d44bac5u, 0xab7c3476u, 0x49b3ae27u, 0xe7eb27d8u,
    0x8622a189u, 0x245a1b3au, 0xc29194ebu, 0x60c90e9cu, 0xff00884du, 0x9d3801feu, 0x3b6f7bafu, 0xd9a6f560u,
    0x77de6f11u, 0x1615e8c2u, 0xb44d6273u, 0x5284dc24u, 0xf0bc55d5u, 0x8ef3cf86u, 0x2d2b4937u, 0xcb62c2e8u,
};

static const uint32_t bshim_131_tab1[96] = {
    0x967baefau, 0x34b328abu, 0xd2eaa25cu, 0x71221c0du, 0x0f5995beu, 0xad910f6fu, 0x4bc88920u, 0xea0002d1u,
    0x88377c82u, 0x266ef633u, 0xc4a66fe4u, 0x62dde995u, 0x01156346u, 0x9f4cdcf7u, 0x3d8456a8u, 0xdbbbd059u,
    0x79f34a0au, 0x182ac3bbu, 0xb6623d6cu, 0x5499b71du, 0xf2d130ceu, 0x9108aa7fu, 0x2f402430u, 0xcd779de1u,
    0x6baf1792u, 0x09e69143u, 0xa81e0af4u, 0x465584a5u, 0xe48cfe56u, 0x82c47807u, 0x20fbf1b8u, 0xbf336b69u,
    0x5d6ae51au, 0xfba25ecbu, 0x99d9d87cu, 0x3811522du, 0xd648cbdeu, 0x7480458fu, 0x12b7bf40u, 0xb0ef38f1u,
    0x4f26b2a2u, 0xed5e2c53u, 0x8b95a604u, 0x29cd1fb5u, 0xc8049966u, 0x663c1317u, 0x04738cc8u, 0xa2ab0679u,
    0x40e2802au, 0xdf19f9dbu, 0x7d51738cu, 0x1b88ed3du, 0xb9c066eeu, 0x57f7e09fu, 0xf62f5a50u, 0x9466d401u,
    0x329e4db2u, 0xd0d5c763u, 0x6f0d4114u, 0x0d44bac5u, 0xab7c3476u, 0x49b3ae27u, 0xe7eb27d8u, 0x8622a189u,
    0x245a1b3au, 0xc29194ebu, 0x60c90e9cu, 0xff00884du, 0x9d3801feu, 0x3b6f7bafu, 0xd9a6f560u, 0x77de6f11u,
    0x1615e8c2u, 0xb44d6273u, 0x5284dc24u, 0xf0bc55d5u, 0x8ef3cf86u, 0x2d2b4937u, 0xcb62c2e8u, 0x699a3c99u,
    0x07d1b64au, 0xa6092ffbu, 0x4440a9acu, 0xe278235du, 0x80af9d0eu, 0x1ee716bfu, 0xbd1e9070u, 0x5b560a21u,
    0xf98d83d2u, 0x97c4fd83u, 0x35fc7734u, 0xd433f0e5u, 0x726b6a96u, 0x10a2e447u, 0xaeda5df8u, 0x4d11d7a9u,
};

static const uint32_t bshim_131_tab2[96] = {
    0x182ac3bbu, 0xb6623d6cu, 0x5499b71du, 0xf2d130ceu, 0x9108aa7fu, 0x2f402430u, 0xcd779de1u, 0x6baf1792u,
    0x09e69143u, 0xa81e0af4u, 0x465584a5u, 0xe48cfe56u, 0x82c47807u, 0x20fbf1b8u, 0xbf336b69u, 0x5d6ae51au,
    0xfba25ecbu, 0x99d9d87cu, 0x3811522du, 0xd648cbdeu, 0x7480458fu, 0x12b7bf40u, 0xb0ef38f1u, 0x4f26b2a2u,
    0xed5e2c53u, 0x8b95a604u, 0x29cd1fb5u, 0xc8049966u, 0x663c1317u, 0x04738cc8u, 0xa2ab0679u, 0x40e2802au,
    0xdf19f9dbu, 0x7d51738cu, 0x1b88ed3du, 0xb9c066eeu, 0x57f7e09fu, 0xf62f5a50u, 0x9466d401u, 0x329e4db2u,
    0xd0d5c763u, 0x6f0d4114u, 0x0d44bac5u, 0xab7c3476u, 0x49b3ae27u, 0xe7eb27d8u, 0x8622a189u, 0x245a1b3au,
    0xc29194ebu, 0x60c90e9cu, 0xff00884du, 0x9d3801feu, 0x3b6f7bafu, 0xd9a6f560u, 0x77de6f11u, 0x1615e8c2u,
    0xb44d6273u, 0x5284dc24u, 0xf0bc55d5u, 0x8ef3cf86u, 0x2d2b4937u, 0xcb62c2e8u, 0x699a3c99u, 0x07d1b64au,
    0xa6092ffbu, 0x4440a9acu, 0xe278235du, 0x80af9d0eu, 0x1ee716bfu, 0xbd1e9070u, 0x5b560a21u, 0xf98d83d2u,
    0x97c4fd83u, 0x35fc7734u, 0xd433f0e5u, 0x726b6a96u, 0x10a2e447u, 0xaeda5df8u, 0x4d11d7a9u, 0xeb49515au,
    0x8980cb0bu, 0x27b844bcu, 0xc5efbe6du, 0x6427381eu, 0x025eb1cfu, 0xa0962b80u, 0x3ecda531u, 0xdd051ee2u,
    0x7b3c9893u, 0x19741244u, 0xb7ab8bf5u, 0x55e305a6u, 0xf41a7f57u, 0x9251f908u, 0x308972b9u, 0xcec0ec6au,
};

static const uint32_t bshim_131_tab3[96] = {
    0x99d9d87cu, 0x3811522du, 0xd648cbdeu, 0x7480458fu, 0x12b7bf40u, 0xb0ef38f1u, 0x4f26b2a2u, 0xed5e2c53u,
    0x8b95a604u, 0x29cd1fb5u, 0xc8049966u, 0x663c1317u, 0x04738cc8u, 0xa2ab0679u, 0x40e2802au, 0xdf19f9dbu,
    0x7d51738cu, 0x1b88ed3du, 0xb9c066eeu, 0x57f7e09fu, 0xf62f5a50u, 0x9466d401u, 0x329e4db2u, 0xd0d5c763u,
    0x6f0d4114u, 0x0d44bac5u, 0xab7c3476u, 0x49b3ae27u, 0xe7eb27d8u, 0x8622a189u, 0x245a1b3au, 0xc29194ebu,
    0x60c90e9cu, 0xff00884du, 0x9d3801feu, 0x3b6f7bafu, 0xd9a6f560u, 0x77de6f11u, 0x1615e8c2u, 0xb44d6273u,
    0x5284dc24u, 0xf0bc55d5u, 0x8ef3cf86u, 0x2d2b4937u, 0xcb62c2e8u, 0x699a3c99u, 0x07d1b64au, 0xa6092ffbu,
    0x4440a9acu, 0xe278235du, 0x80af9d0eu, 0x1ee716bfu, 0xbd1e9070u, 0x5b560a21u, 0xf98d83d2u, 0x97c4fd83u,
    0x35fc7734u, 0xd433f0e5u, 0x726b6a96u, 0x10a2e447u, 0xaeda5df8u, 0x4d11d7a9u, 0xeb49515au, 0x8980cb0bu,
    0x27b844bcu, 0xc5efbe6du, 0x6427381eu, 0x025eb1cfu, 0xa0962b80u, 0x3ecda531u, 0xdd051ee2u, 0x7b3c9893u,
    0x19741244u, 0xb7ab8bf5u, 0x55e305a6u, 0xf41a7f57u, 0x9251f908u, 0x308972b9u, 0xcec0ec6au, 0x6cf8661bu,
    0x0b2fdfccu, 0xa967597du, 0x479ed32eu, 0xe5d64cdfu, 0x840dc690u, 0x22454041u, 0xc07cb9f2u, 0x5eb433a3u,
    0xfcebad54u, 0x9b232705u, 0x395aa0b6u, 0xd7921a67u, 0x75c99418u, 0x14010dc9u, 0xb238877au, 0x5070012bu,
};

static const uint32_t bshim_131_tab4[96] = {
    0x1b88ed3du, 0xb9c066eeu, 0x57f7e09fu, 0xf62f5a50u, 0x9466d401u, 0x329e4db2u, 0xd0d5c763u, 0x6f0d4114u,
    0x0d44bac5u, 0xab7c3476u, 0x49b3ae27u, 0xe7eb27d8u, 0x8622a189u, 0x245a1b3au, 0xc29194ebu, 0x60c90e9cu,
    0xff00884du, 0x9d3801feu, 0x3b6f7bafu, 0xd9a6f560u, 0x77de6f11u, 0x1615e8c2u, 0xb44d6273u, 0x5284dc24u,
    0xf0bc55d5u, 0x8ef3cf86u, 0x2d2b4937u, 0xcb62c2e8u, 0x699a3c99u, 0x07d1b64au, 0xa6092ffbu, 0x4440a9acu,
    0xe278235du, 0x80af9d0eu, 0x1ee716bfu, 0xbd1e9070u, 0x5b560a21u, 0xf98d83d2u, 0x97c4fd83u, 0x35fc7734u,
    0xd433f0e5u, 0x726b6a96u, 0x10a2e447u, 0xaeda5df8u, 0x4d11d7a9u, 0xeb49515au, 0x8980cb0bu, 0x27b844bcu,
    0xc5efbe6du, 0x6427381eu, 0x025eb1cfu, 0xa0962b80u, 0x3ecda531u, 0xdd051ee2u, 0x7b3c9893u, 0x19741244u,
    0xb7ab8bf5u, 0x55e305a6u, 0xf41a7f57u, 0x9251f908u, 0x308972b9u, 0xcec0ec6au, 0x6cf8661bu, 0x0b2fdfccu,
    0xa967597du, 0x479ed32eu, 0xe5d64cdfu, 0x840dc690u, 0x22454041u, 0xc07cb9f2u, 0x5eb433a3u, 0xfcebad54u,
    0x9b232705u, 0x395aa0b6u, 0xd7921a67u, 0x75c99418u, 0x14010dc9u, 0xb238877au, 0x5070012bu, 0xeea77adcu,
    0x8cdef48du, 0x2b166e3eu, 0xc94de7efu, 0x678561a0u, 0x05bcdb51u, 0xa3f45502u, 0x422bceb3u, 0xe0634864u,
    0x7e9ac215u, 0x1cd23bc6u, 0xbb09b577u, 0x59412f28u, 0xf778a8d9u, 0x95b0228au, 0x33e79c3bu, 0xd21f15ecu,
};

static const uint32_t bshim_131_tab5[96] = {
    0x9d3801feu, 0x3b6f7bafu, 0xd9a6f560u, 0x77de6f11u, 0x1615e8c2u, 0xb44d6273u, 0x5284dc24u, 0xf0bc55d5u,
    0x8ef3cf86u, 0x2d2b4937u, 0xcb62c2e8u, 0x699a3c99u, 0x07d1b64au, 0xa6092ffbu, 0x4440a9acu, 0xe278235du,
    0x80af9d0eu, 0x1ee716bfu, 0xbd1e9070u, 0x5b560a21u, 0xf98d83d2u, 0x97c4fd83u, 0x35fc7734u, 0xd433f0e5u,
    0x726b6a96u, 0x10a2e447u, 0xaeda5df8u, 0x4d11d7a9u, 0xeb49515au, 0x8980cb0bu, 0x27b844bcu, 0xc5efbe6du,
    0x6427381eu, 0x025eb1cfu, 0xa0962b80u, 0x3ecda531u, 0xdd051ee2u, 0x7b3c9893u, 0x19741244u, 0xb7ab8bf5u,
    0x55e305a6u, 0xf41a7f57u, 0x9251f908u, 0x308972b9u, 0xcec0ec6au, 0x6cf8661bu, 0x0b2fdfccu, 0xa967597du,
    0x479ed32eu, 0xe5d64cdfu, 0x840dc690u, 0x22454041u, 0xc07cb9f2u, 0x5eb433a3u, 0xfcebad54u, 0x9b232705u,
    0x395aa0b6u, 0xd7921a67u, 0x75c99418u, 0x14010dc9u, 0xb238877au, 0x5070012bu, 0xeea77adcu, 0x8cdef48du,
    0x2b166e3eu, 0xc94de7efu, 0x678561a0u, 0x05bcdb51u, 0xa3f45502u, 0x422bceb3u, 0xe0634864u, 0x7e9ac215u,
    0x1cd23bc6u, 0xbb09b577u, 0x59412f28u, 0xf778a8d9u, 0x95b0228au, 0x33e79c3bu, 0xd21f15ecu, 0x70568f9du,
    0x0e8e094eu, 0xacc582ffu, 0x4afcfcb0u, 0xe9347661u, 0x876bf012u, 0x25a369c3u, 0xc3dae374u, 0x62125d25u,
    0x0049d6d6u, 0x9e815087u, 0x3cb8ca38u, 0xdaf043e9u, 0x7927bd9au, 0x175f374bu, 0xb596b0fcu, 0x53ce2aadu,
};

static const uint32_t bshim_131_tab6[96] = {
    0x1ee716bfu, 0xbd1e9070u, 0x5b560a21u, 0xf98d83d2u, 0x97c4fd83u, 0x35fc7734u, 0xd433f0e5u, 0x726b6a96u,
    0x10a2e447u, 0xaeda5df8u, 0x4d11d7a9u, 0xeb49515au, 0x8980cb0bu, 0x27b844bcu, 0xc5efbe6du, 0x6427381eu,
    0x025eb1cfu, 0xa0962b80u, 0x3ecda531u, 0xdd051ee2u, 0x7b3c9893u, 0x19741244u, 0xb7ab8bf5u, 0x55e305a6u,
    0xf41a7f57u, 0x9251f908u, 0x308972b9u, 0xcec0ec6au, 0x6cf8661bu, 0x0b2fdfccu, 0xa967597du, 0x479ed32eu,
    0xe5d64cdfu, 0x840dc690u, 0x22454041u, 0xc07cb9f2u, 0x5eb433a3u, 0xfcebad54u, 0x9b232705u, 0x395aa0b6u,
    0xd7921a67u, 0x75c99418u, 0x14010dc9u, 0xb238877au, 0x5070012bu, 0xeea77adcu, 0x8cdef48du, 0x2b166e3eu,
    0xc94de7efu, 0x678561a0u, 0x05bcdb51u, 0xa3f45502u, 0x422bceb3u, 0xe0634864u, 0x7e9ac215u, 0x1cd23bc6u,
    0xbb09b577u, 0x59412f28u, 0xf778a8d9u, 0x95b0228au, 0x33e79c3bu, 0xd21f15ecu, 0x70568f9du, 0x0e8e094eu,
    0xacc582ffu, 0x4afcfcb0u, 0xe9347661u, 0x876bf012u, 0x25a369c3u, 0xc3dae374u, 0x62125d25u, 0x0049d6d6u,
    0x9e815087u, 0x3cb8ca38u, 0xdaf043e9u, 0x7927bd9au, 0x175f374bu, 0xb596b0fcu, 0x53ce2aadu, 0xf205a45eu,
    0x903d1e0fu, 0x2e7497c0u, 0xccac1171u, 0x6ae38b22u, 0x091b04d3u, 0xa7527e84u, 0x4589f835u, 0xe3c171e6u,
    0x81f8eb97u, 0x20306548u, 0xbe67def9u, 0x5c9f58aau, 0xfad6d25bu, 0x990e4c0cu, 0x3745c5bdu, 0xd57d3f6eu,
};

static const uint32_t bshim_131_tab7[96] = {
    0xa0962b80u, 0x3ecda531u, 0xdd051ee2u, 0x7b3c9893u, 0x19741244u, 0xb7ab8bf5u, 0x55e305a6u, 0xf41a7f57u,
    0x9251f908u, 0x308972b9u, 0xcec0ec6au, 0x6cf8661bu, 0x0b2fdfccu, 0xa967597du, 0x479ed32eu, 0xe5d64cdfu,
    0x840dc690u, 0x22454041u, 0xc07cb9f2u, 0x5eb433a3u, 0xfcebad54u, 0x9b232705u, 0x395aa0b6u, 0xd7921a67u,
    0x75c99418u, 0x14010dc9u, 0xb238877au, 0x5070012bu, 0xeea77adcu, 0x8cdef48du, 0x2b166e3eu, 0xc94de7efu,
    0x678561a0u, 0x05bcdb51u, 0xa3f45502u, 0x422bceb3u, 0xe0634864u, 0x7e9ac215u, 0x1cd23bc6u, 0xbb09b577u,
    0x59412f28u, 0xf778a8d9u, 0x95b0228au, 0x33e79c3bu, 0xd21f15ecu, 0x70568f9du, 0x0e8e094eu, 0xacc582ffu,
    0x4afcfcb0u, 0xe9347661u, 0x876bf012u, 0x25a369c3u, 0xc3dae374u, 0x62125d25u, 0x0049d6d6u, 0x9e815087u,
    0x3cb8ca38u, 0xdaf043e9u, 0x7927bd9au, 0x175f374bu, 0xb596b0fcu, 0x53ce2aadu, 0xf205a45eu, 0x903d1e0fu,
    0x2e7497c0u, 0xccac1171u, 0x6ae38b22u, 0x091b04d3u, 0xa7527e84u, 0x4589f835u, 0xe3c171e6u, 0x81f8eb97u,
    0x20306548u, 0xbe67def9u, 0x5c9f58aau, 0xfad6d25bu, 0x990e4c0cu, 0x3745c5bdu, 0xd57d3f6eu, 0x73b4b91fu,
    0x11ec32d0u, 0xb023ac81u, 0x4e5b2632u, 0xec929fe3u, 0x8aca1994u, 0x29019345u, 0xc7390cf6u, 0x657086a7u,
    0x03a80058u, 0xa1df7a09u, 0x4016f3bau, 0xde4e6d6bu, 0x7c85e71cu, 0x1abd60cdu, 0xb8f4da7eu, 0x572c542fu,
};

struct bshim_131_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_131_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_131_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_131_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_131_reset(struct bshim_131_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000fd44du;
    return 0;
}

