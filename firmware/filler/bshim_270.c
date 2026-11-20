/* bshim_270 -- board support shim generated from the 0270 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_270_tab0[96] = {
    0xdcb3610au, 0x7aeadabbu, 0x1922546cu, 0xb759ce1du, 0x559147ceu, 0xf3c8c17fu, 0x92003b30u, 0x3037b4e1u,
    0xce6f2e92u, 0x6ca6a843u, 0x0ade21f4u, 0xa9159ba5u, 0x474d1556u, 0xe5848f07u, 0x83bc08b8u, 0x21f38269u,
    0xc02afc1au, 0x5e6275cbu, 0xfc99ef7cu, 0x9ad1692du, 0x3908e2deu, 0xd7405c8fu, 0x7577d640u, 0x13af4ff1u,
    0xb1e6c9a2u, 0x501e4353u, 0xee55bd04u, 0x8c8d36b5u, 0x2ac4b066u, 0xc8fc2a17u, 0x6733a3c8u, 0x056b1d79u,
    0xa3a2972au, 0x41da10dbu, 0xe0118a8cu, 0x7e49043du, 0x1c807deeu, 0xbab7f79fu, 0x58ef7150u, 0xf726eb01u,
    0x955e64b2u, 0x3395de63u, 0xd1cd5814u, 0x7004d1c5u, 0x0e3c4b76u, 0xac73c527u, 0x4aab3ed8u, 0xe8e2b889u,
    0x871a323au, 0x2551abebu, 0xc389259cu, 0x61c09f4du, 0xfff818feu, 0x9e2f92afu, 0x3c670c60u, 0xda9e8611u,
    0x78d5ffc2u, 0x170d7973u, 0xb544f324u, 0x537c6cd5u, 0xf1b3e686u, 0x8feb6037u, 0x2e22d9e8u, 0xcc5a5399u,
    0x6a91cd4au, 0x08c946fbu, 0xa700c0acu, 0x45383a5du, 0xe36fb40eu, 0x81a72dbfu, 0x1fdea770u, 0xbe162121u,
    0x5c4d9ad2u, 0xfa851483u, 0x98bc8e34u, 0x36f407e5u, 0xd52b8196u, 0x7362fb47u, 0x119a74f8u, 0xafd1eea9u,
    0x4e09685au, 0xec40e20bu, 0x8a785bbcu, 0x28afd56du, 0xc6e74f1eu, 0x651ec8cfu, 0x03564280u, 0xa18dbc31u,
    0x3fc535e2u, 0xddfcaf93u, 0x7c342944u, 0x1a6ba2f5u, 0xb8a31ca6u, 0x56da9657u, 0xf5121008u, 0x934989b9u,
};

static const uint32_t bshim_270_tab1[96] = {
    0x5e6275cbu, 0xfc99ef7cu, 0x9ad1692du, 0x3908e2deu, 0xd7405c8fu, 0x7577d640u, 0x13af4ff1u, 0xb1e6c9a2u,
    0x501e4353u, 0xee55bd04u, 0x8c8d36b5u, 0x2ac4b066u, 0xc8fc2a17u, 0x6733a3c8u, 0x056b1d79u, 0xa3a2972au,
    0x41da10dbu, 0xe0118a8cu, 0x7e49043du, 0x1c807deeu, 0xbab7f79fu, 0x58ef7150u, 0xf726eb01u, 0x955e64b2u,
    0x3395de63u, 0xd1cd5814u, 0x7004d1c5u, 0x0e3c4b76u, 0xac73c527u, 0x4aab3ed8u, 0xe8e2b889u, 0x871a323au,
    0x2551abebu, 0xc389259cu, 0x61c09f4du, 0xfff818feu, 0x9e2f92afu, 0x3c670c60u, 0xda9e8611u, 0x78d5ffc2u,
    0x170d7973u, 0xb544f324u, 0x537c6cd5u, 0xf1b3e686u, 0x8feb6037u, 0x2e22d9e8u, 0xcc5a5399u, 0x6a91cd4au,
    0x08c946fbu, 0xa700c0acu, 0x45383a5du, 0xe36fb40eu, 0x81a72dbfu, 0x1fdea770u, 0xbe162121u, 0x5c4d9ad2u,
    0xfa851483u, 0x98bc8e34u, 0x36f407e5u, 0xd52b8196u, 0x7362fb47u, 0x119a74f8u, 0xafd1eea9u, 0x4e09685au,
    0xec40e20bu, 0x8a785bbcu, 0x28afd56du, 0xc6e74f1eu, 0x651ec8cfu, 0x03564280u, 0xa18dbc31u, 0x3fc535e2u,
    0xddfcaf93u, 0x7c342944u, 0x1a6ba2f5u, 0xb8a31ca6u, 0x56da9657u, 0xf5121008u, 0x934989b9u, 0x3181036au,
    0xcfb87d1bu, 0x6deff6ccu, 0x0c27707du, 0xaa5eea2eu, 0x489663dfu, 0xe6cddd90u, 0x85055741u, 0x233cd0f2u,
    0xc1744aa3u, 0x5fabc454u, 0xfde33e05u, 0x9c1ab7b6u, 0x3a523167u, 0xd889ab18u, 0x76c124c9u, 0x14f89e7au,
};

static const uint32_t bshim_270_tab2[96] = {
    0xe0118a8cu, 0x7e49043du, 0x1c807deeu, 0xbab7f79fu, 0x58ef7150u, 0xf726eb01u, 0x955e64b2u, 0x3395de63u,
    0xd1cd5814u, 0x7004d1c5u, 0x0e3c4b76u, 0xac73c527u, 0x4aab3ed8u, 0xe8e2b889u, 0x871a323au, 0x2551abebu,
    0xc389259cu, 0x61c09f4du, 0xfff818feu, 0x9e2f92afu, 0x3c670c60u, 0xda9e8611u, 0x78d5ffc2u, 0x170d7973u,
    0xb544f324u, 0x537c6cd5u, 0xf1b3e686u, 0x8feb6037u, 0x2e22d9e8u, 0xcc5a5399u, 0x6a91cd4au, 0x08c946fbu,
    0xa700c0acu, 0x45383a5du, 0xe36fb40eu, 0x81a72dbfu, 0x1fdea770u, 0xbe162121u, 0x5c4d9ad2u, 0xfa851483u,
    0x98bc8e34u, 0x36f407e5u, 0xd52b8196u, 0x7362fb47u, 0x119a74f8u, 0xafd1eea9u, 0x4e09685au, 0xec40e20bu,
    0x8a785bbcu, 0x28afd56du, 0xc6e74f1eu, 0x651ec8cfu, 0x03564280u, 0xa18dbc31u, 0x3fc535e2u, 0xddfcaf93u,
    0x7c342944u, 0x1a6ba2f5u, 0xb8a31ca6u, 0x56da9657u, 0xf5121008u, 0x934989b9u, 0x3181036au, 0xcfb87d1bu,
    0x6deff6ccu, 0x0c27707du, 0xaa5eea2eu, 0x489663dfu, 0xe6cddd90u, 0x85055741u, 0x233cd0f2u, 0xc1744aa3u,
    0x5fabc454u, 0xfde33e05u, 0x9c1ab7b6u, 0x3a523167u, 0xd889ab18u, 0x76c124c9u, 0x14f89e7au, 0xb330182bu,
    0x516791dcu, 0xef9f0b8du, 0x8dd6853eu, 0x2c0dfeefu, 0xca4578a0u, 0x687cf251u, 0x06b46c02u, 0xa4ebe5b3u,
    0x43235f64u, 0xe15ad915u, 0x7f9252c6u, 0x1dc9cc77u, 0xbc014628u, 0x5a38bfd9u, 0xf870398au, 0x96a7b33bu,
};

static const uint32_t bshim_270_tab3[96] = {
    0x61c09f4du, 0xfff818feu, 0x9e2f92afu, 0x3c670c60u, 0xda9e8611u, 0x78d5ffc2u, 0x170d7973u, 0xb544f324u,
    0x537c6cd5u, 0xf1b3e686u, 0x8feb6037u, 0x2e22d9e8u, 0xcc5a5399u, 0x6a91cd4au, 0x08c946fbu, 0xa700c0acu,
    0x45383a5du, 0xe36fb40eu, 0x81a72dbfu, 0x1fdea770u, 0xbe162121u, 0x5c4d9ad2u, 0xfa851483u, 0x98bc8e34u,
    0x36f407e5u, 0xd52b8196u, 0x7362fb47u, 0x119a74f8u, 0xafd1eea9u, 0x4e09685au, 0xec40e20bu, 0x8a785bbcu,
    0x28afd56du, 0xc6e74f1eu, 0x651ec8cfu, 0x03564280u, 0xa18dbc31u, 0x3fc535e2u, 0xddfcaf93u, 0x7c342944u,
    0x1a6ba2f5u, 0xb8a31ca6u, 0x56da9657u, 0xf5121008u, 0x934989b9u, 0x3181036au, 0xcfb87d1bu, 0x6deff6ccu,
    0x0c27707du, 0xaa5eea2eu, 0x489663dfu, 0xe6cddd90u, 0x85055741u, 0x233cd0f2u, 0xc1744aa3u, 0x5fabc454u,
    0xfde33e05u, 0x9c1ab7b6u, 0x3a523167u, 0xd889ab18u, 0x76c124c9u, 0x14f89e7au, 0xb330182bu, 0x516791dcu,
    0xef9f0b8du, 0x8dd6853eu, 0x2c0dfeefu, 0xca4578a0u, 0x687cf251u, 0x06b46c02u, 0xa4ebe5b3u, 0x43235f64u,
    0xe15ad915u, 0x7f9252c6u, 0x1dc9cc77u, 0xbc014628u, 0x5a38bfd9u, 0xf870398au, 0x96a7b33bu, 0x34df2cecu,
    0xd316a69du, 0x714e204eu, 0x0f8599ffu, 0xadbd13b0u, 0x4bf48d61u, 0xea2c0712u, 0x886380c3u, 0x269afa74u,
    0xc4d27425u, 0x6309edd6u, 0x01416787u, 0x9f78e138u, 0x3db05ae9u, 0xdbe7d49au, 0x7a1f4e4bu, 0x1856c7fcu,
};

static const uint32_t bshim_270_tab4[96] = {
    0xe36fb40eu, 0x81a72dbfu, 0x1fdea770u, 0xbe162121u, 0x5c4d9ad2u, 0xfa851483u, 0x98bc8e34u, 0x36f407e5u,
    0xd52b8196u, 0x7362fb47u, 0x119a74f8u, 0xafd1eea9u, 0x4e09685au, 0xec40e20bu, 0x8a785bbcu, 0x28afd56du,
    0xc6e74f1eu, 0x651ec8cfu, 0x03564280u, 0xa18dbc31u, 0x3fc535e2u, 0xddfcaf93u, 0x7c342944u, 0x1a6ba2f5u,
    0xb8a31ca6u, 0x56da9657u, 0xf5121008u, 0x934989b9u, 0x3181036au, 0xcfb87d1bu, 0x6deff6ccu, 0x0c27707du,
    0xaa5eea2eu, 0x489663dfu, 0xe6cddd90u, 0x85055741u, 0x233cd0f2u, 0xc1744aa3u, 0x5fabc454u, 0xfde33e05u,
    0x9c1ab7b6u, 0x3a523167u, 0xd889ab18u, 0x76c124c9u, 0x14f89e7au, 0xb330182bu, 0x516791dcu, 0xef9f0b8du,
    0x8dd6853eu, 0x2c0dfeefu, 0xca4578a0u, 0x687cf251u, 0x06b46c02u, 0xa4ebe5b3u, 0x43235f64u, 0xe15ad915u,
    0x7f9252c6u, 0x1dc9cc77u, 0xbc014628u, 0x5a38bfd9u, 0xf870398au, 0x96a7b33bu, 0x34df2cecu, 0xd316a69du,
    0x714e204eu, 0x0f8599ffu, 0xadbd13b0u, 0x4bf48d61u, 0xea2c0712u, 0x886380c3u, 0x269afa74u, 0xc4d27425u,
    0x6309edd6u, 0x01416787u, 0x9f78e138u, 0x3db05ae9u, 0xdbe7d49au, 0x7a1f4e4bu, 0x1856c7fcu, 0xb68e41adu,
    0x54c5bb5eu, 0xf2fd350fu, 0x9134aec0u, 0x2f6c2871u, 0xcda3a222u, 0x6bdb1bd3u, 0x0a129584u, 0xa84a0f35u,
    0x468188e6u, 0xe4b90297u, 0x82f07c48u, 0x2127f5f9u, 0xbf5f6faau, 0x5d96e95bu, 0xfbce630cu, 0x9a05dcbdu,
};

static const uint32_t bshim_270_tab5[96] = {
    0x651ec8cfu, 0x03564280u, 0xa18dbc31u, 0x3fc535e2u, 0xddfcaf93u, 0x7c342944u, 0x1a6ba2f5u, 0xb8a31ca6u,
    0x56da9657u, 0xf5121008u, 0x934989b9u, 0x3181036au, 0xcfb87d1bu, 0x6deff6ccu, 0x0c27707du, 0xaa5eea2eu,
    0x489663dfu, 0xe6cddd90u, 0x85055741u, 0x233cd0f2u, 0xc1744aa3u, 0x5fabc454u, 0xfde33e05u, 0x9c1ab7b6u,
    0x3a523167u, 0xd889ab18u, 0x76c124c9u, 0x14f89e7au, 0xb330182bu, 0x516791dcu, 0xef9f0b8du, 0x8dd6853eu,
    0x2c0dfeefu, 0xca4578a0u, 0x687cf251u, 0x06b46c02u, 0xa4ebe5b3u, 0x43235f64u, 0xe15ad915u, 0x7f9252c6u,
    0x1dc9cc77u, 0xbc014628u, 0x5a38bfd9u, 0xf870398au, 0x96a7b33bu, 0x34df2cecu, 0xd316a69du, 0x714e204eu,
    0x0f8599ffu, 0xadbd13b0u, 0x4bf48d61u, 0xea2c0712u, 0x886380c3u, 0x269afa74u, 0xc4d27425u, 0x6309edd6u,
    0x01416787u, 0x9f78e138u, 0x3db05ae9u, 0xdbe7d49au, 0x7a1f4e4bu, 0x1856c7fcu, 0xb68e41adu, 0x54c5bb5eu,
    0xf2fd350fu, 0x9134aec0u, 0x2f6c2871u, 0xcda3a222u, 0x6bdb1bd3u, 0x0a129584u, 0xa84a0f35u, 0x468188e6u,
    0xe4b90297u, 0x82f07c48u, 0x2127f5f9u, 0xbf5f6faau, 0x5d96e95bu, 0xfbce630cu, 0x9a05dcbdu, 0x383d566eu,
    0xd674d01fu, 0x74ac49d0u, 0x12e3c381u, 0xb11b3d32u, 0x4f52b6e3u, 0xed8a3094u, 0x8bc1aa45u, 0x29f923f6u,
    0xc8309da7u, 0x66681758u, 0x049f9109u, 0xa2d70abau, 0x410e846bu, 0xdf45fe1cu, 0x7d7d77cdu, 0x1bb4f17eu,
};

static const uint32_t bshim_270_tab6[96] = {
    0xe6cddd90u, 0x85055741u, 0x233cd0f2u, 0xc1744aa3u, 0x5fabc454u, 0xfde33e05u, 0x9c1ab7b6u, 0x3a523167u,
    0xd889ab18u, 0x76c124c9u, 0x14f89e7au, 0xb330182bu, 0x516791dcu, 0xef9f0b8du, 0x8dd6853eu, 0x2c0dfeefu,
    0xca4578a0u, 0x687cf251u, 0x06b46c02u, 0xa4ebe5b3u, 0x43235f64u, 0xe15ad915u, 0x7f9252c6u, 0x1dc9cc77u,
    0xbc014628u, 0x5a38bfd9u, 0xf870398au, 0x96a7b33bu, 0x34df2cecu, 0xd316a69du, 0x714e204eu, 0x0f8599ffu,
    0xadbd13b0u, 0x4bf48d61u, 0xea2c0712u, 0x886380c3u, 0x269afa74u, 0xc4d27425u, 0x6309edd6u, 0x01416787u,
    0x9f78e138u, 0x3db05ae9u, 0xdbe7d49au, 0x7a1f4e4bu, 0x1856c7fcu, 0xb68e41adu, 0x54c5bb5eu, 0xf2fd350fu,
    0x9134aec0u, 0x2f6c2871u, 0xcda3a222u, 0x6bdb1bd3u, 0x0a129584u, 0xa84a0f35u, 0x468188e6u, 0xe4b90297u,
    0x82f07c48u, 0x2127f5f9u, 0xbf5f6faau, 0x5d96e95bu, 0xfbce630cu, 0x9a05dcbdu, 0x383d566eu, 0xd674d01fu,
    0x74ac49d0u, 0x12e3c381u, 0xb11b3d32u, 0x4f52b6e3u, 0xed8a3094u, 0x8bc1aa45u, 0x29f923f6u, 0xc8309da7u,
    0x66681758u, 0x049f9109u, 0xa2d70abau, 0x410e846bu, 0xdf45fe1cu, 0x7d7d77cdu, 0x1bb4f17eu, 0xb9ec6b2fu,
    0x5823e4e0u, 0xf65b5e91u, 0x9492d842u, 0x32ca51f3u, 0xd101cba4u, 0x6f394555u, 0x0d70bf06u, 0xaba838b7u,
    0x49dfb268u, 0xe8172c19u, 0x864ea5cau, 0x24861f7bu, 0xc2bd992cu, 0x60f512ddu, 0xff2c8c8eu, 0x9d64063fu,
};

static const uint32_t bshim_270_tab7[96] = {
    0x687cf251u, 0x06b46c02u, 0xa4ebe5b3u, 0x43235f64u, 0xe15ad915u, 0x7f9252c6u, 0x1dc9cc77u, 0xbc014628u,
    0x5a38bfd9u, 0xf870398au, 0x96a7b33bu, 0x34df2cecu, 0xd316a69du, 0x714e204eu, 0x0f8599ffu, 0xadbd13b0u,
    0x4bf48d61u, 0xea2c0712u, 0x886380c3u, 0x269afa74u, 0xc4d27425u, 0x6309edd6u, 0x01416787u, 0x9f78e138u,
    0x3db05ae9u, 0xdbe7d49au, 0x7a1f4e4bu, 0x1856c7fcu, 0xb68e41adu, 0x54c5bb5eu, 0xf2fd350fu, 0x9134aec0u,
    0x2f6c2871u, 0xcda3a222u, 0x6bdb1bd3u, 0x0a129584u, 0xa84a0f35u, 0x468188e6u, 0xe4b90297u, 0x82f07c48u,
    0x2127f5f9u, 0xbf5f6faau, 0x5d96e95bu, 0xfbce630cu, 0x9a05dcbdu, 0x383d566eu, 0xd674d01fu, 0x74ac49d0u,
    0x12e3c381u, 0xb11b3d32u, 0x4f52b6e3u, 0xed8a3094u, 0x8bc1aa45u, 0x29f923f6u, 0xc8309da7u, 0x66681758u,
    0x049f9109u, 0xa2d70abau, 0x410e846bu, 0xdf45fe1cu, 0x7d7d77cdu, 0x1bb4f17eu, 0xb9ec6b2fu, 0x5823e4e0u,
    0xf65b5e91u, 0x9492d842u, 0x32ca51f3u, 0xd101cba4u, 0x6f394555u, 0x0d70bf06u, 0xaba838b7u, 0x49dfb268u,
    0xe8172c19u, 0x864ea5cau, 0x24861f7bu, 0xc2bd992cu, 0x60f512ddu, 0xff2c8c8eu, 0x9d64063fu, 0x3b9b7ff0u,
    0xd9d2f9a1u, 0x780a7352u, 0x1641ed03u, 0xb47966b4u, 0x52b0e065u, 0xf0e85a16u, 0x8f1fd3c7u, 0x2d574d78u,
    0xcb8ec729u, 0x69c640dau, 0x07fdba8bu, 0xa635343cu, 0x446cadedu, 0xe2a4279eu, 0x80dba14fu, 0x1f131b00u,
};

struct bshim_270_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_270_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_270_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_270_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_270_reset(struct bshim_270_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0020a012u;
    return 0;
}

