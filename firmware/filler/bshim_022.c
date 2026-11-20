/* bshim_022 -- board support shim generated from the 0022 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_022_tab0[96] = {
    0x2c87faa2u, 0xcabf7453u, 0x68f6ee04u, 0x072e67b5u, 0xa565e166u, 0x439d5b17u, 0xe1d4d4c8u, 0x800c4e79u,
    0x1e43c82au, 0xbc7b41dbu, 0x5ab2bb8cu, 0xf8ea353du, 0x9721aeeeu, 0x3559289fu, 0xd390a250u, 0x71c81c01u,
    0x0fff95b2u, 0xae370f63u, 0x4c6e8914u, 0xeaa602c5u, 0x88dd7c76u, 0x2714f627u, 0xc54c6fd8u, 0x6383e989u,
    0x01bb633au, 0x9ff2dcebu, 0x3e2a569cu, 0xdc61d04du, 0x7a9949feu, 0x18d0c3afu, 0xb7083d60u, 0x553fb711u,
    0xf37730c2u, 0x91aeaa73u, 0x2fe62424u, 0xce1d9dd5u, 0x6c551786u, 0x0a8c9137u, 0xa8c40ae8u, 0x46fb8499u,
    0xe532fe4au, 0x836a77fbu, 0x21a1f1acu, 0xbfd96b5du, 0x5e10e50eu, 0xfc485ebfu, 0x9a7fd870u, 0x38b75221u,
    0xd6eecbd2u, 0x75264583u, 0x135dbf34u, 0xb19538e5u, 0x4fccb296u, 0xee042c47u, 0x8c3ba5f8u, 0x2a731fa9u,
    0xc8aa995au, 0x66e2130bu, 0x05198cbcu, 0xa351066du, 0x4188801eu, 0xdfbff9cfu, 0x7df77380u, 0x1c2eed31u,
    0xba6666e2u, 0x589de093u, 0xf6d55a44u, 0x950cd3f5u, 0x33444da6u, 0xd17bc757u, 0x6fb34108u, 0x0deabab9u,
    0xac22346au, 0x4a59ae1bu, 0xe89127ccu, 0x86c8a17du, 0x25001b2eu, 0xc33794dfu, 0x616f0e90u, 0xffa68841u,
    0x9dde01f2u, 0x3c157ba3u, 0xda4cf554u, 0x78846f05u, 0x16bbe8b6u, 0xb4f36267u, 0x532adc18u, 0xf16255c9u,
    0x8f99cf7au, 0x2dd1492bu, 0xcc08c2dcu, 0x6a403c8du, 0x0877b63eu, 0xa6af2fefu, 0x44e6a9a0u, 0xe31e2351u,
};

static const uint32_t bshim_022_tab1[96] = {
    0xae370f63u, 0x4c6e8914u, 0xeaa602c5u, 0x88dd7c76u, 0x2714f627u, 0xc54c6fd8u, 0x6383e989u, 0x01bb633au,
    0x9ff2dcebu, 0x3e2a569cu, 0xdc61d04du, 0x7a9949feu, 0x18d0c3afu, 0xb7083d60u, 0x553fb711u, 0xf37730c2u,
    0x91aeaa73u, 0x2fe62424u, 0xce1d9dd5u, 0x6c551786u, 0x0a8c9137u, 0xa8c40ae8u, 0x46fb8499u, 0xe532fe4au,
    0x836a77fbu, 0x21a1f1acu, 0xbfd96b5du, 0x5e10e50eu, 0xfc485ebfu, 0x9a7fd870u, 0x38b75221u, 0xd6eecbd2u,
    0x75264583u, 0x135dbf34u, 0xb19538e5u, 0x4fccb296u, 0xee042c47u, 0x8c3ba5f8u, 0x2a731fa9u, 0xc8aa995au,
    0x66e2130bu, 0x05198cbcu, 0xa351066du, 0x4188801eu, 0xdfbff9cfu, 0x7df77380u, 0x1c2eed31u, 0xba6666e2u,
    0x589de093u, 0xf6d55a44u, 0x950cd3f5u, 0x33444da6u, 0xd17bc757u, 0x6fb34108u, 0x0deabab9u, 0xac22346au,
    0x4a59ae1bu, 0xe89127ccu, 0x86c8a17du, 0x25001b2eu, 0xc33794dfu, 0x616f0e90u, 0xffa68841u, 0x9dde01f2u,
    0x3c157ba3u, 0xda4cf554u, 0x78846f05u, 0x16bbe8b6u, 0xb4f36267u, 0x532adc18u, 0xf16255c9u, 0x8f99cf7au,
    0x2dd1492bu, 0xcc08c2dcu, 0x6a403c8du, 0x0877b63eu, 0xa6af2fefu, 0x44e6a9a0u, 0xe31e2351u, 0x81559d02u,
    0x1f8d16b3u, 0xbdc49064u, 0x5bfc0a15u, 0xfa3383c6u, 0x986afd77u, 0x36a27728u, 0xd4d9f0d9u, 0x73116a8au,
    0x1148e43bu, 0xaf805decu, 0x4db7d79du, 0xebef514eu, 0x8a26caffu, 0x285e44b0u, 0xc695be61u, 0x64cd3812u,
};

static const uint32_t bshim_022_tab2[96] = {
    0x2fe62424u, 0xce1d9dd5u, 0x6c551786u, 0x0a8c9137u, 0xa8c40ae8u, 0x46fb8499u, 0xe532fe4au, 0x836a77fbu,
    0x21a1f1acu, 0xbfd96b5du, 0x5e10e50eu, 0xfc485ebfu, 0x9a7fd870u, 0x38b75221u, 0xd6eecbd2u, 0x75264583u,
    0x135dbf34u, 0xb19538e5u, 0x4fccb296u, 0xee042c47u, 0x8c3ba5f8u, 0x2a731fa9u, 0xc8aa995au, 0x66e2130bu,
    0x05198cbcu, 0xa351066du, 0x4188801eu, 0xdfbff9cfu, 0x7df77380u, 0x1c2eed31u, 0xba6666e2u, 0x589de093u,
    0xf6d55a44u, 0x950cd3f5u, 0x33444da6u, 0xd17bc757u, 0x6fb34108u, 0x0deabab9u, 0xac22346au, 0x4a59ae1bu,
    0xe89127ccu, 0x86c8a17du, 0x25001b2eu, 0xc33794dfu, 0x616f0e90u, 0xffa68841u, 0x9dde01f2u, 0x3c157ba3u,
    0xda4cf554u, 0x78846f05u, 0x16bbe8b6u, 0xb4f36267u, 0x532adc18u, 0xf16255c9u, 0x8f99cf7au, 0x2dd1492bu,
    0xcc08c2dcu, 0x6a403c8du, 0x0877b63eu, 0xa6af2fefu, 0x44e6a9a0u, 0xe31e2351u, 0x81559d02u, 0x1f8d16b3u,
    0xbdc49064u, 0x5bfc0a15u, 0xfa3383c6u, 0x986afd77u, 0x36a27728u, 0xd4d9f0d9u, 0x73116a8au, 0x1148e43bu,
    0xaf805decu, 0x4db7d79du, 0xebef514eu, 0x8a26caffu, 0x285e44b0u, 0xc695be61u, 0x64cd3812u, 0x0304b1c3u,
    0xa13c2b74u, 0x3f73a525u, 0xddab1ed6u, 0x7be29887u, 0x1a1a1238u, 0xb8518be9u, 0x5689059au, 0xf4c07f4bu,
    0x92f7f8fcu, 0x312f72adu, 0xcf66ec5eu, 0x6d9e660fu, 0x0bd5dfc0u, 0xaa0d5971u, 0x4844d322u, 0xe67c4cd3u,
};

static const uint32_t bshim_022_tab3[96] = {
    0xb19538e5u, 0x4fccb296u, 0xee042c47u, 0x8c3ba5f8u, 0x2a731fa9u, 0xc8aa995au, 0x66e2130bu, 0x05198cbcu,
    0xa351066du, 0x4188801eu, 0xdfbff9cfu, 0x7df77380u, 0x1c2eed31u, 0xba6666e2u, 0x589de093u, 0xf6d55a44u,
    0x950cd3f5u, 0x33444da6u, 0xd17bc757u, 0x6fb34108u, 0x0deabab9u, 0xac22346au, 0x4a59ae1bu, 0xe89127ccu,
    0x86c8a17du, 0x25001b2eu, 0xc33794dfu, 0x616f0e90u, 0xffa68841u, 0x9dde01f2u, 0x3c157ba3u, 0xda4cf554u,
    0x78846f05u, 0x16bbe8b6u, 0xb4f36267u, 0x532adc18u, 0xf16255c9u, 0x8f99cf7au, 0x2dd1492bu, 0xcc08c2dcu,
    0x6a403c8du, 0x0877b63eu, 0xa6af2fefu, 0x44e6a9a0u, 0xe31e2351u, 0x81559d02u, 0x1f8d16b3u, 0xbdc49064u,
    0x5bfc0a15u, 0xfa3383c6u, 0x986afd77u, 0x36a27728u, 0xd4d9f0d9u, 0x73116a8au, 0x1148e43bu, 0xaf805decu,
    0x4db7d79du, 0xebef514eu, 0x8a26caffu, 0x285e44b0u, 0xc695be61u, 0x64cd3812u, 0x0304b1c3u, 0xa13c2b74u,
    0x3f73a525u, 0xddab1ed6u, 0x7be29887u, 0x1a1a1238u, 0xb8518be9u, 0x5689059au, 0xf4c07f4bu, 0x92f7f8fcu,
    0x312f72adu, 0xcf66ec5eu, 0x6d9e660fu, 0x0bd5dfc0u, 0xaa0d5971u, 0x4844d322u, 0xe67c4cd3u, 0x84b3c684u,
    0x22eb4035u, 0xc122b9e6u, 0x5f5a3397u, 0xfd91ad48u, 0x9bc926f9u, 0x3a00a0aau, 0xd8381a5bu, 0x766f940cu,
    0x14a70dbdu, 0xb2de876eu, 0x5116011fu, 0xef4d7ad0u, 0x8d84f481u, 0x2bbc6e32u, 0xc9f3e7e3u, 0x682b6194u,
};

static const uint32_t bshim_022_tab4[96] = {
    0x33444da6u, 0xd17bc757u, 0x6fb34108u, 0x0deabab9u, 0xac22346au, 0x4a59ae1bu, 0xe89127ccu, 0x86c8a17du,
    0x25001b2eu, 0xc33794dfu, 0x616f0e90u, 0xffa68841u, 0x9dde01f2u, 0x3c157ba3u, 0xda4cf554u, 0x78846f05u,
    0x16bbe8b6u, 0xb4f36267u, 0x532adc18u, 0xf16255c9u, 0x8f99cf7au, 0x2dd1492bu, 0xcc08c2dcu, 0x6a403c8du,
    0x0877b63eu, 0xa6af2fefu, 0x44e6a9a0u, 0xe31e2351u, 0x81559d02u, 0x1f8d16b3u, 0xbdc49064u, 0x5bfc0a15u,
    0xfa3383c6u, 0x986afd77u, 0x36a27728u, 0xd4d9f0d9u, 0x73116a8au, 0x1148e43bu, 0xaf805decu, 0x4db7d79du,
    0xebef514eu, 0x8a26caffu, 0x285e44b0u, 0xc695be61u, 0x64cd3812u, 0x0304b1c3u, 0xa13c2b74u, 0x3f73a525u,
    0xddab1ed6u, 0x7be29887u, 0x1a1a1238u, 0xb8518be9u, 0x5689059au, 0xf4c07f4bu, 0x92f7f8fcu, 0x312f72adu,
    0xcf66ec5eu, 0x6d9e660fu, 0x0bd5dfc0u, 0xaa0d5971u, 0x4844d322u, 0xe67c4cd3u, 0x84b3c684u, 0x22eb4035u,
    0xc122b9e6u, 0x5f5a3397u, 0xfd91ad48u, 0x9bc926f9u, 0x3a00a0aau, 0xd8381a5bu, 0x766f940cu, 0x14a70dbdu,
    0xb2de876eu, 0x5116011fu, 0xef4d7ad0u, 0x8d84f481u, 0x2bbc6e32u, 0xc9f3e7e3u, 0x682b6194u, 0x0662db45u,
    0xa49a54f6u, 0x42d1cea7u, 0xe1094858u, 0x7f40c209u, 0x1d783bbau, 0xbbafb56bu, 0x59e72f1cu, 0xf81ea8cdu,
    0x9656227eu, 0x348d9c2fu, 0xd2c515e0u, 0x70fc8f91u, 0x0f340942u, 0xad6b82f3u, 0x4ba2fca4u, 0xe9da7655u,
};

static const uint32_t bshim_022_tab5[96] = {
    0xb4f36267u, 0x532adc18u, 0xf16255c9u, 0x8f99cf7au, 0x2dd1492bu, 0xcc08c2dcu, 0x6a403c8du, 0x0877b63eu,
    0xa6af2fefu, 0x44e6a9a0u, 0xe31e2351u, 0x81559d02u, 0x1f8d16b3u, 0xbdc49064u, 0x5bfc0a15u, 0xfa3383c6u,
    0x986afd77u, 0x36a27728u, 0xd4d9f0d9u, 0x73116a8au, 0x1148e43bu, 0xaf805decu, 0x4db7d79du, 0xebef514eu,
    0x8a26caffu, 0x285e44b0u, 0xc695be61u, 0x64cd3812u, 0x0304b1c3u, 0xa13c2b74u, 0x3f73a525u, 0xddab1ed6u,
    0x7be29887u, 0x1a1a1238u, 0xb8518be9u, 0x5689059au, 0xf4c07f4bu, 0x92f7f8fcu, 0x312f72adu, 0xcf66ec5eu,
    0x6d9e660fu, 0x0bd5dfc0u, 0xaa0d5971u, 0x4844d322u, 0xe67c4cd3u, 0x84b3c684u, 0x22eb4035u, 0xc122b9e6u,
    0x5f5a3397u, 0xfd91ad48u, 0x9bc926f9u, 0x3a00a0aau, 0xd8381a5bu, 0x766f940cu, 0x14a70dbdu, 0xb2de876eu,
    0x5116011fu, 0xef4d7ad0u, 0x8d84f481u, 0x2bbc6e32u, 0xc9f3e7e3u, 0x682b6194u, 0x0662db45u, 0xa49a54f6u,
    0x42d1cea7u, 0xe1094858u, 0x7f40c209u, 0x1d783bbau, 0xbbafb56bu, 0x59e72f1cu, 0xf81ea8cdu, 0x9656227eu,
    0x348d9c2fu, 0xd2c515e0u, 0x70fc8f91u, 0x0f340942u, 0xad6b82f3u, 0x4ba2fca4u, 0xe9da7655u, 0x8811f006u,
    0x264969b7u, 0xc480e368u, 0x62b85d19u, 0x00efd6cau, 0x9f27507bu, 0x3d5eca2cu, 0xdb9643ddu, 0x79cdbd8eu,
    0x1805373fu, 0xb63cb0f0u, 0x54742aa1u, 0xf2aba452u, 0x90e31e03u, 0x2f1a97b4u, 0xcd521165u, 0x6b898b16u,
};

static const uint32_t bshim_022_tab6[96] = {
    0x36a27728u, 0xd4d9f0d9u, 0x73116a8au, 0x1148e43bu, 0xaf805decu, 0x4db7d79du, 0xebef514eu, 0x8a26caffu,
    0x285e44b0u, 0xc695be61u, 0x64cd3812u, 0x0304b1c3u, 0xa13c2b74u, 0x3f73a525u, 0xddab1ed6u, 0x7be29887u,
    0x1a1a1238u, 0xb8518be9u, 0x5689059au, 0xf4c07f4bu, 0x92f7f8fcu, 0x312f72adu, 0xcf66ec5eu, 0x6d9e660fu,
    0x0bd5dfc0u, 0xaa0d5971u, 0x4844d322u, 0xe67c4cd3u, 0x84b3c684u, 0x22eb4035u, 0xc122b9e6u, 0x5f5a3397u,
    0xfd91ad48u, 0x9bc926f9u, 0x3a00a0aau, 0xd8381a5bu, 0x766f940cu, 0x14a70dbdu, 0xb2de876eu, 0x5116011fu,
    0xef4d7ad0u, 0x8d84f481u, 0x2bbc6e32u, 0xc9f3e7e3u, 0x682b6194u, 0x0662db45u, 0xa49a54f6u, 0x42d1cea7u,
    0xe1094858u, 0x7f40c209u, 0x1d783bbau, 0xbbafb56bu, 0x59e72f1cu, 0xf81ea8cdu, 0x9656227eu, 0x348d9c2fu,
    0xd2c515e0u, 0x70fc8f91u, 0x0f340942u, 0xad6b82f3u, 0x4ba2fca4u, 0xe9da7655u, 0x8811f006u, 0x264969b7u,
    0xc480e368u, 0x62b85d19u, 0x00efd6cau, 0x9f27507bu, 0x3d5eca2cu, 0xdb9643ddu, 0x79cdbd8eu, 0x1805373fu,
    0xb63cb0f0u, 0x54742aa1u, 0xf2aba452u, 0x90e31e03u, 0x2f1a97b4u, 0xcd521165u, 0x6b898b16u, 0x09c104c7u,
    0xa7f87e78u, 0x462ff829u, 0xe46771dau, 0x829eeb8bu, 0x20d6653cu, 0xbf0ddeedu, 0x5d45589eu, 0xfb7cd24fu,
    0x99b44c00u, 0x37ebc5b1u, 0xd6233f62u, 0x745ab913u, 0x129232c4u, 0xb0c9ac75u, 0x4f012626u, 0xed389fd7u,
};

static const uint32_t bshim_022_tab7[96] = {
    0xb8518be9u, 0x5689059au, 0xf4c07f4bu, 0x92f7f8fcu, 0x312f72adu, 0xcf66ec5eu, 0x6d9e660fu, 0x0bd5dfc0u,
    0xaa0d5971u, 0x4844d322u, 0xe67c4cd3u, 0x84b3c684u, 0x22eb4035u, 0xc122b9e6u, 0x5f5a3397u, 0xfd91ad48u,
    0x9bc926f9u, 0x3a00a0aau, 0xd8381a5bu, 0x766f940cu, 0x14a70dbdu, 0xb2de876eu, 0x5116011fu, 0xef4d7ad0u,
    0x8d84f481u, 0x2bbc6e32u, 0xc9f3e7e3u, 0x682b6194u, 0x0662db45u, 0xa49a54f6u, 0x42d1cea7u, 0xe1094858u,
    0x7f40c209u, 0x1d783bbau, 0xbbafb56bu, 0x59e72f1cu, 0xf81ea8cdu, 0x9656227eu, 0x348d9c2fu, 0xd2c515e0u,
    0x70fc8f91u, 0x0f340942u, 0xad6b82f3u, 0x4ba2fca4u, 0xe9da7655u, 0x8811f006u, 0x264969b7u, 0xc480e368u,
    0x62b85d19u, 0x00efd6cau, 0x9f27507bu, 0x3d5eca2cu, 0xdb9643ddu, 0x79cdbd8eu, 0x1805373fu, 0xb63cb0f0u,
    0x54742aa1u, 0xf2aba452u, 0x90e31e03u, 0x2f1a97b4u, 0xcd521165u, 0x6b898b16u, 0x09c104c7u, 0xa7f87e78u,
    0x462ff829u, 0xe46771dau, 0x829eeb8bu, 0x20d6653cu, 0xbf0ddeedu, 0x5d45589eu, 0xfb7cd24fu, 0x99b44c00u,
    0x37ebc5b1u, 0xd6233f62u, 0x745ab913u, 0x129232c4u, 0xb0c9ac75u, 0x4f012626u, 0xed389fd7u, 0x8b701988u,
    0x29a79339u, 0xc7df0ceau, 0x6616869bu, 0x044e004cu, 0xa28579fdu, 0x40bcf3aeu, 0xdef46d5fu, 0x7d2be710u,
    0x1b6360c1u, 0xb99ada72u, 0x57d25423u, 0xf609cdd4u, 0x94414785u, 0x3278c136u, 0xd0b03ae7u, 0x6ee7b498u,
};

struct bshim_022_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_022_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_022_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_022_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_022_reset(struct bshim_022_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0002a88au;
    return 0;
}

