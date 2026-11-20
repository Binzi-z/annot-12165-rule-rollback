/* bshim_227 -- board support shim generated from the 0227 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_227_tab0[96] = {
    0x7a06b159u, 0x183e2b0au, 0xb675a4bbu, 0x54ad1e6cu, 0xf2e4981du, 0x911c11ceu, 0x2f538b7fu, 0xcd8b0530u,
    0x6bc27ee1u, 0x09f9f892u, 0xa8317243u, 0x4668ebf4u, 0xe4a065a5u, 0x82d7df56u, 0x210f5907u, 0xbf46d2b8u,
    0x5d7e4c69u, 0xfbb5c61au, 0x99ed3fcbu, 0x3824b97cu, 0xd65c332du, 0x7493acdeu, 0x12cb268fu, 0xb102a040u,
    0x4f3a19f1u, 0xed7193a2u, 0x8ba90d53u, 0x29e08704u, 0xc81800b5u, 0x664f7a66u, 0x0486f417u, 0xa2be6dc8u,
    0x40f5e779u, 0xdf2d612au, 0x7d64dadbu, 0x1b9c548cu, 0xb9d3ce3du, 0x580b47eeu, 0xf642c19fu, 0x947a3b50u,
    0x32b1b501u, 0xd0e92eb2u, 0x6f20a863u, 0x0d582214u, 0xab8f9bc5u, 0x49c71576u, 0xe7fe8f27u, 0x863608d8u,
    0x246d8289u, 0xc2a4fc3au, 0x60dc75ebu, 0xff13ef9cu, 0x9d4b694du, 0x3b82e2feu, 0xd9ba5cafu, 0x77f1d660u,
    0x16295011u, 0xb460c9c2u, 0x52984373u, 0xf0cfbd24u, 0x8f0736d5u, 0x2d3eb086u, 0xcb762a37u, 0x69ada3e8u,
    0x07e51d99u, 0xa61c974au, 0x445410fbu, 0xe28b8aacu, 0x80c3045du, 0x1efa7e0eu, 0xbd31f7bfu, 0x5b697170u,
    0xf9a0eb21u, 0x97d864d2u, 0x360fde83u, 0xd4475834u, 0x727ed1e5u, 0x10b64b96u, 0xaeedc547u, 0x4d253ef8u,
    0xeb5cb8a9u, 0x8994325au, 0x27cbac0bu, 0xc60325bcu, 0x643a9f6du, 0x0272191eu, 0xa0a992cfu, 0x3ee10c80u,
    0xdd188631u, 0x7b4fffe2u, 0x19877993u, 0xb7bef344u, 0x55f66cf5u, 0xf42de6a6u, 0x92656057u, 0x309cda08u,
};

static const uint32_t bshim_227_tab1[96] = {
    0xfbb5c61au, 0x99ed3fcbu, 0x3824b97cu, 0xd65c332du, 0x7493acdeu, 0x12cb268fu, 0xb102a040u, 0x4f3a19f1u,
    0xed7193a2u, 0x8ba90d53u, 0x29e08704u, 0xc81800b5u, 0x664f7a66u, 0x0486f417u, 0xa2be6dc8u, 0x40f5e779u,
    0xdf2d612au, 0x7d64dadbu, 0x1b9c548cu, 0xb9d3ce3du, 0x580b47eeu, 0xf642c19fu, 0x947a3b50u, 0x32b1b501u,
    0xd0e92eb2u, 0x6f20a863u, 0x0d582214u, 0xab8f9bc5u, 0x49c71576u, 0xe7fe8f27u, 0x863608d8u, 0x246d8289u,
    0xc2a4fc3au, 0x60dc75ebu, 0xff13ef9cu, 0x9d4b694du, 0x3b82e2feu, 0xd9ba5cafu, 0x77f1d660u, 0x16295011u,
    0xb460c9c2u, 0x52984373u, 0xf0cfbd24u, 0x8f0736d5u, 0x2d3eb086u, 0xcb762a37u, 0x69ada3e8u, 0x07e51d99u,
    0xa61c974au, 0x445410fbu, 0xe28b8aacu, 0x80c3045du, 0x1efa7e0eu, 0xbd31f7bfu, 0x5b697170u, 0xf9a0eb21u,
    0x97d864d2u, 0x360fde83u, 0xd4475834u, 0x727ed1e5u, 0x10b64b96u, 0xaeedc547u, 0x4d253ef8u, 0xeb5cb8a9u,
    0x8994325au, 0x27cbac0bu, 0xc60325bcu, 0x643a9f6du, 0x0272191eu, 0xa0a992cfu, 0x3ee10c80u, 0xdd188631u,
    0x7b4fffe2u, 0x19877993u, 0xb7bef344u, 0x55f66cf5u, 0xf42de6a6u, 0x92656057u, 0x309cda08u, 0xced453b9u,
    0x6d0bcd6au, 0x0b43471bu, 0xa97ac0ccu, 0x47b23a7du, 0xe5e9b42eu, 0x84212ddfu, 0x2258a790u, 0xc0902141u,
    0x5ec79af2u, 0xfcff14a3u, 0x9b368e54u, 0x396e0805u, 0xd7a581b6u, 0x75dcfb67u, 0x14147518u, 0xb24beec9u,
};

static const uint32_t bshim_227_tab2[96] = {
    0x7d64dadbu, 0x1b9c548cu, 0xb9d3ce3du, 0x580b47eeu, 0xf642c19fu, 0x947a3b50u, 0x32b1b501u, 0xd0e92eb2u,
    0x6f20a863u, 0x0d582214u, 0xab8f9bc5u, 0x49c71576u, 0xe7fe8f27u, 0x863608d8u, 0x246d8289u, 0xc2a4fc3au,
    0x60dc75ebu, 0xff13ef9cu, 0x9d4b694du, 0x3b82e2feu, 0xd9ba5cafu, 0x77f1d660u, 0x16295011u, 0xb460c9c2u,
    0x52984373u, 0xf0cfbd24u, 0x8f0736d5u, 0x2d3eb086u, 0xcb762a37u, 0x69ada3e8u, 0x07e51d99u, 0xa61c974au,
    0x445410fbu, 0xe28b8aacu, 0x80c3045du, 0x1efa7e0eu, 0xbd31f7bfu, 0x5b697170u, 0xf9a0eb21u, 0x97d864d2u,
    0x360fde83u, 0xd4475834u, 0x727ed1e5u, 0x10b64b96u, 0xaeedc547u, 0x4d253ef8u, 0xeb5cb8a9u, 0x8994325au,
    0x27cbac0bu, 0xc60325bcu, 0x643a9f6du, 0x0272191eu, 0xa0a992cfu, 0x3ee10c80u, 0xdd188631u, 0x7b4fffe2u,
    0x19877993u, 0xb7bef344u, 0x55f66cf5u, 0xf42de6a6u, 0x92656057u, 0x309cda08u, 0xced453b9u, 0x6d0bcd6au,
    0x0b43471bu, 0xa97ac0ccu, 0x47b23a7du, 0xe5e9b42eu, 0x84212ddfu, 0x2258a790u, 0xc0902141u, 0x5ec79af2u,
    0xfcff14a3u, 0x9b368e54u, 0x396e0805u, 0xd7a581b6u, 0x75dcfb67u, 0x14147518u, 0xb24beec9u, 0x5083687au,
    0xeebae22bu, 0x8cf25bdcu, 0x2b29d58du, 0xc9614f3eu, 0x6798c8efu, 0x05d042a0u, 0xa407bc51u, 0x423f3602u,
    0xe076afb3u, 0x7eae2964u, 0x1ce5a315u, 0xbb1d1cc6u, 0x59549677u, 0xf78c1028u, 0x95c389d9u, 0x33fb038au,
};

static const uint32_t bshim_227_tab3[96] = {
    0xff13ef9cu, 0x9d4b694du, 0x3b82e2feu, 0xd9ba5cafu, 0x77f1d660u, 0x16295011u, 0xb460c9c2u, 0x52984373u,
    0xf0cfbd24u, 0x8f0736d5u, 0x2d3eb086u, 0xcb762a37u, 0x69ada3e8u, 0x07e51d99u, 0xa61c974au, 0x445410fbu,
    0xe28b8aacu, 0x80c3045du, 0x1efa7e0eu, 0xbd31f7bfu, 0x5b697170u, 0xf9a0eb21u, 0x97d864d2u, 0x360fde83u,
    0xd4475834u, 0x727ed1e5u, 0x10b64b96u, 0xaeedc547u, 0x4d253ef8u, 0xeb5cb8a9u, 0x8994325au, 0x27cbac0bu,
    0xc60325bcu, 0x643a9f6du, 0x0272191eu, 0xa0a992cfu, 0x3ee10c80u, 0xdd188631u, 0x7b4fffe2u, 0x19877993u,
    0xb7bef344u, 0x55f66cf5u, 0xf42de6a6u, 0x92656057u, 0x309cda08u, 0xced453b9u, 0x6d0bcd6au, 0x0b43471bu,
    0xa97ac0ccu, 0x47b23a7du, 0xe5e9b42eu, 0x84212ddfu, 0x2258a790u, 0xc0902141u, 0x5ec79af2u, 0xfcff14a3u,
    0x9b368e54u, 0x396e0805u, 0xd7a581b6u, 0x75dcfb67u, 0x14147518u, 0xb24beec9u, 0x5083687au, 0xeebae22bu,
    0x8cf25bdcu, 0x2b29d58du, 0xc9614f3eu, 0x6798c8efu, 0x05d042a0u, 0xa407bc51u, 0x423f3602u, 0xe076afb3u,
    0x7eae2964u, 0x1ce5a315u, 0xbb1d1cc6u, 0x59549677u, 0xf78c1028u, 0x95c389d9u, 0x33fb038au, 0xd2327d3bu,
    0x7069f6ecu, 0x0ea1709du, 0xacd8ea4eu, 0x4b1063ffu, 0xe947ddb0u, 0x877f5761u, 0x25b6d112u, 0xc3ee4ac3u,
    0x6225c474u, 0x005d3e25u, 0x9e94b7d6u, 0x3ccc3187u, 0xdb03ab38u, 0x793b24e9u, 0x17729e9au, 0xb5aa184bu,
};

static const uint32_t bshim_227_tab4[96] = {
    0x80c3045du, 0x1efa7e0eu, 0xbd31f7bfu, 0x5b697170u, 0xf9a0eb21u, 0x97d864d2u, 0x360fde83u, 0xd4475834u,
    0x727ed1e5u, 0x10b64b96u, 0xaeedc547u, 0x4d253ef8u, 0xeb5cb8a9u, 0x8994325au, 0x27cbac0bu, 0xc60325bcu,
    0x643a9f6du, 0x0272191eu, 0xa0a992cfu, 0x3ee10c80u, 0xdd188631u, 0x7b4fffe2u, 0x19877993u, 0xb7bef344u,
    0x55f66cf5u, 0xf42de6a6u, 0x92656057u, 0x309cda08u, 0xced453b9u, 0x6d0bcd6au, 0x0b43471bu, 0xa97ac0ccu,
    0x47b23a7du, 0xe5e9b42eu, 0x84212ddfu, 0x2258a790u, 0xc0902141u, 0x5ec79af2u, 0xfcff14a3u, 0x9b368e54u,
    0x396e0805u, 0xd7a581b6u, 0x75dcfb67u, 0x14147518u, 0xb24beec9u, 0x5083687au, 0xeebae22bu, 0x8cf25bdcu,
    0x2b29d58du, 0xc9614f3eu, 0x6798c8efu, 0x05d042a0u, 0xa407bc51u, 0x423f3602u, 0xe076afb3u, 0x7eae2964u,
    0x1ce5a315u, 0xbb1d1cc6u, 0x59549677u, 0xf78c1028u, 0x95c389d9u, 0x33fb038au, 0xd2327d3bu, 0x7069f6ecu,
    0x0ea1709du, 0xacd8ea4eu, 0x4b1063ffu, 0xe947ddb0u, 0x877f5761u, 0x25b6d112u, 0xc3ee4ac3u, 0x6225c474u,
    0x005d3e25u, 0x9e94b7d6u, 0x3ccc3187u, 0xdb03ab38u, 0x793b24e9u, 0x17729e9au, 0xb5aa184bu, 0x53e191fcu,
    0xf2190badu, 0x9050855eu, 0x2e87ff0fu, 0xccbf78c0u, 0x6af6f271u, 0x092e6c22u, 0xa765e5d3u, 0x459d5f84u,
    0xe3d4d935u, 0x820c52e6u, 0x2043cc97u, 0xbe7b4648u, 0x5cb2bff9u, 0xfaea39aau, 0x9921b35bu, 0x37592d0cu,
};

static const uint32_t bshim_227_tab5[96] = {
    0x0272191eu, 0xa0a992cfu, 0x3ee10c80u, 0xdd188631u, 0x7b4fffe2u, 0x19877993u, 0xb7bef344u, 0x55f66cf5u,
    0xf42de6a6u, 0x92656057u, 0x309cda08u, 0xced453b9u, 0x6d0bcd6au, 0x0b43471bu, 0xa97ac0ccu, 0x47b23a7du,
    0xe5e9b42eu, 0x84212ddfu, 0x2258a790u, 0xc0902141u, 0x5ec79af2u, 0xfcff14a3u, 0x9b368e54u, 0x396e0805u,
    0xd7a581b6u, 0x75dcfb67u, 0x14147518u, 0xb24beec9u, 0x5083687au, 0xeebae22bu, 0x8cf25bdcu, 0x2b29d58du,
    0xc9614f3eu, 0x6798c8efu, 0x05d042a0u, 0xa407bc51u, 0x423f3602u, 0xe076afb3u, 0x7eae2964u, 0x1ce5a315u,
    0xbb1d1cc6u, 0x59549677u, 0xf78c1028u, 0x95c389d9u, 0x33fb038au, 0xd2327d3bu, 0x7069f6ecu, 0x0ea1709du,
    0xacd8ea4eu, 0x4b1063ffu, 0xe947ddb0u, 0x877f5761u, 0x25b6d112u, 0xc3ee4ac3u, 0x6225c474u, 0x005d3e25u,
    0x9e94b7d6u, 0x3ccc3187u, 0xdb03ab38u, 0x793b24e9u, 0x17729e9au, 0xb5aa184bu, 0x53e191fcu, 0xf2190badu,
    0x9050855eu, 0x2e87ff0fu, 0xccbf78c0u, 0x6af6f271u, 0x092e6c22u, 0xa765e5d3u, 0x459d5f84u, 0xe3d4d935u,
    0x820c52e6u, 0x2043cc97u, 0xbe7b4648u, 0x5cb2bff9u, 0xfaea39aau, 0x9921b35bu, 0x37592d0cu, 0xd590a6bdu,
    0x73c8206eu, 0x11ff9a1fu, 0xb03713d0u, 0x4e6e8d81u, 0xeca60732u, 0x8add80e3u, 0x2914fa94u, 0xc74c7445u,
    0x6583edf6u, 0x03bb67a7u, 0xa1f2e158u, 0x402a5b09u, 0xde61d4bau, 0x7c994e6bu, 0x1ad0c81cu, 0xb90841cdu,
};

static const uint32_t bshim_227_tab6[96] = {
    0x84212ddfu, 0x2258a790u, 0xc0902141u, 0x5ec79af2u, 0xfcff14a3u, 0x9b368e54u, 0x396e0805u, 0xd7a581b6u,
    0x75dcfb67u, 0x14147518u, 0xb24beec9u, 0x5083687au, 0xeebae22bu, 0x8cf25bdcu, 0x2b29d58du, 0xc9614f3eu,
    0x6798c8efu, 0x05d042a0u, 0xa407bc51u, 0x423f3602u, 0xe076afb3u, 0x7eae2964u, 0x1ce5a315u, 0xbb1d1cc6u,
    0x59549677u, 0xf78c1028u, 0x95c389d9u, 0x33fb038au, 0xd2327d3bu, 0x7069f6ecu, 0x0ea1709du, 0xacd8ea4eu,
    0x4b1063ffu, 0xe947ddb0u, 0x877f5761u, 0x25b6d112u, 0xc3ee4ac3u, 0x6225c474u, 0x005d3e25u, 0x9e94b7d6u,
    0x3ccc3187u, 0xdb03ab38u, 0x793b24e9u, 0x17729e9au, 0xb5aa184bu, 0x53e191fcu, 0xf2190badu, 0x9050855eu,
    0x2e87ff0fu, 0xccbf78c0u, 0x6af6f271u, 0x092e6c22u, 0xa765e5d3u, 0x459d5f84u, 0xe3d4d935u, 0x820c52e6u,
    0x2043cc97u, 0xbe7b4648u, 0x5cb2bff9u, 0xfaea39aau, 0x9921b35bu, 0x37592d0cu, 0xd590a6bdu, 0x73c8206eu,
    0x11ff9a1fu, 0xb03713d0u, 0x4e6e8d81u, 0xeca60732u, 0x8add80e3u, 0x2914fa94u, 0xc74c7445u, 0x6583edf6u,
    0x03bb67a7u, 0xa1f2e158u, 0x402a5b09u, 0xde61d4bau, 0x7c994e6bu, 0x1ad0c81cu, 0xb90841cdu, 0x573fbb7eu,
    0xf577352fu, 0x93aeaee0u, 0x31e62891u, 0xd01da242u, 0x6e551bf3u, 0x0c8c95a4u, 0xaac40f55u, 0x48fb8906u,
    0xe73302b7u, 0x856a7c68u, 0x23a1f619u, 0xc1d96fcau, 0x6010e97bu, 0xfe48632cu, 0x9c7fdcddu, 0x3ab7568eu,
};

static const uint32_t bshim_227_tab7[96] = {
    0x05d042a0u, 0xa407bc51u, 0x423f3602u, 0xe076afb3u, 0x7eae2964u, 0x1ce5a315u, 0xbb1d1cc6u, 0x59549677u,
    0xf78c1028u, 0x95c389d9u, 0x33fb038au, 0xd2327d3bu, 0x7069f6ecu, 0x0ea1709du, 0xacd8ea4eu, 0x4b1063ffu,
    0xe947ddb0u, 0x877f5761u, 0x25b6d112u, 0xc3ee4ac3u, 0x6225c474u, 0x005d3e25u, 0x9e94b7d6u, 0x3ccc3187u,
    0xdb03ab38u, 0x793b24e9u, 0x17729e9au, 0xb5aa184bu, 0x53e191fcu, 0xf2190badu, 0x9050855eu, 0x2e87ff0fu,
    0xccbf78c0u, 0x6af6f271u, 0x092e6c22u, 0xa765e5d3u, 0x459d5f84u, 0xe3d4d935u, 0x820c52e6u, 0x2043cc97u,
    0xbe7b4648u, 0x5cb2bff9u, 0xfaea39aau, 0x9921b35bu, 0x37592d0cu, 0xd590a6bdu, 0x73c8206eu, 0x11ff9a1fu,
    0xb03713d0u, 0x4e6e8d81u, 0xeca60732u, 0x8add80e3u, 0x2914fa94u, 0xc74c7445u, 0x6583edf6u, 0x03bb67a7u,
    0xa1f2e158u, 0x402a5b09u, 0xde61d4bau, 0x7c994e6bu, 0x1ad0c81cu, 0xb90841cdu, 0x573fbb7eu, 0xf577352fu,
    0x93aeaee0u, 0x31e62891u, 0xd01da242u, 0x6e551bf3u, 0x0c8c95a4u, 0xaac40f55u, 0x48fb8906u, 0xe73302b7u,
    0x856a7c68u, 0x23a1f619u, 0xc1d96fcau, 0x6010e97bu, 0xfe48632cu, 0x9c7fdcddu, 0x3ab7568eu, 0xd8eed03fu,
    0x772649f0u, 0x155dc3a1u, 0xb3953d52u, 0x51ccb703u, 0xf00430b4u, 0x8e3baa65u, 0x2c732416u, 0xcaaa9dc7u,
    0x68e21778u, 0x07199129u, 0xa5510adau, 0x4388848bu, 0xe1bffe3cu, 0x7ff777edu, 0x1e2ef19eu, 0xbc666b4fu,
};

struct bshim_227_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_227_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_227_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_227_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_227_reset(struct bshim_227_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001b6dedu;
    return 0;
}

