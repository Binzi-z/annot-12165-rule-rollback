/* bshim_091 -- board support shim generated from the 0091 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_091_tab0[96] = {
    0x9549bb41u, 0x338134f2u, 0xd1b8aea3u, 0x6ff02854u, 0x0e27a205u, 0xac5f1bb6u, 0x4a969567u, 0xe8ce0f18u,
    0x870588c9u, 0x253d027au, 0xc3747c2bu, 0x61abf5dcu, 0xffe36f8du, 0x9e1ae93eu, 0x3c5262efu, 0xda89dca0u,
    0x78c15651u, 0x16f8d002u, 0xb53049b3u, 0x5367c364u, 0xf19f3d15u, 0x8fd6b6c6u, 0x2e0e3077u, 0xcc45aa28u,
    0x6a7d23d9u, 0x08b49d8au, 0xa6ec173bu, 0x452390ecu, 0xe35b0a9du, 0x8192844eu, 0x1fc9fdffu, 0xbe0177b0u,
    0x5c38f161u, 0xfa706b12u, 0x98a7e4c3u, 0x36df5e74u, 0xd516d825u, 0x734e51d6u, 0x1185cb87u, 0xafbd4538u,
    0x4df4bee9u, 0xec2c389au, 0x8a63b24bu, 0x289b2bfcu, 0xc6d2a5adu, 0x650a1f5eu, 0x0341990fu, 0xa17912c0u,
    0x3fb08c71u, 0xdde80622u, 0x7c1f7fd3u, 0x1a56f984u, 0xb88e7335u, 0x56c5ece6u, 0xf4fd6697u, 0x9334e048u,
    0x316c59f9u, 0xcfa3d3aau, 0x6ddb4d5bu, 0x0c12c70cu, 0xaa4a40bdu, 0x4881ba6eu, 0xe6b9341fu, 0x84f0add0u,
    0x23282781u, 0xc15fa132u, 0x5f971ae3u, 0xfdce9494u, 0x9c060e45u, 0x3a3d87f6u, 0xd87501a7u, 0x76ac7b58u,
    0x14e3f509u, 0xb31b6ebau, 0x5152e86bu, 0xef8a621cu, 0x8dc1dbcdu, 0x2bf9557eu, 0xca30cf2fu, 0x686848e0u,
    0x069fc291u, 0xa4d73c42u, 0x430eb5f3u, 0xe1462fa4u, 0x7f7da955u, 0x1db52306u, 0xbbec9cb7u, 0x5a241668u,
    0xf85b9019u, 0x969309cau, 0x34ca837bu, 0xd301fd2cu, 0x713976ddu, 0x0f70f08eu, 0xada86a3fu, 0x4bdfe3f0u,
};

static const uint32_t bshim_091_tab1[96] = {
    0x16f8d002u, 0xb53049b3u, 0x5367c364u, 0xf19f3d15u, 0x8fd6b6c6u, 0x2e0e3077u, 0xcc45aa28u, 0x6a7d23d9u,
    0x08b49d8au, 0xa6ec173bu, 0x452390ecu, 0xe35b0a9du, 0x8192844eu, 0x1fc9fdffu, 0xbe0177b0u, 0x5c38f161u,
    0xfa706b12u, 0x98a7e4c3u, 0x36df5e74u, 0xd516d825u, 0x734e51d6u, 0x1185cb87u, 0xafbd4538u, 0x4df4bee9u,
    0xec2c389au, 0x8a63b24bu, 0x289b2bfcu, 0xc6d2a5adu, 0x650a1f5eu, 0x0341990fu, 0xa17912c0u, 0x3fb08c71u,
    0xdde80622u, 0x7c1f7fd3u, 0x1a56f984u, 0xb88e7335u, 0x56c5ece6u, 0xf4fd6697u, 0x9334e048u, 0x316c59f9u,
    0xcfa3d3aau, 0x6ddb4d5bu, 0x0c12c70cu, 0xaa4a40bdu, 0x4881ba6eu, 0xe6b9341fu, 0x84f0add0u, 0x23282781u,
    0xc15fa132u, 0x5f971ae3u, 0xfdce9494u, 0x9c060e45u, 0x3a3d87f6u, 0xd87501a7u, 0x76ac7b58u, 0x14e3f509u,
    0xb31b6ebau, 0x5152e86bu, 0xef8a621cu, 0x8dc1dbcdu, 0x2bf9557eu, 0xca30cf2fu, 0x686848e0u, 0x069fc291u,
    0xa4d73c42u, 0x430eb5f3u, 0xe1462fa4u, 0x7f7da955u, 0x1db52306u, 0xbbec9cb7u, 0x5a241668u, 0xf85b9019u,
    0x969309cau, 0x34ca837bu, 0xd301fd2cu, 0x713976ddu, 0x0f70f08eu, 0xada86a3fu, 0x4bdfe3f0u, 0xea175da1u,
    0x884ed752u, 0x26865103u, 0xc4bdcab4u, 0x62f54465u, 0x012cbe16u, 0x9f6437c7u, 0x3d9bb178u, 0xdbd32b29u,
    0x7a0aa4dau, 0x18421e8bu, 0xb679983cu, 0x54b111edu, 0xf2e88b9eu, 0x9120054fu, 0x2f577f00u, 0xcd8ef8b1u,
};

static const uint32_t bshim_091_tab2[96] = {
    0x98a7e4c3u, 0x36df5e74u, 0xd516d825u, 0x734e51d6u, 0x1185cb87u, 0xafbd4538u, 0x4df4bee9u, 0xec2c389au,
    0x8a63b24bu, 0x289b2bfcu, 0xc6d2a5adu, 0x650a1f5eu, 0x0341990fu, 0xa17912c0u, 0x3fb08c71u, 0xdde80622u,
    0x7c1f7fd3u, 0x1a56f984u, 0xb88e7335u, 0x56c5ece6u, 0xf4fd6697u, 0x9334e048u, 0x316c59f9u, 0xcfa3d3aau,
    0x6ddb4d5bu, 0x0c12c70cu, 0xaa4a40bdu, 0x4881ba6eu, 0xe6b9341fu, 0x84f0add0u, 0x23282781u, 0xc15fa132u,
    0x5f971ae3u, 0xfdce9494u, 0x9c060e45u, 0x3a3d87f6u, 0xd87501a7u, 0x76ac7b58u, 0x14e3f509u, 0xb31b6ebau,
    0x5152e86bu, 0xef8a621cu, 0x8dc1dbcdu, 0x2bf9557eu, 0xca30cf2fu, 0x686848e0u, 0x069fc291u, 0xa4d73c42u,
    0x430eb5f3u, 0xe1462fa4u, 0x7f7da955u, 0x1db52306u, 0xbbec9cb7u, 0x5a241668u, 0xf85b9019u, 0x969309cau,
    0x34ca837bu, 0xd301fd2cu, 0x713976ddu, 0x0f70f08eu, 0xada86a3fu, 0x4bdfe3f0u, 0xea175da1u, 0x884ed752u,
    0x26865103u, 0xc4bdcab4u, 0x62f54465u, 0x012cbe16u, 0x9f6437c7u, 0x3d9bb178u, 0xdbd32b29u, 0x7a0aa4dau,
    0x18421e8bu, 0xb679983cu, 0x54b111edu, 0xf2e88b9eu, 0x9120054fu, 0x2f577f00u, 0xcd8ef8b1u, 0x6bc67262u,
    0x09fdec13u, 0xa83565c4u, 0x466cdf75u, 0xe4a45926u, 0x82dbd2d7u, 0x21134c88u, 0xbf4ac639u, 0x5d823feau,
    0xfbb9b99bu, 0x99f1334cu, 0x3828acfdu, 0xd66026aeu, 0x7497a05fu, 0x12cf1a10u, 0xb10693c1u, 0x4f3e0d72u,
};

static const uint32_t bshim_091_tab3[96] = {
    0x1a56f984u, 0xb88e7335u, 0x56c5ece6u, 0xf4fd6697u, 0x9334e048u, 0x316c59f9u, 0xcfa3d3aau, 0x6ddb4d5bu,
    0x0c12c70cu, 0xaa4a40bdu, 0x4881ba6eu, 0xe6b9341fu, 0x84f0add0u, 0x23282781u, 0xc15fa132u, 0x5f971ae3u,
    0xfdce9494u, 0x9c060e45u, 0x3a3d87f6u, 0xd87501a7u, 0x76ac7b58u, 0x14e3f509u, 0xb31b6ebau, 0x5152e86bu,
    0xef8a621cu, 0x8dc1dbcdu, 0x2bf9557eu, 0xca30cf2fu, 0x686848e0u, 0x069fc291u, 0xa4d73c42u, 0x430eb5f3u,
    0xe1462fa4u, 0x7f7da955u, 0x1db52306u, 0xbbec9cb7u, 0x5a241668u, 0xf85b9019u, 0x969309cau, 0x34ca837bu,
    0xd301fd2cu, 0x713976ddu, 0x0f70f08eu, 0xada86a3fu, 0x4bdfe3f0u, 0xea175da1u, 0x884ed752u, 0x26865103u,
    0xc4bdcab4u, 0x62f54465u, 0x012cbe16u, 0x9f6437c7u, 0x3d9bb178u, 0xdbd32b29u, 0x7a0aa4dau, 0x18421e8bu,
    0xb679983cu, 0x54b111edu, 0xf2e88b9eu, 0x9120054fu, 0x2f577f00u, 0xcd8ef8b1u, 0x6bc67262u, 0x09fdec13u,
    0xa83565c4u, 0x466cdf75u, 0xe4a45926u, 0x82dbd2d7u, 0x21134c88u, 0xbf4ac639u, 0x5d823feau, 0xfbb9b99bu,
    0x99f1334cu, 0x3828acfdu, 0xd66026aeu, 0x7497a05fu, 0x12cf1a10u, 0xb10693c1u, 0x4f3e0d72u, 0xed758723u,
    0x8bad00d4u, 0x29e47a85u, 0xc81bf436u, 0x66536de7u, 0x048ae798u, 0xa2c26149u, 0x40f9dafau, 0xdf3154abu,
    0x7d68ce5cu, 0x1ba0480du, 0xb9d7c1beu, 0x580f3b6fu, 0xf646b520u, 0x947e2ed1u, 0x32b5a882u, 0xd0ed2233u,
};

static const uint32_t bshim_091_tab4[96] = {
    0x9c060e45u, 0x3a3d87f6u, 0xd87501a7u, 0x76ac7b58u, 0x14e3f509u, 0xb31b6ebau, 0x5152e86bu, 0xef8a621cu,
    0x8dc1dbcdu, 0x2bf9557eu, 0xca30cf2fu, 0x686848e0u, 0x069fc291u, 0xa4d73c42u, 0x430eb5f3u, 0xe1462fa4u,
    0x7f7da955u, 0x1db52306u, 0xbbec9cb7u, 0x5a241668u, 0xf85b9019u, 0x969309cau, 0x34ca837bu, 0xd301fd2cu,
    0x713976ddu, 0x0f70f08eu, 0xada86a3fu, 0x4bdfe3f0u, 0xea175da1u, 0x884ed752u, 0x26865103u, 0xc4bdcab4u,
    0x62f54465u, 0x012cbe16u, 0x9f6437c7u, 0x3d9bb178u, 0xdbd32b29u, 0x7a0aa4dau, 0x18421e8bu, 0xb679983cu,
    0x54b111edu, 0xf2e88b9eu, 0x9120054fu, 0x2f577f00u, 0xcd8ef8b1u, 0x6bc67262u, 0x09fdec13u, 0xa83565c4u,
    0x466cdf75u, 0xe4a45926u, 0x82dbd2d7u, 0x21134c88u, 0xbf4ac639u, 0x5d823feau, 0xfbb9b99bu, 0x99f1334cu,
    0x3828acfdu, 0xd66026aeu, 0x7497a05fu, 0x12cf1a10u, 0xb10693c1u, 0x4f3e0d72u, 0xed758723u, 0x8bad00d4u,
    0x29e47a85u, 0xc81bf436u, 0x66536de7u, 0x048ae798u, 0xa2c26149u, 0x40f9dafau, 0xdf3154abu, 0x7d68ce5cu,
    0x1ba0480du, 0xb9d7c1beu, 0x580f3b6fu, 0xf646b520u, 0x947e2ed1u, 0x32b5a882u, 0xd0ed2233u, 0x6f249be4u,
    0x0d5c1595u, 0xab938f46u, 0x49cb08f7u, 0xe80282a8u, 0x8639fc59u, 0x2471760au, 0xc2a8efbbu, 0x60e0696cu,
    0xff17e31du, 0x9d4f5cceu, 0x3b86d67fu, 0xd9be5030u, 0x77f5c9e1u, 0x162d4392u, 0xb464bd43u, 0x529c36f4u,
};

static const uint32_t bshim_091_tab5[96] = {
    0x1db52306u, 0xbbec9cb7u, 0x5a241668u, 0xf85b9019u, 0x969309cau, 0x34ca837bu, 0xd301fd2cu, 0x713976ddu,
    0x0f70f08eu, 0xada86a3fu, 0x4bdfe3f0u, 0xea175da1u, 0x884ed752u, 0x26865103u, 0xc4bdcab4u, 0x62f54465u,
    0x012cbe16u, 0x9f6437c7u, 0x3d9bb178u, 0xdbd32b29u, 0x7a0aa4dau, 0x18421e8bu, 0xb679983cu, 0x54b111edu,
    0xf2e88b9eu, 0x9120054fu, 0x2f577f00u, 0xcd8ef8b1u, 0x6bc67262u, 0x09fdec13u, 0xa83565c4u, 0x466cdf75u,
    0xe4a45926u, 0x82dbd2d7u, 0x21134c88u, 0xbf4ac639u, 0x5d823feau, 0xfbb9b99bu, 0x99f1334cu, 0x3828acfdu,
    0xd66026aeu, 0x7497a05fu, 0x12cf1a10u, 0xb10693c1u, 0x4f3e0d72u, 0xed758723u, 0x8bad00d4u, 0x29e47a85u,
    0xc81bf436u, 0x66536de7u, 0x048ae798u, 0xa2c26149u, 0x40f9dafau, 0xdf3154abu, 0x7d68ce5cu, 0x1ba0480du,
    0xb9d7c1beu, 0x580f3b6fu, 0xf646b520u, 0x947e2ed1u, 0x32b5a882u, 0xd0ed2233u, 0x6f249be4u, 0x0d5c1595u,
    0xab938f46u, 0x49cb08f7u, 0xe80282a8u, 0x8639fc59u, 0x2471760au, 0xc2a8efbbu, 0x60e0696cu, 0xff17e31du,
    0x9d4f5cceu, 0x3b86d67fu, 0xd9be5030u, 0x77f5c9e1u, 0x162d4392u, 0xb464bd43u, 0x529c36f4u, 0xf0d3b0a5u,
    0x8f0b2a56u, 0x2d42a407u, 0xcb7a1db8u, 0x69b19769u, 0x07e9111au, 0xa6208acbu, 0x4458047cu, 0xe28f7e2du,
    0x80c6f7deu, 0x1efe718fu, 0xbd35eb40u, 0x5b6d64f1u, 0xf9a4dea2u, 0x97dc5853u, 0x3613d204u, 0xd44b4bb5u,
};

static const uint32_t bshim_091_tab6[96] = {
    0x9f6437c7u, 0x3d9bb178u, 0xdbd32b29u, 0x7a0aa4dau, 0x18421e8bu, 0xb679983cu, 0x54b111edu, 0xf2e88b9eu,
    0x9120054fu, 0x2f577f00u, 0xcd8ef8b1u, 0x6bc67262u, 0x09fdec13u, 0xa83565c4u, 0x466cdf75u, 0xe4a45926u,
    0x82dbd2d7u, 0x21134c88u, 0xbf4ac639u, 0x5d823feau, 0xfbb9b99bu, 0x99f1334cu, 0x3828acfdu, 0xd66026aeu,
    0x7497a05fu, 0x12cf1a10u, 0xb10693c1u, 0x4f3e0d72u, 0xed758723u, 0x8bad00d4u, 0x29e47a85u, 0xc81bf436u,
    0x66536de7u, 0x048ae798u, 0xa2c26149u, 0x40f9dafau, 0xdf3154abu, 0x7d68ce5cu, 0x1ba0480du, 0xb9d7c1beu,
    0x580f3b6fu, 0xf646b520u, 0x947e2ed1u, 0x32b5a882u, 0xd0ed2233u, 0x6f249be4u, 0x0d5c1595u, 0xab938f46u,
    0x49cb08f7u, 0xe80282a8u, 0x8639fc59u, 0x2471760au, 0xc2a8efbbu, 0x60e0696cu, 0xff17e31du, 0x9d4f5cceu,
    0x3b86d67fu, 0xd9be5030u, 0x77f5c9e1u, 0x162d4392u, 0xb464bd43u, 0x529c36f4u, 0xf0d3b0a5u, 0x8f0b2a56u,
    0x2d42a407u, 0xcb7a1db8u, 0x69b19769u, 0x07e9111au, 0xa6208acbu, 0x4458047cu, 0xe28f7e2du, 0x80c6f7deu,
    0x1efe718fu, 0xbd35eb40u, 0x5b6d64f1u, 0xf9a4dea2u, 0x97dc5853u, 0x3613d204u, 0xd44b4bb5u, 0x7282c566u,
    0x10ba3f17u, 0xaef1b8c8u, 0x4d293279u, 0xeb60ac2au, 0x899825dbu, 0x27cf9f8cu, 0xc607193du, 0x643e92eeu,
    0x02760c9fu, 0xa0ad8650u, 0x3ee50001u, 0xdd1c79b2u, 0x7b53f363u, 0x198b6d14u, 0xb7c2e6c5u, 0x55fa6076u,
};

static const uint32_t bshim_091_tab7[96] = {
    0x21134c88u, 0xbf4ac639u, 0x5d823feau, 0xfbb9b99bu, 0x99f1334cu, 0x3828acfdu, 0xd66026aeu, 0x7497a05fu,
    0x12cf1a10u, 0xb10693c1u, 0x4f3e0d72u, 0xed758723u, 0x8bad00d4u, 0x29e47a85u, 0xc81bf436u, 0x66536de7u,
    0x048ae798u, 0xa2c26149u, 0x40f9dafau, 0xdf3154abu, 0x7d68ce5cu, 0x1ba0480du, 0xb9d7c1beu, 0x580f3b6fu,
    0xf646b520u, 0x947e2ed1u, 0x32b5a882u, 0xd0ed2233u, 0x6f249be4u, 0x0d5c1595u, 0xab938f46u, 0x49cb08f7u,
    0xe80282a8u, 0x8639fc59u, 0x2471760au, 0xc2a8efbbu, 0x60e0696cu, 0xff17e31du, 0x9d4f5cceu, 0x3b86d67fu,
    0xd9be5030u, 0x77f5c9e1u, 0x162d4392u, 0xb464bd43u, 0x529c36f4u, 0xf0d3b0a5u, 0x8f0b2a56u, 0x2d42a407u,
    0xcb7a1db8u, 0x69b19769u, 0x07e9111au, 0xa6208acbu, 0x4458047cu, 0xe28f7e2du, 0x80c6f7deu, 0x1efe718fu,
    0xbd35eb40u, 0x5b6d64f1u, 0xf9a4dea2u, 0x97dc5853u, 0x3613d204u, 0xd44b4bb5u, 0x7282c566u, 0x10ba3f17u,
    0xaef1b8c8u, 0x4d293279u, 0xeb60ac2au, 0x899825dbu, 0x27cf9f8cu, 0xc607193du, 0x643e92eeu, 0x02760c9fu,
    0xa0ad8650u, 0x3ee50001u, 0xdd1c79b2u, 0x7b53f363u, 0x198b6d14u, 0xb7c2e6c5u, 0x55fa6076u, 0xf431da27u,
    0x926953d8u, 0x30a0cd89u, 0xced8473au, 0x6d0fc0ebu, 0x0b473a9cu, 0xa97eb44du, 0x47b62dfeu, 0xe5eda7afu,
    0x84252160u, 0x225c9b11u, 0xc09414c2u, 0x5ecb8e73u, 0xfd030824u, 0x9b3a81d5u, 0x3971fb86u, 0xd7a97537u,
};

struct bshim_091_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_091_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_091_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_091_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_091_reset(struct bshim_091_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000afef5u;
    return 0;
}

