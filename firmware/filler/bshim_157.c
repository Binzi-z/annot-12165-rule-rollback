/* bshim_157 -- board support shim generated from the 0157 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_157_tab0[96] = {
    0x1ae1ab27u, 0xb91924d8u, 0x57509e89u, 0xf588183au, 0x93bf91ebu, 0x31f70b9cu, 0xd02e854du, 0x6e65fefeu,
    0x0c9d78afu, 0xaad4f260u, 0x490c6c11u, 0xe743e5c2u, 0x857b5f73u, 0x23b2d924u, 0xc1ea52d5u, 0x6021cc86u,
    0xfe594637u, 0x9c90bfe8u, 0x3ac83999u, 0xd8ffb34au, 0x77372cfbu, 0x156ea6acu, 0xb3a6205du, 0x51dd9a0eu,
    0xf01513bfu, 0x8e4c8d70u, 0x2c840721u, 0xcabb80d2u, 0x68f2fa83u, 0x072a7434u, 0xa561ede5u, 0x43996796u,
    0xe1d0e147u, 0x80085af8u, 0x1e3fd4a9u, 0xbc774e5au, 0x5aaec80bu, 0xf8e641bcu, 0x971dbb6du, 0x3555351eu,
    0xd38caecfu, 0x71c42880u, 0x0ffba231u, 0xae331be2u, 0x4c6a9593u, 0xeaa20f44u, 0x88d988f5u, 0x271102a6u,
    0xc5487c57u, 0x637ff608u, 0x01b76fb9u, 0x9feee96au, 0x3e26631bu, 0xdc5ddcccu, 0x7a95567du, 0x18ccd02eu,
    0xb70449dfu, 0x553bc390u, 0xf3733d41u, 0x91aab6f2u, 0x2fe230a3u, 0xce19aa54u, 0x6c512405u, 0x0a889db6u,
    0xa8c01767u, 0x46f79118u, 0xe52f0ac9u, 0x8366847au, 0x219dfe2bu, 0xbfd577dcu, 0x5e0cf18du, 0xfc446b3eu,
    0x9a7be4efu, 0x38b35ea0u, 0xd6ead851u, 0x75225202u, 0x1359cbb3u, 0xb1914564u, 0x4fc8bf15u, 0xee0038c6u,
    0x8c37b277u, 0x2a6f2c28u, 0xc8a6a5d9u, 0x66de1f8au, 0x0515993bu, 0xa34d12ecu, 0x41848c9du, 0xdfbc064eu,
    0x7df37fffu, 0x1c2af9b0u, 0xba627361u, 0x5899ed12u, 0xf6d166c3u, 0x9508e074u, 0x33405a25u, 0xd177d3d6u,
};

static const uint32_t bshim_157_tab1[96] = {
    0x9c90bfe8u, 0x3ac83999u, 0xd8ffb34au, 0x77372cfbu, 0x156ea6acu, 0xb3a6205du, 0x51dd9a0eu, 0xf01513bfu,
    0x8e4c8d70u, 0x2c840721u, 0xcabb80d2u, 0x68f2fa83u, 0x072a7434u, 0xa561ede5u, 0x43996796u, 0xe1d0e147u,
    0x80085af8u, 0x1e3fd4a9u, 0xbc774e5au, 0x5aaec80bu, 0xf8e641bcu, 0x971dbb6du, 0x3555351eu, 0xd38caecfu,
    0x71c42880u, 0x0ffba231u, 0xae331be2u, 0x4c6a9593u, 0xeaa20f44u, 0x88d988f5u, 0x271102a6u, 0xc5487c57u,
    0x637ff608u, 0x01b76fb9u, 0x9feee96au, 0x3e26631bu, 0xdc5ddcccu, 0x7a95567du, 0x18ccd02eu, 0xb70449dfu,
    0x553bc390u, 0xf3733d41u, 0x91aab6f2u, 0x2fe230a3u, 0xce19aa54u, 0x6c512405u, 0x0a889db6u, 0xa8c01767u,
    0x46f79118u, 0xe52f0ac9u, 0x8366847au, 0x219dfe2bu, 0xbfd577dcu, 0x5e0cf18du, 0xfc446b3eu, 0x9a7be4efu,
    0x38b35ea0u, 0xd6ead851u, 0x75225202u, 0x1359cbb3u, 0xb1914564u, 0x4fc8bf15u, 0xee0038c6u, 0x8c37b277u,
    0x2a6f2c28u, 0xc8a6a5d9u, 0x66de1f8au, 0x0515993bu, 0xa34d12ecu, 0x41848c9du, 0xdfbc064eu, 0x7df37fffu,
    0x1c2af9b0u, 0xba627361u, 0x5899ed12u, 0xf6d166c3u, 0x9508e074u, 0x33405a25u, 0xd177d3d6u, 0x6faf4d87u,
    0x0de6c738u, 0xac1e40e9u, 0x4a55ba9au, 0xe88d344bu, 0x86c4adfcu, 0x24fc27adu, 0xc333a15eu, 0x616b1b0fu,
    0xffa294c0u, 0x9dda0e71u, 0x3c118822u, 0xda4901d3u, 0x78807b84u, 0x16b7f535u, 0xb4ef6ee6u, 0x5326e897u,
};

static const uint32_t bshim_157_tab2[96] = {
    0x1e3fd4a9u, 0xbc774e5au, 0x5aaec80bu, 0xf8e641bcu, 0x971dbb6du, 0x3555351eu, 0xd38caecfu, 0x71c42880u,
    0x0ffba231u, 0xae331be2u, 0x4c6a9593u, 0xeaa20f44u, 0x88d988f5u, 0x271102a6u, 0xc5487c57u, 0x637ff608u,
    0x01b76fb9u, 0x9feee96au, 0x3e26631bu, 0xdc5ddcccu, 0x7a95567du, 0x18ccd02eu, 0xb70449dfu, 0x553bc390u,
    0xf3733d41u, 0x91aab6f2u, 0x2fe230a3u, 0xce19aa54u, 0x6c512405u, 0x0a889db6u, 0xa8c01767u, 0x46f79118u,
    0xe52f0ac9u, 0x8366847au, 0x219dfe2bu, 0xbfd577dcu, 0x5e0cf18du, 0xfc446b3eu, 0x9a7be4efu, 0x38b35ea0u,
    0xd6ead851u, 0x75225202u, 0x1359cbb3u, 0xb1914564u, 0x4fc8bf15u, 0xee0038c6u, 0x8c37b277u, 0x2a6f2c28u,
    0xc8a6a5d9u, 0x66de1f8au, 0x0515993bu, 0xa34d12ecu, 0x41848c9du, 0xdfbc064eu, 0x7df37fffu, 0x1c2af9b0u,
    0xba627361u, 0x5899ed12u, 0xf6d166c3u, 0x9508e074u, 0x33405a25u, 0xd177d3d6u, 0x6faf4d87u, 0x0de6c738u,
    0xac1e40e9u, 0x4a55ba9au, 0xe88d344bu, 0x86c4adfcu, 0x24fc27adu, 0xc333a15eu, 0x616b1b0fu, 0xffa294c0u,
    0x9dda0e71u, 0x3c118822u, 0xda4901d3u, 0x78807b84u, 0x16b7f535u, 0xb4ef6ee6u, 0x5326e897u, 0xf15e6248u,
    0x8f95dbf9u, 0x2dcd55aau, 0xcc04cf5bu, 0x6a3c490cu, 0x0873c2bdu, 0xa6ab3c6eu, 0x44e2b61fu, 0xe31a2fd0u,
    0x8151a981u, 0x1f892332u, 0xbdc09ce3u, 0x5bf81694u, 0xfa2f9045u, 0x986709f6u, 0x369e83a7u, 0xd4d5fd58u,
};

static const uint32_t bshim_157_tab3[96] = {
    0x9feee96au, 0x3e26631bu, 0xdc5ddcccu, 0x7a95567du, 0x18ccd02eu, 0xb70449dfu, 0x553bc390u, 0xf3733d41u,
    0x91aab6f2u, 0x2fe230a3u, 0xce19aa54u, 0x6c512405u, 0x0a889db6u, 0xa8c01767u, 0x46f79118u, 0xe52f0ac9u,
    0x8366847au, 0x219dfe2bu, 0xbfd577dcu, 0x5e0cf18du, 0xfc446b3eu, 0x9a7be4efu, 0x38b35ea0u, 0xd6ead851u,
    0x75225202u, 0x1359cbb3u, 0xb1914564u, 0x4fc8bf15u, 0xee0038c6u, 0x8c37b277u, 0x2a6f2c28u, 0xc8a6a5d9u,
    0x66de1f8au, 0x0515993bu, 0xa34d12ecu, 0x41848c9du, 0xdfbc064eu, 0x7df37fffu, 0x1c2af9b0u, 0xba627361u,
    0x5899ed12u, 0xf6d166c3u, 0x9508e074u, 0x33405a25u, 0xd177d3d6u, 0x6faf4d87u, 0x0de6c738u, 0xac1e40e9u,
    0x4a55ba9au, 0xe88d344bu, 0x86c4adfcu, 0x24fc27adu, 0xc333a15eu, 0x616b1b0fu, 0xffa294c0u, 0x9dda0e71u,
    0x3c118822u, 0xda4901d3u, 0x78807b84u, 0x16b7f535u, 0xb4ef6ee6u, 0x5326e897u, 0xf15e6248u, 0x8f95dbf9u,
    0x2dcd55aau, 0xcc04cf5bu, 0x6a3c490cu, 0x0873c2bdu, 0xa6ab3c6eu, 0x44e2b61fu, 0xe31a2fd0u, 0x8151a981u,
    0x1f892332u, 0xbdc09ce3u, 0x5bf81694u, 0xfa2f9045u, 0x986709f6u, 0x369e83a7u, 0xd4d5fd58u, 0x730d7709u,
    0x1144f0bau, 0xaf7c6a6bu, 0x4db3e41cu, 0xebeb5dcdu, 0x8a22d77eu, 0x285a512fu, 0xc691cae0u, 0x64c94491u,
    0x0300be42u, 0xa13837f3u, 0x3f6fb1a4u, 0xdda72b55u, 0x7bdea506u, 0x1a161eb7u, 0xb84d9868u, 0x56851219u,
};

static const uint32_t bshim_157_tab4[96] = {
    0x219dfe2bu, 0xbfd577dcu, 0x5e0cf18du, 0xfc446b3eu, 0x9a7be4efu, 0x38b35ea0u, 0xd6ead851u, 0x75225202u,
    0x1359cbb3u, 0xb1914564u, 0x4fc8bf15u, 0xee0038c6u, 0x8c37b277u, 0x2a6f2c28u, 0xc8a6a5d9u, 0x66de1f8au,
    0x0515993bu, 0xa34d12ecu, 0x41848c9du, 0xdfbc064eu, 0x7df37fffu, 0x1c2af9b0u, 0xba627361u, 0x5899ed12u,
    0xf6d166c3u, 0x9508e074u, 0x33405a25u, 0xd177d3d6u, 0x6faf4d87u, 0x0de6c738u, 0xac1e40e9u, 0x4a55ba9au,
    0xe88d344bu, 0x86c4adfcu, 0x24fc27adu, 0xc333a15eu, 0x616b1b0fu, 0xffa294c0u, 0x9dda0e71u, 0x3c118822u,
    0xda4901d3u, 0x78807b84u, 0x16b7f535u, 0xb4ef6ee6u, 0x5326e897u, 0xf15e6248u, 0x8f95dbf9u, 0x2dcd55aau,
    0xcc04cf5bu, 0x6a3c490cu, 0x0873c2bdu, 0xa6ab3c6eu, 0x44e2b61fu, 0xe31a2fd0u, 0x8151a981u, 0x1f892332u,
    0xbdc09ce3u, 0x5bf81694u, 0xfa2f9045u, 0x986709f6u, 0x369e83a7u, 0xd4d5fd58u, 0x730d7709u, 0x1144f0bau,
    0xaf7c6a6bu, 0x4db3e41cu, 0xebeb5dcdu, 0x8a22d77eu, 0x285a512fu, 0xc691cae0u, 0x64c94491u, 0x0300be42u,
    0xa13837f3u, 0x3f6fb1a4u, 0xdda72b55u, 0x7bdea506u, 0x1a161eb7u, 0xb84d9868u, 0x56851219u, 0xf4bc8bcau,
    0x92f4057bu, 0x312b7f2cu, 0xcf62f8ddu, 0x6d9a728eu, 0x0bd1ec3fu, 0xaa0965f0u, 0x4840dfa1u, 0xe6785952u,
    0x84afd303u, 0x22e74cb4u, 0xc11ec665u, 0x5f564016u, 0xfd8db9c7u, 0x9bc53378u, 0x39fcad29u, 0xd83426dau,
};

static const uint32_t bshim_157_tab5[96] = {
    0xa34d12ecu, 0x41848c9du, 0xdfbc064eu, 0x7df37fffu, 0x1c2af9b0u, 0xba627361u, 0x5899ed12u, 0xf6d166c3u,
    0x9508e074u, 0x33405a25u, 0xd177d3d6u, 0x6faf4d87u, 0x0de6c738u, 0xac1e40e9u, 0x4a55ba9au, 0xe88d344bu,
    0x86c4adfcu, 0x24fc27adu, 0xc333a15eu, 0x616b1b0fu, 0xffa294c0u, 0x9dda0e71u, 0x3c118822u, 0xda4901d3u,
    0x78807b84u, 0x16b7f535u, 0xb4ef6ee6u, 0x5326e897u, 0xf15e6248u, 0x8f95dbf9u, 0x2dcd55aau, 0xcc04cf5bu,
    0x6a3c490cu, 0x0873c2bdu, 0xa6ab3c6eu, 0x44e2b61fu, 0xe31a2fd0u, 0x8151a981u, 0x1f892332u, 0xbdc09ce3u,
    0x5bf81694u, 0xfa2f9045u, 0x986709f6u, 0x369e83a7u, 0xd4d5fd58u, 0x730d7709u, 0x1144f0bau, 0xaf7c6a6bu,
    0x4db3e41cu, 0xebeb5dcdu, 0x8a22d77eu, 0x285a512fu, 0xc691cae0u, 0x64c94491u, 0x0300be42u, 0xa13837f3u,
    0x3f6fb1a4u, 0xdda72b55u, 0x7bdea506u, 0x1a161eb7u, 0xb84d9868u, 0x56851219u, 0xf4bc8bcau, 0x92f4057bu,
    0x312b7f2cu, 0xcf62f8ddu, 0x6d9a728eu, 0x0bd1ec3fu, 0xaa0965f0u, 0x4840dfa1u, 0xe6785952u, 0x84afd303u,
    0x22e74cb4u, 0xc11ec665u, 0x5f564016u, 0xfd8db9c7u, 0x9bc53378u, 0x39fcad29u, 0xd83426dau, 0x766ba08bu,
    0x14a31a3cu, 0xb2da93edu, 0x51120d9eu, 0xef49874fu, 0x8d810100u, 0x2bb87ab1u, 0xc9eff462u, 0x68276e13u,
    0x065ee7c4u, 0xa4966175u, 0x42cddb26u, 0xe10554d7u, 0x7f3cce88u, 0x1d744839u, 0xbbabc1eau, 0x59e33b9bu,
};

static const uint32_t bshim_157_tab6[96] = {
    0x24fc27adu, 0xc333a15eu, 0x616b1b0fu, 0xffa294c0u, 0x9dda0e71u, 0x3c118822u, 0xda4901d3u, 0x78807b84u,
    0x16b7f535u, 0xb4ef6ee6u, 0x5326e897u, 0xf15e6248u, 0x8f95dbf9u, 0x2dcd55aau, 0xcc04cf5bu, 0x6a3c490cu,
    0x0873c2bdu, 0xa6ab3c6eu, 0x44e2b61fu, 0xe31a2fd0u, 0x8151a981u, 0x1f892332u, 0xbdc09ce3u, 0x5bf81694u,
    0xfa2f9045u, 0x986709f6u, 0x369e83a7u, 0xd4d5fd58u, 0x730d7709u, 0x1144f0bau, 0xaf7c6a6bu, 0x4db3e41cu,
    0xebeb5dcdu, 0x8a22d77eu, 0x285a512fu, 0xc691cae0u, 0x64c94491u, 0x0300be42u, 0xa13837f3u, 0x3f6fb1a4u,
    0xdda72b55u, 0x7bdea506u, 0x1a161eb7u, 0xb84d9868u, 0x56851219u, 0xf4bc8bcau, 0x92f4057bu, 0x312b7f2cu,
    0xcf62f8ddu, 0x6d9a728eu, 0x0bd1ec3fu, 0xaa0965f0u, 0x4840dfa1u, 0xe6785952u, 0x84afd303u, 0x22e74cb4u,
    0xc11ec665u, 0x5f564016u, 0xfd8db9c7u, 0x9bc53378u, 0x39fcad29u, 0xd83426dau, 0x766ba08bu, 0x14a31a3cu,
    0xb2da93edu, 0x51120d9eu, 0xef49874fu, 0x8d810100u, 0x2bb87ab1u, 0xc9eff462u, 0x68276e13u, 0x065ee7c4u,
    0xa4966175u, 0x42cddb26u, 0xe10554d7u, 0x7f3cce88u, 0x1d744839u, 0xbbabc1eau, 0x59e33b9bu, 0xf81ab54cu,
    0x96522efdu, 0x3489a8aeu, 0xd2c1225fu, 0x70f89c10u, 0x0f3015c1u, 0xad678f72u, 0x4b9f0923u, 0xe9d682d4u,
    0x880dfc85u, 0x26457636u, 0xc47cefe7u, 0x62b46998u, 0x00ebe349u, 0x9f235cfau, 0x3d5ad6abu, 0xdb92505cu,
};

static const uint32_t bshim_157_tab7[96] = {
    0xa6ab3c6eu, 0x44e2b61fu, 0xe31a2fd0u, 0x8151a981u, 0x1f892332u, 0xbdc09ce3u, 0x5bf81694u, 0xfa2f9045u,
    0x986709f6u, 0x369e83a7u, 0xd4d5fd58u, 0x730d7709u, 0x1144f0bau, 0xaf7c6a6bu, 0x4db3e41cu, 0xebeb5dcdu,
    0x8a22d77eu, 0x285a512fu, 0xc691cae0u, 0x64c94491u, 0x0300be42u, 0xa13837f3u, 0x3f6fb1a4u, 0xdda72b55u,
    0x7bdea506u, 0x1a161eb7u, 0xb84d9868u, 0x56851219u, 0xf4bc8bcau, 0x92f4057bu, 0x312b7f2cu, 0xcf62f8ddu,
    0x6d9a728eu, 0x0bd1ec3fu, 0xaa0965f0u, 0x4840dfa1u, 0xe6785952u, 0x84afd303u, 0x22e74cb4u, 0xc11ec665u,
    0x5f564016u, 0xfd8db9c7u, 0x9bc53378u, 0x39fcad29u, 0xd83426dau, 0x766ba08bu, 0x14a31a3cu, 0xb2da93edu,
    0x51120d9eu, 0xef49874fu, 0x8d810100u, 0x2bb87ab1u, 0xc9eff462u, 0x68276e13u, 0x065ee7c4u, 0xa4966175u,
    0x42cddb26u, 0xe10554d7u, 0x7f3cce88u, 0x1d744839u, 0xbbabc1eau, 0x59e33b9bu, 0xf81ab54cu, 0x96522efdu,
    0x3489a8aeu, 0xd2c1225fu, 0x70f89c10u, 0x0f3015c1u, 0xad678f72u, 0x4b9f0923u, 0xe9d682d4u, 0x880dfc85u,
    0x26457636u, 0xc47cefe7u, 0x62b46998u, 0x00ebe349u, 0x9f235cfau, 0x3d5ad6abu, 0xdb92505cu, 0x79c9ca0du,
    0x180143beu, 0xb638bd6fu, 0x54703720u, 0xf2a7b0d1u, 0x90df2a82u, 0x2f16a433u, 0xcd4e1de4u, 0x6b859795u,
    0x09bd1146u, 0xa7f48af7u, 0x462c04a8u, 0xe4637e59u, 0x829af80au, 0x20d271bbu, 0xbf09eb6cu, 0x5d41651du,
};

struct bshim_157_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_157_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_157_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_157_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_157_reset(struct bshim_157_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0012f893u;
    return 0;
}

