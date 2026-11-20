/* bshim_281 -- board support shim generated from the 0281 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_281_tab0[96] = {
    0x72f75e5bu, 0x112ed80cu, 0xaf6651bdu, 0x4d9dcb6eu, 0xebd5451fu, 0x8a0cbed0u, 0x28443881u, 0xc67bb232u,
    0x64b32be3u, 0x02eaa594u, 0xa1221f45u, 0x3f5998f6u, 0xdd9112a7u, 0x7bc88c58u, 0x1a000609u, 0xb8377fbau,
    0x566ef96bu, 0xf4a6731cu, 0x92ddeccdu, 0x3115667eu, 0xcf4ce02fu, 0x6d8459e0u, 0x0bbbd391u, 0xa9f34d42u,
    0x482ac6f3u, 0xe66240a4u, 0x8499ba55u, 0x22d13406u, 0xc108adb7u, 0x5f402768u, 0xfd77a119u, 0x9baf1acau,
    0x39e6947bu, 0xd81e0e2cu, 0x765587ddu, 0x148d018eu, 0xb2c47b3fu, 0x50fbf4f0u, 0xef336ea1u, 0x8d6ae852u,
    0x2ba26203u, 0xc9d9dbb4u, 0x68115565u, 0x0648cf16u, 0xa48048c7u, 0x42b7c278u, 0xe0ef3c29u, 0x7f26b5dau,
    0x1d5e2f8bu, 0xbb95a93cu, 0x59cd22edu, 0xf8049c9eu, 0x963c164fu, 0x34739000u, 0xd2ab09b1u, 0x70e28362u,
    0x0f19fd13u, 0xad5176c4u, 0x4b88f075u, 0xe9c06a26u, 0x87f7e3d7u, 0x262f5d88u, 0xc466d739u, 0x629e50eau,
    0x00d5ca9bu, 0x9f0d444cu, 0x3d44bdfdu, 0xdb7c37aeu, 0x79b3b15fu, 0x17eb2b10u, 0xb622a4c1u, 0x545a1e72u,
    0xf2919823u, 0x90c911d4u, 0x2f008b85u, 0xcd380536u, 0x6b6f7ee7u, 0x09a6f898u, 0xa7de7249u, 0x4615ebfau,
    0xe44d65abu, 0x8284df5cu, 0x20bc590du, 0xbef3d2beu, 0x5d2b4c6fu, 0xfb62c620u, 0x999a3fd1u, 0x37d1b982u,
    0xd6093333u, 0x7440ace4u, 0x12782695u, 0xb0afa046u, 0x4ee719f7u, 0xed1e93a8u, 0x8b560d59u, 0x298d870au,
};

static const uint32_t bshim_281_tab1[96] = {
    0xf4a6731cu, 0x92ddeccdu, 0x3115667eu, 0xcf4ce02fu, 0x6d8459e0u, 0x0bbbd391u, 0xa9f34d42u, 0x482ac6f3u,
    0xe66240a4u, 0x8499ba55u, 0x22d13406u, 0xc108adb7u, 0x5f402768u, 0xfd77a119u, 0x9baf1acau, 0x39e6947bu,
    0xd81e0e2cu, 0x765587ddu, 0x148d018eu, 0xb2c47b3fu, 0x50fbf4f0u, 0xef336ea1u, 0x8d6ae852u, 0x2ba26203u,
    0xc9d9dbb4u, 0x68115565u, 0x0648cf16u, 0xa48048c7u, 0x42b7c278u, 0xe0ef3c29u, 0x7f26b5dau, 0x1d5e2f8bu,
    0xbb95a93cu, 0x59cd22edu, 0xf8049c9eu, 0x963c164fu, 0x34739000u, 0xd2ab09b1u, 0x70e28362u, 0x0f19fd13u,
    0xad5176c4u, 0x4b88f075u, 0xe9c06a26u, 0x87f7e3d7u, 0x262f5d88u, 0xc466d739u, 0x629e50eau, 0x00d5ca9bu,
    0x9f0d444cu, 0x3d44bdfdu, 0xdb7c37aeu, 0x79b3b15fu, 0x17eb2b10u, 0xb622a4c1u, 0x545a1e72u, 0xf2919823u,
    0x90c911d4u, 0x2f008b85u, 0xcd380536u, 0x6b6f7ee7u, 0x09a6f898u, 0xa7de7249u, 0x4615ebfau, 0xe44d65abu,
    0x8284df5cu, 0x20bc590du, 0xbef3d2beu, 0x5d2b4c6fu, 0xfb62c620u, 0x999a3fd1u, 0x37d1b982u, 0xd6093333u,
    0x7440ace4u, 0x12782695u, 0xb0afa046u, 0x4ee719f7u, 0xed1e93a8u, 0x8b560d59u, 0x298d870au, 0xc7c500bbu,
    0x65fc7a6cu, 0x0433f41du, 0xa26b6dceu, 0x40a2e77fu, 0xdeda6130u, 0x7d11dae1u, 0x1b495492u, 0xb980ce43u,
    0x57b847f4u, 0xf5efc1a5u, 0x94273b56u, 0x325eb507u, 0xd0962eb8u, 0x6ecda869u, 0x0d05221au, 0xab3c9bcbu,
};

static const uint32_t bshim_281_tab2[96] = {
    0x765587ddu, 0x148d018eu, 0xb2c47b3fu, 0x50fbf4f0u, 0xef336ea1u, 0x8d6ae852u, 0x2ba26203u, 0xc9d9dbb4u,
    0x68115565u, 0x0648cf16u, 0xa48048c7u, 0x42b7c278u, 0xe0ef3c29u, 0x7f26b5dau, 0x1d5e2f8bu, 0xbb95a93cu,
    0x59cd22edu, 0xf8049c9eu, 0x963c164fu, 0x34739000u, 0xd2ab09b1u, 0x70e28362u, 0x0f19fd13u, 0xad5176c4u,
    0x4b88f075u, 0xe9c06a26u, 0x87f7e3d7u, 0x262f5d88u, 0xc466d739u, 0x629e50eau, 0x00d5ca9bu, 0x9f0d444cu,
    0x3d44bdfdu, 0xdb7c37aeu, 0x79b3b15fu, 0x17eb2b10u, 0xb622a4c1u, 0x545a1e72u, 0xf2919823u, 0x90c911d4u,
    0x2f008b85u, 0xcd380536u, 0x6b6f7ee7u, 0x09a6f898u, 0xa7de7249u, 0x4615ebfau, 0xe44d65abu, 0x8284df5cu,
    0x20bc590du, 0xbef3d2beu, 0x5d2b4c6fu, 0xfb62c620u, 0x999a3fd1u, 0x37d1b982u, 0xd6093333u, 0x7440ace4u,
    0x12782695u, 0xb0afa046u, 0x4ee719f7u, 0xed1e93a8u, 0x8b560d59u, 0x298d870au, 0xc7c500bbu, 0x65fc7a6cu,
    0x0433f41du, 0xa26b6dceu, 0x40a2e77fu, 0xdeda6130u, 0x7d11dae1u, 0x1b495492u, 0xb980ce43u, 0x57b847f4u,
    0xf5efc1a5u, 0x94273b56u, 0x325eb507u, 0xd0962eb8u, 0x6ecda869u, 0x0d05221au, 0xab3c9bcbu, 0x4974157cu,
    0xe7ab8f2du, 0x85e308deu, 0x241a828fu, 0xc251fc40u, 0x608975f1u, 0xfec0efa2u, 0x9cf86953u, 0x3b2fe304u,
    0xd9675cb5u, 0x779ed666u, 0x15d65017u, 0xb40dc9c8u, 0x52454379u, 0xf07cbd2au, 0x8eb436dbu, 0x2cebb08cu,
};

static const uint32_t bshim_281_tab3[96] = {
    0xf8049c9eu, 0x963c164fu, 0x34739000u, 0xd2ab09b1u, 0x70e28362u, 0x0f19fd13u, 0xad5176c4u, 0x4b88f075u,
    0xe9c06a26u, 0x87f7e3d7u, 0x262f5d88u, 0xc466d739u, 0x629e50eau, 0x00d5ca9bu, 0x9f0d444cu, 0x3d44bdfdu,
    0xdb7c37aeu, 0x79b3b15fu, 0x17eb2b10u, 0xb622a4c1u, 0x545a1e72u, 0xf2919823u, 0x90c911d4u, 0x2f008b85u,
    0xcd380536u, 0x6b6f7ee7u, 0x09a6f898u, 0xa7de7249u, 0x4615ebfau, 0xe44d65abu, 0x8284df5cu, 0x20bc590du,
    0xbef3d2beu, 0x5d2b4c6fu, 0xfb62c620u, 0x999a3fd1u, 0x37d1b982u, 0xd6093333u, 0x7440ace4u, 0x12782695u,
    0xb0afa046u, 0x4ee719f7u, 0xed1e93a8u, 0x8b560d59u, 0x298d870au, 0xc7c500bbu, 0x65fc7a6cu, 0x0433f41du,
    0xa26b6dceu, 0x40a2e77fu, 0xdeda6130u, 0x7d11dae1u, 0x1b495492u, 0xb980ce43u, 0x57b847f4u, 0xf5efc1a5u,
    0x94273b56u, 0x325eb507u, 0xd0962eb8u, 0x6ecda869u, 0x0d05221au, 0xab3c9bcbu, 0x4974157cu, 0xe7ab8f2du,
    0x85e308deu, 0x241a828fu, 0xc251fc40u, 0x608975f1u, 0xfec0efa2u, 0x9cf86953u, 0x3b2fe304u, 0xd9675cb5u,
    0x779ed666u, 0x15d65017u, 0xb40dc9c8u, 0x52454379u, 0xf07cbd2au, 0x8eb436dbu, 0x2cebb08cu, 0xcb232a3du,
    0x695aa3eeu, 0x07921d9fu, 0xa5c99750u, 0x44011101u, 0xe2388ab2u, 0x80700463u, 0x1ea77e14u, 0xbcdef7c5u,
    0x5b167176u, 0xf94deb27u, 0x978564d8u, 0x35bcde89u, 0xd3f4583au, 0x722bd1ebu, 0x10634b9cu, 0xae9ac54du,
};

static const uint32_t bshim_281_tab4[96] = {
    0x79b3b15fu, 0x17eb2b10u, 0xb622a4c1u, 0x545a1e72u, 0xf2919823u, 0x90c911d4u, 0x2f008b85u, 0xcd380536u,
    0x6b6f7ee7u, 0x09a6f898u, 0xa7de7249u, 0x4615ebfau, 0xe44d65abu, 0x8284df5cu, 0x20bc590du, 0xbef3d2beu,
    0x5d2b4c6fu, 0xfb62c620u, 0x999a3fd1u, 0x37d1b982u, 0xd6093333u, 0x7440ace4u, 0x12782695u, 0xb0afa046u,
    0x4ee719f7u, 0xed1e93a8u, 0x8b560d59u, 0x298d870au, 0xc7c500bbu, 0x65fc7a6cu, 0x0433f41du, 0xa26b6dceu,
    0x40a2e77fu, 0xdeda6130u, 0x7d11dae1u, 0x1b495492u, 0xb980ce43u, 0x57b847f4u, 0xf5efc1a5u, 0x94273b56u,
    0x325eb507u, 0xd0962eb8u, 0x6ecda869u, 0x0d05221au, 0xab3c9bcbu, 0x4974157cu, 0xe7ab8f2du, 0x85e308deu,
    0x241a828fu, 0xc251fc40u, 0x608975f1u, 0xfec0efa2u, 0x9cf86953u, 0x3b2fe304u, 0xd9675cb5u, 0x779ed666u,
    0x15d65017u, 0xb40dc9c8u, 0x52454379u, 0xf07cbd2au, 0x8eb436dbu, 0x2cebb08cu, 0xcb232a3du, 0x695aa3eeu,
    0x07921d9fu, 0xa5c99750u, 0x44011101u, 0xe2388ab2u, 0x80700463u, 0x1ea77e14u, 0xbcdef7c5u, 0x5b167176u,
    0xf94deb27u, 0x978564d8u, 0x35bcde89u, 0xd3f4583au, 0x722bd1ebu, 0x10634b9cu, 0xae9ac54du, 0x4cd23efeu,
    0xeb09b8afu, 0x89413260u, 0x2778ac11u, 0xc5b025c2u, 0x63e79f73u, 0x021f1924u, 0xa05692d5u, 0x3e8e0c86u,
    0xdcc58637u, 0x7afcffe8u, 0x19347999u, 0xb76bf34au, 0x55a36cfbu, 0xf3dae6acu, 0x9212605du, 0x3049da0eu,
};

static const uint32_t bshim_281_tab5[96] = {
    0xfb62c620u, 0x999a3fd1u, 0x37d1b982u, 0xd6093333u, 0x7440ace4u, 0x12782695u, 0xb0afa046u, 0x4ee719f7u,
    0xed1e93a8u, 0x8b560d59u, 0x298d870au, 0xc7c500bbu, 0x65fc7a6cu, 0x0433f41du, 0xa26b6dceu, 0x40a2e77fu,
    0xdeda6130u, 0x7d11dae1u, 0x1b495492u, 0xb980ce43u, 0x57b847f4u, 0xf5efc1a5u, 0x94273b56u, 0x325eb507u,
    0xd0962eb8u, 0x6ecda869u, 0x0d05221au, 0xab3c9bcbu, 0x4974157cu, 0xe7ab8f2du, 0x85e308deu, 0x241a828fu,
    0xc251fc40u, 0x608975f1u, 0xfec0efa2u, 0x9cf86953u, 0x3b2fe304u, 0xd9675cb5u, 0x779ed666u, 0x15d65017u,
    0xb40dc9c8u, 0x52454379u, 0xf07cbd2au, 0x8eb436dbu, 0x2cebb08cu, 0xcb232a3du, 0x695aa3eeu, 0x07921d9fu,
    0xa5c99750u, 0x44011101u, 0xe2388ab2u, 0x80700463u, 0x1ea77e14u, 0xbcdef7c5u, 0x5b167176u, 0xf94deb27u,
    0x978564d8u, 0x35bcde89u, 0xd3f4583au, 0x722bd1ebu, 0x10634b9cu, 0xae9ac54du, 0x4cd23efeu, 0xeb09b8afu,
    0x89413260u, 0x2778ac11u, 0xc5b025c2u, 0x63e79f73u, 0x021f1924u, 0xa05692d5u, 0x3e8e0c86u, 0xdcc58637u,
    0x7afcffe8u, 0x19347999u, 0xb76bf34au, 0x55a36cfbu, 0xf3dae6acu, 0x9212605du, 0x3049da0eu, 0xce8153bfu,
    0x6cb8cd70u, 0x0af04721u, 0xa927c0d2u, 0x475f3a83u, 0xe596b434u, 0x83ce2de5u, 0x2205a796u, 0xc03d2147u,
    0x5e749af8u, 0xfcac14a9u, 0x9ae38e5au, 0x391b080bu, 0xd75281bcu, 0x7589fb6du, 0x13c1751eu, 0xb1f8eecfu,
};

static const uint32_t bshim_281_tab6[96] = {
    0x7d11dae1u, 0x1b495492u, 0xb980ce43u, 0x57b847f4u, 0xf5efc1a5u, 0x94273b56u, 0x325eb507u, 0xd0962eb8u,
    0x6ecda869u, 0x0d05221au, 0xab3c9bcbu, 0x4974157cu, 0xe7ab8f2du, 0x85e308deu, 0x241a828fu, 0xc251fc40u,
    0x608975f1u, 0xfec0efa2u, 0x9cf86953u, 0x3b2fe304u, 0xd9675cb5u, 0x779ed666u, 0x15d65017u, 0xb40dc9c8u,
    0x52454379u, 0xf07cbd2au, 0x8eb436dbu, 0x2cebb08cu, 0xcb232a3du, 0x695aa3eeu, 0x07921d9fu, 0xa5c99750u,
    0x44011101u, 0xe2388ab2u, 0x80700463u, 0x1ea77e14u, 0xbcdef7c5u, 0x5b167176u, 0xf94deb27u, 0x978564d8u,
    0x35bcde89u, 0xd3f4583au, 0x722bd1ebu, 0x10634b9cu, 0xae9ac54du, 0x4cd23efeu, 0xeb09b8afu, 0x89413260u,
    0x2778ac11u, 0xc5b025c2u, 0x63e79f73u, 0x021f1924u, 0xa05692d5u, 0x3e8e0c86u, 0xdcc58637u, 0x7afcffe8u,
    0x19347999u, 0xb76bf34au, 0x55a36cfbu, 0xf3dae6acu, 0x9212605du, 0x3049da0eu, 0xce8153bfu, 0x6cb8cd70u,
    0x0af04721u, 0xa927c0d2u, 0x475f3a83u, 0xe596b434u, 0x83ce2de5u, 0x2205a796u, 0xc03d2147u, 0x5e749af8u,
    0xfcac14a9u, 0x9ae38e5au, 0x391b080bu, 0xd75281bcu, 0x7589fb6du, 0x13c1751eu, 0xb1f8eecfu, 0x50306880u,
    0xee67e231u, 0x8c9f5be2u, 0x2ad6d593u, 0xc90e4f44u, 0x6745c8f5u, 0x057d42a6u, 0xa3b4bc57u, 0x41ec3608u,
    0xe023afb9u, 0x7e5b296au, 0x1c92a31bu, 0xbaca1cccu, 0x5901967du, 0xf739102eu, 0x957089dfu, 0x33a80390u,
};

static const uint32_t bshim_281_tab7[96] = {
    0xfec0efa2u, 0x9cf86953u, 0x3b2fe304u, 0xd9675cb5u, 0x779ed666u, 0x15d65017u, 0xb40dc9c8u, 0x52454379u,
    0xf07cbd2au, 0x8eb436dbu, 0x2cebb08cu, 0xcb232a3du, 0x695aa3eeu, 0x07921d9fu, 0xa5c99750u, 0x44011101u,
    0xe2388ab2u, 0x80700463u, 0x1ea77e14u, 0xbcdef7c5u, 0x5b167176u, 0xf94deb27u, 0x978564d8u, 0x35bcde89u,
    0xd3f4583au, 0x722bd1ebu, 0x10634b9cu, 0xae9ac54du, 0x4cd23efeu, 0xeb09b8afu, 0x89413260u, 0x2778ac11u,
    0xc5b025c2u, 0x63e79f73u, 0x021f1924u, 0xa05692d5u, 0x3e8e0c86u, 0xdcc58637u, 0x7afcffe8u, 0x19347999u,
    0xb76bf34au, 0x55a36cfbu, 0xf3dae6acu, 0x9212605du, 0x3049da0eu, 0xce8153bfu, 0x6cb8cd70u, 0x0af04721u,
    0xa927c0d2u, 0x475f3a83u, 0xe596b434u, 0x83ce2de5u, 0x2205a796u, 0xc03d2147u, 0x5e749af8u, 0xfcac14a9u,
    0x9ae38e5au, 0x391b080bu, 0xd75281bcu, 0x7589fb6du, 0x13c1751eu, 0xb1f8eecfu, 0x50306880u, 0xee67e231u,
    0x8c9f5be2u, 0x2ad6d593u, 0xc90e4f44u, 0x6745c8f5u, 0x057d42a6u, 0xa3b4bc57u, 0x41ec3608u, 0xe023afb9u,
    0x7e5b296au, 0x1c92a31bu, 0xbaca1cccu, 0x5901967du, 0xf739102eu, 0x957089dfu, 0x33a80390u, 0xd1df7d41u,
    0x7016f6f2u, 0x0e4e70a3u, 0xac85ea54u, 0x4abd6405u, 0xe8f4ddb6u, 0x872c5767u, 0x2563d118u, 0xc39b4ac9u,
    0x61d2c47au, 0x000a3e2bu, 0x9e41b7dcu, 0x3c79318du, 0xdab0ab3eu, 0x78e824efu, 0x171f9ea0u, 0xb5571851u,
};

struct bshim_281_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_281_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_281_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_281_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_281_reset(struct bshim_281_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0021f457u;
    return 0;
}

