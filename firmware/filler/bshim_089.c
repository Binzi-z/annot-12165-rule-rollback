/* bshim_089 -- board support shim generated from the 0089 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_089_tab0[96] = {
    0xa883301bu, 0x46baa9ccu, 0xe4f2237du, 0x83299d2eu, 0x216116dfu, 0xbf989090u, 0x5dd00a41u, 0xfc0783f2u,
    0x9a3efda3u, 0x38767754u, 0xd6adf105u, 0x74e56ab6u, 0x131ce467u, 0xb1545e18u, 0x4f8bd7c9u, 0xedc3517au,
    0x8bfacb2bu, 0x2a3244dcu, 0xc869be8du, 0x66a1383eu, 0x04d8b1efu, 0xa3102ba0u, 0x4147a551u, 0xdf7f1f02u,
    0x7db698b3u, 0x1bee1264u, 0xba258c15u, 0x585d05c6u, 0xf6947f77u, 0x94cbf928u, 0x330372d9u, 0xd13aec8au,
    0x6f72663bu, 0x0da9dfecu, 0xabe1599du, 0x4a18d34eu, 0xe8504cffu, 0x8687c6b0u, 0x24bf4061u, 0xc2f6ba12u,
    0x612e33c3u, 0xff65ad74u, 0x9d9d2725u, 0x3bd4a0d6u, 0xda0c1a87u, 0x78439438u, 0x167b0de9u, 0xb4b2879au,
    0x52ea014bu, 0xf1217afcu, 0x8f58f4adu, 0x2d906e5eu, 0xcbc7e80fu, 0x69ff61c0u, 0x0836db71u, 0xa66e5522u,
    0x44a5ced3u, 0xe2dd4884u, 0x8114c235u, 0x1f4c3be6u, 0xbd83b597u, 0x5bbb2f48u, 0xf9f2a8f9u, 0x982a22aau,
    0x36619c5bu, 0xd499160cu, 0x72d08fbdu, 0x1108096eu, 0xaf3f831fu, 0x4d76fcd0u, 0xebae7681u, 0x89e5f032u,
    0x281d69e3u, 0xc654e394u, 0x648c5d45u, 0x02c3d6f6u, 0xa0fb50a7u, 0x3f32ca58u, 0xdd6a4409u, 0x7ba1bdbau,
    0x19d9376bu, 0xb810b11cu, 0x56482acdu, 0xf47fa47eu, 0x92b71e2fu, 0x30ee97e0u, 0xcf261191u, 0x6d5d8b42u,
    0x0b9504f3u, 0xa9cc7ea4u, 0x4803f855u, 0xe63b7206u, 0x8472ebb7u, 0x22aa6568u, 0xc0e1df19u, 0x5f1958cau,
};

static const uint32_t bshim_089_tab1[96] = {
    0x2a3244dcu, 0xc869be8du, 0x66a1383eu, 0x04d8b1efu, 0xa3102ba0u, 0x4147a551u, 0xdf7f1f02u, 0x7db698b3u,
    0x1bee1264u, 0xba258c15u, 0x585d05c6u, 0xf6947f77u, 0x94cbf928u, 0x330372d9u, 0xd13aec8au, 0x6f72663bu,
    0x0da9dfecu, 0xabe1599du, 0x4a18d34eu, 0xe8504cffu, 0x8687c6b0u, 0x24bf4061u, 0xc2f6ba12u, 0x612e33c3u,
    0xff65ad74u, 0x9d9d2725u, 0x3bd4a0d6u, 0xda0c1a87u, 0x78439438u, 0x167b0de9u, 0xb4b2879au, 0x52ea014bu,
    0xf1217afcu, 0x8f58f4adu, 0x2d906e5eu, 0xcbc7e80fu, 0x69ff61c0u, 0x0836db71u, 0xa66e5522u, 0x44a5ced3u,
    0xe2dd4884u, 0x8114c235u, 0x1f4c3be6u, 0xbd83b597u, 0x5bbb2f48u, 0xf9f2a8f9u, 0x982a22aau, 0x36619c5bu,
    0xd499160cu, 0x72d08fbdu, 0x1108096eu, 0xaf3f831fu, 0x4d76fcd0u, 0xebae7681u, 0x89e5f032u, 0x281d69e3u,
    0xc654e394u, 0x648c5d45u, 0x02c3d6f6u, 0xa0fb50a7u, 0x3f32ca58u, 0xdd6a4409u, 0x7ba1bdbau, 0x19d9376bu,
    0xb810b11cu, 0x56482acdu, 0xf47fa47eu, 0x92b71e2fu, 0x30ee97e0u, 0xcf261191u, 0x6d5d8b42u, 0x0b9504f3u,
    0xa9cc7ea4u, 0x4803f855u, 0xe63b7206u, 0x8472ebb7u, 0x22aa6568u, 0xc0e1df19u, 0x5f1958cau, 0xfd50d27bu,
    0x9b884c2cu, 0x39bfc5ddu, 0xd7f73f8eu, 0x762eb93fu, 0x146632f0u, 0xb29daca1u, 0x50d52652u, 0xef0ca003u,
    0x8d4419b4u, 0x2b7b9365u, 0xc9b30d16u, 0x67ea86c7u, 0x06220078u, 0xa4597a29u, 0x4290f3dau, 0xe0c86d8bu,
};

static const uint32_t bshim_089_tab2[96] = {
    0xabe1599du, 0x4a18d34eu, 0xe8504cffu, 0x8687c6b0u, 0x24bf4061u, 0xc2f6ba12u, 0x612e33c3u, 0xff65ad74u,
    0x9d9d2725u, 0x3bd4a0d6u, 0xda0c1a87u, 0x78439438u, 0x167b0de9u, 0xb4b2879au, 0x52ea014bu, 0xf1217afcu,
    0x8f58f4adu, 0x2d906e5eu, 0xcbc7e80fu, 0x69ff61c0u, 0x0836db71u, 0xa66e5522u, 0x44a5ced3u, 0xe2dd4884u,
    0x8114c235u, 0x1f4c3be6u, 0xbd83b597u, 0x5bbb2f48u, 0xf9f2a8f9u, 0x982a22aau, 0x36619c5bu, 0xd499160cu,
    0x72d08fbdu, 0x1108096eu, 0xaf3f831fu, 0x4d76fcd0u, 0xebae7681u, 0x89e5f032u, 0x281d69e3u, 0xc654e394u,
    0x648c5d45u, 0x02c3d6f6u, 0xa0fb50a7u, 0x3f32ca58u, 0xdd6a4409u, 0x7ba1bdbau, 0x19d9376bu, 0xb810b11cu,
    0x56482acdu, 0xf47fa47eu, 0x92b71e2fu, 0x30ee97e0u, 0xcf261191u, 0x6d5d8b42u, 0x0b9504f3u, 0xa9cc7ea4u,
    0x4803f855u, 0xe63b7206u, 0x8472ebb7u, 0x22aa6568u, 0xc0e1df19u, 0x5f1958cau, 0xfd50d27bu, 0x9b884c2cu,
    0x39bfc5ddu, 0xd7f73f8eu, 0x762eb93fu, 0x146632f0u, 0xb29daca1u, 0x50d52652u, 0xef0ca003u, 0x8d4419b4u,
    0x2b7b9365u, 0xc9b30d16u, 0x67ea86c7u, 0x06220078u, 0xa4597a29u, 0x4290f3dau, 0xe0c86d8bu, 0x7effe73cu,
    0x1d3760edu, 0xbb6eda9eu, 0x59a6544fu, 0xf7ddce00u, 0x961547b1u, 0x344cc162u, 0xd2843b13u, 0x70bbb4c4u,
    0x0ef32e75u, 0xad2aa826u, 0x4b6221d7u, 0xe9999b88u, 0x87d11539u, 0x26088eeau, 0xc440089bu, 0x6277824cu,
};

static const uint32_t bshim_089_tab3[96] = {
    0x2d906e5eu, 0xcbc7e80fu, 0x69ff61c0u, 0x0836db71u, 0xa66e5522u, 0x44a5ced3u, 0xe2dd4884u, 0x8114c235u,
    0x1f4c3be6u, 0xbd83b597u, 0x5bbb2f48u, 0xf9f2a8f9u, 0x982a22aau, 0x36619c5bu, 0xd499160cu, 0x72d08fbdu,
    0x1108096eu, 0xaf3f831fu, 0x4d76fcd0u, 0xebae7681u, 0x89e5f032u, 0x281d69e3u, 0xc654e394u, 0x648c5d45u,
    0x02c3d6f6u, 0xa0fb50a7u, 0x3f32ca58u, 0xdd6a4409u, 0x7ba1bdbau, 0x19d9376bu, 0xb810b11cu, 0x56482acdu,
    0xf47fa47eu, 0x92b71e2fu, 0x30ee97e0u, 0xcf261191u, 0x6d5d8b42u, 0x0b9504f3u, 0xa9cc7ea4u, 0x4803f855u,
    0xe63b7206u, 0x8472ebb7u, 0x22aa6568u, 0xc0e1df19u, 0x5f1958cau, 0xfd50d27bu, 0x9b884c2cu, 0x39bfc5ddu,
    0xd7f73f8eu, 0x762eb93fu, 0x146632f0u, 0xb29daca1u, 0x50d52652u, 0xef0ca003u, 0x8d4419b4u, 0x2b7b9365u,
    0xc9b30d16u, 0x67ea86c7u, 0x06220078u, 0xa4597a29u, 0x4290f3dau, 0xe0c86d8bu, 0x7effe73cu, 0x1d3760edu,
    0xbb6eda9eu, 0x59a6544fu, 0xf7ddce00u, 0x961547b1u, 0x344cc162u, 0xd2843b13u, 0x70bbb4c4u, 0x0ef32e75u,
    0xad2aa826u, 0x4b6221d7u, 0xe9999b88u, 0x87d11539u, 0x26088eeau, 0xc440089bu, 0x6277824cu, 0x00aefbfdu,
    0x9ee675aeu, 0x3d1def5fu, 0xdb556910u, 0x798ce2c1u, 0x17c45c72u, 0xb5fbd623u, 0x54334fd4u, 0xf26ac985u,
    0x90a24336u, 0x2ed9bce7u, 0xcd113698u, 0x6b48b049u, 0x098029fau, 0xa7b7a3abu, 0x45ef1d5cu, 0xe426970du,
};

static const uint32_t bshim_089_tab4[96] = {
    0xaf3f831fu, 0x4d76fcd0u, 0xebae7681u, 0x89e5f032u, 0x281d69e3u, 0xc654e394u, 0x648c5d45u, 0x02c3d6f6u,
    0xa0fb50a7u, 0x3f32ca58u, 0xdd6a4409u, 0x7ba1bdbau, 0x19d9376bu, 0xb810b11cu, 0x56482acdu, 0xf47fa47eu,
    0x92b71e2fu, 0x30ee97e0u, 0xcf261191u, 0x6d5d8b42u, 0x0b9504f3u, 0xa9cc7ea4u, 0x4803f855u, 0xe63b7206u,
    0x8472ebb7u, 0x22aa6568u, 0xc0e1df19u, 0x5f1958cau, 0xfd50d27bu, 0x9b884c2cu, 0x39bfc5ddu, 0xd7f73f8eu,
    0x762eb93fu, 0x146632f0u, 0xb29daca1u, 0x50d52652u, 0xef0ca003u, 0x8d4419b4u, 0x2b7b9365u, 0xc9b30d16u,
    0x67ea86c7u, 0x06220078u, 0xa4597a29u, 0x4290f3dau, 0xe0c86d8bu, 0x7effe73cu, 0x1d3760edu, 0xbb6eda9eu,
    0x59a6544fu, 0xf7ddce00u, 0x961547b1u, 0x344cc162u, 0xd2843b13u, 0x70bbb4c4u, 0x0ef32e75u, 0xad2aa826u,
    0x4b6221d7u, 0xe9999b88u, 0x87d11539u, 0x26088eeau, 0xc440089bu, 0x6277824cu, 0x00aefbfdu, 0x9ee675aeu,
    0x3d1def5fu, 0xdb556910u, 0x798ce2c1u, 0x17c45c72u, 0xb5fbd623u, 0x54334fd4u, 0xf26ac985u, 0x90a24336u,
    0x2ed9bce7u, 0xcd113698u, 0x6b48b049u, 0x098029fau, 0xa7b7a3abu, 0x45ef1d5cu, 0xe426970du, 0x825e10beu,
    0x20958a6fu, 0xbecd0420u, 0x5d047dd1u, 0xfb3bf782u, 0x99737133u, 0x37aaeae4u, 0xd5e26495u, 0x7419de46u,
    0x125157f7u, 0xb088d1a8u, 0x4ec04b59u, 0xecf7c50au, 0x8b2f3ebbu, 0x2966b86cu, 0xc79e321du, 0x65d5abceu,
};

static const uint32_t bshim_089_tab5[96] = {
    0x30ee97e0u, 0xcf261191u, 0x6d5d8b42u, 0x0b9504f3u, 0xa9cc7ea4u, 0x4803f855u, 0xe63b7206u, 0x8472ebb7u,
    0x22aa6568u, 0xc0e1df19u, 0x5f1958cau, 0xfd50d27bu, 0x9b884c2cu, 0x39bfc5ddu, 0xd7f73f8eu, 0x762eb93fu,
    0x146632f0u, 0xb29daca1u, 0x50d52652u, 0xef0ca003u, 0x8d4419b4u, 0x2b7b9365u, 0xc9b30d16u, 0x67ea86c7u,
    0x06220078u, 0xa4597a29u, 0x4290f3dau, 0xe0c86d8bu, 0x7effe73cu, 0x1d3760edu, 0xbb6eda9eu, 0x59a6544fu,
    0xf7ddce00u, 0x961547b1u, 0x344cc162u, 0xd2843b13u, 0x70bbb4c4u, 0x0ef32e75u, 0xad2aa826u, 0x4b6221d7u,
    0xe9999b88u, 0x87d11539u, 0x26088eeau, 0xc440089bu, 0x6277824cu, 0x00aefbfdu, 0x9ee675aeu, 0x3d1def5fu,
    0xdb556910u, 0x798ce2c1u, 0x17c45c72u, 0xb5fbd623u, 0x54334fd4u, 0xf26ac985u, 0x90a24336u, 0x2ed9bce7u,
    0xcd113698u, 0x6b48b049u, 0x098029fau, 0xa7b7a3abu, 0x45ef1d5cu, 0xe426970du, 0x825e10beu, 0x20958a6fu,
    0xbecd0420u, 0x5d047dd1u, 0xfb3bf782u, 0x99737133u, 0x37aaeae4u, 0xd5e26495u, 0x7419de46u, 0x125157f7u,
    0xb088d1a8u, 0x4ec04b59u, 0xecf7c50au, 0x8b2f3ebbu, 0x2966b86cu, 0xc79e321du, 0x65d5abceu, 0x040d257fu,
    0xa2449f30u, 0x407c18e1u, 0xdeb39292u, 0x7ceb0c43u, 0x1b2285f4u, 0xb959ffa5u, 0x57917956u, 0xf5c8f307u,
    0x94006cb8u, 0x3237e669u, 0xd06f601au, 0x6ea6d9cbu, 0x0cde537cu, 0xab15cd2du, 0x494d46deu, 0xe784c08fu,
};

static const uint32_t bshim_089_tab6[96] = {
    0xb29daca1u, 0x50d52652u, 0xef0ca003u, 0x8d4419b4u, 0x2b7b9365u, 0xc9b30d16u, 0x67ea86c7u, 0x06220078u,
    0xa4597a29u, 0x4290f3dau, 0xe0c86d8bu, 0x7effe73cu, 0x1d3760edu, 0xbb6eda9eu, 0x59a6544fu, 0xf7ddce00u,
    0x961547b1u, 0x344cc162u, 0xd2843b13u, 0x70bbb4c4u, 0x0ef32e75u, 0xad2aa826u, 0x4b6221d7u, 0xe9999b88u,
    0x87d11539u, 0x26088eeau, 0xc440089bu, 0x6277824cu, 0x00aefbfdu, 0x9ee675aeu, 0x3d1def5fu, 0xdb556910u,
    0x798ce2c1u, 0x17c45c72u, 0xb5fbd623u, 0x54334fd4u, 0xf26ac985u, 0x90a24336u, 0x2ed9bce7u, 0xcd113698u,
    0x6b48b049u, 0x098029fau, 0xa7b7a3abu, 0x45ef1d5cu, 0xe426970du, 0x825e10beu, 0x20958a6fu, 0xbecd0420u,
    0x5d047dd1u, 0xfb3bf782u, 0x99737133u, 0x37aaeae4u, 0xd5e26495u, 0x7419de46u, 0x125157f7u, 0xb088d1a8u,
    0x4ec04b59u, 0xecf7c50au, 0x8b2f3ebbu, 0x2966b86cu, 0xc79e321du, 0x65d5abceu, 0x040d257fu, 0xa2449f30u,
    0x407c18e1u, 0xdeb39292u, 0x7ceb0c43u, 0x1b2285f4u, 0xb959ffa5u, 0x57917956u, 0xf5c8f307u, 0x94006cb8u,
    0x3237e669u, 0xd06f601au, 0x6ea6d9cbu, 0x0cde537cu, 0xab15cd2du, 0x494d46deu, 0xe784c08fu, 0x85bc3a40u,
    0x23f3b3f1u, 0xc22b2da2u, 0x6062a753u, 0xfe9a2104u, 0x9cd19ab5u, 0x3b091466u, 0xd9408e17u, 0x777807c8u,
    0x15af8179u, 0xb3e6fb2au, 0x521e74dbu, 0xf055ee8cu, 0x8e8d683du, 0x2cc4e1eeu, 0xcafc5b9fu, 0x6933d550u,
};

static const uint32_t bshim_089_tab7[96] = {
    0x344cc162u, 0xd2843b13u, 0x70bbb4c4u, 0x0ef32e75u, 0xad2aa826u, 0x4b6221d7u, 0xe9999b88u, 0x87d11539u,
    0x26088eeau, 0xc440089bu, 0x6277824cu, 0x00aefbfdu, 0x9ee675aeu, 0x3d1def5fu, 0xdb556910u, 0x798ce2c1u,
    0x17c45c72u, 0xb5fbd623u, 0x54334fd4u, 0xf26ac985u, 0x90a24336u, 0x2ed9bce7u, 0xcd113698u, 0x6b48b049u,
    0x098029fau, 0xa7b7a3abu, 0x45ef1d5cu, 0xe426970du, 0x825e10beu, 0x20958a6fu, 0xbecd0420u, 0x5d047dd1u,
    0xfb3bf782u, 0x99737133u, 0x37aaeae4u, 0xd5e26495u, 0x7419de46u, 0x125157f7u, 0xb088d1a8u, 0x4ec04b59u,
    0xecf7c50au, 0x8b2f3ebbu, 0x2966b86cu, 0xc79e321du, 0x65d5abceu, 0x040d257fu, 0xa2449f30u, 0x407c18e1u,
    0xdeb39292u, 0x7ceb0c43u, 0x1b2285f4u, 0xb959ffa5u, 0x57917956u, 0xf5c8f307u, 0x94006cb8u, 0x3237e669u,
    0xd06f601au, 0x6ea6d9cbu, 0x0cde537cu, 0xab15cd2du, 0x494d46deu, 0xe784c08fu, 0x85bc3a40u, 0x23f3b3f1u,
    0xc22b2da2u, 0x6062a753u, 0xfe9a2104u, 0x9cd19ab5u, 0x3b091466u, 0xd9408e17u, 0x777807c8u, 0x15af8179u,
    0xb3e6fb2au, 0x521e74dbu, 0xf055ee8cu, 0x8e8d683du, 0x2cc4e1eeu, 0xcafc5b9fu, 0x6933d550u, 0x076b4f01u,
    0xa5a2c8b2u, 0x43da4263u, 0xe211bc14u, 0x804935c5u, 0x1e80af76u, 0xbcb82927u, 0x5aefa2d8u, 0xf9271c89u,
    0x975e963au, 0x35960febu, 0xd3cd899cu, 0x7205034du, 0x103c7cfeu, 0xae73f6afu, 0x4cab7060u, 0xeae2ea11u,
};

struct bshim_089_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_089_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_089_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_089_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_089_reset(struct bshim_089_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000ac117u;
    return 0;
}

