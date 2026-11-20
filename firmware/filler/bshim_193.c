/* bshim_193 -- board support shim generated from the 0193 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_193_tab0[96] = {
    0xc0d773d3u, 0x5f0eed84u, 0xfd466735u, 0x9b7de0e6u, 0x39b55a97u, 0xd7ecd448u, 0x76244df9u, 0x145bc7aau,
    0xb293415bu, 0x50cabb0cu, 0xef0234bdu, 0x8d39ae6eu, 0x2b71281fu, 0xc9a8a1d0u, 0x67e01b81u, 0x06179532u,
    0xa44f0ee3u, 0x42868894u, 0xe0be0245u, 0x7ef57bf6u, 0x1d2cf5a7u, 0xbb646f58u, 0x599be909u, 0xf7d362bau,
    0x960adc6bu, 0x3442561cu, 0xd279cfcdu, 0x70b1497eu, 0x0ee8c32fu, 0xad203ce0u, 0x4b57b691u, 0xe98f3042u,
    0x87c6a9f3u, 0x25fe23a4u, 0xc4359d55u, 0x626d1706u, 0x00a490b7u, 0x9edc0a68u, 0x3d138419u, 0xdb4afdcau,
    0x7982777bu, 0x17b9f12cu, 0xb5f16addu, 0x5428e48eu, 0xf2605e3fu, 0x9097d7f0u, 0x2ecf51a1u, 0xcd06cb52u,
    0x6b3e4503u, 0x0975beb4u, 0xa7ad3865u, 0x45e4b216u, 0xe41c2bc7u, 0x8253a578u, 0x208b1f29u, 0xbec298dau,
    0x5cfa128bu, 0xfb318c3cu, 0x996905edu, 0x37a07f9eu, 0xd5d7f94fu, 0x740f7300u, 0x1246ecb1u, 0xb07e6662u,
    0x4eb5e013u, 0xeced59c4u, 0x8b24d375u, 0x295c4d26u, 0xc793c6d7u, 0x65cb4088u, 0x0402ba39u, 0xa23a33eau,
    0x4071ad9bu, 0xdea9274cu, 0x7ce0a0fdu, 0x1b181aaeu, 0xb94f945fu, 0x57870e10u, 0xf5be87c1u, 0x93f60172u,
    0x322d7b23u, 0xd064f4d4u, 0x6e9c6e85u, 0x0cd3e836u, 0xab0b61e7u, 0x4942db98u, 0xe77a5549u, 0x85b1cefau,
    0x23e948abu, 0xc220c25cu, 0x60583c0du, 0xfe8fb5beu, 0x9cc72f6fu, 0x3afea920u, 0xd93622d1u, 0x776d9c82u,
};

static const uint32_t bshim_193_tab1[96] = {
    0x42868894u, 0xe0be0245u, 0x7ef57bf6u, 0x1d2cf5a7u, 0xbb646f58u, 0x599be909u, 0xf7d362bau, 0x960adc6bu,
    0x3442561cu, 0xd279cfcdu, 0x70b1497eu, 0x0ee8c32fu, 0xad203ce0u, 0x4b57b691u, 0xe98f3042u, 0x87c6a9f3u,
    0x25fe23a4u, 0xc4359d55u, 0x626d1706u, 0x00a490b7u, 0x9edc0a68u, 0x3d138419u, 0xdb4afdcau, 0x7982777bu,
    0x17b9f12cu, 0xb5f16addu, 0x5428e48eu, 0xf2605e3fu, 0x9097d7f0u, 0x2ecf51a1u, 0xcd06cb52u, 0x6b3e4503u,
    0x0975beb4u, 0xa7ad3865u, 0x45e4b216u, 0xe41c2bc7u, 0x8253a578u, 0x208b1f29u, 0xbec298dau, 0x5cfa128bu,
    0xfb318c3cu, 0x996905edu, 0x37a07f9eu, 0xd5d7f94fu, 0x740f7300u, 0x1246ecb1u, 0xb07e6662u, 0x4eb5e013u,
    0xeced59c4u, 0x8b24d375u, 0x295c4d26u, 0xc793c6d7u, 0x65cb4088u, 0x0402ba39u, 0xa23a33eau, 0x4071ad9bu,
    0xdea9274cu, 0x7ce0a0fdu, 0x1b181aaeu, 0xb94f945fu, 0x57870e10u, 0xf5be87c1u, 0x93f60172u, 0x322d7b23u,
    0xd064f4d4u, 0x6e9c6e85u, 0x0cd3e836u, 0xab0b61e7u, 0x4942db98u, 0xe77a5549u, 0x85b1cefau, 0x23e948abu,
    0xc220c25cu, 0x60583c0du, 0xfe8fb5beu, 0x9cc72f6fu, 0x3afea920u, 0xd93622d1u, 0x776d9c82u, 0x15a51633u,
    0xb3dc8fe4u, 0x52140995u, 0xf04b8346u, 0x8e82fcf7u, 0x2cba76a8u, 0xcaf1f059u, 0x69296a0au, 0x0760e3bbu,
    0xa5985d6cu, 0x43cfd71du, 0xe20750ceu, 0x803eca7fu, 0x1e764430u, 0xbcadbde1u, 0x5ae53792u, 0xf91cb143u,
};

static const uint32_t bshim_193_tab2[96] = {
    0xc4359d55u, 0x626d1706u, 0x00a490b7u, 0x9edc0a68u, 0x3d138419u, 0xdb4afdcau, 0x7982777bu, 0x17b9f12cu,
    0xb5f16addu, 0x5428e48eu, 0xf2605e3fu, 0x9097d7f0u, 0x2ecf51a1u, 0xcd06cb52u, 0x6b3e4503u, 0x0975beb4u,
    0xa7ad3865u, 0x45e4b216u, 0xe41c2bc7u, 0x8253a578u, 0x208b1f29u, 0xbec298dau, 0x5cfa128bu, 0xfb318c3cu,
    0x996905edu, 0x37a07f9eu, 0xd5d7f94fu, 0x740f7300u, 0x1246ecb1u, 0xb07e6662u, 0x4eb5e013u, 0xeced59c4u,
    0x8b24d375u, 0x295c4d26u, 0xc793c6d7u, 0x65cb4088u, 0x0402ba39u, 0xa23a33eau, 0x4071ad9bu, 0xdea9274cu,
    0x7ce0a0fdu, 0x1b181aaeu, 0xb94f945fu, 0x57870e10u, 0xf5be87c1u, 0x93f60172u, 0x322d7b23u, 0xd064f4d4u,
    0x6e9c6e85u, 0x0cd3e836u, 0xab0b61e7u, 0x4942db98u, 0xe77a5549u, 0x85b1cefau, 0x23e948abu, 0xc220c25cu,
    0x60583c0du, 0xfe8fb5beu, 0x9cc72f6fu, 0x3afea920u, 0xd93622d1u, 0x776d9c82u, 0x15a51633u, 0xb3dc8fe4u,
    0x52140995u, 0xf04b8346u, 0x8e82fcf7u, 0x2cba76a8u, 0xcaf1f059u, 0x69296a0au, 0x0760e3bbu, 0xa5985d6cu,
    0x43cfd71du, 0xe20750ceu, 0x803eca7fu, 0x1e764430u, 0xbcadbde1u, 0x5ae53792u, 0xf91cb143u, 0x97542af4u,
    0x358ba4a5u, 0xd3c31e56u, 0x71fa9807u, 0x103211b8u, 0xae698b69u, 0x4ca1051au, 0xead87ecbu, 0x890ff87cu,
    0x2747722du, 0xc57eebdeu, 0x63b6658fu, 0x01eddf40u, 0xa02558f1u, 0x3e5cd2a2u, 0xdc944c53u, 0x7acbc604u,
};

static const uint32_t bshim_193_tab3[96] = {
    0x45e4b216u, 0xe41c2bc7u, 0x8253a578u, 0x208b1f29u, 0xbec298dau, 0x5cfa128bu, 0xfb318c3cu, 0x996905edu,
    0x37a07f9eu, 0xd5d7f94fu, 0x740f7300u, 0x1246ecb1u, 0xb07e6662u, 0x4eb5e013u, 0xeced59c4u, 0x8b24d375u,
    0x295c4d26u, 0xc793c6d7u, 0x65cb4088u, 0x0402ba39u, 0xa23a33eau, 0x4071ad9bu, 0xdea9274cu, 0x7ce0a0fdu,
    0x1b181aaeu, 0xb94f945fu, 0x57870e10u, 0xf5be87c1u, 0x93f60172u, 0x322d7b23u, 0xd064f4d4u, 0x6e9c6e85u,
    0x0cd3e836u, 0xab0b61e7u, 0x4942db98u, 0xe77a5549u, 0x85b1cefau, 0x23e948abu, 0xc220c25cu, 0x60583c0du,
    0xfe8fb5beu, 0x9cc72f6fu, 0x3afea920u, 0xd93622d1u, 0x776d9c82u, 0x15a51633u, 0xb3dc8fe4u, 0x52140995u,
    0xf04b8346u, 0x8e82fcf7u, 0x2cba76a8u, 0xcaf1f059u, 0x69296a0au, 0x0760e3bbu, 0xa5985d6cu, 0x43cfd71du,
    0xe20750ceu, 0x803eca7fu, 0x1e764430u, 0xbcadbde1u, 0x5ae53792u, 0xf91cb143u, 0x97542af4u, 0x358ba4a5u,
    0xd3c31e56u, 0x71fa9807u, 0x103211b8u, 0xae698b69u, 0x4ca1051au, 0xead87ecbu, 0x890ff87cu, 0x2747722du,
    0xc57eebdeu, 0x63b6658fu, 0x01eddf40u, 0xa02558f1u, 0x3e5cd2a2u, 0xdc944c53u, 0x7acbc604u, 0x19033fb5u,
    0xb73ab966u, 0x55723317u, 0xf3a9acc8u, 0x91e12679u, 0x3018a02au, 0xce5019dbu, 0x6c87938cu, 0x0abf0d3du,
    0xa8f686eeu, 0x472e009fu, 0xe5657a50u, 0x839cf401u, 0x21d46db2u, 0xc00be763u, 0x5e436114u, 0xfc7adac5u,
};

static const uint32_t bshim_193_tab4[96] = {
    0xc793c6d7u, 0x65cb4088u, 0x0402ba39u, 0xa23a33eau, 0x4071ad9bu, 0xdea9274cu, 0x7ce0a0fdu, 0x1b181aaeu,
    0xb94f945fu, 0x57870e10u, 0xf5be87c1u, 0x93f60172u, 0x322d7b23u, 0xd064f4d4u, 0x6e9c6e85u, 0x0cd3e836u,
    0xab0b61e7u, 0x4942db98u, 0xe77a5549u, 0x85b1cefau, 0x23e948abu, 0xc220c25cu, 0x60583c0du, 0xfe8fb5beu,
    0x9cc72f6fu, 0x3afea920u, 0xd93622d1u, 0x776d9c82u, 0x15a51633u, 0xb3dc8fe4u, 0x52140995u, 0xf04b8346u,
    0x8e82fcf7u, 0x2cba76a8u, 0xcaf1f059u, 0x69296a0au, 0x0760e3bbu, 0xa5985d6cu, 0x43cfd71du, 0xe20750ceu,
    0x803eca7fu, 0x1e764430u, 0xbcadbde1u, 0x5ae53792u, 0xf91cb143u, 0x97542af4u, 0x358ba4a5u, 0xd3c31e56u,
    0x71fa9807u, 0x103211b8u, 0xae698b69u, 0x4ca1051au, 0xead87ecbu, 0x890ff87cu, 0x2747722du, 0xc57eebdeu,
    0x63b6658fu, 0x01eddf40u, 0xa02558f1u, 0x3e5cd2a2u, 0xdc944c53u, 0x7acbc604u, 0x19033fb5u, 0xb73ab966u,
    0x55723317u, 0xf3a9acc8u, 0x91e12679u, 0x3018a02au, 0xce5019dbu, 0x6c87938cu, 0x0abf0d3du, 0xa8f686eeu,
    0x472e009fu, 0xe5657a50u, 0x839cf401u, 0x21d46db2u, 0xc00be763u, 0x5e436114u, 0xfc7adac5u, 0x9ab25476u,
    0x38e9ce27u, 0xd72147d8u, 0x7558c189u, 0x13903b3au, 0xb1c7b4ebu, 0x4fff2e9cu, 0xee36a84du, 0x8c6e21feu,
    0x2aa59bafu, 0xc8dd1560u, 0x67148f11u, 0x054c08c2u, 0xa3838273u, 0x41bafc24u, 0xdff275d5u, 0x7e29ef86u,
};

static const uint32_t bshim_193_tab5[96] = {
    0x4942db98u, 0xe77a5549u, 0x85b1cefau, 0x23e948abu, 0xc220c25cu, 0x60583c0du, 0xfe8fb5beu, 0x9cc72f6fu,
    0x3afea920u, 0xd93622d1u, 0x776d9c82u, 0x15a51633u, 0xb3dc8fe4u, 0x52140995u, 0xf04b8346u, 0x8e82fcf7u,
    0x2cba76a8u, 0xcaf1f059u, 0x69296a0au, 0x0760e3bbu, 0xa5985d6cu, 0x43cfd71du, 0xe20750ceu, 0x803eca7fu,
    0x1e764430u, 0xbcadbde1u, 0x5ae53792u, 0xf91cb143u, 0x97542af4u, 0x358ba4a5u, 0xd3c31e56u, 0x71fa9807u,
    0x103211b8u, 0xae698b69u, 0x4ca1051au, 0xead87ecbu, 0x890ff87cu, 0x2747722du, 0xc57eebdeu, 0x63b6658fu,
    0x01eddf40u, 0xa02558f1u, 0x3e5cd2a2u, 0xdc944c53u, 0x7acbc604u, 0x19033fb5u, 0xb73ab966u, 0x55723317u,
    0xf3a9acc8u, 0x91e12679u, 0x3018a02au, 0xce5019dbu, 0x6c87938cu, 0x0abf0d3du, 0xa8f686eeu, 0x472e009fu,
    0xe5657a50u, 0x839cf401u, 0x21d46db2u, 0xc00be763u, 0x5e436114u, 0xfc7adac5u, 0x9ab25476u, 0x38e9ce27u,
    0xd72147d8u, 0x7558c189u, 0x13903b3au, 0xb1c7b4ebu, 0x4fff2e9cu, 0xee36a84du, 0x8c6e21feu, 0x2aa59bafu,
    0xc8dd1560u, 0x67148f11u, 0x054c08c2u, 0xa3838273u, 0x41bafc24u, 0xdff275d5u, 0x7e29ef86u, 0x1c616937u,
    0xba98e2e8u, 0x58d05c99u, 0xf707d64au, 0x953f4ffbu, 0x3376c9acu, 0xd1ae435du, 0x6fe5bd0eu, 0x0e1d36bfu,
    0xac54b070u, 0x4a8c2a21u, 0xe8c3a3d2u, 0x86fb1d83u, 0x25329734u, 0xc36a10e5u, 0x61a18a96u, 0xffd90447u,
};

static const uint32_t bshim_193_tab6[96] = {
    0xcaf1f059u, 0x69296a0au, 0x0760e3bbu, 0xa5985d6cu, 0x43cfd71du, 0xe20750ceu, 0x803eca7fu, 0x1e764430u,
    0xbcadbde1u, 0x5ae53792u, 0xf91cb143u, 0x97542af4u, 0x358ba4a5u, 0xd3c31e56u, 0x71fa9807u, 0x103211b8u,
    0xae698b69u, 0x4ca1051au, 0xead87ecbu, 0x890ff87cu, 0x2747722du, 0xc57eebdeu, 0x63b6658fu, 0x01eddf40u,
    0xa02558f1u, 0x3e5cd2a2u, 0xdc944c53u, 0x7acbc604u, 0x19033fb5u, 0xb73ab966u, 0x55723317u, 0xf3a9acc8u,
    0x91e12679u, 0x3018a02au, 0xce5019dbu, 0x6c87938cu, 0x0abf0d3du, 0xa8f686eeu, 0x472e009fu, 0xe5657a50u,
    0x839cf401u, 0x21d46db2u, 0xc00be763u, 0x5e436114u, 0xfc7adac5u, 0x9ab25476u, 0x38e9ce27u, 0xd72147d8u,
    0x7558c189u, 0x13903b3au, 0xb1c7b4ebu, 0x4fff2e9cu, 0xee36a84du, 0x8c6e21feu, 0x2aa59bafu, 0xc8dd1560u,
    0x67148f11u, 0x054c08c2u, 0xa3838273u, 0x41bafc24u, 0xdff275d5u, 0x7e29ef86u, 0x1c616937u, 0xba98e2e8u,
    0x58d05c99u, 0xf707d64au, 0x953f4ffbu, 0x3376c9acu, 0xd1ae435du, 0x6fe5bd0eu, 0x0e1d36bfu, 0xac54b070u,
    0x4a8c2a21u, 0xe8c3a3d2u, 0x86fb1d83u, 0x25329734u, 0xc36a10e5u, 0x61a18a96u, 0xffd90447u, 0x9e107df8u,
    0x3c47f7a9u, 0xda7f715au, 0x78b6eb0bu, 0x16ee64bcu, 0xb525de6du, 0x535d581eu, 0xf194d1cfu, 0x8fcc4b80u,
    0x2e03c531u, 0xcc3b3ee2u, 0x6a72b893u, 0x08aa3244u, 0xa6e1abf5u, 0x451925a6u, 0xe3509f57u, 0x81881908u,
};

static const uint32_t bshim_193_tab7[96] = {
    0x4ca1051au, 0xead87ecbu, 0x890ff87cu, 0x2747722du, 0xc57eebdeu, 0x63b6658fu, 0x01eddf40u, 0xa02558f1u,
    0x3e5cd2a2u, 0xdc944c53u, 0x7acbc604u, 0x19033fb5u, 0xb73ab966u, 0x55723317u, 0xf3a9acc8u, 0x91e12679u,
    0x3018a02au, 0xce5019dbu, 0x6c87938cu, 0x0abf0d3du, 0xa8f686eeu, 0x472e009fu, 0xe5657a50u, 0x839cf401u,
    0x21d46db2u, 0xc00be763u, 0x5e436114u, 0xfc7adac5u, 0x9ab25476u, 0x38e9ce27u, 0xd72147d8u, 0x7558c189u,
    0x13903b3au, 0xb1c7b4ebu, 0x4fff2e9cu, 0xee36a84du, 0x8c6e21feu, 0x2aa59bafu, 0xc8dd1560u, 0x67148f11u,
    0x054c08c2u, 0xa3838273u, 0x41bafc24u, 0xdff275d5u, 0x7e29ef86u, 0x1c616937u, 0xba98e2e8u, 0x58d05c99u,
    0xf707d64au, 0x953f4ffbu, 0x3376c9acu, 0xd1ae435du, 0x6fe5bd0eu, 0x0e1d36bfu, 0xac54b070u, 0x4a8c2a21u,
    0xe8c3a3d2u, 0x86fb1d83u, 0x25329734u, 0xc36a10e5u, 0x61a18a96u, 0xffd90447u, 0x9e107df8u, 0x3c47f7a9u,
    0xda7f715au, 0x78b6eb0bu, 0x16ee64bcu, 0xb525de6du, 0x535d581eu, 0xf194d1cfu, 0x8fcc4b80u, 0x2e03c531u,
    0xcc3b3ee2u, 0x6a72b893u, 0x08aa3244u, 0xa6e1abf5u, 0x451925a6u, 0xe3509f57u, 0x81881908u, 0x1fbf92b9u,
    0xbdf70c6au, 0x5c2e861bu, 0xfa65ffccu, 0x989d797du, 0x36d4f32eu, 0xd50c6cdfu, 0x7343e690u, 0x117b6041u,
    0xafb2d9f2u, 0x4dea53a3u, 0xec21cd54u, 0x8a594705u, 0x2890c0b6u, 0xc6c83a67u, 0x64ffb418u, 0x03372dc9u,
};

struct bshim_193_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_193_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_193_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_193_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_193_reset(struct bshim_193_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0017522fu;
    return 0;
}

