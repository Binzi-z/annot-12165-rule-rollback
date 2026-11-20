/* bshim_158 -- board support shim generated from the 0158 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_158_tab0[96] = {
    0x1144f0bau, 0xaf7c6a6bu, 0x4db3e41cu, 0xebeb5dcdu, 0x8a22d77eu, 0x285a512fu, 0xc691cae0u, 0x64c94491u,
    0x0300be42u, 0xa13837f3u, 0x3f6fb1a4u, 0xdda72b55u, 0x7bdea506u, 0x1a161eb7u, 0xb84d9868u, 0x56851219u,
    0xf4bc8bcau, 0x92f4057bu, 0x312b7f2cu, 0xcf62f8ddu, 0x6d9a728eu, 0x0bd1ec3fu, 0xaa0965f0u, 0x4840dfa1u,
    0xe6785952u, 0x84afd303u, 0x22e74cb4u, 0xc11ec665u, 0x5f564016u, 0xfd8db9c7u, 0x9bc53378u, 0x39fcad29u,
    0xd83426dau, 0x766ba08bu, 0x14a31a3cu, 0xb2da93edu, 0x51120d9eu, 0xef49874fu, 0x8d810100u, 0x2bb87ab1u,
    0xc9eff462u, 0x68276e13u, 0x065ee7c4u, 0xa4966175u, 0x42cddb26u, 0xe10554d7u, 0x7f3cce88u, 0x1d744839u,
    0xbbabc1eau, 0x59e33b9bu, 0xf81ab54cu, 0x96522efdu, 0x3489a8aeu, 0xd2c1225fu, 0x70f89c10u, 0x0f3015c1u,
    0xad678f72u, 0x4b9f0923u, 0xe9d682d4u, 0x880dfc85u, 0x26457636u, 0xc47cefe7u, 0x62b46998u, 0x00ebe349u,
    0x9f235cfau, 0x3d5ad6abu, 0xdb92505cu, 0x79c9ca0du, 0x180143beu, 0xb638bd6fu, 0x54703720u, 0xf2a7b0d1u,
    0x90df2a82u, 0x2f16a433u, 0xcd4e1de4u, 0x6b859795u, 0x09bd1146u, 0xa7f48af7u, 0x462c04a8u, 0xe4637e59u,
    0x829af80au, 0x20d271bbu, 0xbf09eb6cu, 0x5d41651du, 0xfb78deceu, 0x99b0587fu, 0x37e7d230u, 0xd61f4be1u,
    0x7456c592u, 0x128e3f43u, 0xb0c5b8f4u, 0x4efd32a5u, 0xed34ac56u, 0x8b6c2607u, 0x29a39fb8u, 0xc7db1969u,
};

static const uint32_t bshim_158_tab1[96] = {
    0x92f4057bu, 0x312b7f2cu, 0xcf62f8ddu, 0x6d9a728eu, 0x0bd1ec3fu, 0xaa0965f0u, 0x4840dfa1u, 0xe6785952u,
    0x84afd303u, 0x22e74cb4u, 0xc11ec665u, 0x5f564016u, 0xfd8db9c7u, 0x9bc53378u, 0x39fcad29u, 0xd83426dau,
    0x766ba08bu, 0x14a31a3cu, 0xb2da93edu, 0x51120d9eu, 0xef49874fu, 0x8d810100u, 0x2bb87ab1u, 0xc9eff462u,
    0x68276e13u, 0x065ee7c4u, 0xa4966175u, 0x42cddb26u, 0xe10554d7u, 0x7f3cce88u, 0x1d744839u, 0xbbabc1eau,
    0x59e33b9bu, 0xf81ab54cu, 0x96522efdu, 0x3489a8aeu, 0xd2c1225fu, 0x70f89c10u, 0x0f3015c1u, 0xad678f72u,
    0x4b9f0923u, 0xe9d682d4u, 0x880dfc85u, 0x26457636u, 0xc47cefe7u, 0x62b46998u, 0x00ebe349u, 0x9f235cfau,
    0x3d5ad6abu, 0xdb92505cu, 0x79c9ca0du, 0x180143beu, 0xb638bd6fu, 0x54703720u, 0xf2a7b0d1u, 0x90df2a82u,
    0x2f16a433u, 0xcd4e1de4u, 0x6b859795u, 0x09bd1146u, 0xa7f48af7u, 0x462c04a8u, 0xe4637e59u, 0x829af80au,
    0x20d271bbu, 0xbf09eb6cu, 0x5d41651du, 0xfb78deceu, 0x99b0587fu, 0x37e7d230u, 0xd61f4be1u, 0x7456c592u,
    0x128e3f43u, 0xb0c5b8f4u, 0x4efd32a5u, 0xed34ac56u, 0x8b6c2607u, 0x29a39fb8u, 0xc7db1969u, 0x6612931au,
    0x044a0ccbu, 0xa281867cu, 0x40b9002du, 0xdef079deu, 0x7d27f38fu, 0x1b5f6d40u, 0xb996e6f1u, 0x57ce60a2u,
    0xf605da53u, 0x943d5404u, 0x3274cdb5u, 0xd0ac4766u, 0x6ee3c117u, 0x0d1b3ac8u, 0xab52b479u, 0x498a2e2au,
};

static const uint32_t bshim_158_tab2[96] = {
    0x14a31a3cu, 0xb2da93edu, 0x51120d9eu, 0xef49874fu, 0x8d810100u, 0x2bb87ab1u, 0xc9eff462u, 0x68276e13u,
    0x065ee7c4u, 0xa4966175u, 0x42cddb26u, 0xe10554d7u, 0x7f3cce88u, 0x1d744839u, 0xbbabc1eau, 0x59e33b9bu,
    0xf81ab54cu, 0x96522efdu, 0x3489a8aeu, 0xd2c1225fu, 0x70f89c10u, 0x0f3015c1u, 0xad678f72u, 0x4b9f0923u,
    0xe9d682d4u, 0x880dfc85u, 0x26457636u, 0xc47cefe7u, 0x62b46998u, 0x00ebe349u, 0x9f235cfau, 0x3d5ad6abu,
    0xdb92505cu, 0x79c9ca0du, 0x180143beu, 0xb638bd6fu, 0x54703720u, 0xf2a7b0d1u, 0x90df2a82u, 0x2f16a433u,
    0xcd4e1de4u, 0x6b859795u, 0x09bd1146u, 0xa7f48af7u, 0x462c04a8u, 0xe4637e59u, 0x829af80au, 0x20d271bbu,
    0xbf09eb6cu, 0x5d41651du, 0xfb78deceu, 0x99b0587fu, 0x37e7d230u, 0xd61f4be1u, 0x7456c592u, 0x128e3f43u,
    0xb0c5b8f4u, 0x4efd32a5u, 0xed34ac56u, 0x8b6c2607u, 0x29a39fb8u, 0xc7db1969u, 0x6612931au, 0x044a0ccbu,
    0xa281867cu, 0x40b9002du, 0xdef079deu, 0x7d27f38fu, 0x1b5f6d40u, 0xb996e6f1u, 0x57ce60a2u, 0xf605da53u,
    0x943d5404u, 0x3274cdb5u, 0xd0ac4766u, 0x6ee3c117u, 0x0d1b3ac8u, 0xab52b479u, 0x498a2e2au, 0xe7c1a7dbu,
    0x85f9218cu, 0x24309b3du, 0xc26814eeu, 0x609f8e9fu, 0xfed70850u, 0x9d0e8201u, 0x3b45fbb2u, 0xd97d7563u,
    0x77b4ef14u, 0x15ec68c5u, 0xb423e276u, 0x525b5c27u, 0xf092d5d8u, 0x8eca4f89u, 0x2d01c93au, 0xcb3942ebu,
};

static const uint32_t bshim_158_tab3[96] = {
    0x96522efdu, 0x3489a8aeu, 0xd2c1225fu, 0x70f89c10u, 0x0f3015c1u, 0xad678f72u, 0x4b9f0923u, 0xe9d682d4u,
    0x880dfc85u, 0x26457636u, 0xc47cefe7u, 0x62b46998u, 0x00ebe349u, 0x9f235cfau, 0x3d5ad6abu, 0xdb92505cu,
    0x79c9ca0du, 0x180143beu, 0xb638bd6fu, 0x54703720u, 0xf2a7b0d1u, 0x90df2a82u, 0x2f16a433u, 0xcd4e1de4u,
    0x6b859795u, 0x09bd1146u, 0xa7f48af7u, 0x462c04a8u, 0xe4637e59u, 0x829af80au, 0x20d271bbu, 0xbf09eb6cu,
    0x5d41651du, 0xfb78deceu, 0x99b0587fu, 0x37e7d230u, 0xd61f4be1u, 0x7456c592u, 0x128e3f43u, 0xb0c5b8f4u,
    0x4efd32a5u, 0xed34ac56u, 0x8b6c2607u, 0x29a39fb8u, 0xc7db1969u, 0x6612931au, 0x044a0ccbu, 0xa281867cu,
    0x40b9002du, 0xdef079deu, 0x7d27f38fu, 0x1b5f6d40u, 0xb996e6f1u, 0x57ce60a2u, 0xf605da53u, 0x943d5404u,
    0x3274cdb5u, 0xd0ac4766u, 0x6ee3c117u, 0x0d1b3ac8u, 0xab52b479u, 0x498a2e2au, 0xe7c1a7dbu, 0x85f9218cu,
    0x24309b3du, 0xc26814eeu, 0x609f8e9fu, 0xfed70850u, 0x9d0e8201u, 0x3b45fbb2u, 0xd97d7563u, 0x77b4ef14u,
    0x15ec68c5u, 0xb423e276u, 0x525b5c27u, 0xf092d5d8u, 0x8eca4f89u, 0x2d01c93au, 0xcb3942ebu, 0x6970bc9cu,
    0x07a8364du, 0xa5dfaffeu, 0x441729afu, 0xe24ea360u, 0x80861d11u, 0x1ebd96c2u, 0xbcf51073u, 0x5b2c8a24u,
    0xf96403d5u, 0x979b7d86u, 0x35d2f737u, 0xd40a70e8u, 0x7241ea99u, 0x1079644au, 0xaeb0ddfbu, 0x4ce857acu,
};

static const uint32_t bshim_158_tab4[96] = {
    0x180143beu, 0xb638bd6fu, 0x54703720u, 0xf2a7b0d1u, 0x90df2a82u, 0x2f16a433u, 0xcd4e1de4u, 0x6b859795u,
    0x09bd1146u, 0xa7f48af7u, 0x462c04a8u, 0xe4637e59u, 0x829af80au, 0x20d271bbu, 0xbf09eb6cu, 0x5d41651du,
    0xfb78deceu, 0x99b0587fu, 0x37e7d230u, 0xd61f4be1u, 0x7456c592u, 0x128e3f43u, 0xb0c5b8f4u, 0x4efd32a5u,
    0xed34ac56u, 0x8b6c2607u, 0x29a39fb8u, 0xc7db1969u, 0x6612931au, 0x044a0ccbu, 0xa281867cu, 0x40b9002du,
    0xdef079deu, 0x7d27f38fu, 0x1b5f6d40u, 0xb996e6f1u, 0x57ce60a2u, 0xf605da53u, 0x943d5404u, 0x3274cdb5u,
    0xd0ac4766u, 0x6ee3c117u, 0x0d1b3ac8u, 0xab52b479u, 0x498a2e2au, 0xe7c1a7dbu, 0x85f9218cu, 0x24309b3du,
    0xc26814eeu, 0x609f8e9fu, 0xfed70850u, 0x9d0e8201u, 0x3b45fbb2u, 0xd97d7563u, 0x77b4ef14u, 0x15ec68c5u,
    0xb423e276u, 0x525b5c27u, 0xf092d5d8u, 0x8eca4f89u, 0x2d01c93au, 0xcb3942ebu, 0x6970bc9cu, 0x07a8364du,
    0xa5dfaffeu, 0x441729afu, 0xe24ea360u, 0x80861d11u, 0x1ebd96c2u, 0xbcf51073u, 0x5b2c8a24u, 0xf96403d5u,
    0x979b7d86u, 0x35d2f737u, 0xd40a70e8u, 0x7241ea99u, 0x1079644au, 0xaeb0ddfbu, 0x4ce857acu, 0xeb1fd15du,
    0x89574b0eu, 0x278ec4bfu, 0xc5c63e70u, 0x63fdb821u, 0x023531d2u, 0xa06cab83u, 0x3ea42534u, 0xdcdb9ee5u,
    0x7b131896u, 0x194a9247u, 0xb7820bf8u, 0x55b985a9u, 0xf3f0ff5au, 0x9228790bu, 0x305ff2bcu, 0xce976c6du,
};

static const uint32_t bshim_158_tab5[96] = {
    0x99b0587fu, 0x37e7d230u, 0xd61f4be1u, 0x7456c592u, 0x128e3f43u, 0xb0c5b8f4u, 0x4efd32a5u, 0xed34ac56u,
    0x8b6c2607u, 0x29a39fb8u, 0xc7db1969u, 0x6612931au, 0x044a0ccbu, 0xa281867cu, 0x40b9002du, 0xdef079deu,
    0x7d27f38fu, 0x1b5f6d40u, 0xb996e6f1u, 0x57ce60a2u, 0xf605da53u, 0x943d5404u, 0x3274cdb5u, 0xd0ac4766u,
    0x6ee3c117u, 0x0d1b3ac8u, 0xab52b479u, 0x498a2e2au, 0xe7c1a7dbu, 0x85f9218cu, 0x24309b3du, 0xc26814eeu,
    0x609f8e9fu, 0xfed70850u, 0x9d0e8201u, 0x3b45fbb2u, 0xd97d7563u, 0x77b4ef14u, 0x15ec68c5u, 0xb423e276u,
    0x525b5c27u, 0xf092d5d8u, 0x8eca4f89u, 0x2d01c93au, 0xcb3942ebu, 0x6970bc9cu, 0x07a8364du, 0xa5dfaffeu,
    0x441729afu, 0xe24ea360u, 0x80861d11u, 0x1ebd96c2u, 0xbcf51073u, 0x5b2c8a24u, 0xf96403d5u, 0x979b7d86u,
    0x35d2f737u, 0xd40a70e8u, 0x7241ea99u, 0x1079644au, 0xaeb0ddfbu, 0x4ce857acu, 0xeb1fd15du, 0x89574b0eu,
    0x278ec4bfu, 0xc5c63e70u, 0x63fdb821u, 0x023531d2u, 0xa06cab83u, 0x3ea42534u, 0xdcdb9ee5u, 0x7b131896u,
    0x194a9247u, 0xb7820bf8u, 0x55b985a9u, 0xf3f0ff5au, 0x9228790bu, 0x305ff2bcu, 0xce976c6du, 0x6ccee61eu,
    0x0b065fcfu, 0xa93dd980u, 0x47755331u, 0xe5accce2u, 0x83e44693u, 0x221bc044u, 0xc05339f5u, 0x5e8ab3a6u,
    0xfcc22d57u, 0x9af9a708u, 0x393120b9u, 0xd7689a6au, 0x75a0141bu, 0x13d78dccu, 0xb20f077du, 0x5046812eu,
};

static const uint32_t bshim_158_tab6[96] = {
    0x1b5f6d40u, 0xb996e6f1u, 0x57ce60a2u, 0xf605da53u, 0x943d5404u, 0x3274cdb5u, 0xd0ac4766u, 0x6ee3c117u,
    0x0d1b3ac8u, 0xab52b479u, 0x498a2e2au, 0xe7c1a7dbu, 0x85f9218cu, 0x24309b3du, 0xc26814eeu, 0x609f8e9fu,
    0xfed70850u, 0x9d0e8201u, 0x3b45fbb2u, 0xd97d7563u, 0x77b4ef14u, 0x15ec68c5u, 0xb423e276u, 0x525b5c27u,
    0xf092d5d8u, 0x8eca4f89u, 0x2d01c93au, 0xcb3942ebu, 0x6970bc9cu, 0x07a8364du, 0xa5dfaffeu, 0x441729afu,
    0xe24ea360u, 0x80861d11u, 0x1ebd96c2u, 0xbcf51073u, 0x5b2c8a24u, 0xf96403d5u, 0x979b7d86u, 0x35d2f737u,
    0xd40a70e8u, 0x7241ea99u, 0x1079644au, 0xaeb0ddfbu, 0x4ce857acu, 0xeb1fd15du, 0x89574b0eu, 0x278ec4bfu,
    0xc5c63e70u, 0x63fdb821u, 0x023531d2u, 0xa06cab83u, 0x3ea42534u, 0xdcdb9ee5u, 0x7b131896u, 0x194a9247u,
    0xb7820bf8u, 0x55b985a9u, 0xf3f0ff5au, 0x9228790bu, 0x305ff2bcu, 0xce976c6du, 0x6ccee61eu, 0x0b065fcfu,
    0xa93dd980u, 0x47755331u, 0xe5accce2u, 0x83e44693u, 0x221bc044u, 0xc05339f5u, 0x5e8ab3a6u, 0xfcc22d57u,
    0x9af9a708u, 0x393120b9u, 0xd7689a6au, 0x75a0141bu, 0x13d78dccu, 0xb20f077du, 0x5046812eu, 0xee7dfadfu,
    0x8cb57490u, 0x2aecee41u, 0xc92467f2u, 0x675be1a3u, 0x05935b54u, 0xa3cad505u, 0x42024eb6u, 0xe039c867u,
    0x7e714218u, 0x1ca8bbc9u, 0xbae0357au, 0x5917af2bu, 0xf74f28dcu, 0x9586a28du, 0x33be1c3eu, 0xd1f595efu,
};

static const uint32_t bshim_158_tab7[96] = {
    0x9d0e8201u, 0x3b45fbb2u, 0xd97d7563u, 0x77b4ef14u, 0x15ec68c5u, 0xb423e276u, 0x525b5c27u, 0xf092d5d8u,
    0x8eca4f89u, 0x2d01c93au, 0xcb3942ebu, 0x6970bc9cu, 0x07a8364du, 0xa5dfaffeu, 0x441729afu, 0xe24ea360u,
    0x80861d11u, 0x1ebd96c2u, 0xbcf51073u, 0x5b2c8a24u, 0xf96403d5u, 0x979b7d86u, 0x35d2f737u, 0xd40a70e8u,
    0x7241ea99u, 0x1079644au, 0xaeb0ddfbu, 0x4ce857acu, 0xeb1fd15du, 0x89574b0eu, 0x278ec4bfu, 0xc5c63e70u,
    0x63fdb821u, 0x023531d2u, 0xa06cab83u, 0x3ea42534u, 0xdcdb9ee5u, 0x7b131896u, 0x194a9247u, 0xb7820bf8u,
    0x55b985a9u, 0xf3f0ff5au, 0x9228790bu, 0x305ff2bcu, 0xce976c6du, 0x6ccee61eu, 0x0b065fcfu, 0xa93dd980u,
    0x47755331u, 0xe5accce2u, 0x83e44693u, 0x221bc044u, 0xc05339f5u, 0x5e8ab3a6u, 0xfcc22d57u, 0x9af9a708u,
    0x393120b9u, 0xd7689a6au, 0x75a0141bu, 0x13d78dccu, 0xb20f077du, 0x5046812eu, 0xee7dfadfu, 0x8cb57490u,
    0x2aecee41u, 0xc92467f2u, 0x675be1a3u, 0x05935b54u, 0xa3cad505u, 0x42024eb6u, 0xe039c867u, 0x7e714218u,
    0x1ca8bbc9u, 0xbae0357au, 0x5917af2bu, 0xf74f28dcu, 0x9586a28du, 0x33be1c3eu, 0xd1f595efu, 0x702d0fa0u,
    0x0e648951u, 0xac9c0302u, 0x4ad37cb3u, 0xe90af664u, 0x87427015u, 0x2579e9c6u, 0xc3b16377u, 0x61e8dd28u,
    0x002056d9u, 0x9e57d08au, 0x3c8f4a3bu, 0xdac6c3ecu, 0x78fe3d9du, 0x1735b74eu, 0xb56d30ffu, 0x53a4aab0u,
};

struct bshim_158_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_158_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_158_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_158_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_158_reset(struct bshim_158_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00131782u;
    return 0;
}

