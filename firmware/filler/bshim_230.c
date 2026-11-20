/* bshim_230 -- board support shim generated from the 0230 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_230_tab0[96] = {
    0x5d308212u, 0xfb67fbc3u, 0x999f7574u, 0x37d6ef25u, 0xd60e68d6u, 0x7445e287u, 0x127d5c38u, 0xb0b4d5e9u,
    0x4eec4f9au, 0xed23c94bu, 0x8b5b42fcu, 0x2992bcadu, 0xc7ca365eu, 0x6601b00fu, 0x043929c0u, 0xa270a371u,
    0x40a81d22u, 0xdedf96d3u, 0x7d171084u, 0x1b4e8a35u, 0xb98603e6u, 0x57bd7d97u, 0xf5f4f748u, 0x942c70f9u,
    0x3263eaaau, 0xd09b645bu, 0x6ed2de0cu, 0x0d0a57bdu, 0xab41d16eu, 0x49794b1fu, 0xe7b0c4d0u, 0x85e83e81u,
    0x241fb832u, 0xc25731e3u, 0x608eab94u, 0xfec62545u, 0x9cfd9ef6u, 0x3b3518a7u, 0xd96c9258u, 0x77a40c09u,
    0x15db85bau, 0xb412ff6bu, 0x524a791cu, 0xf081f2cdu, 0x8eb96c7eu, 0x2cf0e62fu, 0xcb285fe0u, 0x695fd991u,
    0x07975342u, 0xa5ceccf3u, 0x440646a4u, 0xe23dc055u, 0x80753a06u, 0x1eacb3b7u, 0xbce42d68u, 0x5b1ba719u,
    0xf95320cau, 0x978a9a7bu, 0x35c2142cu, 0xd3f98dddu, 0x7231078eu, 0x1068813fu, 0xae9ffaf0u, 0x4cd774a1u,
    0xeb0eee52u, 0x89466803u, 0x277de1b4u, 0xc5b55b65u, 0x63ecd516u, 0x02244ec7u, 0xa05bc878u, 0x3e934229u,
    0xdccabbdau, 0x7b02358bu, 0x1939af3cu, 0xb77128edu, 0x55a8a29eu, 0xf3e01c4fu, 0x92179600u, 0x304f0fb1u,
    0xce868962u, 0x6cbe0313u, 0x0af57cc4u, 0xa92cf675u, 0x47647026u, 0xe59be9d7u, 0x83d36388u, 0x220add39u,
    0xc04256eau, 0x5e79d09bu, 0xfcb14a4cu, 0x9ae8c3fdu, 0x39203daeu, 0xd757b75fu, 0x758f3110u, 0x13c6aac1u,
};

static const uint32_t bshim_230_tab1[96] = {
    0xdedf96d3u, 0x7d171084u, 0x1b4e8a35u, 0xb98603e6u, 0x57bd7d97u, 0xf5f4f748u, 0x942c70f9u, 0x3263eaaau,
    0xd09b645bu, 0x6ed2de0cu, 0x0d0a57bdu, 0xab41d16eu, 0x49794b1fu, 0xe7b0c4d0u, 0x85e83e81u, 0x241fb832u,
    0xc25731e3u, 0x608eab94u, 0xfec62545u, 0x9cfd9ef6u, 0x3b3518a7u, 0xd96c9258u, 0x77a40c09u, 0x15db85bau,
    0xb412ff6bu, 0x524a791cu, 0xf081f2cdu, 0x8eb96c7eu, 0x2cf0e62fu, 0xcb285fe0u, 0x695fd991u, 0x07975342u,
    0xa5ceccf3u, 0x440646a4u, 0xe23dc055u, 0x80753a06u, 0x1eacb3b7u, 0xbce42d68u, 0x5b1ba719u, 0xf95320cau,
    0x978a9a7bu, 0x35c2142cu, 0xd3f98dddu, 0x7231078eu, 0x1068813fu, 0xae9ffaf0u, 0x4cd774a1u, 0xeb0eee52u,
    0x89466803u, 0x277de1b4u, 0xc5b55b65u, 0x63ecd516u, 0x02244ec7u, 0xa05bc878u, 0x3e934229u, 0xdccabbdau,
    0x7b02358bu, 0x1939af3cu, 0xb77128edu, 0x55a8a29eu, 0xf3e01c4fu, 0x92179600u, 0x304f0fb1u, 0xce868962u,
    0x6cbe0313u, 0x0af57cc4u, 0xa92cf675u, 0x47647026u, 0xe59be9d7u, 0x83d36388u, 0x220add39u, 0xc04256eau,
    0x5e79d09bu, 0xfcb14a4cu, 0x9ae8c3fdu, 0x39203daeu, 0xd757b75fu, 0x758f3110u, 0x13c6aac1u, 0xb1fe2472u,
    0x50359e23u, 0xee6d17d4u, 0x8ca49185u, 0x2adc0b36u, 0xc91384e7u, 0x674afe98u, 0x05827849u, 0xa3b9f1fau,
    0x41f16babu, 0xe028e55cu, 0x7e605f0du, 0x1c97d8beu, 0xbacf526fu, 0x5906cc20u, 0xf73e45d1u, 0x9575bf82u,
};

static const uint32_t bshim_230_tab2[96] = {
    0x608eab94u, 0xfec62545u, 0x9cfd9ef6u, 0x3b3518a7u, 0xd96c9258u, 0x77a40c09u, 0x15db85bau, 0xb412ff6bu,
    0x524a791cu, 0xf081f2cdu, 0x8eb96c7eu, 0x2cf0e62fu, 0xcb285fe0u, 0x695fd991u, 0x07975342u, 0xa5ceccf3u,
    0x440646a4u, 0xe23dc055u, 0x80753a06u, 0x1eacb3b7u, 0xbce42d68u, 0x5b1ba719u, 0xf95320cau, 0x978a9a7bu,
    0x35c2142cu, 0xd3f98dddu, 0x7231078eu, 0x1068813fu, 0xae9ffaf0u, 0x4cd774a1u, 0xeb0eee52u, 0x89466803u,
    0x277de1b4u, 0xc5b55b65u, 0x63ecd516u, 0x02244ec7u, 0xa05bc878u, 0x3e934229u, 0xdccabbdau, 0x7b02358bu,
    0x1939af3cu, 0xb77128edu, 0x55a8a29eu, 0xf3e01c4fu, 0x92179600u, 0x304f0fb1u, 0xce868962u, 0x6cbe0313u,
    0x0af57cc4u, 0xa92cf675u, 0x47647026u, 0xe59be9d7u, 0x83d36388u, 0x220add39u, 0xc04256eau, 0x5e79d09bu,
    0xfcb14a4cu, 0x9ae8c3fdu, 0x39203daeu, 0xd757b75fu, 0x758f3110u, 0x13c6aac1u, 0xb1fe2472u, 0x50359e23u,
    0xee6d17d4u, 0x8ca49185u, 0x2adc0b36u, 0xc91384e7u, 0x674afe98u, 0x05827849u, 0xa3b9f1fau, 0x41f16babu,
    0xe028e55cu, 0x7e605f0du, 0x1c97d8beu, 0xbacf526fu, 0x5906cc20u, 0xf73e45d1u, 0x9575bf82u, 0x33ad3933u,
    0xd1e4b2e4u, 0x701c2c95u, 0x0e53a646u, 0xac8b1ff7u, 0x4ac299a8u, 0xe8fa1359u, 0x87318d0au, 0x256906bbu,
    0xc3a0806cu, 0x61d7fa1du, 0x000f73ceu, 0x9e46ed7fu, 0x3c7e6730u, 0xdab5e0e1u, 0x78ed5a92u, 0x1724d443u,
};

static const uint32_t bshim_230_tab3[96] = {
    0xe23dc055u, 0x80753a06u, 0x1eacb3b7u, 0xbce42d68u, 0x5b1ba719u, 0xf95320cau, 0x978a9a7bu, 0x35c2142cu,
    0xd3f98dddu, 0x7231078eu, 0x1068813fu, 0xae9ffaf0u, 0x4cd774a1u, 0xeb0eee52u, 0x89466803u, 0x277de1b4u,
    0xc5b55b65u, 0x63ecd516u, 0x02244ec7u, 0xa05bc878u, 0x3e934229u, 0xdccabbdau, 0x7b02358bu, 0x1939af3cu,
    0xb77128edu, 0x55a8a29eu, 0xf3e01c4fu, 0x92179600u, 0x304f0fb1u, 0xce868962u, 0x6cbe0313u, 0x0af57cc4u,
    0xa92cf675u, 0x47647026u, 0xe59be9d7u, 0x83d36388u, 0x220add39u, 0xc04256eau, 0x5e79d09bu, 0xfcb14a4cu,
    0x9ae8c3fdu, 0x39203daeu, 0xd757b75fu, 0x758f3110u, 0x13c6aac1u, 0xb1fe2472u, 0x50359e23u, 0xee6d17d4u,
    0x8ca49185u, 0x2adc0b36u, 0xc91384e7u, 0x674afe98u, 0x05827849u, 0xa3b9f1fau, 0x41f16babu, 0xe028e55cu,
    0x7e605f0du, 0x1c97d8beu, 0xbacf526fu, 0x5906cc20u, 0xf73e45d1u, 0x9575bf82u, 0x33ad3933u, 0xd1e4b2e4u,
    0x701c2c95u, 0x0e53a646u, 0xac8b1ff7u, 0x4ac299a8u, 0xe8fa1359u, 0x87318d0au, 0x256906bbu, 0xc3a0806cu,
    0x61d7fa1du, 0x000f73ceu, 0x9e46ed7fu, 0x3c7e6730u, 0xdab5e0e1u, 0x78ed5a92u, 0x1724d443u, 0xb55c4df4u,
    0x5393c7a5u, 0xf1cb4156u, 0x9002bb07u, 0x2e3a34b8u, 0xcc71ae69u, 0x6aa9281au, 0x08e0a1cbu, 0xa7181b7cu,
    0x454f952du, 0xe3870edeu, 0x81be888fu, 0x1ff60240u, 0xbe2d7bf1u, 0x5c64f5a2u, 0xfa9c6f53u, 0x98d3e904u,
};

static const uint32_t bshim_230_tab4[96] = {
    0x63ecd516u, 0x02244ec7u, 0xa05bc878u, 0x3e934229u, 0xdccabbdau, 0x7b02358bu, 0x1939af3cu, 0xb77128edu,
    0x55a8a29eu, 0xf3e01c4fu, 0x92179600u, 0x304f0fb1u, 0xce868962u, 0x6cbe0313u, 0x0af57cc4u, 0xa92cf675u,
    0x47647026u, 0xe59be9d7u, 0x83d36388u, 0x220add39u, 0xc04256eau, 0x5e79d09bu, 0xfcb14a4cu, 0x9ae8c3fdu,
    0x39203daeu, 0xd757b75fu, 0x758f3110u, 0x13c6aac1u, 0xb1fe2472u, 0x50359e23u, 0xee6d17d4u, 0x8ca49185u,
    0x2adc0b36u, 0xc91384e7u, 0x674afe98u, 0x05827849u, 0xa3b9f1fau, 0x41f16babu, 0xe028e55cu, 0x7e605f0du,
    0x1c97d8beu, 0xbacf526fu, 0x5906cc20u, 0xf73e45d1u, 0x9575bf82u, 0x33ad3933u, 0xd1e4b2e4u, 0x701c2c95u,
    0x0e53a646u, 0xac8b1ff7u, 0x4ac299a8u, 0xe8fa1359u, 0x87318d0au, 0x256906bbu, 0xc3a0806cu, 0x61d7fa1du,
    0x000f73ceu, 0x9e46ed7fu, 0x3c7e6730u, 0xdab5e0e1u, 0x78ed5a92u, 0x1724d443u, 0xb55c4df4u, 0x5393c7a5u,
    0xf1cb4156u, 0x9002bb07u, 0x2e3a34b8u, 0xcc71ae69u, 0x6aa9281au, 0x08e0a1cbu, 0xa7181b7cu, 0x454f952du,
    0xe3870edeu, 0x81be888fu, 0x1ff60240u, 0xbe2d7bf1u, 0x5c64f5a2u, 0xfa9c6f53u, 0x98d3e904u, 0x370b62b5u,
    0xd542dc66u, 0x737a5617u, 0x11b1cfc8u, 0xafe94979u, 0x4e20c32au, 0xec583cdbu, 0x8a8fb68cu, 0x28c7303du,
    0xc6fea9eeu, 0x6536239fu, 0x036d9d50u, 0xa1a51701u, 0x3fdc90b2u, 0xde140a63u, 0x7c4b8414u, 0x1a82fdc5u,
};

static const uint32_t bshim_230_tab5[96] = {
    0xe59be9d7u, 0x83d36388u, 0x220add39u, 0xc04256eau, 0x5e79d09bu, 0xfcb14a4cu, 0x9ae8c3fdu, 0x39203daeu,
    0xd757b75fu, 0x758f3110u, 0x13c6aac1u, 0xb1fe2472u, 0x50359e23u, 0xee6d17d4u, 0x8ca49185u, 0x2adc0b36u,
    0xc91384e7u, 0x674afe98u, 0x05827849u, 0xa3b9f1fau, 0x41f16babu, 0xe028e55cu, 0x7e605f0du, 0x1c97d8beu,
    0xbacf526fu, 0x5906cc20u, 0xf73e45d1u, 0x9575bf82u, 0x33ad3933u, 0xd1e4b2e4u, 0x701c2c95u, 0x0e53a646u,
    0xac8b1ff7u, 0x4ac299a8u, 0xe8fa1359u, 0x87318d0au, 0x256906bbu, 0xc3a0806cu, 0x61d7fa1du, 0x000f73ceu,
    0x9e46ed7fu, 0x3c7e6730u, 0xdab5e0e1u, 0x78ed5a92u, 0x1724d443u, 0xb55c4df4u, 0x5393c7a5u, 0xf1cb4156u,
    0x9002bb07u, 0x2e3a34b8u, 0xcc71ae69u, 0x6aa9281au, 0x08e0a1cbu, 0xa7181b7cu, 0x454f952du, 0xe3870edeu,
    0x81be888fu, 0x1ff60240u, 0xbe2d7bf1u, 0x5c64f5a2u, 0xfa9c6f53u, 0x98d3e904u, 0x370b62b5u, 0xd542dc66u,
    0x737a5617u, 0x11b1cfc8u, 0xafe94979u, 0x4e20c32au, 0xec583cdbu, 0x8a8fb68cu, 0x28c7303du, 0xc6fea9eeu,
    0x6536239fu, 0x036d9d50u, 0xa1a51701u, 0x3fdc90b2u, 0xde140a63u, 0x7c4b8414u, 0x1a82fdc5u, 0xb8ba7776u,
    0x56f1f127u, 0xf5296ad8u, 0x9360e489u, 0x31985e3au, 0xcfcfd7ebu, 0x6e07519cu, 0x0c3ecb4du, 0xaa7644feu,
    0x48adbeafu, 0xe6e53860u, 0x851cb211u, 0x23542bc2u, 0xc18ba573u, 0x5fc31f24u, 0xfdfa98d5u, 0x9c321286u,
};

static const uint32_t bshim_230_tab6[96] = {
    0x674afe98u, 0x05827849u, 0xa3b9f1fau, 0x41f16babu, 0xe028e55cu, 0x7e605f0du, 0x1c97d8beu, 0xbacf526fu,
    0x5906cc20u, 0xf73e45d1u, 0x9575bf82u, 0x33ad3933u, 0xd1e4b2e4u, 0x701c2c95u, 0x0e53a646u, 0xac8b1ff7u,
    0x4ac299a8u, 0xe8fa1359u, 0x87318d0au, 0x256906bbu, 0xc3a0806cu, 0x61d7fa1du, 0x000f73ceu, 0x9e46ed7fu,
    0x3c7e6730u, 0xdab5e0e1u, 0x78ed5a92u, 0x1724d443u, 0xb55c4df4u, 0x5393c7a5u, 0xf1cb4156u, 0x9002bb07u,
    0x2e3a34b8u, 0xcc71ae69u, 0x6aa9281au, 0x08e0a1cbu, 0xa7181b7cu, 0x454f952du, 0xe3870edeu, 0x81be888fu,
    0x1ff60240u, 0xbe2d7bf1u, 0x5c64f5a2u, 0xfa9c6f53u, 0x98d3e904u, 0x370b62b5u, 0xd542dc66u, 0x737a5617u,
    0x11b1cfc8u, 0xafe94979u, 0x4e20c32au, 0xec583cdbu, 0x8a8fb68cu, 0x28c7303du, 0xc6fea9eeu, 0x6536239fu,
    0x036d9d50u, 0xa1a51701u, 0x3fdc90b2u, 0xde140a63u, 0x7c4b8414u, 0x1a82fdc5u, 0xb8ba7776u, 0x56f1f127u,
    0xf5296ad8u, 0x9360e489u, 0x31985e3au, 0xcfcfd7ebu, 0x6e07519cu, 0x0c3ecb4du, 0xaa7644feu, 0x48adbeafu,
    0xe6e53860u, 0x851cb211u, 0x23542bc2u, 0xc18ba573u, 0x5fc31f24u, 0xfdfa98d5u, 0x9c321286u, 0x3a698c37u,
    0xd8a105e8u, 0x76d87f99u, 0x150ff94au, 0xb34772fbu, 0x517eecacu, 0xefb6665du, 0x8dede00eu, 0x2c2559bfu,
    0xca5cd370u, 0x68944d21u, 0x06cbc6d2u, 0xa5034083u, 0x433aba34u, 0xe17233e5u, 0x7fa9ad96u, 0x1de12747u,
};

static const uint32_t bshim_230_tab7[96] = {
    0xe8fa1359u, 0x87318d0au, 0x256906bbu, 0xc3a0806cu, 0x61d7fa1du, 0x000f73ceu, 0x9e46ed7fu, 0x3c7e6730u,
    0xdab5e0e1u, 0x78ed5a92u, 0x1724d443u, 0xb55c4df4u, 0x5393c7a5u, 0xf1cb4156u, 0x9002bb07u, 0x2e3a34b8u,
    0xcc71ae69u, 0x6aa9281au, 0x08e0a1cbu, 0xa7181b7cu, 0x454f952du, 0xe3870edeu, 0x81be888fu, 0x1ff60240u,
    0xbe2d7bf1u, 0x5c64f5a2u, 0xfa9c6f53u, 0x98d3e904u, 0x370b62b5u, 0xd542dc66u, 0x737a5617u, 0x11b1cfc8u,
    0xafe94979u, 0x4e20c32au, 0xec583cdbu, 0x8a8fb68cu, 0x28c7303du, 0xc6fea9eeu, 0x6536239fu, 0x036d9d50u,
    0xa1a51701u, 0x3fdc90b2u, 0xde140a63u, 0x7c4b8414u, 0x1a82fdc5u, 0xb8ba7776u, 0x56f1f127u, 0xf5296ad8u,
    0x9360e489u, 0x31985e3au, 0xcfcfd7ebu, 0x6e07519cu, 0x0c3ecb4du, 0xaa7644feu, 0x48adbeafu, 0xe6e53860u,
    0x851cb211u, 0x23542bc2u, 0xc18ba573u, 0x5fc31f24u, 0xfdfa98d5u, 0x9c321286u, 0x3a698c37u, 0xd8a105e8u,
    0x76d87f99u, 0x150ff94au, 0xb34772fbu, 0x517eecacu, 0xefb6665du, 0x8dede00eu, 0x2c2559bfu, 0xca5cd370u,
    0x68944d21u, 0x06cbc6d2u, 0xa5034083u, 0x433aba34u, 0xe17233e5u, 0x7fa9ad96u, 0x1de12747u, 0xbc18a0f8u,
    0x5a501aa9u, 0xf887945au, 0x96bf0e0bu, 0x34f687bcu, 0xd32e016du, 0x71657b1eu, 0x0f9cf4cfu, 0xadd46e80u,
    0x4c0be831u, 0xea4361e2u, 0x887adb93u, 0x26b25544u, 0xc4e9cef5u, 0x632148a6u, 0x0158c257u, 0x9f903c08u,
};

struct bshim_230_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_230_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_230_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_230_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_230_reset(struct bshim_230_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001bcabau;
    return 0;
}

