/* bshim_132 -- board support shim generated from the 0132 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_132_tab0[96] = {
    0x0b2fdfccu, 0xa967597du, 0x479ed32eu, 0xe5d64cdfu, 0x840dc690u, 0x22454041u, 0xc07cb9f2u, 0x5eb433a3u,
    0xfcebad54u, 0x9b232705u, 0x395aa0b6u, 0xd7921a67u, 0x75c99418u, 0x14010dc9u, 0xb238877au, 0x5070012bu,
    0xeea77adcu, 0x8cdef48du, 0x2b166e3eu, 0xc94de7efu, 0x678561a0u, 0x05bcdb51u, 0xa3f45502u, 0x422bceb3u,
    0xe0634864u, 0x7e9ac215u, 0x1cd23bc6u, 0xbb09b577u, 0x59412f28u, 0xf778a8d9u, 0x95b0228au, 0x33e79c3bu,
    0xd21f15ecu, 0x70568f9du, 0x0e8e094eu, 0xacc582ffu, 0x4afcfcb0u, 0xe9347661u, 0x876bf012u, 0x25a369c3u,
    0xc3dae374u, 0x62125d25u, 0x0049d6d6u, 0x9e815087u, 0x3cb8ca38u, 0xdaf043e9u, 0x7927bd9au, 0x175f374bu,
    0xb596b0fcu, 0x53ce2aadu, 0xf205a45eu, 0x903d1e0fu, 0x2e7497c0u, 0xccac1171u, 0x6ae38b22u, 0x091b04d3u,
    0xa7527e84u, 0x4589f835u, 0xe3c171e6u, 0x81f8eb97u, 0x20306548u, 0xbe67def9u, 0x5c9f58aau, 0xfad6d25bu,
    0x990e4c0cu, 0x3745c5bdu, 0xd57d3f6eu, 0x73b4b91fu, 0x11ec32d0u, 0xb023ac81u, 0x4e5b2632u, 0xec929fe3u,
    0x8aca1994u, 0x29019345u, 0xc7390cf6u, 0x657086a7u, 0x03a80058u, 0xa1df7a09u, 0x4016f3bau, 0xde4e6d6bu,
    0x7c85e71cu, 0x1abd60cdu, 0xb8f4da7eu, 0x572c542fu, 0xf563cde0u, 0x939b4791u, 0x31d2c142u, 0xd00a3af3u,
    0x6e41b4a4u, 0x0c792e55u, 0xaab0a806u, 0x48e821b7u, 0xe71f9b68u, 0x85571519u, 0x238e8ecau, 0xc1c6087bu,
};

static const uint32_t bshim_132_tab1[96] = {
    0x8cdef48du, 0x2b166e3eu, 0xc94de7efu, 0x678561a0u, 0x05bcdb51u, 0xa3f45502u, 0x422bceb3u, 0xe0634864u,
    0x7e9ac215u, 0x1cd23bc6u, 0xbb09b577u, 0x59412f28u, 0xf778a8d9u, 0x95b0228au, 0x33e79c3bu, 0xd21f15ecu,
    0x70568f9du, 0x0e8e094eu, 0xacc582ffu, 0x4afcfcb0u, 0xe9347661u, 0x876bf012u, 0x25a369c3u, 0xc3dae374u,
    0x62125d25u, 0x0049d6d6u, 0x9e815087u, 0x3cb8ca38u, 0xdaf043e9u, 0x7927bd9au, 0x175f374bu, 0xb596b0fcu,
    0x53ce2aadu, 0xf205a45eu, 0x903d1e0fu, 0x2e7497c0u, 0xccac1171u, 0x6ae38b22u, 0x091b04d3u, 0xa7527e84u,
    0x4589f835u, 0xe3c171e6u, 0x81f8eb97u, 0x20306548u, 0xbe67def9u, 0x5c9f58aau, 0xfad6d25bu, 0x990e4c0cu,
    0x3745c5bdu, 0xd57d3f6eu, 0x73b4b91fu, 0x11ec32d0u, 0xb023ac81u, 0x4e5b2632u, 0xec929fe3u, 0x8aca1994u,
    0x29019345u, 0xc7390cf6u, 0x657086a7u, 0x03a80058u, 0xa1df7a09u, 0x4016f3bau, 0xde4e6d6bu, 0x7c85e71cu,
    0x1abd60cdu, 0xb8f4da7eu, 0x572c542fu, 0xf563cde0u, 0x939b4791u, 0x31d2c142u, 0xd00a3af3u, 0x6e41b4a4u,
    0x0c792e55u, 0xaab0a806u, 0x48e821b7u, 0xe71f9b68u, 0x85571519u, 0x238e8ecau, 0xc1c6087bu, 0x5ffd822cu,
    0xfe34fbddu, 0x9c6c758eu, 0x3aa3ef3fu, 0xd8db68f0u, 0x7712e2a1u, 0x154a5c52u, 0xb381d603u, 0x51b94fb4u,
    0xeff0c965u, 0x8e284316u, 0x2c5fbcc7u, 0xca973678u, 0x68ceb029u, 0x070629dau, 0xa53da38bu, 0x43751d3cu,
};

static const uint32_t bshim_132_tab2[96] = {
    0x0e8e094eu, 0xacc582ffu, 0x4afcfcb0u, 0xe9347661u, 0x876bf012u, 0x25a369c3u, 0xc3dae374u, 0x62125d25u,
    0x0049d6d6u, 0x9e815087u, 0x3cb8ca38u, 0xdaf043e9u, 0x7927bd9au, 0x175f374bu, 0xb596b0fcu, 0x53ce2aadu,
    0xf205a45eu, 0x903d1e0fu, 0x2e7497c0u, 0xccac1171u, 0x6ae38b22u, 0x091b04d3u, 0xa7527e84u, 0x4589f835u,
    0xe3c171e6u, 0x81f8eb97u, 0x20306548u, 0xbe67def9u, 0x5c9f58aau, 0xfad6d25bu, 0x990e4c0cu, 0x3745c5bdu,
    0xd57d3f6eu, 0x73b4b91fu, 0x11ec32d0u, 0xb023ac81u, 0x4e5b2632u, 0xec929fe3u, 0x8aca1994u, 0x29019345u,
    0xc7390cf6u, 0x657086a7u, 0x03a80058u, 0xa1df7a09u, 0x4016f3bau, 0xde4e6d6bu, 0x7c85e71cu, 0x1abd60cdu,
    0xb8f4da7eu, 0x572c542fu, 0xf563cde0u, 0x939b4791u, 0x31d2c142u, 0xd00a3af3u, 0x6e41b4a4u, 0x0c792e55u,
    0xaab0a806u, 0x48e821b7u, 0xe71f9b68u, 0x85571519u, 0x238e8ecau, 0xc1c6087bu, 0x5ffd822cu, 0xfe34fbddu,
    0x9c6c758eu, 0x3aa3ef3fu, 0xd8db68f0u, 0x7712e2a1u, 0x154a5c52u, 0xb381d603u, 0x51b94fb4u, 0xeff0c965u,
    0x8e284316u, 0x2c5fbcc7u, 0xca973678u, 0x68ceb029u, 0x070629dau, 0xa53da38bu, 0x43751d3cu, 0xe1ac96edu,
    0x7fe4109eu, 0x1e1b8a4fu, 0xbc530400u, 0x5a8a7db1u, 0xf8c1f762u, 0x96f97113u, 0x3530eac4u, 0xd3686475u,
    0x719fde26u, 0x0fd757d7u, 0xae0ed188u, 0x4c464b39u, 0xea7dc4eau, 0x88b53e9bu, 0x26ecb84cu, 0xc52431fdu,
};

static const uint32_t bshim_132_tab3[96] = {
    0x903d1e0fu, 0x2e7497c0u, 0xccac1171u, 0x6ae38b22u, 0x091b04d3u, 0xa7527e84u, 0x4589f835u, 0xe3c171e6u,
    0x81f8eb97u, 0x20306548u, 0xbe67def9u, 0x5c9f58aau, 0xfad6d25bu, 0x990e4c0cu, 0x3745c5bdu, 0xd57d3f6eu,
    0x73b4b91fu, 0x11ec32d0u, 0xb023ac81u, 0x4e5b2632u, 0xec929fe3u, 0x8aca1994u, 0x29019345u, 0xc7390cf6u,
    0x657086a7u, 0x03a80058u, 0xa1df7a09u, 0x4016f3bau, 0xde4e6d6bu, 0x7c85e71cu, 0x1abd60cdu, 0xb8f4da7eu,
    0x572c542fu, 0xf563cde0u, 0x939b4791u, 0x31d2c142u, 0xd00a3af3u, 0x6e41b4a4u, 0x0c792e55u, 0xaab0a806u,
    0x48e821b7u, 0xe71f9b68u, 0x85571519u, 0x238e8ecau, 0xc1c6087bu, 0x5ffd822cu, 0xfe34fbddu, 0x9c6c758eu,
    0x3aa3ef3fu, 0xd8db68f0u, 0x7712e2a1u, 0x154a5c52u, 0xb381d603u, 0x51b94fb4u, 0xeff0c965u, 0x8e284316u,
    0x2c5fbcc7u, 0xca973678u, 0x68ceb029u, 0x070629dau, 0xa53da38bu, 0x43751d3cu, 0xe1ac96edu, 0x7fe4109eu,
    0x1e1b8a4fu, 0xbc530400u, 0x5a8a7db1u, 0xf8c1f762u, 0x96f97113u, 0x3530eac4u, 0xd3686475u, 0x719fde26u,
    0x0fd757d7u, 0xae0ed188u, 0x4c464b39u, 0xea7dc4eau, 0x88b53e9bu, 0x26ecb84cu, 0xc52431fdu, 0x635babaeu,
    0x0193255fu, 0x9fca9f10u, 0x3e0218c1u, 0xdc399272u, 0x7a710c23u, 0x18a885d4u, 0xb6dfff85u, 0x55177936u,
    0xf34ef2e7u, 0x91866c98u, 0x2fbde649u, 0xcdf55ffau, 0x6c2cd9abu, 0x0a64535cu, 0xa89bcd0du, 0x46d346beu,
};

static const uint32_t bshim_132_tab4[96] = {
    0x11ec32d0u, 0xb023ac81u, 0x4e5b2632u, 0xec929fe3u, 0x8aca1994u, 0x29019345u, 0xc7390cf6u, 0x657086a7u,
    0x03a80058u, 0xa1df7a09u, 0x4016f3bau, 0xde4e6d6bu, 0x7c85e71cu, 0x1abd60cdu, 0xb8f4da7eu, 0x572c542fu,
    0xf563cde0u, 0x939b4791u, 0x31d2c142u, 0xd00a3af3u, 0x6e41b4a4u, 0x0c792e55u, 0xaab0a806u, 0x48e821b7u,
    0xe71f9b68u, 0x85571519u, 0x238e8ecau, 0xc1c6087bu, 0x5ffd822cu, 0xfe34fbddu, 0x9c6c758eu, 0x3aa3ef3fu,
    0xd8db68f0u, 0x7712e2a1u, 0x154a5c52u, 0xb381d603u, 0x51b94fb4u, 0xeff0c965u, 0x8e284316u, 0x2c5fbcc7u,
    0xca973678u, 0x68ceb029u, 0x070629dau, 0xa53da38bu, 0x43751d3cu, 0xe1ac96edu, 0x7fe4109eu, 0x1e1b8a4fu,
    0xbc530400u, 0x5a8a7db1u, 0xf8c1f762u, 0x96f97113u, 0x3530eac4u, 0xd3686475u, 0x719fde26u, 0x0fd757d7u,
    0xae0ed188u, 0x4c464b39u, 0xea7dc4eau, 0x88b53e9bu, 0x26ecb84cu, 0xc52431fdu, 0x635babaeu, 0x0193255fu,
    0x9fca9f10u, 0x3e0218c1u, 0xdc399272u, 0x7a710c23u, 0x18a885d4u, 0xb6dfff85u, 0x55177936u, 0xf34ef2e7u,
    0x91866c98u, 0x2fbde649u, 0xcdf55ffau, 0x6c2cd9abu, 0x0a64535cu, 0xa89bcd0du, 0x46d346beu, 0xe50ac06fu,
    0x83423a20u, 0x2179b3d1u, 0xbfb12d82u, 0x5de8a733u, 0xfc2020e4u, 0x9a579a95u, 0x388f1446u, 0xd6c68df7u,
    0x74fe07a8u, 0x13358159u, 0xb16cfb0au, 0x4fa474bbu, 0xeddbee6cu, 0x8c13681du, 0x2a4ae1ceu, 0xc8825b7fu,
};

static const uint32_t bshim_132_tab5[96] = {
    0x939b4791u, 0x31d2c142u, 0xd00a3af3u, 0x6e41b4a4u, 0x0c792e55u, 0xaab0a806u, 0x48e821b7u, 0xe71f9b68u,
    0x85571519u, 0x238e8ecau, 0xc1c6087bu, 0x5ffd822cu, 0xfe34fbddu, 0x9c6c758eu, 0x3aa3ef3fu, 0xd8db68f0u,
    0x7712e2a1u, 0x154a5c52u, 0xb381d603u, 0x51b94fb4u, 0xeff0c965u, 0x8e284316u, 0x2c5fbcc7u, 0xca973678u,
    0x68ceb029u, 0x070629dau, 0xa53da38bu, 0x43751d3cu, 0xe1ac96edu, 0x7fe4109eu, 0x1e1b8a4fu, 0xbc530400u,
    0x5a8a7db1u, 0xf8c1f762u, 0x96f97113u, 0x3530eac4u, 0xd3686475u, 0x719fde26u, 0x0fd757d7u, 0xae0ed188u,
    0x4c464b39u, 0xea7dc4eau, 0x88b53e9bu, 0x26ecb84cu, 0xc52431fdu, 0x635babaeu, 0x0193255fu, 0x9fca9f10u,
    0x3e0218c1u, 0xdc399272u, 0x7a710c23u, 0x18a885d4u, 0xb6dfff85u, 0x55177936u, 0xf34ef2e7u, 0x91866c98u,
    0x2fbde649u, 0xcdf55ffau, 0x6c2cd9abu, 0x0a64535cu, 0xa89bcd0du, 0x46d346beu, 0xe50ac06fu, 0x83423a20u,
    0x2179b3d1u, 0xbfb12d82u, 0x5de8a733u, 0xfc2020e4u, 0x9a579a95u, 0x388f1446u, 0xd6c68df7u, 0x74fe07a8u,
    0x13358159u, 0xb16cfb0au, 0x4fa474bbu, 0xeddbee6cu, 0x8c13681du, 0x2a4ae1ceu, 0xc8825b7fu, 0x66b9d530u,
    0x04f14ee1u, 0xa328c892u, 0x41604243u, 0xdf97bbf4u, 0x7dcf35a5u, 0x1c06af56u, 0xba3e2907u, 0x5875a2b8u,
    0xf6ad1c69u, 0x94e4961au, 0x331c0fcbu, 0xd153897cu, 0x6f8b032du, 0x0dc27cdeu, 0xabf9f68fu, 0x4a317040u,
};

static const uint32_t bshim_132_tab6[96] = {
    0x154a5c52u, 0xb381d603u, 0x51b94fb4u, 0xeff0c965u, 0x8e284316u, 0x2c5fbcc7u, 0xca973678u, 0x68ceb029u,
    0x070629dau, 0xa53da38bu, 0x43751d3cu, 0xe1ac96edu, 0x7fe4109eu, 0x1e1b8a4fu, 0xbc530400u, 0x5a8a7db1u,
    0xf8c1f762u, 0x96f97113u, 0x3530eac4u, 0xd3686475u, 0x719fde26u, 0x0fd757d7u, 0xae0ed188u, 0x4c464b39u,
    0xea7dc4eau, 0x88b53e9bu, 0x26ecb84cu, 0xc52431fdu, 0x635babaeu, 0x0193255fu, 0x9fca9f10u, 0x3e0218c1u,
    0xdc399272u, 0x7a710c23u, 0x18a885d4u, 0xb6dfff85u, 0x55177936u, 0xf34ef2e7u, 0x91866c98u, 0x2fbde649u,
    0xcdf55ffau, 0x6c2cd9abu, 0x0a64535cu, 0xa89bcd0du, 0x46d346beu, 0xe50ac06fu, 0x83423a20u, 0x2179b3d1u,
    0xbfb12d82u, 0x5de8a733u, 0xfc2020e4u, 0x9a579a95u, 0x388f1446u, 0xd6c68df7u, 0x74fe07a8u, 0x13358159u,
    0xb16cfb0au, 0x4fa474bbu, 0xeddbee6cu, 0x8c13681du, 0x2a4ae1ceu, 0xc8825b7fu, 0x66b9d530u, 0x04f14ee1u,
    0xa328c892u, 0x41604243u, 0xdf97bbf4u, 0x7dcf35a5u, 0x1c06af56u, 0xba3e2907u, 0x5875a2b8u, 0xf6ad1c69u,
    0x94e4961au, 0x331c0fcbu, 0xd153897cu, 0x6f8b032du, 0x0dc27cdeu, 0xabf9f68fu, 0x4a317040u, 0xe868e9f1u,
    0x86a063a2u, 0x24d7dd53u, 0xc30f5704u, 0x6146d0b5u, 0xff7e4a66u, 0x9db5c417u, 0x3bed3dc8u, 0xda24b779u,
    0x785c312au, 0x1693aadbu, 0xb4cb248cu, 0x53029e3du, 0xf13a17eeu, 0x8f71919fu, 0x2da90b50u, 0xcbe08501u,
};

static const uint32_t bshim_132_tab7[96] = {
    0x96f97113u, 0x3530eac4u, 0xd3686475u, 0x719fde26u, 0x0fd757d7u, 0xae0ed188u, 0x4c464b39u, 0xea7dc4eau,
    0x88b53e9bu, 0x26ecb84cu, 0xc52431fdu, 0x635babaeu, 0x0193255fu, 0x9fca9f10u, 0x3e0218c1u, 0xdc399272u,
    0x7a710c23u, 0x18a885d4u, 0xb6dfff85u, 0x55177936u, 0xf34ef2e7u, 0x91866c98u, 0x2fbde649u, 0xcdf55ffau,
    0x6c2cd9abu, 0x0a64535cu, 0xa89bcd0du, 0x46d346beu, 0xe50ac06fu, 0x83423a20u, 0x2179b3d1u, 0xbfb12d82u,
    0x5de8a733u, 0xfc2020e4u, 0x9a579a95u, 0x388f1446u, 0xd6c68df7u, 0x74fe07a8u, 0x13358159u, 0xb16cfb0au,
    0x4fa474bbu, 0xeddbee6cu, 0x8c13681du, 0x2a4ae1ceu, 0xc8825b7fu, 0x66b9d530u, 0x04f14ee1u, 0xa328c892u,
    0x41604243u, 0xdf97bbf4u, 0x7dcf35a5u, 0x1c06af56u, 0xba3e2907u, 0x5875a2b8u, 0xf6ad1c69u, 0x94e4961au,
    0x331c0fcbu, 0xd153897cu, 0x6f8b032du, 0x0dc27cdeu, 0xabf9f68fu, 0x4a317040u, 0xe868e9f1u, 0x86a063a2u,
    0x24d7dd53u, 0xc30f5704u, 0x6146d0b5u, 0xff7e4a66u, 0x9db5c417u, 0x3bed3dc8u, 0xda24b779u, 0x785c312au,
    0x1693aadbu, 0xb4cb248cu, 0x53029e3du, 0xf13a17eeu, 0x8f71919fu, 0x2da90b50u, 0xcbe08501u, 0x6a17feb2u,
    0x084f7863u, 0xa686f214u, 0x44be6bc5u, 0xe2f5e576u, 0x812d5f27u, 0x1f64d8d8u, 0xbd9c5289u, 0x5bd3cc3au,
    0xfa0b45ebu, 0x9842bf9cu, 0x367a394du, 0xd4b1b2feu, 0x72e92cafu, 0x1120a660u, 0xaf582011u, 0x4d8f99c2u,
};

struct bshim_132_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_132_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_132_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_132_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_132_reset(struct bshim_132_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000ff33cu;
    return 0;
}

