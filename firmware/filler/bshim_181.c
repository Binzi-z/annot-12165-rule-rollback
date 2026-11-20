/* bshim_181 -- board support shim generated from the 0181 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_181_tab0[96] = {
    0x343030efu, 0xd267aaa0u, 0x709f2451u, 0x0ed69e02u, 0xad0e17b3u, 0x4b459164u, 0xe97d0b15u, 0x87b484c6u,
    0x25ebfe77u, 0xc4237828u, 0x625af1d9u, 0x00926b8au, 0x9ec9e53bu, 0x3d015eecu, 0xdb38d89du, 0x7970524eu,
    0x17a7cbffu, 0xb5df45b0u, 0x5416bf61u, 0xf24e3912u, 0x9085b2c3u, 0x2ebd2c74u, 0xccf4a625u, 0x6b2c1fd6u,
    0x09639987u, 0xa79b1338u, 0x45d28ce9u, 0xe40a069au, 0x8241804bu, 0x2078f9fcu, 0xbeb073adu, 0x5ce7ed5eu,
    0xfb1f670fu, 0x9956e0c0u, 0x378e5a71u, 0xd5c5d422u, 0x73fd4dd3u, 0x1234c784u, 0xb06c4135u, 0x4ea3bae6u,
    0xecdb3497u, 0x8b12ae48u, 0x294a27f9u, 0xc781a1aau, 0x65b91b5bu, 0x03f0950cu, 0xa2280ebdu, 0x405f886eu,
    0xde97021fu, 0x7cce7bd0u, 0x1b05f581u, 0xb93d6f32u, 0x5774e8e3u, 0xf5ac6294u, 0x93e3dc45u, 0x321b55f6u,
    0xd052cfa7u, 0x6e8a4958u, 0x0cc1c309u, 0xaaf93cbau, 0x4930b66bu, 0xe768301cu, 0x859fa9cdu, 0x23d7237eu,
    0xc20e9d2fu, 0x604616e0u, 0xfe7d9091u, 0x9cb50a42u, 0x3aec83f3u, 0xd923fda4u, 0x775b7755u, 0x1592f106u,
    0xb3ca6ab7u, 0x5201e468u, 0xf0395e19u, 0x8e70d7cau, 0x2ca8517bu, 0xcadfcb2cu, 0x691744ddu, 0x074ebe8eu,
    0xa586383fu, 0x43bdb1f0u, 0xe1f52ba1u, 0x802ca552u, 0x1e641f03u, 0xbc9b98b4u, 0x5ad31265u, 0xf90a8c16u,
    0x974205c7u, 0x35797f78u, 0xd3b0f929u, 0x71e872dau, 0x101fec8bu, 0xae57663cu, 0x4c8edfedu, 0xeac6599eu,
};

static const uint32_t bshim_181_tab1[96] = {
    0xb5df45b0u, 0x5416bf61u, 0xf24e3912u, 0x9085b2c3u, 0x2ebd2c74u, 0xccf4a625u, 0x6b2c1fd6u, 0x09639987u,
    0xa79b1338u, 0x45d28ce9u, 0xe40a069au, 0x8241804bu, 0x2078f9fcu, 0xbeb073adu, 0x5ce7ed5eu, 0xfb1f670fu,
    0x9956e0c0u, 0x378e5a71u, 0xd5c5d422u, 0x73fd4dd3u, 0x1234c784u, 0xb06c4135u, 0x4ea3bae6u, 0xecdb3497u,
    0x8b12ae48u, 0x294a27f9u, 0xc781a1aau, 0x65b91b5bu, 0x03f0950cu, 0xa2280ebdu, 0x405f886eu, 0xde97021fu,
    0x7cce7bd0u, 0x1b05f581u, 0xb93d6f32u, 0x5774e8e3u, 0xf5ac6294u, 0x93e3dc45u, 0x321b55f6u, 0xd052cfa7u,
    0x6e8a4958u, 0x0cc1c309u, 0xaaf93cbau, 0x4930b66bu, 0xe768301cu, 0x859fa9cdu, 0x23d7237eu, 0xc20e9d2fu,
    0x604616e0u, 0xfe7d9091u, 0x9cb50a42u, 0x3aec83f3u, 0xd923fda4u, 0x775b7755u, 0x1592f106u, 0xb3ca6ab7u,
    0x5201e468u, 0xf0395e19u, 0x8e70d7cau, 0x2ca8517bu, 0xcadfcb2cu, 0x691744ddu, 0x074ebe8eu, 0xa586383fu,
    0x43bdb1f0u, 0xe1f52ba1u, 0x802ca552u, 0x1e641f03u, 0xbc9b98b4u, 0x5ad31265u, 0xf90a8c16u, 0x974205c7u,
    0x35797f78u, 0xd3b0f929u, 0x71e872dau, 0x101fec8bu, 0xae57663cu, 0x4c8edfedu, 0xeac6599eu, 0x88fdd34fu,
    0x27354d00u, 0xc56cc6b1u, 0x63a44062u, 0x01dbba13u, 0xa01333c4u, 0x3e4aad75u, 0xdc822726u, 0x7ab9a0d7u,
    0x18f11a88u, 0xb7289439u, 0x55600deau, 0xf397879bu, 0x91cf014cu, 0x30067afdu, 0xce3df4aeu, 0x6c756e5fu,
};

static const uint32_t bshim_181_tab2[96] = {
    0x378e5a71u, 0xd5c5d422u, 0x73fd4dd3u, 0x1234c784u, 0xb06c4135u, 0x4ea3bae6u, 0xecdb3497u, 0x8b12ae48u,
    0x294a27f9u, 0xc781a1aau, 0x65b91b5bu, 0x03f0950cu, 0xa2280ebdu, 0x405f886eu, 0xde97021fu, 0x7cce7bd0u,
    0x1b05f581u, 0xb93d6f32u, 0x5774e8e3u, 0xf5ac6294u, 0x93e3dc45u, 0x321b55f6u, 0xd052cfa7u, 0x6e8a4958u,
    0x0cc1c309u, 0xaaf93cbau, 0x4930b66bu, 0xe768301cu, 0x859fa9cdu, 0x23d7237eu, 0xc20e9d2fu, 0x604616e0u,
    0xfe7d9091u, 0x9cb50a42u, 0x3aec83f3u, 0xd923fda4u, 0x775b7755u, 0x1592f106u, 0xb3ca6ab7u, 0x5201e468u,
    0xf0395e19u, 0x8e70d7cau, 0x2ca8517bu, 0xcadfcb2cu, 0x691744ddu, 0x074ebe8eu, 0xa586383fu, 0x43bdb1f0u,
    0xe1f52ba1u, 0x802ca552u, 0x1e641f03u, 0xbc9b98b4u, 0x5ad31265u, 0xf90a8c16u, 0x974205c7u, 0x35797f78u,
    0xd3b0f929u, 0x71e872dau, 0x101fec8bu, 0xae57663cu, 0x4c8edfedu, 0xeac6599eu, 0x88fdd34fu, 0x27354d00u,
    0xc56cc6b1u, 0x63a44062u, 0x01dbba13u, 0xa01333c4u, 0x3e4aad75u, 0xdc822726u, 0x7ab9a0d7u, 0x18f11a88u,
    0xb7289439u, 0x55600deau, 0xf397879bu, 0x91cf014cu, 0x30067afdu, 0xce3df4aeu, 0x6c756e5fu, 0x0aace810u,
    0xa8e461c1u, 0x471bdb72u, 0xe5535523u, 0x838aced4u, 0x21c24885u, 0xbff9c236u, 0x5e313be7u, 0xfc68b598u,
    0x9aa02f49u, 0x38d7a8fau, 0xd70f22abu, 0x75469c5cu, 0x137e160du, 0xb1b58fbeu, 0x4fed096fu, 0xee248320u,
};

static const uint32_t bshim_181_tab3[96] = {
    0xb93d6f32u, 0x5774e8e3u, 0xf5ac6294u, 0x93e3dc45u, 0x321b55f6u, 0xd052cfa7u, 0x6e8a4958u, 0x0cc1c309u,
    0xaaf93cbau, 0x4930b66bu, 0xe768301cu, 0x859fa9cdu, 0x23d7237eu, 0xc20e9d2fu, 0x604616e0u, 0xfe7d9091u,
    0x9cb50a42u, 0x3aec83f3u, 0xd923fda4u, 0x775b7755u, 0x1592f106u, 0xb3ca6ab7u, 0x5201e468u, 0xf0395e19u,
    0x8e70d7cau, 0x2ca8517bu, 0xcadfcb2cu, 0x691744ddu, 0x074ebe8eu, 0xa586383fu, 0x43bdb1f0u, 0xe1f52ba1u,
    0x802ca552u, 0x1e641f03u, 0xbc9b98b4u, 0x5ad31265u, 0xf90a8c16u, 0x974205c7u, 0x35797f78u, 0xd3b0f929u,
    0x71e872dau, 0x101fec8bu, 0xae57663cu, 0x4c8edfedu, 0xeac6599eu, 0x88fdd34fu, 0x27354d00u, 0xc56cc6b1u,
    0x63a44062u, 0x01dbba13u, 0xa01333c4u, 0x3e4aad75u, 0xdc822726u, 0x7ab9a0d7u, 0x18f11a88u, 0xb7289439u,
    0x55600deau, 0xf397879bu, 0x91cf014cu, 0x30067afdu, 0xce3df4aeu, 0x6c756e5fu, 0x0aace810u, 0xa8e461c1u,
    0x471bdb72u, 0xe5535523u, 0x838aced4u, 0x21c24885u, 0xbff9c236u, 0x5e313be7u, 0xfc68b598u, 0x9aa02f49u,
    0x38d7a8fau, 0xd70f22abu, 0x75469c5cu, 0x137e160du, 0xb1b58fbeu, 0x4fed096fu, 0xee248320u, 0x8c5bfcd1u,
    0x2a937682u, 0xc8caf033u, 0x670269e4u, 0x0539e395u, 0xa3715d46u, 0x41a8d6f7u, 0xdfe050a8u, 0x7e17ca59u,
    0x1c4f440au, 0xba86bdbbu, 0x58be376cu, 0xf6f5b11du, 0x952d2aceu, 0x3364a47fu, 0xd19c1e30u, 0x6fd397e1u,
};

static const uint32_t bshim_181_tab4[96] = {
    0x3aec83f3u, 0xd923fda4u, 0x775b7755u, 0x1592f106u, 0xb3ca6ab7u, 0x5201e468u, 0xf0395e19u, 0x8e70d7cau,
    0x2ca8517bu, 0xcadfcb2cu, 0x691744ddu, 0x074ebe8eu, 0xa586383fu, 0x43bdb1f0u, 0xe1f52ba1u, 0x802ca552u,
    0x1e641f03u, 0xbc9b98b4u, 0x5ad31265u, 0xf90a8c16u, 0x974205c7u, 0x35797f78u, 0xd3b0f929u, 0x71e872dau,
    0x101fec8bu, 0xae57663cu, 0x4c8edfedu, 0xeac6599eu, 0x88fdd34fu, 0x27354d00u, 0xc56cc6b1u, 0x63a44062u,
    0x01dbba13u, 0xa01333c4u, 0x3e4aad75u, 0xdc822726u, 0x7ab9a0d7u, 0x18f11a88u, 0xb7289439u, 0x55600deau,
    0xf397879bu, 0x91cf014cu, 0x30067afdu, 0xce3df4aeu, 0x6c756e5fu, 0x0aace810u, 0xa8e461c1u, 0x471bdb72u,
    0xe5535523u, 0x838aced4u, 0x21c24885u, 0xbff9c236u, 0x5e313be7u, 0xfc68b598u, 0x9aa02f49u, 0x38d7a8fau,
    0xd70f22abu, 0x75469c5cu, 0x137e160du, 0xb1b58fbeu, 0x4fed096fu, 0xee248320u, 0x8c5bfcd1u, 0x2a937682u,
    0xc8caf033u, 0x670269e4u, 0x0539e395u, 0xa3715d46u, 0x41a8d6f7u, 0xdfe050a8u, 0x7e17ca59u, 0x1c4f440au,
    0xba86bdbbu, 0x58be376cu, 0xf6f5b11du, 0x952d2aceu, 0x3364a47fu, 0xd19c1e30u, 0x6fd397e1u, 0x0e0b1192u,
    0xac428b43u, 0x4a7a04f4u, 0xe8b17ea5u, 0x86e8f856u, 0x25207207u, 0xc357ebb8u, 0x618f6569u, 0xffc6df1au,
    0x9dfe58cbu, 0x3c35d27cu, 0xda6d4c2du, 0x78a4c5deu, 0x16dc3f8fu, 0xb513b940u, 0x534b32f1u, 0xf182aca2u,
};

static const uint32_t bshim_181_tab5[96] = {
    0xbc9b98b4u, 0x5ad31265u, 0xf90a8c16u, 0x974205c7u, 0x35797f78u, 0xd3b0f929u, 0x71e872dau, 0x101fec8bu,
    0xae57663cu, 0x4c8edfedu, 0xeac6599eu, 0x88fdd34fu, 0x27354d00u, 0xc56cc6b1u, 0x63a44062u, 0x01dbba13u,
    0xa01333c4u, 0x3e4aad75u, 0xdc822726u, 0x7ab9a0d7u, 0x18f11a88u, 0xb7289439u, 0x55600deau, 0xf397879bu,
    0x91cf014cu, 0x30067afdu, 0xce3df4aeu, 0x6c756e5fu, 0x0aace810u, 0xa8e461c1u, 0x471bdb72u, 0xe5535523u,
    0x838aced4u, 0x21c24885u, 0xbff9c236u, 0x5e313be7u, 0xfc68b598u, 0x9aa02f49u, 0x38d7a8fau, 0xd70f22abu,
    0x75469c5cu, 0x137e160du, 0xb1b58fbeu, 0x4fed096fu, 0xee248320u, 0x8c5bfcd1u, 0x2a937682u, 0xc8caf033u,
    0x670269e4u, 0x0539e395u, 0xa3715d46u, 0x41a8d6f7u, 0xdfe050a8u, 0x7e17ca59u, 0x1c4f440au, 0xba86bdbbu,
    0x58be376cu, 0xf6f5b11du, 0x952d2aceu, 0x3364a47fu, 0xd19c1e30u, 0x6fd397e1u, 0x0e0b1192u, 0xac428b43u,
    0x4a7a04f4u, 0xe8b17ea5u, 0x86e8f856u, 0x25207207u, 0xc357ebb8u, 0x618f6569u, 0xffc6df1au, 0x9dfe58cbu,
    0x3c35d27cu, 0xda6d4c2du, 0x78a4c5deu, 0x16dc3f8fu, 0xb513b940u, 0x534b32f1u, 0xf182aca2u, 0x8fba2653u,
    0x2df1a004u, 0xcc2919b5u, 0x6a609366u, 0x08980d17u, 0xa6cf86c8u, 0x45070079u, 0xe33e7a2au, 0x8175f3dbu,
    0x1fad6d8cu, 0xbde4e73du, 0x5c1c60eeu, 0xfa53da9fu, 0x988b5450u, 0x36c2ce01u, 0xd4fa47b2u, 0x7331c163u,
};

static const uint32_t bshim_181_tab6[96] = {
    0x3e4aad75u, 0xdc822726u, 0x7ab9a0d7u, 0x18f11a88u, 0xb7289439u, 0x55600deau, 0xf397879bu, 0x91cf014cu,
    0x30067afdu, 0xce3df4aeu, 0x6c756e5fu, 0x0aace810u, 0xa8e461c1u, 0x471bdb72u, 0xe5535523u, 0x838aced4u,
    0x21c24885u, 0xbff9c236u, 0x5e313be7u, 0xfc68b598u, 0x9aa02f49u, 0x38d7a8fau, 0xd70f22abu, 0x75469c5cu,
    0x137e160du, 0xb1b58fbeu, 0x4fed096fu, 0xee248320u, 0x8c5bfcd1u, 0x2a937682u, 0xc8caf033u, 0x670269e4u,
    0x0539e395u, 0xa3715d46u, 0x41a8d6f7u, 0xdfe050a8u, 0x7e17ca59u, 0x1c4f440au, 0xba86bdbbu, 0x58be376cu,
    0xf6f5b11du, 0x952d2aceu, 0x3364a47fu, 0xd19c1e30u, 0x6fd397e1u, 0x0e0b1192u, 0xac428b43u, 0x4a7a04f4u,
    0xe8b17ea5u, 0x86e8f856u, 0x25207207u, 0xc357ebb8u, 0x618f6569u, 0xffc6df1au, 0x9dfe58cbu, 0x3c35d27cu,
    0xda6d4c2du, 0x78a4c5deu, 0x16dc3f8fu, 0xb513b940u, 0x534b32f1u, 0xf182aca2u, 0x8fba2653u, 0x2df1a004u,
    0xcc2919b5u, 0x6a609366u, 0x08980d17u, 0xa6cf86c8u, 0x45070079u, 0xe33e7a2au, 0x8175f3dbu, 0x1fad6d8cu,
    0xbde4e73du, 0x5c1c60eeu, 0xfa53da9fu, 0x988b5450u, 0x36c2ce01u, 0xd4fa47b2u, 0x7331c163u, 0x11693b14u,
    0xafa0b4c5u, 0x4dd82e76u, 0xec0fa827u, 0x8a4721d8u, 0x287e9b89u, 0xc6b6153au, 0x64ed8eebu, 0x0325089cu,
    0xa15c824du, 0x3f93fbfeu, 0xddcb75afu, 0x7c02ef60u, 0x1a3a6911u, 0xb871e2c2u, 0x56a95c73u, 0xf4e0d624u,
};

static const uint32_t bshim_181_tab7[96] = {
    0xbff9c236u, 0x5e313be7u, 0xfc68b598u, 0x9aa02f49u, 0x38d7a8fau, 0xd70f22abu, 0x75469c5cu, 0x137e160du,
    0xb1b58fbeu, 0x4fed096fu, 0xee248320u, 0x8c5bfcd1u, 0x2a937682u, 0xc8caf033u, 0x670269e4u, 0x0539e395u,
    0xa3715d46u, 0x41a8d6f7u, 0xdfe050a8u, 0x7e17ca59u, 0x1c4f440au, 0xba86bdbbu, 0x58be376cu, 0xf6f5b11du,
    0x952d2aceu, 0x3364a47fu, 0xd19c1e30u, 0x6fd397e1u, 0x0e0b1192u, 0xac428b43u, 0x4a7a04f4u, 0xe8b17ea5u,
    0x86e8f856u, 0x25207207u, 0xc357ebb8u, 0x618f6569u, 0xffc6df1au, 0x9dfe58cbu, 0x3c35d27cu, 0xda6d4c2du,
    0x78a4c5deu, 0x16dc3f8fu, 0xb513b940u, 0x534b32f1u, 0xf182aca2u, 0x8fba2653u, 0x2df1a004u, 0xcc2919b5u,
    0x6a609366u, 0x08980d17u, 0xa6cf86c8u, 0x45070079u, 0xe33e7a2au, 0x8175f3dbu, 0x1fad6d8cu, 0xbde4e73du,
    0x5c1c60eeu, 0xfa53da9fu, 0x988b5450u, 0x36c2ce01u, 0xd4fa47b2u, 0x7331c163u, 0x11693b14u, 0xafa0b4c5u,
    0x4dd82e76u, 0xec0fa827u, 0x8a4721d8u, 0x287e9b89u, 0xc6b6153au, 0x64ed8eebu, 0x0325089cu, 0xa15c824du,
    0x3f93fbfeu, 0xddcb75afu, 0x7c02ef60u, 0x1a3a6911u, 0xb871e2c2u, 0x56a95c73u, 0xf4e0d624u, 0x93184fd5u,
    0x314fc986u, 0xcf874337u, 0x6dbebce8u, 0x0bf63699u, 0xaa2db04au, 0x486529fbu, 0xe69ca3acu, 0x84d41d5du,
    0x230b970eu, 0xc14310bfu, 0x5f7a8a70u, 0xfdb20421u, 0x9be97dd2u, 0x3a20f783u, 0xd8587134u, 0x768feae5u,
};

struct bshim_181_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_181_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_181_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_181_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_181_reset(struct bshim_181_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0015defbu;
    return 0;
}

