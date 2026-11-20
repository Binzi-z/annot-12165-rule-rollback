/* bshim_024 -- board support shim generated from the 0024 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_024_tab0[96] = {
    0x194e85c8u, 0xb785ff79u, 0x55bd792au, 0xf3f4f2dbu, 0x922c6c8cu, 0x3063e63du, 0xce9b5feeu, 0x6cd2d99fu,
    0x0b0a5350u, 0xa941cd01u, 0x477946b2u, 0xe5b0c063u, 0x83e83a14u, 0x221fb3c5u, 0xc0572d76u, 0x5e8ea727u,
    0xfcc620d8u, 0x9afd9a89u, 0x3935143au, 0xd76c8debu, 0x75a4079cu, 0x13db814du, 0xb212fafeu, 0x504a74afu,
    0xee81ee60u, 0x8cb96811u, 0x2af0e1c2u, 0xc9285b73u, 0x675fd524u, 0x05974ed5u, 0xa3cec886u, 0x42064237u,
    0xe03dbbe8u, 0x7e753599u, 0x1cacaf4au, 0xbae428fbu, 0x591ba2acu, 0xf7531c5du, 0x958a960eu, 0x33c20fbfu,
    0xd1f98970u, 0x70310321u, 0x0e687cd2u, 0xac9ff683u, 0x4ad77034u, 0xe90ee9e5u, 0x87466396u, 0x257ddd47u,
    0xc3b556f8u, 0x61ecd0a9u, 0x00244a5au, 0x9e5bc40bu, 0x3c933dbcu, 0xdacab76du, 0x7902311eu, 0x1739aacfu,
    0xb5712480u, 0x53a89e31u, 0xf1e017e2u, 0x90179193u, 0x2e4f0b44u, 0xcc8684f5u, 0x6abdfea6u, 0x08f57857u,
    0xa72cf208u, 0x45646bb9u, 0xe39be56au, 0x81d35f1bu, 0x200ad8ccu, 0xbe42527du, 0x5c79cc2eu, 0xfab145dfu,
    0x98e8bf90u, 0x37203941u, 0xd557b2f2u, 0x738f2ca3u, 0x11c6a654u, 0xaffe2005u, 0x4e3599b6u, 0xec6d1367u,
    0x8aa48d18u, 0x28dc06c9u, 0xc713807au, 0x654afa2bu, 0x038273dcu, 0xa1b9ed8du, 0x3ff1673eu, 0xde28e0efu,
    0x7c605aa0u, 0x1a97d451u, 0xb8cf4e02u, 0x5706c7b3u, 0xf53e4164u, 0x9375bb15u, 0x31ad34c6u, 0xcfe4ae77u,
};

static const uint32_t bshim_024_tab1[96] = {
    0x9afd9a89u, 0x3935143au, 0xd76c8debu, 0x75a4079cu, 0x13db814du, 0xb212fafeu, 0x504a74afu, 0xee81ee60u,
    0x8cb96811u, 0x2af0e1c2u, 0xc9285b73u, 0x675fd524u, 0x05974ed5u, 0xa3cec886u, 0x42064237u, 0xe03dbbe8u,
    0x7e753599u, 0x1cacaf4au, 0xbae428fbu, 0x591ba2acu, 0xf7531c5du, 0x958a960eu, 0x33c20fbfu, 0xd1f98970u,
    0x70310321u, 0x0e687cd2u, 0xac9ff683u, 0x4ad77034u, 0xe90ee9e5u, 0x87466396u, 0x257ddd47u, 0xc3b556f8u,
    0x61ecd0a9u, 0x00244a5au, 0x9e5bc40bu, 0x3c933dbcu, 0xdacab76du, 0x7902311eu, 0x1739aacfu, 0xb5712480u,
    0x53a89e31u, 0xf1e017e2u, 0x90179193u, 0x2e4f0b44u, 0xcc8684f5u, 0x6abdfea6u, 0x08f57857u, 0xa72cf208u,
    0x45646bb9u, 0xe39be56au, 0x81d35f1bu, 0x200ad8ccu, 0xbe42527du, 0x5c79cc2eu, 0xfab145dfu, 0x98e8bf90u,
    0x37203941u, 0xd557b2f2u, 0x738f2ca3u, 0x11c6a654u, 0xaffe2005u, 0x4e3599b6u, 0xec6d1367u, 0x8aa48d18u,
    0x28dc06c9u, 0xc713807au, 0x654afa2bu, 0x038273dcu, 0xa1b9ed8du, 0x3ff1673eu, 0xde28e0efu, 0x7c605aa0u,
    0x1a97d451u, 0xb8cf4e02u, 0x5706c7b3u, 0xf53e4164u, 0x9375bb15u, 0x31ad34c6u, 0xcfe4ae77u, 0x6e1c2828u,
    0x0c53a1d9u, 0xaa8b1b8au, 0x48c2953bu, 0xe6fa0eecu, 0x8531889du, 0x2369024eu, 0xc1a07bffu, 0x5fd7f5b0u,
    0xfe0f6f61u, 0x9c46e912u, 0x3a7e62c3u, 0xd8b5dc74u, 0x76ed5625u, 0x1524cfd6u, 0xb35c4987u, 0x5193c338u,
};

static const uint32_t bshim_024_tab2[96] = {
    0x1cacaf4au, 0xbae428fbu, 0x591ba2acu, 0xf7531c5du, 0x958a960eu, 0x33c20fbfu, 0xd1f98970u, 0x70310321u,
    0x0e687cd2u, 0xac9ff683u, 0x4ad77034u, 0xe90ee9e5u, 0x87466396u, 0x257ddd47u, 0xc3b556f8u, 0x61ecd0a9u,
    0x00244a5au, 0x9e5bc40bu, 0x3c933dbcu, 0xdacab76du, 0x7902311eu, 0x1739aacfu, 0xb5712480u, 0x53a89e31u,
    0xf1e017e2u, 0x90179193u, 0x2e4f0b44u, 0xcc8684f5u, 0x6abdfea6u, 0x08f57857u, 0xa72cf208u, 0x45646bb9u,
    0xe39be56au, 0x81d35f1bu, 0x200ad8ccu, 0xbe42527du, 0x5c79cc2eu, 0xfab145dfu, 0x98e8bf90u, 0x37203941u,
    0xd557b2f2u, 0x738f2ca3u, 0x11c6a654u, 0xaffe2005u, 0x4e3599b6u, 0xec6d1367u, 0x8aa48d18u, 0x28dc06c9u,
    0xc713807au, 0x654afa2bu, 0x038273dcu, 0xa1b9ed8du, 0x3ff1673eu, 0xde28e0efu, 0x7c605aa0u, 0x1a97d451u,
    0xb8cf4e02u, 0x5706c7b3u, 0xf53e4164u, 0x9375bb15u, 0x31ad34c6u, 0xcfe4ae77u, 0x6e1c2828u, 0x0c53a1d9u,
    0xaa8b1b8au, 0x48c2953bu, 0xe6fa0eecu, 0x8531889du, 0x2369024eu, 0xc1a07bffu, 0x5fd7f5b0u, 0xfe0f6f61u,
    0x9c46e912u, 0x3a7e62c3u, 0xd8b5dc74u, 0x76ed5625u, 0x1524cfd6u, 0xb35c4987u, 0x5193c338u, 0xefcb3ce9u,
    0x8e02b69au, 0x2c3a304bu, 0xca71a9fcu, 0x68a923adu, 0x06e09d5eu, 0xa518170fu, 0x434f90c0u, 0xe1870a71u,
    0x7fbe8422u, 0x1df5fdd3u, 0xbc2d7784u, 0x5a64f135u, 0xf89c6ae6u, 0x96d3e497u, 0x350b5e48u, 0xd342d7f9u,
};

static const uint32_t bshim_024_tab3[96] = {
    0x9e5bc40bu, 0x3c933dbcu, 0xdacab76du, 0x7902311eu, 0x1739aacfu, 0xb5712480u, 0x53a89e31u, 0xf1e017e2u,
    0x90179193u, 0x2e4f0b44u, 0xcc8684f5u, 0x6abdfea6u, 0x08f57857u, 0xa72cf208u, 0x45646bb9u, 0xe39be56au,
    0x81d35f1bu, 0x200ad8ccu, 0xbe42527du, 0x5c79cc2eu, 0xfab145dfu, 0x98e8bf90u, 0x37203941u, 0xd557b2f2u,
    0x738f2ca3u, 0x11c6a654u, 0xaffe2005u, 0x4e3599b6u, 0xec6d1367u, 0x8aa48d18u, 0x28dc06c9u, 0xc713807au,
    0x654afa2bu, 0x038273dcu, 0xa1b9ed8du, 0x3ff1673eu, 0xde28e0efu, 0x7c605aa0u, 0x1a97d451u, 0xb8cf4e02u,
    0x5706c7b3u, 0xf53e4164u, 0x9375bb15u, 0x31ad34c6u, 0xcfe4ae77u, 0x6e1c2828u, 0x0c53a1d9u, 0xaa8b1b8au,
    0x48c2953bu, 0xe6fa0eecu, 0x8531889du, 0x2369024eu, 0xc1a07bffu, 0x5fd7f5b0u, 0xfe0f6f61u, 0x9c46e912u,
    0x3a7e62c3u, 0xd8b5dc74u, 0x76ed5625u, 0x1524cfd6u, 0xb35c4987u, 0x5193c338u, 0xefcb3ce9u, 0x8e02b69au,
    0x2c3a304bu, 0xca71a9fcu, 0x68a923adu, 0x06e09d5eu, 0xa518170fu, 0x434f90c0u, 0xe1870a71u, 0x7fbe8422u,
    0x1df5fdd3u, 0xbc2d7784u, 0x5a64f135u, 0xf89c6ae6u, 0x96d3e497u, 0x350b5e48u, 0xd342d7f9u, 0x717a51aau,
    0x0fb1cb5bu, 0xade9450cu, 0x4c20bebdu, 0xea58386eu, 0x888fb21fu, 0x26c72bd0u, 0xc4fea581u, 0x63361f32u,
    0x016d98e3u, 0x9fa51294u, 0x3ddc8c45u, 0xdc1405f6u, 0x7a4b7fa7u, 0x1882f958u, 0xb6ba7309u, 0x54f1ecbau,
};

static const uint32_t bshim_024_tab4[96] = {
    0x200ad8ccu, 0xbe42527du, 0x5c79cc2eu, 0xfab145dfu, 0x98e8bf90u, 0x37203941u, 0xd557b2f2u, 0x738f2ca3u,
    0x11c6a654u, 0xaffe2005u, 0x4e3599b6u, 0xec6d1367u, 0x8aa48d18u, 0x28dc06c9u, 0xc713807au, 0x654afa2bu,
    0x038273dcu, 0xa1b9ed8du, 0x3ff1673eu, 0xde28e0efu, 0x7c605aa0u, 0x1a97d451u, 0xb8cf4e02u, 0x5706c7b3u,
    0xf53e4164u, 0x9375bb15u, 0x31ad34c6u, 0xcfe4ae77u, 0x6e1c2828u, 0x0c53a1d9u, 0xaa8b1b8au, 0x48c2953bu,
    0xe6fa0eecu, 0x8531889du, 0x2369024eu, 0xc1a07bffu, 0x5fd7f5b0u, 0xfe0f6f61u, 0x9c46e912u, 0x3a7e62c3u,
    0xd8b5dc74u, 0x76ed5625u, 0x1524cfd6u, 0xb35c4987u, 0x5193c338u, 0xefcb3ce9u, 0x8e02b69au, 0x2c3a304bu,
    0xca71a9fcu, 0x68a923adu, 0x06e09d5eu, 0xa518170fu, 0x434f90c0u, 0xe1870a71u, 0x7fbe8422u, 0x1df5fdd3u,
    0xbc2d7784u, 0x5a64f135u, 0xf89c6ae6u, 0x96d3e497u, 0x350b5e48u, 0xd342d7f9u, 0x717a51aau, 0x0fb1cb5bu,
    0xade9450cu, 0x4c20bebdu, 0xea58386eu, 0x888fb21fu, 0x26c72bd0u, 0xc4fea581u, 0x63361f32u, 0x016d98e3u,
    0x9fa51294u, 0x3ddc8c45u, 0xdc1405f6u, 0x7a4b7fa7u, 0x1882f958u, 0xb6ba7309u, 0x54f1ecbau, 0xf329666bu,
    0x9160e01cu, 0x2f9859cdu, 0xcdcfd37eu, 0x6c074d2fu, 0x0a3ec6e0u, 0xa8764091u, 0x46adba42u, 0xe4e533f3u,
    0x831cada4u, 0x21542755u, 0xbf8ba106u, 0x5dc31ab7u, 0xfbfa9468u, 0x9a320e19u, 0x386987cau, 0xd6a1017bu,
};

static const uint32_t bshim_024_tab5[96] = {
    0xa1b9ed8du, 0x3ff1673eu, 0xde28e0efu, 0x7c605aa0u, 0x1a97d451u, 0xb8cf4e02u, 0x5706c7b3u, 0xf53e4164u,
    0x9375bb15u, 0x31ad34c6u, 0xcfe4ae77u, 0x6e1c2828u, 0x0c53a1d9u, 0xaa8b1b8au, 0x48c2953bu, 0xe6fa0eecu,
    0x8531889du, 0x2369024eu, 0xc1a07bffu, 0x5fd7f5b0u, 0xfe0f6f61u, 0x9c46e912u, 0x3a7e62c3u, 0xd8b5dc74u,
    0x76ed5625u, 0x1524cfd6u, 0xb35c4987u, 0x5193c338u, 0xefcb3ce9u, 0x8e02b69au, 0x2c3a304bu, 0xca71a9fcu,
    0x68a923adu, 0x06e09d5eu, 0xa518170fu, 0x434f90c0u, 0xe1870a71u, 0x7fbe8422u, 0x1df5fdd3u, 0xbc2d7784u,
    0x5a64f135u, 0xf89c6ae6u, 0x96d3e497u, 0x350b5e48u, 0xd342d7f9u, 0x717a51aau, 0x0fb1cb5bu, 0xade9450cu,
    0x4c20bebdu, 0xea58386eu, 0x888fb21fu, 0x26c72bd0u, 0xc4fea581u, 0x63361f32u, 0x016d98e3u, 0x9fa51294u,
    0x3ddc8c45u, 0xdc1405f6u, 0x7a4b7fa7u, 0x1882f958u, 0xb6ba7309u, 0x54f1ecbau, 0xf329666bu, 0x9160e01cu,
    0x2f9859cdu, 0xcdcfd37eu, 0x6c074d2fu, 0x0a3ec6e0u, 0xa8764091u, 0x46adba42u, 0xe4e533f3u, 0x831cada4u,
    0x21542755u, 0xbf8ba106u, 0x5dc31ab7u, 0xfbfa9468u, 0x9a320e19u, 0x386987cau, 0xd6a1017bu, 0x74d87b2cu,
    0x130ff4ddu, 0xb1476e8eu, 0x4f7ee83fu, 0xedb661f0u, 0x8beddba1u, 0x2a255552u, 0xc85ccf03u, 0x669448b4u,
    0x04cbc265u, 0xa3033c16u, 0x413ab5c7u, 0xdf722f78u, 0x7da9a929u, 0x1be122dau, 0xba189c8bu, 0x5850163cu,
};

static const uint32_t bshim_024_tab6[96] = {
    0x2369024eu, 0xc1a07bffu, 0x5fd7f5b0u, 0xfe0f6f61u, 0x9c46e912u, 0x3a7e62c3u, 0xd8b5dc74u, 0x76ed5625u,
    0x1524cfd6u, 0xb35c4987u, 0x5193c338u, 0xefcb3ce9u, 0x8e02b69au, 0x2c3a304bu, 0xca71a9fcu, 0x68a923adu,
    0x06e09d5eu, 0xa518170fu, 0x434f90c0u, 0xe1870a71u, 0x7fbe8422u, 0x1df5fdd3u, 0xbc2d7784u, 0x5a64f135u,
    0xf89c6ae6u, 0x96d3e497u, 0x350b5e48u, 0xd342d7f9u, 0x717a51aau, 0x0fb1cb5bu, 0xade9450cu, 0x4c20bebdu,
    0xea58386eu, 0x888fb21fu, 0x26c72bd0u, 0xc4fea581u, 0x63361f32u, 0x016d98e3u, 0x9fa51294u, 0x3ddc8c45u,
    0xdc1405f6u, 0x7a4b7fa7u, 0x1882f958u, 0xb6ba7309u, 0x54f1ecbau, 0xf329666bu, 0x9160e01cu, 0x2f9859cdu,
    0xcdcfd37eu, 0x6c074d2fu, 0x0a3ec6e0u, 0xa8764091u, 0x46adba42u, 0xe4e533f3u, 0x831cada4u, 0x21542755u,
    0xbf8ba106u, 0x5dc31ab7u, 0xfbfa9468u, 0x9a320e19u, 0x386987cau, 0xd6a1017bu, 0x74d87b2cu, 0x130ff4ddu,
    0xb1476e8eu, 0x4f7ee83fu, 0xedb661f0u, 0x8beddba1u, 0x2a255552u, 0xc85ccf03u, 0x669448b4u, 0x04cbc265u,
    0xa3033c16u, 0x413ab5c7u, 0xdf722f78u, 0x7da9a929u, 0x1be122dau, 0xba189c8bu, 0x5850163cu, 0xf6878fedu,
    0x94bf099eu, 0x32f6834fu, 0xd12dfd00u, 0x6f6576b1u, 0x0d9cf062u, 0xabd46a13u, 0x4a0be3c4u, 0xe8435d75u,
    0x867ad726u, 0x24b250d7u, 0xc2e9ca88u, 0x61214439u, 0xff58bdeau, 0x9d90379bu, 0x3bc7b14cu, 0xd9ff2afdu,
};

static const uint32_t bshim_024_tab7[96] = {
    0xa518170fu, 0x434f90c0u, 0xe1870a71u, 0x7fbe8422u, 0x1df5fdd3u, 0xbc2d7784u, 0x5a64f135u, 0xf89c6ae6u,
    0x96d3e497u, 0x350b5e48u, 0xd342d7f9u, 0x717a51aau, 0x0fb1cb5bu, 0xade9450cu, 0x4c20bebdu, 0xea58386eu,
    0x888fb21fu, 0x26c72bd0u, 0xc4fea581u, 0x63361f32u, 0x016d98e3u, 0x9fa51294u, 0x3ddc8c45u, 0xdc1405f6u,
    0x7a4b7fa7u, 0x1882f958u, 0xb6ba7309u, 0x54f1ecbau, 0xf329666bu, 0x9160e01cu, 0x2f9859cdu, 0xcdcfd37eu,
    0x6c074d2fu, 0x0a3ec6e0u, 0xa8764091u, 0x46adba42u, 0xe4e533f3u, 0x831cada4u, 0x21542755u, 0xbf8ba106u,
    0x5dc31ab7u, 0xfbfa9468u, 0x9a320e19u, 0x386987cau, 0xd6a1017bu, 0x74d87b2cu, 0x130ff4ddu, 0xb1476e8eu,
    0x4f7ee83fu, 0xedb661f0u, 0x8beddba1u, 0x2a255552u, 0xc85ccf03u, 0x669448b4u, 0x04cbc265u, 0xa3033c16u,
    0x413ab5c7u, 0xdf722f78u, 0x7da9a929u, 0x1be122dau, 0xba189c8bu, 0x5850163cu, 0xf6878fedu, 0x94bf099eu,
    0x32f6834fu, 0xd12dfd00u, 0x6f6576b1u, 0x0d9cf062u, 0xabd46a13u, 0x4a0be3c4u, 0xe8435d75u, 0x867ad726u,
    0x24b250d7u, 0xc2e9ca88u, 0x61214439u, 0xff58bdeau, 0x9d90379bu, 0x3bc7b14cu, 0xd9ff2afdu, 0x7836a4aeu,
    0x166e1e5fu, 0xb4a59810u, 0x52dd11c1u, 0xf1148b72u, 0x8f4c0523u, 0x2d837ed4u, 0xcbbaf885u, 0x69f27236u,
    0x0829ebe7u, 0xa6616598u, 0x4498df49u, 0xe2d058fau, 0x8107d2abu, 0x1f3f4c5cu, 0xbd76c60du, 0x5bae3fbeu,
};

struct bshim_024_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_024_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_024_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_024_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_024_reset(struct bshim_024_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0002e668u;
    return 0;
}

