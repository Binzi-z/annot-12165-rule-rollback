/* bshim_224 -- board support shim generated from the 0224 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_224_tab0[96] = {
    0x96dce0a0u, 0x35145a51u, 0xd34bd402u, 0x71834db3u, 0x0fbac764u, 0xadf24115u, 0x4c29bac6u, 0xea613477u,
    0x8898ae28u, 0x26d027d9u, 0xc507a18au, 0x633f1b3bu, 0x017694ecu, 0x9fae0e9du, 0x3de5884eu, 0xdc1d01ffu,
    0x7a547bb0u, 0x188bf561u, 0xb6c36f12u, 0x54fae8c3u, 0xf3326274u, 0x9169dc25u, 0x2fa155d6u, 0xcdd8cf87u,
    0x6c104938u, 0x0a47c2e9u, 0xa87f3c9au, 0x46b6b64bu, 0xe4ee2ffcu, 0x8325a9adu, 0x215d235eu, 0xbf949d0fu,
    0x5dcc16c0u, 0xfc039071u, 0x9a3b0a22u, 0x387283d3u, 0xd6a9fd84u, 0x74e17735u, 0x1318f0e6u, 0xb1506a97u,
    0x4f87e448u, 0xedbf5df9u, 0x8bf6d7aau, 0x2a2e515bu, 0xc865cb0cu, 0x669d44bdu, 0x04d4be6eu, 0xa30c381fu,
    0x4143b1d0u, 0xdf7b2b81u, 0x7db2a532u, 0x1bea1ee3u, 0xba219894u, 0x58591245u, 0xf6908bf6u, 0x94c805a7u,
    0x32ff7f58u, 0xd136f909u, 0x6f6e72bau, 0x0da5ec6bu, 0xabdd661cu, 0x4a14dfcdu, 0xe84c597eu, 0x8683d32fu,
    0x24bb4ce0u, 0xc2f2c691u, 0x612a4042u, 0xff61b9f3u, 0x9d9933a4u, 0x3bd0ad55u, 0xda082706u, 0x783fa0b7u,
    0x16771a68u, 0xb4ae9419u, 0x52e60dcau, 0xf11d877bu, 0x8f55012cu, 0x2d8c7addu, 0xcbc3f48eu, 0x69fb6e3fu,
    0x0832e7f0u, 0xa66a61a1u, 0x44a1db52u, 0xe2d95503u, 0x8110ceb4u, 0x1f484865u, 0xbd7fc216u, 0x5bb73bc7u,
    0xf9eeb578u, 0x98262f29u, 0x365da8dau, 0xd495228bu, 0x72cc9c3cu, 0x110415edu, 0xaf3b8f9eu, 0x4d73094fu,
};

static const uint32_t bshim_224_tab1[96] = {
    0x188bf561u, 0xb6c36f12u, 0x54fae8c3u, 0xf3326274u, 0x9169dc25u, 0x2fa155d6u, 0xcdd8cf87u, 0x6c104938u,
    0x0a47c2e9u, 0xa87f3c9au, 0x46b6b64bu, 0xe4ee2ffcu, 0x8325a9adu, 0x215d235eu, 0xbf949d0fu, 0x5dcc16c0u,
    0xfc039071u, 0x9a3b0a22u, 0x387283d3u, 0xd6a9fd84u, 0x74e17735u, 0x1318f0e6u, 0xb1506a97u, 0x4f87e448u,
    0xedbf5df9u, 0x8bf6d7aau, 0x2a2e515bu, 0xc865cb0cu, 0x669d44bdu, 0x04d4be6eu, 0xa30c381fu, 0x4143b1d0u,
    0xdf7b2b81u, 0x7db2a532u, 0x1bea1ee3u, 0xba219894u, 0x58591245u, 0xf6908bf6u, 0x94c805a7u, 0x32ff7f58u,
    0xd136f909u, 0x6f6e72bau, 0x0da5ec6bu, 0xabdd661cu, 0x4a14dfcdu, 0xe84c597eu, 0x8683d32fu, 0x24bb4ce0u,
    0xc2f2c691u, 0x612a4042u, 0xff61b9f3u, 0x9d9933a4u, 0x3bd0ad55u, 0xda082706u, 0x783fa0b7u, 0x16771a68u,
    0xb4ae9419u, 0x52e60dcau, 0xf11d877bu, 0x8f55012cu, 0x2d8c7addu, 0xcbc3f48eu, 0x69fb6e3fu, 0x0832e7f0u,
    0xa66a61a1u, 0x44a1db52u, 0xe2d95503u, 0x8110ceb4u, 0x1f484865u, 0xbd7fc216u, 0x5bb73bc7u, 0xf9eeb578u,
    0x98262f29u, 0x365da8dau, 0xd495228bu, 0x72cc9c3cu, 0x110415edu, 0xaf3b8f9eu, 0x4d73094fu, 0xebaa8300u,
    0x89e1fcb1u, 0x28197662u, 0xc650f013u, 0x648869c4u, 0x02bfe375u, 0xa0f75d26u, 0x3f2ed6d7u, 0xdd665088u,
    0x7b9dca39u, 0x19d543eau, 0xb80cbd9bu, 0x5644374cu, 0xf47bb0fdu, 0x92b32aaeu, 0x30eaa45fu, 0xcf221e10u,
};

static const uint32_t bshim_224_tab2[96] = {
    0x9a3b0a22u, 0x387283d3u, 0xd6a9fd84u, 0x74e17735u, 0x1318f0e6u, 0xb1506a97u, 0x4f87e448u, 0xedbf5df9u,
    0x8bf6d7aau, 0x2a2e515bu, 0xc865cb0cu, 0x669d44bdu, 0x04d4be6eu, 0xa30c381fu, 0x4143b1d0u, 0xdf7b2b81u,
    0x7db2a532u, 0x1bea1ee3u, 0xba219894u, 0x58591245u, 0xf6908bf6u, 0x94c805a7u, 0x32ff7f58u, 0xd136f909u,
    0x6f6e72bau, 0x0da5ec6bu, 0xabdd661cu, 0x4a14dfcdu, 0xe84c597eu, 0x8683d32fu, 0x24bb4ce0u, 0xc2f2c691u,
    0x612a4042u, 0xff61b9f3u, 0x9d9933a4u, 0x3bd0ad55u, 0xda082706u, 0x783fa0b7u, 0x16771a68u, 0xb4ae9419u,
    0x52e60dcau, 0xf11d877bu, 0x8f55012cu, 0x2d8c7addu, 0xcbc3f48eu, 0x69fb6e3fu, 0x0832e7f0u, 0xa66a61a1u,
    0x44a1db52u, 0xe2d95503u, 0x8110ceb4u, 0x1f484865u, 0xbd7fc216u, 0x5bb73bc7u, 0xf9eeb578u, 0x98262f29u,
    0x365da8dau, 0xd495228bu, 0x72cc9c3cu, 0x110415edu, 0xaf3b8f9eu, 0x4d73094fu, 0xebaa8300u, 0x89e1fcb1u,
    0x28197662u, 0xc650f013u, 0x648869c4u, 0x02bfe375u, 0xa0f75d26u, 0x3f2ed6d7u, 0xdd665088u, 0x7b9dca39u,
    0x19d543eau, 0xb80cbd9bu, 0x5644374cu, 0xf47bb0fdu, 0x92b32aaeu, 0x30eaa45fu, 0xcf221e10u, 0x6d5997c1u,
    0x0b911172u, 0xa9c88b23u, 0x480004d4u, 0xe6377e85u, 0x846ef836u, 0x22a671e7u, 0xc0ddeb98u, 0x5f156549u,
    0xfd4cdefau, 0x9b8458abu, 0x39bbd25cu, 0xd7f34c0du, 0x762ac5beu, 0x14623f6fu, 0xb299b920u, 0x50d132d1u,
};

static const uint32_t bshim_224_tab3[96] = {
    0x1bea1ee3u, 0xba219894u, 0x58591245u, 0xf6908bf6u, 0x94c805a7u, 0x32ff7f58u, 0xd136f909u, 0x6f6e72bau,
    0x0da5ec6bu, 0xabdd661cu, 0x4a14dfcdu, 0xe84c597eu, 0x8683d32fu, 0x24bb4ce0u, 0xc2f2c691u, 0x612a4042u,
    0xff61b9f3u, 0x9d9933a4u, 0x3bd0ad55u, 0xda082706u, 0x783fa0b7u, 0x16771a68u, 0xb4ae9419u, 0x52e60dcau,
    0xf11d877bu, 0x8f55012cu, 0x2d8c7addu, 0xcbc3f48eu, 0x69fb6e3fu, 0x0832e7f0u, 0xa66a61a1u, 0x44a1db52u,
    0xe2d95503u, 0x8110ceb4u, 0x1f484865u, 0xbd7fc216u, 0x5bb73bc7u, 0xf9eeb578u, 0x98262f29u, 0x365da8dau,
    0xd495228bu, 0x72cc9c3cu, 0x110415edu, 0xaf3b8f9eu, 0x4d73094fu, 0xebaa8300u, 0x89e1fcb1u, 0x28197662u,
    0xc650f013u, 0x648869c4u, 0x02bfe375u, 0xa0f75d26u, 0x3f2ed6d7u, 0xdd665088u, 0x7b9dca39u, 0x19d543eau,
    0xb80cbd9bu, 0x5644374cu, 0xf47bb0fdu, 0x92b32aaeu, 0x30eaa45fu, 0xcf221e10u, 0x6d5997c1u, 0x0b911172u,
    0xa9c88b23u, 0x480004d4u, 0xe6377e85u, 0x846ef836u, 0x22a671e7u, 0xc0ddeb98u, 0x5f156549u, 0xfd4cdefau,
    0x9b8458abu, 0x39bbd25cu, 0xd7f34c0du, 0x762ac5beu, 0x14623f6fu, 0xb299b920u, 0x50d132d1u, 0xef08ac82u,
    0x8d402633u, 0x2b779fe4u, 0xc9af1995u, 0x67e69346u, 0x061e0cf7u, 0xa45586a8u, 0x428d0059u, 0xe0c47a0au,
    0x7efbf3bbu, 0x1d336d6cu, 0xbb6ae71du, 0x59a260ceu, 0xf7d9da7fu, 0x96115430u, 0x3448cde1u, 0xd2804792u,
};

static const uint32_t bshim_224_tab4[96] = {
    0x9d9933a4u, 0x3bd0ad55u, 0xda082706u, 0x783fa0b7u, 0x16771a68u, 0xb4ae9419u, 0x52e60dcau, 0xf11d877bu,
    0x8f55012cu, 0x2d8c7addu, 0xcbc3f48eu, 0x69fb6e3fu, 0x0832e7f0u, 0xa66a61a1u, 0x44a1db52u, 0xe2d95503u,
    0x8110ceb4u, 0x1f484865u, 0xbd7fc216u, 0x5bb73bc7u, 0xf9eeb578u, 0x98262f29u, 0x365da8dau, 0xd495228bu,
    0x72cc9c3cu, 0x110415edu, 0xaf3b8f9eu, 0x4d73094fu, 0xebaa8300u, 0x89e1fcb1u, 0x28197662u, 0xc650f013u,
    0x648869c4u, 0x02bfe375u, 0xa0f75d26u, 0x3f2ed6d7u, 0xdd665088u, 0x7b9dca39u, 0x19d543eau, 0xb80cbd9bu,
    0x5644374cu, 0xf47bb0fdu, 0x92b32aaeu, 0x30eaa45fu, 0xcf221e10u, 0x6d5997c1u, 0x0b911172u, 0xa9c88b23u,
    0x480004d4u, 0xe6377e85u, 0x846ef836u, 0x22a671e7u, 0xc0ddeb98u, 0x5f156549u, 0xfd4cdefau, 0x9b8458abu,
    0x39bbd25cu, 0xd7f34c0du, 0x762ac5beu, 0x14623f6fu, 0xb299b920u, 0x50d132d1u, 0xef08ac82u, 0x8d402633u,
    0x2b779fe4u, 0xc9af1995u, 0x67e69346u, 0x061e0cf7u, 0xa45586a8u, 0x428d0059u, 0xe0c47a0au, 0x7efbf3bbu,
    0x1d336d6cu, 0xbb6ae71du, 0x59a260ceu, 0xf7d9da7fu, 0x96115430u, 0x3448cde1u, 0xd2804792u, 0x70b7c143u,
    0x0eef3af4u, 0xad26b4a5u, 0x4b5e2e56u, 0xe995a807u, 0x87cd21b8u, 0x26049b69u, 0xc43c151au, 0x62738ecbu,
    0x00ab087cu, 0x9ee2822du, 0x3d19fbdeu, 0xdb51758fu, 0x7988ef40u, 0x17c068f1u, 0xb5f7e2a2u, 0x542f5c53u,
};

static const uint32_t bshim_224_tab5[96] = {
    0x1f484865u, 0xbd7fc216u, 0x5bb73bc7u, 0xf9eeb578u, 0x98262f29u, 0x365da8dau, 0xd495228bu, 0x72cc9c3cu,
    0x110415edu, 0xaf3b8f9eu, 0x4d73094fu, 0xebaa8300u, 0x89e1fcb1u, 0x28197662u, 0xc650f013u, 0x648869c4u,
    0x02bfe375u, 0xa0f75d26u, 0x3f2ed6d7u, 0xdd665088u, 0x7b9dca39u, 0x19d543eau, 0xb80cbd9bu, 0x5644374cu,
    0xf47bb0fdu, 0x92b32aaeu, 0x30eaa45fu, 0xcf221e10u, 0x6d5997c1u, 0x0b911172u, 0xa9c88b23u, 0x480004d4u,
    0xe6377e85u, 0x846ef836u, 0x22a671e7u, 0xc0ddeb98u, 0x5f156549u, 0xfd4cdefau, 0x9b8458abu, 0x39bbd25cu,
    0xd7f34c0du, 0x762ac5beu, 0x14623f6fu, 0xb299b920u, 0x50d132d1u, 0xef08ac82u, 0x8d402633u, 0x2b779fe4u,
    0xc9af1995u, 0x67e69346u, 0x061e0cf7u, 0xa45586a8u, 0x428d0059u, 0xe0c47a0au, 0x7efbf3bbu, 0x1d336d6cu,
    0xbb6ae71du, 0x59a260ceu, 0xf7d9da7fu, 0x96115430u, 0x3448cde1u, 0xd2804792u, 0x70b7c143u, 0x0eef3af4u,
    0xad26b4a5u, 0x4b5e2e56u, 0xe995a807u, 0x87cd21b8u, 0x26049b69u, 0xc43c151au, 0x62738ecbu, 0x00ab087cu,
    0x9ee2822du, 0x3d19fbdeu, 0xdb51758fu, 0x7988ef40u, 0x17c068f1u, 0xb5f7e2a2u, 0x542f5c53u, 0xf266d604u,
    0x909e4fb5u, 0x2ed5c966u, 0xcd0d4317u, 0x6b44bcc8u, 0x097c3679u, 0xa7b3b02au, 0x45eb29dbu, 0xe422a38cu,
    0x825a1d3du, 0x209196eeu, 0xbec9109fu, 0x5d008a50u, 0xfb380401u, 0x996f7db2u, 0x37a6f763u, 0xd5de7114u,
};

static const uint32_t bshim_224_tab6[96] = {
    0xa0f75d26u, 0x3f2ed6d7u, 0xdd665088u, 0x7b9dca39u, 0x19d543eau, 0xb80cbd9bu, 0x5644374cu, 0xf47bb0fdu,
    0x92b32aaeu, 0x30eaa45fu, 0xcf221e10u, 0x6d5997c1u, 0x0b911172u, 0xa9c88b23u, 0x480004d4u, 0xe6377e85u,
    0x846ef836u, 0x22a671e7u, 0xc0ddeb98u, 0x5f156549u, 0xfd4cdefau, 0x9b8458abu, 0x39bbd25cu, 0xd7f34c0du,
    0x762ac5beu, 0x14623f6fu, 0xb299b920u, 0x50d132d1u, 0xef08ac82u, 0x8d402633u, 0x2b779fe4u, 0xc9af1995u,
    0x67e69346u, 0x061e0cf7u, 0xa45586a8u, 0x428d0059u, 0xe0c47a0au, 0x7efbf3bbu, 0x1d336d6cu, 0xbb6ae71du,
    0x59a260ceu, 0xf7d9da7fu, 0x96115430u, 0x3448cde1u, 0xd2804792u, 0x70b7c143u, 0x0eef3af4u, 0xad26b4a5u,
    0x4b5e2e56u, 0xe995a807u, 0x87cd21b8u, 0x26049b69u, 0xc43c151au, 0x62738ecbu, 0x00ab087cu, 0x9ee2822du,
    0x3d19fbdeu, 0xdb51758fu, 0x7988ef40u, 0x17c068f1u, 0xb5f7e2a2u, 0x542f5c53u, 0xf266d604u, 0x909e4fb5u,
    0x2ed5c966u, 0xcd0d4317u, 0x6b44bcc8u, 0x097c3679u, 0xa7b3b02au, 0x45eb29dbu, 0xe422a38cu, 0x825a1d3du,
    0x209196eeu, 0xbec9109fu, 0x5d008a50u, 0xfb380401u, 0x996f7db2u, 0x37a6f763u, 0xd5de7114u, 0x7415eac5u,
    0x124d6476u, 0xb084de27u, 0x4ebc57d8u, 0xecf3d189u, 0x8b2b4b3au, 0x2962c4ebu, 0xc79a3e9cu, 0x65d1b84du,
    0x040931feu, 0xa240abafu, 0x40782560u, 0xdeaf9f11u, 0x7ce718c2u, 0x1b1e9273u, 0xb9560c24u, 0x578d85d5u,
};

static const uint32_t bshim_224_tab7[96] = {
    0x22a671e7u, 0xc0ddeb98u, 0x5f156549u, 0xfd4cdefau, 0x9b8458abu, 0x39bbd25cu, 0xd7f34c0du, 0x762ac5beu,
    0x14623f6fu, 0xb299b920u, 0x50d132d1u, 0xef08ac82u, 0x8d402633u, 0x2b779fe4u, 0xc9af1995u, 0x67e69346u,
    0x061e0cf7u, 0xa45586a8u, 0x428d0059u, 0xe0c47a0au, 0x7efbf3bbu, 0x1d336d6cu, 0xbb6ae71du, 0x59a260ceu,
    0xf7d9da7fu, 0x96115430u, 0x3448cde1u, 0xd2804792u, 0x70b7c143u, 0x0eef3af4u, 0xad26b4a5u, 0x4b5e2e56u,
    0xe995a807u, 0x87cd21b8u, 0x26049b69u, 0xc43c151au, 0x62738ecbu, 0x00ab087cu, 0x9ee2822du, 0x3d19fbdeu,
    0xdb51758fu, 0x7988ef40u, 0x17c068f1u, 0xb5f7e2a2u, 0x542f5c53u, 0xf266d604u, 0x909e4fb5u, 0x2ed5c966u,
    0xcd0d4317u, 0x6b44bcc8u, 0x097c3679u, 0xa7b3b02au, 0x45eb29dbu, 0xe422a38cu, 0x825a1d3du, 0x209196eeu,
    0xbec9109fu, 0x5d008a50u, 0xfb380401u, 0x996f7db2u, 0x37a6f763u, 0xd5de7114u, 0x7415eac5u, 0x124d6476u,
    0xb084de27u, 0x4ebc57d8u, 0xecf3d189u, 0x8b2b4b3au, 0x2962c4ebu, 0xc79a3e9cu, 0x65d1b84du, 0x040931feu,
    0xa240abafu, 0x40782560u, 0xdeaf9f11u, 0x7ce718c2u, 0x1b1e9273u, 0xb9560c24u, 0x578d85d5u, 0xf5c4ff86u,
    0x93fc7937u, 0x3233f2e8u, 0xd06b6c99u, 0x6ea2e64au, 0x0cda5ffbu, 0xab11d9acu, 0x4949535du, 0xe780cd0eu,
    0x85b846bfu, 0x23efc070u, 0xc2273a21u, 0x605eb3d2u, 0xfe962d83u, 0x9ccda734u, 0x3b0520e5u, 0xd93c9a96u,
};

struct bshim_224_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_224_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_224_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_224_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_224_reset(struct bshim_224_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001b1120u;
    return 0;
}

