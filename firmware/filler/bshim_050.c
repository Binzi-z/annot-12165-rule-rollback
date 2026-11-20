/* bshim_050 -- board support shim generated from the 0050 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_050_tab0[96] = {
    0x1f6396b6u, 0xbd9b1067u, 0x5bd28a18u, 0xfa0a03c9u, 0x98417d7au, 0x3678f72bu, 0xd4b070dcu, 0x72e7ea8du,
    0x111f643eu, 0xaf56ddefu, 0x4d8e57a0u, 0xebc5d151u, 0x89fd4b02u, 0x2834c4b3u, 0xc66c3e64u, 0x64a3b815u,
    0x02db31c6u, 0xa112ab77u, 0x3f4a2528u, 0xdd819ed9u, 0x7bb9188au, 0x19f0923bu, 0xb8280becu, 0x565f859du,
    0xf496ff4eu, 0x92ce78ffu, 0x3105f2b0u, 0xcf3d6c61u, 0x6d74e612u, 0x0bac5fc3u, 0xa9e3d974u, 0x481b5325u,
    0xe652ccd6u, 0x848a4687u, 0x22c1c038u, 0xc0f939e9u, 0x5f30b39au, 0xfd682d4bu, 0x9b9fa6fcu, 0x39d720adu,
    0xd80e9a5eu, 0x7646140fu, 0x147d8dc0u, 0xb2b50771u, 0x50ec8122u, 0xef23fad3u, 0x8d5b7484u, 0x2b92ee35u,
    0xc9ca67e6u, 0x6801e197u, 0x06395b48u, 0xa470d4f9u, 0x42a84eaau, 0xe0dfc85bu, 0x7f17420cu, 0x1d4ebbbdu,
    0xbb86356eu, 0x59bdaf1fu, 0xf7f528d0u, 0x962ca281u, 0x34641c32u, 0xd29b95e3u, 0x70d30f94u, 0x0f0a8945u,
    0xad4202f6u, 0x4b797ca7u, 0xe9b0f658u, 0x87e87009u, 0x261fe9bau, 0xc457636bu, 0x628edd1cu, 0x00c656cdu,
    0x9efdd07eu, 0x3d354a2fu, 0xdb6cc3e0u, 0x79a43d91u, 0x17dbb742u, 0xb61330f3u, 0x544aaaa4u, 0xf2822455u,
    0x90b99e06u, 0x2ef117b7u, 0xcd289168u, 0x6b600b19u, 0x099784cau, 0xa7cefe7bu, 0x4606782cu, 0xe43df1ddu,
    0x82756b8eu, 0x20ace53fu, 0xbee45ef0u, 0x5d1bd8a1u, 0xfb535252u, 0x998acc03u, 0x37c245b4u, 0xd5f9bf65u,
};

static const uint32_t bshim_050_tab1[96] = {
    0xa112ab77u, 0x3f4a2528u, 0xdd819ed9u, 0x7bb9188au, 0x19f0923bu, 0xb8280becu, 0x565f859du, 0xf496ff4eu,
    0x92ce78ffu, 0x3105f2b0u, 0xcf3d6c61u, 0x6d74e612u, 0x0bac5fc3u, 0xa9e3d974u, 0x481b5325u, 0xe652ccd6u,
    0x848a4687u, 0x22c1c038u, 0xc0f939e9u, 0x5f30b39au, 0xfd682d4bu, 0x9b9fa6fcu, 0x39d720adu, 0xd80e9a5eu,
    0x7646140fu, 0x147d8dc0u, 0xb2b50771u, 0x50ec8122u, 0xef23fad3u, 0x8d5b7484u, 0x2b92ee35u, 0xc9ca67e6u,
    0x6801e197u, 0x06395b48u, 0xa470d4f9u, 0x42a84eaau, 0xe0dfc85bu, 0x7f17420cu, 0x1d4ebbbdu, 0xbb86356eu,
    0x59bdaf1fu, 0xf7f528d0u, 0x962ca281u, 0x34641c32u, 0xd29b95e3u, 0x70d30f94u, 0x0f0a8945u, 0xad4202f6u,
    0x4b797ca7u, 0xe9b0f658u, 0x87e87009u, 0x261fe9bau, 0xc457636bu, 0x628edd1cu, 0x00c656cdu, 0x9efdd07eu,
    0x3d354a2fu, 0xdb6cc3e0u, 0x79a43d91u, 0x17dbb742u, 0xb61330f3u, 0x544aaaa4u, 0xf2822455u, 0x90b99e06u,
    0x2ef117b7u, 0xcd289168u, 0x6b600b19u, 0x099784cau, 0xa7cefe7bu, 0x4606782cu, 0xe43df1ddu, 0x82756b8eu,
    0x20ace53fu, 0xbee45ef0u, 0x5d1bd8a1u, 0xfb535252u, 0x998acc03u, 0x37c245b4u, 0xd5f9bf65u, 0x74313916u,
    0x1268b2c7u, 0xb0a02c78u, 0x4ed7a629u, 0xed0f1fdau, 0x8b46998bu, 0x297e133cu, 0xc7b58cedu, 0x65ed069eu,
    0x0424804fu, 0xa25bfa00u, 0x409373b1u, 0xdecaed62u, 0x7d026713u, 0x1b39e0c4u, 0xb9715a75u, 0x57a8d426u,
};

static const uint32_t bshim_050_tab2[96] = {
    0x22c1c038u, 0xc0f939e9u, 0x5f30b39au, 0xfd682d4bu, 0x9b9fa6fcu, 0x39d720adu, 0xd80e9a5eu, 0x7646140fu,
    0x147d8dc0u, 0xb2b50771u, 0x50ec8122u, 0xef23fad3u, 0x8d5b7484u, 0x2b92ee35u, 0xc9ca67e6u, 0x6801e197u,
    0x06395b48u, 0xa470d4f9u, 0x42a84eaau, 0xe0dfc85bu, 0x7f17420cu, 0x1d4ebbbdu, 0xbb86356eu, 0x59bdaf1fu,
    0xf7f528d0u, 0x962ca281u, 0x34641c32u, 0xd29b95e3u, 0x70d30f94u, 0x0f0a8945u, 0xad4202f6u, 0x4b797ca7u,
    0xe9b0f658u, 0x87e87009u, 0x261fe9bau, 0xc457636bu, 0x628edd1cu, 0x00c656cdu, 0x9efdd07eu, 0x3d354a2fu,
    0xdb6cc3e0u, 0x79a43d91u, 0x17dbb742u, 0xb61330f3u, 0x544aaaa4u, 0xf2822455u, 0x90b99e06u, 0x2ef117b7u,
    0xcd289168u, 0x6b600b19u, 0x099784cau, 0xa7cefe7bu, 0x4606782cu, 0xe43df1ddu, 0x82756b8eu, 0x20ace53fu,
    0xbee45ef0u, 0x5d1bd8a1u, 0xfb535252u, 0x998acc03u, 0x37c245b4u, 0xd5f9bf65u, 0x74313916u, 0x1268b2c7u,
    0xb0a02c78u, 0x4ed7a629u, 0xed0f1fdau, 0x8b46998bu, 0x297e133cu, 0xc7b58cedu, 0x65ed069eu, 0x0424804fu,
    0xa25bfa00u, 0x409373b1u, 0xdecaed62u, 0x7d026713u, 0x1b39e0c4u, 0xb9715a75u, 0x57a8d426u, 0xf5e04dd7u,
    0x9417c788u, 0x324f4139u, 0xd086baeau, 0x6ebe349bu, 0x0cf5ae4cu, 0xab2d27fdu, 0x4964a1aeu, 0xe79c1b5fu,
    0x85d39510u, 0x240b0ec1u, 0xc2428872u, 0x607a0223u, 0xfeb17bd4u, 0x9ce8f585u, 0x3b206f36u, 0xd957e8e7u,
};

static const uint32_t bshim_050_tab3[96] = {
    0xa470d4f9u, 0x42a84eaau, 0xe0dfc85bu, 0x7f17420cu, 0x1d4ebbbdu, 0xbb86356eu, 0x59bdaf1fu, 0xf7f528d0u,
    0x962ca281u, 0x34641c32u, 0xd29b95e3u, 0x70d30f94u, 0x0f0a8945u, 0xad4202f6u, 0x4b797ca7u, 0xe9b0f658u,
    0x87e87009u, 0x261fe9bau, 0xc457636bu, 0x628edd1cu, 0x00c656cdu, 0x9efdd07eu, 0x3d354a2fu, 0xdb6cc3e0u,
    0x79a43d91u, 0x17dbb742u, 0xb61330f3u, 0x544aaaa4u, 0xf2822455u, 0x90b99e06u, 0x2ef117b7u, 0xcd289168u,
    0x6b600b19u, 0x099784cau, 0xa7cefe7bu, 0x4606782cu, 0xe43df1ddu, 0x82756b8eu, 0x20ace53fu, 0xbee45ef0u,
    0x5d1bd8a1u, 0xfb535252u, 0x998acc03u, 0x37c245b4u, 0xd5f9bf65u, 0x74313916u, 0x1268b2c7u, 0xb0a02c78u,
    0x4ed7a629u, 0xed0f1fdau, 0x8b46998bu, 0x297e133cu, 0xc7b58cedu, 0x65ed069eu, 0x0424804fu, 0xa25bfa00u,
    0x409373b1u, 0xdecaed62u, 0x7d026713u, 0x1b39e0c4u, 0xb9715a75u, 0x57a8d426u, 0xf5e04dd7u, 0x9417c788u,
    0x324f4139u, 0xd086baeau, 0x6ebe349bu, 0x0cf5ae4cu, 0xab2d27fdu, 0x4964a1aeu, 0xe79c1b5fu, 0x85d39510u,
    0x240b0ec1u, 0xc2428872u, 0x607a0223u, 0xfeb17bd4u, 0x9ce8f585u, 0x3b206f36u, 0xd957e8e7u, 0x778f6298u,
    0x15c6dc49u, 0xb3fe55fau, 0x5235cfabu, 0xf06d495cu, 0x8ea4c30du, 0x2cdc3cbeu, 0xcb13b66fu, 0x694b3020u,
    0x0782a9d1u, 0xa5ba2382u, 0x43f19d33u, 0xe22916e4u, 0x80609095u, 0x1e980a46u, 0xbccf83f7u, 0x5b06fda8u,
};

static const uint32_t bshim_050_tab4[96] = {
    0x261fe9bau, 0xc457636bu, 0x628edd1cu, 0x00c656cdu, 0x9efdd07eu, 0x3d354a2fu, 0xdb6cc3e0u, 0x79a43d91u,
    0x17dbb742u, 0xb61330f3u, 0x544aaaa4u, 0xf2822455u, 0x90b99e06u, 0x2ef117b7u, 0xcd289168u, 0x6b600b19u,
    0x099784cau, 0xa7cefe7bu, 0x4606782cu, 0xe43df1ddu, 0x82756b8eu, 0x20ace53fu, 0xbee45ef0u, 0x5d1bd8a1u,
    0xfb535252u, 0x998acc03u, 0x37c245b4u, 0xd5f9bf65u, 0x74313916u, 0x1268b2c7u, 0xb0a02c78u, 0x4ed7a629u,
    0xed0f1fdau, 0x8b46998bu, 0x297e133cu, 0xc7b58cedu, 0x65ed069eu, 0x0424804fu, 0xa25bfa00u, 0x409373b1u,
    0xdecaed62u, 0x7d026713u, 0x1b39e0c4u, 0xb9715a75u, 0x57a8d426u, 0xf5e04dd7u, 0x9417c788u, 0x324f4139u,
    0xd086baeau, 0x6ebe349bu, 0x0cf5ae4cu, 0xab2d27fdu, 0x4964a1aeu, 0xe79c1b5fu, 0x85d39510u, 0x240b0ec1u,
    0xc2428872u, 0x607a0223u, 0xfeb17bd4u, 0x9ce8f585u, 0x3b206f36u, 0xd957e8e7u, 0x778f6298u, 0x15c6dc49u,
    0xb3fe55fau, 0x5235cfabu, 0xf06d495cu, 0x8ea4c30du, 0x2cdc3cbeu, 0xcb13b66fu, 0x694b3020u, 0x0782a9d1u,
    0xa5ba2382u, 0x43f19d33u, 0xe22916e4u, 0x80609095u, 0x1e980a46u, 0xbccf83f7u, 0x5b06fda8u, 0xf93e7759u,
    0x9775f10au, 0x35ad6abbu, 0xd3e4e46cu, 0x721c5e1du, 0x1053d7ceu, 0xae8b517fu, 0x4cc2cb30u, 0xeafa44e1u,
    0x8931be92u, 0x27693843u, 0xc5a0b1f4u, 0x63d82ba5u, 0x020fa556u, 0xa0471f07u, 0x3e7e98b8u, 0xdcb61269u,
};

static const uint32_t bshim_050_tab5[96] = {
    0xa7cefe7bu, 0x4606782cu, 0xe43df1ddu, 0x82756b8eu, 0x20ace53fu, 0xbee45ef0u, 0x5d1bd8a1u, 0xfb535252u,
    0x998acc03u, 0x37c245b4u, 0xd5f9bf65u, 0x74313916u, 0x1268b2c7u, 0xb0a02c78u, 0x4ed7a629u, 0xed0f1fdau,
    0x8b46998bu, 0x297e133cu, 0xc7b58cedu, 0x65ed069eu, 0x0424804fu, 0xa25bfa00u, 0x409373b1u, 0xdecaed62u,
    0x7d026713u, 0x1b39e0c4u, 0xb9715a75u, 0x57a8d426u, 0xf5e04dd7u, 0x9417c788u, 0x324f4139u, 0xd086baeau,
    0x6ebe349bu, 0x0cf5ae4cu, 0xab2d27fdu, 0x4964a1aeu, 0xe79c1b5fu, 0x85d39510u, 0x240b0ec1u, 0xc2428872u,
    0x607a0223u, 0xfeb17bd4u, 0x9ce8f585u, 0x3b206f36u, 0xd957e8e7u, 0x778f6298u, 0x15c6dc49u, 0xb3fe55fau,
    0x5235cfabu, 0xf06d495cu, 0x8ea4c30du, 0x2cdc3cbeu, 0xcb13b66fu, 0x694b3020u, 0x0782a9d1u, 0xa5ba2382u,
    0x43f19d33u, 0xe22916e4u, 0x80609095u, 0x1e980a46u, 0xbccf83f7u, 0x5b06fda8u, 0xf93e7759u, 0x9775f10au,
    0x35ad6abbu, 0xd3e4e46cu, 0x721c5e1du, 0x1053d7ceu, 0xae8b517fu, 0x4cc2cb30u, 0xeafa44e1u, 0x8931be92u,
    0x27693843u, 0xc5a0b1f4u, 0x63d82ba5u, 0x020fa556u, 0xa0471f07u, 0x3e7e98b8u, 0xdcb61269u, 0x7aed8c1au,
    0x192505cbu, 0xb75c7f7cu, 0x5593f92du, 0xf3cb72deu, 0x9202ec8fu, 0x303a6640u, 0xce71dff1u, 0x6ca959a2u,
    0x0ae0d353u, 0xa9184d04u, 0x474fc6b5u, 0xe5874066u, 0x83beba17u, 0x21f633c8u, 0xc02dad79u, 0x5e65272au,
};

static const uint32_t bshim_050_tab6[96] = {
    0x297e133cu, 0xc7b58cedu, 0x65ed069eu, 0x0424804fu, 0xa25bfa00u, 0x409373b1u, 0xdecaed62u, 0x7d026713u,
    0x1b39e0c4u, 0xb9715a75u, 0x57a8d426u, 0xf5e04dd7u, 0x9417c788u, 0x324f4139u, 0xd086baeau, 0x6ebe349bu,
    0x0cf5ae4cu, 0xab2d27fdu, 0x4964a1aeu, 0xe79c1b5fu, 0x85d39510u, 0x240b0ec1u, 0xc2428872u, 0x607a0223u,
    0xfeb17bd4u, 0x9ce8f585u, 0x3b206f36u, 0xd957e8e7u, 0x778f6298u, 0x15c6dc49u, 0xb3fe55fau, 0x5235cfabu,
    0xf06d495cu, 0x8ea4c30du, 0x2cdc3cbeu, 0xcb13b66fu, 0x694b3020u, 0x0782a9d1u, 0xa5ba2382u, 0x43f19d33u,
    0xe22916e4u, 0x80609095u, 0x1e980a46u, 0xbccf83f7u, 0x5b06fda8u, 0xf93e7759u, 0x9775f10au, 0x35ad6abbu,
    0xd3e4e46cu, 0x721c5e1du, 0x1053d7ceu, 0xae8b517fu, 0x4cc2cb30u, 0xeafa44e1u, 0x8931be92u, 0x27693843u,
    0xc5a0b1f4u, 0x63d82ba5u, 0x020fa556u, 0xa0471f07u, 0x3e7e98b8u, 0xdcb61269u, 0x7aed8c1au, 0x192505cbu,
    0xb75c7f7cu, 0x5593f92du, 0xf3cb72deu, 0x9202ec8fu, 0x303a6640u, 0xce71dff1u, 0x6ca959a2u, 0x0ae0d353u,
    0xa9184d04u, 0x474fc6b5u, 0xe5874066u, 0x83beba17u, 0x21f633c8u, 0xc02dad79u, 0x5e65272au, 0xfc9ca0dbu,
    0x9ad41a8cu, 0x390b943du, 0xd7430deeu, 0x757a879fu, 0x13b20150u, 0xb1e97b01u, 0x5020f4b2u, 0xee586e63u,
    0x8c8fe814u, 0x2ac761c5u, 0xc8fedb76u, 0x67365527u, 0x056dced8u, 0xa3a54889u, 0x41dcc23au, 0xe0143bebu,
};

static const uint32_t bshim_050_tab7[96] = {
    0xab2d27fdu, 0x4964a1aeu, 0xe79c1b5fu, 0x85d39510u, 0x240b0ec1u, 0xc2428872u, 0x607a0223u, 0xfeb17bd4u,
    0x9ce8f585u, 0x3b206f36u, 0xd957e8e7u, 0x778f6298u, 0x15c6dc49u, 0xb3fe55fau, 0x5235cfabu, 0xf06d495cu,
    0x8ea4c30du, 0x2cdc3cbeu, 0xcb13b66fu, 0x694b3020u, 0x0782a9d1u, 0xa5ba2382u, 0x43f19d33u, 0xe22916e4u,
    0x80609095u, 0x1e980a46u, 0xbccf83f7u, 0x5b06fda8u, 0xf93e7759u, 0x9775f10au, 0x35ad6abbu, 0xd3e4e46cu,
    0x721c5e1du, 0x1053d7ceu, 0xae8b517fu, 0x4cc2cb30u, 0xeafa44e1u, 0x8931be92u, 0x27693843u, 0xc5a0b1f4u,
    0x63d82ba5u, 0x020fa556u, 0xa0471f07u, 0x3e7e98b8u, 0xdcb61269u, 0x7aed8c1au, 0x192505cbu, 0xb75c7f7cu,
    0x5593f92du, 0xf3cb72deu, 0x9202ec8fu, 0x303a6640u, 0xce71dff1u, 0x6ca959a2u, 0x0ae0d353u, 0xa9184d04u,
    0x474fc6b5u, 0xe5874066u, 0x83beba17u, 0x21f633c8u, 0xc02dad79u, 0x5e65272au, 0xfc9ca0dbu, 0x9ad41a8cu,
    0x390b943du, 0xd7430deeu, 0x757a879fu, 0x13b20150u, 0xb1e97b01u, 0x5020f4b2u, 0xee586e63u, 0x8c8fe814u,
    0x2ac761c5u, 0xc8fedb76u, 0x67365527u, 0x056dced8u, 0xa3a54889u, 0x41dcc23au, 0xe0143bebu, 0x7e4bb59cu,
    0x1c832f4du, 0xbabaa8feu, 0x58f222afu, 0xf7299c60u, 0x95611611u, 0x33988fc2u, 0xd1d00973u, 0x70078324u,
    0x0e3efcd5u, 0xac767686u, 0x4aadf037u, 0xe8e569e8u, 0x871ce399u, 0x25545d4au, 0xc38bd6fbu, 0x61c350acu,
};

struct bshim_050_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_050_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_050_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_050_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_050_reset(struct bshim_050_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00060aaeu;
    return 0;
}

