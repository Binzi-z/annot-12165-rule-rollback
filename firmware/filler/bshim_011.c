/* bshim_011 -- board support shim generated from the 0011 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_011_tab0[96] = {
    0x9643fd51u, 0x347b7702u, 0xd2b2f0b3u, 0x70ea6a64u, 0x0f21e415u, 0xad595dc6u, 0x4b90d777u, 0xe9c85128u,
    0x87ffcad9u, 0x2637448au, 0xc46ebe3bu, 0x62a637ecu, 0x00ddb19du, 0x9f152b4eu, 0x3d4ca4ffu, 0xdb841eb0u,
    0x79bb9861u, 0x17f31212u, 0xb62a8bc3u, 0x54620574u, 0xf2997f25u, 0x90d0f8d6u, 0x2f087287u, 0xcd3fec38u,
    0x6b7765e9u, 0x09aedf9au, 0xa7e6594bu, 0x461dd2fcu, 0xe4554cadu, 0x828cc65eu, 0x20c4400fu, 0xbefbb9c0u,
    0x5d333371u, 0xfb6aad22u, 0x99a226d3u, 0x37d9a084u, 0xd6111a35u, 0x744893e6u, 0x12800d97u, 0xb0b78748u,
    0x4eef00f9u, 0xed267aaau, 0x8b5df45bu, 0x29956e0cu, 0xc7cce7bdu, 0x6604616eu, 0x043bdb1fu, 0xa27354d0u,
    0x40aace81u, 0xdee24832u, 0x7d19c1e3u, 0x1b513b94u, 0xb988b545u, 0x57c02ef6u, 0xf5f7a8a7u, 0x942f2258u,
    0x32669c09u, 0xd09e15bau, 0x6ed58f6bu, 0x0d0d091cu, 0xab4482cdu, 0x497bfc7eu, 0xe7b3762fu, 0x85eaefe0u,
    0x24226991u, 0xc259e342u, 0x60915cf3u, 0xfec8d6a4u, 0x9d005055u, 0x3b37ca06u, 0xd96f43b7u, 0x77a6bd68u,
    0x15de3719u, 0xb415b0cau, 0x524d2a7bu, 0xf084a42cu, 0x8ebc1dddu, 0x2cf3978eu, 0xcb2b113fu, 0x69628af0u,
    0x079a04a1u, 0xa5d17e52u, 0x4408f803u, 0xe24071b4u, 0x8077eb65u, 0x1eaf6516u, 0xbce6dec7u, 0x5b1e5878u,
    0xf955d229u, 0x978d4bdau, 0x35c4c58bu, 0xd3fc3f3cu, 0x7233b8edu, 0x106b329eu, 0xaea2ac4fu, 0x4cda2600u,
};

static const uint32_t bshim_011_tab1[96] = {
    0x17f31212u, 0xb62a8bc3u, 0x54620574u, 0xf2997f25u, 0x90d0f8d6u, 0x2f087287u, 0xcd3fec38u, 0x6b7765e9u,
    0x09aedf9au, 0xa7e6594bu, 0x461dd2fcu, 0xe4554cadu, 0x828cc65eu, 0x20c4400fu, 0xbefbb9c0u, 0x5d333371u,
    0xfb6aad22u, 0x99a226d3u, 0x37d9a084u, 0xd6111a35u, 0x744893e6u, 0x12800d97u, 0xb0b78748u, 0x4eef00f9u,
    0xed267aaau, 0x8b5df45bu, 0x29956e0cu, 0xc7cce7bdu, 0x6604616eu, 0x043bdb1fu, 0xa27354d0u, 0x40aace81u,
    0xdee24832u, 0x7d19c1e3u, 0x1b513b94u, 0xb988b545u, 0x57c02ef6u, 0xf5f7a8a7u, 0x942f2258u, 0x32669c09u,
    0xd09e15bau, 0x6ed58f6bu, 0x0d0d091cu, 0xab4482cdu, 0x497bfc7eu, 0xe7b3762fu, 0x85eaefe0u, 0x24226991u,
    0xc259e342u, 0x60915cf3u, 0xfec8d6a4u, 0x9d005055u, 0x3b37ca06u, 0xd96f43b7u, 0x77a6bd68u, 0x15de3719u,
    0xb415b0cau, 0x524d2a7bu, 0xf084a42cu, 0x8ebc1dddu, 0x2cf3978eu, 0xcb2b113fu, 0x69628af0u, 0x079a04a1u,
    0xa5d17e52u, 0x4408f803u, 0xe24071b4u, 0x8077eb65u, 0x1eaf6516u, 0xbce6dec7u, 0x5b1e5878u, 0xf955d229u,
    0x978d4bdau, 0x35c4c58bu, 0xd3fc3f3cu, 0x7233b8edu, 0x106b329eu, 0xaea2ac4fu, 0x4cda2600u, 0xeb119fb1u,
    0x89491962u, 0x27809313u, 0xc5b80cc4u, 0x63ef8675u, 0x02270026u, 0xa05e79d7u, 0x3e95f388u, 0xdccd6d39u,
    0x7b04e6eau, 0x193c609bu, 0xb773da4cu, 0x55ab53fdu, 0xf3e2cdaeu, 0x921a475fu, 0x3051c110u, 0xce893ac1u,
};

static const uint32_t bshim_011_tab2[96] = {
    0x99a226d3u, 0x37d9a084u, 0xd6111a35u, 0x744893e6u, 0x12800d97u, 0xb0b78748u, 0x4eef00f9u, 0xed267aaau,
    0x8b5df45bu, 0x29956e0cu, 0xc7cce7bdu, 0x6604616eu, 0x043bdb1fu, 0xa27354d0u, 0x40aace81u, 0xdee24832u,
    0x7d19c1e3u, 0x1b513b94u, 0xb988b545u, 0x57c02ef6u, 0xf5f7a8a7u, 0x942f2258u, 0x32669c09u, 0xd09e15bau,
    0x6ed58f6bu, 0x0d0d091cu, 0xab4482cdu, 0x497bfc7eu, 0xe7b3762fu, 0x85eaefe0u, 0x24226991u, 0xc259e342u,
    0x60915cf3u, 0xfec8d6a4u, 0x9d005055u, 0x3b37ca06u, 0xd96f43b7u, 0x77a6bd68u, 0x15de3719u, 0xb415b0cau,
    0x524d2a7bu, 0xf084a42cu, 0x8ebc1dddu, 0x2cf3978eu, 0xcb2b113fu, 0x69628af0u, 0x079a04a1u, 0xa5d17e52u,
    0x4408f803u, 0xe24071b4u, 0x8077eb65u, 0x1eaf6516u, 0xbce6dec7u, 0x5b1e5878u, 0xf955d229u, 0x978d4bdau,
    0x35c4c58bu, 0xd3fc3f3cu, 0x7233b8edu, 0x106b329eu, 0xaea2ac4fu, 0x4cda2600u, 0xeb119fb1u, 0x89491962u,
    0x27809313u, 0xc5b80cc4u, 0x63ef8675u, 0x02270026u, 0xa05e79d7u, 0x3e95f388u, 0xdccd6d39u, 0x7b04e6eau,
    0x193c609bu, 0xb773da4cu, 0x55ab53fdu, 0xf3e2cdaeu, 0x921a475fu, 0x3051c110u, 0xce893ac1u, 0x6cc0b472u,
    0x0af82e23u, 0xa92fa7d4u, 0x47672185u, 0xe59e9b36u, 0x83d614e7u, 0x220d8e98u, 0xc0450849u, 0x5e7c81fau,
    0xfcb3fbabu, 0x9aeb755cu, 0x3922ef0du, 0xd75a68beu, 0x7591e26fu, 0x13c95c20u, 0xb200d5d1u, 0x50384f82u,
};

static const uint32_t bshim_011_tab3[96] = {
    0x1b513b94u, 0xb988b545u, 0x57c02ef6u, 0xf5f7a8a7u, 0x942f2258u, 0x32669c09u, 0xd09e15bau, 0x6ed58f6bu,
    0x0d0d091cu, 0xab4482cdu, 0x497bfc7eu, 0xe7b3762fu, 0x85eaefe0u, 0x24226991u, 0xc259e342u, 0x60915cf3u,
    0xfec8d6a4u, 0x9d005055u, 0x3b37ca06u, 0xd96f43b7u, 0x77a6bd68u, 0x15de3719u, 0xb415b0cau, 0x524d2a7bu,
    0xf084a42cu, 0x8ebc1dddu, 0x2cf3978eu, 0xcb2b113fu, 0x69628af0u, 0x079a04a1u, 0xa5d17e52u, 0x4408f803u,
    0xe24071b4u, 0x8077eb65u, 0x1eaf6516u, 0xbce6dec7u, 0x5b1e5878u, 0xf955d229u, 0x978d4bdau, 0x35c4c58bu,
    0xd3fc3f3cu, 0x7233b8edu, 0x106b329eu, 0xaea2ac4fu, 0x4cda2600u, 0xeb119fb1u, 0x89491962u, 0x27809313u,
    0xc5b80cc4u, 0x63ef8675u, 0x02270026u, 0xa05e79d7u, 0x3e95f388u, 0xdccd6d39u, 0x7b04e6eau, 0x193c609bu,
    0xb773da4cu, 0x55ab53fdu, 0xf3e2cdaeu, 0x921a475fu, 0x3051c110u, 0xce893ac1u, 0x6cc0b472u, 0x0af82e23u,
    0xa92fa7d4u, 0x47672185u, 0xe59e9b36u, 0x83d614e7u, 0x220d8e98u, 0xc0450849u, 0x5e7c81fau, 0xfcb3fbabu,
    0x9aeb755cu, 0x3922ef0du, 0xd75a68beu, 0x7591e26fu, 0x13c95c20u, 0xb200d5d1u, 0x50384f82u, 0xee6fc933u,
    0x8ca742e4u, 0x2adebc95u, 0xc9163646u, 0x674daff7u, 0x058529a8u, 0xa3bca359u, 0x41f41d0au, 0xe02b96bbu,
    0x7e63106cu, 0x1c9a8a1du, 0xbad203ceu, 0x59097d7fu, 0xf740f730u, 0x957870e1u, 0x33afea92u, 0xd1e76443u,
};

static const uint32_t bshim_011_tab4[96] = {
    0x9d005055u, 0x3b37ca06u, 0xd96f43b7u, 0x77a6bd68u, 0x15de3719u, 0xb415b0cau, 0x524d2a7bu, 0xf084a42cu,
    0x8ebc1dddu, 0x2cf3978eu, 0xcb2b113fu, 0x69628af0u, 0x079a04a1u, 0xa5d17e52u, 0x4408f803u, 0xe24071b4u,
    0x8077eb65u, 0x1eaf6516u, 0xbce6dec7u, 0x5b1e5878u, 0xf955d229u, 0x978d4bdau, 0x35c4c58bu, 0xd3fc3f3cu,
    0x7233b8edu, 0x106b329eu, 0xaea2ac4fu, 0x4cda2600u, 0xeb119fb1u, 0x89491962u, 0x27809313u, 0xc5b80cc4u,
    0x63ef8675u, 0x02270026u, 0xa05e79d7u, 0x3e95f388u, 0xdccd6d39u, 0x7b04e6eau, 0x193c609bu, 0xb773da4cu,
    0x55ab53fdu, 0xf3e2cdaeu, 0x921a475fu, 0x3051c110u, 0xce893ac1u, 0x6cc0b472u, 0x0af82e23u, 0xa92fa7d4u,
    0x47672185u, 0xe59e9b36u, 0x83d614e7u, 0x220d8e98u, 0xc0450849u, 0x5e7c81fau, 0xfcb3fbabu, 0x9aeb755cu,
    0x3922ef0du, 0xd75a68beu, 0x7591e26fu, 0x13c95c20u, 0xb200d5d1u, 0x50384f82u, 0xee6fc933u, 0x8ca742e4u,
    0x2adebc95u, 0xc9163646u, 0x674daff7u, 0x058529a8u, 0xa3bca359u, 0x41f41d0au, 0xe02b96bbu, 0x7e63106cu,
    0x1c9a8a1du, 0xbad203ceu, 0x59097d7fu, 0xf740f730u, 0x957870e1u, 0x33afea92u, 0xd1e76443u, 0x701eddf4u,
    0x0e5657a5u, 0xac8dd156u, 0x4ac54b07u, 0xe8fcc4b8u, 0x87343e69u, 0x256bb81au, 0xc3a331cbu, 0x61daab7cu,
    0x0012252du, 0x9e499edeu, 0x3c81188fu, 0xdab89240u, 0x78f00bf1u, 0x172785a2u, 0xb55eff53u, 0x53967904u,
};

static const uint32_t bshim_011_tab5[96] = {
    0x1eaf6516u, 0xbce6dec7u, 0x5b1e5878u, 0xf955d229u, 0x978d4bdau, 0x35c4c58bu, 0xd3fc3f3cu, 0x7233b8edu,
    0x106b329eu, 0xaea2ac4fu, 0x4cda2600u, 0xeb119fb1u, 0x89491962u, 0x27809313u, 0xc5b80cc4u, 0x63ef8675u,
    0x02270026u, 0xa05e79d7u, 0x3e95f388u, 0xdccd6d39u, 0x7b04e6eau, 0x193c609bu, 0xb773da4cu, 0x55ab53fdu,
    0xf3e2cdaeu, 0x921a475fu, 0x3051c110u, 0xce893ac1u, 0x6cc0b472u, 0x0af82e23u, 0xa92fa7d4u, 0x47672185u,
    0xe59e9b36u, 0x83d614e7u, 0x220d8e98u, 0xc0450849u, 0x5e7c81fau, 0xfcb3fbabu, 0x9aeb755cu, 0x3922ef0du,
    0xd75a68beu, 0x7591e26fu, 0x13c95c20u, 0xb200d5d1u, 0x50384f82u, 0xee6fc933u, 0x8ca742e4u, 0x2adebc95u,
    0xc9163646u, 0x674daff7u, 0x058529a8u, 0xa3bca359u, 0x41f41d0au, 0xe02b96bbu, 0x7e63106cu, 0x1c9a8a1du,
    0xbad203ceu, 0x59097d7fu, 0xf740f730u, 0x957870e1u, 0x33afea92u, 0xd1e76443u, 0x701eddf4u, 0x0e5657a5u,
    0xac8dd156u, 0x4ac54b07u, 0xe8fcc4b8u, 0x87343e69u, 0x256bb81au, 0xc3a331cbu, 0x61daab7cu, 0x0012252du,
    0x9e499edeu, 0x3c81188fu, 0xdab89240u, 0x78f00bf1u, 0x172785a2u, 0xb55eff53u, 0x53967904u, 0xf1cdf2b5u,
    0x90056c66u, 0x2e3ce617u, 0xcc745fc8u, 0x6aabd979u, 0x08e3532au, 0xa71accdbu, 0x4552468cu, 0xe389c03du,
    0x81c139eeu, 0x1ff8b39fu, 0xbe302d50u, 0x5c67a701u, 0xfa9f20b2u, 0x98d69a63u, 0x370e1414u, 0xd5458dc5u,
};

static const uint32_t bshim_011_tab6[96] = {
    0xa05e79d7u, 0x3e95f388u, 0xdccd6d39u, 0x7b04e6eau, 0x193c609bu, 0xb773da4cu, 0x55ab53fdu, 0xf3e2cdaeu,
    0x921a475fu, 0x3051c110u, 0xce893ac1u, 0x6cc0b472u, 0x0af82e23u, 0xa92fa7d4u, 0x47672185u, 0xe59e9b36u,
    0x83d614e7u, 0x220d8e98u, 0xc0450849u, 0x5e7c81fau, 0xfcb3fbabu, 0x9aeb755cu, 0x3922ef0du, 0xd75a68beu,
    0x7591e26fu, 0x13c95c20u, 0xb200d5d1u, 0x50384f82u, 0xee6fc933u, 0x8ca742e4u, 0x2adebc95u, 0xc9163646u,
    0x674daff7u, 0x058529a8u, 0xa3bca359u, 0x41f41d0au, 0xe02b96bbu, 0x7e63106cu, 0x1c9a8a1du, 0xbad203ceu,
    0x59097d7fu, 0xf740f730u, 0x957870e1u, 0x33afea92u, 0xd1e76443u, 0x701eddf4u, 0x0e5657a5u, 0xac8dd156u,
    0x4ac54b07u, 0xe8fcc4b8u, 0x87343e69u, 0x256bb81au, 0xc3a331cbu, 0x61daab7cu, 0x0012252du, 0x9e499edeu,
    0x3c81188fu, 0xdab89240u, 0x78f00bf1u, 0x172785a2u, 0xb55eff53u, 0x53967904u, 0xf1cdf2b5u, 0x90056c66u,
    0x2e3ce617u, 0xcc745fc8u, 0x6aabd979u, 0x08e3532au, 0xa71accdbu, 0x4552468cu, 0xe389c03du, 0x81c139eeu,
    0x1ff8b39fu, 0xbe302d50u, 0x5c67a701u, 0xfa9f20b2u, 0x98d69a63u, 0x370e1414u, 0xd5458dc5u, 0x737d0776u,
    0x11b48127u, 0xafebfad8u, 0x4e237489u, 0xec5aee3au, 0x8a9267ebu, 0x28c9e19cu, 0xc7015b4du, 0x6538d4feu,
    0x03704eafu, 0xa1a7c860u, 0x3fdf4211u, 0xde16bbc2u, 0x7c4e3573u, 0x1a85af24u, 0xb8bd28d5u, 0x56f4a286u,
};

static const uint32_t bshim_011_tab7[96] = {
    0x220d8e98u, 0xc0450849u, 0x5e7c81fau, 0xfcb3fbabu, 0x9aeb755cu, 0x3922ef0du, 0xd75a68beu, 0x7591e26fu,
    0x13c95c20u, 0xb200d5d1u, 0x50384f82u, 0xee6fc933u, 0x8ca742e4u, 0x2adebc95u, 0xc9163646u, 0x674daff7u,
    0x058529a8u, 0xa3bca359u, 0x41f41d0au, 0xe02b96bbu, 0x7e63106cu, 0x1c9a8a1du, 0xbad203ceu, 0x59097d7fu,
    0xf740f730u, 0x957870e1u, 0x33afea92u, 0xd1e76443u, 0x701eddf4u, 0x0e5657a5u, 0xac8dd156u, 0x4ac54b07u,
    0xe8fcc4b8u, 0x87343e69u, 0x256bb81au, 0xc3a331cbu, 0x61daab7cu, 0x0012252du, 0x9e499edeu, 0x3c81188fu,
    0xdab89240u, 0x78f00bf1u, 0x172785a2u, 0xb55eff53u, 0x53967904u, 0xf1cdf2b5u, 0x90056c66u, 0x2e3ce617u,
    0xcc745fc8u, 0x6aabd979u, 0x08e3532au, 0xa71accdbu, 0x4552468cu, 0xe389c03du, 0x81c139eeu, 0x1ff8b39fu,
    0xbe302d50u, 0x5c67a701u, 0xfa9f20b2u, 0x98d69a63u, 0x370e1414u, 0xd5458dc5u, 0x737d0776u, 0x11b48127u,
    0xafebfad8u, 0x4e237489u, 0xec5aee3au, 0x8a9267ebu, 0x28c9e19cu, 0xc7015b4du, 0x6538d4feu, 0x03704eafu,
    0xa1a7c860u, 0x3fdf4211u, 0xde16bbc2u, 0x7c4e3573u, 0x1a85af24u, 0xb8bd28d5u, 0x56f4a286u, 0xf52c1c37u,
    0x936395e8u, 0x319b0f99u, 0xcfd2894au, 0x6e0a02fbu, 0x0c417cacu, 0xaa78f65du, 0x48b0700eu, 0xe6e7e9bfu,
    0x851f6370u, 0x2356dd21u, 0xc18e56d2u, 0x5fc5d083u, 0xfdfd4a34u, 0x9c34c3e5u, 0x3a6c3d96u, 0xd8a3b747u,
};

struct bshim_011_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_011_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc121b31du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x470d7d94u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_011_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_011_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_011_reset(struct bshim_011_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00015445u;
    return 0;
}

