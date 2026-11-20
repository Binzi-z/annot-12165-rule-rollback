/* bshim_184 -- board support shim generated from the 0184 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_184_tab0[96] = {
    0x175a01a8u, 0xb5917b59u, 0x53c8f50au, 0xf2006ebbu, 0x9037e86cu, 0x2e6f621du, 0xcca6dbceu, 0x6ade557fu,
    0x0915cf30u, 0xa74d48e1u, 0x4584c292u, 0xe3bc3c43u, 0x81f3b5f4u, 0x202b2fa5u, 0xbe62a956u, 0x5c9a2307u,
    0xfad19cb8u, 0x99091669u, 0x3740901au, 0xd57809cbu, 0x73af837cu, 0x11e6fd2du, 0xb01e76deu, 0x4e55f08fu,
    0xec8d6a40u, 0x8ac4e3f1u, 0x28fc5da2u, 0xc733d753u, 0x656b5104u, 0x03a2cab5u, 0xa1da4466u, 0x4011be17u,
    0xde4937c8u, 0x7c80b179u, 0x1ab82b2au, 0xb8efa4dbu, 0x57271e8cu, 0xf55e983du, 0x939611eeu, 0x31cd8b9fu,
    0xd0050550u, 0x6e3c7f01u, 0x0c73f8b2u, 0xaaab7263u, 0x48e2ec14u, 0xe71a65c5u, 0x8551df76u, 0x23895927u,
    0xc1c0d2d8u, 0x5ff84c89u, 0xfe2fc63au, 0x9c673febu, 0x3a9eb99cu, 0xd8d6334du, 0x770dacfeu, 0x154526afu,
    0xb37ca060u, 0x51b41a11u, 0xefeb93c2u, 0x8e230d73u, 0x2c5a8724u, 0xca9200d5u, 0x68c97a86u, 0x0700f437u,
    0xa5386de8u, 0x436fe799u, 0xe1a7614au, 0x7fdedafbu, 0x1e1654acu, 0xbc4dce5du, 0x5a85480eu, 0xf8bcc1bfu,
    0x96f43b70u, 0x352bb521u, 0xd3632ed2u, 0x719aa883u, 0x0fd22234u, 0xae099be5u, 0x4c411596u, 0xea788f47u,
    0x88b008f8u, 0x26e782a9u, 0xc51efc5au, 0x6356760bu, 0x018defbcu, 0x9fc5696du, 0x3dfce31eu, 0xdc345ccfu,
    0x7a6bd680u, 0x18a35031u, 0xb6dac9e2u, 0x55124393u, 0xf349bd44u, 0x918136f5u, 0x2fb8b0a6u, 0xcdf02a57u,
};

static const uint32_t bshim_184_tab1[96] = {
    0x99091669u, 0x3740901au, 0xd57809cbu, 0x73af837cu, 0x11e6fd2du, 0xb01e76deu, 0x4e55f08fu, 0xec8d6a40u,
    0x8ac4e3f1u, 0x28fc5da2u, 0xc733d753u, 0x656b5104u, 0x03a2cab5u, 0xa1da4466u, 0x4011be17u, 0xde4937c8u,
    0x7c80b179u, 0x1ab82b2au, 0xb8efa4dbu, 0x57271e8cu, 0xf55e983du, 0x939611eeu, 0x31cd8b9fu, 0xd0050550u,
    0x6e3c7f01u, 0x0c73f8b2u, 0xaaab7263u, 0x48e2ec14u, 0xe71a65c5u, 0x8551df76u, 0x23895927u, 0xc1c0d2d8u,
    0x5ff84c89u, 0xfe2fc63au, 0x9c673febu, 0x3a9eb99cu, 0xd8d6334du, 0x770dacfeu, 0x154526afu, 0xb37ca060u,
    0x51b41a11u, 0xefeb93c2u, 0x8e230d73u, 0x2c5a8724u, 0xca9200d5u, 0x68c97a86u, 0x0700f437u, 0xa5386de8u,
    0x436fe799u, 0xe1a7614au, 0x7fdedafbu, 0x1e1654acu, 0xbc4dce5du, 0x5a85480eu, 0xf8bcc1bfu, 0x96f43b70u,
    0x352bb521u, 0xd3632ed2u, 0x719aa883u, 0x0fd22234u, 0xae099be5u, 0x4c411596u, 0xea788f47u, 0x88b008f8u,
    0x26e782a9u, 0xc51efc5au, 0x6356760bu, 0x018defbcu, 0x9fc5696du, 0x3dfce31eu, 0xdc345ccfu, 0x7a6bd680u,
    0x18a35031u, 0xb6dac9e2u, 0x55124393u, 0xf349bd44u, 0x918136f5u, 0x2fb8b0a6u, 0xcdf02a57u, 0x6c27a408u,
    0x0a5f1db9u, 0xa896976au, 0x46ce111bu, 0xe5058accu, 0x833d047du, 0x21747e2eu, 0xbfabf7dfu, 0x5de37190u,
    0xfc1aeb41u, 0x9a5264f2u, 0x3889dea3u, 0xd6c15854u, 0x74f8d205u, 0x13304bb6u, 0xb167c567u, 0x4f9f3f18u,
};

static const uint32_t bshim_184_tab2[96] = {
    0x1ab82b2au, 0xb8efa4dbu, 0x57271e8cu, 0xf55e983du, 0x939611eeu, 0x31cd8b9fu, 0xd0050550u, 0x6e3c7f01u,
    0x0c73f8b2u, 0xaaab7263u, 0x48e2ec14u, 0xe71a65c5u, 0x8551df76u, 0x23895927u, 0xc1c0d2d8u, 0x5ff84c89u,
    0xfe2fc63au, 0x9c673febu, 0x3a9eb99cu, 0xd8d6334du, 0x770dacfeu, 0x154526afu, 0xb37ca060u, 0x51b41a11u,
    0xefeb93c2u, 0x8e230d73u, 0x2c5a8724u, 0xca9200d5u, 0x68c97a86u, 0x0700f437u, 0xa5386de8u, 0x436fe799u,
    0xe1a7614au, 0x7fdedafbu, 0x1e1654acu, 0xbc4dce5du, 0x5a85480eu, 0xf8bcc1bfu, 0x96f43b70u, 0x352bb521u,
    0xd3632ed2u, 0x719aa883u, 0x0fd22234u, 0xae099be5u, 0x4c411596u, 0xea788f47u, 0x88b008f8u, 0x26e782a9u,
    0xc51efc5au, 0x6356760bu, 0x018defbcu, 0x9fc5696du, 0x3dfce31eu, 0xdc345ccfu, 0x7a6bd680u, 0x18a35031u,
    0xb6dac9e2u, 0x55124393u, 0xf349bd44u, 0x918136f5u, 0x2fb8b0a6u, 0xcdf02a57u, 0x6c27a408u, 0x0a5f1db9u,
    0xa896976au, 0x46ce111bu, 0xe5058accu, 0x833d047du, 0x21747e2eu, 0xbfabf7dfu, 0x5de37190u, 0xfc1aeb41u,
    0x9a5264f2u, 0x3889dea3u, 0xd6c15854u, 0x74f8d205u, 0x13304bb6u, 0xb167c567u, 0x4f9f3f18u, 0xedd6b8c9u,
    0x8c0e327au, 0x2a45ac2bu, 0xc87d25dcu, 0x66b49f8du, 0x04ec193eu, 0xa32392efu, 0x415b0ca0u, 0xdf928651u,
    0x7dca0002u, 0x1c0179b3u, 0xba38f364u, 0x58706d15u, 0xf6a7e6c6u, 0x94df6077u, 0x3316da28u, 0xd14e53d9u,
};

static const uint32_t bshim_184_tab3[96] = {
    0x9c673febu, 0x3a9eb99cu, 0xd8d6334du, 0x770dacfeu, 0x154526afu, 0xb37ca060u, 0x51b41a11u, 0xefeb93c2u,
    0x8e230d73u, 0x2c5a8724u, 0xca9200d5u, 0x68c97a86u, 0x0700f437u, 0xa5386de8u, 0x436fe799u, 0xe1a7614au,
    0x7fdedafbu, 0x1e1654acu, 0xbc4dce5du, 0x5a85480eu, 0xf8bcc1bfu, 0x96f43b70u, 0x352bb521u, 0xd3632ed2u,
    0x719aa883u, 0x0fd22234u, 0xae099be5u, 0x4c411596u, 0xea788f47u, 0x88b008f8u, 0x26e782a9u, 0xc51efc5au,
    0x6356760bu, 0x018defbcu, 0x9fc5696du, 0x3dfce31eu, 0xdc345ccfu, 0x7a6bd680u, 0x18a35031u, 0xb6dac9e2u,
    0x55124393u, 0xf349bd44u, 0x918136f5u, 0x2fb8b0a6u, 0xcdf02a57u, 0x6c27a408u, 0x0a5f1db9u, 0xa896976au,
    0x46ce111bu, 0xe5058accu, 0x833d047du, 0x21747e2eu, 0xbfabf7dfu, 0x5de37190u, 0xfc1aeb41u, 0x9a5264f2u,
    0x3889dea3u, 0xd6c15854u, 0x74f8d205u, 0x13304bb6u, 0xb167c567u, 0x4f9f3f18u, 0xedd6b8c9u, 0x8c0e327au,
    0x2a45ac2bu, 0xc87d25dcu, 0x66b49f8du, 0x04ec193eu, 0xa32392efu, 0x415b0ca0u, 0xdf928651u, 0x7dca0002u,
    0x1c0179b3u, 0xba38f364u, 0x58706d15u, 0xf6a7e6c6u, 0x94df6077u, 0x3316da28u, 0xd14e53d9u, 0x6f85cd8au,
    0x0dbd473bu, 0xabf4c0ecu, 0x4a2c3a9du, 0xe863b44eu, 0x869b2dffu, 0x24d2a7b0u, 0xc30a2161u, 0x61419b12u,
    0xff7914c3u, 0x9db08e74u, 0x3be80825u, 0xda1f81d6u, 0x7856fb87u, 0x168e7538u, 0xb4c5eee9u, 0x52fd689au,
};

static const uint32_t bshim_184_tab4[96] = {
    0x1e1654acu, 0xbc4dce5du, 0x5a85480eu, 0xf8bcc1bfu, 0x96f43b70u, 0x352bb521u, 0xd3632ed2u, 0x719aa883u,
    0x0fd22234u, 0xae099be5u, 0x4c411596u, 0xea788f47u, 0x88b008f8u, 0x26e782a9u, 0xc51efc5au, 0x6356760bu,
    0x018defbcu, 0x9fc5696du, 0x3dfce31eu, 0xdc345ccfu, 0x7a6bd680u, 0x18a35031u, 0xb6dac9e2u, 0x55124393u,
    0xf349bd44u, 0x918136f5u, 0x2fb8b0a6u, 0xcdf02a57u, 0x6c27a408u, 0x0a5f1db9u, 0xa896976au, 0x46ce111bu,
    0xe5058accu, 0x833d047du, 0x21747e2eu, 0xbfabf7dfu, 0x5de37190u, 0xfc1aeb41u, 0x9a5264f2u, 0x3889dea3u,
    0xd6c15854u, 0x74f8d205u, 0x13304bb6u, 0xb167c567u, 0x4f9f3f18u, 0xedd6b8c9u, 0x8c0e327au, 0x2a45ac2bu,
    0xc87d25dcu, 0x66b49f8du, 0x04ec193eu, 0xa32392efu, 0x415b0ca0u, 0xdf928651u, 0x7dca0002u, 0x1c0179b3u,
    0xba38f364u, 0x58706d15u, 0xf6a7e6c6u, 0x94df6077u, 0x3316da28u, 0xd14e53d9u, 0x6f85cd8au, 0x0dbd473bu,
    0xabf4c0ecu, 0x4a2c3a9du, 0xe863b44eu, 0x869b2dffu, 0x24d2a7b0u, 0xc30a2161u, 0x61419b12u, 0xff7914c3u,
    0x9db08e74u, 0x3be80825u, 0xda1f81d6u, 0x7856fb87u, 0x168e7538u, 0xb4c5eee9u, 0x52fd689au, 0xf134e24bu,
    0x8f6c5bfcu, 0x2da3d5adu, 0xcbdb4f5eu, 0x6a12c90fu, 0x084a42c0u, 0xa681bc71u, 0x44b93622u, 0xe2f0afd3u,
    0x81282984u, 0x1f5fa335u, 0xbd971ce6u, 0x5bce9697u, 0xfa061048u, 0x983d89f9u, 0x367503aau, 0xd4ac7d5bu,
};

static const uint32_t bshim_184_tab5[96] = {
    0x9fc5696du, 0x3dfce31eu, 0xdc345ccfu, 0x7a6bd680u, 0x18a35031u, 0xb6dac9e2u, 0x55124393u, 0xf349bd44u,
    0x918136f5u, 0x2fb8b0a6u, 0xcdf02a57u, 0x6c27a408u, 0x0a5f1db9u, 0xa896976au, 0x46ce111bu, 0xe5058accu,
    0x833d047du, 0x21747e2eu, 0xbfabf7dfu, 0x5de37190u, 0xfc1aeb41u, 0x9a5264f2u, 0x3889dea3u, 0xd6c15854u,
    0x74f8d205u, 0x13304bb6u, 0xb167c567u, 0x4f9f3f18u, 0xedd6b8c9u, 0x8c0e327au, 0x2a45ac2bu, 0xc87d25dcu,
    0x66b49f8du, 0x04ec193eu, 0xa32392efu, 0x415b0ca0u, 0xdf928651u, 0x7dca0002u, 0x1c0179b3u, 0xba38f364u,
    0x58706d15u, 0xf6a7e6c6u, 0x94df6077u, 0x3316da28u, 0xd14e53d9u, 0x6f85cd8au, 0x0dbd473bu, 0xabf4c0ecu,
    0x4a2c3a9du, 0xe863b44eu, 0x869b2dffu, 0x24d2a7b0u, 0xc30a2161u, 0x61419b12u, 0xff7914c3u, 0x9db08e74u,
    0x3be80825u, 0xda1f81d6u, 0x7856fb87u, 0x168e7538u, 0xb4c5eee9u, 0x52fd689au, 0xf134e24bu, 0x8f6c5bfcu,
    0x2da3d5adu, 0xcbdb4f5eu, 0x6a12c90fu, 0x084a42c0u, 0xa681bc71u, 0x44b93622u, 0xe2f0afd3u, 0x81282984u,
    0x1f5fa335u, 0xbd971ce6u, 0x5bce9697u, 0xfa061048u, 0x983d89f9u, 0x367503aau, 0xd4ac7d5bu, 0x72e3f70cu,
    0x111b70bdu, 0xaf52ea6eu, 0x4d8a641fu, 0xebc1ddd0u, 0x89f95781u, 0x2830d132u, 0xc6684ae3u, 0x649fc494u,
    0x02d73e45u, 0xa10eb7f6u, 0x3f4631a7u, 0xdd7dab58u, 0x7bb52509u, 0x19ec9ebau, 0xb824186bu, 0x565b921cu,
};

static const uint32_t bshim_184_tab6[96] = {
    0x21747e2eu, 0xbfabf7dfu, 0x5de37190u, 0xfc1aeb41u, 0x9a5264f2u, 0x3889dea3u, 0xd6c15854u, 0x74f8d205u,
    0x13304bb6u, 0xb167c567u, 0x4f9f3f18u, 0xedd6b8c9u, 0x8c0e327au, 0x2a45ac2bu, 0xc87d25dcu, 0x66b49f8du,
    0x04ec193eu, 0xa32392efu, 0x415b0ca0u, 0xdf928651u, 0x7dca0002u, 0x1c0179b3u, 0xba38f364u, 0x58706d15u,
    0xf6a7e6c6u, 0x94df6077u, 0x3316da28u, 0xd14e53d9u, 0x6f85cd8au, 0x0dbd473bu, 0xabf4c0ecu, 0x4a2c3a9du,
    0xe863b44eu, 0x869b2dffu, 0x24d2a7b0u, 0xc30a2161u, 0x61419b12u, 0xff7914c3u, 0x9db08e74u, 0x3be80825u,
    0xda1f81d6u, 0x7856fb87u, 0x168e7538u, 0xb4c5eee9u, 0x52fd689au, 0xf134e24bu, 0x8f6c5bfcu, 0x2da3d5adu,
    0xcbdb4f5eu, 0x6a12c90fu, 0x084a42c0u, 0xa681bc71u, 0x44b93622u, 0xe2f0afd3u, 0x81282984u, 0x1f5fa335u,
    0xbd971ce6u, 0x5bce9697u, 0xfa061048u, 0x983d89f9u, 0x367503aau, 0xd4ac7d5bu, 0x72e3f70cu, 0x111b70bdu,
    0xaf52ea6eu, 0x4d8a641fu, 0xebc1ddd0u, 0x89f95781u, 0x2830d132u, 0xc6684ae3u, 0x649fc494u, 0x02d73e45u,
    0xa10eb7f6u, 0x3f4631a7u, 0xdd7dab58u, 0x7bb52509u, 0x19ec9ebau, 0xb824186bu, 0x565b921cu, 0xf4930bcdu,
    0x92ca857eu, 0x3101ff2fu, 0xcf3978e0u, 0x6d70f291u, 0x0ba86c42u, 0xa9dfe5f3u, 0x48175fa4u, 0xe64ed955u,
    0x84865306u, 0x22bdccb7u, 0xc0f54668u, 0x5f2cc019u, 0xfd6439cau, 0x9b9bb37bu, 0x39d32d2cu, 0xd80aa6ddu,
};

static const uint32_t bshim_184_tab7[96] = {
    0xa32392efu, 0x415b0ca0u, 0xdf928651u, 0x7dca0002u, 0x1c0179b3u, 0xba38f364u, 0x58706d15u, 0xf6a7e6c6u,
    0x94df6077u, 0x3316da28u, 0xd14e53d9u, 0x6f85cd8au, 0x0dbd473bu, 0xabf4c0ecu, 0x4a2c3a9du, 0xe863b44eu,
    0x869b2dffu, 0x24d2a7b0u, 0xc30a2161u, 0x61419b12u, 0xff7914c3u, 0x9db08e74u, 0x3be80825u, 0xda1f81d6u,
    0x7856fb87u, 0x168e7538u, 0xb4c5eee9u, 0x52fd689au, 0xf134e24bu, 0x8f6c5bfcu, 0x2da3d5adu, 0xcbdb4f5eu,
    0x6a12c90fu, 0x084a42c0u, 0xa681bc71u, 0x44b93622u, 0xe2f0afd3u, 0x81282984u, 0x1f5fa335u, 0xbd971ce6u,
    0x5bce9697u, 0xfa061048u, 0x983d89f9u, 0x367503aau, 0xd4ac7d5bu, 0x72e3f70cu, 0x111b70bdu, 0xaf52ea6eu,
    0x4d8a641fu, 0xebc1ddd0u, 0x89f95781u, 0x2830d132u, 0xc6684ae3u, 0x649fc494u, 0x02d73e45u, 0xa10eb7f6u,
    0x3f4631a7u, 0xdd7dab58u, 0x7bb52509u, 0x19ec9ebau, 0xb824186bu, 0x565b921cu, 0xf4930bcdu, 0x92ca857eu,
    0x3101ff2fu, 0xcf3978e0u, 0x6d70f291u, 0x0ba86c42u, 0xa9dfe5f3u, 0x48175fa4u, 0xe64ed955u, 0x84865306u,
    0x22bdccb7u, 0xc0f54668u, 0x5f2cc019u, 0xfd6439cau, 0x9b9bb37bu, 0x39d32d2cu, 0xd80aa6ddu, 0x7642208eu,
    0x14799a3fu, 0xb2b113f0u, 0x50e88da1u, 0xef200752u, 0x8d578103u, 0x2b8efab4u, 0xc9c67465u, 0x67fdee16u,
    0x063567c7u, 0xa46ce178u, 0x42a45b29u, 0xe0dbd4dau, 0x7f134e8bu, 0x1d4ac83cu, 0xbb8241edu, 0x59b9bb9eu,
};

struct bshim_184_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_184_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_184_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_184_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_184_reset(struct bshim_184_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00163bc8u;
    return 0;
}

