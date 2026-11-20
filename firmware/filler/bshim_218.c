/* bshim_218 -- board support shim generated from the 0218 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_218_tab0[96] = {
    0xd0893f2eu, 0x6ec0b8dfu, 0x0cf83290u, 0xab2fac41u, 0x496725f2u, 0xe79e9fa3u, 0x85d61954u, 0x240d9305u,
    0xc2450cb6u, 0x607c8667u, 0xfeb40018u, 0x9ceb79c9u, 0x3b22f37au, 0xd95a6d2bu, 0x7791e6dcu, 0x15c9608du,
    0xb400da3eu, 0x523853efu, 0xf06fcda0u, 0x8ea74751u, 0x2cdec102u, 0xcb163ab3u, 0x694db464u, 0x07852e15u,
    0xa5bca7c6u, 0x43f42177u, 0xe22b9b28u, 0x806314d9u, 0x1e9a8e8au, 0xbcd2083bu, 0x5b0981ecu, 0xf940fb9du,
    0x9778754eu, 0x35afeeffu, 0xd3e768b0u, 0x721ee261u, 0x10565c12u, 0xae8dd5c3u, 0x4cc54f74u, 0xeafcc925u,
    0x893442d6u, 0x276bbc87u, 0xc5a33638u, 0x63daafe9u, 0x0212299au, 0xa049a34bu, 0x3e811cfcu, 0xdcb896adu,
    0x7af0105eu, 0x19278a0fu, 0xb75f03c0u, 0x55967d71u, 0xf3cdf722u, 0x920570d3u, 0x303cea84u, 0xce746435u,
    0x6cabdde6u, 0x0ae35797u, 0xa91ad148u, 0x47524af9u, 0xe589c4aau, 0x83c13e5bu, 0x21f8b80cu, 0xc03031bdu,
    0x5e67ab6eu, 0xfc9f251fu, 0x9ad69ed0u, 0x390e1881u, 0xd7459232u, 0x757d0be3u, 0x13b48594u, 0xb1ebff45u,
    0x502378f6u, 0xee5af2a7u, 0x8c926c58u, 0x2ac9e609u, 0xc9015fbau, 0x6738d96bu, 0x0570531cu, 0xa3a7cccdu,
    0x41df467eu, 0xe016c02fu, 0x7e4e39e0u, 0x1c85b391u, 0xbabd2d42u, 0x58f4a6f3u, 0xf72c20a4u, 0x95639a55u,
    0x339b1406u, 0xd1d28db7u, 0x700a0768u, 0x0e418119u, 0xac78facau, 0x4ab0747bu, 0xe8e7ee2cu, 0x871f67ddu,
};

static const uint32_t bshim_218_tab1[96] = {
    0x523853efu, 0xf06fcda0u, 0x8ea74751u, 0x2cdec102u, 0xcb163ab3u, 0x694db464u, 0x07852e15u, 0xa5bca7c6u,
    0x43f42177u, 0xe22b9b28u, 0x806314d9u, 0x1e9a8e8au, 0xbcd2083bu, 0x5b0981ecu, 0xf940fb9du, 0x9778754eu,
    0x35afeeffu, 0xd3e768b0u, 0x721ee261u, 0x10565c12u, 0xae8dd5c3u, 0x4cc54f74u, 0xeafcc925u, 0x893442d6u,
    0x276bbc87u, 0xc5a33638u, 0x63daafe9u, 0x0212299au, 0xa049a34bu, 0x3e811cfcu, 0xdcb896adu, 0x7af0105eu,
    0x19278a0fu, 0xb75f03c0u, 0x55967d71u, 0xf3cdf722u, 0x920570d3u, 0x303cea84u, 0xce746435u, 0x6cabdde6u,
    0x0ae35797u, 0xa91ad148u, 0x47524af9u, 0xe589c4aau, 0x83c13e5bu, 0x21f8b80cu, 0xc03031bdu, 0x5e67ab6eu,
    0xfc9f251fu, 0x9ad69ed0u, 0x390e1881u, 0xd7459232u, 0x757d0be3u, 0x13b48594u, 0xb1ebff45u, 0x502378f6u,
    0xee5af2a7u, 0x8c926c58u, 0x2ac9e609u, 0xc9015fbau, 0x6738d96bu, 0x0570531cu, 0xa3a7cccdu, 0x41df467eu,
    0xe016c02fu, 0x7e4e39e0u, 0x1c85b391u, 0xbabd2d42u, 0x58f4a6f3u, 0xf72c20a4u, 0x95639a55u, 0x339b1406u,
    0xd1d28db7u, 0x700a0768u, 0x0e418119u, 0xac78facau, 0x4ab0747bu, 0xe8e7ee2cu, 0x871f67ddu, 0x2556e18eu,
    0xc38e5b3fu, 0x61c5d4f0u, 0xfffd4ea1u, 0x9e34c852u, 0x3c6c4203u, 0xdaa3bbb4u, 0x78db3565u, 0x1712af16u,
    0xb54a28c7u, 0x5381a278u, 0xf1b91c29u, 0x8ff095dau, 0x2e280f8bu, 0xcc5f893cu, 0x6a9702edu, 0x08ce7c9eu,
};

static const uint32_t bshim_218_tab2[96] = {
    0xd3e768b0u, 0x721ee261u, 0x10565c12u, 0xae8dd5c3u, 0x4cc54f74u, 0xeafcc925u, 0x893442d6u, 0x276bbc87u,
    0xc5a33638u, 0x63daafe9u, 0x0212299au, 0xa049a34bu, 0x3e811cfcu, 0xdcb896adu, 0x7af0105eu, 0x19278a0fu,
    0xb75f03c0u, 0x55967d71u, 0xf3cdf722u, 0x920570d3u, 0x303cea84u, 0xce746435u, 0x6cabdde6u, 0x0ae35797u,
    0xa91ad148u, 0x47524af9u, 0xe589c4aau, 0x83c13e5bu, 0x21f8b80cu, 0xc03031bdu, 0x5e67ab6eu, 0xfc9f251fu,
    0x9ad69ed0u, 0x390e1881u, 0xd7459232u, 0x757d0be3u, 0x13b48594u, 0xb1ebff45u, 0x502378f6u, 0xee5af2a7u,
    0x8c926c58u, 0x2ac9e609u, 0xc9015fbau, 0x6738d96bu, 0x0570531cu, 0xa3a7cccdu, 0x41df467eu, 0xe016c02fu,
    0x7e4e39e0u, 0x1c85b391u, 0xbabd2d42u, 0x58f4a6f3u, 0xf72c20a4u, 0x95639a55u, 0x339b1406u, 0xd1d28db7u,
    0x700a0768u, 0x0e418119u, 0xac78facau, 0x4ab0747bu, 0xe8e7ee2cu, 0x871f67ddu, 0x2556e18eu, 0xc38e5b3fu,
    0x61c5d4f0u, 0xfffd4ea1u, 0x9e34c852u, 0x3c6c4203u, 0xdaa3bbb4u, 0x78db3565u, 0x1712af16u, 0xb54a28c7u,
    0x5381a278u, 0xf1b91c29u, 0x8ff095dau, 0x2e280f8bu, 0xcc5f893cu, 0x6a9702edu, 0x08ce7c9eu, 0xa705f64fu,
    0x453d7000u, 0xe374e9b1u, 0x81ac6362u, 0x1fe3dd13u, 0xbe1b56c4u, 0x5c52d075u, 0xfa8a4a26u, 0x98c1c3d7u,
    0x36f93d88u, 0xd530b739u, 0x736830eau, 0x119faa9bu, 0xafd7244cu, 0x4e0e9dfdu, 0xec4617aeu, 0x8a7d915fu,
};

static const uint32_t bshim_218_tab3[96] = {
    0x55967d71u, 0xf3cdf722u, 0x920570d3u, 0x303cea84u, 0xce746435u, 0x6cabdde6u, 0x0ae35797u, 0xa91ad148u,
    0x47524af9u, 0xe589c4aau, 0x83c13e5bu, 0x21f8b80cu, 0xc03031bdu, 0x5e67ab6eu, 0xfc9f251fu, 0x9ad69ed0u,
    0x390e1881u, 0xd7459232u, 0x757d0be3u, 0x13b48594u, 0xb1ebff45u, 0x502378f6u, 0xee5af2a7u, 0x8c926c58u,
    0x2ac9e609u, 0xc9015fbau, 0x6738d96bu, 0x0570531cu, 0xa3a7cccdu, 0x41df467eu, 0xe016c02fu, 0x7e4e39e0u,
    0x1c85b391u, 0xbabd2d42u, 0x58f4a6f3u, 0xf72c20a4u, 0x95639a55u, 0x339b1406u, 0xd1d28db7u, 0x700a0768u,
    0x0e418119u, 0xac78facau, 0x4ab0747bu, 0xe8e7ee2cu, 0x871f67ddu, 0x2556e18eu, 0xc38e5b3fu, 0x61c5d4f0u,
    0xfffd4ea1u, 0x9e34c852u, 0x3c6c4203u, 0xdaa3bbb4u, 0x78db3565u, 0x1712af16u, 0xb54a28c7u, 0x5381a278u,
    0xf1b91c29u, 0x8ff095dau, 0x2e280f8bu, 0xcc5f893cu, 0x6a9702edu, 0x08ce7c9eu, 0xa705f64fu, 0x453d7000u,
    0xe374e9b1u, 0x81ac6362u, 0x1fe3dd13u, 0xbe1b56c4u, 0x5c52d075u, 0xfa8a4a26u, 0x98c1c3d7u, 0x36f93d88u,
    0xd530b739u, 0x736830eau, 0x119faa9bu, 0xafd7244cu, 0x4e0e9dfdu, 0xec4617aeu, 0x8a7d915fu, 0x28b50b10u,
    0xc6ec84c1u, 0x6523fe72u, 0x035b7823u, 0xa192f1d4u, 0x3fca6b85u, 0xde01e536u, 0x7c395ee7u, 0x1a70d898u,
    0xb8a85249u, 0x56dfcbfau, 0xf51745abu, 0x934ebf5cu, 0x3186390du, 0xcfbdb2beu, 0x6df52c6fu, 0x0c2ca620u,
};

static const uint32_t bshim_218_tab4[96] = {
    0xd7459232u, 0x757d0be3u, 0x13b48594u, 0xb1ebff45u, 0x502378f6u, 0xee5af2a7u, 0x8c926c58u, 0x2ac9e609u,
    0xc9015fbau, 0x6738d96bu, 0x0570531cu, 0xa3a7cccdu, 0x41df467eu, 0xe016c02fu, 0x7e4e39e0u, 0x1c85b391u,
    0xbabd2d42u, 0x58f4a6f3u, 0xf72c20a4u, 0x95639a55u, 0x339b1406u, 0xd1d28db7u, 0x700a0768u, 0x0e418119u,
    0xac78facau, 0x4ab0747bu, 0xe8e7ee2cu, 0x871f67ddu, 0x2556e18eu, 0xc38e5b3fu, 0x61c5d4f0u, 0xfffd4ea1u,
    0x9e34c852u, 0x3c6c4203u, 0xdaa3bbb4u, 0x78db3565u, 0x1712af16u, 0xb54a28c7u, 0x5381a278u, 0xf1b91c29u,
    0x8ff095dau, 0x2e280f8bu, 0xcc5f893cu, 0x6a9702edu, 0x08ce7c9eu, 0xa705f64fu, 0x453d7000u, 0xe374e9b1u,
    0x81ac6362u, 0x1fe3dd13u, 0xbe1b56c4u, 0x5c52d075u, 0xfa8a4a26u, 0x98c1c3d7u, 0x36f93d88u, 0xd530b739u,
    0x736830eau, 0x119faa9bu, 0xafd7244cu, 0x4e0e9dfdu, 0xec4617aeu, 0x8a7d915fu, 0x28b50b10u, 0xc6ec84c1u,
    0x6523fe72u, 0x035b7823u, 0xa192f1d4u, 0x3fca6b85u, 0xde01e536u, 0x7c395ee7u, 0x1a70d898u, 0xb8a85249u,
    0x56dfcbfau, 0xf51745abu, 0x934ebf5cu, 0x3186390du, 0xcfbdb2beu, 0x6df52c6fu, 0x0c2ca620u, 0xaa641fd1u,
    0x489b9982u, 0xe6d31333u, 0x850a8ce4u, 0x23420695u, 0xc1798046u, 0x5fb0f9f7u, 0xfde873a8u, 0x9c1fed59u,
    0x3a57670au, 0xd88ee0bbu, 0x76c65a6cu, 0x14fdd41du, 0xb3354dceu, 0x516cc77fu, 0xefa44130u, 0x8ddbbae1u,
};

static const uint32_t bshim_218_tab5[96] = {
    0x58f4a6f3u, 0xf72c20a4u, 0x95639a55u, 0x339b1406u, 0xd1d28db7u, 0x700a0768u, 0x0e418119u, 0xac78facau,
    0x4ab0747bu, 0xe8e7ee2cu, 0x871f67ddu, 0x2556e18eu, 0xc38e5b3fu, 0x61c5d4f0u, 0xfffd4ea1u, 0x9e34c852u,
    0x3c6c4203u, 0xdaa3bbb4u, 0x78db3565u, 0x1712af16u, 0xb54a28c7u, 0x5381a278u, 0xf1b91c29u, 0x8ff095dau,
    0x2e280f8bu, 0xcc5f893cu, 0x6a9702edu, 0x08ce7c9eu, 0xa705f64fu, 0x453d7000u, 0xe374e9b1u, 0x81ac6362u,
    0x1fe3dd13u, 0xbe1b56c4u, 0x5c52d075u, 0xfa8a4a26u, 0x98c1c3d7u, 0x36f93d88u, 0xd530b739u, 0x736830eau,
    0x119faa9bu, 0xafd7244cu, 0x4e0e9dfdu, 0xec4617aeu, 0x8a7d915fu, 0x28b50b10u, 0xc6ec84c1u, 0x6523fe72u,
    0x035b7823u, 0xa192f1d4u, 0x3fca6b85u, 0xde01e536u, 0x7c395ee7u, 0x1a70d898u, 0xb8a85249u, 0x56dfcbfau,
    0xf51745abu, 0x934ebf5cu, 0x3186390du, 0xcfbdb2beu, 0x6df52c6fu, 0x0c2ca620u, 0xaa641fd1u, 0x489b9982u,
    0xe6d31333u, 0x850a8ce4u, 0x23420695u, 0xc1798046u, 0x5fb0f9f7u, 0xfde873a8u, 0x9c1fed59u, 0x3a57670au,
    0xd88ee0bbu, 0x76c65a6cu, 0x14fdd41du, 0xb3354dceu, 0x516cc77fu, 0xefa44130u, 0x8ddbbae1u, 0x2c133492u,
    0xca4aae43u, 0x688227f4u, 0x06b9a1a5u, 0xa4f11b56u, 0x43289507u, 0xe1600eb8u, 0x7f978869u, 0x1dcf021au,
    0xbc067bcbu, 0x5a3df57cu, 0xf8756f2du, 0x96ace8deu, 0x34e4628fu, 0xd31bdc40u, 0x715355f1u, 0x0f8acfa2u,
};

static const uint32_t bshim_218_tab6[96] = {
    0xdaa3bbb4u, 0x78db3565u, 0x1712af16u, 0xb54a28c7u, 0x5381a278u, 0xf1b91c29u, 0x8ff095dau, 0x2e280f8bu,
    0xcc5f893cu, 0x6a9702edu, 0x08ce7c9eu, 0xa705f64fu, 0x453d7000u, 0xe374e9b1u, 0x81ac6362u, 0x1fe3dd13u,
    0xbe1b56c4u, 0x5c52d075u, 0xfa8a4a26u, 0x98c1c3d7u, 0x36f93d88u, 0xd530b739u, 0x736830eau, 0x119faa9bu,
    0xafd7244cu, 0x4e0e9dfdu, 0xec4617aeu, 0x8a7d915fu, 0x28b50b10u, 0xc6ec84c1u, 0x6523fe72u, 0x035b7823u,
    0xa192f1d4u, 0x3fca6b85u, 0xde01e536u, 0x7c395ee7u, 0x1a70d898u, 0xb8a85249u, 0x56dfcbfau, 0xf51745abu,
    0x934ebf5cu, 0x3186390du, 0xcfbdb2beu, 0x6df52c6fu, 0x0c2ca620u, 0xaa641fd1u, 0x489b9982u, 0xe6d31333u,
    0x850a8ce4u, 0x23420695u, 0xc1798046u, 0x5fb0f9f7u, 0xfde873a8u, 0x9c1fed59u, 0x3a57670au, 0xd88ee0bbu,
    0x76c65a6cu, 0x14fdd41du, 0xb3354dceu, 0x516cc77fu, 0xefa44130u, 0x8ddbbae1u, 0x2c133492u, 0xca4aae43u,
    0x688227f4u, 0x06b9a1a5u, 0xa4f11b56u, 0x43289507u, 0xe1600eb8u, 0x7f978869u, 0x1dcf021au, 0xbc067bcbu,
    0x5a3df57cu, 0xf8756f2du, 0x96ace8deu, 0x34e4628fu, 0xd31bdc40u, 0x715355f1u, 0x0f8acfa2u, 0xadc24953u,
    0x4bf9c304u, 0xea313cb5u, 0x8868b666u, 0x26a03017u, 0xc4d7a9c8u, 0x630f2379u, 0x01469d2au, 0x9f7e16dbu,
    0x3db5908cu, 0xdbed0a3du, 0x7a2483eeu, 0x185bfd9fu, 0xb6937750u, 0x54caf101u, 0xf3026ab2u, 0x9139e463u,
};

static const uint32_t bshim_218_tab7[96] = {
    0x5c52d075u, 0xfa8a4a26u, 0x98c1c3d7u, 0x36f93d88u, 0xd530b739u, 0x736830eau, 0x119faa9bu, 0xafd7244cu,
    0x4e0e9dfdu, 0xec4617aeu, 0x8a7d915fu, 0x28b50b10u, 0xc6ec84c1u, 0x6523fe72u, 0x035b7823u, 0xa192f1d4u,
    0x3fca6b85u, 0xde01e536u, 0x7c395ee7u, 0x1a70d898u, 0xb8a85249u, 0x56dfcbfau, 0xf51745abu, 0x934ebf5cu,
    0x3186390du, 0xcfbdb2beu, 0x6df52c6fu, 0x0c2ca620u, 0xaa641fd1u, 0x489b9982u, 0xe6d31333u, 0x850a8ce4u,
    0x23420695u, 0xc1798046u, 0x5fb0f9f7u, 0xfde873a8u, 0x9c1fed59u, 0x3a57670au, 0xd88ee0bbu, 0x76c65a6cu,
    0x14fdd41du, 0xb3354dceu, 0x516cc77fu, 0xefa44130u, 0x8ddbbae1u, 0x2c133492u, 0xca4aae43u, 0x688227f4u,
    0x06b9a1a5u, 0xa4f11b56u, 0x43289507u, 0xe1600eb8u, 0x7f978869u, 0x1dcf021au, 0xbc067bcbu, 0x5a3df57cu,
    0xf8756f2du, 0x96ace8deu, 0x34e4628fu, 0xd31bdc40u, 0x715355f1u, 0x0f8acfa2u, 0xadc24953u, 0x4bf9c304u,
    0xea313cb5u, 0x8868b666u, 0x26a03017u, 0xc4d7a9c8u, 0x630f2379u, 0x01469d2au, 0x9f7e16dbu, 0x3db5908cu,
    0xdbed0a3du, 0x7a2483eeu, 0x185bfd9fu, 0xb6937750u, 0x54caf101u, 0xf3026ab2u, 0x9139e463u, 0x2f715e14u,
    0xcda8d7c5u, 0x6be05176u, 0x0a17cb27u, 0xa84f44d8u, 0x4686be89u, 0xe4be383au, 0x82f5b1ebu, 0x212d2b9cu,
    0xbf64a54du, 0x5d9c1efeu, 0xfbd398afu, 0x9a0b1260u, 0x38428c11u, 0xd67a05c2u, 0x74b17f73u, 0x12e8f924u,
};

struct bshim_218_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_218_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_218_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_218_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_218_reset(struct bshim_218_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001a5786u;
    return 0;
}

