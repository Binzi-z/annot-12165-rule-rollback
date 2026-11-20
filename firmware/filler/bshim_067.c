/* bshim_067 -- board support shim generated from the 0067 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_067_tab0[96] = {
    0x7bfb3579u, 0x1a32af2au, 0xb86a28dbu, 0x56a1a28cu, 0xf4d91c3du, 0x931095eeu, 0x31480f9fu, 0xcf7f8950u,
    0x6db70301u, 0x0bee7cb2u, 0xaa25f663u, 0x485d7014u, 0xe694e9c5u, 0x84cc6376u, 0x2303dd27u, 0xc13b56d8u,
    0x5f72d089u, 0xfdaa4a3au, 0x9be1c3ebu, 0x3a193d9cu, 0xd850b74du, 0x768830feu, 0x14bfaaafu, 0xb2f72460u,
    0x512e9e11u, 0xef6617c2u, 0x8d9d9173u, 0x2bd50b24u, 0xca0c84d5u, 0x6843fe86u, 0x067b7837u, 0xa4b2f1e8u,
    0x42ea6b99u, 0xe121e54au, 0x7f595efbu, 0x1d90d8acu, 0xbbc8525du, 0x59ffcc0eu, 0xf83745bfu, 0x966ebf70u,
    0x34a63921u, 0xd2ddb2d2u, 0x71152c83u, 0x0f4ca634u, 0xad841fe5u, 0x4bbb9996u, 0xe9f31347u, 0x882a8cf8u,
    0x266206a9u, 0xc499805au, 0x62d0fa0bu, 0x010873bcu, 0x9f3fed6du, 0x3d77671eu, 0xdbaee0cfu, 0x79e65a80u,
    0x181dd431u, 0xb6554de2u, 0x548cc793u, 0xf2c44144u, 0x90fbbaf5u, 0x2f3334a6u, 0xcd6aae57u, 0x6ba22808u,
    0x09d9a1b9u, 0xa8111b6au, 0x4648951bu, 0xe4800eccu, 0x82b7887du, 0x20ef022eu, 0xbf267bdfu, 0x5d5df590u,
    0xfb956f41u, 0x99cce8f2u, 0x380462a3u, 0xd63bdc54u, 0x74735605u, 0x12aacfb6u, 0xb0e24967u, 0x4f19c318u,
    0xed513cc9u, 0x8b88b67au, 0x29c0302bu, 0xc7f7a9dcu, 0x662f238du, 0x04669d3eu, 0xa29e16efu, 0x40d590a0u,
    0xdf0d0a51u, 0x7d448402u, 0x1b7bfdb3u, 0xb9b37764u, 0x57eaf115u, 0xf6226ac6u, 0x9459e477u, 0x32915e28u,
};

static const uint32_t bshim_067_tab1[96] = {
    0xfdaa4a3au, 0x9be1c3ebu, 0x3a193d9cu, 0xd850b74du, 0x768830feu, 0x14bfaaafu, 0xb2f72460u, 0x512e9e11u,
    0xef6617c2u, 0x8d9d9173u, 0x2bd50b24u, 0xca0c84d5u, 0x6843fe86u, 0x067b7837u, 0xa4b2f1e8u, 0x42ea6b99u,
    0xe121e54au, 0x7f595efbu, 0x1d90d8acu, 0xbbc8525du, 0x59ffcc0eu, 0xf83745bfu, 0x966ebf70u, 0x34a63921u,
    0xd2ddb2d2u, 0x71152c83u, 0x0f4ca634u, 0xad841fe5u, 0x4bbb9996u, 0xe9f31347u, 0x882a8cf8u, 0x266206a9u,
    0xc499805au, 0x62d0fa0bu, 0x010873bcu, 0x9f3fed6du, 0x3d77671eu, 0xdbaee0cfu, 0x79e65a80u, 0x181dd431u,
    0xb6554de2u, 0x548cc793u, 0xf2c44144u, 0x90fbbaf5u, 0x2f3334a6u, 0xcd6aae57u, 0x6ba22808u, 0x09d9a1b9u,
    0xa8111b6au, 0x4648951bu, 0xe4800eccu, 0x82b7887du, 0x20ef022eu, 0xbf267bdfu, 0x5d5df590u, 0xfb956f41u,
    0x99cce8f2u, 0x380462a3u, 0xd63bdc54u, 0x74735605u, 0x12aacfb6u, 0xb0e24967u, 0x4f19c318u, 0xed513cc9u,
    0x8b88b67au, 0x29c0302bu, 0xc7f7a9dcu, 0x662f238du, 0x04669d3eu, 0xa29e16efu, 0x40d590a0u, 0xdf0d0a51u,
    0x7d448402u, 0x1b7bfdb3u, 0xb9b37764u, 0x57eaf115u, 0xf6226ac6u, 0x9459e477u, 0x32915e28u, 0xd0c8d7d9u,
    0x6f00518au, 0x0d37cb3bu, 0xab6f44ecu, 0x49a6be9du, 0xe7de384eu, 0x8615b1ffu, 0x244d2bb0u, 0xc284a561u,
    0x60bc1f12u, 0xfef398c3u, 0x9d2b1274u, 0x3b628c25u, 0xd99a05d6u, 0x77d17f87u, 0x1608f938u, 0xb44072e9u,
};

static const uint32_t bshim_067_tab2[96] = {
    0x7f595efbu, 0x1d90d8acu, 0xbbc8525du, 0x59ffcc0eu, 0xf83745bfu, 0x966ebf70u, 0x34a63921u, 0xd2ddb2d2u,
    0x71152c83u, 0x0f4ca634u, 0xad841fe5u, 0x4bbb9996u, 0xe9f31347u, 0x882a8cf8u, 0x266206a9u, 0xc499805au,
    0x62d0fa0bu, 0x010873bcu, 0x9f3fed6du, 0x3d77671eu, 0xdbaee0cfu, 0x79e65a80u, 0x181dd431u, 0xb6554de2u,
    0x548cc793u, 0xf2c44144u, 0x90fbbaf5u, 0x2f3334a6u, 0xcd6aae57u, 0x6ba22808u, 0x09d9a1b9u, 0xa8111b6au,
    0x4648951bu, 0xe4800eccu, 0x82b7887du, 0x20ef022eu, 0xbf267bdfu, 0x5d5df590u, 0xfb956f41u, 0x99cce8f2u,
    0x380462a3u, 0xd63bdc54u, 0x74735605u, 0x12aacfb6u, 0xb0e24967u, 0x4f19c318u, 0xed513cc9u, 0x8b88b67au,
    0x29c0302bu, 0xc7f7a9dcu, 0x662f238du, 0x04669d3eu, 0xa29e16efu, 0x40d590a0u, 0xdf0d0a51u, 0x7d448402u,
    0x1b7bfdb3u, 0xb9b37764u, 0x57eaf115u, 0xf6226ac6u, 0x9459e477u, 0x32915e28u, 0xd0c8d7d9u, 0x6f00518au,
    0x0d37cb3bu, 0xab6f44ecu, 0x49a6be9du, 0xe7de384eu, 0x8615b1ffu, 0x244d2bb0u, 0xc284a561u, 0x60bc1f12u,
    0xfef398c3u, 0x9d2b1274u, 0x3b628c25u, 0xd99a05d6u, 0x77d17f87u, 0x1608f938u, 0xb44072e9u, 0x5277ec9au,
    0xf0af664bu, 0x8ee6dffcu, 0x2d1e59adu, 0xcb55d35eu, 0x698d4d0fu, 0x07c4c6c0u, 0xa5fc4071u, 0x4433ba22u,
    0xe26b33d3u, 0x80a2ad84u, 0x1eda2735u, 0xbd11a0e6u, 0x5b491a97u, 0xf9809448u, 0x97b80df9u, 0x35ef87aau,
};

static const uint32_t bshim_067_tab3[96] = {
    0x010873bcu, 0x9f3fed6du, 0x3d77671eu, 0xdbaee0cfu, 0x79e65a80u, 0x181dd431u, 0xb6554de2u, 0x548cc793u,
    0xf2c44144u, 0x90fbbaf5u, 0x2f3334a6u, 0xcd6aae57u, 0x6ba22808u, 0x09d9a1b9u, 0xa8111b6au, 0x4648951bu,
    0xe4800eccu, 0x82b7887du, 0x20ef022eu, 0xbf267bdfu, 0x5d5df590u, 0xfb956f41u, 0x99cce8f2u, 0x380462a3u,
    0xd63bdc54u, 0x74735605u, 0x12aacfb6u, 0xb0e24967u, 0x4f19c318u, 0xed513cc9u, 0x8b88b67au, 0x29c0302bu,
    0xc7f7a9dcu, 0x662f238du, 0x04669d3eu, 0xa29e16efu, 0x40d590a0u, 0xdf0d0a51u, 0x7d448402u, 0x1b7bfdb3u,
    0xb9b37764u, 0x57eaf115u, 0xf6226ac6u, 0x9459e477u, 0x32915e28u, 0xd0c8d7d9u, 0x6f00518au, 0x0d37cb3bu,
    0xab6f44ecu, 0x49a6be9du, 0xe7de384eu, 0x8615b1ffu, 0x244d2bb0u, 0xc284a561u, 0x60bc1f12u, 0xfef398c3u,
    0x9d2b1274u, 0x3b628c25u, 0xd99a05d6u, 0x77d17f87u, 0x1608f938u, 0xb44072e9u, 0x5277ec9au, 0xf0af664bu,
    0x8ee6dffcu, 0x2d1e59adu, 0xcb55d35eu, 0x698d4d0fu, 0x07c4c6c0u, 0xa5fc4071u, 0x4433ba22u, 0xe26b33d3u,
    0x80a2ad84u, 0x1eda2735u, 0xbd11a0e6u, 0x5b491a97u, 0xf9809448u, 0x97b80df9u, 0x35ef87aau, 0xd427015bu,
    0x725e7b0cu, 0x1095f4bdu, 0xaecd6e6eu, 0x4d04e81fu, 0xeb3c61d0u, 0x8973db81u, 0x27ab5532u, 0xc5e2cee3u,
    0x641a4894u, 0x0251c245u, 0xa0893bf6u, 0x3ec0b5a7u, 0xdcf82f58u, 0x7b2fa909u, 0x196722bau, 0xb79e9c6bu,
};

static const uint32_t bshim_067_tab4[96] = {
    0x82b7887du, 0x20ef022eu, 0xbf267bdfu, 0x5d5df590u, 0xfb956f41u, 0x99cce8f2u, 0x380462a3u, 0xd63bdc54u,
    0x74735605u, 0x12aacfb6u, 0xb0e24967u, 0x4f19c318u, 0xed513cc9u, 0x8b88b67au, 0x29c0302bu, 0xc7f7a9dcu,
    0x662f238du, 0x04669d3eu, 0xa29e16efu, 0x40d590a0u, 0xdf0d0a51u, 0x7d448402u, 0x1b7bfdb3u, 0xb9b37764u,
    0x57eaf115u, 0xf6226ac6u, 0x9459e477u, 0x32915e28u, 0xd0c8d7d9u, 0x6f00518au, 0x0d37cb3bu, 0xab6f44ecu,
    0x49a6be9du, 0xe7de384eu, 0x8615b1ffu, 0x244d2bb0u, 0xc284a561u, 0x60bc1f12u, 0xfef398c3u, 0x9d2b1274u,
    0x3b628c25u, 0xd99a05d6u, 0x77d17f87u, 0x1608f938u, 0xb44072e9u, 0x5277ec9au, 0xf0af664bu, 0x8ee6dffcu,
    0x2d1e59adu, 0xcb55d35eu, 0x698d4d0fu, 0x07c4c6c0u, 0xa5fc4071u, 0x4433ba22u, 0xe26b33d3u, 0x80a2ad84u,
    0x1eda2735u, 0xbd11a0e6u, 0x5b491a97u, 0xf9809448u, 0x97b80df9u, 0x35ef87aau, 0xd427015bu, 0x725e7b0cu,
    0x1095f4bdu, 0xaecd6e6eu, 0x4d04e81fu, 0xeb3c61d0u, 0x8973db81u, 0x27ab5532u, 0xc5e2cee3u, 0x641a4894u,
    0x0251c245u, 0xa0893bf6u, 0x3ec0b5a7u, 0xdcf82f58u, 0x7b2fa909u, 0x196722bau, 0xb79e9c6bu, 0x55d6161cu,
    0xf40d8fcdu, 0x9245097eu, 0x307c832fu, 0xceb3fce0u, 0x6ceb7691u, 0x0b22f042u, 0xa95a69f3u, 0x4791e3a4u,
    0xe5c95d55u, 0x8400d706u, 0x223850b7u, 0xc06fca68u, 0x5ea74419u, 0xfcdebdcau, 0x9b16377bu, 0x394db12cu,
};

static const uint32_t bshim_067_tab5[96] = {
    0x04669d3eu, 0xa29e16efu, 0x40d590a0u, 0xdf0d0a51u, 0x7d448402u, 0x1b7bfdb3u, 0xb9b37764u, 0x57eaf115u,
    0xf6226ac6u, 0x9459e477u, 0x32915e28u, 0xd0c8d7d9u, 0x6f00518au, 0x0d37cb3bu, 0xab6f44ecu, 0x49a6be9du,
    0xe7de384eu, 0x8615b1ffu, 0x244d2bb0u, 0xc284a561u, 0x60bc1f12u, 0xfef398c3u, 0x9d2b1274u, 0x3b628c25u,
    0xd99a05d6u, 0x77d17f87u, 0x1608f938u, 0xb44072e9u, 0x5277ec9au, 0xf0af664bu, 0x8ee6dffcu, 0x2d1e59adu,
    0xcb55d35eu, 0x698d4d0fu, 0x07c4c6c0u, 0xa5fc4071u, 0x4433ba22u, 0xe26b33d3u, 0x80a2ad84u, 0x1eda2735u,
    0xbd11a0e6u, 0x5b491a97u, 0xf9809448u, 0x97b80df9u, 0x35ef87aau, 0xd427015bu, 0x725e7b0cu, 0x1095f4bdu,
    0xaecd6e6eu, 0x4d04e81fu, 0xeb3c61d0u, 0x8973db81u, 0x27ab5532u, 0xc5e2cee3u, 0x641a4894u, 0x0251c245u,
    0xa0893bf6u, 0x3ec0b5a7u, 0xdcf82f58u, 0x7b2fa909u, 0x196722bau, 0xb79e9c6bu, 0x55d6161cu, 0xf40d8fcdu,
    0x9245097eu, 0x307c832fu, 0xceb3fce0u, 0x6ceb7691u, 0x0b22f042u, 0xa95a69f3u, 0x4791e3a4u, 0xe5c95d55u,
    0x8400d706u, 0x223850b7u, 0xc06fca68u, 0x5ea74419u, 0xfcdebdcau, 0x9b16377bu, 0x394db12cu, 0xd7852addu,
    0x75bca48eu, 0x13f41e3fu, 0xb22b97f0u, 0x506311a1u, 0xee9a8b52u, 0x8cd20503u, 0x2b097eb4u, 0xc940f865u,
    0x67787216u, 0x05afebc7u, 0xa3e76578u, 0x421edf29u, 0xe05658dau, 0x7e8dd28bu, 0x1cc54c3cu, 0xbafcc5edu,
};

static const uint32_t bshim_067_tab6[96] = {
    0x8615b1ffu, 0x244d2bb0u, 0xc284a561u, 0x60bc1f12u, 0xfef398c3u, 0x9d2b1274u, 0x3b628c25u, 0xd99a05d6u,
    0x77d17f87u, 0x1608f938u, 0xb44072e9u, 0x5277ec9au, 0xf0af664bu, 0x8ee6dffcu, 0x2d1e59adu, 0xcb55d35eu,
    0x698d4d0fu, 0x07c4c6c0u, 0xa5fc4071u, 0x4433ba22u, 0xe26b33d3u, 0x80a2ad84u, 0x1eda2735u, 0xbd11a0e6u,
    0x5b491a97u, 0xf9809448u, 0x97b80df9u, 0x35ef87aau, 0xd427015bu, 0x725e7b0cu, 0x1095f4bdu, 0xaecd6e6eu,
    0x4d04e81fu, 0xeb3c61d0u, 0x8973db81u, 0x27ab5532u, 0xc5e2cee3u, 0x641a4894u, 0x0251c245u, 0xa0893bf6u,
    0x3ec0b5a7u, 0xdcf82f58u, 0x7b2fa909u, 0x196722bau, 0xb79e9c6bu, 0x55d6161cu, 0xf40d8fcdu, 0x9245097eu,
    0x307c832fu, 0xceb3fce0u, 0x6ceb7691u, 0x0b22f042u, 0xa95a69f3u, 0x4791e3a4u, 0xe5c95d55u, 0x8400d706u,
    0x223850b7u, 0xc06fca68u, 0x5ea74419u, 0xfcdebdcau, 0x9b16377bu, 0x394db12cu, 0xd7852addu, 0x75bca48eu,
    0x13f41e3fu, 0xb22b97f0u, 0x506311a1u, 0xee9a8b52u, 0x8cd20503u, 0x2b097eb4u, 0xc940f865u, 0x67787216u,
    0x05afebc7u, 0xa3e76578u, 0x421edf29u, 0xe05658dau, 0x7e8dd28bu, 0x1cc54c3cu, 0xbafcc5edu, 0x59343f9eu,
    0xf76bb94fu, 0x95a33300u, 0x33daacb1u, 0xd2122662u, 0x7049a013u, 0x0e8119c4u, 0xacb89375u, 0x4af00d26u,
    0xe92786d7u, 0x875f0088u, 0x25967a39u, 0xc3cdf3eau, 0x62056d9bu, 0x003ce74cu, 0x9e7460fdu, 0x3cabdaaeu,
};

static const uint32_t bshim_067_tab7[96] = {
    0x07c4c6c0u, 0xa5fc4071u, 0x4433ba22u, 0xe26b33d3u, 0x80a2ad84u, 0x1eda2735u, 0xbd11a0e6u, 0x5b491a97u,
    0xf9809448u, 0x97b80df9u, 0x35ef87aau, 0xd427015bu, 0x725e7b0cu, 0x1095f4bdu, 0xaecd6e6eu, 0x4d04e81fu,
    0xeb3c61d0u, 0x8973db81u, 0x27ab5532u, 0xc5e2cee3u, 0x641a4894u, 0x0251c245u, 0xa0893bf6u, 0x3ec0b5a7u,
    0xdcf82f58u, 0x7b2fa909u, 0x196722bau, 0xb79e9c6bu, 0x55d6161cu, 0xf40d8fcdu, 0x9245097eu, 0x307c832fu,
    0xceb3fce0u, 0x6ceb7691u, 0x0b22f042u, 0xa95a69f3u, 0x4791e3a4u, 0xe5c95d55u, 0x8400d706u, 0x223850b7u,
    0xc06fca68u, 0x5ea74419u, 0xfcdebdcau, 0x9b16377bu, 0x394db12cu, 0xd7852addu, 0x75bca48eu, 0x13f41e3fu,
    0xb22b97f0u, 0x506311a1u, 0xee9a8b52u, 0x8cd20503u, 0x2b097eb4u, 0xc940f865u, 0x67787216u, 0x05afebc7u,
    0xa3e76578u, 0x421edf29u, 0xe05658dau, 0x7e8dd28bu, 0x1cc54c3cu, 0xbafcc5edu, 0x59343f9eu, 0xf76bb94fu,
    0x95a33300u, 0x33daacb1u, 0xd2122662u, 0x7049a013u, 0x0e8119c4u, 0xacb89375u, 0x4af00d26u, 0xe92786d7u,
    0x875f0088u, 0x25967a39u, 0xc3cdf3eau, 0x62056d9bu, 0x003ce74cu, 0x9e7460fdu, 0x3cabdaaeu, 0xdae3545fu,
    0x791ace10u, 0x175247c1u, 0xb589c172u, 0x53c13b23u, 0xf1f8b4d4u, 0x90302e85u, 0x2e67a836u, 0xcc9f21e7u,
    0x6ad69b98u, 0x090e1549u, 0xa7458efau, 0x457d08abu, 0xe3b4825cu, 0x81ebfc0du, 0x202375beu, 0xbe5aef6fu,
};

struct bshim_067_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_067_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_067_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_067_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_067_reset(struct bshim_067_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0008188du;
    return 0;
}

