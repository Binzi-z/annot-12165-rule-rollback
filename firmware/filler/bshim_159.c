/* bshim_159 -- board support shim generated from the 0159 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_159_tab0[96] = {
    0x07a8364du, 0xa5dfaffeu, 0x441729afu, 0xe24ea360u, 0x80861d11u, 0x1ebd96c2u, 0xbcf51073u, 0x5b2c8a24u,
    0xf96403d5u, 0x979b7d86u, 0x35d2f737u, 0xd40a70e8u, 0x7241ea99u, 0x1079644au, 0xaeb0ddfbu, 0x4ce857acu,
    0xeb1fd15du, 0x89574b0eu, 0x278ec4bfu, 0xc5c63e70u, 0x63fdb821u, 0x023531d2u, 0xa06cab83u, 0x3ea42534u,
    0xdcdb9ee5u, 0x7b131896u, 0x194a9247u, 0xb7820bf8u, 0x55b985a9u, 0xf3f0ff5au, 0x9228790bu, 0x305ff2bcu,
    0xce976c6du, 0x6ccee61eu, 0x0b065fcfu, 0xa93dd980u, 0x47755331u, 0xe5accce2u, 0x83e44693u, 0x221bc044u,
    0xc05339f5u, 0x5e8ab3a6u, 0xfcc22d57u, 0x9af9a708u, 0x393120b9u, 0xd7689a6au, 0x75a0141bu, 0x13d78dccu,
    0xb20f077du, 0x5046812eu, 0xee7dfadfu, 0x8cb57490u, 0x2aecee41u, 0xc92467f2u, 0x675be1a3u, 0x05935b54u,
    0xa3cad505u, 0x42024eb6u, 0xe039c867u, 0x7e714218u, 0x1ca8bbc9u, 0xbae0357au, 0x5917af2bu, 0xf74f28dcu,
    0x9586a28du, 0x33be1c3eu, 0xd1f595efu, 0x702d0fa0u, 0x0e648951u, 0xac9c0302u, 0x4ad37cb3u, 0xe90af664u,
    0x87427015u, 0x2579e9c6u, 0xc3b16377u, 0x61e8dd28u, 0x002056d9u, 0x9e57d08au, 0x3c8f4a3bu, 0xdac6c3ecu,
    0x78fe3d9du, 0x1735b74eu, 0xb56d30ffu, 0x53a4aab0u, 0xf1dc2461u, 0x90139e12u, 0x2e4b17c3u, 0xcc829174u,
    0x6aba0b25u, 0x08f184d6u, 0xa728fe87u, 0x45607838u, 0xe397f1e9u, 0x81cf6b9au, 0x2006e54bu, 0xbe3e5efcu,
};

static const uint32_t bshim_159_tab1[96] = {
    0x89574b0eu, 0x278ec4bfu, 0xc5c63e70u, 0x63fdb821u, 0x023531d2u, 0xa06cab83u, 0x3ea42534u, 0xdcdb9ee5u,
    0x7b131896u, 0x194a9247u, 0xb7820bf8u, 0x55b985a9u, 0xf3f0ff5au, 0x9228790bu, 0x305ff2bcu, 0xce976c6du,
    0x6ccee61eu, 0x0b065fcfu, 0xa93dd980u, 0x47755331u, 0xe5accce2u, 0x83e44693u, 0x221bc044u, 0xc05339f5u,
    0x5e8ab3a6u, 0xfcc22d57u, 0x9af9a708u, 0x393120b9u, 0xd7689a6au, 0x75a0141bu, 0x13d78dccu, 0xb20f077du,
    0x5046812eu, 0xee7dfadfu, 0x8cb57490u, 0x2aecee41u, 0xc92467f2u, 0x675be1a3u, 0x05935b54u, 0xa3cad505u,
    0x42024eb6u, 0xe039c867u, 0x7e714218u, 0x1ca8bbc9u, 0xbae0357au, 0x5917af2bu, 0xf74f28dcu, 0x9586a28du,
    0x33be1c3eu, 0xd1f595efu, 0x702d0fa0u, 0x0e648951u, 0xac9c0302u, 0x4ad37cb3u, 0xe90af664u, 0x87427015u,
    0x2579e9c6u, 0xc3b16377u, 0x61e8dd28u, 0x002056d9u, 0x9e57d08au, 0x3c8f4a3bu, 0xdac6c3ecu, 0x78fe3d9du,
    0x1735b74eu, 0xb56d30ffu, 0x53a4aab0u, 0xf1dc2461u, 0x90139e12u, 0x2e4b17c3u, 0xcc829174u, 0x6aba0b25u,
    0x08f184d6u, 0xa728fe87u, 0x45607838u, 0xe397f1e9u, 0x81cf6b9au, 0x2006e54bu, 0xbe3e5efcu, 0x5c75d8adu,
    0xfaad525eu, 0x98e4cc0fu, 0x371c45c0u, 0xd553bf71u, 0x738b3922u, 0x11c2b2d3u, 0xaffa2c84u, 0x4e31a635u,
    0xec691fe6u, 0x8aa09997u, 0x28d81348u, 0xc70f8cf9u, 0x654706aau, 0x037e805bu, 0xa1b5fa0cu, 0x3fed73bdu,
};

static const uint32_t bshim_159_tab2[96] = {
    0x0b065fcfu, 0xa93dd980u, 0x47755331u, 0xe5accce2u, 0x83e44693u, 0x221bc044u, 0xc05339f5u, 0x5e8ab3a6u,
    0xfcc22d57u, 0x9af9a708u, 0x393120b9u, 0xd7689a6au, 0x75a0141bu, 0x13d78dccu, 0xb20f077du, 0x5046812eu,
    0xee7dfadfu, 0x8cb57490u, 0x2aecee41u, 0xc92467f2u, 0x675be1a3u, 0x05935b54u, 0xa3cad505u, 0x42024eb6u,
    0xe039c867u, 0x7e714218u, 0x1ca8bbc9u, 0xbae0357au, 0x5917af2bu, 0xf74f28dcu, 0x9586a28du, 0x33be1c3eu,
    0xd1f595efu, 0x702d0fa0u, 0x0e648951u, 0xac9c0302u, 0x4ad37cb3u, 0xe90af664u, 0x87427015u, 0x2579e9c6u,
    0xc3b16377u, 0x61e8dd28u, 0x002056d9u, 0x9e57d08au, 0x3c8f4a3bu, 0xdac6c3ecu, 0x78fe3d9du, 0x1735b74eu,
    0xb56d30ffu, 0x53a4aab0u, 0xf1dc2461u, 0x90139e12u, 0x2e4b17c3u, 0xcc829174u, 0x6aba0b25u, 0x08f184d6u,
    0xa728fe87u, 0x45607838u, 0xe397f1e9u, 0x81cf6b9au, 0x2006e54bu, 0xbe3e5efcu, 0x5c75d8adu, 0xfaad525eu,
    0x98e4cc0fu, 0x371c45c0u, 0xd553bf71u, 0x738b3922u, 0x11c2b2d3u, 0xaffa2c84u, 0x4e31a635u, 0xec691fe6u,
    0x8aa09997u, 0x28d81348u, 0xc70f8cf9u, 0x654706aau, 0x037e805bu, 0xa1b5fa0cu, 0x3fed73bdu, 0xde24ed6eu,
    0x7c5c671fu, 0x1a93e0d0u, 0xb8cb5a81u, 0x5702d432u, 0xf53a4de3u, 0x9371c794u, 0x31a94145u, 0xcfe0baf6u,
    0x6e1834a7u, 0x0c4fae58u, 0xaa872809u, 0x48bea1bau, 0xe6f61b6bu, 0x852d951cu, 0x23650ecdu, 0xc19c887eu,
};

static const uint32_t bshim_159_tab3[96] = {
    0x8cb57490u, 0x2aecee41u, 0xc92467f2u, 0x675be1a3u, 0x05935b54u, 0xa3cad505u, 0x42024eb6u, 0xe039c867u,
    0x7e714218u, 0x1ca8bbc9u, 0xbae0357au, 0x5917af2bu, 0xf74f28dcu, 0x9586a28du, 0x33be1c3eu, 0xd1f595efu,
    0x702d0fa0u, 0x0e648951u, 0xac9c0302u, 0x4ad37cb3u, 0xe90af664u, 0x87427015u, 0x2579e9c6u, 0xc3b16377u,
    0x61e8dd28u, 0x002056d9u, 0x9e57d08au, 0x3c8f4a3bu, 0xdac6c3ecu, 0x78fe3d9du, 0x1735b74eu, 0xb56d30ffu,
    0x53a4aab0u, 0xf1dc2461u, 0x90139e12u, 0x2e4b17c3u, 0xcc829174u, 0x6aba0b25u, 0x08f184d6u, 0xa728fe87u,
    0x45607838u, 0xe397f1e9u, 0x81cf6b9au, 0x2006e54bu, 0xbe3e5efcu, 0x5c75d8adu, 0xfaad525eu, 0x98e4cc0fu,
    0x371c45c0u, 0xd553bf71u, 0x738b3922u, 0x11c2b2d3u, 0xaffa2c84u, 0x4e31a635u, 0xec691fe6u, 0x8aa09997u,
    0x28d81348u, 0xc70f8cf9u, 0x654706aau, 0x037e805bu, 0xa1b5fa0cu, 0x3fed73bdu, 0xde24ed6eu, 0x7c5c671fu,
    0x1a93e0d0u, 0xb8cb5a81u, 0x5702d432u, 0xf53a4de3u, 0x9371c794u, 0x31a94145u, 0xcfe0baf6u, 0x6e1834a7u,
    0x0c4fae58u, 0xaa872809u, 0x48bea1bau, 0xe6f61b6bu, 0x852d951cu, 0x23650ecdu, 0xc19c887eu, 0x5fd4022fu,
    0xfe0b7be0u, 0x9c42f591u, 0x3a7a6f42u, 0xd8b1e8f3u, 0x76e962a4u, 0x1520dc55u, 0xb3585606u, 0x518fcfb7u,
    0xefc74968u, 0x8dfec319u, 0x2c363ccau, 0xca6db67bu, 0x68a5302cu, 0x06dca9ddu, 0xa514238eu, 0x434b9d3fu,
};

static const uint32_t bshim_159_tab4[96] = {
    0x0e648951u, 0xac9c0302u, 0x4ad37cb3u, 0xe90af664u, 0x87427015u, 0x2579e9c6u, 0xc3b16377u, 0x61e8dd28u,
    0x002056d9u, 0x9e57d08au, 0x3c8f4a3bu, 0xdac6c3ecu, 0x78fe3d9du, 0x1735b74eu, 0xb56d30ffu, 0x53a4aab0u,
    0xf1dc2461u, 0x90139e12u, 0x2e4b17c3u, 0xcc829174u, 0x6aba0b25u, 0x08f184d6u, 0xa728fe87u, 0x45607838u,
    0xe397f1e9u, 0x81cf6b9au, 0x2006e54bu, 0xbe3e5efcu, 0x5c75d8adu, 0xfaad525eu, 0x98e4cc0fu, 0x371c45c0u,
    0xd553bf71u, 0x738b3922u, 0x11c2b2d3u, 0xaffa2c84u, 0x4e31a635u, 0xec691fe6u, 0x8aa09997u, 0x28d81348u,
    0xc70f8cf9u, 0x654706aau, 0x037e805bu, 0xa1b5fa0cu, 0x3fed73bdu, 0xde24ed6eu, 0x7c5c671fu, 0x1a93e0d0u,
    0xb8cb5a81u, 0x5702d432u, 0xf53a4de3u, 0x9371c794u, 0x31a94145u, 0xcfe0baf6u, 0x6e1834a7u, 0x0c4fae58u,
    0xaa872809u, 0x48bea1bau, 0xe6f61b6bu, 0x852d951cu, 0x23650ecdu, 0xc19c887eu, 0x5fd4022fu, 0xfe0b7be0u,
    0x9c42f591u, 0x3a7a6f42u, 0xd8b1e8f3u, 0x76e962a4u, 0x1520dc55u, 0xb3585606u, 0x518fcfb7u, 0xefc74968u,
    0x8dfec319u, 0x2c363ccau, 0xca6db67bu, 0x68a5302cu, 0x06dca9ddu, 0xa514238eu, 0x434b9d3fu, 0xe18316f0u,
    0x7fba90a1u, 0x1df20a52u, 0xbc298403u, 0x5a60fdb4u, 0xf8987765u, 0x96cff116u, 0x35076ac7u, 0xd33ee478u,
    0x71765e29u, 0x0fadd7dau, 0xade5518bu, 0x4c1ccb3cu, 0xea5444edu, 0x888bbe9eu, 0x26c3384fu, 0xc4fab200u,
};

static const uint32_t bshim_159_tab5[96] = {
    0x90139e12u, 0x2e4b17c3u, 0xcc829174u, 0x6aba0b25u, 0x08f184d6u, 0xa728fe87u, 0x45607838u, 0xe397f1e9u,
    0x81cf6b9au, 0x2006e54bu, 0xbe3e5efcu, 0x5c75d8adu, 0xfaad525eu, 0x98e4cc0fu, 0x371c45c0u, 0xd553bf71u,
    0x738b3922u, 0x11c2b2d3u, 0xaffa2c84u, 0x4e31a635u, 0xec691fe6u, 0x8aa09997u, 0x28d81348u, 0xc70f8cf9u,
    0x654706aau, 0x037e805bu, 0xa1b5fa0cu, 0x3fed73bdu, 0xde24ed6eu, 0x7c5c671fu, 0x1a93e0d0u, 0xb8cb5a81u,
    0x5702d432u, 0xf53a4de3u, 0x9371c794u, 0x31a94145u, 0xcfe0baf6u, 0x6e1834a7u, 0x0c4fae58u, 0xaa872809u,
    0x48bea1bau, 0xe6f61b6bu, 0x852d951cu, 0x23650ecdu, 0xc19c887eu, 0x5fd4022fu, 0xfe0b7be0u, 0x9c42f591u,
    0x3a7a6f42u, 0xd8b1e8f3u, 0x76e962a4u, 0x1520dc55u, 0xb3585606u, 0x518fcfb7u, 0xefc74968u, 0x8dfec319u,
    0x2c363ccau, 0xca6db67bu, 0x68a5302cu, 0x06dca9ddu, 0xa514238eu, 0x434b9d3fu, 0xe18316f0u, 0x7fba90a1u,
    0x1df20a52u, 0xbc298403u, 0x5a60fdb4u, 0xf8987765u, 0x96cff116u, 0x35076ac7u, 0xd33ee478u, 0x71765e29u,
    0x0fadd7dau, 0xade5518bu, 0x4c1ccb3cu, 0xea5444edu, 0x888bbe9eu, 0x26c3384fu, 0xc4fab200u, 0x63322bb1u,
    0x0169a562u, 0x9fa11f13u, 0x3dd898c4u, 0xdc101275u, 0x7a478c26u, 0x187f05d7u, 0xb6b67f88u, 0x54edf939u,
    0xf32572eau, 0x915cec9bu, 0x2f94664cu, 0xcdcbdffdu, 0x6c0359aeu, 0x0a3ad35fu, 0xa8724d10u, 0x46a9c6c1u,
};

static const uint32_t bshim_159_tab6[96] = {
    0x11c2b2d3u, 0xaffa2c84u, 0x4e31a635u, 0xec691fe6u, 0x8aa09997u, 0x28d81348u, 0xc70f8cf9u, 0x654706aau,
    0x037e805bu, 0xa1b5fa0cu, 0x3fed73bdu, 0xde24ed6eu, 0x7c5c671fu, 0x1a93e0d0u, 0xb8cb5a81u, 0x5702d432u,
    0xf53a4de3u, 0x9371c794u, 0x31a94145u, 0xcfe0baf6u, 0x6e1834a7u, 0x0c4fae58u, 0xaa872809u, 0x48bea1bau,
    0xe6f61b6bu, 0x852d951cu, 0x23650ecdu, 0xc19c887eu, 0x5fd4022fu, 0xfe0b7be0u, 0x9c42f591u, 0x3a7a6f42u,
    0xd8b1e8f3u, 0x76e962a4u, 0x1520dc55u, 0xb3585606u, 0x518fcfb7u, 0xefc74968u, 0x8dfec319u, 0x2c363ccau,
    0xca6db67bu, 0x68a5302cu, 0x06dca9ddu, 0xa514238eu, 0x434b9d3fu, 0xe18316f0u, 0x7fba90a1u, 0x1df20a52u,
    0xbc298403u, 0x5a60fdb4u, 0xf8987765u, 0x96cff116u, 0x35076ac7u, 0xd33ee478u, 0x71765e29u, 0x0fadd7dau,
    0xade5518bu, 0x4c1ccb3cu, 0xea5444edu, 0x888bbe9eu, 0x26c3384fu, 0xc4fab200u, 0x63322bb1u, 0x0169a562u,
    0x9fa11f13u, 0x3dd898c4u, 0xdc101275u, 0x7a478c26u, 0x187f05d7u, 0xb6b67f88u, 0x54edf939u, 0xf32572eau,
    0x915cec9bu, 0x2f94664cu, 0xcdcbdffdu, 0x6c0359aeu, 0x0a3ad35fu, 0xa8724d10u, 0x46a9c6c1u, 0xe4e14072u,
    0x8318ba23u, 0x215033d4u, 0xbf87ad85u, 0x5dbf2736u, 0xfbf6a0e7u, 0x9a2e1a98u, 0x38659449u, 0xd69d0dfau,
    0x74d487abu, 0x130c015cu, 0xb1437b0du, 0x4f7af4beu, 0xedb26e6fu, 0x8be9e820u, 0x2a2161d1u, 0xc858db82u,
};

static const uint32_t bshim_159_tab7[96] = {
    0x9371c794u, 0x31a94145u, 0xcfe0baf6u, 0x6e1834a7u, 0x0c4fae58u, 0xaa872809u, 0x48bea1bau, 0xe6f61b6bu,
    0x852d951cu, 0x23650ecdu, 0xc19c887eu, 0x5fd4022fu, 0xfe0b7be0u, 0x9c42f591u, 0x3a7a6f42u, 0xd8b1e8f3u,
    0x76e962a4u, 0x1520dc55u, 0xb3585606u, 0x518fcfb7u, 0xefc74968u, 0x8dfec319u, 0x2c363ccau, 0xca6db67bu,
    0x68a5302cu, 0x06dca9ddu, 0xa514238eu, 0x434b9d3fu, 0xe18316f0u, 0x7fba90a1u, 0x1df20a52u, 0xbc298403u,
    0x5a60fdb4u, 0xf8987765u, 0x96cff116u, 0x35076ac7u, 0xd33ee478u, 0x71765e29u, 0x0fadd7dau, 0xade5518bu,
    0x4c1ccb3cu, 0xea5444edu, 0x888bbe9eu, 0x26c3384fu, 0xc4fab200u, 0x63322bb1u, 0x0169a562u, 0x9fa11f13u,
    0x3dd898c4u, 0xdc101275u, 0x7a478c26u, 0x187f05d7u, 0xb6b67f88u, 0x54edf939u, 0xf32572eau, 0x915cec9bu,
    0x2f94664cu, 0xcdcbdffdu, 0x6c0359aeu, 0x0a3ad35fu, 0xa8724d10u, 0x46a9c6c1u, 0xe4e14072u, 0x8318ba23u,
    0x215033d4u, 0xbf87ad85u, 0x5dbf2736u, 0xfbf6a0e7u, 0x9a2e1a98u, 0x38659449u, 0xd69d0dfau, 0x74d487abu,
    0x130c015cu, 0xb1437b0du, 0x4f7af4beu, 0xedb26e6fu, 0x8be9e820u, 0x2a2161d1u, 0xc858db82u, 0x66905533u,
    0x04c7cee4u, 0xa2ff4895u, 0x4136c246u, 0xdf6e3bf7u, 0x7da5b5a8u, 0x1bdd2f59u, 0xba14a90au, 0x584c22bbu,
    0xf6839c6cu, 0x94bb161du, 0x32f28fceu, 0xd12a097fu, 0x6f618330u, 0x0d98fce1u, 0xabd07692u, 0x4a07f043u,
};

struct bshim_159_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_159_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_159_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_159_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_159_reset(struct bshim_159_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00133671u;
    return 0;
}

