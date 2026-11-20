/* bshim_217 -- board support shim generated from the 0217 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_217_tab0[96] = {
    0xda25f99bu, 0x785d734cu, 0x1694ecfdu, 0xb4cc66aeu, 0x5303e05fu, 0xf13b5a10u, 0x8f72d3c1u, 0x2daa4d72u,
    0xcbe1c723u, 0x6a1940d4u, 0x0850ba85u, 0xa6883436u, 0x44bfade7u, 0xe2f72798u, 0x812ea149u, 0x1f661afau,
    0xbd9d94abu, 0x5bd50e5cu, 0xfa0c880du, 0x984401beu, 0x367b7b6fu, 0xd4b2f520u, 0x72ea6ed1u, 0x1121e882u,
    0xaf596233u, 0x4d90dbe4u, 0xebc85595u, 0x89ffcf46u, 0x283748f7u, 0xc66ec2a8u, 0x64a63c59u, 0x02ddb60au,
    0xa1152fbbu, 0x3f4ca96cu, 0xdd84231du, 0x7bbb9cceu, 0x19f3167fu, 0xb82a9030u, 0x566209e1u, 0xf4998392u,
    0x92d0fd43u, 0x310876f4u, 0xcf3ff0a5u, 0x6d776a56u, 0x0baee407u, 0xa9e65db8u, 0x481dd769u, 0xe655511au,
    0x848ccacbu, 0x22c4447cu, 0xc0fbbe2du, 0x5f3337deu, 0xfd6ab18fu, 0x9ba22b40u, 0x39d9a4f1u, 0xd8111ea2u,
    0x76489853u, 0x14801204u, 0xb2b78bb5u, 0x50ef0566u, 0xef267f17u, 0x8d5df8c8u, 0x2b957279u, 0xc9ccec2au,
    0x680465dbu, 0x063bdf8cu, 0xa473593du, 0x42aad2eeu, 0xe0e24c9fu, 0x7f19c650u, 0x1d514001u, 0xbb88b9b2u,
    0x59c03363u, 0xf7f7ad14u, 0x962f26c5u, 0x3466a076u, 0xd29e1a27u, 0x70d593d8u, 0x0f0d0d89u, 0xad44873au,
    0x4b7c00ebu, 0xe9b37a9cu, 0x87eaf44du, 0x26226dfeu, 0xc459e7afu, 0x62916160u, 0x00c8db11u, 0x9f0054c2u,
    0x3d37ce73u, 0xdb6f4824u, 0x79a6c1d5u, 0x17de3b86u, 0xb615b537u, 0x544d2ee8u, 0xf284a899u, 0x90bc224au,
};

static const uint32_t bshim_217_tab1[96] = {
    0x5bd50e5cu, 0xfa0c880du, 0x984401beu, 0x367b7b6fu, 0xd4b2f520u, 0x72ea6ed1u, 0x1121e882u, 0xaf596233u,
    0x4d90dbe4u, 0xebc85595u, 0x89ffcf46u, 0x283748f7u, 0xc66ec2a8u, 0x64a63c59u, 0x02ddb60au, 0xa1152fbbu,
    0x3f4ca96cu, 0xdd84231du, 0x7bbb9cceu, 0x19f3167fu, 0xb82a9030u, 0x566209e1u, 0xf4998392u, 0x92d0fd43u,
    0x310876f4u, 0xcf3ff0a5u, 0x6d776a56u, 0x0baee407u, 0xa9e65db8u, 0x481dd769u, 0xe655511au, 0x848ccacbu,
    0x22c4447cu, 0xc0fbbe2du, 0x5f3337deu, 0xfd6ab18fu, 0x9ba22b40u, 0x39d9a4f1u, 0xd8111ea2u, 0x76489853u,
    0x14801204u, 0xb2b78bb5u, 0x50ef0566u, 0xef267f17u, 0x8d5df8c8u, 0x2b957279u, 0xc9ccec2au, 0x680465dbu,
    0x063bdf8cu, 0xa473593du, 0x42aad2eeu, 0xe0e24c9fu, 0x7f19c650u, 0x1d514001u, 0xbb88b9b2u, 0x59c03363u,
    0xf7f7ad14u, 0x962f26c5u, 0x3466a076u, 0xd29e1a27u, 0x70d593d8u, 0x0f0d0d89u, 0xad44873au, 0x4b7c00ebu,
    0xe9b37a9cu, 0x87eaf44du, 0x26226dfeu, 0xc459e7afu, 0x62916160u, 0x00c8db11u, 0x9f0054c2u, 0x3d37ce73u,
    0xdb6f4824u, 0x79a6c1d5u, 0x17de3b86u, 0xb615b537u, 0x544d2ee8u, 0xf284a899u, 0x90bc224au, 0x2ef39bfbu,
    0xcd2b15acu, 0x6b628f5du, 0x099a090eu, 0xa7d182bfu, 0x4608fc70u, 0xe4407621u, 0x8277efd2u, 0x20af6983u,
    0xbee6e334u, 0x5d1e5ce5u, 0xfb55d696u, 0x998d5047u, 0x37c4c9f8u, 0xd5fc43a9u, 0x7433bd5au, 0x126b370bu,
};

static const uint32_t bshim_217_tab2[96] = {
    0xdd84231du, 0x7bbb9cceu, 0x19f3167fu, 0xb82a9030u, 0x566209e1u, 0xf4998392u, 0x92d0fd43u, 0x310876f4u,
    0xcf3ff0a5u, 0x6d776a56u, 0x0baee407u, 0xa9e65db8u, 0x481dd769u, 0xe655511au, 0x848ccacbu, 0x22c4447cu,
    0xc0fbbe2du, 0x5f3337deu, 0xfd6ab18fu, 0x9ba22b40u, 0x39d9a4f1u, 0xd8111ea2u, 0x76489853u, 0x14801204u,
    0xb2b78bb5u, 0x50ef0566u, 0xef267f17u, 0x8d5df8c8u, 0x2b957279u, 0xc9ccec2au, 0x680465dbu, 0x063bdf8cu,
    0xa473593du, 0x42aad2eeu, 0xe0e24c9fu, 0x7f19c650u, 0x1d514001u, 0xbb88b9b2u, 0x59c03363u, 0xf7f7ad14u,
    0x962f26c5u, 0x3466a076u, 0xd29e1a27u, 0x70d593d8u, 0x0f0d0d89u, 0xad44873au, 0x4b7c00ebu, 0xe9b37a9cu,
    0x87eaf44du, 0x26226dfeu, 0xc459e7afu, 0x62916160u, 0x00c8db11u, 0x9f0054c2u, 0x3d37ce73u, 0xdb6f4824u,
    0x79a6c1d5u, 0x17de3b86u, 0xb615b537u, 0x544d2ee8u, 0xf284a899u, 0x90bc224au, 0x2ef39bfbu, 0xcd2b15acu,
    0x6b628f5du, 0x099a090eu, 0xa7d182bfu, 0x4608fc70u, 0xe4407621u, 0x8277efd2u, 0x20af6983u, 0xbee6e334u,
    0x5d1e5ce5u, 0xfb55d696u, 0x998d5047u, 0x37c4c9f8u, 0xd5fc43a9u, 0x7433bd5au, 0x126b370bu, 0xb0a2b0bcu,
    0x4eda2a6du, 0xed11a41eu, 0x8b491dcfu, 0x29809780u, 0xc7b81131u, 0x65ef8ae2u, 0x04270493u, 0xa25e7e44u,
    0x4095f7f5u, 0xdecd71a6u, 0x7d04eb57u, 0x1b3c6508u, 0xb973deb9u, 0x57ab586au, 0xf5e2d21bu, 0x941a4bccu,
};

static const uint32_t bshim_217_tab3[96] = {
    0x5f3337deu, 0xfd6ab18fu, 0x9ba22b40u, 0x39d9a4f1u, 0xd8111ea2u, 0x76489853u, 0x14801204u, 0xb2b78bb5u,
    0x50ef0566u, 0xef267f17u, 0x8d5df8c8u, 0x2b957279u, 0xc9ccec2au, 0x680465dbu, 0x063bdf8cu, 0xa473593du,
    0x42aad2eeu, 0xe0e24c9fu, 0x7f19c650u, 0x1d514001u, 0xbb88b9b2u, 0x59c03363u, 0xf7f7ad14u, 0x962f26c5u,
    0x3466a076u, 0xd29e1a27u, 0x70d593d8u, 0x0f0d0d89u, 0xad44873au, 0x4b7c00ebu, 0xe9b37a9cu, 0x87eaf44du,
    0x26226dfeu, 0xc459e7afu, 0x62916160u, 0x00c8db11u, 0x9f0054c2u, 0x3d37ce73u, 0xdb6f4824u, 0x79a6c1d5u,
    0x17de3b86u, 0xb615b537u, 0x544d2ee8u, 0xf284a899u, 0x90bc224au, 0x2ef39bfbu, 0xcd2b15acu, 0x6b628f5du,
    0x099a090eu, 0xa7d182bfu, 0x4608fc70u, 0xe4407621u, 0x8277efd2u, 0x20af6983u, 0xbee6e334u, 0x5d1e5ce5u,
    0xfb55d696u, 0x998d5047u, 0x37c4c9f8u, 0xd5fc43a9u, 0x7433bd5au, 0x126b370bu, 0xb0a2b0bcu, 0x4eda2a6du,
    0xed11a41eu, 0x8b491dcfu, 0x29809780u, 0xc7b81131u, 0x65ef8ae2u, 0x04270493u, 0xa25e7e44u, 0x4095f7f5u,
    0xdecd71a6u, 0x7d04eb57u, 0x1b3c6508u, 0xb973deb9u, 0x57ab586au, 0xf5e2d21bu, 0x941a4bccu, 0x3251c57du,
    0xd0893f2eu, 0x6ec0b8dfu, 0x0cf83290u, 0xab2fac41u, 0x496725f2u, 0xe79e9fa3u, 0x85d61954u, 0x240d9305u,
    0xc2450cb6u, 0x607c8667u, 0xfeb40018u, 0x9ceb79c9u, 0x3b22f37au, 0xd95a6d2bu, 0x7791e6dcu, 0x15c9608du,
};

static const uint32_t bshim_217_tab4[96] = {
    0xe0e24c9fu, 0x7f19c650u, 0x1d514001u, 0xbb88b9b2u, 0x59c03363u, 0xf7f7ad14u, 0x962f26c5u, 0x3466a076u,
    0xd29e1a27u, 0x70d593d8u, 0x0f0d0d89u, 0xad44873au, 0x4b7c00ebu, 0xe9b37a9cu, 0x87eaf44du, 0x26226dfeu,
    0xc459e7afu, 0x62916160u, 0x00c8db11u, 0x9f0054c2u, 0x3d37ce73u, 0xdb6f4824u, 0x79a6c1d5u, 0x17de3b86u,
    0xb615b537u, 0x544d2ee8u, 0xf284a899u, 0x90bc224au, 0x2ef39bfbu, 0xcd2b15acu, 0x6b628f5du, 0x099a090eu,
    0xa7d182bfu, 0x4608fc70u, 0xe4407621u, 0x8277efd2u, 0x20af6983u, 0xbee6e334u, 0x5d1e5ce5u, 0xfb55d696u,
    0x998d5047u, 0x37c4c9f8u, 0xd5fc43a9u, 0x7433bd5au, 0x126b370bu, 0xb0a2b0bcu, 0x4eda2a6du, 0xed11a41eu,
    0x8b491dcfu, 0x29809780u, 0xc7b81131u, 0x65ef8ae2u, 0x04270493u, 0xa25e7e44u, 0x4095f7f5u, 0xdecd71a6u,
    0x7d04eb57u, 0x1b3c6508u, 0xb973deb9u, 0x57ab586au, 0xf5e2d21bu, 0x941a4bccu, 0x3251c57du, 0xd0893f2eu,
    0x6ec0b8dfu, 0x0cf83290u, 0xab2fac41u, 0x496725f2u, 0xe79e9fa3u, 0x85d61954u, 0x240d9305u, 0xc2450cb6u,
    0x607c8667u, 0xfeb40018u, 0x9ceb79c9u, 0x3b22f37au, 0xd95a6d2bu, 0x7791e6dcu, 0x15c9608du, 0xb400da3eu,
    0x523853efu, 0xf06fcda0u, 0x8ea74751u, 0x2cdec102u, 0xcb163ab3u, 0x694db464u, 0x07852e15u, 0xa5bca7c6u,
    0x43f42177u, 0xe22b9b28u, 0x806314d9u, 0x1e9a8e8au, 0xbcd2083bu, 0x5b0981ecu, 0xf940fb9du, 0x9778754eu,
};

static const uint32_t bshim_217_tab5[96] = {
    0x62916160u, 0x00c8db11u, 0x9f0054c2u, 0x3d37ce73u, 0xdb6f4824u, 0x79a6c1d5u, 0x17de3b86u, 0xb615b537u,
    0x544d2ee8u, 0xf284a899u, 0x90bc224au, 0x2ef39bfbu, 0xcd2b15acu, 0x6b628f5du, 0x099a090eu, 0xa7d182bfu,
    0x4608fc70u, 0xe4407621u, 0x8277efd2u, 0x20af6983u, 0xbee6e334u, 0x5d1e5ce5u, 0xfb55d696u, 0x998d5047u,
    0x37c4c9f8u, 0xd5fc43a9u, 0x7433bd5au, 0x126b370bu, 0xb0a2b0bcu, 0x4eda2a6du, 0xed11a41eu, 0x8b491dcfu,
    0x29809780u, 0xc7b81131u, 0x65ef8ae2u, 0x04270493u, 0xa25e7e44u, 0x4095f7f5u, 0xdecd71a6u, 0x7d04eb57u,
    0x1b3c6508u, 0xb973deb9u, 0x57ab586au, 0xf5e2d21bu, 0x941a4bccu, 0x3251c57du, 0xd0893f2eu, 0x6ec0b8dfu,
    0x0cf83290u, 0xab2fac41u, 0x496725f2u, 0xe79e9fa3u, 0x85d61954u, 0x240d9305u, 0xc2450cb6u, 0x607c8667u,
    0xfeb40018u, 0x9ceb79c9u, 0x3b22f37au, 0xd95a6d2bu, 0x7791e6dcu, 0x15c9608du, 0xb400da3eu, 0x523853efu,
    0xf06fcda0u, 0x8ea74751u, 0x2cdec102u, 0xcb163ab3u, 0x694db464u, 0x07852e15u, 0xa5bca7c6u, 0x43f42177u,
    0xe22b9b28u, 0x806314d9u, 0x1e9a8e8au, 0xbcd2083bu, 0x5b0981ecu, 0xf940fb9du, 0x9778754eu, 0x35afeeffu,
    0xd3e768b0u, 0x721ee261u, 0x10565c12u, 0xae8dd5c3u, 0x4cc54f74u, 0xeafcc925u, 0x893442d6u, 0x276bbc87u,
    0xc5a33638u, 0x63daafe9u, 0x0212299au, 0xa049a34bu, 0x3e811cfcu, 0xdcb896adu, 0x7af0105eu, 0x19278a0fu,
};

static const uint32_t bshim_217_tab6[96] = {
    0xe4407621u, 0x8277efd2u, 0x20af6983u, 0xbee6e334u, 0x5d1e5ce5u, 0xfb55d696u, 0x998d5047u, 0x37c4c9f8u,
    0xd5fc43a9u, 0x7433bd5au, 0x126b370bu, 0xb0a2b0bcu, 0x4eda2a6du, 0xed11a41eu, 0x8b491dcfu, 0x29809780u,
    0xc7b81131u, 0x65ef8ae2u, 0x04270493u, 0xa25e7e44u, 0x4095f7f5u, 0xdecd71a6u, 0x7d04eb57u, 0x1b3c6508u,
    0xb973deb9u, 0x57ab586au, 0xf5e2d21bu, 0x941a4bccu, 0x3251c57du, 0xd0893f2eu, 0x6ec0b8dfu, 0x0cf83290u,
    0xab2fac41u, 0x496725f2u, 0xe79e9fa3u, 0x85d61954u, 0x240d9305u, 0xc2450cb6u, 0x607c8667u, 0xfeb40018u,
    0x9ceb79c9u, 0x3b22f37au, 0xd95a6d2bu, 0x7791e6dcu, 0x15c9608du, 0xb400da3eu, 0x523853efu, 0xf06fcda0u,
    0x8ea74751u, 0x2cdec102u, 0xcb163ab3u, 0x694db464u, 0x07852e15u, 0xa5bca7c6u, 0x43f42177u, 0xe22b9b28u,
    0x806314d9u, 0x1e9a8e8au, 0xbcd2083bu, 0x5b0981ecu, 0xf940fb9du, 0x9778754eu, 0x35afeeffu, 0xd3e768b0u,
    0x721ee261u, 0x10565c12u, 0xae8dd5c3u, 0x4cc54f74u, 0xeafcc925u, 0x893442d6u, 0x276bbc87u, 0xc5a33638u,
    0x63daafe9u, 0x0212299au, 0xa049a34bu, 0x3e811cfcu, 0xdcb896adu, 0x7af0105eu, 0x19278a0fu, 0xb75f03c0u,
    0x55967d71u, 0xf3cdf722u, 0x920570d3u, 0x303cea84u, 0xce746435u, 0x6cabdde6u, 0x0ae35797u, 0xa91ad148u,
    0x47524af9u, 0xe589c4aau, 0x83c13e5bu, 0x21f8b80cu, 0xc03031bdu, 0x5e67ab6eu, 0xfc9f251fu, 0x9ad69ed0u,
};

static const uint32_t bshim_217_tab7[96] = {
    0x65ef8ae2u, 0x04270493u, 0xa25e7e44u, 0x4095f7f5u, 0xdecd71a6u, 0x7d04eb57u, 0x1b3c6508u, 0xb973deb9u,
    0x57ab586au, 0xf5e2d21bu, 0x941a4bccu, 0x3251c57du, 0xd0893f2eu, 0x6ec0b8dfu, 0x0cf83290u, 0xab2fac41u,
    0x496725f2u, 0xe79e9fa3u, 0x85d61954u, 0x240d9305u, 0xc2450cb6u, 0x607c8667u, 0xfeb40018u, 0x9ceb79c9u,
    0x3b22f37au, 0xd95a6d2bu, 0x7791e6dcu, 0x15c9608du, 0xb400da3eu, 0x523853efu, 0xf06fcda0u, 0x8ea74751u,
    0x2cdec102u, 0xcb163ab3u, 0x694db464u, 0x07852e15u, 0xa5bca7c6u, 0x43f42177u, 0xe22b9b28u, 0x806314d9u,
    0x1e9a8e8au, 0xbcd2083bu, 0x5b0981ecu, 0xf940fb9du, 0x9778754eu, 0x35afeeffu, 0xd3e768b0u, 0x721ee261u,
    0x10565c12u, 0xae8dd5c3u, 0x4cc54f74u, 0xeafcc925u, 0x893442d6u, 0x276bbc87u, 0xc5a33638u, 0x63daafe9u,
    0x0212299au, 0xa049a34bu, 0x3e811cfcu, 0xdcb896adu, 0x7af0105eu, 0x19278a0fu, 0xb75f03c0u, 0x55967d71u,
    0xf3cdf722u, 0x920570d3u, 0x303cea84u, 0xce746435u, 0x6cabdde6u, 0x0ae35797u, 0xa91ad148u, 0x47524af9u,
    0xe589c4aau, 0x83c13e5bu, 0x21f8b80cu, 0xc03031bdu, 0x5e67ab6eu, 0xfc9f251fu, 0x9ad69ed0u, 0x390e1881u,
    0xd7459232u, 0x757d0be3u, 0x13b48594u, 0xb1ebff45u, 0x502378f6u, 0xee5af2a7u, 0x8c926c58u, 0x2ac9e609u,
    0xc9015fbau, 0x6738d96bu, 0x0570531cu, 0xa3a7cccdu, 0x41df467eu, 0xe016c02fu, 0x7e4e39e0u, 0x1c85b391u,
};

struct bshim_217_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_217_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_217_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_217_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_217_reset(struct bshim_217_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001a3897u;
    return 0;
}

