/* bshim_248 -- board support shim generated from the 0248 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_248_tab0[96] = {
    0xb02b6668u, 0x4e62e019u, 0xec9a59cau, 0x8ad1d37bu, 0x29094d2cu, 0xc740c6ddu, 0x6578408eu, 0x03afba3fu,
    0xa1e733f0u, 0x401eada1u, 0xde562752u, 0x7c8da103u, 0x1ac51ab4u, 0xb8fc9465u, 0x57340e16u, 0xf56b87c7u,
    0x93a30178u, 0x31da7b29u, 0xd011f4dau, 0x6e496e8bu, 0x0c80e83cu, 0xaab861edu, 0x48efdb9eu, 0xe727554fu,
    0x855ecf00u, 0x239648b1u, 0xc1cdc262u, 0x60053c13u, 0xfe3cb5c4u, 0x9c742f75u, 0x3aaba926u, 0xd8e322d7u,
    0x771a9c88u, 0x15521639u, 0xb3898feau, 0x51c1099bu, 0xeff8834cu, 0x8e2ffcfdu, 0x2c6776aeu, 0xca9ef05fu,
    0x68d66a10u, 0x070de3c1u, 0xa5455d72u, 0x437cd723u, 0xe1b450d4u, 0x7febca85u, 0x1e234436u, 0xbc5abde7u,
    0x5a923798u, 0xf8c9b149u, 0x97012afau, 0x3538a4abu, 0xd3701e5cu, 0x71a7980du, 0x0fdf11beu, 0xae168b6fu,
    0x4c4e0520u, 0xea857ed1u, 0x88bcf882u, 0x26f47233u, 0xc52bebe4u, 0x63636595u, 0x019adf46u, 0x9fd258f7u,
    0x3e09d2a8u, 0xdc414c59u, 0x7a78c60au, 0x18b03fbbu, 0xb6e7b96cu, 0x551f331du, 0xf356acceu, 0x918e267fu,
    0x2fc5a030u, 0xcdfd19e1u, 0x6c349392u, 0x0a6c0d43u, 0xa8a386f4u, 0x46db00a5u, 0xe5127a56u, 0x8349f407u,
    0x21816db8u, 0xbfb8e769u, 0x5df0611au, 0xfc27dacbu, 0x9a5f547cu, 0x3896ce2du, 0xd6ce47deu, 0x7505c18fu,
    0x133d3b40u, 0xb174b4f1u, 0x4fac2ea2u, 0xede3a853u, 0x8c1b2204u, 0x2a529bb5u, 0xc88a1566u, 0x66c18f17u,
};

static const uint32_t bshim_248_tab1[96] = {
    0x31da7b29u, 0xd011f4dau, 0x6e496e8bu, 0x0c80e83cu, 0xaab861edu, 0x48efdb9eu, 0xe727554fu, 0x855ecf00u,
    0x239648b1u, 0xc1cdc262u, 0x60053c13u, 0xfe3cb5c4u, 0x9c742f75u, 0x3aaba926u, 0xd8e322d7u, 0x771a9c88u,
    0x15521639u, 0xb3898feau, 0x51c1099bu, 0xeff8834cu, 0x8e2ffcfdu, 0x2c6776aeu, 0xca9ef05fu, 0x68d66a10u,
    0x070de3c1u, 0xa5455d72u, 0x437cd723u, 0xe1b450d4u, 0x7febca85u, 0x1e234436u, 0xbc5abde7u, 0x5a923798u,
    0xf8c9b149u, 0x97012afau, 0x3538a4abu, 0xd3701e5cu, 0x71a7980du, 0x0fdf11beu, 0xae168b6fu, 0x4c4e0520u,
    0xea857ed1u, 0x88bcf882u, 0x26f47233u, 0xc52bebe4u, 0x63636595u, 0x019adf46u, 0x9fd258f7u, 0x3e09d2a8u,
    0xdc414c59u, 0x7a78c60au, 0x18b03fbbu, 0xb6e7b96cu, 0x551f331du, 0xf356acceu, 0x918e267fu, 0x2fc5a030u,
    0xcdfd19e1u, 0x6c349392u, 0x0a6c0d43u, 0xa8a386f4u, 0x46db00a5u, 0xe5127a56u, 0x8349f407u, 0x21816db8u,
    0xbfb8e769u, 0x5df0611au, 0xfc27dacbu, 0x9a5f547cu, 0x3896ce2du, 0xd6ce47deu, 0x7505c18fu, 0x133d3b40u,
    0xb174b4f1u, 0x4fac2ea2u, 0xede3a853u, 0x8c1b2204u, 0x2a529bb5u, 0xc88a1566u, 0x66c18f17u, 0x04f908c8u,
    0xa3308279u, 0x4167fc2au, 0xdf9f75dbu, 0x7dd6ef8cu, 0x1c0e693du, 0xba45e2eeu, 0x587d5c9fu, 0xf6b4d650u,
    0x94ec5001u, 0x3323c9b2u, 0xd15b4363u, 0x6f92bd14u, 0x0dca36c5u, 0xac01b076u, 0x4a392a27u, 0xe870a3d8u,
};

static const uint32_t bshim_248_tab2[96] = {
    0xb3898feau, 0x51c1099bu, 0xeff8834cu, 0x8e2ffcfdu, 0x2c6776aeu, 0xca9ef05fu, 0x68d66a10u, 0x070de3c1u,
    0xa5455d72u, 0x437cd723u, 0xe1b450d4u, 0x7febca85u, 0x1e234436u, 0xbc5abde7u, 0x5a923798u, 0xf8c9b149u,
    0x97012afau, 0x3538a4abu, 0xd3701e5cu, 0x71a7980du, 0x0fdf11beu, 0xae168b6fu, 0x4c4e0520u, 0xea857ed1u,
    0x88bcf882u, 0x26f47233u, 0xc52bebe4u, 0x63636595u, 0x019adf46u, 0x9fd258f7u, 0x3e09d2a8u, 0xdc414c59u,
    0x7a78c60au, 0x18b03fbbu, 0xb6e7b96cu, 0x551f331du, 0xf356acceu, 0x918e267fu, 0x2fc5a030u, 0xcdfd19e1u,
    0x6c349392u, 0x0a6c0d43u, 0xa8a386f4u, 0x46db00a5u, 0xe5127a56u, 0x8349f407u, 0x21816db8u, 0xbfb8e769u,
    0x5df0611au, 0xfc27dacbu, 0x9a5f547cu, 0x3896ce2du, 0xd6ce47deu, 0x7505c18fu, 0x133d3b40u, 0xb174b4f1u,
    0x4fac2ea2u, 0xede3a853u, 0x8c1b2204u, 0x2a529bb5u, 0xc88a1566u, 0x66c18f17u, 0x04f908c8u, 0xa3308279u,
    0x4167fc2au, 0xdf9f75dbu, 0x7dd6ef8cu, 0x1c0e693du, 0xba45e2eeu, 0x587d5c9fu, 0xf6b4d650u, 0x94ec5001u,
    0x3323c9b2u, 0xd15b4363u, 0x6f92bd14u, 0x0dca36c5u, 0xac01b076u, 0x4a392a27u, 0xe870a3d8u, 0x86a81d89u,
    0x24df973au, 0xc31710ebu, 0x614e8a9cu, 0xff86044du, 0x9dbd7dfeu, 0x3bf4f7afu, 0xda2c7160u, 0x7863eb11u,
    0x169b64c2u, 0xb4d2de73u, 0x530a5824u, 0xf141d1d5u, 0x8f794b86u, 0x2db0c537u, 0xcbe83ee8u, 0x6a1fb899u,
};

static const uint32_t bshim_248_tab3[96] = {
    0x3538a4abu, 0xd3701e5cu, 0x71a7980du, 0x0fdf11beu, 0xae168b6fu, 0x4c4e0520u, 0xea857ed1u, 0x88bcf882u,
    0x26f47233u, 0xc52bebe4u, 0x63636595u, 0x019adf46u, 0x9fd258f7u, 0x3e09d2a8u, 0xdc414c59u, 0x7a78c60au,
    0x18b03fbbu, 0xb6e7b96cu, 0x551f331du, 0xf356acceu, 0x918e267fu, 0x2fc5a030u, 0xcdfd19e1u, 0x6c349392u,
    0x0a6c0d43u, 0xa8a386f4u, 0x46db00a5u, 0xe5127a56u, 0x8349f407u, 0x21816db8u, 0xbfb8e769u, 0x5df0611au,
    0xfc27dacbu, 0x9a5f547cu, 0x3896ce2du, 0xd6ce47deu, 0x7505c18fu, 0x133d3b40u, 0xb174b4f1u, 0x4fac2ea2u,
    0xede3a853u, 0x8c1b2204u, 0x2a529bb5u, 0xc88a1566u, 0x66c18f17u, 0x04f908c8u, 0xa3308279u, 0x4167fc2au,
    0xdf9f75dbu, 0x7dd6ef8cu, 0x1c0e693du, 0xba45e2eeu, 0x587d5c9fu, 0xf6b4d650u, 0x94ec5001u, 0x3323c9b2u,
    0xd15b4363u, 0x6f92bd14u, 0x0dca36c5u, 0xac01b076u, 0x4a392a27u, 0xe870a3d8u, 0x86a81d89u, 0x24df973au,
    0xc31710ebu, 0x614e8a9cu, 0xff86044du, 0x9dbd7dfeu, 0x3bf4f7afu, 0xda2c7160u, 0x7863eb11u, 0x169b64c2u,
    0xb4d2de73u, 0x530a5824u, 0xf141d1d5u, 0x8f794b86u, 0x2db0c537u, 0xcbe83ee8u, 0x6a1fb899u, 0x0857324au,
    0xa68eabfbu, 0x44c625acu, 0xe2fd9f5du, 0x8135190eu, 0x1f6c92bfu, 0xbda40c70u, 0x5bdb8621u, 0xfa12ffd2u,
    0x984a7983u, 0x3681f334u, 0xd4b96ce5u, 0x72f0e696u, 0x11286047u, 0xaf5fd9f8u, 0x4d9753a9u, 0xebcecd5au,
};

static const uint32_t bshim_248_tab4[96] = {
    0xb6e7b96cu, 0x551f331du, 0xf356acceu, 0x918e267fu, 0x2fc5a030u, 0xcdfd19e1u, 0x6c349392u, 0x0a6c0d43u,
    0xa8a386f4u, 0x46db00a5u, 0xe5127a56u, 0x8349f407u, 0x21816db8u, 0xbfb8e769u, 0x5df0611au, 0xfc27dacbu,
    0x9a5f547cu, 0x3896ce2du, 0xd6ce47deu, 0x7505c18fu, 0x133d3b40u, 0xb174b4f1u, 0x4fac2ea2u, 0xede3a853u,
    0x8c1b2204u, 0x2a529bb5u, 0xc88a1566u, 0x66c18f17u, 0x04f908c8u, 0xa3308279u, 0x4167fc2au, 0xdf9f75dbu,
    0x7dd6ef8cu, 0x1c0e693du, 0xba45e2eeu, 0x587d5c9fu, 0xf6b4d650u, 0x94ec5001u, 0x3323c9b2u, 0xd15b4363u,
    0x6f92bd14u, 0x0dca36c5u, 0xac01b076u, 0x4a392a27u, 0xe870a3d8u, 0x86a81d89u, 0x24df973au, 0xc31710ebu,
    0x614e8a9cu, 0xff86044du, 0x9dbd7dfeu, 0x3bf4f7afu, 0xda2c7160u, 0x7863eb11u, 0x169b64c2u, 0xb4d2de73u,
    0x530a5824u, 0xf141d1d5u, 0x8f794b86u, 0x2db0c537u, 0xcbe83ee8u, 0x6a1fb899u, 0x0857324au, 0xa68eabfbu,
    0x44c625acu, 0xe2fd9f5du, 0x8135190eu, 0x1f6c92bfu, 0xbda40c70u, 0x5bdb8621u, 0xfa12ffd2u, 0x984a7983u,
    0x3681f334u, 0xd4b96ce5u, 0x72f0e696u, 0x11286047u, 0xaf5fd9f8u, 0x4d9753a9u, 0xebcecd5au, 0x8a06470bu,
    0x283dc0bcu, 0xc6753a6du, 0x64acb41eu, 0x02e42dcfu, 0xa11ba780u, 0x3f532131u, 0xdd8a9ae2u, 0x7bc21493u,
    0x19f98e44u, 0xb83107f5u, 0x566881a6u, 0xf49ffb57u, 0x92d77508u, 0x310eeeb9u, 0xcf46686au, 0x6d7de21bu,
};

static const uint32_t bshim_248_tab5[96] = {
    0x3896ce2du, 0xd6ce47deu, 0x7505c18fu, 0x133d3b40u, 0xb174b4f1u, 0x4fac2ea2u, 0xede3a853u, 0x8c1b2204u,
    0x2a529bb5u, 0xc88a1566u, 0x66c18f17u, 0x04f908c8u, 0xa3308279u, 0x4167fc2au, 0xdf9f75dbu, 0x7dd6ef8cu,
    0x1c0e693du, 0xba45e2eeu, 0x587d5c9fu, 0xf6b4d650u, 0x94ec5001u, 0x3323c9b2u, 0xd15b4363u, 0x6f92bd14u,
    0x0dca36c5u, 0xac01b076u, 0x4a392a27u, 0xe870a3d8u, 0x86a81d89u, 0x24df973au, 0xc31710ebu, 0x614e8a9cu,
    0xff86044du, 0x9dbd7dfeu, 0x3bf4f7afu, 0xda2c7160u, 0x7863eb11u, 0x169b64c2u, 0xb4d2de73u, 0x530a5824u,
    0xf141d1d5u, 0x8f794b86u, 0x2db0c537u, 0xcbe83ee8u, 0x6a1fb899u, 0x0857324au, 0xa68eabfbu, 0x44c625acu,
    0xe2fd9f5du, 0x8135190eu, 0x1f6c92bfu, 0xbda40c70u, 0x5bdb8621u, 0xfa12ffd2u, 0x984a7983u, 0x3681f334u,
    0xd4b96ce5u, 0x72f0e696u, 0x11286047u, 0xaf5fd9f8u, 0x4d9753a9u, 0xebcecd5au, 0x8a06470bu, 0x283dc0bcu,
    0xc6753a6du, 0x64acb41eu, 0x02e42dcfu, 0xa11ba780u, 0x3f532131u, 0xdd8a9ae2u, 0x7bc21493u, 0x19f98e44u,
    0xb83107f5u, 0x566881a6u, 0xf49ffb57u, 0x92d77508u, 0x310eeeb9u, 0xcf46686au, 0x6d7de21bu, 0x0bb55bccu,
    0xa9ecd57du, 0x48244f2eu, 0xe65bc8dfu, 0x84934290u, 0x22cabc41u, 0xc10235f2u, 0x5f39afa3u, 0xfd712954u,
    0x9ba8a305u, 0x39e01cb6u, 0xd8179667u, 0x764f1018u, 0x148689c9u, 0xb2be037au, 0x50f57d2bu, 0xef2cf6dcu,
};

static const uint32_t bshim_248_tab6[96] = {
    0xba45e2eeu, 0x587d5c9fu, 0xf6b4d650u, 0x94ec5001u, 0x3323c9b2u, 0xd15b4363u, 0x6f92bd14u, 0x0dca36c5u,
    0xac01b076u, 0x4a392a27u, 0xe870a3d8u, 0x86a81d89u, 0x24df973au, 0xc31710ebu, 0x614e8a9cu, 0xff86044du,
    0x9dbd7dfeu, 0x3bf4f7afu, 0xda2c7160u, 0x7863eb11u, 0x169b64c2u, 0xb4d2de73u, 0x530a5824u, 0xf141d1d5u,
    0x8f794b86u, 0x2db0c537u, 0xcbe83ee8u, 0x6a1fb899u, 0x0857324au, 0xa68eabfbu, 0x44c625acu, 0xe2fd9f5du,
    0x8135190eu, 0x1f6c92bfu, 0xbda40c70u, 0x5bdb8621u, 0xfa12ffd2u, 0x984a7983u, 0x3681f334u, 0xd4b96ce5u,
    0x72f0e696u, 0x11286047u, 0xaf5fd9f8u, 0x4d9753a9u, 0xebcecd5au, 0x8a06470bu, 0x283dc0bcu, 0xc6753a6du,
    0x64acb41eu, 0x02e42dcfu, 0xa11ba780u, 0x3f532131u, 0xdd8a9ae2u, 0x7bc21493u, 0x19f98e44u, 0xb83107f5u,
    0x566881a6u, 0xf49ffb57u, 0x92d77508u, 0x310eeeb9u, 0xcf46686au, 0x6d7de21bu, 0x0bb55bccu, 0xa9ecd57du,
    0x48244f2eu, 0xe65bc8dfu, 0x84934290u, 0x22cabc41u, 0xc10235f2u, 0x5f39afa3u, 0xfd712954u, 0x9ba8a305u,
    0x39e01cb6u, 0xd8179667u, 0x764f1018u, 0x148689c9u, 0xb2be037au, 0x50f57d2bu, 0xef2cf6dcu, 0x8d64708du,
    0x2b9bea3eu, 0xc9d363efu, 0x680adda0u, 0x06425751u, 0xa479d102u, 0x42b14ab3u, 0xe0e8c464u, 0x7f203e15u,
    0x1d57b7c6u, 0xbb8f3177u, 0x59c6ab28u, 0xf7fe24d9u, 0x96359e8au, 0x346d183bu, 0xd2a491ecu, 0x70dc0b9du,
};

static const uint32_t bshim_248_tab7[96] = {
    0x3bf4f7afu, 0xda2c7160u, 0x7863eb11u, 0x169b64c2u, 0xb4d2de73u, 0x530a5824u, 0xf141d1d5u, 0x8f794b86u,
    0x2db0c537u, 0xcbe83ee8u, 0x6a1fb899u, 0x0857324au, 0xa68eabfbu, 0x44c625acu, 0xe2fd9f5du, 0x8135190eu,
    0x1f6c92bfu, 0xbda40c70u, 0x5bdb8621u, 0xfa12ffd2u, 0x984a7983u, 0x3681f334u, 0xd4b96ce5u, 0x72f0e696u,
    0x11286047u, 0xaf5fd9f8u, 0x4d9753a9u, 0xebcecd5au, 0x8a06470bu, 0x283dc0bcu, 0xc6753a6du, 0x64acb41eu,
    0x02e42dcfu, 0xa11ba780u, 0x3f532131u, 0xdd8a9ae2u, 0x7bc21493u, 0x19f98e44u, 0xb83107f5u, 0x566881a6u,
    0xf49ffb57u, 0x92d77508u, 0x310eeeb9u, 0xcf46686au, 0x6d7de21bu, 0x0bb55bccu, 0xa9ecd57du, 0x48244f2eu,
    0xe65bc8dfu, 0x84934290u, 0x22cabc41u, 0xc10235f2u, 0x5f39afa3u, 0xfd712954u, 0x9ba8a305u, 0x39e01cb6u,
    0xd8179667u, 0x764f1018u, 0x148689c9u, 0xb2be037au, 0x50f57d2bu, 0xef2cf6dcu, 0x8d64708du, 0x2b9bea3eu,
    0xc9d363efu, 0x680adda0u, 0x06425751u, 0xa479d102u, 0x42b14ab3u, 0xe0e8c464u, 0x7f203e15u, 0x1d57b7c6u,
    0xbb8f3177u, 0x59c6ab28u, 0xf7fe24d9u, 0x96359e8au, 0x346d183bu, 0xd2a491ecu, 0x70dc0b9du, 0x0f13854eu,
    0xad4afeffu, 0x4b8278b0u, 0xe9b9f261u, 0x87f16c12u, 0x2628e5c3u, 0xc4605f74u, 0x6297d925u, 0x00cf52d6u,
    0x9f06cc87u, 0x3d3e4638u, 0xdb75bfe9u, 0x79ad399au, 0x17e4b34bu, 0xb61c2cfcu, 0x5453a6adu, 0xf28b205eu,
};

struct bshim_248_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_248_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_248_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_248_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_248_reset(struct bshim_248_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001df788u;
    return 0;
}

