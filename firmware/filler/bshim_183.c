/* bshim_183 -- board support shim generated from the 0183 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_183_tab0[96] = {
    0x20f6bc15u, 0xbf2e35c6u, 0x5d65af77u, 0xfb9d2928u, 0x99d4a2d9u, 0x380c1c8au, 0xd643963bu, 0x747b0fecu,
    0x12b2899du, 0xb0ea034eu, 0x4f217cffu, 0xed58f6b0u, 0x8b907061u, 0x29c7ea12u, 0xc7ff63c3u, 0x6636dd74u,
    0x046e5725u, 0xa2a5d0d6u, 0x40dd4a87u, 0xdf14c438u, 0x7d4c3de9u, 0x1b83b79au, 0xb9bb314bu, 0x57f2aafcu,
    0xf62a24adu, 0x94619e5eu, 0x3299180fu, 0xd0d091c0u, 0x6f080b71u, 0x0d3f8522u, 0xab76fed3u, 0x49ae7884u,
    0xe7e5f235u, 0x861d6be6u, 0x2454e597u, 0xc28c5f48u, 0x60c3d8f9u, 0xfefb52aau, 0x9d32cc5bu, 0x3b6a460cu,
    0xd9a1bfbdu, 0x77d9396eu, 0x1610b31fu, 0xb4482cd0u, 0x527fa681u, 0xf0b72032u, 0x8eee99e3u, 0x2d261394u,
    0xcb5d8d45u, 0x699506f6u, 0x07cc80a7u, 0xa603fa58u, 0x443b7409u, 0xe272edbau, 0x80aa676bu, 0x1ee1e11cu,
    0xbd195acdu, 0x5b50d47eu, 0xf9884e2fu, 0x97bfc7e0u, 0x35f74191u, 0xd42ebb42u, 0x726634f3u, 0x109daea4u,
    0xaed52855u, 0x4d0ca206u, 0xeb441bb7u, 0x897b9568u, 0x27b30f19u, 0xc5ea88cau, 0x6422027bu, 0x02597c2cu,
    0xa090f5ddu, 0x3ec86f8eu, 0xdcffe93fu, 0x7b3762f0u, 0x196edca1u, 0xb7a65652u, 0x55ddd003u, 0xf41549b4u,
    0x924cc365u, 0x30843d16u, 0xcebbb6c7u, 0x6cf33078u, 0x0b2aaa29u, 0xa96223dau, 0x47999d8bu, 0xe5d1173cu,
    0x840890edu, 0x22400a9eu, 0xc077844fu, 0x5eaefe00u, 0xfce677b1u, 0x9b1df162u, 0x39556b13u, 0xd78ce4c4u,
};

static const uint32_t bshim_183_tab1[96] = {
    0xa2a5d0d6u, 0x40dd4a87u, 0xdf14c438u, 0x7d4c3de9u, 0x1b83b79au, 0xb9bb314bu, 0x57f2aafcu, 0xf62a24adu,
    0x94619e5eu, 0x3299180fu, 0xd0d091c0u, 0x6f080b71u, 0x0d3f8522u, 0xab76fed3u, 0x49ae7884u, 0xe7e5f235u,
    0x861d6be6u, 0x2454e597u, 0xc28c5f48u, 0x60c3d8f9u, 0xfefb52aau, 0x9d32cc5bu, 0x3b6a460cu, 0xd9a1bfbdu,
    0x77d9396eu, 0x1610b31fu, 0xb4482cd0u, 0x527fa681u, 0xf0b72032u, 0x8eee99e3u, 0x2d261394u, 0xcb5d8d45u,
    0x699506f6u, 0x07cc80a7u, 0xa603fa58u, 0x443b7409u, 0xe272edbau, 0x80aa676bu, 0x1ee1e11cu, 0xbd195acdu,
    0x5b50d47eu, 0xf9884e2fu, 0x97bfc7e0u, 0x35f74191u, 0xd42ebb42u, 0x726634f3u, 0x109daea4u, 0xaed52855u,
    0x4d0ca206u, 0xeb441bb7u, 0x897b9568u, 0x27b30f19u, 0xc5ea88cau, 0x6422027bu, 0x02597c2cu, 0xa090f5ddu,
    0x3ec86f8eu, 0xdcffe93fu, 0x7b3762f0u, 0x196edca1u, 0xb7a65652u, 0x55ddd003u, 0xf41549b4u, 0x924cc365u,
    0x30843d16u, 0xcebbb6c7u, 0x6cf33078u, 0x0b2aaa29u, 0xa96223dau, 0x47999d8bu, 0xe5d1173cu, 0x840890edu,
    0x22400a9eu, 0xc077844fu, 0x5eaefe00u, 0xfce677b1u, 0x9b1df162u, 0x39556b13u, 0xd78ce4c4u, 0x75c45e75u,
    0x13fbd826u, 0xb23351d7u, 0x506acb88u, 0xeea24539u, 0x8cd9beeau, 0x2b11389bu, 0xc948b24cu, 0x67802bfdu,
    0x05b7a5aeu, 0xa3ef1f5fu, 0x42269910u, 0xe05e12c1u, 0x7e958c72u, 0x1ccd0623u, 0xbb047fd4u, 0x593bf985u,
};

static const uint32_t bshim_183_tab2[96] = {
    0x2454e597u, 0xc28c5f48u, 0x60c3d8f9u, 0xfefb52aau, 0x9d32cc5bu, 0x3b6a460cu, 0xd9a1bfbdu, 0x77d9396eu,
    0x1610b31fu, 0xb4482cd0u, 0x527fa681u, 0xf0b72032u, 0x8eee99e3u, 0x2d261394u, 0xcb5d8d45u, 0x699506f6u,
    0x07cc80a7u, 0xa603fa58u, 0x443b7409u, 0xe272edbau, 0x80aa676bu, 0x1ee1e11cu, 0xbd195acdu, 0x5b50d47eu,
    0xf9884e2fu, 0x97bfc7e0u, 0x35f74191u, 0xd42ebb42u, 0x726634f3u, 0x109daea4u, 0xaed52855u, 0x4d0ca206u,
    0xeb441bb7u, 0x897b9568u, 0x27b30f19u, 0xc5ea88cau, 0x6422027bu, 0x02597c2cu, 0xa090f5ddu, 0x3ec86f8eu,
    0xdcffe93fu, 0x7b3762f0u, 0x196edca1u, 0xb7a65652u, 0x55ddd003u, 0xf41549b4u, 0x924cc365u, 0x30843d16u,
    0xcebbb6c7u, 0x6cf33078u, 0x0b2aaa29u, 0xa96223dau, 0x47999d8bu, 0xe5d1173cu, 0x840890edu, 0x22400a9eu,
    0xc077844fu, 0x5eaefe00u, 0xfce677b1u, 0x9b1df162u, 0x39556b13u, 0xd78ce4c4u, 0x75c45e75u, 0x13fbd826u,
    0xb23351d7u, 0x506acb88u, 0xeea24539u, 0x8cd9beeau, 0x2b11389bu, 0xc948b24cu, 0x67802bfdu, 0x05b7a5aeu,
    0xa3ef1f5fu, 0x42269910u, 0xe05e12c1u, 0x7e958c72u, 0x1ccd0623u, 0xbb047fd4u, 0x593bf985u, 0xf7737336u,
    0x95aaece7u, 0x33e26698u, 0xd219e049u, 0x705159fau, 0x0e88d3abu, 0xacc04d5cu, 0x4af7c70du, 0xe92f40beu,
    0x8766ba6fu, 0x259e3420u, 0xc3d5add1u, 0x620d2782u, 0x0044a133u, 0x9e7c1ae4u, 0x3cb39495u, 0xdaeb0e46u,
};

static const uint32_t bshim_183_tab3[96] = {
    0xa603fa58u, 0x443b7409u, 0xe272edbau, 0x80aa676bu, 0x1ee1e11cu, 0xbd195acdu, 0x5b50d47eu, 0xf9884e2fu,
    0x97bfc7e0u, 0x35f74191u, 0xd42ebb42u, 0x726634f3u, 0x109daea4u, 0xaed52855u, 0x4d0ca206u, 0xeb441bb7u,
    0x897b9568u, 0x27b30f19u, 0xc5ea88cau, 0x6422027bu, 0x02597c2cu, 0xa090f5ddu, 0x3ec86f8eu, 0xdcffe93fu,
    0x7b3762f0u, 0x196edca1u, 0xb7a65652u, 0x55ddd003u, 0xf41549b4u, 0x924cc365u, 0x30843d16u, 0xcebbb6c7u,
    0x6cf33078u, 0x0b2aaa29u, 0xa96223dau, 0x47999d8bu, 0xe5d1173cu, 0x840890edu, 0x22400a9eu, 0xc077844fu,
    0x5eaefe00u, 0xfce677b1u, 0x9b1df162u, 0x39556b13u, 0xd78ce4c4u, 0x75c45e75u, 0x13fbd826u, 0xb23351d7u,
    0x506acb88u, 0xeea24539u, 0x8cd9beeau, 0x2b11389bu, 0xc948b24cu, 0x67802bfdu, 0x05b7a5aeu, 0xa3ef1f5fu,
    0x42269910u, 0xe05e12c1u, 0x7e958c72u, 0x1ccd0623u, 0xbb047fd4u, 0x593bf985u, 0xf7737336u, 0x95aaece7u,
    0x33e26698u, 0xd219e049u, 0x705159fau, 0x0e88d3abu, 0xacc04d5cu, 0x4af7c70du, 0xe92f40beu, 0x8766ba6fu,
    0x259e3420u, 0xc3d5add1u, 0x620d2782u, 0x0044a133u, 0x9e7c1ae4u, 0x3cb39495u, 0xdaeb0e46u, 0x792287f7u,
    0x175a01a8u, 0xb5917b59u, 0x53c8f50au, 0xf2006ebbu, 0x9037e86cu, 0x2e6f621du, 0xcca6dbceu, 0x6ade557fu,
    0x0915cf30u, 0xa74d48e1u, 0x4584c292u, 0xe3bc3c43u, 0x81f3b5f4u, 0x202b2fa5u, 0xbe62a956u, 0x5c9a2307u,
};

static const uint32_t bshim_183_tab4[96] = {
    0x27b30f19u, 0xc5ea88cau, 0x6422027bu, 0x02597c2cu, 0xa090f5ddu, 0x3ec86f8eu, 0xdcffe93fu, 0x7b3762f0u,
    0x196edca1u, 0xb7a65652u, 0x55ddd003u, 0xf41549b4u, 0x924cc365u, 0x30843d16u, 0xcebbb6c7u, 0x6cf33078u,
    0x0b2aaa29u, 0xa96223dau, 0x47999d8bu, 0xe5d1173cu, 0x840890edu, 0x22400a9eu, 0xc077844fu, 0x5eaefe00u,
    0xfce677b1u, 0x9b1df162u, 0x39556b13u, 0xd78ce4c4u, 0x75c45e75u, 0x13fbd826u, 0xb23351d7u, 0x506acb88u,
    0xeea24539u, 0x8cd9beeau, 0x2b11389bu, 0xc948b24cu, 0x67802bfdu, 0x05b7a5aeu, 0xa3ef1f5fu, 0x42269910u,
    0xe05e12c1u, 0x7e958c72u, 0x1ccd0623u, 0xbb047fd4u, 0x593bf985u, 0xf7737336u, 0x95aaece7u, 0x33e26698u,
    0xd219e049u, 0x705159fau, 0x0e88d3abu, 0xacc04d5cu, 0x4af7c70du, 0xe92f40beu, 0x8766ba6fu, 0x259e3420u,
    0xc3d5add1u, 0x620d2782u, 0x0044a133u, 0x9e7c1ae4u, 0x3cb39495u, 0xdaeb0e46u, 0x792287f7u, 0x175a01a8u,
    0xb5917b59u, 0x53c8f50au, 0xf2006ebbu, 0x9037e86cu, 0x2e6f621du, 0xcca6dbceu, 0x6ade557fu, 0x0915cf30u,
    0xa74d48e1u, 0x4584c292u, 0xe3bc3c43u, 0x81f3b5f4u, 0x202b2fa5u, 0xbe62a956u, 0x5c9a2307u, 0xfad19cb8u,
    0x99091669u, 0x3740901au, 0xd57809cbu, 0x73af837cu, 0x11e6fd2du, 0xb01e76deu, 0x4e55f08fu, 0xec8d6a40u,
    0x8ac4e3f1u, 0x28fc5da2u, 0xc733d753u, 0x656b5104u, 0x03a2cab5u, 0xa1da4466u, 0x4011be17u, 0xde4937c8u,
};

static const uint32_t bshim_183_tab5[96] = {
    0xa96223dau, 0x47999d8bu, 0xe5d1173cu, 0x840890edu, 0x22400a9eu, 0xc077844fu, 0x5eaefe00u, 0xfce677b1u,
    0x9b1df162u, 0x39556b13u, 0xd78ce4c4u, 0x75c45e75u, 0x13fbd826u, 0xb23351d7u, 0x506acb88u, 0xeea24539u,
    0x8cd9beeau, 0x2b11389bu, 0xc948b24cu, 0x67802bfdu, 0x05b7a5aeu, 0xa3ef1f5fu, 0x42269910u, 0xe05e12c1u,
    0x7e958c72u, 0x1ccd0623u, 0xbb047fd4u, 0x593bf985u, 0xf7737336u, 0x95aaece7u, 0x33e26698u, 0xd219e049u,
    0x705159fau, 0x0e88d3abu, 0xacc04d5cu, 0x4af7c70du, 0xe92f40beu, 0x8766ba6fu, 0x259e3420u, 0xc3d5add1u,
    0x620d2782u, 0x0044a133u, 0x9e7c1ae4u, 0x3cb39495u, 0xdaeb0e46u, 0x792287f7u, 0x175a01a8u, 0xb5917b59u,
    0x53c8f50au, 0xf2006ebbu, 0x9037e86cu, 0x2e6f621du, 0xcca6dbceu, 0x6ade557fu, 0x0915cf30u, 0xa74d48e1u,
    0x4584c292u, 0xe3bc3c43u, 0x81f3b5f4u, 0x202b2fa5u, 0xbe62a956u, 0x5c9a2307u, 0xfad19cb8u, 0x99091669u,
    0x3740901au, 0xd57809cbu, 0x73af837cu, 0x11e6fd2du, 0xb01e76deu, 0x4e55f08fu, 0xec8d6a40u, 0x8ac4e3f1u,
    0x28fc5da2u, 0xc733d753u, 0x656b5104u, 0x03a2cab5u, 0xa1da4466u, 0x4011be17u, 0xde4937c8u, 0x7c80b179u,
    0x1ab82b2au, 0xb8efa4dbu, 0x57271e8cu, 0xf55e983du, 0x939611eeu, 0x31cd8b9fu, 0xd0050550u, 0x6e3c7f01u,
    0x0c73f8b2u, 0xaaab7263u, 0x48e2ec14u, 0xe71a65c5u, 0x8551df76u, 0x23895927u, 0xc1c0d2d8u, 0x5ff84c89u,
};

static const uint32_t bshim_183_tab6[96] = {
    0x2b11389bu, 0xc948b24cu, 0x67802bfdu, 0x05b7a5aeu, 0xa3ef1f5fu, 0x42269910u, 0xe05e12c1u, 0x7e958c72u,
    0x1ccd0623u, 0xbb047fd4u, 0x593bf985u, 0xf7737336u, 0x95aaece7u, 0x33e26698u, 0xd219e049u, 0x705159fau,
    0x0e88d3abu, 0xacc04d5cu, 0x4af7c70du, 0xe92f40beu, 0x8766ba6fu, 0x259e3420u, 0xc3d5add1u, 0x620d2782u,
    0x0044a133u, 0x9e7c1ae4u, 0x3cb39495u, 0xdaeb0e46u, 0x792287f7u, 0x175a01a8u, 0xb5917b59u, 0x53c8f50au,
    0xf2006ebbu, 0x9037e86cu, 0x2e6f621du, 0xcca6dbceu, 0x6ade557fu, 0x0915cf30u, 0xa74d48e1u, 0x4584c292u,
    0xe3bc3c43u, 0x81f3b5f4u, 0x202b2fa5u, 0xbe62a956u, 0x5c9a2307u, 0xfad19cb8u, 0x99091669u, 0x3740901au,
    0xd57809cbu, 0x73af837cu, 0x11e6fd2du, 0xb01e76deu, 0x4e55f08fu, 0xec8d6a40u, 0x8ac4e3f1u, 0x28fc5da2u,
    0xc733d753u, 0x656b5104u, 0x03a2cab5u, 0xa1da4466u, 0x4011be17u, 0xde4937c8u, 0x7c80b179u, 0x1ab82b2au,
    0xb8efa4dbu, 0x57271e8cu, 0xf55e983du, 0x939611eeu, 0x31cd8b9fu, 0xd0050550u, 0x6e3c7f01u, 0x0c73f8b2u,
    0xaaab7263u, 0x48e2ec14u, 0xe71a65c5u, 0x8551df76u, 0x23895927u, 0xc1c0d2d8u, 0x5ff84c89u, 0xfe2fc63au,
    0x9c673febu, 0x3a9eb99cu, 0xd8d6334du, 0x770dacfeu, 0x154526afu, 0xb37ca060u, 0x51b41a11u, 0xefeb93c2u,
    0x8e230d73u, 0x2c5a8724u, 0xca9200d5u, 0x68c97a86u, 0x0700f437u, 0xa5386de8u, 0x436fe799u, 0xe1a7614au,
};

static const uint32_t bshim_183_tab7[96] = {
    0xacc04d5cu, 0x4af7c70du, 0xe92f40beu, 0x8766ba6fu, 0x259e3420u, 0xc3d5add1u, 0x620d2782u, 0x0044a133u,
    0x9e7c1ae4u, 0x3cb39495u, 0xdaeb0e46u, 0x792287f7u, 0x175a01a8u, 0xb5917b59u, 0x53c8f50au, 0xf2006ebbu,
    0x9037e86cu, 0x2e6f621du, 0xcca6dbceu, 0x6ade557fu, 0x0915cf30u, 0xa74d48e1u, 0x4584c292u, 0xe3bc3c43u,
    0x81f3b5f4u, 0x202b2fa5u, 0xbe62a956u, 0x5c9a2307u, 0xfad19cb8u, 0x99091669u, 0x3740901au, 0xd57809cbu,
    0x73af837cu, 0x11e6fd2du, 0xb01e76deu, 0x4e55f08fu, 0xec8d6a40u, 0x8ac4e3f1u, 0x28fc5da2u, 0xc733d753u,
    0x656b5104u, 0x03a2cab5u, 0xa1da4466u, 0x4011be17u, 0xde4937c8u, 0x7c80b179u, 0x1ab82b2au, 0xb8efa4dbu,
    0x57271e8cu, 0xf55e983du, 0x939611eeu, 0x31cd8b9fu, 0xd0050550u, 0x6e3c7f01u, 0x0c73f8b2u, 0xaaab7263u,
    0x48e2ec14u, 0xe71a65c5u, 0x8551df76u, 0x23895927u, 0xc1c0d2d8u, 0x5ff84c89u, 0xfe2fc63au, 0x9c673febu,
    0x3a9eb99cu, 0xd8d6334du, 0x770dacfeu, 0x154526afu, 0xb37ca060u, 0x51b41a11u, 0xefeb93c2u, 0x8e230d73u,
    0x2c5a8724u, 0xca9200d5u, 0x68c97a86u, 0x0700f437u, 0xa5386de8u, 0x436fe799u, 0xe1a7614au, 0x7fdedafbu,
    0x1e1654acu, 0xbc4dce5du, 0x5a85480eu, 0xf8bcc1bfu, 0x96f43b70u, 0x352bb521u, 0xd3632ed2u, 0x719aa883u,
    0x0fd22234u, 0xae099be5u, 0x4c411596u, 0xea788f47u, 0x88b008f8u, 0x26e782a9u, 0xc51efc5au, 0x6356760bu,
};

struct bshim_183_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_183_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_183_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_183_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_183_reset(struct bshim_183_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00161cd9u;
    return 0;
}

