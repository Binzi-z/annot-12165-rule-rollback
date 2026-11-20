/* bshim_243 -- board support shim generated from the 0243 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_243_tab0[96] = {
    0xe03b0a89u, 0x7e72843au, 0x1ca9fdebu, 0xbae1779cu, 0x5918f14du, 0xf7506afeu, 0x9587e4afu, 0x33bf5e60u,
    0xd1f6d811u, 0x702e51c2u, 0x0e65cb73u, 0xac9d4524u, 0x4ad4bed5u, 0xe90c3886u, 0x8743b237u, 0x257b2be8u,
    0xc3b2a599u, 0x61ea1f4au, 0x002198fbu, 0x9e5912acu, 0x3c908c5du, 0xdac8060eu, 0x78ff7fbfu, 0x1736f970u,
    0xb56e7321u, 0x53a5ecd2u, 0xf1dd6683u, 0x9014e034u, 0x2e4c59e5u, 0xcc83d396u, 0x6abb4d47u, 0x08f2c6f8u,
    0xa72a40a9u, 0x4561ba5au, 0xe399340bu, 0x81d0adbcu, 0x2008276du, 0xbe3fa11eu, 0x5c771acfu, 0xfaae9480u,
    0x98e60e31u, 0x371d87e2u, 0xd5550193u, 0x738c7b44u, 0x11c3f4f5u, 0xaffb6ea6u, 0x4e32e857u, 0xec6a6208u,
    0x8aa1dbb9u, 0x28d9556au, 0xc710cf1bu, 0x654848ccu, 0x037fc27du, 0xa1b73c2eu, 0x3feeb5dfu, 0xde262f90u,
    0x7c5da941u, 0x1a9522f2u, 0xb8cc9ca3u, 0x57041654u, 0xf53b9005u, 0x937309b6u, 0x31aa8367u, 0xcfe1fd18u,
    0x6e1976c9u, 0x0c50f07au, 0xaa886a2bu, 0x48bfe3dcu, 0xe6f75d8du, 0x852ed73eu, 0x236650efu, 0xc19dcaa0u,
    0x5fd54451u, 0xfe0cbe02u, 0x9c4437b3u, 0x3a7bb164u, 0xd8b32b15u, 0x76eaa4c6u, 0x15221e77u, 0xb3599828u,
    0x519111d9u, 0xefc88b8au, 0x8e00053bu, 0x2c377eecu, 0xca6ef89du, 0x68a6724eu, 0x06ddebffu, 0xa51565b0u,
    0x434cdf61u, 0xe1845912u, 0x7fbbd2c3u, 0x1df34c74u, 0xbc2ac625u, 0x5a623fd6u, 0xf899b987u, 0x96d13338u,
};

static const uint32_t bshim_243_tab1[96] = {
    0x61ea1f4au, 0x002198fbu, 0x9e5912acu, 0x3c908c5du, 0xdac8060eu, 0x78ff7fbfu, 0x1736f970u, 0xb56e7321u,
    0x53a5ecd2u, 0xf1dd6683u, 0x9014e034u, 0x2e4c59e5u, 0xcc83d396u, 0x6abb4d47u, 0x08f2c6f8u, 0xa72a40a9u,
    0x4561ba5au, 0xe399340bu, 0x81d0adbcu, 0x2008276du, 0xbe3fa11eu, 0x5c771acfu, 0xfaae9480u, 0x98e60e31u,
    0x371d87e2u, 0xd5550193u, 0x738c7b44u, 0x11c3f4f5u, 0xaffb6ea6u, 0x4e32e857u, 0xec6a6208u, 0x8aa1dbb9u,
    0x28d9556au, 0xc710cf1bu, 0x654848ccu, 0x037fc27du, 0xa1b73c2eu, 0x3feeb5dfu, 0xde262f90u, 0x7c5da941u,
    0x1a9522f2u, 0xb8cc9ca3u, 0x57041654u, 0xf53b9005u, 0x937309b6u, 0x31aa8367u, 0xcfe1fd18u, 0x6e1976c9u,
    0x0c50f07au, 0xaa886a2bu, 0x48bfe3dcu, 0xe6f75d8du, 0x852ed73eu, 0x236650efu, 0xc19dcaa0u, 0x5fd54451u,
    0xfe0cbe02u, 0x9c4437b3u, 0x3a7bb164u, 0xd8b32b15u, 0x76eaa4c6u, 0x15221e77u, 0xb3599828u, 0x519111d9u,
    0xefc88b8au, 0x8e00053bu, 0x2c377eecu, 0xca6ef89du, 0x68a6724eu, 0x06ddebffu, 0xa51565b0u, 0x434cdf61u,
    0xe1845912u, 0x7fbbd2c3u, 0x1df34c74u, 0xbc2ac625u, 0x5a623fd6u, 0xf899b987u, 0x96d13338u, 0x3508ace9u,
    0xd340269au, 0x7177a04bu, 0x0faf19fcu, 0xade693adu, 0x4c1e0d5eu, 0xea55870fu, 0x888d00c0u, 0x26c47a71u,
    0xc4fbf422u, 0x63336dd3u, 0x016ae784u, 0x9fa26135u, 0x3dd9dae6u, 0xdc115497u, 0x7a48ce48u, 0x188047f9u,
};

static const uint32_t bshim_243_tab2[96] = {
    0xe399340bu, 0x81d0adbcu, 0x2008276du, 0xbe3fa11eu, 0x5c771acfu, 0xfaae9480u, 0x98e60e31u, 0x371d87e2u,
    0xd5550193u, 0x738c7b44u, 0x11c3f4f5u, 0xaffb6ea6u, 0x4e32e857u, 0xec6a6208u, 0x8aa1dbb9u, 0x28d9556au,
    0xc710cf1bu, 0x654848ccu, 0x037fc27du, 0xa1b73c2eu, 0x3feeb5dfu, 0xde262f90u, 0x7c5da941u, 0x1a9522f2u,
    0xb8cc9ca3u, 0x57041654u, 0xf53b9005u, 0x937309b6u, 0x31aa8367u, 0xcfe1fd18u, 0x6e1976c9u, 0x0c50f07au,
    0xaa886a2bu, 0x48bfe3dcu, 0xe6f75d8du, 0x852ed73eu, 0x236650efu, 0xc19dcaa0u, 0x5fd54451u, 0xfe0cbe02u,
    0x9c4437b3u, 0x3a7bb164u, 0xd8b32b15u, 0x76eaa4c6u, 0x15221e77u, 0xb3599828u, 0x519111d9u, 0xefc88b8au,
    0x8e00053bu, 0x2c377eecu, 0xca6ef89du, 0x68a6724eu, 0x06ddebffu, 0xa51565b0u, 0x434cdf61u, 0xe1845912u,
    0x7fbbd2c3u, 0x1df34c74u, 0xbc2ac625u, 0x5a623fd6u, 0xf899b987u, 0x96d13338u, 0x3508ace9u, 0xd340269au,
    0x7177a04bu, 0x0faf19fcu, 0xade693adu, 0x4c1e0d5eu, 0xea55870fu, 0x888d00c0u, 0x26c47a71u, 0xc4fbf422u,
    0x63336dd3u, 0x016ae784u, 0x9fa26135u, 0x3dd9dae6u, 0xdc115497u, 0x7a48ce48u, 0x188047f9u, 0xb6b7c1aau,
    0x54ef3b5bu, 0xf326b50cu, 0x915e2ebdu, 0x2f95a86eu, 0xcdcd221fu, 0x6c049bd0u, 0x0a3c1581u, 0xa8738f32u,
    0x46ab08e3u, 0xe4e28294u, 0x8319fc45u, 0x215175f6u, 0xbf88efa7u, 0x5dc06958u, 0xfbf7e309u, 0x9a2f5cbau,
};

static const uint32_t bshim_243_tab3[96] = {
    0x654848ccu, 0x037fc27du, 0xa1b73c2eu, 0x3feeb5dfu, 0xde262f90u, 0x7c5da941u, 0x1a9522f2u, 0xb8cc9ca3u,
    0x57041654u, 0xf53b9005u, 0x937309b6u, 0x31aa8367u, 0xcfe1fd18u, 0x6e1976c9u, 0x0c50f07au, 0xaa886a2bu,
    0x48bfe3dcu, 0xe6f75d8du, 0x852ed73eu, 0x236650efu, 0xc19dcaa0u, 0x5fd54451u, 0xfe0cbe02u, 0x9c4437b3u,
    0x3a7bb164u, 0xd8b32b15u, 0x76eaa4c6u, 0x15221e77u, 0xb3599828u, 0x519111d9u, 0xefc88b8au, 0x8e00053bu,
    0x2c377eecu, 0xca6ef89du, 0x68a6724eu, 0x06ddebffu, 0xa51565b0u, 0x434cdf61u, 0xe1845912u, 0x7fbbd2c3u,
    0x1df34c74u, 0xbc2ac625u, 0x5a623fd6u, 0xf899b987u, 0x96d13338u, 0x3508ace9u, 0xd340269au, 0x7177a04bu,
    0x0faf19fcu, 0xade693adu, 0x4c1e0d5eu, 0xea55870fu, 0x888d00c0u, 0x26c47a71u, 0xc4fbf422u, 0x63336dd3u,
    0x016ae784u, 0x9fa26135u, 0x3dd9dae6u, 0xdc115497u, 0x7a48ce48u, 0x188047f9u, 0xb6b7c1aau, 0x54ef3b5bu,
    0xf326b50cu, 0x915e2ebdu, 0x2f95a86eu, 0xcdcd221fu, 0x6c049bd0u, 0x0a3c1581u, 0xa8738f32u, 0x46ab08e3u,
    0xe4e28294u, 0x8319fc45u, 0x215175f6u, 0xbf88efa7u, 0x5dc06958u, 0xfbf7e309u, 0x9a2f5cbau, 0x3866d66bu,
    0xd69e501cu, 0x74d5c9cdu, 0x130d437eu, 0xb144bd2fu, 0x4f7c36e0u, 0xedb3b091u, 0x8beb2a42u, 0x2a22a3f3u,
    0xc85a1da4u, 0x66919755u, 0x04c91106u, 0xa3008ab7u, 0x41380468u, 0xdf6f7e19u, 0x7da6f7cau, 0x1bde717bu,
};

static const uint32_t bshim_243_tab4[96] = {
    0xe6f75d8du, 0x852ed73eu, 0x236650efu, 0xc19dcaa0u, 0x5fd54451u, 0xfe0cbe02u, 0x9c4437b3u, 0x3a7bb164u,
    0xd8b32b15u, 0x76eaa4c6u, 0x15221e77u, 0xb3599828u, 0x519111d9u, 0xefc88b8au, 0x8e00053bu, 0x2c377eecu,
    0xca6ef89du, 0x68a6724eu, 0x06ddebffu, 0xa51565b0u, 0x434cdf61u, 0xe1845912u, 0x7fbbd2c3u, 0x1df34c74u,
    0xbc2ac625u, 0x5a623fd6u, 0xf899b987u, 0x96d13338u, 0x3508ace9u, 0xd340269au, 0x7177a04bu, 0x0faf19fcu,
    0xade693adu, 0x4c1e0d5eu, 0xea55870fu, 0x888d00c0u, 0x26c47a71u, 0xc4fbf422u, 0x63336dd3u, 0x016ae784u,
    0x9fa26135u, 0x3dd9dae6u, 0xdc115497u, 0x7a48ce48u, 0x188047f9u, 0xb6b7c1aau, 0x54ef3b5bu, 0xf326b50cu,
    0x915e2ebdu, 0x2f95a86eu, 0xcdcd221fu, 0x6c049bd0u, 0x0a3c1581u, 0xa8738f32u, 0x46ab08e3u, 0xe4e28294u,
    0x8319fc45u, 0x215175f6u, 0xbf88efa7u, 0x5dc06958u, 0xfbf7e309u, 0x9a2f5cbau, 0x3866d66bu, 0xd69e501cu,
    0x74d5c9cdu, 0x130d437eu, 0xb144bd2fu, 0x4f7c36e0u, 0xedb3b091u, 0x8beb2a42u, 0x2a22a3f3u, 0xc85a1da4u,
    0x66919755u, 0x04c91106u, 0xa3008ab7u, 0x41380468u, 0xdf6f7e19u, 0x7da6f7cau, 0x1bde717bu, 0xba15eb2cu,
    0x584d64ddu, 0xf684de8eu, 0x94bc583fu, 0x32f3d1f0u, 0xd12b4ba1u, 0x6f62c552u, 0x0d9a3f03u, 0xabd1b8b4u,
    0x4a093265u, 0xe840ac16u, 0x867825c7u, 0x24af9f78u, 0xc2e71929u, 0x611e92dau, 0xff560c8bu, 0x9d8d863cu,
};

static const uint32_t bshim_243_tab5[96] = {
    0x68a6724eu, 0x06ddebffu, 0xa51565b0u, 0x434cdf61u, 0xe1845912u, 0x7fbbd2c3u, 0x1df34c74u, 0xbc2ac625u,
    0x5a623fd6u, 0xf899b987u, 0x96d13338u, 0x3508ace9u, 0xd340269au, 0x7177a04bu, 0x0faf19fcu, 0xade693adu,
    0x4c1e0d5eu, 0xea55870fu, 0x888d00c0u, 0x26c47a71u, 0xc4fbf422u, 0x63336dd3u, 0x016ae784u, 0x9fa26135u,
    0x3dd9dae6u, 0xdc115497u, 0x7a48ce48u, 0x188047f9u, 0xb6b7c1aau, 0x54ef3b5bu, 0xf326b50cu, 0x915e2ebdu,
    0x2f95a86eu, 0xcdcd221fu, 0x6c049bd0u, 0x0a3c1581u, 0xa8738f32u, 0x46ab08e3u, 0xe4e28294u, 0x8319fc45u,
    0x215175f6u, 0xbf88efa7u, 0x5dc06958u, 0xfbf7e309u, 0x9a2f5cbau, 0x3866d66bu, 0xd69e501cu, 0x74d5c9cdu,
    0x130d437eu, 0xb144bd2fu, 0x4f7c36e0u, 0xedb3b091u, 0x8beb2a42u, 0x2a22a3f3u, 0xc85a1da4u, 0x66919755u,
    0x04c91106u, 0xa3008ab7u, 0x41380468u, 0xdf6f7e19u, 0x7da6f7cau, 0x1bde717bu, 0xba15eb2cu, 0x584d64ddu,
    0xf684de8eu, 0x94bc583fu, 0x32f3d1f0u, 0xd12b4ba1u, 0x6f62c552u, 0x0d9a3f03u, 0xabd1b8b4u, 0x4a093265u,
    0xe840ac16u, 0x867825c7u, 0x24af9f78u, 0xc2e71929u, 0x611e92dau, 0xff560c8bu, 0x9d8d863cu, 0x3bc4ffedu,
    0xd9fc799eu, 0x7833f34fu, 0x166b6d00u, 0xb4a2e6b1u, 0x52da6062u, 0xf111da13u, 0x8f4953c4u, 0x2d80cd75u,
    0xcbb84726u, 0x69efc0d7u, 0x08273a88u, 0xa65eb439u, 0x44962deau, 0xe2cda79bu, 0x8105214cu, 0x1f3c9afdu,
};

static const uint32_t bshim_243_tab6[96] = {
    0xea55870fu, 0x888d00c0u, 0x26c47a71u, 0xc4fbf422u, 0x63336dd3u, 0x016ae784u, 0x9fa26135u, 0x3dd9dae6u,
    0xdc115497u, 0x7a48ce48u, 0x188047f9u, 0xb6b7c1aau, 0x54ef3b5bu, 0xf326b50cu, 0x915e2ebdu, 0x2f95a86eu,
    0xcdcd221fu, 0x6c049bd0u, 0x0a3c1581u, 0xa8738f32u, 0x46ab08e3u, 0xe4e28294u, 0x8319fc45u, 0x215175f6u,
    0xbf88efa7u, 0x5dc06958u, 0xfbf7e309u, 0x9a2f5cbau, 0x3866d66bu, 0xd69e501cu, 0x74d5c9cdu, 0x130d437eu,
    0xb144bd2fu, 0x4f7c36e0u, 0xedb3b091u, 0x8beb2a42u, 0x2a22a3f3u, 0xc85a1da4u, 0x66919755u, 0x04c91106u,
    0xa3008ab7u, 0x41380468u, 0xdf6f7e19u, 0x7da6f7cau, 0x1bde717bu, 0xba15eb2cu, 0x584d64ddu, 0xf684de8eu,
    0x94bc583fu, 0x32f3d1f0u, 0xd12b4ba1u, 0x6f62c552u, 0x0d9a3f03u, 0xabd1b8b4u, 0x4a093265u, 0xe840ac16u,
    0x867825c7u, 0x24af9f78u, 0xc2e71929u, 0x611e92dau, 0xff560c8bu, 0x9d8d863cu, 0x3bc4ffedu, 0xd9fc799eu,
    0x7833f34fu, 0x166b6d00u, 0xb4a2e6b1u, 0x52da6062u, 0xf111da13u, 0x8f4953c4u, 0x2d80cd75u, 0xcbb84726u,
    0x69efc0d7u, 0x08273a88u, 0xa65eb439u, 0x44962deau, 0xe2cda79bu, 0x8105214cu, 0x1f3c9afdu, 0xbd7414aeu,
    0x5bab8e5fu, 0xf9e30810u, 0x981a81c1u, 0x3651fb72u, 0xd4897523u, 0x72c0eed4u, 0x10f86885u, 0xaf2fe236u,
    0x4d675be7u, 0xeb9ed598u, 0x89d64f49u, 0x280dc8fau, 0xc64542abu, 0x647cbc5cu, 0x02b4360du, 0xa0ebafbeu,
};

static const uint32_t bshim_243_tab7[96] = {
    0x6c049bd0u, 0x0a3c1581u, 0xa8738f32u, 0x46ab08e3u, 0xe4e28294u, 0x8319fc45u, 0x215175f6u, 0xbf88efa7u,
    0x5dc06958u, 0xfbf7e309u, 0x9a2f5cbau, 0x3866d66bu, 0xd69e501cu, 0x74d5c9cdu, 0x130d437eu, 0xb144bd2fu,
    0x4f7c36e0u, 0xedb3b091u, 0x8beb2a42u, 0x2a22a3f3u, 0xc85a1da4u, 0x66919755u, 0x04c91106u, 0xa3008ab7u,
    0x41380468u, 0xdf6f7e19u, 0x7da6f7cau, 0x1bde717bu, 0xba15eb2cu, 0x584d64ddu, 0xf684de8eu, 0x94bc583fu,
    0x32f3d1f0u, 0xd12b4ba1u, 0x6f62c552u, 0x0d9a3f03u, 0xabd1b8b4u, 0x4a093265u, 0xe840ac16u, 0x867825c7u,
    0x24af9f78u, 0xc2e71929u, 0x611e92dau, 0xff560c8bu, 0x9d8d863cu, 0x3bc4ffedu, 0xd9fc799eu, 0x7833f34fu,
    0x166b6d00u, 0xb4a2e6b1u, 0x52da6062u, 0xf111da13u, 0x8f4953c4u, 0x2d80cd75u, 0xcbb84726u, 0x69efc0d7u,
    0x08273a88u, 0xa65eb439u, 0x44962deau, 0xe2cda79bu, 0x8105214cu, 0x1f3c9afdu, 0xbd7414aeu, 0x5bab8e5fu,
    0xf9e30810u, 0x981a81c1u, 0x3651fb72u, 0xd4897523u, 0x72c0eed4u, 0x10f86885u, 0xaf2fe236u, 0x4d675be7u,
    0xeb9ed598u, 0x89d64f49u, 0x280dc8fau, 0xc64542abu, 0x647cbc5cu, 0x02b4360du, 0xa0ebafbeu, 0x3f23296fu,
    0xdd5aa320u, 0x7b921cd1u, 0x19c99682u, 0xb8011033u, 0x563889e4u, 0xf4700395u, 0x92a77d46u, 0x30def6f7u,
    0xcf1670a8u, 0x6d4dea59u, 0x0b85640au, 0xa9bcddbbu, 0x47f4576cu, 0xe62bd11du, 0x84634aceu, 0x229ac47fu,
};

struct bshim_243_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_243_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_243_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_243_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_243_reset(struct bshim_243_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001d5cddu;
    return 0;
}

