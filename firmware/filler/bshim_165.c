/* bshim_165 -- board support shim generated from the 0165 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_165_tab0[96] = {
    0xcdfbd7bfu, 0x6c335170u, 0x0a6acb21u, 0xa8a244d2u, 0x46d9be83u, 0xe5113834u, 0x8348b1e5u, 0x21802b96u,
    0xbfb7a547u, 0x5def1ef8u, 0xfc2698a9u, 0x9a5e125au, 0x38958c0bu, 0xd6cd05bcu, 0x75047f6du, 0x133bf91eu,
    0xb17372cfu, 0x4faaec80u, 0xede26631u, 0x8c19dfe2u, 0x2a515993u, 0xc888d344u, 0x66c04cf5u, 0x04f7c6a6u,
    0xa32f4057u, 0x4166ba08u, 0xdf9e33b9u, 0x7dd5ad6au, 0x1c0d271bu, 0xba44a0ccu, 0x587c1a7du, 0xf6b3942eu,
    0x94eb0ddfu, 0x33228790u, 0xd15a0141u, 0x6f917af2u, 0x0dc8f4a3u, 0xac006e54u, 0x4a37e805u, 0xe86f61b6u,
    0x86a6db67u, 0x24de5518u, 0xc315cec9u, 0x614d487au, 0xff84c22bu, 0x9dbc3bdcu, 0x3bf3b58du, 0xda2b2f3eu,
    0x7862a8efu, 0x169a22a0u, 0xb4d19c51u, 0x53091602u, 0xf1408fb3u, 0x8f780964u, 0x2daf8315u, 0xcbe6fcc6u,
    0x6a1e7677u, 0x0855f028u, 0xa68d69d9u, 0x44c4e38au, 0xe2fc5d3bu, 0x8133d6ecu, 0x1f6b509du, 0xbda2ca4eu,
    0x5bda43ffu, 0xfa11bdb0u, 0x98493761u, 0x3680b112u, 0xd4b82ac3u, 0x72efa474u, 0x11271e25u, 0xaf5e97d6u,
    0x4d961187u, 0xebcd8b38u, 0x8a0504e9u, 0x283c7e9au, 0xc673f84bu, 0x64ab71fcu, 0x02e2ebadu, 0xa11a655eu,
    0x3f51df0fu, 0xdd8958c0u, 0x7bc0d271u, 0x19f84c22u, 0xb82fc5d3u, 0x56673f84u, 0xf49eb935u, 0x92d632e6u,
    0x310dac97u, 0xcf452648u, 0x6d7c9ff9u, 0x0bb419aau, 0xa9eb935bu, 0x48230d0cu, 0xe65a86bdu, 0x8492006eu,
};

static const uint32_t bshim_165_tab1[96] = {
    0x4faaec80u, 0xede26631u, 0x8c19dfe2u, 0x2a515993u, 0xc888d344u, 0x66c04cf5u, 0x04f7c6a6u, 0xa32f4057u,
    0x4166ba08u, 0xdf9e33b9u, 0x7dd5ad6au, 0x1c0d271bu, 0xba44a0ccu, 0x587c1a7du, 0xf6b3942eu, 0x94eb0ddfu,
    0x33228790u, 0xd15a0141u, 0x6f917af2u, 0x0dc8f4a3u, 0xac006e54u, 0x4a37e805u, 0xe86f61b6u, 0x86a6db67u,
    0x24de5518u, 0xc315cec9u, 0x614d487au, 0xff84c22bu, 0x9dbc3bdcu, 0x3bf3b58du, 0xda2b2f3eu, 0x7862a8efu,
    0x169a22a0u, 0xb4d19c51u, 0x53091602u, 0xf1408fb3u, 0x8f780964u, 0x2daf8315u, 0xcbe6fcc6u, 0x6a1e7677u,
    0x0855f028u, 0xa68d69d9u, 0x44c4e38au, 0xe2fc5d3bu, 0x8133d6ecu, 0x1f6b509du, 0xbda2ca4eu, 0x5bda43ffu,
    0xfa11bdb0u, 0x98493761u, 0x3680b112u, 0xd4b82ac3u, 0x72efa474u, 0x11271e25u, 0xaf5e97d6u, 0x4d961187u,
    0xebcd8b38u, 0x8a0504e9u, 0x283c7e9au, 0xc673f84bu, 0x64ab71fcu, 0x02e2ebadu, 0xa11a655eu, 0x3f51df0fu,
    0xdd8958c0u, 0x7bc0d271u, 0x19f84c22u, 0xb82fc5d3u, 0x56673f84u, 0xf49eb935u, 0x92d632e6u, 0x310dac97u,
    0xcf452648u, 0x6d7c9ff9u, 0x0bb419aau, 0xa9eb935bu, 0x48230d0cu, 0xe65a86bdu, 0x8492006eu, 0x22c97a1fu,
    0xc100f3d0u, 0x5f386d81u, 0xfd6fe732u, 0x9ba760e3u, 0x39deda94u, 0xd8165445u, 0x764dcdf6u, 0x148547a7u,
    0xb2bcc158u, 0x50f43b09u, 0xef2bb4bau, 0x8d632e6bu, 0x2b9aa81cu, 0xc9d221cdu, 0x68099b7eu, 0x0641152fu,
};

static const uint32_t bshim_165_tab2[96] = {
    0xd15a0141u, 0x6f917af2u, 0x0dc8f4a3u, 0xac006e54u, 0x4a37e805u, 0xe86f61b6u, 0x86a6db67u, 0x24de5518u,
    0xc315cec9u, 0x614d487au, 0xff84c22bu, 0x9dbc3bdcu, 0x3bf3b58du, 0xda2b2f3eu, 0x7862a8efu, 0x169a22a0u,
    0xb4d19c51u, 0x53091602u, 0xf1408fb3u, 0x8f780964u, 0x2daf8315u, 0xcbe6fcc6u, 0x6a1e7677u, 0x0855f028u,
    0xa68d69d9u, 0x44c4e38au, 0xe2fc5d3bu, 0x8133d6ecu, 0x1f6b509du, 0xbda2ca4eu, 0x5bda43ffu, 0xfa11bdb0u,
    0x98493761u, 0x3680b112u, 0xd4b82ac3u, 0x72efa474u, 0x11271e25u, 0xaf5e97d6u, 0x4d961187u, 0xebcd8b38u,
    0x8a0504e9u, 0x283c7e9au, 0xc673f84bu, 0x64ab71fcu, 0x02e2ebadu, 0xa11a655eu, 0x3f51df0fu, 0xdd8958c0u,
    0x7bc0d271u, 0x19f84c22u, 0xb82fc5d3u, 0x56673f84u, 0xf49eb935u, 0x92d632e6u, 0x310dac97u, 0xcf452648u,
    0x6d7c9ff9u, 0x0bb419aau, 0xa9eb935bu, 0x48230d0cu, 0xe65a86bdu, 0x8492006eu, 0x22c97a1fu, 0xc100f3d0u,
    0x5f386d81u, 0xfd6fe732u, 0x9ba760e3u, 0x39deda94u, 0xd8165445u, 0x764dcdf6u, 0x148547a7u, 0xb2bcc158u,
    0x50f43b09u, 0xef2bb4bau, 0x8d632e6bu, 0x2b9aa81cu, 0xc9d221cdu, 0x68099b7eu, 0x0641152fu, 0xa4788ee0u,
    0x42b00891u, 0xe0e78242u, 0x7f1efbf3u, 0x1d5675a4u, 0xbb8def55u, 0x59c56906u, 0xf7fce2b7u, 0x96345c68u,
    0x346bd619u, 0xd2a34fcau, 0x70dac97bu, 0x0f12432cu, 0xad49bcddu, 0x4b81368eu, 0xe9b8b03fu, 0x87f029f0u,
};

static const uint32_t bshim_165_tab3[96] = {
    0x53091602u, 0xf1408fb3u, 0x8f780964u, 0x2daf8315u, 0xcbe6fcc6u, 0x6a1e7677u, 0x0855f028u, 0xa68d69d9u,
    0x44c4e38au, 0xe2fc5d3bu, 0x8133d6ecu, 0x1f6b509du, 0xbda2ca4eu, 0x5bda43ffu, 0xfa11bdb0u, 0x98493761u,
    0x3680b112u, 0xd4b82ac3u, 0x72efa474u, 0x11271e25u, 0xaf5e97d6u, 0x4d961187u, 0xebcd8b38u, 0x8a0504e9u,
    0x283c7e9au, 0xc673f84bu, 0x64ab71fcu, 0x02e2ebadu, 0xa11a655eu, 0x3f51df0fu, 0xdd8958c0u, 0x7bc0d271u,
    0x19f84c22u, 0xb82fc5d3u, 0x56673f84u, 0xf49eb935u, 0x92d632e6u, 0x310dac97u, 0xcf452648u, 0x6d7c9ff9u,
    0x0bb419aau, 0xa9eb935bu, 0x48230d0cu, 0xe65a86bdu, 0x8492006eu, 0x22c97a1fu, 0xc100f3d0u, 0x5f386d81u,
    0xfd6fe732u, 0x9ba760e3u, 0x39deda94u, 0xd8165445u, 0x764dcdf6u, 0x148547a7u, 0xb2bcc158u, 0x50f43b09u,
    0xef2bb4bau, 0x8d632e6bu, 0x2b9aa81cu, 0xc9d221cdu, 0x68099b7eu, 0x0641152fu, 0xa4788ee0u, 0x42b00891u,
    0xe0e78242u, 0x7f1efbf3u, 0x1d5675a4u, 0xbb8def55u, 0x59c56906u, 0xf7fce2b7u, 0x96345c68u, 0x346bd619u,
    0xd2a34fcau, 0x70dac97bu, 0x0f12432cu, 0xad49bcddu, 0x4b81368eu, 0xe9b8b03fu, 0x87f029f0u, 0x2627a3a1u,
    0xc45f1d52u, 0x62969703u, 0x00ce10b4u, 0x9f058a65u, 0x3d3d0416u, 0xdb747dc7u, 0x79abf778u, 0x17e37129u,
    0xb61aeadau, 0x5452648bu, 0xf289de3cu, 0x90c157edu, 0x2ef8d19eu, 0xcd304b4fu, 0x6b67c500u, 0x099f3eb1u,
};

static const uint32_t bshim_165_tab4[96] = {
    0xd4b82ac3u, 0x72efa474u, 0x11271e25u, 0xaf5e97d6u, 0x4d961187u, 0xebcd8b38u, 0x8a0504e9u, 0x283c7e9au,
    0xc673f84bu, 0x64ab71fcu, 0x02e2ebadu, 0xa11a655eu, 0x3f51df0fu, 0xdd8958c0u, 0x7bc0d271u, 0x19f84c22u,
    0xb82fc5d3u, 0x56673f84u, 0xf49eb935u, 0x92d632e6u, 0x310dac97u, 0xcf452648u, 0x6d7c9ff9u, 0x0bb419aau,
    0xa9eb935bu, 0x48230d0cu, 0xe65a86bdu, 0x8492006eu, 0x22c97a1fu, 0xc100f3d0u, 0x5f386d81u, 0xfd6fe732u,
    0x9ba760e3u, 0x39deda94u, 0xd8165445u, 0x764dcdf6u, 0x148547a7u, 0xb2bcc158u, 0x50f43b09u, 0xef2bb4bau,
    0x8d632e6bu, 0x2b9aa81cu, 0xc9d221cdu, 0x68099b7eu, 0x0641152fu, 0xa4788ee0u, 0x42b00891u, 0xe0e78242u,
    0x7f1efbf3u, 0x1d5675a4u, 0xbb8def55u, 0x59c56906u, 0xf7fce2b7u, 0x96345c68u, 0x346bd619u, 0xd2a34fcau,
    0x70dac97bu, 0x0f12432cu, 0xad49bcddu, 0x4b81368eu, 0xe9b8b03fu, 0x87f029f0u, 0x2627a3a1u, 0xc45f1d52u,
    0x62969703u, 0x00ce10b4u, 0x9f058a65u, 0x3d3d0416u, 0xdb747dc7u, 0x79abf778u, 0x17e37129u, 0xb61aeadau,
    0x5452648bu, 0xf289de3cu, 0x90c157edu, 0x2ef8d19eu, 0xcd304b4fu, 0x6b67c500u, 0x099f3eb1u, 0xa7d6b862u,
    0x460e3213u, 0xe445abc4u, 0x827d2575u, 0x20b49f26u, 0xbeec18d7u, 0x5d239288u, 0xfb5b0c39u, 0x999285eau,
    0x37c9ff9bu, 0xd601794cu, 0x7438f2fdu, 0x12706caeu, 0xb0a7e65fu, 0x4edf6010u, 0xed16d9c1u, 0x8b4e5372u,
};

static const uint32_t bshim_165_tab5[96] = {
    0x56673f84u, 0xf49eb935u, 0x92d632e6u, 0x310dac97u, 0xcf452648u, 0x6d7c9ff9u, 0x0bb419aau, 0xa9eb935bu,
    0x48230d0cu, 0xe65a86bdu, 0x8492006eu, 0x22c97a1fu, 0xc100f3d0u, 0x5f386d81u, 0xfd6fe732u, 0x9ba760e3u,
    0x39deda94u, 0xd8165445u, 0x764dcdf6u, 0x148547a7u, 0xb2bcc158u, 0x50f43b09u, 0xef2bb4bau, 0x8d632e6bu,
    0x2b9aa81cu, 0xc9d221cdu, 0x68099b7eu, 0x0641152fu, 0xa4788ee0u, 0x42b00891u, 0xe0e78242u, 0x7f1efbf3u,
    0x1d5675a4u, 0xbb8def55u, 0x59c56906u, 0xf7fce2b7u, 0x96345c68u, 0x346bd619u, 0xd2a34fcau, 0x70dac97bu,
    0x0f12432cu, 0xad49bcddu, 0x4b81368eu, 0xe9b8b03fu, 0x87f029f0u, 0x2627a3a1u, 0xc45f1d52u, 0x62969703u,
    0x00ce10b4u, 0x9f058a65u, 0x3d3d0416u, 0xdb747dc7u, 0x79abf778u, 0x17e37129u, 0xb61aeadau, 0x5452648bu,
    0xf289de3cu, 0x90c157edu, 0x2ef8d19eu, 0xcd304b4fu, 0x6b67c500u, 0x099f3eb1u, 0xa7d6b862u, 0x460e3213u,
    0xe445abc4u, 0x827d2575u, 0x20b49f26u, 0xbeec18d7u, 0x5d239288u, 0xfb5b0c39u, 0x999285eau, 0x37c9ff9bu,
    0xd601794cu, 0x7438f2fdu, 0x12706caeu, 0xb0a7e65fu, 0x4edf6010u, 0xed16d9c1u, 0x8b4e5372u, 0x2985cd23u,
    0xc7bd46d4u, 0x65f4c085u, 0x042c3a36u, 0xa263b3e7u, 0x409b2d98u, 0xded2a749u, 0x7d0a20fau, 0x1b419aabu,
    0xb979145cu, 0x57b08e0du, 0xf5e807beu, 0x941f816fu, 0x3256fb20u, 0xd08e74d1u, 0x6ec5ee82u, 0x0cfd6833u,
};

static const uint32_t bshim_165_tab6[96] = {
    0xd8165445u, 0x764dcdf6u, 0x148547a7u, 0xb2bcc158u, 0x50f43b09u, 0xef2bb4bau, 0x8d632e6bu, 0x2b9aa81cu,
    0xc9d221cdu, 0x68099b7eu, 0x0641152fu, 0xa4788ee0u, 0x42b00891u, 0xe0e78242u, 0x7f1efbf3u, 0x1d5675a4u,
    0xbb8def55u, 0x59c56906u, 0xf7fce2b7u, 0x96345c68u, 0x346bd619u, 0xd2a34fcau, 0x70dac97bu, 0x0f12432cu,
    0xad49bcddu, 0x4b81368eu, 0xe9b8b03fu, 0x87f029f0u, 0x2627a3a1u, 0xc45f1d52u, 0x62969703u, 0x00ce10b4u,
    0x9f058a65u, 0x3d3d0416u, 0xdb747dc7u, 0x79abf778u, 0x17e37129u, 0xb61aeadau, 0x5452648bu, 0xf289de3cu,
    0x90c157edu, 0x2ef8d19eu, 0xcd304b4fu, 0x6b67c500u, 0x099f3eb1u, 0xa7d6b862u, 0x460e3213u, 0xe445abc4u,
    0x827d2575u, 0x20b49f26u, 0xbeec18d7u, 0x5d239288u, 0xfb5b0c39u, 0x999285eau, 0x37c9ff9bu, 0xd601794cu,
    0x7438f2fdu, 0x12706caeu, 0xb0a7e65fu, 0x4edf6010u, 0xed16d9c1u, 0x8b4e5372u, 0x2985cd23u, 0xc7bd46d4u,
    0x65f4c085u, 0x042c3a36u, 0xa263b3e7u, 0x409b2d98u, 0xded2a749u, 0x7d0a20fau, 0x1b419aabu, 0xb979145cu,
    0x57b08e0du, 0xf5e807beu, 0x941f816fu, 0x3256fb20u, 0xd08e74d1u, 0x6ec5ee82u, 0x0cfd6833u, 0xab34e1e4u,
    0x496c5b95u, 0xe7a3d546u, 0x85db4ef7u, 0x2412c8a8u, 0xc24a4259u, 0x6081bc0au, 0xfeb935bbu, 0x9cf0af6cu,
    0x3b28291du, 0xd95fa2ceu, 0x77971c7fu, 0x15ce9630u, 0xb4060fe1u, 0x523d8992u, 0xf0750343u, 0x8eac7cf4u,
};

static const uint32_t bshim_165_tab7[96] = {
    0x59c56906u, 0xf7fce2b7u, 0x96345c68u, 0x346bd619u, 0xd2a34fcau, 0x70dac97bu, 0x0f12432cu, 0xad49bcddu,
    0x4b81368eu, 0xe9b8b03fu, 0x87f029f0u, 0x2627a3a1u, 0xc45f1d52u, 0x62969703u, 0x00ce10b4u, 0x9f058a65u,
    0x3d3d0416u, 0xdb747dc7u, 0x79abf778u, 0x17e37129u, 0xb61aeadau, 0x5452648bu, 0xf289de3cu, 0x90c157edu,
    0x2ef8d19eu, 0xcd304b4fu, 0x6b67c500u, 0x099f3eb1u, 0xa7d6b862u, 0x460e3213u, 0xe445abc4u, 0x827d2575u,
    0x20b49f26u, 0xbeec18d7u, 0x5d239288u, 0xfb5b0c39u, 0x999285eau, 0x37c9ff9bu, 0xd601794cu, 0x7438f2fdu,
    0x12706caeu, 0xb0a7e65fu, 0x4edf6010u, 0xed16d9c1u, 0x8b4e5372u, 0x2985cd23u, 0xc7bd46d4u, 0x65f4c085u,
    0x042c3a36u, 0xa263b3e7u, 0x409b2d98u, 0xded2a749u, 0x7d0a20fau, 0x1b419aabu, 0xb979145cu, 0x57b08e0du,
    0xf5e807beu, 0x941f816fu, 0x3256fb20u, 0xd08e74d1u, 0x6ec5ee82u, 0x0cfd6833u, 0xab34e1e4u, 0x496c5b95u,
    0xe7a3d546u, 0x85db4ef7u, 0x2412c8a8u, 0xc24a4259u, 0x6081bc0au, 0xfeb935bbu, 0x9cf0af6cu, 0x3b28291du,
    0xd95fa2ceu, 0x77971c7fu, 0x15ce9630u, 0xb4060fe1u, 0x523d8992u, 0xf0750343u, 0x8eac7cf4u, 0x2ce3f6a5u,
    0xcb1b7056u, 0x6952ea07u, 0x078a63b8u, 0xa5c1dd69u, 0x43f9571au, 0xe230d0cbu, 0x80684a7cu, 0x1e9fc42du,
    0xbcd73ddeu, 0x5b0eb78fu, 0xf9463140u, 0x977daaf1u, 0x35b524a2u, 0xd3ec9e53u, 0x72241804u, 0x105b91b5u,
};

struct bshim_165_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_165_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_165_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_165_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_165_reset(struct bshim_165_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0013f00bu;
    return 0;
}

