/* bshim_190 -- board support shim generated from the 0190 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_190_tab0[96] = {
    0xddada31au, 0x7be51ccbu, 0x1a1c967cu, 0xb854102du, 0x568b89deu, 0xf4c3038fu, 0x92fa7d40u, 0x3131f6f1u,
    0xcf6970a2u, 0x6da0ea53u, 0x0bd86404u, 0xaa0fddb5u, 0x48475766u, 0xe67ed117u, 0x84b64ac8u, 0x22edc479u,
    0xc1253e2au, 0x5f5cb7dbu, 0xfd94318cu, 0x9bcbab3du, 0x3a0324eeu, 0xd83a9e9fu, 0x76721850u, 0x14a99201u,
    0xb2e10bb2u, 0x51188563u, 0xef4fff14u, 0x8d8778c5u, 0x2bbef276u, 0xc9f66c27u, 0x682de5d8u, 0x06655f89u,
    0xa49cd93au, 0x42d452ebu, 0xe10bcc9cu, 0x7f43464du, 0x1d7abffeu, 0xbbb239afu, 0x59e9b360u, 0xf8212d11u,
    0x9658a6c2u, 0x34902073u, 0xd2c79a24u, 0x70ff13d5u, 0x0f368d86u, 0xad6e0737u, 0x4ba580e8u, 0xe9dcfa99u,
    0x8814744au, 0x264bedfbu, 0xc48367acu, 0x62bae15du, 0x00f25b0eu, 0x9f29d4bfu, 0x3d614e70u, 0xdb98c821u,
    0x79d041d2u, 0x1807bb83u, 0xb63f3534u, 0x5476aee5u, 0xf2ae2896u, 0x90e5a247u, 0x2f1d1bf8u, 0xcd5495a9u,
    0x6b8c0f5au, 0x09c3890bu, 0xa7fb02bcu, 0x46327c6du, 0xe469f61eu, 0x82a16fcfu, 0x20d8e980u, 0xbf106331u,
    0x5d47dce2u, 0xfb7f5693u, 0x99b6d044u, 0x37ee49f5u, 0xd625c3a6u, 0x745d3d57u, 0x1294b708u, 0xb0cc30b9u,
    0x4f03aa6au, 0xed3b241bu, 0x8b729dccu, 0x29aa177du, 0xc7e1912eu, 0x66190adfu, 0x04508490u, 0xa287fe41u,
    0x40bf77f2u, 0xdef6f1a3u, 0x7d2e6b54u, 0x1b65e505u, 0xb99d5eb6u, 0x57d4d867u, 0xf60c5218u, 0x9443cbc9u,
};

static const uint32_t bshim_190_tab1[96] = {
    0x5f5cb7dbu, 0xfd94318cu, 0x9bcbab3du, 0x3a0324eeu, 0xd83a9e9fu, 0x76721850u, 0x14a99201u, 0xb2e10bb2u,
    0x51188563u, 0xef4fff14u, 0x8d8778c5u, 0x2bbef276u, 0xc9f66c27u, 0x682de5d8u, 0x06655f89u, 0xa49cd93au,
    0x42d452ebu, 0xe10bcc9cu, 0x7f43464du, 0x1d7abffeu, 0xbbb239afu, 0x59e9b360u, 0xf8212d11u, 0x9658a6c2u,
    0x34902073u, 0xd2c79a24u, 0x70ff13d5u, 0x0f368d86u, 0xad6e0737u, 0x4ba580e8u, 0xe9dcfa99u, 0x8814744au,
    0x264bedfbu, 0xc48367acu, 0x62bae15du, 0x00f25b0eu, 0x9f29d4bfu, 0x3d614e70u, 0xdb98c821u, 0x79d041d2u,
    0x1807bb83u, 0xb63f3534u, 0x5476aee5u, 0xf2ae2896u, 0x90e5a247u, 0x2f1d1bf8u, 0xcd5495a9u, 0x6b8c0f5au,
    0x09c3890bu, 0xa7fb02bcu, 0x46327c6du, 0xe469f61eu, 0x82a16fcfu, 0x20d8e980u, 0xbf106331u, 0x5d47dce2u,
    0xfb7f5693u, 0x99b6d044u, 0x37ee49f5u, 0xd625c3a6u, 0x745d3d57u, 0x1294b708u, 0xb0cc30b9u, 0x4f03aa6au,
    0xed3b241bu, 0x8b729dccu, 0x29aa177du, 0xc7e1912eu, 0x66190adfu, 0x04508490u, 0xa287fe41u, 0x40bf77f2u,
    0xdef6f1a3u, 0x7d2e6b54u, 0x1b65e505u, 0xb99d5eb6u, 0x57d4d867u, 0xf60c5218u, 0x9443cbc9u, 0x327b457au,
    0xd0b2bf2bu, 0x6eea38dcu, 0x0d21b28du, 0xab592c3eu, 0x4990a5efu, 0xe7c81fa0u, 0x85ff9951u, 0x24371302u,
    0xc26e8cb3u, 0x60a60664u, 0xfedd8015u, 0x9d14f9c6u, 0x3b4c7377u, 0xd983ed28u, 0x77bb66d9u, 0x15f2e08au,
};

static const uint32_t bshim_190_tab2[96] = {
    0xe10bcc9cu, 0x7f43464du, 0x1d7abffeu, 0xbbb239afu, 0x59e9b360u, 0xf8212d11u, 0x9658a6c2u, 0x34902073u,
    0xd2c79a24u, 0x70ff13d5u, 0x0f368d86u, 0xad6e0737u, 0x4ba580e8u, 0xe9dcfa99u, 0x8814744au, 0x264bedfbu,
    0xc48367acu, 0x62bae15du, 0x00f25b0eu, 0x9f29d4bfu, 0x3d614e70u, 0xdb98c821u, 0x79d041d2u, 0x1807bb83u,
    0xb63f3534u, 0x5476aee5u, 0xf2ae2896u, 0x90e5a247u, 0x2f1d1bf8u, 0xcd5495a9u, 0x6b8c0f5au, 0x09c3890bu,
    0xa7fb02bcu, 0x46327c6du, 0xe469f61eu, 0x82a16fcfu, 0x20d8e980u, 0xbf106331u, 0x5d47dce2u, 0xfb7f5693u,
    0x99b6d044u, 0x37ee49f5u, 0xd625c3a6u, 0x745d3d57u, 0x1294b708u, 0xb0cc30b9u, 0x4f03aa6au, 0xed3b241bu,
    0x8b729dccu, 0x29aa177du, 0xc7e1912eu, 0x66190adfu, 0x04508490u, 0xa287fe41u, 0x40bf77f2u, 0xdef6f1a3u,
    0x7d2e6b54u, 0x1b65e505u, 0xb99d5eb6u, 0x57d4d867u, 0xf60c5218u, 0x9443cbc9u, 0x327b457au, 0xd0b2bf2bu,
    0x6eea38dcu, 0x0d21b28du, 0xab592c3eu, 0x4990a5efu, 0xe7c81fa0u, 0x85ff9951u, 0x24371302u, 0xc26e8cb3u,
    0x60a60664u, 0xfedd8015u, 0x9d14f9c6u, 0x3b4c7377u, 0xd983ed28u, 0x77bb66d9u, 0x15f2e08au, 0xb42a5a3bu,
    0x5261d3ecu, 0xf0994d9du, 0x8ed0c74eu, 0x2d0840ffu, 0xcb3fbab0u, 0x69773461u, 0x07aeae12u, 0xa5e627c3u,
    0x441da174u, 0xe2551b25u, 0x808c94d6u, 0x1ec40e87u, 0xbcfb8838u, 0x5b3301e9u, 0xf96a7b9au, 0x97a1f54bu,
};

static const uint32_t bshim_190_tab3[96] = {
    0x62bae15du, 0x00f25b0eu, 0x9f29d4bfu, 0x3d614e70u, 0xdb98c821u, 0x79d041d2u, 0x1807bb83u, 0xb63f3534u,
    0x5476aee5u, 0xf2ae2896u, 0x90e5a247u, 0x2f1d1bf8u, 0xcd5495a9u, 0x6b8c0f5au, 0x09c3890bu, 0xa7fb02bcu,
    0x46327c6du, 0xe469f61eu, 0x82a16fcfu, 0x20d8e980u, 0xbf106331u, 0x5d47dce2u, 0xfb7f5693u, 0x99b6d044u,
    0x37ee49f5u, 0xd625c3a6u, 0x745d3d57u, 0x1294b708u, 0xb0cc30b9u, 0x4f03aa6au, 0xed3b241bu, 0x8b729dccu,
    0x29aa177du, 0xc7e1912eu, 0x66190adfu, 0x04508490u, 0xa287fe41u, 0x40bf77f2u, 0xdef6f1a3u, 0x7d2e6b54u,
    0x1b65e505u, 0xb99d5eb6u, 0x57d4d867u, 0xf60c5218u, 0x9443cbc9u, 0x327b457au, 0xd0b2bf2bu, 0x6eea38dcu,
    0x0d21b28du, 0xab592c3eu, 0x4990a5efu, 0xe7c81fa0u, 0x85ff9951u, 0x24371302u, 0xc26e8cb3u, 0x60a60664u,
    0xfedd8015u, 0x9d14f9c6u, 0x3b4c7377u, 0xd983ed28u, 0x77bb66d9u, 0x15f2e08au, 0xb42a5a3bu, 0x5261d3ecu,
    0xf0994d9du, 0x8ed0c74eu, 0x2d0840ffu, 0xcb3fbab0u, 0x69773461u, 0x07aeae12u, 0xa5e627c3u, 0x441da174u,
    0xe2551b25u, 0x808c94d6u, 0x1ec40e87u, 0xbcfb8838u, 0x5b3301e9u, 0xf96a7b9au, 0x97a1f54bu, 0x35d96efcu,
    0xd410e8adu, 0x7248625eu, 0x107fdc0fu, 0xaeb755c0u, 0x4ceecf71u, 0xeb264922u, 0x895dc2d3u, 0x27953c84u,
    0xc5ccb635u, 0x64042fe6u, 0x023ba997u, 0xa0732348u, 0x3eaa9cf9u, 0xdce216aau, 0x7b19905bu, 0x19510a0cu,
};

static const uint32_t bshim_190_tab4[96] = {
    0xe469f61eu, 0x82a16fcfu, 0x20d8e980u, 0xbf106331u, 0x5d47dce2u, 0xfb7f5693u, 0x99b6d044u, 0x37ee49f5u,
    0xd625c3a6u, 0x745d3d57u, 0x1294b708u, 0xb0cc30b9u, 0x4f03aa6au, 0xed3b241bu, 0x8b729dccu, 0x29aa177du,
    0xc7e1912eu, 0x66190adfu, 0x04508490u, 0xa287fe41u, 0x40bf77f2u, 0xdef6f1a3u, 0x7d2e6b54u, 0x1b65e505u,
    0xb99d5eb6u, 0x57d4d867u, 0xf60c5218u, 0x9443cbc9u, 0x327b457au, 0xd0b2bf2bu, 0x6eea38dcu, 0x0d21b28du,
    0xab592c3eu, 0x4990a5efu, 0xe7c81fa0u, 0x85ff9951u, 0x24371302u, 0xc26e8cb3u, 0x60a60664u, 0xfedd8015u,
    0x9d14f9c6u, 0x3b4c7377u, 0xd983ed28u, 0x77bb66d9u, 0x15f2e08au, 0xb42a5a3bu, 0x5261d3ecu, 0xf0994d9du,
    0x8ed0c74eu, 0x2d0840ffu, 0xcb3fbab0u, 0x69773461u, 0x07aeae12u, 0xa5e627c3u, 0x441da174u, 0xe2551b25u,
    0x808c94d6u, 0x1ec40e87u, 0xbcfb8838u, 0x5b3301e9u, 0xf96a7b9au, 0x97a1f54bu, 0x35d96efcu, 0xd410e8adu,
    0x7248625eu, 0x107fdc0fu, 0xaeb755c0u, 0x4ceecf71u, 0xeb264922u, 0x895dc2d3u, 0x27953c84u, 0xc5ccb635u,
    0x64042fe6u, 0x023ba997u, 0xa0732348u, 0x3eaa9cf9u, 0xdce216aau, 0x7b19905bu, 0x19510a0cu, 0xb78883bdu,
    0x55bffd6eu, 0xf3f7771fu, 0x922ef0d0u, 0x30666a81u, 0xce9de432u, 0x6cd55de3u, 0x0b0cd794u, 0xa9445145u,
    0x477bcaf6u, 0xe5b344a7u, 0x83eabe58u, 0x22223809u, 0xc059b1bau, 0x5e912b6bu, 0xfcc8a51cu, 0x9b001ecdu,
};

static const uint32_t bshim_190_tab5[96] = {
    0x66190adfu, 0x04508490u, 0xa287fe41u, 0x40bf77f2u, 0xdef6f1a3u, 0x7d2e6b54u, 0x1b65e505u, 0xb99d5eb6u,
    0x57d4d867u, 0xf60c5218u, 0x9443cbc9u, 0x327b457au, 0xd0b2bf2bu, 0x6eea38dcu, 0x0d21b28du, 0xab592c3eu,
    0x4990a5efu, 0xe7c81fa0u, 0x85ff9951u, 0x24371302u, 0xc26e8cb3u, 0x60a60664u, 0xfedd8015u, 0x9d14f9c6u,
    0x3b4c7377u, 0xd983ed28u, 0x77bb66d9u, 0x15f2e08au, 0xb42a5a3bu, 0x5261d3ecu, 0xf0994d9du, 0x8ed0c74eu,
    0x2d0840ffu, 0xcb3fbab0u, 0x69773461u, 0x07aeae12u, 0xa5e627c3u, 0x441da174u, 0xe2551b25u, 0x808c94d6u,
    0x1ec40e87u, 0xbcfb8838u, 0x5b3301e9u, 0xf96a7b9au, 0x97a1f54bu, 0x35d96efcu, 0xd410e8adu, 0x7248625eu,
    0x107fdc0fu, 0xaeb755c0u, 0x4ceecf71u, 0xeb264922u, 0x895dc2d3u, 0x27953c84u, 0xc5ccb635u, 0x64042fe6u,
    0x023ba997u, 0xa0732348u, 0x3eaa9cf9u, 0xdce216aau, 0x7b19905bu, 0x19510a0cu, 0xb78883bdu, 0x55bffd6eu,
    0xf3f7771fu, 0x922ef0d0u, 0x30666a81u, 0xce9de432u, 0x6cd55de3u, 0x0b0cd794u, 0xa9445145u, 0x477bcaf6u,
    0xe5b344a7u, 0x83eabe58u, 0x22223809u, 0xc059b1bau, 0x5e912b6bu, 0xfcc8a51cu, 0x9b001ecdu, 0x3937987eu,
    0xd76f122fu, 0x75a68be0u, 0x13de0591u, 0xb2157f42u, 0x504cf8f3u, 0xee8472a4u, 0x8cbbec55u, 0x2af36606u,
    0xc92adfb7u, 0x67625968u, 0x0599d319u, 0xa3d14ccau, 0x4208c67bu, 0xe040402cu, 0x7e77b9ddu, 0x1caf338eu,
};

static const uint32_t bshim_190_tab6[96] = {
    0xe7c81fa0u, 0x85ff9951u, 0x24371302u, 0xc26e8cb3u, 0x60a60664u, 0xfedd8015u, 0x9d14f9c6u, 0x3b4c7377u,
    0xd983ed28u, 0x77bb66d9u, 0x15f2e08au, 0xb42a5a3bu, 0x5261d3ecu, 0xf0994d9du, 0x8ed0c74eu, 0x2d0840ffu,
    0xcb3fbab0u, 0x69773461u, 0x07aeae12u, 0xa5e627c3u, 0x441da174u, 0xe2551b25u, 0x808c94d6u, 0x1ec40e87u,
    0xbcfb8838u, 0x5b3301e9u, 0xf96a7b9au, 0x97a1f54bu, 0x35d96efcu, 0xd410e8adu, 0x7248625eu, 0x107fdc0fu,
    0xaeb755c0u, 0x4ceecf71u, 0xeb264922u, 0x895dc2d3u, 0x27953c84u, 0xc5ccb635u, 0x64042fe6u, 0x023ba997u,
    0xa0732348u, 0x3eaa9cf9u, 0xdce216aau, 0x7b19905bu, 0x19510a0cu, 0xb78883bdu, 0x55bffd6eu, 0xf3f7771fu,
    0x922ef0d0u, 0x30666a81u, 0xce9de432u, 0x6cd55de3u, 0x0b0cd794u, 0xa9445145u, 0x477bcaf6u, 0xe5b344a7u,
    0x83eabe58u, 0x22223809u, 0xc059b1bau, 0x5e912b6bu, 0xfcc8a51cu, 0x9b001ecdu, 0x3937987eu, 0xd76f122fu,
    0x75a68be0u, 0x13de0591u, 0xb2157f42u, 0x504cf8f3u, 0xee8472a4u, 0x8cbbec55u, 0x2af36606u, 0xc92adfb7u,
    0x67625968u, 0x0599d319u, 0xa3d14ccau, 0x4208c67bu, 0xe040402cu, 0x7e77b9ddu, 0x1caf338eu, 0xbae6ad3fu,
    0x591e26f0u, 0xf755a0a1u, 0x958d1a52u, 0x33c49403u, 0xd1fc0db4u, 0x70338765u, 0x0e6b0116u, 0xaca27ac7u,
    0x4ad9f478u, 0xe9116e29u, 0x8748e7dau, 0x2580618bu, 0xc3b7db3cu, 0x61ef54edu, 0x0026ce9eu, 0x9e5e484fu,
};

static const uint32_t bshim_190_tab7[96] = {
    0x69773461u, 0x07aeae12u, 0xa5e627c3u, 0x441da174u, 0xe2551b25u, 0x808c94d6u, 0x1ec40e87u, 0xbcfb8838u,
    0x5b3301e9u, 0xf96a7b9au, 0x97a1f54bu, 0x35d96efcu, 0xd410e8adu, 0x7248625eu, 0x107fdc0fu, 0xaeb755c0u,
    0x4ceecf71u, 0xeb264922u, 0x895dc2d3u, 0x27953c84u, 0xc5ccb635u, 0x64042fe6u, 0x023ba997u, 0xa0732348u,
    0x3eaa9cf9u, 0xdce216aau, 0x7b19905bu, 0x19510a0cu, 0xb78883bdu, 0x55bffd6eu, 0xf3f7771fu, 0x922ef0d0u,
    0x30666a81u, 0xce9de432u, 0x6cd55de3u, 0x0b0cd794u, 0xa9445145u, 0x477bcaf6u, 0xe5b344a7u, 0x83eabe58u,
    0x22223809u, 0xc059b1bau, 0x5e912b6bu, 0xfcc8a51cu, 0x9b001ecdu, 0x3937987eu, 0xd76f122fu, 0x75a68be0u,
    0x13de0591u, 0xb2157f42u, 0x504cf8f3u, 0xee8472a4u, 0x8cbbec55u, 0x2af36606u, 0xc92adfb7u, 0x67625968u,
    0x0599d319u, 0xa3d14ccau, 0x4208c67bu, 0xe040402cu, 0x7e77b9ddu, 0x1caf338eu, 0xbae6ad3fu, 0x591e26f0u,
    0xf755a0a1u, 0x958d1a52u, 0x33c49403u, 0xd1fc0db4u, 0x70338765u, 0x0e6b0116u, 0xaca27ac7u, 0x4ad9f478u,
    0xe9116e29u, 0x8748e7dau, 0x2580618bu, 0xc3b7db3cu, 0x61ef54edu, 0x0026ce9eu, 0x9e5e484fu, 0x3c95c200u,
    0xdacd3bb1u, 0x7904b562u, 0x173c2f13u, 0xb573a8c4u, 0x53ab2275u, 0xf1e29c26u, 0x901a15d7u, 0x2e518f88u,
    0xcc890939u, 0x6ac082eau, 0x08f7fc9bu, 0xa72f764cu, 0x4566effdu, 0xe39e69aeu, 0x81d5e35fu, 0x200d5d10u,
};

struct bshim_190_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_190_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_190_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_190_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_190_reset(struct bshim_190_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0016f562u;
    return 0;
}

