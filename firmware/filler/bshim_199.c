/* bshim_199 -- board support shim generated from the 0199 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_199_tab0[96] = {
    0x872b1545u, 0x25628ef6u, 0xc39a08a7u, 0x61d18258u, 0x0008fc09u, 0x9e4075bau, 0x3c77ef6bu, 0xdaaf691cu,
    0x78e6e2cdu, 0x171e5c7eu, 0xb555d62fu, 0x538d4fe0u, 0xf1c4c991u, 0x8ffc4342u, 0x2e33bcf3u, 0xcc6b36a4u,
    0x6aa2b055u, 0x08da2a06u, 0xa711a3b7u, 0x45491d68u, 0xe3809719u, 0x81b810cau, 0x1fef8a7bu, 0xbe27042cu,
    0x5c5e7dddu, 0xfa95f78eu, 0x98cd713fu, 0x3704eaf0u, 0xd53c64a1u, 0x7373de52u, 0x11ab5803u, 0xafe2d1b4u,
    0x4e1a4b65u, 0xec51c516u, 0x8a893ec7u, 0x28c0b878u, 0xc6f83229u, 0x652fabdau, 0x0367258bu, 0xa19e9f3cu,
    0x3fd618edu, 0xde0d929eu, 0x7c450c4fu, 0x1a7c8600u, 0xb8b3ffb1u, 0x56eb7962u, 0xf522f313u, 0x935a6cc4u,
    0x3191e675u, 0xcfc96026u, 0x6e00d9d7u, 0x0c385388u, 0xaa6fcd39u, 0x48a746eau, 0xe6dec09bu, 0x85163a4cu,
    0x234db3fdu, 0xc1852daeu, 0x5fbca75fu, 0xfdf42110u, 0x9c2b9ac1u, 0x3a631472u, 0xd89a8e23u, 0x76d207d4u,
    0x15098185u, 0xb340fb36u, 0x517874e7u, 0xefafee98u, 0x8de76849u, 0x2c1ee1fau, 0xca565babu, 0x688dd55cu,
    0x06c54f0du, 0xa4fcc8beu, 0x4334426fu, 0xe16bbc20u, 0x7fa335d1u, 0x1ddaaf82u, 0xbc122933u, 0x5a49a2e4u,
    0xf8811c95u, 0x96b89646u, 0x34f00ff7u, 0xd32789a8u, 0x715f0359u, 0x0f967d0au, 0xadcdf6bbu, 0x4c05706cu,
    0xea3cea1du, 0x887463ceu, 0x26abdd7fu, 0xc4e35730u, 0x631ad0e1u, 0x01524a92u, 0x9f89c443u, 0x3dc13df4u,
};

static const uint32_t bshim_199_tab1[96] = {
    0x08da2a06u, 0xa711a3b7u, 0x45491d68u, 0xe3809719u, 0x81b810cau, 0x1fef8a7bu, 0xbe27042cu, 0x5c5e7dddu,
    0xfa95f78eu, 0x98cd713fu, 0x3704eaf0u, 0xd53c64a1u, 0x7373de52u, 0x11ab5803u, 0xafe2d1b4u, 0x4e1a4b65u,
    0xec51c516u, 0x8a893ec7u, 0x28c0b878u, 0xc6f83229u, 0x652fabdau, 0x0367258bu, 0xa19e9f3cu, 0x3fd618edu,
    0xde0d929eu, 0x7c450c4fu, 0x1a7c8600u, 0xb8b3ffb1u, 0x56eb7962u, 0xf522f313u, 0x935a6cc4u, 0x3191e675u,
    0xcfc96026u, 0x6e00d9d7u, 0x0c385388u, 0xaa6fcd39u, 0x48a746eau, 0xe6dec09bu, 0x85163a4cu, 0x234db3fdu,
    0xc1852daeu, 0x5fbca75fu, 0xfdf42110u, 0x9c2b9ac1u, 0x3a631472u, 0xd89a8e23u, 0x76d207d4u, 0x15098185u,
    0xb340fb36u, 0x517874e7u, 0xefafee98u, 0x8de76849u, 0x2c1ee1fau, 0xca565babu, 0x688dd55cu, 0x06c54f0du,
    0xa4fcc8beu, 0x4334426fu, 0xe16bbc20u, 0x7fa335d1u, 0x1ddaaf82u, 0xbc122933u, 0x5a49a2e4u, 0xf8811c95u,
    0x96b89646u, 0x34f00ff7u, 0xd32789a8u, 0x715f0359u, 0x0f967d0au, 0xadcdf6bbu, 0x4c05706cu, 0xea3cea1du,
    0x887463ceu, 0x26abdd7fu, 0xc4e35730u, 0x631ad0e1u, 0x01524a92u, 0x9f89c443u, 0x3dc13df4u, 0xdbf8b7a5u,
    0x7a303156u, 0x1867ab07u, 0xb69f24b8u, 0x54d69e69u, 0xf30e181au, 0x914591cbu, 0x2f7d0b7cu, 0xcdb4852du,
    0x6bebfedeu, 0x0a23788fu, 0xa85af240u, 0x46926bf1u, 0xe4c9e5a2u, 0x83015f53u, 0x2138d904u, 0xbf7052b5u,
};

static const uint32_t bshim_199_tab2[96] = {
    0x8a893ec7u, 0x28c0b878u, 0xc6f83229u, 0x652fabdau, 0x0367258bu, 0xa19e9f3cu, 0x3fd618edu, 0xde0d929eu,
    0x7c450c4fu, 0x1a7c8600u, 0xb8b3ffb1u, 0x56eb7962u, 0xf522f313u, 0x935a6cc4u, 0x3191e675u, 0xcfc96026u,
    0x6e00d9d7u, 0x0c385388u, 0xaa6fcd39u, 0x48a746eau, 0xe6dec09bu, 0x85163a4cu, 0x234db3fdu, 0xc1852daeu,
    0x5fbca75fu, 0xfdf42110u, 0x9c2b9ac1u, 0x3a631472u, 0xd89a8e23u, 0x76d207d4u, 0x15098185u, 0xb340fb36u,
    0x517874e7u, 0xefafee98u, 0x8de76849u, 0x2c1ee1fau, 0xca565babu, 0x688dd55cu, 0x06c54f0du, 0xa4fcc8beu,
    0x4334426fu, 0xe16bbc20u, 0x7fa335d1u, 0x1ddaaf82u, 0xbc122933u, 0x5a49a2e4u, 0xf8811c95u, 0x96b89646u,
    0x34f00ff7u, 0xd32789a8u, 0x715f0359u, 0x0f967d0au, 0xadcdf6bbu, 0x4c05706cu, 0xea3cea1du, 0x887463ceu,
    0x26abdd7fu, 0xc4e35730u, 0x631ad0e1u, 0x01524a92u, 0x9f89c443u, 0x3dc13df4u, 0xdbf8b7a5u, 0x7a303156u,
    0x1867ab07u, 0xb69f24b8u, 0x54d69e69u, 0xf30e181au, 0x914591cbu, 0x2f7d0b7cu, 0xcdb4852du, 0x6bebfedeu,
    0x0a23788fu, 0xa85af240u, 0x46926bf1u, 0xe4c9e5a2u, 0x83015f53u, 0x2138d904u, 0xbf7052b5u, 0x5da7cc66u,
    0xfbdf4617u, 0x9a16bfc8u, 0x384e3979u, 0xd685b32au, 0x74bd2cdbu, 0x12f4a68cu, 0xb12c203du, 0x4f6399eeu,
    0xed9b139fu, 0x8bd28d50u, 0x2a0a0701u, 0xc84180b2u, 0x6678fa63u, 0x04b07414u, 0xa2e7edc5u, 0x411f6776u,
};

static const uint32_t bshim_199_tab3[96] = {
    0x0c385388u, 0xaa6fcd39u, 0x48a746eau, 0xe6dec09bu, 0x85163a4cu, 0x234db3fdu, 0xc1852daeu, 0x5fbca75fu,
    0xfdf42110u, 0x9c2b9ac1u, 0x3a631472u, 0xd89a8e23u, 0x76d207d4u, 0x15098185u, 0xb340fb36u, 0x517874e7u,
    0xefafee98u, 0x8de76849u, 0x2c1ee1fau, 0xca565babu, 0x688dd55cu, 0x06c54f0du, 0xa4fcc8beu, 0x4334426fu,
    0xe16bbc20u, 0x7fa335d1u, 0x1ddaaf82u, 0xbc122933u, 0x5a49a2e4u, 0xf8811c95u, 0x96b89646u, 0x34f00ff7u,
    0xd32789a8u, 0x715f0359u, 0x0f967d0au, 0xadcdf6bbu, 0x4c05706cu, 0xea3cea1du, 0x887463ceu, 0x26abdd7fu,
    0xc4e35730u, 0x631ad0e1u, 0x01524a92u, 0x9f89c443u, 0x3dc13df4u, 0xdbf8b7a5u, 0x7a303156u, 0x1867ab07u,
    0xb69f24b8u, 0x54d69e69u, 0xf30e181au, 0x914591cbu, 0x2f7d0b7cu, 0xcdb4852du, 0x6bebfedeu, 0x0a23788fu,
    0xa85af240u, 0x46926bf1u, 0xe4c9e5a2u, 0x83015f53u, 0x2138d904u, 0xbf7052b5u, 0x5da7cc66u, 0xfbdf4617u,
    0x9a16bfc8u, 0x384e3979u, 0xd685b32au, 0x74bd2cdbu, 0x12f4a68cu, 0xb12c203du, 0x4f6399eeu, 0xed9b139fu,
    0x8bd28d50u, 0x2a0a0701u, 0xc84180b2u, 0x6678fa63u, 0x04b07414u, 0xa2e7edc5u, 0x411f6776u, 0xdf56e127u,
    0x7d8e5ad8u, 0x1bc5d489u, 0xb9fd4e3au, 0x5834c7ebu, 0xf66c419cu, 0x94a3bb4du, 0x32db34feu, 0xd112aeafu,
    0x6f4a2860u, 0x0d81a211u, 0xabb91bc2u, 0x49f09573u, 0xe8280f24u, 0x865f88d5u, 0x24970286u, 0xc2ce7c37u,
};

static const uint32_t bshim_199_tab4[96] = {
    0x8de76849u, 0x2c1ee1fau, 0xca565babu, 0x688dd55cu, 0x06c54f0du, 0xa4fcc8beu, 0x4334426fu, 0xe16bbc20u,
    0x7fa335d1u, 0x1ddaaf82u, 0xbc122933u, 0x5a49a2e4u, 0xf8811c95u, 0x96b89646u, 0x34f00ff7u, 0xd32789a8u,
    0x715f0359u, 0x0f967d0au, 0xadcdf6bbu, 0x4c05706cu, 0xea3cea1du, 0x887463ceu, 0x26abdd7fu, 0xc4e35730u,
    0x631ad0e1u, 0x01524a92u, 0x9f89c443u, 0x3dc13df4u, 0xdbf8b7a5u, 0x7a303156u, 0x1867ab07u, 0xb69f24b8u,
    0x54d69e69u, 0xf30e181au, 0x914591cbu, 0x2f7d0b7cu, 0xcdb4852du, 0x6bebfedeu, 0x0a23788fu, 0xa85af240u,
    0x46926bf1u, 0xe4c9e5a2u, 0x83015f53u, 0x2138d904u, 0xbf7052b5u, 0x5da7cc66u, 0xfbdf4617u, 0x9a16bfc8u,
    0x384e3979u, 0xd685b32au, 0x74bd2cdbu, 0x12f4a68cu, 0xb12c203du, 0x4f6399eeu, 0xed9b139fu, 0x8bd28d50u,
    0x2a0a0701u, 0xc84180b2u, 0x6678fa63u, 0x04b07414u, 0xa2e7edc5u, 0x411f6776u, 0xdf56e127u, 0x7d8e5ad8u,
    0x1bc5d489u, 0xb9fd4e3au, 0x5834c7ebu, 0xf66c419cu, 0x94a3bb4du, 0x32db34feu, 0xd112aeafu, 0x6f4a2860u,
    0x0d81a211u, 0xabb91bc2u, 0x49f09573u, 0xe8280f24u, 0x865f88d5u, 0x24970286u, 0xc2ce7c37u, 0x6105f5e8u,
    0xff3d6f99u, 0x9d74e94au, 0x3bac62fbu, 0xd9e3dcacu, 0x781b565du, 0x1652d00eu, 0xb48a49bfu, 0x52c1c370u,
    0xf0f93d21u, 0x8f30b6d2u, 0x2d683083u, 0xcb9faa34u, 0x69d723e5u, 0x080e9d96u, 0xa6461747u, 0x447d90f8u,
};

static const uint32_t bshim_199_tab5[96] = {
    0x0f967d0au, 0xadcdf6bbu, 0x4c05706cu, 0xea3cea1du, 0x887463ceu, 0x26abdd7fu, 0xc4e35730u, 0x631ad0e1u,
    0x01524a92u, 0x9f89c443u, 0x3dc13df4u, 0xdbf8b7a5u, 0x7a303156u, 0x1867ab07u, 0xb69f24b8u, 0x54d69e69u,
    0xf30e181au, 0x914591cbu, 0x2f7d0b7cu, 0xcdb4852du, 0x6bebfedeu, 0x0a23788fu, 0xa85af240u, 0x46926bf1u,
    0xe4c9e5a2u, 0x83015f53u, 0x2138d904u, 0xbf7052b5u, 0x5da7cc66u, 0xfbdf4617u, 0x9a16bfc8u, 0x384e3979u,
    0xd685b32au, 0x74bd2cdbu, 0x12f4a68cu, 0xb12c203du, 0x4f6399eeu, 0xed9b139fu, 0x8bd28d50u, 0x2a0a0701u,
    0xc84180b2u, 0x6678fa63u, 0x04b07414u, 0xa2e7edc5u, 0x411f6776u, 0xdf56e127u, 0x7d8e5ad8u, 0x1bc5d489u,
    0xb9fd4e3au, 0x5834c7ebu, 0xf66c419cu, 0x94a3bb4du, 0x32db34feu, 0xd112aeafu, 0x6f4a2860u, 0x0d81a211u,
    0xabb91bc2u, 0x49f09573u, 0xe8280f24u, 0x865f88d5u, 0x24970286u, 0xc2ce7c37u, 0x6105f5e8u, 0xff3d6f99u,
    0x9d74e94au, 0x3bac62fbu, 0xd9e3dcacu, 0x781b565du, 0x1652d00eu, 0xb48a49bfu, 0x52c1c370u, 0xf0f93d21u,
    0x8f30b6d2u, 0x2d683083u, 0xcb9faa34u, 0x69d723e5u, 0x080e9d96u, 0xa6461747u, 0x447d90f8u, 0xe2b50aa9u,
    0x80ec845au, 0x1f23fe0bu, 0xbd5b77bcu, 0x5b92f16du, 0xf9ca6b1eu, 0x9801e4cfu, 0x36395e80u, 0xd470d831u,
    0x72a851e2u, 0x10dfcb93u, 0xaf174544u, 0x4d4ebef5u, 0xeb8638a6u, 0x89bdb257u, 0x27f52c08u, 0xc62ca5b9u,
};

static const uint32_t bshim_199_tab6[96] = {
    0x914591cbu, 0x2f7d0b7cu, 0xcdb4852du, 0x6bebfedeu, 0x0a23788fu, 0xa85af240u, 0x46926bf1u, 0xe4c9e5a2u,
    0x83015f53u, 0x2138d904u, 0xbf7052b5u, 0x5da7cc66u, 0xfbdf4617u, 0x9a16bfc8u, 0x384e3979u, 0xd685b32au,
    0x74bd2cdbu, 0x12f4a68cu, 0xb12c203du, 0x4f6399eeu, 0xed9b139fu, 0x8bd28d50u, 0x2a0a0701u, 0xc84180b2u,
    0x6678fa63u, 0x04b07414u, 0xa2e7edc5u, 0x411f6776u, 0xdf56e127u, 0x7d8e5ad8u, 0x1bc5d489u, 0xb9fd4e3au,
    0x5834c7ebu, 0xf66c419cu, 0x94a3bb4du, 0x32db34feu, 0xd112aeafu, 0x6f4a2860u, 0x0d81a211u, 0xabb91bc2u,
    0x49f09573u, 0xe8280f24u, 0x865f88d5u, 0x24970286u, 0xc2ce7c37u, 0x6105f5e8u, 0xff3d6f99u, 0x9d74e94au,
    0x3bac62fbu, 0xd9e3dcacu, 0x781b565du, 0x1652d00eu, 0xb48a49bfu, 0x52c1c370u, 0xf0f93d21u, 0x8f30b6d2u,
    0x2d683083u, 0xcb9faa34u, 0x69d723e5u, 0x080e9d96u, 0xa6461747u, 0x447d90f8u, 0xe2b50aa9u, 0x80ec845au,
    0x1f23fe0bu, 0xbd5b77bcu, 0x5b92f16du, 0xf9ca6b1eu, 0x9801e4cfu, 0x36395e80u, 0xd470d831u, 0x72a851e2u,
    0x10dfcb93u, 0xaf174544u, 0x4d4ebef5u, 0xeb8638a6u, 0x89bdb257u, 0x27f52c08u, 0xc62ca5b9u, 0x64641f6au,
    0x029b991bu, 0xa0d312ccu, 0x3f0a8c7du, 0xdd42062eu, 0x7b797fdfu, 0x19b0f990u, 0xb7e87341u, 0x561fecf2u,
    0xf45766a3u, 0x928ee054u, 0x30c65a05u, 0xcefdd3b6u, 0x6d354d67u, 0x0b6cc718u, 0xa9a440c9u, 0x47dbba7au,
};

static const uint32_t bshim_199_tab7[96] = {
    0x12f4a68cu, 0xb12c203du, 0x4f6399eeu, 0xed9b139fu, 0x8bd28d50u, 0x2a0a0701u, 0xc84180b2u, 0x6678fa63u,
    0x04b07414u, 0xa2e7edc5u, 0x411f6776u, 0xdf56e127u, 0x7d8e5ad8u, 0x1bc5d489u, 0xb9fd4e3au, 0x5834c7ebu,
    0xf66c419cu, 0x94a3bb4du, 0x32db34feu, 0xd112aeafu, 0x6f4a2860u, 0x0d81a211u, 0xabb91bc2u, 0x49f09573u,
    0xe8280f24u, 0x865f88d5u, 0x24970286u, 0xc2ce7c37u, 0x6105f5e8u, 0xff3d6f99u, 0x9d74e94au, 0x3bac62fbu,
    0xd9e3dcacu, 0x781b565du, 0x1652d00eu, 0xb48a49bfu, 0x52c1c370u, 0xf0f93d21u, 0x8f30b6d2u, 0x2d683083u,
    0xcb9faa34u, 0x69d723e5u, 0x080e9d96u, 0xa6461747u, 0x447d90f8u, 0xe2b50aa9u, 0x80ec845au, 0x1f23fe0bu,
    0xbd5b77bcu, 0x5b92f16du, 0xf9ca6b1eu, 0x9801e4cfu, 0x36395e80u, 0xd470d831u, 0x72a851e2u, 0x10dfcb93u,
    0xaf174544u, 0x4d4ebef5u, 0xeb8638a6u, 0x89bdb257u, 0x27f52c08u, 0xc62ca5b9u, 0x64641f6au, 0x029b991bu,
    0xa0d312ccu, 0x3f0a8c7du, 0xdd42062eu, 0x7b797fdfu, 0x19b0f990u, 0xb7e87341u, 0x561fecf2u, 0xf45766a3u,
    0x928ee054u, 0x30c65a05u, 0xcefdd3b6u, 0x6d354d67u, 0x0b6cc718u, 0xa9a440c9u, 0x47dbba7au, 0xe613342bu,
    0x844aaddcu, 0x2282278du, 0xc0b9a13eu, 0x5ef11aefu, 0xfd2894a0u, 0x9b600e51u, 0x39978802u, 0xd7cf01b3u,
    0x76067b64u, 0x143df515u, 0xb2756ec6u, 0x50ace877u, 0xeee46228u, 0x8d1bdbd9u, 0x2b53558au, 0xc98acf3bu,
};

struct bshim_199_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_199_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_199_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_199_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_199_reset(struct bshim_199_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00180bc9u;
    return 0;
}

