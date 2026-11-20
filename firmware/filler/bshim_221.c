/* bshim_221 -- board support shim generated from the 0221 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_221_tab0[96] = {
    0xb3b30fe7u, 0x51ea8998u, 0xf0220349u, 0x8e597cfau, 0x2c90f6abu, 0xcac8705cu, 0x68ffea0du, 0x073763beu,
    0xa56edd6fu, 0x43a65720u, 0xe1ddd0d1u, 0x80154a82u, 0x1e4cc433u, 0xbc843de4u, 0x5abbb795u, 0xf8f33146u,
    0x972aaaf7u, 0x356224a8u, 0xd3999e59u, 0x71d1180au, 0x100891bbu, 0xae400b6cu, 0x4c77851du, 0xeaaefeceu,
    0x88e6787fu, 0x271df230u, 0xc5556be1u, 0x638ce592u, 0x01c45f43u, 0x9ffbd8f4u, 0x3e3352a5u, 0xdc6acc56u,
    0x7aa24607u, 0x18d9bfb8u, 0xb7113969u, 0x5548b31au, 0xf3802ccbu, 0x91b7a67cu, 0x2fef202du, 0xce2699deu,
    0x6c5e138fu, 0x0a958d40u, 0xa8cd06f1u, 0x470480a2u, 0xe53bfa53u, 0x83737404u, 0x21aaedb5u, 0xbfe26766u,
    0x5e19e117u, 0xfc515ac8u, 0x9a88d479u, 0x38c04e2au, 0xd6f7c7dbu, 0x752f418cu, 0x1366bb3du, 0xb19e34eeu,
    0x4fd5ae9fu, 0xee0d2850u, 0x8c44a201u, 0x2a7c1bb2u, 0xc8b39563u, 0x66eb0f14u, 0x052288c5u, 0xa35a0276u,
    0x41917c27u, 0xdfc8f5d8u, 0x7e006f89u, 0x1c37e93au, 0xba6f62ebu, 0x58a6dc9cu, 0xf6de564du, 0x9515cffeu,
    0x334d49afu, 0xd184c360u, 0x6fbc3d11u, 0x0df3b6c2u, 0xac2b3073u, 0x4a62aa24u, 0xe89a23d5u, 0x86d19d86u,
    0x25091737u, 0xc34090e8u, 0x61780a99u, 0xffaf844au, 0x9de6fdfbu, 0x3c1e77acu, 0xda55f15du, 0x788d6b0eu,
    0x16c4e4bfu, 0xb4fc5e70u, 0x5333d821u, 0xf16b51d2u, 0x8fa2cb83u, 0x2dda4534u, 0xcc11bee5u, 0x6a493896u,
};

static const uint32_t bshim_221_tab1[96] = {
    0x356224a8u, 0xd3999e59u, 0x71d1180au, 0x100891bbu, 0xae400b6cu, 0x4c77851du, 0xeaaefeceu, 0x88e6787fu,
    0x271df230u, 0xc5556be1u, 0x638ce592u, 0x01c45f43u, 0x9ffbd8f4u, 0x3e3352a5u, 0xdc6acc56u, 0x7aa24607u,
    0x18d9bfb8u, 0xb7113969u, 0x5548b31au, 0xf3802ccbu, 0x91b7a67cu, 0x2fef202du, 0xce2699deu, 0x6c5e138fu,
    0x0a958d40u, 0xa8cd06f1u, 0x470480a2u, 0xe53bfa53u, 0x83737404u, 0x21aaedb5u, 0xbfe26766u, 0x5e19e117u,
    0xfc515ac8u, 0x9a88d479u, 0x38c04e2au, 0xd6f7c7dbu, 0x752f418cu, 0x1366bb3du, 0xb19e34eeu, 0x4fd5ae9fu,
    0xee0d2850u, 0x8c44a201u, 0x2a7c1bb2u, 0xc8b39563u, 0x66eb0f14u, 0x052288c5u, 0xa35a0276u, 0x41917c27u,
    0xdfc8f5d8u, 0x7e006f89u, 0x1c37e93au, 0xba6f62ebu, 0x58a6dc9cu, 0xf6de564du, 0x9515cffeu, 0x334d49afu,
    0xd184c360u, 0x6fbc3d11u, 0x0df3b6c2u, 0xac2b3073u, 0x4a62aa24u, 0xe89a23d5u, 0x86d19d86u, 0x25091737u,
    0xc34090e8u, 0x61780a99u, 0xffaf844au, 0x9de6fdfbu, 0x3c1e77acu, 0xda55f15du, 0x788d6b0eu, 0x16c4e4bfu,
    0xb4fc5e70u, 0x5333d821u, 0xf16b51d2u, 0x8fa2cb83u, 0x2dda4534u, 0xcc11bee5u, 0x6a493896u, 0x0880b247u,
    0xa6b82bf8u, 0x44efa5a9u, 0xe3271f5au, 0x815e990bu, 0x1f9612bcu, 0xbdcd8c6du, 0x5c05061eu, 0xfa3c7fcfu,
    0x9873f980u, 0x36ab7331u, 0xd4e2ece2u, 0x731a6693u, 0x1151e044u, 0xaf8959f5u, 0x4dc0d3a6u, 0xebf84d57u,
};

static const uint32_t bshim_221_tab2[96] = {
    0xb7113969u, 0x5548b31au, 0xf3802ccbu, 0x91b7a67cu, 0x2fef202du, 0xce2699deu, 0x6c5e138fu, 0x0a958d40u,
    0xa8cd06f1u, 0x470480a2u, 0xe53bfa53u, 0x83737404u, 0x21aaedb5u, 0xbfe26766u, 0x5e19e117u, 0xfc515ac8u,
    0x9a88d479u, 0x38c04e2au, 0xd6f7c7dbu, 0x752f418cu, 0x1366bb3du, 0xb19e34eeu, 0x4fd5ae9fu, 0xee0d2850u,
    0x8c44a201u, 0x2a7c1bb2u, 0xc8b39563u, 0x66eb0f14u, 0x052288c5u, 0xa35a0276u, 0x41917c27u, 0xdfc8f5d8u,
    0x7e006f89u, 0x1c37e93au, 0xba6f62ebu, 0x58a6dc9cu, 0xf6de564du, 0x9515cffeu, 0x334d49afu, 0xd184c360u,
    0x6fbc3d11u, 0x0df3b6c2u, 0xac2b3073u, 0x4a62aa24u, 0xe89a23d5u, 0x86d19d86u, 0x25091737u, 0xc34090e8u,
    0x61780a99u, 0xffaf844au, 0x9de6fdfbu, 0x3c1e77acu, 0xda55f15du, 0x788d6b0eu, 0x16c4e4bfu, 0xb4fc5e70u,
    0x5333d821u, 0xf16b51d2u, 0x8fa2cb83u, 0x2dda4534u, 0xcc11bee5u, 0x6a493896u, 0x0880b247u, 0xa6b82bf8u,
    0x44efa5a9u, 0xe3271f5au, 0x815e990bu, 0x1f9612bcu, 0xbdcd8c6du, 0x5c05061eu, 0xfa3c7fcfu, 0x9873f980u,
    0x36ab7331u, 0xd4e2ece2u, 0x731a6693u, 0x1151e044u, 0xaf8959f5u, 0x4dc0d3a6u, 0xebf84d57u, 0x8a2fc708u,
    0x286740b9u, 0xc69eba6au, 0x64d6341bu, 0x030dadccu, 0xa145277du, 0x3f7ca12eu, 0xddb41adfu, 0x7beb9490u,
    0x1a230e41u, 0xb85a87f2u, 0x569201a3u, 0xf4c97b54u, 0x9300f505u, 0x31386eb6u, 0xcf6fe867u, 0x6da76218u,
};

static const uint32_t bshim_221_tab3[96] = {
    0x38c04e2au, 0xd6f7c7dbu, 0x752f418cu, 0x1366bb3du, 0xb19e34eeu, 0x4fd5ae9fu, 0xee0d2850u, 0x8c44a201u,
    0x2a7c1bb2u, 0xc8b39563u, 0x66eb0f14u, 0x052288c5u, 0xa35a0276u, 0x41917c27u, 0xdfc8f5d8u, 0x7e006f89u,
    0x1c37e93au, 0xba6f62ebu, 0x58a6dc9cu, 0xf6de564du, 0x9515cffeu, 0x334d49afu, 0xd184c360u, 0x6fbc3d11u,
    0x0df3b6c2u, 0xac2b3073u, 0x4a62aa24u, 0xe89a23d5u, 0x86d19d86u, 0x25091737u, 0xc34090e8u, 0x61780a99u,
    0xffaf844au, 0x9de6fdfbu, 0x3c1e77acu, 0xda55f15du, 0x788d6b0eu, 0x16c4e4bfu, 0xb4fc5e70u, 0x5333d821u,
    0xf16b51d2u, 0x8fa2cb83u, 0x2dda4534u, 0xcc11bee5u, 0x6a493896u, 0x0880b247u, 0xa6b82bf8u, 0x44efa5a9u,
    0xe3271f5au, 0x815e990bu, 0x1f9612bcu, 0xbdcd8c6du, 0x5c05061eu, 0xfa3c7fcfu, 0x9873f980u, 0x36ab7331u,
    0xd4e2ece2u, 0x731a6693u, 0x1151e044u, 0xaf8959f5u, 0x4dc0d3a6u, 0xebf84d57u, 0x8a2fc708u, 0x286740b9u,
    0xc69eba6au, 0x64d6341bu, 0x030dadccu, 0xa145277du, 0x3f7ca12eu, 0xddb41adfu, 0x7beb9490u, 0x1a230e41u,
    0xb85a87f2u, 0x569201a3u, 0xf4c97b54u, 0x9300f505u, 0x31386eb6u, 0xcf6fe867u, 0x6da76218u, 0x0bdedbc9u,
    0xaa16557au, 0x484dcf2bu, 0xe68548dcu, 0x84bcc28du, 0x22f43c3eu, 0xc12bb5efu, 0x5f632fa0u, 0xfd9aa951u,
    0x9bd22302u, 0x3a099cb3u, 0xd8411664u, 0x76789015u, 0x14b009c6u, 0xb2e78377u, 0x511efd28u, 0xef5676d9u,
};

static const uint32_t bshim_221_tab4[96] = {
    0xba6f62ebu, 0x58a6dc9cu, 0xf6de564du, 0x9515cffeu, 0x334d49afu, 0xd184c360u, 0x6fbc3d11u, 0x0df3b6c2u,
    0xac2b3073u, 0x4a62aa24u, 0xe89a23d5u, 0x86d19d86u, 0x25091737u, 0xc34090e8u, 0x61780a99u, 0xffaf844au,
    0x9de6fdfbu, 0x3c1e77acu, 0xda55f15du, 0x788d6b0eu, 0x16c4e4bfu, 0xb4fc5e70u, 0x5333d821u, 0xf16b51d2u,
    0x8fa2cb83u, 0x2dda4534u, 0xcc11bee5u, 0x6a493896u, 0x0880b247u, 0xa6b82bf8u, 0x44efa5a9u, 0xe3271f5au,
    0x815e990bu, 0x1f9612bcu, 0xbdcd8c6du, 0x5c05061eu, 0xfa3c7fcfu, 0x9873f980u, 0x36ab7331u, 0xd4e2ece2u,
    0x731a6693u, 0x1151e044u, 0xaf8959f5u, 0x4dc0d3a6u, 0xebf84d57u, 0x8a2fc708u, 0x286740b9u, 0xc69eba6au,
    0x64d6341bu, 0x030dadccu, 0xa145277du, 0x3f7ca12eu, 0xddb41adfu, 0x7beb9490u, 0x1a230e41u, 0xb85a87f2u,
    0x569201a3u, 0xf4c97b54u, 0x9300f505u, 0x31386eb6u, 0xcf6fe867u, 0x6da76218u, 0x0bdedbc9u, 0xaa16557au,
    0x484dcf2bu, 0xe68548dcu, 0x84bcc28du, 0x22f43c3eu, 0xc12bb5efu, 0x5f632fa0u, 0xfd9aa951u, 0x9bd22302u,
    0x3a099cb3u, 0xd8411664u, 0x76789015u, 0x14b009c6u, 0xb2e78377u, 0x511efd28u, 0xef5676d9u, 0x8d8df08au,
    0x2bc56a3bu, 0xc9fce3ecu, 0x68345d9du, 0x066bd74eu, 0xa4a350ffu, 0x42dacab0u, 0xe1124461u, 0x7f49be12u,
    0x1d8137c3u, 0xbbb8b174u, 0x59f02b25u, 0xf827a4d6u, 0x965f1e87u, 0x34969838u, 0xd2ce11e9u, 0x71058b9au,
};

static const uint32_t bshim_221_tab5[96] = {
    0x3c1e77acu, 0xda55f15du, 0x788d6b0eu, 0x16c4e4bfu, 0xb4fc5e70u, 0x5333d821u, 0xf16b51d2u, 0x8fa2cb83u,
    0x2dda4534u, 0xcc11bee5u, 0x6a493896u, 0x0880b247u, 0xa6b82bf8u, 0x44efa5a9u, 0xe3271f5au, 0x815e990bu,
    0x1f9612bcu, 0xbdcd8c6du, 0x5c05061eu, 0xfa3c7fcfu, 0x9873f980u, 0x36ab7331u, 0xd4e2ece2u, 0x731a6693u,
    0x1151e044u, 0xaf8959f5u, 0x4dc0d3a6u, 0xebf84d57u, 0x8a2fc708u, 0x286740b9u, 0xc69eba6au, 0x64d6341bu,
    0x030dadccu, 0xa145277du, 0x3f7ca12eu, 0xddb41adfu, 0x7beb9490u, 0x1a230e41u, 0xb85a87f2u, 0x569201a3u,
    0xf4c97b54u, 0x9300f505u, 0x31386eb6u, 0xcf6fe867u, 0x6da76218u, 0x0bdedbc9u, 0xaa16557au, 0x484dcf2bu,
    0xe68548dcu, 0x84bcc28du, 0x22f43c3eu, 0xc12bb5efu, 0x5f632fa0u, 0xfd9aa951u, 0x9bd22302u, 0x3a099cb3u,
    0xd8411664u, 0x76789015u, 0x14b009c6u, 0xb2e78377u, 0x511efd28u, 0xef5676d9u, 0x8d8df08au, 0x2bc56a3bu,
    0xc9fce3ecu, 0x68345d9du, 0x066bd74eu, 0xa4a350ffu, 0x42dacab0u, 0xe1124461u, 0x7f49be12u, 0x1d8137c3u,
    0xbbb8b174u, 0x59f02b25u, 0xf827a4d6u, 0x965f1e87u, 0x34969838u, 0xd2ce11e9u, 0x71058b9au, 0x0f3d054bu,
    0xad747efcu, 0x4babf8adu, 0xe9e3725eu, 0x881aec0fu, 0x265265c0u, 0xc489df71u, 0x62c15922u, 0x00f8d2d3u,
    0x9f304c84u, 0x3d67c635u, 0xdb9f3fe6u, 0x79d6b997u, 0x180e3348u, 0xb645acf9u, 0x547d26aau, 0xf2b4a05bu,
};

static const uint32_t bshim_221_tab6[96] = {
    0xbdcd8c6du, 0x5c05061eu, 0xfa3c7fcfu, 0x9873f980u, 0x36ab7331u, 0xd4e2ece2u, 0x731a6693u, 0x1151e044u,
    0xaf8959f5u, 0x4dc0d3a6u, 0xebf84d57u, 0x8a2fc708u, 0x286740b9u, 0xc69eba6au, 0x64d6341bu, 0x030dadccu,
    0xa145277du, 0x3f7ca12eu, 0xddb41adfu, 0x7beb9490u, 0x1a230e41u, 0xb85a87f2u, 0x569201a3u, 0xf4c97b54u,
    0x9300f505u, 0x31386eb6u, 0xcf6fe867u, 0x6da76218u, 0x0bdedbc9u, 0xaa16557au, 0x484dcf2bu, 0xe68548dcu,
    0x84bcc28du, 0x22f43c3eu, 0xc12bb5efu, 0x5f632fa0u, 0xfd9aa951u, 0x9bd22302u, 0x3a099cb3u, 0xd8411664u,
    0x76789015u, 0x14b009c6u, 0xb2e78377u, 0x511efd28u, 0xef5676d9u, 0x8d8df08au, 0x2bc56a3bu, 0xc9fce3ecu,
    0x68345d9du, 0x066bd74eu, 0xa4a350ffu, 0x42dacab0u, 0xe1124461u, 0x7f49be12u, 0x1d8137c3u, 0xbbb8b174u,
    0x59f02b25u, 0xf827a4d6u, 0x965f1e87u, 0x34969838u, 0xd2ce11e9u, 0x71058b9au, 0x0f3d054bu, 0xad747efcu,
    0x4babf8adu, 0xe9e3725eu, 0x881aec0fu, 0x265265c0u, 0xc489df71u, 0x62c15922u, 0x00f8d2d3u, 0x9f304c84u,
    0x3d67c635u, 0xdb9f3fe6u, 0x79d6b997u, 0x180e3348u, 0xb645acf9u, 0x547d26aau, 0xf2b4a05bu, 0x90ec1a0cu,
    0x2f2393bdu, 0xcd5b0d6eu, 0x6b92871fu, 0x09ca00d0u, 0xa8017a81u, 0x4638f432u, 0xe4706de3u, 0x82a7e794u,
    0x20df6145u, 0xbf16daf6u, 0x5d4e54a7u, 0xfb85ce58u, 0x99bd4809u, 0x37f4c1bau, 0xd62c3b6bu, 0x7463b51cu,
};

static const uint32_t bshim_221_tab7[96] = {
    0x3f7ca12eu, 0xddb41adfu, 0x7beb9490u, 0x1a230e41u, 0xb85a87f2u, 0x569201a3u, 0xf4c97b54u, 0x9300f505u,
    0x31386eb6u, 0xcf6fe867u, 0x6da76218u, 0x0bdedbc9u, 0xaa16557au, 0x484dcf2bu, 0xe68548dcu, 0x84bcc28du,
    0x22f43c3eu, 0xc12bb5efu, 0x5f632fa0u, 0xfd9aa951u, 0x9bd22302u, 0x3a099cb3u, 0xd8411664u, 0x76789015u,
    0x14b009c6u, 0xb2e78377u, 0x511efd28u, 0xef5676d9u, 0x8d8df08au, 0x2bc56a3bu, 0xc9fce3ecu, 0x68345d9du,
    0x066bd74eu, 0xa4a350ffu, 0x42dacab0u, 0xe1124461u, 0x7f49be12u, 0x1d8137c3u, 0xbbb8b174u, 0x59f02b25u,
    0xf827a4d6u, 0x965f1e87u, 0x34969838u, 0xd2ce11e9u, 0x71058b9au, 0x0f3d054bu, 0xad747efcu, 0x4babf8adu,
    0xe9e3725eu, 0x881aec0fu, 0x265265c0u, 0xc489df71u, 0x62c15922u, 0x00f8d2d3u, 0x9f304c84u, 0x3d67c635u,
    0xdb9f3fe6u, 0x79d6b997u, 0x180e3348u, 0xb645acf9u, 0x547d26aau, 0xf2b4a05bu, 0x90ec1a0cu, 0x2f2393bdu,
    0xcd5b0d6eu, 0x6b92871fu, 0x09ca00d0u, 0xa8017a81u, 0x4638f432u, 0xe4706de3u, 0x82a7e794u, 0x20df6145u,
    0xbf16daf6u, 0x5d4e54a7u, 0xfb85ce58u, 0x99bd4809u, 0x37f4c1bau, 0xd62c3b6bu, 0x7463b51cu, 0x129b2ecdu,
    0xb0d2a87eu, 0x4f0a222fu, 0xed419be0u, 0x8b791591u, 0x29b08f42u, 0xc7e808f3u, 0x661f82a4u, 0x0456fc55u,
    0xa28e7606u, 0x40c5efb7u, 0xdefd6968u, 0x7d34e319u, 0x1b6c5ccau, 0xb9a3d67bu, 0x57db502cu, 0xf612c9ddu,
};

struct bshim_221_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_221_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_221_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_221_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_221_reset(struct bshim_221_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001ab453u;
    return 0;
}

