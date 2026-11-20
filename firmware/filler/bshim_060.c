/* bshim_060 -- board support shim generated from the 0060 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_060_tab0[96] = {
    0xbf444e74u, 0x5d7bc825u, 0xfbb341d6u, 0x99eabb87u, 0x38223538u, 0xd659aee9u, 0x7491289au, 0x12c8a24bu,
    0xb1001bfcu, 0x4f3795adu, 0xed6f0f5eu, 0x8ba6890fu, 0x29de02c0u, 0xc8157c71u, 0x664cf622u, 0x04846fd3u,
    0xa2bbe984u, 0x40f36335u, 0xdf2adce6u, 0x7d625697u, 0x1b99d048u, 0xb9d149f9u, 0x5808c3aau, 0xf6403d5bu,
    0x9477b70cu, 0x32af30bdu, 0xd0e6aa6eu, 0x6f1e241fu, 0x0d559dd0u, 0xab8d1781u, 0x49c49132u, 0xe7fc0ae3u,
    0x86338494u, 0x246afe45u, 0xc2a277f6u, 0x60d9f1a7u, 0xff116b58u, 0x9d48e509u, 0x3b805ebau, 0xd9b7d86bu,
    0x77ef521cu, 0x1626cbcdu, 0xb45e457eu, 0x5295bf2fu, 0xf0cd38e0u, 0x8f04b291u, 0x2d3c2c42u, 0xcb73a5f3u,
    0x69ab1fa4u, 0x07e29955u, 0xa61a1306u, 0x44518cb7u, 0xe2890668u, 0x80c08019u, 0x1ef7f9cau, 0xbd2f737bu,
    0x5b66ed2cu, 0xf99e66ddu, 0x97d5e08eu, 0x360d5a3fu, 0xd444d3f0u, 0x727c4da1u, 0x10b3c752u, 0xaeeb4103u,
    0x4d22bab4u, 0xeb5a3465u, 0x8991ae16u, 0x27c927c7u, 0xc600a178u, 0x64381b29u, 0x026f94dau, 0xa0a70e8bu,
    0x3ede883cu, 0xdd1601edu, 0x7b4d7b9eu, 0x1984f54fu, 0xb7bc6f00u, 0x55f3e8b1u, 0xf42b6262u, 0x9262dc13u,
    0x309a55c4u, 0xced1cf75u, 0x6d094926u, 0x0b40c2d7u, 0xa9783c88u, 0x47afb639u, 0xe5e72feau, 0x841ea99bu,
    0x2256234cu, 0xc08d9cfdu, 0x5ec516aeu, 0xfcfc905fu, 0x9b340a10u, 0x396b83c1u, 0xd7a2fd72u, 0x75da7723u,
};

static const uint32_t bshim_060_tab1[96] = {
    0x40f36335u, 0xdf2adce6u, 0x7d625697u, 0x1b99d048u, 0xb9d149f9u, 0x5808c3aau, 0xf6403d5bu, 0x9477b70cu,
    0x32af30bdu, 0xd0e6aa6eu, 0x6f1e241fu, 0x0d559dd0u, 0xab8d1781u, 0x49c49132u, 0xe7fc0ae3u, 0x86338494u,
    0x246afe45u, 0xc2a277f6u, 0x60d9f1a7u, 0xff116b58u, 0x9d48e509u, 0x3b805ebau, 0xd9b7d86bu, 0x77ef521cu,
    0x1626cbcdu, 0xb45e457eu, 0x5295bf2fu, 0xf0cd38e0u, 0x8f04b291u, 0x2d3c2c42u, 0xcb73a5f3u, 0x69ab1fa4u,
    0x07e29955u, 0xa61a1306u, 0x44518cb7u, 0xe2890668u, 0x80c08019u, 0x1ef7f9cau, 0xbd2f737bu, 0x5b66ed2cu,
    0xf99e66ddu, 0x97d5e08eu, 0x360d5a3fu, 0xd444d3f0u, 0x727c4da1u, 0x10b3c752u, 0xaeeb4103u, 0x4d22bab4u,
    0xeb5a3465u, 0x8991ae16u, 0x27c927c7u, 0xc600a178u, 0x64381b29u, 0x026f94dau, 0xa0a70e8bu, 0x3ede883cu,
    0xdd1601edu, 0x7b4d7b9eu, 0x1984f54fu, 0xb7bc6f00u, 0x55f3e8b1u, 0xf42b6262u, 0x9262dc13u, 0x309a55c4u,
    0xced1cf75u, 0x6d094926u, 0x0b40c2d7u, 0xa9783c88u, 0x47afb639u, 0xe5e72feau, 0x841ea99bu, 0x2256234cu,
    0xc08d9cfdu, 0x5ec516aeu, 0xfcfc905fu, 0x9b340a10u, 0x396b83c1u, 0xd7a2fd72u, 0x75da7723u, 0x1411f0d4u,
    0xb2496a85u, 0x5080e436u, 0xeeb85de7u, 0x8cefd798u, 0x2b275149u, 0xc95ecafau, 0x679644abu, 0x05cdbe5cu,
    0xa405380du, 0x423cb1beu, 0xe0742b6fu, 0x7eaba520u, 0x1ce31ed1u, 0xbb1a9882u, 0x59521233u, 0xf7898be4u,
};

static const uint32_t bshim_060_tab2[96] = {
    0xc2a277f6u, 0x60d9f1a7u, 0xff116b58u, 0x9d48e509u, 0x3b805ebau, 0xd9b7d86bu, 0x77ef521cu, 0x1626cbcdu,
    0xb45e457eu, 0x5295bf2fu, 0xf0cd38e0u, 0x8f04b291u, 0x2d3c2c42u, 0xcb73a5f3u, 0x69ab1fa4u, 0x07e29955u,
    0xa61a1306u, 0x44518cb7u, 0xe2890668u, 0x80c08019u, 0x1ef7f9cau, 0xbd2f737bu, 0x5b66ed2cu, 0xf99e66ddu,
    0x97d5e08eu, 0x360d5a3fu, 0xd444d3f0u, 0x727c4da1u, 0x10b3c752u, 0xaeeb4103u, 0x4d22bab4u, 0xeb5a3465u,
    0x8991ae16u, 0x27c927c7u, 0xc600a178u, 0x64381b29u, 0x026f94dau, 0xa0a70e8bu, 0x3ede883cu, 0xdd1601edu,
    0x7b4d7b9eu, 0x1984f54fu, 0xb7bc6f00u, 0x55f3e8b1u, 0xf42b6262u, 0x9262dc13u, 0x309a55c4u, 0xced1cf75u,
    0x6d094926u, 0x0b40c2d7u, 0xa9783c88u, 0x47afb639u, 0xe5e72feau, 0x841ea99bu, 0x2256234cu, 0xc08d9cfdu,
    0x5ec516aeu, 0xfcfc905fu, 0x9b340a10u, 0x396b83c1u, 0xd7a2fd72u, 0x75da7723u, 0x1411f0d4u, 0xb2496a85u,
    0x5080e436u, 0xeeb85de7u, 0x8cefd798u, 0x2b275149u, 0xc95ecafau, 0x679644abu, 0x05cdbe5cu, 0xa405380du,
    0x423cb1beu, 0xe0742b6fu, 0x7eaba520u, 0x1ce31ed1u, 0xbb1a9882u, 0x59521233u, 0xf7898be4u, 0x95c10595u,
    0x33f87f46u, 0xd22ff8f7u, 0x706772a8u, 0x0e9eec59u, 0xacd6660au, 0x4b0ddfbbu, 0xe945596cu, 0x877cd31du,
    0x25b44cceu, 0xc3ebc67fu, 0x62234030u, 0x005ab9e1u, 0x9e923392u, 0x3cc9ad43u, 0xdb0126f4u, 0x7938a0a5u,
};

static const uint32_t bshim_060_tab3[96] = {
    0x44518cb7u, 0xe2890668u, 0x80c08019u, 0x1ef7f9cau, 0xbd2f737bu, 0x5b66ed2cu, 0xf99e66ddu, 0x97d5e08eu,
    0x360d5a3fu, 0xd444d3f0u, 0x727c4da1u, 0x10b3c752u, 0xaeeb4103u, 0x4d22bab4u, 0xeb5a3465u, 0x8991ae16u,
    0x27c927c7u, 0xc600a178u, 0x64381b29u, 0x026f94dau, 0xa0a70e8bu, 0x3ede883cu, 0xdd1601edu, 0x7b4d7b9eu,
    0x1984f54fu, 0xb7bc6f00u, 0x55f3e8b1u, 0xf42b6262u, 0x9262dc13u, 0x309a55c4u, 0xced1cf75u, 0x6d094926u,
    0x0b40c2d7u, 0xa9783c88u, 0x47afb639u, 0xe5e72feau, 0x841ea99bu, 0x2256234cu, 0xc08d9cfdu, 0x5ec516aeu,
    0xfcfc905fu, 0x9b340a10u, 0x396b83c1u, 0xd7a2fd72u, 0x75da7723u, 0x1411f0d4u, 0xb2496a85u, 0x5080e436u,
    0xeeb85de7u, 0x8cefd798u, 0x2b275149u, 0xc95ecafau, 0x679644abu, 0x05cdbe5cu, 0xa405380du, 0x423cb1beu,
    0xe0742b6fu, 0x7eaba520u, 0x1ce31ed1u, 0xbb1a9882u, 0x59521233u, 0xf7898be4u, 0x95c10595u, 0x33f87f46u,
    0xd22ff8f7u, 0x706772a8u, 0x0e9eec59u, 0xacd6660au, 0x4b0ddfbbu, 0xe945596cu, 0x877cd31du, 0x25b44cceu,
    0xc3ebc67fu, 0x62234030u, 0x005ab9e1u, 0x9e923392u, 0x3cc9ad43u, 0xdb0126f4u, 0x7938a0a5u, 0x17701a56u,
    0xb5a79407u, 0x53df0db8u, 0xf2168769u, 0x904e011au, 0x2e857acbu, 0xccbcf47cu, 0x6af46e2du, 0x092be7deu,
    0xa763618fu, 0x459adb40u, 0xe3d254f1u, 0x8209cea2u, 0x20414853u, 0xbe78c204u, 0x5cb03bb5u, 0xfae7b566u,
};

static const uint32_t bshim_060_tab4[96] = {
    0xc600a178u, 0x64381b29u, 0x026f94dau, 0xa0a70e8bu, 0x3ede883cu, 0xdd1601edu, 0x7b4d7b9eu, 0x1984f54fu,
    0xb7bc6f00u, 0x55f3e8b1u, 0xf42b6262u, 0x9262dc13u, 0x309a55c4u, 0xced1cf75u, 0x6d094926u, 0x0b40c2d7u,
    0xa9783c88u, 0x47afb639u, 0xe5e72feau, 0x841ea99bu, 0x2256234cu, 0xc08d9cfdu, 0x5ec516aeu, 0xfcfc905fu,
    0x9b340a10u, 0x396b83c1u, 0xd7a2fd72u, 0x75da7723u, 0x1411f0d4u, 0xb2496a85u, 0x5080e436u, 0xeeb85de7u,
    0x8cefd798u, 0x2b275149u, 0xc95ecafau, 0x679644abu, 0x05cdbe5cu, 0xa405380du, 0x423cb1beu, 0xe0742b6fu,
    0x7eaba520u, 0x1ce31ed1u, 0xbb1a9882u, 0x59521233u, 0xf7898be4u, 0x95c10595u, 0x33f87f46u, 0xd22ff8f7u,
    0x706772a8u, 0x0e9eec59u, 0xacd6660au, 0x4b0ddfbbu, 0xe945596cu, 0x877cd31du, 0x25b44cceu, 0xc3ebc67fu,
    0x62234030u, 0x005ab9e1u, 0x9e923392u, 0x3cc9ad43u, 0xdb0126f4u, 0x7938a0a5u, 0x17701a56u, 0xb5a79407u,
    0x53df0db8u, 0xf2168769u, 0x904e011au, 0x2e857acbu, 0xccbcf47cu, 0x6af46e2du, 0x092be7deu, 0xa763618fu,
    0x459adb40u, 0xe3d254f1u, 0x8209cea2u, 0x20414853u, 0xbe78c204u, 0x5cb03bb5u, 0xfae7b566u, 0x991f2f17u,
    0x3756a8c8u, 0xd58e2279u, 0x73c59c2au, 0x11fd15dbu, 0xb0348f8cu, 0x4e6c093du, 0xeca382eeu, 0x8adafc9fu,
    0x29127650u, 0xc749f001u, 0x658169b2u, 0x03b8e363u, 0xa1f05d14u, 0x4027d6c5u, 0xde5f5076u, 0x7c96ca27u,
};

static const uint32_t bshim_060_tab5[96] = {
    0x47afb639u, 0xe5e72feau, 0x841ea99bu, 0x2256234cu, 0xc08d9cfdu, 0x5ec516aeu, 0xfcfc905fu, 0x9b340a10u,
    0x396b83c1u, 0xd7a2fd72u, 0x75da7723u, 0x1411f0d4u, 0xb2496a85u, 0x5080e436u, 0xeeb85de7u, 0x8cefd798u,
    0x2b275149u, 0xc95ecafau, 0x679644abu, 0x05cdbe5cu, 0xa405380du, 0x423cb1beu, 0xe0742b6fu, 0x7eaba520u,
    0x1ce31ed1u, 0xbb1a9882u, 0x59521233u, 0xf7898be4u, 0x95c10595u, 0x33f87f46u, 0xd22ff8f7u, 0x706772a8u,
    0x0e9eec59u, 0xacd6660au, 0x4b0ddfbbu, 0xe945596cu, 0x877cd31du, 0x25b44cceu, 0xc3ebc67fu, 0x62234030u,
    0x005ab9e1u, 0x9e923392u, 0x3cc9ad43u, 0xdb0126f4u, 0x7938a0a5u, 0x17701a56u, 0xb5a79407u, 0x53df0db8u,
    0xf2168769u, 0x904e011au, 0x2e857acbu, 0xccbcf47cu, 0x6af46e2du, 0x092be7deu, 0xa763618fu, 0x459adb40u,
    0xe3d254f1u, 0x8209cea2u, 0x20414853u, 0xbe78c204u, 0x5cb03bb5u, 0xfae7b566u, 0x991f2f17u, 0x3756a8c8u,
    0xd58e2279u, 0x73c59c2au, 0x11fd15dbu, 0xb0348f8cu, 0x4e6c093du, 0xeca382eeu, 0x8adafc9fu, 0x29127650u,
    0xc749f001u, 0x658169b2u, 0x03b8e363u, 0xa1f05d14u, 0x4027d6c5u, 0xde5f5076u, 0x7c96ca27u, 0x1ace43d8u,
    0xb905bd89u, 0x573d373au, 0xf574b0ebu, 0x93ac2a9cu, 0x31e3a44du, 0xd01b1dfeu, 0x6e5297afu, 0x0c8a1160u,
    0xaac18b11u, 0x48f904c2u, 0xe7307e73u, 0x8567f824u, 0x239f71d5u, 0xc1d6eb86u, 0x600e6537u, 0xfe45dee8u,
};

static const uint32_t bshim_060_tab6[96] = {
    0xc95ecafau, 0x679644abu, 0x05cdbe5cu, 0xa405380du, 0x423cb1beu, 0xe0742b6fu, 0x7eaba520u, 0x1ce31ed1u,
    0xbb1a9882u, 0x59521233u, 0xf7898be4u, 0x95c10595u, 0x33f87f46u, 0xd22ff8f7u, 0x706772a8u, 0x0e9eec59u,
    0xacd6660au, 0x4b0ddfbbu, 0xe945596cu, 0x877cd31du, 0x25b44cceu, 0xc3ebc67fu, 0x62234030u, 0x005ab9e1u,
    0x9e923392u, 0x3cc9ad43u, 0xdb0126f4u, 0x7938a0a5u, 0x17701a56u, 0xb5a79407u, 0x53df0db8u, 0xf2168769u,
    0x904e011au, 0x2e857acbu, 0xccbcf47cu, 0x6af46e2du, 0x092be7deu, 0xa763618fu, 0x459adb40u, 0xe3d254f1u,
    0x8209cea2u, 0x20414853u, 0xbe78c204u, 0x5cb03bb5u, 0xfae7b566u, 0x991f2f17u, 0x3756a8c8u, 0xd58e2279u,
    0x73c59c2au, 0x11fd15dbu, 0xb0348f8cu, 0x4e6c093du, 0xeca382eeu, 0x8adafc9fu, 0x29127650u, 0xc749f001u,
    0x658169b2u, 0x03b8e363u, 0xa1f05d14u, 0x4027d6c5u, 0xde5f5076u, 0x7c96ca27u, 0x1ace43d8u, 0xb905bd89u,
    0x573d373au, 0xf574b0ebu, 0x93ac2a9cu, 0x31e3a44du, 0xd01b1dfeu, 0x6e5297afu, 0x0c8a1160u, 0xaac18b11u,
    0x48f904c2u, 0xe7307e73u, 0x8567f824u, 0x239f71d5u, 0xc1d6eb86u, 0x600e6537u, 0xfe45dee8u, 0x9c7d5899u,
    0x3ab4d24au, 0xd8ec4bfbu, 0x7723c5acu, 0x155b3f5du, 0xb392b90eu, 0x51ca32bfu, 0xf001ac70u, 0x8e392621u,
    0x2c709fd2u, 0xcaa81983u, 0x68df9334u, 0x07170ce5u, 0xa54e8696u, 0x43860047u, 0xe1bd79f8u, 0x7ff4f3a9u,
};

static const uint32_t bshim_060_tab7[96] = {
    0x4b0ddfbbu, 0xe945596cu, 0x877cd31du, 0x25b44cceu, 0xc3ebc67fu, 0x62234030u, 0x005ab9e1u, 0x9e923392u,
    0x3cc9ad43u, 0xdb0126f4u, 0x7938a0a5u, 0x17701a56u, 0xb5a79407u, 0x53df0db8u, 0xf2168769u, 0x904e011au,
    0x2e857acbu, 0xccbcf47cu, 0x6af46e2du, 0x092be7deu, 0xa763618fu, 0x459adb40u, 0xe3d254f1u, 0x8209cea2u,
    0x20414853u, 0xbe78c204u, 0x5cb03bb5u, 0xfae7b566u, 0x991f2f17u, 0x3756a8c8u, 0xd58e2279u, 0x73c59c2au,
    0x11fd15dbu, 0xb0348f8cu, 0x4e6c093du, 0xeca382eeu, 0x8adafc9fu, 0x29127650u, 0xc749f001u, 0x658169b2u,
    0x03b8e363u, 0xa1f05d14u, 0x4027d6c5u, 0xde5f5076u, 0x7c96ca27u, 0x1ace43d8u, 0xb905bd89u, 0x573d373au,
    0xf574b0ebu, 0x93ac2a9cu, 0x31e3a44du, 0xd01b1dfeu, 0x6e5297afu, 0x0c8a1160u, 0xaac18b11u, 0x48f904c2u,
    0xe7307e73u, 0x8567f824u, 0x239f71d5u, 0xc1d6eb86u, 0x600e6537u, 0xfe45dee8u, 0x9c7d5899u, 0x3ab4d24au,
    0xd8ec4bfbu, 0x7723c5acu, 0x155b3f5du, 0xb392b90eu, 0x51ca32bfu, 0xf001ac70u, 0x8e392621u, 0x2c709fd2u,
    0xcaa81983u, 0x68df9334u, 0x07170ce5u, 0xa54e8696u, 0x43860047u, 0xe1bd79f8u, 0x7ff4f3a9u, 0x1e2c6d5au,
    0xbc63e70bu, 0x5a9b60bcu, 0xf8d2da6du, 0x970a541eu, 0x3541cdcfu, 0xd3794780u, 0x71b0c131u, 0x0fe83ae2u,
    0xae1fb493u, 0x4c572e44u, 0xea8ea7f5u, 0x88c621a6u, 0x26fd9b57u, 0xc5351508u, 0x636c8eb9u, 0x01a4086au,
};

struct bshim_060_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_060_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_060_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_060_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_060_reset(struct bshim_060_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00074004u;
    return 0;
}

