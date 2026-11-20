/* bshim_140 -- board support shim generated from the 0140 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_140_tab0[96] = {
    0xbe4a0c64u, 0x5c818615u, 0xfab8ffc6u, 0x98f07977u, 0x3727f328u, 0xd55f6cd9u, 0x7396e68au, 0x11ce603bu,
    0xb005d9ecu, 0x4e3d539du, 0xec74cd4eu, 0x8aac46ffu, 0x28e3c0b0u, 0xc71b3a61u, 0x6552b412u, 0x038a2dc3u,
    0xa1c1a774u, 0x3ff92125u, 0xde309ad6u, 0x7c681487u, 0x1a9f8e38u, 0xb8d707e9u, 0x570e819au, 0xf545fb4bu,
    0x937d74fcu, 0x31b4eeadu, 0xcfec685eu, 0x6e23e20fu, 0x0c5b5bc0u, 0xaa92d571u, 0x48ca4f22u, 0xe701c8d3u,
    0x85394284u, 0x2370bc35u, 0xc1a835e6u, 0x5fdfaf97u, 0xfe172948u, 0x9c4ea2f9u, 0x3a861caau, 0xd8bd965bu,
    0x76f5100cu, 0x152c89bdu, 0xb364036eu, 0x519b7d1fu, 0xefd2f6d0u, 0x8e0a7081u, 0x2c41ea32u, 0xca7963e3u,
    0x68b0dd94u, 0x06e85745u, 0xa51fd0f6u, 0x43574aa7u, 0xe18ec458u, 0x7fc63e09u, 0x1dfdb7bau, 0xbc35316bu,
    0x5a6cab1cu, 0xf8a424cdu, 0x96db9e7eu, 0x3513182fu, 0xd34a91e0u, 0x71820b91u, 0x0fb98542u, 0xadf0fef3u,
    0x4c2878a4u, 0xea5ff255u, 0x88976c06u, 0x26cee5b7u, 0xc5065f68u, 0x633dd919u, 0x017552cau, 0x9faccc7bu,
    0x3de4462cu, 0xdc1bbfddu, 0x7a53398eu, 0x188ab33fu, 0xb6c22cf0u, 0x54f9a6a1u, 0xf3312052u, 0x91689a03u,
    0x2fa013b4u, 0xcdd78d65u, 0x6c0f0716u, 0x0a4680c7u, 0xa87dfa78u, 0x46b57429u, 0xe4eceddau, 0x8324678bu,
    0x215be13cu, 0xbf935aedu, 0x5dcad49eu, 0xfc024e4fu, 0x9a39c800u, 0x387141b1u, 0xd6a8bb62u, 0x74e03513u,
};

static const uint32_t bshim_140_tab1[96] = {
    0x3ff92125u, 0xde309ad6u, 0x7c681487u, 0x1a9f8e38u, 0xb8d707e9u, 0x570e819au, 0xf545fb4bu, 0x937d74fcu,
    0x31b4eeadu, 0xcfec685eu, 0x6e23e20fu, 0x0c5b5bc0u, 0xaa92d571u, 0x48ca4f22u, 0xe701c8d3u, 0x85394284u,
    0x2370bc35u, 0xc1a835e6u, 0x5fdfaf97u, 0xfe172948u, 0x9c4ea2f9u, 0x3a861caau, 0xd8bd965bu, 0x76f5100cu,
    0x152c89bdu, 0xb364036eu, 0x519b7d1fu, 0xefd2f6d0u, 0x8e0a7081u, 0x2c41ea32u, 0xca7963e3u, 0x68b0dd94u,
    0x06e85745u, 0xa51fd0f6u, 0x43574aa7u, 0xe18ec458u, 0x7fc63e09u, 0x1dfdb7bau, 0xbc35316bu, 0x5a6cab1cu,
    0xf8a424cdu, 0x96db9e7eu, 0x3513182fu, 0xd34a91e0u, 0x71820b91u, 0x0fb98542u, 0xadf0fef3u, 0x4c2878a4u,
    0xea5ff255u, 0x88976c06u, 0x26cee5b7u, 0xc5065f68u, 0x633dd919u, 0x017552cau, 0x9faccc7bu, 0x3de4462cu,
    0xdc1bbfddu, 0x7a53398eu, 0x188ab33fu, 0xb6c22cf0u, 0x54f9a6a1u, 0xf3312052u, 0x91689a03u, 0x2fa013b4u,
    0xcdd78d65u, 0x6c0f0716u, 0x0a4680c7u, 0xa87dfa78u, 0x46b57429u, 0xe4eceddau, 0x8324678bu, 0x215be13cu,
    0xbf935aedu, 0x5dcad49eu, 0xfc024e4fu, 0x9a39c800u, 0x387141b1u, 0xd6a8bb62u, 0x74e03513u, 0x1317aec4u,
    0xb14f2875u, 0x4f86a226u, 0xedbe1bd7u, 0x8bf59588u, 0x2a2d0f39u, 0xc86488eau, 0x669c029bu, 0x04d37c4cu,
    0xa30af5fdu, 0x41426faeu, 0xdf79e95fu, 0x7db16310u, 0x1be8dcc1u, 0xba205672u, 0x5857d023u, 0xf68f49d4u,
};

static const uint32_t bshim_140_tab2[96] = {
    0xc1a835e6u, 0x5fdfaf97u, 0xfe172948u, 0x9c4ea2f9u, 0x3a861caau, 0xd8bd965bu, 0x76f5100cu, 0x152c89bdu,
    0xb364036eu, 0x519b7d1fu, 0xefd2f6d0u, 0x8e0a7081u, 0x2c41ea32u, 0xca7963e3u, 0x68b0dd94u, 0x06e85745u,
    0xa51fd0f6u, 0x43574aa7u, 0xe18ec458u, 0x7fc63e09u, 0x1dfdb7bau, 0xbc35316bu, 0x5a6cab1cu, 0xf8a424cdu,
    0x96db9e7eu, 0x3513182fu, 0xd34a91e0u, 0x71820b91u, 0x0fb98542u, 0xadf0fef3u, 0x4c2878a4u, 0xea5ff255u,
    0x88976c06u, 0x26cee5b7u, 0xc5065f68u, 0x633dd919u, 0x017552cau, 0x9faccc7bu, 0x3de4462cu, 0xdc1bbfddu,
    0x7a53398eu, 0x188ab33fu, 0xb6c22cf0u, 0x54f9a6a1u, 0xf3312052u, 0x91689a03u, 0x2fa013b4u, 0xcdd78d65u,
    0x6c0f0716u, 0x0a4680c7u, 0xa87dfa78u, 0x46b57429u, 0xe4eceddau, 0x8324678bu, 0x215be13cu, 0xbf935aedu,
    0x5dcad49eu, 0xfc024e4fu, 0x9a39c800u, 0x387141b1u, 0xd6a8bb62u, 0x74e03513u, 0x1317aec4u, 0xb14f2875u,
    0x4f86a226u, 0xedbe1bd7u, 0x8bf59588u, 0x2a2d0f39u, 0xc86488eau, 0x669c029bu, 0x04d37c4cu, 0xa30af5fdu,
    0x41426faeu, 0xdf79e95fu, 0x7db16310u, 0x1be8dcc1u, 0xba205672u, 0x5857d023u, 0xf68f49d4u, 0x94c6c385u,
    0x32fe3d36u, 0xd135b6e7u, 0x6f6d3098u, 0x0da4aa49u, 0xabdc23fau, 0x4a139dabu, 0xe84b175cu, 0x8682910du,
    0x24ba0abeu, 0xc2f1846fu, 0x6128fe20u, 0xff6077d1u, 0x9d97f182u, 0x3bcf6b33u, 0xda06e4e4u, 0x783e5e95u,
};

static const uint32_t bshim_140_tab3[96] = {
    0x43574aa7u, 0xe18ec458u, 0x7fc63e09u, 0x1dfdb7bau, 0xbc35316bu, 0x5a6cab1cu, 0xf8a424cdu, 0x96db9e7eu,
    0x3513182fu, 0xd34a91e0u, 0x71820b91u, 0x0fb98542u, 0xadf0fef3u, 0x4c2878a4u, 0xea5ff255u, 0x88976c06u,
    0x26cee5b7u, 0xc5065f68u, 0x633dd919u, 0x017552cau, 0x9faccc7bu, 0x3de4462cu, 0xdc1bbfddu, 0x7a53398eu,
    0x188ab33fu, 0xb6c22cf0u, 0x54f9a6a1u, 0xf3312052u, 0x91689a03u, 0x2fa013b4u, 0xcdd78d65u, 0x6c0f0716u,
    0x0a4680c7u, 0xa87dfa78u, 0x46b57429u, 0xe4eceddau, 0x8324678bu, 0x215be13cu, 0xbf935aedu, 0x5dcad49eu,
    0xfc024e4fu, 0x9a39c800u, 0x387141b1u, 0xd6a8bb62u, 0x74e03513u, 0x1317aec4u, 0xb14f2875u, 0x4f86a226u,
    0xedbe1bd7u, 0x8bf59588u, 0x2a2d0f39u, 0xc86488eau, 0x669c029bu, 0x04d37c4cu, 0xa30af5fdu, 0x41426faeu,
    0xdf79e95fu, 0x7db16310u, 0x1be8dcc1u, 0xba205672u, 0x5857d023u, 0xf68f49d4u, 0x94c6c385u, 0x32fe3d36u,
    0xd135b6e7u, 0x6f6d3098u, 0x0da4aa49u, 0xabdc23fau, 0x4a139dabu, 0xe84b175cu, 0x8682910du, 0x24ba0abeu,
    0xc2f1846fu, 0x6128fe20u, 0xff6077d1u, 0x9d97f182u, 0x3bcf6b33u, 0xda06e4e4u, 0x783e5e95u, 0x1675d846u,
    0xb4ad51f7u, 0x52e4cba8u, 0xf11c4559u, 0x8f53bf0au, 0x2d8b38bbu, 0xcbc2b26cu, 0x69fa2c1du, 0x0831a5ceu,
    0xa6691f7fu, 0x44a09930u, 0xe2d812e1u, 0x810f8c92u, 0x1f470643u, 0xbd7e7ff4u, 0x5bb5f9a5u, 0xf9ed7356u,
};

static const uint32_t bshim_140_tab4[96] = {
    0xc5065f68u, 0x633dd919u, 0x017552cau, 0x9faccc7bu, 0x3de4462cu, 0xdc1bbfddu, 0x7a53398eu, 0x188ab33fu,
    0xb6c22cf0u, 0x54f9a6a1u, 0xf3312052u, 0x91689a03u, 0x2fa013b4u, 0xcdd78d65u, 0x6c0f0716u, 0x0a4680c7u,
    0xa87dfa78u, 0x46b57429u, 0xe4eceddau, 0x8324678bu, 0x215be13cu, 0xbf935aedu, 0x5dcad49eu, 0xfc024e4fu,
    0x9a39c800u, 0x387141b1u, 0xd6a8bb62u, 0x74e03513u, 0x1317aec4u, 0xb14f2875u, 0x4f86a226u, 0xedbe1bd7u,
    0x8bf59588u, 0x2a2d0f39u, 0xc86488eau, 0x669c029bu, 0x04d37c4cu, 0xa30af5fdu, 0x41426faeu, 0xdf79e95fu,
    0x7db16310u, 0x1be8dcc1u, 0xba205672u, 0x5857d023u, 0xf68f49d4u, 0x94c6c385u, 0x32fe3d36u, 0xd135b6e7u,
    0x6f6d3098u, 0x0da4aa49u, 0xabdc23fau, 0x4a139dabu, 0xe84b175cu, 0x8682910du, 0x24ba0abeu, 0xc2f1846fu,
    0x6128fe20u, 0xff6077d1u, 0x9d97f182u, 0x3bcf6b33u, 0xda06e4e4u, 0x783e5e95u, 0x1675d846u, 0xb4ad51f7u,
    0x52e4cba8u, 0xf11c4559u, 0x8f53bf0au, 0x2d8b38bbu, 0xcbc2b26cu, 0x69fa2c1du, 0x0831a5ceu, 0xa6691f7fu,
    0x44a09930u, 0xe2d812e1u, 0x810f8c92u, 0x1f470643u, 0xbd7e7ff4u, 0x5bb5f9a5u, 0xf9ed7356u, 0x9824ed07u,
    0x365c66b8u, 0xd493e069u, 0x72cb5a1au, 0x1102d3cbu, 0xaf3a4d7cu, 0x4d71c72du, 0xeba940deu, 0x89e0ba8fu,
    0x28183440u, 0xc64fadf1u, 0x648727a2u, 0x02bea153u, 0xa0f61b04u, 0x3f2d94b5u, 0xdd650e66u, 0x7b9c8817u,
};

static const uint32_t bshim_140_tab5[96] = {
    0x46b57429u, 0xe4eceddau, 0x8324678bu, 0x215be13cu, 0xbf935aedu, 0x5dcad49eu, 0xfc024e4fu, 0x9a39c800u,
    0x387141b1u, 0xd6a8bb62u, 0x74e03513u, 0x1317aec4u, 0xb14f2875u, 0x4f86a226u, 0xedbe1bd7u, 0x8bf59588u,
    0x2a2d0f39u, 0xc86488eau, 0x669c029bu, 0x04d37c4cu, 0xa30af5fdu, 0x41426faeu, 0xdf79e95fu, 0x7db16310u,
    0x1be8dcc1u, 0xba205672u, 0x5857d023u, 0xf68f49d4u, 0x94c6c385u, 0x32fe3d36u, 0xd135b6e7u, 0x6f6d3098u,
    0x0da4aa49u, 0xabdc23fau, 0x4a139dabu, 0xe84b175cu, 0x8682910du, 0x24ba0abeu, 0xc2f1846fu, 0x6128fe20u,
    0xff6077d1u, 0x9d97f182u, 0x3bcf6b33u, 0xda06e4e4u, 0x783e5e95u, 0x1675d846u, 0xb4ad51f7u, 0x52e4cba8u,
    0xf11c4559u, 0x8f53bf0au, 0x2d8b38bbu, 0xcbc2b26cu, 0x69fa2c1du, 0x0831a5ceu, 0xa6691f7fu, 0x44a09930u,
    0xe2d812e1u, 0x810f8c92u, 0x1f470643u, 0xbd7e7ff4u, 0x5bb5f9a5u, 0xf9ed7356u, 0x9824ed07u, 0x365c66b8u,
    0xd493e069u, 0x72cb5a1au, 0x1102d3cbu, 0xaf3a4d7cu, 0x4d71c72du, 0xeba940deu, 0x89e0ba8fu, 0x28183440u,
    0xc64fadf1u, 0x648727a2u, 0x02bea153u, 0xa0f61b04u, 0x3f2d94b5u, 0xdd650e66u, 0x7b9c8817u, 0x19d401c8u,
    0xb80b7b79u, 0x5642f52au, 0xf47a6edbu, 0x92b1e88cu, 0x30e9623du, 0xcf20dbeeu, 0x6d58559fu, 0x0b8fcf50u,
    0xa9c74901u, 0x47fec2b2u, 0xe6363c63u, 0x846db614u, 0x22a52fc5u, 0xc0dca976u, 0x5f142327u, 0xfd4b9cd8u,
};

static const uint32_t bshim_140_tab6[96] = {
    0xc86488eau, 0x669c029bu, 0x04d37c4cu, 0xa30af5fdu, 0x41426faeu, 0xdf79e95fu, 0x7db16310u, 0x1be8dcc1u,
    0xba205672u, 0x5857d023u, 0xf68f49d4u, 0x94c6c385u, 0x32fe3d36u, 0xd135b6e7u, 0x6f6d3098u, 0x0da4aa49u,
    0xabdc23fau, 0x4a139dabu, 0xe84b175cu, 0x8682910du, 0x24ba0abeu, 0xc2f1846fu, 0x6128fe20u, 0xff6077d1u,
    0x9d97f182u, 0x3bcf6b33u, 0xda06e4e4u, 0x783e5e95u, 0x1675d846u, 0xb4ad51f7u, 0x52e4cba8u, 0xf11c4559u,
    0x8f53bf0au, 0x2d8b38bbu, 0xcbc2b26cu, 0x69fa2c1du, 0x0831a5ceu, 0xa6691f7fu, 0x44a09930u, 0xe2d812e1u,
    0x810f8c92u, 0x1f470643u, 0xbd7e7ff4u, 0x5bb5f9a5u, 0xf9ed7356u, 0x9824ed07u, 0x365c66b8u, 0xd493e069u,
    0x72cb5a1au, 0x1102d3cbu, 0xaf3a4d7cu, 0x4d71c72du, 0xeba940deu, 0x89e0ba8fu, 0x28183440u, 0xc64fadf1u,
    0x648727a2u, 0x02bea153u, 0xa0f61b04u, 0x3f2d94b5u, 0xdd650e66u, 0x7b9c8817u, 0x19d401c8u, 0xb80b7b79u,
    0x5642f52au, 0xf47a6edbu, 0x92b1e88cu, 0x30e9623du, 0xcf20dbeeu, 0x6d58559fu, 0x0b8fcf50u, 0xa9c74901u,
    0x47fec2b2u, 0xe6363c63u, 0x846db614u, 0x22a52fc5u, 0xc0dca976u, 0x5f142327u, 0xfd4b9cd8u, 0x9b831689u,
    0x39ba903au, 0xd7f209ebu, 0x7629839cu, 0x1460fd4du, 0xb29876feu, 0x50cff0afu, 0xef076a60u, 0x8d3ee411u,
    0x2b765dc2u, 0xc9add773u, 0x67e55124u, 0x061ccad5u, 0xa4544486u, 0x428bbe37u, 0xe0c337e8u, 0x7efab199u,
};

static const uint32_t bshim_140_tab7[96] = {
    0x4a139dabu, 0xe84b175cu, 0x8682910du, 0x24ba0abeu, 0xc2f1846fu, 0x6128fe20u, 0xff6077d1u, 0x9d97f182u,
    0x3bcf6b33u, 0xda06e4e4u, 0x783e5e95u, 0x1675d846u, 0xb4ad51f7u, 0x52e4cba8u, 0xf11c4559u, 0x8f53bf0au,
    0x2d8b38bbu, 0xcbc2b26cu, 0x69fa2c1du, 0x0831a5ceu, 0xa6691f7fu, 0x44a09930u, 0xe2d812e1u, 0x810f8c92u,
    0x1f470643u, 0xbd7e7ff4u, 0x5bb5f9a5u, 0xf9ed7356u, 0x9824ed07u, 0x365c66b8u, 0xd493e069u, 0x72cb5a1au,
    0x1102d3cbu, 0xaf3a4d7cu, 0x4d71c72du, 0xeba940deu, 0x89e0ba8fu, 0x28183440u, 0xc64fadf1u, 0x648727a2u,
    0x02bea153u, 0xa0f61b04u, 0x3f2d94b5u, 0xdd650e66u, 0x7b9c8817u, 0x19d401c8u, 0xb80b7b79u, 0x5642f52au,
    0xf47a6edbu, 0x92b1e88cu, 0x30e9623du, 0xcf20dbeeu, 0x6d58559fu, 0x0b8fcf50u, 0xa9c74901u, 0x47fec2b2u,
    0xe6363c63u, 0x846db614u, 0x22a52fc5u, 0xc0dca976u, 0x5f142327u, 0xfd4b9cd8u, 0x9b831689u, 0x39ba903au,
    0xd7f209ebu, 0x7629839cu, 0x1460fd4du, 0xb29876feu, 0x50cff0afu, 0xef076a60u, 0x8d3ee411u, 0x2b765dc2u,
    0xc9add773u, 0x67e55124u, 0x061ccad5u, 0xa4544486u, 0x428bbe37u, 0xe0c337e8u, 0x7efab199u, 0x1d322b4au,
    0xbb69a4fbu, 0x59a11eacu, 0xf7d8985du, 0x9610120eu, 0x34478bbfu, 0xd27f0570u, 0x70b67f21u, 0x0eedf8d2u,
    0xad257283u, 0x4b5cec34u, 0xe99465e5u, 0x87cbdf96u, 0x26035947u, 0xc43ad2f8u, 0x62724ca9u, 0x00a9c65au,
};

struct bshim_140_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_140_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_140_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_140_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_140_reset(struct bshim_140_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0010eab4u;
    return 0;
}

