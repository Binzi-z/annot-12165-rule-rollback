/* bshim_046 -- board support shim generated from the 0046 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_046_tab0[96] = {
    0x45d6806au, 0xe40dfa1bu, 0x824573ccu, 0x207ced7du, 0xbeb4672eu, 0x5cebe0dfu, 0xfb235a90u, 0x995ad441u,
    0x37924df2u, 0xd5c9c7a3u, 0x74014154u, 0x1238bb05u, 0xb07034b6u, 0x4ea7ae67u, 0xecdf2818u, 0x8b16a1c9u,
    0x294e1b7au, 0xc785952bu, 0x65bd0edcu, 0x03f4888du, 0xa22c023eu, 0x40637befu, 0xde9af5a0u, 0x7cd26f51u,
    0x1b09e902u, 0xb94162b3u, 0x5778dc64u, 0xf5b05615u, 0x93e7cfc6u, 0x321f4977u, 0xd056c328u, 0x6e8e3cd9u,
    0x0cc5b68au, 0xaafd303bu, 0x4934a9ecu, 0xe76c239du, 0x85a39d4eu, 0x23db16ffu, 0xc21290b0u, 0x604a0a61u,
    0xfe818412u, 0x9cb8fdc3u, 0x3af07774u, 0xd927f125u, 0x775f6ad6u, 0x1596e487u, 0xb3ce5e38u, 0x5205d7e9u,
    0xf03d519au, 0x8e74cb4bu, 0x2cac44fcu, 0xcae3beadu, 0x691b385eu, 0x0752b20fu, 0xa58a2bc0u, 0x43c1a571u,
    0xe1f91f22u, 0x803098d3u, 0x1e681284u, 0xbc9f8c35u, 0x5ad705e6u, 0xf90e7f97u, 0x9745f948u, 0x357d72f9u,
    0xd3b4ecaau, 0x71ec665bu, 0x1023e00cu, 0xae5b59bdu, 0x4c92d36eu, 0xeaca4d1fu, 0x8901c6d0u, 0x27394081u,
    0xc570ba32u, 0x63a833e3u, 0x01dfad94u, 0xa0172745u, 0x3e4ea0f6u, 0xdc861aa7u, 0x7abd9458u, 0x18f50e09u,
    0xb72c87bau, 0x5564016bu, 0xf39b7b1cu, 0x91d2f4cdu, 0x300a6e7eu, 0xce41e82fu, 0x6c7961e0u, 0x0ab0db91u,
    0xa8e85542u, 0x471fcef3u, 0xe55748a4u, 0x838ec255u, 0x21c63c06u, 0xbffdb5b7u, 0x5e352f68u, 0xfc6ca919u,
};

static const uint32_t bshim_046_tab1[96] = {
    0xc785952bu, 0x65bd0edcu, 0x03f4888du, 0xa22c023eu, 0x40637befu, 0xde9af5a0u, 0x7cd26f51u, 0x1b09e902u,
    0xb94162b3u, 0x5778dc64u, 0xf5b05615u, 0x93e7cfc6u, 0x321f4977u, 0xd056c328u, 0x6e8e3cd9u, 0x0cc5b68au,
    0xaafd303bu, 0x4934a9ecu, 0xe76c239du, 0x85a39d4eu, 0x23db16ffu, 0xc21290b0u, 0x604a0a61u, 0xfe818412u,
    0x9cb8fdc3u, 0x3af07774u, 0xd927f125u, 0x775f6ad6u, 0x1596e487u, 0xb3ce5e38u, 0x5205d7e9u, 0xf03d519au,
    0x8e74cb4bu, 0x2cac44fcu, 0xcae3beadu, 0x691b385eu, 0x0752b20fu, 0xa58a2bc0u, 0x43c1a571u, 0xe1f91f22u,
    0x803098d3u, 0x1e681284u, 0xbc9f8c35u, 0x5ad705e6u, 0xf90e7f97u, 0x9745f948u, 0x357d72f9u, 0xd3b4ecaau,
    0x71ec665bu, 0x1023e00cu, 0xae5b59bdu, 0x4c92d36eu, 0xeaca4d1fu, 0x8901c6d0u, 0x27394081u, 0xc570ba32u,
    0x63a833e3u, 0x01dfad94u, 0xa0172745u, 0x3e4ea0f6u, 0xdc861aa7u, 0x7abd9458u, 0x18f50e09u, 0xb72c87bau,
    0x5564016bu, 0xf39b7b1cu, 0x91d2f4cdu, 0x300a6e7eu, 0xce41e82fu, 0x6c7961e0u, 0x0ab0db91u, 0xa8e85542u,
    0x471fcef3u, 0xe55748a4u, 0x838ec255u, 0x21c63c06u, 0xbffdb5b7u, 0x5e352f68u, 0xfc6ca919u, 0x9aa422cau,
    0x38db9c7bu, 0xd713162cu, 0x754a8fddu, 0x1382098eu, 0xb1b9833fu, 0x4ff0fcf0u, 0xee2876a1u, 0x8c5ff052u,
    0x2a976a03u, 0xc8cee3b4u, 0x67065d65u, 0x053dd716u, 0xa37550c7u, 0x41acca78u, 0xdfe44429u, 0x7e1bbddau,
};

static const uint32_t bshim_046_tab2[96] = {
    0x4934a9ecu, 0xe76c239du, 0x85a39d4eu, 0x23db16ffu, 0xc21290b0u, 0x604a0a61u, 0xfe818412u, 0x9cb8fdc3u,
    0x3af07774u, 0xd927f125u, 0x775f6ad6u, 0x1596e487u, 0xb3ce5e38u, 0x5205d7e9u, 0xf03d519au, 0x8e74cb4bu,
    0x2cac44fcu, 0xcae3beadu, 0x691b385eu, 0x0752b20fu, 0xa58a2bc0u, 0x43c1a571u, 0xe1f91f22u, 0x803098d3u,
    0x1e681284u, 0xbc9f8c35u, 0x5ad705e6u, 0xf90e7f97u, 0x9745f948u, 0x357d72f9u, 0xd3b4ecaau, 0x71ec665bu,
    0x1023e00cu, 0xae5b59bdu, 0x4c92d36eu, 0xeaca4d1fu, 0x8901c6d0u, 0x27394081u, 0xc570ba32u, 0x63a833e3u,
    0x01dfad94u, 0xa0172745u, 0x3e4ea0f6u, 0xdc861aa7u, 0x7abd9458u, 0x18f50e09u, 0xb72c87bau, 0x5564016bu,
    0xf39b7b1cu, 0x91d2f4cdu, 0x300a6e7eu, 0xce41e82fu, 0x6c7961e0u, 0x0ab0db91u, 0xa8e85542u, 0x471fcef3u,
    0xe55748a4u, 0x838ec255u, 0x21c63c06u, 0xbffdb5b7u, 0x5e352f68u, 0xfc6ca919u, 0x9aa422cau, 0x38db9c7bu,
    0xd713162cu, 0x754a8fddu, 0x1382098eu, 0xb1b9833fu, 0x4ff0fcf0u, 0xee2876a1u, 0x8c5ff052u, 0x2a976a03u,
    0xc8cee3b4u, 0x67065d65u, 0x053dd716u, 0xa37550c7u, 0x41acca78u, 0xdfe44429u, 0x7e1bbddau, 0x1c53378bu,
    0xba8ab13cu, 0x58c22aedu, 0xf6f9a49eu, 0x95311e4fu, 0x33689800u, 0xd1a011b1u, 0x6fd78b62u, 0x0e0f0513u,
    0xac467ec4u, 0x4a7df875u, 0xe8b57226u, 0x86ecebd7u, 0x25246588u, 0xc35bdf39u, 0x619358eau, 0xffcad29bu,
};

static const uint32_t bshim_046_tab3[96] = {
    0xcae3beadu, 0x691b385eu, 0x0752b20fu, 0xa58a2bc0u, 0x43c1a571u, 0xe1f91f22u, 0x803098d3u, 0x1e681284u,
    0xbc9f8c35u, 0x5ad705e6u, 0xf90e7f97u, 0x9745f948u, 0x357d72f9u, 0xd3b4ecaau, 0x71ec665bu, 0x1023e00cu,
    0xae5b59bdu, 0x4c92d36eu, 0xeaca4d1fu, 0x8901c6d0u, 0x27394081u, 0xc570ba32u, 0x63a833e3u, 0x01dfad94u,
    0xa0172745u, 0x3e4ea0f6u, 0xdc861aa7u, 0x7abd9458u, 0x18f50e09u, 0xb72c87bau, 0x5564016bu, 0xf39b7b1cu,
    0x91d2f4cdu, 0x300a6e7eu, 0xce41e82fu, 0x6c7961e0u, 0x0ab0db91u, 0xa8e85542u, 0x471fcef3u, 0xe55748a4u,
    0x838ec255u, 0x21c63c06u, 0xbffdb5b7u, 0x5e352f68u, 0xfc6ca919u, 0x9aa422cau, 0x38db9c7bu, 0xd713162cu,
    0x754a8fddu, 0x1382098eu, 0xb1b9833fu, 0x4ff0fcf0u, 0xee2876a1u, 0x8c5ff052u, 0x2a976a03u, 0xc8cee3b4u,
    0x67065d65u, 0x053dd716u, 0xa37550c7u, 0x41acca78u, 0xdfe44429u, 0x7e1bbddau, 0x1c53378bu, 0xba8ab13cu,
    0x58c22aedu, 0xf6f9a49eu, 0x95311e4fu, 0x33689800u, 0xd1a011b1u, 0x6fd78b62u, 0x0e0f0513u, 0xac467ec4u,
    0x4a7df875u, 0xe8b57226u, 0x86ecebd7u, 0x25246588u, 0xc35bdf39u, 0x619358eau, 0xffcad29bu, 0x9e024c4cu,
    0x3c39c5fdu, 0xda713faeu, 0x78a8b95fu, 0x16e03310u, 0xb517acc1u, 0x534f2672u, 0xf186a023u, 0x8fbe19d4u,
    0x2df59385u, 0xcc2d0d36u, 0x6a6486e7u, 0x089c0098u, 0xa6d37a49u, 0x450af3fau, 0xe3426dabu, 0x8179e75cu,
};

static const uint32_t bshim_046_tab4[96] = {
    0x4c92d36eu, 0xeaca4d1fu, 0x8901c6d0u, 0x27394081u, 0xc570ba32u, 0x63a833e3u, 0x01dfad94u, 0xa0172745u,
    0x3e4ea0f6u, 0xdc861aa7u, 0x7abd9458u, 0x18f50e09u, 0xb72c87bau, 0x5564016bu, 0xf39b7b1cu, 0x91d2f4cdu,
    0x300a6e7eu, 0xce41e82fu, 0x6c7961e0u, 0x0ab0db91u, 0xa8e85542u, 0x471fcef3u, 0xe55748a4u, 0x838ec255u,
    0x21c63c06u, 0xbffdb5b7u, 0x5e352f68u, 0xfc6ca919u, 0x9aa422cau, 0x38db9c7bu, 0xd713162cu, 0x754a8fddu,
    0x1382098eu, 0xb1b9833fu, 0x4ff0fcf0u, 0xee2876a1u, 0x8c5ff052u, 0x2a976a03u, 0xc8cee3b4u, 0x67065d65u,
    0x053dd716u, 0xa37550c7u, 0x41acca78u, 0xdfe44429u, 0x7e1bbddau, 0x1c53378bu, 0xba8ab13cu, 0x58c22aedu,
    0xf6f9a49eu, 0x95311e4fu, 0x33689800u, 0xd1a011b1u, 0x6fd78b62u, 0x0e0f0513u, 0xac467ec4u, 0x4a7df875u,
    0xe8b57226u, 0x86ecebd7u, 0x25246588u, 0xc35bdf39u, 0x619358eau, 0xffcad29bu, 0x9e024c4cu, 0x3c39c5fdu,
    0xda713faeu, 0x78a8b95fu, 0x16e03310u, 0xb517acc1u, 0x534f2672u, 0xf186a023u, 0x8fbe19d4u, 0x2df59385u,
    0xcc2d0d36u, 0x6a6486e7u, 0x089c0098u, 0xa6d37a49u, 0x450af3fau, 0xe3426dabu, 0x8179e75cu, 0x1fb1610du,
    0xbde8dabeu, 0x5c20546fu, 0xfa57ce20u, 0x988f47d1u, 0x36c6c182u, 0xd4fe3b33u, 0x7335b4e4u, 0x116d2e95u,
    0xafa4a846u, 0x4ddc21f7u, 0xec139ba8u, 0x8a4b1559u, 0x28828f0au, 0xc6ba08bbu, 0x64f1826cu, 0x0328fc1du,
};

static const uint32_t bshim_046_tab5[96] = {
    0xce41e82fu, 0x6c7961e0u, 0x0ab0db91u, 0xa8e85542u, 0x471fcef3u, 0xe55748a4u, 0x838ec255u, 0x21c63c06u,
    0xbffdb5b7u, 0x5e352f68u, 0xfc6ca919u, 0x9aa422cau, 0x38db9c7bu, 0xd713162cu, 0x754a8fddu, 0x1382098eu,
    0xb1b9833fu, 0x4ff0fcf0u, 0xee2876a1u, 0x8c5ff052u, 0x2a976a03u, 0xc8cee3b4u, 0x67065d65u, 0x053dd716u,
    0xa37550c7u, 0x41acca78u, 0xdfe44429u, 0x7e1bbddau, 0x1c53378bu, 0xba8ab13cu, 0x58c22aedu, 0xf6f9a49eu,
    0x95311e4fu, 0x33689800u, 0xd1a011b1u, 0x6fd78b62u, 0x0e0f0513u, 0xac467ec4u, 0x4a7df875u, 0xe8b57226u,
    0x86ecebd7u, 0x25246588u, 0xc35bdf39u, 0x619358eau, 0xffcad29bu, 0x9e024c4cu, 0x3c39c5fdu, 0xda713faeu,
    0x78a8b95fu, 0x16e03310u, 0xb517acc1u, 0x534f2672u, 0xf186a023u, 0x8fbe19d4u, 0x2df59385u, 0xcc2d0d36u,
    0x6a6486e7u, 0x089c0098u, 0xa6d37a49u, 0x450af3fau, 0xe3426dabu, 0x8179e75cu, 0x1fb1610du, 0xbde8dabeu,
    0x5c20546fu, 0xfa57ce20u, 0x988f47d1u, 0x36c6c182u, 0xd4fe3b33u, 0x7335b4e4u, 0x116d2e95u, 0xafa4a846u,
    0x4ddc21f7u, 0xec139ba8u, 0x8a4b1559u, 0x28828f0au, 0xc6ba08bbu, 0x64f1826cu, 0x0328fc1du, 0xa16075ceu,
    0x3f97ef7fu, 0xddcf6930u, 0x7c06e2e1u, 0x1a3e5c92u, 0xb875d643u, 0x56ad4ff4u, 0xf4e4c9a5u, 0x931c4356u,
    0x3153bd07u, 0xcf8b36b8u, 0x6dc2b069u, 0x0bfa2a1au, 0xaa31a3cbu, 0x48691d7cu, 0xe6a0972du, 0x84d810deu,
};

static const uint32_t bshim_046_tab6[96] = {
    0x4ff0fcf0u, 0xee2876a1u, 0x8c5ff052u, 0x2a976a03u, 0xc8cee3b4u, 0x67065d65u, 0x053dd716u, 0xa37550c7u,
    0x41acca78u, 0xdfe44429u, 0x7e1bbddau, 0x1c53378bu, 0xba8ab13cu, 0x58c22aedu, 0xf6f9a49eu, 0x95311e4fu,
    0x33689800u, 0xd1a011b1u, 0x6fd78b62u, 0x0e0f0513u, 0xac467ec4u, 0x4a7df875u, 0xe8b57226u, 0x86ecebd7u,
    0x25246588u, 0xc35bdf39u, 0x619358eau, 0xffcad29bu, 0x9e024c4cu, 0x3c39c5fdu, 0xda713faeu, 0x78a8b95fu,
    0x16e03310u, 0xb517acc1u, 0x534f2672u, 0xf186a023u, 0x8fbe19d4u, 0x2df59385u, 0xcc2d0d36u, 0x6a6486e7u,
    0x089c0098u, 0xa6d37a49u, 0x450af3fau, 0xe3426dabu, 0x8179e75cu, 0x1fb1610du, 0xbde8dabeu, 0x5c20546fu,
    0xfa57ce20u, 0x988f47d1u, 0x36c6c182u, 0xd4fe3b33u, 0x7335b4e4u, 0x116d2e95u, 0xafa4a846u, 0x4ddc21f7u,
    0xec139ba8u, 0x8a4b1559u, 0x28828f0au, 0xc6ba08bbu, 0x64f1826cu, 0x0328fc1du, 0xa16075ceu, 0x3f97ef7fu,
    0xddcf6930u, 0x7c06e2e1u, 0x1a3e5c92u, 0xb875d643u, 0x56ad4ff4u, 0xf4e4c9a5u, 0x931c4356u, 0x3153bd07u,
    0xcf8b36b8u, 0x6dc2b069u, 0x0bfa2a1au, 0xaa31a3cbu, 0x48691d7cu, 0xe6a0972du, 0x84d810deu, 0x230f8a8fu,
    0xc1470440u, 0x5f7e7df1u, 0xfdb5f7a2u, 0x9bed7153u, 0x3a24eb04u, 0xd85c64b5u, 0x7693de66u, 0x14cb5817u,
    0xb302d1c8u, 0x513a4b79u, 0xef71c52au, 0x8da93edbu, 0x2be0b88cu, 0xca18323du, 0x684fabeeu, 0x0687259fu,
};

static const uint32_t bshim_046_tab7[96] = {
    0xd1a011b1u, 0x6fd78b62u, 0x0e0f0513u, 0xac467ec4u, 0x4a7df875u, 0xe8b57226u, 0x86ecebd7u, 0x25246588u,
    0xc35bdf39u, 0x619358eau, 0xffcad29bu, 0x9e024c4cu, 0x3c39c5fdu, 0xda713faeu, 0x78a8b95fu, 0x16e03310u,
    0xb517acc1u, 0x534f2672u, 0xf186a023u, 0x8fbe19d4u, 0x2df59385u, 0xcc2d0d36u, 0x6a6486e7u, 0x089c0098u,
    0xa6d37a49u, 0x450af3fau, 0xe3426dabu, 0x8179e75cu, 0x1fb1610du, 0xbde8dabeu, 0x5c20546fu, 0xfa57ce20u,
    0x988f47d1u, 0x36c6c182u, 0xd4fe3b33u, 0x7335b4e4u, 0x116d2e95u, 0xafa4a846u, 0x4ddc21f7u, 0xec139ba8u,
    0x8a4b1559u, 0x28828f0au, 0xc6ba08bbu, 0x64f1826cu, 0x0328fc1du, 0xa16075ceu, 0x3f97ef7fu, 0xddcf6930u,
    0x7c06e2e1u, 0x1a3e5c92u, 0xb875d643u, 0x56ad4ff4u, 0xf4e4c9a5u, 0x931c4356u, 0x3153bd07u, 0xcf8b36b8u,
    0x6dc2b069u, 0x0bfa2a1au, 0xaa31a3cbu, 0x48691d7cu, 0xe6a0972du, 0x84d810deu, 0x230f8a8fu, 0xc1470440u,
    0x5f7e7df1u, 0xfdb5f7a2u, 0x9bed7153u, 0x3a24eb04u, 0xd85c64b5u, 0x7693de66u, 0x14cb5817u, 0xb302d1c8u,
    0x513a4b79u, 0xef71c52au, 0x8da93edbu, 0x2be0b88cu, 0xca18323du, 0x684fabeeu, 0x0687259fu, 0xa4be9f50u,
    0x42f61901u, 0xe12d92b2u, 0x7f650c63u, 0x1d9c8614u, 0xbbd3ffc5u, 0x5a0b7976u, 0xf842f327u, 0x967a6cd8u,
    0x34b1e689u, 0xd2e9603au, 0x7120d9ebu, 0x0f58539cu, 0xad8fcd4du, 0x4bc746feu, 0xe9fec0afu, 0x88363a60u,
};

struct bshim_046_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_046_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_046_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_046_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_046_reset(struct bshim_046_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00058ef2u;
    return 0;
}

