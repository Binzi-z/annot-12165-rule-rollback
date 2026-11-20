/* bshim_212 -- board support shim generated from the 0212 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_212_tab0[96] = {
    0x0a359dbcu, 0xa86d176du, 0x46a4911eu, 0xe4dc0acfu, 0x83138480u, 0x214afe31u, 0xbf8277e2u, 0x5db9f193u,
    0xfbf16b44u, 0x9a28e4f5u, 0x38605ea6u, 0xd697d857u, 0x74cf5208u, 0x1306cbb9u, 0xb13e456au, 0x4f75bf1bu,
    0xedad38ccu, 0x8be4b27du, 0x2a1c2c2eu, 0xc853a5dfu, 0x668b1f90u, 0x04c29941u, 0xa2fa12f2u, 0x41318ca3u,
    0xdf690654u, 0x7da08005u, 0x1bd7f9b6u, 0xba0f7367u, 0x5846ed18u, 0xf67e66c9u, 0x94b5e07au, 0x32ed5a2bu,
    0xd124d3dcu, 0x6f5c4d8du, 0x0d93c73eu, 0xabcb40efu, 0x4a02baa0u, 0xe83a3451u, 0x8671ae02u, 0x24a927b3u,
    0xc2e0a164u, 0x61181b15u, 0xff4f94c6u, 0x9d870e77u, 0x3bbe8828u, 0xd9f601d9u, 0x782d7b8au, 0x1664f53bu,
    0xb49c6eecu, 0x52d3e89du, 0xf10b624eu, 0x8f42dbffu, 0x2d7a55b0u, 0xcbb1cf61u, 0x69e94912u, 0x0820c2c3u,
    0xa6583c74u, 0x448fb625u, 0xe2c72fd6u, 0x80fea987u, 0x1f362338u, 0xbd6d9ce9u, 0x5ba5169au, 0xf9dc904bu,
    0x981409fcu, 0x364b83adu, 0xd482fd5eu, 0x72ba770fu, 0x10f1f0c0u, 0xaf296a71u, 0x4d60e422u, 0xeb985dd3u,
    0x89cfd784u, 0x28075135u, 0xc63ecae6u, 0x64764497u, 0x02adbe48u, 0xa0e537f9u, 0x3f1cb1aau, 0xdd542b5bu,
    0x7b8ba50cu, 0x19c31ebdu, 0xb7fa986eu, 0x5632121fu, 0xf4698bd0u, 0x92a10581u, 0x30d87f32u, 0xcf0ff8e3u,
    0x6d477294u, 0x0b7eec45u, 0xa9b665f6u, 0x47eddfa7u, 0xe6255958u, 0x845cd309u, 0x22944cbau, 0xc0cbc66bu,
};

static const uint32_t bshim_212_tab1[96] = {
    0x8be4b27du, 0x2a1c2c2eu, 0xc853a5dfu, 0x668b1f90u, 0x04c29941u, 0xa2fa12f2u, 0x41318ca3u, 0xdf690654u,
    0x7da08005u, 0x1bd7f9b6u, 0xba0f7367u, 0x5846ed18u, 0xf67e66c9u, 0x94b5e07au, 0x32ed5a2bu, 0xd124d3dcu,
    0x6f5c4d8du, 0x0d93c73eu, 0xabcb40efu, 0x4a02baa0u, 0xe83a3451u, 0x8671ae02u, 0x24a927b3u, 0xc2e0a164u,
    0x61181b15u, 0xff4f94c6u, 0x9d870e77u, 0x3bbe8828u, 0xd9f601d9u, 0x782d7b8au, 0x1664f53bu, 0xb49c6eecu,
    0x52d3e89du, 0xf10b624eu, 0x8f42dbffu, 0x2d7a55b0u, 0xcbb1cf61u, 0x69e94912u, 0x0820c2c3u, 0xa6583c74u,
    0x448fb625u, 0xe2c72fd6u, 0x80fea987u, 0x1f362338u, 0xbd6d9ce9u, 0x5ba5169au, 0xf9dc904bu, 0x981409fcu,
    0x364b83adu, 0xd482fd5eu, 0x72ba770fu, 0x10f1f0c0u, 0xaf296a71u, 0x4d60e422u, 0xeb985dd3u, 0x89cfd784u,
    0x28075135u, 0xc63ecae6u, 0x64764497u, 0x02adbe48u, 0xa0e537f9u, 0x3f1cb1aau, 0xdd542b5bu, 0x7b8ba50cu,
    0x19c31ebdu, 0xb7fa986eu, 0x5632121fu, 0xf4698bd0u, 0x92a10581u, 0x30d87f32u, 0xcf0ff8e3u, 0x6d477294u,
    0x0b7eec45u, 0xa9b665f6u, 0x47eddfa7u, 0xe6255958u, 0x845cd309u, 0x22944cbau, 0xc0cbc66bu, 0x5f03401cu,
    0xfd3ab9cdu, 0x9b72337eu, 0x39a9ad2fu, 0xd7e126e0u, 0x7618a091u, 0x14501a42u, 0xb28793f3u, 0x50bf0da4u,
    0xeef68755u, 0x8d2e0106u, 0x2b657ab7u, 0xc99cf468u, 0x67d46e19u, 0x060be7cau, 0xa443617bu, 0x427adb2cu,
};

static const uint32_t bshim_212_tab2[96] = {
    0x0d93c73eu, 0xabcb40efu, 0x4a02baa0u, 0xe83a3451u, 0x8671ae02u, 0x24a927b3u, 0xc2e0a164u, 0x61181b15u,
    0xff4f94c6u, 0x9d870e77u, 0x3bbe8828u, 0xd9f601d9u, 0x782d7b8au, 0x1664f53bu, 0xb49c6eecu, 0x52d3e89du,
    0xf10b624eu, 0x8f42dbffu, 0x2d7a55b0u, 0xcbb1cf61u, 0x69e94912u, 0x0820c2c3u, 0xa6583c74u, 0x448fb625u,
    0xe2c72fd6u, 0x80fea987u, 0x1f362338u, 0xbd6d9ce9u, 0x5ba5169au, 0xf9dc904bu, 0x981409fcu, 0x364b83adu,
    0xd482fd5eu, 0x72ba770fu, 0x10f1f0c0u, 0xaf296a71u, 0x4d60e422u, 0xeb985dd3u, 0x89cfd784u, 0x28075135u,
    0xc63ecae6u, 0x64764497u, 0x02adbe48u, 0xa0e537f9u, 0x3f1cb1aau, 0xdd542b5bu, 0x7b8ba50cu, 0x19c31ebdu,
    0xb7fa986eu, 0x5632121fu, 0xf4698bd0u, 0x92a10581u, 0x30d87f32u, 0xcf0ff8e3u, 0x6d477294u, 0x0b7eec45u,
    0xa9b665f6u, 0x47eddfa7u, 0xe6255958u, 0x845cd309u, 0x22944cbau, 0xc0cbc66bu, 0x5f03401cu, 0xfd3ab9cdu,
    0x9b72337eu, 0x39a9ad2fu, 0xd7e126e0u, 0x7618a091u, 0x14501a42u, 0xb28793f3u, 0x50bf0da4u, 0xeef68755u,
    0x8d2e0106u, 0x2b657ab7u, 0xc99cf468u, 0x67d46e19u, 0x060be7cau, 0xa443617bu, 0x427adb2cu, 0xe0b254ddu,
    0x7ee9ce8eu, 0x1d21483fu, 0xbb58c1f0u, 0x59903ba1u, 0xf7c7b552u, 0x95ff2f03u, 0x3436a8b4u, 0xd26e2265u,
    0x70a59c16u, 0x0edd15c7u, 0xad148f78u, 0x4b4c0929u, 0xe98382dau, 0x87bafc8bu, 0x25f2763cu, 0xc429efedu,
};

static const uint32_t bshim_212_tab3[96] = {
    0x8f42dbffu, 0x2d7a55b0u, 0xcbb1cf61u, 0x69e94912u, 0x0820c2c3u, 0xa6583c74u, 0x448fb625u, 0xe2c72fd6u,
    0x80fea987u, 0x1f362338u, 0xbd6d9ce9u, 0x5ba5169au, 0xf9dc904bu, 0x981409fcu, 0x364b83adu, 0xd482fd5eu,
    0x72ba770fu, 0x10f1f0c0u, 0xaf296a71u, 0x4d60e422u, 0xeb985dd3u, 0x89cfd784u, 0x28075135u, 0xc63ecae6u,
    0x64764497u, 0x02adbe48u, 0xa0e537f9u, 0x3f1cb1aau, 0xdd542b5bu, 0x7b8ba50cu, 0x19c31ebdu, 0xb7fa986eu,
    0x5632121fu, 0xf4698bd0u, 0x92a10581u, 0x30d87f32u, 0xcf0ff8e3u, 0x6d477294u, 0x0b7eec45u, 0xa9b665f6u,
    0x47eddfa7u, 0xe6255958u, 0x845cd309u, 0x22944cbau, 0xc0cbc66bu, 0x5f03401cu, 0xfd3ab9cdu, 0x9b72337eu,
    0x39a9ad2fu, 0xd7e126e0u, 0x7618a091u, 0x14501a42u, 0xb28793f3u, 0x50bf0da4u, 0xeef68755u, 0x8d2e0106u,
    0x2b657ab7u, 0xc99cf468u, 0x67d46e19u, 0x060be7cau, 0xa443617bu, 0x427adb2cu, 0xe0b254ddu, 0x7ee9ce8eu,
    0x1d21483fu, 0xbb58c1f0u, 0x59903ba1u, 0xf7c7b552u, 0x95ff2f03u, 0x3436a8b4u, 0xd26e2265u, 0x70a59c16u,
    0x0edd15c7u, 0xad148f78u, 0x4b4c0929u, 0xe98382dau, 0x87bafc8bu, 0x25f2763cu, 0xc429efedu, 0x6261699eu,
    0x0098e34fu, 0x9ed05d00u, 0x3d07d6b1u, 0xdb3f5062u, 0x7976ca13u, 0x17ae43c4u, 0xb5e5bd75u, 0x541d3726u,
    0xf254b0d7u, 0x908c2a88u, 0x2ec3a439u, 0xccfb1deau, 0x6b32979bu, 0x096a114cu, 0xa7a18afdu, 0x45d904aeu,
};

static const uint32_t bshim_212_tab4[96] = {
    0x10f1f0c0u, 0xaf296a71u, 0x4d60e422u, 0xeb985dd3u, 0x89cfd784u, 0x28075135u, 0xc63ecae6u, 0x64764497u,
    0x02adbe48u, 0xa0e537f9u, 0x3f1cb1aau, 0xdd542b5bu, 0x7b8ba50cu, 0x19c31ebdu, 0xb7fa986eu, 0x5632121fu,
    0xf4698bd0u, 0x92a10581u, 0x30d87f32u, 0xcf0ff8e3u, 0x6d477294u, 0x0b7eec45u, 0xa9b665f6u, 0x47eddfa7u,
    0xe6255958u, 0x845cd309u, 0x22944cbau, 0xc0cbc66bu, 0x5f03401cu, 0xfd3ab9cdu, 0x9b72337eu, 0x39a9ad2fu,
    0xd7e126e0u, 0x7618a091u, 0x14501a42u, 0xb28793f3u, 0x50bf0da4u, 0xeef68755u, 0x8d2e0106u, 0x2b657ab7u,
    0xc99cf468u, 0x67d46e19u, 0x060be7cau, 0xa443617bu, 0x427adb2cu, 0xe0b254ddu, 0x7ee9ce8eu, 0x1d21483fu,
    0xbb58c1f0u, 0x59903ba1u, 0xf7c7b552u, 0x95ff2f03u, 0x3436a8b4u, 0xd26e2265u, 0x70a59c16u, 0x0edd15c7u,
    0xad148f78u, 0x4b4c0929u, 0xe98382dau, 0x87bafc8bu, 0x25f2763cu, 0xc429efedu, 0x6261699eu, 0x0098e34fu,
    0x9ed05d00u, 0x3d07d6b1u, 0xdb3f5062u, 0x7976ca13u, 0x17ae43c4u, 0xb5e5bd75u, 0x541d3726u, 0xf254b0d7u,
    0x908c2a88u, 0x2ec3a439u, 0xccfb1deau, 0x6b32979bu, 0x096a114cu, 0xa7a18afdu, 0x45d904aeu, 0xe4107e5fu,
    0x8247f810u, 0x207f71c1u, 0xbeb6eb72u, 0x5cee6523u, 0xfb25ded4u, 0x995d5885u, 0x3794d236u, 0xd5cc4be7u,
    0x7403c598u, 0x123b3f49u, 0xb072b8fau, 0x4eaa32abu, 0xece1ac5cu, 0x8b19260du, 0x29509fbeu, 0xc788196fu,
};

static const uint32_t bshim_212_tab5[96] = {
    0x92a10581u, 0x30d87f32u, 0xcf0ff8e3u, 0x6d477294u, 0x0b7eec45u, 0xa9b665f6u, 0x47eddfa7u, 0xe6255958u,
    0x845cd309u, 0x22944cbau, 0xc0cbc66bu, 0x5f03401cu, 0xfd3ab9cdu, 0x9b72337eu, 0x39a9ad2fu, 0xd7e126e0u,
    0x7618a091u, 0x14501a42u, 0xb28793f3u, 0x50bf0da4u, 0xeef68755u, 0x8d2e0106u, 0x2b657ab7u, 0xc99cf468u,
    0x67d46e19u, 0x060be7cau, 0xa443617bu, 0x427adb2cu, 0xe0b254ddu, 0x7ee9ce8eu, 0x1d21483fu, 0xbb58c1f0u,
    0x59903ba1u, 0xf7c7b552u, 0x95ff2f03u, 0x3436a8b4u, 0xd26e2265u, 0x70a59c16u, 0x0edd15c7u, 0xad148f78u,
    0x4b4c0929u, 0xe98382dau, 0x87bafc8bu, 0x25f2763cu, 0xc429efedu, 0x6261699eu, 0x0098e34fu, 0x9ed05d00u,
    0x3d07d6b1u, 0xdb3f5062u, 0x7976ca13u, 0x17ae43c4u, 0xb5e5bd75u, 0x541d3726u, 0xf254b0d7u, 0x908c2a88u,
    0x2ec3a439u, 0xccfb1deau, 0x6b32979bu, 0x096a114cu, 0xa7a18afdu, 0x45d904aeu, 0xe4107e5fu, 0x8247f810u,
    0x207f71c1u, 0xbeb6eb72u, 0x5cee6523u, 0xfb25ded4u, 0x995d5885u, 0x3794d236u, 0xd5cc4be7u, 0x7403c598u,
    0x123b3f49u, 0xb072b8fau, 0x4eaa32abu, 0xece1ac5cu, 0x8b19260du, 0x29509fbeu, 0xc788196fu, 0x65bf9320u,
    0x03f70cd1u, 0xa22e8682u, 0x40660033u, 0xde9d79e4u, 0x7cd4f395u, 0x1b0c6d46u, 0xb943e6f7u, 0x577b60a8u,
    0xf5b2da59u, 0x93ea540au, 0x3221cdbbu, 0xd059476cu, 0x6e90c11du, 0x0cc83aceu, 0xaaffb47fu, 0x49372e30u,
};

static const uint32_t bshim_212_tab6[96] = {
    0x14501a42u, 0xb28793f3u, 0x50bf0da4u, 0xeef68755u, 0x8d2e0106u, 0x2b657ab7u, 0xc99cf468u, 0x67d46e19u,
    0x060be7cau, 0xa443617bu, 0x427adb2cu, 0xe0b254ddu, 0x7ee9ce8eu, 0x1d21483fu, 0xbb58c1f0u, 0x59903ba1u,
    0xf7c7b552u, 0x95ff2f03u, 0x3436a8b4u, 0xd26e2265u, 0x70a59c16u, 0x0edd15c7u, 0xad148f78u, 0x4b4c0929u,
    0xe98382dau, 0x87bafc8bu, 0x25f2763cu, 0xc429efedu, 0x6261699eu, 0x0098e34fu, 0x9ed05d00u, 0x3d07d6b1u,
    0xdb3f5062u, 0x7976ca13u, 0x17ae43c4u, 0xb5e5bd75u, 0x541d3726u, 0xf254b0d7u, 0x908c2a88u, 0x2ec3a439u,
    0xccfb1deau, 0x6b32979bu, 0x096a114cu, 0xa7a18afdu, 0x45d904aeu, 0xe4107e5fu, 0x8247f810u, 0x207f71c1u,
    0xbeb6eb72u, 0x5cee6523u, 0xfb25ded4u, 0x995d5885u, 0x3794d236u, 0xd5cc4be7u, 0x7403c598u, 0x123b3f49u,
    0xb072b8fau, 0x4eaa32abu, 0xece1ac5cu, 0x8b19260du, 0x29509fbeu, 0xc788196fu, 0x65bf9320u, 0x03f70cd1u,
    0xa22e8682u, 0x40660033u, 0xde9d79e4u, 0x7cd4f395u, 0x1b0c6d46u, 0xb943e6f7u, 0x577b60a8u, 0xf5b2da59u,
    0x93ea540au, 0x3221cdbbu, 0xd059476cu, 0x6e90c11du, 0x0cc83aceu, 0xaaffb47fu, 0x49372e30u, 0xe76ea7e1u,
    0x85a62192u, 0x23dd9b43u, 0xc21514f4u, 0x604c8ea5u, 0xfe840856u, 0x9cbb8207u, 0x3af2fbb8u, 0xd92a7569u,
    0x7761ef1au, 0x159968cbu, 0xb3d0e27cu, 0x52085c2du, 0xf03fd5deu, 0x8e774f8fu, 0x2caec940u, 0xcae642f1u,
};

static const uint32_t bshim_212_tab7[96] = {
    0x95ff2f03u, 0x3436a8b4u, 0xd26e2265u, 0x70a59c16u, 0x0edd15c7u, 0xad148f78u, 0x4b4c0929u, 0xe98382dau,
    0x87bafc8bu, 0x25f2763cu, 0xc429efedu, 0x6261699eu, 0x0098e34fu, 0x9ed05d00u, 0x3d07d6b1u, 0xdb3f5062u,
    0x7976ca13u, 0x17ae43c4u, 0xb5e5bd75u, 0x541d3726u, 0xf254b0d7u, 0x908c2a88u, 0x2ec3a439u, 0xccfb1deau,
    0x6b32979bu, 0x096a114cu, 0xa7a18afdu, 0x45d904aeu, 0xe4107e5fu, 0x8247f810u, 0x207f71c1u, 0xbeb6eb72u,
    0x5cee6523u, 0xfb25ded4u, 0x995d5885u, 0x3794d236u, 0xd5cc4be7u, 0x7403c598u, 0x123b3f49u, 0xb072b8fau,
    0x4eaa32abu, 0xece1ac5cu, 0x8b19260du, 0x29509fbeu, 0xc788196fu, 0x65bf9320u, 0x03f70cd1u, 0xa22e8682u,
    0x40660033u, 0xde9d79e4u, 0x7cd4f395u, 0x1b0c6d46u, 0xb943e6f7u, 0x577b60a8u, 0xf5b2da59u, 0x93ea540au,
    0x3221cdbbu, 0xd059476cu, 0x6e90c11du, 0x0cc83aceu, 0xaaffb47fu, 0x49372e30u, 0xe76ea7e1u, 0x85a62192u,
    0x23dd9b43u, 0xc21514f4u, 0x604c8ea5u, 0xfe840856u, 0x9cbb8207u, 0x3af2fbb8u, 0xd92a7569u, 0x7761ef1au,
    0x159968cbu, 0xb3d0e27cu, 0x52085c2du, 0xf03fd5deu, 0x8e774f8fu, 0x2caec940u, 0xcae642f1u, 0x691dbca2u,
    0x07553653u, 0xa58cb004u, 0x43c429b5u, 0xe1fba366u, 0x80331d17u, 0x1e6a96c8u, 0xbca21079u, 0x5ad98a2au,
    0xf91103dbu, 0x97487d8cu, 0x357ff73du, 0xd3b770eeu, 0x71eeea9fu, 0x10266450u, 0xae5dde01u, 0x4c9557b2u,
};

struct bshim_212_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_212_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_212_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_212_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_212_reset(struct bshim_212_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00199decu;
    return 0;
}

