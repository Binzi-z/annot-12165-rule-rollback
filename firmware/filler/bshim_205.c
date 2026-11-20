/* bshim_205 -- board support shim generated from the 0205 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_205_tab0[96] = {
    0x4d7eb6b7u, 0xebb63068u, 0x89edaa19u, 0x282523cau, 0xc65c9d7bu, 0x6494172cu, 0x02cb90ddu, 0xa1030a8eu,
    0x3f3a843fu, 0xdd71fdf0u, 0x7ba977a1u, 0x19e0f152u, 0xb8186b03u, 0x564fe4b4u, 0xf4875e65u, 0x92bed816u,
    0x30f651c7u, 0xcf2dcb78u, 0x6d654529u, 0x0b9cbedau, 0xa9d4388bu, 0x480bb23cu, 0xe6432bedu, 0x847aa59eu,
    0x22b21f4fu, 0xc0e99900u, 0x5f2112b1u, 0xfd588c62u, 0x9b900613u, 0x39c77fc4u, 0xd7fef975u, 0x76367326u,
    0x146decd7u, 0xb2a56688u, 0x50dce039u, 0xef1459eau, 0x8d4bd39bu, 0x2b834d4cu, 0xc9bac6fdu, 0x67f240aeu,
    0x0629ba5fu, 0xa4613410u, 0x4298adc1u, 0xe0d02772u, 0x7f07a123u, 0x1d3f1ad4u, 0xbb769485u, 0x59ae0e36u,
    0xf7e587e7u, 0x961d0198u, 0x34547b49u, 0xd28bf4fau, 0x70c36eabu, 0x0efae85cu, 0xad32620du, 0x4b69dbbeu,
    0xe9a1556fu, 0x87d8cf20u, 0x261048d1u, 0xc447c282u, 0x627f3c33u, 0x00b6b5e4u, 0x9eee2f95u, 0x3d25a946u,
    0xdb5d22f7u, 0x79949ca8u, 0x17cc1659u, 0xb603900au, 0x543b09bbu, 0xf272836cu, 0x90a9fd1du, 0x2ee176ceu,
    0xcd18f07fu, 0x6b506a30u, 0x0987e3e1u, 0xa7bf5d92u, 0x45f6d743u, 0xe42e50f4u, 0x8265caa5u, 0x209d4456u,
    0xbed4be07u, 0x5d0c37b8u, 0xfb43b169u, 0x997b2b1au, 0x37b2a4cbu, 0xd5ea1e7cu, 0x7421982du, 0x125911deu,
    0xb0908b8fu, 0x4ec80540u, 0xecff7ef1u, 0x8b36f8a2u, 0x296e7253u, 0xc7a5ec04u, 0x65dd65b5u, 0x0414df66u,
};

static const uint32_t bshim_205_tab1[96] = {
    0xcf2dcb78u, 0x6d654529u, 0x0b9cbedau, 0xa9d4388bu, 0x480bb23cu, 0xe6432bedu, 0x847aa59eu, 0x22b21f4fu,
    0xc0e99900u, 0x5f2112b1u, 0xfd588c62u, 0x9b900613u, 0x39c77fc4u, 0xd7fef975u, 0x76367326u, 0x146decd7u,
    0xb2a56688u, 0x50dce039u, 0xef1459eau, 0x8d4bd39bu, 0x2b834d4cu, 0xc9bac6fdu, 0x67f240aeu, 0x0629ba5fu,
    0xa4613410u, 0x4298adc1u, 0xe0d02772u, 0x7f07a123u, 0x1d3f1ad4u, 0xbb769485u, 0x59ae0e36u, 0xf7e587e7u,
    0x961d0198u, 0x34547b49u, 0xd28bf4fau, 0x70c36eabu, 0x0efae85cu, 0xad32620du, 0x4b69dbbeu, 0xe9a1556fu,
    0x87d8cf20u, 0x261048d1u, 0xc447c282u, 0x627f3c33u, 0x00b6b5e4u, 0x9eee2f95u, 0x3d25a946u, 0xdb5d22f7u,
    0x79949ca8u, 0x17cc1659u, 0xb603900au, 0x543b09bbu, 0xf272836cu, 0x90a9fd1du, 0x2ee176ceu, 0xcd18f07fu,
    0x6b506a30u, 0x0987e3e1u, 0xa7bf5d92u, 0x45f6d743u, 0xe42e50f4u, 0x8265caa5u, 0x209d4456u, 0xbed4be07u,
    0x5d0c37b8u, 0xfb43b169u, 0x997b2b1au, 0x37b2a4cbu, 0xd5ea1e7cu, 0x7421982du, 0x125911deu, 0xb0908b8fu,
    0x4ec80540u, 0xecff7ef1u, 0x8b36f8a2u, 0x296e7253u, 0xc7a5ec04u, 0x65dd65b5u, 0x0414df66u, 0xa24c5917u,
    0x4083d2c8u, 0xdebb4c79u, 0x7cf2c62au, 0x1b2a3fdbu, 0xb961b98cu, 0x5799333du, 0xf5d0aceeu, 0x9408269fu,
    0x323fa050u, 0xd0771a01u, 0x6eae93b2u, 0x0ce60d63u, 0xab1d8714u, 0x495500c5u, 0xe78c7a76u, 0x85c3f427u,
};

static const uint32_t bshim_205_tab2[96] = {
    0x50dce039u, 0xef1459eau, 0x8d4bd39bu, 0x2b834d4cu, 0xc9bac6fdu, 0x67f240aeu, 0x0629ba5fu, 0xa4613410u,
    0x4298adc1u, 0xe0d02772u, 0x7f07a123u, 0x1d3f1ad4u, 0xbb769485u, 0x59ae0e36u, 0xf7e587e7u, 0x961d0198u,
    0x34547b49u, 0xd28bf4fau, 0x70c36eabu, 0x0efae85cu, 0xad32620du, 0x4b69dbbeu, 0xe9a1556fu, 0x87d8cf20u,
    0x261048d1u, 0xc447c282u, 0x627f3c33u, 0x00b6b5e4u, 0x9eee2f95u, 0x3d25a946u, 0xdb5d22f7u, 0x79949ca8u,
    0x17cc1659u, 0xb603900au, 0x543b09bbu, 0xf272836cu, 0x90a9fd1du, 0x2ee176ceu, 0xcd18f07fu, 0x6b506a30u,
    0x0987e3e1u, 0xa7bf5d92u, 0x45f6d743u, 0xe42e50f4u, 0x8265caa5u, 0x209d4456u, 0xbed4be07u, 0x5d0c37b8u,
    0xfb43b169u, 0x997b2b1au, 0x37b2a4cbu, 0xd5ea1e7cu, 0x7421982du, 0x125911deu, 0xb0908b8fu, 0x4ec80540u,
    0xecff7ef1u, 0x8b36f8a2u, 0x296e7253u, 0xc7a5ec04u, 0x65dd65b5u, 0x0414df66u, 0xa24c5917u, 0x4083d2c8u,
    0xdebb4c79u, 0x7cf2c62au, 0x1b2a3fdbu, 0xb961b98cu, 0x5799333du, 0xf5d0aceeu, 0x9408269fu, 0x323fa050u,
    0xd0771a01u, 0x6eae93b2u, 0x0ce60d63u, 0xab1d8714u, 0x495500c5u, 0xe78c7a76u, 0x85c3f427u, 0x23fb6dd8u,
    0xc232e789u, 0x606a613au, 0xfea1daebu, 0x9cd9549cu, 0x3b10ce4du, 0xd94847feu, 0x777fc1afu, 0x15b73b60u,
    0xb3eeb511u, 0x52262ec2u, 0xf05da873u, 0x8e952224u, 0x2ccc9bd5u, 0xcb041586u, 0x693b8f37u, 0x077308e8u,
};

static const uint32_t bshim_205_tab3[96] = {
    0xd28bf4fau, 0x70c36eabu, 0x0efae85cu, 0xad32620du, 0x4b69dbbeu, 0xe9a1556fu, 0x87d8cf20u, 0x261048d1u,
    0xc447c282u, 0x627f3c33u, 0x00b6b5e4u, 0x9eee2f95u, 0x3d25a946u, 0xdb5d22f7u, 0x79949ca8u, 0x17cc1659u,
    0xb603900au, 0x543b09bbu, 0xf272836cu, 0x90a9fd1du, 0x2ee176ceu, 0xcd18f07fu, 0x6b506a30u, 0x0987e3e1u,
    0xa7bf5d92u, 0x45f6d743u, 0xe42e50f4u, 0x8265caa5u, 0x209d4456u, 0xbed4be07u, 0x5d0c37b8u, 0xfb43b169u,
    0x997b2b1au, 0x37b2a4cbu, 0xd5ea1e7cu, 0x7421982du, 0x125911deu, 0xb0908b8fu, 0x4ec80540u, 0xecff7ef1u,
    0x8b36f8a2u, 0x296e7253u, 0xc7a5ec04u, 0x65dd65b5u, 0x0414df66u, 0xa24c5917u, 0x4083d2c8u, 0xdebb4c79u,
    0x7cf2c62au, 0x1b2a3fdbu, 0xb961b98cu, 0x5799333du, 0xf5d0aceeu, 0x9408269fu, 0x323fa050u, 0xd0771a01u,
    0x6eae93b2u, 0x0ce60d63u, 0xab1d8714u, 0x495500c5u, 0xe78c7a76u, 0x85c3f427u, 0x23fb6dd8u, 0xc232e789u,
    0x606a613au, 0xfea1daebu, 0x9cd9549cu, 0x3b10ce4du, 0xd94847feu, 0x777fc1afu, 0x15b73b60u, 0xb3eeb511u,
    0x52262ec2u, 0xf05da873u, 0x8e952224u, 0x2ccc9bd5u, 0xcb041586u, 0x693b8f37u, 0x077308e8u, 0xa5aa8299u,
    0x43e1fc4au, 0xe21975fbu, 0x8050efacu, 0x1e88695du, 0xbcbfe30eu, 0x5af75cbfu, 0xf92ed670u, 0x97665021u,
    0x359dc9d2u, 0xd3d54383u, 0x720cbd34u, 0x104436e5u, 0xae7bb096u, 0x4cb32a47u, 0xeaeaa3f8u, 0x89221da9u,
};

static const uint32_t bshim_205_tab4[96] = {
    0x543b09bbu, 0xf272836cu, 0x90a9fd1du, 0x2ee176ceu, 0xcd18f07fu, 0x6b506a30u, 0x0987e3e1u, 0xa7bf5d92u,
    0x45f6d743u, 0xe42e50f4u, 0x8265caa5u, 0x209d4456u, 0xbed4be07u, 0x5d0c37b8u, 0xfb43b169u, 0x997b2b1au,
    0x37b2a4cbu, 0xd5ea1e7cu, 0x7421982du, 0x125911deu, 0xb0908b8fu, 0x4ec80540u, 0xecff7ef1u, 0x8b36f8a2u,
    0x296e7253u, 0xc7a5ec04u, 0x65dd65b5u, 0x0414df66u, 0xa24c5917u, 0x4083d2c8u, 0xdebb4c79u, 0x7cf2c62au,
    0x1b2a3fdbu, 0xb961b98cu, 0x5799333du, 0xf5d0aceeu, 0x9408269fu, 0x323fa050u, 0xd0771a01u, 0x6eae93b2u,
    0x0ce60d63u, 0xab1d8714u, 0x495500c5u, 0xe78c7a76u, 0x85c3f427u, 0x23fb6dd8u, 0xc232e789u, 0x606a613au,
    0xfea1daebu, 0x9cd9549cu, 0x3b10ce4du, 0xd94847feu, 0x777fc1afu, 0x15b73b60u, 0xb3eeb511u, 0x52262ec2u,
    0xf05da873u, 0x8e952224u, 0x2ccc9bd5u, 0xcb041586u, 0x693b8f37u, 0x077308e8u, 0xa5aa8299u, 0x43e1fc4au,
    0xe21975fbu, 0x8050efacu, 0x1e88695du, 0xbcbfe30eu, 0x5af75cbfu, 0xf92ed670u, 0x97665021u, 0x359dc9d2u,
    0xd3d54383u, 0x720cbd34u, 0x104436e5u, 0xae7bb096u, 0x4cb32a47u, 0xeaeaa3f8u, 0x89221da9u, 0x2759975au,
    0xc591110bu, 0x63c88abcu, 0x0200046du, 0xa0377e1eu, 0x3e6ef7cfu, 0xdca67180u, 0x7addeb31u, 0x191564e2u,
    0xb74cde93u, 0x55845844u, 0xf3bbd1f5u, 0x91f34ba6u, 0x302ac557u, 0xce623f08u, 0x6c99b8b9u, 0x0ad1326au,
};

static const uint32_t bshim_205_tab5[96] = {
    0xd5ea1e7cu, 0x7421982du, 0x125911deu, 0xb0908b8fu, 0x4ec80540u, 0xecff7ef1u, 0x8b36f8a2u, 0x296e7253u,
    0xc7a5ec04u, 0x65dd65b5u, 0x0414df66u, 0xa24c5917u, 0x4083d2c8u, 0xdebb4c79u, 0x7cf2c62au, 0x1b2a3fdbu,
    0xb961b98cu, 0x5799333du, 0xf5d0aceeu, 0x9408269fu, 0x323fa050u, 0xd0771a01u, 0x6eae93b2u, 0x0ce60d63u,
    0xab1d8714u, 0x495500c5u, 0xe78c7a76u, 0x85c3f427u, 0x23fb6dd8u, 0xc232e789u, 0x606a613au, 0xfea1daebu,
    0x9cd9549cu, 0x3b10ce4du, 0xd94847feu, 0x777fc1afu, 0x15b73b60u, 0xb3eeb511u, 0x52262ec2u, 0xf05da873u,
    0x8e952224u, 0x2ccc9bd5u, 0xcb041586u, 0x693b8f37u, 0x077308e8u, 0xa5aa8299u, 0x43e1fc4au, 0xe21975fbu,
    0x8050efacu, 0x1e88695du, 0xbcbfe30eu, 0x5af75cbfu, 0xf92ed670u, 0x97665021u, 0x359dc9d2u, 0xd3d54383u,
    0x720cbd34u, 0x104436e5u, 0xae7bb096u, 0x4cb32a47u, 0xeaeaa3f8u, 0x89221da9u, 0x2759975au, 0xc591110bu,
    0x63c88abcu, 0x0200046du, 0xa0377e1eu, 0x3e6ef7cfu, 0xdca67180u, 0x7addeb31u, 0x191564e2u, 0xb74cde93u,
    0x55845844u, 0xf3bbd1f5u, 0x91f34ba6u, 0x302ac557u, 0xce623f08u, 0x6c99b8b9u, 0x0ad1326au, 0xa908ac1bu,
    0x474025ccu, 0xe5779f7du, 0x83af192eu, 0x21e692dfu, 0xc01e0c90u, 0x5e558641u, 0xfc8cfff2u, 0x9ac479a3u,
    0x38fbf354u, 0xd7336d05u, 0x756ae6b6u, 0x13a26067u, 0xb1d9da18u, 0x501153c9u, 0xee48cd7au, 0x8c80472bu,
};

static const uint32_t bshim_205_tab6[96] = {
    0x5799333du, 0xf5d0aceeu, 0x9408269fu, 0x323fa050u, 0xd0771a01u, 0x6eae93b2u, 0x0ce60d63u, 0xab1d8714u,
    0x495500c5u, 0xe78c7a76u, 0x85c3f427u, 0x23fb6dd8u, 0xc232e789u, 0x606a613au, 0xfea1daebu, 0x9cd9549cu,
    0x3b10ce4du, 0xd94847feu, 0x777fc1afu, 0x15b73b60u, 0xb3eeb511u, 0x52262ec2u, 0xf05da873u, 0x8e952224u,
    0x2ccc9bd5u, 0xcb041586u, 0x693b8f37u, 0x077308e8u, 0xa5aa8299u, 0x43e1fc4au, 0xe21975fbu, 0x8050efacu,
    0x1e88695du, 0xbcbfe30eu, 0x5af75cbfu, 0xf92ed670u, 0x97665021u, 0x359dc9d2u, 0xd3d54383u, 0x720cbd34u,
    0x104436e5u, 0xae7bb096u, 0x4cb32a47u, 0xeaeaa3f8u, 0x89221da9u, 0x2759975au, 0xc591110bu, 0x63c88abcu,
    0x0200046du, 0xa0377e1eu, 0x3e6ef7cfu, 0xdca67180u, 0x7addeb31u, 0x191564e2u, 0xb74cde93u, 0x55845844u,
    0xf3bbd1f5u, 0x91f34ba6u, 0x302ac557u, 0xce623f08u, 0x6c99b8b9u, 0x0ad1326au, 0xa908ac1bu, 0x474025ccu,
    0xe5779f7du, 0x83af192eu, 0x21e692dfu, 0xc01e0c90u, 0x5e558641u, 0xfc8cfff2u, 0x9ac479a3u, 0x38fbf354u,
    0xd7336d05u, 0x756ae6b6u, 0x13a26067u, 0xb1d9da18u, 0x501153c9u, 0xee48cd7au, 0x8c80472bu, 0x2ab7c0dcu,
    0xc8ef3a8du, 0x6726b43eu, 0x055e2defu, 0xa395a7a0u, 0x41cd2151u, 0xe0049b02u, 0x7e3c14b3u, 0x1c738e64u,
    0xbaab0815u, 0x58e281c6u, 0xf719fb77u, 0x95517528u, 0x3388eed9u, 0xd1c0688au, 0x6ff7e23bu, 0x0e2f5becu,
};

static const uint32_t bshim_205_tab7[96] = {
    0xd94847feu, 0x777fc1afu, 0x15b73b60u, 0xb3eeb511u, 0x52262ec2u, 0xf05da873u, 0x8e952224u, 0x2ccc9bd5u,
    0xcb041586u, 0x693b8f37u, 0x077308e8u, 0xa5aa8299u, 0x43e1fc4au, 0xe21975fbu, 0x8050efacu, 0x1e88695du,
    0xbcbfe30eu, 0x5af75cbfu, 0xf92ed670u, 0x97665021u, 0x359dc9d2u, 0xd3d54383u, 0x720cbd34u, 0x104436e5u,
    0xae7bb096u, 0x4cb32a47u, 0xeaeaa3f8u, 0x89221da9u, 0x2759975au, 0xc591110bu, 0x63c88abcu, 0x0200046du,
    0xa0377e1eu, 0x3e6ef7cfu, 0xdca67180u, 0x7addeb31u, 0x191564e2u, 0xb74cde93u, 0x55845844u, 0xf3bbd1f5u,
    0x91f34ba6u, 0x302ac557u, 0xce623f08u, 0x6c99b8b9u, 0x0ad1326au, 0xa908ac1bu, 0x474025ccu, 0xe5779f7du,
    0x83af192eu, 0x21e692dfu, 0xc01e0c90u, 0x5e558641u, 0xfc8cfff2u, 0x9ac479a3u, 0x38fbf354u, 0xd7336d05u,
    0x756ae6b6u, 0x13a26067u, 0xb1d9da18u, 0x501153c9u, 0xee48cd7au, 0x8c80472bu, 0x2ab7c0dcu, 0xc8ef3a8du,
    0x6726b43eu, 0x055e2defu, 0xa395a7a0u, 0x41cd2151u, 0xe0049b02u, 0x7e3c14b3u, 0x1c738e64u, 0xbaab0815u,
    0x58e281c6u, 0xf719fb77u, 0x95517528u, 0x3388eed9u, 0xd1c0688au, 0x6ff7e23bu, 0x0e2f5becu, 0xac66d59du,
    0x4a9e4f4eu, 0xe8d5c8ffu, 0x870d42b0u, 0x2544bc61u, 0xc37c3612u, 0x61b3afc3u, 0xffeb2974u, 0x9e22a325u,
    0x3c5a1cd6u, 0xda919687u, 0x78c91038u, 0x170089e9u, 0xb538039au, 0x536f7d4bu, 0xf1a6f6fcu, 0x8fde70adu,
};

struct bshim_205_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_205_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_205_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_205_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_205_reset(struct bshim_205_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0018c563u;
    return 0;
}

