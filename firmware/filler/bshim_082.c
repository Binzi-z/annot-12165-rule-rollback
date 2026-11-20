/* bshim_082 -- board support shim generated from the 0082 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_082_tab0[96] = {
    0xebcc4916u, 0x8a03c2c7u, 0x283b3c78u, 0xc672b629u, 0x64aa2fdau, 0x02e1a98bu, 0xa119233cu, 0x3f509cedu,
    0xdd88169eu, 0x7bbf904fu, 0x19f70a00u, 0xb82e83b1u, 0x5665fd62u, 0xf49d7713u, 0x92d4f0c4u, 0x310c6a75u,
    0xcf43e426u, 0x6d7b5dd7u, 0x0bb2d788u, 0xa9ea5139u, 0x4821caeau, 0xe659449bu, 0x8490be4cu, 0x22c837fdu,
    0xc0ffb1aeu, 0x5f372b5fu, 0xfd6ea510u, 0x9ba61ec1u, 0x39dd9872u, 0xd8151223u, 0x764c8bd4u, 0x14840585u,
    0xb2bb7f36u, 0x50f2f8e7u, 0xef2a7298u, 0x8d61ec49u, 0x2b9965fau, 0xc9d0dfabu, 0x6808595cu, 0x063fd30du,
    0xa4774cbeu, 0x42aec66fu, 0xe0e64020u, 0x7f1db9d1u, 0x1d553382u, 0xbb8cad33u, 0x59c426e4u, 0xf7fba095u,
    0x96331a46u, 0x346a93f7u, 0xd2a20da8u, 0x70d98759u, 0x0f11010au, 0xad487abbu, 0x4b7ff46cu, 0xe9b76e1du,
    0x87eee7ceu, 0x2626617fu, 0xc45ddb30u, 0x629554e1u, 0x00ccce92u, 0x9f044843u, 0x3d3bc1f4u, 0xdb733ba5u,
    0x79aab556u, 0x17e22f07u, 0xb619a8b8u, 0x54512269u, 0xf2889c1au, 0x90c015cbu, 0x2ef78f7cu, 0xcd2f092du,
    0x6b6682deu, 0x099dfc8fu, 0xa7d57640u, 0x460ceff1u, 0xe44469a2u, 0x827be353u, 0x20b35d04u, 0xbeead6b5u,
    0x5d225066u, 0xfb59ca17u, 0x999143c8u, 0x37c8bd79u, 0xd600372au, 0x7437b0dbu, 0x126f2a8cu, 0xb0a6a43du,
    0x4ede1deeu, 0xed15979fu, 0x8b4d1150u, 0x29848b01u, 0xc7bc04b2u, 0x65f37e63u, 0x042af814u, 0xa26271c5u,
};

static const uint32_t bshim_082_tab1[96] = {
    0x6d7b5dd7u, 0x0bb2d788u, 0xa9ea5139u, 0x4821caeau, 0xe659449bu, 0x8490be4cu, 0x22c837fdu, 0xc0ffb1aeu,
    0x5f372b5fu, 0xfd6ea510u, 0x9ba61ec1u, 0x39dd9872u, 0xd8151223u, 0x764c8bd4u, 0x14840585u, 0xb2bb7f36u,
    0x50f2f8e7u, 0xef2a7298u, 0x8d61ec49u, 0x2b9965fau, 0xc9d0dfabu, 0x6808595cu, 0x063fd30du, 0xa4774cbeu,
    0x42aec66fu, 0xe0e64020u, 0x7f1db9d1u, 0x1d553382u, 0xbb8cad33u, 0x59c426e4u, 0xf7fba095u, 0x96331a46u,
    0x346a93f7u, 0xd2a20da8u, 0x70d98759u, 0x0f11010au, 0xad487abbu, 0x4b7ff46cu, 0xe9b76e1du, 0x87eee7ceu,
    0x2626617fu, 0xc45ddb30u, 0x629554e1u, 0x00ccce92u, 0x9f044843u, 0x3d3bc1f4u, 0xdb733ba5u, 0x79aab556u,
    0x17e22f07u, 0xb619a8b8u, 0x54512269u, 0xf2889c1au, 0x90c015cbu, 0x2ef78f7cu, 0xcd2f092du, 0x6b6682deu,
    0x099dfc8fu, 0xa7d57640u, 0x460ceff1u, 0xe44469a2u, 0x827be353u, 0x20b35d04u, 0xbeead6b5u, 0x5d225066u,
    0xfb59ca17u, 0x999143c8u, 0x37c8bd79u, 0xd600372au, 0x7437b0dbu, 0x126f2a8cu, 0xb0a6a43du, 0x4ede1deeu,
    0xed15979fu, 0x8b4d1150u, 0x29848b01u, 0xc7bc04b2u, 0x65f37e63u, 0x042af814u, 0xa26271c5u, 0x4099eb76u,
    0xded16527u, 0x7d08ded8u, 0x1b405889u, 0xb977d23au, 0x57af4bebu, 0xf5e6c59cu, 0x941e3f4du, 0x3255b8feu,
    0xd08d32afu, 0x6ec4ac60u, 0x0cfc2611u, 0xab339fc2u, 0x496b1973u, 0xe7a29324u, 0x85da0cd5u, 0x24118686u,
};

static const uint32_t bshim_082_tab2[96] = {
    0xef2a7298u, 0x8d61ec49u, 0x2b9965fau, 0xc9d0dfabu, 0x6808595cu, 0x063fd30du, 0xa4774cbeu, 0x42aec66fu,
    0xe0e64020u, 0x7f1db9d1u, 0x1d553382u, 0xbb8cad33u, 0x59c426e4u, 0xf7fba095u, 0x96331a46u, 0x346a93f7u,
    0xd2a20da8u, 0x70d98759u, 0x0f11010au, 0xad487abbu, 0x4b7ff46cu, 0xe9b76e1du, 0x87eee7ceu, 0x2626617fu,
    0xc45ddb30u, 0x629554e1u, 0x00ccce92u, 0x9f044843u, 0x3d3bc1f4u, 0xdb733ba5u, 0x79aab556u, 0x17e22f07u,
    0xb619a8b8u, 0x54512269u, 0xf2889c1au, 0x90c015cbu, 0x2ef78f7cu, 0xcd2f092du, 0x6b6682deu, 0x099dfc8fu,
    0xa7d57640u, 0x460ceff1u, 0xe44469a2u, 0x827be353u, 0x20b35d04u, 0xbeead6b5u, 0x5d225066u, 0xfb59ca17u,
    0x999143c8u, 0x37c8bd79u, 0xd600372au, 0x7437b0dbu, 0x126f2a8cu, 0xb0a6a43du, 0x4ede1deeu, 0xed15979fu,
    0x8b4d1150u, 0x29848b01u, 0xc7bc04b2u, 0x65f37e63u, 0x042af814u, 0xa26271c5u, 0x4099eb76u, 0xded16527u,
    0x7d08ded8u, 0x1b405889u, 0xb977d23au, 0x57af4bebu, 0xf5e6c59cu, 0x941e3f4du, 0x3255b8feu, 0xd08d32afu,
    0x6ec4ac60u, 0x0cfc2611u, 0xab339fc2u, 0x496b1973u, 0xe7a29324u, 0x85da0cd5u, 0x24118686u, 0xc2490037u,
    0x608079e8u, 0xfeb7f399u, 0x9cef6d4au, 0x3b26e6fbu, 0xd95e60acu, 0x7795da5du, 0x15cd540eu, 0xb404cdbfu,
    0x523c4770u, 0xf073c121u, 0x8eab3ad2u, 0x2ce2b483u, 0xcb1a2e34u, 0x6951a7e5u, 0x07892196u, 0xa5c09b47u,
};

static const uint32_t bshim_082_tab3[96] = {
    0x70d98759u, 0x0f11010au, 0xad487abbu, 0x4b7ff46cu, 0xe9b76e1du, 0x87eee7ceu, 0x2626617fu, 0xc45ddb30u,
    0x629554e1u, 0x00ccce92u, 0x9f044843u, 0x3d3bc1f4u, 0xdb733ba5u, 0x79aab556u, 0x17e22f07u, 0xb619a8b8u,
    0x54512269u, 0xf2889c1au, 0x90c015cbu, 0x2ef78f7cu, 0xcd2f092du, 0x6b6682deu, 0x099dfc8fu, 0xa7d57640u,
    0x460ceff1u, 0xe44469a2u, 0x827be353u, 0x20b35d04u, 0xbeead6b5u, 0x5d225066u, 0xfb59ca17u, 0x999143c8u,
    0x37c8bd79u, 0xd600372au, 0x7437b0dbu, 0x126f2a8cu, 0xb0a6a43du, 0x4ede1deeu, 0xed15979fu, 0x8b4d1150u,
    0x29848b01u, 0xc7bc04b2u, 0x65f37e63u, 0x042af814u, 0xa26271c5u, 0x4099eb76u, 0xded16527u, 0x7d08ded8u,
    0x1b405889u, 0xb977d23au, 0x57af4bebu, 0xf5e6c59cu, 0x941e3f4du, 0x3255b8feu, 0xd08d32afu, 0x6ec4ac60u,
    0x0cfc2611u, 0xab339fc2u, 0x496b1973u, 0xe7a29324u, 0x85da0cd5u, 0x24118686u, 0xc2490037u, 0x608079e8u,
    0xfeb7f399u, 0x9cef6d4au, 0x3b26e6fbu, 0xd95e60acu, 0x7795da5du, 0x15cd540eu, 0xb404cdbfu, 0x523c4770u,
    0xf073c121u, 0x8eab3ad2u, 0x2ce2b483u, 0xcb1a2e34u, 0x6951a7e5u, 0x07892196u, 0xa5c09b47u, 0x43f814f8u,
    0xe22f8ea9u, 0x8067085au, 0x1e9e820bu, 0xbcd5fbbcu, 0x5b0d756du, 0xf944ef1eu, 0x977c68cfu, 0x35b3e280u,
    0xd3eb5c31u, 0x7222d5e2u, 0x105a4f93u, 0xae91c944u, 0x4cc942f5u, 0xeb00bca6u, 0x89383657u, 0x276fb008u,
};

static const uint32_t bshim_082_tab4[96] = {
    0xf2889c1au, 0x90c015cbu, 0x2ef78f7cu, 0xcd2f092du, 0x6b6682deu, 0x099dfc8fu, 0xa7d57640u, 0x460ceff1u,
    0xe44469a2u, 0x827be353u, 0x20b35d04u, 0xbeead6b5u, 0x5d225066u, 0xfb59ca17u, 0x999143c8u, 0x37c8bd79u,
    0xd600372au, 0x7437b0dbu, 0x126f2a8cu, 0xb0a6a43du, 0x4ede1deeu, 0xed15979fu, 0x8b4d1150u, 0x29848b01u,
    0xc7bc04b2u, 0x65f37e63u, 0x042af814u, 0xa26271c5u, 0x4099eb76u, 0xded16527u, 0x7d08ded8u, 0x1b405889u,
    0xb977d23au, 0x57af4bebu, 0xf5e6c59cu, 0x941e3f4du, 0x3255b8feu, 0xd08d32afu, 0x6ec4ac60u, 0x0cfc2611u,
    0xab339fc2u, 0x496b1973u, 0xe7a29324u, 0x85da0cd5u, 0x24118686u, 0xc2490037u, 0x608079e8u, 0xfeb7f399u,
    0x9cef6d4au, 0x3b26e6fbu, 0xd95e60acu, 0x7795da5du, 0x15cd540eu, 0xb404cdbfu, 0x523c4770u, 0xf073c121u,
    0x8eab3ad2u, 0x2ce2b483u, 0xcb1a2e34u, 0x6951a7e5u, 0x07892196u, 0xa5c09b47u, 0x43f814f8u, 0xe22f8ea9u,
    0x8067085au, 0x1e9e820bu, 0xbcd5fbbcu, 0x5b0d756du, 0xf944ef1eu, 0x977c68cfu, 0x35b3e280u, 0xd3eb5c31u,
    0x7222d5e2u, 0x105a4f93u, 0xae91c944u, 0x4cc942f5u, 0xeb00bca6u, 0x89383657u, 0x276fb008u, 0xc5a729b9u,
    0x63dea36au, 0x02161d1bu, 0xa04d96ccu, 0x3e85107du, 0xdcbc8a2eu, 0x7af403dfu, 0x192b7d90u, 0xb762f741u,
    0x559a70f2u, 0xf3d1eaa3u, 0x92096454u, 0x3040de05u, 0xce7857b6u, 0x6cafd167u, 0x0ae74b18u, 0xa91ec4c9u,
};

static const uint32_t bshim_082_tab5[96] = {
    0x7437b0dbu, 0x126f2a8cu, 0xb0a6a43du, 0x4ede1deeu, 0xed15979fu, 0x8b4d1150u, 0x29848b01u, 0xc7bc04b2u,
    0x65f37e63u, 0x042af814u, 0xa26271c5u, 0x4099eb76u, 0xded16527u, 0x7d08ded8u, 0x1b405889u, 0xb977d23au,
    0x57af4bebu, 0xf5e6c59cu, 0x941e3f4du, 0x3255b8feu, 0xd08d32afu, 0x6ec4ac60u, 0x0cfc2611u, 0xab339fc2u,
    0x496b1973u, 0xe7a29324u, 0x85da0cd5u, 0x24118686u, 0xc2490037u, 0x608079e8u, 0xfeb7f399u, 0x9cef6d4au,
    0x3b26e6fbu, 0xd95e60acu, 0x7795da5du, 0x15cd540eu, 0xb404cdbfu, 0x523c4770u, 0xf073c121u, 0x8eab3ad2u,
    0x2ce2b483u, 0xcb1a2e34u, 0x6951a7e5u, 0x07892196u, 0xa5c09b47u, 0x43f814f8u, 0xe22f8ea9u, 0x8067085au,
    0x1e9e820bu, 0xbcd5fbbcu, 0x5b0d756du, 0xf944ef1eu, 0x977c68cfu, 0x35b3e280u, 0xd3eb5c31u, 0x7222d5e2u,
    0x105a4f93u, 0xae91c944u, 0x4cc942f5u, 0xeb00bca6u, 0x89383657u, 0x276fb008u, 0xc5a729b9u, 0x63dea36au,
    0x02161d1bu, 0xa04d96ccu, 0x3e85107du, 0xdcbc8a2eu, 0x7af403dfu, 0x192b7d90u, 0xb762f741u, 0x559a70f2u,
    0xf3d1eaa3u, 0x92096454u, 0x3040de05u, 0xce7857b6u, 0x6cafd167u, 0x0ae74b18u, 0xa91ec4c9u, 0x47563e7au,
    0xe58db82bu, 0x83c531dcu, 0x21fcab8du, 0xc034253eu, 0x5e6b9eefu, 0xfca318a0u, 0x9ada9251u, 0x39120c02u,
    0xd74985b3u, 0x7580ff64u, 0x13b87915u, 0xb1eff2c6u, 0x50276c77u, 0xee5ee628u, 0x8c965fd9u, 0x2acdd98au,
};

static const uint32_t bshim_082_tab6[96] = {
    0xf5e6c59cu, 0x941e3f4du, 0x3255b8feu, 0xd08d32afu, 0x6ec4ac60u, 0x0cfc2611u, 0xab339fc2u, 0x496b1973u,
    0xe7a29324u, 0x85da0cd5u, 0x24118686u, 0xc2490037u, 0x608079e8u, 0xfeb7f399u, 0x9cef6d4au, 0x3b26e6fbu,
    0xd95e60acu, 0x7795da5du, 0x15cd540eu, 0xb404cdbfu, 0x523c4770u, 0xf073c121u, 0x8eab3ad2u, 0x2ce2b483u,
    0xcb1a2e34u, 0x6951a7e5u, 0x07892196u, 0xa5c09b47u, 0x43f814f8u, 0xe22f8ea9u, 0x8067085au, 0x1e9e820bu,
    0xbcd5fbbcu, 0x5b0d756du, 0xf944ef1eu, 0x977c68cfu, 0x35b3e280u, 0xd3eb5c31u, 0x7222d5e2u, 0x105a4f93u,
    0xae91c944u, 0x4cc942f5u, 0xeb00bca6u, 0x89383657u, 0x276fb008u, 0xc5a729b9u, 0x63dea36au, 0x02161d1bu,
    0xa04d96ccu, 0x3e85107du, 0xdcbc8a2eu, 0x7af403dfu, 0x192b7d90u, 0xb762f741u, 0x559a70f2u, 0xf3d1eaa3u,
    0x92096454u, 0x3040de05u, 0xce7857b6u, 0x6cafd167u, 0x0ae74b18u, 0xa91ec4c9u, 0x47563e7au, 0xe58db82bu,
    0x83c531dcu, 0x21fcab8du, 0xc034253eu, 0x5e6b9eefu, 0xfca318a0u, 0x9ada9251u, 0x39120c02u, 0xd74985b3u,
    0x7580ff64u, 0x13b87915u, 0xb1eff2c6u, 0x50276c77u, 0xee5ee628u, 0x8c965fd9u, 0x2acdd98au, 0xc905533bu,
    0x673cccecu, 0x0574469du, 0xa3abc04eu, 0x41e339ffu, 0xe01ab3b0u, 0x7e522d61u, 0x1c89a712u, 0xbac120c3u,
    0x58f89a74u, 0xf7301425u, 0x95678dd6u, 0x339f0787u, 0xd1d68138u, 0x700dfae9u, 0x0e45749au, 0xac7cee4bu,
};

static const uint32_t bshim_082_tab7[96] = {
    0x7795da5du, 0x15cd540eu, 0xb404cdbfu, 0x523c4770u, 0xf073c121u, 0x8eab3ad2u, 0x2ce2b483u, 0xcb1a2e34u,
    0x6951a7e5u, 0x07892196u, 0xa5c09b47u, 0x43f814f8u, 0xe22f8ea9u, 0x8067085au, 0x1e9e820bu, 0xbcd5fbbcu,
    0x5b0d756du, 0xf944ef1eu, 0x977c68cfu, 0x35b3e280u, 0xd3eb5c31u, 0x7222d5e2u, 0x105a4f93u, 0xae91c944u,
    0x4cc942f5u, 0xeb00bca6u, 0x89383657u, 0x276fb008u, 0xc5a729b9u, 0x63dea36au, 0x02161d1bu, 0xa04d96ccu,
    0x3e85107du, 0xdcbc8a2eu, 0x7af403dfu, 0x192b7d90u, 0xb762f741u, 0x559a70f2u, 0xf3d1eaa3u, 0x92096454u,
    0x3040de05u, 0xce7857b6u, 0x6cafd167u, 0x0ae74b18u, 0xa91ec4c9u, 0x47563e7au, 0xe58db82bu, 0x83c531dcu,
    0x21fcab8du, 0xc034253eu, 0x5e6b9eefu, 0xfca318a0u, 0x9ada9251u, 0x39120c02u, 0xd74985b3u, 0x7580ff64u,
    0x13b87915u, 0xb1eff2c6u, 0x50276c77u, 0xee5ee628u, 0x8c965fd9u, 0x2acdd98au, 0xc905533bu, 0x673cccecu,
    0x0574469du, 0xa3abc04eu, 0x41e339ffu, 0xe01ab3b0u, 0x7e522d61u, 0x1c89a712u, 0xbac120c3u, 0x58f89a74u,
    0xf7301425u, 0x95678dd6u, 0x339f0787u, 0xd1d68138u, 0x700dfae9u, 0x0e45749au, 0xac7cee4bu, 0x4ab467fcu,
    0xe8ebe1adu, 0x87235b5eu, 0x255ad50fu, 0xc3924ec0u, 0x61c9c871u, 0x00014222u, 0x9e38bbd3u, 0x3c703584u,
    0xdaa7af35u, 0x78df28e6u, 0x1716a297u, 0xb54e1c48u, 0x538595f9u, 0xf1bd0faau, 0x8ff4895bu, 0x2e2c030cu,
};

struct bshim_082_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_082_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_082_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_082_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_082_reset(struct bshim_082_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0009e88eu;
    return 0;
}

