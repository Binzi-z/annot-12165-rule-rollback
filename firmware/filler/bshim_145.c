/* bshim_145 -- board support shim generated from the 0145 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_145_tab0[96] = {
    0x8e3a6843u, 0x2c71e1f4u, 0xcaa95ba5u, 0x68e0d556u, 0x07184f07u, 0xa54fc8b8u, 0x43874269u, 0xe1bebc1au,
    0x7ff635cbu, 0x1e2daf7cu, 0xbc65292du, 0x5a9ca2deu, 0xf8d41c8fu, 0x970b9640u, 0x35430ff1u, 0xd37a89a2u,
    0x71b20353u, 0x0fe97d04u, 0xae20f6b5u, 0x4c587066u, 0xea8fea17u, 0x88c763c8u, 0x26fedd79u, 0xc536572au,
    0x636dd0dbu, 0x01a54a8cu, 0x9fdcc43du, 0x3e143deeu, 0xdc4bb79fu, 0x7a833150u, 0x18baab01u, 0xb6f224b2u,
    0x55299e63u, 0xf3611814u, 0x919891c5u, 0x2fd00b76u, 0xce078527u, 0x6c3efed8u, 0x0a767889u, 0xa8adf23au,
    0x46e56bebu, 0xe51ce59cu, 0x83545f4du, 0x218bd8feu, 0xbfc352afu, 0x5dfacc60u, 0xfc324611u, 0x9a69bfc2u,
    0x38a13973u, 0xd6d8b324u, 0x75102cd5u, 0x1347a686u, 0xb17f2037u, 0x4fb699e8u, 0xedee1399u, 0x8c258d4au,
    0x2a5d06fbu, 0xc89480acu, 0x66cbfa5du, 0x0503740eu, 0xa33aedbfu, 0x41726770u, 0xdfa9e121u, 0x7de15ad2u,
    0x1c18d483u, 0xba504e34u, 0x5887c7e5u, 0xf6bf4196u, 0x94f6bb47u, 0x332e34f8u, 0xd165aea9u, 0x6f9d285au,
    0x0dd4a20bu, 0xac0c1bbcu, 0x4a43956du, 0xe87b0f1eu, 0x86b288cfu, 0x24ea0280u, 0xc3217c31u, 0x6158f5e2u,
    0xff906f93u, 0x9dc7e944u, 0x3bff62f5u, 0xda36dca6u, 0x786e5657u, 0x16a5d008u, 0xb4dd49b9u, 0x5314c36au,
    0xf14c3d1bu, 0x8f83b6ccu, 0x2dbb307du, 0xcbf2aa2eu, 0x6a2a23dfu, 0x08619d90u, 0xa6991741u, 0x44d090f2u,
};

static const uint32_t bshim_145_tab1[96] = {
    0x0fe97d04u, 0xae20f6b5u, 0x4c587066u, 0xea8fea17u, 0x88c763c8u, 0x26fedd79u, 0xc536572au, 0x636dd0dbu,
    0x01a54a8cu, 0x9fdcc43du, 0x3e143deeu, 0xdc4bb79fu, 0x7a833150u, 0x18baab01u, 0xb6f224b2u, 0x55299e63u,
    0xf3611814u, 0x919891c5u, 0x2fd00b76u, 0xce078527u, 0x6c3efed8u, 0x0a767889u, 0xa8adf23au, 0x46e56bebu,
    0xe51ce59cu, 0x83545f4du, 0x218bd8feu, 0xbfc352afu, 0x5dfacc60u, 0xfc324611u, 0x9a69bfc2u, 0x38a13973u,
    0xd6d8b324u, 0x75102cd5u, 0x1347a686u, 0xb17f2037u, 0x4fb699e8u, 0xedee1399u, 0x8c258d4au, 0x2a5d06fbu,
    0xc89480acu, 0x66cbfa5du, 0x0503740eu, 0xa33aedbfu, 0x41726770u, 0xdfa9e121u, 0x7de15ad2u, 0x1c18d483u,
    0xba504e34u, 0x5887c7e5u, 0xf6bf4196u, 0x94f6bb47u, 0x332e34f8u, 0xd165aea9u, 0x6f9d285au, 0x0dd4a20bu,
    0xac0c1bbcu, 0x4a43956du, 0xe87b0f1eu, 0x86b288cfu, 0x24ea0280u, 0xc3217c31u, 0x6158f5e2u, 0xff906f93u,
    0x9dc7e944u, 0x3bff62f5u, 0xda36dca6u, 0x786e5657u, 0x16a5d008u, 0xb4dd49b9u, 0x5314c36au, 0xf14c3d1bu,
    0x8f83b6ccu, 0x2dbb307du, 0xcbf2aa2eu, 0x6a2a23dfu, 0x08619d90u, 0xa6991741u, 0x44d090f2u, 0xe3080aa3u,
    0x813f8454u, 0x1f76fe05u, 0xbdae77b6u, 0x5be5f167u, 0xfa1d6b18u, 0x9854e4c9u, 0x368c5e7au, 0xd4c3d82bu,
    0x72fb51dcu, 0x1132cb8du, 0xaf6a453eu, 0x4da1beefu, 0xebd938a0u, 0x8a10b251u, 0x28482c02u, 0xc67fa5b3u,
};

static const uint32_t bshim_145_tab2[96] = {
    0x919891c5u, 0x2fd00b76u, 0xce078527u, 0x6c3efed8u, 0x0a767889u, 0xa8adf23au, 0x46e56bebu, 0xe51ce59cu,
    0x83545f4du, 0x218bd8feu, 0xbfc352afu, 0x5dfacc60u, 0xfc324611u, 0x9a69bfc2u, 0x38a13973u, 0xd6d8b324u,
    0x75102cd5u, 0x1347a686u, 0xb17f2037u, 0x4fb699e8u, 0xedee1399u, 0x8c258d4au, 0x2a5d06fbu, 0xc89480acu,
    0x66cbfa5du, 0x0503740eu, 0xa33aedbfu, 0x41726770u, 0xdfa9e121u, 0x7de15ad2u, 0x1c18d483u, 0xba504e34u,
    0x5887c7e5u, 0xf6bf4196u, 0x94f6bb47u, 0x332e34f8u, 0xd165aea9u, 0x6f9d285au, 0x0dd4a20bu, 0xac0c1bbcu,
    0x4a43956du, 0xe87b0f1eu, 0x86b288cfu, 0x24ea0280u, 0xc3217c31u, 0x6158f5e2u, 0xff906f93u, 0x9dc7e944u,
    0x3bff62f5u, 0xda36dca6u, 0x786e5657u, 0x16a5d008u, 0xb4dd49b9u, 0x5314c36au, 0xf14c3d1bu, 0x8f83b6ccu,
    0x2dbb307du, 0xcbf2aa2eu, 0x6a2a23dfu, 0x08619d90u, 0xa6991741u, 0x44d090f2u, 0xe3080aa3u, 0x813f8454u,
    0x1f76fe05u, 0xbdae77b6u, 0x5be5f167u, 0xfa1d6b18u, 0x9854e4c9u, 0x368c5e7au, 0xd4c3d82bu, 0x72fb51dcu,
    0x1132cb8du, 0xaf6a453eu, 0x4da1beefu, 0xebd938a0u, 0x8a10b251u, 0x28482c02u, 0xc67fa5b3u, 0x64b71f64u,
    0x02ee9915u, 0xa12612c6u, 0x3f5d8c77u, 0xdd950628u, 0x7bcc7fd9u, 0x1a03f98au, 0xb83b733bu, 0x5672ececu,
    0xf4aa669du, 0x92e1e04eu, 0x311959ffu, 0xcf50d3b0u, 0x6d884d61u, 0x0bbfc712u, 0xa9f740c3u, 0x482eba74u,
};

static const uint32_t bshim_145_tab3[96] = {
    0x1347a686u, 0xb17f2037u, 0x4fb699e8u, 0xedee1399u, 0x8c258d4au, 0x2a5d06fbu, 0xc89480acu, 0x66cbfa5du,
    0x0503740eu, 0xa33aedbfu, 0x41726770u, 0xdfa9e121u, 0x7de15ad2u, 0x1c18d483u, 0xba504e34u, 0x5887c7e5u,
    0xf6bf4196u, 0x94f6bb47u, 0x332e34f8u, 0xd165aea9u, 0x6f9d285au, 0x0dd4a20bu, 0xac0c1bbcu, 0x4a43956du,
    0xe87b0f1eu, 0x86b288cfu, 0x24ea0280u, 0xc3217c31u, 0x6158f5e2u, 0xff906f93u, 0x9dc7e944u, 0x3bff62f5u,
    0xda36dca6u, 0x786e5657u, 0x16a5d008u, 0xb4dd49b9u, 0x5314c36au, 0xf14c3d1bu, 0x8f83b6ccu, 0x2dbb307du,
    0xcbf2aa2eu, 0x6a2a23dfu, 0x08619d90u, 0xa6991741u, 0x44d090f2u, 0xe3080aa3u, 0x813f8454u, 0x1f76fe05u,
    0xbdae77b6u, 0x5be5f167u, 0xfa1d6b18u, 0x9854e4c9u, 0x368c5e7au, 0xd4c3d82bu, 0x72fb51dcu, 0x1132cb8du,
    0xaf6a453eu, 0x4da1beefu, 0xebd938a0u, 0x8a10b251u, 0x28482c02u, 0xc67fa5b3u, 0x64b71f64u, 0x02ee9915u,
    0xa12612c6u, 0x3f5d8c77u, 0xdd950628u, 0x7bcc7fd9u, 0x1a03f98au, 0xb83b733bu, 0x5672ececu, 0xf4aa669du,
    0x92e1e04eu, 0x311959ffu, 0xcf50d3b0u, 0x6d884d61u, 0x0bbfc712u, 0xa9f740c3u, 0x482eba74u, 0xe6663425u,
    0x849dadd6u, 0x22d52787u, 0xc10ca138u, 0x5f441ae9u, 0xfd7b949au, 0x9bb30e4bu, 0x39ea87fcu, 0xd82201adu,
    0x76597b5eu, 0x1490f50fu, 0xb2c86ec0u, 0x50ffe871u, 0xef376222u, 0x8d6edbd3u, 0x2ba65584u, 0xc9ddcf35u,
};

static const uint32_t bshim_145_tab4[96] = {
    0x94f6bb47u, 0x332e34f8u, 0xd165aea9u, 0x6f9d285au, 0x0dd4a20bu, 0xac0c1bbcu, 0x4a43956du, 0xe87b0f1eu,
    0x86b288cfu, 0x24ea0280u, 0xc3217c31u, 0x6158f5e2u, 0xff906f93u, 0x9dc7e944u, 0x3bff62f5u, 0xda36dca6u,
    0x786e5657u, 0x16a5d008u, 0xb4dd49b9u, 0x5314c36au, 0xf14c3d1bu, 0x8f83b6ccu, 0x2dbb307du, 0xcbf2aa2eu,
    0x6a2a23dfu, 0x08619d90u, 0xa6991741u, 0x44d090f2u, 0xe3080aa3u, 0x813f8454u, 0x1f76fe05u, 0xbdae77b6u,
    0x5be5f167u, 0xfa1d6b18u, 0x9854e4c9u, 0x368c5e7au, 0xd4c3d82bu, 0x72fb51dcu, 0x1132cb8du, 0xaf6a453eu,
    0x4da1beefu, 0xebd938a0u, 0x8a10b251u, 0x28482c02u, 0xc67fa5b3u, 0x64b71f64u, 0x02ee9915u, 0xa12612c6u,
    0x3f5d8c77u, 0xdd950628u, 0x7bcc7fd9u, 0x1a03f98au, 0xb83b733bu, 0x5672ececu, 0xf4aa669du, 0x92e1e04eu,
    0x311959ffu, 0xcf50d3b0u, 0x6d884d61u, 0x0bbfc712u, 0xa9f740c3u, 0x482eba74u, 0xe6663425u, 0x849dadd6u,
    0x22d52787u, 0xc10ca138u, 0x5f441ae9u, 0xfd7b949au, 0x9bb30e4bu, 0x39ea87fcu, 0xd82201adu, 0x76597b5eu,
    0x1490f50fu, 0xb2c86ec0u, 0x50ffe871u, 0xef376222u, 0x8d6edbd3u, 0x2ba65584u, 0xc9ddcf35u, 0x681548e6u,
    0x064cc297u, 0xa4843c48u, 0x42bbb5f9u, 0xe0f32faau, 0x7f2aa95bu, 0x1d62230cu, 0xbb999cbdu, 0x59d1166eu,
    0xf808901fu, 0x964009d0u, 0x34778381u, 0xd2aefd32u, 0x70e676e3u, 0x0f1df094u, 0xad556a45u, 0x4b8ce3f6u,
};

static const uint32_t bshim_145_tab5[96] = {
    0x16a5d008u, 0xb4dd49b9u, 0x5314c36au, 0xf14c3d1bu, 0x8f83b6ccu, 0x2dbb307du, 0xcbf2aa2eu, 0x6a2a23dfu,
    0x08619d90u, 0xa6991741u, 0x44d090f2u, 0xe3080aa3u, 0x813f8454u, 0x1f76fe05u, 0xbdae77b6u, 0x5be5f167u,
    0xfa1d6b18u, 0x9854e4c9u, 0x368c5e7au, 0xd4c3d82bu, 0x72fb51dcu, 0x1132cb8du, 0xaf6a453eu, 0x4da1beefu,
    0xebd938a0u, 0x8a10b251u, 0x28482c02u, 0xc67fa5b3u, 0x64b71f64u, 0x02ee9915u, 0xa12612c6u, 0x3f5d8c77u,
    0xdd950628u, 0x7bcc7fd9u, 0x1a03f98au, 0xb83b733bu, 0x5672ececu, 0xf4aa669du, 0x92e1e04eu, 0x311959ffu,
    0xcf50d3b0u, 0x6d884d61u, 0x0bbfc712u, 0xa9f740c3u, 0x482eba74u, 0xe6663425u, 0x849dadd6u, 0x22d52787u,
    0xc10ca138u, 0x5f441ae9u, 0xfd7b949au, 0x9bb30e4bu, 0x39ea87fcu, 0xd82201adu, 0x76597b5eu, 0x1490f50fu,
    0xb2c86ec0u, 0x50ffe871u, 0xef376222u, 0x8d6edbd3u, 0x2ba65584u, 0xc9ddcf35u, 0x681548e6u, 0x064cc297u,
    0xa4843c48u, 0x42bbb5f9u, 0xe0f32faau, 0x7f2aa95bu, 0x1d62230cu, 0xbb999cbdu, 0x59d1166eu, 0xf808901fu,
    0x964009d0u, 0x34778381u, 0xd2aefd32u, 0x70e676e3u, 0x0f1df094u, 0xad556a45u, 0x4b8ce3f6u, 0xe9c45da7u,
    0x87fbd758u, 0x26335109u, 0xc46acabau, 0x62a2446bu, 0x00d9be1cu, 0x9f1137cdu, 0x3d48b17eu, 0xdb802b2fu,
    0x79b7a4e0u, 0x17ef1e91u, 0xb6269842u, 0x545e11f3u, 0xf2958ba4u, 0x90cd0555u, 0x2f047f06u, 0xcd3bf8b7u,
};

static const uint32_t bshim_145_tab6[96] = {
    0x9854e4c9u, 0x368c5e7au, 0xd4c3d82bu, 0x72fb51dcu, 0x1132cb8du, 0xaf6a453eu, 0x4da1beefu, 0xebd938a0u,
    0x8a10b251u, 0x28482c02u, 0xc67fa5b3u, 0x64b71f64u, 0x02ee9915u, 0xa12612c6u, 0x3f5d8c77u, 0xdd950628u,
    0x7bcc7fd9u, 0x1a03f98au, 0xb83b733bu, 0x5672ececu, 0xf4aa669du, 0x92e1e04eu, 0x311959ffu, 0xcf50d3b0u,
    0x6d884d61u, 0x0bbfc712u, 0xa9f740c3u, 0x482eba74u, 0xe6663425u, 0x849dadd6u, 0x22d52787u, 0xc10ca138u,
    0x5f441ae9u, 0xfd7b949au, 0x9bb30e4bu, 0x39ea87fcu, 0xd82201adu, 0x76597b5eu, 0x1490f50fu, 0xb2c86ec0u,
    0x50ffe871u, 0xef376222u, 0x8d6edbd3u, 0x2ba65584u, 0xc9ddcf35u, 0x681548e6u, 0x064cc297u, 0xa4843c48u,
    0x42bbb5f9u, 0xe0f32faau, 0x7f2aa95bu, 0x1d62230cu, 0xbb999cbdu, 0x59d1166eu, 0xf808901fu, 0x964009d0u,
    0x34778381u, 0xd2aefd32u, 0x70e676e3u, 0x0f1df094u, 0xad556a45u, 0x4b8ce3f6u, 0xe9c45da7u, 0x87fbd758u,
    0x26335109u, 0xc46acabau, 0x62a2446bu, 0x00d9be1cu, 0x9f1137cdu, 0x3d48b17eu, 0xdb802b2fu, 0x79b7a4e0u,
    0x17ef1e91u, 0xb6269842u, 0x545e11f3u, 0xf2958ba4u, 0x90cd0555u, 0x2f047f06u, 0xcd3bf8b7u, 0x6b737268u,
    0x09aaec19u, 0xa7e265cau, 0x4619df7bu, 0xe451592cu, 0x8288d2ddu, 0x20c04c8eu, 0xbef7c63fu, 0x5d2f3ff0u,
    0xfb66b9a1u, 0x999e3352u, 0x37d5ad03u, 0xd60d26b4u, 0x7444a065u, 0x127c1a16u, 0xb0b393c7u, 0x4eeb0d78u,
};

static const uint32_t bshim_145_tab7[96] = {
    0x1a03f98au, 0xb83b733bu, 0x5672ececu, 0xf4aa669du, 0x92e1e04eu, 0x311959ffu, 0xcf50d3b0u, 0x6d884d61u,
    0x0bbfc712u, 0xa9f740c3u, 0x482eba74u, 0xe6663425u, 0x849dadd6u, 0x22d52787u, 0xc10ca138u, 0x5f441ae9u,
    0xfd7b949au, 0x9bb30e4bu, 0x39ea87fcu, 0xd82201adu, 0x76597b5eu, 0x1490f50fu, 0xb2c86ec0u, 0x50ffe871u,
    0xef376222u, 0x8d6edbd3u, 0x2ba65584u, 0xc9ddcf35u, 0x681548e6u, 0x064cc297u, 0xa4843c48u, 0x42bbb5f9u,
    0xe0f32faau, 0x7f2aa95bu, 0x1d62230cu, 0xbb999cbdu, 0x59d1166eu, 0xf808901fu, 0x964009d0u, 0x34778381u,
    0xd2aefd32u, 0x70e676e3u, 0x0f1df094u, 0xad556a45u, 0x4b8ce3f6u, 0xe9c45da7u, 0x87fbd758u, 0x26335109u,
    0xc46acabau, 0x62a2446bu, 0x00d9be1cu, 0x9f1137cdu, 0x3d48b17eu, 0xdb802b2fu, 0x79b7a4e0u, 0x17ef1e91u,
    0xb6269842u, 0x545e11f3u, 0xf2958ba4u, 0x90cd0555u, 0x2f047f06u, 0xcd3bf8b7u, 0x6b737268u, 0x09aaec19u,
    0xa7e265cau, 0x4619df7bu, 0xe451592cu, 0x8288d2ddu, 0x20c04c8eu, 0xbef7c63fu, 0x5d2f3ff0u, 0xfb66b9a1u,
    0x999e3352u, 0x37d5ad03u, 0xd60d26b4u, 0x7444a065u, 0x127c1a16u, 0xb0b393c7u, 0x4eeb0d78u, 0xed228729u,
    0x8b5a00dau, 0x29917a8bu, 0xc7c8f43cu, 0x66006dedu, 0x0437e79eu, 0xa26f614fu, 0x40a6db00u, 0xdede54b1u,
    0x7d15ce62u, 0x1b4d4813u, 0xb984c1c4u, 0x57bc3b75u, 0xf5f3b526u, 0x942b2ed7u, 0x3262a888u, 0xd09a2239u,
};

struct bshim_145_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_145_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_145_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_145_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_145_reset(struct bshim_145_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0011855fu;
    return 0;
}

