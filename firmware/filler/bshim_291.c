/* bshim_291 -- board support shim generated from the 0291 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_291_tab0[96] = {
    0x12d81619u, 0xb10f8fcau, 0x4f47097bu, 0xed7e832cu, 0x8bb5fcddu, 0x29ed768eu, 0xc824f03fu, 0x665c69f0u,
    0x0493e3a1u, 0xa2cb5d52u, 0x4102d703u, 0xdf3a50b4u, 0x7d71ca65u, 0x1ba94416u, 0xb9e0bdc7u, 0x58183778u,
    0xf64fb129u, 0x94872adau, 0x32bea48bu, 0xd0f61e3cu, 0x6f2d97edu, 0x0d65119eu, 0xab9c8b4fu, 0x49d40500u,
    0xe80b7eb1u, 0x8642f862u, 0x247a7213u, 0xc2b1ebc4u, 0x60e96575u, 0xff20df26u, 0x9d5858d7u, 0x3b8fd288u,
    0xd9c74c39u, 0x77fec5eau, 0x16363f9bu, 0xb46db94cu, 0x52a532fdu, 0xf0dcacaeu, 0x8f14265fu, 0x2d4ba010u,
    0xcb8319c1u, 0x69ba9372u, 0x07f20d23u, 0xa62986d4u, 0x44610085u, 0xe2987a36u, 0x80cff3e7u, 0x1f076d98u,
    0xbd3ee749u, 0x5b7660fau, 0xf9addaabu, 0x97e5545cu, 0x361cce0du, 0xd45447beu, 0x728bc16fu, 0x10c33b20u,
    0xaefab4d1u, 0x4d322e82u, 0xeb69a833u, 0x89a121e4u, 0x27d89b95u, 0xc6101546u, 0x64478ef7u, 0x027f08a8u,
    0xa0b68259u, 0x3eedfc0au, 0xdd2575bbu, 0x7b5cef6cu, 0x1994691du, 0xb7cbe2ceu, 0x56035c7fu, 0xf43ad630u,
    0x92724fe1u, 0x30a9c992u, 0xcee14343u, 0x6d18bcf4u, 0x0b5036a5u, 0xa987b056u, 0x47bf2a07u, 0xe5f6a3b8u,
    0x842e1d69u, 0x2265971au, 0xc09d10cbu, 0x5ed48a7cu, 0xfd0c042du, 0x9b437ddeu, 0x397af78fu, 0xd7b27140u,
    0x75e9eaf1u, 0x142164a2u, 0xb258de53u, 0x50905804u, 0xeec7d1b5u, 0x8cff4b66u, 0x2b36c517u, 0xc96e3ec8u,
};

static const uint32_t bshim_291_tab1[96] = {
    0x94872adau, 0x32bea48bu, 0xd0f61e3cu, 0x6f2d97edu, 0x0d65119eu, 0xab9c8b4fu, 0x49d40500u, 0xe80b7eb1u,
    0x8642f862u, 0x247a7213u, 0xc2b1ebc4u, 0x60e96575u, 0xff20df26u, 0x9d5858d7u, 0x3b8fd288u, 0xd9c74c39u,
    0x77fec5eau, 0x16363f9bu, 0xb46db94cu, 0x52a532fdu, 0xf0dcacaeu, 0x8f14265fu, 0x2d4ba010u, 0xcb8319c1u,
    0x69ba9372u, 0x07f20d23u, 0xa62986d4u, 0x44610085u, 0xe2987a36u, 0x80cff3e7u, 0x1f076d98u, 0xbd3ee749u,
    0x5b7660fau, 0xf9addaabu, 0x97e5545cu, 0x361cce0du, 0xd45447beu, 0x728bc16fu, 0x10c33b20u, 0xaefab4d1u,
    0x4d322e82u, 0xeb69a833u, 0x89a121e4u, 0x27d89b95u, 0xc6101546u, 0x64478ef7u, 0x027f08a8u, 0xa0b68259u,
    0x3eedfc0au, 0xdd2575bbu, 0x7b5cef6cu, 0x1994691du, 0xb7cbe2ceu, 0x56035c7fu, 0xf43ad630u, 0x92724fe1u,
    0x30a9c992u, 0xcee14343u, 0x6d18bcf4u, 0x0b5036a5u, 0xa987b056u, 0x47bf2a07u, 0xe5f6a3b8u, 0x842e1d69u,
    0x2265971au, 0xc09d10cbu, 0x5ed48a7cu, 0xfd0c042du, 0x9b437ddeu, 0x397af78fu, 0xd7b27140u, 0x75e9eaf1u,
    0x142164a2u, 0xb258de53u, 0x50905804u, 0xeec7d1b5u, 0x8cff4b66u, 0x2b36c517u, 0xc96e3ec8u, 0x67a5b879u,
    0x05dd322au, 0xa414abdbu, 0x424c258cu, 0xe0839f3du, 0x7ebb18eeu, 0x1cf2929fu, 0xbb2a0c50u, 0x59618601u,
    0xf798ffb2u, 0x95d07963u, 0x3407f314u, 0xd23f6cc5u, 0x7076e676u, 0x0eae6027u, 0xace5d9d8u, 0x4b1d5389u,
};

static const uint32_t bshim_291_tab2[96] = {
    0x16363f9bu, 0xb46db94cu, 0x52a532fdu, 0xf0dcacaeu, 0x8f14265fu, 0x2d4ba010u, 0xcb8319c1u, 0x69ba9372u,
    0x07f20d23u, 0xa62986d4u, 0x44610085u, 0xe2987a36u, 0x80cff3e7u, 0x1f076d98u, 0xbd3ee749u, 0x5b7660fau,
    0xf9addaabu, 0x97e5545cu, 0x361cce0du, 0xd45447beu, 0x728bc16fu, 0x10c33b20u, 0xaefab4d1u, 0x4d322e82u,
    0xeb69a833u, 0x89a121e4u, 0x27d89b95u, 0xc6101546u, 0x64478ef7u, 0x027f08a8u, 0xa0b68259u, 0x3eedfc0au,
    0xdd2575bbu, 0x7b5cef6cu, 0x1994691du, 0xb7cbe2ceu, 0x56035c7fu, 0xf43ad630u, 0x92724fe1u, 0x30a9c992u,
    0xcee14343u, 0x6d18bcf4u, 0x0b5036a5u, 0xa987b056u, 0x47bf2a07u, 0xe5f6a3b8u, 0x842e1d69u, 0x2265971au,
    0xc09d10cbu, 0x5ed48a7cu, 0xfd0c042du, 0x9b437ddeu, 0x397af78fu, 0xd7b27140u, 0x75e9eaf1u, 0x142164a2u,
    0xb258de53u, 0x50905804u, 0xeec7d1b5u, 0x8cff4b66u, 0x2b36c517u, 0xc96e3ec8u, 0x67a5b879u, 0x05dd322au,
    0xa414abdbu, 0x424c258cu, 0xe0839f3du, 0x7ebb18eeu, 0x1cf2929fu, 0xbb2a0c50u, 0x59618601u, 0xf798ffb2u,
    0x95d07963u, 0x3407f314u, 0xd23f6cc5u, 0x7076e676u, 0x0eae6027u, 0xace5d9d8u, 0x4b1d5389u, 0xe954cd3au,
    0x878c46ebu, 0x25c3c09cu, 0xc3fb3a4du, 0x6232b3feu, 0x006a2dafu, 0x9ea1a760u, 0x3cd92111u, 0xdb109ac2u,
    0x79481473u, 0x177f8e24u, 0xb5b707d5u, 0x53ee8186u, 0xf225fb37u, 0x905d74e8u, 0x2e94ee99u, 0xcccc684au,
};

static const uint32_t bshim_291_tab3[96] = {
    0x97e5545cu, 0x361cce0du, 0xd45447beu, 0x728bc16fu, 0x10c33b20u, 0xaefab4d1u, 0x4d322e82u, 0xeb69a833u,
    0x89a121e4u, 0x27d89b95u, 0xc6101546u, 0x64478ef7u, 0x027f08a8u, 0xa0b68259u, 0x3eedfc0au, 0xdd2575bbu,
    0x7b5cef6cu, 0x1994691du, 0xb7cbe2ceu, 0x56035c7fu, 0xf43ad630u, 0x92724fe1u, 0x30a9c992u, 0xcee14343u,
    0x6d18bcf4u, 0x0b5036a5u, 0xa987b056u, 0x47bf2a07u, 0xe5f6a3b8u, 0x842e1d69u, 0x2265971au, 0xc09d10cbu,
    0x5ed48a7cu, 0xfd0c042du, 0x9b437ddeu, 0x397af78fu, 0xd7b27140u, 0x75e9eaf1u, 0x142164a2u, 0xb258de53u,
    0x50905804u, 0xeec7d1b5u, 0x8cff4b66u, 0x2b36c517u, 0xc96e3ec8u, 0x67a5b879u, 0x05dd322au, 0xa414abdbu,
    0x424c258cu, 0xe0839f3du, 0x7ebb18eeu, 0x1cf2929fu, 0xbb2a0c50u, 0x59618601u, 0xf798ffb2u, 0x95d07963u,
    0x3407f314u, 0xd23f6cc5u, 0x7076e676u, 0x0eae6027u, 0xace5d9d8u, 0x4b1d5389u, 0xe954cd3au, 0x878c46ebu,
    0x25c3c09cu, 0xc3fb3a4du, 0x6232b3feu, 0x006a2dafu, 0x9ea1a760u, 0x3cd92111u, 0xdb109ac2u, 0x79481473u,
    0x177f8e24u, 0xb5b707d5u, 0x53ee8186u, 0xf225fb37u, 0x905d74e8u, 0x2e94ee99u, 0xcccc684au, 0x6b03e1fbu,
    0x093b5bacu, 0xa772d55du, 0x45aa4f0eu, 0xe3e1c8bfu, 0x82194270u, 0x2050bc21u, 0xbe8835d2u, 0x5cbfaf83u,
    0xfaf72934u, 0x992ea2e5u, 0x37661c96u, 0xd59d9647u, 0x73d50ff8u, 0x120c89a9u, 0xb044035au, 0x4e7b7d0bu,
};

static const uint32_t bshim_291_tab4[96] = {
    0x1994691du, 0xb7cbe2ceu, 0x56035c7fu, 0xf43ad630u, 0x92724fe1u, 0x30a9c992u, 0xcee14343u, 0x6d18bcf4u,
    0x0b5036a5u, 0xa987b056u, 0x47bf2a07u, 0xe5f6a3b8u, 0x842e1d69u, 0x2265971au, 0xc09d10cbu, 0x5ed48a7cu,
    0xfd0c042du, 0x9b437ddeu, 0x397af78fu, 0xd7b27140u, 0x75e9eaf1u, 0x142164a2u, 0xb258de53u, 0x50905804u,
    0xeec7d1b5u, 0x8cff4b66u, 0x2b36c517u, 0xc96e3ec8u, 0x67a5b879u, 0x05dd322au, 0xa414abdbu, 0x424c258cu,
    0xe0839f3du, 0x7ebb18eeu, 0x1cf2929fu, 0xbb2a0c50u, 0x59618601u, 0xf798ffb2u, 0x95d07963u, 0x3407f314u,
    0xd23f6cc5u, 0x7076e676u, 0x0eae6027u, 0xace5d9d8u, 0x4b1d5389u, 0xe954cd3au, 0x878c46ebu, 0x25c3c09cu,
    0xc3fb3a4du, 0x6232b3feu, 0x006a2dafu, 0x9ea1a760u, 0x3cd92111u, 0xdb109ac2u, 0x79481473u, 0x177f8e24u,
    0xb5b707d5u, 0x53ee8186u, 0xf225fb37u, 0x905d74e8u, 0x2e94ee99u, 0xcccc684au, 0x6b03e1fbu, 0x093b5bacu,
    0xa772d55du, 0x45aa4f0eu, 0xe3e1c8bfu, 0x82194270u, 0x2050bc21u, 0xbe8835d2u, 0x5cbfaf83u, 0xfaf72934u,
    0x992ea2e5u, 0x37661c96u, 0xd59d9647u, 0x73d50ff8u, 0x120c89a9u, 0xb044035au, 0x4e7b7d0bu, 0xecb2f6bcu,
    0x8aea706du, 0x2921ea1eu, 0xc75963cfu, 0x6590dd80u, 0x03c85731u, 0xa1ffd0e2u, 0x40374a93u, 0xde6ec444u,
    0x7ca63df5u, 0x1addb7a6u, 0xb9153157u, 0x574cab08u, 0xf58424b9u, 0x93bb9e6au, 0x31f3181bu, 0xd02a91ccu,
};

static const uint32_t bshim_291_tab5[96] = {
    0x9b437ddeu, 0x397af78fu, 0xd7b27140u, 0x75e9eaf1u, 0x142164a2u, 0xb258de53u, 0x50905804u, 0xeec7d1b5u,
    0x8cff4b66u, 0x2b36c517u, 0xc96e3ec8u, 0x67a5b879u, 0x05dd322au, 0xa414abdbu, 0x424c258cu, 0xe0839f3du,
    0x7ebb18eeu, 0x1cf2929fu, 0xbb2a0c50u, 0x59618601u, 0xf798ffb2u, 0x95d07963u, 0x3407f314u, 0xd23f6cc5u,
    0x7076e676u, 0x0eae6027u, 0xace5d9d8u, 0x4b1d5389u, 0xe954cd3au, 0x878c46ebu, 0x25c3c09cu, 0xc3fb3a4du,
    0x6232b3feu, 0x006a2dafu, 0x9ea1a760u, 0x3cd92111u, 0xdb109ac2u, 0x79481473u, 0x177f8e24u, 0xb5b707d5u,
    0x53ee8186u, 0xf225fb37u, 0x905d74e8u, 0x2e94ee99u, 0xcccc684au, 0x6b03e1fbu, 0x093b5bacu, 0xa772d55du,
    0x45aa4f0eu, 0xe3e1c8bfu, 0x82194270u, 0x2050bc21u, 0xbe8835d2u, 0x5cbfaf83u, 0xfaf72934u, 0x992ea2e5u,
    0x37661c96u, 0xd59d9647u, 0x73d50ff8u, 0x120c89a9u, 0xb044035au, 0x4e7b7d0bu, 0xecb2f6bcu, 0x8aea706du,
    0x2921ea1eu, 0xc75963cfu, 0x6590dd80u, 0x03c85731u, 0xa1ffd0e2u, 0x40374a93u, 0xde6ec444u, 0x7ca63df5u,
    0x1addb7a6u, 0xb9153157u, 0x574cab08u, 0xf58424b9u, 0x93bb9e6au, 0x31f3181bu, 0xd02a91ccu, 0x6e620b7du,
    0x0c99852eu, 0xaad0fedfu, 0x49087890u, 0xe73ff241u, 0x85776bf2u, 0x23aee5a3u, 0xc1e65f54u, 0x601dd905u,
    0xfe5552b6u, 0x9c8ccc67u, 0x3ac44618u, 0xd8fbbfc9u, 0x7733397au, 0x156ab32bu, 0xb3a22cdcu, 0x51d9a68du,
};

static const uint32_t bshim_291_tab6[96] = {
    0x1cf2929fu, 0xbb2a0c50u, 0x59618601u, 0xf798ffb2u, 0x95d07963u, 0x3407f314u, 0xd23f6cc5u, 0x7076e676u,
    0x0eae6027u, 0xace5d9d8u, 0x4b1d5389u, 0xe954cd3au, 0x878c46ebu, 0x25c3c09cu, 0xc3fb3a4du, 0x6232b3feu,
    0x006a2dafu, 0x9ea1a760u, 0x3cd92111u, 0xdb109ac2u, 0x79481473u, 0x177f8e24u, 0xb5b707d5u, 0x53ee8186u,
    0xf225fb37u, 0x905d74e8u, 0x2e94ee99u, 0xcccc684au, 0x6b03e1fbu, 0x093b5bacu, 0xa772d55du, 0x45aa4f0eu,
    0xe3e1c8bfu, 0x82194270u, 0x2050bc21u, 0xbe8835d2u, 0x5cbfaf83u, 0xfaf72934u, 0x992ea2e5u, 0x37661c96u,
    0xd59d9647u, 0x73d50ff8u, 0x120c89a9u, 0xb044035au, 0x4e7b7d0bu, 0xecb2f6bcu, 0x8aea706du, 0x2921ea1eu,
    0xc75963cfu, 0x6590dd80u, 0x03c85731u, 0xa1ffd0e2u, 0x40374a93u, 0xde6ec444u, 0x7ca63df5u, 0x1addb7a6u,
    0xb9153157u, 0x574cab08u, 0xf58424b9u, 0x93bb9e6au, 0x31f3181bu, 0xd02a91ccu, 0x6e620b7du, 0x0c99852eu,
    0xaad0fedfu, 0x49087890u, 0xe73ff241u, 0x85776bf2u, 0x23aee5a3u, 0xc1e65f54u, 0x601dd905u, 0xfe5552b6u,
    0x9c8ccc67u, 0x3ac44618u, 0xd8fbbfc9u, 0x7733397au, 0x156ab32bu, 0xb3a22cdcu, 0x51d9a68du, 0xf011203eu,
    0x8e4899efu, 0x2c8013a0u, 0xcab78d51u, 0x68ef0702u, 0x072680b3u, 0xa55dfa64u, 0x43957415u, 0xe1ccedc6u,
    0x80046777u, 0x1e3be128u, 0xbc735ad9u, 0x5aaad48au, 0xf8e24e3bu, 0x9719c7ecu, 0x3551419du, 0xd388bb4eu,
};

static const uint32_t bshim_291_tab7[96] = {
    0x9ea1a760u, 0x3cd92111u, 0xdb109ac2u, 0x79481473u, 0x177f8e24u, 0xb5b707d5u, 0x53ee8186u, 0xf225fb37u,
    0x905d74e8u, 0x2e94ee99u, 0xcccc684au, 0x6b03e1fbu, 0x093b5bacu, 0xa772d55du, 0x45aa4f0eu, 0xe3e1c8bfu,
    0x82194270u, 0x2050bc21u, 0xbe8835d2u, 0x5cbfaf83u, 0xfaf72934u, 0x992ea2e5u, 0x37661c96u, 0xd59d9647u,
    0x73d50ff8u, 0x120c89a9u, 0xb044035au, 0x4e7b7d0bu, 0xecb2f6bcu, 0x8aea706du, 0x2921ea1eu, 0xc75963cfu,
    0x6590dd80u, 0x03c85731u, 0xa1ffd0e2u, 0x40374a93u, 0xde6ec444u, 0x7ca63df5u, 0x1addb7a6u, 0xb9153157u,
    0x574cab08u, 0xf58424b9u, 0x93bb9e6au, 0x31f3181bu, 0xd02a91ccu, 0x6e620b7du, 0x0c99852eu, 0xaad0fedfu,
    0x49087890u, 0xe73ff241u, 0x85776bf2u, 0x23aee5a3u, 0xc1e65f54u, 0x601dd905u, 0xfe5552b6u, 0x9c8ccc67u,
    0x3ac44618u, 0xd8fbbfc9u, 0x7733397au, 0x156ab32bu, 0xb3a22cdcu, 0x51d9a68du, 0xf011203eu, 0x8e4899efu,
    0x2c8013a0u, 0xcab78d51u, 0x68ef0702u, 0x072680b3u, 0xa55dfa64u, 0x43957415u, 0xe1ccedc6u, 0x80046777u,
    0x1e3be128u, 0xbc735ad9u, 0x5aaad48au, 0xf8e24e3bu, 0x9719c7ecu, 0x3551419du, 0xd388bb4eu, 0x71c034ffu,
    0x0ff7aeb0u, 0xae2f2861u, 0x4c66a212u, 0xea9e1bc3u, 0x88d59574u, 0x270d0f25u, 0xc54488d6u, 0x637c0287u,
    0x01b37c38u, 0x9feaf5e9u, 0x3e226f9au, 0xdc59e94bu, 0x7a9162fcu, 0x18c8dcadu, 0xb700565eu, 0x5537d00fu,
};

struct bshim_291_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_291_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8807425u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e6c3e9cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x04580913u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_291_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a43d38au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_291_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_291_reset(struct bshim_291_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x002329adu;
    return 0;
}

