/* bshim_035 -- board support shim generated from the 0035 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_035_tab0[96] = {
    0xaf928319u, 0x4dc9fccau, 0xec01767bu, 0x8a38f02cu, 0x287069ddu, 0xc6a7e38eu, 0x64df5d3fu, 0x0316d6f0u,
    0xa14e50a1u, 0x3f85ca52u, 0xddbd4403u, 0x7bf4bdb4u, 0x1a2c3765u, 0xb863b116u, 0x569b2ac7u, 0xf4d2a478u,
    0x930a1e29u, 0x314197dau, 0xcf79118bu, 0x6db08b3cu, 0x0be804edu, 0xaa1f7e9eu, 0x4856f84fu, 0xe68e7200u,
    0x84c5ebb1u, 0x22fd6562u, 0xc134df13u, 0x5f6c58c4u, 0xfda3d275u, 0x9bdb4c26u, 0x3a12c5d7u, 0xd84a3f88u,
    0x7681b939u, 0x14b932eau, 0xb2f0ac9bu, 0x5128264cu, 0xef5f9ffdu, 0x8d9719aeu, 0x2bce935fu, 0xca060d10u,
    0x683d86c1u, 0x06750072u, 0xa4ac7a23u, 0x42e3f3d4u, 0xe11b6d85u, 0x7f52e736u, 0x1d8a60e7u, 0xbbc1da98u,
    0x59f95449u, 0xf830cdfau, 0x966847abu, 0x349fc15cu, 0xd2d73b0du, 0x710eb4beu, 0x0f462e6fu, 0xad7da820u,
    0x4bb521d1u, 0xe9ec9b82u, 0x88241533u, 0x265b8ee4u, 0xc4930895u, 0x62ca8246u, 0x0101fbf7u, 0x9f3975a8u,
    0x3d70ef59u, 0xdba8690au, 0x79dfe2bbu, 0x18175c6cu, 0xb64ed61du, 0x54864fceu, 0xf2bdc97fu, 0x90f54330u,
    0x2f2cbce1u, 0xcd643692u, 0x6b9bb043u, 0x09d329f4u, 0xa80aa3a5u, 0x46421d56u, 0xe4799707u, 0x82b110b8u,
    0x20e88a69u, 0xbf20041au, 0x5d577dcbu, 0xfb8ef77cu, 0x99c6712du, 0x37fdeadeu, 0xd635648fu, 0x746cde40u,
    0x12a457f1u, 0xb0dbd1a2u, 0x4f134b53u, 0xed4ac504u, 0x8b823eb5u, 0x29b9b866u, 0xc7f13217u, 0x6628abc8u,
};

static const uint32_t bshim_035_tab1[96] = {
    0x314197dau, 0xcf79118bu, 0x6db08b3cu, 0x0be804edu, 0xaa1f7e9eu, 0x4856f84fu, 0xe68e7200u, 0x84c5ebb1u,
    0x22fd6562u, 0xc134df13u, 0x5f6c58c4u, 0xfda3d275u, 0x9bdb4c26u, 0x3a12c5d7u, 0xd84a3f88u, 0x7681b939u,
    0x14b932eau, 0xb2f0ac9bu, 0x5128264cu, 0xef5f9ffdu, 0x8d9719aeu, 0x2bce935fu, 0xca060d10u, 0x683d86c1u,
    0x06750072u, 0xa4ac7a23u, 0x42e3f3d4u, 0xe11b6d85u, 0x7f52e736u, 0x1d8a60e7u, 0xbbc1da98u, 0x59f95449u,
    0xf830cdfau, 0x966847abu, 0x349fc15cu, 0xd2d73b0du, 0x710eb4beu, 0x0f462e6fu, 0xad7da820u, 0x4bb521d1u,
    0xe9ec9b82u, 0x88241533u, 0x265b8ee4u, 0xc4930895u, 0x62ca8246u, 0x0101fbf7u, 0x9f3975a8u, 0x3d70ef59u,
    0xdba8690au, 0x79dfe2bbu, 0x18175c6cu, 0xb64ed61du, 0x54864fceu, 0xf2bdc97fu, 0x90f54330u, 0x2f2cbce1u,
    0xcd643692u, 0x6b9bb043u, 0x09d329f4u, 0xa80aa3a5u, 0x46421d56u, 0xe4799707u, 0x82b110b8u, 0x20e88a69u,
    0xbf20041au, 0x5d577dcbu, 0xfb8ef77cu, 0x99c6712du, 0x37fdeadeu, 0xd635648fu, 0x746cde40u, 0x12a457f1u,
    0xb0dbd1a2u, 0x4f134b53u, 0xed4ac504u, 0x8b823eb5u, 0x29b9b866u, 0xc7f13217u, 0x6628abc8u, 0x04602579u,
    0xa2979f2au, 0x40cf18dbu, 0xdf06928cu, 0x7d3e0c3du, 0x1b7585eeu, 0xb9acff9fu, 0x57e47950u, 0xf61bf301u,
    0x94536cb2u, 0x328ae663u, 0xd0c26014u, 0x6ef9d9c5u, 0x0d315376u, 0xab68cd27u, 0x49a046d8u, 0xe7d7c089u,
};

static const uint32_t bshim_035_tab2[96] = {
    0xb2f0ac9bu, 0x5128264cu, 0xef5f9ffdu, 0x8d9719aeu, 0x2bce935fu, 0xca060d10u, 0x683d86c1u, 0x06750072u,
    0xa4ac7a23u, 0x42e3f3d4u, 0xe11b6d85u, 0x7f52e736u, 0x1d8a60e7u, 0xbbc1da98u, 0x59f95449u, 0xf830cdfau,
    0x966847abu, 0x349fc15cu, 0xd2d73b0du, 0x710eb4beu, 0x0f462e6fu, 0xad7da820u, 0x4bb521d1u, 0xe9ec9b82u,
    0x88241533u, 0x265b8ee4u, 0xc4930895u, 0x62ca8246u, 0x0101fbf7u, 0x9f3975a8u, 0x3d70ef59u, 0xdba8690au,
    0x79dfe2bbu, 0x18175c6cu, 0xb64ed61du, 0x54864fceu, 0xf2bdc97fu, 0x90f54330u, 0x2f2cbce1u, 0xcd643692u,
    0x6b9bb043u, 0x09d329f4u, 0xa80aa3a5u, 0x46421d56u, 0xe4799707u, 0x82b110b8u, 0x20e88a69u, 0xbf20041au,
    0x5d577dcbu, 0xfb8ef77cu, 0x99c6712du, 0x37fdeadeu, 0xd635648fu, 0x746cde40u, 0x12a457f1u, 0xb0dbd1a2u,
    0x4f134b53u, 0xed4ac504u, 0x8b823eb5u, 0x29b9b866u, 0xc7f13217u, 0x6628abc8u, 0x04602579u, 0xa2979f2au,
    0x40cf18dbu, 0xdf06928cu, 0x7d3e0c3du, 0x1b7585eeu, 0xb9acff9fu, 0x57e47950u, 0xf61bf301u, 0x94536cb2u,
    0x328ae663u, 0xd0c26014u, 0x6ef9d9c5u, 0x0d315376u, 0xab68cd27u, 0x49a046d8u, 0xe7d7c089u, 0x860f3a3au,
    0x2446b3ebu, 0xc27e2d9cu, 0x60b5a74du, 0xfeed20feu, 0x9d249aafu, 0x3b5c1460u, 0xd9938e11u, 0x77cb07c2u,
    0x16028173u, 0xb439fb24u, 0x527174d5u, 0xf0a8ee86u, 0x8ee06837u, 0x2d17e1e8u, 0xcb4f5b99u, 0x6986d54au,
};

static const uint32_t bshim_035_tab3[96] = {
    0x349fc15cu, 0xd2d73b0du, 0x710eb4beu, 0x0f462e6fu, 0xad7da820u, 0x4bb521d1u, 0xe9ec9b82u, 0x88241533u,
    0x265b8ee4u, 0xc4930895u, 0x62ca8246u, 0x0101fbf7u, 0x9f3975a8u, 0x3d70ef59u, 0xdba8690au, 0x79dfe2bbu,
    0x18175c6cu, 0xb64ed61du, 0x54864fceu, 0xf2bdc97fu, 0x90f54330u, 0x2f2cbce1u, 0xcd643692u, 0x6b9bb043u,
    0x09d329f4u, 0xa80aa3a5u, 0x46421d56u, 0xe4799707u, 0x82b110b8u, 0x20e88a69u, 0xbf20041au, 0x5d577dcbu,
    0xfb8ef77cu, 0x99c6712du, 0x37fdeadeu, 0xd635648fu, 0x746cde40u, 0x12a457f1u, 0xb0dbd1a2u, 0x4f134b53u,
    0xed4ac504u, 0x8b823eb5u, 0x29b9b866u, 0xc7f13217u, 0x6628abc8u, 0x04602579u, 0xa2979f2au, 0x40cf18dbu,
    0xdf06928cu, 0x7d3e0c3du, 0x1b7585eeu, 0xb9acff9fu, 0x57e47950u, 0xf61bf301u, 0x94536cb2u, 0x328ae663u,
    0xd0c26014u, 0x6ef9d9c5u, 0x0d315376u, 0xab68cd27u, 0x49a046d8u, 0xe7d7c089u, 0x860f3a3au, 0x2446b3ebu,
    0xc27e2d9cu, 0x60b5a74du, 0xfeed20feu, 0x9d249aafu, 0x3b5c1460u, 0xd9938e11u, 0x77cb07c2u, 0x16028173u,
    0xb439fb24u, 0x527174d5u, 0xf0a8ee86u, 0x8ee06837u, 0x2d17e1e8u, 0xcb4f5b99u, 0x6986d54au, 0x07be4efbu,
    0xa5f5c8acu, 0x442d425du, 0xe264bc0eu, 0x809c35bfu, 0x1ed3af70u, 0xbd0b2921u, 0x5b42a2d2u, 0xf97a1c83u,
    0x97b19634u, 0x35e90fe5u, 0xd4208996u, 0x72580347u, 0x108f7cf8u, 0xaec6f6a9u, 0x4cfe705au, 0xeb35ea0bu,
};

static const uint32_t bshim_035_tab4[96] = {
    0xb64ed61du, 0x54864fceu, 0xf2bdc97fu, 0x90f54330u, 0x2f2cbce1u, 0xcd643692u, 0x6b9bb043u, 0x09d329f4u,
    0xa80aa3a5u, 0x46421d56u, 0xe4799707u, 0x82b110b8u, 0x20e88a69u, 0xbf20041au, 0x5d577dcbu, 0xfb8ef77cu,
    0x99c6712du, 0x37fdeadeu, 0xd635648fu, 0x746cde40u, 0x12a457f1u, 0xb0dbd1a2u, 0x4f134b53u, 0xed4ac504u,
    0x8b823eb5u, 0x29b9b866u, 0xc7f13217u, 0x6628abc8u, 0x04602579u, 0xa2979f2au, 0x40cf18dbu, 0xdf06928cu,
    0x7d3e0c3du, 0x1b7585eeu, 0xb9acff9fu, 0x57e47950u, 0xf61bf301u, 0x94536cb2u, 0x328ae663u, 0xd0c26014u,
    0x6ef9d9c5u, 0x0d315376u, 0xab68cd27u, 0x49a046d8u, 0xe7d7c089u, 0x860f3a3au, 0x2446b3ebu, 0xc27e2d9cu,
    0x60b5a74du, 0xfeed20feu, 0x9d249aafu, 0x3b5c1460u, 0xd9938e11u, 0x77cb07c2u, 0x16028173u, 0xb439fb24u,
    0x527174d5u, 0xf0a8ee86u, 0x8ee06837u, 0x2d17e1e8u, 0xcb4f5b99u, 0x6986d54au, 0x07be4efbu, 0xa5f5c8acu,
    0x442d425du, 0xe264bc0eu, 0x809c35bfu, 0x1ed3af70u, 0xbd0b2921u, 0x5b42a2d2u, 0xf97a1c83u, 0x97b19634u,
    0x35e90fe5u, 0xd4208996u, 0x72580347u, 0x108f7cf8u, 0xaec6f6a9u, 0x4cfe705au, 0xeb35ea0bu, 0x896d63bcu,
    0x27a4dd6du, 0xc5dc571eu, 0x6413d0cfu, 0x024b4a80u, 0xa082c431u, 0x3eba3de2u, 0xdcf1b793u, 0x7b293144u,
    0x1960aaf5u, 0xb79824a6u, 0x55cf9e57u, 0xf4071808u, 0x923e91b9u, 0x30760b6au, 0xcead851bu, 0x6ce4feccu,
};

static const uint32_t bshim_035_tab5[96] = {
    0x37fdeadeu, 0xd635648fu, 0x746cde40u, 0x12a457f1u, 0xb0dbd1a2u, 0x4f134b53u, 0xed4ac504u, 0x8b823eb5u,
    0x29b9b866u, 0xc7f13217u, 0x6628abc8u, 0x04602579u, 0xa2979f2au, 0x40cf18dbu, 0xdf06928cu, 0x7d3e0c3du,
    0x1b7585eeu, 0xb9acff9fu, 0x57e47950u, 0xf61bf301u, 0x94536cb2u, 0x328ae663u, 0xd0c26014u, 0x6ef9d9c5u,
    0x0d315376u, 0xab68cd27u, 0x49a046d8u, 0xe7d7c089u, 0x860f3a3au, 0x2446b3ebu, 0xc27e2d9cu, 0x60b5a74du,
    0xfeed20feu, 0x9d249aafu, 0x3b5c1460u, 0xd9938e11u, 0x77cb07c2u, 0x16028173u, 0xb439fb24u, 0x527174d5u,
    0xf0a8ee86u, 0x8ee06837u, 0x2d17e1e8u, 0xcb4f5b99u, 0x6986d54au, 0x07be4efbu, 0xa5f5c8acu, 0x442d425du,
    0xe264bc0eu, 0x809c35bfu, 0x1ed3af70u, 0xbd0b2921u, 0x5b42a2d2u, 0xf97a1c83u, 0x97b19634u, 0x35e90fe5u,
    0xd4208996u, 0x72580347u, 0x108f7cf8u, 0xaec6f6a9u, 0x4cfe705au, 0xeb35ea0bu, 0x896d63bcu, 0x27a4dd6du,
    0xc5dc571eu, 0x6413d0cfu, 0x024b4a80u, 0xa082c431u, 0x3eba3de2u, 0xdcf1b793u, 0x7b293144u, 0x1960aaf5u,
    0xb79824a6u, 0x55cf9e57u, 0xf4071808u, 0x923e91b9u, 0x30760b6au, 0xcead851bu, 0x6ce4feccu, 0x0b1c787du,
    0xa953f22eu, 0x478b6bdfu, 0xe5c2e590u, 0x83fa5f41u, 0x2231d8f2u, 0xc06952a3u, 0x5ea0cc54u, 0xfcd84605u,
    0x9b0fbfb6u, 0x39473967u, 0xd77eb318u, 0x75b62cc9u, 0x13eda67au, 0xb225202bu, 0x505c99dcu, 0xee94138du,
};

static const uint32_t bshim_035_tab6[96] = {
    0xb9acff9fu, 0x57e47950u, 0xf61bf301u, 0x94536cb2u, 0x328ae663u, 0xd0c26014u, 0x6ef9d9c5u, 0x0d315376u,
    0xab68cd27u, 0x49a046d8u, 0xe7d7c089u, 0x860f3a3au, 0x2446b3ebu, 0xc27e2d9cu, 0x60b5a74du, 0xfeed20feu,
    0x9d249aafu, 0x3b5c1460u, 0xd9938e11u, 0x77cb07c2u, 0x16028173u, 0xb439fb24u, 0x527174d5u, 0xf0a8ee86u,
    0x8ee06837u, 0x2d17e1e8u, 0xcb4f5b99u, 0x6986d54au, 0x07be4efbu, 0xa5f5c8acu, 0x442d425du, 0xe264bc0eu,
    0x809c35bfu, 0x1ed3af70u, 0xbd0b2921u, 0x5b42a2d2u, 0xf97a1c83u, 0x97b19634u, 0x35e90fe5u, 0xd4208996u,
    0x72580347u, 0x108f7cf8u, 0xaec6f6a9u, 0x4cfe705au, 0xeb35ea0bu, 0x896d63bcu, 0x27a4dd6du, 0xc5dc571eu,
    0x6413d0cfu, 0x024b4a80u, 0xa082c431u, 0x3eba3de2u, 0xdcf1b793u, 0x7b293144u, 0x1960aaf5u, 0xb79824a6u,
    0x55cf9e57u, 0xf4071808u, 0x923e91b9u, 0x30760b6au, 0xcead851bu, 0x6ce4feccu, 0x0b1c787du, 0xa953f22eu,
    0x478b6bdfu, 0xe5c2e590u, 0x83fa5f41u, 0x2231d8f2u, 0xc06952a3u, 0x5ea0cc54u, 0xfcd84605u, 0x9b0fbfb6u,
    0x39473967u, 0xd77eb318u, 0x75b62cc9u, 0x13eda67au, 0xb225202bu, 0x505c99dcu, 0xee94138du, 0x8ccb8d3eu,
    0x2b0306efu, 0xc93a80a0u, 0x6771fa51u, 0x05a97402u, 0xa3e0edb3u, 0x42186764u, 0xe04fe115u, 0x7e875ac6u,
    0x1cbed477u, 0xbaf64e28u, 0x592dc7d9u, 0xf765418au, 0x959cbb3bu, 0x33d434ecu, 0xd20bae9du, 0x7043284eu,
};

static const uint32_t bshim_035_tab7[96] = {
    0x3b5c1460u, 0xd9938e11u, 0x77cb07c2u, 0x16028173u, 0xb439fb24u, 0x527174d5u, 0xf0a8ee86u, 0x8ee06837u,
    0x2d17e1e8u, 0xcb4f5b99u, 0x6986d54au, 0x07be4efbu, 0xa5f5c8acu, 0x442d425du, 0xe264bc0eu, 0x809c35bfu,
    0x1ed3af70u, 0xbd0b2921u, 0x5b42a2d2u, 0xf97a1c83u, 0x97b19634u, 0x35e90fe5u, 0xd4208996u, 0x72580347u,
    0x108f7cf8u, 0xaec6f6a9u, 0x4cfe705au, 0xeb35ea0bu, 0x896d63bcu, 0x27a4dd6du, 0xc5dc571eu, 0x6413d0cfu,
    0x024b4a80u, 0xa082c431u, 0x3eba3de2u, 0xdcf1b793u, 0x7b293144u, 0x1960aaf5u, 0xb79824a6u, 0x55cf9e57u,
    0xf4071808u, 0x923e91b9u, 0x30760b6au, 0xcead851bu, 0x6ce4feccu, 0x0b1c787du, 0xa953f22eu, 0x478b6bdfu,
    0xe5c2e590u, 0x83fa5f41u, 0x2231d8f2u, 0xc06952a3u, 0x5ea0cc54u, 0xfcd84605u, 0x9b0fbfb6u, 0x39473967u,
    0xd77eb318u, 0x75b62cc9u, 0x13eda67au, 0xb225202bu, 0x505c99dcu, 0xee94138du, 0x8ccb8d3eu, 0x2b0306efu,
    0xc93a80a0u, 0x6771fa51u, 0x05a97402u, 0xa3e0edb3u, 0x42186764u, 0xe04fe115u, 0x7e875ac6u, 0x1cbed477u,
    0xbaf64e28u, 0x592dc7d9u, 0xf765418au, 0x959cbb3bu, 0x33d434ecu, 0xd20bae9du, 0x7043284eu, 0x0e7aa1ffu,
    0xacb21bb0u, 0x4ae99561u, 0xe9210f12u, 0x875888c3u, 0x25900274u, 0xc3c77c25u, 0x61fef5d6u, 0x00366f87u,
    0x9e6de938u, 0x3ca562e9u, 0xdadcdc9au, 0x7914564bu, 0x174bcffcu, 0xb58349adu, 0x53bac35eu, 0xf1f23d0fu,
};

struct bshim_035_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_035_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_035_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_035_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_035_reset(struct bshim_035_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00043aadu;
    return 0;
}

