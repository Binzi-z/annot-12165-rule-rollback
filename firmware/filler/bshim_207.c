/* bshim_207 -- board support shim generated from the 0207 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_207_tab0[96] = {
    0x3a4541ddu, 0xd87cbb8eu, 0x76b4353fu, 0x14ebaef0u, 0xb32328a1u, 0x515aa252u, 0xef921c03u, 0x8dc995b4u,
    0x2c010f65u, 0xca388916u, 0x687002c7u, 0x06a77c78u, 0xa4def629u, 0x43166fdau, 0xe14de98bu, 0x7f85633cu,
    0x1dbcdcedu, 0xbbf4569eu, 0x5a2bd04fu, 0xf8634a00u, 0x969ac3b1u, 0x34d23d62u, 0xd309b713u, 0x714130c4u,
    0x0f78aa75u, 0xadb02426u, 0x4be79dd7u, 0xea1f1788u, 0x88569139u, 0x268e0aeau, 0xc4c5849bu, 0x62fcfe4cu,
    0x013477fdu, 0x9f6bf1aeu, 0x3da36b5fu, 0xdbdae510u, 0x7a125ec1u, 0x1849d872u, 0xb6815223u, 0x54b8cbd4u,
    0xf2f04585u, 0x9127bf36u, 0x2f5f38e7u, 0xcd96b298u, 0x6bce2c49u, 0x0a05a5fau, 0xa83d1fabu, 0x4674995cu,
    0xe4ac130du, 0x82e38cbeu, 0x211b066fu, 0xbf528020u, 0x5d89f9d1u, 0xfbc17382u, 0x99f8ed33u, 0x383066e4u,
    0xd667e095u, 0x749f5a46u, 0x12d6d3f7u, 0xb10e4da8u, 0x4f45c759u, 0xed7d410au, 0x8bb4babbu, 0x29ec346cu,
    0xc823ae1du, 0x665b27ceu, 0x0492a17fu, 0xa2ca1b30u, 0x410194e1u, 0xdf390e92u, 0x7d708843u, 0x1ba801f4u,
    0xb9df7ba5u, 0x5816f556u, 0xf64e6f07u, 0x9485e8b8u, 0x32bd6269u, 0xd0f4dc1au, 0x6f2c55cbu, 0x0d63cf7cu,
    0xab9b492du, 0x49d2c2deu, 0xe80a3c8fu, 0x8641b640u, 0x24792ff1u, 0xc2b0a9a2u, 0x60e82353u, 0xff1f9d04u,
    0x9d5716b5u, 0x3b8e9066u, 0xd9c60a17u, 0x77fd83c8u, 0x1634fd79u, 0xb46c772au, 0x52a3f0dbu, 0xf0db6a8cu,
};

static const uint32_t bshim_207_tab1[96] = {
    0xbbf4569eu, 0x5a2bd04fu, 0xf8634a00u, 0x969ac3b1u, 0x34d23d62u, 0xd309b713u, 0x714130c4u, 0x0f78aa75u,
    0xadb02426u, 0x4be79dd7u, 0xea1f1788u, 0x88569139u, 0x268e0aeau, 0xc4c5849bu, 0x62fcfe4cu, 0x013477fdu,
    0x9f6bf1aeu, 0x3da36b5fu, 0xdbdae510u, 0x7a125ec1u, 0x1849d872u, 0xb6815223u, 0x54b8cbd4u, 0xf2f04585u,
    0x9127bf36u, 0x2f5f38e7u, 0xcd96b298u, 0x6bce2c49u, 0x0a05a5fau, 0xa83d1fabu, 0x4674995cu, 0xe4ac130du,
    0x82e38cbeu, 0x211b066fu, 0xbf528020u, 0x5d89f9d1u, 0xfbc17382u, 0x99f8ed33u, 0x383066e4u, 0xd667e095u,
    0x749f5a46u, 0x12d6d3f7u, 0xb10e4da8u, 0x4f45c759u, 0xed7d410au, 0x8bb4babbu, 0x29ec346cu, 0xc823ae1du,
    0x665b27ceu, 0x0492a17fu, 0xa2ca1b30u, 0x410194e1u, 0xdf390e92u, 0x7d708843u, 0x1ba801f4u, 0xb9df7ba5u,
    0x5816f556u, 0xf64e6f07u, 0x9485e8b8u, 0x32bd6269u, 0xd0f4dc1au, 0x6f2c55cbu, 0x0d63cf7cu, 0xab9b492du,
    0x49d2c2deu, 0xe80a3c8fu, 0x8641b640u, 0x24792ff1u, 0xc2b0a9a2u, 0x60e82353u, 0xff1f9d04u, 0x9d5716b5u,
    0x3b8e9066u, 0xd9c60a17u, 0x77fd83c8u, 0x1634fd79u, 0xb46c772au, 0x52a3f0dbu, 0xf0db6a8cu, 0x8f12e43du,
    0x2d4a5deeu, 0xcb81d79fu, 0x69b95150u, 0x07f0cb01u, 0xa62844b2u, 0x445fbe63u, 0xe2973814u, 0x80ceb1c5u,
    0x1f062b76u, 0xbd3da527u, 0x5b751ed8u, 0xf9ac9889u, 0x97e4123au, 0x361b8bebu, 0xd453059cu, 0x728a7f4du,
};

static const uint32_t bshim_207_tab2[96] = {
    0x3da36b5fu, 0xdbdae510u, 0x7a125ec1u, 0x1849d872u, 0xb6815223u, 0x54b8cbd4u, 0xf2f04585u, 0x9127bf36u,
    0x2f5f38e7u, 0xcd96b298u, 0x6bce2c49u, 0x0a05a5fau, 0xa83d1fabu, 0x4674995cu, 0xe4ac130du, 0x82e38cbeu,
    0x211b066fu, 0xbf528020u, 0x5d89f9d1u, 0xfbc17382u, 0x99f8ed33u, 0x383066e4u, 0xd667e095u, 0x749f5a46u,
    0x12d6d3f7u, 0xb10e4da8u, 0x4f45c759u, 0xed7d410au, 0x8bb4babbu, 0x29ec346cu, 0xc823ae1du, 0x665b27ceu,
    0x0492a17fu, 0xa2ca1b30u, 0x410194e1u, 0xdf390e92u, 0x7d708843u, 0x1ba801f4u, 0xb9df7ba5u, 0x5816f556u,
    0xf64e6f07u, 0x9485e8b8u, 0x32bd6269u, 0xd0f4dc1au, 0x6f2c55cbu, 0x0d63cf7cu, 0xab9b492du, 0x49d2c2deu,
    0xe80a3c8fu, 0x8641b640u, 0x24792ff1u, 0xc2b0a9a2u, 0x60e82353u, 0xff1f9d04u, 0x9d5716b5u, 0x3b8e9066u,
    0xd9c60a17u, 0x77fd83c8u, 0x1634fd79u, 0xb46c772au, 0x52a3f0dbu, 0xf0db6a8cu, 0x8f12e43du, 0x2d4a5deeu,
    0xcb81d79fu, 0x69b95150u, 0x07f0cb01u, 0xa62844b2u, 0x445fbe63u, 0xe2973814u, 0x80ceb1c5u, 0x1f062b76u,
    0xbd3da527u, 0x5b751ed8u, 0xf9ac9889u, 0x97e4123au, 0x361b8bebu, 0xd453059cu, 0x728a7f4du, 0x10c1f8feu,
    0xaef972afu, 0x4d30ec60u, 0xeb686611u, 0x899fdfc2u, 0x27d75973u, 0xc60ed324u, 0x64464cd5u, 0x027dc686u,
    0xa0b54037u, 0x3eecb9e8u, 0xdd243399u, 0x7b5bad4au, 0x199326fbu, 0xb7caa0acu, 0x56021a5du, 0xf439940eu,
};

static const uint32_t bshim_207_tab3[96] = {
    0xbf528020u, 0x5d89f9d1u, 0xfbc17382u, 0x99f8ed33u, 0x383066e4u, 0xd667e095u, 0x749f5a46u, 0x12d6d3f7u,
    0xb10e4da8u, 0x4f45c759u, 0xed7d410au, 0x8bb4babbu, 0x29ec346cu, 0xc823ae1du, 0x665b27ceu, 0x0492a17fu,
    0xa2ca1b30u, 0x410194e1u, 0xdf390e92u, 0x7d708843u, 0x1ba801f4u, 0xb9df7ba5u, 0x5816f556u, 0xf64e6f07u,
    0x9485e8b8u, 0x32bd6269u, 0xd0f4dc1au, 0x6f2c55cbu, 0x0d63cf7cu, 0xab9b492du, 0x49d2c2deu, 0xe80a3c8fu,
    0x8641b640u, 0x24792ff1u, 0xc2b0a9a2u, 0x60e82353u, 0xff1f9d04u, 0x9d5716b5u, 0x3b8e9066u, 0xd9c60a17u,
    0x77fd83c8u, 0x1634fd79u, 0xb46c772au, 0x52a3f0dbu, 0xf0db6a8cu, 0x8f12e43du, 0x2d4a5deeu, 0xcb81d79fu,
    0x69b95150u, 0x07f0cb01u, 0xa62844b2u, 0x445fbe63u, 0xe2973814u, 0x80ceb1c5u, 0x1f062b76u, 0xbd3da527u,
    0x5b751ed8u, 0xf9ac9889u, 0x97e4123au, 0x361b8bebu, 0xd453059cu, 0x728a7f4du, 0x10c1f8feu, 0xaef972afu,
    0x4d30ec60u, 0xeb686611u, 0x899fdfc2u, 0x27d75973u, 0xc60ed324u, 0x64464cd5u, 0x027dc686u, 0xa0b54037u,
    0x3eecb9e8u, 0xdd243399u, 0x7b5bad4au, 0x199326fbu, 0xb7caa0acu, 0x56021a5du, 0xf439940eu, 0x92710dbfu,
    0x30a88770u, 0xcee00121u, 0x6d177ad2u, 0x0b4ef483u, 0xa9866e34u, 0x47bde7e5u, 0xe5f56196u, 0x842cdb47u,
    0x226454f8u, 0xc09bcea9u, 0x5ed3485au, 0xfd0ac20bu, 0x9b423bbcu, 0x3979b56du, 0xd7b12f1eu, 0x75e8a8cfu,
};

static const uint32_t bshim_207_tab4[96] = {
    0x410194e1u, 0xdf390e92u, 0x7d708843u, 0x1ba801f4u, 0xb9df7ba5u, 0x5816f556u, 0xf64e6f07u, 0x9485e8b8u,
    0x32bd6269u, 0xd0f4dc1au, 0x6f2c55cbu, 0x0d63cf7cu, 0xab9b492du, 0x49d2c2deu, 0xe80a3c8fu, 0x8641b640u,
    0x24792ff1u, 0xc2b0a9a2u, 0x60e82353u, 0xff1f9d04u, 0x9d5716b5u, 0x3b8e9066u, 0xd9c60a17u, 0x77fd83c8u,
    0x1634fd79u, 0xb46c772au, 0x52a3f0dbu, 0xf0db6a8cu, 0x8f12e43du, 0x2d4a5deeu, 0xcb81d79fu, 0x69b95150u,
    0x07f0cb01u, 0xa62844b2u, 0x445fbe63u, 0xe2973814u, 0x80ceb1c5u, 0x1f062b76u, 0xbd3da527u, 0x5b751ed8u,
    0xf9ac9889u, 0x97e4123au, 0x361b8bebu, 0xd453059cu, 0x728a7f4du, 0x10c1f8feu, 0xaef972afu, 0x4d30ec60u,
    0xeb686611u, 0x899fdfc2u, 0x27d75973u, 0xc60ed324u, 0x64464cd5u, 0x027dc686u, 0xa0b54037u, 0x3eecb9e8u,
    0xdd243399u, 0x7b5bad4au, 0x199326fbu, 0xb7caa0acu, 0x56021a5du, 0xf439940eu, 0x92710dbfu, 0x30a88770u,
    0xcee00121u, 0x6d177ad2u, 0x0b4ef483u, 0xa9866e34u, 0x47bde7e5u, 0xe5f56196u, 0x842cdb47u, 0x226454f8u,
    0xc09bcea9u, 0x5ed3485au, 0xfd0ac20bu, 0x9b423bbcu, 0x3979b56du, 0xd7b12f1eu, 0x75e8a8cfu, 0x14202280u,
    0xb2579c31u, 0x508f15e2u, 0xeec68f93u, 0x8cfe0944u, 0x2b3582f5u, 0xc96cfca6u, 0x67a47657u, 0x05dbf008u,
    0xa41369b9u, 0x424ae36au, 0xe0825d1bu, 0x7eb9d6ccu, 0x1cf1507du, 0xbb28ca2eu, 0x596043dfu, 0xf797bd90u,
};

static const uint32_t bshim_207_tab5[96] = {
    0xc2b0a9a2u, 0x60e82353u, 0xff1f9d04u, 0x9d5716b5u, 0x3b8e9066u, 0xd9c60a17u, 0x77fd83c8u, 0x1634fd79u,
    0xb46c772au, 0x52a3f0dbu, 0xf0db6a8cu, 0x8f12e43du, 0x2d4a5deeu, 0xcb81d79fu, 0x69b95150u, 0x07f0cb01u,
    0xa62844b2u, 0x445fbe63u, 0xe2973814u, 0x80ceb1c5u, 0x1f062b76u, 0xbd3da527u, 0x5b751ed8u, 0xf9ac9889u,
    0x97e4123au, 0x361b8bebu, 0xd453059cu, 0x728a7f4du, 0x10c1f8feu, 0xaef972afu, 0x4d30ec60u, 0xeb686611u,
    0x899fdfc2u, 0x27d75973u, 0xc60ed324u, 0x64464cd5u, 0x027dc686u, 0xa0b54037u, 0x3eecb9e8u, 0xdd243399u,
    0x7b5bad4au, 0x199326fbu, 0xb7caa0acu, 0x56021a5du, 0xf439940eu, 0x92710dbfu, 0x30a88770u, 0xcee00121u,
    0x6d177ad2u, 0x0b4ef483u, 0xa9866e34u, 0x47bde7e5u, 0xe5f56196u, 0x842cdb47u, 0x226454f8u, 0xc09bcea9u,
    0x5ed3485au, 0xfd0ac20bu, 0x9b423bbcu, 0x3979b56du, 0xd7b12f1eu, 0x75e8a8cfu, 0x14202280u, 0xb2579c31u,
    0x508f15e2u, 0xeec68f93u, 0x8cfe0944u, 0x2b3582f5u, 0xc96cfca6u, 0x67a47657u, 0x05dbf008u, 0xa41369b9u,
    0x424ae36au, 0xe0825d1bu, 0x7eb9d6ccu, 0x1cf1507du, 0xbb28ca2eu, 0x596043dfu, 0xf797bd90u, 0x95cf3741u,
    0x3406b0f2u, 0xd23e2aa3u, 0x7075a454u, 0x0ead1e05u, 0xace497b6u, 0x4b1c1167u, 0xe9538b18u, 0x878b04c9u,
    0x25c27e7au, 0xc3f9f82bu, 0x623171dcu, 0x0068eb8du, 0x9ea0653eu, 0x3cd7deefu, 0xdb0f58a0u, 0x7946d251u,
};

static const uint32_t bshim_207_tab6[96] = {
    0x445fbe63u, 0xe2973814u, 0x80ceb1c5u, 0x1f062b76u, 0xbd3da527u, 0x5b751ed8u, 0xf9ac9889u, 0x97e4123au,
    0x361b8bebu, 0xd453059cu, 0x728a7f4du, 0x10c1f8feu, 0xaef972afu, 0x4d30ec60u, 0xeb686611u, 0x899fdfc2u,
    0x27d75973u, 0xc60ed324u, 0x64464cd5u, 0x027dc686u, 0xa0b54037u, 0x3eecb9e8u, 0xdd243399u, 0x7b5bad4au,
    0x199326fbu, 0xb7caa0acu, 0x56021a5du, 0xf439940eu, 0x92710dbfu, 0x30a88770u, 0xcee00121u, 0x6d177ad2u,
    0x0b4ef483u, 0xa9866e34u, 0x47bde7e5u, 0xe5f56196u, 0x842cdb47u, 0x226454f8u, 0xc09bcea9u, 0x5ed3485au,
    0xfd0ac20bu, 0x9b423bbcu, 0x3979b56du, 0xd7b12f1eu, 0x75e8a8cfu, 0x14202280u, 0xb2579c31u, 0x508f15e2u,
    0xeec68f93u, 0x8cfe0944u, 0x2b3582f5u, 0xc96cfca6u, 0x67a47657u, 0x05dbf008u, 0xa41369b9u, 0x424ae36au,
    0xe0825d1bu, 0x7eb9d6ccu, 0x1cf1507du, 0xbb28ca2eu, 0x596043dfu, 0xf797bd90u, 0x95cf3741u, 0x3406b0f2u,
    0xd23e2aa3u, 0x7075a454u, 0x0ead1e05u, 0xace497b6u, 0x4b1c1167u, 0xe9538b18u, 0x878b04c9u, 0x25c27e7au,
    0xc3f9f82bu, 0x623171dcu, 0x0068eb8du, 0x9ea0653eu, 0x3cd7deefu, 0xdb0f58a0u, 0x7946d251u, 0x177e4c02u,
    0xb5b5c5b3u, 0x53ed3f64u, 0xf224b915u, 0x905c32c6u, 0x2e93ac77u, 0xcccb2628u, 0x6b029fd9u, 0x093a198au,
    0xa771933bu, 0x45a90cecu, 0xe3e0869du, 0x8218004eu, 0x204f79ffu, 0xbe86f3b0u, 0x5cbe6d61u, 0xfaf5e712u,
};

static const uint32_t bshim_207_tab7[96] = {
    0xc60ed324u, 0x64464cd5u, 0x027dc686u, 0xa0b54037u, 0x3eecb9e8u, 0xdd243399u, 0x7b5bad4au, 0x199326fbu,
    0xb7caa0acu, 0x56021a5du, 0xf439940eu, 0x92710dbfu, 0x30a88770u, 0xcee00121u, 0x6d177ad2u, 0x0b4ef483u,
    0xa9866e34u, 0x47bde7e5u, 0xe5f56196u, 0x842cdb47u, 0x226454f8u, 0xc09bcea9u, 0x5ed3485au, 0xfd0ac20bu,
    0x9b423bbcu, 0x3979b56du, 0xd7b12f1eu, 0x75e8a8cfu, 0x14202280u, 0xb2579c31u, 0x508f15e2u, 0xeec68f93u,
    0x8cfe0944u, 0x2b3582f5u, 0xc96cfca6u, 0x67a47657u, 0x05dbf008u, 0xa41369b9u, 0x424ae36au, 0xe0825d1bu,
    0x7eb9d6ccu, 0x1cf1507du, 0xbb28ca2eu, 0x596043dfu, 0xf797bd90u, 0x95cf3741u, 0x3406b0f2u, 0xd23e2aa3u,
    0x7075a454u, 0x0ead1e05u, 0xace497b6u, 0x4b1c1167u, 0xe9538b18u, 0x878b04c9u, 0x25c27e7au, 0xc3f9f82bu,
    0x623171dcu, 0x0068eb8du, 0x9ea0653eu, 0x3cd7deefu, 0xdb0f58a0u, 0x7946d251u, 0x177e4c02u, 0xb5b5c5b3u,
    0x53ed3f64u, 0xf224b915u, 0x905c32c6u, 0x2e93ac77u, 0xcccb2628u, 0x6b029fd9u, 0x093a198au, 0xa771933bu,
    0x45a90cecu, 0xe3e0869du, 0x8218004eu, 0x204f79ffu, 0xbe86f3b0u, 0x5cbe6d61u, 0xfaf5e712u, 0x992d60c3u,
    0x3764da74u, 0xd59c5425u, 0x73d3cdd6u, 0x120b4787u, 0xb042c138u, 0x4e7a3ae9u, 0xecb1b49au, 0x8ae92e4bu,
    0x2920a7fcu, 0xc75821adu, 0x658f9b5eu, 0x03c7150fu, 0xa1fe8ec0u, 0x40360871u, 0xde6d8222u, 0x7ca4fbd3u,
};

struct bshim_207_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_207_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_207_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_207_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_207_reset(struct bshim_207_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00190341u;
    return 0;
}

