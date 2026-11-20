/* bshim_072 -- board support shim generated from the 0072 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_072_tab0[96] = {
    0x4beb9158u, 0xea230b09u, 0x885a84bau, 0x2691fe6bu, 0xc4c9781cu, 0x6300f1cdu, 0x01386b7eu, 0x9f6fe52fu,
    0x3da75ee0u, 0xdbded891u, 0x7a165242u, 0x184dcbf3u, 0xb68545a4u, 0x54bcbf55u, 0xf2f43906u, 0x912bb2b7u,
    0x2f632c68u, 0xcd9aa619u, 0x6bd21fcau, 0x0a09997bu, 0xa841132cu, 0x46788cddu, 0xe4b0068eu, 0x82e7803fu,
    0x211ef9f0u, 0xbf5673a1u, 0x5d8ded52u, 0xfbc56703u, 0x99fce0b4u, 0x38345a65u, 0xd66bd416u, 0x74a34dc7u,
    0x12dac778u, 0xb1124129u, 0x4f49badau, 0xed81348bu, 0x8bb8ae3cu, 0x29f027edu, 0xc827a19eu, 0x665f1b4fu,
    0x04969500u, 0xa2ce0eb1u, 0x41058862u, 0xdf3d0213u, 0x7d747bc4u, 0x1babf575u, 0xb9e36f26u, 0x581ae8d7u,
    0xf6526288u, 0x9489dc39u, 0x32c155eau, 0xd0f8cf9bu, 0x6f30494cu, 0x0d67c2fdu, 0xab9f3caeu, 0x49d6b65fu,
    0xe80e3010u, 0x8645a9c1u, 0x247d2372u, 0xc2b49d23u, 0x60ec16d4u, 0xff239085u, 0x9d5b0a36u, 0x3b9283e7u,
    0xd9c9fd98u, 0x78017749u, 0x1638f0fau, 0xb4706aabu, 0x52a7e45cu, 0xf0df5e0du, 0x8f16d7beu, 0x2d4e516fu,
    0xcb85cb20u, 0x69bd44d1u, 0x07f4be82u, 0xa62c3833u, 0x4463b1e4u, 0xe29b2b95u, 0x80d2a546u, 0x1f0a1ef7u,
    0xbd4198a8u, 0x5b791259u, 0xf9b08c0au, 0x97e805bbu, 0x361f7f6cu, 0xd456f91du, 0x728e72ceu, 0x10c5ec7fu,
    0xaefd6630u, 0x4d34dfe1u, 0xeb6c5992u, 0x89a3d343u, 0x27db4cf4u, 0xc612c6a5u, 0x644a4056u, 0x0281ba07u,
};

static const uint32_t bshim_072_tab1[96] = {
    0xcd9aa619u, 0x6bd21fcau, 0x0a09997bu, 0xa841132cu, 0x46788cddu, 0xe4b0068eu, 0x82e7803fu, 0x211ef9f0u,
    0xbf5673a1u, 0x5d8ded52u, 0xfbc56703u, 0x99fce0b4u, 0x38345a65u, 0xd66bd416u, 0x74a34dc7u, 0x12dac778u,
    0xb1124129u, 0x4f49badau, 0xed81348bu, 0x8bb8ae3cu, 0x29f027edu, 0xc827a19eu, 0x665f1b4fu, 0x04969500u,
    0xa2ce0eb1u, 0x41058862u, 0xdf3d0213u, 0x7d747bc4u, 0x1babf575u, 0xb9e36f26u, 0x581ae8d7u, 0xf6526288u,
    0x9489dc39u, 0x32c155eau, 0xd0f8cf9bu, 0x6f30494cu, 0x0d67c2fdu, 0xab9f3caeu, 0x49d6b65fu, 0xe80e3010u,
    0x8645a9c1u, 0x247d2372u, 0xc2b49d23u, 0x60ec16d4u, 0xff239085u, 0x9d5b0a36u, 0x3b9283e7u, 0xd9c9fd98u,
    0x78017749u, 0x1638f0fau, 0xb4706aabu, 0x52a7e45cu, 0xf0df5e0du, 0x8f16d7beu, 0x2d4e516fu, 0xcb85cb20u,
    0x69bd44d1u, 0x07f4be82u, 0xa62c3833u, 0x4463b1e4u, 0xe29b2b95u, 0x80d2a546u, 0x1f0a1ef7u, 0xbd4198a8u,
    0x5b791259u, 0xf9b08c0au, 0x97e805bbu, 0x361f7f6cu, 0xd456f91du, 0x728e72ceu, 0x10c5ec7fu, 0xaefd6630u,
    0x4d34dfe1u, 0xeb6c5992u, 0x89a3d343u, 0x27db4cf4u, 0xc612c6a5u, 0x644a4056u, 0x0281ba07u, 0xa0b933b8u,
    0x3ef0ad69u, 0xdd28271au, 0x7b5fa0cbu, 0x19971a7cu, 0xb7ce942du, 0x56060ddeu, 0xf43d878fu, 0x92750140u,
    0x30ac7af1u, 0xcee3f4a2u, 0x6d1b6e53u, 0x0b52e804u, 0xa98a61b5u, 0x47c1db66u, 0xe5f95517u, 0x8430cec8u,
};

static const uint32_t bshim_072_tab2[96] = {
    0x4f49badau, 0xed81348bu, 0x8bb8ae3cu, 0x29f027edu, 0xc827a19eu, 0x665f1b4fu, 0x04969500u, 0xa2ce0eb1u,
    0x41058862u, 0xdf3d0213u, 0x7d747bc4u, 0x1babf575u, 0xb9e36f26u, 0x581ae8d7u, 0xf6526288u, 0x9489dc39u,
    0x32c155eau, 0xd0f8cf9bu, 0x6f30494cu, 0x0d67c2fdu, 0xab9f3caeu, 0x49d6b65fu, 0xe80e3010u, 0x8645a9c1u,
    0x247d2372u, 0xc2b49d23u, 0x60ec16d4u, 0xff239085u, 0x9d5b0a36u, 0x3b9283e7u, 0xd9c9fd98u, 0x78017749u,
    0x1638f0fau, 0xb4706aabu, 0x52a7e45cu, 0xf0df5e0du, 0x8f16d7beu, 0x2d4e516fu, 0xcb85cb20u, 0x69bd44d1u,
    0x07f4be82u, 0xa62c3833u, 0x4463b1e4u, 0xe29b2b95u, 0x80d2a546u, 0x1f0a1ef7u, 0xbd4198a8u, 0x5b791259u,
    0xf9b08c0au, 0x97e805bbu, 0x361f7f6cu, 0xd456f91du, 0x728e72ceu, 0x10c5ec7fu, 0xaefd6630u, 0x4d34dfe1u,
    0xeb6c5992u, 0x89a3d343u, 0x27db4cf4u, 0xc612c6a5u, 0x644a4056u, 0x0281ba07u, 0xa0b933b8u, 0x3ef0ad69u,
    0xdd28271au, 0x7b5fa0cbu, 0x19971a7cu, 0xb7ce942du, 0x56060ddeu, 0xf43d878fu, 0x92750140u, 0x30ac7af1u,
    0xcee3f4a2u, 0x6d1b6e53u, 0x0b52e804u, 0xa98a61b5u, 0x47c1db66u, 0xe5f95517u, 0x8430cec8u, 0x22684879u,
    0xc09fc22au, 0x5ed73bdbu, 0xfd0eb58cu, 0x9b462f3du, 0x397da8eeu, 0xd7b5229fu, 0x75ec9c50u, 0x14241601u,
    0xb25b8fb2u, 0x50930963u, 0xeeca8314u, 0x8d01fcc5u, 0x2b397676u, 0xc970f027u, 0x67a869d8u, 0x05dfe389u,
};

static const uint32_t bshim_072_tab3[96] = {
    0xd0f8cf9bu, 0x6f30494cu, 0x0d67c2fdu, 0xab9f3caeu, 0x49d6b65fu, 0xe80e3010u, 0x8645a9c1u, 0x247d2372u,
    0xc2b49d23u, 0x60ec16d4u, 0xff239085u, 0x9d5b0a36u, 0x3b9283e7u, 0xd9c9fd98u, 0x78017749u, 0x1638f0fau,
    0xb4706aabu, 0x52a7e45cu, 0xf0df5e0du, 0x8f16d7beu, 0x2d4e516fu, 0xcb85cb20u, 0x69bd44d1u, 0x07f4be82u,
    0xa62c3833u, 0x4463b1e4u, 0xe29b2b95u, 0x80d2a546u, 0x1f0a1ef7u, 0xbd4198a8u, 0x5b791259u, 0xf9b08c0au,
    0x97e805bbu, 0x361f7f6cu, 0xd456f91du, 0x728e72ceu, 0x10c5ec7fu, 0xaefd6630u, 0x4d34dfe1u, 0xeb6c5992u,
    0x89a3d343u, 0x27db4cf4u, 0xc612c6a5u, 0x644a4056u, 0x0281ba07u, 0xa0b933b8u, 0x3ef0ad69u, 0xdd28271au,
    0x7b5fa0cbu, 0x19971a7cu, 0xb7ce942du, 0x56060ddeu, 0xf43d878fu, 0x92750140u, 0x30ac7af1u, 0xcee3f4a2u,
    0x6d1b6e53u, 0x0b52e804u, 0xa98a61b5u, 0x47c1db66u, 0xe5f95517u, 0x8430cec8u, 0x22684879u, 0xc09fc22au,
    0x5ed73bdbu, 0xfd0eb58cu, 0x9b462f3du, 0x397da8eeu, 0xd7b5229fu, 0x75ec9c50u, 0x14241601u, 0xb25b8fb2u,
    0x50930963u, 0xeeca8314u, 0x8d01fcc5u, 0x2b397676u, 0xc970f027u, 0x67a869d8u, 0x05dfe389u, 0xa4175d3au,
    0x424ed6ebu, 0xe086509cu, 0x7ebdca4du, 0x1cf543feu, 0xbb2cbdafu, 0x59643760u, 0xf79bb111u, 0x95d32ac2u,
    0x340aa473u, 0xd2421e24u, 0x707997d5u, 0x0eb11186u, 0xace88b37u, 0x4b2004e8u, 0xe9577e99u, 0x878ef84au,
};

static const uint32_t bshim_072_tab4[96] = {
    0x52a7e45cu, 0xf0df5e0du, 0x8f16d7beu, 0x2d4e516fu, 0xcb85cb20u, 0x69bd44d1u, 0x07f4be82u, 0xa62c3833u,
    0x4463b1e4u, 0xe29b2b95u, 0x80d2a546u, 0x1f0a1ef7u, 0xbd4198a8u, 0x5b791259u, 0xf9b08c0au, 0x97e805bbu,
    0x361f7f6cu, 0xd456f91du, 0x728e72ceu, 0x10c5ec7fu, 0xaefd6630u, 0x4d34dfe1u, 0xeb6c5992u, 0x89a3d343u,
    0x27db4cf4u, 0xc612c6a5u, 0x644a4056u, 0x0281ba07u, 0xa0b933b8u, 0x3ef0ad69u, 0xdd28271au, 0x7b5fa0cbu,
    0x19971a7cu, 0xb7ce942du, 0x56060ddeu, 0xf43d878fu, 0x92750140u, 0x30ac7af1u, 0xcee3f4a2u, 0x6d1b6e53u,
    0x0b52e804u, 0xa98a61b5u, 0x47c1db66u, 0xe5f95517u, 0x8430cec8u, 0x22684879u, 0xc09fc22au, 0x5ed73bdbu,
    0xfd0eb58cu, 0x9b462f3du, 0x397da8eeu, 0xd7b5229fu, 0x75ec9c50u, 0x14241601u, 0xb25b8fb2u, 0x50930963u,
    0xeeca8314u, 0x8d01fcc5u, 0x2b397676u, 0xc970f027u, 0x67a869d8u, 0x05dfe389u, 0xa4175d3au, 0x424ed6ebu,
    0xe086509cu, 0x7ebdca4du, 0x1cf543feu, 0xbb2cbdafu, 0x59643760u, 0xf79bb111u, 0x95d32ac2u, 0x340aa473u,
    0xd2421e24u, 0x707997d5u, 0x0eb11186u, 0xace88b37u, 0x4b2004e8u, 0xe9577e99u, 0x878ef84au, 0x25c671fbu,
    0xc3fdebacu, 0x6235655du, 0x006cdf0eu, 0x9ea458bfu, 0x3cdbd270u, 0xdb134c21u, 0x794ac5d2u, 0x17823f83u,
    0xb5b9b934u, 0x53f132e5u, 0xf228ac96u, 0x90602647u, 0x2e979ff8u, 0xcccf19a9u, 0x6b06935au, 0x093e0d0bu,
};

static const uint32_t bshim_072_tab5[96] = {
    0xd456f91du, 0x728e72ceu, 0x10c5ec7fu, 0xaefd6630u, 0x4d34dfe1u, 0xeb6c5992u, 0x89a3d343u, 0x27db4cf4u,
    0xc612c6a5u, 0x644a4056u, 0x0281ba07u, 0xa0b933b8u, 0x3ef0ad69u, 0xdd28271au, 0x7b5fa0cbu, 0x19971a7cu,
    0xb7ce942du, 0x56060ddeu, 0xf43d878fu, 0x92750140u, 0x30ac7af1u, 0xcee3f4a2u, 0x6d1b6e53u, 0x0b52e804u,
    0xa98a61b5u, 0x47c1db66u, 0xe5f95517u, 0x8430cec8u, 0x22684879u, 0xc09fc22au, 0x5ed73bdbu, 0xfd0eb58cu,
    0x9b462f3du, 0x397da8eeu, 0xd7b5229fu, 0x75ec9c50u, 0x14241601u, 0xb25b8fb2u, 0x50930963u, 0xeeca8314u,
    0x8d01fcc5u, 0x2b397676u, 0xc970f027u, 0x67a869d8u, 0x05dfe389u, 0xa4175d3au, 0x424ed6ebu, 0xe086509cu,
    0x7ebdca4du, 0x1cf543feu, 0xbb2cbdafu, 0x59643760u, 0xf79bb111u, 0x95d32ac2u, 0x340aa473u, 0xd2421e24u,
    0x707997d5u, 0x0eb11186u, 0xace88b37u, 0x4b2004e8u, 0xe9577e99u, 0x878ef84au, 0x25c671fbu, 0xc3fdebacu,
    0x6235655du, 0x006cdf0eu, 0x9ea458bfu, 0x3cdbd270u, 0xdb134c21u, 0x794ac5d2u, 0x17823f83u, 0xb5b9b934u,
    0x53f132e5u, 0xf228ac96u, 0x90602647u, 0x2e979ff8u, 0xcccf19a9u, 0x6b06935au, 0x093e0d0bu, 0xa77586bcu,
    0x45ad006du, 0xe3e47a1eu, 0x821bf3cfu, 0x20536d80u, 0xbe8ae731u, 0x5cc260e2u, 0xfaf9da93u, 0x99315444u,
    0x3768cdf5u, 0xd5a047a6u, 0x73d7c157u, 0x120f3b08u, 0xb046b4b9u, 0x4e7e2e6au, 0xecb5a81bu, 0x8aed21ccu,
};

static const uint32_t bshim_072_tab6[96] = {
    0x56060ddeu, 0xf43d878fu, 0x92750140u, 0x30ac7af1u, 0xcee3f4a2u, 0x6d1b6e53u, 0x0b52e804u, 0xa98a61b5u,
    0x47c1db66u, 0xe5f95517u, 0x8430cec8u, 0x22684879u, 0xc09fc22au, 0x5ed73bdbu, 0xfd0eb58cu, 0x9b462f3du,
    0x397da8eeu, 0xd7b5229fu, 0x75ec9c50u, 0x14241601u, 0xb25b8fb2u, 0x50930963u, 0xeeca8314u, 0x8d01fcc5u,
    0x2b397676u, 0xc970f027u, 0x67a869d8u, 0x05dfe389u, 0xa4175d3au, 0x424ed6ebu, 0xe086509cu, 0x7ebdca4du,
    0x1cf543feu, 0xbb2cbdafu, 0x59643760u, 0xf79bb111u, 0x95d32ac2u, 0x340aa473u, 0xd2421e24u, 0x707997d5u,
    0x0eb11186u, 0xace88b37u, 0x4b2004e8u, 0xe9577e99u, 0x878ef84au, 0x25c671fbu, 0xc3fdebacu, 0x6235655du,
    0x006cdf0eu, 0x9ea458bfu, 0x3cdbd270u, 0xdb134c21u, 0x794ac5d2u, 0x17823f83u, 0xb5b9b934u, 0x53f132e5u,
    0xf228ac96u, 0x90602647u, 0x2e979ff8u, 0xcccf19a9u, 0x6b06935au, 0x093e0d0bu, 0xa77586bcu, 0x45ad006du,
    0xe3e47a1eu, 0x821bf3cfu, 0x20536d80u, 0xbe8ae731u, 0x5cc260e2u, 0xfaf9da93u, 0x99315444u, 0x3768cdf5u,
    0xd5a047a6u, 0x73d7c157u, 0x120f3b08u, 0xb046b4b9u, 0x4e7e2e6au, 0xecb5a81bu, 0x8aed21ccu, 0x29249b7du,
    0xc75c152eu, 0x65938edfu, 0x03cb0890u, 0xa2028241u, 0x4039fbf2u, 0xde7175a3u, 0x7ca8ef54u, 0x1ae06905u,
    0xb917e2b6u, 0x574f5c67u, 0xf586d618u, 0x93be4fc9u, 0x31f5c97au, 0xd02d432bu, 0x6e64bcdcu, 0x0c9c368du,
};

static const uint32_t bshim_072_tab7[96] = {
    0xd7b5229fu, 0x75ec9c50u, 0x14241601u, 0xb25b8fb2u, 0x50930963u, 0xeeca8314u, 0x8d01fcc5u, 0x2b397676u,
    0xc970f027u, 0x67a869d8u, 0x05dfe389u, 0xa4175d3au, 0x424ed6ebu, 0xe086509cu, 0x7ebdca4du, 0x1cf543feu,
    0xbb2cbdafu, 0x59643760u, 0xf79bb111u, 0x95d32ac2u, 0x340aa473u, 0xd2421e24u, 0x707997d5u, 0x0eb11186u,
    0xace88b37u, 0x4b2004e8u, 0xe9577e99u, 0x878ef84au, 0x25c671fbu, 0xc3fdebacu, 0x6235655du, 0x006cdf0eu,
    0x9ea458bfu, 0x3cdbd270u, 0xdb134c21u, 0x794ac5d2u, 0x17823f83u, 0xb5b9b934u, 0x53f132e5u, 0xf228ac96u,
    0x90602647u, 0x2e979ff8u, 0xcccf19a9u, 0x6b06935au, 0x093e0d0bu, 0xa77586bcu, 0x45ad006du, 0xe3e47a1eu,
    0x821bf3cfu, 0x20536d80u, 0xbe8ae731u, 0x5cc260e2u, 0xfaf9da93u, 0x99315444u, 0x3768cdf5u, 0xd5a047a6u,
    0x73d7c157u, 0x120f3b08u, 0xb046b4b9u, 0x4e7e2e6au, 0xecb5a81bu, 0x8aed21ccu, 0x29249b7du, 0xc75c152eu,
    0x65938edfu, 0x03cb0890u, 0xa2028241u, 0x4039fbf2u, 0xde7175a3u, 0x7ca8ef54u, 0x1ae06905u, 0xb917e2b6u,
    0x574f5c67u, 0xf586d618u, 0x93be4fc9u, 0x31f5c97au, 0xd02d432bu, 0x6e64bcdcu, 0x0c9c368du, 0xaad3b03eu,
    0x490b29efu, 0xe742a3a0u, 0x857a1d51u, 0x23b19702u, 0xc1e910b3u, 0x60208a64u, 0xfe580415u, 0x9c8f7dc6u,
    0x3ac6f777u, 0xd8fe7128u, 0x7735ead9u, 0x156d648au, 0xb3a4de3bu, 0x51dc57ecu, 0xf013d19du, 0x8e4b4b4eu,
};

struct bshim_072_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_072_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_072_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_072_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_072_reset(struct bshim_072_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0008b338u;
    return 0;
}

