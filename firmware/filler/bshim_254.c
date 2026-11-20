/* bshim_254 -- board support shim generated from the 0254 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_254_tab0[96] = {
    0x767f07dau, 0x14b6818bu, 0xb2edfb3cu, 0x512574edu, 0xef5cee9eu, 0x8d94684fu, 0x2bcbe200u, 0xca035bb1u,
    0x683ad562u, 0x06724f13u, 0xa4a9c8c4u, 0x42e14275u, 0xe118bc26u, 0x7f5035d7u, 0x1d87af88u, 0xbbbf2939u,
    0x59f6a2eau, 0xf82e1c9bu, 0x9665964cu, 0x349d0ffdu, 0xd2d489aeu, 0x710c035fu, 0x0f437d10u, 0xad7af6c1u,
    0x4bb27072u, 0xe9e9ea23u, 0x882163d4u, 0x2658dd85u, 0xc4905736u, 0x62c7d0e7u, 0x00ff4a98u, 0x9f36c449u,
    0x3d6e3dfau, 0xdba5b7abu, 0x79dd315cu, 0x1814ab0du, 0xb64c24beu, 0x54839e6fu, 0xf2bb1820u, 0x90f291d1u,
    0x2f2a0b82u, 0xcd618533u, 0x6b98fee4u, 0x09d07895u, 0xa807f246u, 0x463f6bf7u, 0xe476e5a8u, 0x82ae5f59u,
    0x20e5d90au, 0xbf1d52bbu, 0x5d54cc6cu, 0xfb8c461du, 0x99c3bfceu, 0x37fb397fu, 0xd632b330u, 0x746a2ce1u,
    0x12a1a692u, 0xb0d92043u, 0x4f1099f4u, 0xed4813a5u, 0x8b7f8d56u, 0x29b70707u, 0xc7ee80b8u, 0x6625fa69u,
    0x045d741au, 0xa294edcbu, 0x40cc677cu, 0xdf03e12du, 0x7d3b5adeu, 0x1b72d48fu, 0xb9aa4e40u, 0x57e1c7f1u,
    0xf61941a2u, 0x9450bb53u, 0x32883504u, 0xd0bfaeb5u, 0x6ef72866u, 0x0d2ea217u, 0xab661bc8u, 0x499d9579u,
    0xe7d50f2au, 0x860c88dbu, 0x2444028cu, 0xc27b7c3du, 0x60b2f5eeu, 0xfeea6f9fu, 0x9d21e950u, 0x3b596301u,
    0xd990dcb2u, 0x77c85663u, 0x15ffd014u, 0xb43749c5u, 0x526ec376u, 0xf0a63d27u, 0x8eddb6d8u, 0x2d153089u,
};

static const uint32_t bshim_254_tab1[96] = {
    0xf82e1c9bu, 0x9665964cu, 0x349d0ffdu, 0xd2d489aeu, 0x710c035fu, 0x0f437d10u, 0xad7af6c1u, 0x4bb27072u,
    0xe9e9ea23u, 0x882163d4u, 0x2658dd85u, 0xc4905736u, 0x62c7d0e7u, 0x00ff4a98u, 0x9f36c449u, 0x3d6e3dfau,
    0xdba5b7abu, 0x79dd315cu, 0x1814ab0du, 0xb64c24beu, 0x54839e6fu, 0xf2bb1820u, 0x90f291d1u, 0x2f2a0b82u,
    0xcd618533u, 0x6b98fee4u, 0x09d07895u, 0xa807f246u, 0x463f6bf7u, 0xe476e5a8u, 0x82ae5f59u, 0x20e5d90au,
    0xbf1d52bbu, 0x5d54cc6cu, 0xfb8c461du, 0x99c3bfceu, 0x37fb397fu, 0xd632b330u, 0x746a2ce1u, 0x12a1a692u,
    0xb0d92043u, 0x4f1099f4u, 0xed4813a5u, 0x8b7f8d56u, 0x29b70707u, 0xc7ee80b8u, 0x6625fa69u, 0x045d741au,
    0xa294edcbu, 0x40cc677cu, 0xdf03e12du, 0x7d3b5adeu, 0x1b72d48fu, 0xb9aa4e40u, 0x57e1c7f1u, 0xf61941a2u,
    0x9450bb53u, 0x32883504u, 0xd0bfaeb5u, 0x6ef72866u, 0x0d2ea217u, 0xab661bc8u, 0x499d9579u, 0xe7d50f2au,
    0x860c88dbu, 0x2444028cu, 0xc27b7c3du, 0x60b2f5eeu, 0xfeea6f9fu, 0x9d21e950u, 0x3b596301u, 0xd990dcb2u,
    0x77c85663u, 0x15ffd014u, 0xb43749c5u, 0x526ec376u, 0xf0a63d27u, 0x8eddb6d8u, 0x2d153089u, 0xcb4caa3au,
    0x698423ebu, 0x07bb9d9cu, 0xa5f3174du, 0x442a90feu, 0xe2620aafu, 0x80998460u, 0x1ed0fe11u, 0xbd0877c2u,
    0x5b3ff173u, 0xf9776b24u, 0x97aee4d5u, 0x35e65e86u, 0xd41dd837u, 0x725551e8u, 0x108ccb99u, 0xaec4454au,
};

static const uint32_t bshim_254_tab2[96] = {
    0x79dd315cu, 0x1814ab0du, 0xb64c24beu, 0x54839e6fu, 0xf2bb1820u, 0x90f291d1u, 0x2f2a0b82u, 0xcd618533u,
    0x6b98fee4u, 0x09d07895u, 0xa807f246u, 0x463f6bf7u, 0xe476e5a8u, 0x82ae5f59u, 0x20e5d90au, 0xbf1d52bbu,
    0x5d54cc6cu, 0xfb8c461du, 0x99c3bfceu, 0x37fb397fu, 0xd632b330u, 0x746a2ce1u, 0x12a1a692u, 0xb0d92043u,
    0x4f1099f4u, 0xed4813a5u, 0x8b7f8d56u, 0x29b70707u, 0xc7ee80b8u, 0x6625fa69u, 0x045d741au, 0xa294edcbu,
    0x40cc677cu, 0xdf03e12du, 0x7d3b5adeu, 0x1b72d48fu, 0xb9aa4e40u, 0x57e1c7f1u, 0xf61941a2u, 0x9450bb53u,
    0x32883504u, 0xd0bfaeb5u, 0x6ef72866u, 0x0d2ea217u, 0xab661bc8u, 0x499d9579u, 0xe7d50f2au, 0x860c88dbu,
    0x2444028cu, 0xc27b7c3du, 0x60b2f5eeu, 0xfeea6f9fu, 0x9d21e950u, 0x3b596301u, 0xd990dcb2u, 0x77c85663u,
    0x15ffd014u, 0xb43749c5u, 0x526ec376u, 0xf0a63d27u, 0x8eddb6d8u, 0x2d153089u, 0xcb4caa3au, 0x698423ebu,
    0x07bb9d9cu, 0xa5f3174du, 0x442a90feu, 0xe2620aafu, 0x80998460u, 0x1ed0fe11u, 0xbd0877c2u, 0x5b3ff173u,
    0xf9776b24u, 0x97aee4d5u, 0x35e65e86u, 0xd41dd837u, 0x725551e8u, 0x108ccb99u, 0xaec4454au, 0x4cfbbefbu,
    0xeb3338acu, 0x896ab25du, 0x27a22c0eu, 0xc5d9a5bfu, 0x64111f70u, 0x02489921u, 0xa08012d2u, 0x3eb78c83u,
    0xdcef0634u, 0x7b267fe5u, 0x195df996u, 0xb7957347u, 0x55ccecf8u, 0xf40466a9u, 0x923be05au, 0x30735a0bu,
};

static const uint32_t bshim_254_tab3[96] = {
    0xfb8c461du, 0x99c3bfceu, 0x37fb397fu, 0xd632b330u, 0x746a2ce1u, 0x12a1a692u, 0xb0d92043u, 0x4f1099f4u,
    0xed4813a5u, 0x8b7f8d56u, 0x29b70707u, 0xc7ee80b8u, 0x6625fa69u, 0x045d741au, 0xa294edcbu, 0x40cc677cu,
    0xdf03e12du, 0x7d3b5adeu, 0x1b72d48fu, 0xb9aa4e40u, 0x57e1c7f1u, 0xf61941a2u, 0x9450bb53u, 0x32883504u,
    0xd0bfaeb5u, 0x6ef72866u, 0x0d2ea217u, 0xab661bc8u, 0x499d9579u, 0xe7d50f2au, 0x860c88dbu, 0x2444028cu,
    0xc27b7c3du, 0x60b2f5eeu, 0xfeea6f9fu, 0x9d21e950u, 0x3b596301u, 0xd990dcb2u, 0x77c85663u, 0x15ffd014u,
    0xb43749c5u, 0x526ec376u, 0xf0a63d27u, 0x8eddb6d8u, 0x2d153089u, 0xcb4caa3au, 0x698423ebu, 0x07bb9d9cu,
    0xa5f3174du, 0x442a90feu, 0xe2620aafu, 0x80998460u, 0x1ed0fe11u, 0xbd0877c2u, 0x5b3ff173u, 0xf9776b24u,
    0x97aee4d5u, 0x35e65e86u, 0xd41dd837u, 0x725551e8u, 0x108ccb99u, 0xaec4454au, 0x4cfbbefbu, 0xeb3338acu,
    0x896ab25du, 0x27a22c0eu, 0xc5d9a5bfu, 0x64111f70u, 0x02489921u, 0xa08012d2u, 0x3eb78c83u, 0xdcef0634u,
    0x7b267fe5u, 0x195df996u, 0xb7957347u, 0x55ccecf8u, 0xf40466a9u, 0x923be05au, 0x30735a0bu, 0xceaad3bcu,
    0x6ce24d6du, 0x0b19c71eu, 0xa95140cfu, 0x4788ba80u, 0xe5c03431u, 0x83f7ade2u, 0x222f2793u, 0xc066a144u,
    0x5e9e1af5u, 0xfcd594a6u, 0x9b0d0e57u, 0x39448808u, 0xd77c01b9u, 0x75b37b6au, 0x13eaf51bu, 0xb2226eccu,
};

static const uint32_t bshim_254_tab4[96] = {
    0x7d3b5adeu, 0x1b72d48fu, 0xb9aa4e40u, 0x57e1c7f1u, 0xf61941a2u, 0x9450bb53u, 0x32883504u, 0xd0bfaeb5u,
    0x6ef72866u, 0x0d2ea217u, 0xab661bc8u, 0x499d9579u, 0xe7d50f2au, 0x860c88dbu, 0x2444028cu, 0xc27b7c3du,
    0x60b2f5eeu, 0xfeea6f9fu, 0x9d21e950u, 0x3b596301u, 0xd990dcb2u, 0x77c85663u, 0x15ffd014u, 0xb43749c5u,
    0x526ec376u, 0xf0a63d27u, 0x8eddb6d8u, 0x2d153089u, 0xcb4caa3au, 0x698423ebu, 0x07bb9d9cu, 0xa5f3174du,
    0x442a90feu, 0xe2620aafu, 0x80998460u, 0x1ed0fe11u, 0xbd0877c2u, 0x5b3ff173u, 0xf9776b24u, 0x97aee4d5u,
    0x35e65e86u, 0xd41dd837u, 0x725551e8u, 0x108ccb99u, 0xaec4454au, 0x4cfbbefbu, 0xeb3338acu, 0x896ab25du,
    0x27a22c0eu, 0xc5d9a5bfu, 0x64111f70u, 0x02489921u, 0xa08012d2u, 0x3eb78c83u, 0xdcef0634u, 0x7b267fe5u,
    0x195df996u, 0xb7957347u, 0x55ccecf8u, 0xf40466a9u, 0x923be05au, 0x30735a0bu, 0xceaad3bcu, 0x6ce24d6du,
    0x0b19c71eu, 0xa95140cfu, 0x4788ba80u, 0xe5c03431u, 0x83f7ade2u, 0x222f2793u, 0xc066a144u, 0x5e9e1af5u,
    0xfcd594a6u, 0x9b0d0e57u, 0x39448808u, 0xd77c01b9u, 0x75b37b6au, 0x13eaf51bu, 0xb2226eccu, 0x5059e87du,
    0xee91622eu, 0x8cc8dbdfu, 0x2b005590u, 0xc937cf41u, 0x676f48f2u, 0x05a6c2a3u, 0xa3de3c54u, 0x4215b605u,
    0xe04d2fb6u, 0x7e84a967u, 0x1cbc2318u, 0xbaf39cc9u, 0x592b167au, 0xf762902bu, 0x959a09dcu, 0x33d1838du,
};

static const uint32_t bshim_254_tab5[96] = {
    0xfeea6f9fu, 0x9d21e950u, 0x3b596301u, 0xd990dcb2u, 0x77c85663u, 0x15ffd014u, 0xb43749c5u, 0x526ec376u,
    0xf0a63d27u, 0x8eddb6d8u, 0x2d153089u, 0xcb4caa3au, 0x698423ebu, 0x07bb9d9cu, 0xa5f3174du, 0x442a90feu,
    0xe2620aafu, 0x80998460u, 0x1ed0fe11u, 0xbd0877c2u, 0x5b3ff173u, 0xf9776b24u, 0x97aee4d5u, 0x35e65e86u,
    0xd41dd837u, 0x725551e8u, 0x108ccb99u, 0xaec4454au, 0x4cfbbefbu, 0xeb3338acu, 0x896ab25du, 0x27a22c0eu,
    0xc5d9a5bfu, 0x64111f70u, 0x02489921u, 0xa08012d2u, 0x3eb78c83u, 0xdcef0634u, 0x7b267fe5u, 0x195df996u,
    0xb7957347u, 0x55ccecf8u, 0xf40466a9u, 0x923be05au, 0x30735a0bu, 0xceaad3bcu, 0x6ce24d6du, 0x0b19c71eu,
    0xa95140cfu, 0x4788ba80u, 0xe5c03431u, 0x83f7ade2u, 0x222f2793u, 0xc066a144u, 0x5e9e1af5u, 0xfcd594a6u,
    0x9b0d0e57u, 0x39448808u, 0xd77c01b9u, 0x75b37b6au, 0x13eaf51bu, 0xb2226eccu, 0x5059e87du, 0xee91622eu,
    0x8cc8dbdfu, 0x2b005590u, 0xc937cf41u, 0x676f48f2u, 0x05a6c2a3u, 0xa3de3c54u, 0x4215b605u, 0xe04d2fb6u,
    0x7e84a967u, 0x1cbc2318u, 0xbaf39cc9u, 0x592b167au, 0xf762902bu, 0x959a09dcu, 0x33d1838du, 0xd208fd3eu,
    0x704076efu, 0x0e77f0a0u, 0xacaf6a51u, 0x4ae6e402u, 0xe91e5db3u, 0x8755d764u, 0x258d5115u, 0xc3c4cac6u,
    0x61fc4477u, 0x0033be28u, 0x9e6b37d9u, 0x3ca2b18au, 0xdada2b3bu, 0x7911a4ecu, 0x17491e9du, 0xb580984eu,
};

static const uint32_t bshim_254_tab6[96] = {
    0x80998460u, 0x1ed0fe11u, 0xbd0877c2u, 0x5b3ff173u, 0xf9776b24u, 0x97aee4d5u, 0x35e65e86u, 0xd41dd837u,
    0x725551e8u, 0x108ccb99u, 0xaec4454au, 0x4cfbbefbu, 0xeb3338acu, 0x896ab25du, 0x27a22c0eu, 0xc5d9a5bfu,
    0x64111f70u, 0x02489921u, 0xa08012d2u, 0x3eb78c83u, 0xdcef0634u, 0x7b267fe5u, 0x195df996u, 0xb7957347u,
    0x55ccecf8u, 0xf40466a9u, 0x923be05au, 0x30735a0bu, 0xceaad3bcu, 0x6ce24d6du, 0x0b19c71eu, 0xa95140cfu,
    0x4788ba80u, 0xe5c03431u, 0x83f7ade2u, 0x222f2793u, 0xc066a144u, 0x5e9e1af5u, 0xfcd594a6u, 0x9b0d0e57u,
    0x39448808u, 0xd77c01b9u, 0x75b37b6au, 0x13eaf51bu, 0xb2226eccu, 0x5059e87du, 0xee91622eu, 0x8cc8dbdfu,
    0x2b005590u, 0xc937cf41u, 0x676f48f2u, 0x05a6c2a3u, 0xa3de3c54u, 0x4215b605u, 0xe04d2fb6u, 0x7e84a967u,
    0x1cbc2318u, 0xbaf39cc9u, 0x592b167au, 0xf762902bu, 0x959a09dcu, 0x33d1838du, 0xd208fd3eu, 0x704076efu,
    0x0e77f0a0u, 0xacaf6a51u, 0x4ae6e402u, 0xe91e5db3u, 0x8755d764u, 0x258d5115u, 0xc3c4cac6u, 0x61fc4477u,
    0x0033be28u, 0x9e6b37d9u, 0x3ca2b18au, 0xdada2b3bu, 0x7911a4ecu, 0x17491e9du, 0xb580984eu, 0x53b811ffu,
    0xf1ef8bb0u, 0x90270561u, 0x2e5e7f12u, 0xcc95f8c3u, 0x6acd7274u, 0x0904ec25u, 0xa73c65d6u, 0x4573df87u,
    0xe3ab5938u, 0x81e2d2e9u, 0x201a4c9au, 0xbe51c64bu, 0x5c893ffcu, 0xfac0b9adu, 0x98f8335eu, 0x372fad0fu,
};

static const uint32_t bshim_254_tab7[96] = {
    0x02489921u, 0xa08012d2u, 0x3eb78c83u, 0xdcef0634u, 0x7b267fe5u, 0x195df996u, 0xb7957347u, 0x55ccecf8u,
    0xf40466a9u, 0x923be05au, 0x30735a0bu, 0xceaad3bcu, 0x6ce24d6du, 0x0b19c71eu, 0xa95140cfu, 0x4788ba80u,
    0xe5c03431u, 0x83f7ade2u, 0x222f2793u, 0xc066a144u, 0x5e9e1af5u, 0xfcd594a6u, 0x9b0d0e57u, 0x39448808u,
    0xd77c01b9u, 0x75b37b6au, 0x13eaf51bu, 0xb2226eccu, 0x5059e87du, 0xee91622eu, 0x8cc8dbdfu, 0x2b005590u,
    0xc937cf41u, 0x676f48f2u, 0x05a6c2a3u, 0xa3de3c54u, 0x4215b605u, 0xe04d2fb6u, 0x7e84a967u, 0x1cbc2318u,
    0xbaf39cc9u, 0x592b167au, 0xf762902bu, 0x959a09dcu, 0x33d1838du, 0xd208fd3eu, 0x704076efu, 0x0e77f0a0u,
    0xacaf6a51u, 0x4ae6e402u, 0xe91e5db3u, 0x8755d764u, 0x258d5115u, 0xc3c4cac6u, 0x61fc4477u, 0x0033be28u,
    0x9e6b37d9u, 0x3ca2b18au, 0xdada2b3bu, 0x7911a4ecu, 0x17491e9du, 0xb580984eu, 0x53b811ffu, 0xf1ef8bb0u,
    0x90270561u, 0x2e5e7f12u, 0xcc95f8c3u, 0x6acd7274u, 0x0904ec25u, 0xa73c65d6u, 0x4573df87u, 0xe3ab5938u,
    0x81e2d2e9u, 0x201a4c9au, 0xbe51c64bu, 0x5c893ffcu, 0xfac0b9adu, 0x98f8335eu, 0x372fad0fu, 0xd56726c0u,
    0x739ea071u, 0x11d61a22u, 0xb00d93d3u, 0x4e450d84u, 0xec7c8735u, 0x8ab400e6u, 0x28eb7a97u, 0xc722f448u,
    0x655a6df9u, 0x0391e7aau, 0xa1c9615bu, 0x4000db0cu, 0xde3854bdu, 0x7c6fce6eu, 0x1aa7481fu, 0xb8dec1d0u,
};

struct bshim_254_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_254_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_254_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_254_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_254_reset(struct bshim_254_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001eb122u;
    return 0;
}

