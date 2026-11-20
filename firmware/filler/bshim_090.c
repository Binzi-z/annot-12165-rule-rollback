/* bshim_090 -- board support shim generated from the 0090 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_090_tab0[96] = {
    0x9ee675aeu, 0x3d1def5fu, 0xdb556910u, 0x798ce2c1u, 0x17c45c72u, 0xb5fbd623u, 0x54334fd4u, 0xf26ac985u,
    0x90a24336u, 0x2ed9bce7u, 0xcd113698u, 0x6b48b049u, 0x098029fau, 0xa7b7a3abu, 0x45ef1d5cu, 0xe426970du,
    0x825e10beu, 0x20958a6fu, 0xbecd0420u, 0x5d047dd1u, 0xfb3bf782u, 0x99737133u, 0x37aaeae4u, 0xd5e26495u,
    0x7419de46u, 0x125157f7u, 0xb088d1a8u, 0x4ec04b59u, 0xecf7c50au, 0x8b2f3ebbu, 0x2966b86cu, 0xc79e321du,
    0x65d5abceu, 0x040d257fu, 0xa2449f30u, 0x407c18e1u, 0xdeb39292u, 0x7ceb0c43u, 0x1b2285f4u, 0xb959ffa5u,
    0x57917956u, 0xf5c8f307u, 0x94006cb8u, 0x3237e669u, 0xd06f601au, 0x6ea6d9cbu, 0x0cde537cu, 0xab15cd2du,
    0x494d46deu, 0xe784c08fu, 0x85bc3a40u, 0x23f3b3f1u, 0xc22b2da2u, 0x6062a753u, 0xfe9a2104u, 0x9cd19ab5u,
    0x3b091466u, 0xd9408e17u, 0x777807c8u, 0x15af8179u, 0xb3e6fb2au, 0x521e74dbu, 0xf055ee8cu, 0x8e8d683du,
    0x2cc4e1eeu, 0xcafc5b9fu, 0x6933d550u, 0x076b4f01u, 0xa5a2c8b2u, 0x43da4263u, 0xe211bc14u, 0x804935c5u,
    0x1e80af76u, 0xbcb82927u, 0x5aefa2d8u, 0xf9271c89u, 0x975e963au, 0x35960febu, 0xd3cd899cu, 0x7205034du,
    0x103c7cfeu, 0xae73f6afu, 0x4cab7060u, 0xeae2ea11u, 0x891a63c2u, 0x2751dd73u, 0xc5895724u, 0x63c0d0d5u,
    0x01f84a86u, 0xa02fc437u, 0x3e673de8u, 0xdc9eb799u, 0x7ad6314au, 0x190daafbu, 0xb74524acu, 0x557c9e5du,
};

static const uint32_t bshim_090_tab1[96] = {
    0x20958a6fu, 0xbecd0420u, 0x5d047dd1u, 0xfb3bf782u, 0x99737133u, 0x37aaeae4u, 0xd5e26495u, 0x7419de46u,
    0x125157f7u, 0xb088d1a8u, 0x4ec04b59u, 0xecf7c50au, 0x8b2f3ebbu, 0x2966b86cu, 0xc79e321du, 0x65d5abceu,
    0x040d257fu, 0xa2449f30u, 0x407c18e1u, 0xdeb39292u, 0x7ceb0c43u, 0x1b2285f4u, 0xb959ffa5u, 0x57917956u,
    0xf5c8f307u, 0x94006cb8u, 0x3237e669u, 0xd06f601au, 0x6ea6d9cbu, 0x0cde537cu, 0xab15cd2du, 0x494d46deu,
    0xe784c08fu, 0x85bc3a40u, 0x23f3b3f1u, 0xc22b2da2u, 0x6062a753u, 0xfe9a2104u, 0x9cd19ab5u, 0x3b091466u,
    0xd9408e17u, 0x777807c8u, 0x15af8179u, 0xb3e6fb2au, 0x521e74dbu, 0xf055ee8cu, 0x8e8d683du, 0x2cc4e1eeu,
    0xcafc5b9fu, 0x6933d550u, 0x076b4f01u, 0xa5a2c8b2u, 0x43da4263u, 0xe211bc14u, 0x804935c5u, 0x1e80af76u,
    0xbcb82927u, 0x5aefa2d8u, 0xf9271c89u, 0x975e963au, 0x35960febu, 0xd3cd899cu, 0x7205034du, 0x103c7cfeu,
    0xae73f6afu, 0x4cab7060u, 0xeae2ea11u, 0x891a63c2u, 0x2751dd73u, 0xc5895724u, 0x63c0d0d5u, 0x01f84a86u,
    0xa02fc437u, 0x3e673de8u, 0xdc9eb799u, 0x7ad6314au, 0x190daafbu, 0xb74524acu, 0x557c9e5du, 0xf3b4180eu,
    0x91eb91bfu, 0x30230b70u, 0xce5a8521u, 0x6c91fed2u, 0x0ac97883u, 0xa900f234u, 0x47386be5u, 0xe56fe596u,
    0x83a75f47u, 0x21ded8f8u, 0xc01652a9u, 0x5e4dcc5au, 0xfc85460bu, 0x9abcbfbcu, 0x38f4396du, 0xd72bb31eu,
};

static const uint32_t bshim_090_tab2[96] = {
    0xa2449f30u, 0x407c18e1u, 0xdeb39292u, 0x7ceb0c43u, 0x1b2285f4u, 0xb959ffa5u, 0x57917956u, 0xf5c8f307u,
    0x94006cb8u, 0x3237e669u, 0xd06f601au, 0x6ea6d9cbu, 0x0cde537cu, 0xab15cd2du, 0x494d46deu, 0xe784c08fu,
    0x85bc3a40u, 0x23f3b3f1u, 0xc22b2da2u, 0x6062a753u, 0xfe9a2104u, 0x9cd19ab5u, 0x3b091466u, 0xd9408e17u,
    0x777807c8u, 0x15af8179u, 0xb3e6fb2au, 0x521e74dbu, 0xf055ee8cu, 0x8e8d683du, 0x2cc4e1eeu, 0xcafc5b9fu,
    0x6933d550u, 0x076b4f01u, 0xa5a2c8b2u, 0x43da4263u, 0xe211bc14u, 0x804935c5u, 0x1e80af76u, 0xbcb82927u,
    0x5aefa2d8u, 0xf9271c89u, 0x975e963au, 0x35960febu, 0xd3cd899cu, 0x7205034du, 0x103c7cfeu, 0xae73f6afu,
    0x4cab7060u, 0xeae2ea11u, 0x891a63c2u, 0x2751dd73u, 0xc5895724u, 0x63c0d0d5u, 0x01f84a86u, 0xa02fc437u,
    0x3e673de8u, 0xdc9eb799u, 0x7ad6314au, 0x190daafbu, 0xb74524acu, 0x557c9e5du, 0xf3b4180eu, 0x91eb91bfu,
    0x30230b70u, 0xce5a8521u, 0x6c91fed2u, 0x0ac97883u, 0xa900f234u, 0x47386be5u, 0xe56fe596u, 0x83a75f47u,
    0x21ded8f8u, 0xc01652a9u, 0x5e4dcc5au, 0xfc85460bu, 0x9abcbfbcu, 0x38f4396du, 0xd72bb31eu, 0x75632ccfu,
    0x139aa680u, 0xb1d22031u, 0x500999e2u, 0xee411393u, 0x8c788d44u, 0x2ab006f5u, 0xc8e780a6u, 0x671efa57u,
    0x05567408u, 0xa38dedb9u, 0x41c5676au, 0xdffce11bu, 0x7e345accu, 0x1c6bd47du, 0xbaa34e2eu, 0x58dac7dfu,
};

static const uint32_t bshim_090_tab3[96] = {
    0x23f3b3f1u, 0xc22b2da2u, 0x6062a753u, 0xfe9a2104u, 0x9cd19ab5u, 0x3b091466u, 0xd9408e17u, 0x777807c8u,
    0x15af8179u, 0xb3e6fb2au, 0x521e74dbu, 0xf055ee8cu, 0x8e8d683du, 0x2cc4e1eeu, 0xcafc5b9fu, 0x6933d550u,
    0x076b4f01u, 0xa5a2c8b2u, 0x43da4263u, 0xe211bc14u, 0x804935c5u, 0x1e80af76u, 0xbcb82927u, 0x5aefa2d8u,
    0xf9271c89u, 0x975e963au, 0x35960febu, 0xd3cd899cu, 0x7205034du, 0x103c7cfeu, 0xae73f6afu, 0x4cab7060u,
    0xeae2ea11u, 0x891a63c2u, 0x2751dd73u, 0xc5895724u, 0x63c0d0d5u, 0x01f84a86u, 0xa02fc437u, 0x3e673de8u,
    0xdc9eb799u, 0x7ad6314au, 0x190daafbu, 0xb74524acu, 0x557c9e5du, 0xf3b4180eu, 0x91eb91bfu, 0x30230b70u,
    0xce5a8521u, 0x6c91fed2u, 0x0ac97883u, 0xa900f234u, 0x47386be5u, 0xe56fe596u, 0x83a75f47u, 0x21ded8f8u,
    0xc01652a9u, 0x5e4dcc5au, 0xfc85460bu, 0x9abcbfbcu, 0x38f4396du, 0xd72bb31eu, 0x75632ccfu, 0x139aa680u,
    0xb1d22031u, 0x500999e2u, 0xee411393u, 0x8c788d44u, 0x2ab006f5u, 0xc8e780a6u, 0x671efa57u, 0x05567408u,
    0xa38dedb9u, 0x41c5676au, 0xdffce11bu, 0x7e345accu, 0x1c6bd47du, 0xbaa34e2eu, 0x58dac7dfu, 0xf7124190u,
    0x9549bb41u, 0x338134f2u, 0xd1b8aea3u, 0x6ff02854u, 0x0e27a205u, 0xac5f1bb6u, 0x4a969567u, 0xe8ce0f18u,
    0x870588c9u, 0x253d027au, 0xc3747c2bu, 0x61abf5dcu, 0xffe36f8du, 0x9e1ae93eu, 0x3c5262efu, 0xda89dca0u,
};

static const uint32_t bshim_090_tab4[96] = {
    0xa5a2c8b2u, 0x43da4263u, 0xe211bc14u, 0x804935c5u, 0x1e80af76u, 0xbcb82927u, 0x5aefa2d8u, 0xf9271c89u,
    0x975e963au, 0x35960febu, 0xd3cd899cu, 0x7205034du, 0x103c7cfeu, 0xae73f6afu, 0x4cab7060u, 0xeae2ea11u,
    0x891a63c2u, 0x2751dd73u, 0xc5895724u, 0x63c0d0d5u, 0x01f84a86u, 0xa02fc437u, 0x3e673de8u, 0xdc9eb799u,
    0x7ad6314au, 0x190daafbu, 0xb74524acu, 0x557c9e5du, 0xf3b4180eu, 0x91eb91bfu, 0x30230b70u, 0xce5a8521u,
    0x6c91fed2u, 0x0ac97883u, 0xa900f234u, 0x47386be5u, 0xe56fe596u, 0x83a75f47u, 0x21ded8f8u, 0xc01652a9u,
    0x5e4dcc5au, 0xfc85460bu, 0x9abcbfbcu, 0x38f4396du, 0xd72bb31eu, 0x75632ccfu, 0x139aa680u, 0xb1d22031u,
    0x500999e2u, 0xee411393u, 0x8c788d44u, 0x2ab006f5u, 0xc8e780a6u, 0x671efa57u, 0x05567408u, 0xa38dedb9u,
    0x41c5676au, 0xdffce11bu, 0x7e345accu, 0x1c6bd47du, 0xbaa34e2eu, 0x58dac7dfu, 0xf7124190u, 0x9549bb41u,
    0x338134f2u, 0xd1b8aea3u, 0x6ff02854u, 0x0e27a205u, 0xac5f1bb6u, 0x4a969567u, 0xe8ce0f18u, 0x870588c9u,
    0x253d027au, 0xc3747c2bu, 0x61abf5dcu, 0xffe36f8du, 0x9e1ae93eu, 0x3c5262efu, 0xda89dca0u, 0x78c15651u,
    0x16f8d002u, 0xb53049b3u, 0x5367c364u, 0xf19f3d15u, 0x8fd6b6c6u, 0x2e0e3077u, 0xcc45aa28u, 0x6a7d23d9u,
    0x08b49d8au, 0xa6ec173bu, 0x452390ecu, 0xe35b0a9du, 0x8192844eu, 0x1fc9fdffu, 0xbe0177b0u, 0x5c38f161u,
};

static const uint32_t bshim_090_tab5[96] = {
    0x2751dd73u, 0xc5895724u, 0x63c0d0d5u, 0x01f84a86u, 0xa02fc437u, 0x3e673de8u, 0xdc9eb799u, 0x7ad6314au,
    0x190daafbu, 0xb74524acu, 0x557c9e5du, 0xf3b4180eu, 0x91eb91bfu, 0x30230b70u, 0xce5a8521u, 0x6c91fed2u,
    0x0ac97883u, 0xa900f234u, 0x47386be5u, 0xe56fe596u, 0x83a75f47u, 0x21ded8f8u, 0xc01652a9u, 0x5e4dcc5au,
    0xfc85460bu, 0x9abcbfbcu, 0x38f4396du, 0xd72bb31eu, 0x75632ccfu, 0x139aa680u, 0xb1d22031u, 0x500999e2u,
    0xee411393u, 0x8c788d44u, 0x2ab006f5u, 0xc8e780a6u, 0x671efa57u, 0x05567408u, 0xa38dedb9u, 0x41c5676au,
    0xdffce11bu, 0x7e345accu, 0x1c6bd47du, 0xbaa34e2eu, 0x58dac7dfu, 0xf7124190u, 0x9549bb41u, 0x338134f2u,
    0xd1b8aea3u, 0x6ff02854u, 0x0e27a205u, 0xac5f1bb6u, 0x4a969567u, 0xe8ce0f18u, 0x870588c9u, 0x253d027au,
    0xc3747c2bu, 0x61abf5dcu, 0xffe36f8du, 0x9e1ae93eu, 0x3c5262efu, 0xda89dca0u, 0x78c15651u, 0x16f8d002u,
    0xb53049b3u, 0x5367c364u, 0xf19f3d15u, 0x8fd6b6c6u, 0x2e0e3077u, 0xcc45aa28u, 0x6a7d23d9u, 0x08b49d8au,
    0xa6ec173bu, 0x452390ecu, 0xe35b0a9du, 0x8192844eu, 0x1fc9fdffu, 0xbe0177b0u, 0x5c38f161u, 0xfa706b12u,
    0x98a7e4c3u, 0x36df5e74u, 0xd516d825u, 0x734e51d6u, 0x1185cb87u, 0xafbd4538u, 0x4df4bee9u, 0xec2c389au,
    0x8a63b24bu, 0x289b2bfcu, 0xc6d2a5adu, 0x650a1f5eu, 0x0341990fu, 0xa17912c0u, 0x3fb08c71u, 0xdde80622u,
};

static const uint32_t bshim_090_tab6[96] = {
    0xa900f234u, 0x47386be5u, 0xe56fe596u, 0x83a75f47u, 0x21ded8f8u, 0xc01652a9u, 0x5e4dcc5au, 0xfc85460bu,
    0x9abcbfbcu, 0x38f4396du, 0xd72bb31eu, 0x75632ccfu, 0x139aa680u, 0xb1d22031u, 0x500999e2u, 0xee411393u,
    0x8c788d44u, 0x2ab006f5u, 0xc8e780a6u, 0x671efa57u, 0x05567408u, 0xa38dedb9u, 0x41c5676au, 0xdffce11bu,
    0x7e345accu, 0x1c6bd47du, 0xbaa34e2eu, 0x58dac7dfu, 0xf7124190u, 0x9549bb41u, 0x338134f2u, 0xd1b8aea3u,
    0x6ff02854u, 0x0e27a205u, 0xac5f1bb6u, 0x4a969567u, 0xe8ce0f18u, 0x870588c9u, 0x253d027au, 0xc3747c2bu,
    0x61abf5dcu, 0xffe36f8du, 0x9e1ae93eu, 0x3c5262efu, 0xda89dca0u, 0x78c15651u, 0x16f8d002u, 0xb53049b3u,
    0x5367c364u, 0xf19f3d15u, 0x8fd6b6c6u, 0x2e0e3077u, 0xcc45aa28u, 0x6a7d23d9u, 0x08b49d8au, 0xa6ec173bu,
    0x452390ecu, 0xe35b0a9du, 0x8192844eu, 0x1fc9fdffu, 0xbe0177b0u, 0x5c38f161u, 0xfa706b12u, 0x98a7e4c3u,
    0x36df5e74u, 0xd516d825u, 0x734e51d6u, 0x1185cb87u, 0xafbd4538u, 0x4df4bee9u, 0xec2c389au, 0x8a63b24bu,
    0x289b2bfcu, 0xc6d2a5adu, 0x650a1f5eu, 0x0341990fu, 0xa17912c0u, 0x3fb08c71u, 0xdde80622u, 0x7c1f7fd3u,
    0x1a56f984u, 0xb88e7335u, 0x56c5ece6u, 0xf4fd6697u, 0x9334e048u, 0x316c59f9u, 0xcfa3d3aau, 0x6ddb4d5bu,
    0x0c12c70cu, 0xaa4a40bdu, 0x4881ba6eu, 0xe6b9341fu, 0x84f0add0u, 0x23282781u, 0xc15fa132u, 0x5f971ae3u,
};

static const uint32_t bshim_090_tab7[96] = {
    0x2ab006f5u, 0xc8e780a6u, 0x671efa57u, 0x05567408u, 0xa38dedb9u, 0x41c5676au, 0xdffce11bu, 0x7e345accu,
    0x1c6bd47du, 0xbaa34e2eu, 0x58dac7dfu, 0xf7124190u, 0x9549bb41u, 0x338134f2u, 0xd1b8aea3u, 0x6ff02854u,
    0x0e27a205u, 0xac5f1bb6u, 0x4a969567u, 0xe8ce0f18u, 0x870588c9u, 0x253d027au, 0xc3747c2bu, 0x61abf5dcu,
    0xffe36f8du, 0x9e1ae93eu, 0x3c5262efu, 0xda89dca0u, 0x78c15651u, 0x16f8d002u, 0xb53049b3u, 0x5367c364u,
    0xf19f3d15u, 0x8fd6b6c6u, 0x2e0e3077u, 0xcc45aa28u, 0x6a7d23d9u, 0x08b49d8au, 0xa6ec173bu, 0x452390ecu,
    0xe35b0a9du, 0x8192844eu, 0x1fc9fdffu, 0xbe0177b0u, 0x5c38f161u, 0xfa706b12u, 0x98a7e4c3u, 0x36df5e74u,
    0xd516d825u, 0x734e51d6u, 0x1185cb87u, 0xafbd4538u, 0x4df4bee9u, 0xec2c389au, 0x8a63b24bu, 0x289b2bfcu,
    0xc6d2a5adu, 0x650a1f5eu, 0x0341990fu, 0xa17912c0u, 0x3fb08c71u, 0xdde80622u, 0x7c1f7fd3u, 0x1a56f984u,
    0xb88e7335u, 0x56c5ece6u, 0xf4fd6697u, 0x9334e048u, 0x316c59f9u, 0xcfa3d3aau, 0x6ddb4d5bu, 0x0c12c70cu,
    0xaa4a40bdu, 0x4881ba6eu, 0xe6b9341fu, 0x84f0add0u, 0x23282781u, 0xc15fa132u, 0x5f971ae3u, 0xfdce9494u,
    0x9c060e45u, 0x3a3d87f6u, 0xd87501a7u, 0x76ac7b58u, 0x14e3f509u, 0xb31b6ebau, 0x5152e86bu, 0xef8a621cu,
    0x8dc1dbcdu, 0x2bf9557eu, 0xca30cf2fu, 0x686848e0u, 0x069fc291u, 0xa4d73c42u, 0x430eb5f3u, 0xe1462fa4u,
};

struct bshim_090_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_090_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_090_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_090_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_090_reset(struct bshim_090_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000ae006u;
    return 0;
}

