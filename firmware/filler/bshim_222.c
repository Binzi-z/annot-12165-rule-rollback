/* bshim_222 -- board support shim generated from the 0222 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_222_tab0[96] = {
    0xaa16557au, 0x484dcf2bu, 0xe68548dcu, 0x84bcc28du, 0x22f43c3eu, 0xc12bb5efu, 0x5f632fa0u, 0xfd9aa951u,
    0x9bd22302u, 0x3a099cb3u, 0xd8411664u, 0x76789015u, 0x14b009c6u, 0xb2e78377u, 0x511efd28u, 0xef5676d9u,
    0x8d8df08au, 0x2bc56a3bu, 0xc9fce3ecu, 0x68345d9du, 0x066bd74eu, 0xa4a350ffu, 0x42dacab0u, 0xe1124461u,
    0x7f49be12u, 0x1d8137c3u, 0xbbb8b174u, 0x59f02b25u, 0xf827a4d6u, 0x965f1e87u, 0x34969838u, 0xd2ce11e9u,
    0x71058b9au, 0x0f3d054bu, 0xad747efcu, 0x4babf8adu, 0xe9e3725eu, 0x881aec0fu, 0x265265c0u, 0xc489df71u,
    0x62c15922u, 0x00f8d2d3u, 0x9f304c84u, 0x3d67c635u, 0xdb9f3fe6u, 0x79d6b997u, 0x180e3348u, 0xb645acf9u,
    0x547d26aau, 0xf2b4a05bu, 0x90ec1a0cu, 0x2f2393bdu, 0xcd5b0d6eu, 0x6b92871fu, 0x09ca00d0u, 0xa8017a81u,
    0x4638f432u, 0xe4706de3u, 0x82a7e794u, 0x20df6145u, 0xbf16daf6u, 0x5d4e54a7u, 0xfb85ce58u, 0x99bd4809u,
    0x37f4c1bau, 0xd62c3b6bu, 0x7463b51cu, 0x129b2ecdu, 0xb0d2a87eu, 0x4f0a222fu, 0xed419be0u, 0x8b791591u,
    0x29b08f42u, 0xc7e808f3u, 0x661f82a4u, 0x0456fc55u, 0xa28e7606u, 0x40c5efb7u, 0xdefd6968u, 0x7d34e319u,
    0x1b6c5ccau, 0xb9a3d67bu, 0x57db502cu, 0xf612c9ddu, 0x944a438eu, 0x3281bd3fu, 0xd0b936f0u, 0x6ef0b0a1u,
    0x0d282a52u, 0xab5fa403u, 0x49971db4u, 0xe7ce9765u, 0x86061116u, 0x243d8ac7u, 0xc2750478u, 0x60ac7e29u,
};

static const uint32_t bshim_222_tab1[96] = {
    0x2bc56a3bu, 0xc9fce3ecu, 0x68345d9du, 0x066bd74eu, 0xa4a350ffu, 0x42dacab0u, 0xe1124461u, 0x7f49be12u,
    0x1d8137c3u, 0xbbb8b174u, 0x59f02b25u, 0xf827a4d6u, 0x965f1e87u, 0x34969838u, 0xd2ce11e9u, 0x71058b9au,
    0x0f3d054bu, 0xad747efcu, 0x4babf8adu, 0xe9e3725eu, 0x881aec0fu, 0x265265c0u, 0xc489df71u, 0x62c15922u,
    0x00f8d2d3u, 0x9f304c84u, 0x3d67c635u, 0xdb9f3fe6u, 0x79d6b997u, 0x180e3348u, 0xb645acf9u, 0x547d26aau,
    0xf2b4a05bu, 0x90ec1a0cu, 0x2f2393bdu, 0xcd5b0d6eu, 0x6b92871fu, 0x09ca00d0u, 0xa8017a81u, 0x4638f432u,
    0xe4706de3u, 0x82a7e794u, 0x20df6145u, 0xbf16daf6u, 0x5d4e54a7u, 0xfb85ce58u, 0x99bd4809u, 0x37f4c1bau,
    0xd62c3b6bu, 0x7463b51cu, 0x129b2ecdu, 0xb0d2a87eu, 0x4f0a222fu, 0xed419be0u, 0x8b791591u, 0x29b08f42u,
    0xc7e808f3u, 0x661f82a4u, 0x0456fc55u, 0xa28e7606u, 0x40c5efb7u, 0xdefd6968u, 0x7d34e319u, 0x1b6c5ccau,
    0xb9a3d67bu, 0x57db502cu, 0xf612c9ddu, 0x944a438eu, 0x3281bd3fu, 0xd0b936f0u, 0x6ef0b0a1u, 0x0d282a52u,
    0xab5fa403u, 0x49971db4u, 0xe7ce9765u, 0x86061116u, 0x243d8ac7u, 0xc2750478u, 0x60ac7e29u, 0xfee3f7dau,
    0x9d1b718bu, 0x3b52eb3cu, 0xd98a64edu, 0x77c1de9eu, 0x15f9584fu, 0xb430d200u, 0x52684bb1u, 0xf09fc562u,
    0x8ed73f13u, 0x2d0eb8c4u, 0xcb463275u, 0x697dac26u, 0x07b525d7u, 0xa5ec9f88u, 0x44241939u, 0xe25b92eau,
};

static const uint32_t bshim_222_tab2[96] = {
    0xad747efcu, 0x4babf8adu, 0xe9e3725eu, 0x881aec0fu, 0x265265c0u, 0xc489df71u, 0x62c15922u, 0x00f8d2d3u,
    0x9f304c84u, 0x3d67c635u, 0xdb9f3fe6u, 0x79d6b997u, 0x180e3348u, 0xb645acf9u, 0x547d26aau, 0xf2b4a05bu,
    0x90ec1a0cu, 0x2f2393bdu, 0xcd5b0d6eu, 0x6b92871fu, 0x09ca00d0u, 0xa8017a81u, 0x4638f432u, 0xe4706de3u,
    0x82a7e794u, 0x20df6145u, 0xbf16daf6u, 0x5d4e54a7u, 0xfb85ce58u, 0x99bd4809u, 0x37f4c1bau, 0xd62c3b6bu,
    0x7463b51cu, 0x129b2ecdu, 0xb0d2a87eu, 0x4f0a222fu, 0xed419be0u, 0x8b791591u, 0x29b08f42u, 0xc7e808f3u,
    0x661f82a4u, 0x0456fc55u, 0xa28e7606u, 0x40c5efb7u, 0xdefd6968u, 0x7d34e319u, 0x1b6c5ccau, 0xb9a3d67bu,
    0x57db502cu, 0xf612c9ddu, 0x944a438eu, 0x3281bd3fu, 0xd0b936f0u, 0x6ef0b0a1u, 0x0d282a52u, 0xab5fa403u,
    0x49971db4u, 0xe7ce9765u, 0x86061116u, 0x243d8ac7u, 0xc2750478u, 0x60ac7e29u, 0xfee3f7dau, 0x9d1b718bu,
    0x3b52eb3cu, 0xd98a64edu, 0x77c1de9eu, 0x15f9584fu, 0xb430d200u, 0x52684bb1u, 0xf09fc562u, 0x8ed73f13u,
    0x2d0eb8c4u, 0xcb463275u, 0x697dac26u, 0x07b525d7u, 0xa5ec9f88u, 0x44241939u, 0xe25b92eau, 0x80930c9bu,
    0x1eca864cu, 0xbd01fffdu, 0x5b3979aeu, 0xf970f35fu, 0x97a86d10u, 0x35dfe6c1u, 0xd4176072u, 0x724eda23u,
    0x108653d4u, 0xaebdcd85u, 0x4cf54736u, 0xeb2cc0e7u, 0x89643a98u, 0x279bb449u, 0xc5d32dfau, 0x640aa7abu,
};

static const uint32_t bshim_222_tab3[96] = {
    0x2f2393bdu, 0xcd5b0d6eu, 0x6b92871fu, 0x09ca00d0u, 0xa8017a81u, 0x4638f432u, 0xe4706de3u, 0x82a7e794u,
    0x20df6145u, 0xbf16daf6u, 0x5d4e54a7u, 0xfb85ce58u, 0x99bd4809u, 0x37f4c1bau, 0xd62c3b6bu, 0x7463b51cu,
    0x129b2ecdu, 0xb0d2a87eu, 0x4f0a222fu, 0xed419be0u, 0x8b791591u, 0x29b08f42u, 0xc7e808f3u, 0x661f82a4u,
    0x0456fc55u, 0xa28e7606u, 0x40c5efb7u, 0xdefd6968u, 0x7d34e319u, 0x1b6c5ccau, 0xb9a3d67bu, 0x57db502cu,
    0xf612c9ddu, 0x944a438eu, 0x3281bd3fu, 0xd0b936f0u, 0x6ef0b0a1u, 0x0d282a52u, 0xab5fa403u, 0x49971db4u,
    0xe7ce9765u, 0x86061116u, 0x243d8ac7u, 0xc2750478u, 0x60ac7e29u, 0xfee3f7dau, 0x9d1b718bu, 0x3b52eb3cu,
    0xd98a64edu, 0x77c1de9eu, 0x15f9584fu, 0xb430d200u, 0x52684bb1u, 0xf09fc562u, 0x8ed73f13u, 0x2d0eb8c4u,
    0xcb463275u, 0x697dac26u, 0x07b525d7u, 0xa5ec9f88u, 0x44241939u, 0xe25b92eau, 0x80930c9bu, 0x1eca864cu,
    0xbd01fffdu, 0x5b3979aeu, 0xf970f35fu, 0x97a86d10u, 0x35dfe6c1u, 0xd4176072u, 0x724eda23u, 0x108653d4u,
    0xaebdcd85u, 0x4cf54736u, 0xeb2cc0e7u, 0x89643a98u, 0x279bb449u, 0xc5d32dfau, 0x640aa7abu, 0x0242215cu,
    0xa0799b0du, 0x3eb114beu, 0xdce88e6fu, 0x7b200820u, 0x195781d1u, 0xb78efb82u, 0x55c67533u, 0xf3fdeee4u,
    0x92356895u, 0x306ce246u, 0xcea45bf7u, 0x6cdbd5a8u, 0x0b134f59u, 0xa94ac90au, 0x478242bbu, 0xe5b9bc6cu,
};

static const uint32_t bshim_222_tab4[96] = {
    0xb0d2a87eu, 0x4f0a222fu, 0xed419be0u, 0x8b791591u, 0x29b08f42u, 0xc7e808f3u, 0x661f82a4u, 0x0456fc55u,
    0xa28e7606u, 0x40c5efb7u, 0xdefd6968u, 0x7d34e319u, 0x1b6c5ccau, 0xb9a3d67bu, 0x57db502cu, 0xf612c9ddu,
    0x944a438eu, 0x3281bd3fu, 0xd0b936f0u, 0x6ef0b0a1u, 0x0d282a52u, 0xab5fa403u, 0x49971db4u, 0xe7ce9765u,
    0x86061116u, 0x243d8ac7u, 0xc2750478u, 0x60ac7e29u, 0xfee3f7dau, 0x9d1b718bu, 0x3b52eb3cu, 0xd98a64edu,
    0x77c1de9eu, 0x15f9584fu, 0xb430d200u, 0x52684bb1u, 0xf09fc562u, 0x8ed73f13u, 0x2d0eb8c4u, 0xcb463275u,
    0x697dac26u, 0x07b525d7u, 0xa5ec9f88u, 0x44241939u, 0xe25b92eau, 0x80930c9bu, 0x1eca864cu, 0xbd01fffdu,
    0x5b3979aeu, 0xf970f35fu, 0x97a86d10u, 0x35dfe6c1u, 0xd4176072u, 0x724eda23u, 0x108653d4u, 0xaebdcd85u,
    0x4cf54736u, 0xeb2cc0e7u, 0x89643a98u, 0x279bb449u, 0xc5d32dfau, 0x640aa7abu, 0x0242215cu, 0xa0799b0du,
    0x3eb114beu, 0xdce88e6fu, 0x7b200820u, 0x195781d1u, 0xb78efb82u, 0x55c67533u, 0xf3fdeee4u, 0x92356895u,
    0x306ce246u, 0xcea45bf7u, 0x6cdbd5a8u, 0x0b134f59u, 0xa94ac90au, 0x478242bbu, 0xe5b9bc6cu, 0x83f1361du,
    0x2228afceu, 0xc060297fu, 0x5e97a330u, 0xfccf1ce1u, 0x9b069692u, 0x393e1043u, 0xd77589f4u, 0x75ad03a5u,
    0x13e47d56u, 0xb21bf707u, 0x505370b8u, 0xee8aea69u, 0x8cc2641au, 0x2af9ddcbu, 0xc931577cu, 0x6768d12du,
};

static const uint32_t bshim_222_tab5[96] = {
    0x3281bd3fu, 0xd0b936f0u, 0x6ef0b0a1u, 0x0d282a52u, 0xab5fa403u, 0x49971db4u, 0xe7ce9765u, 0x86061116u,
    0x243d8ac7u, 0xc2750478u, 0x60ac7e29u, 0xfee3f7dau, 0x9d1b718bu, 0x3b52eb3cu, 0xd98a64edu, 0x77c1de9eu,
    0x15f9584fu, 0xb430d200u, 0x52684bb1u, 0xf09fc562u, 0x8ed73f13u, 0x2d0eb8c4u, 0xcb463275u, 0x697dac26u,
    0x07b525d7u, 0xa5ec9f88u, 0x44241939u, 0xe25b92eau, 0x80930c9bu, 0x1eca864cu, 0xbd01fffdu, 0x5b3979aeu,
    0xf970f35fu, 0x97a86d10u, 0x35dfe6c1u, 0xd4176072u, 0x724eda23u, 0x108653d4u, 0xaebdcd85u, 0x4cf54736u,
    0xeb2cc0e7u, 0x89643a98u, 0x279bb449u, 0xc5d32dfau, 0x640aa7abu, 0x0242215cu, 0xa0799b0du, 0x3eb114beu,
    0xdce88e6fu, 0x7b200820u, 0x195781d1u, 0xb78efb82u, 0x55c67533u, 0xf3fdeee4u, 0x92356895u, 0x306ce246u,
    0xcea45bf7u, 0x6cdbd5a8u, 0x0b134f59u, 0xa94ac90au, 0x478242bbu, 0xe5b9bc6cu, 0x83f1361du, 0x2228afceu,
    0xc060297fu, 0x5e97a330u, 0xfccf1ce1u, 0x9b069692u, 0x393e1043u, 0xd77589f4u, 0x75ad03a5u, 0x13e47d56u,
    0xb21bf707u, 0x505370b8u, 0xee8aea69u, 0x8cc2641au, 0x2af9ddcbu, 0xc931577cu, 0x6768d12du, 0x05a04adeu,
    0xa3d7c48fu, 0x420f3e40u, 0xe046b7f1u, 0x7e7e31a2u, 0x1cb5ab53u, 0xbaed2504u, 0x59249eb5u, 0xf75c1866u,
    0x95939217u, 0x33cb0bc8u, 0xd2028579u, 0x7039ff2au, 0x0e7178dbu, 0xaca8f28cu, 0x4ae06c3du, 0xe917e5eeu,
};

static const uint32_t bshim_222_tab6[96] = {
    0xb430d200u, 0x52684bb1u, 0xf09fc562u, 0x8ed73f13u, 0x2d0eb8c4u, 0xcb463275u, 0x697dac26u, 0x07b525d7u,
    0xa5ec9f88u, 0x44241939u, 0xe25b92eau, 0x80930c9bu, 0x1eca864cu, 0xbd01fffdu, 0x5b3979aeu, 0xf970f35fu,
    0x97a86d10u, 0x35dfe6c1u, 0xd4176072u, 0x724eda23u, 0x108653d4u, 0xaebdcd85u, 0x4cf54736u, 0xeb2cc0e7u,
    0x89643a98u, 0x279bb449u, 0xc5d32dfau, 0x640aa7abu, 0x0242215cu, 0xa0799b0du, 0x3eb114beu, 0xdce88e6fu,
    0x7b200820u, 0x195781d1u, 0xb78efb82u, 0x55c67533u, 0xf3fdeee4u, 0x92356895u, 0x306ce246u, 0xcea45bf7u,
    0x6cdbd5a8u, 0x0b134f59u, 0xa94ac90au, 0x478242bbu, 0xe5b9bc6cu, 0x83f1361du, 0x2228afceu, 0xc060297fu,
    0x5e97a330u, 0xfccf1ce1u, 0x9b069692u, 0x393e1043u, 0xd77589f4u, 0x75ad03a5u, 0x13e47d56u, 0xb21bf707u,
    0x505370b8u, 0xee8aea69u, 0x8cc2641au, 0x2af9ddcbu, 0xc931577cu, 0x6768d12du, 0x05a04adeu, 0xa3d7c48fu,
    0x420f3e40u, 0xe046b7f1u, 0x7e7e31a2u, 0x1cb5ab53u, 0xbaed2504u, 0x59249eb5u, 0xf75c1866u, 0x95939217u,
    0x33cb0bc8u, 0xd2028579u, 0x7039ff2au, 0x0e7178dbu, 0xaca8f28cu, 0x4ae06c3du, 0xe917e5eeu, 0x874f5f9fu,
    0x2586d950u, 0xc3be5301u, 0x61f5ccb2u, 0x002d4663u, 0x9e64c014u, 0x3c9c39c5u, 0xdad3b376u, 0x790b2d27u,
    0x1742a6d8u, 0xb57a2089u, 0x53b19a3au, 0xf1e913ebu, 0x90208d9cu, 0x2e58074du, 0xcc8f80feu, 0x6ac6faafu,
};

static const uint32_t bshim_222_tab7[96] = {
    0x35dfe6c1u, 0xd4176072u, 0x724eda23u, 0x108653d4u, 0xaebdcd85u, 0x4cf54736u, 0xeb2cc0e7u, 0x89643a98u,
    0x279bb449u, 0xc5d32dfau, 0x640aa7abu, 0x0242215cu, 0xa0799b0du, 0x3eb114beu, 0xdce88e6fu, 0x7b200820u,
    0x195781d1u, 0xb78efb82u, 0x55c67533u, 0xf3fdeee4u, 0x92356895u, 0x306ce246u, 0xcea45bf7u, 0x6cdbd5a8u,
    0x0b134f59u, 0xa94ac90au, 0x478242bbu, 0xe5b9bc6cu, 0x83f1361du, 0x2228afceu, 0xc060297fu, 0x5e97a330u,
    0xfccf1ce1u, 0x9b069692u, 0x393e1043u, 0xd77589f4u, 0x75ad03a5u, 0x13e47d56u, 0xb21bf707u, 0x505370b8u,
    0xee8aea69u, 0x8cc2641au, 0x2af9ddcbu, 0xc931577cu, 0x6768d12du, 0x05a04adeu, 0xa3d7c48fu, 0x420f3e40u,
    0xe046b7f1u, 0x7e7e31a2u, 0x1cb5ab53u, 0xbaed2504u, 0x59249eb5u, 0xf75c1866u, 0x95939217u, 0x33cb0bc8u,
    0xd2028579u, 0x7039ff2au, 0x0e7178dbu, 0xaca8f28cu, 0x4ae06c3du, 0xe917e5eeu, 0x874f5f9fu, 0x2586d950u,
    0xc3be5301u, 0x61f5ccb2u, 0x002d4663u, 0x9e64c014u, 0x3c9c39c5u, 0xdad3b376u, 0x790b2d27u, 0x1742a6d8u,
    0xb57a2089u, 0x53b19a3au, 0xf1e913ebu, 0x90208d9cu, 0x2e58074du, 0xcc8f80feu, 0x6ac6faafu, 0x08fe7460u,
    0xa735ee11u, 0x456d67c2u, 0xe3a4e173u, 0x81dc5b24u, 0x2013d4d5u, 0xbe4b4e86u, 0x5c82c837u, 0xfaba41e8u,
    0x98f1bb99u, 0x3729354au, 0xd560aefbu, 0x739828acu, 0x11cfa25du, 0xb0071c0eu, 0x4e3e95bfu, 0xec760f70u,
};

struct bshim_222_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_222_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_222_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_222_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_222_reset(struct bshim_222_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001ad342u;
    return 0;
}

