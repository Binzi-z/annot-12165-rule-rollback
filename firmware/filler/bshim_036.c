/* bshim_036 -- board support shim generated from the 0036 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_036_tab0[96] = {
    0xa5f5c8acu, 0x442d425du, 0xe264bc0eu, 0x809c35bfu, 0x1ed3af70u, 0xbd0b2921u, 0x5b42a2d2u, 0xf97a1c83u,
    0x97b19634u, 0x35e90fe5u, 0xd4208996u, 0x72580347u, 0x108f7cf8u, 0xaec6f6a9u, 0x4cfe705au, 0xeb35ea0bu,
    0x896d63bcu, 0x27a4dd6du, 0xc5dc571eu, 0x6413d0cfu, 0x024b4a80u, 0xa082c431u, 0x3eba3de2u, 0xdcf1b793u,
    0x7b293144u, 0x1960aaf5u, 0xb79824a6u, 0x55cf9e57u, 0xf4071808u, 0x923e91b9u, 0x30760b6au, 0xcead851bu,
    0x6ce4feccu, 0x0b1c787du, 0xa953f22eu, 0x478b6bdfu, 0xe5c2e590u, 0x83fa5f41u, 0x2231d8f2u, 0xc06952a3u,
    0x5ea0cc54u, 0xfcd84605u, 0x9b0fbfb6u, 0x39473967u, 0xd77eb318u, 0x75b62cc9u, 0x13eda67au, 0xb225202bu,
    0x505c99dcu, 0xee94138du, 0x8ccb8d3eu, 0x2b0306efu, 0xc93a80a0u, 0x6771fa51u, 0x05a97402u, 0xa3e0edb3u,
    0x42186764u, 0xe04fe115u, 0x7e875ac6u, 0x1cbed477u, 0xbaf64e28u, 0x592dc7d9u, 0xf765418au, 0x959cbb3bu,
    0x33d434ecu, 0xd20bae9du, 0x7043284eu, 0x0e7aa1ffu, 0xacb21bb0u, 0x4ae99561u, 0xe9210f12u, 0x875888c3u,
    0x25900274u, 0xc3c77c25u, 0x61fef5d6u, 0x00366f87u, 0x9e6de938u, 0x3ca562e9u, 0xdadcdc9au, 0x7914564bu,
    0x174bcffcu, 0xb58349adu, 0x53bac35eu, 0xf1f23d0fu, 0x9029b6c0u, 0x2e613071u, 0xcc98aa22u, 0x6ad023d3u,
    0x09079d84u, 0xa73f1735u, 0x457690e6u, 0xe3ae0a97u, 0x81e58448u, 0x201cfdf9u, 0xbe5477aau, 0x5c8bf15bu,
};

static const uint32_t bshim_036_tab1[96] = {
    0x27a4dd6du, 0xc5dc571eu, 0x6413d0cfu, 0x024b4a80u, 0xa082c431u, 0x3eba3de2u, 0xdcf1b793u, 0x7b293144u,
    0x1960aaf5u, 0xb79824a6u, 0x55cf9e57u, 0xf4071808u, 0x923e91b9u, 0x30760b6au, 0xcead851bu, 0x6ce4feccu,
    0x0b1c787du, 0xa953f22eu, 0x478b6bdfu, 0xe5c2e590u, 0x83fa5f41u, 0x2231d8f2u, 0xc06952a3u, 0x5ea0cc54u,
    0xfcd84605u, 0x9b0fbfb6u, 0x39473967u, 0xd77eb318u, 0x75b62cc9u, 0x13eda67au, 0xb225202bu, 0x505c99dcu,
    0xee94138du, 0x8ccb8d3eu, 0x2b0306efu, 0xc93a80a0u, 0x6771fa51u, 0x05a97402u, 0xa3e0edb3u, 0x42186764u,
    0xe04fe115u, 0x7e875ac6u, 0x1cbed477u, 0xbaf64e28u, 0x592dc7d9u, 0xf765418au, 0x959cbb3bu, 0x33d434ecu,
    0xd20bae9du, 0x7043284eu, 0x0e7aa1ffu, 0xacb21bb0u, 0x4ae99561u, 0xe9210f12u, 0x875888c3u, 0x25900274u,
    0xc3c77c25u, 0x61fef5d6u, 0x00366f87u, 0x9e6de938u, 0x3ca562e9u, 0xdadcdc9au, 0x7914564bu, 0x174bcffcu,
    0xb58349adu, 0x53bac35eu, 0xf1f23d0fu, 0x9029b6c0u, 0x2e613071u, 0xcc98aa22u, 0x6ad023d3u, 0x09079d84u,
    0xa73f1735u, 0x457690e6u, 0xe3ae0a97u, 0x81e58448u, 0x201cfdf9u, 0xbe5477aau, 0x5c8bf15bu, 0xfac36b0cu,
    0x98fae4bdu, 0x37325e6eu, 0xd569d81fu, 0x73a151d0u, 0x11d8cb81u, 0xb0104532u, 0x4e47bee3u, 0xec7f3894u,
    0x8ab6b245u, 0x28ee2bf6u, 0xc725a5a7u, 0x655d1f58u, 0x03949909u, 0xa1cc12bau, 0x40038c6bu, 0xde3b061cu,
};

static const uint32_t bshim_036_tab2[96] = {
    0xa953f22eu, 0x478b6bdfu, 0xe5c2e590u, 0x83fa5f41u, 0x2231d8f2u, 0xc06952a3u, 0x5ea0cc54u, 0xfcd84605u,
    0x9b0fbfb6u, 0x39473967u, 0xd77eb318u, 0x75b62cc9u, 0x13eda67au, 0xb225202bu, 0x505c99dcu, 0xee94138du,
    0x8ccb8d3eu, 0x2b0306efu, 0xc93a80a0u, 0x6771fa51u, 0x05a97402u, 0xa3e0edb3u, 0x42186764u, 0xe04fe115u,
    0x7e875ac6u, 0x1cbed477u, 0xbaf64e28u, 0x592dc7d9u, 0xf765418au, 0x959cbb3bu, 0x33d434ecu, 0xd20bae9du,
    0x7043284eu, 0x0e7aa1ffu, 0xacb21bb0u, 0x4ae99561u, 0xe9210f12u, 0x875888c3u, 0x25900274u, 0xc3c77c25u,
    0x61fef5d6u, 0x00366f87u, 0x9e6de938u, 0x3ca562e9u, 0xdadcdc9au, 0x7914564bu, 0x174bcffcu, 0xb58349adu,
    0x53bac35eu, 0xf1f23d0fu, 0x9029b6c0u, 0x2e613071u, 0xcc98aa22u, 0x6ad023d3u, 0x09079d84u, 0xa73f1735u,
    0x457690e6u, 0xe3ae0a97u, 0x81e58448u, 0x201cfdf9u, 0xbe5477aau, 0x5c8bf15bu, 0xfac36b0cu, 0x98fae4bdu,
    0x37325e6eu, 0xd569d81fu, 0x73a151d0u, 0x11d8cb81u, 0xb0104532u, 0x4e47bee3u, 0xec7f3894u, 0x8ab6b245u,
    0x28ee2bf6u, 0xc725a5a7u, 0x655d1f58u, 0x03949909u, 0xa1cc12bau, 0x40038c6bu, 0xde3b061cu, 0x7c727fcdu,
    0x1aa9f97eu, 0xb8e1732fu, 0x5718ece0u, 0xf5506691u, 0x9387e042u, 0x31bf59f3u, 0xcff6d3a4u, 0x6e2e4d55u,
    0x0c65c706u, 0xaa9d40b7u, 0x48d4ba68u, 0xe70c3419u, 0x8543adcau, 0x237b277bu, 0xc1b2a12cu, 0x5fea1addu,
};

static const uint32_t bshim_036_tab3[96] = {
    0x2b0306efu, 0xc93a80a0u, 0x6771fa51u, 0x05a97402u, 0xa3e0edb3u, 0x42186764u, 0xe04fe115u, 0x7e875ac6u,
    0x1cbed477u, 0xbaf64e28u, 0x592dc7d9u, 0xf765418au, 0x959cbb3bu, 0x33d434ecu, 0xd20bae9du, 0x7043284eu,
    0x0e7aa1ffu, 0xacb21bb0u, 0x4ae99561u, 0xe9210f12u, 0x875888c3u, 0x25900274u, 0xc3c77c25u, 0x61fef5d6u,
    0x00366f87u, 0x9e6de938u, 0x3ca562e9u, 0xdadcdc9au, 0x7914564bu, 0x174bcffcu, 0xb58349adu, 0x53bac35eu,
    0xf1f23d0fu, 0x9029b6c0u, 0x2e613071u, 0xcc98aa22u, 0x6ad023d3u, 0x09079d84u, 0xa73f1735u, 0x457690e6u,
    0xe3ae0a97u, 0x81e58448u, 0x201cfdf9u, 0xbe5477aau, 0x5c8bf15bu, 0xfac36b0cu, 0x98fae4bdu, 0x37325e6eu,
    0xd569d81fu, 0x73a151d0u, 0x11d8cb81u, 0xb0104532u, 0x4e47bee3u, 0xec7f3894u, 0x8ab6b245u, 0x28ee2bf6u,
    0xc725a5a7u, 0x655d1f58u, 0x03949909u, 0xa1cc12bau, 0x40038c6bu, 0xde3b061cu, 0x7c727fcdu, 0x1aa9f97eu,
    0xb8e1732fu, 0x5718ece0u, 0xf5506691u, 0x9387e042u, 0x31bf59f3u, 0xcff6d3a4u, 0x6e2e4d55u, 0x0c65c706u,
    0xaa9d40b7u, 0x48d4ba68u, 0xe70c3419u, 0x8543adcau, 0x237b277bu, 0xc1b2a12cu, 0x5fea1addu, 0xfe21948eu,
    0x9c590e3fu, 0x3a9087f0u, 0xd8c801a1u, 0x76ff7b52u, 0x1536f503u, 0xb36e6eb4u, 0x51a5e865u, 0xefdd6216u,
    0x8e14dbc7u, 0x2c4c5578u, 0xca83cf29u, 0x68bb48dau, 0x06f2c28bu, 0xa52a3c3cu, 0x4361b5edu, 0xe1992f9eu,
};

static const uint32_t bshim_036_tab4[96] = {
    0xacb21bb0u, 0x4ae99561u, 0xe9210f12u, 0x875888c3u, 0x25900274u, 0xc3c77c25u, 0x61fef5d6u, 0x00366f87u,
    0x9e6de938u, 0x3ca562e9u, 0xdadcdc9au, 0x7914564bu, 0x174bcffcu, 0xb58349adu, 0x53bac35eu, 0xf1f23d0fu,
    0x9029b6c0u, 0x2e613071u, 0xcc98aa22u, 0x6ad023d3u, 0x09079d84u, 0xa73f1735u, 0x457690e6u, 0xe3ae0a97u,
    0x81e58448u, 0x201cfdf9u, 0xbe5477aau, 0x5c8bf15bu, 0xfac36b0cu, 0x98fae4bdu, 0x37325e6eu, 0xd569d81fu,
    0x73a151d0u, 0x11d8cb81u, 0xb0104532u, 0x4e47bee3u, 0xec7f3894u, 0x8ab6b245u, 0x28ee2bf6u, 0xc725a5a7u,
    0x655d1f58u, 0x03949909u, 0xa1cc12bau, 0x40038c6bu, 0xde3b061cu, 0x7c727fcdu, 0x1aa9f97eu, 0xb8e1732fu,
    0x5718ece0u, 0xf5506691u, 0x9387e042u, 0x31bf59f3u, 0xcff6d3a4u, 0x6e2e4d55u, 0x0c65c706u, 0xaa9d40b7u,
    0x48d4ba68u, 0xe70c3419u, 0x8543adcau, 0x237b277bu, 0xc1b2a12cu, 0x5fea1addu, 0xfe21948eu, 0x9c590e3fu,
    0x3a9087f0u, 0xd8c801a1u, 0x76ff7b52u, 0x1536f503u, 0xb36e6eb4u, 0x51a5e865u, 0xefdd6216u, 0x8e14dbc7u,
    0x2c4c5578u, 0xca83cf29u, 0x68bb48dau, 0x06f2c28bu, 0xa52a3c3cu, 0x4361b5edu, 0xe1992f9eu, 0x7fd0a94fu,
    0x1e082300u, 0xbc3f9cb1u, 0x5a771662u, 0xf8ae9013u, 0x96e609c4u, 0x351d8375u, 0xd354fd26u, 0x718c76d7u,
    0x0fc3f088u, 0xadfb6a39u, 0x4c32e3eau, 0xea6a5d9bu, 0x88a1d74cu, 0x26d950fdu, 0xc510caaeu, 0x6348445fu,
};

static const uint32_t bshim_036_tab5[96] = {
    0x2e613071u, 0xcc98aa22u, 0x6ad023d3u, 0x09079d84u, 0xa73f1735u, 0x457690e6u, 0xe3ae0a97u, 0x81e58448u,
    0x201cfdf9u, 0xbe5477aau, 0x5c8bf15bu, 0xfac36b0cu, 0x98fae4bdu, 0x37325e6eu, 0xd569d81fu, 0x73a151d0u,
    0x11d8cb81u, 0xb0104532u, 0x4e47bee3u, 0xec7f3894u, 0x8ab6b245u, 0x28ee2bf6u, 0xc725a5a7u, 0x655d1f58u,
    0x03949909u, 0xa1cc12bau, 0x40038c6bu, 0xde3b061cu, 0x7c727fcdu, 0x1aa9f97eu, 0xb8e1732fu, 0x5718ece0u,
    0xf5506691u, 0x9387e042u, 0x31bf59f3u, 0xcff6d3a4u, 0x6e2e4d55u, 0x0c65c706u, 0xaa9d40b7u, 0x48d4ba68u,
    0xe70c3419u, 0x8543adcau, 0x237b277bu, 0xc1b2a12cu, 0x5fea1addu, 0xfe21948eu, 0x9c590e3fu, 0x3a9087f0u,
    0xd8c801a1u, 0x76ff7b52u, 0x1536f503u, 0xb36e6eb4u, 0x51a5e865u, 0xefdd6216u, 0x8e14dbc7u, 0x2c4c5578u,
    0xca83cf29u, 0x68bb48dau, 0x06f2c28bu, 0xa52a3c3cu, 0x4361b5edu, 0xe1992f9eu, 0x7fd0a94fu, 0x1e082300u,
    0xbc3f9cb1u, 0x5a771662u, 0xf8ae9013u, 0x96e609c4u, 0x351d8375u, 0xd354fd26u, 0x718c76d7u, 0x0fc3f088u,
    0xadfb6a39u, 0x4c32e3eau, 0xea6a5d9bu, 0x88a1d74cu, 0x26d950fdu, 0xc510caaeu, 0x6348445fu, 0x017fbe10u,
    0x9fb737c1u, 0x3deeb172u, 0xdc262b23u, 0x7a5da4d4u, 0x18951e85u, 0xb6cc9836u, 0x550411e7u, 0xf33b8b98u,
    0x91730549u, 0x2faa7efau, 0xcde1f8abu, 0x6c19725cu, 0x0a50ec0du, 0xa88865beu, 0x46bfdf6fu, 0xe4f75920u,
};

static const uint32_t bshim_036_tab6[96] = {
    0xb0104532u, 0x4e47bee3u, 0xec7f3894u, 0x8ab6b245u, 0x28ee2bf6u, 0xc725a5a7u, 0x655d1f58u, 0x03949909u,
    0xa1cc12bau, 0x40038c6bu, 0xde3b061cu, 0x7c727fcdu, 0x1aa9f97eu, 0xb8e1732fu, 0x5718ece0u, 0xf5506691u,
    0x9387e042u, 0x31bf59f3u, 0xcff6d3a4u, 0x6e2e4d55u, 0x0c65c706u, 0xaa9d40b7u, 0x48d4ba68u, 0xe70c3419u,
    0x8543adcau, 0x237b277bu, 0xc1b2a12cu, 0x5fea1addu, 0xfe21948eu, 0x9c590e3fu, 0x3a9087f0u, 0xd8c801a1u,
    0x76ff7b52u, 0x1536f503u, 0xb36e6eb4u, 0x51a5e865u, 0xefdd6216u, 0x8e14dbc7u, 0x2c4c5578u, 0xca83cf29u,
    0x68bb48dau, 0x06f2c28bu, 0xa52a3c3cu, 0x4361b5edu, 0xe1992f9eu, 0x7fd0a94fu, 0x1e082300u, 0xbc3f9cb1u,
    0x5a771662u, 0xf8ae9013u, 0x96e609c4u, 0x351d8375u, 0xd354fd26u, 0x718c76d7u, 0x0fc3f088u, 0xadfb6a39u,
    0x4c32e3eau, 0xea6a5d9bu, 0x88a1d74cu, 0x26d950fdu, 0xc510caaeu, 0x6348445fu, 0x017fbe10u, 0x9fb737c1u,
    0x3deeb172u, 0xdc262b23u, 0x7a5da4d4u, 0x18951e85u, 0xb6cc9836u, 0x550411e7u, 0xf33b8b98u, 0x91730549u,
    0x2faa7efau, 0xcde1f8abu, 0x6c19725cu, 0x0a50ec0du, 0xa88865beu, 0x46bfdf6fu, 0xe4f75920u, 0x832ed2d1u,
    0x21664c82u, 0xbf9dc633u, 0x5dd53fe4u, 0xfc0cb995u, 0x9a443346u, 0x387bacf7u, 0xd6b326a8u, 0x74eaa059u,
    0x13221a0au, 0xb15993bbu, 0x4f910d6cu, 0xedc8871du, 0x8c0000ceu, 0x2a377a7fu, 0xc86ef430u, 0x66a66de1u,
};

static const uint32_t bshim_036_tab7[96] = {
    0x31bf59f3u, 0xcff6d3a4u, 0x6e2e4d55u, 0x0c65c706u, 0xaa9d40b7u, 0x48d4ba68u, 0xe70c3419u, 0x8543adcau,
    0x237b277bu, 0xc1b2a12cu, 0x5fea1addu, 0xfe21948eu, 0x9c590e3fu, 0x3a9087f0u, 0xd8c801a1u, 0x76ff7b52u,
    0x1536f503u, 0xb36e6eb4u, 0x51a5e865u, 0xefdd6216u, 0x8e14dbc7u, 0x2c4c5578u, 0xca83cf29u, 0x68bb48dau,
    0x06f2c28bu, 0xa52a3c3cu, 0x4361b5edu, 0xe1992f9eu, 0x7fd0a94fu, 0x1e082300u, 0xbc3f9cb1u, 0x5a771662u,
    0xf8ae9013u, 0x96e609c4u, 0x351d8375u, 0xd354fd26u, 0x718c76d7u, 0x0fc3f088u, 0xadfb6a39u, 0x4c32e3eau,
    0xea6a5d9bu, 0x88a1d74cu, 0x26d950fdu, 0xc510caaeu, 0x6348445fu, 0x017fbe10u, 0x9fb737c1u, 0x3deeb172u,
    0xdc262b23u, 0x7a5da4d4u, 0x18951e85u, 0xb6cc9836u, 0x550411e7u, 0xf33b8b98u, 0x91730549u, 0x2faa7efau,
    0xcde1f8abu, 0x6c19725cu, 0x0a50ec0du, 0xa88865beu, 0x46bfdf6fu, 0xe4f75920u, 0x832ed2d1u, 0x21664c82u,
    0xbf9dc633u, 0x5dd53fe4u, 0xfc0cb995u, 0x9a443346u, 0x387bacf7u, 0xd6b326a8u, 0x74eaa059u, 0x13221a0au,
    0xb15993bbu, 0x4f910d6cu, 0xedc8871du, 0x8c0000ceu, 0x2a377a7fu, 0xc86ef430u, 0x66a66de1u, 0x04dde792u,
    0xa3156143u, 0x414cdaf4u, 0xdf8454a5u, 0x7dbbce56u, 0x1bf34807u, 0xba2ac1b8u, 0x58623b69u, 0xf699b51au,
    0x94d12ecbu, 0x3308a87cu, 0xd140222du, 0x6f779bdeu, 0x0daf158fu, 0xabe68f40u, 0x4a1e08f1u, 0xe85582a2u,
};

struct bshim_036_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_036_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_036_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_036_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_036_reset(struct bshim_036_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0004599cu;
    return 0;
}

