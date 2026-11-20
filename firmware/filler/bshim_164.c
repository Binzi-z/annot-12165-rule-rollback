/* bshim_164 -- board support shim generated from the 0164 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_164_tab0[96] = {
    0xd798922cu, 0x75d00bddu, 0x1407858eu, 0xb23eff3fu, 0x507678f0u, 0xeeadf2a1u, 0x8ce56c52u, 0x2b1ce603u,
    0xc9545fb4u, 0x678bd965u, 0x05c35316u, 0xa3faccc7u, 0x42324678u, 0xe069c029u, 0x7ea139dau, 0x1cd8b38bu,
    0xbb102d3cu, 0x5947a6edu, 0xf77f209eu, 0x95b69a4fu, 0x33ee1400u, 0xd2258db1u, 0x705d0762u, 0x0e948113u,
    0xaccbfac4u, 0x4b037475u, 0xe93aee26u, 0x877267d7u, 0x25a9e188u, 0xc3e15b39u, 0x6218d4eau, 0x00504e9bu,
    0x9e87c84cu, 0x3cbf41fdu, 0xdaf6bbaeu, 0x792e355fu, 0x1765af10u, 0xb59d28c1u, 0x53d4a272u, 0xf20c1c23u,
    0x904395d4u, 0x2e7b0f85u, 0xccb28936u, 0x6aea02e7u, 0x09217c98u, 0xa758f649u, 0x45906ffau, 0xe3c7e9abu,
    0x81ff635cu, 0x2036dd0du, 0xbe6e56beu, 0x5ca5d06fu, 0xfadd4a20u, 0x9914c3d1u, 0x374c3d82u, 0xd583b733u,
    0x73bb30e4u, 0x11f2aa95u, 0xb02a2446u, 0x4e619df7u, 0xec9917a8u, 0x8ad09159u, 0x29080b0au, 0xc73f84bbu,
    0x6576fe6cu, 0x03ae781du, 0xa1e5f1ceu, 0x401d6b7fu, 0xde54e530u, 0x7c8c5ee1u, 0x1ac3d892u, 0xb8fb5243u,
    0x5732cbf4u, 0xf56a45a5u, 0x93a1bf56u, 0x31d93907u, 0xd010b2b8u, 0x6e482c69u, 0x0c7fa61au, 0xaab71fcbu,
    0x48ee997cu, 0xe726132du, 0x855d8cdeu, 0x2395068fu, 0xc1cc8040u, 0x6003f9f1u, 0xfe3b73a2u, 0x9c72ed53u,
    0x3aaa6704u, 0xd8e1e0b5u, 0x77195a66u, 0x1550d417u, 0xb3884dc8u, 0x51bfc779u, 0xeff7412au, 0x8e2ebadbu,
};

static const uint32_t bshim_164_tab1[96] = {
    0x5947a6edu, 0xf77f209eu, 0x95b69a4fu, 0x33ee1400u, 0xd2258db1u, 0x705d0762u, 0x0e948113u, 0xaccbfac4u,
    0x4b037475u, 0xe93aee26u, 0x877267d7u, 0x25a9e188u, 0xc3e15b39u, 0x6218d4eau, 0x00504e9bu, 0x9e87c84cu,
    0x3cbf41fdu, 0xdaf6bbaeu, 0x792e355fu, 0x1765af10u, 0xb59d28c1u, 0x53d4a272u, 0xf20c1c23u, 0x904395d4u,
    0x2e7b0f85u, 0xccb28936u, 0x6aea02e7u, 0x09217c98u, 0xa758f649u, 0x45906ffau, 0xe3c7e9abu, 0x81ff635cu,
    0x2036dd0du, 0xbe6e56beu, 0x5ca5d06fu, 0xfadd4a20u, 0x9914c3d1u, 0x374c3d82u, 0xd583b733u, 0x73bb30e4u,
    0x11f2aa95u, 0xb02a2446u, 0x4e619df7u, 0xec9917a8u, 0x8ad09159u, 0x29080b0au, 0xc73f84bbu, 0x6576fe6cu,
    0x03ae781du, 0xa1e5f1ceu, 0x401d6b7fu, 0xde54e530u, 0x7c8c5ee1u, 0x1ac3d892u, 0xb8fb5243u, 0x5732cbf4u,
    0xf56a45a5u, 0x93a1bf56u, 0x31d93907u, 0xd010b2b8u, 0x6e482c69u, 0x0c7fa61au, 0xaab71fcbu, 0x48ee997cu,
    0xe726132du, 0x855d8cdeu, 0x2395068fu, 0xc1cc8040u, 0x6003f9f1u, 0xfe3b73a2u, 0x9c72ed53u, 0x3aaa6704u,
    0xd8e1e0b5u, 0x77195a66u, 0x1550d417u, 0xb3884dc8u, 0x51bfc779u, 0xeff7412au, 0x8e2ebadbu, 0x2c66348cu,
    0xca9dae3du, 0x68d527eeu, 0x070ca19fu, 0xa5441b50u, 0x437b9501u, 0xe1b30eb2u, 0x7fea8863u, 0x1e220214u,
    0xbc597bc5u, 0x5a90f576u, 0xf8c86f27u, 0x96ffe8d8u, 0x35376289u, 0xd36edc3au, 0x71a655ebu, 0x0fddcf9cu,
};

static const uint32_t bshim_164_tab2[96] = {
    0xdaf6bbaeu, 0x792e355fu, 0x1765af10u, 0xb59d28c1u, 0x53d4a272u, 0xf20c1c23u, 0x904395d4u, 0x2e7b0f85u,
    0xccb28936u, 0x6aea02e7u, 0x09217c98u, 0xa758f649u, 0x45906ffau, 0xe3c7e9abu, 0x81ff635cu, 0x2036dd0du,
    0xbe6e56beu, 0x5ca5d06fu, 0xfadd4a20u, 0x9914c3d1u, 0x374c3d82u, 0xd583b733u, 0x73bb30e4u, 0x11f2aa95u,
    0xb02a2446u, 0x4e619df7u, 0xec9917a8u, 0x8ad09159u, 0x29080b0au, 0xc73f84bbu, 0x6576fe6cu, 0x03ae781du,
    0xa1e5f1ceu, 0x401d6b7fu, 0xde54e530u, 0x7c8c5ee1u, 0x1ac3d892u, 0xb8fb5243u, 0x5732cbf4u, 0xf56a45a5u,
    0x93a1bf56u, 0x31d93907u, 0xd010b2b8u, 0x6e482c69u, 0x0c7fa61au, 0xaab71fcbu, 0x48ee997cu, 0xe726132du,
    0x855d8cdeu, 0x2395068fu, 0xc1cc8040u, 0x6003f9f1u, 0xfe3b73a2u, 0x9c72ed53u, 0x3aaa6704u, 0xd8e1e0b5u,
    0x77195a66u, 0x1550d417u, 0xb3884dc8u, 0x51bfc779u, 0xeff7412au, 0x8e2ebadbu, 0x2c66348cu, 0xca9dae3du,
    0x68d527eeu, 0x070ca19fu, 0xa5441b50u, 0x437b9501u, 0xe1b30eb2u, 0x7fea8863u, 0x1e220214u, 0xbc597bc5u,
    0x5a90f576u, 0xf8c86f27u, 0x96ffe8d8u, 0x35376289u, 0xd36edc3au, 0x71a655ebu, 0x0fddcf9cu, 0xae15494du,
    0x4c4cc2feu, 0xea843cafu, 0x88bbb660u, 0x26f33011u, 0xc52aa9c2u, 0x63622373u, 0x01999d24u, 0x9fd116d5u,
    0x3e089086u, 0xdc400a37u, 0x7a7783e8u, 0x18aefd99u, 0xb6e6774au, 0x551df0fbu, 0xf3556aacu, 0x918ce45du,
};

static const uint32_t bshim_164_tab3[96] = {
    0x5ca5d06fu, 0xfadd4a20u, 0x9914c3d1u, 0x374c3d82u, 0xd583b733u, 0x73bb30e4u, 0x11f2aa95u, 0xb02a2446u,
    0x4e619df7u, 0xec9917a8u, 0x8ad09159u, 0x29080b0au, 0xc73f84bbu, 0x6576fe6cu, 0x03ae781du, 0xa1e5f1ceu,
    0x401d6b7fu, 0xde54e530u, 0x7c8c5ee1u, 0x1ac3d892u, 0xb8fb5243u, 0x5732cbf4u, 0xf56a45a5u, 0x93a1bf56u,
    0x31d93907u, 0xd010b2b8u, 0x6e482c69u, 0x0c7fa61au, 0xaab71fcbu, 0x48ee997cu, 0xe726132du, 0x855d8cdeu,
    0x2395068fu, 0xc1cc8040u, 0x6003f9f1u, 0xfe3b73a2u, 0x9c72ed53u, 0x3aaa6704u, 0xd8e1e0b5u, 0x77195a66u,
    0x1550d417u, 0xb3884dc8u, 0x51bfc779u, 0xeff7412au, 0x8e2ebadbu, 0x2c66348cu, 0xca9dae3du, 0x68d527eeu,
    0x070ca19fu, 0xa5441b50u, 0x437b9501u, 0xe1b30eb2u, 0x7fea8863u, 0x1e220214u, 0xbc597bc5u, 0x5a90f576u,
    0xf8c86f27u, 0x96ffe8d8u, 0x35376289u, 0xd36edc3au, 0x71a655ebu, 0x0fddcf9cu, 0xae15494du, 0x4c4cc2feu,
    0xea843cafu, 0x88bbb660u, 0x26f33011u, 0xc52aa9c2u, 0x63622373u, 0x01999d24u, 0x9fd116d5u, 0x3e089086u,
    0xdc400a37u, 0x7a7783e8u, 0x18aefd99u, 0xb6e6774au, 0x551df0fbu, 0xf3556aacu, 0x918ce45du, 0x2fc45e0eu,
    0xcdfbd7bfu, 0x6c335170u, 0x0a6acb21u, 0xa8a244d2u, 0x46d9be83u, 0xe5113834u, 0x8348b1e5u, 0x21802b96u,
    0xbfb7a547u, 0x5def1ef8u, 0xfc2698a9u, 0x9a5e125au, 0x38958c0bu, 0xd6cd05bcu, 0x75047f6du, 0x133bf91eu,
};

static const uint32_t bshim_164_tab4[96] = {
    0xde54e530u, 0x7c8c5ee1u, 0x1ac3d892u, 0xb8fb5243u, 0x5732cbf4u, 0xf56a45a5u, 0x93a1bf56u, 0x31d93907u,
    0xd010b2b8u, 0x6e482c69u, 0x0c7fa61au, 0xaab71fcbu, 0x48ee997cu, 0xe726132du, 0x855d8cdeu, 0x2395068fu,
    0xc1cc8040u, 0x6003f9f1u, 0xfe3b73a2u, 0x9c72ed53u, 0x3aaa6704u, 0xd8e1e0b5u, 0x77195a66u, 0x1550d417u,
    0xb3884dc8u, 0x51bfc779u, 0xeff7412au, 0x8e2ebadbu, 0x2c66348cu, 0xca9dae3du, 0x68d527eeu, 0x070ca19fu,
    0xa5441b50u, 0x437b9501u, 0xe1b30eb2u, 0x7fea8863u, 0x1e220214u, 0xbc597bc5u, 0x5a90f576u, 0xf8c86f27u,
    0x96ffe8d8u, 0x35376289u, 0xd36edc3au, 0x71a655ebu, 0x0fddcf9cu, 0xae15494du, 0x4c4cc2feu, 0xea843cafu,
    0x88bbb660u, 0x26f33011u, 0xc52aa9c2u, 0x63622373u, 0x01999d24u, 0x9fd116d5u, 0x3e089086u, 0xdc400a37u,
    0x7a7783e8u, 0x18aefd99u, 0xb6e6774au, 0x551df0fbu, 0xf3556aacu, 0x918ce45du, 0x2fc45e0eu, 0xcdfbd7bfu,
    0x6c335170u, 0x0a6acb21u, 0xa8a244d2u, 0x46d9be83u, 0xe5113834u, 0x8348b1e5u, 0x21802b96u, 0xbfb7a547u,
    0x5def1ef8u, 0xfc2698a9u, 0x9a5e125au, 0x38958c0bu, 0xd6cd05bcu, 0x75047f6du, 0x133bf91eu, 0xb17372cfu,
    0x4faaec80u, 0xede26631u, 0x8c19dfe2u, 0x2a515993u, 0xc888d344u, 0x66c04cf5u, 0x04f7c6a6u, 0xa32f4057u,
    0x4166ba08u, 0xdf9e33b9u, 0x7dd5ad6au, 0x1c0d271bu, 0xba44a0ccu, 0x587c1a7du, 0xf6b3942eu, 0x94eb0ddfu,
};

static const uint32_t bshim_164_tab5[96] = {
    0x6003f9f1u, 0xfe3b73a2u, 0x9c72ed53u, 0x3aaa6704u, 0xd8e1e0b5u, 0x77195a66u, 0x1550d417u, 0xb3884dc8u,
    0x51bfc779u, 0xeff7412au, 0x8e2ebadbu, 0x2c66348cu, 0xca9dae3du, 0x68d527eeu, 0x070ca19fu, 0xa5441b50u,
    0x437b9501u, 0xe1b30eb2u, 0x7fea8863u, 0x1e220214u, 0xbc597bc5u, 0x5a90f576u, 0xf8c86f27u, 0x96ffe8d8u,
    0x35376289u, 0xd36edc3au, 0x71a655ebu, 0x0fddcf9cu, 0xae15494du, 0x4c4cc2feu, 0xea843cafu, 0x88bbb660u,
    0x26f33011u, 0xc52aa9c2u, 0x63622373u, 0x01999d24u, 0x9fd116d5u, 0x3e089086u, 0xdc400a37u, 0x7a7783e8u,
    0x18aefd99u, 0xb6e6774au, 0x551df0fbu, 0xf3556aacu, 0x918ce45du, 0x2fc45e0eu, 0xcdfbd7bfu, 0x6c335170u,
    0x0a6acb21u, 0xa8a244d2u, 0x46d9be83u, 0xe5113834u, 0x8348b1e5u, 0x21802b96u, 0xbfb7a547u, 0x5def1ef8u,
    0xfc2698a9u, 0x9a5e125au, 0x38958c0bu, 0xd6cd05bcu, 0x75047f6du, 0x133bf91eu, 0xb17372cfu, 0x4faaec80u,
    0xede26631u, 0x8c19dfe2u, 0x2a515993u, 0xc888d344u, 0x66c04cf5u, 0x04f7c6a6u, 0xa32f4057u, 0x4166ba08u,
    0xdf9e33b9u, 0x7dd5ad6au, 0x1c0d271bu, 0xba44a0ccu, 0x587c1a7du, 0xf6b3942eu, 0x94eb0ddfu, 0x33228790u,
    0xd15a0141u, 0x6f917af2u, 0x0dc8f4a3u, 0xac006e54u, 0x4a37e805u, 0xe86f61b6u, 0x86a6db67u, 0x24de5518u,
    0xc315cec9u, 0x614d487au, 0xff84c22bu, 0x9dbc3bdcu, 0x3bf3b58du, 0xda2b2f3eu, 0x7862a8efu, 0x169a22a0u,
};

static const uint32_t bshim_164_tab6[96] = {
    0xe1b30eb2u, 0x7fea8863u, 0x1e220214u, 0xbc597bc5u, 0x5a90f576u, 0xf8c86f27u, 0x96ffe8d8u, 0x35376289u,
    0xd36edc3au, 0x71a655ebu, 0x0fddcf9cu, 0xae15494du, 0x4c4cc2feu, 0xea843cafu, 0x88bbb660u, 0x26f33011u,
    0xc52aa9c2u, 0x63622373u, 0x01999d24u, 0x9fd116d5u, 0x3e089086u, 0xdc400a37u, 0x7a7783e8u, 0x18aefd99u,
    0xb6e6774au, 0x551df0fbu, 0xf3556aacu, 0x918ce45du, 0x2fc45e0eu, 0xcdfbd7bfu, 0x6c335170u, 0x0a6acb21u,
    0xa8a244d2u, 0x46d9be83u, 0xe5113834u, 0x8348b1e5u, 0x21802b96u, 0xbfb7a547u, 0x5def1ef8u, 0xfc2698a9u,
    0x9a5e125au, 0x38958c0bu, 0xd6cd05bcu, 0x75047f6du, 0x133bf91eu, 0xb17372cfu, 0x4faaec80u, 0xede26631u,
    0x8c19dfe2u, 0x2a515993u, 0xc888d344u, 0x66c04cf5u, 0x04f7c6a6u, 0xa32f4057u, 0x4166ba08u, 0xdf9e33b9u,
    0x7dd5ad6au, 0x1c0d271bu, 0xba44a0ccu, 0x587c1a7du, 0xf6b3942eu, 0x94eb0ddfu, 0x33228790u, 0xd15a0141u,
    0x6f917af2u, 0x0dc8f4a3u, 0xac006e54u, 0x4a37e805u, 0xe86f61b6u, 0x86a6db67u, 0x24de5518u, 0xc315cec9u,
    0x614d487au, 0xff84c22bu, 0x9dbc3bdcu, 0x3bf3b58du, 0xda2b2f3eu, 0x7862a8efu, 0x169a22a0u, 0xb4d19c51u,
    0x53091602u, 0xf1408fb3u, 0x8f780964u, 0x2daf8315u, 0xcbe6fcc6u, 0x6a1e7677u, 0x0855f028u, 0xa68d69d9u,
    0x44c4e38au, 0xe2fc5d3bu, 0x8133d6ecu, 0x1f6b509du, 0xbda2ca4eu, 0x5bda43ffu, 0xfa11bdb0u, 0x98493761u,
};

static const uint32_t bshim_164_tab7[96] = {
    0x63622373u, 0x01999d24u, 0x9fd116d5u, 0x3e089086u, 0xdc400a37u, 0x7a7783e8u, 0x18aefd99u, 0xb6e6774au,
    0x551df0fbu, 0xf3556aacu, 0x918ce45du, 0x2fc45e0eu, 0xcdfbd7bfu, 0x6c335170u, 0x0a6acb21u, 0xa8a244d2u,
    0x46d9be83u, 0xe5113834u, 0x8348b1e5u, 0x21802b96u, 0xbfb7a547u, 0x5def1ef8u, 0xfc2698a9u, 0x9a5e125au,
    0x38958c0bu, 0xd6cd05bcu, 0x75047f6du, 0x133bf91eu, 0xb17372cfu, 0x4faaec80u, 0xede26631u, 0x8c19dfe2u,
    0x2a515993u, 0xc888d344u, 0x66c04cf5u, 0x04f7c6a6u, 0xa32f4057u, 0x4166ba08u, 0xdf9e33b9u, 0x7dd5ad6au,
    0x1c0d271bu, 0xba44a0ccu, 0x587c1a7du, 0xf6b3942eu, 0x94eb0ddfu, 0x33228790u, 0xd15a0141u, 0x6f917af2u,
    0x0dc8f4a3u, 0xac006e54u, 0x4a37e805u, 0xe86f61b6u, 0x86a6db67u, 0x24de5518u, 0xc315cec9u, 0x614d487au,
    0xff84c22bu, 0x9dbc3bdcu, 0x3bf3b58du, 0xda2b2f3eu, 0x7862a8efu, 0x169a22a0u, 0xb4d19c51u, 0x53091602u,
    0xf1408fb3u, 0x8f780964u, 0x2daf8315u, 0xcbe6fcc6u, 0x6a1e7677u, 0x0855f028u, 0xa68d69d9u, 0x44c4e38au,
    0xe2fc5d3bu, 0x8133d6ecu, 0x1f6b509du, 0xbda2ca4eu, 0x5bda43ffu, 0xfa11bdb0u, 0x98493761u, 0x3680b112u,
    0xd4b82ac3u, 0x72efa474u, 0x11271e25u, 0xaf5e97d6u, 0x4d961187u, 0xebcd8b38u, 0x8a0504e9u, 0x283c7e9au,
    0xc673f84bu, 0x64ab71fcu, 0x02e2ebadu, 0xa11a655eu, 0x3f51df0fu, 0xdd8958c0u, 0x7bc0d271u, 0x19f84c22u,
};

struct bshim_164_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_164_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_164_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_164_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_164_reset(struct bshim_164_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0013d11cu;
    return 0;
}

