/* bshim_031 -- board support shim generated from the 0031 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_031_tab0[96] = {
    0xd6056ccdu, 0x743ce67eu, 0x1274602fu, 0xb0abd9e0u, 0x4ee35391u, 0xed1acd42u, 0x8b5246f3u, 0x2989c0a4u,
    0xc7c13a55u, 0x65f8b406u, 0x04302db7u, 0xa267a768u, 0x409f2119u, 0xded69acau, 0x7d0e147bu, 0x1b458e2cu,
    0xb97d07ddu, 0x57b4818eu, 0xf5ebfb3fu, 0x942374f0u, 0x325aeea1u, 0xd0926852u, 0x6ec9e203u, 0x0d015bb4u,
    0xab38d565u, 0x49704f16u, 0xe7a7c8c7u, 0x85df4278u, 0x2416bc29u, 0xc24e35dau, 0x6085af8bu, 0xfebd293cu,
    0x9cf4a2edu, 0x3b2c1c9eu, 0xd963964fu, 0x779b1000u, 0x15d289b1u, 0xb40a0362u, 0x52417d13u, 0xf078f6c4u,
    0x8eb07075u, 0x2ce7ea26u, 0xcb1f63d7u, 0x6956dd88u, 0x078e5739u, 0xa5c5d0eau, 0x43fd4a9bu, 0xe234c44cu,
    0x806c3dfdu, 0x1ea3b7aeu, 0xbcdb315fu, 0x5b12ab10u, 0xf94a24c1u, 0x97819e72u, 0x35b91823u, 0xd3f091d4u,
    0x72280b85u, 0x105f8536u, 0xae96fee7u, 0x4cce7898u, 0xeb05f249u, 0x893d6bfau, 0x2774e5abu, 0xc5ac5f5cu,
    0x63e3d90du, 0x021b52beu, 0xa052cc6fu, 0x3e8a4620u, 0xdcc1bfd1u, 0x7af93982u, 0x1930b333u, 0xb7682ce4u,
    0x559fa695u, 0xf3d72046u, 0x920e99f7u, 0x304613a8u, 0xce7d8d59u, 0x6cb5070au, 0x0aec80bbu, 0xa923fa6cu,
    0x475b741du, 0xe592edceu, 0x83ca677fu, 0x2201e130u, 0xc0395ae1u, 0x5e70d492u, 0xfca84e43u, 0x9adfc7f4u,
    0x391741a5u, 0xd74ebb56u, 0x75863507u, 0x13bdaeb8u, 0xb1f52869u, 0x502ca21au, 0xee641bcbu, 0x8c9b957cu,
};

static const uint32_t bshim_031_tab1[96] = {
    0x57b4818eu, 0xf5ebfb3fu, 0x942374f0u, 0x325aeea1u, 0xd0926852u, 0x6ec9e203u, 0x0d015bb4u, 0xab38d565u,
    0x49704f16u, 0xe7a7c8c7u, 0x85df4278u, 0x2416bc29u, 0xc24e35dau, 0x6085af8bu, 0xfebd293cu, 0x9cf4a2edu,
    0x3b2c1c9eu, 0xd963964fu, 0x779b1000u, 0x15d289b1u, 0xb40a0362u, 0x52417d13u, 0xf078f6c4u, 0x8eb07075u,
    0x2ce7ea26u, 0xcb1f63d7u, 0x6956dd88u, 0x078e5739u, 0xa5c5d0eau, 0x43fd4a9bu, 0xe234c44cu, 0x806c3dfdu,
    0x1ea3b7aeu, 0xbcdb315fu, 0x5b12ab10u, 0xf94a24c1u, 0x97819e72u, 0x35b91823u, 0xd3f091d4u, 0x72280b85u,
    0x105f8536u, 0xae96fee7u, 0x4cce7898u, 0xeb05f249u, 0x893d6bfau, 0x2774e5abu, 0xc5ac5f5cu, 0x63e3d90du,
    0x021b52beu, 0xa052cc6fu, 0x3e8a4620u, 0xdcc1bfd1u, 0x7af93982u, 0x1930b333u, 0xb7682ce4u, 0x559fa695u,
    0xf3d72046u, 0x920e99f7u, 0x304613a8u, 0xce7d8d59u, 0x6cb5070au, 0x0aec80bbu, 0xa923fa6cu, 0x475b741du,
    0xe592edceu, 0x83ca677fu, 0x2201e130u, 0xc0395ae1u, 0x5e70d492u, 0xfca84e43u, 0x9adfc7f4u, 0x391741a5u,
    0xd74ebb56u, 0x75863507u, 0x13bdaeb8u, 0xb1f52869u, 0x502ca21au, 0xee641bcbu, 0x8c9b957cu, 0x2ad30f2du,
    0xc90a88deu, 0x6742028fu, 0x05797c40u, 0xa3b0f5f1u, 0x41e86fa2u, 0xe01fe953u, 0x7e576304u, 0x1c8edcb5u,
    0xbac65666u, 0x58fdd017u, 0xf73549c8u, 0x956cc379u, 0x33a43d2au, 0xd1dbb6dbu, 0x7013308cu, 0x0e4aaa3du,
};

static const uint32_t bshim_031_tab2[96] = {
    0xd963964fu, 0x779b1000u, 0x15d289b1u, 0xb40a0362u, 0x52417d13u, 0xf078f6c4u, 0x8eb07075u, 0x2ce7ea26u,
    0xcb1f63d7u, 0x6956dd88u, 0x078e5739u, 0xa5c5d0eau, 0x43fd4a9bu, 0xe234c44cu, 0x806c3dfdu, 0x1ea3b7aeu,
    0xbcdb315fu, 0x5b12ab10u, 0xf94a24c1u, 0x97819e72u, 0x35b91823u, 0xd3f091d4u, 0x72280b85u, 0x105f8536u,
    0xae96fee7u, 0x4cce7898u, 0xeb05f249u, 0x893d6bfau, 0x2774e5abu, 0xc5ac5f5cu, 0x63e3d90du, 0x021b52beu,
    0xa052cc6fu, 0x3e8a4620u, 0xdcc1bfd1u, 0x7af93982u, 0x1930b333u, 0xb7682ce4u, 0x559fa695u, 0xf3d72046u,
    0x920e99f7u, 0x304613a8u, 0xce7d8d59u, 0x6cb5070au, 0x0aec80bbu, 0xa923fa6cu, 0x475b741du, 0xe592edceu,
    0x83ca677fu, 0x2201e130u, 0xc0395ae1u, 0x5e70d492u, 0xfca84e43u, 0x9adfc7f4u, 0x391741a5u, 0xd74ebb56u,
    0x75863507u, 0x13bdaeb8u, 0xb1f52869u, 0x502ca21au, 0xee641bcbu, 0x8c9b957cu, 0x2ad30f2du, 0xc90a88deu,
    0x6742028fu, 0x05797c40u, 0xa3b0f5f1u, 0x41e86fa2u, 0xe01fe953u, 0x7e576304u, 0x1c8edcb5u, 0xbac65666u,
    0x58fdd017u, 0xf73549c8u, 0x956cc379u, 0x33a43d2au, 0xd1dbb6dbu, 0x7013308cu, 0x0e4aaa3du, 0xac8223eeu,
    0x4ab99d9fu, 0xe8f11750u, 0x87289101u, 0x25600ab2u, 0xc3978463u, 0x61cefe14u, 0x000677c5u, 0x9e3df176u,
    0x3c756b27u, 0xdaace4d8u, 0x78e45e89u, 0x171bd83au, 0xb55351ebu, 0x538acb9cu, 0xf1c2454du, 0x8ff9befeu,
};

static const uint32_t bshim_031_tab3[96] = {
    0x5b12ab10u, 0xf94a24c1u, 0x97819e72u, 0x35b91823u, 0xd3f091d4u, 0x72280b85u, 0x105f8536u, 0xae96fee7u,
    0x4cce7898u, 0xeb05f249u, 0x893d6bfau, 0x2774e5abu, 0xc5ac5f5cu, 0x63e3d90du, 0x021b52beu, 0xa052cc6fu,
    0x3e8a4620u, 0xdcc1bfd1u, 0x7af93982u, 0x1930b333u, 0xb7682ce4u, 0x559fa695u, 0xf3d72046u, 0x920e99f7u,
    0x304613a8u, 0xce7d8d59u, 0x6cb5070au, 0x0aec80bbu, 0xa923fa6cu, 0x475b741du, 0xe592edceu, 0x83ca677fu,
    0x2201e130u, 0xc0395ae1u, 0x5e70d492u, 0xfca84e43u, 0x9adfc7f4u, 0x391741a5u, 0xd74ebb56u, 0x75863507u,
    0x13bdaeb8u, 0xb1f52869u, 0x502ca21au, 0xee641bcbu, 0x8c9b957cu, 0x2ad30f2du, 0xc90a88deu, 0x6742028fu,
    0x05797c40u, 0xa3b0f5f1u, 0x41e86fa2u, 0xe01fe953u, 0x7e576304u, 0x1c8edcb5u, 0xbac65666u, 0x58fdd017u,
    0xf73549c8u, 0x956cc379u, 0x33a43d2au, 0xd1dbb6dbu, 0x7013308cu, 0x0e4aaa3du, 0xac8223eeu, 0x4ab99d9fu,
    0xe8f11750u, 0x87289101u, 0x25600ab2u, 0xc3978463u, 0x61cefe14u, 0x000677c5u, 0x9e3df176u, 0x3c756b27u,
    0xdaace4d8u, 0x78e45e89u, 0x171bd83au, 0xb55351ebu, 0x538acb9cu, 0xf1c2454du, 0x8ff9befeu, 0x2e3138afu,
    0xcc68b260u, 0x6aa02c11u, 0x08d7a5c2u, 0xa70f1f73u, 0x45469924u, 0xe37e12d5u, 0x81b58c86u, 0x1fed0637u,
    0xbe247fe8u, 0x5c5bf999u, 0xfa93734au, 0x98caecfbu, 0x370266acu, 0xd539e05du, 0x73715a0eu, 0x11a8d3bfu,
};

static const uint32_t bshim_031_tab4[96] = {
    0xdcc1bfd1u, 0x7af93982u, 0x1930b333u, 0xb7682ce4u, 0x559fa695u, 0xf3d72046u, 0x920e99f7u, 0x304613a8u,
    0xce7d8d59u, 0x6cb5070au, 0x0aec80bbu, 0xa923fa6cu, 0x475b741du, 0xe592edceu, 0x83ca677fu, 0x2201e130u,
    0xc0395ae1u, 0x5e70d492u, 0xfca84e43u, 0x9adfc7f4u, 0x391741a5u, 0xd74ebb56u, 0x75863507u, 0x13bdaeb8u,
    0xb1f52869u, 0x502ca21au, 0xee641bcbu, 0x8c9b957cu, 0x2ad30f2du, 0xc90a88deu, 0x6742028fu, 0x05797c40u,
    0xa3b0f5f1u, 0x41e86fa2u, 0xe01fe953u, 0x7e576304u, 0x1c8edcb5u, 0xbac65666u, 0x58fdd017u, 0xf73549c8u,
    0x956cc379u, 0x33a43d2au, 0xd1dbb6dbu, 0x7013308cu, 0x0e4aaa3du, 0xac8223eeu, 0x4ab99d9fu, 0xe8f11750u,
    0x87289101u, 0x25600ab2u, 0xc3978463u, 0x61cefe14u, 0x000677c5u, 0x9e3df176u, 0x3c756b27u, 0xdaace4d8u,
    0x78e45e89u, 0x171bd83au, 0xb55351ebu, 0x538acb9cu, 0xf1c2454du, 0x8ff9befeu, 0x2e3138afu, 0xcc68b260u,
    0x6aa02c11u, 0x08d7a5c2u, 0xa70f1f73u, 0x45469924u, 0xe37e12d5u, 0x81b58c86u, 0x1fed0637u, 0xbe247fe8u,
    0x5c5bf999u, 0xfa93734au, 0x98caecfbu, 0x370266acu, 0xd539e05du, 0x73715a0eu, 0x11a8d3bfu, 0xafe04d70u,
    0x4e17c721u, 0xec4f40d2u, 0x8a86ba83u, 0x28be3434u, 0xc6f5ade5u, 0x652d2796u, 0x0364a147u, 0xa19c1af8u,
    0x3fd394a9u, 0xde0b0e5au, 0x7c42880bu, 0x1a7a01bcu, 0xb8b17b6du, 0x56e8f51eu, 0xf5206ecfu, 0x9357e880u,
};

static const uint32_t bshim_031_tab5[96] = {
    0x5e70d492u, 0xfca84e43u, 0x9adfc7f4u, 0x391741a5u, 0xd74ebb56u, 0x75863507u, 0x13bdaeb8u, 0xb1f52869u,
    0x502ca21au, 0xee641bcbu, 0x8c9b957cu, 0x2ad30f2du, 0xc90a88deu, 0x6742028fu, 0x05797c40u, 0xa3b0f5f1u,
    0x41e86fa2u, 0xe01fe953u, 0x7e576304u, 0x1c8edcb5u, 0xbac65666u, 0x58fdd017u, 0xf73549c8u, 0x956cc379u,
    0x33a43d2au, 0xd1dbb6dbu, 0x7013308cu, 0x0e4aaa3du, 0xac8223eeu, 0x4ab99d9fu, 0xe8f11750u, 0x87289101u,
    0x25600ab2u, 0xc3978463u, 0x61cefe14u, 0x000677c5u, 0x9e3df176u, 0x3c756b27u, 0xdaace4d8u, 0x78e45e89u,
    0x171bd83au, 0xb55351ebu, 0x538acb9cu, 0xf1c2454du, 0x8ff9befeu, 0x2e3138afu, 0xcc68b260u, 0x6aa02c11u,
    0x08d7a5c2u, 0xa70f1f73u, 0x45469924u, 0xe37e12d5u, 0x81b58c86u, 0x1fed0637u, 0xbe247fe8u, 0x5c5bf999u,
    0xfa93734au, 0x98caecfbu, 0x370266acu, 0xd539e05du, 0x73715a0eu, 0x11a8d3bfu, 0xafe04d70u, 0x4e17c721u,
    0xec4f40d2u, 0x8a86ba83u, 0x28be3434u, 0xc6f5ade5u, 0x652d2796u, 0x0364a147u, 0xa19c1af8u, 0x3fd394a9u,
    0xde0b0e5au, 0x7c42880bu, 0x1a7a01bcu, 0xb8b17b6du, 0x56e8f51eu, 0xf5206ecfu, 0x9357e880u, 0x318f6231u,
    0xcfc6dbe2u, 0x6dfe5593u, 0x0c35cf44u, 0xaa6d48f5u, 0x48a4c2a6u, 0xe6dc3c57u, 0x8513b608u, 0x234b2fb9u,
    0xc182a96au, 0x5fba231bu, 0xfdf19cccu, 0x9c29167du, 0x3a60902eu, 0xd89809dfu, 0x76cf8390u, 0x1506fd41u,
};

static const uint32_t bshim_031_tab6[96] = {
    0xe01fe953u, 0x7e576304u, 0x1c8edcb5u, 0xbac65666u, 0x58fdd017u, 0xf73549c8u, 0x956cc379u, 0x33a43d2au,
    0xd1dbb6dbu, 0x7013308cu, 0x0e4aaa3du, 0xac8223eeu, 0x4ab99d9fu, 0xe8f11750u, 0x87289101u, 0x25600ab2u,
    0xc3978463u, 0x61cefe14u, 0x000677c5u, 0x9e3df176u, 0x3c756b27u, 0xdaace4d8u, 0x78e45e89u, 0x171bd83au,
    0xb55351ebu, 0x538acb9cu, 0xf1c2454du, 0x8ff9befeu, 0x2e3138afu, 0xcc68b260u, 0x6aa02c11u, 0x08d7a5c2u,
    0xa70f1f73u, 0x45469924u, 0xe37e12d5u, 0x81b58c86u, 0x1fed0637u, 0xbe247fe8u, 0x5c5bf999u, 0xfa93734au,
    0x98caecfbu, 0x370266acu, 0xd539e05du, 0x73715a0eu, 0x11a8d3bfu, 0xafe04d70u, 0x4e17c721u, 0xec4f40d2u,
    0x8a86ba83u, 0x28be3434u, 0xc6f5ade5u, 0x652d2796u, 0x0364a147u, 0xa19c1af8u, 0x3fd394a9u, 0xde0b0e5au,
    0x7c42880bu, 0x1a7a01bcu, 0xb8b17b6du, 0x56e8f51eu, 0xf5206ecfu, 0x9357e880u, 0x318f6231u, 0xcfc6dbe2u,
    0x6dfe5593u, 0x0c35cf44u, 0xaa6d48f5u, 0x48a4c2a6u, 0xe6dc3c57u, 0x8513b608u, 0x234b2fb9u, 0xc182a96au,
    0x5fba231bu, 0xfdf19cccu, 0x9c29167du, 0x3a60902eu, 0xd89809dfu, 0x76cf8390u, 0x1506fd41u, 0xb33e76f2u,
    0x5175f0a3u, 0xefad6a54u, 0x8de4e405u, 0x2c1c5db6u, 0xca53d767u, 0x688b5118u, 0x06c2cac9u, 0xa4fa447au,
    0x4331be2bu, 0xe16937dcu, 0x7fa0b18du, 0x1dd82b3eu, 0xbc0fa4efu, 0x5a471ea0u, 0xf87e9851u, 0x96b61202u,
};

static const uint32_t bshim_031_tab7[96] = {
    0x61cefe14u, 0x000677c5u, 0x9e3df176u, 0x3c756b27u, 0xdaace4d8u, 0x78e45e89u, 0x171bd83au, 0xb55351ebu,
    0x538acb9cu, 0xf1c2454du, 0x8ff9befeu, 0x2e3138afu, 0xcc68b260u, 0x6aa02c11u, 0x08d7a5c2u, 0xa70f1f73u,
    0x45469924u, 0xe37e12d5u, 0x81b58c86u, 0x1fed0637u, 0xbe247fe8u, 0x5c5bf999u, 0xfa93734au, 0x98caecfbu,
    0x370266acu, 0xd539e05du, 0x73715a0eu, 0x11a8d3bfu, 0xafe04d70u, 0x4e17c721u, 0xec4f40d2u, 0x8a86ba83u,
    0x28be3434u, 0xc6f5ade5u, 0x652d2796u, 0x0364a147u, 0xa19c1af8u, 0x3fd394a9u, 0xde0b0e5au, 0x7c42880bu,
    0x1a7a01bcu, 0xb8b17b6du, 0x56e8f51eu, 0xf5206ecfu, 0x9357e880u, 0x318f6231u, 0xcfc6dbe2u, 0x6dfe5593u,
    0x0c35cf44u, 0xaa6d48f5u, 0x48a4c2a6u, 0xe6dc3c57u, 0x8513b608u, 0x234b2fb9u, 0xc182a96au, 0x5fba231bu,
    0xfdf19cccu, 0x9c29167du, 0x3a60902eu, 0xd89809dfu, 0x76cf8390u, 0x1506fd41u, 0xb33e76f2u, 0x5175f0a3u,
    0xefad6a54u, 0x8de4e405u, 0x2c1c5db6u, 0xca53d767u, 0x688b5118u, 0x06c2cac9u, 0xa4fa447au, 0x4331be2bu,
    0xe16937dcu, 0x7fa0b18du, 0x1dd82b3eu, 0xbc0fa4efu, 0x5a471ea0u, 0xf87e9851u, 0x96b61202u, 0x34ed8bb3u,
    0xd3250564u, 0x715c7f15u, 0x0f93f8c6u, 0xadcb7277u, 0x4c02ec28u, 0xea3a65d9u, 0x8871df8au, 0x26a9593bu,
    0xc4e0d2ecu, 0x63184c9du, 0x014fc64eu, 0x9f873fffu, 0x3dbeb9b0u, 0xdbf63361u, 0x7a2dad12u, 0x186526c3u,
};

struct bshim_031_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_031_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_031_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_031_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_031_reset(struct bshim_031_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0003bef1u;
    return 0;
}

