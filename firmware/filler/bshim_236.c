/* bshim_236 -- board support shim generated from the 0236 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_236_tab0[96] = {
    0x23842384u, 0xc1bb9d35u, 0x5ff316e6u, 0xfe2a9097u, 0x9c620a48u, 0x3a9983f9u, 0xd8d0fdaau, 0x7708775bu,
    0x153ff10cu, 0xb3776abdu, 0x51aee46eu, 0xefe65e1fu, 0x8e1dd7d0u, 0x2c555181u, 0xca8ccb32u, 0x68c444e3u,
    0x06fbbe94u, 0xa5333845u, 0x436ab1f6u, 0xe1a22ba7u, 0x7fd9a558u, 0x1e111f09u, 0xbc4898bau, 0x5a80126bu,
    0xf8b78c1cu, 0x96ef05cdu, 0x35267f7eu, 0xd35df92fu, 0x719572e0u, 0x0fccec91u, 0xae046642u, 0x4c3bdff3u,
    0xea7359a4u, 0x88aad355u, 0x26e24d06u, 0xc519c6b7u, 0x63514068u, 0x0188ba19u, 0x9fc033cau, 0x3df7ad7bu,
    0xdc2f272cu, 0x7a66a0ddu, 0x189e1a8eu, 0xb6d5943fu, 0x550d0df0u, 0xf34487a1u, 0x917c0152u, 0x2fb37b03u,
    0xcdeaf4b4u, 0x6c226e65u, 0x0a59e816u, 0xa89161c7u, 0x46c8db78u, 0xe5005529u, 0x8337cedau, 0x216f488bu,
    0xbfa6c23cu, 0x5dde3bedu, 0xfc15b59eu, 0x9a4d2f4fu, 0x3884a900u, 0xd6bc22b1u, 0x74f39c62u, 0x132b1613u,
    0xb1628fc4u, 0x4f9a0975u, 0xedd18326u, 0x8c08fcd7u, 0x2a407688u, 0xc877f039u, 0x66af69eau, 0x04e6e39bu,
    0xa31e5d4cu, 0x4155d6fdu, 0xdf8d50aeu, 0x7dc4ca5fu, 0x1bfc4410u, 0xba33bdc1u, 0x586b3772u, 0xf6a2b123u,
    0x94da2ad4u, 0x3311a485u, 0xd1491e36u, 0x6f8097e7u, 0x0db81198u, 0xabef8b49u, 0x4a2704fau, 0xe85e7eabu,
    0x8695f85cu, 0x24cd720du, 0xc304ebbeu, 0x613c656fu, 0xff73df20u, 0x9dab58d1u, 0x3be2d282u, 0xda1a4c33u,
};

static const uint32_t bshim_236_tab1[96] = {
    0xa5333845u, 0x436ab1f6u, 0xe1a22ba7u, 0x7fd9a558u, 0x1e111f09u, 0xbc4898bau, 0x5a80126bu, 0xf8b78c1cu,
    0x96ef05cdu, 0x35267f7eu, 0xd35df92fu, 0x719572e0u, 0x0fccec91u, 0xae046642u, 0x4c3bdff3u, 0xea7359a4u,
    0x88aad355u, 0x26e24d06u, 0xc519c6b7u, 0x63514068u, 0x0188ba19u, 0x9fc033cau, 0x3df7ad7bu, 0xdc2f272cu,
    0x7a66a0ddu, 0x189e1a8eu, 0xb6d5943fu, 0x550d0df0u, 0xf34487a1u, 0x917c0152u, 0x2fb37b03u, 0xcdeaf4b4u,
    0x6c226e65u, 0x0a59e816u, 0xa89161c7u, 0x46c8db78u, 0xe5005529u, 0x8337cedau, 0x216f488bu, 0xbfa6c23cu,
    0x5dde3bedu, 0xfc15b59eu, 0x9a4d2f4fu, 0x3884a900u, 0xd6bc22b1u, 0x74f39c62u, 0x132b1613u, 0xb1628fc4u,
    0x4f9a0975u, 0xedd18326u, 0x8c08fcd7u, 0x2a407688u, 0xc877f039u, 0x66af69eau, 0x04e6e39bu, 0xa31e5d4cu,
    0x4155d6fdu, 0xdf8d50aeu, 0x7dc4ca5fu, 0x1bfc4410u, 0xba33bdc1u, 0x586b3772u, 0xf6a2b123u, 0x94da2ad4u,
    0x3311a485u, 0xd1491e36u, 0x6f8097e7u, 0x0db81198u, 0xabef8b49u, 0x4a2704fau, 0xe85e7eabu, 0x8695f85cu,
    0x24cd720du, 0xc304ebbeu, 0x613c656fu, 0xff73df20u, 0x9dab58d1u, 0x3be2d282u, 0xda1a4c33u, 0x7851c5e4u,
    0x16893f95u, 0xb4c0b946u, 0x52f832f7u, 0xf12faca8u, 0x8f672659u, 0x2d9ea00au, 0xcbd619bbu, 0x6a0d936cu,
    0x08450d1du, 0xa67c86ceu, 0x44b4007fu, 0xe2eb7a30u, 0x8122f3e1u, 0x1f5a6d92u, 0xbd91e743u, 0x5bc960f4u,
};

static const uint32_t bshim_236_tab2[96] = {
    0x26e24d06u, 0xc519c6b7u, 0x63514068u, 0x0188ba19u, 0x9fc033cau, 0x3df7ad7bu, 0xdc2f272cu, 0x7a66a0ddu,
    0x189e1a8eu, 0xb6d5943fu, 0x550d0df0u, 0xf34487a1u, 0x917c0152u, 0x2fb37b03u, 0xcdeaf4b4u, 0x6c226e65u,
    0x0a59e816u, 0xa89161c7u, 0x46c8db78u, 0xe5005529u, 0x8337cedau, 0x216f488bu, 0xbfa6c23cu, 0x5dde3bedu,
    0xfc15b59eu, 0x9a4d2f4fu, 0x3884a900u, 0xd6bc22b1u, 0x74f39c62u, 0x132b1613u, 0xb1628fc4u, 0x4f9a0975u,
    0xedd18326u, 0x8c08fcd7u, 0x2a407688u, 0xc877f039u, 0x66af69eau, 0x04e6e39bu, 0xa31e5d4cu, 0x4155d6fdu,
    0xdf8d50aeu, 0x7dc4ca5fu, 0x1bfc4410u, 0xba33bdc1u, 0x586b3772u, 0xf6a2b123u, 0x94da2ad4u, 0x3311a485u,
    0xd1491e36u, 0x6f8097e7u, 0x0db81198u, 0xabef8b49u, 0x4a2704fau, 0xe85e7eabu, 0x8695f85cu, 0x24cd720du,
    0xc304ebbeu, 0x613c656fu, 0xff73df20u, 0x9dab58d1u, 0x3be2d282u, 0xda1a4c33u, 0x7851c5e4u, 0x16893f95u,
    0xb4c0b946u, 0x52f832f7u, 0xf12faca8u, 0x8f672659u, 0x2d9ea00au, 0xcbd619bbu, 0x6a0d936cu, 0x08450d1du,
    0xa67c86ceu, 0x44b4007fu, 0xe2eb7a30u, 0x8122f3e1u, 0x1f5a6d92u, 0xbd91e743u, 0x5bc960f4u, 0xfa00daa5u,
    0x98385456u, 0x366fce07u, 0xd4a747b8u, 0x72dec169u, 0x11163b1au, 0xaf4db4cbu, 0x4d852e7cu, 0xebbca82du,
    0x89f421deu, 0x282b9b8fu, 0xc6631540u, 0x649a8ef1u, 0x02d208a2u, 0xa1098253u, 0x3f40fc04u, 0xdd7875b5u,
};

static const uint32_t bshim_236_tab3[96] = {
    0xa89161c7u, 0x46c8db78u, 0xe5005529u, 0x8337cedau, 0x216f488bu, 0xbfa6c23cu, 0x5dde3bedu, 0xfc15b59eu,
    0x9a4d2f4fu, 0x3884a900u, 0xd6bc22b1u, 0x74f39c62u, 0x132b1613u, 0xb1628fc4u, 0x4f9a0975u, 0xedd18326u,
    0x8c08fcd7u, 0x2a407688u, 0xc877f039u, 0x66af69eau, 0x04e6e39bu, 0xa31e5d4cu, 0x4155d6fdu, 0xdf8d50aeu,
    0x7dc4ca5fu, 0x1bfc4410u, 0xba33bdc1u, 0x586b3772u, 0xf6a2b123u, 0x94da2ad4u, 0x3311a485u, 0xd1491e36u,
    0x6f8097e7u, 0x0db81198u, 0xabef8b49u, 0x4a2704fau, 0xe85e7eabu, 0x8695f85cu, 0x24cd720du, 0xc304ebbeu,
    0x613c656fu, 0xff73df20u, 0x9dab58d1u, 0x3be2d282u, 0xda1a4c33u, 0x7851c5e4u, 0x16893f95u, 0xb4c0b946u,
    0x52f832f7u, 0xf12faca8u, 0x8f672659u, 0x2d9ea00au, 0xcbd619bbu, 0x6a0d936cu, 0x08450d1du, 0xa67c86ceu,
    0x44b4007fu, 0xe2eb7a30u, 0x8122f3e1u, 0x1f5a6d92u, 0xbd91e743u, 0x5bc960f4u, 0xfa00daa5u, 0x98385456u,
    0x366fce07u, 0xd4a747b8u, 0x72dec169u, 0x11163b1au, 0xaf4db4cbu, 0x4d852e7cu, 0xebbca82du, 0x89f421deu,
    0x282b9b8fu, 0xc6631540u, 0x649a8ef1u, 0x02d208a2u, 0xa1098253u, 0x3f40fc04u, 0xdd7875b5u, 0x7bafef66u,
    0x19e76917u, 0xb81ee2c8u, 0x56565c79u, 0xf48dd62au, 0x92c54fdbu, 0x30fcc98cu, 0xcf34433du, 0x6d6bbceeu,
    0x0ba3369fu, 0xa9dab050u, 0x48122a01u, 0xe649a3b2u, 0x84811d63u, 0x22b89714u, 0xc0f010c5u, 0x5f278a76u,
};

static const uint32_t bshim_236_tab4[96] = {
    0x2a407688u, 0xc877f039u, 0x66af69eau, 0x04e6e39bu, 0xa31e5d4cu, 0x4155d6fdu, 0xdf8d50aeu, 0x7dc4ca5fu,
    0x1bfc4410u, 0xba33bdc1u, 0x586b3772u, 0xf6a2b123u, 0x94da2ad4u, 0x3311a485u, 0xd1491e36u, 0x6f8097e7u,
    0x0db81198u, 0xabef8b49u, 0x4a2704fau, 0xe85e7eabu, 0x8695f85cu, 0x24cd720du, 0xc304ebbeu, 0x613c656fu,
    0xff73df20u, 0x9dab58d1u, 0x3be2d282u, 0xda1a4c33u, 0x7851c5e4u, 0x16893f95u, 0xb4c0b946u, 0x52f832f7u,
    0xf12faca8u, 0x8f672659u, 0x2d9ea00au, 0xcbd619bbu, 0x6a0d936cu, 0x08450d1du, 0xa67c86ceu, 0x44b4007fu,
    0xe2eb7a30u, 0x8122f3e1u, 0x1f5a6d92u, 0xbd91e743u, 0x5bc960f4u, 0xfa00daa5u, 0x98385456u, 0x366fce07u,
    0xd4a747b8u, 0x72dec169u, 0x11163b1au, 0xaf4db4cbu, 0x4d852e7cu, 0xebbca82du, 0x89f421deu, 0x282b9b8fu,
    0xc6631540u, 0x649a8ef1u, 0x02d208a2u, 0xa1098253u, 0x3f40fc04u, 0xdd7875b5u, 0x7bafef66u, 0x19e76917u,
    0xb81ee2c8u, 0x56565c79u, 0xf48dd62au, 0x92c54fdbu, 0x30fcc98cu, 0xcf34433du, 0x6d6bbceeu, 0x0ba3369fu,
    0xa9dab050u, 0x48122a01u, 0xe649a3b2u, 0x84811d63u, 0x22b89714u, 0xc0f010c5u, 0x5f278a76u, 0xfd5f0427u,
    0x9b967dd8u, 0x39cdf789u, 0xd805713au, 0x763ceaebu, 0x1474649cu, 0xb2abde4du, 0x50e357feu, 0xef1ad1afu,
    0x8d524b60u, 0x2b89c511u, 0xc9c13ec2u, 0x67f8b873u, 0x06303224u, 0xa467abd5u, 0x429f2586u, 0xe0d69f37u,
};

static const uint32_t bshim_236_tab5[96] = {
    0xabef8b49u, 0x4a2704fau, 0xe85e7eabu, 0x8695f85cu, 0x24cd720du, 0xc304ebbeu, 0x613c656fu, 0xff73df20u,
    0x9dab58d1u, 0x3be2d282u, 0xda1a4c33u, 0x7851c5e4u, 0x16893f95u, 0xb4c0b946u, 0x52f832f7u, 0xf12faca8u,
    0x8f672659u, 0x2d9ea00au, 0xcbd619bbu, 0x6a0d936cu, 0x08450d1du, 0xa67c86ceu, 0x44b4007fu, 0xe2eb7a30u,
    0x8122f3e1u, 0x1f5a6d92u, 0xbd91e743u, 0x5bc960f4u, 0xfa00daa5u, 0x98385456u, 0x366fce07u, 0xd4a747b8u,
    0x72dec169u, 0x11163b1au, 0xaf4db4cbu, 0x4d852e7cu, 0xebbca82du, 0x89f421deu, 0x282b9b8fu, 0xc6631540u,
    0x649a8ef1u, 0x02d208a2u, 0xa1098253u, 0x3f40fc04u, 0xdd7875b5u, 0x7bafef66u, 0x19e76917u, 0xb81ee2c8u,
    0x56565c79u, 0xf48dd62au, 0x92c54fdbu, 0x30fcc98cu, 0xcf34433du, 0x6d6bbceeu, 0x0ba3369fu, 0xa9dab050u,
    0x48122a01u, 0xe649a3b2u, 0x84811d63u, 0x22b89714u, 0xc0f010c5u, 0x5f278a76u, 0xfd5f0427u, 0x9b967dd8u,
    0x39cdf789u, 0xd805713au, 0x763ceaebu, 0x1474649cu, 0xb2abde4du, 0x50e357feu, 0xef1ad1afu, 0x8d524b60u,
    0x2b89c511u, 0xc9c13ec2u, 0x67f8b873u, 0x06303224u, 0xa467abd5u, 0x429f2586u, 0xe0d69f37u, 0x7f0e18e8u,
    0x1d459299u, 0xbb7d0c4au, 0x59b485fbu, 0xf7ebffacu, 0x9623795du, 0x345af30eu, 0xd2926cbfu, 0x70c9e670u,
    0x0f016021u, 0xad38d9d2u, 0x4b705383u, 0xe9a7cd34u, 0x87df46e5u, 0x2616c096u, 0xc44e3a47u, 0x6285b3f8u,
};

static const uint32_t bshim_236_tab6[96] = {
    0x2d9ea00au, 0xcbd619bbu, 0x6a0d936cu, 0x08450d1du, 0xa67c86ceu, 0x44b4007fu, 0xe2eb7a30u, 0x8122f3e1u,
    0x1f5a6d92u, 0xbd91e743u, 0x5bc960f4u, 0xfa00daa5u, 0x98385456u, 0x366fce07u, 0xd4a747b8u, 0x72dec169u,
    0x11163b1au, 0xaf4db4cbu, 0x4d852e7cu, 0xebbca82du, 0x89f421deu, 0x282b9b8fu, 0xc6631540u, 0x649a8ef1u,
    0x02d208a2u, 0xa1098253u, 0x3f40fc04u, 0xdd7875b5u, 0x7bafef66u, 0x19e76917u, 0xb81ee2c8u, 0x56565c79u,
    0xf48dd62au, 0x92c54fdbu, 0x30fcc98cu, 0xcf34433du, 0x6d6bbceeu, 0x0ba3369fu, 0xa9dab050u, 0x48122a01u,
    0xe649a3b2u, 0x84811d63u, 0x22b89714u, 0xc0f010c5u, 0x5f278a76u, 0xfd5f0427u, 0x9b967dd8u, 0x39cdf789u,
    0xd805713au, 0x763ceaebu, 0x1474649cu, 0xb2abde4du, 0x50e357feu, 0xef1ad1afu, 0x8d524b60u, 0x2b89c511u,
    0xc9c13ec2u, 0x67f8b873u, 0x06303224u, 0xa467abd5u, 0x429f2586u, 0xe0d69f37u, 0x7f0e18e8u, 0x1d459299u,
    0xbb7d0c4au, 0x59b485fbu, 0xf7ebffacu, 0x9623795du, 0x345af30eu, 0xd2926cbfu, 0x70c9e670u, 0x0f016021u,
    0xad38d9d2u, 0x4b705383u, 0xe9a7cd34u, 0x87df46e5u, 0x2616c096u, 0xc44e3a47u, 0x6285b3f8u, 0x00bd2da9u,
    0x9ef4a75au, 0x3d2c210bu, 0xdb639abcu, 0x799b146du, 0x17d28e1eu, 0xb60a07cfu, 0x54418180u, 0xf278fb31u,
    0x90b074e2u, 0x2ee7ee93u, 0xcd1f6844u, 0x6b56e1f5u, 0x098e5ba6u, 0xa7c5d557u, 0x45fd4f08u, 0xe434c8b9u,
};

static const uint32_t bshim_236_tab7[96] = {
    0xaf4db4cbu, 0x4d852e7cu, 0xebbca82du, 0x89f421deu, 0x282b9b8fu, 0xc6631540u, 0x649a8ef1u, 0x02d208a2u,
    0xa1098253u, 0x3f40fc04u, 0xdd7875b5u, 0x7bafef66u, 0x19e76917u, 0xb81ee2c8u, 0x56565c79u, 0xf48dd62au,
    0x92c54fdbu, 0x30fcc98cu, 0xcf34433du, 0x6d6bbceeu, 0x0ba3369fu, 0xa9dab050u, 0x48122a01u, 0xe649a3b2u,
    0x84811d63u, 0x22b89714u, 0xc0f010c5u, 0x5f278a76u, 0xfd5f0427u, 0x9b967dd8u, 0x39cdf789u, 0xd805713au,
    0x763ceaebu, 0x1474649cu, 0xb2abde4du, 0x50e357feu, 0xef1ad1afu, 0x8d524b60u, 0x2b89c511u, 0xc9c13ec2u,
    0x67f8b873u, 0x06303224u, 0xa467abd5u, 0x429f2586u, 0xe0d69f37u, 0x7f0e18e8u, 0x1d459299u, 0xbb7d0c4au,
    0x59b485fbu, 0xf7ebffacu, 0x9623795du, 0x345af30eu, 0xd2926cbfu, 0x70c9e670u, 0x0f016021u, 0xad38d9d2u,
    0x4b705383u, 0xe9a7cd34u, 0x87df46e5u, 0x2616c096u, 0xc44e3a47u, 0x6285b3f8u, 0x00bd2da9u, 0x9ef4a75au,
    0x3d2c210bu, 0xdb639abcu, 0x799b146du, 0x17d28e1eu, 0xb60a07cfu, 0x54418180u, 0xf278fb31u, 0x90b074e2u,
    0x2ee7ee93u, 0xcd1f6844u, 0x6b56e1f5u, 0x098e5ba6u, 0xa7c5d557u, 0x45fd4f08u, 0xe434c8b9u, 0x826c426au,
    0x20a3bc1bu, 0xbedb35ccu, 0x5d12af7du, 0xfb4a292eu, 0x9981a2dfu, 0x37b91c90u, 0xd5f09641u, 0x74280ff2u,
    0x125f89a3u, 0xb0970354u, 0x4ece7d05u, 0xed05f6b6u, 0x8b3d7067u, 0x2974ea18u, 0xc7ac63c9u, 0x65e3dd7au,
};

struct bshim_236_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_236_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_236_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_236_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_236_reset(struct bshim_236_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001c8454u;
    return 0;
}

