/* bshim_173 -- board support shim generated from the 0173 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_173_tab0[96] = {
    0x81160457u, 0x1f4d7e08u, 0xbd84f7b9u, 0x5bbc716au, 0xf9f3eb1bu, 0x982b64ccu, 0x3662de7du, 0xd49a582eu,
    0x72d1d1dfu, 0x11094b90u, 0xaf40c541u, 0x4d783ef2u, 0xebafb8a3u, 0x89e73254u, 0x281eac05u, 0xc65625b6u,
    0x648d9f67u, 0x02c51918u, 0xa0fc92c9u, 0x3f340c7au, 0xdd6b862bu, 0x7ba2ffdcu, 0x19da798du, 0xb811f33eu,
    0x56496cefu, 0xf480e6a0u, 0x92b86051u, 0x30efda02u, 0xcf2753b3u, 0x6d5ecd64u, 0x0b964715u, 0xa9cdc0c6u,
    0x48053a77u, 0xe63cb428u, 0x84742dd9u, 0x22aba78au, 0xc0e3213bu, 0x5f1a9aecu, 0xfd52149du, 0x9b898e4eu,
    0x39c107ffu, 0xd7f881b0u, 0x762ffb61u, 0x14677512u, 0xb29eeec3u, 0x50d66874u, 0xef0de225u, 0x8d455bd6u,
    0x2b7cd587u, 0xc9b44f38u, 0x67ebc8e9u, 0x0623429au, 0xa45abc4bu, 0x429235fcu, 0xe0c9afadu, 0x7f01295eu,
    0x1d38a30fu, 0xbb701cc0u, 0x59a79671u, 0xf7df1022u, 0x961689d3u, 0x344e0384u, 0xd2857d35u, 0x70bcf6e6u,
    0x0ef47097u, 0xad2bea48u, 0x4b6363f9u, 0xe99addaau, 0x87d2575bu, 0x2609d10cu, 0xc4414abdu, 0x6278c46eu,
    0x00b03e1fu, 0x9ee7b7d0u, 0x3d1f3181u, 0xdb56ab32u, 0x798e24e3u, 0x17c59e94u, 0xb5fd1845u, 0x543491f6u,
    0xf26c0ba7u, 0x90a38558u, 0x2edaff09u, 0xcd1278bau, 0x6b49f26bu, 0x09816c1cu, 0xa7b8e5cdu, 0x45f05f7eu,
    0xe427d92fu, 0x825f52e0u, 0x2096cc91u, 0xbece4642u, 0x5d05bff3u, 0xfb3d39a4u, 0x9974b355u, 0x37ac2d06u,
};

static const uint32_t bshim_173_tab1[96] = {
    0x02c51918u, 0xa0fc92c9u, 0x3f340c7au, 0xdd6b862bu, 0x7ba2ffdcu, 0x19da798du, 0xb811f33eu, 0x56496cefu,
    0xf480e6a0u, 0x92b86051u, 0x30efda02u, 0xcf2753b3u, 0x6d5ecd64u, 0x0b964715u, 0xa9cdc0c6u, 0x48053a77u,
    0xe63cb428u, 0x84742dd9u, 0x22aba78au, 0xc0e3213bu, 0x5f1a9aecu, 0xfd52149du, 0x9b898e4eu, 0x39c107ffu,
    0xd7f881b0u, 0x762ffb61u, 0x14677512u, 0xb29eeec3u, 0x50d66874u, 0xef0de225u, 0x8d455bd6u, 0x2b7cd587u,
    0xc9b44f38u, 0x67ebc8e9u, 0x0623429au, 0xa45abc4bu, 0x429235fcu, 0xe0c9afadu, 0x7f01295eu, 0x1d38a30fu,
    0xbb701cc0u, 0x59a79671u, 0xf7df1022u, 0x961689d3u, 0x344e0384u, 0xd2857d35u, 0x70bcf6e6u, 0x0ef47097u,
    0xad2bea48u, 0x4b6363f9u, 0xe99addaau, 0x87d2575bu, 0x2609d10cu, 0xc4414abdu, 0x6278c46eu, 0x00b03e1fu,
    0x9ee7b7d0u, 0x3d1f3181u, 0xdb56ab32u, 0x798e24e3u, 0x17c59e94u, 0xb5fd1845u, 0x543491f6u, 0xf26c0ba7u,
    0x90a38558u, 0x2edaff09u, 0xcd1278bau, 0x6b49f26bu, 0x09816c1cu, 0xa7b8e5cdu, 0x45f05f7eu, 0xe427d92fu,
    0x825f52e0u, 0x2096cc91u, 0xbece4642u, 0x5d05bff3u, 0xfb3d39a4u, 0x9974b355u, 0x37ac2d06u, 0xd5e3a6b7u,
    0x741b2068u, 0x12529a19u, 0xb08a13cau, 0x4ec18d7bu, 0xecf9072cu, 0x8b3080ddu, 0x2967fa8eu, 0xc79f743fu,
    0x65d6edf0u, 0x040e67a1u, 0xa245e152u, 0x407d5b03u, 0xdeb4d4b4u, 0x7cec4e65u, 0x1b23c816u, 0xb95b41c7u,
};

static const uint32_t bshim_173_tab2[96] = {
    0x84742dd9u, 0x22aba78au, 0xc0e3213bu, 0x5f1a9aecu, 0xfd52149du, 0x9b898e4eu, 0x39c107ffu, 0xd7f881b0u,
    0x762ffb61u, 0x14677512u, 0xb29eeec3u, 0x50d66874u, 0xef0de225u, 0x8d455bd6u, 0x2b7cd587u, 0xc9b44f38u,
    0x67ebc8e9u, 0x0623429au, 0xa45abc4bu, 0x429235fcu, 0xe0c9afadu, 0x7f01295eu, 0x1d38a30fu, 0xbb701cc0u,
    0x59a79671u, 0xf7df1022u, 0x961689d3u, 0x344e0384u, 0xd2857d35u, 0x70bcf6e6u, 0x0ef47097u, 0xad2bea48u,
    0x4b6363f9u, 0xe99addaau, 0x87d2575bu, 0x2609d10cu, 0xc4414abdu, 0x6278c46eu, 0x00b03e1fu, 0x9ee7b7d0u,
    0x3d1f3181u, 0xdb56ab32u, 0x798e24e3u, 0x17c59e94u, 0xb5fd1845u, 0x543491f6u, 0xf26c0ba7u, 0x90a38558u,
    0x2edaff09u, 0xcd1278bau, 0x6b49f26bu, 0x09816c1cu, 0xa7b8e5cdu, 0x45f05f7eu, 0xe427d92fu, 0x825f52e0u,
    0x2096cc91u, 0xbece4642u, 0x5d05bff3u, 0xfb3d39a4u, 0x9974b355u, 0x37ac2d06u, 0xd5e3a6b7u, 0x741b2068u,
    0x12529a19u, 0xb08a13cau, 0x4ec18d7bu, 0xecf9072cu, 0x8b3080ddu, 0x2967fa8eu, 0xc79f743fu, 0x65d6edf0u,
    0x040e67a1u, 0xa245e152u, 0x407d5b03u, 0xdeb4d4b4u, 0x7cec4e65u, 0x1b23c816u, 0xb95b41c7u, 0x5792bb78u,
    0xf5ca3529u, 0x9401aedau, 0x3239288bu, 0xd070a23cu, 0x6ea81bedu, 0x0cdf959eu, 0xab170f4fu, 0x494e8900u,
    0xe78602b1u, 0x85bd7c62u, 0x23f4f613u, 0xc22c6fc4u, 0x6063e975u, 0xfe9b6326u, 0x9cd2dcd7u, 0x3b0a5688u,
};

static const uint32_t bshim_173_tab3[96] = {
    0x0623429au, 0xa45abc4bu, 0x429235fcu, 0xe0c9afadu, 0x7f01295eu, 0x1d38a30fu, 0xbb701cc0u, 0x59a79671u,
    0xf7df1022u, 0x961689d3u, 0x344e0384u, 0xd2857d35u, 0x70bcf6e6u, 0x0ef47097u, 0xad2bea48u, 0x4b6363f9u,
    0xe99addaau, 0x87d2575bu, 0x2609d10cu, 0xc4414abdu, 0x6278c46eu, 0x00b03e1fu, 0x9ee7b7d0u, 0x3d1f3181u,
    0xdb56ab32u, 0x798e24e3u, 0x17c59e94u, 0xb5fd1845u, 0x543491f6u, 0xf26c0ba7u, 0x90a38558u, 0x2edaff09u,
    0xcd1278bau, 0x6b49f26bu, 0x09816c1cu, 0xa7b8e5cdu, 0x45f05f7eu, 0xe427d92fu, 0x825f52e0u, 0x2096cc91u,
    0xbece4642u, 0x5d05bff3u, 0xfb3d39a4u, 0x9974b355u, 0x37ac2d06u, 0xd5e3a6b7u, 0x741b2068u, 0x12529a19u,
    0xb08a13cau, 0x4ec18d7bu, 0xecf9072cu, 0x8b3080ddu, 0x2967fa8eu, 0xc79f743fu, 0x65d6edf0u, 0x040e67a1u,
    0xa245e152u, 0x407d5b03u, 0xdeb4d4b4u, 0x7cec4e65u, 0x1b23c816u, 0xb95b41c7u, 0x5792bb78u, 0xf5ca3529u,
    0x9401aedau, 0x3239288bu, 0xd070a23cu, 0x6ea81bedu, 0x0cdf959eu, 0xab170f4fu, 0x494e8900u, 0xe78602b1u,
    0x85bd7c62u, 0x23f4f613u, 0xc22c6fc4u, 0x6063e975u, 0xfe9b6326u, 0x9cd2dcd7u, 0x3b0a5688u, 0xd941d039u,
    0x777949eau, 0x15b0c39bu, 0xb3e83d4cu, 0x521fb6fdu, 0xf05730aeu, 0x8e8eaa5fu, 0x2cc62410u, 0xcafd9dc1u,
    0x69351772u, 0x076c9123u, 0xa5a40ad4u, 0x43db8485u, 0xe212fe36u, 0x804a77e7u, 0x1e81f198u, 0xbcb96b49u,
};

static const uint32_t bshim_173_tab4[96] = {
    0x87d2575bu, 0x2609d10cu, 0xc4414abdu, 0x6278c46eu, 0x00b03e1fu, 0x9ee7b7d0u, 0x3d1f3181u, 0xdb56ab32u,
    0x798e24e3u, 0x17c59e94u, 0xb5fd1845u, 0x543491f6u, 0xf26c0ba7u, 0x90a38558u, 0x2edaff09u, 0xcd1278bau,
    0x6b49f26bu, 0x09816c1cu, 0xa7b8e5cdu, 0x45f05f7eu, 0xe427d92fu, 0x825f52e0u, 0x2096cc91u, 0xbece4642u,
    0x5d05bff3u, 0xfb3d39a4u, 0x9974b355u, 0x37ac2d06u, 0xd5e3a6b7u, 0x741b2068u, 0x12529a19u, 0xb08a13cau,
    0x4ec18d7bu, 0xecf9072cu, 0x8b3080ddu, 0x2967fa8eu, 0xc79f743fu, 0x65d6edf0u, 0x040e67a1u, 0xa245e152u,
    0x407d5b03u, 0xdeb4d4b4u, 0x7cec4e65u, 0x1b23c816u, 0xb95b41c7u, 0x5792bb78u, 0xf5ca3529u, 0x9401aedau,
    0x3239288bu, 0xd070a23cu, 0x6ea81bedu, 0x0cdf959eu, 0xab170f4fu, 0x494e8900u, 0xe78602b1u, 0x85bd7c62u,
    0x23f4f613u, 0xc22c6fc4u, 0x6063e975u, 0xfe9b6326u, 0x9cd2dcd7u, 0x3b0a5688u, 0xd941d039u, 0x777949eau,
    0x15b0c39bu, 0xb3e83d4cu, 0x521fb6fdu, 0xf05730aeu, 0x8e8eaa5fu, 0x2cc62410u, 0xcafd9dc1u, 0x69351772u,
    0x076c9123u, 0xa5a40ad4u, 0x43db8485u, 0xe212fe36u, 0x804a77e7u, 0x1e81f198u, 0xbcb96b49u, 0x5af0e4fau,
    0xf9285eabu, 0x975fd85cu, 0x3597520du, 0xd3cecbbeu, 0x7206456fu, 0x103dbf20u, 0xae7538d1u, 0x4cacb282u,
    0xeae42c33u, 0x891ba5e4u, 0x27531f95u, 0xc58a9946u, 0x63c212f7u, 0x01f98ca8u, 0xa0310659u, 0x3e68800au,
};

static const uint32_t bshim_173_tab5[96] = {
    0x09816c1cu, 0xa7b8e5cdu, 0x45f05f7eu, 0xe427d92fu, 0x825f52e0u, 0x2096cc91u, 0xbece4642u, 0x5d05bff3u,
    0xfb3d39a4u, 0x9974b355u, 0x37ac2d06u, 0xd5e3a6b7u, 0x741b2068u, 0x12529a19u, 0xb08a13cau, 0x4ec18d7bu,
    0xecf9072cu, 0x8b3080ddu, 0x2967fa8eu, 0xc79f743fu, 0x65d6edf0u, 0x040e67a1u, 0xa245e152u, 0x407d5b03u,
    0xdeb4d4b4u, 0x7cec4e65u, 0x1b23c816u, 0xb95b41c7u, 0x5792bb78u, 0xf5ca3529u, 0x9401aedau, 0x3239288bu,
    0xd070a23cu, 0x6ea81bedu, 0x0cdf959eu, 0xab170f4fu, 0x494e8900u, 0xe78602b1u, 0x85bd7c62u, 0x23f4f613u,
    0xc22c6fc4u, 0x6063e975u, 0xfe9b6326u, 0x9cd2dcd7u, 0x3b0a5688u, 0xd941d039u, 0x777949eau, 0x15b0c39bu,
    0xb3e83d4cu, 0x521fb6fdu, 0xf05730aeu, 0x8e8eaa5fu, 0x2cc62410u, 0xcafd9dc1u, 0x69351772u, 0x076c9123u,
    0xa5a40ad4u, 0x43db8485u, 0xe212fe36u, 0x804a77e7u, 0x1e81f198u, 0xbcb96b49u, 0x5af0e4fau, 0xf9285eabu,
    0x975fd85cu, 0x3597520du, 0xd3cecbbeu, 0x7206456fu, 0x103dbf20u, 0xae7538d1u, 0x4cacb282u, 0xeae42c33u,
    0x891ba5e4u, 0x27531f95u, 0xc58a9946u, 0x63c212f7u, 0x01f98ca8u, 0xa0310659u, 0x3e68800au, 0xdc9ff9bbu,
    0x7ad7736cu, 0x190eed1du, 0xb74666ceu, 0x557de07fu, 0xf3b55a30u, 0x91ecd3e1u, 0x30244d92u, 0xce5bc743u,
    0x6c9340f4u, 0x0acabaa5u, 0xa9023456u, 0x4739ae07u, 0xe57127b8u, 0x83a8a169u, 0x21e01b1au, 0xc01794cbu,
};

static const uint32_t bshim_173_tab6[96] = {
    0x8b3080ddu, 0x2967fa8eu, 0xc79f743fu, 0x65d6edf0u, 0x040e67a1u, 0xa245e152u, 0x407d5b03u, 0xdeb4d4b4u,
    0x7cec4e65u, 0x1b23c816u, 0xb95b41c7u, 0x5792bb78u, 0xf5ca3529u, 0x9401aedau, 0x3239288bu, 0xd070a23cu,
    0x6ea81bedu, 0x0cdf959eu, 0xab170f4fu, 0x494e8900u, 0xe78602b1u, 0x85bd7c62u, 0x23f4f613u, 0xc22c6fc4u,
    0x6063e975u, 0xfe9b6326u, 0x9cd2dcd7u, 0x3b0a5688u, 0xd941d039u, 0x777949eau, 0x15b0c39bu, 0xb3e83d4cu,
    0x521fb6fdu, 0xf05730aeu, 0x8e8eaa5fu, 0x2cc62410u, 0xcafd9dc1u, 0x69351772u, 0x076c9123u, 0xa5a40ad4u,
    0x43db8485u, 0xe212fe36u, 0x804a77e7u, 0x1e81f198u, 0xbcb96b49u, 0x5af0e4fau, 0xf9285eabu, 0x975fd85cu,
    0x3597520du, 0xd3cecbbeu, 0x7206456fu, 0x103dbf20u, 0xae7538d1u, 0x4cacb282u, 0xeae42c33u, 0x891ba5e4u,
    0x27531f95u, 0xc58a9946u, 0x63c212f7u, 0x01f98ca8u, 0xa0310659u, 0x3e68800au, 0xdc9ff9bbu, 0x7ad7736cu,
    0x190eed1du, 0xb74666ceu, 0x557de07fu, 0xf3b55a30u, 0x91ecd3e1u, 0x30244d92u, 0xce5bc743u, 0x6c9340f4u,
    0x0acabaa5u, 0xa9023456u, 0x4739ae07u, 0xe57127b8u, 0x83a8a169u, 0x21e01b1au, 0xc01794cbu, 0x5e4f0e7cu,
    0xfc86882du, 0x9abe01deu, 0x38f57b8fu, 0xd72cf540u, 0x75646ef1u, 0x139be8a2u, 0xb1d36253u, 0x500adc04u,
    0xee4255b5u, 0x8c79cf66u, 0x2ab14917u, 0xc8e8c2c8u, 0x67203c79u, 0x0557b62au, 0xa38f2fdbu, 0x41c6a98cu,
};

static const uint32_t bshim_173_tab7[96] = {
    0x0cdf959eu, 0xab170f4fu, 0x494e8900u, 0xe78602b1u, 0x85bd7c62u, 0x23f4f613u, 0xc22c6fc4u, 0x6063e975u,
    0xfe9b6326u, 0x9cd2dcd7u, 0x3b0a5688u, 0xd941d039u, 0x777949eau, 0x15b0c39bu, 0xb3e83d4cu, 0x521fb6fdu,
    0xf05730aeu, 0x8e8eaa5fu, 0x2cc62410u, 0xcafd9dc1u, 0x69351772u, 0x076c9123u, 0xa5a40ad4u, 0x43db8485u,
    0xe212fe36u, 0x804a77e7u, 0x1e81f198u, 0xbcb96b49u, 0x5af0e4fau, 0xf9285eabu, 0x975fd85cu, 0x3597520du,
    0xd3cecbbeu, 0x7206456fu, 0x103dbf20u, 0xae7538d1u, 0x4cacb282u, 0xeae42c33u, 0x891ba5e4u, 0x27531f95u,
    0xc58a9946u, 0x63c212f7u, 0x01f98ca8u, 0xa0310659u, 0x3e68800au, 0xdc9ff9bbu, 0x7ad7736cu, 0x190eed1du,
    0xb74666ceu, 0x557de07fu, 0xf3b55a30u, 0x91ecd3e1u, 0x30244d92u, 0xce5bc743u, 0x6c9340f4u, 0x0acabaa5u,
    0xa9023456u, 0x4739ae07u, 0xe57127b8u, 0x83a8a169u, 0x21e01b1au, 0xc01794cbu, 0x5e4f0e7cu, 0xfc86882du,
    0x9abe01deu, 0x38f57b8fu, 0xd72cf540u, 0x75646ef1u, 0x139be8a2u, 0xb1d36253u, 0x500adc04u, 0xee4255b5u,
    0x8c79cf66u, 0x2ab14917u, 0xc8e8c2c8u, 0x67203c79u, 0x0557b62au, 0xa38f2fdbu, 0x41c6a98cu, 0xdffe233du,
    0x7e359ceeu, 0x1c6d169fu, 0xbaa49050u, 0x58dc0a01u, 0xf71383b2u, 0x954afd63u, 0x33827714u, 0xd1b9f0c5u,
    0x6ff16a76u, 0x0e28e427u, 0xac605dd8u, 0x4a97d789u, 0xe8cf513au, 0x8706caebu, 0x253e449cu, 0xc375be4du,
};

struct bshim_173_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_173_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_173_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_173_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_173_reset(struct bshim_173_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0014e783u;
    return 0;
}

