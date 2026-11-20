/* bshim_102 -- board support shim generated from the 0102 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_102_tab0[96] = {
    0x2b8db892u, 0xc9c53243u, 0x67fcabf4u, 0x063425a5u, 0xa46b9f56u, 0x42a31907u, 0xe0da92b8u, 0x7f120c69u,
    0x1d49861au, 0xbb80ffcbu, 0x59b8797cu, 0xf7eff32du, 0x96276cdeu, 0x345ee68fu, 0xd2966040u, 0x70cdd9f1u,
    0x0f0553a2u, 0xad3ccd53u, 0x4b744704u, 0xe9abc0b5u, 0x87e33a66u, 0x261ab417u, 0xc4522dc8u, 0x6289a779u,
    0x00c1212au, 0x9ef89adbu, 0x3d30148cu, 0xdb678e3du, 0x799f07eeu, 0x17d6819fu, 0xb60dfb50u, 0x54457501u,
    0xf27ceeb2u, 0x90b46863u, 0x2eebe214u, 0xcd235bc5u, 0x6b5ad576u, 0x09924f27u, 0xa7c9c8d8u, 0x46014289u,
    0xe438bc3au, 0x827035ebu, 0x20a7af9cu, 0xbedf294du, 0x5d16a2feu, 0xfb4e1cafu, 0x99859660u, 0x37bd1011u,
    0xd5f489c2u, 0x742c0373u, 0x12637d24u, 0xb09af6d5u, 0x4ed27086u, 0xed09ea37u, 0x8b4163e8u, 0x2978dd99u,
    0xc7b0574au, 0x65e7d0fbu, 0x041f4aacu, 0xa256c45du, 0x408e3e0eu, 0xdec5b7bfu, 0x7cfd3170u, 0x1b34ab21u,
    0xb96c24d2u, 0x57a39e83u, 0xf5db1834u, 0x941291e5u, 0x324a0b96u, 0xd0818547u, 0x6eb8fef8u, 0x0cf078a9u,
    0xab27f25au, 0x495f6c0bu, 0xe796e5bcu, 0x85ce5f6du, 0x2405d91eu, 0xc23d52cfu, 0x6074cc80u, 0xfeac4631u,
    0x9ce3bfe2u, 0x3b1b3993u, 0xd952b344u, 0x778a2cf5u, 0x15c1a6a6u, 0xb3f92057u, 0x52309a08u, 0xf06813b9u,
    0x8e9f8d6au, 0x2cd7071bu, 0xcb0e80ccu, 0x6945fa7du, 0x077d742eu, 0xa5b4eddfu, 0x43ec6790u, 0xe223e141u,
};

static const uint32_t bshim_102_tab1[96] = {
    0xad3ccd53u, 0x4b744704u, 0xe9abc0b5u, 0x87e33a66u, 0x261ab417u, 0xc4522dc8u, 0x6289a779u, 0x00c1212au,
    0x9ef89adbu, 0x3d30148cu, 0xdb678e3du, 0x799f07eeu, 0x17d6819fu, 0xb60dfb50u, 0x54457501u, 0xf27ceeb2u,
    0x90b46863u, 0x2eebe214u, 0xcd235bc5u, 0x6b5ad576u, 0x09924f27u, 0xa7c9c8d8u, 0x46014289u, 0xe438bc3au,
    0x827035ebu, 0x20a7af9cu, 0xbedf294du, 0x5d16a2feu, 0xfb4e1cafu, 0x99859660u, 0x37bd1011u, 0xd5f489c2u,
    0x742c0373u, 0x12637d24u, 0xb09af6d5u, 0x4ed27086u, 0xed09ea37u, 0x8b4163e8u, 0x2978dd99u, 0xc7b0574au,
    0x65e7d0fbu, 0x041f4aacu, 0xa256c45du, 0x408e3e0eu, 0xdec5b7bfu, 0x7cfd3170u, 0x1b34ab21u, 0xb96c24d2u,
    0x57a39e83u, 0xf5db1834u, 0x941291e5u, 0x324a0b96u, 0xd0818547u, 0x6eb8fef8u, 0x0cf078a9u, 0xab27f25au,
    0x495f6c0bu, 0xe796e5bcu, 0x85ce5f6du, 0x2405d91eu, 0xc23d52cfu, 0x6074cc80u, 0xfeac4631u, 0x9ce3bfe2u,
    0x3b1b3993u, 0xd952b344u, 0x778a2cf5u, 0x15c1a6a6u, 0xb3f92057u, 0x52309a08u, 0xf06813b9u, 0x8e9f8d6au,
    0x2cd7071bu, 0xcb0e80ccu, 0x6945fa7du, 0x077d742eu, 0xa5b4eddfu, 0x43ec6790u, 0xe223e141u, 0x805b5af2u,
    0x1e92d4a3u, 0xbcca4e54u, 0x5b01c805u, 0xf93941b6u, 0x9770bb67u, 0x35a83518u, 0xd3dfaec9u, 0x7217287au,
    0x104ea22bu, 0xae861bdcu, 0x4cbd958du, 0xeaf50f3eu, 0x892c88efu, 0x276402a0u, 0xc59b7c51u, 0x63d2f602u,
};

static const uint32_t bshim_102_tab2[96] = {
    0x2eebe214u, 0xcd235bc5u, 0x6b5ad576u, 0x09924f27u, 0xa7c9c8d8u, 0x46014289u, 0xe438bc3au, 0x827035ebu,
    0x20a7af9cu, 0xbedf294du, 0x5d16a2feu, 0xfb4e1cafu, 0x99859660u, 0x37bd1011u, 0xd5f489c2u, 0x742c0373u,
    0x12637d24u, 0xb09af6d5u, 0x4ed27086u, 0xed09ea37u, 0x8b4163e8u, 0x2978dd99u, 0xc7b0574au, 0x65e7d0fbu,
    0x041f4aacu, 0xa256c45du, 0x408e3e0eu, 0xdec5b7bfu, 0x7cfd3170u, 0x1b34ab21u, 0xb96c24d2u, 0x57a39e83u,
    0xf5db1834u, 0x941291e5u, 0x324a0b96u, 0xd0818547u, 0x6eb8fef8u, 0x0cf078a9u, 0xab27f25au, 0x495f6c0bu,
    0xe796e5bcu, 0x85ce5f6du, 0x2405d91eu, 0xc23d52cfu, 0x6074cc80u, 0xfeac4631u, 0x9ce3bfe2u, 0x3b1b3993u,
    0xd952b344u, 0x778a2cf5u, 0x15c1a6a6u, 0xb3f92057u, 0x52309a08u, 0xf06813b9u, 0x8e9f8d6au, 0x2cd7071bu,
    0xcb0e80ccu, 0x6945fa7du, 0x077d742eu, 0xa5b4eddfu, 0x43ec6790u, 0xe223e141u, 0x805b5af2u, 0x1e92d4a3u,
    0xbcca4e54u, 0x5b01c805u, 0xf93941b6u, 0x9770bb67u, 0x35a83518u, 0xd3dfaec9u, 0x7217287au, 0x104ea22bu,
    0xae861bdcu, 0x4cbd958du, 0xeaf50f3eu, 0x892c88efu, 0x276402a0u, 0xc59b7c51u, 0x63d2f602u, 0x020a6fb3u,
    0xa041e964u, 0x3e796315u, 0xdcb0dcc6u, 0x7ae85677u, 0x191fd028u, 0xb75749d9u, 0x558ec38au, 0xf3c63d3bu,
    0x91fdb6ecu, 0x3035309du, 0xce6caa4eu, 0x6ca423ffu, 0x0adb9db0u, 0xa9131761u, 0x474a9112u, 0xe5820ac3u,
};

static const uint32_t bshim_102_tab3[96] = {
    0xb09af6d5u, 0x4ed27086u, 0xed09ea37u, 0x8b4163e8u, 0x2978dd99u, 0xc7b0574au, 0x65e7d0fbu, 0x041f4aacu,
    0xa256c45du, 0x408e3e0eu, 0xdec5b7bfu, 0x7cfd3170u, 0x1b34ab21u, 0xb96c24d2u, 0x57a39e83u, 0xf5db1834u,
    0x941291e5u, 0x324a0b96u, 0xd0818547u, 0x6eb8fef8u, 0x0cf078a9u, 0xab27f25au, 0x495f6c0bu, 0xe796e5bcu,
    0x85ce5f6du, 0x2405d91eu, 0xc23d52cfu, 0x6074cc80u, 0xfeac4631u, 0x9ce3bfe2u, 0x3b1b3993u, 0xd952b344u,
    0x778a2cf5u, 0x15c1a6a6u, 0xb3f92057u, 0x52309a08u, 0xf06813b9u, 0x8e9f8d6au, 0x2cd7071bu, 0xcb0e80ccu,
    0x6945fa7du, 0x077d742eu, 0xa5b4eddfu, 0x43ec6790u, 0xe223e141u, 0x805b5af2u, 0x1e92d4a3u, 0xbcca4e54u,
    0x5b01c805u, 0xf93941b6u, 0x9770bb67u, 0x35a83518u, 0xd3dfaec9u, 0x7217287au, 0x104ea22bu, 0xae861bdcu,
    0x4cbd958du, 0xeaf50f3eu, 0x892c88efu, 0x276402a0u, 0xc59b7c51u, 0x63d2f602u, 0x020a6fb3u, 0xa041e964u,
    0x3e796315u, 0xdcb0dcc6u, 0x7ae85677u, 0x191fd028u, 0xb75749d9u, 0x558ec38au, 0xf3c63d3bu, 0x91fdb6ecu,
    0x3035309du, 0xce6caa4eu, 0x6ca423ffu, 0x0adb9db0u, 0xa9131761u, 0x474a9112u, 0xe5820ac3u, 0x83b98474u,
    0x21f0fe25u, 0xc02877d6u, 0x5e5ff187u, 0xfc976b38u, 0x9acee4e9u, 0x39065e9au, 0xd73dd84bu, 0x757551fcu,
    0x13accbadu, 0xb1e4455eu, 0x501bbf0fu, 0xee5338c0u, 0x8c8ab271u, 0x2ac22c22u, 0xc8f9a5d3u, 0x67311f84u,
};

static const uint32_t bshim_102_tab4[96] = {
    0x324a0b96u, 0xd0818547u, 0x6eb8fef8u, 0x0cf078a9u, 0xab27f25au, 0x495f6c0bu, 0xe796e5bcu, 0x85ce5f6du,
    0x2405d91eu, 0xc23d52cfu, 0x6074cc80u, 0xfeac4631u, 0x9ce3bfe2u, 0x3b1b3993u, 0xd952b344u, 0x778a2cf5u,
    0x15c1a6a6u, 0xb3f92057u, 0x52309a08u, 0xf06813b9u, 0x8e9f8d6au, 0x2cd7071bu, 0xcb0e80ccu, 0x6945fa7du,
    0x077d742eu, 0xa5b4eddfu, 0x43ec6790u, 0xe223e141u, 0x805b5af2u, 0x1e92d4a3u, 0xbcca4e54u, 0x5b01c805u,
    0xf93941b6u, 0x9770bb67u, 0x35a83518u, 0xd3dfaec9u, 0x7217287au, 0x104ea22bu, 0xae861bdcu, 0x4cbd958du,
    0xeaf50f3eu, 0x892c88efu, 0x276402a0u, 0xc59b7c51u, 0x63d2f602u, 0x020a6fb3u, 0xa041e964u, 0x3e796315u,
    0xdcb0dcc6u, 0x7ae85677u, 0x191fd028u, 0xb75749d9u, 0x558ec38au, 0xf3c63d3bu, 0x91fdb6ecu, 0x3035309du,
    0xce6caa4eu, 0x6ca423ffu, 0x0adb9db0u, 0xa9131761u, 0x474a9112u, 0xe5820ac3u, 0x83b98474u, 0x21f0fe25u,
    0xc02877d6u, 0x5e5ff187u, 0xfc976b38u, 0x9acee4e9u, 0x39065e9au, 0xd73dd84bu, 0x757551fcu, 0x13accbadu,
    0xb1e4455eu, 0x501bbf0fu, 0xee5338c0u, 0x8c8ab271u, 0x2ac22c22u, 0xc8f9a5d3u, 0x67311f84u, 0x05689935u,
    0xa3a012e6u, 0x41d78c97u, 0xe00f0648u, 0x7e467ff9u, 0x1c7df9aau, 0xbab5735bu, 0x58eced0cu, 0xf72466bdu,
    0x955be06eu, 0x33935a1fu, 0xd1cad3d0u, 0x70024d81u, 0x0e39c732u, 0xac7140e3u, 0x4aa8ba94u, 0xe8e03445u,
};

static const uint32_t bshim_102_tab5[96] = {
    0xb3f92057u, 0x52309a08u, 0xf06813b9u, 0x8e9f8d6au, 0x2cd7071bu, 0xcb0e80ccu, 0x6945fa7du, 0x077d742eu,
    0xa5b4eddfu, 0x43ec6790u, 0xe223e141u, 0x805b5af2u, 0x1e92d4a3u, 0xbcca4e54u, 0x5b01c805u, 0xf93941b6u,
    0x9770bb67u, 0x35a83518u, 0xd3dfaec9u, 0x7217287au, 0x104ea22bu, 0xae861bdcu, 0x4cbd958du, 0xeaf50f3eu,
    0x892c88efu, 0x276402a0u, 0xc59b7c51u, 0x63d2f602u, 0x020a6fb3u, 0xa041e964u, 0x3e796315u, 0xdcb0dcc6u,
    0x7ae85677u, 0x191fd028u, 0xb75749d9u, 0x558ec38au, 0xf3c63d3bu, 0x91fdb6ecu, 0x3035309du, 0xce6caa4eu,
    0x6ca423ffu, 0x0adb9db0u, 0xa9131761u, 0x474a9112u, 0xe5820ac3u, 0x83b98474u, 0x21f0fe25u, 0xc02877d6u,
    0x5e5ff187u, 0xfc976b38u, 0x9acee4e9u, 0x39065e9au, 0xd73dd84bu, 0x757551fcu, 0x13accbadu, 0xb1e4455eu,
    0x501bbf0fu, 0xee5338c0u, 0x8c8ab271u, 0x2ac22c22u, 0xc8f9a5d3u, 0x67311f84u, 0x05689935u, 0xa3a012e6u,
    0x41d78c97u, 0xe00f0648u, 0x7e467ff9u, 0x1c7df9aau, 0xbab5735bu, 0x58eced0cu, 0xf72466bdu, 0x955be06eu,
    0x33935a1fu, 0xd1cad3d0u, 0x70024d81u, 0x0e39c732u, 0xac7140e3u, 0x4aa8ba94u, 0xe8e03445u, 0x8717adf6u,
    0x254f27a7u, 0xc386a158u, 0x61be1b09u, 0xfff594bau, 0x9e2d0e6bu, 0x3c64881cu, 0xda9c01cdu, 0x78d37b7eu,
    0x170af52fu, 0xb5426ee0u, 0x5379e891u, 0xf1b16242u, 0x8fe8dbf3u, 0x2e2055a4u, 0xcc57cf55u, 0x6a8f4906u,
};

static const uint32_t bshim_102_tab6[96] = {
    0x35a83518u, 0xd3dfaec9u, 0x7217287au, 0x104ea22bu, 0xae861bdcu, 0x4cbd958du, 0xeaf50f3eu, 0x892c88efu,
    0x276402a0u, 0xc59b7c51u, 0x63d2f602u, 0x020a6fb3u, 0xa041e964u, 0x3e796315u, 0xdcb0dcc6u, 0x7ae85677u,
    0x191fd028u, 0xb75749d9u, 0x558ec38au, 0xf3c63d3bu, 0x91fdb6ecu, 0x3035309du, 0xce6caa4eu, 0x6ca423ffu,
    0x0adb9db0u, 0xa9131761u, 0x474a9112u, 0xe5820ac3u, 0x83b98474u, 0x21f0fe25u, 0xc02877d6u, 0x5e5ff187u,
    0xfc976b38u, 0x9acee4e9u, 0x39065e9au, 0xd73dd84bu, 0x757551fcu, 0x13accbadu, 0xb1e4455eu, 0x501bbf0fu,
    0xee5338c0u, 0x8c8ab271u, 0x2ac22c22u, 0xc8f9a5d3u, 0x67311f84u, 0x05689935u, 0xa3a012e6u, 0x41d78c97u,
    0xe00f0648u, 0x7e467ff9u, 0x1c7df9aau, 0xbab5735bu, 0x58eced0cu, 0xf72466bdu, 0x955be06eu, 0x33935a1fu,
    0xd1cad3d0u, 0x70024d81u, 0x0e39c732u, 0xac7140e3u, 0x4aa8ba94u, 0xe8e03445u, 0x8717adf6u, 0x254f27a7u,
    0xc386a158u, 0x61be1b09u, 0xfff594bau, 0x9e2d0e6bu, 0x3c64881cu, 0xda9c01cdu, 0x78d37b7eu, 0x170af52fu,
    0xb5426ee0u, 0x5379e891u, 0xf1b16242u, 0x8fe8dbf3u, 0x2e2055a4u, 0xcc57cf55u, 0x6a8f4906u, 0x08c6c2b7u,
    0xa6fe3c68u, 0x4535b619u, 0xe36d2fcau, 0x81a4a97bu, 0x1fdc232cu, 0xbe139cddu, 0x5c4b168eu, 0xfa82903fu,
    0x98ba09f0u, 0x36f183a1u, 0xd528fd52u, 0x73607703u, 0x1197f0b4u, 0xafcf6a65u, 0x4e06e416u, 0xec3e5dc7u,
};

static const uint32_t bshim_102_tab7[96] = {
    0xb75749d9u, 0x558ec38au, 0xf3c63d3bu, 0x91fdb6ecu, 0x3035309du, 0xce6caa4eu, 0x6ca423ffu, 0x0adb9db0u,
    0xa9131761u, 0x474a9112u, 0xe5820ac3u, 0x83b98474u, 0x21f0fe25u, 0xc02877d6u, 0x5e5ff187u, 0xfc976b38u,
    0x9acee4e9u, 0x39065e9au, 0xd73dd84bu, 0x757551fcu, 0x13accbadu, 0xb1e4455eu, 0x501bbf0fu, 0xee5338c0u,
    0x8c8ab271u, 0x2ac22c22u, 0xc8f9a5d3u, 0x67311f84u, 0x05689935u, 0xa3a012e6u, 0x41d78c97u, 0xe00f0648u,
    0x7e467ff9u, 0x1c7df9aau, 0xbab5735bu, 0x58eced0cu, 0xf72466bdu, 0x955be06eu, 0x33935a1fu, 0xd1cad3d0u,
    0x70024d81u, 0x0e39c732u, 0xac7140e3u, 0x4aa8ba94u, 0xe8e03445u, 0x8717adf6u, 0x254f27a7u, 0xc386a158u,
    0x61be1b09u, 0xfff594bau, 0x9e2d0e6bu, 0x3c64881cu, 0xda9c01cdu, 0x78d37b7eu, 0x170af52fu, 0xb5426ee0u,
    0x5379e891u, 0xf1b16242u, 0x8fe8dbf3u, 0x2e2055a4u, 0xcc57cf55u, 0x6a8f4906u, 0x08c6c2b7u, 0xa6fe3c68u,
    0x4535b619u, 0xe36d2fcau, 0x81a4a97bu, 0x1fdc232cu, 0xbe139cddu, 0x5c4b168eu, 0xfa82903fu, 0x98ba09f0u,
    0x36f183a1u, 0xd528fd52u, 0x73607703u, 0x1197f0b4u, 0xafcf6a65u, 0x4e06e416u, 0xec3e5dc7u, 0x8a75d778u,
    0x28ad5129u, 0xc6e4cadau, 0x651c448bu, 0x0353be3cu, 0xa18b37edu, 0x3fc2b19eu, 0xddfa2b4fu, 0x7c31a500u,
    0x1a691eb1u, 0xb8a09862u, 0x56d81213u, 0xf50f8bc4u, 0x93470575u, 0x317e7f26u, 0xcfb5f8d7u, 0x6ded7288u,
};

struct bshim_102_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_102_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_102_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_102_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_102_reset(struct bshim_102_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000c533au;
    return 0;
}

