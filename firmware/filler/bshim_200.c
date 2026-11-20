/* bshim_200 -- board support shim generated from the 0200 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_200_tab0[96] = {
    0x7d8e5ad8u, 0x1bc5d489u, 0xb9fd4e3au, 0x5834c7ebu, 0xf66c419cu, 0x94a3bb4du, 0x32db34feu, 0xd112aeafu,
    0x6f4a2860u, 0x0d81a211u, 0xabb91bc2u, 0x49f09573u, 0xe8280f24u, 0x865f88d5u, 0x24970286u, 0xc2ce7c37u,
    0x6105f5e8u, 0xff3d6f99u, 0x9d74e94au, 0x3bac62fbu, 0xd9e3dcacu, 0x781b565du, 0x1652d00eu, 0xb48a49bfu,
    0x52c1c370u, 0xf0f93d21u, 0x8f30b6d2u, 0x2d683083u, 0xcb9faa34u, 0x69d723e5u, 0x080e9d96u, 0xa6461747u,
    0x447d90f8u, 0xe2b50aa9u, 0x80ec845au, 0x1f23fe0bu, 0xbd5b77bcu, 0x5b92f16du, 0xf9ca6b1eu, 0x9801e4cfu,
    0x36395e80u, 0xd470d831u, 0x72a851e2u, 0x10dfcb93u, 0xaf174544u, 0x4d4ebef5u, 0xeb8638a6u, 0x89bdb257u,
    0x27f52c08u, 0xc62ca5b9u, 0x64641f6au, 0x029b991bu, 0xa0d312ccu, 0x3f0a8c7du, 0xdd42062eu, 0x7b797fdfu,
    0x19b0f990u, 0xb7e87341u, 0x561fecf2u, 0xf45766a3u, 0x928ee054u, 0x30c65a05u, 0xcefdd3b6u, 0x6d354d67u,
    0x0b6cc718u, 0xa9a440c9u, 0x47dbba7au, 0xe613342bu, 0x844aaddcu, 0x2282278du, 0xc0b9a13eu, 0x5ef11aefu,
    0xfd2894a0u, 0x9b600e51u, 0x39978802u, 0xd7cf01b3u, 0x76067b64u, 0x143df515u, 0xb2756ec6u, 0x50ace877u,
    0xeee46228u, 0x8d1bdbd9u, 0x2b53558au, 0xc98acf3bu, 0x67c248ecu, 0x05f9c29du, 0xa4313c4eu, 0x4268b5ffu,
    0xe0a02fb0u, 0x7ed7a961u, 0x1d0f2312u, 0xbb469cc3u, 0x597e1674u, 0xf7b59025u, 0x95ed09d6u, 0x34248387u,
};

static const uint32_t bshim_200_tab1[96] = {
    0xff3d6f99u, 0x9d74e94au, 0x3bac62fbu, 0xd9e3dcacu, 0x781b565du, 0x1652d00eu, 0xb48a49bfu, 0x52c1c370u,
    0xf0f93d21u, 0x8f30b6d2u, 0x2d683083u, 0xcb9faa34u, 0x69d723e5u, 0x080e9d96u, 0xa6461747u, 0x447d90f8u,
    0xe2b50aa9u, 0x80ec845au, 0x1f23fe0bu, 0xbd5b77bcu, 0x5b92f16du, 0xf9ca6b1eu, 0x9801e4cfu, 0x36395e80u,
    0xd470d831u, 0x72a851e2u, 0x10dfcb93u, 0xaf174544u, 0x4d4ebef5u, 0xeb8638a6u, 0x89bdb257u, 0x27f52c08u,
    0xc62ca5b9u, 0x64641f6au, 0x029b991bu, 0xa0d312ccu, 0x3f0a8c7du, 0xdd42062eu, 0x7b797fdfu, 0x19b0f990u,
    0xb7e87341u, 0x561fecf2u, 0xf45766a3u, 0x928ee054u, 0x30c65a05u, 0xcefdd3b6u, 0x6d354d67u, 0x0b6cc718u,
    0xa9a440c9u, 0x47dbba7au, 0xe613342bu, 0x844aaddcu, 0x2282278du, 0xc0b9a13eu, 0x5ef11aefu, 0xfd2894a0u,
    0x9b600e51u, 0x39978802u, 0xd7cf01b3u, 0x76067b64u, 0x143df515u, 0xb2756ec6u, 0x50ace877u, 0xeee46228u,
    0x8d1bdbd9u, 0x2b53558au, 0xc98acf3bu, 0x67c248ecu, 0x05f9c29du, 0xa4313c4eu, 0x4268b5ffu, 0xe0a02fb0u,
    0x7ed7a961u, 0x1d0f2312u, 0xbb469cc3u, 0x597e1674u, 0xf7b59025u, 0x95ed09d6u, 0x34248387u, 0xd25bfd38u,
    0x709376e9u, 0x0ecaf09au, 0xad026a4bu, 0x4b39e3fcu, 0xe9715dadu, 0x87a8d75eu, 0x25e0510fu, 0xc417cac0u,
    0x624f4471u, 0x0086be22u, 0x9ebe37d3u, 0x3cf5b184u, 0xdb2d2b35u, 0x7964a4e6u, 0x179c1e97u, 0xb5d39848u,
};

static const uint32_t bshim_200_tab2[96] = {
    0x80ec845au, 0x1f23fe0bu, 0xbd5b77bcu, 0x5b92f16du, 0xf9ca6b1eu, 0x9801e4cfu, 0x36395e80u, 0xd470d831u,
    0x72a851e2u, 0x10dfcb93u, 0xaf174544u, 0x4d4ebef5u, 0xeb8638a6u, 0x89bdb257u, 0x27f52c08u, 0xc62ca5b9u,
    0x64641f6au, 0x029b991bu, 0xa0d312ccu, 0x3f0a8c7du, 0xdd42062eu, 0x7b797fdfu, 0x19b0f990u, 0xb7e87341u,
    0x561fecf2u, 0xf45766a3u, 0x928ee054u, 0x30c65a05u, 0xcefdd3b6u, 0x6d354d67u, 0x0b6cc718u, 0xa9a440c9u,
    0x47dbba7au, 0xe613342bu, 0x844aaddcu, 0x2282278du, 0xc0b9a13eu, 0x5ef11aefu, 0xfd2894a0u, 0x9b600e51u,
    0x39978802u, 0xd7cf01b3u, 0x76067b64u, 0x143df515u, 0xb2756ec6u, 0x50ace877u, 0xeee46228u, 0x8d1bdbd9u,
    0x2b53558au, 0xc98acf3bu, 0x67c248ecu, 0x05f9c29du, 0xa4313c4eu, 0x4268b5ffu, 0xe0a02fb0u, 0x7ed7a961u,
    0x1d0f2312u, 0xbb469cc3u, 0x597e1674u, 0xf7b59025u, 0x95ed09d6u, 0x34248387u, 0xd25bfd38u, 0x709376e9u,
    0x0ecaf09au, 0xad026a4bu, 0x4b39e3fcu, 0xe9715dadu, 0x87a8d75eu, 0x25e0510fu, 0xc417cac0u, 0x624f4471u,
    0x0086be22u, 0x9ebe37d3u, 0x3cf5b184u, 0xdb2d2b35u, 0x7964a4e6u, 0x179c1e97u, 0xb5d39848u, 0x540b11f9u,
    0xf2428baau, 0x907a055bu, 0x2eb17f0cu, 0xcce8f8bdu, 0x6b20726eu, 0x0957ec1fu, 0xa78f65d0u, 0x45c6df81u,
    0xe3fe5932u, 0x8235d2e3u, 0x206d4c94u, 0xbea4c645u, 0x5cdc3ff6u, 0xfb13b9a7u, 0x994b3358u, 0x3782ad09u,
};

static const uint32_t bshim_200_tab3[96] = {
    0x029b991bu, 0xa0d312ccu, 0x3f0a8c7du, 0xdd42062eu, 0x7b797fdfu, 0x19b0f990u, 0xb7e87341u, 0x561fecf2u,
    0xf45766a3u, 0x928ee054u, 0x30c65a05u, 0xcefdd3b6u, 0x6d354d67u, 0x0b6cc718u, 0xa9a440c9u, 0x47dbba7au,
    0xe613342bu, 0x844aaddcu, 0x2282278du, 0xc0b9a13eu, 0x5ef11aefu, 0xfd2894a0u, 0x9b600e51u, 0x39978802u,
    0xd7cf01b3u, 0x76067b64u, 0x143df515u, 0xb2756ec6u, 0x50ace877u, 0xeee46228u, 0x8d1bdbd9u, 0x2b53558au,
    0xc98acf3bu, 0x67c248ecu, 0x05f9c29du, 0xa4313c4eu, 0x4268b5ffu, 0xe0a02fb0u, 0x7ed7a961u, 0x1d0f2312u,
    0xbb469cc3u, 0x597e1674u, 0xf7b59025u, 0x95ed09d6u, 0x34248387u, 0xd25bfd38u, 0x709376e9u, 0x0ecaf09au,
    0xad026a4bu, 0x4b39e3fcu, 0xe9715dadu, 0x87a8d75eu, 0x25e0510fu, 0xc417cac0u, 0x624f4471u, 0x0086be22u,
    0x9ebe37d3u, 0x3cf5b184u, 0xdb2d2b35u, 0x7964a4e6u, 0x179c1e97u, 0xb5d39848u, 0x540b11f9u, 0xf2428baau,
    0x907a055bu, 0x2eb17f0cu, 0xcce8f8bdu, 0x6b20726eu, 0x0957ec1fu, 0xa78f65d0u, 0x45c6df81u, 0xe3fe5932u,
    0x8235d2e3u, 0x206d4c94u, 0xbea4c645u, 0x5cdc3ff6u, 0xfb13b9a7u, 0x994b3358u, 0x3782ad09u, 0xd5ba26bau,
    0x73f1a06bu, 0x12291a1cu, 0xb06093cdu, 0x4e980d7eu, 0xeccf872fu, 0x8b0700e0u, 0x293e7a91u, 0xc775f442u,
    0x65ad6df3u, 0x03e4e7a4u, 0xa21c6155u, 0x4053db06u, 0xde8b54b7u, 0x7cc2ce68u, 0x1afa4819u, 0xb931c1cau,
};

static const uint32_t bshim_200_tab4[96] = {
    0x844aaddcu, 0x2282278du, 0xc0b9a13eu, 0x5ef11aefu, 0xfd2894a0u, 0x9b600e51u, 0x39978802u, 0xd7cf01b3u,
    0x76067b64u, 0x143df515u, 0xb2756ec6u, 0x50ace877u, 0xeee46228u, 0x8d1bdbd9u, 0x2b53558au, 0xc98acf3bu,
    0x67c248ecu, 0x05f9c29du, 0xa4313c4eu, 0x4268b5ffu, 0xe0a02fb0u, 0x7ed7a961u, 0x1d0f2312u, 0xbb469cc3u,
    0x597e1674u, 0xf7b59025u, 0x95ed09d6u, 0x34248387u, 0xd25bfd38u, 0x709376e9u, 0x0ecaf09au, 0xad026a4bu,
    0x4b39e3fcu, 0xe9715dadu, 0x87a8d75eu, 0x25e0510fu, 0xc417cac0u, 0x624f4471u, 0x0086be22u, 0x9ebe37d3u,
    0x3cf5b184u, 0xdb2d2b35u, 0x7964a4e6u, 0x179c1e97u, 0xb5d39848u, 0x540b11f9u, 0xf2428baau, 0x907a055bu,
    0x2eb17f0cu, 0xcce8f8bdu, 0x6b20726eu, 0x0957ec1fu, 0xa78f65d0u, 0x45c6df81u, 0xe3fe5932u, 0x8235d2e3u,
    0x206d4c94u, 0xbea4c645u, 0x5cdc3ff6u, 0xfb13b9a7u, 0x994b3358u, 0x3782ad09u, 0xd5ba26bau, 0x73f1a06bu,
    0x12291a1cu, 0xb06093cdu, 0x4e980d7eu, 0xeccf872fu, 0x8b0700e0u, 0x293e7a91u, 0xc775f442u, 0x65ad6df3u,
    0x03e4e7a4u, 0xa21c6155u, 0x4053db06u, 0xde8b54b7u, 0x7cc2ce68u, 0x1afa4819u, 0xb931c1cau, 0x57693b7bu,
    0xf5a0b52cu, 0x93d82eddu, 0x320fa88eu, 0xd047223fu, 0x6e7e9bf0u, 0x0cb615a1u, 0xaaed8f52u, 0x49250903u,
    0xe75c82b4u, 0x8593fc65u, 0x23cb7616u, 0xc202efc7u, 0x603a6978u, 0xfe71e329u, 0x9ca95cdau, 0x3ae0d68bu,
};

static const uint32_t bshim_200_tab5[96] = {
    0x05f9c29du, 0xa4313c4eu, 0x4268b5ffu, 0xe0a02fb0u, 0x7ed7a961u, 0x1d0f2312u, 0xbb469cc3u, 0x597e1674u,
    0xf7b59025u, 0x95ed09d6u, 0x34248387u, 0xd25bfd38u, 0x709376e9u, 0x0ecaf09au, 0xad026a4bu, 0x4b39e3fcu,
    0xe9715dadu, 0x87a8d75eu, 0x25e0510fu, 0xc417cac0u, 0x624f4471u, 0x0086be22u, 0x9ebe37d3u, 0x3cf5b184u,
    0xdb2d2b35u, 0x7964a4e6u, 0x179c1e97u, 0xb5d39848u, 0x540b11f9u, 0xf2428baau, 0x907a055bu, 0x2eb17f0cu,
    0xcce8f8bdu, 0x6b20726eu, 0x0957ec1fu, 0xa78f65d0u, 0x45c6df81u, 0xe3fe5932u, 0x8235d2e3u, 0x206d4c94u,
    0xbea4c645u, 0x5cdc3ff6u, 0xfb13b9a7u, 0x994b3358u, 0x3782ad09u, 0xd5ba26bau, 0x73f1a06bu, 0x12291a1cu,
    0xb06093cdu, 0x4e980d7eu, 0xeccf872fu, 0x8b0700e0u, 0x293e7a91u, 0xc775f442u, 0x65ad6df3u, 0x03e4e7a4u,
    0xa21c6155u, 0x4053db06u, 0xde8b54b7u, 0x7cc2ce68u, 0x1afa4819u, 0xb931c1cau, 0x57693b7bu, 0xf5a0b52cu,
    0x93d82eddu, 0x320fa88eu, 0xd047223fu, 0x6e7e9bf0u, 0x0cb615a1u, 0xaaed8f52u, 0x49250903u, 0xe75c82b4u,
    0x8593fc65u, 0x23cb7616u, 0xc202efc7u, 0x603a6978u, 0xfe71e329u, 0x9ca95cdau, 0x3ae0d68bu, 0xd918503cu,
    0x774fc9edu, 0x1587439eu, 0xb3bebd4fu, 0x51f63700u, 0xf02db0b1u, 0x8e652a62u, 0x2c9ca413u, 0xcad41dc4u,
    0x690b9775u, 0x07431126u, 0xa57a8ad7u, 0x43b20488u, 0xe1e97e39u, 0x8020f7eau, 0x1e58719bu, 0xbc8feb4cu,
};

static const uint32_t bshim_200_tab6[96] = {
    0x87a8d75eu, 0x25e0510fu, 0xc417cac0u, 0x624f4471u, 0x0086be22u, 0x9ebe37d3u, 0x3cf5b184u, 0xdb2d2b35u,
    0x7964a4e6u, 0x179c1e97u, 0xb5d39848u, 0x540b11f9u, 0xf2428baau, 0x907a055bu, 0x2eb17f0cu, 0xcce8f8bdu,
    0x6b20726eu, 0x0957ec1fu, 0xa78f65d0u, 0x45c6df81u, 0xe3fe5932u, 0x8235d2e3u, 0x206d4c94u, 0xbea4c645u,
    0x5cdc3ff6u, 0xfb13b9a7u, 0x994b3358u, 0x3782ad09u, 0xd5ba26bau, 0x73f1a06bu, 0x12291a1cu, 0xb06093cdu,
    0x4e980d7eu, 0xeccf872fu, 0x8b0700e0u, 0x293e7a91u, 0xc775f442u, 0x65ad6df3u, 0x03e4e7a4u, 0xa21c6155u,
    0x4053db06u, 0xde8b54b7u, 0x7cc2ce68u, 0x1afa4819u, 0xb931c1cau, 0x57693b7bu, 0xf5a0b52cu, 0x93d82eddu,
    0x320fa88eu, 0xd047223fu, 0x6e7e9bf0u, 0x0cb615a1u, 0xaaed8f52u, 0x49250903u, 0xe75c82b4u, 0x8593fc65u,
    0x23cb7616u, 0xc202efc7u, 0x603a6978u, 0xfe71e329u, 0x9ca95cdau, 0x3ae0d68bu, 0xd918503cu, 0x774fc9edu,
    0x1587439eu, 0xb3bebd4fu, 0x51f63700u, 0xf02db0b1u, 0x8e652a62u, 0x2c9ca413u, 0xcad41dc4u, 0x690b9775u,
    0x07431126u, 0xa57a8ad7u, 0x43b20488u, 0xe1e97e39u, 0x8020f7eau, 0x1e58719bu, 0xbc8feb4cu, 0x5ac764fdu,
    0xf8fedeaeu, 0x9736585fu, 0x356dd210u, 0xd3a54bc1u, 0x71dcc572u, 0x10143f23u, 0xae4bb8d4u, 0x4c833285u,
    0xeabaac36u, 0x88f225e7u, 0x27299f98u, 0xc5611949u, 0x639892fau, 0x01d00cabu, 0xa007865cu, 0x3e3f000du,
};

static const uint32_t bshim_200_tab7[96] = {
    0x0957ec1fu, 0xa78f65d0u, 0x45c6df81u, 0xe3fe5932u, 0x8235d2e3u, 0x206d4c94u, 0xbea4c645u, 0x5cdc3ff6u,
    0xfb13b9a7u, 0x994b3358u, 0x3782ad09u, 0xd5ba26bau, 0x73f1a06bu, 0x12291a1cu, 0xb06093cdu, 0x4e980d7eu,
    0xeccf872fu, 0x8b0700e0u, 0x293e7a91u, 0xc775f442u, 0x65ad6df3u, 0x03e4e7a4u, 0xa21c6155u, 0x4053db06u,
    0xde8b54b7u, 0x7cc2ce68u, 0x1afa4819u, 0xb931c1cau, 0x57693b7bu, 0xf5a0b52cu, 0x93d82eddu, 0x320fa88eu,
    0xd047223fu, 0x6e7e9bf0u, 0x0cb615a1u, 0xaaed8f52u, 0x49250903u, 0xe75c82b4u, 0x8593fc65u, 0x23cb7616u,
    0xc202efc7u, 0x603a6978u, 0xfe71e329u, 0x9ca95cdau, 0x3ae0d68bu, 0xd918503cu, 0x774fc9edu, 0x1587439eu,
    0xb3bebd4fu, 0x51f63700u, 0xf02db0b1u, 0x8e652a62u, 0x2c9ca413u, 0xcad41dc4u, 0x690b9775u, 0x07431126u,
    0xa57a8ad7u, 0x43b20488u, 0xe1e97e39u, 0x8020f7eau, 0x1e58719bu, 0xbc8feb4cu, 0x5ac764fdu, 0xf8fedeaeu,
    0x9736585fu, 0x356dd210u, 0xd3a54bc1u, 0x71dcc572u, 0x10143f23u, 0xae4bb8d4u, 0x4c833285u, 0xeabaac36u,
    0x88f225e7u, 0x27299f98u, 0xc5611949u, 0x639892fau, 0x01d00cabu, 0xa007865cu, 0x3e3f000du, 0xdc7679beu,
    0x7aadf36fu, 0x18e56d20u, 0xb71ce6d1u, 0x55546082u, 0xf38bda33u, 0x91c353e4u, 0x2ffacd95u, 0xce324746u,
    0x6c69c0f7u, 0x0aa13aa8u, 0xa8d8b459u, 0x47102e0au, 0xe547a7bbu, 0x837f216cu, 0x21b69b1du, 0xbfee14ceu,
};

struct bshim_200_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_200_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_200_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_200_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_200_reset(struct bshim_200_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00182ab8u;
    return 0;
}

