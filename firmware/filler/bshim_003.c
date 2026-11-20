/* bshim_003 -- board support shim generated from the 0003 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_003_tab0[96] = {
    0xe329d0b9u, 0x81614a6au, 0x1f98c41bu, 0xbdd03dccu, 0x5c07b77du, 0xfa3f312eu, 0x9876aadfu, 0x36ae2490u,
    0xd4e59e41u, 0x731d17f2u, 0x115491a3u, 0xaf8c0b54u, 0x4dc38505u, 0xebfafeb6u, 0x8a327867u, 0x2869f218u,
    0xc6a16bc9u, 0x64d8e57au, 0x03105f2bu, 0xa147d8dcu, 0x3f7f528du, 0xddb6cc3eu, 0x7bee45efu, 0x1a25bfa0u,
    0xb85d3951u, 0x5694b302u, 0xf4cc2cb3u, 0x9303a664u, 0x313b2015u, 0xcf7299c6u, 0x6daa1377u, 0x0be18d28u,
    0xaa1906d9u, 0x4850808au, 0xe687fa3bu, 0x84bf73ecu, 0x22f6ed9du, 0xc12e674eu, 0x5f65e0ffu, 0xfd9d5ab0u,
    0x9bd4d461u, 0x3a0c4e12u, 0xd843c7c3u, 0x767b4174u, 0x14b2bb25u, 0xb2ea34d6u, 0x5121ae87u, 0xef592838u,
    0x8d90a1e9u, 0x2bc81b9au, 0xc9ff954bu, 0x68370efcu, 0x066e88adu, 0xa4a6025eu, 0x42dd7c0fu, 0xe114f5c0u,
    0x7f4c6f71u, 0x1d83e922u, 0xbbbb62d3u, 0x59f2dc84u, 0xf82a5635u, 0x9661cfe6u, 0x34994997u, 0xd2d0c348u,
    0x71083cf9u, 0x0f3fb6aau, 0xad77305bu, 0x4baeaa0cu, 0xe9e623bdu, 0x881d9d6eu, 0x2655171fu, 0xc48c90d0u,
    0x62c40a81u, 0x00fb8432u, 0x9f32fde3u, 0x3d6a7794u, 0xdba1f145u, 0x79d96af6u, 0x1810e4a7u, 0xb6485e58u,
    0x547fd809u, 0xf2b751bau, 0x90eecb6bu, 0x2f26451cu, 0xcd5dbecdu, 0x6b95387eu, 0x09ccb22fu, 0xa8042be0u,
    0x463ba591u, 0xe4731f42u, 0x82aa98f3u, 0x20e212a4u, 0xbf198c55u, 0x5d510606u, 0xfb887fb7u, 0x99bff968u,
};

static const uint32_t bshim_003_tab1[96] = {
    0x64d8e57au, 0x03105f2bu, 0xa147d8dcu, 0x3f7f528du, 0xddb6cc3eu, 0x7bee45efu, 0x1a25bfa0u, 0xb85d3951u,
    0x5694b302u, 0xf4cc2cb3u, 0x9303a664u, 0x313b2015u, 0xcf7299c6u, 0x6daa1377u, 0x0be18d28u, 0xaa1906d9u,
    0x4850808au, 0xe687fa3bu, 0x84bf73ecu, 0x22f6ed9du, 0xc12e674eu, 0x5f65e0ffu, 0xfd9d5ab0u, 0x9bd4d461u,
    0x3a0c4e12u, 0xd843c7c3u, 0x767b4174u, 0x14b2bb25u, 0xb2ea34d6u, 0x5121ae87u, 0xef592838u, 0x8d90a1e9u,
    0x2bc81b9au, 0xc9ff954bu, 0x68370efcu, 0x066e88adu, 0xa4a6025eu, 0x42dd7c0fu, 0xe114f5c0u, 0x7f4c6f71u,
    0x1d83e922u, 0xbbbb62d3u, 0x59f2dc84u, 0xf82a5635u, 0x9661cfe6u, 0x34994997u, 0xd2d0c348u, 0x71083cf9u,
    0x0f3fb6aau, 0xad77305bu, 0x4baeaa0cu, 0xe9e623bdu, 0x881d9d6eu, 0x2655171fu, 0xc48c90d0u, 0x62c40a81u,
    0x00fb8432u, 0x9f32fde3u, 0x3d6a7794u, 0xdba1f145u, 0x79d96af6u, 0x1810e4a7u, 0xb6485e58u, 0x547fd809u,
    0xf2b751bau, 0x90eecb6bu, 0x2f26451cu, 0xcd5dbecdu, 0x6b95387eu, 0x09ccb22fu, 0xa8042be0u, 0x463ba591u,
    0xe4731f42u, 0x82aa98f3u, 0x20e212a4u, 0xbf198c55u, 0x5d510606u, 0xfb887fb7u, 0x99bff968u, 0x37f77319u,
    0xd62eeccau, 0x7466667bu, 0x129de02cu, 0xb0d559ddu, 0x4f0cd38eu, 0xed444d3fu, 0x8b7bc6f0u, 0x29b340a1u,
    0xc7eaba52u, 0x66223403u, 0x0459adb4u, 0xa2912765u, 0x40c8a116u, 0xdf001ac7u, 0x7d379478u, 0x1b6f0e29u,
};

static const uint32_t bshim_003_tab2[96] = {
    0xe687fa3bu, 0x84bf73ecu, 0x22f6ed9du, 0xc12e674eu, 0x5f65e0ffu, 0xfd9d5ab0u, 0x9bd4d461u, 0x3a0c4e12u,
    0xd843c7c3u, 0x767b4174u, 0x14b2bb25u, 0xb2ea34d6u, 0x5121ae87u, 0xef592838u, 0x8d90a1e9u, 0x2bc81b9au,
    0xc9ff954bu, 0x68370efcu, 0x066e88adu, 0xa4a6025eu, 0x42dd7c0fu, 0xe114f5c0u, 0x7f4c6f71u, 0x1d83e922u,
    0xbbbb62d3u, 0x59f2dc84u, 0xf82a5635u, 0x9661cfe6u, 0x34994997u, 0xd2d0c348u, 0x71083cf9u, 0x0f3fb6aau,
    0xad77305bu, 0x4baeaa0cu, 0xe9e623bdu, 0x881d9d6eu, 0x2655171fu, 0xc48c90d0u, 0x62c40a81u, 0x00fb8432u,
    0x9f32fde3u, 0x3d6a7794u, 0xdba1f145u, 0x79d96af6u, 0x1810e4a7u, 0xb6485e58u, 0x547fd809u, 0xf2b751bau,
    0x90eecb6bu, 0x2f26451cu, 0xcd5dbecdu, 0x6b95387eu, 0x09ccb22fu, 0xa8042be0u, 0x463ba591u, 0xe4731f42u,
    0x82aa98f3u, 0x20e212a4u, 0xbf198c55u, 0x5d510606u, 0xfb887fb7u, 0x99bff968u, 0x37f77319u, 0xd62eeccau,
    0x7466667bu, 0x129de02cu, 0xb0d559ddu, 0x4f0cd38eu, 0xed444d3fu, 0x8b7bc6f0u, 0x29b340a1u, 0xc7eaba52u,
    0x66223403u, 0x0459adb4u, 0xa2912765u, 0x40c8a116u, 0xdf001ac7u, 0x7d379478u, 0x1b6f0e29u, 0xb9a687dau,
    0x57de018bu, 0xf6157b3cu, 0x944cf4edu, 0x32846e9eu, 0xd0bbe84fu, 0x6ef36200u, 0x0d2adbb1u, 0xab625562u,
    0x4999cf13u, 0xe7d148c4u, 0x8608c275u, 0x24403c26u, 0xc277b5d7u, 0x60af2f88u, 0xfee6a939u, 0x9d1e22eau,
};

static const uint32_t bshim_003_tab3[96] = {
    0x68370efcu, 0x066e88adu, 0xa4a6025eu, 0x42dd7c0fu, 0xe114f5c0u, 0x7f4c6f71u, 0x1d83e922u, 0xbbbb62d3u,
    0x59f2dc84u, 0xf82a5635u, 0x9661cfe6u, 0x34994997u, 0xd2d0c348u, 0x71083cf9u, 0x0f3fb6aau, 0xad77305bu,
    0x4baeaa0cu, 0xe9e623bdu, 0x881d9d6eu, 0x2655171fu, 0xc48c90d0u, 0x62c40a81u, 0x00fb8432u, 0x9f32fde3u,
    0x3d6a7794u, 0xdba1f145u, 0x79d96af6u, 0x1810e4a7u, 0xb6485e58u, 0x547fd809u, 0xf2b751bau, 0x90eecb6bu,
    0x2f26451cu, 0xcd5dbecdu, 0x6b95387eu, 0x09ccb22fu, 0xa8042be0u, 0x463ba591u, 0xe4731f42u, 0x82aa98f3u,
    0x20e212a4u, 0xbf198c55u, 0x5d510606u, 0xfb887fb7u, 0x99bff968u, 0x37f77319u, 0xd62eeccau, 0x7466667bu,
    0x129de02cu, 0xb0d559ddu, 0x4f0cd38eu, 0xed444d3fu, 0x8b7bc6f0u, 0x29b340a1u, 0xc7eaba52u, 0x66223403u,
    0x0459adb4u, 0xa2912765u, 0x40c8a116u, 0xdf001ac7u, 0x7d379478u, 0x1b6f0e29u, 0xb9a687dau, 0x57de018bu,
    0xf6157b3cu, 0x944cf4edu, 0x32846e9eu, 0xd0bbe84fu, 0x6ef36200u, 0x0d2adbb1u, 0xab625562u, 0x4999cf13u,
    0xe7d148c4u, 0x8608c275u, 0x24403c26u, 0xc277b5d7u, 0x60af2f88u, 0xfee6a939u, 0x9d1e22eau, 0x3b559c9bu,
    0xd98d164cu, 0x77c48ffdu, 0x15fc09aeu, 0xb433835fu, 0x526afd10u, 0xf0a276c1u, 0x8ed9f072u, 0x2d116a23u,
    0xcb48e3d4u, 0x69805d85u, 0x07b7d736u, 0xa5ef50e7u, 0x4426ca98u, 0xe25e4449u, 0x8095bdfau, 0x1ecd37abu,
};

static const uint32_t bshim_003_tab4[96] = {
    0xe9e623bdu, 0x881d9d6eu, 0x2655171fu, 0xc48c90d0u, 0x62c40a81u, 0x00fb8432u, 0x9f32fde3u, 0x3d6a7794u,
    0xdba1f145u, 0x79d96af6u, 0x1810e4a7u, 0xb6485e58u, 0x547fd809u, 0xf2b751bau, 0x90eecb6bu, 0x2f26451cu,
    0xcd5dbecdu, 0x6b95387eu, 0x09ccb22fu, 0xa8042be0u, 0x463ba591u, 0xe4731f42u, 0x82aa98f3u, 0x20e212a4u,
    0xbf198c55u, 0x5d510606u, 0xfb887fb7u, 0x99bff968u, 0x37f77319u, 0xd62eeccau, 0x7466667bu, 0x129de02cu,
    0xb0d559ddu, 0x4f0cd38eu, 0xed444d3fu, 0x8b7bc6f0u, 0x29b340a1u, 0xc7eaba52u, 0x66223403u, 0x0459adb4u,
    0xa2912765u, 0x40c8a116u, 0xdf001ac7u, 0x7d379478u, 0x1b6f0e29u, 0xb9a687dau, 0x57de018bu, 0xf6157b3cu,
    0x944cf4edu, 0x32846e9eu, 0xd0bbe84fu, 0x6ef36200u, 0x0d2adbb1u, 0xab625562u, 0x4999cf13u, 0xe7d148c4u,
    0x8608c275u, 0x24403c26u, 0xc277b5d7u, 0x60af2f88u, 0xfee6a939u, 0x9d1e22eau, 0x3b559c9bu, 0xd98d164cu,
    0x77c48ffdu, 0x15fc09aeu, 0xb433835fu, 0x526afd10u, 0xf0a276c1u, 0x8ed9f072u, 0x2d116a23u, 0xcb48e3d4u,
    0x69805d85u, 0x07b7d736u, 0xa5ef50e7u, 0x4426ca98u, 0xe25e4449u, 0x8095bdfau, 0x1ecd37abu, 0xbd04b15cu,
    0x5b3c2b0du, 0xf973a4beu, 0x97ab1e6fu, 0x35e29820u, 0xd41a11d1u, 0x72518b82u, 0x10890533u, 0xaec07ee4u,
    0x4cf7f895u, 0xeb2f7246u, 0x8966ebf7u, 0x279e65a8u, 0xc5d5df59u, 0x640d590au, 0x0244d2bbu, 0xa07c4c6cu,
};

static const uint32_t bshim_003_tab5[96] = {
    0x6b95387eu, 0x09ccb22fu, 0xa8042be0u, 0x463ba591u, 0xe4731f42u, 0x82aa98f3u, 0x20e212a4u, 0xbf198c55u,
    0x5d510606u, 0xfb887fb7u, 0x99bff968u, 0x37f77319u, 0xd62eeccau, 0x7466667bu, 0x129de02cu, 0xb0d559ddu,
    0x4f0cd38eu, 0xed444d3fu, 0x8b7bc6f0u, 0x29b340a1u, 0xc7eaba52u, 0x66223403u, 0x0459adb4u, 0xa2912765u,
    0x40c8a116u, 0xdf001ac7u, 0x7d379478u, 0x1b6f0e29u, 0xb9a687dau, 0x57de018bu, 0xf6157b3cu, 0x944cf4edu,
    0x32846e9eu, 0xd0bbe84fu, 0x6ef36200u, 0x0d2adbb1u, 0xab625562u, 0x4999cf13u, 0xe7d148c4u, 0x8608c275u,
    0x24403c26u, 0xc277b5d7u, 0x60af2f88u, 0xfee6a939u, 0x9d1e22eau, 0x3b559c9bu, 0xd98d164cu, 0x77c48ffdu,
    0x15fc09aeu, 0xb433835fu, 0x526afd10u, 0xf0a276c1u, 0x8ed9f072u, 0x2d116a23u, 0xcb48e3d4u, 0x69805d85u,
    0x07b7d736u, 0xa5ef50e7u, 0x4426ca98u, 0xe25e4449u, 0x8095bdfau, 0x1ecd37abu, 0xbd04b15cu, 0x5b3c2b0du,
    0xf973a4beu, 0x97ab1e6fu, 0x35e29820u, 0xd41a11d1u, 0x72518b82u, 0x10890533u, 0xaec07ee4u, 0x4cf7f895u,
    0xeb2f7246u, 0x8966ebf7u, 0x279e65a8u, 0xc5d5df59u, 0x640d590au, 0x0244d2bbu, 0xa07c4c6cu, 0x3eb3c61du,
    0xdceb3fceu, 0x7b22b97fu, 0x195a3330u, 0xb791ace1u, 0x55c92692u, 0xf400a043u, 0x923819f4u, 0x306f93a5u,
    0xcea70d56u, 0x6cde8707u, 0x0b1600b8u, 0xa94d7a69u, 0x4784f41au, 0xe5bc6dcbu, 0x83f3e77cu, 0x222b612du,
};

static const uint32_t bshim_003_tab6[96] = {
    0xed444d3fu, 0x8b7bc6f0u, 0x29b340a1u, 0xc7eaba52u, 0x66223403u, 0x0459adb4u, 0xa2912765u, 0x40c8a116u,
    0xdf001ac7u, 0x7d379478u, 0x1b6f0e29u, 0xb9a687dau, 0x57de018bu, 0xf6157b3cu, 0x944cf4edu, 0x32846e9eu,
    0xd0bbe84fu, 0x6ef36200u, 0x0d2adbb1u, 0xab625562u, 0x4999cf13u, 0xe7d148c4u, 0x8608c275u, 0x24403c26u,
    0xc277b5d7u, 0x60af2f88u, 0xfee6a939u, 0x9d1e22eau, 0x3b559c9bu, 0xd98d164cu, 0x77c48ffdu, 0x15fc09aeu,
    0xb433835fu, 0x526afd10u, 0xf0a276c1u, 0x8ed9f072u, 0x2d116a23u, 0xcb48e3d4u, 0x69805d85u, 0x07b7d736u,
    0xa5ef50e7u, 0x4426ca98u, 0xe25e4449u, 0x8095bdfau, 0x1ecd37abu, 0xbd04b15cu, 0x5b3c2b0du, 0xf973a4beu,
    0x97ab1e6fu, 0x35e29820u, 0xd41a11d1u, 0x72518b82u, 0x10890533u, 0xaec07ee4u, 0x4cf7f895u, 0xeb2f7246u,
    0x8966ebf7u, 0x279e65a8u, 0xc5d5df59u, 0x640d590au, 0x0244d2bbu, 0xa07c4c6cu, 0x3eb3c61du, 0xdceb3fceu,
    0x7b22b97fu, 0x195a3330u, 0xb791ace1u, 0x55c92692u, 0xf400a043u, 0x923819f4u, 0x306f93a5u, 0xcea70d56u,
    0x6cde8707u, 0x0b1600b8u, 0xa94d7a69u, 0x4784f41au, 0xe5bc6dcbu, 0x83f3e77cu, 0x222b612du, 0xc062dadeu,
    0x5e9a548fu, 0xfcd1ce40u, 0x9b0947f1u, 0x3940c1a2u, 0xd7783b53u, 0x75afb504u, 0x13e72eb5u, 0xb21ea866u,
    0x50562217u, 0xee8d9bc8u, 0x8cc51579u, 0x2afc8f2au, 0xc93408dbu, 0x676b828cu, 0x05a2fc3du, 0xa3da75eeu,
};

static const uint32_t bshim_003_tab7[96] = {
    0x6ef36200u, 0x0d2adbb1u, 0xab625562u, 0x4999cf13u, 0xe7d148c4u, 0x8608c275u, 0x24403c26u, 0xc277b5d7u,
    0x60af2f88u, 0xfee6a939u, 0x9d1e22eau, 0x3b559c9bu, 0xd98d164cu, 0x77c48ffdu, 0x15fc09aeu, 0xb433835fu,
    0x526afd10u, 0xf0a276c1u, 0x8ed9f072u, 0x2d116a23u, 0xcb48e3d4u, 0x69805d85u, 0x07b7d736u, 0xa5ef50e7u,
    0x4426ca98u, 0xe25e4449u, 0x8095bdfau, 0x1ecd37abu, 0xbd04b15cu, 0x5b3c2b0du, 0xf973a4beu, 0x97ab1e6fu,
    0x35e29820u, 0xd41a11d1u, 0x72518b82u, 0x10890533u, 0xaec07ee4u, 0x4cf7f895u, 0xeb2f7246u, 0x8966ebf7u,
    0x279e65a8u, 0xc5d5df59u, 0x640d590au, 0x0244d2bbu, 0xa07c4c6cu, 0x3eb3c61du, 0xdceb3fceu, 0x7b22b97fu,
    0x195a3330u, 0xb791ace1u, 0x55c92692u, 0xf400a043u, 0x923819f4u, 0x306f93a5u, 0xcea70d56u, 0x6cde8707u,
    0x0b1600b8u, 0xa94d7a69u, 0x4784f41au, 0xe5bc6dcbu, 0x83f3e77cu, 0x222b612du, 0xc062dadeu, 0x5e9a548fu,
    0xfcd1ce40u, 0x9b0947f1u, 0x3940c1a2u, 0xd7783b53u, 0x75afb504u, 0x13e72eb5u, 0xb21ea866u, 0x50562217u,
    0xee8d9bc8u, 0x8cc51579u, 0x2afc8f2au, 0xc93408dbu, 0x676b828cu, 0x05a2fc3du, 0xa3da75eeu, 0x4211ef9fu,
    0xe0496950u, 0x7e80e301u, 0x1cb85cb2u, 0xbaefd663u, 0x59275014u, 0xf75ec9c5u, 0x95964376u, 0x33cdbd27u,
    0xd20536d8u, 0x703cb089u, 0x0e742a3au, 0xacaba3ebu, 0x4ae31d9cu, 0xe91a974du, 0x875210feu, 0x25898aafu,
};

struct bshim_003_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_003_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91c35f65u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x17af29dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d9af453u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2386becau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa9728941u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f5e53b8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb54a1e2fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b35e8a6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc121b31du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x470d7d94u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_003_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_003_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_003_reset(struct bshim_003_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00005ccdu;
    return 0;
}

