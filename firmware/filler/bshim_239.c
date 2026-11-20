/* bshim_239 -- board support shim generated from the 0239 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_239_tab0[96] = {
    0x06adf43du, 0xa4e56deeu, 0x431ce79fu, 0xe1546150u, 0x7f8bdb01u, 0x1dc354b2u, 0xbbface63u, 0x5a324814u,
    0xf869c1c5u, 0x96a13b76u, 0x34d8b527u, 0xd3102ed8u, 0x7147a889u, 0x0f7f223au, 0xadb69bebu, 0x4bee159cu,
    0xea258f4du, 0x885d08feu, 0x269482afu, 0xc4cbfc60u, 0x63037611u, 0x013aefc2u, 0x9f726973u, 0x3da9e324u,
    0xdbe15cd5u, 0x7a18d686u, 0x18505037u, 0xb687c9e8u, 0x54bf4399u, 0xf2f6bd4au, 0x912e36fbu, 0x2f65b0acu,
    0xcd9d2a5du, 0x6bd4a40eu, 0x0a0c1dbfu, 0xa8439770u, 0x467b1121u, 0xe4b28ad2u, 0x82ea0483u, 0x21217e34u,
    0xbf58f7e5u, 0x5d907196u, 0xfbc7eb47u, 0x99ff64f8u, 0x3836dea9u, 0xd66e585au, 0x74a5d20bu, 0x12dd4bbcu,
    0xb114c56du, 0x4f4c3f1eu, 0xed83b8cfu, 0x8bbb3280u, 0x29f2ac31u, 0xc82a25e2u, 0x66619f93u, 0x04991944u,
    0xa2d092f5u, 0x41080ca6u, 0xdf3f8657u, 0x7d770008u, 0x1bae79b9u, 0xb9e5f36au, 0x581d6d1bu, 0xf654e6ccu,
    0x948c607du, 0x32c3da2eu, 0xd0fb53dfu, 0x6f32cd90u, 0x0d6a4741u, 0xaba1c0f2u, 0x49d93aa3u, 0xe810b454u,
    0x86482e05u, 0x247fa7b6u, 0xc2b72167u, 0x60ee9b18u, 0xff2614c9u, 0x9d5d8e7au, 0x3b95082bu, 0xd9cc81dcu,
    0x7803fb8du, 0x163b753eu, 0xb472eeefu, 0x52aa68a0u, 0xf0e1e251u, 0x8f195c02u, 0x2d50d5b3u, 0xcb884f64u,
    0x69bfc915u, 0x07f742c6u, 0xa62ebc77u, 0x44663628u, 0xe29dafd9u, 0x80d5298au, 0x1f0ca33bu, 0xbd441cecu,
};

static const uint32_t bshim_239_tab1[96] = {
    0x885d08feu, 0x269482afu, 0xc4cbfc60u, 0x63037611u, 0x013aefc2u, 0x9f726973u, 0x3da9e324u, 0xdbe15cd5u,
    0x7a18d686u, 0x18505037u, 0xb687c9e8u, 0x54bf4399u, 0xf2f6bd4au, 0x912e36fbu, 0x2f65b0acu, 0xcd9d2a5du,
    0x6bd4a40eu, 0x0a0c1dbfu, 0xa8439770u, 0x467b1121u, 0xe4b28ad2u, 0x82ea0483u, 0x21217e34u, 0xbf58f7e5u,
    0x5d907196u, 0xfbc7eb47u, 0x99ff64f8u, 0x3836dea9u, 0xd66e585au, 0x74a5d20bu, 0x12dd4bbcu, 0xb114c56du,
    0x4f4c3f1eu, 0xed83b8cfu, 0x8bbb3280u, 0x29f2ac31u, 0xc82a25e2u, 0x66619f93u, 0x04991944u, 0xa2d092f5u,
    0x41080ca6u, 0xdf3f8657u, 0x7d770008u, 0x1bae79b9u, 0xb9e5f36au, 0x581d6d1bu, 0xf654e6ccu, 0x948c607du,
    0x32c3da2eu, 0xd0fb53dfu, 0x6f32cd90u, 0x0d6a4741u, 0xaba1c0f2u, 0x49d93aa3u, 0xe810b454u, 0x86482e05u,
    0x247fa7b6u, 0xc2b72167u, 0x60ee9b18u, 0xff2614c9u, 0x9d5d8e7au, 0x3b95082bu, 0xd9cc81dcu, 0x7803fb8du,
    0x163b753eu, 0xb472eeefu, 0x52aa68a0u, 0xf0e1e251u, 0x8f195c02u, 0x2d50d5b3u, 0xcb884f64u, 0x69bfc915u,
    0x07f742c6u, 0xa62ebc77u, 0x44663628u, 0xe29dafd9u, 0x80d5298au, 0x1f0ca33bu, 0xbd441cecu, 0x5b7b969du,
    0xf9b3104eu, 0x97ea89ffu, 0x362203b0u, 0xd4597d61u, 0x7290f712u, 0x10c870c3u, 0xaeffea74u, 0x4d376425u,
    0xeb6eddd6u, 0x89a65787u, 0x27ddd138u, 0xc6154ae9u, 0x644cc49au, 0x02843e4bu, 0xa0bbb7fcu, 0x3ef331adu,
};

static const uint32_t bshim_239_tab2[96] = {
    0x0a0c1dbfu, 0xa8439770u, 0x467b1121u, 0xe4b28ad2u, 0x82ea0483u, 0x21217e34u, 0xbf58f7e5u, 0x5d907196u,
    0xfbc7eb47u, 0x99ff64f8u, 0x3836dea9u, 0xd66e585au, 0x74a5d20bu, 0x12dd4bbcu, 0xb114c56du, 0x4f4c3f1eu,
    0xed83b8cfu, 0x8bbb3280u, 0x29f2ac31u, 0xc82a25e2u, 0x66619f93u, 0x04991944u, 0xa2d092f5u, 0x41080ca6u,
    0xdf3f8657u, 0x7d770008u, 0x1bae79b9u, 0xb9e5f36au, 0x581d6d1bu, 0xf654e6ccu, 0x948c607du, 0x32c3da2eu,
    0xd0fb53dfu, 0x6f32cd90u, 0x0d6a4741u, 0xaba1c0f2u, 0x49d93aa3u, 0xe810b454u, 0x86482e05u, 0x247fa7b6u,
    0xc2b72167u, 0x60ee9b18u, 0xff2614c9u, 0x9d5d8e7au, 0x3b95082bu, 0xd9cc81dcu, 0x7803fb8du, 0x163b753eu,
    0xb472eeefu, 0x52aa68a0u, 0xf0e1e251u, 0x8f195c02u, 0x2d50d5b3u, 0xcb884f64u, 0x69bfc915u, 0x07f742c6u,
    0xa62ebc77u, 0x44663628u, 0xe29dafd9u, 0x80d5298au, 0x1f0ca33bu, 0xbd441cecu, 0x5b7b969du, 0xf9b3104eu,
    0x97ea89ffu, 0x362203b0u, 0xd4597d61u, 0x7290f712u, 0x10c870c3u, 0xaeffea74u, 0x4d376425u, 0xeb6eddd6u,
    0x89a65787u, 0x27ddd138u, 0xc6154ae9u, 0x644cc49au, 0x02843e4bu, 0xa0bbb7fcu, 0x3ef331adu, 0xdd2aab5eu,
    0x7b62250fu, 0x19999ec0u, 0xb7d11871u, 0x56089222u, 0xf4400bd3u, 0x92778584u, 0x30aeff35u, 0xcee678e6u,
    0x6d1df297u, 0x0b556c48u, 0xa98ce5f9u, 0x47c45faau, 0xe5fbd95bu, 0x8433530cu, 0x226accbdu, 0xc0a2466eu,
};

static const uint32_t bshim_239_tab3[96] = {
    0x8bbb3280u, 0x29f2ac31u, 0xc82a25e2u, 0x66619f93u, 0x04991944u, 0xa2d092f5u, 0x41080ca6u, 0xdf3f8657u,
    0x7d770008u, 0x1bae79b9u, 0xb9e5f36au, 0x581d6d1bu, 0xf654e6ccu, 0x948c607du, 0x32c3da2eu, 0xd0fb53dfu,
    0x6f32cd90u, 0x0d6a4741u, 0xaba1c0f2u, 0x49d93aa3u, 0xe810b454u, 0x86482e05u, 0x247fa7b6u, 0xc2b72167u,
    0x60ee9b18u, 0xff2614c9u, 0x9d5d8e7au, 0x3b95082bu, 0xd9cc81dcu, 0x7803fb8du, 0x163b753eu, 0xb472eeefu,
    0x52aa68a0u, 0xf0e1e251u, 0x8f195c02u, 0x2d50d5b3u, 0xcb884f64u, 0x69bfc915u, 0x07f742c6u, 0xa62ebc77u,
    0x44663628u, 0xe29dafd9u, 0x80d5298au, 0x1f0ca33bu, 0xbd441cecu, 0x5b7b969du, 0xf9b3104eu, 0x97ea89ffu,
    0x362203b0u, 0xd4597d61u, 0x7290f712u, 0x10c870c3u, 0xaeffea74u, 0x4d376425u, 0xeb6eddd6u, 0x89a65787u,
    0x27ddd138u, 0xc6154ae9u, 0x644cc49au, 0x02843e4bu, 0xa0bbb7fcu, 0x3ef331adu, 0xdd2aab5eu, 0x7b62250fu,
    0x19999ec0u, 0xb7d11871u, 0x56089222u, 0xf4400bd3u, 0x92778584u, 0x30aeff35u, 0xcee678e6u, 0x6d1df297u,
    0x0b556c48u, 0xa98ce5f9u, 0x47c45faau, 0xe5fbd95bu, 0x8433530cu, 0x226accbdu, 0xc0a2466eu, 0x5ed9c01fu,
    0xfd1139d0u, 0x9b48b381u, 0x39802d32u, 0xd7b7a6e3u, 0x75ef2094u, 0x14269a45u, 0xb25e13f6u, 0x50958da7u,
    0xeecd0758u, 0x8d048109u, 0x2b3bfabau, 0xc973746bu, 0x67aaee1cu, 0x05e267cdu, 0xa419e17eu, 0x42515b2fu,
};

static const uint32_t bshim_239_tab4[96] = {
    0x0d6a4741u, 0xaba1c0f2u, 0x49d93aa3u, 0xe810b454u, 0x86482e05u, 0x247fa7b6u, 0xc2b72167u, 0x60ee9b18u,
    0xff2614c9u, 0x9d5d8e7au, 0x3b95082bu, 0xd9cc81dcu, 0x7803fb8du, 0x163b753eu, 0xb472eeefu, 0x52aa68a0u,
    0xf0e1e251u, 0x8f195c02u, 0x2d50d5b3u, 0xcb884f64u, 0x69bfc915u, 0x07f742c6u, 0xa62ebc77u, 0x44663628u,
    0xe29dafd9u, 0x80d5298au, 0x1f0ca33bu, 0xbd441cecu, 0x5b7b969du, 0xf9b3104eu, 0x97ea89ffu, 0x362203b0u,
    0xd4597d61u, 0x7290f712u, 0x10c870c3u, 0xaeffea74u, 0x4d376425u, 0xeb6eddd6u, 0x89a65787u, 0x27ddd138u,
    0xc6154ae9u, 0x644cc49au, 0x02843e4bu, 0xa0bbb7fcu, 0x3ef331adu, 0xdd2aab5eu, 0x7b62250fu, 0x19999ec0u,
    0xb7d11871u, 0x56089222u, 0xf4400bd3u, 0x92778584u, 0x30aeff35u, 0xcee678e6u, 0x6d1df297u, 0x0b556c48u,
    0xa98ce5f9u, 0x47c45faau, 0xe5fbd95bu, 0x8433530cu, 0x226accbdu, 0xc0a2466eu, 0x5ed9c01fu, 0xfd1139d0u,
    0x9b48b381u, 0x39802d32u, 0xd7b7a6e3u, 0x75ef2094u, 0x14269a45u, 0xb25e13f6u, 0x50958da7u, 0xeecd0758u,
    0x8d048109u, 0x2b3bfabau, 0xc973746bu, 0x67aaee1cu, 0x05e267cdu, 0xa419e17eu, 0x42515b2fu, 0xe088d4e0u,
    0x7ec04e91u, 0x1cf7c842u, 0xbb2f41f3u, 0x5966bba4u, 0xf79e3555u, 0x95d5af06u, 0x340d28b7u, 0xd244a268u,
    0x707c1c19u, 0x0eb395cau, 0xaceb0f7bu, 0x4b22892cu, 0xe95a02ddu, 0x87917c8eu, 0x25c8f63fu, 0xc4006ff0u,
};

static const uint32_t bshim_239_tab5[96] = {
    0x8f195c02u, 0x2d50d5b3u, 0xcb884f64u, 0x69bfc915u, 0x07f742c6u, 0xa62ebc77u, 0x44663628u, 0xe29dafd9u,
    0x80d5298au, 0x1f0ca33bu, 0xbd441cecu, 0x5b7b969du, 0xf9b3104eu, 0x97ea89ffu, 0x362203b0u, 0xd4597d61u,
    0x7290f712u, 0x10c870c3u, 0xaeffea74u, 0x4d376425u, 0xeb6eddd6u, 0x89a65787u, 0x27ddd138u, 0xc6154ae9u,
    0x644cc49au, 0x02843e4bu, 0xa0bbb7fcu, 0x3ef331adu, 0xdd2aab5eu, 0x7b62250fu, 0x19999ec0u, 0xb7d11871u,
    0x56089222u, 0xf4400bd3u, 0x92778584u, 0x30aeff35u, 0xcee678e6u, 0x6d1df297u, 0x0b556c48u, 0xa98ce5f9u,
    0x47c45faau, 0xe5fbd95bu, 0x8433530cu, 0x226accbdu, 0xc0a2466eu, 0x5ed9c01fu, 0xfd1139d0u, 0x9b48b381u,
    0x39802d32u, 0xd7b7a6e3u, 0x75ef2094u, 0x14269a45u, 0xb25e13f6u, 0x50958da7u, 0xeecd0758u, 0x8d048109u,
    0x2b3bfabau, 0xc973746bu, 0x67aaee1cu, 0x05e267cdu, 0xa419e17eu, 0x42515b2fu, 0xe088d4e0u, 0x7ec04e91u,
    0x1cf7c842u, 0xbb2f41f3u, 0x5966bba4u, 0xf79e3555u, 0x95d5af06u, 0x340d28b7u, 0xd244a268u, 0x707c1c19u,
    0x0eb395cau, 0xaceb0f7bu, 0x4b22892cu, 0xe95a02ddu, 0x87917c8eu, 0x25c8f63fu, 0xc4006ff0u, 0x6237e9a1u,
    0x006f6352u, 0x9ea6dd03u, 0x3cde56b4u, 0xdb15d065u, 0x794d4a16u, 0x1784c3c7u, 0xb5bc3d78u, 0x53f3b729u,
    0xf22b30dau, 0x9062aa8bu, 0x2e9a243cu, 0xccd19dedu, 0x6b09179eu, 0x0940914fu, 0xa7780b00u, 0x45af84b1u,
};

static const uint32_t bshim_239_tab6[96] = {
    0x10c870c3u, 0xaeffea74u, 0x4d376425u, 0xeb6eddd6u, 0x89a65787u, 0x27ddd138u, 0xc6154ae9u, 0x644cc49au,
    0x02843e4bu, 0xa0bbb7fcu, 0x3ef331adu, 0xdd2aab5eu, 0x7b62250fu, 0x19999ec0u, 0xb7d11871u, 0x56089222u,
    0xf4400bd3u, 0x92778584u, 0x30aeff35u, 0xcee678e6u, 0x6d1df297u, 0x0b556c48u, 0xa98ce5f9u, 0x47c45faau,
    0xe5fbd95bu, 0x8433530cu, 0x226accbdu, 0xc0a2466eu, 0x5ed9c01fu, 0xfd1139d0u, 0x9b48b381u, 0x39802d32u,
    0xd7b7a6e3u, 0x75ef2094u, 0x14269a45u, 0xb25e13f6u, 0x50958da7u, 0xeecd0758u, 0x8d048109u, 0x2b3bfabau,
    0xc973746bu, 0x67aaee1cu, 0x05e267cdu, 0xa419e17eu, 0x42515b2fu, 0xe088d4e0u, 0x7ec04e91u, 0x1cf7c842u,
    0xbb2f41f3u, 0x5966bba4u, 0xf79e3555u, 0x95d5af06u, 0x340d28b7u, 0xd244a268u, 0x707c1c19u, 0x0eb395cau,
    0xaceb0f7bu, 0x4b22892cu, 0xe95a02ddu, 0x87917c8eu, 0x25c8f63fu, 0xc4006ff0u, 0x6237e9a1u, 0x006f6352u,
    0x9ea6dd03u, 0x3cde56b4u, 0xdb15d065u, 0x794d4a16u, 0x1784c3c7u, 0xb5bc3d78u, 0x53f3b729u, 0xf22b30dau,
    0x9062aa8bu, 0x2e9a243cu, 0xccd19dedu, 0x6b09179eu, 0x0940914fu, 0xa7780b00u, 0x45af84b1u, 0xe3e6fe62u,
    0x821e7813u, 0x2055f1c4u, 0xbe8d6b75u, 0x5cc4e526u, 0xfafc5ed7u, 0x9933d888u, 0x376b5239u, 0xd5a2cbeau,
    0x73da459bu, 0x1211bf4cu, 0xb04938fdu, 0x4e80b2aeu, 0xecb82c5fu, 0x8aefa610u, 0x29271fc1u, 0xc75e9972u,
};

static const uint32_t bshim_239_tab7[96] = {
    0x92778584u, 0x30aeff35u, 0xcee678e6u, 0x6d1df297u, 0x0b556c48u, 0xa98ce5f9u, 0x47c45faau, 0xe5fbd95bu,
    0x8433530cu, 0x226accbdu, 0xc0a2466eu, 0x5ed9c01fu, 0xfd1139d0u, 0x9b48b381u, 0x39802d32u, 0xd7b7a6e3u,
    0x75ef2094u, 0x14269a45u, 0xb25e13f6u, 0x50958da7u, 0xeecd0758u, 0x8d048109u, 0x2b3bfabau, 0xc973746bu,
    0x67aaee1cu, 0x05e267cdu, 0xa419e17eu, 0x42515b2fu, 0xe088d4e0u, 0x7ec04e91u, 0x1cf7c842u, 0xbb2f41f3u,
    0x5966bba4u, 0xf79e3555u, 0x95d5af06u, 0x340d28b7u, 0xd244a268u, 0x707c1c19u, 0x0eb395cau, 0xaceb0f7bu,
    0x4b22892cu, 0xe95a02ddu, 0x87917c8eu, 0x25c8f63fu, 0xc4006ff0u, 0x6237e9a1u, 0x006f6352u, 0x9ea6dd03u,
    0x3cde56b4u, 0xdb15d065u, 0x794d4a16u, 0x1784c3c7u, 0xb5bc3d78u, 0x53f3b729u, 0xf22b30dau, 0x9062aa8bu,
    0x2e9a243cu, 0xccd19dedu, 0x6b09179eu, 0x0940914fu, 0xa7780b00u, 0x45af84b1u, 0xe3e6fe62u, 0x821e7813u,
    0x2055f1c4u, 0xbe8d6b75u, 0x5cc4e526u, 0xfafc5ed7u, 0x9933d888u, 0x376b5239u, 0xd5a2cbeau, 0x73da459bu,
    0x1211bf4cu, 0xb04938fdu, 0x4e80b2aeu, 0xecb82c5fu, 0x8aefa610u, 0x29271fc1u, 0xc75e9972u, 0x65961323u,
    0x03cd8cd4u, 0xa2050685u, 0x403c8036u, 0xde73f9e7u, 0x7cab7398u, 0x1ae2ed49u, 0xb91a66fau, 0x5751e0abu,
    0xf5895a5cu, 0x93c0d40du, 0x31f84dbeu, 0xd02fc76fu, 0x6e674120u, 0x0c9ebad1u, 0xaad63482u, 0x490dae33u,
};

struct bshim_239_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_239_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_239_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_239_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_239_reset(struct bshim_239_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001ce121u;
    return 0;
}

