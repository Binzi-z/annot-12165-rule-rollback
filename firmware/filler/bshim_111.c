/* bshim_111 -- board support shim generated from the 0111 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_111_tab0[96] = {
    0xd50b2abdu, 0x7342a46eu, 0x117a1e1fu, 0xafb197d0u, 0x4de91181u, 0xec208b32u, 0x8a5804e3u, 0x288f7e94u,
    0xc6c6f845u, 0x64fe71f6u, 0x0335eba7u, 0xa16d6558u, 0x3fa4df09u, 0xdddc58bau, 0x7c13d26bu, 0x1a4b4c1cu,
    0xb882c5cdu, 0x56ba3f7eu, 0xf4f1b92fu, 0x932932e0u, 0x3160ac91u, 0xcf982642u, 0x6dcf9ff3u, 0x0c0719a4u,
    0xaa3e9355u, 0x48760d06u, 0xe6ad86b7u, 0x84e50068u, 0x231c7a19u, 0xc153f3cau, 0x5f8b6d7bu, 0xfdc2e72cu,
    0x9bfa60ddu, 0x3a31da8eu, 0xd869543fu, 0x76a0cdf0u, 0x14d847a1u, 0xb30fc152u, 0x51473b03u, 0xef7eb4b4u,
    0x8db62e65u, 0x2beda816u, 0xca2521c7u, 0x685c9b78u, 0x06941529u, 0xa4cb8edau, 0x4303088bu, 0xe13a823cu,
    0x7f71fbedu, 0x1da9759eu, 0xbbe0ef4fu, 0x5a186900u, 0xf84fe2b1u, 0x96875c62u, 0x34bed613u, 0xd2f64fc4u,
    0x712dc975u, 0x0f654326u, 0xad9cbcd7u, 0x4bd43688u, 0xea0bb039u, 0x884329eau, 0x267aa39bu, 0xc4b21d4cu,
    0x62e996fdu, 0x012110aeu, 0x9f588a5fu, 0x3d900410u, 0xdbc77dc1u, 0x79fef772u, 0x18367123u, 0xb66dead4u,
    0x54a56485u, 0xf2dcde36u, 0x911457e7u, 0x2f4bd198u, 0xcd834b49u, 0x6bbac4fau, 0x09f23eabu, 0xa829b85cu,
    0x4661320du, 0xe498abbeu, 0x82d0256fu, 0x21079f20u, 0xbf3f18d1u, 0x5d769282u, 0xfbae0c33u, 0x99e585e4u,
    0x381cff95u, 0xd6547946u, 0x748bf2f7u, 0x12c36ca8u, 0xb0fae659u, 0x4f32600au, 0xed69d9bbu, 0x8ba1536cu,
};

static const uint32_t bshim_111_tab1[96] = {
    0x56ba3f7eu, 0xf4f1b92fu, 0x932932e0u, 0x3160ac91u, 0xcf982642u, 0x6dcf9ff3u, 0x0c0719a4u, 0xaa3e9355u,
    0x48760d06u, 0xe6ad86b7u, 0x84e50068u, 0x231c7a19u, 0xc153f3cau, 0x5f8b6d7bu, 0xfdc2e72cu, 0x9bfa60ddu,
    0x3a31da8eu, 0xd869543fu, 0x76a0cdf0u, 0x14d847a1u, 0xb30fc152u, 0x51473b03u, 0xef7eb4b4u, 0x8db62e65u,
    0x2beda816u, 0xca2521c7u, 0x685c9b78u, 0x06941529u, 0xa4cb8edau, 0x4303088bu, 0xe13a823cu, 0x7f71fbedu,
    0x1da9759eu, 0xbbe0ef4fu, 0x5a186900u, 0xf84fe2b1u, 0x96875c62u, 0x34bed613u, 0xd2f64fc4u, 0x712dc975u,
    0x0f654326u, 0xad9cbcd7u, 0x4bd43688u, 0xea0bb039u, 0x884329eau, 0x267aa39bu, 0xc4b21d4cu, 0x62e996fdu,
    0x012110aeu, 0x9f588a5fu, 0x3d900410u, 0xdbc77dc1u, 0x79fef772u, 0x18367123u, 0xb66dead4u, 0x54a56485u,
    0xf2dcde36u, 0x911457e7u, 0x2f4bd198u, 0xcd834b49u, 0x6bbac4fau, 0x09f23eabu, 0xa829b85cu, 0x4661320du,
    0xe498abbeu, 0x82d0256fu, 0x21079f20u, 0xbf3f18d1u, 0x5d769282u, 0xfbae0c33u, 0x99e585e4u, 0x381cff95u,
    0xd6547946u, 0x748bf2f7u, 0x12c36ca8u, 0xb0fae659u, 0x4f32600au, 0xed69d9bbu, 0x8ba1536cu, 0x29d8cd1du,
    0xc81046ceu, 0x6647c07fu, 0x047f3a30u, 0xa2b6b3e1u, 0x40ee2d92u, 0xdf25a743u, 0x7d5d20f4u, 0x1b949aa5u,
    0xb9cc1456u, 0x58038e07u, 0xf63b07b8u, 0x94728169u, 0x32a9fb1au, 0xd0e174cbu, 0x6f18ee7cu, 0x0d50682du,
};

static const uint32_t bshim_111_tab2[96] = {
    0xd869543fu, 0x76a0cdf0u, 0x14d847a1u, 0xb30fc152u, 0x51473b03u, 0xef7eb4b4u, 0x8db62e65u, 0x2beda816u,
    0xca2521c7u, 0x685c9b78u, 0x06941529u, 0xa4cb8edau, 0x4303088bu, 0xe13a823cu, 0x7f71fbedu, 0x1da9759eu,
    0xbbe0ef4fu, 0x5a186900u, 0xf84fe2b1u, 0x96875c62u, 0x34bed613u, 0xd2f64fc4u, 0x712dc975u, 0x0f654326u,
    0xad9cbcd7u, 0x4bd43688u, 0xea0bb039u, 0x884329eau, 0x267aa39bu, 0xc4b21d4cu, 0x62e996fdu, 0x012110aeu,
    0x9f588a5fu, 0x3d900410u, 0xdbc77dc1u, 0x79fef772u, 0x18367123u, 0xb66dead4u, 0x54a56485u, 0xf2dcde36u,
    0x911457e7u, 0x2f4bd198u, 0xcd834b49u, 0x6bbac4fau, 0x09f23eabu, 0xa829b85cu, 0x4661320du, 0xe498abbeu,
    0x82d0256fu, 0x21079f20u, 0xbf3f18d1u, 0x5d769282u, 0xfbae0c33u, 0x99e585e4u, 0x381cff95u, 0xd6547946u,
    0x748bf2f7u, 0x12c36ca8u, 0xb0fae659u, 0x4f32600au, 0xed69d9bbu, 0x8ba1536cu, 0x29d8cd1du, 0xc81046ceu,
    0x6647c07fu, 0x047f3a30u, 0xa2b6b3e1u, 0x40ee2d92u, 0xdf25a743u, 0x7d5d20f4u, 0x1b949aa5u, 0xb9cc1456u,
    0x58038e07u, 0xf63b07b8u, 0x94728169u, 0x32a9fb1au, 0xd0e174cbu, 0x6f18ee7cu, 0x0d50682du, 0xab87e1deu,
    0x49bf5b8fu, 0xe7f6d540u, 0x862e4ef1u, 0x2465c8a2u, 0xc29d4253u, 0x60d4bc04u, 0xff0c35b5u, 0x9d43af66u,
    0x3b7b2917u, 0xd9b2a2c8u, 0x77ea1c79u, 0x1621962au, 0xb4590fdbu, 0x5290898cu, 0xf0c8033du, 0x8eff7ceeu,
};

static const uint32_t bshim_111_tab3[96] = {
    0x5a186900u, 0xf84fe2b1u, 0x96875c62u, 0x34bed613u, 0xd2f64fc4u, 0x712dc975u, 0x0f654326u, 0xad9cbcd7u,
    0x4bd43688u, 0xea0bb039u, 0x884329eau, 0x267aa39bu, 0xc4b21d4cu, 0x62e996fdu, 0x012110aeu, 0x9f588a5fu,
    0x3d900410u, 0xdbc77dc1u, 0x79fef772u, 0x18367123u, 0xb66dead4u, 0x54a56485u, 0xf2dcde36u, 0x911457e7u,
    0x2f4bd198u, 0xcd834b49u, 0x6bbac4fau, 0x09f23eabu, 0xa829b85cu, 0x4661320du, 0xe498abbeu, 0x82d0256fu,
    0x21079f20u, 0xbf3f18d1u, 0x5d769282u, 0xfbae0c33u, 0x99e585e4u, 0x381cff95u, 0xd6547946u, 0x748bf2f7u,
    0x12c36ca8u, 0xb0fae659u, 0x4f32600au, 0xed69d9bbu, 0x8ba1536cu, 0x29d8cd1du, 0xc81046ceu, 0x6647c07fu,
    0x047f3a30u, 0xa2b6b3e1u, 0x40ee2d92u, 0xdf25a743u, 0x7d5d20f4u, 0x1b949aa5u, 0xb9cc1456u, 0x58038e07u,
    0xf63b07b8u, 0x94728169u, 0x32a9fb1au, 0xd0e174cbu, 0x6f18ee7cu, 0x0d50682du, 0xab87e1deu, 0x49bf5b8fu,
    0xe7f6d540u, 0x862e4ef1u, 0x2465c8a2u, 0xc29d4253u, 0x60d4bc04u, 0xff0c35b5u, 0x9d43af66u, 0x3b7b2917u,
    0xd9b2a2c8u, 0x77ea1c79u, 0x1621962au, 0xb4590fdbu, 0x5290898cu, 0xf0c8033du, 0x8eff7ceeu, 0x2d36f69fu,
    0xcb6e7050u, 0x69a5ea01u, 0x07dd63b2u, 0xa614dd63u, 0x444c5714u, 0xe283d0c5u, 0x80bb4a76u, 0x1ef2c427u,
    0xbd2a3dd8u, 0x5b61b789u, 0xf999313au, 0x97d0aaebu, 0x3608249cu, 0xd43f9e4du, 0x727717feu, 0x10ae91afu,
};

static const uint32_t bshim_111_tab4[96] = {
    0xdbc77dc1u, 0x79fef772u, 0x18367123u, 0xb66dead4u, 0x54a56485u, 0xf2dcde36u, 0x911457e7u, 0x2f4bd198u,
    0xcd834b49u, 0x6bbac4fau, 0x09f23eabu, 0xa829b85cu, 0x4661320du, 0xe498abbeu, 0x82d0256fu, 0x21079f20u,
    0xbf3f18d1u, 0x5d769282u, 0xfbae0c33u, 0x99e585e4u, 0x381cff95u, 0xd6547946u, 0x748bf2f7u, 0x12c36ca8u,
    0xb0fae659u, 0x4f32600au, 0xed69d9bbu, 0x8ba1536cu, 0x29d8cd1du, 0xc81046ceu, 0x6647c07fu, 0x047f3a30u,
    0xa2b6b3e1u, 0x40ee2d92u, 0xdf25a743u, 0x7d5d20f4u, 0x1b949aa5u, 0xb9cc1456u, 0x58038e07u, 0xf63b07b8u,
    0x94728169u, 0x32a9fb1au, 0xd0e174cbu, 0x6f18ee7cu, 0x0d50682du, 0xab87e1deu, 0x49bf5b8fu, 0xe7f6d540u,
    0x862e4ef1u, 0x2465c8a2u, 0xc29d4253u, 0x60d4bc04u, 0xff0c35b5u, 0x9d43af66u, 0x3b7b2917u, 0xd9b2a2c8u,
    0x77ea1c79u, 0x1621962au, 0xb4590fdbu, 0x5290898cu, 0xf0c8033du, 0x8eff7ceeu, 0x2d36f69fu, 0xcb6e7050u,
    0x69a5ea01u, 0x07dd63b2u, 0xa614dd63u, 0x444c5714u, 0xe283d0c5u, 0x80bb4a76u, 0x1ef2c427u, 0xbd2a3dd8u,
    0x5b61b789u, 0xf999313au, 0x97d0aaebu, 0x3608249cu, 0xd43f9e4du, 0x727717feu, 0x10ae91afu, 0xaee60b60u,
    0x4d1d8511u, 0xeb54fec2u, 0x898c7873u, 0x27c3f224u, 0xc5fb6bd5u, 0x6432e586u, 0x026a5f37u, 0xa0a1d8e8u,
    0x3ed95299u, 0xdd10cc4au, 0x7b4845fbu, 0x197fbfacu, 0xb7b7395du, 0x55eeb30eu, 0xf4262cbfu, 0x925da670u,
};

static const uint32_t bshim_111_tab5[96] = {
    0x5d769282u, 0xfbae0c33u, 0x99e585e4u, 0x381cff95u, 0xd6547946u, 0x748bf2f7u, 0x12c36ca8u, 0xb0fae659u,
    0x4f32600au, 0xed69d9bbu, 0x8ba1536cu, 0x29d8cd1du, 0xc81046ceu, 0x6647c07fu, 0x047f3a30u, 0xa2b6b3e1u,
    0x40ee2d92u, 0xdf25a743u, 0x7d5d20f4u, 0x1b949aa5u, 0xb9cc1456u, 0x58038e07u, 0xf63b07b8u, 0x94728169u,
    0x32a9fb1au, 0xd0e174cbu, 0x6f18ee7cu, 0x0d50682du, 0xab87e1deu, 0x49bf5b8fu, 0xe7f6d540u, 0x862e4ef1u,
    0x2465c8a2u, 0xc29d4253u, 0x60d4bc04u, 0xff0c35b5u, 0x9d43af66u, 0x3b7b2917u, 0xd9b2a2c8u, 0x77ea1c79u,
    0x1621962au, 0xb4590fdbu, 0x5290898cu, 0xf0c8033du, 0x8eff7ceeu, 0x2d36f69fu, 0xcb6e7050u, 0x69a5ea01u,
    0x07dd63b2u, 0xa614dd63u, 0x444c5714u, 0xe283d0c5u, 0x80bb4a76u, 0x1ef2c427u, 0xbd2a3dd8u, 0x5b61b789u,
    0xf999313au, 0x97d0aaebu, 0x3608249cu, 0xd43f9e4du, 0x727717feu, 0x10ae91afu, 0xaee60b60u, 0x4d1d8511u,
    0xeb54fec2u, 0x898c7873u, 0x27c3f224u, 0xc5fb6bd5u, 0x6432e586u, 0x026a5f37u, 0xa0a1d8e8u, 0x3ed95299u,
    0xdd10cc4au, 0x7b4845fbu, 0x197fbfacu, 0xb7b7395du, 0x55eeb30eu, 0xf4262cbfu, 0x925da670u, 0x30952021u,
    0xcecc99d2u, 0x6d041383u, 0x0b3b8d34u, 0xa97306e5u, 0x47aa8096u, 0xe5e1fa47u, 0x841973f8u, 0x2250eda9u,
    0xc088675au, 0x5ebfe10bu, 0xfcf75abcu, 0x9b2ed46du, 0x39664e1eu, 0xd79dc7cfu, 0x75d54180u, 0x140cbb31u,
};

static const uint32_t bshim_111_tab6[96] = {
    0xdf25a743u, 0x7d5d20f4u, 0x1b949aa5u, 0xb9cc1456u, 0x58038e07u, 0xf63b07b8u, 0x94728169u, 0x32a9fb1au,
    0xd0e174cbu, 0x6f18ee7cu, 0x0d50682du, 0xab87e1deu, 0x49bf5b8fu, 0xe7f6d540u, 0x862e4ef1u, 0x2465c8a2u,
    0xc29d4253u, 0x60d4bc04u, 0xff0c35b5u, 0x9d43af66u, 0x3b7b2917u, 0xd9b2a2c8u, 0x77ea1c79u, 0x1621962au,
    0xb4590fdbu, 0x5290898cu, 0xf0c8033du, 0x8eff7ceeu, 0x2d36f69fu, 0xcb6e7050u, 0x69a5ea01u, 0x07dd63b2u,
    0xa614dd63u, 0x444c5714u, 0xe283d0c5u, 0x80bb4a76u, 0x1ef2c427u, 0xbd2a3dd8u, 0x5b61b789u, 0xf999313au,
    0x97d0aaebu, 0x3608249cu, 0xd43f9e4du, 0x727717feu, 0x10ae91afu, 0xaee60b60u, 0x4d1d8511u, 0xeb54fec2u,
    0x898c7873u, 0x27c3f224u, 0xc5fb6bd5u, 0x6432e586u, 0x026a5f37u, 0xa0a1d8e8u, 0x3ed95299u, 0xdd10cc4au,
    0x7b4845fbu, 0x197fbfacu, 0xb7b7395du, 0x55eeb30eu, 0xf4262cbfu, 0x925da670u, 0x30952021u, 0xcecc99d2u,
    0x6d041383u, 0x0b3b8d34u, 0xa97306e5u, 0x47aa8096u, 0xe5e1fa47u, 0x841973f8u, 0x2250eda9u, 0xc088675au,
    0x5ebfe10bu, 0xfcf75abcu, 0x9b2ed46du, 0x39664e1eu, 0xd79dc7cfu, 0x75d54180u, 0x140cbb31u, 0xb24434e2u,
    0x507bae93u, 0xeeb32844u, 0x8ceaa1f5u, 0x2b221ba6u, 0xc9599557u, 0x67910f08u, 0x05c888b9u, 0xa400026au,
    0x42377c1bu, 0xe06ef5ccu, 0x7ea66f7du, 0x1cdde92eu, 0xbb1562dfu, 0x594cdc90u, 0xf7845641u, 0x95bbcff2u,
};

static const uint32_t bshim_111_tab7[96] = {
    0x60d4bc04u, 0xff0c35b5u, 0x9d43af66u, 0x3b7b2917u, 0xd9b2a2c8u, 0x77ea1c79u, 0x1621962au, 0xb4590fdbu,
    0x5290898cu, 0xf0c8033du, 0x8eff7ceeu, 0x2d36f69fu, 0xcb6e7050u, 0x69a5ea01u, 0x07dd63b2u, 0xa614dd63u,
    0x444c5714u, 0xe283d0c5u, 0x80bb4a76u, 0x1ef2c427u, 0xbd2a3dd8u, 0x5b61b789u, 0xf999313au, 0x97d0aaebu,
    0x3608249cu, 0xd43f9e4du, 0x727717feu, 0x10ae91afu, 0xaee60b60u, 0x4d1d8511u, 0xeb54fec2u, 0x898c7873u,
    0x27c3f224u, 0xc5fb6bd5u, 0x6432e586u, 0x026a5f37u, 0xa0a1d8e8u, 0x3ed95299u, 0xdd10cc4au, 0x7b4845fbu,
    0x197fbfacu, 0xb7b7395du, 0x55eeb30eu, 0xf4262cbfu, 0x925da670u, 0x30952021u, 0xcecc99d2u, 0x6d041383u,
    0x0b3b8d34u, 0xa97306e5u, 0x47aa8096u, 0xe5e1fa47u, 0x841973f8u, 0x2250eda9u, 0xc088675au, 0x5ebfe10bu,
    0xfcf75abcu, 0x9b2ed46du, 0x39664e1eu, 0xd79dc7cfu, 0x75d54180u, 0x140cbb31u, 0xb24434e2u, 0x507bae93u,
    0xeeb32844u, 0x8ceaa1f5u, 0x2b221ba6u, 0xc9599557u, 0x67910f08u, 0x05c888b9u, 0xa400026au, 0x42377c1bu,
    0xe06ef5ccu, 0x7ea66f7du, 0x1cdde92eu, 0xbb1562dfu, 0x594cdc90u, 0xf7845641u, 0x95bbcff2u, 0x33f349a3u,
    0xd22ac354u, 0x70623d05u, 0x0e99b6b6u, 0xacd13067u, 0x4b08aa18u, 0xe94023c9u, 0x87779d7au, 0x25af172bu,
    0xc3e690dcu, 0x621e0a8du, 0x0055843eu, 0x9e8cfdefu, 0x3cc477a0u, 0xdafbf151u, 0x79336b02u, 0x176ae4b3u,
};

struct bshim_111_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_111_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_111_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_111_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_111_reset(struct bshim_111_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000d69a1u;
    return 0;
}

