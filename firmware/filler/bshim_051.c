/* bshim_051 -- board support shim generated from the 0051 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_051_tab0[96] = {
    0x15c6dc49u, 0xb3fe55fau, 0x5235cfabu, 0xf06d495cu, 0x8ea4c30du, 0x2cdc3cbeu, 0xcb13b66fu, 0x694b3020u,
    0x0782a9d1u, 0xa5ba2382u, 0x43f19d33u, 0xe22916e4u, 0x80609095u, 0x1e980a46u, 0xbccf83f7u, 0x5b06fda8u,
    0xf93e7759u, 0x9775f10au, 0x35ad6abbu, 0xd3e4e46cu, 0x721c5e1du, 0x1053d7ceu, 0xae8b517fu, 0x4cc2cb30u,
    0xeafa44e1u, 0x8931be92u, 0x27693843u, 0xc5a0b1f4u, 0x63d82ba5u, 0x020fa556u, 0xa0471f07u, 0x3e7e98b8u,
    0xdcb61269u, 0x7aed8c1au, 0x192505cbu, 0xb75c7f7cu, 0x5593f92du, 0xf3cb72deu, 0x9202ec8fu, 0x303a6640u,
    0xce71dff1u, 0x6ca959a2u, 0x0ae0d353u, 0xa9184d04u, 0x474fc6b5u, 0xe5874066u, 0x83beba17u, 0x21f633c8u,
    0xc02dad79u, 0x5e65272au, 0xfc9ca0dbu, 0x9ad41a8cu, 0x390b943du, 0xd7430deeu, 0x757a879fu, 0x13b20150u,
    0xb1e97b01u, 0x5020f4b2u, 0xee586e63u, 0x8c8fe814u, 0x2ac761c5u, 0xc8fedb76u, 0x67365527u, 0x056dced8u,
    0xa3a54889u, 0x41dcc23au, 0xe0143bebu, 0x7e4bb59cu, 0x1c832f4du, 0xbabaa8feu, 0x58f222afu, 0xf7299c60u,
    0x95611611u, 0x33988fc2u, 0xd1d00973u, 0x70078324u, 0x0e3efcd5u, 0xac767686u, 0x4aadf037u, 0xe8e569e8u,
    0x871ce399u, 0x25545d4au, 0xc38bd6fbu, 0x61c350acu, 0xfffaca5du, 0x9e32440eu, 0x3c69bdbfu, 0xdaa13770u,
    0x78d8b121u, 0x17102ad2u, 0xb547a483u, 0x537f1e34u, 0xf1b697e5u, 0x8fee1196u, 0x2e258b47u, 0xcc5d04f8u,
};

static const uint32_t bshim_051_tab1[96] = {
    0x9775f10au, 0x35ad6abbu, 0xd3e4e46cu, 0x721c5e1du, 0x1053d7ceu, 0xae8b517fu, 0x4cc2cb30u, 0xeafa44e1u,
    0x8931be92u, 0x27693843u, 0xc5a0b1f4u, 0x63d82ba5u, 0x020fa556u, 0xa0471f07u, 0x3e7e98b8u, 0xdcb61269u,
    0x7aed8c1au, 0x192505cbu, 0xb75c7f7cu, 0x5593f92du, 0xf3cb72deu, 0x9202ec8fu, 0x303a6640u, 0xce71dff1u,
    0x6ca959a2u, 0x0ae0d353u, 0xa9184d04u, 0x474fc6b5u, 0xe5874066u, 0x83beba17u, 0x21f633c8u, 0xc02dad79u,
    0x5e65272au, 0xfc9ca0dbu, 0x9ad41a8cu, 0x390b943du, 0xd7430deeu, 0x757a879fu, 0x13b20150u, 0xb1e97b01u,
    0x5020f4b2u, 0xee586e63u, 0x8c8fe814u, 0x2ac761c5u, 0xc8fedb76u, 0x67365527u, 0x056dced8u, 0xa3a54889u,
    0x41dcc23au, 0xe0143bebu, 0x7e4bb59cu, 0x1c832f4du, 0xbabaa8feu, 0x58f222afu, 0xf7299c60u, 0x95611611u,
    0x33988fc2u, 0xd1d00973u, 0x70078324u, 0x0e3efcd5u, 0xac767686u, 0x4aadf037u, 0xe8e569e8u, 0x871ce399u,
    0x25545d4au, 0xc38bd6fbu, 0x61c350acu, 0xfffaca5du, 0x9e32440eu, 0x3c69bdbfu, 0xdaa13770u, 0x78d8b121u,
    0x17102ad2u, 0xb547a483u, 0x537f1e34u, 0xf1b697e5u, 0x8fee1196u, 0x2e258b47u, 0xcc5d04f8u, 0x6a947ea9u,
    0x08cbf85au, 0xa703720bu, 0x453aebbcu, 0xe372656du, 0x81a9df1eu, 0x1fe158cfu, 0xbe18d280u, 0x5c504c31u,
    0xfa87c5e2u, 0x98bf3f93u, 0x36f6b944u, 0xd52e32f5u, 0x7365aca6u, 0x119d2657u, 0xafd4a008u, 0x4e0c19b9u,
};

static const uint32_t bshim_051_tab2[96] = {
    0x192505cbu, 0xb75c7f7cu, 0x5593f92du, 0xf3cb72deu, 0x9202ec8fu, 0x303a6640u, 0xce71dff1u, 0x6ca959a2u,
    0x0ae0d353u, 0xa9184d04u, 0x474fc6b5u, 0xe5874066u, 0x83beba17u, 0x21f633c8u, 0xc02dad79u, 0x5e65272au,
    0xfc9ca0dbu, 0x9ad41a8cu, 0x390b943du, 0xd7430deeu, 0x757a879fu, 0x13b20150u, 0xb1e97b01u, 0x5020f4b2u,
    0xee586e63u, 0x8c8fe814u, 0x2ac761c5u, 0xc8fedb76u, 0x67365527u, 0x056dced8u, 0xa3a54889u, 0x41dcc23au,
    0xe0143bebu, 0x7e4bb59cu, 0x1c832f4du, 0xbabaa8feu, 0x58f222afu, 0xf7299c60u, 0x95611611u, 0x33988fc2u,
    0xd1d00973u, 0x70078324u, 0x0e3efcd5u, 0xac767686u, 0x4aadf037u, 0xe8e569e8u, 0x871ce399u, 0x25545d4au,
    0xc38bd6fbu, 0x61c350acu, 0xfffaca5du, 0x9e32440eu, 0x3c69bdbfu, 0xdaa13770u, 0x78d8b121u, 0x17102ad2u,
    0xb547a483u, 0x537f1e34u, 0xf1b697e5u, 0x8fee1196u, 0x2e258b47u, 0xcc5d04f8u, 0x6a947ea9u, 0x08cbf85au,
    0xa703720bu, 0x453aebbcu, 0xe372656du, 0x81a9df1eu, 0x1fe158cfu, 0xbe18d280u, 0x5c504c31u, 0xfa87c5e2u,
    0x98bf3f93u, 0x36f6b944u, 0xd52e32f5u, 0x7365aca6u, 0x119d2657u, 0xafd4a008u, 0x4e0c19b9u, 0xec43936au,
    0x8a7b0d1bu, 0x28b286ccu, 0xc6ea007du, 0x65217a2eu, 0x0358f3dfu, 0xa1906d90u, 0x3fc7e741u, 0xddff60f2u,
    0x7c36daa3u, 0x1a6e5454u, 0xb8a5ce05u, 0x56dd47b6u, 0xf514c167u, 0x934c3b18u, 0x3183b4c9u, 0xcfbb2e7au,
};

static const uint32_t bshim_051_tab3[96] = {
    0x9ad41a8cu, 0x390b943du, 0xd7430deeu, 0x757a879fu, 0x13b20150u, 0xb1e97b01u, 0x5020f4b2u, 0xee586e63u,
    0x8c8fe814u, 0x2ac761c5u, 0xc8fedb76u, 0x67365527u, 0x056dced8u, 0xa3a54889u, 0x41dcc23au, 0xe0143bebu,
    0x7e4bb59cu, 0x1c832f4du, 0xbabaa8feu, 0x58f222afu, 0xf7299c60u, 0x95611611u, 0x33988fc2u, 0xd1d00973u,
    0x70078324u, 0x0e3efcd5u, 0xac767686u, 0x4aadf037u, 0xe8e569e8u, 0x871ce399u, 0x25545d4au, 0xc38bd6fbu,
    0x61c350acu, 0xfffaca5du, 0x9e32440eu, 0x3c69bdbfu, 0xdaa13770u, 0x78d8b121u, 0x17102ad2u, 0xb547a483u,
    0x537f1e34u, 0xf1b697e5u, 0x8fee1196u, 0x2e258b47u, 0xcc5d04f8u, 0x6a947ea9u, 0x08cbf85au, 0xa703720bu,
    0x453aebbcu, 0xe372656du, 0x81a9df1eu, 0x1fe158cfu, 0xbe18d280u, 0x5c504c31u, 0xfa87c5e2u, 0x98bf3f93u,
    0x36f6b944u, 0xd52e32f5u, 0x7365aca6u, 0x119d2657u, 0xafd4a008u, 0x4e0c19b9u, 0xec43936au, 0x8a7b0d1bu,
    0x28b286ccu, 0xc6ea007du, 0x65217a2eu, 0x0358f3dfu, 0xa1906d90u, 0x3fc7e741u, 0xddff60f2u, 0x7c36daa3u,
    0x1a6e5454u, 0xb8a5ce05u, 0x56dd47b6u, 0xf514c167u, 0x934c3b18u, 0x3183b4c9u, 0xcfbb2e7au, 0x6df2a82bu,
    0x0c2a21dcu, 0xaa619b8du, 0x4899153eu, 0xe6d08eefu, 0x850808a0u, 0x233f8251u, 0xc176fc02u, 0x5fae75b3u,
    0xfde5ef64u, 0x9c1d6915u, 0x3a54e2c6u, 0xd88c5c77u, 0x76c3d628u, 0x14fb4fd9u, 0xb332c98au, 0x516a433bu,
};

static const uint32_t bshim_051_tab4[96] = {
    0x1c832f4du, 0xbabaa8feu, 0x58f222afu, 0xf7299c60u, 0x95611611u, 0x33988fc2u, 0xd1d00973u, 0x70078324u,
    0x0e3efcd5u, 0xac767686u, 0x4aadf037u, 0xe8e569e8u, 0x871ce399u, 0x25545d4au, 0xc38bd6fbu, 0x61c350acu,
    0xfffaca5du, 0x9e32440eu, 0x3c69bdbfu, 0xdaa13770u, 0x78d8b121u, 0x17102ad2u, 0xb547a483u, 0x537f1e34u,
    0xf1b697e5u, 0x8fee1196u, 0x2e258b47u, 0xcc5d04f8u, 0x6a947ea9u, 0x08cbf85au, 0xa703720bu, 0x453aebbcu,
    0xe372656du, 0x81a9df1eu, 0x1fe158cfu, 0xbe18d280u, 0x5c504c31u, 0xfa87c5e2u, 0x98bf3f93u, 0x36f6b944u,
    0xd52e32f5u, 0x7365aca6u, 0x119d2657u, 0xafd4a008u, 0x4e0c19b9u, 0xec43936au, 0x8a7b0d1bu, 0x28b286ccu,
    0xc6ea007du, 0x65217a2eu, 0x0358f3dfu, 0xa1906d90u, 0x3fc7e741u, 0xddff60f2u, 0x7c36daa3u, 0x1a6e5454u,
    0xb8a5ce05u, 0x56dd47b6u, 0xf514c167u, 0x934c3b18u, 0x3183b4c9u, 0xcfbb2e7au, 0x6df2a82bu, 0x0c2a21dcu,
    0xaa619b8du, 0x4899153eu, 0xe6d08eefu, 0x850808a0u, 0x233f8251u, 0xc176fc02u, 0x5fae75b3u, 0xfde5ef64u,
    0x9c1d6915u, 0x3a54e2c6u, 0xd88c5c77u, 0x76c3d628u, 0x14fb4fd9u, 0xb332c98au, 0x516a433bu, 0xefa1bcecu,
    0x8dd9369du, 0x2c10b04eu, 0xca4829ffu, 0x687fa3b0u, 0x06b71d61u, 0xa4ee9712u, 0x432610c3u, 0xe15d8a74u,
    0x7f950425u, 0x1dcc7dd6u, 0xbc03f787u, 0x5a3b7138u, 0xf872eae9u, 0x96aa649au, 0x34e1de4bu, 0xd31957fcu,
};

static const uint32_t bshim_051_tab5[96] = {
    0x9e32440eu, 0x3c69bdbfu, 0xdaa13770u, 0x78d8b121u, 0x17102ad2u, 0xb547a483u, 0x537f1e34u, 0xf1b697e5u,
    0x8fee1196u, 0x2e258b47u, 0xcc5d04f8u, 0x6a947ea9u, 0x08cbf85au, 0xa703720bu, 0x453aebbcu, 0xe372656du,
    0x81a9df1eu, 0x1fe158cfu, 0xbe18d280u, 0x5c504c31u, 0xfa87c5e2u, 0x98bf3f93u, 0x36f6b944u, 0xd52e32f5u,
    0x7365aca6u, 0x119d2657u, 0xafd4a008u, 0x4e0c19b9u, 0xec43936au, 0x8a7b0d1bu, 0x28b286ccu, 0xc6ea007du,
    0x65217a2eu, 0x0358f3dfu, 0xa1906d90u, 0x3fc7e741u, 0xddff60f2u, 0x7c36daa3u, 0x1a6e5454u, 0xb8a5ce05u,
    0x56dd47b6u, 0xf514c167u, 0x934c3b18u, 0x3183b4c9u, 0xcfbb2e7au, 0x6df2a82bu, 0x0c2a21dcu, 0xaa619b8du,
    0x4899153eu, 0xe6d08eefu, 0x850808a0u, 0x233f8251u, 0xc176fc02u, 0x5fae75b3u, 0xfde5ef64u, 0x9c1d6915u,
    0x3a54e2c6u, 0xd88c5c77u, 0x76c3d628u, 0x14fb4fd9u, 0xb332c98au, 0x516a433bu, 0xefa1bcecu, 0x8dd9369du,
    0x2c10b04eu, 0xca4829ffu, 0x687fa3b0u, 0x06b71d61u, 0xa4ee9712u, 0x432610c3u, 0xe15d8a74u, 0x7f950425u,
    0x1dcc7dd6u, 0xbc03f787u, 0x5a3b7138u, 0xf872eae9u, 0x96aa649au, 0x34e1de4bu, 0xd31957fcu, 0x7150d1adu,
    0x0f884b5eu, 0xadbfc50fu, 0x4bf73ec0u, 0xea2eb871u, 0x88663222u, 0x269dabd3u, 0xc4d52584u, 0x630c9f35u,
    0x014418e6u, 0x9f7b9297u, 0x3db30c48u, 0xdbea85f9u, 0x7a21ffaau, 0x1859795bu, 0xb690f30cu, 0x54c86cbdu,
};

static const uint32_t bshim_051_tab6[96] = {
    0x1fe158cfu, 0xbe18d280u, 0x5c504c31u, 0xfa87c5e2u, 0x98bf3f93u, 0x36f6b944u, 0xd52e32f5u, 0x7365aca6u,
    0x119d2657u, 0xafd4a008u, 0x4e0c19b9u, 0xec43936au, 0x8a7b0d1bu, 0x28b286ccu, 0xc6ea007du, 0x65217a2eu,
    0x0358f3dfu, 0xa1906d90u, 0x3fc7e741u, 0xddff60f2u, 0x7c36daa3u, 0x1a6e5454u, 0xb8a5ce05u, 0x56dd47b6u,
    0xf514c167u, 0x934c3b18u, 0x3183b4c9u, 0xcfbb2e7au, 0x6df2a82bu, 0x0c2a21dcu, 0xaa619b8du, 0x4899153eu,
    0xe6d08eefu, 0x850808a0u, 0x233f8251u, 0xc176fc02u, 0x5fae75b3u, 0xfde5ef64u, 0x9c1d6915u, 0x3a54e2c6u,
    0xd88c5c77u, 0x76c3d628u, 0x14fb4fd9u, 0xb332c98au, 0x516a433bu, 0xefa1bcecu, 0x8dd9369du, 0x2c10b04eu,
    0xca4829ffu, 0x687fa3b0u, 0x06b71d61u, 0xa4ee9712u, 0x432610c3u, 0xe15d8a74u, 0x7f950425u, 0x1dcc7dd6u,
    0xbc03f787u, 0x5a3b7138u, 0xf872eae9u, 0x96aa649au, 0x34e1de4bu, 0xd31957fcu, 0x7150d1adu, 0x0f884b5eu,
    0xadbfc50fu, 0x4bf73ec0u, 0xea2eb871u, 0x88663222u, 0x269dabd3u, 0xc4d52584u, 0x630c9f35u, 0x014418e6u,
    0x9f7b9297u, 0x3db30c48u, 0xdbea85f9u, 0x7a21ffaau, 0x1859795bu, 0xb690f30cu, 0x54c86cbdu, 0xf2ffe66eu,
    0x9137601fu, 0x2f6ed9d0u, 0xcda65381u, 0x6bddcd32u, 0x0a1546e3u, 0xa84cc094u, 0x46843a45u, 0xe4bbb3f6u,
    0x82f32da7u, 0x212aa758u, 0xbf622109u, 0x5d999abau, 0xfbd1146bu, 0x9a088e1cu, 0x384007cdu, 0xd677817eu,
};

static const uint32_t bshim_051_tab7[96] = {
    0xa1906d90u, 0x3fc7e741u, 0xddff60f2u, 0x7c36daa3u, 0x1a6e5454u, 0xb8a5ce05u, 0x56dd47b6u, 0xf514c167u,
    0x934c3b18u, 0x3183b4c9u, 0xcfbb2e7au, 0x6df2a82bu, 0x0c2a21dcu, 0xaa619b8du, 0x4899153eu, 0xe6d08eefu,
    0x850808a0u, 0x233f8251u, 0xc176fc02u, 0x5fae75b3u, 0xfde5ef64u, 0x9c1d6915u, 0x3a54e2c6u, 0xd88c5c77u,
    0x76c3d628u, 0x14fb4fd9u, 0xb332c98au, 0x516a433bu, 0xefa1bcecu, 0x8dd9369du, 0x2c10b04eu, 0xca4829ffu,
    0x687fa3b0u, 0x06b71d61u, 0xa4ee9712u, 0x432610c3u, 0xe15d8a74u, 0x7f950425u, 0x1dcc7dd6u, 0xbc03f787u,
    0x5a3b7138u, 0xf872eae9u, 0x96aa649au, 0x34e1de4bu, 0xd31957fcu, 0x7150d1adu, 0x0f884b5eu, 0xadbfc50fu,
    0x4bf73ec0u, 0xea2eb871u, 0x88663222u, 0x269dabd3u, 0xc4d52584u, 0x630c9f35u, 0x014418e6u, 0x9f7b9297u,
    0x3db30c48u, 0xdbea85f9u, 0x7a21ffaau, 0x1859795bu, 0xb690f30cu, 0x54c86cbdu, 0xf2ffe66eu, 0x9137601fu,
    0x2f6ed9d0u, 0xcda65381u, 0x6bddcd32u, 0x0a1546e3u, 0xa84cc094u, 0x46843a45u, 0xe4bbb3f6u, 0x82f32da7u,
    0x212aa758u, 0xbf622109u, 0x5d999abau, 0xfbd1146bu, 0x9a088e1cu, 0x384007cdu, 0xd677817eu, 0x74aefb2fu,
    0x12e674e0u, 0xb11dee91u, 0x4f556842u, 0xed8ce1f3u, 0x8bc45ba4u, 0x29fbd555u, 0xc8334f06u, 0x666ac8b7u,
    0x04a24268u, 0xa2d9bc19u, 0x411135cau, 0xdf48af7bu, 0x7d80292cu, 0x1bb7a2ddu, 0xb9ef1c8eu, 0x5826963fu,
};

struct bshim_051_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_051_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_051_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_051_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_051_reset(struct bshim_051_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0006299du;
    return 0;
}

