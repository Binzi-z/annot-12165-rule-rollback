/* bshim_059 -- board support shim generated from the 0059 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_059_tab0[96] = {
    0xc8e108e1u, 0x67188292u, 0x054ffc43u, 0xa38775f4u, 0x41beefa5u, 0xdff66956u, 0x7e2de307u, 0x1c655cb8u,
    0xba9cd669u, 0x58d4501au, 0xf70bc9cbu, 0x9543437cu, 0x337abd2du, 0xd1b236deu, 0x6fe9b08fu, 0x0e212a40u,
    0xac58a3f1u, 0x4a901da2u, 0xe8c79753u, 0x86ff1104u, 0x25368ab5u, 0xc36e0466u, 0x61a57e17u, 0xffdcf7c8u,
    0x9e147179u, 0x3c4beb2au, 0xda8364dbu, 0x78bade8cu, 0x16f2583du, 0xb529d1eeu, 0x53614b9fu, 0xf198c550u,
    0x8fd03f01u, 0x2e07b8b2u, 0xcc3f3263u, 0x6a76ac14u, 0x08ae25c5u, 0xa6e59f76u, 0x451d1927u, 0xe35492d8u,
    0x818c0c89u, 0x1fc3863au, 0xbdfaffebu, 0x5c32799cu, 0xfa69f34du, 0x98a16cfeu, 0x36d8e6afu, 0xd5106060u,
    0x7347da11u, 0x117f53c2u, 0xafb6cd73u, 0x4dee4724u, 0xec25c0d5u, 0x8a5d3a86u, 0x2894b437u, 0xc6cc2de8u,
    0x6503a799u, 0x033b214au, 0xa1729afbu, 0x3faa14acu, 0xdde18e5du, 0x7c19080eu, 0x1a5081bfu, 0xb887fb70u,
    0x56bf7521u, 0xf4f6eed2u, 0x932e6883u, 0x3165e234u, 0xcf9d5be5u, 0x6dd4d596u, 0x0c0c4f47u, 0xaa43c8f8u,
    0x487b42a9u, 0xe6b2bc5au, 0x84ea360bu, 0x2321afbcu, 0xc159296du, 0x5f90a31eu, 0xfdc81ccfu, 0x9bff9680u,
    0x3a371031u, 0xd86e89e2u, 0x76a60393u, 0x14dd7d44u, 0xb314f6f5u, 0x514c70a6u, 0xef83ea57u, 0x8dbb6408u,
    0x2bf2ddb9u, 0xca2a576au, 0x6861d11bu, 0x06994accu, 0xa4d0c47du, 0x43083e2eu, 0xe13fb7dfu, 0x7f773190u,
};

static const uint32_t bshim_059_tab1[96] = {
    0x4a901da2u, 0xe8c79753u, 0x86ff1104u, 0x25368ab5u, 0xc36e0466u, 0x61a57e17u, 0xffdcf7c8u, 0x9e147179u,
    0x3c4beb2au, 0xda8364dbu, 0x78bade8cu, 0x16f2583du, 0xb529d1eeu, 0x53614b9fu, 0xf198c550u, 0x8fd03f01u,
    0x2e07b8b2u, 0xcc3f3263u, 0x6a76ac14u, 0x08ae25c5u, 0xa6e59f76u, 0x451d1927u, 0xe35492d8u, 0x818c0c89u,
    0x1fc3863au, 0xbdfaffebu, 0x5c32799cu, 0xfa69f34du, 0x98a16cfeu, 0x36d8e6afu, 0xd5106060u, 0x7347da11u,
    0x117f53c2u, 0xafb6cd73u, 0x4dee4724u, 0xec25c0d5u, 0x8a5d3a86u, 0x2894b437u, 0xc6cc2de8u, 0x6503a799u,
    0x033b214au, 0xa1729afbu, 0x3faa14acu, 0xdde18e5du, 0x7c19080eu, 0x1a5081bfu, 0xb887fb70u, 0x56bf7521u,
    0xf4f6eed2u, 0x932e6883u, 0x3165e234u, 0xcf9d5be5u, 0x6dd4d596u, 0x0c0c4f47u, 0xaa43c8f8u, 0x487b42a9u,
    0xe6b2bc5au, 0x84ea360bu, 0x2321afbcu, 0xc159296du, 0x5f90a31eu, 0xfdc81ccfu, 0x9bff9680u, 0x3a371031u,
    0xd86e89e2u, 0x76a60393u, 0x14dd7d44u, 0xb314f6f5u, 0x514c70a6u, 0xef83ea57u, 0x8dbb6408u, 0x2bf2ddb9u,
    0xca2a576au, 0x6861d11bu, 0x06994accu, 0xa4d0c47du, 0x43083e2eu, 0xe13fb7dfu, 0x7f773190u, 0x1daeab41u,
    0xbbe624f2u, 0x5a1d9ea3u, 0xf8551854u, 0x968c9205u, 0x34c40bb6u, 0xd2fb8567u, 0x7132ff18u, 0x0f6a78c9u,
    0xada1f27au, 0x4bd96c2bu, 0xea10e5dcu, 0x88485f8du, 0x267fd93eu, 0xc4b752efu, 0x62eecca0u, 0x01264651u,
};

static const uint32_t bshim_059_tab2[96] = {
    0xcc3f3263u, 0x6a76ac14u, 0x08ae25c5u, 0xa6e59f76u, 0x451d1927u, 0xe35492d8u, 0x818c0c89u, 0x1fc3863au,
    0xbdfaffebu, 0x5c32799cu, 0xfa69f34du, 0x98a16cfeu, 0x36d8e6afu, 0xd5106060u, 0x7347da11u, 0x117f53c2u,
    0xafb6cd73u, 0x4dee4724u, 0xec25c0d5u, 0x8a5d3a86u, 0x2894b437u, 0xc6cc2de8u, 0x6503a799u, 0x033b214au,
    0xa1729afbu, 0x3faa14acu, 0xdde18e5du, 0x7c19080eu, 0x1a5081bfu, 0xb887fb70u, 0x56bf7521u, 0xf4f6eed2u,
    0x932e6883u, 0x3165e234u, 0xcf9d5be5u, 0x6dd4d596u, 0x0c0c4f47u, 0xaa43c8f8u, 0x487b42a9u, 0xe6b2bc5au,
    0x84ea360bu, 0x2321afbcu, 0xc159296du, 0x5f90a31eu, 0xfdc81ccfu, 0x9bff9680u, 0x3a371031u, 0xd86e89e2u,
    0x76a60393u, 0x14dd7d44u, 0xb314f6f5u, 0x514c70a6u, 0xef83ea57u, 0x8dbb6408u, 0x2bf2ddb9u, 0xca2a576au,
    0x6861d11bu, 0x06994accu, 0xa4d0c47du, 0x43083e2eu, 0xe13fb7dfu, 0x7f773190u, 0x1daeab41u, 0xbbe624f2u,
    0x5a1d9ea3u, 0xf8551854u, 0x968c9205u, 0x34c40bb6u, 0xd2fb8567u, 0x7132ff18u, 0x0f6a78c9u, 0xada1f27au,
    0x4bd96c2bu, 0xea10e5dcu, 0x88485f8du, 0x267fd93eu, 0xc4b752efu, 0x62eecca0u, 0x01264651u, 0x9f5dc002u,
    0x3d9539b3u, 0xdbccb364u, 0x7a042d15u, 0x183ba6c6u, 0xb6732077u, 0x54aa9a28u, 0xf2e213d9u, 0x91198d8au,
    0x2f51073bu, 0xcd8880ecu, 0x6bbffa9du, 0x09f7744eu, 0xa82eedffu, 0x466667b0u, 0xe49de161u, 0x82d55b12u,
};

static const uint32_t bshim_059_tab3[96] = {
    0x4dee4724u, 0xec25c0d5u, 0x8a5d3a86u, 0x2894b437u, 0xc6cc2de8u, 0x6503a799u, 0x033b214au, 0xa1729afbu,
    0x3faa14acu, 0xdde18e5du, 0x7c19080eu, 0x1a5081bfu, 0xb887fb70u, 0x56bf7521u, 0xf4f6eed2u, 0x932e6883u,
    0x3165e234u, 0xcf9d5be5u, 0x6dd4d596u, 0x0c0c4f47u, 0xaa43c8f8u, 0x487b42a9u, 0xe6b2bc5au, 0x84ea360bu,
    0x2321afbcu, 0xc159296du, 0x5f90a31eu, 0xfdc81ccfu, 0x9bff9680u, 0x3a371031u, 0xd86e89e2u, 0x76a60393u,
    0x14dd7d44u, 0xb314f6f5u, 0x514c70a6u, 0xef83ea57u, 0x8dbb6408u, 0x2bf2ddb9u, 0xca2a576au, 0x6861d11bu,
    0x06994accu, 0xa4d0c47du, 0x43083e2eu, 0xe13fb7dfu, 0x7f773190u, 0x1daeab41u, 0xbbe624f2u, 0x5a1d9ea3u,
    0xf8551854u, 0x968c9205u, 0x34c40bb6u, 0xd2fb8567u, 0x7132ff18u, 0x0f6a78c9u, 0xada1f27au, 0x4bd96c2bu,
    0xea10e5dcu, 0x88485f8du, 0x267fd93eu, 0xc4b752efu, 0x62eecca0u, 0x01264651u, 0x9f5dc002u, 0x3d9539b3u,
    0xdbccb364u, 0x7a042d15u, 0x183ba6c6u, 0xb6732077u, 0x54aa9a28u, 0xf2e213d9u, 0x91198d8au, 0x2f51073bu,
    0xcd8880ecu, 0x6bbffa9du, 0x09f7744eu, 0xa82eedffu, 0x466667b0u, 0xe49de161u, 0x82d55b12u, 0x210cd4c3u,
    0xbf444e74u, 0x5d7bc825u, 0xfbb341d6u, 0x99eabb87u, 0x38223538u, 0xd659aee9u, 0x7491289au, 0x12c8a24bu,
    0xb1001bfcu, 0x4f3795adu, 0xed6f0f5eu, 0x8ba6890fu, 0x29de02c0u, 0xc8157c71u, 0x664cf622u, 0x04846fd3u,
};

static const uint32_t bshim_059_tab4[96] = {
    0xcf9d5be5u, 0x6dd4d596u, 0x0c0c4f47u, 0xaa43c8f8u, 0x487b42a9u, 0xe6b2bc5au, 0x84ea360bu, 0x2321afbcu,
    0xc159296du, 0x5f90a31eu, 0xfdc81ccfu, 0x9bff9680u, 0x3a371031u, 0xd86e89e2u, 0x76a60393u, 0x14dd7d44u,
    0xb314f6f5u, 0x514c70a6u, 0xef83ea57u, 0x8dbb6408u, 0x2bf2ddb9u, 0xca2a576au, 0x6861d11bu, 0x06994accu,
    0xa4d0c47du, 0x43083e2eu, 0xe13fb7dfu, 0x7f773190u, 0x1daeab41u, 0xbbe624f2u, 0x5a1d9ea3u, 0xf8551854u,
    0x968c9205u, 0x34c40bb6u, 0xd2fb8567u, 0x7132ff18u, 0x0f6a78c9u, 0xada1f27au, 0x4bd96c2bu, 0xea10e5dcu,
    0x88485f8du, 0x267fd93eu, 0xc4b752efu, 0x62eecca0u, 0x01264651u, 0x9f5dc002u, 0x3d9539b3u, 0xdbccb364u,
    0x7a042d15u, 0x183ba6c6u, 0xb6732077u, 0x54aa9a28u, 0xf2e213d9u, 0x91198d8au, 0x2f51073bu, 0xcd8880ecu,
    0x6bbffa9du, 0x09f7744eu, 0xa82eedffu, 0x466667b0u, 0xe49de161u, 0x82d55b12u, 0x210cd4c3u, 0xbf444e74u,
    0x5d7bc825u, 0xfbb341d6u, 0x99eabb87u, 0x38223538u, 0xd659aee9u, 0x7491289au, 0x12c8a24bu, 0xb1001bfcu,
    0x4f3795adu, 0xed6f0f5eu, 0x8ba6890fu, 0x29de02c0u, 0xc8157c71u, 0x664cf622u, 0x04846fd3u, 0xa2bbe984u,
    0x40f36335u, 0xdf2adce6u, 0x7d625697u, 0x1b99d048u, 0xb9d149f9u, 0x5808c3aau, 0xf6403d5bu, 0x9477b70cu,
    0x32af30bdu, 0xd0e6aa6eu, 0x6f1e241fu, 0x0d559dd0u, 0xab8d1781u, 0x49c49132u, 0xe7fc0ae3u, 0x86338494u,
};

static const uint32_t bshim_059_tab5[96] = {
    0x514c70a6u, 0xef83ea57u, 0x8dbb6408u, 0x2bf2ddb9u, 0xca2a576au, 0x6861d11bu, 0x06994accu, 0xa4d0c47du,
    0x43083e2eu, 0xe13fb7dfu, 0x7f773190u, 0x1daeab41u, 0xbbe624f2u, 0x5a1d9ea3u, 0xf8551854u, 0x968c9205u,
    0x34c40bb6u, 0xd2fb8567u, 0x7132ff18u, 0x0f6a78c9u, 0xada1f27au, 0x4bd96c2bu, 0xea10e5dcu, 0x88485f8du,
    0x267fd93eu, 0xc4b752efu, 0x62eecca0u, 0x01264651u, 0x9f5dc002u, 0x3d9539b3u, 0xdbccb364u, 0x7a042d15u,
    0x183ba6c6u, 0xb6732077u, 0x54aa9a28u, 0xf2e213d9u, 0x91198d8au, 0x2f51073bu, 0xcd8880ecu, 0x6bbffa9du,
    0x09f7744eu, 0xa82eedffu, 0x466667b0u, 0xe49de161u, 0x82d55b12u, 0x210cd4c3u, 0xbf444e74u, 0x5d7bc825u,
    0xfbb341d6u, 0x99eabb87u, 0x38223538u, 0xd659aee9u, 0x7491289au, 0x12c8a24bu, 0xb1001bfcu, 0x4f3795adu,
    0xed6f0f5eu, 0x8ba6890fu, 0x29de02c0u, 0xc8157c71u, 0x664cf622u, 0x04846fd3u, 0xa2bbe984u, 0x40f36335u,
    0xdf2adce6u, 0x7d625697u, 0x1b99d048u, 0xb9d149f9u, 0x5808c3aau, 0xf6403d5bu, 0x9477b70cu, 0x32af30bdu,
    0xd0e6aa6eu, 0x6f1e241fu, 0x0d559dd0u, 0xab8d1781u, 0x49c49132u, 0xe7fc0ae3u, 0x86338494u, 0x246afe45u,
    0xc2a277f6u, 0x60d9f1a7u, 0xff116b58u, 0x9d48e509u, 0x3b805ebau, 0xd9b7d86bu, 0x77ef521cu, 0x1626cbcdu,
    0xb45e457eu, 0x5295bf2fu, 0xf0cd38e0u, 0x8f04b291u, 0x2d3c2c42u, 0xcb73a5f3u, 0x69ab1fa4u, 0x07e29955u,
};

static const uint32_t bshim_059_tab6[96] = {
    0xd2fb8567u, 0x7132ff18u, 0x0f6a78c9u, 0xada1f27au, 0x4bd96c2bu, 0xea10e5dcu, 0x88485f8du, 0x267fd93eu,
    0xc4b752efu, 0x62eecca0u, 0x01264651u, 0x9f5dc002u, 0x3d9539b3u, 0xdbccb364u, 0x7a042d15u, 0x183ba6c6u,
    0xb6732077u, 0x54aa9a28u, 0xf2e213d9u, 0x91198d8au, 0x2f51073bu, 0xcd8880ecu, 0x6bbffa9du, 0x09f7744eu,
    0xa82eedffu, 0x466667b0u, 0xe49de161u, 0x82d55b12u, 0x210cd4c3u, 0xbf444e74u, 0x5d7bc825u, 0xfbb341d6u,
    0x99eabb87u, 0x38223538u, 0xd659aee9u, 0x7491289au, 0x12c8a24bu, 0xb1001bfcu, 0x4f3795adu, 0xed6f0f5eu,
    0x8ba6890fu, 0x29de02c0u, 0xc8157c71u, 0x664cf622u, 0x04846fd3u, 0xa2bbe984u, 0x40f36335u, 0xdf2adce6u,
    0x7d625697u, 0x1b99d048u, 0xb9d149f9u, 0x5808c3aau, 0xf6403d5bu, 0x9477b70cu, 0x32af30bdu, 0xd0e6aa6eu,
    0x6f1e241fu, 0x0d559dd0u, 0xab8d1781u, 0x49c49132u, 0xe7fc0ae3u, 0x86338494u, 0x246afe45u, 0xc2a277f6u,
    0x60d9f1a7u, 0xff116b58u, 0x9d48e509u, 0x3b805ebau, 0xd9b7d86bu, 0x77ef521cu, 0x1626cbcdu, 0xb45e457eu,
    0x5295bf2fu, 0xf0cd38e0u, 0x8f04b291u, 0x2d3c2c42u, 0xcb73a5f3u, 0x69ab1fa4u, 0x07e29955u, 0xa61a1306u,
    0x44518cb7u, 0xe2890668u, 0x80c08019u, 0x1ef7f9cau, 0xbd2f737bu, 0x5b66ed2cu, 0xf99e66ddu, 0x97d5e08eu,
    0x360d5a3fu, 0xd444d3f0u, 0x727c4da1u, 0x10b3c752u, 0xaeeb4103u, 0x4d22bab4u, 0xeb5a3465u, 0x8991ae16u,
};

static const uint32_t bshim_059_tab7[96] = {
    0x54aa9a28u, 0xf2e213d9u, 0x91198d8au, 0x2f51073bu, 0xcd8880ecu, 0x6bbffa9du, 0x09f7744eu, 0xa82eedffu,
    0x466667b0u, 0xe49de161u, 0x82d55b12u, 0x210cd4c3u, 0xbf444e74u, 0x5d7bc825u, 0xfbb341d6u, 0x99eabb87u,
    0x38223538u, 0xd659aee9u, 0x7491289au, 0x12c8a24bu, 0xb1001bfcu, 0x4f3795adu, 0xed6f0f5eu, 0x8ba6890fu,
    0x29de02c0u, 0xc8157c71u, 0x664cf622u, 0x04846fd3u, 0xa2bbe984u, 0x40f36335u, 0xdf2adce6u, 0x7d625697u,
    0x1b99d048u, 0xb9d149f9u, 0x5808c3aau, 0xf6403d5bu, 0x9477b70cu, 0x32af30bdu, 0xd0e6aa6eu, 0x6f1e241fu,
    0x0d559dd0u, 0xab8d1781u, 0x49c49132u, 0xe7fc0ae3u, 0x86338494u, 0x246afe45u, 0xc2a277f6u, 0x60d9f1a7u,
    0xff116b58u, 0x9d48e509u, 0x3b805ebau, 0xd9b7d86bu, 0x77ef521cu, 0x1626cbcdu, 0xb45e457eu, 0x5295bf2fu,
    0xf0cd38e0u, 0x8f04b291u, 0x2d3c2c42u, 0xcb73a5f3u, 0x69ab1fa4u, 0x07e29955u, 0xa61a1306u, 0x44518cb7u,
    0xe2890668u, 0x80c08019u, 0x1ef7f9cau, 0xbd2f737bu, 0x5b66ed2cu, 0xf99e66ddu, 0x97d5e08eu, 0x360d5a3fu,
    0xd444d3f0u, 0x727c4da1u, 0x10b3c752u, 0xaeeb4103u, 0x4d22bab4u, 0xeb5a3465u, 0x8991ae16u, 0x27c927c7u,
    0xc600a178u, 0x64381b29u, 0x026f94dau, 0xa0a70e8bu, 0x3ede883cu, 0xdd1601edu, 0x7b4d7b9eu, 0x1984f54fu,
    0xb7bc6f00u, 0x55f3e8b1u, 0xf42b6262u, 0x9262dc13u, 0x309a55c4u, 0xced1cf75u, 0x6d094926u, 0x0b40c2d7u,
};

struct bshim_059_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_059_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_059_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_059_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_059_reset(struct bshim_059_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00072115u;
    return 0;
}

