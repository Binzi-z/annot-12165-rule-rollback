/* bshim_088 -- board support shim generated from the 0088 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_088_tab0[96] = {
    0xb21fea88u, 0x50576439u, 0xee8eddeau, 0x8cc6579bu, 0x2afdd14cu, 0xc9354afdu, 0x676cc4aeu, 0x05a43e5fu,
    0xa3dbb810u, 0x421331c1u, 0xe04aab72u, 0x7e822523u, 0x1cb99ed4u, 0xbaf11885u, 0x59289236u, 0xf7600be7u,
    0x95978598u, 0x33ceff49u, 0xd20678fau, 0x703df2abu, 0x0e756c5cu, 0xacace60du, 0x4ae45fbeu, 0xe91bd96fu,
    0x87535320u, 0x258accd1u, 0xc3c24682u, 0x61f9c033u, 0x003139e4u, 0x9e68b395u, 0x3ca02d46u, 0xdad7a6f7u,
    0x790f20a8u, 0x17469a59u, 0xb57e140au, 0x53b58dbbu, 0xf1ed076cu, 0x9024811du, 0x2e5bfaceu, 0xcc93747fu,
    0x6acaee30u, 0x090267e1u, 0xa739e192u, 0x45715b43u, 0xe3a8d4f4u, 0x81e04ea5u, 0x2017c856u, 0xbe4f4207u,
    0x5c86bbb8u, 0xfabe3569u, 0x98f5af1au, 0x372d28cbu, 0xd564a27cu, 0x739c1c2du, 0x11d395deu, 0xb00b0f8fu,
    0x4e428940u, 0xec7a02f1u, 0x8ab17ca2u, 0x28e8f653u, 0xc7207004u, 0x6557e9b5u, 0x038f6366u, 0xa1c6dd17u,
    0x3ffe56c8u, 0xde35d079u, 0x7c6d4a2au, 0x1aa4c3dbu, 0xb8dc3d8cu, 0x5713b73du, 0xf54b30eeu, 0x9382aa9fu,
    0x31ba2450u, 0xcff19e01u, 0x6e2917b2u, 0x0c609163u, 0xaa980b14u, 0x48cf84c5u, 0xe706fe76u, 0x853e7827u,
    0x2375f1d8u, 0xc1ad6b89u, 0x5fe4e53au, 0xfe1c5eebu, 0x9c53d89cu, 0x3a8b524du, 0xd8c2cbfeu, 0x76fa45afu,
    0x1531bf60u, 0xb3693911u, 0x51a0b2c2u, 0xefd82c73u, 0x8e0fa624u, 0x2c471fd5u, 0xca7e9986u, 0x68b61337u,
};

static const uint32_t bshim_088_tab1[96] = {
    0x33ceff49u, 0xd20678fau, 0x703df2abu, 0x0e756c5cu, 0xacace60du, 0x4ae45fbeu, 0xe91bd96fu, 0x87535320u,
    0x258accd1u, 0xc3c24682u, 0x61f9c033u, 0x003139e4u, 0x9e68b395u, 0x3ca02d46u, 0xdad7a6f7u, 0x790f20a8u,
    0x17469a59u, 0xb57e140au, 0x53b58dbbu, 0xf1ed076cu, 0x9024811du, 0x2e5bfaceu, 0xcc93747fu, 0x6acaee30u,
    0x090267e1u, 0xa739e192u, 0x45715b43u, 0xe3a8d4f4u, 0x81e04ea5u, 0x2017c856u, 0xbe4f4207u, 0x5c86bbb8u,
    0xfabe3569u, 0x98f5af1au, 0x372d28cbu, 0xd564a27cu, 0x739c1c2du, 0x11d395deu, 0xb00b0f8fu, 0x4e428940u,
    0xec7a02f1u, 0x8ab17ca2u, 0x28e8f653u, 0xc7207004u, 0x6557e9b5u, 0x038f6366u, 0xa1c6dd17u, 0x3ffe56c8u,
    0xde35d079u, 0x7c6d4a2au, 0x1aa4c3dbu, 0xb8dc3d8cu, 0x5713b73du, 0xf54b30eeu, 0x9382aa9fu, 0x31ba2450u,
    0xcff19e01u, 0x6e2917b2u, 0x0c609163u, 0xaa980b14u, 0x48cf84c5u, 0xe706fe76u, 0x853e7827u, 0x2375f1d8u,
    0xc1ad6b89u, 0x5fe4e53au, 0xfe1c5eebu, 0x9c53d89cu, 0x3a8b524du, 0xd8c2cbfeu, 0x76fa45afu, 0x1531bf60u,
    0xb3693911u, 0x51a0b2c2u, 0xefd82c73u, 0x8e0fa624u, 0x2c471fd5u, 0xca7e9986u, 0x68b61337u, 0x06ed8ce8u,
    0xa5250699u, 0x435c804au, 0xe193f9fbu, 0x7fcb73acu, 0x1e02ed5du, 0xbc3a670eu, 0x5a71e0bfu, 0xf8a95a70u,
    0x96e0d421u, 0x35184dd2u, 0xd34fc783u, 0x71874134u, 0x0fbebae5u, 0xadf63496u, 0x4c2dae47u, 0xea6527f8u,
};

static const uint32_t bshim_088_tab2[96] = {
    0xb57e140au, 0x53b58dbbu, 0xf1ed076cu, 0x9024811du, 0x2e5bfaceu, 0xcc93747fu, 0x6acaee30u, 0x090267e1u,
    0xa739e192u, 0x45715b43u, 0xe3a8d4f4u, 0x81e04ea5u, 0x2017c856u, 0xbe4f4207u, 0x5c86bbb8u, 0xfabe3569u,
    0x98f5af1au, 0x372d28cbu, 0xd564a27cu, 0x739c1c2du, 0x11d395deu, 0xb00b0f8fu, 0x4e428940u, 0xec7a02f1u,
    0x8ab17ca2u, 0x28e8f653u, 0xc7207004u, 0x6557e9b5u, 0x038f6366u, 0xa1c6dd17u, 0x3ffe56c8u, 0xde35d079u,
    0x7c6d4a2au, 0x1aa4c3dbu, 0xb8dc3d8cu, 0x5713b73du, 0xf54b30eeu, 0x9382aa9fu, 0x31ba2450u, 0xcff19e01u,
    0x6e2917b2u, 0x0c609163u, 0xaa980b14u, 0x48cf84c5u, 0xe706fe76u, 0x853e7827u, 0x2375f1d8u, 0xc1ad6b89u,
    0x5fe4e53au, 0xfe1c5eebu, 0x9c53d89cu, 0x3a8b524du, 0xd8c2cbfeu, 0x76fa45afu, 0x1531bf60u, 0xb3693911u,
    0x51a0b2c2u, 0xefd82c73u, 0x8e0fa624u, 0x2c471fd5u, 0xca7e9986u, 0x68b61337u, 0x06ed8ce8u, 0xa5250699u,
    0x435c804au, 0xe193f9fbu, 0x7fcb73acu, 0x1e02ed5du, 0xbc3a670eu, 0x5a71e0bfu, 0xf8a95a70u, 0x96e0d421u,
    0x35184dd2u, 0xd34fc783u, 0x71874134u, 0x0fbebae5u, 0xadf63496u, 0x4c2dae47u, 0xea6527f8u, 0x889ca1a9u,
    0x26d41b5au, 0xc50b950bu, 0x63430ebcu, 0x017a886du, 0x9fb2021eu, 0x3de97bcfu, 0xdc20f580u, 0x7a586f31u,
    0x188fe8e2u, 0xb6c76293u, 0x54fedc44u, 0xf33655f5u, 0x916dcfa6u, 0x2fa54957u, 0xcddcc308u, 0x6c143cb9u,
};

static const uint32_t bshim_088_tab3[96] = {
    0x372d28cbu, 0xd564a27cu, 0x739c1c2du, 0x11d395deu, 0xb00b0f8fu, 0x4e428940u, 0xec7a02f1u, 0x8ab17ca2u,
    0x28e8f653u, 0xc7207004u, 0x6557e9b5u, 0x038f6366u, 0xa1c6dd17u, 0x3ffe56c8u, 0xde35d079u, 0x7c6d4a2au,
    0x1aa4c3dbu, 0xb8dc3d8cu, 0x5713b73du, 0xf54b30eeu, 0x9382aa9fu, 0x31ba2450u, 0xcff19e01u, 0x6e2917b2u,
    0x0c609163u, 0xaa980b14u, 0x48cf84c5u, 0xe706fe76u, 0x853e7827u, 0x2375f1d8u, 0xc1ad6b89u, 0x5fe4e53au,
    0xfe1c5eebu, 0x9c53d89cu, 0x3a8b524du, 0xd8c2cbfeu, 0x76fa45afu, 0x1531bf60u, 0xb3693911u, 0x51a0b2c2u,
    0xefd82c73u, 0x8e0fa624u, 0x2c471fd5u, 0xca7e9986u, 0x68b61337u, 0x06ed8ce8u, 0xa5250699u, 0x435c804au,
    0xe193f9fbu, 0x7fcb73acu, 0x1e02ed5du, 0xbc3a670eu, 0x5a71e0bfu, 0xf8a95a70u, 0x96e0d421u, 0x35184dd2u,
    0xd34fc783u, 0x71874134u, 0x0fbebae5u, 0xadf63496u, 0x4c2dae47u, 0xea6527f8u, 0x889ca1a9u, 0x26d41b5au,
    0xc50b950bu, 0x63430ebcu, 0x017a886du, 0x9fb2021eu, 0x3de97bcfu, 0xdc20f580u, 0x7a586f31u, 0x188fe8e2u,
    0xb6c76293u, 0x54fedc44u, 0xf33655f5u, 0x916dcfa6u, 0x2fa54957u, 0xcddcc308u, 0x6c143cb9u, 0x0a4bb66au,
    0xa883301bu, 0x46baa9ccu, 0xe4f2237du, 0x83299d2eu, 0x216116dfu, 0xbf989090u, 0x5dd00a41u, 0xfc0783f2u,
    0x9a3efda3u, 0x38767754u, 0xd6adf105u, 0x74e56ab6u, 0x131ce467u, 0xb1545e18u, 0x4f8bd7c9u, 0xedc3517au,
};

static const uint32_t bshim_088_tab4[96] = {
    0xb8dc3d8cu, 0x5713b73du, 0xf54b30eeu, 0x9382aa9fu, 0x31ba2450u, 0xcff19e01u, 0x6e2917b2u, 0x0c609163u,
    0xaa980b14u, 0x48cf84c5u, 0xe706fe76u, 0x853e7827u, 0x2375f1d8u, 0xc1ad6b89u, 0x5fe4e53au, 0xfe1c5eebu,
    0x9c53d89cu, 0x3a8b524du, 0xd8c2cbfeu, 0x76fa45afu, 0x1531bf60u, 0xb3693911u, 0x51a0b2c2u, 0xefd82c73u,
    0x8e0fa624u, 0x2c471fd5u, 0xca7e9986u, 0x68b61337u, 0x06ed8ce8u, 0xa5250699u, 0x435c804au, 0xe193f9fbu,
    0x7fcb73acu, 0x1e02ed5du, 0xbc3a670eu, 0x5a71e0bfu, 0xf8a95a70u, 0x96e0d421u, 0x35184dd2u, 0xd34fc783u,
    0x71874134u, 0x0fbebae5u, 0xadf63496u, 0x4c2dae47u, 0xea6527f8u, 0x889ca1a9u, 0x26d41b5au, 0xc50b950bu,
    0x63430ebcu, 0x017a886du, 0x9fb2021eu, 0x3de97bcfu, 0xdc20f580u, 0x7a586f31u, 0x188fe8e2u, 0xb6c76293u,
    0x54fedc44u, 0xf33655f5u, 0x916dcfa6u, 0x2fa54957u, 0xcddcc308u, 0x6c143cb9u, 0x0a4bb66au, 0xa883301bu,
    0x46baa9ccu, 0xe4f2237du, 0x83299d2eu, 0x216116dfu, 0xbf989090u, 0x5dd00a41u, 0xfc0783f2u, 0x9a3efda3u,
    0x38767754u, 0xd6adf105u, 0x74e56ab6u, 0x131ce467u, 0xb1545e18u, 0x4f8bd7c9u, 0xedc3517au, 0x8bfacb2bu,
    0x2a3244dcu, 0xc869be8du, 0x66a1383eu, 0x04d8b1efu, 0xa3102ba0u, 0x4147a551u, 0xdf7f1f02u, 0x7db698b3u,
    0x1bee1264u, 0xba258c15u, 0x585d05c6u, 0xf6947f77u, 0x94cbf928u, 0x330372d9u, 0xd13aec8au, 0x6f72663bu,
};

static const uint32_t bshim_088_tab5[96] = {
    0x3a8b524du, 0xd8c2cbfeu, 0x76fa45afu, 0x1531bf60u, 0xb3693911u, 0x51a0b2c2u, 0xefd82c73u, 0x8e0fa624u,
    0x2c471fd5u, 0xca7e9986u, 0x68b61337u, 0x06ed8ce8u, 0xa5250699u, 0x435c804au, 0xe193f9fbu, 0x7fcb73acu,
    0x1e02ed5du, 0xbc3a670eu, 0x5a71e0bfu, 0xf8a95a70u, 0x96e0d421u, 0x35184dd2u, 0xd34fc783u, 0x71874134u,
    0x0fbebae5u, 0xadf63496u, 0x4c2dae47u, 0xea6527f8u, 0x889ca1a9u, 0x26d41b5au, 0xc50b950bu, 0x63430ebcu,
    0x017a886du, 0x9fb2021eu, 0x3de97bcfu, 0xdc20f580u, 0x7a586f31u, 0x188fe8e2u, 0xb6c76293u, 0x54fedc44u,
    0xf33655f5u, 0x916dcfa6u, 0x2fa54957u, 0xcddcc308u, 0x6c143cb9u, 0x0a4bb66au, 0xa883301bu, 0x46baa9ccu,
    0xe4f2237du, 0x83299d2eu, 0x216116dfu, 0xbf989090u, 0x5dd00a41u, 0xfc0783f2u, 0x9a3efda3u, 0x38767754u,
    0xd6adf105u, 0x74e56ab6u, 0x131ce467u, 0xb1545e18u, 0x4f8bd7c9u, 0xedc3517au, 0x8bfacb2bu, 0x2a3244dcu,
    0xc869be8du, 0x66a1383eu, 0x04d8b1efu, 0xa3102ba0u, 0x4147a551u, 0xdf7f1f02u, 0x7db698b3u, 0x1bee1264u,
    0xba258c15u, 0x585d05c6u, 0xf6947f77u, 0x94cbf928u, 0x330372d9u, 0xd13aec8au, 0x6f72663bu, 0x0da9dfecu,
    0xabe1599du, 0x4a18d34eu, 0xe8504cffu, 0x8687c6b0u, 0x24bf4061u, 0xc2f6ba12u, 0x612e33c3u, 0xff65ad74u,
    0x9d9d2725u, 0x3bd4a0d6u, 0xda0c1a87u, 0x78439438u, 0x167b0de9u, 0xb4b2879au, 0x52ea014bu, 0xf1217afcu,
};

static const uint32_t bshim_088_tab6[96] = {
    0xbc3a670eu, 0x5a71e0bfu, 0xf8a95a70u, 0x96e0d421u, 0x35184dd2u, 0xd34fc783u, 0x71874134u, 0x0fbebae5u,
    0xadf63496u, 0x4c2dae47u, 0xea6527f8u, 0x889ca1a9u, 0x26d41b5au, 0xc50b950bu, 0x63430ebcu, 0x017a886du,
    0x9fb2021eu, 0x3de97bcfu, 0xdc20f580u, 0x7a586f31u, 0x188fe8e2u, 0xb6c76293u, 0x54fedc44u, 0xf33655f5u,
    0x916dcfa6u, 0x2fa54957u, 0xcddcc308u, 0x6c143cb9u, 0x0a4bb66au, 0xa883301bu, 0x46baa9ccu, 0xe4f2237du,
    0x83299d2eu, 0x216116dfu, 0xbf989090u, 0x5dd00a41u, 0xfc0783f2u, 0x9a3efda3u, 0x38767754u, 0xd6adf105u,
    0x74e56ab6u, 0x131ce467u, 0xb1545e18u, 0x4f8bd7c9u, 0xedc3517au, 0x8bfacb2bu, 0x2a3244dcu, 0xc869be8du,
    0x66a1383eu, 0x04d8b1efu, 0xa3102ba0u, 0x4147a551u, 0xdf7f1f02u, 0x7db698b3u, 0x1bee1264u, 0xba258c15u,
    0x585d05c6u, 0xf6947f77u, 0x94cbf928u, 0x330372d9u, 0xd13aec8au, 0x6f72663bu, 0x0da9dfecu, 0xabe1599du,
    0x4a18d34eu, 0xe8504cffu, 0x8687c6b0u, 0x24bf4061u, 0xc2f6ba12u, 0x612e33c3u, 0xff65ad74u, 0x9d9d2725u,
    0x3bd4a0d6u, 0xda0c1a87u, 0x78439438u, 0x167b0de9u, 0xb4b2879au, 0x52ea014bu, 0xf1217afcu, 0x8f58f4adu,
    0x2d906e5eu, 0xcbc7e80fu, 0x69ff61c0u, 0x0836db71u, 0xa66e5522u, 0x44a5ced3u, 0xe2dd4884u, 0x8114c235u,
    0x1f4c3be6u, 0xbd83b597u, 0x5bbb2f48u, 0xf9f2a8f9u, 0x982a22aau, 0x36619c5bu, 0xd499160cu, 0x72d08fbdu,
};

static const uint32_t bshim_088_tab7[96] = {
    0x3de97bcfu, 0xdc20f580u, 0x7a586f31u, 0x188fe8e2u, 0xb6c76293u, 0x54fedc44u, 0xf33655f5u, 0x916dcfa6u,
    0x2fa54957u, 0xcddcc308u, 0x6c143cb9u, 0x0a4bb66au, 0xa883301bu, 0x46baa9ccu, 0xe4f2237du, 0x83299d2eu,
    0x216116dfu, 0xbf989090u, 0x5dd00a41u, 0xfc0783f2u, 0x9a3efda3u, 0x38767754u, 0xd6adf105u, 0x74e56ab6u,
    0x131ce467u, 0xb1545e18u, 0x4f8bd7c9u, 0xedc3517au, 0x8bfacb2bu, 0x2a3244dcu, 0xc869be8du, 0x66a1383eu,
    0x04d8b1efu, 0xa3102ba0u, 0x4147a551u, 0xdf7f1f02u, 0x7db698b3u, 0x1bee1264u, 0xba258c15u, 0x585d05c6u,
    0xf6947f77u, 0x94cbf928u, 0x330372d9u, 0xd13aec8au, 0x6f72663bu, 0x0da9dfecu, 0xabe1599du, 0x4a18d34eu,
    0xe8504cffu, 0x8687c6b0u, 0x24bf4061u, 0xc2f6ba12u, 0x612e33c3u, 0xff65ad74u, 0x9d9d2725u, 0x3bd4a0d6u,
    0xda0c1a87u, 0x78439438u, 0x167b0de9u, 0xb4b2879au, 0x52ea014bu, 0xf1217afcu, 0x8f58f4adu, 0x2d906e5eu,
    0xcbc7e80fu, 0x69ff61c0u, 0x0836db71u, 0xa66e5522u, 0x44a5ced3u, 0xe2dd4884u, 0x8114c235u, 0x1f4c3be6u,
    0xbd83b597u, 0x5bbb2f48u, 0xf9f2a8f9u, 0x982a22aau, 0x36619c5bu, 0xd499160cu, 0x72d08fbdu, 0x1108096eu,
    0xaf3f831fu, 0x4d76fcd0u, 0xebae7681u, 0x89e5f032u, 0x281d69e3u, 0xc654e394u, 0x648c5d45u, 0x02c3d6f6u,
    0xa0fb50a7u, 0x3f32ca58u, 0xdd6a4409u, 0x7ba1bdbau, 0x19d9376bu, 0xb810b11cu, 0x56482acdu, 0xf47fa47eu,
};

struct bshim_088_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_088_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_088_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_088_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_088_reset(struct bshim_088_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000aa228u;
    return 0;
}

