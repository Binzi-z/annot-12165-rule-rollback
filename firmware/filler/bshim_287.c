/* bshim_287 -- board support shim generated from the 0287 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_287_tab0[96] = {
    0x394affcdu, 0xd782797eu, 0x75b9f32fu, 0x13f16ce0u, 0xb228e691u, 0x50606042u, 0xee97d9f3u, 0x8ccf53a4u,
    0x2b06cd55u, 0xc93e4706u, 0x6775c0b7u, 0x05ad3a68u, 0xa3e4b419u, 0x421c2dcau, 0xe053a77bu, 0x7e8b212cu,
    0x1cc29addu, 0xbafa148eu, 0x59318e3fu, 0xf76907f0u, 0x95a081a1u, 0x33d7fb52u, 0xd20f7503u, 0x7046eeb4u,
    0x0e7e6865u, 0xacb5e216u, 0x4aed5bc7u, 0xe924d578u, 0x875c4f29u, 0x2593c8dau, 0xc3cb428bu, 0x6202bc3cu,
    0x003a35edu, 0x9e71af9eu, 0x3ca9294fu, 0xdae0a300u, 0x79181cb1u, 0x174f9662u, 0xb5871013u, 0x53be89c4u,
    0xf1f60375u, 0x902d7d26u, 0x2e64f6d7u, 0xcc9c7088u, 0x6ad3ea39u, 0x090b63eau, 0xa742dd9bu, 0x457a574cu,
    0xe3b1d0fdu, 0x81e94aaeu, 0x2020c45fu, 0xbe583e10u, 0x5c8fb7c1u, 0xfac73172u, 0x98feab23u, 0x373624d4u,
    0xd56d9e85u, 0x73a51836u, 0x11dc91e7u, 0xb0140b98u, 0x4e4b8549u, 0xec82fefau, 0x8aba78abu, 0x28f1f25cu,
    0xc7296c0du, 0x6560e5beu, 0x03985f6fu, 0xa1cfd920u, 0x400752d1u, 0xde3ecc82u, 0x7c764633u, 0x1aadbfe4u,
    0xb8e53995u, 0x571cb346u, 0xf5542cf7u, 0x938ba6a8u, 0x31c32059u, 0xcffa9a0au, 0x6e3213bbu, 0x0c698d6cu,
    0xaaa1071du, 0x48d880ceu, 0xe70ffa7fu, 0x85477430u, 0x237eede1u, 0xc1b66792u, 0x5fede143u, 0xfe255af4u,
    0x9c5cd4a5u, 0x3a944e56u, 0xd8cbc807u, 0x770341b8u, 0x153abb69u, 0xb372351au, 0x51a9aecbu, 0xefe1287cu,
};

static const uint32_t bshim_287_tab1[96] = {
    0xbafa148eu, 0x59318e3fu, 0xf76907f0u, 0x95a081a1u, 0x33d7fb52u, 0xd20f7503u, 0x7046eeb4u, 0x0e7e6865u,
    0xacb5e216u, 0x4aed5bc7u, 0xe924d578u, 0x875c4f29u, 0x2593c8dau, 0xc3cb428bu, 0x6202bc3cu, 0x003a35edu,
    0x9e71af9eu, 0x3ca9294fu, 0xdae0a300u, 0x79181cb1u, 0x174f9662u, 0xb5871013u, 0x53be89c4u, 0xf1f60375u,
    0x902d7d26u, 0x2e64f6d7u, 0xcc9c7088u, 0x6ad3ea39u, 0x090b63eau, 0xa742dd9bu, 0x457a574cu, 0xe3b1d0fdu,
    0x81e94aaeu, 0x2020c45fu, 0xbe583e10u, 0x5c8fb7c1u, 0xfac73172u, 0x98feab23u, 0x373624d4u, 0xd56d9e85u,
    0x73a51836u, 0x11dc91e7u, 0xb0140b98u, 0x4e4b8549u, 0xec82fefau, 0x8aba78abu, 0x28f1f25cu, 0xc7296c0du,
    0x6560e5beu, 0x03985f6fu, 0xa1cfd920u, 0x400752d1u, 0xde3ecc82u, 0x7c764633u, 0x1aadbfe4u, 0xb8e53995u,
    0x571cb346u, 0xf5542cf7u, 0x938ba6a8u, 0x31c32059u, 0xcffa9a0au, 0x6e3213bbu, 0x0c698d6cu, 0xaaa1071du,
    0x48d880ceu, 0xe70ffa7fu, 0x85477430u, 0x237eede1u, 0xc1b66792u, 0x5fede143u, 0xfe255af4u, 0x9c5cd4a5u,
    0x3a944e56u, 0xd8cbc807u, 0x770341b8u, 0x153abb69u, 0xb372351au, 0x51a9aecbu, 0xefe1287cu, 0x8e18a22du,
    0x2c501bdeu, 0xca87958fu, 0x68bf0f40u, 0x06f688f1u, 0xa52e02a2u, 0x43657c53u, 0xe19cf604u, 0x7fd46fb5u,
    0x1e0be966u, 0xbc436317u, 0x5a7adcc8u, 0xf8b25679u, 0x96e9d02au, 0x352149dbu, 0xd358c38cu, 0x71903d3du,
};

static const uint32_t bshim_287_tab2[96] = {
    0x3ca9294fu, 0xdae0a300u, 0x79181cb1u, 0x174f9662u, 0xb5871013u, 0x53be89c4u, 0xf1f60375u, 0x902d7d26u,
    0x2e64f6d7u, 0xcc9c7088u, 0x6ad3ea39u, 0x090b63eau, 0xa742dd9bu, 0x457a574cu, 0xe3b1d0fdu, 0x81e94aaeu,
    0x2020c45fu, 0xbe583e10u, 0x5c8fb7c1u, 0xfac73172u, 0x98feab23u, 0x373624d4u, 0xd56d9e85u, 0x73a51836u,
    0x11dc91e7u, 0xb0140b98u, 0x4e4b8549u, 0xec82fefau, 0x8aba78abu, 0x28f1f25cu, 0xc7296c0du, 0x6560e5beu,
    0x03985f6fu, 0xa1cfd920u, 0x400752d1u, 0xde3ecc82u, 0x7c764633u, 0x1aadbfe4u, 0xb8e53995u, 0x571cb346u,
    0xf5542cf7u, 0x938ba6a8u, 0x31c32059u, 0xcffa9a0au, 0x6e3213bbu, 0x0c698d6cu, 0xaaa1071du, 0x48d880ceu,
    0xe70ffa7fu, 0x85477430u, 0x237eede1u, 0xc1b66792u, 0x5fede143u, 0xfe255af4u, 0x9c5cd4a5u, 0x3a944e56u,
    0xd8cbc807u, 0x770341b8u, 0x153abb69u, 0xb372351au, 0x51a9aecbu, 0xefe1287cu, 0x8e18a22du, 0x2c501bdeu,
    0xca87958fu, 0x68bf0f40u, 0x06f688f1u, 0xa52e02a2u, 0x43657c53u, 0xe19cf604u, 0x7fd46fb5u, 0x1e0be966u,
    0xbc436317u, 0x5a7adcc8u, 0xf8b25679u, 0x96e9d02au, 0x352149dbu, 0xd358c38cu, 0x71903d3du, 0x0fc7b6eeu,
    0xadff309fu, 0x4c36aa50u, 0xea6e2401u, 0x88a59db2u, 0x26dd1763u, 0xc5149114u, 0x634c0ac5u, 0x01838476u,
    0x9fbafe27u, 0x3df277d8u, 0xdc29f189u, 0x7a616b3au, 0x1898e4ebu, 0xb6d05e9cu, 0x5507d84du, 0xf33f51feu,
};

static const uint32_t bshim_287_tab3[96] = {
    0xbe583e10u, 0x5c8fb7c1u, 0xfac73172u, 0x98feab23u, 0x373624d4u, 0xd56d9e85u, 0x73a51836u, 0x11dc91e7u,
    0xb0140b98u, 0x4e4b8549u, 0xec82fefau, 0x8aba78abu, 0x28f1f25cu, 0xc7296c0du, 0x6560e5beu, 0x03985f6fu,
    0xa1cfd920u, 0x400752d1u, 0xde3ecc82u, 0x7c764633u, 0x1aadbfe4u, 0xb8e53995u, 0x571cb346u, 0xf5542cf7u,
    0x938ba6a8u, 0x31c32059u, 0xcffa9a0au, 0x6e3213bbu, 0x0c698d6cu, 0xaaa1071du, 0x48d880ceu, 0xe70ffa7fu,
    0x85477430u, 0x237eede1u, 0xc1b66792u, 0x5fede143u, 0xfe255af4u, 0x9c5cd4a5u, 0x3a944e56u, 0xd8cbc807u,
    0x770341b8u, 0x153abb69u, 0xb372351au, 0x51a9aecbu, 0xefe1287cu, 0x8e18a22du, 0x2c501bdeu, 0xca87958fu,
    0x68bf0f40u, 0x06f688f1u, 0xa52e02a2u, 0x43657c53u, 0xe19cf604u, 0x7fd46fb5u, 0x1e0be966u, 0xbc436317u,
    0x5a7adcc8u, 0xf8b25679u, 0x96e9d02au, 0x352149dbu, 0xd358c38cu, 0x71903d3du, 0x0fc7b6eeu, 0xadff309fu,
    0x4c36aa50u, 0xea6e2401u, 0x88a59db2u, 0x26dd1763u, 0xc5149114u, 0x634c0ac5u, 0x01838476u, 0x9fbafe27u,
    0x3df277d8u, 0xdc29f189u, 0x7a616b3au, 0x1898e4ebu, 0xb6d05e9cu, 0x5507d84du, 0xf33f51feu, 0x9176cbafu,
    0x2fae4560u, 0xcde5bf11u, 0x6c1d38c2u, 0x0a54b273u, 0xa88c2c24u, 0x46c3a5d5u, 0xe4fb1f86u, 0x83329937u,
    0x216a12e8u, 0xbfa18c99u, 0x5dd9064au, 0xfc107ffbu, 0x9a47f9acu, 0x387f735du, 0xd6b6ed0eu, 0x74ee66bfu,
};

static const uint32_t bshim_287_tab4[96] = {
    0x400752d1u, 0xde3ecc82u, 0x7c764633u, 0x1aadbfe4u, 0xb8e53995u, 0x571cb346u, 0xf5542cf7u, 0x938ba6a8u,
    0x31c32059u, 0xcffa9a0au, 0x6e3213bbu, 0x0c698d6cu, 0xaaa1071du, 0x48d880ceu, 0xe70ffa7fu, 0x85477430u,
    0x237eede1u, 0xc1b66792u, 0x5fede143u, 0xfe255af4u, 0x9c5cd4a5u, 0x3a944e56u, 0xd8cbc807u, 0x770341b8u,
    0x153abb69u, 0xb372351au, 0x51a9aecbu, 0xefe1287cu, 0x8e18a22du, 0x2c501bdeu, 0xca87958fu, 0x68bf0f40u,
    0x06f688f1u, 0xa52e02a2u, 0x43657c53u, 0xe19cf604u, 0x7fd46fb5u, 0x1e0be966u, 0xbc436317u, 0x5a7adcc8u,
    0xf8b25679u, 0x96e9d02au, 0x352149dbu, 0xd358c38cu, 0x71903d3du, 0x0fc7b6eeu, 0xadff309fu, 0x4c36aa50u,
    0xea6e2401u, 0x88a59db2u, 0x26dd1763u, 0xc5149114u, 0x634c0ac5u, 0x01838476u, 0x9fbafe27u, 0x3df277d8u,
    0xdc29f189u, 0x7a616b3au, 0x1898e4ebu, 0xb6d05e9cu, 0x5507d84du, 0xf33f51feu, 0x9176cbafu, 0x2fae4560u,
    0xcde5bf11u, 0x6c1d38c2u, 0x0a54b273u, 0xa88c2c24u, 0x46c3a5d5u, 0xe4fb1f86u, 0x83329937u, 0x216a12e8u,
    0xbfa18c99u, 0x5dd9064au, 0xfc107ffbu, 0x9a47f9acu, 0x387f735du, 0xd6b6ed0eu, 0x74ee66bfu, 0x1325e070u,
    0xb15d5a21u, 0x4f94d3d2u, 0xedcc4d83u, 0x8c03c734u, 0x2a3b40e5u, 0xc872ba96u, 0x66aa3447u, 0x04e1adf8u,
    0xa31927a9u, 0x4150a15au, 0xdf881b0bu, 0x7dbf94bcu, 0x1bf70e6du, 0xba2e881eu, 0x586601cfu, 0xf69d7b80u,
};

static const uint32_t bshim_287_tab5[96] = {
    0xc1b66792u, 0x5fede143u, 0xfe255af4u, 0x9c5cd4a5u, 0x3a944e56u, 0xd8cbc807u, 0x770341b8u, 0x153abb69u,
    0xb372351au, 0x51a9aecbu, 0xefe1287cu, 0x8e18a22du, 0x2c501bdeu, 0xca87958fu, 0x68bf0f40u, 0x06f688f1u,
    0xa52e02a2u, 0x43657c53u, 0xe19cf604u, 0x7fd46fb5u, 0x1e0be966u, 0xbc436317u, 0x5a7adcc8u, 0xf8b25679u,
    0x96e9d02au, 0x352149dbu, 0xd358c38cu, 0x71903d3du, 0x0fc7b6eeu, 0xadff309fu, 0x4c36aa50u, 0xea6e2401u,
    0x88a59db2u, 0x26dd1763u, 0xc5149114u, 0x634c0ac5u, 0x01838476u, 0x9fbafe27u, 0x3df277d8u, 0xdc29f189u,
    0x7a616b3au, 0x1898e4ebu, 0xb6d05e9cu, 0x5507d84du, 0xf33f51feu, 0x9176cbafu, 0x2fae4560u, 0xcde5bf11u,
    0x6c1d38c2u, 0x0a54b273u, 0xa88c2c24u, 0x46c3a5d5u, 0xe4fb1f86u, 0x83329937u, 0x216a12e8u, 0xbfa18c99u,
    0x5dd9064au, 0xfc107ffbu, 0x9a47f9acu, 0x387f735du, 0xd6b6ed0eu, 0x74ee66bfu, 0x1325e070u, 0xb15d5a21u,
    0x4f94d3d2u, 0xedcc4d83u, 0x8c03c734u, 0x2a3b40e5u, 0xc872ba96u, 0x66aa3447u, 0x04e1adf8u, 0xa31927a9u,
    0x4150a15au, 0xdf881b0bu, 0x7dbf94bcu, 0x1bf70e6du, 0xba2e881eu, 0x586601cfu, 0xf69d7b80u, 0x94d4f531u,
    0x330c6ee2u, 0xd143e893u, 0x6f7b6244u, 0x0db2dbf5u, 0xabea55a6u, 0x4a21cf57u, 0xe8594908u, 0x8690c2b9u,
    0x24c83c6au, 0xc2ffb61bu, 0x61372fccu, 0xff6ea97du, 0x9da6232eu, 0x3bdd9cdfu, 0xda151690u, 0x784c9041u,
};

static const uint32_t bshim_287_tab6[96] = {
    0x43657c53u, 0xe19cf604u, 0x7fd46fb5u, 0x1e0be966u, 0xbc436317u, 0x5a7adcc8u, 0xf8b25679u, 0x96e9d02au,
    0x352149dbu, 0xd358c38cu, 0x71903d3du, 0x0fc7b6eeu, 0xadff309fu, 0x4c36aa50u, 0xea6e2401u, 0x88a59db2u,
    0x26dd1763u, 0xc5149114u, 0x634c0ac5u, 0x01838476u, 0x9fbafe27u, 0x3df277d8u, 0xdc29f189u, 0x7a616b3au,
    0x1898e4ebu, 0xb6d05e9cu, 0x5507d84du, 0xf33f51feu, 0x9176cbafu, 0x2fae4560u, 0xcde5bf11u, 0x6c1d38c2u,
    0x0a54b273u, 0xa88c2c24u, 0x46c3a5d5u, 0xe4fb1f86u, 0x83329937u, 0x216a12e8u, 0xbfa18c99u, 0x5dd9064au,
    0xfc107ffbu, 0x9a47f9acu, 0x387f735du, 0xd6b6ed0eu, 0x74ee66bfu, 0x1325e070u, 0xb15d5a21u, 0x4f94d3d2u,
    0xedcc4d83u, 0x8c03c734u, 0x2a3b40e5u, 0xc872ba96u, 0x66aa3447u, 0x04e1adf8u, 0xa31927a9u, 0x4150a15au,
    0xdf881b0bu, 0x7dbf94bcu, 0x1bf70e6du, 0xba2e881eu, 0x586601cfu, 0xf69d7b80u, 0x94d4f531u, 0x330c6ee2u,
    0xd143e893u, 0x6f7b6244u, 0x0db2dbf5u, 0xabea55a6u, 0x4a21cf57u, 0xe8594908u, 0x8690c2b9u, 0x24c83c6au,
    0xc2ffb61bu, 0x61372fccu, 0xff6ea97du, 0x9da6232eu, 0x3bdd9cdfu, 0xda151690u, 0x784c9041u, 0x168409f2u,
    0xb4bb83a3u, 0x52f2fd54u, 0xf12a7705u, 0x8f61f0b6u, 0x2d996a67u, 0xcbd0e418u, 0x6a085dc9u, 0x083fd77au,
    0xa677512bu, 0x44aecadcu, 0xe2e6448du, 0x811dbe3eu, 0x1f5537efu, 0xbd8cb1a0u, 0x5bc42b51u, 0xf9fba502u,
};

static const uint32_t bshim_287_tab7[96] = {
    0xc5149114u, 0x634c0ac5u, 0x01838476u, 0x9fbafe27u, 0x3df277d8u, 0xdc29f189u, 0x7a616b3au, 0x1898e4ebu,
    0xb6d05e9cu, 0x5507d84du, 0xf33f51feu, 0x9176cbafu, 0x2fae4560u, 0xcde5bf11u, 0x6c1d38c2u, 0x0a54b273u,
    0xa88c2c24u, 0x46c3a5d5u, 0xe4fb1f86u, 0x83329937u, 0x216a12e8u, 0xbfa18c99u, 0x5dd9064au, 0xfc107ffbu,
    0x9a47f9acu, 0x387f735du, 0xd6b6ed0eu, 0x74ee66bfu, 0x1325e070u, 0xb15d5a21u, 0x4f94d3d2u, 0xedcc4d83u,
    0x8c03c734u, 0x2a3b40e5u, 0xc872ba96u, 0x66aa3447u, 0x04e1adf8u, 0xa31927a9u, 0x4150a15au, 0xdf881b0bu,
    0x7dbf94bcu, 0x1bf70e6du, 0xba2e881eu, 0x586601cfu, 0xf69d7b80u, 0x94d4f531u, 0x330c6ee2u, 0xd143e893u,
    0x6f7b6244u, 0x0db2dbf5u, 0xabea55a6u, 0x4a21cf57u, 0xe8594908u, 0x8690c2b9u, 0x24c83c6au, 0xc2ffb61bu,
    0x61372fccu, 0xff6ea97du, 0x9da6232eu, 0x3bdd9cdfu, 0xda151690u, 0x784c9041u, 0x168409f2u, 0xb4bb83a3u,
    0x52f2fd54u, 0xf12a7705u, 0x8f61f0b6u, 0x2d996a67u, 0xcbd0e418u, 0x6a085dc9u, 0x083fd77au, 0xa677512bu,
    0x44aecadcu, 0xe2e6448du, 0x811dbe3eu, 0x1f5537efu, 0xbd8cb1a0u, 0x5bc42b51u, 0xf9fba502u, 0x98331eb3u,
    0x366a9864u, 0xd4a21215u, 0x72d98bc6u, 0x11110577u, 0xaf487f28u, 0x4d7ff8d9u, 0xebb7728au, 0x89eeec3bu,
    0x282665ecu, 0xc65ddf9du, 0x6495594eu, 0x02ccd2ffu, 0xa1044cb0u, 0x3f3bc661u, 0xdd734012u, 0x7baab9c3u,
};

struct bshim_287_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_287_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_287_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_287_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_287_reset(struct bshim_287_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0022adf1u;
    return 0;
}

