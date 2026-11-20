/* bshim_056 -- board support shim generated from the 0056 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_056_tab0[96] = {
    0xe5b73828u, 0x83eeb1d9u, 0x22262b8au, 0xc05da53bu, 0x5e951eecu, 0xfccc989du, 0x9b04124eu, 0x393b8bffu,
    0xd77305b0u, 0x75aa7f61u, 0x13e1f912u, 0xb21972c3u, 0x5050ec74u, 0xee886625u, 0x8cbfdfd6u, 0x2af75987u,
    0xc92ed338u, 0x67664ce9u, 0x059dc69au, 0xa3d5404bu, 0x420cb9fcu, 0xe04433adu, 0x7e7bad5eu, 0x1cb3270fu,
    0xbaeaa0c0u, 0x59221a71u, 0xf7599422u, 0x95910dd3u, 0x33c88784u, 0xd2000135u, 0x70377ae6u, 0x0e6ef497u,
    0xaca66e48u, 0x4adde7f9u, 0xe91561aau, 0x874cdb5bu, 0x2584550cu, 0xc3bbcebdu, 0x61f3486eu, 0x002ac21fu,
    0x9e623bd0u, 0x3c99b581u, 0xdad12f32u, 0x7908a8e3u, 0x17402294u, 0xb5779c45u, 0x53af15f6u, 0xf1e68fa7u,
    0x901e0958u, 0x2e558309u, 0xcc8cfcbau, 0x6ac4766bu, 0x08fbf01cu, 0xa73369cdu, 0x456ae37eu, 0xe3a25d2fu,
    0x81d9d6e0u, 0x20115091u, 0xbe48ca42u, 0x5c8043f3u, 0xfab7bda4u, 0x98ef3755u, 0x3726b106u, 0xd55e2ab7u,
    0x7395a468u, 0x11cd1e19u, 0xb00497cau, 0x4e3c117bu, 0xec738b2cu, 0x8aab04ddu, 0x28e27e8eu, 0xc719f83fu,
    0x655171f0u, 0x0388eba1u, 0xa1c06552u, 0x3ff7df03u, 0xde2f58b4u, 0x7c66d265u, 0x1a9e4c16u, 0xb8d5c5c7u,
    0x570d3f78u, 0xf544b929u, 0x937c32dau, 0x31b3ac8bu, 0xcfeb263cu, 0x6e229fedu, 0x0c5a199eu, 0xaa91934fu,
    0x48c90d00u, 0xe70086b1u, 0x85380062u, 0x236f7a13u, 0xc1a6f3c4u, 0x5fde6d75u, 0xfe15e726u, 0x9c4d60d7u,
};

static const uint32_t bshim_056_tab1[96] = {
    0x67664ce9u, 0x059dc69au, 0xa3d5404bu, 0x420cb9fcu, 0xe04433adu, 0x7e7bad5eu, 0x1cb3270fu, 0xbaeaa0c0u,
    0x59221a71u, 0xf7599422u, 0x95910dd3u, 0x33c88784u, 0xd2000135u, 0x70377ae6u, 0x0e6ef497u, 0xaca66e48u,
    0x4adde7f9u, 0xe91561aau, 0x874cdb5bu, 0x2584550cu, 0xc3bbcebdu, 0x61f3486eu, 0x002ac21fu, 0x9e623bd0u,
    0x3c99b581u, 0xdad12f32u, 0x7908a8e3u, 0x17402294u, 0xb5779c45u, 0x53af15f6u, 0xf1e68fa7u, 0x901e0958u,
    0x2e558309u, 0xcc8cfcbau, 0x6ac4766bu, 0x08fbf01cu, 0xa73369cdu, 0x456ae37eu, 0xe3a25d2fu, 0x81d9d6e0u,
    0x20115091u, 0xbe48ca42u, 0x5c8043f3u, 0xfab7bda4u, 0x98ef3755u, 0x3726b106u, 0xd55e2ab7u, 0x7395a468u,
    0x11cd1e19u, 0xb00497cau, 0x4e3c117bu, 0xec738b2cu, 0x8aab04ddu, 0x28e27e8eu, 0xc719f83fu, 0x655171f0u,
    0x0388eba1u, 0xa1c06552u, 0x3ff7df03u, 0xde2f58b4u, 0x7c66d265u, 0x1a9e4c16u, 0xb8d5c5c7u, 0x570d3f78u,
    0xf544b929u, 0x937c32dau, 0x31b3ac8bu, 0xcfeb263cu, 0x6e229fedu, 0x0c5a199eu, 0xaa91934fu, 0x48c90d00u,
    0xe70086b1u, 0x85380062u, 0x236f7a13u, 0xc1a6f3c4u, 0x5fde6d75u, 0xfe15e726u, 0x9c4d60d7u, 0x3a84da88u,
    0xd8bc5439u, 0x76f3cdeau, 0x152b479bu, 0xb362c14cu, 0x519a3afdu, 0xefd1b4aeu, 0x8e092e5fu, 0x2c40a810u,
    0xca7821c1u, 0x68af9b72u, 0x06e71523u, 0xa51e8ed4u, 0x43560885u, 0xe18d8236u, 0x7fc4fbe7u, 0x1dfc7598u,
};

static const uint32_t bshim_056_tab2[96] = {
    0xe91561aau, 0x874cdb5bu, 0x2584550cu, 0xc3bbcebdu, 0x61f3486eu, 0x002ac21fu, 0x9e623bd0u, 0x3c99b581u,
    0xdad12f32u, 0x7908a8e3u, 0x17402294u, 0xb5779c45u, 0x53af15f6u, 0xf1e68fa7u, 0x901e0958u, 0x2e558309u,
    0xcc8cfcbau, 0x6ac4766bu, 0x08fbf01cu, 0xa73369cdu, 0x456ae37eu, 0xe3a25d2fu, 0x81d9d6e0u, 0x20115091u,
    0xbe48ca42u, 0x5c8043f3u, 0xfab7bda4u, 0x98ef3755u, 0x3726b106u, 0xd55e2ab7u, 0x7395a468u, 0x11cd1e19u,
    0xb00497cau, 0x4e3c117bu, 0xec738b2cu, 0x8aab04ddu, 0x28e27e8eu, 0xc719f83fu, 0x655171f0u, 0x0388eba1u,
    0xa1c06552u, 0x3ff7df03u, 0xde2f58b4u, 0x7c66d265u, 0x1a9e4c16u, 0xb8d5c5c7u, 0x570d3f78u, 0xf544b929u,
    0x937c32dau, 0x31b3ac8bu, 0xcfeb263cu, 0x6e229fedu, 0x0c5a199eu, 0xaa91934fu, 0x48c90d00u, 0xe70086b1u,
    0x85380062u, 0x236f7a13u, 0xc1a6f3c4u, 0x5fde6d75u, 0xfe15e726u, 0x9c4d60d7u, 0x3a84da88u, 0xd8bc5439u,
    0x76f3cdeau, 0x152b479bu, 0xb362c14cu, 0x519a3afdu, 0xefd1b4aeu, 0x8e092e5fu, 0x2c40a810u, 0xca7821c1u,
    0x68af9b72u, 0x06e71523u, 0xa51e8ed4u, 0x43560885u, 0xe18d8236u, 0x7fc4fbe7u, 0x1dfc7598u, 0xbc33ef49u,
    0x5a6b68fau, 0xf8a2e2abu, 0x96da5c5cu, 0x3511d60du, 0xd3494fbeu, 0x7180c96fu, 0x0fb84320u, 0xadefbcd1u,
    0x4c273682u, 0xea5eb033u, 0x889629e4u, 0x26cda395u, 0xc5051d46u, 0x633c96f7u, 0x017410a8u, 0x9fab8a59u,
};

static const uint32_t bshim_056_tab3[96] = {
    0x6ac4766bu, 0x08fbf01cu, 0xa73369cdu, 0x456ae37eu, 0xe3a25d2fu, 0x81d9d6e0u, 0x20115091u, 0xbe48ca42u,
    0x5c8043f3u, 0xfab7bda4u, 0x98ef3755u, 0x3726b106u, 0xd55e2ab7u, 0x7395a468u, 0x11cd1e19u, 0xb00497cau,
    0x4e3c117bu, 0xec738b2cu, 0x8aab04ddu, 0x28e27e8eu, 0xc719f83fu, 0x655171f0u, 0x0388eba1u, 0xa1c06552u,
    0x3ff7df03u, 0xde2f58b4u, 0x7c66d265u, 0x1a9e4c16u, 0xb8d5c5c7u, 0x570d3f78u, 0xf544b929u, 0x937c32dau,
    0x31b3ac8bu, 0xcfeb263cu, 0x6e229fedu, 0x0c5a199eu, 0xaa91934fu, 0x48c90d00u, 0xe70086b1u, 0x85380062u,
    0x236f7a13u, 0xc1a6f3c4u, 0x5fde6d75u, 0xfe15e726u, 0x9c4d60d7u, 0x3a84da88u, 0xd8bc5439u, 0x76f3cdeau,
    0x152b479bu, 0xb362c14cu, 0x519a3afdu, 0xefd1b4aeu, 0x8e092e5fu, 0x2c40a810u, 0xca7821c1u, 0x68af9b72u,
    0x06e71523u, 0xa51e8ed4u, 0x43560885u, 0xe18d8236u, 0x7fc4fbe7u, 0x1dfc7598u, 0xbc33ef49u, 0x5a6b68fau,
    0xf8a2e2abu, 0x96da5c5cu, 0x3511d60du, 0xd3494fbeu, 0x7180c96fu, 0x0fb84320u, 0xadefbcd1u, 0x4c273682u,
    0xea5eb033u, 0x889629e4u, 0x26cda395u, 0xc5051d46u, 0x633c96f7u, 0x017410a8u, 0x9fab8a59u, 0x3de3040au,
    0xdc1a7dbbu, 0x7a51f76cu, 0x1889711du, 0xb6c0eaceu, 0x54f8647fu, 0xf32fde30u, 0x916757e1u, 0x2f9ed192u,
    0xcdd64b43u, 0x6c0dc4f4u, 0x0a453ea5u, 0xa87cb856u, 0x46b43207u, 0xe4ebabb8u, 0x83232569u, 0x215a9f1au,
};

static const uint32_t bshim_056_tab4[96] = {
    0xec738b2cu, 0x8aab04ddu, 0x28e27e8eu, 0xc719f83fu, 0x655171f0u, 0x0388eba1u, 0xa1c06552u, 0x3ff7df03u,
    0xde2f58b4u, 0x7c66d265u, 0x1a9e4c16u, 0xb8d5c5c7u, 0x570d3f78u, 0xf544b929u, 0x937c32dau, 0x31b3ac8bu,
    0xcfeb263cu, 0x6e229fedu, 0x0c5a199eu, 0xaa91934fu, 0x48c90d00u, 0xe70086b1u, 0x85380062u, 0x236f7a13u,
    0xc1a6f3c4u, 0x5fde6d75u, 0xfe15e726u, 0x9c4d60d7u, 0x3a84da88u, 0xd8bc5439u, 0x76f3cdeau, 0x152b479bu,
    0xb362c14cu, 0x519a3afdu, 0xefd1b4aeu, 0x8e092e5fu, 0x2c40a810u, 0xca7821c1u, 0x68af9b72u, 0x06e71523u,
    0xa51e8ed4u, 0x43560885u, 0xe18d8236u, 0x7fc4fbe7u, 0x1dfc7598u, 0xbc33ef49u, 0x5a6b68fau, 0xf8a2e2abu,
    0x96da5c5cu, 0x3511d60du, 0xd3494fbeu, 0x7180c96fu, 0x0fb84320u, 0xadefbcd1u, 0x4c273682u, 0xea5eb033u,
    0x889629e4u, 0x26cda395u, 0xc5051d46u, 0x633c96f7u, 0x017410a8u, 0x9fab8a59u, 0x3de3040au, 0xdc1a7dbbu,
    0x7a51f76cu, 0x1889711du, 0xb6c0eaceu, 0x54f8647fu, 0xf32fde30u, 0x916757e1u, 0x2f9ed192u, 0xcdd64b43u,
    0x6c0dc4f4u, 0x0a453ea5u, 0xa87cb856u, 0x46b43207u, 0xe4ebabb8u, 0x83232569u, 0x215a9f1au, 0xbf9218cbu,
    0x5dc9927cu, 0xfc010c2du, 0x9a3885deu, 0x386fff8fu, 0xd6a77940u, 0x74def2f1u, 0x13166ca2u, 0xb14de653u,
    0x4f856004u, 0xedbcd9b5u, 0x8bf45366u, 0x2a2bcd17u, 0xc86346c8u, 0x669ac079u, 0x04d23a2au, 0xa309b3dbu,
};

static const uint32_t bshim_056_tab5[96] = {
    0x6e229fedu, 0x0c5a199eu, 0xaa91934fu, 0x48c90d00u, 0xe70086b1u, 0x85380062u, 0x236f7a13u, 0xc1a6f3c4u,
    0x5fde6d75u, 0xfe15e726u, 0x9c4d60d7u, 0x3a84da88u, 0xd8bc5439u, 0x76f3cdeau, 0x152b479bu, 0xb362c14cu,
    0x519a3afdu, 0xefd1b4aeu, 0x8e092e5fu, 0x2c40a810u, 0xca7821c1u, 0x68af9b72u, 0x06e71523u, 0xa51e8ed4u,
    0x43560885u, 0xe18d8236u, 0x7fc4fbe7u, 0x1dfc7598u, 0xbc33ef49u, 0x5a6b68fau, 0xf8a2e2abu, 0x96da5c5cu,
    0x3511d60du, 0xd3494fbeu, 0x7180c96fu, 0x0fb84320u, 0xadefbcd1u, 0x4c273682u, 0xea5eb033u, 0x889629e4u,
    0x26cda395u, 0xc5051d46u, 0x633c96f7u, 0x017410a8u, 0x9fab8a59u, 0x3de3040au, 0xdc1a7dbbu, 0x7a51f76cu,
    0x1889711du, 0xb6c0eaceu, 0x54f8647fu, 0xf32fde30u, 0x916757e1u, 0x2f9ed192u, 0xcdd64b43u, 0x6c0dc4f4u,
    0x0a453ea5u, 0xa87cb856u, 0x46b43207u, 0xe4ebabb8u, 0x83232569u, 0x215a9f1au, 0xbf9218cbu, 0x5dc9927cu,
    0xfc010c2du, 0x9a3885deu, 0x386fff8fu, 0xd6a77940u, 0x74def2f1u, 0x13166ca2u, 0xb14de653u, 0x4f856004u,
    0xedbcd9b5u, 0x8bf45366u, 0x2a2bcd17u, 0xc86346c8u, 0x669ac079u, 0x04d23a2au, 0xa309b3dbu, 0x41412d8cu,
    0xdf78a73du, 0x7db020eeu, 0x1be79a9fu, 0xba1f1450u, 0x58568e01u, 0xf68e07b2u, 0x94c58163u, 0x32fcfb14u,
    0xd13474c5u, 0x6f6bee76u, 0x0da36827u, 0xabdae1d8u, 0x4a125b89u, 0xe849d53au, 0x86814eebu, 0x24b8c89cu,
};

static const uint32_t bshim_056_tab6[96] = {
    0xefd1b4aeu, 0x8e092e5fu, 0x2c40a810u, 0xca7821c1u, 0x68af9b72u, 0x06e71523u, 0xa51e8ed4u, 0x43560885u,
    0xe18d8236u, 0x7fc4fbe7u, 0x1dfc7598u, 0xbc33ef49u, 0x5a6b68fau, 0xf8a2e2abu, 0x96da5c5cu, 0x3511d60du,
    0xd3494fbeu, 0x7180c96fu, 0x0fb84320u, 0xadefbcd1u, 0x4c273682u, 0xea5eb033u, 0x889629e4u, 0x26cda395u,
    0xc5051d46u, 0x633c96f7u, 0x017410a8u, 0x9fab8a59u, 0x3de3040au, 0xdc1a7dbbu, 0x7a51f76cu, 0x1889711du,
    0xb6c0eaceu, 0x54f8647fu, 0xf32fde30u, 0x916757e1u, 0x2f9ed192u, 0xcdd64b43u, 0x6c0dc4f4u, 0x0a453ea5u,
    0xa87cb856u, 0x46b43207u, 0xe4ebabb8u, 0x83232569u, 0x215a9f1au, 0xbf9218cbu, 0x5dc9927cu, 0xfc010c2du,
    0x9a3885deu, 0x386fff8fu, 0xd6a77940u, 0x74def2f1u, 0x13166ca2u, 0xb14de653u, 0x4f856004u, 0xedbcd9b5u,
    0x8bf45366u, 0x2a2bcd17u, 0xc86346c8u, 0x669ac079u, 0x04d23a2au, 0xa309b3dbu, 0x41412d8cu, 0xdf78a73du,
    0x7db020eeu, 0x1be79a9fu, 0xba1f1450u, 0x58568e01u, 0xf68e07b2u, 0x94c58163u, 0x32fcfb14u, 0xd13474c5u,
    0x6f6bee76u, 0x0da36827u, 0xabdae1d8u, 0x4a125b89u, 0xe849d53au, 0x86814eebu, 0x24b8c89cu, 0xc2f0424du,
    0x6127bbfeu, 0xff5f35afu, 0x9d96af60u, 0x3bce2911u, 0xda05a2c2u, 0x783d1c73u, 0x16749624u, 0xb4ac0fd5u,
    0x52e38986u, 0xf11b0337u, 0x8f527ce8u, 0x2d89f699u, 0xcbc1704au, 0x69f8e9fbu, 0x083063acu, 0xa667dd5du,
};

static const uint32_t bshim_056_tab7[96] = {
    0x7180c96fu, 0x0fb84320u, 0xadefbcd1u, 0x4c273682u, 0xea5eb033u, 0x889629e4u, 0x26cda395u, 0xc5051d46u,
    0x633c96f7u, 0x017410a8u, 0x9fab8a59u, 0x3de3040au, 0xdc1a7dbbu, 0x7a51f76cu, 0x1889711du, 0xb6c0eaceu,
    0x54f8647fu, 0xf32fde30u, 0x916757e1u, 0x2f9ed192u, 0xcdd64b43u, 0x6c0dc4f4u, 0x0a453ea5u, 0xa87cb856u,
    0x46b43207u, 0xe4ebabb8u, 0x83232569u, 0x215a9f1au, 0xbf9218cbu, 0x5dc9927cu, 0xfc010c2du, 0x9a3885deu,
    0x386fff8fu, 0xd6a77940u, 0x74def2f1u, 0x13166ca2u, 0xb14de653u, 0x4f856004u, 0xedbcd9b5u, 0x8bf45366u,
    0x2a2bcd17u, 0xc86346c8u, 0x669ac079u, 0x04d23a2au, 0xa309b3dbu, 0x41412d8cu, 0xdf78a73du, 0x7db020eeu,
    0x1be79a9fu, 0xba1f1450u, 0x58568e01u, 0xf68e07b2u, 0x94c58163u, 0x32fcfb14u, 0xd13474c5u, 0x6f6bee76u,
    0x0da36827u, 0xabdae1d8u, 0x4a125b89u, 0xe849d53au, 0x86814eebu, 0x24b8c89cu, 0xc2f0424du, 0x6127bbfeu,
    0xff5f35afu, 0x9d96af60u, 0x3bce2911u, 0xda05a2c2u, 0x783d1c73u, 0x16749624u, 0xb4ac0fd5u, 0x52e38986u,
    0xf11b0337u, 0x8f527ce8u, 0x2d89f699u, 0xcbc1704au, 0x69f8e9fbu, 0x083063acu, 0xa667dd5du, 0x449f570eu,
    0xe2d6d0bfu, 0x810e4a70u, 0x1f45c421u, 0xbd7d3dd2u, 0x5bb4b783u, 0xf9ec3134u, 0x9823aae5u, 0x365b2496u,
    0xd4929e47u, 0x72ca17f8u, 0x110191a9u, 0xaf390b5au, 0x4d70850bu, 0xeba7febcu, 0x89df786du, 0x2816f21eu,
};

struct bshim_056_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_056_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_056_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_056_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_056_reset(struct bshim_056_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0006c448u;
    return 0;
}

