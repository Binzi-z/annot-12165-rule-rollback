/* bshim_049 -- board support shim generated from the 0049 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_049_tab0[96] = {
    0x29005123u, 0xc737cad4u, 0x656f4485u, 0x03a6be36u, 0xa1de37e7u, 0x4015b198u, 0xde4d2b49u, 0x7c84a4fau,
    0x1abc1eabu, 0xb8f3985cu, 0x572b120du, 0xf5628bbeu, 0x939a056fu, 0x31d17f20u, 0xd008f8d1u, 0x6e407282u,
    0x0c77ec33u, 0xaaaf65e4u, 0x48e6df95u, 0xe71e5946u, 0x8555d2f7u, 0x238d4ca8u, 0xc1c4c659u, 0x5ffc400au,
    0xfe33b9bbu, 0x9c6b336cu, 0x3aa2ad1du, 0xd8da26ceu, 0x7711a07fu, 0x15491a30u, 0xb38093e1u, 0x51b80d92u,
    0xefef8743u, 0x8e2700f4u, 0x2c5e7aa5u, 0xca95f456u, 0x68cd6e07u, 0x0704e7b8u, 0xa53c6169u, 0x4373db1au,
    0xe1ab54cbu, 0x7fe2ce7cu, 0x1e1a482du, 0xbc51c1deu, 0x5a893b8fu, 0xf8c0b540u, 0x96f82ef1u, 0x352fa8a2u,
    0xd3672253u, 0x719e9c04u, 0x0fd615b5u, 0xae0d8f66u, 0x4c450917u, 0xea7c82c8u, 0x88b3fc79u, 0x26eb762au,
    0xc522efdbu, 0x635a698cu, 0x0191e33du, 0x9fc95ceeu, 0x3e00d69fu, 0xdc385050u, 0x7a6fca01u, 0x18a743b2u,
    0xb6debd63u, 0x55163714u, 0xf34db0c5u, 0x91852a76u, 0x2fbca427u, 0xcdf41dd8u, 0x6c2b9789u, 0x0a63113au,
    0xa89a8aebu, 0x46d2049cu, 0xe5097e4du, 0x8340f7feu, 0x217871afu, 0xbfafeb60u, 0x5de76511u, 0xfc1edec2u,
    0x9a565873u, 0x388dd224u, 0xd6c54bd5u, 0x74fcc586u, 0x13343f37u, 0xb16bb8e8u, 0x4fa33299u, 0xeddaac4au,
    0x8c1225fbu, 0x2a499facu, 0xc881195du, 0x66b8930eu, 0x04f00cbfu, 0xa3278670u, 0x415f0021u, 0xdf9679d2u,
};

static const uint32_t bshim_049_tab1[96] = {
    0xaaaf65e4u, 0x48e6df95u, 0xe71e5946u, 0x8555d2f7u, 0x238d4ca8u, 0xc1c4c659u, 0x5ffc400au, 0xfe33b9bbu,
    0x9c6b336cu, 0x3aa2ad1du, 0xd8da26ceu, 0x7711a07fu, 0x15491a30u, 0xb38093e1u, 0x51b80d92u, 0xefef8743u,
    0x8e2700f4u, 0x2c5e7aa5u, 0xca95f456u, 0x68cd6e07u, 0x0704e7b8u, 0xa53c6169u, 0x4373db1au, 0xe1ab54cbu,
    0x7fe2ce7cu, 0x1e1a482du, 0xbc51c1deu, 0x5a893b8fu, 0xf8c0b540u, 0x96f82ef1u, 0x352fa8a2u, 0xd3672253u,
    0x719e9c04u, 0x0fd615b5u, 0xae0d8f66u, 0x4c450917u, 0xea7c82c8u, 0x88b3fc79u, 0x26eb762au, 0xc522efdbu,
    0x635a698cu, 0x0191e33du, 0x9fc95ceeu, 0x3e00d69fu, 0xdc385050u, 0x7a6fca01u, 0x18a743b2u, 0xb6debd63u,
    0x55163714u, 0xf34db0c5u, 0x91852a76u, 0x2fbca427u, 0xcdf41dd8u, 0x6c2b9789u, 0x0a63113au, 0xa89a8aebu,
    0x46d2049cu, 0xe5097e4du, 0x8340f7feu, 0x217871afu, 0xbfafeb60u, 0x5de76511u, 0xfc1edec2u, 0x9a565873u,
    0x388dd224u, 0xd6c54bd5u, 0x74fcc586u, 0x13343f37u, 0xb16bb8e8u, 0x4fa33299u, 0xeddaac4au, 0x8c1225fbu,
    0x2a499facu, 0xc881195du, 0x66b8930eu, 0x04f00cbfu, 0xa3278670u, 0x415f0021u, 0xdf9679d2u, 0x7dcdf383u,
    0x1c056d34u, 0xba3ce6e5u, 0x58746096u, 0xf6abda47u, 0x94e353f8u, 0x331acda9u, 0xd152475au, 0x6f89c10bu,
    0x0dc13abcu, 0xabf8b46du, 0x4a302e1eu, 0xe867a7cfu, 0x869f2180u, 0x24d69b31u, 0xc30e14e2u, 0x61458e93u,
};

static const uint32_t bshim_049_tab2[96] = {
    0x2c5e7aa5u, 0xca95f456u, 0x68cd6e07u, 0x0704e7b8u, 0xa53c6169u, 0x4373db1au, 0xe1ab54cbu, 0x7fe2ce7cu,
    0x1e1a482du, 0xbc51c1deu, 0x5a893b8fu, 0xf8c0b540u, 0x96f82ef1u, 0x352fa8a2u, 0xd3672253u, 0x719e9c04u,
    0x0fd615b5u, 0xae0d8f66u, 0x4c450917u, 0xea7c82c8u, 0x88b3fc79u, 0x26eb762au, 0xc522efdbu, 0x635a698cu,
    0x0191e33du, 0x9fc95ceeu, 0x3e00d69fu, 0xdc385050u, 0x7a6fca01u, 0x18a743b2u, 0xb6debd63u, 0x55163714u,
    0xf34db0c5u, 0x91852a76u, 0x2fbca427u, 0xcdf41dd8u, 0x6c2b9789u, 0x0a63113au, 0xa89a8aebu, 0x46d2049cu,
    0xe5097e4du, 0x8340f7feu, 0x217871afu, 0xbfafeb60u, 0x5de76511u, 0xfc1edec2u, 0x9a565873u, 0x388dd224u,
    0xd6c54bd5u, 0x74fcc586u, 0x13343f37u, 0xb16bb8e8u, 0x4fa33299u, 0xeddaac4au, 0x8c1225fbu, 0x2a499facu,
    0xc881195du, 0x66b8930eu, 0x04f00cbfu, 0xa3278670u, 0x415f0021u, 0xdf9679d2u, 0x7dcdf383u, 0x1c056d34u,
    0xba3ce6e5u, 0x58746096u, 0xf6abda47u, 0x94e353f8u, 0x331acda9u, 0xd152475au, 0x6f89c10bu, 0x0dc13abcu,
    0xabf8b46du, 0x4a302e1eu, 0xe867a7cfu, 0x869f2180u, 0x24d69b31u, 0xc30e14e2u, 0x61458e93u, 0xff7d0844u,
    0x9db481f5u, 0x3bebfba6u, 0xda237557u, 0x785aef08u, 0x169268b9u, 0xb4c9e26au, 0x53015c1bu, 0xf138d5ccu,
    0x8f704f7du, 0x2da7c92eu, 0xcbdf42dfu, 0x6a16bc90u, 0x084e3641u, 0xa685aff2u, 0x44bd29a3u, 0xe2f4a354u,
};

static const uint32_t bshim_049_tab3[96] = {
    0xae0d8f66u, 0x4c450917u, 0xea7c82c8u, 0x88b3fc79u, 0x26eb762au, 0xc522efdbu, 0x635a698cu, 0x0191e33du,
    0x9fc95ceeu, 0x3e00d69fu, 0xdc385050u, 0x7a6fca01u, 0x18a743b2u, 0xb6debd63u, 0x55163714u, 0xf34db0c5u,
    0x91852a76u, 0x2fbca427u, 0xcdf41dd8u, 0x6c2b9789u, 0x0a63113au, 0xa89a8aebu, 0x46d2049cu, 0xe5097e4du,
    0x8340f7feu, 0x217871afu, 0xbfafeb60u, 0x5de76511u, 0xfc1edec2u, 0x9a565873u, 0x388dd224u, 0xd6c54bd5u,
    0x74fcc586u, 0x13343f37u, 0xb16bb8e8u, 0x4fa33299u, 0xeddaac4au, 0x8c1225fbu, 0x2a499facu, 0xc881195du,
    0x66b8930eu, 0x04f00cbfu, 0xa3278670u, 0x415f0021u, 0xdf9679d2u, 0x7dcdf383u, 0x1c056d34u, 0xba3ce6e5u,
    0x58746096u, 0xf6abda47u, 0x94e353f8u, 0x331acda9u, 0xd152475au, 0x6f89c10bu, 0x0dc13abcu, 0xabf8b46du,
    0x4a302e1eu, 0xe867a7cfu, 0x869f2180u, 0x24d69b31u, 0xc30e14e2u, 0x61458e93u, 0xff7d0844u, 0x9db481f5u,
    0x3bebfba6u, 0xda237557u, 0x785aef08u, 0x169268b9u, 0xb4c9e26au, 0x53015c1bu, 0xf138d5ccu, 0x8f704f7du,
    0x2da7c92eu, 0xcbdf42dfu, 0x6a16bc90u, 0x084e3641u, 0xa685aff2u, 0x44bd29a3u, 0xe2f4a354u, 0x812c1d05u,
    0x1f6396b6u, 0xbd9b1067u, 0x5bd28a18u, 0xfa0a03c9u, 0x98417d7au, 0x3678f72bu, 0xd4b070dcu, 0x72e7ea8du,
    0x111f643eu, 0xaf56ddefu, 0x4d8e57a0u, 0xebc5d151u, 0x89fd4b02u, 0x2834c4b3u, 0xc66c3e64u, 0x64a3b815u,
};

static const uint32_t bshim_049_tab4[96] = {
    0x2fbca427u, 0xcdf41dd8u, 0x6c2b9789u, 0x0a63113au, 0xa89a8aebu, 0x46d2049cu, 0xe5097e4du, 0x8340f7feu,
    0x217871afu, 0xbfafeb60u, 0x5de76511u, 0xfc1edec2u, 0x9a565873u, 0x388dd224u, 0xd6c54bd5u, 0x74fcc586u,
    0x13343f37u, 0xb16bb8e8u, 0x4fa33299u, 0xeddaac4au, 0x8c1225fbu, 0x2a499facu, 0xc881195du, 0x66b8930eu,
    0x04f00cbfu, 0xa3278670u, 0x415f0021u, 0xdf9679d2u, 0x7dcdf383u, 0x1c056d34u, 0xba3ce6e5u, 0x58746096u,
    0xf6abda47u, 0x94e353f8u, 0x331acda9u, 0xd152475au, 0x6f89c10bu, 0x0dc13abcu, 0xabf8b46du, 0x4a302e1eu,
    0xe867a7cfu, 0x869f2180u, 0x24d69b31u, 0xc30e14e2u, 0x61458e93u, 0xff7d0844u, 0x9db481f5u, 0x3bebfba6u,
    0xda237557u, 0x785aef08u, 0x169268b9u, 0xb4c9e26au, 0x53015c1bu, 0xf138d5ccu, 0x8f704f7du, 0x2da7c92eu,
    0xcbdf42dfu, 0x6a16bc90u, 0x084e3641u, 0xa685aff2u, 0x44bd29a3u, 0xe2f4a354u, 0x812c1d05u, 0x1f6396b6u,
    0xbd9b1067u, 0x5bd28a18u, 0xfa0a03c9u, 0x98417d7au, 0x3678f72bu, 0xd4b070dcu, 0x72e7ea8du, 0x111f643eu,
    0xaf56ddefu, 0x4d8e57a0u, 0xebc5d151u, 0x89fd4b02u, 0x2834c4b3u, 0xc66c3e64u, 0x64a3b815u, 0x02db31c6u,
    0xa112ab77u, 0x3f4a2528u, 0xdd819ed9u, 0x7bb9188au, 0x19f0923bu, 0xb8280becu, 0x565f859du, 0xf496ff4eu,
    0x92ce78ffu, 0x3105f2b0u, 0xcf3d6c61u, 0x6d74e612u, 0x0bac5fc3u, 0xa9e3d974u, 0x481b5325u, 0xe652ccd6u,
};

static const uint32_t bshim_049_tab5[96] = {
    0xb16bb8e8u, 0x4fa33299u, 0xeddaac4au, 0x8c1225fbu, 0x2a499facu, 0xc881195du, 0x66b8930eu, 0x04f00cbfu,
    0xa3278670u, 0x415f0021u, 0xdf9679d2u, 0x7dcdf383u, 0x1c056d34u, 0xba3ce6e5u, 0x58746096u, 0xf6abda47u,
    0x94e353f8u, 0x331acda9u, 0xd152475au, 0x6f89c10bu, 0x0dc13abcu, 0xabf8b46du, 0x4a302e1eu, 0xe867a7cfu,
    0x869f2180u, 0x24d69b31u, 0xc30e14e2u, 0x61458e93u, 0xff7d0844u, 0x9db481f5u, 0x3bebfba6u, 0xda237557u,
    0x785aef08u, 0x169268b9u, 0xb4c9e26au, 0x53015c1bu, 0xf138d5ccu, 0x8f704f7du, 0x2da7c92eu, 0xcbdf42dfu,
    0x6a16bc90u, 0x084e3641u, 0xa685aff2u, 0x44bd29a3u, 0xe2f4a354u, 0x812c1d05u, 0x1f6396b6u, 0xbd9b1067u,
    0x5bd28a18u, 0xfa0a03c9u, 0x98417d7au, 0x3678f72bu, 0xd4b070dcu, 0x72e7ea8du, 0x111f643eu, 0xaf56ddefu,
    0x4d8e57a0u, 0xebc5d151u, 0x89fd4b02u, 0x2834c4b3u, 0xc66c3e64u, 0x64a3b815u, 0x02db31c6u, 0xa112ab77u,
    0x3f4a2528u, 0xdd819ed9u, 0x7bb9188au, 0x19f0923bu, 0xb8280becu, 0x565f859du, 0xf496ff4eu, 0x92ce78ffu,
    0x3105f2b0u, 0xcf3d6c61u, 0x6d74e612u, 0x0bac5fc3u, 0xa9e3d974u, 0x481b5325u, 0xe652ccd6u, 0x848a4687u,
    0x22c1c038u, 0xc0f939e9u, 0x5f30b39au, 0xfd682d4bu, 0x9b9fa6fcu, 0x39d720adu, 0xd80e9a5eu, 0x7646140fu,
    0x147d8dc0u, 0xb2b50771u, 0x50ec8122u, 0xef23fad3u, 0x8d5b7484u, 0x2b92ee35u, 0xc9ca67e6u, 0x6801e197u,
};

static const uint32_t bshim_049_tab6[96] = {
    0x331acda9u, 0xd152475au, 0x6f89c10bu, 0x0dc13abcu, 0xabf8b46du, 0x4a302e1eu, 0xe867a7cfu, 0x869f2180u,
    0x24d69b31u, 0xc30e14e2u, 0x61458e93u, 0xff7d0844u, 0x9db481f5u, 0x3bebfba6u, 0xda237557u, 0x785aef08u,
    0x169268b9u, 0xb4c9e26au, 0x53015c1bu, 0xf138d5ccu, 0x8f704f7du, 0x2da7c92eu, 0xcbdf42dfu, 0x6a16bc90u,
    0x084e3641u, 0xa685aff2u, 0x44bd29a3u, 0xe2f4a354u, 0x812c1d05u, 0x1f6396b6u, 0xbd9b1067u, 0x5bd28a18u,
    0xfa0a03c9u, 0x98417d7au, 0x3678f72bu, 0xd4b070dcu, 0x72e7ea8du, 0x111f643eu, 0xaf56ddefu, 0x4d8e57a0u,
    0xebc5d151u, 0x89fd4b02u, 0x2834c4b3u, 0xc66c3e64u, 0x64a3b815u, 0x02db31c6u, 0xa112ab77u, 0x3f4a2528u,
    0xdd819ed9u, 0x7bb9188au, 0x19f0923bu, 0xb8280becu, 0x565f859du, 0xf496ff4eu, 0x92ce78ffu, 0x3105f2b0u,
    0xcf3d6c61u, 0x6d74e612u, 0x0bac5fc3u, 0xa9e3d974u, 0x481b5325u, 0xe652ccd6u, 0x848a4687u, 0x22c1c038u,
    0xc0f939e9u, 0x5f30b39au, 0xfd682d4bu, 0x9b9fa6fcu, 0x39d720adu, 0xd80e9a5eu, 0x7646140fu, 0x147d8dc0u,
    0xb2b50771u, 0x50ec8122u, 0xef23fad3u, 0x8d5b7484u, 0x2b92ee35u, 0xc9ca67e6u, 0x6801e197u, 0x06395b48u,
    0xa470d4f9u, 0x42a84eaau, 0xe0dfc85bu, 0x7f17420cu, 0x1d4ebbbdu, 0xbb86356eu, 0x59bdaf1fu, 0xf7f528d0u,
    0x962ca281u, 0x34641c32u, 0xd29b95e3u, 0x70d30f94u, 0x0f0a8945u, 0xad4202f6u, 0x4b797ca7u, 0xe9b0f658u,
};

static const uint32_t bshim_049_tab7[96] = {
    0xb4c9e26au, 0x53015c1bu, 0xf138d5ccu, 0x8f704f7du, 0x2da7c92eu, 0xcbdf42dfu, 0x6a16bc90u, 0x084e3641u,
    0xa685aff2u, 0x44bd29a3u, 0xe2f4a354u, 0x812c1d05u, 0x1f6396b6u, 0xbd9b1067u, 0x5bd28a18u, 0xfa0a03c9u,
    0x98417d7au, 0x3678f72bu, 0xd4b070dcu, 0x72e7ea8du, 0x111f643eu, 0xaf56ddefu, 0x4d8e57a0u, 0xebc5d151u,
    0x89fd4b02u, 0x2834c4b3u, 0xc66c3e64u, 0x64a3b815u, 0x02db31c6u, 0xa112ab77u, 0x3f4a2528u, 0xdd819ed9u,
    0x7bb9188au, 0x19f0923bu, 0xb8280becu, 0x565f859du, 0xf496ff4eu, 0x92ce78ffu, 0x3105f2b0u, 0xcf3d6c61u,
    0x6d74e612u, 0x0bac5fc3u, 0xa9e3d974u, 0x481b5325u, 0xe652ccd6u, 0x848a4687u, 0x22c1c038u, 0xc0f939e9u,
    0x5f30b39au, 0xfd682d4bu, 0x9b9fa6fcu, 0x39d720adu, 0xd80e9a5eu, 0x7646140fu, 0x147d8dc0u, 0xb2b50771u,
    0x50ec8122u, 0xef23fad3u, 0x8d5b7484u, 0x2b92ee35u, 0xc9ca67e6u, 0x6801e197u, 0x06395b48u, 0xa470d4f9u,
    0x42a84eaau, 0xe0dfc85bu, 0x7f17420cu, 0x1d4ebbbdu, 0xbb86356eu, 0x59bdaf1fu, 0xf7f528d0u, 0x962ca281u,
    0x34641c32u, 0xd29b95e3u, 0x70d30f94u, 0x0f0a8945u, 0xad4202f6u, 0x4b797ca7u, 0xe9b0f658u, 0x87e87009u,
    0x261fe9bau, 0xc457636bu, 0x628edd1cu, 0x00c656cdu, 0x9efdd07eu, 0x3d354a2fu, 0xdb6cc3e0u, 0x79a43d91u,
    0x17dbb742u, 0xb61330f3u, 0x544aaaa4u, 0xf2822455u, 0x90b99e06u, 0x2ef117b7u, 0xcd289168u, 0x6b600b19u,
};

struct bshim_049_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_049_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_049_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_049_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_049_reset(struct bshim_049_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0005ebbfu;
    return 0;
}

