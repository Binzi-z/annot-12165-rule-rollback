/* bshim_146 -- board support shim generated from the 0146 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_146_tab0[96] = {
    0x849dadd6u, 0x22d52787u, 0xc10ca138u, 0x5f441ae9u, 0xfd7b949au, 0x9bb30e4bu, 0x39ea87fcu, 0xd82201adu,
    0x76597b5eu, 0x1490f50fu, 0xb2c86ec0u, 0x50ffe871u, 0xef376222u, 0x8d6edbd3u, 0x2ba65584u, 0xc9ddcf35u,
    0x681548e6u, 0x064cc297u, 0xa4843c48u, 0x42bbb5f9u, 0xe0f32faau, 0x7f2aa95bu, 0x1d62230cu, 0xbb999cbdu,
    0x59d1166eu, 0xf808901fu, 0x964009d0u, 0x34778381u, 0xd2aefd32u, 0x70e676e3u, 0x0f1df094u, 0xad556a45u,
    0x4b8ce3f6u, 0xe9c45da7u, 0x87fbd758u, 0x26335109u, 0xc46acabau, 0x62a2446bu, 0x00d9be1cu, 0x9f1137cdu,
    0x3d48b17eu, 0xdb802b2fu, 0x79b7a4e0u, 0x17ef1e91u, 0xb6269842u, 0x545e11f3u, 0xf2958ba4u, 0x90cd0555u,
    0x2f047f06u, 0xcd3bf8b7u, 0x6b737268u, 0x09aaec19u, 0xa7e265cau, 0x4619df7bu, 0xe451592cu, 0x8288d2ddu,
    0x20c04c8eu, 0xbef7c63fu, 0x5d2f3ff0u, 0xfb66b9a1u, 0x999e3352u, 0x37d5ad03u, 0xd60d26b4u, 0x7444a065u,
    0x127c1a16u, 0xb0b393c7u, 0x4eeb0d78u, 0xed228729u, 0x8b5a00dau, 0x29917a8bu, 0xc7c8f43cu, 0x66006dedu,
    0x0437e79eu, 0xa26f614fu, 0x40a6db00u, 0xdede54b1u, 0x7d15ce62u, 0x1b4d4813u, 0xb984c1c4u, 0x57bc3b75u,
    0xf5f3b526u, 0x942b2ed7u, 0x3262a888u, 0xd09a2239u, 0x6ed19beau, 0x0d09159bu, 0xab408f4cu, 0x497808fdu,
    0xe7af82aeu, 0x85e6fc5fu, 0x241e7610u, 0xc255efc1u, 0x608d6972u, 0xfec4e323u, 0x9cfc5cd4u, 0x3b33d685u,
};

static const uint32_t bshim_146_tab1[96] = {
    0x064cc297u, 0xa4843c48u, 0x42bbb5f9u, 0xe0f32faau, 0x7f2aa95bu, 0x1d62230cu, 0xbb999cbdu, 0x59d1166eu,
    0xf808901fu, 0x964009d0u, 0x34778381u, 0xd2aefd32u, 0x70e676e3u, 0x0f1df094u, 0xad556a45u, 0x4b8ce3f6u,
    0xe9c45da7u, 0x87fbd758u, 0x26335109u, 0xc46acabau, 0x62a2446bu, 0x00d9be1cu, 0x9f1137cdu, 0x3d48b17eu,
    0xdb802b2fu, 0x79b7a4e0u, 0x17ef1e91u, 0xb6269842u, 0x545e11f3u, 0xf2958ba4u, 0x90cd0555u, 0x2f047f06u,
    0xcd3bf8b7u, 0x6b737268u, 0x09aaec19u, 0xa7e265cau, 0x4619df7bu, 0xe451592cu, 0x8288d2ddu, 0x20c04c8eu,
    0xbef7c63fu, 0x5d2f3ff0u, 0xfb66b9a1u, 0x999e3352u, 0x37d5ad03u, 0xd60d26b4u, 0x7444a065u, 0x127c1a16u,
    0xb0b393c7u, 0x4eeb0d78u, 0xed228729u, 0x8b5a00dau, 0x29917a8bu, 0xc7c8f43cu, 0x66006dedu, 0x0437e79eu,
    0xa26f614fu, 0x40a6db00u, 0xdede54b1u, 0x7d15ce62u, 0x1b4d4813u, 0xb984c1c4u, 0x57bc3b75u, 0xf5f3b526u,
    0x942b2ed7u, 0x3262a888u, 0xd09a2239u, 0x6ed19beau, 0x0d09159bu, 0xab408f4cu, 0x497808fdu, 0xe7af82aeu,
    0x85e6fc5fu, 0x241e7610u, 0xc255efc1u, 0x608d6972u, 0xfec4e323u, 0x9cfc5cd4u, 0x3b33d685u, 0xd96b5036u,
    0x77a2c9e7u, 0x15da4398u, 0xb411bd49u, 0x524936fau, 0xf080b0abu, 0x8eb82a5cu, 0x2cefa40du, 0xcb271dbeu,
    0x695e976fu, 0x07961120u, 0xa5cd8ad1u, 0x44050482u, 0xe23c7e33u, 0x8073f7e4u, 0x1eab7195u, 0xbce2eb46u,
};

static const uint32_t bshim_146_tab2[96] = {
    0x87fbd758u, 0x26335109u, 0xc46acabau, 0x62a2446bu, 0x00d9be1cu, 0x9f1137cdu, 0x3d48b17eu, 0xdb802b2fu,
    0x79b7a4e0u, 0x17ef1e91u, 0xb6269842u, 0x545e11f3u, 0xf2958ba4u, 0x90cd0555u, 0x2f047f06u, 0xcd3bf8b7u,
    0x6b737268u, 0x09aaec19u, 0xa7e265cau, 0x4619df7bu, 0xe451592cu, 0x8288d2ddu, 0x20c04c8eu, 0xbef7c63fu,
    0x5d2f3ff0u, 0xfb66b9a1u, 0x999e3352u, 0x37d5ad03u, 0xd60d26b4u, 0x7444a065u, 0x127c1a16u, 0xb0b393c7u,
    0x4eeb0d78u, 0xed228729u, 0x8b5a00dau, 0x29917a8bu, 0xc7c8f43cu, 0x66006dedu, 0x0437e79eu, 0xa26f614fu,
    0x40a6db00u, 0xdede54b1u, 0x7d15ce62u, 0x1b4d4813u, 0xb984c1c4u, 0x57bc3b75u, 0xf5f3b526u, 0x942b2ed7u,
    0x3262a888u, 0xd09a2239u, 0x6ed19beau, 0x0d09159bu, 0xab408f4cu, 0x497808fdu, 0xe7af82aeu, 0x85e6fc5fu,
    0x241e7610u, 0xc255efc1u, 0x608d6972u, 0xfec4e323u, 0x9cfc5cd4u, 0x3b33d685u, 0xd96b5036u, 0x77a2c9e7u,
    0x15da4398u, 0xb411bd49u, 0x524936fau, 0xf080b0abu, 0x8eb82a5cu, 0x2cefa40du, 0xcb271dbeu, 0x695e976fu,
    0x07961120u, 0xa5cd8ad1u, 0x44050482u, 0xe23c7e33u, 0x8073f7e4u, 0x1eab7195u, 0xbce2eb46u, 0x5b1a64f7u,
    0xf951dea8u, 0x97895859u, 0x35c0d20au, 0xd3f84bbbu, 0x722fc56cu, 0x10673f1du, 0xae9eb8ceu, 0x4cd6327fu,
    0xeb0dac30u, 0x894525e1u, 0x277c9f92u, 0xc5b41943u, 0x63eb92f4u, 0x02230ca5u, 0xa05a8656u, 0x3e920007u,
};

static const uint32_t bshim_146_tab3[96] = {
    0x09aaec19u, 0xa7e265cau, 0x4619df7bu, 0xe451592cu, 0x8288d2ddu, 0x20c04c8eu, 0xbef7c63fu, 0x5d2f3ff0u,
    0xfb66b9a1u, 0x999e3352u, 0x37d5ad03u, 0xd60d26b4u, 0x7444a065u, 0x127c1a16u, 0xb0b393c7u, 0x4eeb0d78u,
    0xed228729u, 0x8b5a00dau, 0x29917a8bu, 0xc7c8f43cu, 0x66006dedu, 0x0437e79eu, 0xa26f614fu, 0x40a6db00u,
    0xdede54b1u, 0x7d15ce62u, 0x1b4d4813u, 0xb984c1c4u, 0x57bc3b75u, 0xf5f3b526u, 0x942b2ed7u, 0x3262a888u,
    0xd09a2239u, 0x6ed19beau, 0x0d09159bu, 0xab408f4cu, 0x497808fdu, 0xe7af82aeu, 0x85e6fc5fu, 0x241e7610u,
    0xc255efc1u, 0x608d6972u, 0xfec4e323u, 0x9cfc5cd4u, 0x3b33d685u, 0xd96b5036u, 0x77a2c9e7u, 0x15da4398u,
    0xb411bd49u, 0x524936fau, 0xf080b0abu, 0x8eb82a5cu, 0x2cefa40du, 0xcb271dbeu, 0x695e976fu, 0x07961120u,
    0xa5cd8ad1u, 0x44050482u, 0xe23c7e33u, 0x8073f7e4u, 0x1eab7195u, 0xbce2eb46u, 0x5b1a64f7u, 0xf951dea8u,
    0x97895859u, 0x35c0d20au, 0xd3f84bbbu, 0x722fc56cu, 0x10673f1du, 0xae9eb8ceu, 0x4cd6327fu, 0xeb0dac30u,
    0x894525e1u, 0x277c9f92u, 0xc5b41943u, 0x63eb92f4u, 0x02230ca5u, 0xa05a8656u, 0x3e920007u, 0xdcc979b8u,
    0x7b00f369u, 0x19386d1au, 0xb76fe6cbu, 0x55a7607cu, 0xf3deda2du, 0x921653deu, 0x304dcd8fu, 0xce854740u,
    0x6cbcc0f1u, 0x0af43aa2u, 0xa92bb453u, 0x47632e04u, 0xe59aa7b5u, 0x83d22166u, 0x22099b17u, 0xc04114c8u,
};

static const uint32_t bshim_146_tab4[96] = {
    0x8b5a00dau, 0x29917a8bu, 0xc7c8f43cu, 0x66006dedu, 0x0437e79eu, 0xa26f614fu, 0x40a6db00u, 0xdede54b1u,
    0x7d15ce62u, 0x1b4d4813u, 0xb984c1c4u, 0x57bc3b75u, 0xf5f3b526u, 0x942b2ed7u, 0x3262a888u, 0xd09a2239u,
    0x6ed19beau, 0x0d09159bu, 0xab408f4cu, 0x497808fdu, 0xe7af82aeu, 0x85e6fc5fu, 0x241e7610u, 0xc255efc1u,
    0x608d6972u, 0xfec4e323u, 0x9cfc5cd4u, 0x3b33d685u, 0xd96b5036u, 0x77a2c9e7u, 0x15da4398u, 0xb411bd49u,
    0x524936fau, 0xf080b0abu, 0x8eb82a5cu, 0x2cefa40du, 0xcb271dbeu, 0x695e976fu, 0x07961120u, 0xa5cd8ad1u,
    0x44050482u, 0xe23c7e33u, 0x8073f7e4u, 0x1eab7195u, 0xbce2eb46u, 0x5b1a64f7u, 0xf951dea8u, 0x97895859u,
    0x35c0d20au, 0xd3f84bbbu, 0x722fc56cu, 0x10673f1du, 0xae9eb8ceu, 0x4cd6327fu, 0xeb0dac30u, 0x894525e1u,
    0x277c9f92u, 0xc5b41943u, 0x63eb92f4u, 0x02230ca5u, 0xa05a8656u, 0x3e920007u, 0xdcc979b8u, 0x7b00f369u,
    0x19386d1au, 0xb76fe6cbu, 0x55a7607cu, 0xf3deda2du, 0x921653deu, 0x304dcd8fu, 0xce854740u, 0x6cbcc0f1u,
    0x0af43aa2u, 0xa92bb453u, 0x47632e04u, 0xe59aa7b5u, 0x83d22166u, 0x22099b17u, 0xc04114c8u, 0x5e788e79u,
    0xfcb0082au, 0x9ae781dbu, 0x391efb8cu, 0xd756753du, 0x758deeeeu, 0x13c5689fu, 0xb1fce250u, 0x50345c01u,
    0xee6bd5b2u, 0x8ca34f63u, 0x2adac914u, 0xc91242c5u, 0x6749bc76u, 0x05813627u, 0xa3b8afd8u, 0x41f02989u,
};

static const uint32_t bshim_146_tab5[96] = {
    0x0d09159bu, 0xab408f4cu, 0x497808fdu, 0xe7af82aeu, 0x85e6fc5fu, 0x241e7610u, 0xc255efc1u, 0x608d6972u,
    0xfec4e323u, 0x9cfc5cd4u, 0x3b33d685u, 0xd96b5036u, 0x77a2c9e7u, 0x15da4398u, 0xb411bd49u, 0x524936fau,
    0xf080b0abu, 0x8eb82a5cu, 0x2cefa40du, 0xcb271dbeu, 0x695e976fu, 0x07961120u, 0xa5cd8ad1u, 0x44050482u,
    0xe23c7e33u, 0x8073f7e4u, 0x1eab7195u, 0xbce2eb46u, 0x5b1a64f7u, 0xf951dea8u, 0x97895859u, 0x35c0d20au,
    0xd3f84bbbu, 0x722fc56cu, 0x10673f1du, 0xae9eb8ceu, 0x4cd6327fu, 0xeb0dac30u, 0x894525e1u, 0x277c9f92u,
    0xc5b41943u, 0x63eb92f4u, 0x02230ca5u, 0xa05a8656u, 0x3e920007u, 0xdcc979b8u, 0x7b00f369u, 0x19386d1au,
    0xb76fe6cbu, 0x55a7607cu, 0xf3deda2du, 0x921653deu, 0x304dcd8fu, 0xce854740u, 0x6cbcc0f1u, 0x0af43aa2u,
    0xa92bb453u, 0x47632e04u, 0xe59aa7b5u, 0x83d22166u, 0x22099b17u, 0xc04114c8u, 0x5e788e79u, 0xfcb0082au,
    0x9ae781dbu, 0x391efb8cu, 0xd756753du, 0x758deeeeu, 0x13c5689fu, 0xb1fce250u, 0x50345c01u, 0xee6bd5b2u,
    0x8ca34f63u, 0x2adac914u, 0xc91242c5u, 0x6749bc76u, 0x05813627u, 0xa3b8afd8u, 0x41f02989u, 0xe027a33au,
    0x7e5f1cebu, 0x1c96969cu, 0xbace104du, 0x590589feu, 0xf73d03afu, 0x95747d60u, 0x33abf711u, 0xd1e370c2u,
    0x701aea73u, 0x0e526424u, 0xac89ddd5u, 0x4ac15786u, 0xe8f8d137u, 0x87304ae8u, 0x2567c499u, 0xc39f3e4au,
};

static const uint32_t bshim_146_tab6[96] = {
    0x8eb82a5cu, 0x2cefa40du, 0xcb271dbeu, 0x695e976fu, 0x07961120u, 0xa5cd8ad1u, 0x44050482u, 0xe23c7e33u,
    0x8073f7e4u, 0x1eab7195u, 0xbce2eb46u, 0x5b1a64f7u, 0xf951dea8u, 0x97895859u, 0x35c0d20au, 0xd3f84bbbu,
    0x722fc56cu, 0x10673f1du, 0xae9eb8ceu, 0x4cd6327fu, 0xeb0dac30u, 0x894525e1u, 0x277c9f92u, 0xc5b41943u,
    0x63eb92f4u, 0x02230ca5u, 0xa05a8656u, 0x3e920007u, 0xdcc979b8u, 0x7b00f369u, 0x19386d1au, 0xb76fe6cbu,
    0x55a7607cu, 0xf3deda2du, 0x921653deu, 0x304dcd8fu, 0xce854740u, 0x6cbcc0f1u, 0x0af43aa2u, 0xa92bb453u,
    0x47632e04u, 0xe59aa7b5u, 0x83d22166u, 0x22099b17u, 0xc04114c8u, 0x5e788e79u, 0xfcb0082au, 0x9ae781dbu,
    0x391efb8cu, 0xd756753du, 0x758deeeeu, 0x13c5689fu, 0xb1fce250u, 0x50345c01u, 0xee6bd5b2u, 0x8ca34f63u,
    0x2adac914u, 0xc91242c5u, 0x6749bc76u, 0x05813627u, 0xa3b8afd8u, 0x41f02989u, 0xe027a33au, 0x7e5f1cebu,
    0x1c96969cu, 0xbace104du, 0x590589feu, 0xf73d03afu, 0x95747d60u, 0x33abf711u, 0xd1e370c2u, 0x701aea73u,
    0x0e526424u, 0xac89ddd5u, 0x4ac15786u, 0xe8f8d137u, 0x87304ae8u, 0x2567c499u, 0xc39f3e4au, 0x61d6b7fbu,
    0x000e31acu, 0x9e45ab5du, 0x3c7d250eu, 0xdab49ebfu, 0x78ec1870u, 0x17239221u, 0xb55b0bd2u, 0x53928583u,
    0xf1c9ff34u, 0x900178e5u, 0x2e38f296u, 0xcc706c47u, 0x6aa7e5f8u, 0x08df5fa9u, 0xa716d95au, 0x454e530bu,
};

static const uint32_t bshim_146_tab7[96] = {
    0x10673f1du, 0xae9eb8ceu, 0x4cd6327fu, 0xeb0dac30u, 0x894525e1u, 0x277c9f92u, 0xc5b41943u, 0x63eb92f4u,
    0x02230ca5u, 0xa05a8656u, 0x3e920007u, 0xdcc979b8u, 0x7b00f369u, 0x19386d1au, 0xb76fe6cbu, 0x55a7607cu,
    0xf3deda2du, 0x921653deu, 0x304dcd8fu, 0xce854740u, 0x6cbcc0f1u, 0x0af43aa2u, 0xa92bb453u, 0x47632e04u,
    0xe59aa7b5u, 0x83d22166u, 0x22099b17u, 0xc04114c8u, 0x5e788e79u, 0xfcb0082au, 0x9ae781dbu, 0x391efb8cu,
    0xd756753du, 0x758deeeeu, 0x13c5689fu, 0xb1fce250u, 0x50345c01u, 0xee6bd5b2u, 0x8ca34f63u, 0x2adac914u,
    0xc91242c5u, 0x6749bc76u, 0x05813627u, 0xa3b8afd8u, 0x41f02989u, 0xe027a33au, 0x7e5f1cebu, 0x1c96969cu,
    0xbace104du, 0x590589feu, 0xf73d03afu, 0x95747d60u, 0x33abf711u, 0xd1e370c2u, 0x701aea73u, 0x0e526424u,
    0xac89ddd5u, 0x4ac15786u, 0xe8f8d137u, 0x87304ae8u, 0x2567c499u, 0xc39f3e4au, 0x61d6b7fbu, 0x000e31acu,
    0x9e45ab5du, 0x3c7d250eu, 0xdab49ebfu, 0x78ec1870u, 0x17239221u, 0xb55b0bd2u, 0x53928583u, 0xf1c9ff34u,
    0x900178e5u, 0x2e38f296u, 0xcc706c47u, 0x6aa7e5f8u, 0x08df5fa9u, 0xa716d95au, 0x454e530bu, 0xe385ccbcu,
    0x81bd466du, 0x1ff4c01eu, 0xbe2c39cfu, 0x5c63b380u, 0xfa9b2d31u, 0x98d2a6e2u, 0x370a2093u, 0xd5419a44u,
    0x737913f5u, 0x11b08da6u, 0xafe80757u, 0x4e1f8108u, 0xec56fab9u, 0x8a8e746au, 0x28c5ee1bu, 0xc6fd67ccu,
};

struct bshim_146_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_146_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_146_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_146_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_146_reset(struct bshim_146_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0011a44eu;
    return 0;
}

