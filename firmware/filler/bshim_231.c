/* bshim_231 -- board support shim generated from the 0231 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_231_tab0[96] = {
    0x5393c7a5u, 0xf1cb4156u, 0x9002bb07u, 0x2e3a34b8u, 0xcc71ae69u, 0x6aa9281au, 0x08e0a1cbu, 0xa7181b7cu,
    0x454f952du, 0xe3870edeu, 0x81be888fu, 0x1ff60240u, 0xbe2d7bf1u, 0x5c64f5a2u, 0xfa9c6f53u, 0x98d3e904u,
    0x370b62b5u, 0xd542dc66u, 0x737a5617u, 0x11b1cfc8u, 0xafe94979u, 0x4e20c32au, 0xec583cdbu, 0x8a8fb68cu,
    0x28c7303du, 0xc6fea9eeu, 0x6536239fu, 0x036d9d50u, 0xa1a51701u, 0x3fdc90b2u, 0xde140a63u, 0x7c4b8414u,
    0x1a82fdc5u, 0xb8ba7776u, 0x56f1f127u, 0xf5296ad8u, 0x9360e489u, 0x31985e3au, 0xcfcfd7ebu, 0x6e07519cu,
    0x0c3ecb4du, 0xaa7644feu, 0x48adbeafu, 0xe6e53860u, 0x851cb211u, 0x23542bc2u, 0xc18ba573u, 0x5fc31f24u,
    0xfdfa98d5u, 0x9c321286u, 0x3a698c37u, 0xd8a105e8u, 0x76d87f99u, 0x150ff94au, 0xb34772fbu, 0x517eecacu,
    0xefb6665du, 0x8dede00eu, 0x2c2559bfu, 0xca5cd370u, 0x68944d21u, 0x06cbc6d2u, 0xa5034083u, 0x433aba34u,
    0xe17233e5u, 0x7fa9ad96u, 0x1de12747u, 0xbc18a0f8u, 0x5a501aa9u, 0xf887945au, 0x96bf0e0bu, 0x34f687bcu,
    0xd32e016du, 0x71657b1eu, 0x0f9cf4cfu, 0xadd46e80u, 0x4c0be831u, 0xea4361e2u, 0x887adb93u, 0x26b25544u,
    0xc4e9cef5u, 0x632148a6u, 0x0158c257u, 0x9f903c08u, 0x3dc7b5b9u, 0xdbff2f6au, 0x7a36a91bu, 0x186e22ccu,
    0xb6a59c7du, 0x54dd162eu, 0xf3148fdfu, 0x914c0990u, 0x2f838341u, 0xcdbafcf2u, 0x6bf276a3u, 0x0a29f054u,
};

static const uint32_t bshim_231_tab1[96] = {
    0xd542dc66u, 0x737a5617u, 0x11b1cfc8u, 0xafe94979u, 0x4e20c32au, 0xec583cdbu, 0x8a8fb68cu, 0x28c7303du,
    0xc6fea9eeu, 0x6536239fu, 0x036d9d50u, 0xa1a51701u, 0x3fdc90b2u, 0xde140a63u, 0x7c4b8414u, 0x1a82fdc5u,
    0xb8ba7776u, 0x56f1f127u, 0xf5296ad8u, 0x9360e489u, 0x31985e3au, 0xcfcfd7ebu, 0x6e07519cu, 0x0c3ecb4du,
    0xaa7644feu, 0x48adbeafu, 0xe6e53860u, 0x851cb211u, 0x23542bc2u, 0xc18ba573u, 0x5fc31f24u, 0xfdfa98d5u,
    0x9c321286u, 0x3a698c37u, 0xd8a105e8u, 0x76d87f99u, 0x150ff94au, 0xb34772fbu, 0x517eecacu, 0xefb6665du,
    0x8dede00eu, 0x2c2559bfu, 0xca5cd370u, 0x68944d21u, 0x06cbc6d2u, 0xa5034083u, 0x433aba34u, 0xe17233e5u,
    0x7fa9ad96u, 0x1de12747u, 0xbc18a0f8u, 0x5a501aa9u, 0xf887945au, 0x96bf0e0bu, 0x34f687bcu, 0xd32e016du,
    0x71657b1eu, 0x0f9cf4cfu, 0xadd46e80u, 0x4c0be831u, 0xea4361e2u, 0x887adb93u, 0x26b25544u, 0xc4e9cef5u,
    0x632148a6u, 0x0158c257u, 0x9f903c08u, 0x3dc7b5b9u, 0xdbff2f6au, 0x7a36a91bu, 0x186e22ccu, 0xb6a59c7du,
    0x54dd162eu, 0xf3148fdfu, 0x914c0990u, 0x2f838341u, 0xcdbafcf2u, 0x6bf276a3u, 0x0a29f054u, 0xa8616a05u,
    0x4698e3b6u, 0xe4d05d67u, 0x8307d718u, 0x213f50c9u, 0xbf76ca7au, 0x5dae442bu, 0xfbe5bddcu, 0x9a1d378du,
    0x3854b13eu, 0xd68c2aefu, 0x74c3a4a0u, 0x12fb1e51u, 0xb1329802u, 0x4f6a11b3u, 0xeda18b64u, 0x8bd90515u,
};

static const uint32_t bshim_231_tab2[96] = {
    0x56f1f127u, 0xf5296ad8u, 0x9360e489u, 0x31985e3au, 0xcfcfd7ebu, 0x6e07519cu, 0x0c3ecb4du, 0xaa7644feu,
    0x48adbeafu, 0xe6e53860u, 0x851cb211u, 0x23542bc2u, 0xc18ba573u, 0x5fc31f24u, 0xfdfa98d5u, 0x9c321286u,
    0x3a698c37u, 0xd8a105e8u, 0x76d87f99u, 0x150ff94au, 0xb34772fbu, 0x517eecacu, 0xefb6665du, 0x8dede00eu,
    0x2c2559bfu, 0xca5cd370u, 0x68944d21u, 0x06cbc6d2u, 0xa5034083u, 0x433aba34u, 0xe17233e5u, 0x7fa9ad96u,
    0x1de12747u, 0xbc18a0f8u, 0x5a501aa9u, 0xf887945au, 0x96bf0e0bu, 0x34f687bcu, 0xd32e016du, 0x71657b1eu,
    0x0f9cf4cfu, 0xadd46e80u, 0x4c0be831u, 0xea4361e2u, 0x887adb93u, 0x26b25544u, 0xc4e9cef5u, 0x632148a6u,
    0x0158c257u, 0x9f903c08u, 0x3dc7b5b9u, 0xdbff2f6au, 0x7a36a91bu, 0x186e22ccu, 0xb6a59c7du, 0x54dd162eu,
    0xf3148fdfu, 0x914c0990u, 0x2f838341u, 0xcdbafcf2u, 0x6bf276a3u, 0x0a29f054u, 0xa8616a05u, 0x4698e3b6u,
    0xe4d05d67u, 0x8307d718u, 0x213f50c9u, 0xbf76ca7au, 0x5dae442bu, 0xfbe5bddcu, 0x9a1d378du, 0x3854b13eu,
    0xd68c2aefu, 0x74c3a4a0u, 0x12fb1e51u, 0xb1329802u, 0x4f6a11b3u, 0xeda18b64u, 0x8bd90515u, 0x2a107ec6u,
    0xc847f877u, 0x667f7228u, 0x04b6ebd9u, 0xa2ee658au, 0x4125df3bu, 0xdf5d58ecu, 0x7d94d29du, 0x1bcc4c4eu,
    0xba03c5ffu, 0x583b3fb0u, 0xf672b961u, 0x94aa3312u, 0x32e1acc3u, 0xd1192674u, 0x6f50a025u, 0x0d8819d6u,
};

static const uint32_t bshim_231_tab3[96] = {
    0xd8a105e8u, 0x76d87f99u, 0x150ff94au, 0xb34772fbu, 0x517eecacu, 0xefb6665du, 0x8dede00eu, 0x2c2559bfu,
    0xca5cd370u, 0x68944d21u, 0x06cbc6d2u, 0xa5034083u, 0x433aba34u, 0xe17233e5u, 0x7fa9ad96u, 0x1de12747u,
    0xbc18a0f8u, 0x5a501aa9u, 0xf887945au, 0x96bf0e0bu, 0x34f687bcu, 0xd32e016du, 0x71657b1eu, 0x0f9cf4cfu,
    0xadd46e80u, 0x4c0be831u, 0xea4361e2u, 0x887adb93u, 0x26b25544u, 0xc4e9cef5u, 0x632148a6u, 0x0158c257u,
    0x9f903c08u, 0x3dc7b5b9u, 0xdbff2f6au, 0x7a36a91bu, 0x186e22ccu, 0xb6a59c7du, 0x54dd162eu, 0xf3148fdfu,
    0x914c0990u, 0x2f838341u, 0xcdbafcf2u, 0x6bf276a3u, 0x0a29f054u, 0xa8616a05u, 0x4698e3b6u, 0xe4d05d67u,
    0x8307d718u, 0x213f50c9u, 0xbf76ca7au, 0x5dae442bu, 0xfbe5bddcu, 0x9a1d378du, 0x3854b13eu, 0xd68c2aefu,
    0x74c3a4a0u, 0x12fb1e51u, 0xb1329802u, 0x4f6a11b3u, 0xeda18b64u, 0x8bd90515u, 0x2a107ec6u, 0xc847f877u,
    0x667f7228u, 0x04b6ebd9u, 0xa2ee658au, 0x4125df3bu, 0xdf5d58ecu, 0x7d94d29du, 0x1bcc4c4eu, 0xba03c5ffu,
    0x583b3fb0u, 0xf672b961u, 0x94aa3312u, 0x32e1acc3u, 0xd1192674u, 0x6f50a025u, 0x0d8819d6u, 0xabbf9387u,
    0x49f70d38u, 0xe82e86e9u, 0x8666009au, 0x249d7a4bu, 0xc2d4f3fcu, 0x610c6dadu, 0xff43e75eu, 0x9d7b610fu,
    0x3bb2dac0u, 0xd9ea5471u, 0x7821ce22u, 0x165947d3u, 0xb490c184u, 0x52c83b35u, 0xf0ffb4e6u, 0x8f372e97u,
};

static const uint32_t bshim_231_tab4[96] = {
    0x5a501aa9u, 0xf887945au, 0x96bf0e0bu, 0x34f687bcu, 0xd32e016du, 0x71657b1eu, 0x0f9cf4cfu, 0xadd46e80u,
    0x4c0be831u, 0xea4361e2u, 0x887adb93u, 0x26b25544u, 0xc4e9cef5u, 0x632148a6u, 0x0158c257u, 0x9f903c08u,
    0x3dc7b5b9u, 0xdbff2f6au, 0x7a36a91bu, 0x186e22ccu, 0xb6a59c7du, 0x54dd162eu, 0xf3148fdfu, 0x914c0990u,
    0x2f838341u, 0xcdbafcf2u, 0x6bf276a3u, 0x0a29f054u, 0xa8616a05u, 0x4698e3b6u, 0xe4d05d67u, 0x8307d718u,
    0x213f50c9u, 0xbf76ca7au, 0x5dae442bu, 0xfbe5bddcu, 0x9a1d378du, 0x3854b13eu, 0xd68c2aefu, 0x74c3a4a0u,
    0x12fb1e51u, 0xb1329802u, 0x4f6a11b3u, 0xeda18b64u, 0x8bd90515u, 0x2a107ec6u, 0xc847f877u, 0x667f7228u,
    0x04b6ebd9u, 0xa2ee658au, 0x4125df3bu, 0xdf5d58ecu, 0x7d94d29du, 0x1bcc4c4eu, 0xba03c5ffu, 0x583b3fb0u,
    0xf672b961u, 0x94aa3312u, 0x32e1acc3u, 0xd1192674u, 0x6f50a025u, 0x0d8819d6u, 0xabbf9387u, 0x49f70d38u,
    0xe82e86e9u, 0x8666009au, 0x249d7a4bu, 0xc2d4f3fcu, 0x610c6dadu, 0xff43e75eu, 0x9d7b610fu, 0x3bb2dac0u,
    0xd9ea5471u, 0x7821ce22u, 0x165947d3u, 0xb490c184u, 0x52c83b35u, 0xf0ffb4e6u, 0x8f372e97u, 0x2d6ea848u,
    0xcba621f9u, 0x69dd9baau, 0x0815155bu, 0xa64c8f0cu, 0x448408bdu, 0xe2bb826eu, 0x80f2fc1fu, 0x1f2a75d0u,
    0xbd61ef81u, 0x5b996932u, 0xf9d0e2e3u, 0x98085c94u, 0x363fd645u, 0xd4774ff6u, 0x72aec9a7u, 0x10e64358u,
};

static const uint32_t bshim_231_tab5[96] = {
    0xdbff2f6au, 0x7a36a91bu, 0x186e22ccu, 0xb6a59c7du, 0x54dd162eu, 0xf3148fdfu, 0x914c0990u, 0x2f838341u,
    0xcdbafcf2u, 0x6bf276a3u, 0x0a29f054u, 0xa8616a05u, 0x4698e3b6u, 0xe4d05d67u, 0x8307d718u, 0x213f50c9u,
    0xbf76ca7au, 0x5dae442bu, 0xfbe5bddcu, 0x9a1d378du, 0x3854b13eu, 0xd68c2aefu, 0x74c3a4a0u, 0x12fb1e51u,
    0xb1329802u, 0x4f6a11b3u, 0xeda18b64u, 0x8bd90515u, 0x2a107ec6u, 0xc847f877u, 0x667f7228u, 0x04b6ebd9u,
    0xa2ee658au, 0x4125df3bu, 0xdf5d58ecu, 0x7d94d29du, 0x1bcc4c4eu, 0xba03c5ffu, 0x583b3fb0u, 0xf672b961u,
    0x94aa3312u, 0x32e1acc3u, 0xd1192674u, 0x6f50a025u, 0x0d8819d6u, 0xabbf9387u, 0x49f70d38u, 0xe82e86e9u,
    0x8666009au, 0x249d7a4bu, 0xc2d4f3fcu, 0x610c6dadu, 0xff43e75eu, 0x9d7b610fu, 0x3bb2dac0u, 0xd9ea5471u,
    0x7821ce22u, 0x165947d3u, 0xb490c184u, 0x52c83b35u, 0xf0ffb4e6u, 0x8f372e97u, 0x2d6ea848u, 0xcba621f9u,
    0x69dd9baau, 0x0815155bu, 0xa64c8f0cu, 0x448408bdu, 0xe2bb826eu, 0x80f2fc1fu, 0x1f2a75d0u, 0xbd61ef81u,
    0x5b996932u, 0xf9d0e2e3u, 0x98085c94u, 0x363fd645u, 0xd4774ff6u, 0x72aec9a7u, 0x10e64358u, 0xaf1dbd09u,
    0x4d5536bau, 0xeb8cb06bu, 0x89c42a1cu, 0x27fba3cdu, 0xc6331d7eu, 0x646a972fu, 0x02a210e0u, 0xa0d98a91u,
    0x3f110442u, 0xdd487df3u, 0x7b7ff7a4u, 0x19b77155u, 0xb7eeeb06u, 0x562664b7u, 0xf45dde68u, 0x92955819u,
};

static const uint32_t bshim_231_tab6[96] = {
    0x5dae442bu, 0xfbe5bddcu, 0x9a1d378du, 0x3854b13eu, 0xd68c2aefu, 0x74c3a4a0u, 0x12fb1e51u, 0xb1329802u,
    0x4f6a11b3u, 0xeda18b64u, 0x8bd90515u, 0x2a107ec6u, 0xc847f877u, 0x667f7228u, 0x04b6ebd9u, 0xa2ee658au,
    0x4125df3bu, 0xdf5d58ecu, 0x7d94d29du, 0x1bcc4c4eu, 0xba03c5ffu, 0x583b3fb0u, 0xf672b961u, 0x94aa3312u,
    0x32e1acc3u, 0xd1192674u, 0x6f50a025u, 0x0d8819d6u, 0xabbf9387u, 0x49f70d38u, 0xe82e86e9u, 0x8666009au,
    0x249d7a4bu, 0xc2d4f3fcu, 0x610c6dadu, 0xff43e75eu, 0x9d7b610fu, 0x3bb2dac0u, 0xd9ea5471u, 0x7821ce22u,
    0x165947d3u, 0xb490c184u, 0x52c83b35u, 0xf0ffb4e6u, 0x8f372e97u, 0x2d6ea848u, 0xcba621f9u, 0x69dd9baau,
    0x0815155bu, 0xa64c8f0cu, 0x448408bdu, 0xe2bb826eu, 0x80f2fc1fu, 0x1f2a75d0u, 0xbd61ef81u, 0x5b996932u,
    0xf9d0e2e3u, 0x98085c94u, 0x363fd645u, 0xd4774ff6u, 0x72aec9a7u, 0x10e64358u, 0xaf1dbd09u, 0x4d5536bau,
    0xeb8cb06bu, 0x89c42a1cu, 0x27fba3cdu, 0xc6331d7eu, 0x646a972fu, 0x02a210e0u, 0xa0d98a91u, 0x3f110442u,
    0xdd487df3u, 0x7b7ff7a4u, 0x19b77155u, 0xb7eeeb06u, 0x562664b7u, 0xf45dde68u, 0x92955819u, 0x30ccd1cau,
    0xcf044b7bu, 0x6d3bc52cu, 0x0b733eddu, 0xa9aab88eu, 0x47e2323fu, 0xe619abf0u, 0x845125a1u, 0x22889f52u,
    0xc0c01903u, 0x5ef792b4u, 0xfd2f0c65u, 0x9b668616u, 0x399dffc7u, 0xd7d57978u, 0x760cf329u, 0x14446cdau,
};

static const uint32_t bshim_231_tab7[96] = {
    0xdf5d58ecu, 0x7d94d29du, 0x1bcc4c4eu, 0xba03c5ffu, 0x583b3fb0u, 0xf672b961u, 0x94aa3312u, 0x32e1acc3u,
    0xd1192674u, 0x6f50a025u, 0x0d8819d6u, 0xabbf9387u, 0x49f70d38u, 0xe82e86e9u, 0x8666009au, 0x249d7a4bu,
    0xc2d4f3fcu, 0x610c6dadu, 0xff43e75eu, 0x9d7b610fu, 0x3bb2dac0u, 0xd9ea5471u, 0x7821ce22u, 0x165947d3u,
    0xb490c184u, 0x52c83b35u, 0xf0ffb4e6u, 0x8f372e97u, 0x2d6ea848u, 0xcba621f9u, 0x69dd9baau, 0x0815155bu,
    0xa64c8f0cu, 0x448408bdu, 0xe2bb826eu, 0x80f2fc1fu, 0x1f2a75d0u, 0xbd61ef81u, 0x5b996932u, 0xf9d0e2e3u,
    0x98085c94u, 0x363fd645u, 0xd4774ff6u, 0x72aec9a7u, 0x10e64358u, 0xaf1dbd09u, 0x4d5536bau, 0xeb8cb06bu,
    0x89c42a1cu, 0x27fba3cdu, 0xc6331d7eu, 0x646a972fu, 0x02a210e0u, 0xa0d98a91u, 0x3f110442u, 0xdd487df3u,
    0x7b7ff7a4u, 0x19b77155u, 0xb7eeeb06u, 0x562664b7u, 0xf45dde68u, 0x92955819u, 0x30ccd1cau, 0xcf044b7bu,
    0x6d3bc52cu, 0x0b733eddu, 0xa9aab88eu, 0x47e2323fu, 0xe619abf0u, 0x845125a1u, 0x22889f52u, 0xc0c01903u,
    0x5ef792b4u, 0xfd2f0c65u, 0x9b668616u, 0x399dffc7u, 0xd7d57978u, 0x760cf329u, 0x14446cdau, 0xb27be68bu,
    0x50b3603cu, 0xeeead9edu, 0x8d22539eu, 0x2b59cd4fu, 0xc9914700u, 0x67c8c0b1u, 0x06003a62u, 0xa437b413u,
    0x426f2dc4u, 0xe0a6a775u, 0x7ede2126u, 0x1d159ad7u, 0xbb4d1488u, 0x59848e39u, 0xf7bc07eau, 0x95f3819bu,
};

struct bshim_231_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_231_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_231_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_231_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_231_reset(struct bshim_231_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001be9a9u;
    return 0;
}

