/* bshim_154 -- board support shim generated from the 0154 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_154_tab0[96] = {
    0x37b7da6eu, 0xd5ef541fu, 0x7426cdd0u, 0x125e4781u, 0xb095c132u, 0x4ecd3ae3u, 0xed04b494u, 0x8b3c2e45u,
    0x2973a7f6u, 0xc7ab21a7u, 0x65e29b58u, 0x041a1509u, 0xa2518ebau, 0x4089086bu, 0xdec0821cu, 0x7cf7fbcdu,
    0x1b2f757eu, 0xb966ef2fu, 0x579e68e0u, 0xf5d5e291u, 0x940d5c42u, 0x3244d5f3u, 0xd07c4fa4u, 0x6eb3c955u,
    0x0ceb4306u, 0xab22bcb7u, 0x495a3668u, 0xe791b019u, 0x85c929cau, 0x2400a37bu, 0xc2381d2cu, 0x606f96ddu,
    0xfea7108eu, 0x9cde8a3fu, 0x3b1603f0u, 0xd94d7da1u, 0x7784f752u, 0x15bc7103u, 0xb3f3eab4u, 0x522b6465u,
    0xf062de16u, 0x8e9a57c7u, 0x2cd1d178u, 0xcb094b29u, 0x6940c4dau, 0x07783e8bu, 0xa5afb83cu, 0x43e731edu,
    0xe21eab9eu, 0x8056254fu, 0x1e8d9f00u, 0xbcc518b1u, 0x5afc9262u, 0xf9340c13u, 0x976b85c4u, 0x35a2ff75u,
    0xd3da7926u, 0x7211f2d7u, 0x10496c88u, 0xae80e639u, 0x4cb85feau, 0xeaefd99bu, 0x8927534cu, 0x275eccfdu,
    0xc59646aeu, 0x63cdc05fu, 0x02053a10u, 0xa03cb3c1u, 0x3e742d72u, 0xdcaba723u, 0x7ae320d4u, 0x191a9a85u,
    0xb7521436u, 0x55898de7u, 0xf3c10798u, 0x91f88149u, 0x302ffafau, 0xce6774abu, 0x6c9eee5cu, 0x0ad6680du,
    0xa90de1beu, 0x47455b6fu, 0xe57cd520u, 0x83b44ed1u, 0x21ebc882u, 0xc0234233u, 0x5e5abbe4u, 0xfc923595u,
    0x9ac9af46u, 0x390128f7u, 0xd738a2a8u, 0x75701c59u, 0x13a7960au, 0xb1df0fbbu, 0x5016896cu, 0xee4e031du,
};

static const uint32_t bshim_154_tab1[96] = {
    0xb966ef2fu, 0x579e68e0u, 0xf5d5e291u, 0x940d5c42u, 0x3244d5f3u, 0xd07c4fa4u, 0x6eb3c955u, 0x0ceb4306u,
    0xab22bcb7u, 0x495a3668u, 0xe791b019u, 0x85c929cau, 0x2400a37bu, 0xc2381d2cu, 0x606f96ddu, 0xfea7108eu,
    0x9cde8a3fu, 0x3b1603f0u, 0xd94d7da1u, 0x7784f752u, 0x15bc7103u, 0xb3f3eab4u, 0x522b6465u, 0xf062de16u,
    0x8e9a57c7u, 0x2cd1d178u, 0xcb094b29u, 0x6940c4dau, 0x07783e8bu, 0xa5afb83cu, 0x43e731edu, 0xe21eab9eu,
    0x8056254fu, 0x1e8d9f00u, 0xbcc518b1u, 0x5afc9262u, 0xf9340c13u, 0x976b85c4u, 0x35a2ff75u, 0xd3da7926u,
    0x7211f2d7u, 0x10496c88u, 0xae80e639u, 0x4cb85feau, 0xeaefd99bu, 0x8927534cu, 0x275eccfdu, 0xc59646aeu,
    0x63cdc05fu, 0x02053a10u, 0xa03cb3c1u, 0x3e742d72u, 0xdcaba723u, 0x7ae320d4u, 0x191a9a85u, 0xb7521436u,
    0x55898de7u, 0xf3c10798u, 0x91f88149u, 0x302ffafau, 0xce6774abu, 0x6c9eee5cu, 0x0ad6680du, 0xa90de1beu,
    0x47455b6fu, 0xe57cd520u, 0x83b44ed1u, 0x21ebc882u, 0xc0234233u, 0x5e5abbe4u, 0xfc923595u, 0x9ac9af46u,
    0x390128f7u, 0xd738a2a8u, 0x75701c59u, 0x13a7960au, 0xb1df0fbbu, 0x5016896cu, 0xee4e031du, 0x8c857cceu,
    0x2abcf67fu, 0xc8f47030u, 0x672be9e1u, 0x05636392u, 0xa39add43u, 0x41d256f4u, 0xe009d0a5u, 0x7e414a56u,
    0x1c78c407u, 0xbab03db8u, 0x58e7b769u, 0xf71f311au, 0x9556aacbu, 0x338e247cu, 0xd1c59e2du, 0x6ffd17deu,
};

static const uint32_t bshim_154_tab2[96] = {
    0x3b1603f0u, 0xd94d7da1u, 0x7784f752u, 0x15bc7103u, 0xb3f3eab4u, 0x522b6465u, 0xf062de16u, 0x8e9a57c7u,
    0x2cd1d178u, 0xcb094b29u, 0x6940c4dau, 0x07783e8bu, 0xa5afb83cu, 0x43e731edu, 0xe21eab9eu, 0x8056254fu,
    0x1e8d9f00u, 0xbcc518b1u, 0x5afc9262u, 0xf9340c13u, 0x976b85c4u, 0x35a2ff75u, 0xd3da7926u, 0x7211f2d7u,
    0x10496c88u, 0xae80e639u, 0x4cb85feau, 0xeaefd99bu, 0x8927534cu, 0x275eccfdu, 0xc59646aeu, 0x63cdc05fu,
    0x02053a10u, 0xa03cb3c1u, 0x3e742d72u, 0xdcaba723u, 0x7ae320d4u, 0x191a9a85u, 0xb7521436u, 0x55898de7u,
    0xf3c10798u, 0x91f88149u, 0x302ffafau, 0xce6774abu, 0x6c9eee5cu, 0x0ad6680du, 0xa90de1beu, 0x47455b6fu,
    0xe57cd520u, 0x83b44ed1u, 0x21ebc882u, 0xc0234233u, 0x5e5abbe4u, 0xfc923595u, 0x9ac9af46u, 0x390128f7u,
    0xd738a2a8u, 0x75701c59u, 0x13a7960au, 0xb1df0fbbu, 0x5016896cu, 0xee4e031du, 0x8c857cceu, 0x2abcf67fu,
    0xc8f47030u, 0x672be9e1u, 0x05636392u, 0xa39add43u, 0x41d256f4u, 0xe009d0a5u, 0x7e414a56u, 0x1c78c407u,
    0xbab03db8u, 0x58e7b769u, 0xf71f311au, 0x9556aacbu, 0x338e247cu, 0xd1c59e2du, 0x6ffd17deu, 0x0e34918fu,
    0xac6c0b40u, 0x4aa384f1u, 0xe8dafea2u, 0x87127853u, 0x2549f204u, 0xc3816bb5u, 0x61b8e566u, 0xfff05f17u,
    0x9e27d8c8u, 0x3c5f5279u, 0xda96cc2au, 0x78ce45dbu, 0x1705bf8cu, 0xb53d393du, 0x5374b2eeu, 0xf1ac2c9fu,
};

static const uint32_t bshim_154_tab3[96] = {
    0xbcc518b1u, 0x5afc9262u, 0xf9340c13u, 0x976b85c4u, 0x35a2ff75u, 0xd3da7926u, 0x7211f2d7u, 0x10496c88u,
    0xae80e639u, 0x4cb85feau, 0xeaefd99bu, 0x8927534cu, 0x275eccfdu, 0xc59646aeu, 0x63cdc05fu, 0x02053a10u,
    0xa03cb3c1u, 0x3e742d72u, 0xdcaba723u, 0x7ae320d4u, 0x191a9a85u, 0xb7521436u, 0x55898de7u, 0xf3c10798u,
    0x91f88149u, 0x302ffafau, 0xce6774abu, 0x6c9eee5cu, 0x0ad6680du, 0xa90de1beu, 0x47455b6fu, 0xe57cd520u,
    0x83b44ed1u, 0x21ebc882u, 0xc0234233u, 0x5e5abbe4u, 0xfc923595u, 0x9ac9af46u, 0x390128f7u, 0xd738a2a8u,
    0x75701c59u, 0x13a7960au, 0xb1df0fbbu, 0x5016896cu, 0xee4e031du, 0x8c857cceu, 0x2abcf67fu, 0xc8f47030u,
    0x672be9e1u, 0x05636392u, 0xa39add43u, 0x41d256f4u, 0xe009d0a5u, 0x7e414a56u, 0x1c78c407u, 0xbab03db8u,
    0x58e7b769u, 0xf71f311au, 0x9556aacbu, 0x338e247cu, 0xd1c59e2du, 0x6ffd17deu, 0x0e34918fu, 0xac6c0b40u,
    0x4aa384f1u, 0xe8dafea2u, 0x87127853u, 0x2549f204u, 0xc3816bb5u, 0x61b8e566u, 0xfff05f17u, 0x9e27d8c8u,
    0x3c5f5279u, 0xda96cc2au, 0x78ce45dbu, 0x1705bf8cu, 0xb53d393du, 0x5374b2eeu, 0xf1ac2c9fu, 0x8fe3a650u,
    0x2e1b2001u, 0xcc5299b2u, 0x6a8a1363u, 0x08c18d14u, 0xa6f906c5u, 0x45308076u, 0xe367fa27u, 0x819f73d8u,
    0x1fd6ed89u, 0xbe0e673au, 0x5c45e0ebu, 0xfa7d5a9cu, 0x98b4d44du, 0x36ec4dfeu, 0xd523c7afu, 0x735b4160u,
};

static const uint32_t bshim_154_tab4[96] = {
    0x3e742d72u, 0xdcaba723u, 0x7ae320d4u, 0x191a9a85u, 0xb7521436u, 0x55898de7u, 0xf3c10798u, 0x91f88149u,
    0x302ffafau, 0xce6774abu, 0x6c9eee5cu, 0x0ad6680du, 0xa90de1beu, 0x47455b6fu, 0xe57cd520u, 0x83b44ed1u,
    0x21ebc882u, 0xc0234233u, 0x5e5abbe4u, 0xfc923595u, 0x9ac9af46u, 0x390128f7u, 0xd738a2a8u, 0x75701c59u,
    0x13a7960au, 0xb1df0fbbu, 0x5016896cu, 0xee4e031du, 0x8c857cceu, 0x2abcf67fu, 0xc8f47030u, 0x672be9e1u,
    0x05636392u, 0xa39add43u, 0x41d256f4u, 0xe009d0a5u, 0x7e414a56u, 0x1c78c407u, 0xbab03db8u, 0x58e7b769u,
    0xf71f311au, 0x9556aacbu, 0x338e247cu, 0xd1c59e2du, 0x6ffd17deu, 0x0e34918fu, 0xac6c0b40u, 0x4aa384f1u,
    0xe8dafea2u, 0x87127853u, 0x2549f204u, 0xc3816bb5u, 0x61b8e566u, 0xfff05f17u, 0x9e27d8c8u, 0x3c5f5279u,
    0xda96cc2au, 0x78ce45dbu, 0x1705bf8cu, 0xb53d393du, 0x5374b2eeu, 0xf1ac2c9fu, 0x8fe3a650u, 0x2e1b2001u,
    0xcc5299b2u, 0x6a8a1363u, 0x08c18d14u, 0xa6f906c5u, 0x45308076u, 0xe367fa27u, 0x819f73d8u, 0x1fd6ed89u,
    0xbe0e673au, 0x5c45e0ebu, 0xfa7d5a9cu, 0x98b4d44du, 0x36ec4dfeu, 0xd523c7afu, 0x735b4160u, 0x1192bb11u,
    0xafca34c2u, 0x4e01ae73u, 0xec392824u, 0x8a70a1d5u, 0x28a81b86u, 0xc6df9537u, 0x65170ee8u, 0x034e8899u,
    0xa186024au, 0x3fbd7bfbu, 0xddf4f5acu, 0x7c2c6f5du, 0x1a63e90eu, 0xb89b62bfu, 0x56d2dc70u, 0xf50a5621u,
};

static const uint32_t bshim_154_tab5[96] = {
    0xc0234233u, 0x5e5abbe4u, 0xfc923595u, 0x9ac9af46u, 0x390128f7u, 0xd738a2a8u, 0x75701c59u, 0x13a7960au,
    0xb1df0fbbu, 0x5016896cu, 0xee4e031du, 0x8c857cceu, 0x2abcf67fu, 0xc8f47030u, 0x672be9e1u, 0x05636392u,
    0xa39add43u, 0x41d256f4u, 0xe009d0a5u, 0x7e414a56u, 0x1c78c407u, 0xbab03db8u, 0x58e7b769u, 0xf71f311au,
    0x9556aacbu, 0x338e247cu, 0xd1c59e2du, 0x6ffd17deu, 0x0e34918fu, 0xac6c0b40u, 0x4aa384f1u, 0xe8dafea2u,
    0x87127853u, 0x2549f204u, 0xc3816bb5u, 0x61b8e566u, 0xfff05f17u, 0x9e27d8c8u, 0x3c5f5279u, 0xda96cc2au,
    0x78ce45dbu, 0x1705bf8cu, 0xb53d393du, 0x5374b2eeu, 0xf1ac2c9fu, 0x8fe3a650u, 0x2e1b2001u, 0xcc5299b2u,
    0x6a8a1363u, 0x08c18d14u, 0xa6f906c5u, 0x45308076u, 0xe367fa27u, 0x819f73d8u, 0x1fd6ed89u, 0xbe0e673au,
    0x5c45e0ebu, 0xfa7d5a9cu, 0x98b4d44du, 0x36ec4dfeu, 0xd523c7afu, 0x735b4160u, 0x1192bb11u, 0xafca34c2u,
    0x4e01ae73u, 0xec392824u, 0x8a70a1d5u, 0x28a81b86u, 0xc6df9537u, 0x65170ee8u, 0x034e8899u, 0xa186024au,
    0x3fbd7bfbu, 0xddf4f5acu, 0x7c2c6f5du, 0x1a63e90eu, 0xb89b62bfu, 0x56d2dc70u, 0xf50a5621u, 0x9341cfd2u,
    0x31794983u, 0xcfb0c334u, 0x6de83ce5u, 0x0c1fb696u, 0xaa573047u, 0x488ea9f8u, 0xe6c623a9u, 0x84fd9d5au,
    0x2335170bu, 0xc16c90bcu, 0x5fa40a6du, 0xfddb841eu, 0x9c12fdcfu, 0x3a4a7780u, 0xd881f131u, 0x76b96ae2u,
};

static const uint32_t bshim_154_tab6[96] = {
    0x41d256f4u, 0xe009d0a5u, 0x7e414a56u, 0x1c78c407u, 0xbab03db8u, 0x58e7b769u, 0xf71f311au, 0x9556aacbu,
    0x338e247cu, 0xd1c59e2du, 0x6ffd17deu, 0x0e34918fu, 0xac6c0b40u, 0x4aa384f1u, 0xe8dafea2u, 0x87127853u,
    0x2549f204u, 0xc3816bb5u, 0x61b8e566u, 0xfff05f17u, 0x9e27d8c8u, 0x3c5f5279u, 0xda96cc2au, 0x78ce45dbu,
    0x1705bf8cu, 0xb53d393du, 0x5374b2eeu, 0xf1ac2c9fu, 0x8fe3a650u, 0x2e1b2001u, 0xcc5299b2u, 0x6a8a1363u,
    0x08c18d14u, 0xa6f906c5u, 0x45308076u, 0xe367fa27u, 0x819f73d8u, 0x1fd6ed89u, 0xbe0e673au, 0x5c45e0ebu,
    0xfa7d5a9cu, 0x98b4d44du, 0x36ec4dfeu, 0xd523c7afu, 0x735b4160u, 0x1192bb11u, 0xafca34c2u, 0x4e01ae73u,
    0xec392824u, 0x8a70a1d5u, 0x28a81b86u, 0xc6df9537u, 0x65170ee8u, 0x034e8899u, 0xa186024au, 0x3fbd7bfbu,
    0xddf4f5acu, 0x7c2c6f5du, 0x1a63e90eu, 0xb89b62bfu, 0x56d2dc70u, 0xf50a5621u, 0x9341cfd2u, 0x31794983u,
    0xcfb0c334u, 0x6de83ce5u, 0x0c1fb696u, 0xaa573047u, 0x488ea9f8u, 0xe6c623a9u, 0x84fd9d5au, 0x2335170bu,
    0xc16c90bcu, 0x5fa40a6du, 0xfddb841eu, 0x9c12fdcfu, 0x3a4a7780u, 0xd881f131u, 0x76b96ae2u, 0x14f0e493u,
    0xb3285e44u, 0x515fd7f5u, 0xef9751a6u, 0x8dcecb57u, 0x2c064508u, 0xca3dbeb9u, 0x6875386au, 0x06acb21bu,
    0xa4e42bccu, 0x431ba57du, 0xe1531f2eu, 0x7f8a98dfu, 0x1dc21290u, 0xbbf98c41u, 0x5a3105f2u, 0xf8687fa3u,
};

static const uint32_t bshim_154_tab7[96] = {
    0xc3816bb5u, 0x61b8e566u, 0xfff05f17u, 0x9e27d8c8u, 0x3c5f5279u, 0xda96cc2au, 0x78ce45dbu, 0x1705bf8cu,
    0xb53d393du, 0x5374b2eeu, 0xf1ac2c9fu, 0x8fe3a650u, 0x2e1b2001u, 0xcc5299b2u, 0x6a8a1363u, 0x08c18d14u,
    0xa6f906c5u, 0x45308076u, 0xe367fa27u, 0x819f73d8u, 0x1fd6ed89u, 0xbe0e673au, 0x5c45e0ebu, 0xfa7d5a9cu,
    0x98b4d44du, 0x36ec4dfeu, 0xd523c7afu, 0x735b4160u, 0x1192bb11u, 0xafca34c2u, 0x4e01ae73u, 0xec392824u,
    0x8a70a1d5u, 0x28a81b86u, 0xc6df9537u, 0x65170ee8u, 0x034e8899u, 0xa186024au, 0x3fbd7bfbu, 0xddf4f5acu,
    0x7c2c6f5du, 0x1a63e90eu, 0xb89b62bfu, 0x56d2dc70u, 0xf50a5621u, 0x9341cfd2u, 0x31794983u, 0xcfb0c334u,
    0x6de83ce5u, 0x0c1fb696u, 0xaa573047u, 0x488ea9f8u, 0xe6c623a9u, 0x84fd9d5au, 0x2335170bu, 0xc16c90bcu,
    0x5fa40a6du, 0xfddb841eu, 0x9c12fdcfu, 0x3a4a7780u, 0xd881f131u, 0x76b96ae2u, 0x14f0e493u, 0xb3285e44u,
    0x515fd7f5u, 0xef9751a6u, 0x8dcecb57u, 0x2c064508u, 0xca3dbeb9u, 0x6875386au, 0x06acb21bu, 0xa4e42bccu,
    0x431ba57du, 0xe1531f2eu, 0x7f8a98dfu, 0x1dc21290u, 0xbbf98c41u, 0x5a3105f2u, 0xf8687fa3u, 0x969ff954u,
    0x34d77305u, 0xd30eecb6u, 0x71466667u, 0x0f7de018u, 0xadb559c9u, 0x4becd37au, 0xea244d2bu, 0x885bc6dcu,
    0x2693408du, 0xc4caba3eu, 0x630233efu, 0x0139ada0u, 0x9f712751u, 0x3da8a102u, 0xdbe01ab3u, 0x7a179464u,
};

struct bshim_154_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_154_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_154_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_154_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_154_reset(struct bshim_154_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00129bc6u;
    return 0;
}

