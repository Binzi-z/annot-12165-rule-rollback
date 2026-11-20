/* bshim_290 -- board support shim generated from the 0290 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_290_tab0[96] = {
    0x1c74d086u, 0xbaac4a37u, 0x58e3c3e8u, 0xf71b3d99u, 0x9552b74au, 0x338a30fbu, 0xd1c1aaacu, 0x6ff9245du,
    0x0e309e0eu, 0xac6817bfu, 0x4a9f9170u, 0xe8d70b21u, 0x870e84d2u, 0x2545fe83u, 0xc37d7834u, 0x61b4f1e5u,
    0xffec6b96u, 0x9e23e547u, 0x3c5b5ef8u, 0xda92d8a9u, 0x78ca525au, 0x1701cc0bu, 0xb53945bcu, 0x5370bf6du,
    0xf1a8391eu, 0x8fdfb2cfu, 0x2e172c80u, 0xcc4ea631u, 0x6a861fe2u, 0x08bd9993u, 0xa6f51344u, 0x452c8cf5u,
    0xe36406a6u, 0x819b8057u, 0x1fd2fa08u, 0xbe0a73b9u, 0x5c41ed6au, 0xfa79671bu, 0x98b0e0ccu, 0x36e85a7du,
    0xd51fd42eu, 0x73574ddfu, 0x118ec790u, 0xafc64141u, 0x4dfdbaf2u, 0xec3534a3u, 0x8a6cae54u, 0x28a42805u,
    0xc6dba1b6u, 0x65131b67u, 0x034a9518u, 0xa1820ec9u, 0x3fb9887au, 0xddf1022bu, 0x7c287bdcu, 0x1a5ff58du,
    0xb8976f3eu, 0x56cee8efu, 0xf50662a0u, 0x933ddc51u, 0x31755602u, 0xcfaccfb3u, 0x6de44964u, 0x0c1bc315u,
    0xaa533cc6u, 0x488ab677u, 0xe6c23028u, 0x84f9a9d9u, 0x2331238au, 0xc1689d3bu, 0x5fa016ecu, 0xfdd7909du,
    0x9c0f0a4eu, 0x3a4683ffu, 0xd87dfdb0u, 0x76b57761u, 0x14ecf112u, 0xb3246ac3u, 0x515be474u, 0xef935e25u,
    0x8dcad7d6u, 0x2c025187u, 0xca39cb38u, 0x687144e9u, 0x06a8be9au, 0xa4e0384bu, 0x4317b1fcu, 0xe14f2badu,
    0x7f86a55eu, 0x1dbe1f0fu, 0xbbf598c0u, 0x5a2d1271u, 0xf8648c22u, 0x969c05d3u, 0x34d37f84u, 0xd30af935u,
};

static const uint32_t bshim_290_tab1[96] = {
    0x9e23e547u, 0x3c5b5ef8u, 0xda92d8a9u, 0x78ca525au, 0x1701cc0bu, 0xb53945bcu, 0x5370bf6du, 0xf1a8391eu,
    0x8fdfb2cfu, 0x2e172c80u, 0xcc4ea631u, 0x6a861fe2u, 0x08bd9993u, 0xa6f51344u, 0x452c8cf5u, 0xe36406a6u,
    0x819b8057u, 0x1fd2fa08u, 0xbe0a73b9u, 0x5c41ed6au, 0xfa79671bu, 0x98b0e0ccu, 0x36e85a7du, 0xd51fd42eu,
    0x73574ddfu, 0x118ec790u, 0xafc64141u, 0x4dfdbaf2u, 0xec3534a3u, 0x8a6cae54u, 0x28a42805u, 0xc6dba1b6u,
    0x65131b67u, 0x034a9518u, 0xa1820ec9u, 0x3fb9887au, 0xddf1022bu, 0x7c287bdcu, 0x1a5ff58du, 0xb8976f3eu,
    0x56cee8efu, 0xf50662a0u, 0x933ddc51u, 0x31755602u, 0xcfaccfb3u, 0x6de44964u, 0x0c1bc315u, 0xaa533cc6u,
    0x488ab677u, 0xe6c23028u, 0x84f9a9d9u, 0x2331238au, 0xc1689d3bu, 0x5fa016ecu, 0xfdd7909du, 0x9c0f0a4eu,
    0x3a4683ffu, 0xd87dfdb0u, 0x76b57761u, 0x14ecf112u, 0xb3246ac3u, 0x515be474u, 0xef935e25u, 0x8dcad7d6u,
    0x2c025187u, 0xca39cb38u, 0x687144e9u, 0x06a8be9au, 0xa4e0384bu, 0x4317b1fcu, 0xe14f2badu, 0x7f86a55eu,
    0x1dbe1f0fu, 0xbbf598c0u, 0x5a2d1271u, 0xf8648c22u, 0x969c05d3u, 0x34d37f84u, 0xd30af935u, 0x714272e6u,
    0x0f79ec97u, 0xadb16648u, 0x4be8dff9u, 0xea2059aau, 0x8857d35bu, 0x268f4d0cu, 0xc4c6c6bdu, 0x62fe406eu,
    0x0135ba1fu, 0x9f6d33d0u, 0x3da4ad81u, 0xdbdc2732u, 0x7a13a0e3u, 0x184b1a94u, 0xb6829445u, 0x54ba0df6u,
};

static const uint32_t bshim_290_tab2[96] = {
    0x1fd2fa08u, 0xbe0a73b9u, 0x5c41ed6au, 0xfa79671bu, 0x98b0e0ccu, 0x36e85a7du, 0xd51fd42eu, 0x73574ddfu,
    0x118ec790u, 0xafc64141u, 0x4dfdbaf2u, 0xec3534a3u, 0x8a6cae54u, 0x28a42805u, 0xc6dba1b6u, 0x65131b67u,
    0x034a9518u, 0xa1820ec9u, 0x3fb9887au, 0xddf1022bu, 0x7c287bdcu, 0x1a5ff58du, 0xb8976f3eu, 0x56cee8efu,
    0xf50662a0u, 0x933ddc51u, 0x31755602u, 0xcfaccfb3u, 0x6de44964u, 0x0c1bc315u, 0xaa533cc6u, 0x488ab677u,
    0xe6c23028u, 0x84f9a9d9u, 0x2331238au, 0xc1689d3bu, 0x5fa016ecu, 0xfdd7909du, 0x9c0f0a4eu, 0x3a4683ffu,
    0xd87dfdb0u, 0x76b57761u, 0x14ecf112u, 0xb3246ac3u, 0x515be474u, 0xef935e25u, 0x8dcad7d6u, 0x2c025187u,
    0xca39cb38u, 0x687144e9u, 0x06a8be9au, 0xa4e0384bu, 0x4317b1fcu, 0xe14f2badu, 0x7f86a55eu, 0x1dbe1f0fu,
    0xbbf598c0u, 0x5a2d1271u, 0xf8648c22u, 0x969c05d3u, 0x34d37f84u, 0xd30af935u, 0x714272e6u, 0x0f79ec97u,
    0xadb16648u, 0x4be8dff9u, 0xea2059aau, 0x8857d35bu, 0x268f4d0cu, 0xc4c6c6bdu, 0x62fe406eu, 0x0135ba1fu,
    0x9f6d33d0u, 0x3da4ad81u, 0xdbdc2732u, 0x7a13a0e3u, 0x184b1a94u, 0xb6829445u, 0x54ba0df6u, 0xf2f187a7u,
    0x91290158u, 0x2f607b09u, 0xcd97f4bau, 0x6bcf6e6bu, 0x0a06e81cu, 0xa83e61cdu, 0x4675db7eu, 0xe4ad552fu,
    0x82e4cee0u, 0x211c4891u, 0xbf53c242u, 0x5d8b3bf3u, 0xfbc2b5a4u, 0x99fa2f55u, 0x3831a906u, 0xd66922b7u,
};

static const uint32_t bshim_290_tab3[96] = {
    0xa1820ec9u, 0x3fb9887au, 0xddf1022bu, 0x7c287bdcu, 0x1a5ff58du, 0xb8976f3eu, 0x56cee8efu, 0xf50662a0u,
    0x933ddc51u, 0x31755602u, 0xcfaccfb3u, 0x6de44964u, 0x0c1bc315u, 0xaa533cc6u, 0x488ab677u, 0xe6c23028u,
    0x84f9a9d9u, 0x2331238au, 0xc1689d3bu, 0x5fa016ecu, 0xfdd7909du, 0x9c0f0a4eu, 0x3a4683ffu, 0xd87dfdb0u,
    0x76b57761u, 0x14ecf112u, 0xb3246ac3u, 0x515be474u, 0xef935e25u, 0x8dcad7d6u, 0x2c025187u, 0xca39cb38u,
    0x687144e9u, 0x06a8be9au, 0xa4e0384bu, 0x4317b1fcu, 0xe14f2badu, 0x7f86a55eu, 0x1dbe1f0fu, 0xbbf598c0u,
    0x5a2d1271u, 0xf8648c22u, 0x969c05d3u, 0x34d37f84u, 0xd30af935u, 0x714272e6u, 0x0f79ec97u, 0xadb16648u,
    0x4be8dff9u, 0xea2059aau, 0x8857d35bu, 0x268f4d0cu, 0xc4c6c6bdu, 0x62fe406eu, 0x0135ba1fu, 0x9f6d33d0u,
    0x3da4ad81u, 0xdbdc2732u, 0x7a13a0e3u, 0x184b1a94u, 0xb6829445u, 0x54ba0df6u, 0xf2f187a7u, 0x91290158u,
    0x2f607b09u, 0xcd97f4bau, 0x6bcf6e6bu, 0x0a06e81cu, 0xa83e61cdu, 0x4675db7eu, 0xe4ad552fu, 0x82e4cee0u,
    0x211c4891u, 0xbf53c242u, 0x5d8b3bf3u, 0xfbc2b5a4u, 0x99fa2f55u, 0x3831a906u, 0xd66922b7u, 0x74a09c68u,
    0x12d81619u, 0xb10f8fcau, 0x4f47097bu, 0xed7e832cu, 0x8bb5fcddu, 0x29ed768eu, 0xc824f03fu, 0x665c69f0u,
    0x0493e3a1u, 0xa2cb5d52u, 0x4102d703u, 0xdf3a50b4u, 0x7d71ca65u, 0x1ba94416u, 0xb9e0bdc7u, 0x58183778u,
};

static const uint32_t bshim_290_tab4[96] = {
    0x2331238au, 0xc1689d3bu, 0x5fa016ecu, 0xfdd7909du, 0x9c0f0a4eu, 0x3a4683ffu, 0xd87dfdb0u, 0x76b57761u,
    0x14ecf112u, 0xb3246ac3u, 0x515be474u, 0xef935e25u, 0x8dcad7d6u, 0x2c025187u, 0xca39cb38u, 0x687144e9u,
    0x06a8be9au, 0xa4e0384bu, 0x4317b1fcu, 0xe14f2badu, 0x7f86a55eu, 0x1dbe1f0fu, 0xbbf598c0u, 0x5a2d1271u,
    0xf8648c22u, 0x969c05d3u, 0x34d37f84u, 0xd30af935u, 0x714272e6u, 0x0f79ec97u, 0xadb16648u, 0x4be8dff9u,
    0xea2059aau, 0x8857d35bu, 0x268f4d0cu, 0xc4c6c6bdu, 0x62fe406eu, 0x0135ba1fu, 0x9f6d33d0u, 0x3da4ad81u,
    0xdbdc2732u, 0x7a13a0e3u, 0x184b1a94u, 0xb6829445u, 0x54ba0df6u, 0xf2f187a7u, 0x91290158u, 0x2f607b09u,
    0xcd97f4bau, 0x6bcf6e6bu, 0x0a06e81cu, 0xa83e61cdu, 0x4675db7eu, 0xe4ad552fu, 0x82e4cee0u, 0x211c4891u,
    0xbf53c242u, 0x5d8b3bf3u, 0xfbc2b5a4u, 0x99fa2f55u, 0x3831a906u, 0xd66922b7u, 0x74a09c68u, 0x12d81619u,
    0xb10f8fcau, 0x4f47097bu, 0xed7e832cu, 0x8bb5fcddu, 0x29ed768eu, 0xc824f03fu, 0x665c69f0u, 0x0493e3a1u,
    0xa2cb5d52u, 0x4102d703u, 0xdf3a50b4u, 0x7d71ca65u, 0x1ba94416u, 0xb9e0bdc7u, 0x58183778u, 0xf64fb129u,
    0x94872adau, 0x32bea48bu, 0xd0f61e3cu, 0x6f2d97edu, 0x0d65119eu, 0xab9c8b4fu, 0x49d40500u, 0xe80b7eb1u,
    0x8642f862u, 0x247a7213u, 0xc2b1ebc4u, 0x60e96575u, 0xff20df26u, 0x9d5858d7u, 0x3b8fd288u, 0xd9c74c39u,
};

static const uint32_t bshim_290_tab5[96] = {
    0xa4e0384bu, 0x4317b1fcu, 0xe14f2badu, 0x7f86a55eu, 0x1dbe1f0fu, 0xbbf598c0u, 0x5a2d1271u, 0xf8648c22u,
    0x969c05d3u, 0x34d37f84u, 0xd30af935u, 0x714272e6u, 0x0f79ec97u, 0xadb16648u, 0x4be8dff9u, 0xea2059aau,
    0x8857d35bu, 0x268f4d0cu, 0xc4c6c6bdu, 0x62fe406eu, 0x0135ba1fu, 0x9f6d33d0u, 0x3da4ad81u, 0xdbdc2732u,
    0x7a13a0e3u, 0x184b1a94u, 0xb6829445u, 0x54ba0df6u, 0xf2f187a7u, 0x91290158u, 0x2f607b09u, 0xcd97f4bau,
    0x6bcf6e6bu, 0x0a06e81cu, 0xa83e61cdu, 0x4675db7eu, 0xe4ad552fu, 0x82e4cee0u, 0x211c4891u, 0xbf53c242u,
    0x5d8b3bf3u, 0xfbc2b5a4u, 0x99fa2f55u, 0x3831a906u, 0xd66922b7u, 0x74a09c68u, 0x12d81619u, 0xb10f8fcau,
    0x4f47097bu, 0xed7e832cu, 0x8bb5fcddu, 0x29ed768eu, 0xc824f03fu, 0x665c69f0u, 0x0493e3a1u, 0xa2cb5d52u,
    0x4102d703u, 0xdf3a50b4u, 0x7d71ca65u, 0x1ba94416u, 0xb9e0bdc7u, 0x58183778u, 0xf64fb129u, 0x94872adau,
    0x32bea48bu, 0xd0f61e3cu, 0x6f2d97edu, 0x0d65119eu, 0xab9c8b4fu, 0x49d40500u, 0xe80b7eb1u, 0x8642f862u,
    0x247a7213u, 0xc2b1ebc4u, 0x60e96575u, 0xff20df26u, 0x9d5858d7u, 0x3b8fd288u, 0xd9c74c39u, 0x77fec5eau,
    0x16363f9bu, 0xb46db94cu, 0x52a532fdu, 0xf0dcacaeu, 0x8f14265fu, 0x2d4ba010u, 0xcb8319c1u, 0x69ba9372u,
    0x07f20d23u, 0xa62986d4u, 0x44610085u, 0xe2987a36u, 0x80cff3e7u, 0x1f076d98u, 0xbd3ee749u, 0x5b7660fau,
};

static const uint32_t bshim_290_tab6[96] = {
    0x268f4d0cu, 0xc4c6c6bdu, 0x62fe406eu, 0x0135ba1fu, 0x9f6d33d0u, 0x3da4ad81u, 0xdbdc2732u, 0x7a13a0e3u,
    0x184b1a94u, 0xb6829445u, 0x54ba0df6u, 0xf2f187a7u, 0x91290158u, 0x2f607b09u, 0xcd97f4bau, 0x6bcf6e6bu,
    0x0a06e81cu, 0xa83e61cdu, 0x4675db7eu, 0xe4ad552fu, 0x82e4cee0u, 0x211c4891u, 0xbf53c242u, 0x5d8b3bf3u,
    0xfbc2b5a4u, 0x99fa2f55u, 0x3831a906u, 0xd66922b7u, 0x74a09c68u, 0x12d81619u, 0xb10f8fcau, 0x4f47097bu,
    0xed7e832cu, 0x8bb5fcddu, 0x29ed768eu, 0xc824f03fu, 0x665c69f0u, 0x0493e3a1u, 0xa2cb5d52u, 0x4102d703u,
    0xdf3a50b4u, 0x7d71ca65u, 0x1ba94416u, 0xb9e0bdc7u, 0x58183778u, 0xf64fb129u, 0x94872adau, 0x32bea48bu,
    0xd0f61e3cu, 0x6f2d97edu, 0x0d65119eu, 0xab9c8b4fu, 0x49d40500u, 0xe80b7eb1u, 0x8642f862u, 0x247a7213u,
    0xc2b1ebc4u, 0x60e96575u, 0xff20df26u, 0x9d5858d7u, 0x3b8fd288u, 0xd9c74c39u, 0x77fec5eau, 0x16363f9bu,
    0xb46db94cu, 0x52a532fdu, 0xf0dcacaeu, 0x8f14265fu, 0x2d4ba010u, 0xcb8319c1u, 0x69ba9372u, 0x07f20d23u,
    0xa62986d4u, 0x44610085u, 0xe2987a36u, 0x80cff3e7u, 0x1f076d98u, 0xbd3ee749u, 0x5b7660fau, 0xf9addaabu,
    0x97e5545cu, 0x361cce0du, 0xd45447beu, 0x728bc16fu, 0x10c33b20u, 0xaefab4d1u, 0x4d322e82u, 0xeb69a833u,
    0x89a121e4u, 0x27d89b95u, 0xc6101546u, 0x64478ef7u, 0x027f08a8u, 0xa0b68259u, 0x3eedfc0au, 0xdd2575bbu,
};

static const uint32_t bshim_290_tab7[96] = {
    0xa83e61cdu, 0x4675db7eu, 0xe4ad552fu, 0x82e4cee0u, 0x211c4891u, 0xbf53c242u, 0x5d8b3bf3u, 0xfbc2b5a4u,
    0x99fa2f55u, 0x3831a906u, 0xd66922b7u, 0x74a09c68u, 0x12d81619u, 0xb10f8fcau, 0x4f47097bu, 0xed7e832cu,
    0x8bb5fcddu, 0x29ed768eu, 0xc824f03fu, 0x665c69f0u, 0x0493e3a1u, 0xa2cb5d52u, 0x4102d703u, 0xdf3a50b4u,
    0x7d71ca65u, 0x1ba94416u, 0xb9e0bdc7u, 0x58183778u, 0xf64fb129u, 0x94872adau, 0x32bea48bu, 0xd0f61e3cu,
    0x6f2d97edu, 0x0d65119eu, 0xab9c8b4fu, 0x49d40500u, 0xe80b7eb1u, 0x8642f862u, 0x247a7213u, 0xc2b1ebc4u,
    0x60e96575u, 0xff20df26u, 0x9d5858d7u, 0x3b8fd288u, 0xd9c74c39u, 0x77fec5eau, 0x16363f9bu, 0xb46db94cu,
    0x52a532fdu, 0xf0dcacaeu, 0x8f14265fu, 0x2d4ba010u, 0xcb8319c1u, 0x69ba9372u, 0x07f20d23u, 0xa62986d4u,
    0x44610085u, 0xe2987a36u, 0x80cff3e7u, 0x1f076d98u, 0xbd3ee749u, 0x5b7660fau, 0xf9addaabu, 0x97e5545cu,
    0x361cce0du, 0xd45447beu, 0x728bc16fu, 0x10c33b20u, 0xaefab4d1u, 0x4d322e82u, 0xeb69a833u, 0x89a121e4u,
    0x27d89b95u, 0xc6101546u, 0x64478ef7u, 0x027f08a8u, 0xa0b68259u, 0x3eedfc0au, 0xdd2575bbu, 0x7b5cef6cu,
    0x1994691du, 0xb7cbe2ceu, 0x56035c7fu, 0xf43ad630u, 0x92724fe1u, 0x30a9c992u, 0xcee14343u, 0x6d18bcf4u,
    0x0b5036a5u, 0xa987b056u, 0x47bf2a07u, 0xe5f6a3b8u, 0x842e1d69u, 0x2265971au, 0xc09d10cbu, 0x5ed48a7cu,
};

struct bshim_290_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_290_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8807425u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e6c3e9cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_290_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x04580913u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_290_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_290_reset(struct bshim_290_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00230abeu;
    return 0;
}

