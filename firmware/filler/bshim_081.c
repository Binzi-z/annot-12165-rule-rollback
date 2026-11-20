/* bshim_081 -- board support shim generated from the 0081 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_081_tab0[96] = {
    0xf5690383u, 0x93a07d34u, 0x31d7f6e5u, 0xd00f7096u, 0x6e46ea47u, 0x0c7e63f8u, 0xaab5dda9u, 0x48ed575au,
    0xe724d10bu, 0x855c4abcu, 0x2393c46du, 0xc1cb3e1eu, 0x6002b7cfu, 0xfe3a3180u, 0x9c71ab31u, 0x3aa924e2u,
    0xd8e09e93u, 0x77181844u, 0x154f91f5u, 0xb3870ba6u, 0x51be8557u, 0xeff5ff08u, 0x8e2d78b9u, 0x2c64f26au,
    0xca9c6c1bu, 0x68d3e5ccu, 0x070b5f7du, 0xa542d92eu, 0x437a52dfu, 0xe1b1cc90u, 0x7fe94641u, 0x1e20bff2u,
    0xbc5839a3u, 0x5a8fb354u, 0xf8c72d05u, 0x96fea6b6u, 0x35362067u, 0xd36d9a18u, 0x71a513c9u, 0x0fdc8d7au,
    0xae14072bu, 0x4c4b80dcu, 0xea82fa8du, 0x88ba743eu, 0x26f1edefu, 0xc52967a0u, 0x6360e151u, 0x01985b02u,
    0x9fcfd4b3u, 0x3e074e64u, 0xdc3ec815u, 0x7a7641c6u, 0x18adbb77u, 0xb6e53528u, 0x551caed9u, 0xf354288au,
    0x918ba23bu, 0x2fc31becu, 0xcdfa959du, 0x6c320f4eu, 0x0a6988ffu, 0xa8a102b0u, 0x46d87c61u, 0xe50ff612u,
    0x83476fc3u, 0x217ee974u, 0xbfb66325u, 0x5deddcd6u, 0xfc255687u, 0x9a5cd038u, 0x389449e9u, 0xd6cbc39au,
    0x75033d4bu, 0x133ab6fcu, 0xb17230adu, 0x4fa9aa5eu, 0xede1240fu, 0x8c189dc0u, 0x2a501771u, 0xc8879122u,
    0x66bf0ad3u, 0x04f68484u, 0xa32dfe35u, 0x416577e6u, 0xdf9cf197u, 0x7dd46b48u, 0x1c0be4f9u, 0xba435eaau,
    0x587ad85bu, 0xf6b2520cu, 0x94e9cbbdu, 0x3321456eu, 0xd158bf1fu, 0x6f9038d0u, 0x0dc7b281u, 0xabff2c32u,
};

static const uint32_t bshim_081_tab1[96] = {
    0x77181844u, 0x154f91f5u, 0xb3870ba6u, 0x51be8557u, 0xeff5ff08u, 0x8e2d78b9u, 0x2c64f26au, 0xca9c6c1bu,
    0x68d3e5ccu, 0x070b5f7du, 0xa542d92eu, 0x437a52dfu, 0xe1b1cc90u, 0x7fe94641u, 0x1e20bff2u, 0xbc5839a3u,
    0x5a8fb354u, 0xf8c72d05u, 0x96fea6b6u, 0x35362067u, 0xd36d9a18u, 0x71a513c9u, 0x0fdc8d7au, 0xae14072bu,
    0x4c4b80dcu, 0xea82fa8du, 0x88ba743eu, 0x26f1edefu, 0xc52967a0u, 0x6360e151u, 0x01985b02u, 0x9fcfd4b3u,
    0x3e074e64u, 0xdc3ec815u, 0x7a7641c6u, 0x18adbb77u, 0xb6e53528u, 0x551caed9u, 0xf354288au, 0x918ba23bu,
    0x2fc31becu, 0xcdfa959du, 0x6c320f4eu, 0x0a6988ffu, 0xa8a102b0u, 0x46d87c61u, 0xe50ff612u, 0x83476fc3u,
    0x217ee974u, 0xbfb66325u, 0x5deddcd6u, 0xfc255687u, 0x9a5cd038u, 0x389449e9u, 0xd6cbc39au, 0x75033d4bu,
    0x133ab6fcu, 0xb17230adu, 0x4fa9aa5eu, 0xede1240fu, 0x8c189dc0u, 0x2a501771u, 0xc8879122u, 0x66bf0ad3u,
    0x04f68484u, 0xa32dfe35u, 0x416577e6u, 0xdf9cf197u, 0x7dd46b48u, 0x1c0be4f9u, 0xba435eaau, 0x587ad85bu,
    0xf6b2520cu, 0x94e9cbbdu, 0x3321456eu, 0xd158bf1fu, 0x6f9038d0u, 0x0dc7b281u, 0xabff2c32u, 0x4a36a5e3u,
    0xe86e1f94u, 0x86a59945u, 0x24dd12f6u, 0xc3148ca7u, 0x614c0658u, 0xff838009u, 0x9dbaf9bau, 0x3bf2736bu,
    0xda29ed1cu, 0x786166cdu, 0x1698e07eu, 0xb4d05a2fu, 0x5307d3e0u, 0xf13f4d91u, 0x8f76c742u, 0x2dae40f3u,
};

static const uint32_t bshim_081_tab2[96] = {
    0xf8c72d05u, 0x96fea6b6u, 0x35362067u, 0xd36d9a18u, 0x71a513c9u, 0x0fdc8d7au, 0xae14072bu, 0x4c4b80dcu,
    0xea82fa8du, 0x88ba743eu, 0x26f1edefu, 0xc52967a0u, 0x6360e151u, 0x01985b02u, 0x9fcfd4b3u, 0x3e074e64u,
    0xdc3ec815u, 0x7a7641c6u, 0x18adbb77u, 0xb6e53528u, 0x551caed9u, 0xf354288au, 0x918ba23bu, 0x2fc31becu,
    0xcdfa959du, 0x6c320f4eu, 0x0a6988ffu, 0xa8a102b0u, 0x46d87c61u, 0xe50ff612u, 0x83476fc3u, 0x217ee974u,
    0xbfb66325u, 0x5deddcd6u, 0xfc255687u, 0x9a5cd038u, 0x389449e9u, 0xd6cbc39au, 0x75033d4bu, 0x133ab6fcu,
    0xb17230adu, 0x4fa9aa5eu, 0xede1240fu, 0x8c189dc0u, 0x2a501771u, 0xc8879122u, 0x66bf0ad3u, 0x04f68484u,
    0xa32dfe35u, 0x416577e6u, 0xdf9cf197u, 0x7dd46b48u, 0x1c0be4f9u, 0xba435eaau, 0x587ad85bu, 0xf6b2520cu,
    0x94e9cbbdu, 0x3321456eu, 0xd158bf1fu, 0x6f9038d0u, 0x0dc7b281u, 0xabff2c32u, 0x4a36a5e3u, 0xe86e1f94u,
    0x86a59945u, 0x24dd12f6u, 0xc3148ca7u, 0x614c0658u, 0xff838009u, 0x9dbaf9bau, 0x3bf2736bu, 0xda29ed1cu,
    0x786166cdu, 0x1698e07eu, 0xb4d05a2fu, 0x5307d3e0u, 0xf13f4d91u, 0x8f76c742u, 0x2dae40f3u, 0xcbe5baa4u,
    0x6a1d3455u, 0x0854ae06u, 0xa68c27b7u, 0x44c3a168u, 0xe2fb1b19u, 0x813294cau, 0x1f6a0e7bu, 0xbda1882cu,
    0x5bd901ddu, 0xfa107b8eu, 0x9847f53fu, 0x367f6ef0u, 0xd4b6e8a1u, 0x72ee6252u, 0x1125dc03u, 0xaf5d55b4u,
};

static const uint32_t bshim_081_tab3[96] = {
    0x7a7641c6u, 0x18adbb77u, 0xb6e53528u, 0x551caed9u, 0xf354288au, 0x918ba23bu, 0x2fc31becu, 0xcdfa959du,
    0x6c320f4eu, 0x0a6988ffu, 0xa8a102b0u, 0x46d87c61u, 0xe50ff612u, 0x83476fc3u, 0x217ee974u, 0xbfb66325u,
    0x5deddcd6u, 0xfc255687u, 0x9a5cd038u, 0x389449e9u, 0xd6cbc39au, 0x75033d4bu, 0x133ab6fcu, 0xb17230adu,
    0x4fa9aa5eu, 0xede1240fu, 0x8c189dc0u, 0x2a501771u, 0xc8879122u, 0x66bf0ad3u, 0x04f68484u, 0xa32dfe35u,
    0x416577e6u, 0xdf9cf197u, 0x7dd46b48u, 0x1c0be4f9u, 0xba435eaau, 0x587ad85bu, 0xf6b2520cu, 0x94e9cbbdu,
    0x3321456eu, 0xd158bf1fu, 0x6f9038d0u, 0x0dc7b281u, 0xabff2c32u, 0x4a36a5e3u, 0xe86e1f94u, 0x86a59945u,
    0x24dd12f6u, 0xc3148ca7u, 0x614c0658u, 0xff838009u, 0x9dbaf9bau, 0x3bf2736bu, 0xda29ed1cu, 0x786166cdu,
    0x1698e07eu, 0xb4d05a2fu, 0x5307d3e0u, 0xf13f4d91u, 0x8f76c742u, 0x2dae40f3u, 0xcbe5baa4u, 0x6a1d3455u,
    0x0854ae06u, 0xa68c27b7u, 0x44c3a168u, 0xe2fb1b19u, 0x813294cau, 0x1f6a0e7bu, 0xbda1882cu, 0x5bd901ddu,
    0xfa107b8eu, 0x9847f53fu, 0x367f6ef0u, 0xd4b6e8a1u, 0x72ee6252u, 0x1125dc03u, 0xaf5d55b4u, 0x4d94cf65u,
    0xebcc4916u, 0x8a03c2c7u, 0x283b3c78u, 0xc672b629u, 0x64aa2fdau, 0x02e1a98bu, 0xa119233cu, 0x3f509cedu,
    0xdd88169eu, 0x7bbf904fu, 0x19f70a00u, 0xb82e83b1u, 0x5665fd62u, 0xf49d7713u, 0x92d4f0c4u, 0x310c6a75u,
};

static const uint32_t bshim_081_tab4[96] = {
    0xfc255687u, 0x9a5cd038u, 0x389449e9u, 0xd6cbc39au, 0x75033d4bu, 0x133ab6fcu, 0xb17230adu, 0x4fa9aa5eu,
    0xede1240fu, 0x8c189dc0u, 0x2a501771u, 0xc8879122u, 0x66bf0ad3u, 0x04f68484u, 0xa32dfe35u, 0x416577e6u,
    0xdf9cf197u, 0x7dd46b48u, 0x1c0be4f9u, 0xba435eaau, 0x587ad85bu, 0xf6b2520cu, 0x94e9cbbdu, 0x3321456eu,
    0xd158bf1fu, 0x6f9038d0u, 0x0dc7b281u, 0xabff2c32u, 0x4a36a5e3u, 0xe86e1f94u, 0x86a59945u, 0x24dd12f6u,
    0xc3148ca7u, 0x614c0658u, 0xff838009u, 0x9dbaf9bau, 0x3bf2736bu, 0xda29ed1cu, 0x786166cdu, 0x1698e07eu,
    0xb4d05a2fu, 0x5307d3e0u, 0xf13f4d91u, 0x8f76c742u, 0x2dae40f3u, 0xcbe5baa4u, 0x6a1d3455u, 0x0854ae06u,
    0xa68c27b7u, 0x44c3a168u, 0xe2fb1b19u, 0x813294cau, 0x1f6a0e7bu, 0xbda1882cu, 0x5bd901ddu, 0xfa107b8eu,
    0x9847f53fu, 0x367f6ef0u, 0xd4b6e8a1u, 0x72ee6252u, 0x1125dc03u, 0xaf5d55b4u, 0x4d94cf65u, 0xebcc4916u,
    0x8a03c2c7u, 0x283b3c78u, 0xc672b629u, 0x64aa2fdau, 0x02e1a98bu, 0xa119233cu, 0x3f509cedu, 0xdd88169eu,
    0x7bbf904fu, 0x19f70a00u, 0xb82e83b1u, 0x5665fd62u, 0xf49d7713u, 0x92d4f0c4u, 0x310c6a75u, 0xcf43e426u,
    0x6d7b5dd7u, 0x0bb2d788u, 0xa9ea5139u, 0x4821caeau, 0xe659449bu, 0x8490be4cu, 0x22c837fdu, 0xc0ffb1aeu,
    0x5f372b5fu, 0xfd6ea510u, 0x9ba61ec1u, 0x39dd9872u, 0xd8151223u, 0x764c8bd4u, 0x14840585u, 0xb2bb7f36u,
};

static const uint32_t bshim_081_tab5[96] = {
    0x7dd46b48u, 0x1c0be4f9u, 0xba435eaau, 0x587ad85bu, 0xf6b2520cu, 0x94e9cbbdu, 0x3321456eu, 0xd158bf1fu,
    0x6f9038d0u, 0x0dc7b281u, 0xabff2c32u, 0x4a36a5e3u, 0xe86e1f94u, 0x86a59945u, 0x24dd12f6u, 0xc3148ca7u,
    0x614c0658u, 0xff838009u, 0x9dbaf9bau, 0x3bf2736bu, 0xda29ed1cu, 0x786166cdu, 0x1698e07eu, 0xb4d05a2fu,
    0x5307d3e0u, 0xf13f4d91u, 0x8f76c742u, 0x2dae40f3u, 0xcbe5baa4u, 0x6a1d3455u, 0x0854ae06u, 0xa68c27b7u,
    0x44c3a168u, 0xe2fb1b19u, 0x813294cau, 0x1f6a0e7bu, 0xbda1882cu, 0x5bd901ddu, 0xfa107b8eu, 0x9847f53fu,
    0x367f6ef0u, 0xd4b6e8a1u, 0x72ee6252u, 0x1125dc03u, 0xaf5d55b4u, 0x4d94cf65u, 0xebcc4916u, 0x8a03c2c7u,
    0x283b3c78u, 0xc672b629u, 0x64aa2fdau, 0x02e1a98bu, 0xa119233cu, 0x3f509cedu, 0xdd88169eu, 0x7bbf904fu,
    0x19f70a00u, 0xb82e83b1u, 0x5665fd62u, 0xf49d7713u, 0x92d4f0c4u, 0x310c6a75u, 0xcf43e426u, 0x6d7b5dd7u,
    0x0bb2d788u, 0xa9ea5139u, 0x4821caeau, 0xe659449bu, 0x8490be4cu, 0x22c837fdu, 0xc0ffb1aeu, 0x5f372b5fu,
    0xfd6ea510u, 0x9ba61ec1u, 0x39dd9872u, 0xd8151223u, 0x764c8bd4u, 0x14840585u, 0xb2bb7f36u, 0x50f2f8e7u,
    0xef2a7298u, 0x8d61ec49u, 0x2b9965fau, 0xc9d0dfabu, 0x6808595cu, 0x063fd30du, 0xa4774cbeu, 0x42aec66fu,
    0xe0e64020u, 0x7f1db9d1u, 0x1d553382u, 0xbb8cad33u, 0x59c426e4u, 0xf7fba095u, 0x96331a46u, 0x346a93f7u,
};

static const uint32_t bshim_081_tab6[96] = {
    0xff838009u, 0x9dbaf9bau, 0x3bf2736bu, 0xda29ed1cu, 0x786166cdu, 0x1698e07eu, 0xb4d05a2fu, 0x5307d3e0u,
    0xf13f4d91u, 0x8f76c742u, 0x2dae40f3u, 0xcbe5baa4u, 0x6a1d3455u, 0x0854ae06u, 0xa68c27b7u, 0x44c3a168u,
    0xe2fb1b19u, 0x813294cau, 0x1f6a0e7bu, 0xbda1882cu, 0x5bd901ddu, 0xfa107b8eu, 0x9847f53fu, 0x367f6ef0u,
    0xd4b6e8a1u, 0x72ee6252u, 0x1125dc03u, 0xaf5d55b4u, 0x4d94cf65u, 0xebcc4916u, 0x8a03c2c7u, 0x283b3c78u,
    0xc672b629u, 0x64aa2fdau, 0x02e1a98bu, 0xa119233cu, 0x3f509cedu, 0xdd88169eu, 0x7bbf904fu, 0x19f70a00u,
    0xb82e83b1u, 0x5665fd62u, 0xf49d7713u, 0x92d4f0c4u, 0x310c6a75u, 0xcf43e426u, 0x6d7b5dd7u, 0x0bb2d788u,
    0xa9ea5139u, 0x4821caeau, 0xe659449bu, 0x8490be4cu, 0x22c837fdu, 0xc0ffb1aeu, 0x5f372b5fu, 0xfd6ea510u,
    0x9ba61ec1u, 0x39dd9872u, 0xd8151223u, 0x764c8bd4u, 0x14840585u, 0xb2bb7f36u, 0x50f2f8e7u, 0xef2a7298u,
    0x8d61ec49u, 0x2b9965fau, 0xc9d0dfabu, 0x6808595cu, 0x063fd30du, 0xa4774cbeu, 0x42aec66fu, 0xe0e64020u,
    0x7f1db9d1u, 0x1d553382u, 0xbb8cad33u, 0x59c426e4u, 0xf7fba095u, 0x96331a46u, 0x346a93f7u, 0xd2a20da8u,
    0x70d98759u, 0x0f11010au, 0xad487abbu, 0x4b7ff46cu, 0xe9b76e1du, 0x87eee7ceu, 0x2626617fu, 0xc45ddb30u,
    0x629554e1u, 0x00ccce92u, 0x9f044843u, 0x3d3bc1f4u, 0xdb733ba5u, 0x79aab556u, 0x17e22f07u, 0xb619a8b8u,
};

static const uint32_t bshim_081_tab7[96] = {
    0x813294cau, 0x1f6a0e7bu, 0xbda1882cu, 0x5bd901ddu, 0xfa107b8eu, 0x9847f53fu, 0x367f6ef0u, 0xd4b6e8a1u,
    0x72ee6252u, 0x1125dc03u, 0xaf5d55b4u, 0x4d94cf65u, 0xebcc4916u, 0x8a03c2c7u, 0x283b3c78u, 0xc672b629u,
    0x64aa2fdau, 0x02e1a98bu, 0xa119233cu, 0x3f509cedu, 0xdd88169eu, 0x7bbf904fu, 0x19f70a00u, 0xb82e83b1u,
    0x5665fd62u, 0xf49d7713u, 0x92d4f0c4u, 0x310c6a75u, 0xcf43e426u, 0x6d7b5dd7u, 0x0bb2d788u, 0xa9ea5139u,
    0x4821caeau, 0xe659449bu, 0x8490be4cu, 0x22c837fdu, 0xc0ffb1aeu, 0x5f372b5fu, 0xfd6ea510u, 0x9ba61ec1u,
    0x39dd9872u, 0xd8151223u, 0x764c8bd4u, 0x14840585u, 0xb2bb7f36u, 0x50f2f8e7u, 0xef2a7298u, 0x8d61ec49u,
    0x2b9965fau, 0xc9d0dfabu, 0x6808595cu, 0x063fd30du, 0xa4774cbeu, 0x42aec66fu, 0xe0e64020u, 0x7f1db9d1u,
    0x1d553382u, 0xbb8cad33u, 0x59c426e4u, 0xf7fba095u, 0x96331a46u, 0x346a93f7u, 0xd2a20da8u, 0x70d98759u,
    0x0f11010au, 0xad487abbu, 0x4b7ff46cu, 0xe9b76e1du, 0x87eee7ceu, 0x2626617fu, 0xc45ddb30u, 0x629554e1u,
    0x00ccce92u, 0x9f044843u, 0x3d3bc1f4u, 0xdb733ba5u, 0x79aab556u, 0x17e22f07u, 0xb619a8b8u, 0x54512269u,
    0xf2889c1au, 0x90c015cbu, 0x2ef78f7cu, 0xcd2f092du, 0x6b6682deu, 0x099dfc8fu, 0xa7d57640u, 0x460ceff1u,
    0xe44469a2u, 0x827be353u, 0x20b35d04u, 0xbeead6b5u, 0x5d225066u, 0xfb59ca17u, 0x999143c8u, 0x37c8bd79u,
};

struct bshim_081_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_081_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_081_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_081_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_081_reset(struct bshim_081_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0009c99fu;
    return 0;
}

