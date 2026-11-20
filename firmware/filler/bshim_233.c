/* bshim_233 -- board support shim generated from the 0233 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_233_tab0[96] = {
    0x405a52cbu, 0xde91cc7cu, 0x7cc9462du, 0x1b00bfdeu, 0xb938398fu, 0x576fb340u, 0xf5a72cf1u, 0x93dea6a2u,
    0x32162053u, 0xd04d9a04u, 0x6e8513b5u, 0x0cbc8d66u, 0xaaf40717u, 0x492b80c8u, 0xe762fa79u, 0x859a742au,
    0x23d1eddbu, 0xc209678cu, 0x6040e13du, 0xfe785aeeu, 0x9cafd49fu, 0x3ae74e50u, 0xd91ec801u, 0x775641b2u,
    0x158dbb63u, 0xb3c53514u, 0x51fcaec5u, 0xf0342876u, 0x8e6ba227u, 0x2ca31bd8u, 0xcada9589u, 0x69120f3au,
    0x074988ebu, 0xa581029cu, 0x43b87c4du, 0xe1eff5feu, 0x80276fafu, 0x1e5ee960u, 0xbc966311u, 0x5acddcc2u,
    0xf9055673u, 0x973cd024u, 0x357449d5u, 0xd3abc386u, 0x71e33d37u, 0x101ab6e8u, 0xae523099u, 0x4c89aa4au,
    0xeac123fbu, 0x88f89dacu, 0x2730175du, 0xc567910eu, 0x639f0abfu, 0x01d68470u, 0xa00dfe21u, 0x3e4577d2u,
    0xdc7cf183u, 0x7ab46b34u, 0x18ebe4e5u, 0xb7235e96u, 0x555ad847u, 0xf39251f8u, 0x91c9cba9u, 0x3001455au,
    0xce38bf0bu, 0x6c7038bcu, 0x0aa7b26du, 0xa8df2c1eu, 0x4716a5cfu, 0xe54e1f80u, 0x83859931u, 0x21bd12e2u,
    0xbff48c93u, 0x5e2c0644u, 0xfc637ff5u, 0x9a9af9a6u, 0x38d27357u, 0xd709ed08u, 0x754166b9u, 0x1378e06au,
    0xb1b05a1bu, 0x4fe7d3ccu, 0xee1f4d7du, 0x8c56c72eu, 0x2a8e40dfu, 0xc8c5ba90u, 0x66fd3441u, 0x0534adf2u,
    0xa36c27a3u, 0x41a3a154u, 0xdfdb1b05u, 0x7e1294b6u, 0x1c4a0e67u, 0xba818818u, 0x58b901c9u, 0xf6f07b7au,
};

static const uint32_t bshim_233_tab1[96] = {
    0xc209678cu, 0x6040e13du, 0xfe785aeeu, 0x9cafd49fu, 0x3ae74e50u, 0xd91ec801u, 0x775641b2u, 0x158dbb63u,
    0xb3c53514u, 0x51fcaec5u, 0xf0342876u, 0x8e6ba227u, 0x2ca31bd8u, 0xcada9589u, 0x69120f3au, 0x074988ebu,
    0xa581029cu, 0x43b87c4du, 0xe1eff5feu, 0x80276fafu, 0x1e5ee960u, 0xbc966311u, 0x5acddcc2u, 0xf9055673u,
    0x973cd024u, 0x357449d5u, 0xd3abc386u, 0x71e33d37u, 0x101ab6e8u, 0xae523099u, 0x4c89aa4au, 0xeac123fbu,
    0x88f89dacu, 0x2730175du, 0xc567910eu, 0x639f0abfu, 0x01d68470u, 0xa00dfe21u, 0x3e4577d2u, 0xdc7cf183u,
    0x7ab46b34u, 0x18ebe4e5u, 0xb7235e96u, 0x555ad847u, 0xf39251f8u, 0x91c9cba9u, 0x3001455au, 0xce38bf0bu,
    0x6c7038bcu, 0x0aa7b26du, 0xa8df2c1eu, 0x4716a5cfu, 0xe54e1f80u, 0x83859931u, 0x21bd12e2u, 0xbff48c93u,
    0x5e2c0644u, 0xfc637ff5u, 0x9a9af9a6u, 0x38d27357u, 0xd709ed08u, 0x754166b9u, 0x1378e06au, 0xb1b05a1bu,
    0x4fe7d3ccu, 0xee1f4d7du, 0x8c56c72eu, 0x2a8e40dfu, 0xc8c5ba90u, 0x66fd3441u, 0x0534adf2u, 0xa36c27a3u,
    0x41a3a154u, 0xdfdb1b05u, 0x7e1294b6u, 0x1c4a0e67u, 0xba818818u, 0x58b901c9u, 0xf6f07b7au, 0x9527f52bu,
    0x335f6edcu, 0xd196e88du, 0x6fce623eu, 0x0e05dbefu, 0xac3d55a0u, 0x4a74cf51u, 0xe8ac4902u, 0x86e3c2b3u,
    0x251b3c64u, 0xc352b615u, 0x618a2fc6u, 0xffc1a977u, 0x9df92328u, 0x3c309cd9u, 0xda68168au, 0x789f903bu,
};

static const uint32_t bshim_233_tab2[96] = {
    0x43b87c4du, 0xe1eff5feu, 0x80276fafu, 0x1e5ee960u, 0xbc966311u, 0x5acddcc2u, 0xf9055673u, 0x973cd024u,
    0x357449d5u, 0xd3abc386u, 0x71e33d37u, 0x101ab6e8u, 0xae523099u, 0x4c89aa4au, 0xeac123fbu, 0x88f89dacu,
    0x2730175du, 0xc567910eu, 0x639f0abfu, 0x01d68470u, 0xa00dfe21u, 0x3e4577d2u, 0xdc7cf183u, 0x7ab46b34u,
    0x18ebe4e5u, 0xb7235e96u, 0x555ad847u, 0xf39251f8u, 0x91c9cba9u, 0x3001455au, 0xce38bf0bu, 0x6c7038bcu,
    0x0aa7b26du, 0xa8df2c1eu, 0x4716a5cfu, 0xe54e1f80u, 0x83859931u, 0x21bd12e2u, 0xbff48c93u, 0x5e2c0644u,
    0xfc637ff5u, 0x9a9af9a6u, 0x38d27357u, 0xd709ed08u, 0x754166b9u, 0x1378e06au, 0xb1b05a1bu, 0x4fe7d3ccu,
    0xee1f4d7du, 0x8c56c72eu, 0x2a8e40dfu, 0xc8c5ba90u, 0x66fd3441u, 0x0534adf2u, 0xa36c27a3u, 0x41a3a154u,
    0xdfdb1b05u, 0x7e1294b6u, 0x1c4a0e67u, 0xba818818u, 0x58b901c9u, 0xf6f07b7au, 0x9527f52bu, 0x335f6edcu,
    0xd196e88du, 0x6fce623eu, 0x0e05dbefu, 0xac3d55a0u, 0x4a74cf51u, 0xe8ac4902u, 0x86e3c2b3u, 0x251b3c64u,
    0xc352b615u, 0x618a2fc6u, 0xffc1a977u, 0x9df92328u, 0x3c309cd9u, 0xda68168au, 0x789f903bu, 0x16d709ecu,
    0xb50e839du, 0x5345fd4eu, 0xf17d76ffu, 0x8fb4f0b0u, 0x2dec6a61u, 0xcc23e412u, 0x6a5b5dc3u, 0x0892d774u,
    0xa6ca5125u, 0x4501cad6u, 0xe3394487u, 0x8170be38u, 0x1fa837e9u, 0xbddfb19au, 0x5c172b4bu, 0xfa4ea4fcu,
};

static const uint32_t bshim_233_tab3[96] = {
    0xc567910eu, 0x639f0abfu, 0x01d68470u, 0xa00dfe21u, 0x3e4577d2u, 0xdc7cf183u, 0x7ab46b34u, 0x18ebe4e5u,
    0xb7235e96u, 0x555ad847u, 0xf39251f8u, 0x91c9cba9u, 0x3001455au, 0xce38bf0bu, 0x6c7038bcu, 0x0aa7b26du,
    0xa8df2c1eu, 0x4716a5cfu, 0xe54e1f80u, 0x83859931u, 0x21bd12e2u, 0xbff48c93u, 0x5e2c0644u, 0xfc637ff5u,
    0x9a9af9a6u, 0x38d27357u, 0xd709ed08u, 0x754166b9u, 0x1378e06au, 0xb1b05a1bu, 0x4fe7d3ccu, 0xee1f4d7du,
    0x8c56c72eu, 0x2a8e40dfu, 0xc8c5ba90u, 0x66fd3441u, 0x0534adf2u, 0xa36c27a3u, 0x41a3a154u, 0xdfdb1b05u,
    0x7e1294b6u, 0x1c4a0e67u, 0xba818818u, 0x58b901c9u, 0xf6f07b7au, 0x9527f52bu, 0x335f6edcu, 0xd196e88du,
    0x6fce623eu, 0x0e05dbefu, 0xac3d55a0u, 0x4a74cf51u, 0xe8ac4902u, 0x86e3c2b3u, 0x251b3c64u, 0xc352b615u,
    0x618a2fc6u, 0xffc1a977u, 0x9df92328u, 0x3c309cd9u, 0xda68168au, 0x789f903bu, 0x16d709ecu, 0xb50e839du,
    0x5345fd4eu, 0xf17d76ffu, 0x8fb4f0b0u, 0x2dec6a61u, 0xcc23e412u, 0x6a5b5dc3u, 0x0892d774u, 0xa6ca5125u,
    0x4501cad6u, 0xe3394487u, 0x8170be38u, 0x1fa837e9u, 0xbddfb19au, 0x5c172b4bu, 0xfa4ea4fcu, 0x98861eadu,
    0x36bd985eu, 0xd4f5120fu, 0x732c8bc0u, 0x11640571u, 0xaf9b7f22u, 0x4dd2f8d3u, 0xec0a7284u, 0x8a41ec35u,
    0x287965e6u, 0xc6b0df97u, 0x64e85948u, 0x031fd2f9u, 0xa1574caau, 0x3f8ec65bu, 0xddc6400cu, 0x7bfdb9bdu,
};

static const uint32_t bshim_233_tab4[96] = {
    0x4716a5cfu, 0xe54e1f80u, 0x83859931u, 0x21bd12e2u, 0xbff48c93u, 0x5e2c0644u, 0xfc637ff5u, 0x9a9af9a6u,
    0x38d27357u, 0xd709ed08u, 0x754166b9u, 0x1378e06au, 0xb1b05a1bu, 0x4fe7d3ccu, 0xee1f4d7du, 0x8c56c72eu,
    0x2a8e40dfu, 0xc8c5ba90u, 0x66fd3441u, 0x0534adf2u, 0xa36c27a3u, 0x41a3a154u, 0xdfdb1b05u, 0x7e1294b6u,
    0x1c4a0e67u, 0xba818818u, 0x58b901c9u, 0xf6f07b7au, 0x9527f52bu, 0x335f6edcu, 0xd196e88du, 0x6fce623eu,
    0x0e05dbefu, 0xac3d55a0u, 0x4a74cf51u, 0xe8ac4902u, 0x86e3c2b3u, 0x251b3c64u, 0xc352b615u, 0x618a2fc6u,
    0xffc1a977u, 0x9df92328u, 0x3c309cd9u, 0xda68168au, 0x789f903bu, 0x16d709ecu, 0xb50e839du, 0x5345fd4eu,
    0xf17d76ffu, 0x8fb4f0b0u, 0x2dec6a61u, 0xcc23e412u, 0x6a5b5dc3u, 0x0892d774u, 0xa6ca5125u, 0x4501cad6u,
    0xe3394487u, 0x8170be38u, 0x1fa837e9u, 0xbddfb19au, 0x5c172b4bu, 0xfa4ea4fcu, 0x98861eadu, 0x36bd985eu,
    0xd4f5120fu, 0x732c8bc0u, 0x11640571u, 0xaf9b7f22u, 0x4dd2f8d3u, 0xec0a7284u, 0x8a41ec35u, 0x287965e6u,
    0xc6b0df97u, 0x64e85948u, 0x031fd2f9u, 0xa1574caau, 0x3f8ec65bu, 0xddc6400cu, 0x7bfdb9bdu, 0x1a35336eu,
    0xb86cad1fu, 0x56a426d0u, 0xf4dba081u, 0x93131a32u, 0x314a93e3u, 0xcf820d94u, 0x6db98745u, 0x0bf100f6u,
    0xaa287aa7u, 0x485ff458u, 0xe6976e09u, 0x84cee7bau, 0x2306616bu, 0xc13ddb1cu, 0x5f7554cdu, 0xfdacce7eu,
};

static const uint32_t bshim_233_tab5[96] = {
    0xc8c5ba90u, 0x66fd3441u, 0x0534adf2u, 0xa36c27a3u, 0x41a3a154u, 0xdfdb1b05u, 0x7e1294b6u, 0x1c4a0e67u,
    0xba818818u, 0x58b901c9u, 0xf6f07b7au, 0x9527f52bu, 0x335f6edcu, 0xd196e88du, 0x6fce623eu, 0x0e05dbefu,
    0xac3d55a0u, 0x4a74cf51u, 0xe8ac4902u, 0x86e3c2b3u, 0x251b3c64u, 0xc352b615u, 0x618a2fc6u, 0xffc1a977u,
    0x9df92328u, 0x3c309cd9u, 0xda68168au, 0x789f903bu, 0x16d709ecu, 0xb50e839du, 0x5345fd4eu, 0xf17d76ffu,
    0x8fb4f0b0u, 0x2dec6a61u, 0xcc23e412u, 0x6a5b5dc3u, 0x0892d774u, 0xa6ca5125u, 0x4501cad6u, 0xe3394487u,
    0x8170be38u, 0x1fa837e9u, 0xbddfb19au, 0x5c172b4bu, 0xfa4ea4fcu, 0x98861eadu, 0x36bd985eu, 0xd4f5120fu,
    0x732c8bc0u, 0x11640571u, 0xaf9b7f22u, 0x4dd2f8d3u, 0xec0a7284u, 0x8a41ec35u, 0x287965e6u, 0xc6b0df97u,
    0x64e85948u, 0x031fd2f9u, 0xa1574caau, 0x3f8ec65bu, 0xddc6400cu, 0x7bfdb9bdu, 0x1a35336eu, 0xb86cad1fu,
    0x56a426d0u, 0xf4dba081u, 0x93131a32u, 0x314a93e3u, 0xcf820d94u, 0x6db98745u, 0x0bf100f6u, 0xaa287aa7u,
    0x485ff458u, 0xe6976e09u, 0x84cee7bau, 0x2306616bu, 0xc13ddb1cu, 0x5f7554cdu, 0xfdacce7eu, 0x9be4482fu,
    0x3a1bc1e0u, 0xd8533b91u, 0x768ab542u, 0x14c22ef3u, 0xb2f9a8a4u, 0x51312255u, 0xef689c06u, 0x8da015b7u,
    0x2bd78f68u, 0xca0f0919u, 0x684682cau, 0x067dfc7bu, 0xa4b5762cu, 0x42ecefddu, 0xe124698eu, 0x7f5be33fu,
};

static const uint32_t bshim_233_tab6[96] = {
    0x4a74cf51u, 0xe8ac4902u, 0x86e3c2b3u, 0x251b3c64u, 0xc352b615u, 0x618a2fc6u, 0xffc1a977u, 0x9df92328u,
    0x3c309cd9u, 0xda68168au, 0x789f903bu, 0x16d709ecu, 0xb50e839du, 0x5345fd4eu, 0xf17d76ffu, 0x8fb4f0b0u,
    0x2dec6a61u, 0xcc23e412u, 0x6a5b5dc3u, 0x0892d774u, 0xa6ca5125u, 0x4501cad6u, 0xe3394487u, 0x8170be38u,
    0x1fa837e9u, 0xbddfb19au, 0x5c172b4bu, 0xfa4ea4fcu, 0x98861eadu, 0x36bd985eu, 0xd4f5120fu, 0x732c8bc0u,
    0x11640571u, 0xaf9b7f22u, 0x4dd2f8d3u, 0xec0a7284u, 0x8a41ec35u, 0x287965e6u, 0xc6b0df97u, 0x64e85948u,
    0x031fd2f9u, 0xa1574caau, 0x3f8ec65bu, 0xddc6400cu, 0x7bfdb9bdu, 0x1a35336eu, 0xb86cad1fu, 0x56a426d0u,
    0xf4dba081u, 0x93131a32u, 0x314a93e3u, 0xcf820d94u, 0x6db98745u, 0x0bf100f6u, 0xaa287aa7u, 0x485ff458u,
    0xe6976e09u, 0x84cee7bau, 0x2306616bu, 0xc13ddb1cu, 0x5f7554cdu, 0xfdacce7eu, 0x9be4482fu, 0x3a1bc1e0u,
    0xd8533b91u, 0x768ab542u, 0x14c22ef3u, 0xb2f9a8a4u, 0x51312255u, 0xef689c06u, 0x8da015b7u, 0x2bd78f68u,
    0xca0f0919u, 0x684682cau, 0x067dfc7bu, 0xa4b5762cu, 0x42ecefddu, 0xe124698eu, 0x7f5be33fu, 0x1d935cf0u,
    0xbbcad6a1u, 0x5a025052u, 0xf839ca03u, 0x967143b4u, 0x34a8bd65u, 0xd2e03716u, 0x7117b0c7u, 0x0f4f2a78u,
    0xad86a429u, 0x4bbe1ddau, 0xe9f5978bu, 0x882d113cu, 0x26648aedu, 0xc49c049eu, 0x62d37e4fu, 0x010af800u,
};

static const uint32_t bshim_233_tab7[96] = {
    0xcc23e412u, 0x6a5b5dc3u, 0x0892d774u, 0xa6ca5125u, 0x4501cad6u, 0xe3394487u, 0x8170be38u, 0x1fa837e9u,
    0xbddfb19au, 0x5c172b4bu, 0xfa4ea4fcu, 0x98861eadu, 0x36bd985eu, 0xd4f5120fu, 0x732c8bc0u, 0x11640571u,
    0xaf9b7f22u, 0x4dd2f8d3u, 0xec0a7284u, 0x8a41ec35u, 0x287965e6u, 0xc6b0df97u, 0x64e85948u, 0x031fd2f9u,
    0xa1574caau, 0x3f8ec65bu, 0xddc6400cu, 0x7bfdb9bdu, 0x1a35336eu, 0xb86cad1fu, 0x56a426d0u, 0xf4dba081u,
    0x93131a32u, 0x314a93e3u, 0xcf820d94u, 0x6db98745u, 0x0bf100f6u, 0xaa287aa7u, 0x485ff458u, 0xe6976e09u,
    0x84cee7bau, 0x2306616bu, 0xc13ddb1cu, 0x5f7554cdu, 0xfdacce7eu, 0x9be4482fu, 0x3a1bc1e0u, 0xd8533b91u,
    0x768ab542u, 0x14c22ef3u, 0xb2f9a8a4u, 0x51312255u, 0xef689c06u, 0x8da015b7u, 0x2bd78f68u, 0xca0f0919u,
    0x684682cau, 0x067dfc7bu, 0xa4b5762cu, 0x42ecefddu, 0xe124698eu, 0x7f5be33fu, 0x1d935cf0u, 0xbbcad6a1u,
    0x5a025052u, 0xf839ca03u, 0x967143b4u, 0x34a8bd65u, 0xd2e03716u, 0x7117b0c7u, 0x0f4f2a78u, 0xad86a429u,
    0x4bbe1ddau, 0xe9f5978bu, 0x882d113cu, 0x26648aedu, 0xc49c049eu, 0x62d37e4fu, 0x010af800u, 0x9f4271b1u,
    0x3d79eb62u, 0xdbb16513u, 0x79e8dec4u, 0x18205875u, 0xb657d226u, 0x548f4bd7u, 0xf2c6c588u, 0x90fe3f39u,
    0x2f35b8eau, 0xcd6d329bu, 0x6ba4ac4cu, 0x09dc25fdu, 0xa8139faeu, 0x464b195fu, 0xe4829310u, 0x82ba0cc1u,
};

struct bshim_233_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_233_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_233_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_233_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_233_reset(struct bshim_233_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001c2787u;
    return 0;
}

