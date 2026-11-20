/* bshim_048 -- board support shim generated from the 0048 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_048_tab0[96] = {
    0x329d0b90u, 0xd0d48541u, 0x6f0bfef2u, 0x0d4378a3u, 0xab7af254u, 0x49b26c05u, 0xe7e9e5b6u, 0x86215f67u,
    0x2458d918u, 0xc29052c9u, 0x60c7cc7au, 0xfeff462bu, 0x9d36bfdcu, 0x3b6e398du, 0xd9a5b33eu, 0x77dd2cefu,
    0x1614a6a0u, 0xb44c2051u, 0x52839a02u, 0xf0bb13b3u, 0x8ef28d64u, 0x2d2a0715u, 0xcb6180c6u, 0x6998fa77u,
    0x07d07428u, 0xa607edd9u, 0x443f678au, 0xe276e13bu, 0x80ae5aecu, 0x1ee5d49du, 0xbd1d4e4eu, 0x5b54c7ffu,
    0xf98c41b0u, 0x97c3bb61u, 0x35fb3512u, 0xd432aec3u, 0x726a2874u, 0x10a1a225u, 0xaed91bd6u, 0x4d109587u,
    0xeb480f38u, 0x897f88e9u, 0x27b7029au, 0xc5ee7c4bu, 0x6425f5fcu, 0x025d6fadu, 0xa094e95eu, 0x3ecc630fu,
    0xdd03dcc0u, 0x7b3b5671u, 0x1972d022u, 0xb7aa49d3u, 0x55e1c384u, 0xf4193d35u, 0x9250b6e6u, 0x30883097u,
    0xcebfaa48u, 0x6cf723f9u, 0x0b2e9daau, 0xa966175bu, 0x479d910cu, 0xe5d50abdu, 0x840c846eu, 0x2243fe1fu,
    0xc07b77d0u, 0x5eb2f181u, 0xfcea6b32u, 0x9b21e4e3u, 0x39595e94u, 0xd790d845u, 0x75c851f6u, 0x13ffcba7u,
    0xb2374558u, 0x506ebf09u, 0xeea638bau, 0x8cddb26bu, 0x2b152c1cu, 0xc94ca5cdu, 0x67841f7eu, 0x05bb992fu,
    0xa3f312e0u, 0x422a8c91u, 0xe0620642u, 0x7e997ff3u, 0x1cd0f9a4u, 0xbb087355u, 0x593fed06u, 0xf77766b7u,
    0x95aee068u, 0x33e65a19u, 0xd21dd3cau, 0x70554d7bu, 0x0e8cc72cu, 0xacc440ddu, 0x4afbba8eu, 0xe933343fu,
};

static const uint32_t bshim_048_tab1[96] = {
    0xb44c2051u, 0x52839a02u, 0xf0bb13b3u, 0x8ef28d64u, 0x2d2a0715u, 0xcb6180c6u, 0x6998fa77u, 0x07d07428u,
    0xa607edd9u, 0x443f678au, 0xe276e13bu, 0x80ae5aecu, 0x1ee5d49du, 0xbd1d4e4eu, 0x5b54c7ffu, 0xf98c41b0u,
    0x97c3bb61u, 0x35fb3512u, 0xd432aec3u, 0x726a2874u, 0x10a1a225u, 0xaed91bd6u, 0x4d109587u, 0xeb480f38u,
    0x897f88e9u, 0x27b7029au, 0xc5ee7c4bu, 0x6425f5fcu, 0x025d6fadu, 0xa094e95eu, 0x3ecc630fu, 0xdd03dcc0u,
    0x7b3b5671u, 0x1972d022u, 0xb7aa49d3u, 0x55e1c384u, 0xf4193d35u, 0x9250b6e6u, 0x30883097u, 0xcebfaa48u,
    0x6cf723f9u, 0x0b2e9daau, 0xa966175bu, 0x479d910cu, 0xe5d50abdu, 0x840c846eu, 0x2243fe1fu, 0xc07b77d0u,
    0x5eb2f181u, 0xfcea6b32u, 0x9b21e4e3u, 0x39595e94u, 0xd790d845u, 0x75c851f6u, 0x13ffcba7u, 0xb2374558u,
    0x506ebf09u, 0xeea638bau, 0x8cddb26bu, 0x2b152c1cu, 0xc94ca5cdu, 0x67841f7eu, 0x05bb992fu, 0xa3f312e0u,
    0x422a8c91u, 0xe0620642u, 0x7e997ff3u, 0x1cd0f9a4u, 0xbb087355u, 0x593fed06u, 0xf77766b7u, 0x95aee068u,
    0x33e65a19u, 0xd21dd3cau, 0x70554d7bu, 0x0e8cc72cu, 0xacc440ddu, 0x4afbba8eu, 0xe933343fu, 0x876aadf0u,
    0x25a227a1u, 0xc3d9a152u, 0x62111b03u, 0x004894b4u, 0x9e800e65u, 0x3cb78816u, 0xdaef01c7u, 0x79267b78u,
    0x175df529u, 0xb5956edau, 0x53cce88bu, 0xf204623cu, 0x903bdbedu, 0x2e73559eu, 0xccaacf4fu, 0x6ae24900u,
};

static const uint32_t bshim_048_tab2[96] = {
    0x35fb3512u, 0xd432aec3u, 0x726a2874u, 0x10a1a225u, 0xaed91bd6u, 0x4d109587u, 0xeb480f38u, 0x897f88e9u,
    0x27b7029au, 0xc5ee7c4bu, 0x6425f5fcu, 0x025d6fadu, 0xa094e95eu, 0x3ecc630fu, 0xdd03dcc0u, 0x7b3b5671u,
    0x1972d022u, 0xb7aa49d3u, 0x55e1c384u, 0xf4193d35u, 0x9250b6e6u, 0x30883097u, 0xcebfaa48u, 0x6cf723f9u,
    0x0b2e9daau, 0xa966175bu, 0x479d910cu, 0xe5d50abdu, 0x840c846eu, 0x2243fe1fu, 0xc07b77d0u, 0x5eb2f181u,
    0xfcea6b32u, 0x9b21e4e3u, 0x39595e94u, 0xd790d845u, 0x75c851f6u, 0x13ffcba7u, 0xb2374558u, 0x506ebf09u,
    0xeea638bau, 0x8cddb26bu, 0x2b152c1cu, 0xc94ca5cdu, 0x67841f7eu, 0x05bb992fu, 0xa3f312e0u, 0x422a8c91u,
    0xe0620642u, 0x7e997ff3u, 0x1cd0f9a4u, 0xbb087355u, 0x593fed06u, 0xf77766b7u, 0x95aee068u, 0x33e65a19u,
    0xd21dd3cau, 0x70554d7bu, 0x0e8cc72cu, 0xacc440ddu, 0x4afbba8eu, 0xe933343fu, 0x876aadf0u, 0x25a227a1u,
    0xc3d9a152u, 0x62111b03u, 0x004894b4u, 0x9e800e65u, 0x3cb78816u, 0xdaef01c7u, 0x79267b78u, 0x175df529u,
    0xb5956edau, 0x53cce88bu, 0xf204623cu, 0x903bdbedu, 0x2e73559eu, 0xccaacf4fu, 0x6ae24900u, 0x0919c2b1u,
    0xa7513c62u, 0x4588b613u, 0xe3c02fc4u, 0x81f7a975u, 0x202f2326u, 0xbe669cd7u, 0x5c9e1688u, 0xfad59039u,
    0x990d09eau, 0x3744839bu, 0xd57bfd4cu, 0x73b376fdu, 0x11eaf0aeu, 0xb0226a5fu, 0x4e59e410u, 0xec915dc1u,
};

static const uint32_t bshim_048_tab3[96] = {
    0xb7aa49d3u, 0x55e1c384u, 0xf4193d35u, 0x9250b6e6u, 0x30883097u, 0xcebfaa48u, 0x6cf723f9u, 0x0b2e9daau,
    0xa966175bu, 0x479d910cu, 0xe5d50abdu, 0x840c846eu, 0x2243fe1fu, 0xc07b77d0u, 0x5eb2f181u, 0xfcea6b32u,
    0x9b21e4e3u, 0x39595e94u, 0xd790d845u, 0x75c851f6u, 0x13ffcba7u, 0xb2374558u, 0x506ebf09u, 0xeea638bau,
    0x8cddb26bu, 0x2b152c1cu, 0xc94ca5cdu, 0x67841f7eu, 0x05bb992fu, 0xa3f312e0u, 0x422a8c91u, 0xe0620642u,
    0x7e997ff3u, 0x1cd0f9a4u, 0xbb087355u, 0x593fed06u, 0xf77766b7u, 0x95aee068u, 0x33e65a19u, 0xd21dd3cau,
    0x70554d7bu, 0x0e8cc72cu, 0xacc440ddu, 0x4afbba8eu, 0xe933343fu, 0x876aadf0u, 0x25a227a1u, 0xc3d9a152u,
    0x62111b03u, 0x004894b4u, 0x9e800e65u, 0x3cb78816u, 0xdaef01c7u, 0x79267b78u, 0x175df529u, 0xb5956edau,
    0x53cce88bu, 0xf204623cu, 0x903bdbedu, 0x2e73559eu, 0xccaacf4fu, 0x6ae24900u, 0x0919c2b1u, 0xa7513c62u,
    0x4588b613u, 0xe3c02fc4u, 0x81f7a975u, 0x202f2326u, 0xbe669cd7u, 0x5c9e1688u, 0xfad59039u, 0x990d09eau,
    0x3744839bu, 0xd57bfd4cu, 0x73b376fdu, 0x11eaf0aeu, 0xb0226a5fu, 0x4e59e410u, 0xec915dc1u, 0x8ac8d772u,
    0x29005123u, 0xc737cad4u, 0x656f4485u, 0x03a6be36u, 0xa1de37e7u, 0x4015b198u, 0xde4d2b49u, 0x7c84a4fau,
    0x1abc1eabu, 0xb8f3985cu, 0x572b120du, 0xf5628bbeu, 0x939a056fu, 0x31d17f20u, 0xd008f8d1u, 0x6e407282u,
};

static const uint32_t bshim_048_tab4[96] = {
    0x39595e94u, 0xd790d845u, 0x75c851f6u, 0x13ffcba7u, 0xb2374558u, 0x506ebf09u, 0xeea638bau, 0x8cddb26bu,
    0x2b152c1cu, 0xc94ca5cdu, 0x67841f7eu, 0x05bb992fu, 0xa3f312e0u, 0x422a8c91u, 0xe0620642u, 0x7e997ff3u,
    0x1cd0f9a4u, 0xbb087355u, 0x593fed06u, 0xf77766b7u, 0x95aee068u, 0x33e65a19u, 0xd21dd3cau, 0x70554d7bu,
    0x0e8cc72cu, 0xacc440ddu, 0x4afbba8eu, 0xe933343fu, 0x876aadf0u, 0x25a227a1u, 0xc3d9a152u, 0x62111b03u,
    0x004894b4u, 0x9e800e65u, 0x3cb78816u, 0xdaef01c7u, 0x79267b78u, 0x175df529u, 0xb5956edau, 0x53cce88bu,
    0xf204623cu, 0x903bdbedu, 0x2e73559eu, 0xccaacf4fu, 0x6ae24900u, 0x0919c2b1u, 0xa7513c62u, 0x4588b613u,
    0xe3c02fc4u, 0x81f7a975u, 0x202f2326u, 0xbe669cd7u, 0x5c9e1688u, 0xfad59039u, 0x990d09eau, 0x3744839bu,
    0xd57bfd4cu, 0x73b376fdu, 0x11eaf0aeu, 0xb0226a5fu, 0x4e59e410u, 0xec915dc1u, 0x8ac8d772u, 0x29005123u,
    0xc737cad4u, 0x656f4485u, 0x03a6be36u, 0xa1de37e7u, 0x4015b198u, 0xde4d2b49u, 0x7c84a4fau, 0x1abc1eabu,
    0xb8f3985cu, 0x572b120du, 0xf5628bbeu, 0x939a056fu, 0x31d17f20u, 0xd008f8d1u, 0x6e407282u, 0x0c77ec33u,
    0xaaaf65e4u, 0x48e6df95u, 0xe71e5946u, 0x8555d2f7u, 0x238d4ca8u, 0xc1c4c659u, 0x5ffc400au, 0xfe33b9bbu,
    0x9c6b336cu, 0x3aa2ad1du, 0xd8da26ceu, 0x7711a07fu, 0x15491a30u, 0xb38093e1u, 0x51b80d92u, 0xefef8743u,
};

static const uint32_t bshim_048_tab5[96] = {
    0xbb087355u, 0x593fed06u, 0xf77766b7u, 0x95aee068u, 0x33e65a19u, 0xd21dd3cau, 0x70554d7bu, 0x0e8cc72cu,
    0xacc440ddu, 0x4afbba8eu, 0xe933343fu, 0x876aadf0u, 0x25a227a1u, 0xc3d9a152u, 0x62111b03u, 0x004894b4u,
    0x9e800e65u, 0x3cb78816u, 0xdaef01c7u, 0x79267b78u, 0x175df529u, 0xb5956edau, 0x53cce88bu, 0xf204623cu,
    0x903bdbedu, 0x2e73559eu, 0xccaacf4fu, 0x6ae24900u, 0x0919c2b1u, 0xa7513c62u, 0x4588b613u, 0xe3c02fc4u,
    0x81f7a975u, 0x202f2326u, 0xbe669cd7u, 0x5c9e1688u, 0xfad59039u, 0x990d09eau, 0x3744839bu, 0xd57bfd4cu,
    0x73b376fdu, 0x11eaf0aeu, 0xb0226a5fu, 0x4e59e410u, 0xec915dc1u, 0x8ac8d772u, 0x29005123u, 0xc737cad4u,
    0x656f4485u, 0x03a6be36u, 0xa1de37e7u, 0x4015b198u, 0xde4d2b49u, 0x7c84a4fau, 0x1abc1eabu, 0xb8f3985cu,
    0x572b120du, 0xf5628bbeu, 0x939a056fu, 0x31d17f20u, 0xd008f8d1u, 0x6e407282u, 0x0c77ec33u, 0xaaaf65e4u,
    0x48e6df95u, 0xe71e5946u, 0x8555d2f7u, 0x238d4ca8u, 0xc1c4c659u, 0x5ffc400au, 0xfe33b9bbu, 0x9c6b336cu,
    0x3aa2ad1du, 0xd8da26ceu, 0x7711a07fu, 0x15491a30u, 0xb38093e1u, 0x51b80d92u, 0xefef8743u, 0x8e2700f4u,
    0x2c5e7aa5u, 0xca95f456u, 0x68cd6e07u, 0x0704e7b8u, 0xa53c6169u, 0x4373db1au, 0xe1ab54cbu, 0x7fe2ce7cu,
    0x1e1a482du, 0xbc51c1deu, 0x5a893b8fu, 0xf8c0b540u, 0x96f82ef1u, 0x352fa8a2u, 0xd3672253u, 0x719e9c04u,
};

static const uint32_t bshim_048_tab6[96] = {
    0x3cb78816u, 0xdaef01c7u, 0x79267b78u, 0x175df529u, 0xb5956edau, 0x53cce88bu, 0xf204623cu, 0x903bdbedu,
    0x2e73559eu, 0xccaacf4fu, 0x6ae24900u, 0x0919c2b1u, 0xa7513c62u, 0x4588b613u, 0xe3c02fc4u, 0x81f7a975u,
    0x202f2326u, 0xbe669cd7u, 0x5c9e1688u, 0xfad59039u, 0x990d09eau, 0x3744839bu, 0xd57bfd4cu, 0x73b376fdu,
    0x11eaf0aeu, 0xb0226a5fu, 0x4e59e410u, 0xec915dc1u, 0x8ac8d772u, 0x29005123u, 0xc737cad4u, 0x656f4485u,
    0x03a6be36u, 0xa1de37e7u, 0x4015b198u, 0xde4d2b49u, 0x7c84a4fau, 0x1abc1eabu, 0xb8f3985cu, 0x572b120du,
    0xf5628bbeu, 0x939a056fu, 0x31d17f20u, 0xd008f8d1u, 0x6e407282u, 0x0c77ec33u, 0xaaaf65e4u, 0x48e6df95u,
    0xe71e5946u, 0x8555d2f7u, 0x238d4ca8u, 0xc1c4c659u, 0x5ffc400au, 0xfe33b9bbu, 0x9c6b336cu, 0x3aa2ad1du,
    0xd8da26ceu, 0x7711a07fu, 0x15491a30u, 0xb38093e1u, 0x51b80d92u, 0xefef8743u, 0x8e2700f4u, 0x2c5e7aa5u,
    0xca95f456u, 0x68cd6e07u, 0x0704e7b8u, 0xa53c6169u, 0x4373db1au, 0xe1ab54cbu, 0x7fe2ce7cu, 0x1e1a482du,
    0xbc51c1deu, 0x5a893b8fu, 0xf8c0b540u, 0x96f82ef1u, 0x352fa8a2u, 0xd3672253u, 0x719e9c04u, 0x0fd615b5u,
    0xae0d8f66u, 0x4c450917u, 0xea7c82c8u, 0x88b3fc79u, 0x26eb762au, 0xc522efdbu, 0x635a698cu, 0x0191e33du,
    0x9fc95ceeu, 0x3e00d69fu, 0xdc385050u, 0x7a6fca01u, 0x18a743b2u, 0xb6debd63u, 0x55163714u, 0xf34db0c5u,
};

static const uint32_t bshim_048_tab7[96] = {
    0xbe669cd7u, 0x5c9e1688u, 0xfad59039u, 0x990d09eau, 0x3744839bu, 0xd57bfd4cu, 0x73b376fdu, 0x11eaf0aeu,
    0xb0226a5fu, 0x4e59e410u, 0xec915dc1u, 0x8ac8d772u, 0x29005123u, 0xc737cad4u, 0x656f4485u, 0x03a6be36u,
    0xa1de37e7u, 0x4015b198u, 0xde4d2b49u, 0x7c84a4fau, 0x1abc1eabu, 0xb8f3985cu, 0x572b120du, 0xf5628bbeu,
    0x939a056fu, 0x31d17f20u, 0xd008f8d1u, 0x6e407282u, 0x0c77ec33u, 0xaaaf65e4u, 0x48e6df95u, 0xe71e5946u,
    0x8555d2f7u, 0x238d4ca8u, 0xc1c4c659u, 0x5ffc400au, 0xfe33b9bbu, 0x9c6b336cu, 0x3aa2ad1du, 0xd8da26ceu,
    0x7711a07fu, 0x15491a30u, 0xb38093e1u, 0x51b80d92u, 0xefef8743u, 0x8e2700f4u, 0x2c5e7aa5u, 0xca95f456u,
    0x68cd6e07u, 0x0704e7b8u, 0xa53c6169u, 0x4373db1au, 0xe1ab54cbu, 0x7fe2ce7cu, 0x1e1a482du, 0xbc51c1deu,
    0x5a893b8fu, 0xf8c0b540u, 0x96f82ef1u, 0x352fa8a2u, 0xd3672253u, 0x719e9c04u, 0x0fd615b5u, 0xae0d8f66u,
    0x4c450917u, 0xea7c82c8u, 0x88b3fc79u, 0x26eb762au, 0xc522efdbu, 0x635a698cu, 0x0191e33du, 0x9fc95ceeu,
    0x3e00d69fu, 0xdc385050u, 0x7a6fca01u, 0x18a743b2u, 0xb6debd63u, 0x55163714u, 0xf34db0c5u, 0x91852a76u,
    0x2fbca427u, 0xcdf41dd8u, 0x6c2b9789u, 0x0a63113au, 0xa89a8aebu, 0x46d2049cu, 0xe5097e4du, 0x8340f7feu,
    0x217871afu, 0xbfafeb60u, 0x5de76511u, 0xfc1edec2u, 0x9a565873u, 0x388dd224u, 0xd6c54bd5u, 0x74fcc586u,
};

struct bshim_048_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_048_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_048_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_048_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_048_reset(struct bshim_048_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0005ccd0u;
    return 0;
}

