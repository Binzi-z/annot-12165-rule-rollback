/* bshim_223 -- board support shim generated from the 0223 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_223_tab0[96] = {
    0xa0799b0du, 0x3eb114beu, 0xdce88e6fu, 0x7b200820u, 0x195781d1u, 0xb78efb82u, 0x55c67533u, 0xf3fdeee4u,
    0x92356895u, 0x306ce246u, 0xcea45bf7u, 0x6cdbd5a8u, 0x0b134f59u, 0xa94ac90au, 0x478242bbu, 0xe5b9bc6cu,
    0x83f1361du, 0x2228afceu, 0xc060297fu, 0x5e97a330u, 0xfccf1ce1u, 0x9b069692u, 0x393e1043u, 0xd77589f4u,
    0x75ad03a5u, 0x13e47d56u, 0xb21bf707u, 0x505370b8u, 0xee8aea69u, 0x8cc2641au, 0x2af9ddcbu, 0xc931577cu,
    0x6768d12du, 0x05a04adeu, 0xa3d7c48fu, 0x420f3e40u, 0xe046b7f1u, 0x7e7e31a2u, 0x1cb5ab53u, 0xbaed2504u,
    0x59249eb5u, 0xf75c1866u, 0x95939217u, 0x33cb0bc8u, 0xd2028579u, 0x7039ff2au, 0x0e7178dbu, 0xaca8f28cu,
    0x4ae06c3du, 0xe917e5eeu, 0x874f5f9fu, 0x2586d950u, 0xc3be5301u, 0x61f5ccb2u, 0x002d4663u, 0x9e64c014u,
    0x3c9c39c5u, 0xdad3b376u, 0x790b2d27u, 0x1742a6d8u, 0xb57a2089u, 0x53b19a3au, 0xf1e913ebu, 0x90208d9cu,
    0x2e58074du, 0xcc8f80feu, 0x6ac6faafu, 0x08fe7460u, 0xa735ee11u, 0x456d67c2u, 0xe3a4e173u, 0x81dc5b24u,
    0x2013d4d5u, 0xbe4b4e86u, 0x5c82c837u, 0xfaba41e8u, 0x98f1bb99u, 0x3729354au, 0xd560aefbu, 0x739828acu,
    0x11cfa25du, 0xb0071c0eu, 0x4e3e95bfu, 0xec760f70u, 0x8aad8921u, 0x28e502d2u, 0xc71c7c83u, 0x6553f634u,
    0x038b6fe5u, 0xa1c2e996u, 0x3ffa6347u, 0xde31dcf8u, 0x7c6956a9u, 0x1aa0d05au, 0xb8d84a0bu, 0x570fc3bcu,
};

static const uint32_t bshim_223_tab1[96] = {
    0x2228afceu, 0xc060297fu, 0x5e97a330u, 0xfccf1ce1u, 0x9b069692u, 0x393e1043u, 0xd77589f4u, 0x75ad03a5u,
    0x13e47d56u, 0xb21bf707u, 0x505370b8u, 0xee8aea69u, 0x8cc2641au, 0x2af9ddcbu, 0xc931577cu, 0x6768d12du,
    0x05a04adeu, 0xa3d7c48fu, 0x420f3e40u, 0xe046b7f1u, 0x7e7e31a2u, 0x1cb5ab53u, 0xbaed2504u, 0x59249eb5u,
    0xf75c1866u, 0x95939217u, 0x33cb0bc8u, 0xd2028579u, 0x7039ff2au, 0x0e7178dbu, 0xaca8f28cu, 0x4ae06c3du,
    0xe917e5eeu, 0x874f5f9fu, 0x2586d950u, 0xc3be5301u, 0x61f5ccb2u, 0x002d4663u, 0x9e64c014u, 0x3c9c39c5u,
    0xdad3b376u, 0x790b2d27u, 0x1742a6d8u, 0xb57a2089u, 0x53b19a3au, 0xf1e913ebu, 0x90208d9cu, 0x2e58074du,
    0xcc8f80feu, 0x6ac6faafu, 0x08fe7460u, 0xa735ee11u, 0x456d67c2u, 0xe3a4e173u, 0x81dc5b24u, 0x2013d4d5u,
    0xbe4b4e86u, 0x5c82c837u, 0xfaba41e8u, 0x98f1bb99u, 0x3729354au, 0xd560aefbu, 0x739828acu, 0x11cfa25du,
    0xb0071c0eu, 0x4e3e95bfu, 0xec760f70u, 0x8aad8921u, 0x28e502d2u, 0xc71c7c83u, 0x6553f634u, 0x038b6fe5u,
    0xa1c2e996u, 0x3ffa6347u, 0xde31dcf8u, 0x7c6956a9u, 0x1aa0d05au, 0xb8d84a0bu, 0x570fc3bcu, 0xf5473d6du,
    0x937eb71eu, 0x31b630cfu, 0xcfedaa80u, 0x6e252431u, 0x0c5c9de2u, 0xaa941793u, 0x48cb9144u, 0xe7030af5u,
    0x853a84a6u, 0x2371fe57u, 0xc1a97808u, 0x5fe0f1b9u, 0xfe186b6au, 0x9c4fe51bu, 0x3a875eccu, 0xd8bed87du,
};

static const uint32_t bshim_223_tab2[96] = {
    0xa3d7c48fu, 0x420f3e40u, 0xe046b7f1u, 0x7e7e31a2u, 0x1cb5ab53u, 0xbaed2504u, 0x59249eb5u, 0xf75c1866u,
    0x95939217u, 0x33cb0bc8u, 0xd2028579u, 0x7039ff2au, 0x0e7178dbu, 0xaca8f28cu, 0x4ae06c3du, 0xe917e5eeu,
    0x874f5f9fu, 0x2586d950u, 0xc3be5301u, 0x61f5ccb2u, 0x002d4663u, 0x9e64c014u, 0x3c9c39c5u, 0xdad3b376u,
    0x790b2d27u, 0x1742a6d8u, 0xb57a2089u, 0x53b19a3au, 0xf1e913ebu, 0x90208d9cu, 0x2e58074du, 0xcc8f80feu,
    0x6ac6faafu, 0x08fe7460u, 0xa735ee11u, 0x456d67c2u, 0xe3a4e173u, 0x81dc5b24u, 0x2013d4d5u, 0xbe4b4e86u,
    0x5c82c837u, 0xfaba41e8u, 0x98f1bb99u, 0x3729354au, 0xd560aefbu, 0x739828acu, 0x11cfa25du, 0xb0071c0eu,
    0x4e3e95bfu, 0xec760f70u, 0x8aad8921u, 0x28e502d2u, 0xc71c7c83u, 0x6553f634u, 0x038b6fe5u, 0xa1c2e996u,
    0x3ffa6347u, 0xde31dcf8u, 0x7c6956a9u, 0x1aa0d05au, 0xb8d84a0bu, 0x570fc3bcu, 0xf5473d6du, 0x937eb71eu,
    0x31b630cfu, 0xcfedaa80u, 0x6e252431u, 0x0c5c9de2u, 0xaa941793u, 0x48cb9144u, 0xe7030af5u, 0x853a84a6u,
    0x2371fe57u, 0xc1a97808u, 0x5fe0f1b9u, 0xfe186b6au, 0x9c4fe51bu, 0x3a875eccu, 0xd8bed87du, 0x76f6522eu,
    0x152dcbdfu, 0xb3654590u, 0x519cbf41u, 0xefd438f2u, 0x8e0bb2a3u, 0x2c432c54u, 0xca7aa605u, 0x68b21fb6u,
    0x06e99967u, 0xa5211318u, 0x43588cc9u, 0xe190067au, 0x7fc7802bu, 0x1dfef9dcu, 0xbc36738du, 0x5a6ded3eu,
};

static const uint32_t bshim_223_tab3[96] = {
    0x2586d950u, 0xc3be5301u, 0x61f5ccb2u, 0x002d4663u, 0x9e64c014u, 0x3c9c39c5u, 0xdad3b376u, 0x790b2d27u,
    0x1742a6d8u, 0xb57a2089u, 0x53b19a3au, 0xf1e913ebu, 0x90208d9cu, 0x2e58074du, 0xcc8f80feu, 0x6ac6faafu,
    0x08fe7460u, 0xa735ee11u, 0x456d67c2u, 0xe3a4e173u, 0x81dc5b24u, 0x2013d4d5u, 0xbe4b4e86u, 0x5c82c837u,
    0xfaba41e8u, 0x98f1bb99u, 0x3729354au, 0xd560aefbu, 0x739828acu, 0x11cfa25du, 0xb0071c0eu, 0x4e3e95bfu,
    0xec760f70u, 0x8aad8921u, 0x28e502d2u, 0xc71c7c83u, 0x6553f634u, 0x038b6fe5u, 0xa1c2e996u, 0x3ffa6347u,
    0xde31dcf8u, 0x7c6956a9u, 0x1aa0d05au, 0xb8d84a0bu, 0x570fc3bcu, 0xf5473d6du, 0x937eb71eu, 0x31b630cfu,
    0xcfedaa80u, 0x6e252431u, 0x0c5c9de2u, 0xaa941793u, 0x48cb9144u, 0xe7030af5u, 0x853a84a6u, 0x2371fe57u,
    0xc1a97808u, 0x5fe0f1b9u, 0xfe186b6au, 0x9c4fe51bu, 0x3a875eccu, 0xd8bed87du, 0x76f6522eu, 0x152dcbdfu,
    0xb3654590u, 0x519cbf41u, 0xefd438f2u, 0x8e0bb2a3u, 0x2c432c54u, 0xca7aa605u, 0x68b21fb6u, 0x06e99967u,
    0xa5211318u, 0x43588cc9u, 0xe190067au, 0x7fc7802bu, 0x1dfef9dcu, 0xbc36738du, 0x5a6ded3eu, 0xf8a566efu,
    0x96dce0a0u, 0x35145a51u, 0xd34bd402u, 0x71834db3u, 0x0fbac764u, 0xadf24115u, 0x4c29bac6u, 0xea613477u,
    0x8898ae28u, 0x26d027d9u, 0xc507a18au, 0x633f1b3bu, 0x017694ecu, 0x9fae0e9du, 0x3de5884eu, 0xdc1d01ffu,
};

static const uint32_t bshim_223_tab4[96] = {
    0xa735ee11u, 0x456d67c2u, 0xe3a4e173u, 0x81dc5b24u, 0x2013d4d5u, 0xbe4b4e86u, 0x5c82c837u, 0xfaba41e8u,
    0x98f1bb99u, 0x3729354au, 0xd560aefbu, 0x739828acu, 0x11cfa25du, 0xb0071c0eu, 0x4e3e95bfu, 0xec760f70u,
    0x8aad8921u, 0x28e502d2u, 0xc71c7c83u, 0x6553f634u, 0x038b6fe5u, 0xa1c2e996u, 0x3ffa6347u, 0xde31dcf8u,
    0x7c6956a9u, 0x1aa0d05au, 0xb8d84a0bu, 0x570fc3bcu, 0xf5473d6du, 0x937eb71eu, 0x31b630cfu, 0xcfedaa80u,
    0x6e252431u, 0x0c5c9de2u, 0xaa941793u, 0x48cb9144u, 0xe7030af5u, 0x853a84a6u, 0x2371fe57u, 0xc1a97808u,
    0x5fe0f1b9u, 0xfe186b6au, 0x9c4fe51bu, 0x3a875eccu, 0xd8bed87du, 0x76f6522eu, 0x152dcbdfu, 0xb3654590u,
    0x519cbf41u, 0xefd438f2u, 0x8e0bb2a3u, 0x2c432c54u, 0xca7aa605u, 0x68b21fb6u, 0x06e99967u, 0xa5211318u,
    0x43588cc9u, 0xe190067au, 0x7fc7802bu, 0x1dfef9dcu, 0xbc36738du, 0x5a6ded3eu, 0xf8a566efu, 0x96dce0a0u,
    0x35145a51u, 0xd34bd402u, 0x71834db3u, 0x0fbac764u, 0xadf24115u, 0x4c29bac6u, 0xea613477u, 0x8898ae28u,
    0x26d027d9u, 0xc507a18au, 0x633f1b3bu, 0x017694ecu, 0x9fae0e9du, 0x3de5884eu, 0xdc1d01ffu, 0x7a547bb0u,
    0x188bf561u, 0xb6c36f12u, 0x54fae8c3u, 0xf3326274u, 0x9169dc25u, 0x2fa155d6u, 0xcdd8cf87u, 0x6c104938u,
    0x0a47c2e9u, 0xa87f3c9au, 0x46b6b64bu, 0xe4ee2ffcu, 0x8325a9adu, 0x215d235eu, 0xbf949d0fu, 0x5dcc16c0u,
};

static const uint32_t bshim_223_tab5[96] = {
    0x28e502d2u, 0xc71c7c83u, 0x6553f634u, 0x038b6fe5u, 0xa1c2e996u, 0x3ffa6347u, 0xde31dcf8u, 0x7c6956a9u,
    0x1aa0d05au, 0xb8d84a0bu, 0x570fc3bcu, 0xf5473d6du, 0x937eb71eu, 0x31b630cfu, 0xcfedaa80u, 0x6e252431u,
    0x0c5c9de2u, 0xaa941793u, 0x48cb9144u, 0xe7030af5u, 0x853a84a6u, 0x2371fe57u, 0xc1a97808u, 0x5fe0f1b9u,
    0xfe186b6au, 0x9c4fe51bu, 0x3a875eccu, 0xd8bed87du, 0x76f6522eu, 0x152dcbdfu, 0xb3654590u, 0x519cbf41u,
    0xefd438f2u, 0x8e0bb2a3u, 0x2c432c54u, 0xca7aa605u, 0x68b21fb6u, 0x06e99967u, 0xa5211318u, 0x43588cc9u,
    0xe190067au, 0x7fc7802bu, 0x1dfef9dcu, 0xbc36738du, 0x5a6ded3eu, 0xf8a566efu, 0x96dce0a0u, 0x35145a51u,
    0xd34bd402u, 0x71834db3u, 0x0fbac764u, 0xadf24115u, 0x4c29bac6u, 0xea613477u, 0x8898ae28u, 0x26d027d9u,
    0xc507a18au, 0x633f1b3bu, 0x017694ecu, 0x9fae0e9du, 0x3de5884eu, 0xdc1d01ffu, 0x7a547bb0u, 0x188bf561u,
    0xb6c36f12u, 0x54fae8c3u, 0xf3326274u, 0x9169dc25u, 0x2fa155d6u, 0xcdd8cf87u, 0x6c104938u, 0x0a47c2e9u,
    0xa87f3c9au, 0x46b6b64bu, 0xe4ee2ffcu, 0x8325a9adu, 0x215d235eu, 0xbf949d0fu, 0x5dcc16c0u, 0xfc039071u,
    0x9a3b0a22u, 0x387283d3u, 0xd6a9fd84u, 0x74e17735u, 0x1318f0e6u, 0xb1506a97u, 0x4f87e448u, 0xedbf5df9u,
    0x8bf6d7aau, 0x2a2e515bu, 0xc865cb0cu, 0x669d44bdu, 0x04d4be6eu, 0xa30c381fu, 0x4143b1d0u, 0xdf7b2b81u,
};

static const uint32_t bshim_223_tab6[96] = {
    0xaa941793u, 0x48cb9144u, 0xe7030af5u, 0x853a84a6u, 0x2371fe57u, 0xc1a97808u, 0x5fe0f1b9u, 0xfe186b6au,
    0x9c4fe51bu, 0x3a875eccu, 0xd8bed87du, 0x76f6522eu, 0x152dcbdfu, 0xb3654590u, 0x519cbf41u, 0xefd438f2u,
    0x8e0bb2a3u, 0x2c432c54u, 0xca7aa605u, 0x68b21fb6u, 0x06e99967u, 0xa5211318u, 0x43588cc9u, 0xe190067au,
    0x7fc7802bu, 0x1dfef9dcu, 0xbc36738du, 0x5a6ded3eu, 0xf8a566efu, 0x96dce0a0u, 0x35145a51u, 0xd34bd402u,
    0x71834db3u, 0x0fbac764u, 0xadf24115u, 0x4c29bac6u, 0xea613477u, 0x8898ae28u, 0x26d027d9u, 0xc507a18au,
    0x633f1b3bu, 0x017694ecu, 0x9fae0e9du, 0x3de5884eu, 0xdc1d01ffu, 0x7a547bb0u, 0x188bf561u, 0xb6c36f12u,
    0x54fae8c3u, 0xf3326274u, 0x9169dc25u, 0x2fa155d6u, 0xcdd8cf87u, 0x6c104938u, 0x0a47c2e9u, 0xa87f3c9au,
    0x46b6b64bu, 0xe4ee2ffcu, 0x8325a9adu, 0x215d235eu, 0xbf949d0fu, 0x5dcc16c0u, 0xfc039071u, 0x9a3b0a22u,
    0x387283d3u, 0xd6a9fd84u, 0x74e17735u, 0x1318f0e6u, 0xb1506a97u, 0x4f87e448u, 0xedbf5df9u, 0x8bf6d7aau,
    0x2a2e515bu, 0xc865cb0cu, 0x669d44bdu, 0x04d4be6eu, 0xa30c381fu, 0x4143b1d0u, 0xdf7b2b81u, 0x7db2a532u,
    0x1bea1ee3u, 0xba219894u, 0x58591245u, 0xf6908bf6u, 0x94c805a7u, 0x32ff7f58u, 0xd136f909u, 0x6f6e72bau,
    0x0da5ec6bu, 0xabdd661cu, 0x4a14dfcdu, 0xe84c597eu, 0x8683d32fu, 0x24bb4ce0u, 0xc2f2c691u, 0x612a4042u,
};

static const uint32_t bshim_223_tab7[96] = {
    0x2c432c54u, 0xca7aa605u, 0x68b21fb6u, 0x06e99967u, 0xa5211318u, 0x43588cc9u, 0xe190067au, 0x7fc7802bu,
    0x1dfef9dcu, 0xbc36738du, 0x5a6ded3eu, 0xf8a566efu, 0x96dce0a0u, 0x35145a51u, 0xd34bd402u, 0x71834db3u,
    0x0fbac764u, 0xadf24115u, 0x4c29bac6u, 0xea613477u, 0x8898ae28u, 0x26d027d9u, 0xc507a18au, 0x633f1b3bu,
    0x017694ecu, 0x9fae0e9du, 0x3de5884eu, 0xdc1d01ffu, 0x7a547bb0u, 0x188bf561u, 0xb6c36f12u, 0x54fae8c3u,
    0xf3326274u, 0x9169dc25u, 0x2fa155d6u, 0xcdd8cf87u, 0x6c104938u, 0x0a47c2e9u, 0xa87f3c9au, 0x46b6b64bu,
    0xe4ee2ffcu, 0x8325a9adu, 0x215d235eu, 0xbf949d0fu, 0x5dcc16c0u, 0xfc039071u, 0x9a3b0a22u, 0x387283d3u,
    0xd6a9fd84u, 0x74e17735u, 0x1318f0e6u, 0xb1506a97u, 0x4f87e448u, 0xedbf5df9u, 0x8bf6d7aau, 0x2a2e515bu,
    0xc865cb0cu, 0x669d44bdu, 0x04d4be6eu, 0xa30c381fu, 0x4143b1d0u, 0xdf7b2b81u, 0x7db2a532u, 0x1bea1ee3u,
    0xba219894u, 0x58591245u, 0xf6908bf6u, 0x94c805a7u, 0x32ff7f58u, 0xd136f909u, 0x6f6e72bau, 0x0da5ec6bu,
    0xabdd661cu, 0x4a14dfcdu, 0xe84c597eu, 0x8683d32fu, 0x24bb4ce0u, 0xc2f2c691u, 0x612a4042u, 0xff61b9f3u,
    0x9d9933a4u, 0x3bd0ad55u, 0xda082706u, 0x783fa0b7u, 0x16771a68u, 0xb4ae9419u, 0x52e60dcau, 0xf11d877bu,
    0x8f55012cu, 0x2d8c7addu, 0xcbc3f48eu, 0x69fb6e3fu, 0x0832e7f0u, 0xa66a61a1u, 0x44a1db52u, 0xe2d95503u,
};

struct bshim_223_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_223_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_223_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_223_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_223_reset(struct bshim_223_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001af231u;
    return 0;
}

