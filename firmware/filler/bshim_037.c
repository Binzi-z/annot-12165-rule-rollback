/* bshim_037 -- board support shim generated from the 0037 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_037_tab0[96] = {
    0x9c590e3fu, 0x3a9087f0u, 0xd8c801a1u, 0x76ff7b52u, 0x1536f503u, 0xb36e6eb4u, 0x51a5e865u, 0xefdd6216u,
    0x8e14dbc7u, 0x2c4c5578u, 0xca83cf29u, 0x68bb48dau, 0x06f2c28bu, 0xa52a3c3cu, 0x4361b5edu, 0xe1992f9eu,
    0x7fd0a94fu, 0x1e082300u, 0xbc3f9cb1u, 0x5a771662u, 0xf8ae9013u, 0x96e609c4u, 0x351d8375u, 0xd354fd26u,
    0x718c76d7u, 0x0fc3f088u, 0xadfb6a39u, 0x4c32e3eau, 0xea6a5d9bu, 0x88a1d74cu, 0x26d950fdu, 0xc510caaeu,
    0x6348445fu, 0x017fbe10u, 0x9fb737c1u, 0x3deeb172u, 0xdc262b23u, 0x7a5da4d4u, 0x18951e85u, 0xb6cc9836u,
    0x550411e7u, 0xf33b8b98u, 0x91730549u, 0x2faa7efau, 0xcde1f8abu, 0x6c19725cu, 0x0a50ec0du, 0xa88865beu,
    0x46bfdf6fu, 0xe4f75920u, 0x832ed2d1u, 0x21664c82u, 0xbf9dc633u, 0x5dd53fe4u, 0xfc0cb995u, 0x9a443346u,
    0x387bacf7u, 0xd6b326a8u, 0x74eaa059u, 0x13221a0au, 0xb15993bbu, 0x4f910d6cu, 0xedc8871du, 0x8c0000ceu,
    0x2a377a7fu, 0xc86ef430u, 0x66a66de1u, 0x04dde792u, 0xa3156143u, 0x414cdaf4u, 0xdf8454a5u, 0x7dbbce56u,
    0x1bf34807u, 0xba2ac1b8u, 0x58623b69u, 0xf699b51au, 0x94d12ecbu, 0x3308a87cu, 0xd140222du, 0x6f779bdeu,
    0x0daf158fu, 0xabe68f40u, 0x4a1e08f1u, 0xe85582a2u, 0x868cfc53u, 0x24c47604u, 0xc2fbefb5u, 0x61336966u,
    0xff6ae317u, 0x9da25cc8u, 0x3bd9d679u, 0xda11502au, 0x7848c9dbu, 0x1680438cu, 0xb4b7bd3du, 0x52ef36eeu,
};

static const uint32_t bshim_037_tab1[96] = {
    0x1e082300u, 0xbc3f9cb1u, 0x5a771662u, 0xf8ae9013u, 0x96e609c4u, 0x351d8375u, 0xd354fd26u, 0x718c76d7u,
    0x0fc3f088u, 0xadfb6a39u, 0x4c32e3eau, 0xea6a5d9bu, 0x88a1d74cu, 0x26d950fdu, 0xc510caaeu, 0x6348445fu,
    0x017fbe10u, 0x9fb737c1u, 0x3deeb172u, 0xdc262b23u, 0x7a5da4d4u, 0x18951e85u, 0xb6cc9836u, 0x550411e7u,
    0xf33b8b98u, 0x91730549u, 0x2faa7efau, 0xcde1f8abu, 0x6c19725cu, 0x0a50ec0du, 0xa88865beu, 0x46bfdf6fu,
    0xe4f75920u, 0x832ed2d1u, 0x21664c82u, 0xbf9dc633u, 0x5dd53fe4u, 0xfc0cb995u, 0x9a443346u, 0x387bacf7u,
    0xd6b326a8u, 0x74eaa059u, 0x13221a0au, 0xb15993bbu, 0x4f910d6cu, 0xedc8871du, 0x8c0000ceu, 0x2a377a7fu,
    0xc86ef430u, 0x66a66de1u, 0x04dde792u, 0xa3156143u, 0x414cdaf4u, 0xdf8454a5u, 0x7dbbce56u, 0x1bf34807u,
    0xba2ac1b8u, 0x58623b69u, 0xf699b51au, 0x94d12ecbu, 0x3308a87cu, 0xd140222du, 0x6f779bdeu, 0x0daf158fu,
    0xabe68f40u, 0x4a1e08f1u, 0xe85582a2u, 0x868cfc53u, 0x24c47604u, 0xc2fbefb5u, 0x61336966u, 0xff6ae317u,
    0x9da25cc8u, 0x3bd9d679u, 0xda11502au, 0x7848c9dbu, 0x1680438cu, 0xb4b7bd3du, 0x52ef36eeu, 0xf126b09fu,
    0x8f5e2a50u, 0x2d95a401u, 0xcbcd1db2u, 0x6a049763u, 0x083c1114u, 0xa6738ac5u, 0x44ab0476u, 0xe2e27e27u,
    0x8119f7d8u, 0x1f517189u, 0xbd88eb3au, 0x5bc064ebu, 0xf9f7de9cu, 0x982f584du, 0x3666d1feu, 0xd49e4bafu,
};

static const uint32_t bshim_037_tab2[96] = {
    0x9fb737c1u, 0x3deeb172u, 0xdc262b23u, 0x7a5da4d4u, 0x18951e85u, 0xb6cc9836u, 0x550411e7u, 0xf33b8b98u,
    0x91730549u, 0x2faa7efau, 0xcde1f8abu, 0x6c19725cu, 0x0a50ec0du, 0xa88865beu, 0x46bfdf6fu, 0xe4f75920u,
    0x832ed2d1u, 0x21664c82u, 0xbf9dc633u, 0x5dd53fe4u, 0xfc0cb995u, 0x9a443346u, 0x387bacf7u, 0xd6b326a8u,
    0x74eaa059u, 0x13221a0au, 0xb15993bbu, 0x4f910d6cu, 0xedc8871du, 0x8c0000ceu, 0x2a377a7fu, 0xc86ef430u,
    0x66a66de1u, 0x04dde792u, 0xa3156143u, 0x414cdaf4u, 0xdf8454a5u, 0x7dbbce56u, 0x1bf34807u, 0xba2ac1b8u,
    0x58623b69u, 0xf699b51au, 0x94d12ecbu, 0x3308a87cu, 0xd140222du, 0x6f779bdeu, 0x0daf158fu, 0xabe68f40u,
    0x4a1e08f1u, 0xe85582a2u, 0x868cfc53u, 0x24c47604u, 0xc2fbefb5u, 0x61336966u, 0xff6ae317u, 0x9da25cc8u,
    0x3bd9d679u, 0xda11502au, 0x7848c9dbu, 0x1680438cu, 0xb4b7bd3du, 0x52ef36eeu, 0xf126b09fu, 0x8f5e2a50u,
    0x2d95a401u, 0xcbcd1db2u, 0x6a049763u, 0x083c1114u, 0xa6738ac5u, 0x44ab0476u, 0xe2e27e27u, 0x8119f7d8u,
    0x1f517189u, 0xbd88eb3au, 0x5bc064ebu, 0xf9f7de9cu, 0x982f584du, 0x3666d1feu, 0xd49e4bafu, 0x72d5c560u,
    0x110d3f11u, 0xaf44b8c2u, 0x4d7c3273u, 0xebb3ac24u, 0x89eb25d5u, 0x28229f86u, 0xc65a1937u, 0x649192e8u,
    0x02c90c99u, 0xa100864au, 0x3f37fffbu, 0xdd6f79acu, 0x7ba6f35du, 0x19de6d0eu, 0xb815e6bfu, 0x564d6070u,
};

static const uint32_t bshim_037_tab3[96] = {
    0x21664c82u, 0xbf9dc633u, 0x5dd53fe4u, 0xfc0cb995u, 0x9a443346u, 0x387bacf7u, 0xd6b326a8u, 0x74eaa059u,
    0x13221a0au, 0xb15993bbu, 0x4f910d6cu, 0xedc8871du, 0x8c0000ceu, 0x2a377a7fu, 0xc86ef430u, 0x66a66de1u,
    0x04dde792u, 0xa3156143u, 0x414cdaf4u, 0xdf8454a5u, 0x7dbbce56u, 0x1bf34807u, 0xba2ac1b8u, 0x58623b69u,
    0xf699b51au, 0x94d12ecbu, 0x3308a87cu, 0xd140222du, 0x6f779bdeu, 0x0daf158fu, 0xabe68f40u, 0x4a1e08f1u,
    0xe85582a2u, 0x868cfc53u, 0x24c47604u, 0xc2fbefb5u, 0x61336966u, 0xff6ae317u, 0x9da25cc8u, 0x3bd9d679u,
    0xda11502au, 0x7848c9dbu, 0x1680438cu, 0xb4b7bd3du, 0x52ef36eeu, 0xf126b09fu, 0x8f5e2a50u, 0x2d95a401u,
    0xcbcd1db2u, 0x6a049763u, 0x083c1114u, 0xa6738ac5u, 0x44ab0476u, 0xe2e27e27u, 0x8119f7d8u, 0x1f517189u,
    0xbd88eb3au, 0x5bc064ebu, 0xf9f7de9cu, 0x982f584du, 0x3666d1feu, 0xd49e4bafu, 0x72d5c560u, 0x110d3f11u,
    0xaf44b8c2u, 0x4d7c3273u, 0xebb3ac24u, 0x89eb25d5u, 0x28229f86u, 0xc65a1937u, 0x649192e8u, 0x02c90c99u,
    0xa100864au, 0x3f37fffbu, 0xdd6f79acu, 0x7ba6f35du, 0x19de6d0eu, 0xb815e6bfu, 0x564d6070u, 0xf484da21u,
    0x92bc53d2u, 0x30f3cd83u, 0xcf2b4734u, 0x6d62c0e5u, 0x0b9a3a96u, 0xa9d1b447u, 0x48092df8u, 0xe640a7a9u,
    0x8478215au, 0x22af9b0bu, 0xc0e714bcu, 0x5f1e8e6du, 0xfd56081eu, 0x9b8d81cfu, 0x39c4fb80u, 0xd7fc7531u,
};

static const uint32_t bshim_037_tab4[96] = {
    0xa3156143u, 0x414cdaf4u, 0xdf8454a5u, 0x7dbbce56u, 0x1bf34807u, 0xba2ac1b8u, 0x58623b69u, 0xf699b51au,
    0x94d12ecbu, 0x3308a87cu, 0xd140222du, 0x6f779bdeu, 0x0daf158fu, 0xabe68f40u, 0x4a1e08f1u, 0xe85582a2u,
    0x868cfc53u, 0x24c47604u, 0xc2fbefb5u, 0x61336966u, 0xff6ae317u, 0x9da25cc8u, 0x3bd9d679u, 0xda11502au,
    0x7848c9dbu, 0x1680438cu, 0xb4b7bd3du, 0x52ef36eeu, 0xf126b09fu, 0x8f5e2a50u, 0x2d95a401u, 0xcbcd1db2u,
    0x6a049763u, 0x083c1114u, 0xa6738ac5u, 0x44ab0476u, 0xe2e27e27u, 0x8119f7d8u, 0x1f517189u, 0xbd88eb3au,
    0x5bc064ebu, 0xf9f7de9cu, 0x982f584du, 0x3666d1feu, 0xd49e4bafu, 0x72d5c560u, 0x110d3f11u, 0xaf44b8c2u,
    0x4d7c3273u, 0xebb3ac24u, 0x89eb25d5u, 0x28229f86u, 0xc65a1937u, 0x649192e8u, 0x02c90c99u, 0xa100864au,
    0x3f37fffbu, 0xdd6f79acu, 0x7ba6f35du, 0x19de6d0eu, 0xb815e6bfu, 0x564d6070u, 0xf484da21u, 0x92bc53d2u,
    0x30f3cd83u, 0xcf2b4734u, 0x6d62c0e5u, 0x0b9a3a96u, 0xa9d1b447u, 0x48092df8u, 0xe640a7a9u, 0x8478215au,
    0x22af9b0bu, 0xc0e714bcu, 0x5f1e8e6du, 0xfd56081eu, 0x9b8d81cfu, 0x39c4fb80u, 0xd7fc7531u, 0x7633eee2u,
    0x146b6893u, 0xb2a2e244u, 0x50da5bf5u, 0xef11d5a6u, 0x8d494f57u, 0x2b80c908u, 0xc9b842b9u, 0x67efbc6au,
    0x0627361bu, 0xa45eafccu, 0x4296297du, 0xe0cda32eu, 0x7f051cdfu, 0x1d3c9690u, 0xbb741041u, 0x59ab89f2u,
};

static const uint32_t bshim_037_tab5[96] = {
    0x24c47604u, 0xc2fbefb5u, 0x61336966u, 0xff6ae317u, 0x9da25cc8u, 0x3bd9d679u, 0xda11502au, 0x7848c9dbu,
    0x1680438cu, 0xb4b7bd3du, 0x52ef36eeu, 0xf126b09fu, 0x8f5e2a50u, 0x2d95a401u, 0xcbcd1db2u, 0x6a049763u,
    0x083c1114u, 0xa6738ac5u, 0x44ab0476u, 0xe2e27e27u, 0x8119f7d8u, 0x1f517189u, 0xbd88eb3au, 0x5bc064ebu,
    0xf9f7de9cu, 0x982f584du, 0x3666d1feu, 0xd49e4bafu, 0x72d5c560u, 0x110d3f11u, 0xaf44b8c2u, 0x4d7c3273u,
    0xebb3ac24u, 0x89eb25d5u, 0x28229f86u, 0xc65a1937u, 0x649192e8u, 0x02c90c99u, 0xa100864au, 0x3f37fffbu,
    0xdd6f79acu, 0x7ba6f35du, 0x19de6d0eu, 0xb815e6bfu, 0x564d6070u, 0xf484da21u, 0x92bc53d2u, 0x30f3cd83u,
    0xcf2b4734u, 0x6d62c0e5u, 0x0b9a3a96u, 0xa9d1b447u, 0x48092df8u, 0xe640a7a9u, 0x8478215au, 0x22af9b0bu,
    0xc0e714bcu, 0x5f1e8e6du, 0xfd56081eu, 0x9b8d81cfu, 0x39c4fb80u, 0xd7fc7531u, 0x7633eee2u, 0x146b6893u,
    0xb2a2e244u, 0x50da5bf5u, 0xef11d5a6u, 0x8d494f57u, 0x2b80c908u, 0xc9b842b9u, 0x67efbc6au, 0x0627361bu,
    0xa45eafccu, 0x4296297du, 0xe0cda32eu, 0x7f051cdfu, 0x1d3c9690u, 0xbb741041u, 0x59ab89f2u, 0xf7e303a3u,
    0x961a7d54u, 0x3451f705u, 0xd28970b6u, 0x70c0ea67u, 0x0ef86418u, 0xad2fddc9u, 0x4b67577au, 0xe99ed12bu,
    0x87d64adcu, 0x260dc48du, 0xc4453e3eu, 0x627cb7efu, 0x00b431a0u, 0x9eebab51u, 0x3d232502u, 0xdb5a9eb3u,
};

static const uint32_t bshim_037_tab6[96] = {
    0xa6738ac5u, 0x44ab0476u, 0xe2e27e27u, 0x8119f7d8u, 0x1f517189u, 0xbd88eb3au, 0x5bc064ebu, 0xf9f7de9cu,
    0x982f584du, 0x3666d1feu, 0xd49e4bafu, 0x72d5c560u, 0x110d3f11u, 0xaf44b8c2u, 0x4d7c3273u, 0xebb3ac24u,
    0x89eb25d5u, 0x28229f86u, 0xc65a1937u, 0x649192e8u, 0x02c90c99u, 0xa100864au, 0x3f37fffbu, 0xdd6f79acu,
    0x7ba6f35du, 0x19de6d0eu, 0xb815e6bfu, 0x564d6070u, 0xf484da21u, 0x92bc53d2u, 0x30f3cd83u, 0xcf2b4734u,
    0x6d62c0e5u, 0x0b9a3a96u, 0xa9d1b447u, 0x48092df8u, 0xe640a7a9u, 0x8478215au, 0x22af9b0bu, 0xc0e714bcu,
    0x5f1e8e6du, 0xfd56081eu, 0x9b8d81cfu, 0x39c4fb80u, 0xd7fc7531u, 0x7633eee2u, 0x146b6893u, 0xb2a2e244u,
    0x50da5bf5u, 0xef11d5a6u, 0x8d494f57u, 0x2b80c908u, 0xc9b842b9u, 0x67efbc6au, 0x0627361bu, 0xa45eafccu,
    0x4296297du, 0xe0cda32eu, 0x7f051cdfu, 0x1d3c9690u, 0xbb741041u, 0x59ab89f2u, 0xf7e303a3u, 0x961a7d54u,
    0x3451f705u, 0xd28970b6u, 0x70c0ea67u, 0x0ef86418u, 0xad2fddc9u, 0x4b67577au, 0xe99ed12bu, 0x87d64adcu,
    0x260dc48du, 0xc4453e3eu, 0x627cb7efu, 0x00b431a0u, 0x9eebab51u, 0x3d232502u, 0xdb5a9eb3u, 0x79921864u,
    0x17c99215u, 0xb6010bc6u, 0x54388577u, 0xf26fff28u, 0x90a778d9u, 0x2edef28au, 0xcd166c3bu, 0x6b4de5ecu,
    0x09855f9du, 0xa7bcd94eu, 0x45f452ffu, 0xe42bccb0u, 0x82634661u, 0x209ac012u, 0xbed239c3u, 0x5d09b374u,
};

static const uint32_t bshim_037_tab7[96] = {
    0x28229f86u, 0xc65a1937u, 0x649192e8u, 0x02c90c99u, 0xa100864au, 0x3f37fffbu, 0xdd6f79acu, 0x7ba6f35du,
    0x19de6d0eu, 0xb815e6bfu, 0x564d6070u, 0xf484da21u, 0x92bc53d2u, 0x30f3cd83u, 0xcf2b4734u, 0x6d62c0e5u,
    0x0b9a3a96u, 0xa9d1b447u, 0x48092df8u, 0xe640a7a9u, 0x8478215au, 0x22af9b0bu, 0xc0e714bcu, 0x5f1e8e6du,
    0xfd56081eu, 0x9b8d81cfu, 0x39c4fb80u, 0xd7fc7531u, 0x7633eee2u, 0x146b6893u, 0xb2a2e244u, 0x50da5bf5u,
    0xef11d5a6u, 0x8d494f57u, 0x2b80c908u, 0xc9b842b9u, 0x67efbc6au, 0x0627361bu, 0xa45eafccu, 0x4296297du,
    0xe0cda32eu, 0x7f051cdfu, 0x1d3c9690u, 0xbb741041u, 0x59ab89f2u, 0xf7e303a3u, 0x961a7d54u, 0x3451f705u,
    0xd28970b6u, 0x70c0ea67u, 0x0ef86418u, 0xad2fddc9u, 0x4b67577au, 0xe99ed12bu, 0x87d64adcu, 0x260dc48du,
    0xc4453e3eu, 0x627cb7efu, 0x00b431a0u, 0x9eebab51u, 0x3d232502u, 0xdb5a9eb3u, 0x79921864u, 0x17c99215u,
    0xb6010bc6u, 0x54388577u, 0xf26fff28u, 0x90a778d9u, 0x2edef28au, 0xcd166c3bu, 0x6b4de5ecu, 0x09855f9du,
    0xa7bcd94eu, 0x45f452ffu, 0xe42bccb0u, 0x82634661u, 0x209ac012u, 0xbed239c3u, 0x5d09b374u, 0xfb412d25u,
    0x9978a6d6u, 0x37b02087u, 0xd5e79a38u, 0x741f13e9u, 0x12568d9au, 0xb08e074bu, 0x4ec580fcu, 0xecfcfaadu,
    0x8b34745eu, 0x296bee0fu, 0xc7a367c0u, 0x65dae171u, 0x04125b22u, 0xa249d4d3u, 0x40814e84u, 0xdeb8c835u,
};

struct bshim_037_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_037_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_037_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_037_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_037_reset(struct bshim_037_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0004788bu;
    return 0;
}

