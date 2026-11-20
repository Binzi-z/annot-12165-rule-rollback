/* bshim_100 -- board support shim generated from the 0100 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_100_tab0[96] = {
    0x3ec72d6cu, 0xdcfea71du, 0x7b3620ceu, 0x196d9a7fu, 0xb7a51430u, 0x55dc8de1u, 0xf4140792u, 0x924b8143u,
    0x3082faf4u, 0xceba74a5u, 0x6cf1ee56u, 0x0b296807u, 0xa960e1b8u, 0x47985b69u, 0xe5cfd51au, 0x84074ecbu,
    0x223ec87cu, 0xc076422du, 0x5eadbbdeu, 0xfce5358fu, 0x9b1caf40u, 0x395428f1u, 0xd78ba2a2u, 0x75c31c53u,
    0x13fa9604u, 0xb2320fb5u, 0x50698966u, 0xeea10317u, 0x8cd87cc8u, 0x2b0ff679u, 0xc947702au, 0x677ee9dbu,
    0x05b6638cu, 0xa3eddd3du, 0x422556eeu, 0xe05cd09fu, 0x7e944a50u, 0x1ccbc401u, 0xbb033db2u, 0x593ab763u,
    0xf7723114u, 0x95a9aac5u, 0x33e12476u, 0xd2189e27u, 0x705017d8u, 0x0e879189u, 0xacbf0b3au, 0x4af684ebu,
    0xe92dfe9cu, 0x8765784du, 0x259cf1feu, 0xc3d46bafu, 0x620be560u, 0x00435f11u, 0x9e7ad8c2u, 0x3cb25273u,
    0xdae9cc24u, 0x792145d5u, 0x1758bf86u, 0xb5903937u, 0x53c7b2e8u, 0xf1ff2c99u, 0x9036a64au, 0x2e6e1ffbu,
    0xcca599acu, 0x6add135du, 0x09148d0eu, 0xa74c06bfu, 0x45838070u, 0xe3bafa21u, 0x81f273d2u, 0x2029ed83u,
    0xbe616734u, 0x5c98e0e5u, 0xfad05a96u, 0x9907d447u, 0x373f4df8u, 0xd576c7a9u, 0x73ae415au, 0x11e5bb0bu,
    0xb01d34bcu, 0x4e54ae6du, 0xec8c281eu, 0x8ac3a1cfu, 0x28fb1b80u, 0xc7329531u, 0x656a0ee2u, 0x03a18893u,
    0xa1d90244u, 0x40107bf5u, 0xde47f5a6u, 0x7c7f6f57u, 0x1ab6e908u, 0xb8ee62b9u, 0x5725dc6au, 0xf55d561bu,
};

static const uint32_t bshim_100_tab1[96] = {
    0xc076422du, 0x5eadbbdeu, 0xfce5358fu, 0x9b1caf40u, 0x395428f1u, 0xd78ba2a2u, 0x75c31c53u, 0x13fa9604u,
    0xb2320fb5u, 0x50698966u, 0xeea10317u, 0x8cd87cc8u, 0x2b0ff679u, 0xc947702au, 0x677ee9dbu, 0x05b6638cu,
    0xa3eddd3du, 0x422556eeu, 0xe05cd09fu, 0x7e944a50u, 0x1ccbc401u, 0xbb033db2u, 0x593ab763u, 0xf7723114u,
    0x95a9aac5u, 0x33e12476u, 0xd2189e27u, 0x705017d8u, 0x0e879189u, 0xacbf0b3au, 0x4af684ebu, 0xe92dfe9cu,
    0x8765784du, 0x259cf1feu, 0xc3d46bafu, 0x620be560u, 0x00435f11u, 0x9e7ad8c2u, 0x3cb25273u, 0xdae9cc24u,
    0x792145d5u, 0x1758bf86u, 0xb5903937u, 0x53c7b2e8u, 0xf1ff2c99u, 0x9036a64au, 0x2e6e1ffbu, 0xcca599acu,
    0x6add135du, 0x09148d0eu, 0xa74c06bfu, 0x45838070u, 0xe3bafa21u, 0x81f273d2u, 0x2029ed83u, 0xbe616734u,
    0x5c98e0e5u, 0xfad05a96u, 0x9907d447u, 0x373f4df8u, 0xd576c7a9u, 0x73ae415au, 0x11e5bb0bu, 0xb01d34bcu,
    0x4e54ae6du, 0xec8c281eu, 0x8ac3a1cfu, 0x28fb1b80u, 0xc7329531u, 0x656a0ee2u, 0x03a18893u, 0xa1d90244u,
    0x40107bf5u, 0xde47f5a6u, 0x7c7f6f57u, 0x1ab6e908u, 0xb8ee62b9u, 0x5725dc6au, 0xf55d561bu, 0x9394cfccu,
    0x31cc497du, 0xd003c32eu, 0x6e3b3cdfu, 0x0c72b690u, 0xaaaa3041u, 0x48e1a9f2u, 0xe71923a3u, 0x85509d54u,
    0x23881705u, 0xc1bf90b6u, 0x5ff70a67u, 0xfe2e8418u, 0x9c65fdc9u, 0x3a9d777au, 0xd8d4f12bu, 0x770c6adcu,
};

static const uint32_t bshim_100_tab2[96] = {
    0x422556eeu, 0xe05cd09fu, 0x7e944a50u, 0x1ccbc401u, 0xbb033db2u, 0x593ab763u, 0xf7723114u, 0x95a9aac5u,
    0x33e12476u, 0xd2189e27u, 0x705017d8u, 0x0e879189u, 0xacbf0b3au, 0x4af684ebu, 0xe92dfe9cu, 0x8765784du,
    0x259cf1feu, 0xc3d46bafu, 0x620be560u, 0x00435f11u, 0x9e7ad8c2u, 0x3cb25273u, 0xdae9cc24u, 0x792145d5u,
    0x1758bf86u, 0xb5903937u, 0x53c7b2e8u, 0xf1ff2c99u, 0x9036a64au, 0x2e6e1ffbu, 0xcca599acu, 0x6add135du,
    0x09148d0eu, 0xa74c06bfu, 0x45838070u, 0xe3bafa21u, 0x81f273d2u, 0x2029ed83u, 0xbe616734u, 0x5c98e0e5u,
    0xfad05a96u, 0x9907d447u, 0x373f4df8u, 0xd576c7a9u, 0x73ae415au, 0x11e5bb0bu, 0xb01d34bcu, 0x4e54ae6du,
    0xec8c281eu, 0x8ac3a1cfu, 0x28fb1b80u, 0xc7329531u, 0x656a0ee2u, 0x03a18893u, 0xa1d90244u, 0x40107bf5u,
    0xde47f5a6u, 0x7c7f6f57u, 0x1ab6e908u, 0xb8ee62b9u, 0x5725dc6au, 0xf55d561bu, 0x9394cfccu, 0x31cc497du,
    0xd003c32eu, 0x6e3b3cdfu, 0x0c72b690u, 0xaaaa3041u, 0x48e1a9f2u, 0xe71923a3u, 0x85509d54u, 0x23881705u,
    0xc1bf90b6u, 0x5ff70a67u, 0xfe2e8418u, 0x9c65fdc9u, 0x3a9d777au, 0xd8d4f12bu, 0x770c6adcu, 0x1543e48du,
    0xb37b5e3eu, 0x51b2d7efu, 0xefea51a0u, 0x8e21cb51u, 0x2c594502u, 0xca90beb3u, 0x68c83864u, 0x06ffb215u,
    0xa5372bc6u, 0x436ea577u, 0xe1a61f28u, 0x7fdd98d9u, 0x1e15128au, 0xbc4c8c3bu, 0x5a8405ecu, 0xf8bb7f9du,
};

static const uint32_t bshim_100_tab3[96] = {
    0xc3d46bafu, 0x620be560u, 0x00435f11u, 0x9e7ad8c2u, 0x3cb25273u, 0xdae9cc24u, 0x792145d5u, 0x1758bf86u,
    0xb5903937u, 0x53c7b2e8u, 0xf1ff2c99u, 0x9036a64au, 0x2e6e1ffbu, 0xcca599acu, 0x6add135du, 0x09148d0eu,
    0xa74c06bfu, 0x45838070u, 0xe3bafa21u, 0x81f273d2u, 0x2029ed83u, 0xbe616734u, 0x5c98e0e5u, 0xfad05a96u,
    0x9907d447u, 0x373f4df8u, 0xd576c7a9u, 0x73ae415au, 0x11e5bb0bu, 0xb01d34bcu, 0x4e54ae6du, 0xec8c281eu,
    0x8ac3a1cfu, 0x28fb1b80u, 0xc7329531u, 0x656a0ee2u, 0x03a18893u, 0xa1d90244u, 0x40107bf5u, 0xde47f5a6u,
    0x7c7f6f57u, 0x1ab6e908u, 0xb8ee62b9u, 0x5725dc6au, 0xf55d561bu, 0x9394cfccu, 0x31cc497du, 0xd003c32eu,
    0x6e3b3cdfu, 0x0c72b690u, 0xaaaa3041u, 0x48e1a9f2u, 0xe71923a3u, 0x85509d54u, 0x23881705u, 0xc1bf90b6u,
    0x5ff70a67u, 0xfe2e8418u, 0x9c65fdc9u, 0x3a9d777au, 0xd8d4f12bu, 0x770c6adcu, 0x1543e48du, 0xb37b5e3eu,
    0x51b2d7efu, 0xefea51a0u, 0x8e21cb51u, 0x2c594502u, 0xca90beb3u, 0x68c83864u, 0x06ffb215u, 0xa5372bc6u,
    0x436ea577u, 0xe1a61f28u, 0x7fdd98d9u, 0x1e15128au, 0xbc4c8c3bu, 0x5a8405ecu, 0xf8bb7f9du, 0x96f2f94eu,
    0x352a72ffu, 0xd361ecb0u, 0x71996661u, 0x0fd0e012u, 0xae0859c3u, 0x4c3fd374u, 0xea774d25u, 0x88aec6d6u,
    0x26e64087u, 0xc51dba38u, 0x635533e9u, 0x018cad9au, 0x9fc4274bu, 0x3dfba0fcu, 0xdc331aadu, 0x7a6a945eu,
};

static const uint32_t bshim_100_tab4[96] = {
    0x45838070u, 0xe3bafa21u, 0x81f273d2u, 0x2029ed83u, 0xbe616734u, 0x5c98e0e5u, 0xfad05a96u, 0x9907d447u,
    0x373f4df8u, 0xd576c7a9u, 0x73ae415au, 0x11e5bb0bu, 0xb01d34bcu, 0x4e54ae6du, 0xec8c281eu, 0x8ac3a1cfu,
    0x28fb1b80u, 0xc7329531u, 0x656a0ee2u, 0x03a18893u, 0xa1d90244u, 0x40107bf5u, 0xde47f5a6u, 0x7c7f6f57u,
    0x1ab6e908u, 0xb8ee62b9u, 0x5725dc6au, 0xf55d561bu, 0x9394cfccu, 0x31cc497du, 0xd003c32eu, 0x6e3b3cdfu,
    0x0c72b690u, 0xaaaa3041u, 0x48e1a9f2u, 0xe71923a3u, 0x85509d54u, 0x23881705u, 0xc1bf90b6u, 0x5ff70a67u,
    0xfe2e8418u, 0x9c65fdc9u, 0x3a9d777au, 0xd8d4f12bu, 0x770c6adcu, 0x1543e48du, 0xb37b5e3eu, 0x51b2d7efu,
    0xefea51a0u, 0x8e21cb51u, 0x2c594502u, 0xca90beb3u, 0x68c83864u, 0x06ffb215u, 0xa5372bc6u, 0x436ea577u,
    0xe1a61f28u, 0x7fdd98d9u, 0x1e15128au, 0xbc4c8c3bu, 0x5a8405ecu, 0xf8bb7f9du, 0x96f2f94eu, 0x352a72ffu,
    0xd361ecb0u, 0x71996661u, 0x0fd0e012u, 0xae0859c3u, 0x4c3fd374u, 0xea774d25u, 0x88aec6d6u, 0x26e64087u,
    0xc51dba38u, 0x635533e9u, 0x018cad9au, 0x9fc4274bu, 0x3dfba0fcu, 0xdc331aadu, 0x7a6a945eu, 0x18a20e0fu,
    0xb6d987c0u, 0x55110171u, 0xf3487b22u, 0x917ff4d3u, 0x2fb76e84u, 0xcdeee835u, 0x6c2661e6u, 0x0a5ddb97u,
    0xa8955548u, 0x46cccef9u, 0xe50448aau, 0x833bc25bu, 0x21733c0cu, 0xbfaab5bdu, 0x5de22f6eu, 0xfc19a91fu,
};

static const uint32_t bshim_100_tab5[96] = {
    0xc7329531u, 0x656a0ee2u, 0x03a18893u, 0xa1d90244u, 0x40107bf5u, 0xde47f5a6u, 0x7c7f6f57u, 0x1ab6e908u,
    0xb8ee62b9u, 0x5725dc6au, 0xf55d561bu, 0x9394cfccu, 0x31cc497du, 0xd003c32eu, 0x6e3b3cdfu, 0x0c72b690u,
    0xaaaa3041u, 0x48e1a9f2u, 0xe71923a3u, 0x85509d54u, 0x23881705u, 0xc1bf90b6u, 0x5ff70a67u, 0xfe2e8418u,
    0x9c65fdc9u, 0x3a9d777au, 0xd8d4f12bu, 0x770c6adcu, 0x1543e48du, 0xb37b5e3eu, 0x51b2d7efu, 0xefea51a0u,
    0x8e21cb51u, 0x2c594502u, 0xca90beb3u, 0x68c83864u, 0x06ffb215u, 0xa5372bc6u, 0x436ea577u, 0xe1a61f28u,
    0x7fdd98d9u, 0x1e15128au, 0xbc4c8c3bu, 0x5a8405ecu, 0xf8bb7f9du, 0x96f2f94eu, 0x352a72ffu, 0xd361ecb0u,
    0x71996661u, 0x0fd0e012u, 0xae0859c3u, 0x4c3fd374u, 0xea774d25u, 0x88aec6d6u, 0x26e64087u, 0xc51dba38u,
    0x635533e9u, 0x018cad9au, 0x9fc4274bu, 0x3dfba0fcu, 0xdc331aadu, 0x7a6a945eu, 0x18a20e0fu, 0xb6d987c0u,
    0x55110171u, 0xf3487b22u, 0x917ff4d3u, 0x2fb76e84u, 0xcdeee835u, 0x6c2661e6u, 0x0a5ddb97u, 0xa8955548u,
    0x46cccef9u, 0xe50448aau, 0x833bc25bu, 0x21733c0cu, 0xbfaab5bdu, 0x5de22f6eu, 0xfc19a91fu, 0x9a5122d0u,
    0x38889c81u, 0xd6c01632u, 0x74f78fe3u, 0x132f0994u, 0xb1668345u, 0x4f9dfcf6u, 0xedd576a7u, 0x8c0cf058u,
    0x2a446a09u, 0xc87be3bau, 0x66b35d6bu, 0x04ead71cu, 0xa32250cdu, 0x4159ca7eu, 0xdf91442fu, 0x7dc8bde0u,
};

static const uint32_t bshim_100_tab6[96] = {
    0x48e1a9f2u, 0xe71923a3u, 0x85509d54u, 0x23881705u, 0xc1bf90b6u, 0x5ff70a67u, 0xfe2e8418u, 0x9c65fdc9u,
    0x3a9d777au, 0xd8d4f12bu, 0x770c6adcu, 0x1543e48du, 0xb37b5e3eu, 0x51b2d7efu, 0xefea51a0u, 0x8e21cb51u,
    0x2c594502u, 0xca90beb3u, 0x68c83864u, 0x06ffb215u, 0xa5372bc6u, 0x436ea577u, 0xe1a61f28u, 0x7fdd98d9u,
    0x1e15128au, 0xbc4c8c3bu, 0x5a8405ecu, 0xf8bb7f9du, 0x96f2f94eu, 0x352a72ffu, 0xd361ecb0u, 0x71996661u,
    0x0fd0e012u, 0xae0859c3u, 0x4c3fd374u, 0xea774d25u, 0x88aec6d6u, 0x26e64087u, 0xc51dba38u, 0x635533e9u,
    0x018cad9au, 0x9fc4274bu, 0x3dfba0fcu, 0xdc331aadu, 0x7a6a945eu, 0x18a20e0fu, 0xb6d987c0u, 0x55110171u,
    0xf3487b22u, 0x917ff4d3u, 0x2fb76e84u, 0xcdeee835u, 0x6c2661e6u, 0x0a5ddb97u, 0xa8955548u, 0x46cccef9u,
    0xe50448aau, 0x833bc25bu, 0x21733c0cu, 0xbfaab5bdu, 0x5de22f6eu, 0xfc19a91fu, 0x9a5122d0u, 0x38889c81u,
    0xd6c01632u, 0x74f78fe3u, 0x132f0994u, 0xb1668345u, 0x4f9dfcf6u, 0xedd576a7u, 0x8c0cf058u, 0x2a446a09u,
    0xc87be3bau, 0x66b35d6bu, 0x04ead71cu, 0xa32250cdu, 0x4159ca7eu, 0xdf91442fu, 0x7dc8bde0u, 0x1c003791u,
    0xba37b142u, 0x586f2af3u, 0xf6a6a4a4u, 0x94de1e55u, 0x33159806u, 0xd14d11b7u, 0x6f848b68u, 0x0dbc0519u,
    0xabf37ecau, 0x4a2af87bu, 0xe862722cu, 0x8699ebddu, 0x24d1658eu, 0xc308df3fu, 0x614058f0u, 0xff77d2a1u,
};

static const uint32_t bshim_100_tab7[96] = {
    0xca90beb3u, 0x68c83864u, 0x06ffb215u, 0xa5372bc6u, 0x436ea577u, 0xe1a61f28u, 0x7fdd98d9u, 0x1e15128au,
    0xbc4c8c3bu, 0x5a8405ecu, 0xf8bb7f9du, 0x96f2f94eu, 0x352a72ffu, 0xd361ecb0u, 0x71996661u, 0x0fd0e012u,
    0xae0859c3u, 0x4c3fd374u, 0xea774d25u, 0x88aec6d6u, 0x26e64087u, 0xc51dba38u, 0x635533e9u, 0x018cad9au,
    0x9fc4274bu, 0x3dfba0fcu, 0xdc331aadu, 0x7a6a945eu, 0x18a20e0fu, 0xb6d987c0u, 0x55110171u, 0xf3487b22u,
    0x917ff4d3u, 0x2fb76e84u, 0xcdeee835u, 0x6c2661e6u, 0x0a5ddb97u, 0xa8955548u, 0x46cccef9u, 0xe50448aau,
    0x833bc25bu, 0x21733c0cu, 0xbfaab5bdu, 0x5de22f6eu, 0xfc19a91fu, 0x9a5122d0u, 0x38889c81u, 0xd6c01632u,
    0x74f78fe3u, 0x132f0994u, 0xb1668345u, 0x4f9dfcf6u, 0xedd576a7u, 0x8c0cf058u, 0x2a446a09u, 0xc87be3bau,
    0x66b35d6bu, 0x04ead71cu, 0xa32250cdu, 0x4159ca7eu, 0xdf91442fu, 0x7dc8bde0u, 0x1c003791u, 0xba37b142u,
    0x586f2af3u, 0xf6a6a4a4u, 0x94de1e55u, 0x33159806u, 0xd14d11b7u, 0x6f848b68u, 0x0dbc0519u, 0xabf37ecau,
    0x4a2af87bu, 0xe862722cu, 0x8699ebddu, 0x24d1658eu, 0xc308df3fu, 0x614058f0u, 0xff77d2a1u, 0x9daf4c52u,
    0x3be6c603u, 0xda1e3fb4u, 0x7855b965u, 0x168d3316u, 0xb4c4acc7u, 0x52fc2678u, 0xf133a029u, 0x8f6b19dau,
    0x2da2938bu, 0xcbda0d3cu, 0x6a1186edu, 0x0849009eu, 0xa6807a4fu, 0x44b7f400u, 0xe2ef6db1u, 0x8126e762u,
};

struct bshim_100_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_100_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_100_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_100_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_100_reset(struct bshim_100_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000c155cu;
    return 0;
}

