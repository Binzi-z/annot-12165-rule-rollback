/* bshim_002 -- board support shim generated from the 0002 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_002_tab0[96] = {
    0xecc68b26u, 0x8afe04d7u, 0x29357e88u, 0xc76cf839u, 0x65a471eau, 0x03dbeb9bu, 0xa213654cu, 0x404adefdu,
    0xde8258aeu, 0x7cb9d25fu, 0x1af14c10u, 0xb928c5c1u, 0x57603f72u, 0xf597b923u, 0x93cf32d4u, 0x3206ac85u,
    0xd03e2636u, 0x6e759fe7u, 0x0cad1998u, 0xaae49349u, 0x491c0cfau, 0xe75386abu, 0x858b005cu, 0x23c27a0du,
    0xc1f9f3beu, 0x60316d6fu, 0xfe68e720u, 0x9ca060d1u, 0x3ad7da82u, 0xd90f5433u, 0x7746cde4u, 0x157e4795u,
    0xb3b5c146u, 0x51ed3af7u, 0xf024b4a8u, 0x8e5c2e59u, 0x2c93a80au, 0xcacb21bbu, 0x69029b6cu, 0x073a151du,
    0xa5718eceu, 0x43a9087fu, 0xe1e08230u, 0x8017fbe1u, 0x1e4f7592u, 0xbc86ef43u, 0x5abe68f4u, 0xf8f5e2a5u,
    0x972d5c56u, 0x3564d607u, 0xd39c4fb8u, 0x71d3c969u, 0x100b431au, 0xae42bccbu, 0x4c7a367cu, 0xeab1b02du,
    0x88e929deu, 0x2720a38fu, 0xc5581d40u, 0x638f96f1u, 0x01c710a2u, 0x9ffe8a53u, 0x3e360404u, 0xdc6d7db5u,
    0x7aa4f766u, 0x18dc7117u, 0xb713eac8u, 0x554b6479u, 0xf382de2au, 0x91ba57dbu, 0x2ff1d18cu, 0xce294b3du,
    0x6c60c4eeu, 0x0a983e9fu, 0xa8cfb850u, 0x47073201u, 0xe53eabb2u, 0x83762563u, 0x21ad9f14u, 0xbfe518c5u,
    0x5e1c9276u, 0xfc540c27u, 0x9a8b85d8u, 0x38c2ff89u, 0xd6fa793au, 0x7531f2ebu, 0x13696c9cu, 0xb1a0e64du,
    0x4fd85ffeu, 0xee0fd9afu, 0x8c475360u, 0x2a7ecd11u, 0xc8b646c2u, 0x66edc073u, 0x05253a24u, 0xa35cb3d5u,
};

static const uint32_t bshim_002_tab1[96] = {
    0x6e759fe7u, 0x0cad1998u, 0xaae49349u, 0x491c0cfau, 0xe75386abu, 0x858b005cu, 0x23c27a0du, 0xc1f9f3beu,
    0x60316d6fu, 0xfe68e720u, 0x9ca060d1u, 0x3ad7da82u, 0xd90f5433u, 0x7746cde4u, 0x157e4795u, 0xb3b5c146u,
    0x51ed3af7u, 0xf024b4a8u, 0x8e5c2e59u, 0x2c93a80au, 0xcacb21bbu, 0x69029b6cu, 0x073a151du, 0xa5718eceu,
    0x43a9087fu, 0xe1e08230u, 0x8017fbe1u, 0x1e4f7592u, 0xbc86ef43u, 0x5abe68f4u, 0xf8f5e2a5u, 0x972d5c56u,
    0x3564d607u, 0xd39c4fb8u, 0x71d3c969u, 0x100b431au, 0xae42bccbu, 0x4c7a367cu, 0xeab1b02du, 0x88e929deu,
    0x2720a38fu, 0xc5581d40u, 0x638f96f1u, 0x01c710a2u, 0x9ffe8a53u, 0x3e360404u, 0xdc6d7db5u, 0x7aa4f766u,
    0x18dc7117u, 0xb713eac8u, 0x554b6479u, 0xf382de2au, 0x91ba57dbu, 0x2ff1d18cu, 0xce294b3du, 0x6c60c4eeu,
    0x0a983e9fu, 0xa8cfb850u, 0x47073201u, 0xe53eabb2u, 0x83762563u, 0x21ad9f14u, 0xbfe518c5u, 0x5e1c9276u,
    0xfc540c27u, 0x9a8b85d8u, 0x38c2ff89u, 0xd6fa793au, 0x7531f2ebu, 0x13696c9cu, 0xb1a0e64du, 0x4fd85ffeu,
    0xee0fd9afu, 0x8c475360u, 0x2a7ecd11u, 0xc8b646c2u, 0x66edc073u, 0x05253a24u, 0xa35cb3d5u, 0x41942d86u,
    0xdfcba737u, 0x7e0320e8u, 0x1c3a9a99u, 0xba72144au, 0x58a98dfbu, 0xf6e107acu, 0x9518815du, 0x334ffb0eu,
    0xd18774bfu, 0x6fbeee70u, 0x0df66821u, 0xac2de1d2u, 0x4a655b83u, 0xe89cd534u, 0x86d44ee5u, 0x250bc896u,
};

static const uint32_t bshim_002_tab2[96] = {
    0xf024b4a8u, 0x8e5c2e59u, 0x2c93a80au, 0xcacb21bbu, 0x69029b6cu, 0x073a151du, 0xa5718eceu, 0x43a9087fu,
    0xe1e08230u, 0x8017fbe1u, 0x1e4f7592u, 0xbc86ef43u, 0x5abe68f4u, 0xf8f5e2a5u, 0x972d5c56u, 0x3564d607u,
    0xd39c4fb8u, 0x71d3c969u, 0x100b431au, 0xae42bccbu, 0x4c7a367cu, 0xeab1b02du, 0x88e929deu, 0x2720a38fu,
    0xc5581d40u, 0x638f96f1u, 0x01c710a2u, 0x9ffe8a53u, 0x3e360404u, 0xdc6d7db5u, 0x7aa4f766u, 0x18dc7117u,
    0xb713eac8u, 0x554b6479u, 0xf382de2au, 0x91ba57dbu, 0x2ff1d18cu, 0xce294b3du, 0x6c60c4eeu, 0x0a983e9fu,
    0xa8cfb850u, 0x47073201u, 0xe53eabb2u, 0x83762563u, 0x21ad9f14u, 0xbfe518c5u, 0x5e1c9276u, 0xfc540c27u,
    0x9a8b85d8u, 0x38c2ff89u, 0xd6fa793au, 0x7531f2ebu, 0x13696c9cu, 0xb1a0e64du, 0x4fd85ffeu, 0xee0fd9afu,
    0x8c475360u, 0x2a7ecd11u, 0xc8b646c2u, 0x66edc073u, 0x05253a24u, 0xa35cb3d5u, 0x41942d86u, 0xdfcba737u,
    0x7e0320e8u, 0x1c3a9a99u, 0xba72144au, 0x58a98dfbu, 0xf6e107acu, 0x9518815du, 0x334ffb0eu, 0xd18774bfu,
    0x6fbeee70u, 0x0df66821u, 0xac2de1d2u, 0x4a655b83u, 0xe89cd534u, 0x86d44ee5u, 0x250bc896u, 0xc3434247u,
    0x617abbf8u, 0xffb235a9u, 0x9de9af5au, 0x3c21290bu, 0xda58a2bcu, 0x78901c6du, 0x16c7961eu, 0xb4ff0fcfu,
    0x53368980u, 0xf16e0331u, 0x8fa57ce2u, 0x2ddcf693u, 0xcc147044u, 0x6a4be9f5u, 0x088363a6u, 0xa6badd57u,
};

static const uint32_t bshim_002_tab3[96] = {
    0x71d3c969u, 0x100b431au, 0xae42bccbu, 0x4c7a367cu, 0xeab1b02du, 0x88e929deu, 0x2720a38fu, 0xc5581d40u,
    0x638f96f1u, 0x01c710a2u, 0x9ffe8a53u, 0x3e360404u, 0xdc6d7db5u, 0x7aa4f766u, 0x18dc7117u, 0xb713eac8u,
    0x554b6479u, 0xf382de2au, 0x91ba57dbu, 0x2ff1d18cu, 0xce294b3du, 0x6c60c4eeu, 0x0a983e9fu, 0xa8cfb850u,
    0x47073201u, 0xe53eabb2u, 0x83762563u, 0x21ad9f14u, 0xbfe518c5u, 0x5e1c9276u, 0xfc540c27u, 0x9a8b85d8u,
    0x38c2ff89u, 0xd6fa793au, 0x7531f2ebu, 0x13696c9cu, 0xb1a0e64du, 0x4fd85ffeu, 0xee0fd9afu, 0x8c475360u,
    0x2a7ecd11u, 0xc8b646c2u, 0x66edc073u, 0x05253a24u, 0xa35cb3d5u, 0x41942d86u, 0xdfcba737u, 0x7e0320e8u,
    0x1c3a9a99u, 0xba72144au, 0x58a98dfbu, 0xf6e107acu, 0x9518815du, 0x334ffb0eu, 0xd18774bfu, 0x6fbeee70u,
    0x0df66821u, 0xac2de1d2u, 0x4a655b83u, 0xe89cd534u, 0x86d44ee5u, 0x250bc896u, 0xc3434247u, 0x617abbf8u,
    0xffb235a9u, 0x9de9af5au, 0x3c21290bu, 0xda58a2bcu, 0x78901c6du, 0x16c7961eu, 0xb4ff0fcfu, 0x53368980u,
    0xf16e0331u, 0x8fa57ce2u, 0x2ddcf693u, 0xcc147044u, 0x6a4be9f5u, 0x088363a6u, 0xa6badd57u, 0x44f25708u,
    0xe329d0b9u, 0x81614a6au, 0x1f98c41bu, 0xbdd03dccu, 0x5c07b77du, 0xfa3f312eu, 0x9876aadfu, 0x36ae2490u,
    0xd4e59e41u, 0x731d17f2u, 0x115491a3u, 0xaf8c0b54u, 0x4dc38505u, 0xebfafeb6u, 0x8a327867u, 0x2869f218u,
};

static const uint32_t bshim_002_tab4[96] = {
    0xf382de2au, 0x91ba57dbu, 0x2ff1d18cu, 0xce294b3du, 0x6c60c4eeu, 0x0a983e9fu, 0xa8cfb850u, 0x47073201u,
    0xe53eabb2u, 0x83762563u, 0x21ad9f14u, 0xbfe518c5u, 0x5e1c9276u, 0xfc540c27u, 0x9a8b85d8u, 0x38c2ff89u,
    0xd6fa793au, 0x7531f2ebu, 0x13696c9cu, 0xb1a0e64du, 0x4fd85ffeu, 0xee0fd9afu, 0x8c475360u, 0x2a7ecd11u,
    0xc8b646c2u, 0x66edc073u, 0x05253a24u, 0xa35cb3d5u, 0x41942d86u, 0xdfcba737u, 0x7e0320e8u, 0x1c3a9a99u,
    0xba72144au, 0x58a98dfbu, 0xf6e107acu, 0x9518815du, 0x334ffb0eu, 0xd18774bfu, 0x6fbeee70u, 0x0df66821u,
    0xac2de1d2u, 0x4a655b83u, 0xe89cd534u, 0x86d44ee5u, 0x250bc896u, 0xc3434247u, 0x617abbf8u, 0xffb235a9u,
    0x9de9af5au, 0x3c21290bu, 0xda58a2bcu, 0x78901c6du, 0x16c7961eu, 0xb4ff0fcfu, 0x53368980u, 0xf16e0331u,
    0x8fa57ce2u, 0x2ddcf693u, 0xcc147044u, 0x6a4be9f5u, 0x088363a6u, 0xa6badd57u, 0x44f25708u, 0xe329d0b9u,
    0x81614a6au, 0x1f98c41bu, 0xbdd03dccu, 0x5c07b77du, 0xfa3f312eu, 0x9876aadfu, 0x36ae2490u, 0xd4e59e41u,
    0x731d17f2u, 0x115491a3u, 0xaf8c0b54u, 0x4dc38505u, 0xebfafeb6u, 0x8a327867u, 0x2869f218u, 0xc6a16bc9u,
    0x64d8e57au, 0x03105f2bu, 0xa147d8dcu, 0x3f7f528du, 0xddb6cc3eu, 0x7bee45efu, 0x1a25bfa0u, 0xb85d3951u,
    0x5694b302u, 0xf4cc2cb3u, 0x9303a664u, 0x313b2015u, 0xcf7299c6u, 0x6daa1377u, 0x0be18d28u, 0xaa1906d9u,
};

static const uint32_t bshim_002_tab5[96] = {
    0x7531f2ebu, 0x13696c9cu, 0xb1a0e64du, 0x4fd85ffeu, 0xee0fd9afu, 0x8c475360u, 0x2a7ecd11u, 0xc8b646c2u,
    0x66edc073u, 0x05253a24u, 0xa35cb3d5u, 0x41942d86u, 0xdfcba737u, 0x7e0320e8u, 0x1c3a9a99u, 0xba72144au,
    0x58a98dfbu, 0xf6e107acu, 0x9518815du, 0x334ffb0eu, 0xd18774bfu, 0x6fbeee70u, 0x0df66821u, 0xac2de1d2u,
    0x4a655b83u, 0xe89cd534u, 0x86d44ee5u, 0x250bc896u, 0xc3434247u, 0x617abbf8u, 0xffb235a9u, 0x9de9af5au,
    0x3c21290bu, 0xda58a2bcu, 0x78901c6du, 0x16c7961eu, 0xb4ff0fcfu, 0x53368980u, 0xf16e0331u, 0x8fa57ce2u,
    0x2ddcf693u, 0xcc147044u, 0x6a4be9f5u, 0x088363a6u, 0xa6badd57u, 0x44f25708u, 0xe329d0b9u, 0x81614a6au,
    0x1f98c41bu, 0xbdd03dccu, 0x5c07b77du, 0xfa3f312eu, 0x9876aadfu, 0x36ae2490u, 0xd4e59e41u, 0x731d17f2u,
    0x115491a3u, 0xaf8c0b54u, 0x4dc38505u, 0xebfafeb6u, 0x8a327867u, 0x2869f218u, 0xc6a16bc9u, 0x64d8e57au,
    0x03105f2bu, 0xa147d8dcu, 0x3f7f528du, 0xddb6cc3eu, 0x7bee45efu, 0x1a25bfa0u, 0xb85d3951u, 0x5694b302u,
    0xf4cc2cb3u, 0x9303a664u, 0x313b2015u, 0xcf7299c6u, 0x6daa1377u, 0x0be18d28u, 0xaa1906d9u, 0x4850808au,
    0xe687fa3bu, 0x84bf73ecu, 0x22f6ed9du, 0xc12e674eu, 0x5f65e0ffu, 0xfd9d5ab0u, 0x9bd4d461u, 0x3a0c4e12u,
    0xd843c7c3u, 0x767b4174u, 0x14b2bb25u, 0xb2ea34d6u, 0x5121ae87u, 0xef592838u, 0x8d90a1e9u, 0x2bc81b9au,
};

static const uint32_t bshim_002_tab6[96] = {
    0xf6e107acu, 0x9518815du, 0x334ffb0eu, 0xd18774bfu, 0x6fbeee70u, 0x0df66821u, 0xac2de1d2u, 0x4a655b83u,
    0xe89cd534u, 0x86d44ee5u, 0x250bc896u, 0xc3434247u, 0x617abbf8u, 0xffb235a9u, 0x9de9af5au, 0x3c21290bu,
    0xda58a2bcu, 0x78901c6du, 0x16c7961eu, 0xb4ff0fcfu, 0x53368980u, 0xf16e0331u, 0x8fa57ce2u, 0x2ddcf693u,
    0xcc147044u, 0x6a4be9f5u, 0x088363a6u, 0xa6badd57u, 0x44f25708u, 0xe329d0b9u, 0x81614a6au, 0x1f98c41bu,
    0xbdd03dccu, 0x5c07b77du, 0xfa3f312eu, 0x9876aadfu, 0x36ae2490u, 0xd4e59e41u, 0x731d17f2u, 0x115491a3u,
    0xaf8c0b54u, 0x4dc38505u, 0xebfafeb6u, 0x8a327867u, 0x2869f218u, 0xc6a16bc9u, 0x64d8e57au, 0x03105f2bu,
    0xa147d8dcu, 0x3f7f528du, 0xddb6cc3eu, 0x7bee45efu, 0x1a25bfa0u, 0xb85d3951u, 0x5694b302u, 0xf4cc2cb3u,
    0x9303a664u, 0x313b2015u, 0xcf7299c6u, 0x6daa1377u, 0x0be18d28u, 0xaa1906d9u, 0x4850808au, 0xe687fa3bu,
    0x84bf73ecu, 0x22f6ed9du, 0xc12e674eu, 0x5f65e0ffu, 0xfd9d5ab0u, 0x9bd4d461u, 0x3a0c4e12u, 0xd843c7c3u,
    0x767b4174u, 0x14b2bb25u, 0xb2ea34d6u, 0x5121ae87u, 0xef592838u, 0x8d90a1e9u, 0x2bc81b9au, 0xc9ff954bu,
    0x68370efcu, 0x066e88adu, 0xa4a6025eu, 0x42dd7c0fu, 0xe114f5c0u, 0x7f4c6f71u, 0x1d83e922u, 0xbbbb62d3u,
    0x59f2dc84u, 0xf82a5635u, 0x9661cfe6u, 0x34994997u, 0xd2d0c348u, 0x71083cf9u, 0x0f3fb6aau, 0xad77305bu,
};

static const uint32_t bshim_002_tab7[96] = {
    0x78901c6du, 0x16c7961eu, 0xb4ff0fcfu, 0x53368980u, 0xf16e0331u, 0x8fa57ce2u, 0x2ddcf693u, 0xcc147044u,
    0x6a4be9f5u, 0x088363a6u, 0xa6badd57u, 0x44f25708u, 0xe329d0b9u, 0x81614a6au, 0x1f98c41bu, 0xbdd03dccu,
    0x5c07b77du, 0xfa3f312eu, 0x9876aadfu, 0x36ae2490u, 0xd4e59e41u, 0x731d17f2u, 0x115491a3u, 0xaf8c0b54u,
    0x4dc38505u, 0xebfafeb6u, 0x8a327867u, 0x2869f218u, 0xc6a16bc9u, 0x64d8e57au, 0x03105f2bu, 0xa147d8dcu,
    0x3f7f528du, 0xddb6cc3eu, 0x7bee45efu, 0x1a25bfa0u, 0xb85d3951u, 0x5694b302u, 0xf4cc2cb3u, 0x9303a664u,
    0x313b2015u, 0xcf7299c6u, 0x6daa1377u, 0x0be18d28u, 0xaa1906d9u, 0x4850808au, 0xe687fa3bu, 0x84bf73ecu,
    0x22f6ed9du, 0xc12e674eu, 0x5f65e0ffu, 0xfd9d5ab0u, 0x9bd4d461u, 0x3a0c4e12u, 0xd843c7c3u, 0x767b4174u,
    0x14b2bb25u, 0xb2ea34d6u, 0x5121ae87u, 0xef592838u, 0x8d90a1e9u, 0x2bc81b9au, 0xc9ff954bu, 0x68370efcu,
    0x066e88adu, 0xa4a6025eu, 0x42dd7c0fu, 0xe114f5c0u, 0x7f4c6f71u, 0x1d83e922u, 0xbbbb62d3u, 0x59f2dc84u,
    0xf82a5635u, 0x9661cfe6u, 0x34994997u, 0xd2d0c348u, 0x71083cf9u, 0x0f3fb6aau, 0xad77305bu, 0x4baeaa0cu,
    0xe9e623bdu, 0x881d9d6eu, 0x2655171fu, 0xc48c90d0u, 0x62c40a81u, 0x00fb8432u, 0x9f32fde3u, 0x3d6a7794u,
    0xdba1f145u, 0x79d96af6u, 0x1810e4a7u, 0xb6485e58u, 0x547fd809u, 0xf2b751bau, 0x90eecb6bu, 0x2f26451cu,
};

struct bshim_002_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_002_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0bd794eeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91c35f65u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x17af29dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d9af453u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2386becau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa9728941u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f5e53b8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb54a1e2fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b35e8a6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc121b31du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x470d7d94u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_002_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_002_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_002_reset(struct bshim_002_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00003ddeu;
    return 0;
}

