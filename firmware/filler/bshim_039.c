/* bshim_039 -- board support shim generated from the 0039 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_039_tab0[96] = {
    0x891f9965u, 0x27571316u, 0xc58e8cc7u, 0x63c60678u, 0x01fd8029u, 0xa034f9dau, 0x3e6c738bu, 0xdca3ed3cu,
    0x7adb66edu, 0x1912e09eu, 0xb74a5a4fu, 0x5581d400u, 0xf3b94db1u, 0x91f0c762u, 0x30284113u, 0xce5fbac4u,
    0x6c973475u, 0x0aceae26u, 0xa90627d7u, 0x473da188u, 0xe5751b39u, 0x83ac94eau, 0x21e40e9bu, 0xc01b884cu,
    0x5e5301fdu, 0xfc8a7baeu, 0x9ac1f55fu, 0x38f96f10u, 0xd730e8c1u, 0x75686272u, 0x139fdc23u, 0xb1d755d4u,
    0x500ecf85u, 0xee464936u, 0x8c7dc2e7u, 0x2ab53c98u, 0xc8ecb649u, 0x67242ffau, 0x055ba9abu, 0xa393235cu,
    0x41ca9d0du, 0xe00216beu, 0x7e39906fu, 0x1c710a20u, 0xbaa883d1u, 0x58dffd82u, 0xf7177733u, 0x954ef0e4u,
    0x33866a95u, 0xd1bde446u, 0x6ff55df7u, 0x0e2cd7a8u, 0xac645159u, 0x4a9bcb0au, 0xe8d344bbu, 0x870abe6cu,
    0x2542381du, 0xc379b1ceu, 0x61b12b7fu, 0xffe8a530u, 0x9e201ee1u, 0x3c579892u, 0xda8f1243u, 0x78c68bf4u,
    0x16fe05a5u, 0xb5357f56u, 0x536cf907u, 0xf1a472b8u, 0x8fdbec69u, 0x2e13661au, 0xcc4adfcbu, 0x6a82597cu,
    0x08b9d32du, 0xa6f14cdeu, 0x4528c68fu, 0xe3604040u, 0x8197b9f1u, 0x1fcf33a2u, 0xbe06ad53u, 0x5c3e2704u,
    0xfa75a0b5u, 0x98ad1a66u, 0x36e49417u, 0xd51c0dc8u, 0x73538779u, 0x118b012au, 0xafc27adbu, 0x4df9f48cu,
    0xec316e3du, 0x8a68e7eeu, 0x28a0619fu, 0xc6d7db50u, 0x650f5501u, 0x0346ceb2u, 0xa17e4863u, 0x3fb5c214u,
};

static const uint32_t bshim_039_tab1[96] = {
    0x0aceae26u, 0xa90627d7u, 0x473da188u, 0xe5751b39u, 0x83ac94eau, 0x21e40e9bu, 0xc01b884cu, 0x5e5301fdu,
    0xfc8a7baeu, 0x9ac1f55fu, 0x38f96f10u, 0xd730e8c1u, 0x75686272u, 0x139fdc23u, 0xb1d755d4u, 0x500ecf85u,
    0xee464936u, 0x8c7dc2e7u, 0x2ab53c98u, 0xc8ecb649u, 0x67242ffau, 0x055ba9abu, 0xa393235cu, 0x41ca9d0du,
    0xe00216beu, 0x7e39906fu, 0x1c710a20u, 0xbaa883d1u, 0x58dffd82u, 0xf7177733u, 0x954ef0e4u, 0x33866a95u,
    0xd1bde446u, 0x6ff55df7u, 0x0e2cd7a8u, 0xac645159u, 0x4a9bcb0au, 0xe8d344bbu, 0x870abe6cu, 0x2542381du,
    0xc379b1ceu, 0x61b12b7fu, 0xffe8a530u, 0x9e201ee1u, 0x3c579892u, 0xda8f1243u, 0x78c68bf4u, 0x16fe05a5u,
    0xb5357f56u, 0x536cf907u, 0xf1a472b8u, 0x8fdbec69u, 0x2e13661au, 0xcc4adfcbu, 0x6a82597cu, 0x08b9d32du,
    0xa6f14cdeu, 0x4528c68fu, 0xe3604040u, 0x8197b9f1u, 0x1fcf33a2u, 0xbe06ad53u, 0x5c3e2704u, 0xfa75a0b5u,
    0x98ad1a66u, 0x36e49417u, 0xd51c0dc8u, 0x73538779u, 0x118b012au, 0xafc27adbu, 0x4df9f48cu, 0xec316e3du,
    0x8a68e7eeu, 0x28a0619fu, 0xc6d7db50u, 0x650f5501u, 0x0346ceb2u, 0xa17e4863u, 0x3fb5c214u, 0xdded3bc5u,
    0x7c24b576u, 0x1a5c2f27u, 0xb893a8d8u, 0x56cb2289u, 0xf5029c3au, 0x933a15ebu, 0x31718f9cu, 0xcfa9094du,
    0x6de082feu, 0x0c17fcafu, 0xaa4f7660u, 0x4886f011u, 0xe6be69c2u, 0x84f5e373u, 0x232d5d24u, 0xc164d6d5u,
};

static const uint32_t bshim_039_tab2[96] = {
    0x8c7dc2e7u, 0x2ab53c98u, 0xc8ecb649u, 0x67242ffau, 0x055ba9abu, 0xa393235cu, 0x41ca9d0du, 0xe00216beu,
    0x7e39906fu, 0x1c710a20u, 0xbaa883d1u, 0x58dffd82u, 0xf7177733u, 0x954ef0e4u, 0x33866a95u, 0xd1bde446u,
    0x6ff55df7u, 0x0e2cd7a8u, 0xac645159u, 0x4a9bcb0au, 0xe8d344bbu, 0x870abe6cu, 0x2542381du, 0xc379b1ceu,
    0x61b12b7fu, 0xffe8a530u, 0x9e201ee1u, 0x3c579892u, 0xda8f1243u, 0x78c68bf4u, 0x16fe05a5u, 0xb5357f56u,
    0x536cf907u, 0xf1a472b8u, 0x8fdbec69u, 0x2e13661au, 0xcc4adfcbu, 0x6a82597cu, 0x08b9d32du, 0xa6f14cdeu,
    0x4528c68fu, 0xe3604040u, 0x8197b9f1u, 0x1fcf33a2u, 0xbe06ad53u, 0x5c3e2704u, 0xfa75a0b5u, 0x98ad1a66u,
    0x36e49417u, 0xd51c0dc8u, 0x73538779u, 0x118b012au, 0xafc27adbu, 0x4df9f48cu, 0xec316e3du, 0x8a68e7eeu,
    0x28a0619fu, 0xc6d7db50u, 0x650f5501u, 0x0346ceb2u, 0xa17e4863u, 0x3fb5c214u, 0xdded3bc5u, 0x7c24b576u,
    0x1a5c2f27u, 0xb893a8d8u, 0x56cb2289u, 0xf5029c3au, 0x933a15ebu, 0x31718f9cu, 0xcfa9094du, 0x6de082feu,
    0x0c17fcafu, 0xaa4f7660u, 0x4886f011u, 0xe6be69c2u, 0x84f5e373u, 0x232d5d24u, 0xc164d6d5u, 0x5f9c5086u,
    0xfdd3ca37u, 0x9c0b43e8u, 0x3a42bd99u, 0xd87a374au, 0x76b1b0fbu, 0x14e92aacu, 0xb320a45du, 0x51581e0eu,
    0xef8f97bfu, 0x8dc71170u, 0x2bfe8b21u, 0xca3604d2u, 0x686d7e83u, 0x06a4f834u, 0xa4dc71e5u, 0x4313eb96u,
};

static const uint32_t bshim_039_tab3[96] = {
    0x0e2cd7a8u, 0xac645159u, 0x4a9bcb0au, 0xe8d344bbu, 0x870abe6cu, 0x2542381du, 0xc379b1ceu, 0x61b12b7fu,
    0xffe8a530u, 0x9e201ee1u, 0x3c579892u, 0xda8f1243u, 0x78c68bf4u, 0x16fe05a5u, 0xb5357f56u, 0x536cf907u,
    0xf1a472b8u, 0x8fdbec69u, 0x2e13661au, 0xcc4adfcbu, 0x6a82597cu, 0x08b9d32du, 0xa6f14cdeu, 0x4528c68fu,
    0xe3604040u, 0x8197b9f1u, 0x1fcf33a2u, 0xbe06ad53u, 0x5c3e2704u, 0xfa75a0b5u, 0x98ad1a66u, 0x36e49417u,
    0xd51c0dc8u, 0x73538779u, 0x118b012au, 0xafc27adbu, 0x4df9f48cu, 0xec316e3du, 0x8a68e7eeu, 0x28a0619fu,
    0xc6d7db50u, 0x650f5501u, 0x0346ceb2u, 0xa17e4863u, 0x3fb5c214u, 0xdded3bc5u, 0x7c24b576u, 0x1a5c2f27u,
    0xb893a8d8u, 0x56cb2289u, 0xf5029c3au, 0x933a15ebu, 0x31718f9cu, 0xcfa9094du, 0x6de082feu, 0x0c17fcafu,
    0xaa4f7660u, 0x4886f011u, 0xe6be69c2u, 0x84f5e373u, 0x232d5d24u, 0xc164d6d5u, 0x5f9c5086u, 0xfdd3ca37u,
    0x9c0b43e8u, 0x3a42bd99u, 0xd87a374au, 0x76b1b0fbu, 0x14e92aacu, 0xb320a45du, 0x51581e0eu, 0xef8f97bfu,
    0x8dc71170u, 0x2bfe8b21u, 0xca3604d2u, 0x686d7e83u, 0x06a4f834u, 0xa4dc71e5u, 0x4313eb96u, 0xe14b6547u,
    0x7f82def8u, 0x1dba58a9u, 0xbbf1d25au, 0x5a294c0bu, 0xf860c5bcu, 0x96983f6du, 0x34cfb91eu, 0xd30732cfu,
    0x713eac80u, 0x0f762631u, 0xadad9fe2u, 0x4be51993u, 0xea1c9344u, 0x88540cf5u, 0x268b86a6u, 0xc4c30057u,
};

static const uint32_t bshim_039_tab4[96] = {
    0x8fdbec69u, 0x2e13661au, 0xcc4adfcbu, 0x6a82597cu, 0x08b9d32du, 0xa6f14cdeu, 0x4528c68fu, 0xe3604040u,
    0x8197b9f1u, 0x1fcf33a2u, 0xbe06ad53u, 0x5c3e2704u, 0xfa75a0b5u, 0x98ad1a66u, 0x36e49417u, 0xd51c0dc8u,
    0x73538779u, 0x118b012au, 0xafc27adbu, 0x4df9f48cu, 0xec316e3du, 0x8a68e7eeu, 0x28a0619fu, 0xc6d7db50u,
    0x650f5501u, 0x0346ceb2u, 0xa17e4863u, 0x3fb5c214u, 0xdded3bc5u, 0x7c24b576u, 0x1a5c2f27u, 0xb893a8d8u,
    0x56cb2289u, 0xf5029c3au, 0x933a15ebu, 0x31718f9cu, 0xcfa9094du, 0x6de082feu, 0x0c17fcafu, 0xaa4f7660u,
    0x4886f011u, 0xe6be69c2u, 0x84f5e373u, 0x232d5d24u, 0xc164d6d5u, 0x5f9c5086u, 0xfdd3ca37u, 0x9c0b43e8u,
    0x3a42bd99u, 0xd87a374au, 0x76b1b0fbu, 0x14e92aacu, 0xb320a45du, 0x51581e0eu, 0xef8f97bfu, 0x8dc71170u,
    0x2bfe8b21u, 0xca3604d2u, 0x686d7e83u, 0x06a4f834u, 0xa4dc71e5u, 0x4313eb96u, 0xe14b6547u, 0x7f82def8u,
    0x1dba58a9u, 0xbbf1d25au, 0x5a294c0bu, 0xf860c5bcu, 0x96983f6du, 0x34cfb91eu, 0xd30732cfu, 0x713eac80u,
    0x0f762631u, 0xadad9fe2u, 0x4be51993u, 0xea1c9344u, 0x88540cf5u, 0x268b86a6u, 0xc4c30057u, 0x62fa7a08u,
    0x0131f3b9u, 0x9f696d6au, 0x3da0e71bu, 0xdbd860ccu, 0x7a0fda7du, 0x1847542eu, 0xb67ecddfu, 0x54b64790u,
    0xf2edc141u, 0x91253af2u, 0x2f5cb4a3u, 0xcd942e54u, 0x6bcba805u, 0x0a0321b6u, 0xa83a9b67u, 0x46721518u,
};

static const uint32_t bshim_039_tab5[96] = {
    0x118b012au, 0xafc27adbu, 0x4df9f48cu, 0xec316e3du, 0x8a68e7eeu, 0x28a0619fu, 0xc6d7db50u, 0x650f5501u,
    0x0346ceb2u, 0xa17e4863u, 0x3fb5c214u, 0xdded3bc5u, 0x7c24b576u, 0x1a5c2f27u, 0xb893a8d8u, 0x56cb2289u,
    0xf5029c3au, 0x933a15ebu, 0x31718f9cu, 0xcfa9094du, 0x6de082feu, 0x0c17fcafu, 0xaa4f7660u, 0x4886f011u,
    0xe6be69c2u, 0x84f5e373u, 0x232d5d24u, 0xc164d6d5u, 0x5f9c5086u, 0xfdd3ca37u, 0x9c0b43e8u, 0x3a42bd99u,
    0xd87a374au, 0x76b1b0fbu, 0x14e92aacu, 0xb320a45du, 0x51581e0eu, 0xef8f97bfu, 0x8dc71170u, 0x2bfe8b21u,
    0xca3604d2u, 0x686d7e83u, 0x06a4f834u, 0xa4dc71e5u, 0x4313eb96u, 0xe14b6547u, 0x7f82def8u, 0x1dba58a9u,
    0xbbf1d25au, 0x5a294c0bu, 0xf860c5bcu, 0x96983f6du, 0x34cfb91eu, 0xd30732cfu, 0x713eac80u, 0x0f762631u,
    0xadad9fe2u, 0x4be51993u, 0xea1c9344u, 0x88540cf5u, 0x268b86a6u, 0xc4c30057u, 0x62fa7a08u, 0x0131f3b9u,
    0x9f696d6au, 0x3da0e71bu, 0xdbd860ccu, 0x7a0fda7du, 0x1847542eu, 0xb67ecddfu, 0x54b64790u, 0xf2edc141u,
    0x91253af2u, 0x2f5cb4a3u, 0xcd942e54u, 0x6bcba805u, 0x0a0321b6u, 0xa83a9b67u, 0x46721518u, 0xe4a98ec9u,
    0x82e1087au, 0x2118822bu, 0xbf4ffbdcu, 0x5d87758du, 0xfbbeef3eu, 0x99f668efu, 0x382de2a0u, 0xd6655c51u,
    0x749cd602u, 0x12d44fb3u, 0xb10bc964u, 0x4f434315u, 0xed7abcc6u, 0x8bb23677u, 0x29e9b028u, 0xc82129d9u,
};

static const uint32_t bshim_039_tab6[96] = {
    0x933a15ebu, 0x31718f9cu, 0xcfa9094du, 0x6de082feu, 0x0c17fcafu, 0xaa4f7660u, 0x4886f011u, 0xe6be69c2u,
    0x84f5e373u, 0x232d5d24u, 0xc164d6d5u, 0x5f9c5086u, 0xfdd3ca37u, 0x9c0b43e8u, 0x3a42bd99u, 0xd87a374au,
    0x76b1b0fbu, 0x14e92aacu, 0xb320a45du, 0x51581e0eu, 0xef8f97bfu, 0x8dc71170u, 0x2bfe8b21u, 0xca3604d2u,
    0x686d7e83u, 0x06a4f834u, 0xa4dc71e5u, 0x4313eb96u, 0xe14b6547u, 0x7f82def8u, 0x1dba58a9u, 0xbbf1d25au,
    0x5a294c0bu, 0xf860c5bcu, 0x96983f6du, 0x34cfb91eu, 0xd30732cfu, 0x713eac80u, 0x0f762631u, 0xadad9fe2u,
    0x4be51993u, 0xea1c9344u, 0x88540cf5u, 0x268b86a6u, 0xc4c30057u, 0x62fa7a08u, 0x0131f3b9u, 0x9f696d6au,
    0x3da0e71bu, 0xdbd860ccu, 0x7a0fda7du, 0x1847542eu, 0xb67ecddfu, 0x54b64790u, 0xf2edc141u, 0x91253af2u,
    0x2f5cb4a3u, 0xcd942e54u, 0x6bcba805u, 0x0a0321b6u, 0xa83a9b67u, 0x46721518u, 0xe4a98ec9u, 0x82e1087au,
    0x2118822bu, 0xbf4ffbdcu, 0x5d87758du, 0xfbbeef3eu, 0x99f668efu, 0x382de2a0u, 0xd6655c51u, 0x749cd602u,
    0x12d44fb3u, 0xb10bc964u, 0x4f434315u, 0xed7abcc6u, 0x8bb23677u, 0x29e9b028u, 0xc82129d9u, 0x6658a38au,
    0x04901d3bu, 0xa2c796ecu, 0x40ff109du, 0xdf368a4eu, 0x7d6e03ffu, 0x1ba57db0u, 0xb9dcf761u, 0x58147112u,
    0xf64beac3u, 0x94836474u, 0x32bade25u, 0xd0f257d6u, 0x6f29d187u, 0x0d614b38u, 0xab98c4e9u, 0x49d03e9au,
};

static const uint32_t bshim_039_tab7[96] = {
    0x14e92aacu, 0xb320a45du, 0x51581e0eu, 0xef8f97bfu, 0x8dc71170u, 0x2bfe8b21u, 0xca3604d2u, 0x686d7e83u,
    0x06a4f834u, 0xa4dc71e5u, 0x4313eb96u, 0xe14b6547u, 0x7f82def8u, 0x1dba58a9u, 0xbbf1d25au, 0x5a294c0bu,
    0xf860c5bcu, 0x96983f6du, 0x34cfb91eu, 0xd30732cfu, 0x713eac80u, 0x0f762631u, 0xadad9fe2u, 0x4be51993u,
    0xea1c9344u, 0x88540cf5u, 0x268b86a6u, 0xc4c30057u, 0x62fa7a08u, 0x0131f3b9u, 0x9f696d6au, 0x3da0e71bu,
    0xdbd860ccu, 0x7a0fda7du, 0x1847542eu, 0xb67ecddfu, 0x54b64790u, 0xf2edc141u, 0x91253af2u, 0x2f5cb4a3u,
    0xcd942e54u, 0x6bcba805u, 0x0a0321b6u, 0xa83a9b67u, 0x46721518u, 0xe4a98ec9u, 0x82e1087au, 0x2118822bu,
    0xbf4ffbdcu, 0x5d87758du, 0xfbbeef3eu, 0x99f668efu, 0x382de2a0u, 0xd6655c51u, 0x749cd602u, 0x12d44fb3u,
    0xb10bc964u, 0x4f434315u, 0xed7abcc6u, 0x8bb23677u, 0x29e9b028u, 0xc82129d9u, 0x6658a38au, 0x04901d3bu,
    0xa2c796ecu, 0x40ff109du, 0xdf368a4eu, 0x7d6e03ffu, 0x1ba57db0u, 0xb9dcf761u, 0x58147112u, 0xf64beac3u,
    0x94836474u, 0x32bade25u, 0xd0f257d6u, 0x6f29d187u, 0x0d614b38u, 0xab98c4e9u, 0x49d03e9au, 0xe807b84bu,
    0x863f31fcu, 0x2476abadu, 0xc2ae255eu, 0x60e59f0fu, 0xff1d18c0u, 0x9d549271u, 0x3b8c0c22u, 0xd9c385d3u,
    0x77faff84u, 0x16327935u, 0xb469f2e6u, 0x52a16c97u, 0xf0d8e648u, 0x8f105ff9u, 0x2d47d9aau, 0xcb7f535bu,
};

struct bshim_039_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_039_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_039_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_039_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_039_reset(struct bshim_039_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0004b669u;
    return 0;
}

