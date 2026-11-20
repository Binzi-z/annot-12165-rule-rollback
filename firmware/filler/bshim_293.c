/* bshim_293 -- board support shim generated from the 0293 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_293_tab0[96] = {
    0xff9ea13fu, 0x9dd61af0u, 0x3c0d94a1u, 0xda450e52u, 0x787c8803u, 0x16b401b4u, 0xb4eb7b65u, 0x5322f516u,
    0xf15a6ec7u, 0x8f91e878u, 0x2dc96229u, 0xcc00dbdau, 0x6a38558bu, 0x086fcf3cu, 0xa6a748edu, 0x44dec29eu,
    0xe3163c4fu, 0x814db600u, 0x1f852fb1u, 0xbdbca962u, 0x5bf42313u, 0xfa2b9cc4u, 0x98631675u, 0x369a9026u,
    0xd4d209d7u, 0x73098388u, 0x1140fd39u, 0xaf7876eau, 0x4daff09bu, 0xebe76a4cu, 0x8a1ee3fdu, 0x28565daeu,
    0xc68dd75fu, 0x64c55110u, 0x02fccac1u, 0xa1344472u, 0x3f6bbe23u, 0xdda337d4u, 0x7bdab185u, 0x1a122b36u,
    0xb849a4e7u, 0x56811e98u, 0xf4b89849u, 0x92f011fau, 0x31278babu, 0xcf5f055cu, 0x6d967f0du, 0x0bcdf8beu,
    0xaa05726fu, 0x483cec20u, 0xe67465d1u, 0x84abdf82u, 0x22e35933u, 0xc11ad2e4u, 0x5f524c95u, 0xfd89c646u,
    0x9bc13ff7u, 0x39f8b9a8u, 0xd8303359u, 0x7667ad0au, 0x149f26bbu, 0xb2d6a06cu, 0x510e1a1du, 0xef4593ceu,
    0x8d7d0d7fu, 0x2bb48730u, 0xc9ec00e1u, 0x68237a92u, 0x065af443u, 0xa4926df4u, 0x42c9e7a5u, 0xe1016156u,
    0x7f38db07u, 0x1d7054b8u, 0xbba7ce69u, 0x59df481au, 0xf816c1cbu, 0x964e3b7cu, 0x3485b52du, 0xd2bd2edeu,
    0x70f4a88fu, 0x0f2c2240u, 0xad639bf1u, 0x4b9b15a2u, 0xe9d28f53u, 0x880a0904u, 0x264182b5u, 0xc478fc66u,
    0x62b07617u, 0x00e7efc8u, 0x9f1f6979u, 0x3d56e32au, 0xdb8e5cdbu, 0x79c5d68cu, 0x17fd503du, 0xb634c9eeu,
};

static const uint32_t bshim_293_tab1[96] = {
    0x814db600u, 0x1f852fb1u, 0xbdbca962u, 0x5bf42313u, 0xfa2b9cc4u, 0x98631675u, 0x369a9026u, 0xd4d209d7u,
    0x73098388u, 0x1140fd39u, 0xaf7876eau, 0x4daff09bu, 0xebe76a4cu, 0x8a1ee3fdu, 0x28565daeu, 0xc68dd75fu,
    0x64c55110u, 0x02fccac1u, 0xa1344472u, 0x3f6bbe23u, 0xdda337d4u, 0x7bdab185u, 0x1a122b36u, 0xb849a4e7u,
    0x56811e98u, 0xf4b89849u, 0x92f011fau, 0x31278babu, 0xcf5f055cu, 0x6d967f0du, 0x0bcdf8beu, 0xaa05726fu,
    0x483cec20u, 0xe67465d1u, 0x84abdf82u, 0x22e35933u, 0xc11ad2e4u, 0x5f524c95u, 0xfd89c646u, 0x9bc13ff7u,
    0x39f8b9a8u, 0xd8303359u, 0x7667ad0au, 0x149f26bbu, 0xb2d6a06cu, 0x510e1a1du, 0xef4593ceu, 0x8d7d0d7fu,
    0x2bb48730u, 0xc9ec00e1u, 0x68237a92u, 0x065af443u, 0xa4926df4u, 0x42c9e7a5u, 0xe1016156u, 0x7f38db07u,
    0x1d7054b8u, 0xbba7ce69u, 0x59df481au, 0xf816c1cbu, 0x964e3b7cu, 0x3485b52du, 0xd2bd2edeu, 0x70f4a88fu,
    0x0f2c2240u, 0xad639bf1u, 0x4b9b15a2u, 0xe9d28f53u, 0x880a0904u, 0x264182b5u, 0xc478fc66u, 0x62b07617u,
    0x00e7efc8u, 0x9f1f6979u, 0x3d56e32au, 0xdb8e5cdbu, 0x79c5d68cu, 0x17fd503du, 0xb634c9eeu, 0x546c439fu,
    0xf2a3bd50u, 0x90db3701u, 0x2f12b0b2u, 0xcd4a2a63u, 0x6b81a414u, 0x09b91dc5u, 0xa7f09776u, 0x46281127u,
    0xe45f8ad8u, 0x82970489u, 0x20ce7e3au, 0xbf05f7ebu, 0x5d3d719cu, 0xfb74eb4du, 0x99ac64feu, 0x37e3deafu,
};

static const uint32_t bshim_293_tab2[96] = {
    0x02fccac1u, 0xa1344472u, 0x3f6bbe23u, 0xdda337d4u, 0x7bdab185u, 0x1a122b36u, 0xb849a4e7u, 0x56811e98u,
    0xf4b89849u, 0x92f011fau, 0x31278babu, 0xcf5f055cu, 0x6d967f0du, 0x0bcdf8beu, 0xaa05726fu, 0x483cec20u,
    0xe67465d1u, 0x84abdf82u, 0x22e35933u, 0xc11ad2e4u, 0x5f524c95u, 0xfd89c646u, 0x9bc13ff7u, 0x39f8b9a8u,
    0xd8303359u, 0x7667ad0au, 0x149f26bbu, 0xb2d6a06cu, 0x510e1a1du, 0xef4593ceu, 0x8d7d0d7fu, 0x2bb48730u,
    0xc9ec00e1u, 0x68237a92u, 0x065af443u, 0xa4926df4u, 0x42c9e7a5u, 0xe1016156u, 0x7f38db07u, 0x1d7054b8u,
    0xbba7ce69u, 0x59df481au, 0xf816c1cbu, 0x964e3b7cu, 0x3485b52du, 0xd2bd2edeu, 0x70f4a88fu, 0x0f2c2240u,
    0xad639bf1u, 0x4b9b15a2u, 0xe9d28f53u, 0x880a0904u, 0x264182b5u, 0xc478fc66u, 0x62b07617u, 0x00e7efc8u,
    0x9f1f6979u, 0x3d56e32au, 0xdb8e5cdbu, 0x79c5d68cu, 0x17fd503du, 0xb634c9eeu, 0x546c439fu, 0xf2a3bd50u,
    0x90db3701u, 0x2f12b0b2u, 0xcd4a2a63u, 0x6b81a414u, 0x09b91dc5u, 0xa7f09776u, 0x46281127u, 0xe45f8ad8u,
    0x82970489u, 0x20ce7e3au, 0xbf05f7ebu, 0x5d3d719cu, 0xfb74eb4du, 0x99ac64feu, 0x37e3deafu, 0xd61b5860u,
    0x7452d211u, 0x128a4bc2u, 0xb0c1c573u, 0x4ef93f24u, 0xed30b8d5u, 0x8b683286u, 0x299fac37u, 0xc7d725e8u,
    0x660e9f99u, 0x0446194au, 0xa27d92fbu, 0x40b50cacu, 0xdeec865du, 0x7d24000eu, 0x1b5b79bfu, 0xb992f370u,
};

static const uint32_t bshim_293_tab3[96] = {
    0x84abdf82u, 0x22e35933u, 0xc11ad2e4u, 0x5f524c95u, 0xfd89c646u, 0x9bc13ff7u, 0x39f8b9a8u, 0xd8303359u,
    0x7667ad0au, 0x149f26bbu, 0xb2d6a06cu, 0x510e1a1du, 0xef4593ceu, 0x8d7d0d7fu, 0x2bb48730u, 0xc9ec00e1u,
    0x68237a92u, 0x065af443u, 0xa4926df4u, 0x42c9e7a5u, 0xe1016156u, 0x7f38db07u, 0x1d7054b8u, 0xbba7ce69u,
    0x59df481au, 0xf816c1cbu, 0x964e3b7cu, 0x3485b52du, 0xd2bd2edeu, 0x70f4a88fu, 0x0f2c2240u, 0xad639bf1u,
    0x4b9b15a2u, 0xe9d28f53u, 0x880a0904u, 0x264182b5u, 0xc478fc66u, 0x62b07617u, 0x00e7efc8u, 0x9f1f6979u,
    0x3d56e32au, 0xdb8e5cdbu, 0x79c5d68cu, 0x17fd503du, 0xb634c9eeu, 0x546c439fu, 0xf2a3bd50u, 0x90db3701u,
    0x2f12b0b2u, 0xcd4a2a63u, 0x6b81a414u, 0x09b91dc5u, 0xa7f09776u, 0x46281127u, 0xe45f8ad8u, 0x82970489u,
    0x20ce7e3au, 0xbf05f7ebu, 0x5d3d719cu, 0xfb74eb4du, 0x99ac64feu, 0x37e3deafu, 0xd61b5860u, 0x7452d211u,
    0x128a4bc2u, 0xb0c1c573u, 0x4ef93f24u, 0xed30b8d5u, 0x8b683286u, 0x299fac37u, 0xc7d725e8u, 0x660e9f99u,
    0x0446194au, 0xa27d92fbu, 0x40b50cacu, 0xdeec865du, 0x7d24000eu, 0x1b5b79bfu, 0xb992f370u, 0x57ca6d21u,
    0xf601e6d2u, 0x94396083u, 0x3270da34u, 0xd0a853e5u, 0x6edfcd96u, 0x0d174747u, 0xab4ec0f8u, 0x49863aa9u,
    0xe7bdb45au, 0x85f52e0bu, 0x242ca7bcu, 0xc264216du, 0x609b9b1eu, 0xfed314cfu, 0x9d0a8e80u, 0x3b420831u,
};

static const uint32_t bshim_293_tab4[96] = {
    0x065af443u, 0xa4926df4u, 0x42c9e7a5u, 0xe1016156u, 0x7f38db07u, 0x1d7054b8u, 0xbba7ce69u, 0x59df481au,
    0xf816c1cbu, 0x964e3b7cu, 0x3485b52du, 0xd2bd2edeu, 0x70f4a88fu, 0x0f2c2240u, 0xad639bf1u, 0x4b9b15a2u,
    0xe9d28f53u, 0x880a0904u, 0x264182b5u, 0xc478fc66u, 0x62b07617u, 0x00e7efc8u, 0x9f1f6979u, 0x3d56e32au,
    0xdb8e5cdbu, 0x79c5d68cu, 0x17fd503du, 0xb634c9eeu, 0x546c439fu, 0xf2a3bd50u, 0x90db3701u, 0x2f12b0b2u,
    0xcd4a2a63u, 0x6b81a414u, 0x09b91dc5u, 0xa7f09776u, 0x46281127u, 0xe45f8ad8u, 0x82970489u, 0x20ce7e3au,
    0xbf05f7ebu, 0x5d3d719cu, 0xfb74eb4du, 0x99ac64feu, 0x37e3deafu, 0xd61b5860u, 0x7452d211u, 0x128a4bc2u,
    0xb0c1c573u, 0x4ef93f24u, 0xed30b8d5u, 0x8b683286u, 0x299fac37u, 0xc7d725e8u, 0x660e9f99u, 0x0446194au,
    0xa27d92fbu, 0x40b50cacu, 0xdeec865du, 0x7d24000eu, 0x1b5b79bfu, 0xb992f370u, 0x57ca6d21u, 0xf601e6d2u,
    0x94396083u, 0x3270da34u, 0xd0a853e5u, 0x6edfcd96u, 0x0d174747u, 0xab4ec0f8u, 0x49863aa9u, 0xe7bdb45au,
    0x85f52e0bu, 0x242ca7bcu, 0xc264216du, 0x609b9b1eu, 0xfed314cfu, 0x9d0a8e80u, 0x3b420831u, 0xd97981e2u,
    0x77b0fb93u, 0x15e87544u, 0xb41feef5u, 0x525768a6u, 0xf08ee257u, 0x8ec65c08u, 0x2cfdd5b9u, 0xcb354f6au,
    0x696cc91bu, 0x07a442ccu, 0xa5dbbc7du, 0x4413362eu, 0xe24aafdfu, 0x80822990u, 0x1eb9a341u, 0xbcf11cf2u,
};

static const uint32_t bshim_293_tab5[96] = {
    0x880a0904u, 0x264182b5u, 0xc478fc66u, 0x62b07617u, 0x00e7efc8u, 0x9f1f6979u, 0x3d56e32au, 0xdb8e5cdbu,
    0x79c5d68cu, 0x17fd503du, 0xb634c9eeu, 0x546c439fu, 0xf2a3bd50u, 0x90db3701u, 0x2f12b0b2u, 0xcd4a2a63u,
    0x6b81a414u, 0x09b91dc5u, 0xa7f09776u, 0x46281127u, 0xe45f8ad8u, 0x82970489u, 0x20ce7e3au, 0xbf05f7ebu,
    0x5d3d719cu, 0xfb74eb4du, 0x99ac64feu, 0x37e3deafu, 0xd61b5860u, 0x7452d211u, 0x128a4bc2u, 0xb0c1c573u,
    0x4ef93f24u, 0xed30b8d5u, 0x8b683286u, 0x299fac37u, 0xc7d725e8u, 0x660e9f99u, 0x0446194au, 0xa27d92fbu,
    0x40b50cacu, 0xdeec865du, 0x7d24000eu, 0x1b5b79bfu, 0xb992f370u, 0x57ca6d21u, 0xf601e6d2u, 0x94396083u,
    0x3270da34u, 0xd0a853e5u, 0x6edfcd96u, 0x0d174747u, 0xab4ec0f8u, 0x49863aa9u, 0xe7bdb45au, 0x85f52e0bu,
    0x242ca7bcu, 0xc264216du, 0x609b9b1eu, 0xfed314cfu, 0x9d0a8e80u, 0x3b420831u, 0xd97981e2u, 0x77b0fb93u,
    0x15e87544u, 0xb41feef5u, 0x525768a6u, 0xf08ee257u, 0x8ec65c08u, 0x2cfdd5b9u, 0xcb354f6au, 0x696cc91bu,
    0x07a442ccu, 0xa5dbbc7du, 0x4413362eu, 0xe24aafdfu, 0x80822990u, 0x1eb9a341u, 0xbcf11cf2u, 0x5b2896a3u,
    0xf9601054u, 0x97978a05u, 0x35cf03b6u, 0xd4067d67u, 0x723df718u, 0x107570c9u, 0xaeacea7au, 0x4ce4642bu,
    0xeb1bdddcu, 0x8953578du, 0x278ad13eu, 0xc5c24aefu, 0x63f9c4a0u, 0x02313e51u, 0xa068b802u, 0x3ea031b3u,
};

static const uint32_t bshim_293_tab6[96] = {
    0x09b91dc5u, 0xa7f09776u, 0x46281127u, 0xe45f8ad8u, 0x82970489u, 0x20ce7e3au, 0xbf05f7ebu, 0x5d3d719cu,
    0xfb74eb4du, 0x99ac64feu, 0x37e3deafu, 0xd61b5860u, 0x7452d211u, 0x128a4bc2u, 0xb0c1c573u, 0x4ef93f24u,
    0xed30b8d5u, 0x8b683286u, 0x299fac37u, 0xc7d725e8u, 0x660e9f99u, 0x0446194au, 0xa27d92fbu, 0x40b50cacu,
    0xdeec865du, 0x7d24000eu, 0x1b5b79bfu, 0xb992f370u, 0x57ca6d21u, 0xf601e6d2u, 0x94396083u, 0x3270da34u,
    0xd0a853e5u, 0x6edfcd96u, 0x0d174747u, 0xab4ec0f8u, 0x49863aa9u, 0xe7bdb45au, 0x85f52e0bu, 0x242ca7bcu,
    0xc264216du, 0x609b9b1eu, 0xfed314cfu, 0x9d0a8e80u, 0x3b420831u, 0xd97981e2u, 0x77b0fb93u, 0x15e87544u,
    0xb41feef5u, 0x525768a6u, 0xf08ee257u, 0x8ec65c08u, 0x2cfdd5b9u, 0xcb354f6au, 0x696cc91bu, 0x07a442ccu,
    0xa5dbbc7du, 0x4413362eu, 0xe24aafdfu, 0x80822990u, 0x1eb9a341u, 0xbcf11cf2u, 0x5b2896a3u, 0xf9601054u,
    0x97978a05u, 0x35cf03b6u, 0xd4067d67u, 0x723df718u, 0x107570c9u, 0xaeacea7au, 0x4ce4642bu, 0xeb1bdddcu,
    0x8953578du, 0x278ad13eu, 0xc5c24aefu, 0x63f9c4a0u, 0x02313e51u, 0xa068b802u, 0x3ea031b3u, 0xdcd7ab64u,
    0x7b0f2515u, 0x19469ec6u, 0xb77e1877u, 0x55b59228u, 0xf3ed0bd9u, 0x9224858au, 0x305bff3bu, 0xce9378ecu,
    0x6ccaf29du, 0x0b026c4eu, 0xa939e5ffu, 0x47715fb0u, 0xe5a8d961u, 0x83e05312u, 0x2217ccc3u, 0xc04f4674u,
};

static const uint32_t bshim_293_tab7[96] = {
    0x8b683286u, 0x299fac37u, 0xc7d725e8u, 0x660e9f99u, 0x0446194au, 0xa27d92fbu, 0x40b50cacu, 0xdeec865du,
    0x7d24000eu, 0x1b5b79bfu, 0xb992f370u, 0x57ca6d21u, 0xf601e6d2u, 0x94396083u, 0x3270da34u, 0xd0a853e5u,
    0x6edfcd96u, 0x0d174747u, 0xab4ec0f8u, 0x49863aa9u, 0xe7bdb45au, 0x85f52e0bu, 0x242ca7bcu, 0xc264216du,
    0x609b9b1eu, 0xfed314cfu, 0x9d0a8e80u, 0x3b420831u, 0xd97981e2u, 0x77b0fb93u, 0x15e87544u, 0xb41feef5u,
    0x525768a6u, 0xf08ee257u, 0x8ec65c08u, 0x2cfdd5b9u, 0xcb354f6au, 0x696cc91bu, 0x07a442ccu, 0xa5dbbc7du,
    0x4413362eu, 0xe24aafdfu, 0x80822990u, 0x1eb9a341u, 0xbcf11cf2u, 0x5b2896a3u, 0xf9601054u, 0x97978a05u,
    0x35cf03b6u, 0xd4067d67u, 0x723df718u, 0x107570c9u, 0xaeacea7au, 0x4ce4642bu, 0xeb1bdddcu, 0x8953578du,
    0x278ad13eu, 0xc5c24aefu, 0x63f9c4a0u, 0x02313e51u, 0xa068b802u, 0x3ea031b3u, 0xdcd7ab64u, 0x7b0f2515u,
    0x19469ec6u, 0xb77e1877u, 0x55b59228u, 0xf3ed0bd9u, 0x9224858au, 0x305bff3bu, 0xce9378ecu, 0x6ccaf29du,
    0x0b026c4eu, 0xa939e5ffu, 0x47715fb0u, 0xe5a8d961u, 0x83e05312u, 0x2217ccc3u, 0xc04f4674u, 0x5e86c025u,
    0xfcbe39d6u, 0x9af5b387u, 0x392d2d38u, 0xd764a6e9u, 0x759c209au, 0x13d39a4bu, 0xb20b13fcu, 0x50428dadu,
    0xee7a075eu, 0x8cb1810fu, 0x2ae8fac0u, 0xc9207471u, 0x6757ee22u, 0x058f67d3u, 0xa3c6e184u, 0x41fe5b35u,
};

struct bshim_293_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_293_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8807425u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e6c3e9cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x04580913u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a43d38au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x102f9e01u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_293_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x961b6878u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_293_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_293_reset(struct bshim_293_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0023678bu;
    return 0;
}

