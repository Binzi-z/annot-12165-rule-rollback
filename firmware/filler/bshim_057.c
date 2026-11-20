/* bshim_057 -- board support shim generated from the 0057 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_057_tab0[96] = {
    0xdc1a7dbbu, 0x7a51f76cu, 0x1889711du, 0xb6c0eaceu, 0x54f8647fu, 0xf32fde30u, 0x916757e1u, 0x2f9ed192u,
    0xcdd64b43u, 0x6c0dc4f4u, 0x0a453ea5u, 0xa87cb856u, 0x46b43207u, 0xe4ebabb8u, 0x83232569u, 0x215a9f1au,
    0xbf9218cbu, 0x5dc9927cu, 0xfc010c2du, 0x9a3885deu, 0x386fff8fu, 0xd6a77940u, 0x74def2f1u, 0x13166ca2u,
    0xb14de653u, 0x4f856004u, 0xedbcd9b5u, 0x8bf45366u, 0x2a2bcd17u, 0xc86346c8u, 0x669ac079u, 0x04d23a2au,
    0xa309b3dbu, 0x41412d8cu, 0xdf78a73du, 0x7db020eeu, 0x1be79a9fu, 0xba1f1450u, 0x58568e01u, 0xf68e07b2u,
    0x94c58163u, 0x32fcfb14u, 0xd13474c5u, 0x6f6bee76u, 0x0da36827u, 0xabdae1d8u, 0x4a125b89u, 0xe849d53au,
    0x86814eebu, 0x24b8c89cu, 0xc2f0424du, 0x6127bbfeu, 0xff5f35afu, 0x9d96af60u, 0x3bce2911u, 0xda05a2c2u,
    0x783d1c73u, 0x16749624u, 0xb4ac0fd5u, 0x52e38986u, 0xf11b0337u, 0x8f527ce8u, 0x2d89f699u, 0xcbc1704au,
    0x69f8e9fbu, 0x083063acu, 0xa667dd5du, 0x449f570eu, 0xe2d6d0bfu, 0x810e4a70u, 0x1f45c421u, 0xbd7d3dd2u,
    0x5bb4b783u, 0xf9ec3134u, 0x9823aae5u, 0x365b2496u, 0xd4929e47u, 0x72ca17f8u, 0x110191a9u, 0xaf390b5au,
    0x4d70850bu, 0xeba7febcu, 0x89df786du, 0x2816f21eu, 0xc64e6bcfu, 0x6485e580u, 0x02bd5f31u, 0xa0f4d8e2u,
    0x3f2c5293u, 0xdd63cc44u, 0x7b9b45f5u, 0x19d2bfa6u, 0xb80a3957u, 0x5641b308u, 0xf4792cb9u, 0x92b0a66au,
};

static const uint32_t bshim_057_tab1[96] = {
    0x5dc9927cu, 0xfc010c2du, 0x9a3885deu, 0x386fff8fu, 0xd6a77940u, 0x74def2f1u, 0x13166ca2u, 0xb14de653u,
    0x4f856004u, 0xedbcd9b5u, 0x8bf45366u, 0x2a2bcd17u, 0xc86346c8u, 0x669ac079u, 0x04d23a2au, 0xa309b3dbu,
    0x41412d8cu, 0xdf78a73du, 0x7db020eeu, 0x1be79a9fu, 0xba1f1450u, 0x58568e01u, 0xf68e07b2u, 0x94c58163u,
    0x32fcfb14u, 0xd13474c5u, 0x6f6bee76u, 0x0da36827u, 0xabdae1d8u, 0x4a125b89u, 0xe849d53au, 0x86814eebu,
    0x24b8c89cu, 0xc2f0424du, 0x6127bbfeu, 0xff5f35afu, 0x9d96af60u, 0x3bce2911u, 0xda05a2c2u, 0x783d1c73u,
    0x16749624u, 0xb4ac0fd5u, 0x52e38986u, 0xf11b0337u, 0x8f527ce8u, 0x2d89f699u, 0xcbc1704au, 0x69f8e9fbu,
    0x083063acu, 0xa667dd5du, 0x449f570eu, 0xe2d6d0bfu, 0x810e4a70u, 0x1f45c421u, 0xbd7d3dd2u, 0x5bb4b783u,
    0xf9ec3134u, 0x9823aae5u, 0x365b2496u, 0xd4929e47u, 0x72ca17f8u, 0x110191a9u, 0xaf390b5au, 0x4d70850bu,
    0xeba7febcu, 0x89df786du, 0x2816f21eu, 0xc64e6bcfu, 0x6485e580u, 0x02bd5f31u, 0xa0f4d8e2u, 0x3f2c5293u,
    0xdd63cc44u, 0x7b9b45f5u, 0x19d2bfa6u, 0xb80a3957u, 0x5641b308u, 0xf4792cb9u, 0x92b0a66au, 0x30e8201bu,
    0xcf1f99ccu, 0x6d57137du, 0x0b8e8d2eu, 0xa9c606dfu, 0x47fd8090u, 0xe634fa41u, 0x846c73f2u, 0x22a3eda3u,
    0xc0db6754u, 0x5f12e105u, 0xfd4a5ab6u, 0x9b81d467u, 0x39b94e18u, 0xd7f0c7c9u, 0x7628417au, 0x145fbb2bu,
};

static const uint32_t bshim_057_tab2[96] = {
    0xdf78a73du, 0x7db020eeu, 0x1be79a9fu, 0xba1f1450u, 0x58568e01u, 0xf68e07b2u, 0x94c58163u, 0x32fcfb14u,
    0xd13474c5u, 0x6f6bee76u, 0x0da36827u, 0xabdae1d8u, 0x4a125b89u, 0xe849d53au, 0x86814eebu, 0x24b8c89cu,
    0xc2f0424du, 0x6127bbfeu, 0xff5f35afu, 0x9d96af60u, 0x3bce2911u, 0xda05a2c2u, 0x783d1c73u, 0x16749624u,
    0xb4ac0fd5u, 0x52e38986u, 0xf11b0337u, 0x8f527ce8u, 0x2d89f699u, 0xcbc1704au, 0x69f8e9fbu, 0x083063acu,
    0xa667dd5du, 0x449f570eu, 0xe2d6d0bfu, 0x810e4a70u, 0x1f45c421u, 0xbd7d3dd2u, 0x5bb4b783u, 0xf9ec3134u,
    0x9823aae5u, 0x365b2496u, 0xd4929e47u, 0x72ca17f8u, 0x110191a9u, 0xaf390b5au, 0x4d70850bu, 0xeba7febcu,
    0x89df786du, 0x2816f21eu, 0xc64e6bcfu, 0x6485e580u, 0x02bd5f31u, 0xa0f4d8e2u, 0x3f2c5293u, 0xdd63cc44u,
    0x7b9b45f5u, 0x19d2bfa6u, 0xb80a3957u, 0x5641b308u, 0xf4792cb9u, 0x92b0a66au, 0x30e8201bu, 0xcf1f99ccu,
    0x6d57137du, 0x0b8e8d2eu, 0xa9c606dfu, 0x47fd8090u, 0xe634fa41u, 0x846c73f2u, 0x22a3eda3u, 0xc0db6754u,
    0x5f12e105u, 0xfd4a5ab6u, 0x9b81d467u, 0x39b94e18u, 0xd7f0c7c9u, 0x7628417au, 0x145fbb2bu, 0xb29734dcu,
    0x50ceae8du, 0xef06283eu, 0x8d3da1efu, 0x2b751ba0u, 0xc9ac9551u, 0x67e40f02u, 0x061b88b3u, 0xa4530264u,
    0x428a7c15u, 0xe0c1f5c6u, 0x7ef96f77u, 0x1d30e928u, 0xbb6862d9u, 0x599fdc8au, 0xf7d7563bu, 0x960ecfecu,
};

static const uint32_t bshim_057_tab3[96] = {
    0x6127bbfeu, 0xff5f35afu, 0x9d96af60u, 0x3bce2911u, 0xda05a2c2u, 0x783d1c73u, 0x16749624u, 0xb4ac0fd5u,
    0x52e38986u, 0xf11b0337u, 0x8f527ce8u, 0x2d89f699u, 0xcbc1704au, 0x69f8e9fbu, 0x083063acu, 0xa667dd5du,
    0x449f570eu, 0xe2d6d0bfu, 0x810e4a70u, 0x1f45c421u, 0xbd7d3dd2u, 0x5bb4b783u, 0xf9ec3134u, 0x9823aae5u,
    0x365b2496u, 0xd4929e47u, 0x72ca17f8u, 0x110191a9u, 0xaf390b5au, 0x4d70850bu, 0xeba7febcu, 0x89df786du,
    0x2816f21eu, 0xc64e6bcfu, 0x6485e580u, 0x02bd5f31u, 0xa0f4d8e2u, 0x3f2c5293u, 0xdd63cc44u, 0x7b9b45f5u,
    0x19d2bfa6u, 0xb80a3957u, 0x5641b308u, 0xf4792cb9u, 0x92b0a66au, 0x30e8201bu, 0xcf1f99ccu, 0x6d57137du,
    0x0b8e8d2eu, 0xa9c606dfu, 0x47fd8090u, 0xe634fa41u, 0x846c73f2u, 0x22a3eda3u, 0xc0db6754u, 0x5f12e105u,
    0xfd4a5ab6u, 0x9b81d467u, 0x39b94e18u, 0xd7f0c7c9u, 0x7628417au, 0x145fbb2bu, 0xb29734dcu, 0x50ceae8du,
    0xef06283eu, 0x8d3da1efu, 0x2b751ba0u, 0xc9ac9551u, 0x67e40f02u, 0x061b88b3u, 0xa4530264u, 0x428a7c15u,
    0xe0c1f5c6u, 0x7ef96f77u, 0x1d30e928u, 0xbb6862d9u, 0x599fdc8au, 0xf7d7563bu, 0x960ecfecu, 0x3446499du,
    0xd27dc34eu, 0x70b53cffu, 0x0eecb6b0u, 0xad243061u, 0x4b5baa12u, 0xe99323c3u, 0x87ca9d74u, 0x26021725u,
    0xc43990d6u, 0x62710a87u, 0x00a88438u, 0x9edffde9u, 0x3d17779au, 0xdb4ef14bu, 0x79866afcu, 0x17bde4adu,
};

static const uint32_t bshim_057_tab4[96] = {
    0xe2d6d0bfu, 0x810e4a70u, 0x1f45c421u, 0xbd7d3dd2u, 0x5bb4b783u, 0xf9ec3134u, 0x9823aae5u, 0x365b2496u,
    0xd4929e47u, 0x72ca17f8u, 0x110191a9u, 0xaf390b5au, 0x4d70850bu, 0xeba7febcu, 0x89df786du, 0x2816f21eu,
    0xc64e6bcfu, 0x6485e580u, 0x02bd5f31u, 0xa0f4d8e2u, 0x3f2c5293u, 0xdd63cc44u, 0x7b9b45f5u, 0x19d2bfa6u,
    0xb80a3957u, 0x5641b308u, 0xf4792cb9u, 0x92b0a66au, 0x30e8201bu, 0xcf1f99ccu, 0x6d57137du, 0x0b8e8d2eu,
    0xa9c606dfu, 0x47fd8090u, 0xe634fa41u, 0x846c73f2u, 0x22a3eda3u, 0xc0db6754u, 0x5f12e105u, 0xfd4a5ab6u,
    0x9b81d467u, 0x39b94e18u, 0xd7f0c7c9u, 0x7628417au, 0x145fbb2bu, 0xb29734dcu, 0x50ceae8du, 0xef06283eu,
    0x8d3da1efu, 0x2b751ba0u, 0xc9ac9551u, 0x67e40f02u, 0x061b88b3u, 0xa4530264u, 0x428a7c15u, 0xe0c1f5c6u,
    0x7ef96f77u, 0x1d30e928u, 0xbb6862d9u, 0x599fdc8au, 0xf7d7563bu, 0x960ecfecu, 0x3446499du, 0xd27dc34eu,
    0x70b53cffu, 0x0eecb6b0u, 0xad243061u, 0x4b5baa12u, 0xe99323c3u, 0x87ca9d74u, 0x26021725u, 0xc43990d6u,
    0x62710a87u, 0x00a88438u, 0x9edffde9u, 0x3d17779au, 0xdb4ef14bu, 0x79866afcu, 0x17bde4adu, 0xb5f55e5eu,
    0x542cd80fu, 0xf26451c0u, 0x909bcb71u, 0x2ed34522u, 0xcd0abed3u, 0x6b423884u, 0x0979b235u, 0xa7b12be6u,
    0x45e8a597u, 0xe4201f48u, 0x825798f9u, 0x208f12aau, 0xbec68c5bu, 0x5cfe060cu, 0xfb357fbdu, 0x996cf96eu,
};

static const uint32_t bshim_057_tab5[96] = {
    0x6485e580u, 0x02bd5f31u, 0xa0f4d8e2u, 0x3f2c5293u, 0xdd63cc44u, 0x7b9b45f5u, 0x19d2bfa6u, 0xb80a3957u,
    0x5641b308u, 0xf4792cb9u, 0x92b0a66au, 0x30e8201bu, 0xcf1f99ccu, 0x6d57137du, 0x0b8e8d2eu, 0xa9c606dfu,
    0x47fd8090u, 0xe634fa41u, 0x846c73f2u, 0x22a3eda3u, 0xc0db6754u, 0x5f12e105u, 0xfd4a5ab6u, 0x9b81d467u,
    0x39b94e18u, 0xd7f0c7c9u, 0x7628417au, 0x145fbb2bu, 0xb29734dcu, 0x50ceae8du, 0xef06283eu, 0x8d3da1efu,
    0x2b751ba0u, 0xc9ac9551u, 0x67e40f02u, 0x061b88b3u, 0xa4530264u, 0x428a7c15u, 0xe0c1f5c6u, 0x7ef96f77u,
    0x1d30e928u, 0xbb6862d9u, 0x599fdc8au, 0xf7d7563bu, 0x960ecfecu, 0x3446499du, 0xd27dc34eu, 0x70b53cffu,
    0x0eecb6b0u, 0xad243061u, 0x4b5baa12u, 0xe99323c3u, 0x87ca9d74u, 0x26021725u, 0xc43990d6u, 0x62710a87u,
    0x00a88438u, 0x9edffde9u, 0x3d17779au, 0xdb4ef14bu, 0x79866afcu, 0x17bde4adu, 0xb5f55e5eu, 0x542cd80fu,
    0xf26451c0u, 0x909bcb71u, 0x2ed34522u, 0xcd0abed3u, 0x6b423884u, 0x0979b235u, 0xa7b12be6u, 0x45e8a597u,
    0xe4201f48u, 0x825798f9u, 0x208f12aau, 0xbec68c5bu, 0x5cfe060cu, 0xfb357fbdu, 0x996cf96eu, 0x37a4731fu,
    0xd5dbecd0u, 0x74136681u, 0x124ae032u, 0xb08259e3u, 0x4eb9d394u, 0xecf14d45u, 0x8b28c6f6u, 0x296040a7u,
    0xc797ba58u, 0x65cf3409u, 0x0406adbau, 0xa23e276bu, 0x4075a11cu, 0xdead1acdu, 0x7ce4947eu, 0x1b1c0e2fu,
};

static const uint32_t bshim_057_tab6[96] = {
    0xe634fa41u, 0x846c73f2u, 0x22a3eda3u, 0xc0db6754u, 0x5f12e105u, 0xfd4a5ab6u, 0x9b81d467u, 0x39b94e18u,
    0xd7f0c7c9u, 0x7628417au, 0x145fbb2bu, 0xb29734dcu, 0x50ceae8du, 0xef06283eu, 0x8d3da1efu, 0x2b751ba0u,
    0xc9ac9551u, 0x67e40f02u, 0x061b88b3u, 0xa4530264u, 0x428a7c15u, 0xe0c1f5c6u, 0x7ef96f77u, 0x1d30e928u,
    0xbb6862d9u, 0x599fdc8au, 0xf7d7563bu, 0x960ecfecu, 0x3446499du, 0xd27dc34eu, 0x70b53cffu, 0x0eecb6b0u,
    0xad243061u, 0x4b5baa12u, 0xe99323c3u, 0x87ca9d74u, 0x26021725u, 0xc43990d6u, 0x62710a87u, 0x00a88438u,
    0x9edffde9u, 0x3d17779au, 0xdb4ef14bu, 0x79866afcu, 0x17bde4adu, 0xb5f55e5eu, 0x542cd80fu, 0xf26451c0u,
    0x909bcb71u, 0x2ed34522u, 0xcd0abed3u, 0x6b423884u, 0x0979b235u, 0xa7b12be6u, 0x45e8a597u, 0xe4201f48u,
    0x825798f9u, 0x208f12aau, 0xbec68c5bu, 0x5cfe060cu, 0xfb357fbdu, 0x996cf96eu, 0x37a4731fu, 0xd5dbecd0u,
    0x74136681u, 0x124ae032u, 0xb08259e3u, 0x4eb9d394u, 0xecf14d45u, 0x8b28c6f6u, 0x296040a7u, 0xc797ba58u,
    0x65cf3409u, 0x0406adbau, 0xa23e276bu, 0x4075a11cu, 0xdead1acdu, 0x7ce4947eu, 0x1b1c0e2fu, 0xb95387e0u,
    0x578b0191u, 0xf5c27b42u, 0x93f9f4f3u, 0x32316ea4u, 0xd068e855u, 0x6ea06206u, 0x0cd7dbb7u, 0xab0f5568u,
    0x4946cf19u, 0xe77e48cau, 0x85b5c27bu, 0x23ed3c2cu, 0xc224b5ddu, 0x605c2f8eu, 0xfe93a93fu, 0x9ccb22f0u,
};

static const uint32_t bshim_057_tab7[96] = {
    0x67e40f02u, 0x061b88b3u, 0xa4530264u, 0x428a7c15u, 0xe0c1f5c6u, 0x7ef96f77u, 0x1d30e928u, 0xbb6862d9u,
    0x599fdc8au, 0xf7d7563bu, 0x960ecfecu, 0x3446499du, 0xd27dc34eu, 0x70b53cffu, 0x0eecb6b0u, 0xad243061u,
    0x4b5baa12u, 0xe99323c3u, 0x87ca9d74u, 0x26021725u, 0xc43990d6u, 0x62710a87u, 0x00a88438u, 0x9edffde9u,
    0x3d17779au, 0xdb4ef14bu, 0x79866afcu, 0x17bde4adu, 0xb5f55e5eu, 0x542cd80fu, 0xf26451c0u, 0x909bcb71u,
    0x2ed34522u, 0xcd0abed3u, 0x6b423884u, 0x0979b235u, 0xa7b12be6u, 0x45e8a597u, 0xe4201f48u, 0x825798f9u,
    0x208f12aau, 0xbec68c5bu, 0x5cfe060cu, 0xfb357fbdu, 0x996cf96eu, 0x37a4731fu, 0xd5dbecd0u, 0x74136681u,
    0x124ae032u, 0xb08259e3u, 0x4eb9d394u, 0xecf14d45u, 0x8b28c6f6u, 0x296040a7u, 0xc797ba58u, 0x65cf3409u,
    0x0406adbau, 0xa23e276bu, 0x4075a11cu, 0xdead1acdu, 0x7ce4947eu, 0x1b1c0e2fu, 0xb95387e0u, 0x578b0191u,
    0xf5c27b42u, 0x93f9f4f3u, 0x32316ea4u, 0xd068e855u, 0x6ea06206u, 0x0cd7dbb7u, 0xab0f5568u, 0x4946cf19u,
    0xe77e48cau, 0x85b5c27bu, 0x23ed3c2cu, 0xc224b5ddu, 0x605c2f8eu, 0xfe93a93fu, 0x9ccb22f0u, 0x3b029ca1u,
    0xd93a1652u, 0x77719003u, 0x15a909b4u, 0xb3e08365u, 0x5217fd16u, 0xf04f76c7u, 0x8e86f078u, 0x2cbe6a29u,
    0xcaf5e3dau, 0x692d5d8bu, 0x0764d73cu, 0xa59c50edu, 0x43d3ca9eu, 0xe20b444fu, 0x8042be00u, 0x1e7a37b1u,
};

struct bshim_057_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_057_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_057_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_057_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_057_reset(struct bshim_057_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0006e337u;
    return 0;
}

