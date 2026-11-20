/* bshim_040 -- board support shim generated from the 0040 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_040_tab0[96] = {
    0x7f82def8u, 0x1dba58a9u, 0xbbf1d25au, 0x5a294c0bu, 0xf860c5bcu, 0x96983f6du, 0x34cfb91eu, 0xd30732cfu,
    0x713eac80u, 0x0f762631u, 0xadad9fe2u, 0x4be51993u, 0xea1c9344u, 0x88540cf5u, 0x268b86a6u, 0xc4c30057u,
    0x62fa7a08u, 0x0131f3b9u, 0x9f696d6au, 0x3da0e71bu, 0xdbd860ccu, 0x7a0fda7du, 0x1847542eu, 0xb67ecddfu,
    0x54b64790u, 0xf2edc141u, 0x91253af2u, 0x2f5cb4a3u, 0xcd942e54u, 0x6bcba805u, 0x0a0321b6u, 0xa83a9b67u,
    0x46721518u, 0xe4a98ec9u, 0x82e1087au, 0x2118822bu, 0xbf4ffbdcu, 0x5d87758du, 0xfbbeef3eu, 0x99f668efu,
    0x382de2a0u, 0xd6655c51u, 0x749cd602u, 0x12d44fb3u, 0xb10bc964u, 0x4f434315u, 0xed7abcc6u, 0x8bb23677u,
    0x29e9b028u, 0xc82129d9u, 0x6658a38au, 0x04901d3bu, 0xa2c796ecu, 0x40ff109du, 0xdf368a4eu, 0x7d6e03ffu,
    0x1ba57db0u, 0xb9dcf761u, 0x58147112u, 0xf64beac3u, 0x94836474u, 0x32bade25u, 0xd0f257d6u, 0x6f29d187u,
    0x0d614b38u, 0xab98c4e9u, 0x49d03e9au, 0xe807b84bu, 0x863f31fcu, 0x2476abadu, 0xc2ae255eu, 0x60e59f0fu,
    0xff1d18c0u, 0x9d549271u, 0x3b8c0c22u, 0xd9c385d3u, 0x77faff84u, 0x16327935u, 0xb469f2e6u, 0x52a16c97u,
    0xf0d8e648u, 0x8f105ff9u, 0x2d47d9aau, 0xcb7f535bu, 0x69b6cd0cu, 0x07ee46bdu, 0xa625c06eu, 0x445d3a1fu,
    0xe294b3d0u, 0x80cc2d81u, 0x1f03a732u, 0xbd3b20e3u, 0x5b729a94u, 0xf9aa1445u, 0x97e18df6u, 0x361907a7u,
};

static const uint32_t bshim_040_tab1[96] = {
    0x0131f3b9u, 0x9f696d6au, 0x3da0e71bu, 0xdbd860ccu, 0x7a0fda7du, 0x1847542eu, 0xb67ecddfu, 0x54b64790u,
    0xf2edc141u, 0x91253af2u, 0x2f5cb4a3u, 0xcd942e54u, 0x6bcba805u, 0x0a0321b6u, 0xa83a9b67u, 0x46721518u,
    0xe4a98ec9u, 0x82e1087au, 0x2118822bu, 0xbf4ffbdcu, 0x5d87758du, 0xfbbeef3eu, 0x99f668efu, 0x382de2a0u,
    0xd6655c51u, 0x749cd602u, 0x12d44fb3u, 0xb10bc964u, 0x4f434315u, 0xed7abcc6u, 0x8bb23677u, 0x29e9b028u,
    0xc82129d9u, 0x6658a38au, 0x04901d3bu, 0xa2c796ecu, 0x40ff109du, 0xdf368a4eu, 0x7d6e03ffu, 0x1ba57db0u,
    0xb9dcf761u, 0x58147112u, 0xf64beac3u, 0x94836474u, 0x32bade25u, 0xd0f257d6u, 0x6f29d187u, 0x0d614b38u,
    0xab98c4e9u, 0x49d03e9au, 0xe807b84bu, 0x863f31fcu, 0x2476abadu, 0xc2ae255eu, 0x60e59f0fu, 0xff1d18c0u,
    0x9d549271u, 0x3b8c0c22u, 0xd9c385d3u, 0x77faff84u, 0x16327935u, 0xb469f2e6u, 0x52a16c97u, 0xf0d8e648u,
    0x8f105ff9u, 0x2d47d9aau, 0xcb7f535bu, 0x69b6cd0cu, 0x07ee46bdu, 0xa625c06eu, 0x445d3a1fu, 0xe294b3d0u,
    0x80cc2d81u, 0x1f03a732u, 0xbd3b20e3u, 0x5b729a94u, 0xf9aa1445u, 0x97e18df6u, 0x361907a7u, 0xd4508158u,
    0x7287fb09u, 0x10bf74bau, 0xaef6ee6bu, 0x4d2e681cu, 0xeb65e1cdu, 0x899d5b7eu, 0x27d4d52fu, 0xc60c4ee0u,
    0x6443c891u, 0x027b4242u, 0xa0b2bbf3u, 0x3eea35a4u, 0xdd21af55u, 0x7b592906u, 0x1990a2b7u, 0xb7c81c68u,
};

static const uint32_t bshim_040_tab2[96] = {
    0x82e1087au, 0x2118822bu, 0xbf4ffbdcu, 0x5d87758du, 0xfbbeef3eu, 0x99f668efu, 0x382de2a0u, 0xd6655c51u,
    0x749cd602u, 0x12d44fb3u, 0xb10bc964u, 0x4f434315u, 0xed7abcc6u, 0x8bb23677u, 0x29e9b028u, 0xc82129d9u,
    0x6658a38au, 0x04901d3bu, 0xa2c796ecu, 0x40ff109du, 0xdf368a4eu, 0x7d6e03ffu, 0x1ba57db0u, 0xb9dcf761u,
    0x58147112u, 0xf64beac3u, 0x94836474u, 0x32bade25u, 0xd0f257d6u, 0x6f29d187u, 0x0d614b38u, 0xab98c4e9u,
    0x49d03e9au, 0xe807b84bu, 0x863f31fcu, 0x2476abadu, 0xc2ae255eu, 0x60e59f0fu, 0xff1d18c0u, 0x9d549271u,
    0x3b8c0c22u, 0xd9c385d3u, 0x77faff84u, 0x16327935u, 0xb469f2e6u, 0x52a16c97u, 0xf0d8e648u, 0x8f105ff9u,
    0x2d47d9aau, 0xcb7f535bu, 0x69b6cd0cu, 0x07ee46bdu, 0xa625c06eu, 0x445d3a1fu, 0xe294b3d0u, 0x80cc2d81u,
    0x1f03a732u, 0xbd3b20e3u, 0x5b729a94u, 0xf9aa1445u, 0x97e18df6u, 0x361907a7u, 0xd4508158u, 0x7287fb09u,
    0x10bf74bau, 0xaef6ee6bu, 0x4d2e681cu, 0xeb65e1cdu, 0x899d5b7eu, 0x27d4d52fu, 0xc60c4ee0u, 0x6443c891u,
    0x027b4242u, 0xa0b2bbf3u, 0x3eea35a4u, 0xdd21af55u, 0x7b592906u, 0x1990a2b7u, 0xb7c81c68u, 0x55ff9619u,
    0xf4370fcau, 0x926e897bu, 0x30a6032cu, 0xcedd7cddu, 0x6d14f68eu, 0x0b4c703fu, 0xa983e9f0u, 0x47bb63a1u,
    0xe5f2dd52u, 0x842a5703u, 0x2261d0b4u, 0xc0994a65u, 0x5ed0c416u, 0xfd083dc7u, 0x9b3fb778u, 0x39773129u,
};

static const uint32_t bshim_040_tab3[96] = {
    0x04901d3bu, 0xa2c796ecu, 0x40ff109du, 0xdf368a4eu, 0x7d6e03ffu, 0x1ba57db0u, 0xb9dcf761u, 0x58147112u,
    0xf64beac3u, 0x94836474u, 0x32bade25u, 0xd0f257d6u, 0x6f29d187u, 0x0d614b38u, 0xab98c4e9u, 0x49d03e9au,
    0xe807b84bu, 0x863f31fcu, 0x2476abadu, 0xc2ae255eu, 0x60e59f0fu, 0xff1d18c0u, 0x9d549271u, 0x3b8c0c22u,
    0xd9c385d3u, 0x77faff84u, 0x16327935u, 0xb469f2e6u, 0x52a16c97u, 0xf0d8e648u, 0x8f105ff9u, 0x2d47d9aau,
    0xcb7f535bu, 0x69b6cd0cu, 0x07ee46bdu, 0xa625c06eu, 0x445d3a1fu, 0xe294b3d0u, 0x80cc2d81u, 0x1f03a732u,
    0xbd3b20e3u, 0x5b729a94u, 0xf9aa1445u, 0x97e18df6u, 0x361907a7u, 0xd4508158u, 0x7287fb09u, 0x10bf74bau,
    0xaef6ee6bu, 0x4d2e681cu, 0xeb65e1cdu, 0x899d5b7eu, 0x27d4d52fu, 0xc60c4ee0u, 0x6443c891u, 0x027b4242u,
    0xa0b2bbf3u, 0x3eea35a4u, 0xdd21af55u, 0x7b592906u, 0x1990a2b7u, 0xb7c81c68u, 0x55ff9619u, 0xf4370fcau,
    0x926e897bu, 0x30a6032cu, 0xcedd7cddu, 0x6d14f68eu, 0x0b4c703fu, 0xa983e9f0u, 0x47bb63a1u, 0xe5f2dd52u,
    0x842a5703u, 0x2261d0b4u, 0xc0994a65u, 0x5ed0c416u, 0xfd083dc7u, 0x9b3fb778u, 0x39773129u, 0xd7aeaadau,
    0x75e6248bu, 0x141d9e3cu, 0xb25517edu, 0x508c919eu, 0xeec40b4fu, 0x8cfb8500u, 0x2b32feb1u, 0xc96a7862u,
    0x67a1f213u, 0x05d96bc4u, 0xa410e575u, 0x42485f26u, 0xe07fd8d7u, 0x7eb75288u, 0x1ceecc39u, 0xbb2645eau,
};

static const uint32_t bshim_040_tab4[96] = {
    0x863f31fcu, 0x2476abadu, 0xc2ae255eu, 0x60e59f0fu, 0xff1d18c0u, 0x9d549271u, 0x3b8c0c22u, 0xd9c385d3u,
    0x77faff84u, 0x16327935u, 0xb469f2e6u, 0x52a16c97u, 0xf0d8e648u, 0x8f105ff9u, 0x2d47d9aau, 0xcb7f535bu,
    0x69b6cd0cu, 0x07ee46bdu, 0xa625c06eu, 0x445d3a1fu, 0xe294b3d0u, 0x80cc2d81u, 0x1f03a732u, 0xbd3b20e3u,
    0x5b729a94u, 0xf9aa1445u, 0x97e18df6u, 0x361907a7u, 0xd4508158u, 0x7287fb09u, 0x10bf74bau, 0xaef6ee6bu,
    0x4d2e681cu, 0xeb65e1cdu, 0x899d5b7eu, 0x27d4d52fu, 0xc60c4ee0u, 0x6443c891u, 0x027b4242u, 0xa0b2bbf3u,
    0x3eea35a4u, 0xdd21af55u, 0x7b592906u, 0x1990a2b7u, 0xb7c81c68u, 0x55ff9619u, 0xf4370fcau, 0x926e897bu,
    0x30a6032cu, 0xcedd7cddu, 0x6d14f68eu, 0x0b4c703fu, 0xa983e9f0u, 0x47bb63a1u, 0xe5f2dd52u, 0x842a5703u,
    0x2261d0b4u, 0xc0994a65u, 0x5ed0c416u, 0xfd083dc7u, 0x9b3fb778u, 0x39773129u, 0xd7aeaadau, 0x75e6248bu,
    0x141d9e3cu, 0xb25517edu, 0x508c919eu, 0xeec40b4fu, 0x8cfb8500u, 0x2b32feb1u, 0xc96a7862u, 0x67a1f213u,
    0x05d96bc4u, 0xa410e575u, 0x42485f26u, 0xe07fd8d7u, 0x7eb75288u, 0x1ceecc39u, 0xbb2645eau, 0x595dbf9bu,
    0xf795394cu, 0x95ccb2fdu, 0x34042caeu, 0xd23ba65fu, 0x70732010u, 0x0eaa99c1u, 0xace21372u, 0x4b198d23u,
    0xe95106d4u, 0x87888085u, 0x25bffa36u, 0xc3f773e7u, 0x622eed98u, 0x00666749u, 0x9e9de0fau, 0x3cd55aabu,
};

static const uint32_t bshim_040_tab5[96] = {
    0x07ee46bdu, 0xa625c06eu, 0x445d3a1fu, 0xe294b3d0u, 0x80cc2d81u, 0x1f03a732u, 0xbd3b20e3u, 0x5b729a94u,
    0xf9aa1445u, 0x97e18df6u, 0x361907a7u, 0xd4508158u, 0x7287fb09u, 0x10bf74bau, 0xaef6ee6bu, 0x4d2e681cu,
    0xeb65e1cdu, 0x899d5b7eu, 0x27d4d52fu, 0xc60c4ee0u, 0x6443c891u, 0x027b4242u, 0xa0b2bbf3u, 0x3eea35a4u,
    0xdd21af55u, 0x7b592906u, 0x1990a2b7u, 0xb7c81c68u, 0x55ff9619u, 0xf4370fcau, 0x926e897bu, 0x30a6032cu,
    0xcedd7cddu, 0x6d14f68eu, 0x0b4c703fu, 0xa983e9f0u, 0x47bb63a1u, 0xe5f2dd52u, 0x842a5703u, 0x2261d0b4u,
    0xc0994a65u, 0x5ed0c416u, 0xfd083dc7u, 0x9b3fb778u, 0x39773129u, 0xd7aeaadau, 0x75e6248bu, 0x141d9e3cu,
    0xb25517edu, 0x508c919eu, 0xeec40b4fu, 0x8cfb8500u, 0x2b32feb1u, 0xc96a7862u, 0x67a1f213u, 0x05d96bc4u,
    0xa410e575u, 0x42485f26u, 0xe07fd8d7u, 0x7eb75288u, 0x1ceecc39u, 0xbb2645eau, 0x595dbf9bu, 0xf795394cu,
    0x95ccb2fdu, 0x34042caeu, 0xd23ba65fu, 0x70732010u, 0x0eaa99c1u, 0xace21372u, 0x4b198d23u, 0xe95106d4u,
    0x87888085u, 0x25bffa36u, 0xc3f773e7u, 0x622eed98u, 0x00666749u, 0x9e9de0fau, 0x3cd55aabu, 0xdb0cd45cu,
    0x79444e0du, 0x177bc7beu, 0xb5b3416fu, 0x53eabb20u, 0xf22234d1u, 0x9059ae82u, 0x2e912833u, 0xccc8a1e4u,
    0x6b001b95u, 0x09379546u, 0xa76f0ef7u, 0x45a688a8u, 0xe3de0259u, 0x82157c0au, 0x204cf5bbu, 0xbe846f6cu,
};

static const uint32_t bshim_040_tab6[96] = {
    0x899d5b7eu, 0x27d4d52fu, 0xc60c4ee0u, 0x6443c891u, 0x027b4242u, 0xa0b2bbf3u, 0x3eea35a4u, 0xdd21af55u,
    0x7b592906u, 0x1990a2b7u, 0xb7c81c68u, 0x55ff9619u, 0xf4370fcau, 0x926e897bu, 0x30a6032cu, 0xcedd7cddu,
    0x6d14f68eu, 0x0b4c703fu, 0xa983e9f0u, 0x47bb63a1u, 0xe5f2dd52u, 0x842a5703u, 0x2261d0b4u, 0xc0994a65u,
    0x5ed0c416u, 0xfd083dc7u, 0x9b3fb778u, 0x39773129u, 0xd7aeaadau, 0x75e6248bu, 0x141d9e3cu, 0xb25517edu,
    0x508c919eu, 0xeec40b4fu, 0x8cfb8500u, 0x2b32feb1u, 0xc96a7862u, 0x67a1f213u, 0x05d96bc4u, 0xa410e575u,
    0x42485f26u, 0xe07fd8d7u, 0x7eb75288u, 0x1ceecc39u, 0xbb2645eau, 0x595dbf9bu, 0xf795394cu, 0x95ccb2fdu,
    0x34042caeu, 0xd23ba65fu, 0x70732010u, 0x0eaa99c1u, 0xace21372u, 0x4b198d23u, 0xe95106d4u, 0x87888085u,
    0x25bffa36u, 0xc3f773e7u, 0x622eed98u, 0x00666749u, 0x9e9de0fau, 0x3cd55aabu, 0xdb0cd45cu, 0x79444e0du,
    0x177bc7beu, 0xb5b3416fu, 0x53eabb20u, 0xf22234d1u, 0x9059ae82u, 0x2e912833u, 0xccc8a1e4u, 0x6b001b95u,
    0x09379546u, 0xa76f0ef7u, 0x45a688a8u, 0xe3de0259u, 0x82157c0au, 0x204cf5bbu, 0xbe846f6cu, 0x5cbbe91du,
    0xfaf362ceu, 0x992adc7fu, 0x37625630u, 0xd599cfe1u, 0x73d14992u, 0x1208c343u, 0xb0403cf4u, 0x4e77b6a5u,
    0xecaf3056u, 0x8ae6aa07u, 0x291e23b8u, 0xc7559d69u, 0x658d171au, 0x03c490cbu, 0xa1fc0a7cu, 0x4033842du,
};

static const uint32_t bshim_040_tab7[96] = {
    0x0b4c703fu, 0xa983e9f0u, 0x47bb63a1u, 0xe5f2dd52u, 0x842a5703u, 0x2261d0b4u, 0xc0994a65u, 0x5ed0c416u,
    0xfd083dc7u, 0x9b3fb778u, 0x39773129u, 0xd7aeaadau, 0x75e6248bu, 0x141d9e3cu, 0xb25517edu, 0x508c919eu,
    0xeec40b4fu, 0x8cfb8500u, 0x2b32feb1u, 0xc96a7862u, 0x67a1f213u, 0x05d96bc4u, 0xa410e575u, 0x42485f26u,
    0xe07fd8d7u, 0x7eb75288u, 0x1ceecc39u, 0xbb2645eau, 0x595dbf9bu, 0xf795394cu, 0x95ccb2fdu, 0x34042caeu,
    0xd23ba65fu, 0x70732010u, 0x0eaa99c1u, 0xace21372u, 0x4b198d23u, 0xe95106d4u, 0x87888085u, 0x25bffa36u,
    0xc3f773e7u, 0x622eed98u, 0x00666749u, 0x9e9de0fau, 0x3cd55aabu, 0xdb0cd45cu, 0x79444e0du, 0x177bc7beu,
    0xb5b3416fu, 0x53eabb20u, 0xf22234d1u, 0x9059ae82u, 0x2e912833u, 0xccc8a1e4u, 0x6b001b95u, 0x09379546u,
    0xa76f0ef7u, 0x45a688a8u, 0xe3de0259u, 0x82157c0au, 0x204cf5bbu, 0xbe846f6cu, 0x5cbbe91du, 0xfaf362ceu,
    0x992adc7fu, 0x37625630u, 0xd599cfe1u, 0x73d14992u, 0x1208c343u, 0xb0403cf4u, 0x4e77b6a5u, 0xecaf3056u,
    0x8ae6aa07u, 0x291e23b8u, 0xc7559d69u, 0x658d171au, 0x03c490cbu, 0xa1fc0a7cu, 0x4033842du, 0xde6afddeu,
    0x7ca2778fu, 0x1ad9f140u, 0xb9116af1u, 0x5748e4a2u, 0xf5805e53u, 0x93b7d804u, 0x31ef51b5u, 0xd026cb66u,
    0x6e5e4517u, 0x0c95bec8u, 0xaacd3879u, 0x4904b22au, 0xe73c2bdbu, 0x8573a58cu, 0x23ab1f3du, 0xc1e298eeu,
};

struct bshim_040_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_040_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_040_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_040_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_040_reset(struct bshim_040_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0004d558u;
    return 0;
}

