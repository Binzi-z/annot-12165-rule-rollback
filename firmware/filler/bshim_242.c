/* bshim_242 -- board support shim generated from the 0242 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_242_tab0[96] = {
    0xe9d7c4f6u, 0x880f3ea7u, 0x2646b858u, 0xc47e3209u, 0x62b5abbau, 0x00ed256bu, 0x9f249f1cu, 0x3d5c18cdu,
    0xdb93927eu, 0x79cb0c2fu, 0x180285e0u, 0xb639ff91u, 0x54717942u, 0xf2a8f2f3u, 0x90e06ca4u, 0x2f17e655u,
    0xcd4f6006u, 0x6b86d9b7u, 0x09be5368u, 0xa7f5cd19u, 0x462d46cau, 0xe464c07bu, 0x829c3a2cu, 0x20d3b3ddu,
    0xbf0b2d8eu, 0x5d42a73fu, 0xfb7a20f0u, 0x99b19aa1u, 0x37e91452u, 0xd6208e03u, 0x745807b4u, 0x128f8165u,
    0xb0c6fb16u, 0x4efe74c7u, 0xed35ee78u, 0x8b6d6829u, 0x29a4e1dau, 0xc7dc5b8bu, 0x6613d53cu, 0x044b4eedu,
    0xa282c89eu, 0x40ba424fu, 0xdef1bc00u, 0x7d2935b1u, 0x1b60af62u, 0xb9982913u, 0x57cfa2c4u, 0xf6071c75u,
    0x943e9626u, 0x32760fd7u, 0xd0ad8988u, 0x6ee50339u, 0x0d1c7ceau, 0xab53f69bu, 0x498b704cu, 0xe7c2e9fdu,
    0x85fa63aeu, 0x2431dd5fu, 0xc2695710u, 0x60a0d0c1u, 0xfed84a72u, 0x9d0fc423u, 0x3b473dd4u, 0xd97eb785u,
    0x77b63136u, 0x15edaae7u, 0xb4252498u, 0x525c9e49u, 0xf09417fau, 0x8ecb91abu, 0x2d030b5cu, 0xcb3a850du,
    0x6971febeu, 0x07a9786fu, 0xa5e0f220u, 0x44186bd1u, 0xe24fe582u, 0x80875f33u, 0x1ebed8e4u, 0xbcf65295u,
    0x5b2dcc46u, 0xf96545f7u, 0x979cbfa8u, 0x35d43959u, 0xd40bb30au, 0x72432cbbu, 0x107aa66cu, 0xaeb2201du,
    0x4ce999ceu, 0xeb21137fu, 0x89588d30u, 0x279006e1u, 0xc5c78092u, 0x63fefa43u, 0x023673f4u, 0xa06deda5u,
};

static const uint32_t bshim_242_tab1[96] = {
    0x6b86d9b7u, 0x09be5368u, 0xa7f5cd19u, 0x462d46cau, 0xe464c07bu, 0x829c3a2cu, 0x20d3b3ddu, 0xbf0b2d8eu,
    0x5d42a73fu, 0xfb7a20f0u, 0x99b19aa1u, 0x37e91452u, 0xd6208e03u, 0x745807b4u, 0x128f8165u, 0xb0c6fb16u,
    0x4efe74c7u, 0xed35ee78u, 0x8b6d6829u, 0x29a4e1dau, 0xc7dc5b8bu, 0x6613d53cu, 0x044b4eedu, 0xa282c89eu,
    0x40ba424fu, 0xdef1bc00u, 0x7d2935b1u, 0x1b60af62u, 0xb9982913u, 0x57cfa2c4u, 0xf6071c75u, 0x943e9626u,
    0x32760fd7u, 0xd0ad8988u, 0x6ee50339u, 0x0d1c7ceau, 0xab53f69bu, 0x498b704cu, 0xe7c2e9fdu, 0x85fa63aeu,
    0x2431dd5fu, 0xc2695710u, 0x60a0d0c1u, 0xfed84a72u, 0x9d0fc423u, 0x3b473dd4u, 0xd97eb785u, 0x77b63136u,
    0x15edaae7u, 0xb4252498u, 0x525c9e49u, 0xf09417fau, 0x8ecb91abu, 0x2d030b5cu, 0xcb3a850du, 0x6971febeu,
    0x07a9786fu, 0xa5e0f220u, 0x44186bd1u, 0xe24fe582u, 0x80875f33u, 0x1ebed8e4u, 0xbcf65295u, 0x5b2dcc46u,
    0xf96545f7u, 0x979cbfa8u, 0x35d43959u, 0xd40bb30au, 0x72432cbbu, 0x107aa66cu, 0xaeb2201du, 0x4ce999ceu,
    0xeb21137fu, 0x89588d30u, 0x279006e1u, 0xc5c78092u, 0x63fefa43u, 0x023673f4u, 0xa06deda5u, 0x3ea56756u,
    0xdcdce107u, 0x7b145ab8u, 0x194bd469u, 0xb7834e1au, 0x55bac7cbu, 0xf3f2417cu, 0x9229bb2du, 0x306134deu,
    0xce98ae8fu, 0x6cd02840u, 0x0b07a1f1u, 0xa93f1ba2u, 0x47769553u, 0xe5ae0f04u, 0x83e588b5u, 0x221d0266u,
};

static const uint32_t bshim_242_tab2[96] = {
    0xed35ee78u, 0x8b6d6829u, 0x29a4e1dau, 0xc7dc5b8bu, 0x6613d53cu, 0x044b4eedu, 0xa282c89eu, 0x40ba424fu,
    0xdef1bc00u, 0x7d2935b1u, 0x1b60af62u, 0xb9982913u, 0x57cfa2c4u, 0xf6071c75u, 0x943e9626u, 0x32760fd7u,
    0xd0ad8988u, 0x6ee50339u, 0x0d1c7ceau, 0xab53f69bu, 0x498b704cu, 0xe7c2e9fdu, 0x85fa63aeu, 0x2431dd5fu,
    0xc2695710u, 0x60a0d0c1u, 0xfed84a72u, 0x9d0fc423u, 0x3b473dd4u, 0xd97eb785u, 0x77b63136u, 0x15edaae7u,
    0xb4252498u, 0x525c9e49u, 0xf09417fau, 0x8ecb91abu, 0x2d030b5cu, 0xcb3a850du, 0x6971febeu, 0x07a9786fu,
    0xa5e0f220u, 0x44186bd1u, 0xe24fe582u, 0x80875f33u, 0x1ebed8e4u, 0xbcf65295u, 0x5b2dcc46u, 0xf96545f7u,
    0x979cbfa8u, 0x35d43959u, 0xd40bb30au, 0x72432cbbu, 0x107aa66cu, 0xaeb2201du, 0x4ce999ceu, 0xeb21137fu,
    0x89588d30u, 0x279006e1u, 0xc5c78092u, 0x63fefa43u, 0x023673f4u, 0xa06deda5u, 0x3ea56756u, 0xdcdce107u,
    0x7b145ab8u, 0x194bd469u, 0xb7834e1au, 0x55bac7cbu, 0xf3f2417cu, 0x9229bb2du, 0x306134deu, 0xce98ae8fu,
    0x6cd02840u, 0x0b07a1f1u, 0xa93f1ba2u, 0x47769553u, 0xe5ae0f04u, 0x83e588b5u, 0x221d0266u, 0xc0547c17u,
    0x5e8bf5c8u, 0xfcc36f79u, 0x9afae92au, 0x393262dbu, 0xd769dc8cu, 0x75a1563du, 0x13d8cfeeu, 0xb210499fu,
    0x5047c350u, 0xee7f3d01u, 0x8cb6b6b2u, 0x2aee3063u, 0xc925aa14u, 0x675d23c5u, 0x05949d76u, 0xa3cc1727u,
};

static const uint32_t bshim_242_tab3[96] = {
    0x6ee50339u, 0x0d1c7ceau, 0xab53f69bu, 0x498b704cu, 0xe7c2e9fdu, 0x85fa63aeu, 0x2431dd5fu, 0xc2695710u,
    0x60a0d0c1u, 0xfed84a72u, 0x9d0fc423u, 0x3b473dd4u, 0xd97eb785u, 0x77b63136u, 0x15edaae7u, 0xb4252498u,
    0x525c9e49u, 0xf09417fau, 0x8ecb91abu, 0x2d030b5cu, 0xcb3a850du, 0x6971febeu, 0x07a9786fu, 0xa5e0f220u,
    0x44186bd1u, 0xe24fe582u, 0x80875f33u, 0x1ebed8e4u, 0xbcf65295u, 0x5b2dcc46u, 0xf96545f7u, 0x979cbfa8u,
    0x35d43959u, 0xd40bb30au, 0x72432cbbu, 0x107aa66cu, 0xaeb2201du, 0x4ce999ceu, 0xeb21137fu, 0x89588d30u,
    0x279006e1u, 0xc5c78092u, 0x63fefa43u, 0x023673f4u, 0xa06deda5u, 0x3ea56756u, 0xdcdce107u, 0x7b145ab8u,
    0x194bd469u, 0xb7834e1au, 0x55bac7cbu, 0xf3f2417cu, 0x9229bb2du, 0x306134deu, 0xce98ae8fu, 0x6cd02840u,
    0x0b07a1f1u, 0xa93f1ba2u, 0x47769553u, 0xe5ae0f04u, 0x83e588b5u, 0x221d0266u, 0xc0547c17u, 0x5e8bf5c8u,
    0xfcc36f79u, 0x9afae92au, 0x393262dbu, 0xd769dc8cu, 0x75a1563du, 0x13d8cfeeu, 0xb210499fu, 0x5047c350u,
    0xee7f3d01u, 0x8cb6b6b2u, 0x2aee3063u, 0xc925aa14u, 0x675d23c5u, 0x05949d76u, 0xa3cc1727u, 0x420390d8u,
    0xe03b0a89u, 0x7e72843au, 0x1ca9fdebu, 0xbae1779cu, 0x5918f14du, 0xf7506afeu, 0x9587e4afu, 0x33bf5e60u,
    0xd1f6d811u, 0x702e51c2u, 0x0e65cb73u, 0xac9d4524u, 0x4ad4bed5u, 0xe90c3886u, 0x8743b237u, 0x257b2be8u,
};

static const uint32_t bshim_242_tab4[96] = {
    0xf09417fau, 0x8ecb91abu, 0x2d030b5cu, 0xcb3a850du, 0x6971febeu, 0x07a9786fu, 0xa5e0f220u, 0x44186bd1u,
    0xe24fe582u, 0x80875f33u, 0x1ebed8e4u, 0xbcf65295u, 0x5b2dcc46u, 0xf96545f7u, 0x979cbfa8u, 0x35d43959u,
    0xd40bb30au, 0x72432cbbu, 0x107aa66cu, 0xaeb2201du, 0x4ce999ceu, 0xeb21137fu, 0x89588d30u, 0x279006e1u,
    0xc5c78092u, 0x63fefa43u, 0x023673f4u, 0xa06deda5u, 0x3ea56756u, 0xdcdce107u, 0x7b145ab8u, 0x194bd469u,
    0xb7834e1au, 0x55bac7cbu, 0xf3f2417cu, 0x9229bb2du, 0x306134deu, 0xce98ae8fu, 0x6cd02840u, 0x0b07a1f1u,
    0xa93f1ba2u, 0x47769553u, 0xe5ae0f04u, 0x83e588b5u, 0x221d0266u, 0xc0547c17u, 0x5e8bf5c8u, 0xfcc36f79u,
    0x9afae92au, 0x393262dbu, 0xd769dc8cu, 0x75a1563du, 0x13d8cfeeu, 0xb210499fu, 0x5047c350u, 0xee7f3d01u,
    0x8cb6b6b2u, 0x2aee3063u, 0xc925aa14u, 0x675d23c5u, 0x05949d76u, 0xa3cc1727u, 0x420390d8u, 0xe03b0a89u,
    0x7e72843au, 0x1ca9fdebu, 0xbae1779cu, 0x5918f14du, 0xf7506afeu, 0x9587e4afu, 0x33bf5e60u, 0xd1f6d811u,
    0x702e51c2u, 0x0e65cb73u, 0xac9d4524u, 0x4ad4bed5u, 0xe90c3886u, 0x8743b237u, 0x257b2be8u, 0xc3b2a599u,
    0x61ea1f4au, 0x002198fbu, 0x9e5912acu, 0x3c908c5du, 0xdac8060eu, 0x78ff7fbfu, 0x1736f970u, 0xb56e7321u,
    0x53a5ecd2u, 0xf1dd6683u, 0x9014e034u, 0x2e4c59e5u, 0xcc83d396u, 0x6abb4d47u, 0x08f2c6f8u, 0xa72a40a9u,
};

static const uint32_t bshim_242_tab5[96] = {
    0x72432cbbu, 0x107aa66cu, 0xaeb2201du, 0x4ce999ceu, 0xeb21137fu, 0x89588d30u, 0x279006e1u, 0xc5c78092u,
    0x63fefa43u, 0x023673f4u, 0xa06deda5u, 0x3ea56756u, 0xdcdce107u, 0x7b145ab8u, 0x194bd469u, 0xb7834e1au,
    0x55bac7cbu, 0xf3f2417cu, 0x9229bb2du, 0x306134deu, 0xce98ae8fu, 0x6cd02840u, 0x0b07a1f1u, 0xa93f1ba2u,
    0x47769553u, 0xe5ae0f04u, 0x83e588b5u, 0x221d0266u, 0xc0547c17u, 0x5e8bf5c8u, 0xfcc36f79u, 0x9afae92au,
    0x393262dbu, 0xd769dc8cu, 0x75a1563du, 0x13d8cfeeu, 0xb210499fu, 0x5047c350u, 0xee7f3d01u, 0x8cb6b6b2u,
    0x2aee3063u, 0xc925aa14u, 0x675d23c5u, 0x05949d76u, 0xa3cc1727u, 0x420390d8u, 0xe03b0a89u, 0x7e72843au,
    0x1ca9fdebu, 0xbae1779cu, 0x5918f14du, 0xf7506afeu, 0x9587e4afu, 0x33bf5e60u, 0xd1f6d811u, 0x702e51c2u,
    0x0e65cb73u, 0xac9d4524u, 0x4ad4bed5u, 0xe90c3886u, 0x8743b237u, 0x257b2be8u, 0xc3b2a599u, 0x61ea1f4au,
    0x002198fbu, 0x9e5912acu, 0x3c908c5du, 0xdac8060eu, 0x78ff7fbfu, 0x1736f970u, 0xb56e7321u, 0x53a5ecd2u,
    0xf1dd6683u, 0x9014e034u, 0x2e4c59e5u, 0xcc83d396u, 0x6abb4d47u, 0x08f2c6f8u, 0xa72a40a9u, 0x4561ba5au,
    0xe399340bu, 0x81d0adbcu, 0x2008276du, 0xbe3fa11eu, 0x5c771acfu, 0xfaae9480u, 0x98e60e31u, 0x371d87e2u,
    0xd5550193u, 0x738c7b44u, 0x11c3f4f5u, 0xaffb6ea6u, 0x4e32e857u, 0xec6a6208u, 0x8aa1dbb9u, 0x28d9556au,
};

static const uint32_t bshim_242_tab6[96] = {
    0xf3f2417cu, 0x9229bb2du, 0x306134deu, 0xce98ae8fu, 0x6cd02840u, 0x0b07a1f1u, 0xa93f1ba2u, 0x47769553u,
    0xe5ae0f04u, 0x83e588b5u, 0x221d0266u, 0xc0547c17u, 0x5e8bf5c8u, 0xfcc36f79u, 0x9afae92au, 0x393262dbu,
    0xd769dc8cu, 0x75a1563du, 0x13d8cfeeu, 0xb210499fu, 0x5047c350u, 0xee7f3d01u, 0x8cb6b6b2u, 0x2aee3063u,
    0xc925aa14u, 0x675d23c5u, 0x05949d76u, 0xa3cc1727u, 0x420390d8u, 0xe03b0a89u, 0x7e72843au, 0x1ca9fdebu,
    0xbae1779cu, 0x5918f14du, 0xf7506afeu, 0x9587e4afu, 0x33bf5e60u, 0xd1f6d811u, 0x702e51c2u, 0x0e65cb73u,
    0xac9d4524u, 0x4ad4bed5u, 0xe90c3886u, 0x8743b237u, 0x257b2be8u, 0xc3b2a599u, 0x61ea1f4au, 0x002198fbu,
    0x9e5912acu, 0x3c908c5du, 0xdac8060eu, 0x78ff7fbfu, 0x1736f970u, 0xb56e7321u, 0x53a5ecd2u, 0xf1dd6683u,
    0x9014e034u, 0x2e4c59e5u, 0xcc83d396u, 0x6abb4d47u, 0x08f2c6f8u, 0xa72a40a9u, 0x4561ba5au, 0xe399340bu,
    0x81d0adbcu, 0x2008276du, 0xbe3fa11eu, 0x5c771acfu, 0xfaae9480u, 0x98e60e31u, 0x371d87e2u, 0xd5550193u,
    0x738c7b44u, 0x11c3f4f5u, 0xaffb6ea6u, 0x4e32e857u, 0xec6a6208u, 0x8aa1dbb9u, 0x28d9556au, 0xc710cf1bu,
    0x654848ccu, 0x037fc27du, 0xa1b73c2eu, 0x3feeb5dfu, 0xde262f90u, 0x7c5da941u, 0x1a9522f2u, 0xb8cc9ca3u,
    0x57041654u, 0xf53b9005u, 0x937309b6u, 0x31aa8367u, 0xcfe1fd18u, 0x6e1976c9u, 0x0c50f07au, 0xaa886a2bu,
};

static const uint32_t bshim_242_tab7[96] = {
    0x75a1563du, 0x13d8cfeeu, 0xb210499fu, 0x5047c350u, 0xee7f3d01u, 0x8cb6b6b2u, 0x2aee3063u, 0xc925aa14u,
    0x675d23c5u, 0x05949d76u, 0xa3cc1727u, 0x420390d8u, 0xe03b0a89u, 0x7e72843au, 0x1ca9fdebu, 0xbae1779cu,
    0x5918f14du, 0xf7506afeu, 0x9587e4afu, 0x33bf5e60u, 0xd1f6d811u, 0x702e51c2u, 0x0e65cb73u, 0xac9d4524u,
    0x4ad4bed5u, 0xe90c3886u, 0x8743b237u, 0x257b2be8u, 0xc3b2a599u, 0x61ea1f4au, 0x002198fbu, 0x9e5912acu,
    0x3c908c5du, 0xdac8060eu, 0x78ff7fbfu, 0x1736f970u, 0xb56e7321u, 0x53a5ecd2u, 0xf1dd6683u, 0x9014e034u,
    0x2e4c59e5u, 0xcc83d396u, 0x6abb4d47u, 0x08f2c6f8u, 0xa72a40a9u, 0x4561ba5au, 0xe399340bu, 0x81d0adbcu,
    0x2008276du, 0xbe3fa11eu, 0x5c771acfu, 0xfaae9480u, 0x98e60e31u, 0x371d87e2u, 0xd5550193u, 0x738c7b44u,
    0x11c3f4f5u, 0xaffb6ea6u, 0x4e32e857u, 0xec6a6208u, 0x8aa1dbb9u, 0x28d9556au, 0xc710cf1bu, 0x654848ccu,
    0x037fc27du, 0xa1b73c2eu, 0x3feeb5dfu, 0xde262f90u, 0x7c5da941u, 0x1a9522f2u, 0xb8cc9ca3u, 0x57041654u,
    0xf53b9005u, 0x937309b6u, 0x31aa8367u, 0xcfe1fd18u, 0x6e1976c9u, 0x0c50f07au, 0xaa886a2bu, 0x48bfe3dcu,
    0xe6f75d8du, 0x852ed73eu, 0x236650efu, 0xc19dcaa0u, 0x5fd54451u, 0xfe0cbe02u, 0x9c4437b3u, 0x3a7bb164u,
    0xd8b32b15u, 0x76eaa4c6u, 0x15221e77u, 0xb3599828u, 0x519111d9u, 0xefc88b8au, 0x8e00053bu, 0x2c377eecu,
};

struct bshim_242_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_242_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_242_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_242_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_242_reset(struct bshim_242_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001d3deeu;
    return 0;
}

