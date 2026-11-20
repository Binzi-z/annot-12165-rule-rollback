/* bshim_053 -- board support shim generated from the 0053 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_053_tab0[96] = {
    0x028d676fu, 0xa0c4e120u, 0x3efc5ad1u, 0xdd33d482u, 0x7b6b4e33u, 0x19a2c7e4u, 0xb7da4195u, 0x5611bb46u,
    0xf44934f7u, 0x9280aea8u, 0x30b82859u, 0xceefa20au, 0x6d271bbbu, 0x0b5e956cu, 0xa9960f1du, 0x47cd88ceu,
    0xe605027fu, 0x843c7c30u, 0x2273f5e1u, 0xc0ab6f92u, 0x5ee2e943u, 0xfd1a62f4u, 0x9b51dca5u, 0x39895656u,
    0xd7c0d007u, 0x75f849b8u, 0x142fc369u, 0xb2673d1au, 0x509eb6cbu, 0xeed6307cu, 0x8d0daa2du, 0x2b4523deu,
    0xc97c9d8fu, 0x67b41740u, 0x05eb90f1u, 0xa4230aa2u, 0x425a8453u, 0xe091fe04u, 0x7ec977b5u, 0x1d00f166u,
    0xbb386b17u, 0x596fe4c8u, 0xf7a75e79u, 0x95ded82au, 0x341651dbu, 0xd24dcb8cu, 0x7085453du, 0x0ebcbeeeu,
    0xacf4389fu, 0x4b2bb250u, 0xe9632c01u, 0x879aa5b2u, 0x25d21f63u, 0xc4099914u, 0x624112c5u, 0x00788c76u,
    0x9eb00627u, 0x3ce77fd8u, 0xdb1ef989u, 0x7956733au, 0x178decebu, 0xb5c5669cu, 0x53fce04du, 0xf23459feu,
    0x906bd3afu, 0x2ea34d60u, 0xccdac711u, 0x6b1240c2u, 0x0949ba73u, 0xa7813424u, 0x45b8add5u, 0xe3f02786u,
    0x8227a137u, 0x205f1ae8u, 0xbe969499u, 0x5cce0e4au, 0xfb0587fbu, 0x993d01acu, 0x37747b5du, 0xd5abf50eu,
    0x73e36ebfu, 0x121ae870u, 0xb0526221u, 0x4e89dbd2u, 0xecc15583u, 0x8af8cf34u, 0x293048e5u, 0xc767c296u,
    0x659f3c47u, 0x03d6b5f8u, 0xa20e2fa9u, 0x4045a95au, 0xde7d230bu, 0x7cb49cbcu, 0x1aec166du, 0xb923901eu,
};

static const uint32_t bshim_053_tab1[96] = {
    0x843c7c30u, 0x2273f5e1u, 0xc0ab6f92u, 0x5ee2e943u, 0xfd1a62f4u, 0x9b51dca5u, 0x39895656u, 0xd7c0d007u,
    0x75f849b8u, 0x142fc369u, 0xb2673d1au, 0x509eb6cbu, 0xeed6307cu, 0x8d0daa2du, 0x2b4523deu, 0xc97c9d8fu,
    0x67b41740u, 0x05eb90f1u, 0xa4230aa2u, 0x425a8453u, 0xe091fe04u, 0x7ec977b5u, 0x1d00f166u, 0xbb386b17u,
    0x596fe4c8u, 0xf7a75e79u, 0x95ded82au, 0x341651dbu, 0xd24dcb8cu, 0x7085453du, 0x0ebcbeeeu, 0xacf4389fu,
    0x4b2bb250u, 0xe9632c01u, 0x879aa5b2u, 0x25d21f63u, 0xc4099914u, 0x624112c5u, 0x00788c76u, 0x9eb00627u,
    0x3ce77fd8u, 0xdb1ef989u, 0x7956733au, 0x178decebu, 0xb5c5669cu, 0x53fce04du, 0xf23459feu, 0x906bd3afu,
    0x2ea34d60u, 0xccdac711u, 0x6b1240c2u, 0x0949ba73u, 0xa7813424u, 0x45b8add5u, 0xe3f02786u, 0x8227a137u,
    0x205f1ae8u, 0xbe969499u, 0x5cce0e4au, 0xfb0587fbu, 0x993d01acu, 0x37747b5du, 0xd5abf50eu, 0x73e36ebfu,
    0x121ae870u, 0xb0526221u, 0x4e89dbd2u, 0xecc15583u, 0x8af8cf34u, 0x293048e5u, 0xc767c296u, 0x659f3c47u,
    0x03d6b5f8u, 0xa20e2fa9u, 0x4045a95au, 0xde7d230bu, 0x7cb49cbcu, 0x1aec166du, 0xb923901eu, 0x575b09cfu,
    0xf5928380u, 0x93c9fd31u, 0x320176e2u, 0xd038f093u, 0x6e706a44u, 0x0ca7e3f5u, 0xaadf5da6u, 0x4916d757u,
    0xe74e5108u, 0x8585cab9u, 0x23bd446au, 0xc1f4be1bu, 0x602c37ccu, 0xfe63b17du, 0x9c9b2b2eu, 0x3ad2a4dfu,
};

static const uint32_t bshim_053_tab2[96] = {
    0x05eb90f1u, 0xa4230aa2u, 0x425a8453u, 0xe091fe04u, 0x7ec977b5u, 0x1d00f166u, 0xbb386b17u, 0x596fe4c8u,
    0xf7a75e79u, 0x95ded82au, 0x341651dbu, 0xd24dcb8cu, 0x7085453du, 0x0ebcbeeeu, 0xacf4389fu, 0x4b2bb250u,
    0xe9632c01u, 0x879aa5b2u, 0x25d21f63u, 0xc4099914u, 0x624112c5u, 0x00788c76u, 0x9eb00627u, 0x3ce77fd8u,
    0xdb1ef989u, 0x7956733au, 0x178decebu, 0xb5c5669cu, 0x53fce04du, 0xf23459feu, 0x906bd3afu, 0x2ea34d60u,
    0xccdac711u, 0x6b1240c2u, 0x0949ba73u, 0xa7813424u, 0x45b8add5u, 0xe3f02786u, 0x8227a137u, 0x205f1ae8u,
    0xbe969499u, 0x5cce0e4au, 0xfb0587fbu, 0x993d01acu, 0x37747b5du, 0xd5abf50eu, 0x73e36ebfu, 0x121ae870u,
    0xb0526221u, 0x4e89dbd2u, 0xecc15583u, 0x8af8cf34u, 0x293048e5u, 0xc767c296u, 0x659f3c47u, 0x03d6b5f8u,
    0xa20e2fa9u, 0x4045a95au, 0xde7d230bu, 0x7cb49cbcu, 0x1aec166du, 0xb923901eu, 0x575b09cfu, 0xf5928380u,
    0x93c9fd31u, 0x320176e2u, 0xd038f093u, 0x6e706a44u, 0x0ca7e3f5u, 0xaadf5da6u, 0x4916d757u, 0xe74e5108u,
    0x8585cab9u, 0x23bd446au, 0xc1f4be1bu, 0x602c37ccu, 0xfe63b17du, 0x9c9b2b2eu, 0x3ad2a4dfu, 0xd90a1e90u,
    0x77419841u, 0x157911f2u, 0xb3b08ba3u, 0x51e80554u, 0xf01f7f05u, 0x8e56f8b6u, 0x2c8e7267u, 0xcac5ec18u,
    0x68fd65c9u, 0x0734df7au, 0xa56c592bu, 0x43a3d2dcu, 0xe1db4c8du, 0x8012c63eu, 0x1e4a3fefu, 0xbc81b9a0u,
};

static const uint32_t bshim_053_tab3[96] = {
    0x879aa5b2u, 0x25d21f63u, 0xc4099914u, 0x624112c5u, 0x00788c76u, 0x9eb00627u, 0x3ce77fd8u, 0xdb1ef989u,
    0x7956733au, 0x178decebu, 0xb5c5669cu, 0x53fce04du, 0xf23459feu, 0x906bd3afu, 0x2ea34d60u, 0xccdac711u,
    0x6b1240c2u, 0x0949ba73u, 0xa7813424u, 0x45b8add5u, 0xe3f02786u, 0x8227a137u, 0x205f1ae8u, 0xbe969499u,
    0x5cce0e4au, 0xfb0587fbu, 0x993d01acu, 0x37747b5du, 0xd5abf50eu, 0x73e36ebfu, 0x121ae870u, 0xb0526221u,
    0x4e89dbd2u, 0xecc15583u, 0x8af8cf34u, 0x293048e5u, 0xc767c296u, 0x659f3c47u, 0x03d6b5f8u, 0xa20e2fa9u,
    0x4045a95au, 0xde7d230bu, 0x7cb49cbcu, 0x1aec166du, 0xb923901eu, 0x575b09cfu, 0xf5928380u, 0x93c9fd31u,
    0x320176e2u, 0xd038f093u, 0x6e706a44u, 0x0ca7e3f5u, 0xaadf5da6u, 0x4916d757u, 0xe74e5108u, 0x8585cab9u,
    0x23bd446au, 0xc1f4be1bu, 0x602c37ccu, 0xfe63b17du, 0x9c9b2b2eu, 0x3ad2a4dfu, 0xd90a1e90u, 0x77419841u,
    0x157911f2u, 0xb3b08ba3u, 0x51e80554u, 0xf01f7f05u, 0x8e56f8b6u, 0x2c8e7267u, 0xcac5ec18u, 0x68fd65c9u,
    0x0734df7au, 0xa56c592bu, 0x43a3d2dcu, 0xe1db4c8du, 0x8012c63eu, 0x1e4a3fefu, 0xbc81b9a0u, 0x5ab93351u,
    0xf8f0ad02u, 0x972826b3u, 0x355fa064u, 0xd3971a15u, 0x71ce93c6u, 0x10060d77u, 0xae3d8728u, 0x4c7500d9u,
    0xeaac7a8au, 0x88e3f43bu, 0x271b6decu, 0xc552e79du, 0x638a614eu, 0x01c1daffu, 0x9ff954b0u, 0x3e30ce61u,
};

static const uint32_t bshim_053_tab4[96] = {
    0x0949ba73u, 0xa7813424u, 0x45b8add5u, 0xe3f02786u, 0x8227a137u, 0x205f1ae8u, 0xbe969499u, 0x5cce0e4au,
    0xfb0587fbu, 0x993d01acu, 0x37747b5du, 0xd5abf50eu, 0x73e36ebfu, 0x121ae870u, 0xb0526221u, 0x4e89dbd2u,
    0xecc15583u, 0x8af8cf34u, 0x293048e5u, 0xc767c296u, 0x659f3c47u, 0x03d6b5f8u, 0xa20e2fa9u, 0x4045a95au,
    0xde7d230bu, 0x7cb49cbcu, 0x1aec166du, 0xb923901eu, 0x575b09cfu, 0xf5928380u, 0x93c9fd31u, 0x320176e2u,
    0xd038f093u, 0x6e706a44u, 0x0ca7e3f5u, 0xaadf5da6u, 0x4916d757u, 0xe74e5108u, 0x8585cab9u, 0x23bd446au,
    0xc1f4be1bu, 0x602c37ccu, 0xfe63b17du, 0x9c9b2b2eu, 0x3ad2a4dfu, 0xd90a1e90u, 0x77419841u, 0x157911f2u,
    0xb3b08ba3u, 0x51e80554u, 0xf01f7f05u, 0x8e56f8b6u, 0x2c8e7267u, 0xcac5ec18u, 0x68fd65c9u, 0x0734df7au,
    0xa56c592bu, 0x43a3d2dcu, 0xe1db4c8du, 0x8012c63eu, 0x1e4a3fefu, 0xbc81b9a0u, 0x5ab93351u, 0xf8f0ad02u,
    0x972826b3u, 0x355fa064u, 0xd3971a15u, 0x71ce93c6u, 0x10060d77u, 0xae3d8728u, 0x4c7500d9u, 0xeaac7a8au,
    0x88e3f43bu, 0x271b6decu, 0xc552e79du, 0x638a614eu, 0x01c1daffu, 0x9ff954b0u, 0x3e30ce61u, 0xdc684812u,
    0x7a9fc1c3u, 0x18d73b74u, 0xb70eb525u, 0x55462ed6u, 0xf37da887u, 0x91b52238u, 0x2fec9be9u, 0xce24159au,
    0x6c5b8f4bu, 0x0a9308fcu, 0xa8ca82adu, 0x4701fc5eu, 0xe539760fu, 0x8370efc0u, 0x21a86971u, 0xbfdfe322u,
};

static const uint32_t bshim_053_tab5[96] = {
    0x8af8cf34u, 0x293048e5u, 0xc767c296u, 0x659f3c47u, 0x03d6b5f8u, 0xa20e2fa9u, 0x4045a95au, 0xde7d230bu,
    0x7cb49cbcu, 0x1aec166du, 0xb923901eu, 0x575b09cfu, 0xf5928380u, 0x93c9fd31u, 0x320176e2u, 0xd038f093u,
    0x6e706a44u, 0x0ca7e3f5u, 0xaadf5da6u, 0x4916d757u, 0xe74e5108u, 0x8585cab9u, 0x23bd446au, 0xc1f4be1bu,
    0x602c37ccu, 0xfe63b17du, 0x9c9b2b2eu, 0x3ad2a4dfu, 0xd90a1e90u, 0x77419841u, 0x157911f2u, 0xb3b08ba3u,
    0x51e80554u, 0xf01f7f05u, 0x8e56f8b6u, 0x2c8e7267u, 0xcac5ec18u, 0x68fd65c9u, 0x0734df7au, 0xa56c592bu,
    0x43a3d2dcu, 0xe1db4c8du, 0x8012c63eu, 0x1e4a3fefu, 0xbc81b9a0u, 0x5ab93351u, 0xf8f0ad02u, 0x972826b3u,
    0x355fa064u, 0xd3971a15u, 0x71ce93c6u, 0x10060d77u, 0xae3d8728u, 0x4c7500d9u, 0xeaac7a8au, 0x88e3f43bu,
    0x271b6decu, 0xc552e79du, 0x638a614eu, 0x01c1daffu, 0x9ff954b0u, 0x3e30ce61u, 0xdc684812u, 0x7a9fc1c3u,
    0x18d73b74u, 0xb70eb525u, 0x55462ed6u, 0xf37da887u, 0x91b52238u, 0x2fec9be9u, 0xce24159au, 0x6c5b8f4bu,
    0x0a9308fcu, 0xa8ca82adu, 0x4701fc5eu, 0xe539760fu, 0x8370efc0u, 0x21a86971u, 0xbfdfe322u, 0x5e175cd3u,
    0xfc4ed684u, 0x9a865035u, 0x38bdc9e6u, 0xd6f54397u, 0x752cbd48u, 0x136436f9u, 0xb19bb0aau, 0x4fd32a5bu,
    0xee0aa40cu, 0x8c421dbdu, 0x2a79976eu, 0xc8b1111fu, 0x66e88ad0u, 0x05200481u, 0xa3577e32u, 0x418ef7e3u,
};

static const uint32_t bshim_053_tab6[96] = {
    0x0ca7e3f5u, 0xaadf5da6u, 0x4916d757u, 0xe74e5108u, 0x8585cab9u, 0x23bd446au, 0xc1f4be1bu, 0x602c37ccu,
    0xfe63b17du, 0x9c9b2b2eu, 0x3ad2a4dfu, 0xd90a1e90u, 0x77419841u, 0x157911f2u, 0xb3b08ba3u, 0x51e80554u,
    0xf01f7f05u, 0x8e56f8b6u, 0x2c8e7267u, 0xcac5ec18u, 0x68fd65c9u, 0x0734df7au, 0xa56c592bu, 0x43a3d2dcu,
    0xe1db4c8du, 0x8012c63eu, 0x1e4a3fefu, 0xbc81b9a0u, 0x5ab93351u, 0xf8f0ad02u, 0x972826b3u, 0x355fa064u,
    0xd3971a15u, 0x71ce93c6u, 0x10060d77u, 0xae3d8728u, 0x4c7500d9u, 0xeaac7a8au, 0x88e3f43bu, 0x271b6decu,
    0xc552e79du, 0x638a614eu, 0x01c1daffu, 0x9ff954b0u, 0x3e30ce61u, 0xdc684812u, 0x7a9fc1c3u, 0x18d73b74u,
    0xb70eb525u, 0x55462ed6u, 0xf37da887u, 0x91b52238u, 0x2fec9be9u, 0xce24159au, 0x6c5b8f4bu, 0x0a9308fcu,
    0xa8ca82adu, 0x4701fc5eu, 0xe539760fu, 0x8370efc0u, 0x21a86971u, 0xbfdfe322u, 0x5e175cd3u, 0xfc4ed684u,
    0x9a865035u, 0x38bdc9e6u, 0xd6f54397u, 0x752cbd48u, 0x136436f9u, 0xb19bb0aau, 0x4fd32a5bu, 0xee0aa40cu,
    0x8c421dbdu, 0x2a79976eu, 0xc8b1111fu, 0x66e88ad0u, 0x05200481u, 0xa3577e32u, 0x418ef7e3u, 0xdfc67194u,
    0x7dfdeb45u, 0x1c3564f6u, 0xba6cdea7u, 0x58a45858u, 0xf6dbd209u, 0x95134bbau, 0x334ac56bu, 0xd1823f1cu,
    0x6fb9b8cdu, 0x0df1327eu, 0xac28ac2fu, 0x4a6025e0u, 0xe8979f91u, 0x86cf1942u, 0x250692f3u, 0xc33e0ca4u,
};

static const uint32_t bshim_053_tab7[96] = {
    0x8e56f8b6u, 0x2c8e7267u, 0xcac5ec18u, 0x68fd65c9u, 0x0734df7au, 0xa56c592bu, 0x43a3d2dcu, 0xe1db4c8du,
    0x8012c63eu, 0x1e4a3fefu, 0xbc81b9a0u, 0x5ab93351u, 0xf8f0ad02u, 0x972826b3u, 0x355fa064u, 0xd3971a15u,
    0x71ce93c6u, 0x10060d77u, 0xae3d8728u, 0x4c7500d9u, 0xeaac7a8au, 0x88e3f43bu, 0x271b6decu, 0xc552e79du,
    0x638a614eu, 0x01c1daffu, 0x9ff954b0u, 0x3e30ce61u, 0xdc684812u, 0x7a9fc1c3u, 0x18d73b74u, 0xb70eb525u,
    0x55462ed6u, 0xf37da887u, 0x91b52238u, 0x2fec9be9u, 0xce24159au, 0x6c5b8f4bu, 0x0a9308fcu, 0xa8ca82adu,
    0x4701fc5eu, 0xe539760fu, 0x8370efc0u, 0x21a86971u, 0xbfdfe322u, 0x5e175cd3u, 0xfc4ed684u, 0x9a865035u,
    0x38bdc9e6u, 0xd6f54397u, 0x752cbd48u, 0x136436f9u, 0xb19bb0aau, 0x4fd32a5bu, 0xee0aa40cu, 0x8c421dbdu,
    0x2a79976eu, 0xc8b1111fu, 0x66e88ad0u, 0x05200481u, 0xa3577e32u, 0x418ef7e3u, 0xdfc67194u, 0x7dfdeb45u,
    0x1c3564f6u, 0xba6cdea7u, 0x58a45858u, 0xf6dbd209u, 0x95134bbau, 0x334ac56bu, 0xd1823f1cu, 0x6fb9b8cdu,
    0x0df1327eu, 0xac28ac2fu, 0x4a6025e0u, 0xe8979f91u, 0x86cf1942u, 0x250692f3u, 0xc33e0ca4u, 0x61758655u,
    0xffad0006u, 0x9de479b7u, 0x3c1bf368u, 0xda536d19u, 0x788ae6cau, 0x16c2607bu, 0xb4f9da2cu, 0x533153ddu,
    0xf168cd8eu, 0x8fa0473fu, 0x2dd7c0f0u, 0xcc0f3aa1u, 0x6a46b452u, 0x087e2e03u, 0xa6b5a7b4u, 0x44ed2165u,
};

struct bshim_053_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_053_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_053_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_053_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_053_reset(struct bshim_053_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0006677bu;
    return 0;
}

