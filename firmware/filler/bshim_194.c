/* bshim_194 -- board support shim generated from the 0194 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_194_tab0[96] = {
    0xb73ab966u, 0x55723317u, 0xf3a9acc8u, 0x91e12679u, 0x3018a02au, 0xce5019dbu, 0x6c87938cu, 0x0abf0d3du,
    0xa8f686eeu, 0x472e009fu, 0xe5657a50u, 0x839cf401u, 0x21d46db2u, 0xc00be763u, 0x5e436114u, 0xfc7adac5u,
    0x9ab25476u, 0x38e9ce27u, 0xd72147d8u, 0x7558c189u, 0x13903b3au, 0xb1c7b4ebu, 0x4fff2e9cu, 0xee36a84du,
    0x8c6e21feu, 0x2aa59bafu, 0xc8dd1560u, 0x67148f11u, 0x054c08c2u, 0xa3838273u, 0x41bafc24u, 0xdff275d5u,
    0x7e29ef86u, 0x1c616937u, 0xba98e2e8u, 0x58d05c99u, 0xf707d64au, 0x953f4ffbu, 0x3376c9acu, 0xd1ae435du,
    0x6fe5bd0eu, 0x0e1d36bfu, 0xac54b070u, 0x4a8c2a21u, 0xe8c3a3d2u, 0x86fb1d83u, 0x25329734u, 0xc36a10e5u,
    0x61a18a96u, 0xffd90447u, 0x9e107df8u, 0x3c47f7a9u, 0xda7f715au, 0x78b6eb0bu, 0x16ee64bcu, 0xb525de6du,
    0x535d581eu, 0xf194d1cfu, 0x8fcc4b80u, 0x2e03c531u, 0xcc3b3ee2u, 0x6a72b893u, 0x08aa3244u, 0xa6e1abf5u,
    0x451925a6u, 0xe3509f57u, 0x81881908u, 0x1fbf92b9u, 0xbdf70c6au, 0x5c2e861bu, 0xfa65ffccu, 0x989d797du,
    0x36d4f32eu, 0xd50c6cdfu, 0x7343e690u, 0x117b6041u, 0xafb2d9f2u, 0x4dea53a3u, 0xec21cd54u, 0x8a594705u,
    0x2890c0b6u, 0xc6c83a67u, 0x64ffb418u, 0x03372dc9u, 0xa16ea77au, 0x3fa6212bu, 0xdddd9adcu, 0x7c15148du,
    0x1a4c8e3eu, 0xb88407efu, 0x56bb81a0u, 0xf4f2fb51u, 0x932a7502u, 0x3161eeb3u, 0xcf996864u, 0x6dd0e215u,
};

static const uint32_t bshim_194_tab1[96] = {
    0x38e9ce27u, 0xd72147d8u, 0x7558c189u, 0x13903b3au, 0xb1c7b4ebu, 0x4fff2e9cu, 0xee36a84du, 0x8c6e21feu,
    0x2aa59bafu, 0xc8dd1560u, 0x67148f11u, 0x054c08c2u, 0xa3838273u, 0x41bafc24u, 0xdff275d5u, 0x7e29ef86u,
    0x1c616937u, 0xba98e2e8u, 0x58d05c99u, 0xf707d64au, 0x953f4ffbu, 0x3376c9acu, 0xd1ae435du, 0x6fe5bd0eu,
    0x0e1d36bfu, 0xac54b070u, 0x4a8c2a21u, 0xe8c3a3d2u, 0x86fb1d83u, 0x25329734u, 0xc36a10e5u, 0x61a18a96u,
    0xffd90447u, 0x9e107df8u, 0x3c47f7a9u, 0xda7f715au, 0x78b6eb0bu, 0x16ee64bcu, 0xb525de6du, 0x535d581eu,
    0xf194d1cfu, 0x8fcc4b80u, 0x2e03c531u, 0xcc3b3ee2u, 0x6a72b893u, 0x08aa3244u, 0xa6e1abf5u, 0x451925a6u,
    0xe3509f57u, 0x81881908u, 0x1fbf92b9u, 0xbdf70c6au, 0x5c2e861bu, 0xfa65ffccu, 0x989d797du, 0x36d4f32eu,
    0xd50c6cdfu, 0x7343e690u, 0x117b6041u, 0xafb2d9f2u, 0x4dea53a3u, 0xec21cd54u, 0x8a594705u, 0x2890c0b6u,
    0xc6c83a67u, 0x64ffb418u, 0x03372dc9u, 0xa16ea77au, 0x3fa6212bu, 0xdddd9adcu, 0x7c15148du, 0x1a4c8e3eu,
    0xb88407efu, 0x56bb81a0u, 0xf4f2fb51u, 0x932a7502u, 0x3161eeb3u, 0xcf996864u, 0x6dd0e215u, 0x0c085bc6u,
    0xaa3fd577u, 0x48774f28u, 0xe6aec8d9u, 0x84e6428au, 0x231dbc3bu, 0xc15535ecu, 0x5f8caf9du, 0xfdc4294eu,
    0x9bfba2ffu, 0x3a331cb0u, 0xd86a9661u, 0x76a21012u, 0x14d989c3u, 0xb3110374u, 0x51487d25u, 0xef7ff6d6u,
};

static const uint32_t bshim_194_tab2[96] = {
    0xba98e2e8u, 0x58d05c99u, 0xf707d64au, 0x953f4ffbu, 0x3376c9acu, 0xd1ae435du, 0x6fe5bd0eu, 0x0e1d36bfu,
    0xac54b070u, 0x4a8c2a21u, 0xe8c3a3d2u, 0x86fb1d83u, 0x25329734u, 0xc36a10e5u, 0x61a18a96u, 0xffd90447u,
    0x9e107df8u, 0x3c47f7a9u, 0xda7f715au, 0x78b6eb0bu, 0x16ee64bcu, 0xb525de6du, 0x535d581eu, 0xf194d1cfu,
    0x8fcc4b80u, 0x2e03c531u, 0xcc3b3ee2u, 0x6a72b893u, 0x08aa3244u, 0xa6e1abf5u, 0x451925a6u, 0xe3509f57u,
    0x81881908u, 0x1fbf92b9u, 0xbdf70c6au, 0x5c2e861bu, 0xfa65ffccu, 0x989d797du, 0x36d4f32eu, 0xd50c6cdfu,
    0x7343e690u, 0x117b6041u, 0xafb2d9f2u, 0x4dea53a3u, 0xec21cd54u, 0x8a594705u, 0x2890c0b6u, 0xc6c83a67u,
    0x64ffb418u, 0x03372dc9u, 0xa16ea77au, 0x3fa6212bu, 0xdddd9adcu, 0x7c15148du, 0x1a4c8e3eu, 0xb88407efu,
    0x56bb81a0u, 0xf4f2fb51u, 0x932a7502u, 0x3161eeb3u, 0xcf996864u, 0x6dd0e215u, 0x0c085bc6u, 0xaa3fd577u,
    0x48774f28u, 0xe6aec8d9u, 0x84e6428au, 0x231dbc3bu, 0xc15535ecu, 0x5f8caf9du, 0xfdc4294eu, 0x9bfba2ffu,
    0x3a331cb0u, 0xd86a9661u, 0x76a21012u, 0x14d989c3u, 0xb3110374u, 0x51487d25u, 0xef7ff6d6u, 0x8db77087u,
    0x2beeea38u, 0xca2663e9u, 0x685ddd9au, 0x0695574bu, 0xa4ccd0fcu, 0x43044aadu, 0xe13bc45eu, 0x7f733e0fu,
    0x1daab7c0u, 0xbbe23171u, 0x5a19ab22u, 0xf85124d3u, 0x96889e84u, 0x34c01835u, 0xd2f791e6u, 0x712f0b97u,
};

static const uint32_t bshim_194_tab3[96] = {
    0x3c47f7a9u, 0xda7f715au, 0x78b6eb0bu, 0x16ee64bcu, 0xb525de6du, 0x535d581eu, 0xf194d1cfu, 0x8fcc4b80u,
    0x2e03c531u, 0xcc3b3ee2u, 0x6a72b893u, 0x08aa3244u, 0xa6e1abf5u, 0x451925a6u, 0xe3509f57u, 0x81881908u,
    0x1fbf92b9u, 0xbdf70c6au, 0x5c2e861bu, 0xfa65ffccu, 0x989d797du, 0x36d4f32eu, 0xd50c6cdfu, 0x7343e690u,
    0x117b6041u, 0xafb2d9f2u, 0x4dea53a3u, 0xec21cd54u, 0x8a594705u, 0x2890c0b6u, 0xc6c83a67u, 0x64ffb418u,
    0x03372dc9u, 0xa16ea77au, 0x3fa6212bu, 0xdddd9adcu, 0x7c15148du, 0x1a4c8e3eu, 0xb88407efu, 0x56bb81a0u,
    0xf4f2fb51u, 0x932a7502u, 0x3161eeb3u, 0xcf996864u, 0x6dd0e215u, 0x0c085bc6u, 0xaa3fd577u, 0x48774f28u,
    0xe6aec8d9u, 0x84e6428au, 0x231dbc3bu, 0xc15535ecu, 0x5f8caf9du, 0xfdc4294eu, 0x9bfba2ffu, 0x3a331cb0u,
    0xd86a9661u, 0x76a21012u, 0x14d989c3u, 0xb3110374u, 0x51487d25u, 0xef7ff6d6u, 0x8db77087u, 0x2beeea38u,
    0xca2663e9u, 0x685ddd9au, 0x0695574bu, 0xa4ccd0fcu, 0x43044aadu, 0xe13bc45eu, 0x7f733e0fu, 0x1daab7c0u,
    0xbbe23171u, 0x5a19ab22u, 0xf85124d3u, 0x96889e84u, 0x34c01835u, 0xd2f791e6u, 0x712f0b97u, 0x0f668548u,
    0xad9dfef9u, 0x4bd578aau, 0xea0cf25bu, 0x88446c0cu, 0x267be5bdu, 0xc4b35f6eu, 0x62ead91fu, 0x012252d0u,
    0x9f59cc81u, 0x3d914632u, 0xdbc8bfe3u, 0x7a003994u, 0x1837b345u, 0xb66f2cf6u, 0x54a6a6a7u, 0xf2de2058u,
};

static const uint32_t bshim_194_tab4[96] = {
    0xbdf70c6au, 0x5c2e861bu, 0xfa65ffccu, 0x989d797du, 0x36d4f32eu, 0xd50c6cdfu, 0x7343e690u, 0x117b6041u,
    0xafb2d9f2u, 0x4dea53a3u, 0xec21cd54u, 0x8a594705u, 0x2890c0b6u, 0xc6c83a67u, 0x64ffb418u, 0x03372dc9u,
    0xa16ea77au, 0x3fa6212bu, 0xdddd9adcu, 0x7c15148du, 0x1a4c8e3eu, 0xb88407efu, 0x56bb81a0u, 0xf4f2fb51u,
    0x932a7502u, 0x3161eeb3u, 0xcf996864u, 0x6dd0e215u, 0x0c085bc6u, 0xaa3fd577u, 0x48774f28u, 0xe6aec8d9u,
    0x84e6428au, 0x231dbc3bu, 0xc15535ecu, 0x5f8caf9du, 0xfdc4294eu, 0x9bfba2ffu, 0x3a331cb0u, 0xd86a9661u,
    0x76a21012u, 0x14d989c3u, 0xb3110374u, 0x51487d25u, 0xef7ff6d6u, 0x8db77087u, 0x2beeea38u, 0xca2663e9u,
    0x685ddd9au, 0x0695574bu, 0xa4ccd0fcu, 0x43044aadu, 0xe13bc45eu, 0x7f733e0fu, 0x1daab7c0u, 0xbbe23171u,
    0x5a19ab22u, 0xf85124d3u, 0x96889e84u, 0x34c01835u, 0xd2f791e6u, 0x712f0b97u, 0x0f668548u, 0xad9dfef9u,
    0x4bd578aau, 0xea0cf25bu, 0x88446c0cu, 0x267be5bdu, 0xc4b35f6eu, 0x62ead91fu, 0x012252d0u, 0x9f59cc81u,
    0x3d914632u, 0xdbc8bfe3u, 0x7a003994u, 0x1837b345u, 0xb66f2cf6u, 0x54a6a6a7u, 0xf2de2058u, 0x91159a09u,
    0x2f4d13bau, 0xcd848d6bu, 0x6bbc071cu, 0x09f380cdu, 0xa82afa7eu, 0x4662742fu, 0xe499ede0u, 0x82d16791u,
    0x2108e142u, 0xbf405af3u, 0x5d77d4a4u, 0xfbaf4e55u, 0x99e6c806u, 0x381e41b7u, 0xd655bb68u, 0x748d3519u,
};

static const uint32_t bshim_194_tab5[96] = {
    0x3fa6212bu, 0xdddd9adcu, 0x7c15148du, 0x1a4c8e3eu, 0xb88407efu, 0x56bb81a0u, 0xf4f2fb51u, 0x932a7502u,
    0x3161eeb3u, 0xcf996864u, 0x6dd0e215u, 0x0c085bc6u, 0xaa3fd577u, 0x48774f28u, 0xe6aec8d9u, 0x84e6428au,
    0x231dbc3bu, 0xc15535ecu, 0x5f8caf9du, 0xfdc4294eu, 0x9bfba2ffu, 0x3a331cb0u, 0xd86a9661u, 0x76a21012u,
    0x14d989c3u, 0xb3110374u, 0x51487d25u, 0xef7ff6d6u, 0x8db77087u, 0x2beeea38u, 0xca2663e9u, 0x685ddd9au,
    0x0695574bu, 0xa4ccd0fcu, 0x43044aadu, 0xe13bc45eu, 0x7f733e0fu, 0x1daab7c0u, 0xbbe23171u, 0x5a19ab22u,
    0xf85124d3u, 0x96889e84u, 0x34c01835u, 0xd2f791e6u, 0x712f0b97u, 0x0f668548u, 0xad9dfef9u, 0x4bd578aau,
    0xea0cf25bu, 0x88446c0cu, 0x267be5bdu, 0xc4b35f6eu, 0x62ead91fu, 0x012252d0u, 0x9f59cc81u, 0x3d914632u,
    0xdbc8bfe3u, 0x7a003994u, 0x1837b345u, 0xb66f2cf6u, 0x54a6a6a7u, 0xf2de2058u, 0x91159a09u, 0x2f4d13bau,
    0xcd848d6bu, 0x6bbc071cu, 0x09f380cdu, 0xa82afa7eu, 0x4662742fu, 0xe499ede0u, 0x82d16791u, 0x2108e142u,
    0xbf405af3u, 0x5d77d4a4u, 0xfbaf4e55u, 0x99e6c806u, 0x381e41b7u, 0xd655bb68u, 0x748d3519u, 0x12c4aecau,
    0xb0fc287bu, 0x4f33a22cu, 0xed6b1bddu, 0x8ba2958eu, 0x29da0f3fu, 0xc81188f0u, 0x664902a1u, 0x04807c52u,
    0xa2b7f603u, 0x40ef6fb4u, 0xdf26e965u, 0x7d5e6316u, 0x1b95dcc7u, 0xb9cd5678u, 0x5804d029u, 0xf63c49dau,
};

static const uint32_t bshim_194_tab6[96] = {
    0xc15535ecu, 0x5f8caf9du, 0xfdc4294eu, 0x9bfba2ffu, 0x3a331cb0u, 0xd86a9661u, 0x76a21012u, 0x14d989c3u,
    0xb3110374u, 0x51487d25u, 0xef7ff6d6u, 0x8db77087u, 0x2beeea38u, 0xca2663e9u, 0x685ddd9au, 0x0695574bu,
    0xa4ccd0fcu, 0x43044aadu, 0xe13bc45eu, 0x7f733e0fu, 0x1daab7c0u, 0xbbe23171u, 0x5a19ab22u, 0xf85124d3u,
    0x96889e84u, 0x34c01835u, 0xd2f791e6u, 0x712f0b97u, 0x0f668548u, 0xad9dfef9u, 0x4bd578aau, 0xea0cf25bu,
    0x88446c0cu, 0x267be5bdu, 0xc4b35f6eu, 0x62ead91fu, 0x012252d0u, 0x9f59cc81u, 0x3d914632u, 0xdbc8bfe3u,
    0x7a003994u, 0x1837b345u, 0xb66f2cf6u, 0x54a6a6a7u, 0xf2de2058u, 0x91159a09u, 0x2f4d13bau, 0xcd848d6bu,
    0x6bbc071cu, 0x09f380cdu, 0xa82afa7eu, 0x4662742fu, 0xe499ede0u, 0x82d16791u, 0x2108e142u, 0xbf405af3u,
    0x5d77d4a4u, 0xfbaf4e55u, 0x99e6c806u, 0x381e41b7u, 0xd655bb68u, 0x748d3519u, 0x12c4aecau, 0xb0fc287bu,
    0x4f33a22cu, 0xed6b1bddu, 0x8ba2958eu, 0x29da0f3fu, 0xc81188f0u, 0x664902a1u, 0x04807c52u, 0xa2b7f603u,
    0x40ef6fb4u, 0xdf26e965u, 0x7d5e6316u, 0x1b95dcc7u, 0xb9cd5678u, 0x5804d029u, 0xf63c49dau, 0x9473c38bu,
    0x32ab3d3cu, 0xd0e2b6edu, 0x6f1a309eu, 0x0d51aa4fu, 0xab892400u, 0x49c09db1u, 0xe7f81762u, 0x862f9113u,
    0x24670ac4u, 0xc29e8475u, 0x60d5fe26u, 0xff0d77d7u, 0x9d44f188u, 0x3b7c6b39u, 0xd9b3e4eau, 0x77eb5e9bu,
};

static const uint32_t bshim_194_tab7[96] = {
    0x43044aadu, 0xe13bc45eu, 0x7f733e0fu, 0x1daab7c0u, 0xbbe23171u, 0x5a19ab22u, 0xf85124d3u, 0x96889e84u,
    0x34c01835u, 0xd2f791e6u, 0x712f0b97u, 0x0f668548u, 0xad9dfef9u, 0x4bd578aau, 0xea0cf25bu, 0x88446c0cu,
    0x267be5bdu, 0xc4b35f6eu, 0x62ead91fu, 0x012252d0u, 0x9f59cc81u, 0x3d914632u, 0xdbc8bfe3u, 0x7a003994u,
    0x1837b345u, 0xb66f2cf6u, 0x54a6a6a7u, 0xf2de2058u, 0x91159a09u, 0x2f4d13bau, 0xcd848d6bu, 0x6bbc071cu,
    0x09f380cdu, 0xa82afa7eu, 0x4662742fu, 0xe499ede0u, 0x82d16791u, 0x2108e142u, 0xbf405af3u, 0x5d77d4a4u,
    0xfbaf4e55u, 0x99e6c806u, 0x381e41b7u, 0xd655bb68u, 0x748d3519u, 0x12c4aecau, 0xb0fc287bu, 0x4f33a22cu,
    0xed6b1bddu, 0x8ba2958eu, 0x29da0f3fu, 0xc81188f0u, 0x664902a1u, 0x04807c52u, 0xa2b7f603u, 0x40ef6fb4u,
    0xdf26e965u, 0x7d5e6316u, 0x1b95dcc7u, 0xb9cd5678u, 0x5804d029u, 0xf63c49dau, 0x9473c38bu, 0x32ab3d3cu,
    0xd0e2b6edu, 0x6f1a309eu, 0x0d51aa4fu, 0xab892400u, 0x49c09db1u, 0xe7f81762u, 0x862f9113u, 0x24670ac4u,
    0xc29e8475u, 0x60d5fe26u, 0xff0d77d7u, 0x9d44f188u, 0x3b7c6b39u, 0xd9b3e4eau, 0x77eb5e9bu, 0x1622d84cu,
    0xb45a51fdu, 0x5291cbaeu, 0xf0c9455fu, 0x8f00bf10u, 0x2d3838c1u, 0xcb6fb272u, 0x69a72c23u, 0x07dea5d4u,
    0xa6161f85u, 0x444d9936u, 0xe28512e7u, 0x80bc8c98u, 0x1ef40649u, 0xbd2b7ffau, 0x5b62f9abu, 0xf99a735cu,
};

struct bshim_194_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_194_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_194_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_194_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_194_reset(struct bshim_194_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0017711eu;
    return 0;
}

