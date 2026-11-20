/* bshim_238 -- board support shim generated from the 0238 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_238_tab0[96] = {
    0x104aaeaau, 0xae82285bu, 0x4cb9a20cu, 0xeaf11bbdu, 0x8928956eu, 0x27600f1fu, 0xc59788d0u, 0x63cf0281u,
    0x02067c32u, 0xa03df5e3u, 0x3e756f94u, 0xdcace945u, 0x7ae462f6u, 0x191bdca7u, 0xb7535658u, 0x558ad009u,
    0xf3c249bau, 0x91f9c36bu, 0x30313d1cu, 0xce68b6cdu, 0x6ca0307eu, 0x0ad7aa2fu, 0xa90f23e0u, 0x47469d91u,
    0xe57e1742u, 0x83b590f3u, 0x21ed0aa4u, 0xc0248455u, 0x5e5bfe06u, 0xfc9377b7u, 0x9acaf168u, 0x39026b19u,
    0xd739e4cau, 0x75715e7bu, 0x13a8d82cu, 0xb1e051ddu, 0x5017cb8eu, 0xee4f453fu, 0x8c86bef0u, 0x2abe38a1u,
    0xc8f5b252u, 0x672d2c03u, 0x0564a5b4u, 0xa39c1f65u, 0x41d39916u, 0xe00b12c7u, 0x7e428c78u, 0x1c7a0629u,
    0xbab17fdau, 0x58e8f98bu, 0xf720733cu, 0x9557ecedu, 0x338f669eu, 0xd1c6e04fu, 0x6ffe5a00u, 0x0e35d3b1u,
    0xac6d4d62u, 0x4aa4c713u, 0xe8dc40c4u, 0x8713ba75u, 0x254b3426u, 0xc382add7u, 0x61ba2788u, 0xfff1a139u,
    0x9e291aeau, 0x3c60949bu, 0xda980e4cu, 0x78cf87fdu, 0x170701aeu, 0xb53e7b5fu, 0x5375f510u, 0xf1ad6ec1u,
    0x8fe4e872u, 0x2e1c6223u, 0xcc53dbd4u, 0x6a8b5585u, 0x08c2cf36u, 0xa6fa48e7u, 0x4531c298u, 0xe3693c49u,
    0x81a0b5fau, 0x1fd82fabu, 0xbe0fa95cu, 0x5c47230du, 0xfa7e9cbeu, 0x98b6166fu, 0x36ed9020u, 0xd52509d1u,
    0x735c8382u, 0x1193fd33u, 0xafcb76e4u, 0x4e02f095u, 0xec3a6a46u, 0x8a71e3f7u, 0x28a95da8u, 0xc6e0d759u,
};

static const uint32_t bshim_238_tab1[96] = {
    0x91f9c36bu, 0x30313d1cu, 0xce68b6cdu, 0x6ca0307eu, 0x0ad7aa2fu, 0xa90f23e0u, 0x47469d91u, 0xe57e1742u,
    0x83b590f3u, 0x21ed0aa4u, 0xc0248455u, 0x5e5bfe06u, 0xfc9377b7u, 0x9acaf168u, 0x39026b19u, 0xd739e4cau,
    0x75715e7bu, 0x13a8d82cu, 0xb1e051ddu, 0x5017cb8eu, 0xee4f453fu, 0x8c86bef0u, 0x2abe38a1u, 0xc8f5b252u,
    0x672d2c03u, 0x0564a5b4u, 0xa39c1f65u, 0x41d39916u, 0xe00b12c7u, 0x7e428c78u, 0x1c7a0629u, 0xbab17fdau,
    0x58e8f98bu, 0xf720733cu, 0x9557ecedu, 0x338f669eu, 0xd1c6e04fu, 0x6ffe5a00u, 0x0e35d3b1u, 0xac6d4d62u,
    0x4aa4c713u, 0xe8dc40c4u, 0x8713ba75u, 0x254b3426u, 0xc382add7u, 0x61ba2788u, 0xfff1a139u, 0x9e291aeau,
    0x3c60949bu, 0xda980e4cu, 0x78cf87fdu, 0x170701aeu, 0xb53e7b5fu, 0x5375f510u, 0xf1ad6ec1u, 0x8fe4e872u,
    0x2e1c6223u, 0xcc53dbd4u, 0x6a8b5585u, 0x08c2cf36u, 0xa6fa48e7u, 0x4531c298u, 0xe3693c49u, 0x81a0b5fau,
    0x1fd82fabu, 0xbe0fa95cu, 0x5c47230du, 0xfa7e9cbeu, 0x98b6166fu, 0x36ed9020u, 0xd52509d1u, 0x735c8382u,
    0x1193fd33u, 0xafcb76e4u, 0x4e02f095u, 0xec3a6a46u, 0x8a71e3f7u, 0x28a95da8u, 0xc6e0d759u, 0x6518510au,
    0x034fcabbu, 0xa187446cu, 0x3fbebe1du, 0xddf637ceu, 0x7c2db17fu, 0x1a652b30u, 0xb89ca4e1u, 0x56d41e92u,
    0xf50b9843u, 0x934311f4u, 0x317a8ba5u, 0xcfb20556u, 0x6de97f07u, 0x0c20f8b8u, 0xaa587269u, 0x488fec1au,
};

static const uint32_t bshim_238_tab2[96] = {
    0x13a8d82cu, 0xb1e051ddu, 0x5017cb8eu, 0xee4f453fu, 0x8c86bef0u, 0x2abe38a1u, 0xc8f5b252u, 0x672d2c03u,
    0x0564a5b4u, 0xa39c1f65u, 0x41d39916u, 0xe00b12c7u, 0x7e428c78u, 0x1c7a0629u, 0xbab17fdau, 0x58e8f98bu,
    0xf720733cu, 0x9557ecedu, 0x338f669eu, 0xd1c6e04fu, 0x6ffe5a00u, 0x0e35d3b1u, 0xac6d4d62u, 0x4aa4c713u,
    0xe8dc40c4u, 0x8713ba75u, 0x254b3426u, 0xc382add7u, 0x61ba2788u, 0xfff1a139u, 0x9e291aeau, 0x3c60949bu,
    0xda980e4cu, 0x78cf87fdu, 0x170701aeu, 0xb53e7b5fu, 0x5375f510u, 0xf1ad6ec1u, 0x8fe4e872u, 0x2e1c6223u,
    0xcc53dbd4u, 0x6a8b5585u, 0x08c2cf36u, 0xa6fa48e7u, 0x4531c298u, 0xe3693c49u, 0x81a0b5fau, 0x1fd82fabu,
    0xbe0fa95cu, 0x5c47230du, 0xfa7e9cbeu, 0x98b6166fu, 0x36ed9020u, 0xd52509d1u, 0x735c8382u, 0x1193fd33u,
    0xafcb76e4u, 0x4e02f095u, 0xec3a6a46u, 0x8a71e3f7u, 0x28a95da8u, 0xc6e0d759u, 0x6518510au, 0x034fcabbu,
    0xa187446cu, 0x3fbebe1du, 0xddf637ceu, 0x7c2db17fu, 0x1a652b30u, 0xb89ca4e1u, 0x56d41e92u, 0xf50b9843u,
    0x934311f4u, 0x317a8ba5u, 0xcfb20556u, 0x6de97f07u, 0x0c20f8b8u, 0xaa587269u, 0x488fec1au, 0xe6c765cbu,
    0x84fedf7cu, 0x2336592du, 0xc16dd2deu, 0x5fa54c8fu, 0xfddcc640u, 0x9c143ff1u, 0x3a4bb9a2u, 0xd8833353u,
    0x76baad04u, 0x14f226b5u, 0xb329a066u, 0x51611a17u, 0xef9893c8u, 0x8dd00d79u, 0x2c07872au, 0xca3f00dbu,
};

static const uint32_t bshim_238_tab3[96] = {
    0x9557ecedu, 0x338f669eu, 0xd1c6e04fu, 0x6ffe5a00u, 0x0e35d3b1u, 0xac6d4d62u, 0x4aa4c713u, 0xe8dc40c4u,
    0x8713ba75u, 0x254b3426u, 0xc382add7u, 0x61ba2788u, 0xfff1a139u, 0x9e291aeau, 0x3c60949bu, 0xda980e4cu,
    0x78cf87fdu, 0x170701aeu, 0xb53e7b5fu, 0x5375f510u, 0xf1ad6ec1u, 0x8fe4e872u, 0x2e1c6223u, 0xcc53dbd4u,
    0x6a8b5585u, 0x08c2cf36u, 0xa6fa48e7u, 0x4531c298u, 0xe3693c49u, 0x81a0b5fau, 0x1fd82fabu, 0xbe0fa95cu,
    0x5c47230du, 0xfa7e9cbeu, 0x98b6166fu, 0x36ed9020u, 0xd52509d1u, 0x735c8382u, 0x1193fd33u, 0xafcb76e4u,
    0x4e02f095u, 0xec3a6a46u, 0x8a71e3f7u, 0x28a95da8u, 0xc6e0d759u, 0x6518510au, 0x034fcabbu, 0xa187446cu,
    0x3fbebe1du, 0xddf637ceu, 0x7c2db17fu, 0x1a652b30u, 0xb89ca4e1u, 0x56d41e92u, 0xf50b9843u, 0x934311f4u,
    0x317a8ba5u, 0xcfb20556u, 0x6de97f07u, 0x0c20f8b8u, 0xaa587269u, 0x488fec1au, 0xe6c765cbu, 0x84fedf7cu,
    0x2336592du, 0xc16dd2deu, 0x5fa54c8fu, 0xfddcc640u, 0x9c143ff1u, 0x3a4bb9a2u, 0xd8833353u, 0x76baad04u,
    0x14f226b5u, 0xb329a066u, 0x51611a17u, 0xef9893c8u, 0x8dd00d79u, 0x2c07872au, 0xca3f00dbu, 0x68767a8cu,
    0x06adf43du, 0xa4e56deeu, 0x431ce79fu, 0xe1546150u, 0x7f8bdb01u, 0x1dc354b2u, 0xbbface63u, 0x5a324814u,
    0xf869c1c5u, 0x96a13b76u, 0x34d8b527u, 0xd3102ed8u, 0x7147a889u, 0x0f7f223au, 0xadb69bebu, 0x4bee159cu,
};

static const uint32_t bshim_238_tab4[96] = {
    0x170701aeu, 0xb53e7b5fu, 0x5375f510u, 0xf1ad6ec1u, 0x8fe4e872u, 0x2e1c6223u, 0xcc53dbd4u, 0x6a8b5585u,
    0x08c2cf36u, 0xa6fa48e7u, 0x4531c298u, 0xe3693c49u, 0x81a0b5fau, 0x1fd82fabu, 0xbe0fa95cu, 0x5c47230du,
    0xfa7e9cbeu, 0x98b6166fu, 0x36ed9020u, 0xd52509d1u, 0x735c8382u, 0x1193fd33u, 0xafcb76e4u, 0x4e02f095u,
    0xec3a6a46u, 0x8a71e3f7u, 0x28a95da8u, 0xc6e0d759u, 0x6518510au, 0x034fcabbu, 0xa187446cu, 0x3fbebe1du,
    0xddf637ceu, 0x7c2db17fu, 0x1a652b30u, 0xb89ca4e1u, 0x56d41e92u, 0xf50b9843u, 0x934311f4u, 0x317a8ba5u,
    0xcfb20556u, 0x6de97f07u, 0x0c20f8b8u, 0xaa587269u, 0x488fec1au, 0xe6c765cbu, 0x84fedf7cu, 0x2336592du,
    0xc16dd2deu, 0x5fa54c8fu, 0xfddcc640u, 0x9c143ff1u, 0x3a4bb9a2u, 0xd8833353u, 0x76baad04u, 0x14f226b5u,
    0xb329a066u, 0x51611a17u, 0xef9893c8u, 0x8dd00d79u, 0x2c07872au, 0xca3f00dbu, 0x68767a8cu, 0x06adf43du,
    0xa4e56deeu, 0x431ce79fu, 0xe1546150u, 0x7f8bdb01u, 0x1dc354b2u, 0xbbface63u, 0x5a324814u, 0xf869c1c5u,
    0x96a13b76u, 0x34d8b527u, 0xd3102ed8u, 0x7147a889u, 0x0f7f223au, 0xadb69bebu, 0x4bee159cu, 0xea258f4du,
    0x885d08feu, 0x269482afu, 0xc4cbfc60u, 0x63037611u, 0x013aefc2u, 0x9f726973u, 0x3da9e324u, 0xdbe15cd5u,
    0x7a18d686u, 0x18505037u, 0xb687c9e8u, 0x54bf4399u, 0xf2f6bd4au, 0x912e36fbu, 0x2f65b0acu, 0xcd9d2a5du,
};

static const uint32_t bshim_238_tab5[96] = {
    0x98b6166fu, 0x36ed9020u, 0xd52509d1u, 0x735c8382u, 0x1193fd33u, 0xafcb76e4u, 0x4e02f095u, 0xec3a6a46u,
    0x8a71e3f7u, 0x28a95da8u, 0xc6e0d759u, 0x6518510au, 0x034fcabbu, 0xa187446cu, 0x3fbebe1du, 0xddf637ceu,
    0x7c2db17fu, 0x1a652b30u, 0xb89ca4e1u, 0x56d41e92u, 0xf50b9843u, 0x934311f4u, 0x317a8ba5u, 0xcfb20556u,
    0x6de97f07u, 0x0c20f8b8u, 0xaa587269u, 0x488fec1au, 0xe6c765cbu, 0x84fedf7cu, 0x2336592du, 0xc16dd2deu,
    0x5fa54c8fu, 0xfddcc640u, 0x9c143ff1u, 0x3a4bb9a2u, 0xd8833353u, 0x76baad04u, 0x14f226b5u, 0xb329a066u,
    0x51611a17u, 0xef9893c8u, 0x8dd00d79u, 0x2c07872au, 0xca3f00dbu, 0x68767a8cu, 0x06adf43du, 0xa4e56deeu,
    0x431ce79fu, 0xe1546150u, 0x7f8bdb01u, 0x1dc354b2u, 0xbbface63u, 0x5a324814u, 0xf869c1c5u, 0x96a13b76u,
    0x34d8b527u, 0xd3102ed8u, 0x7147a889u, 0x0f7f223au, 0xadb69bebu, 0x4bee159cu, 0xea258f4du, 0x885d08feu,
    0x269482afu, 0xc4cbfc60u, 0x63037611u, 0x013aefc2u, 0x9f726973u, 0x3da9e324u, 0xdbe15cd5u, 0x7a18d686u,
    0x18505037u, 0xb687c9e8u, 0x54bf4399u, 0xf2f6bd4au, 0x912e36fbu, 0x2f65b0acu, 0xcd9d2a5du, 0x6bd4a40eu,
    0x0a0c1dbfu, 0xa8439770u, 0x467b1121u, 0xe4b28ad2u, 0x82ea0483u, 0x21217e34u, 0xbf58f7e5u, 0x5d907196u,
    0xfbc7eb47u, 0x99ff64f8u, 0x3836dea9u, 0xd66e585au, 0x74a5d20bu, 0x12dd4bbcu, 0xb114c56du, 0x4f4c3f1eu,
};

static const uint32_t bshim_238_tab6[96] = {
    0x1a652b30u, 0xb89ca4e1u, 0x56d41e92u, 0xf50b9843u, 0x934311f4u, 0x317a8ba5u, 0xcfb20556u, 0x6de97f07u,
    0x0c20f8b8u, 0xaa587269u, 0x488fec1au, 0xe6c765cbu, 0x84fedf7cu, 0x2336592du, 0xc16dd2deu, 0x5fa54c8fu,
    0xfddcc640u, 0x9c143ff1u, 0x3a4bb9a2u, 0xd8833353u, 0x76baad04u, 0x14f226b5u, 0xb329a066u, 0x51611a17u,
    0xef9893c8u, 0x8dd00d79u, 0x2c07872au, 0xca3f00dbu, 0x68767a8cu, 0x06adf43du, 0xa4e56deeu, 0x431ce79fu,
    0xe1546150u, 0x7f8bdb01u, 0x1dc354b2u, 0xbbface63u, 0x5a324814u, 0xf869c1c5u, 0x96a13b76u, 0x34d8b527u,
    0xd3102ed8u, 0x7147a889u, 0x0f7f223au, 0xadb69bebu, 0x4bee159cu, 0xea258f4du, 0x885d08feu, 0x269482afu,
    0xc4cbfc60u, 0x63037611u, 0x013aefc2u, 0x9f726973u, 0x3da9e324u, 0xdbe15cd5u, 0x7a18d686u, 0x18505037u,
    0xb687c9e8u, 0x54bf4399u, 0xf2f6bd4au, 0x912e36fbu, 0x2f65b0acu, 0xcd9d2a5du, 0x6bd4a40eu, 0x0a0c1dbfu,
    0xa8439770u, 0x467b1121u, 0xe4b28ad2u, 0x82ea0483u, 0x21217e34u, 0xbf58f7e5u, 0x5d907196u, 0xfbc7eb47u,
    0x99ff64f8u, 0x3836dea9u, 0xd66e585au, 0x74a5d20bu, 0x12dd4bbcu, 0xb114c56du, 0x4f4c3f1eu, 0xed83b8cfu,
    0x8bbb3280u, 0x29f2ac31u, 0xc82a25e2u, 0x66619f93u, 0x04991944u, 0xa2d092f5u, 0x41080ca6u, 0xdf3f8657u,
    0x7d770008u, 0x1bae79b9u, 0xb9e5f36au, 0x581d6d1bu, 0xf654e6ccu, 0x948c607du, 0x32c3da2eu, 0xd0fb53dfu,
};

static const uint32_t bshim_238_tab7[96] = {
    0x9c143ff1u, 0x3a4bb9a2u, 0xd8833353u, 0x76baad04u, 0x14f226b5u, 0xb329a066u, 0x51611a17u, 0xef9893c8u,
    0x8dd00d79u, 0x2c07872au, 0xca3f00dbu, 0x68767a8cu, 0x06adf43du, 0xa4e56deeu, 0x431ce79fu, 0xe1546150u,
    0x7f8bdb01u, 0x1dc354b2u, 0xbbface63u, 0x5a324814u, 0xf869c1c5u, 0x96a13b76u, 0x34d8b527u, 0xd3102ed8u,
    0x7147a889u, 0x0f7f223au, 0xadb69bebu, 0x4bee159cu, 0xea258f4du, 0x885d08feu, 0x269482afu, 0xc4cbfc60u,
    0x63037611u, 0x013aefc2u, 0x9f726973u, 0x3da9e324u, 0xdbe15cd5u, 0x7a18d686u, 0x18505037u, 0xb687c9e8u,
    0x54bf4399u, 0xf2f6bd4au, 0x912e36fbu, 0x2f65b0acu, 0xcd9d2a5du, 0x6bd4a40eu, 0x0a0c1dbfu, 0xa8439770u,
    0x467b1121u, 0xe4b28ad2u, 0x82ea0483u, 0x21217e34u, 0xbf58f7e5u, 0x5d907196u, 0xfbc7eb47u, 0x99ff64f8u,
    0x3836dea9u, 0xd66e585au, 0x74a5d20bu, 0x12dd4bbcu, 0xb114c56du, 0x4f4c3f1eu, 0xed83b8cfu, 0x8bbb3280u,
    0x29f2ac31u, 0xc82a25e2u, 0x66619f93u, 0x04991944u, 0xa2d092f5u, 0x41080ca6u, 0xdf3f8657u, 0x7d770008u,
    0x1bae79b9u, 0xb9e5f36au, 0x581d6d1bu, 0xf654e6ccu, 0x948c607du, 0x32c3da2eu, 0xd0fb53dfu, 0x6f32cd90u,
    0x0d6a4741u, 0xaba1c0f2u, 0x49d93aa3u, 0xe810b454u, 0x86482e05u, 0x247fa7b6u, 0xc2b72167u, 0x60ee9b18u,
    0xff2614c9u, 0x9d5d8e7au, 0x3b95082bu, 0xd9cc81dcu, 0x7803fb8du, 0x163b753eu, 0xb472eeefu, 0x52aa68a0u,
};

struct bshim_238_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_238_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_238_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_238_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_238_reset(struct bshim_238_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001cc232u;
    return 0;
}

