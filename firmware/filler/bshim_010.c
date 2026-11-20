/* bshim_010 -- board support shim generated from the 0010 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_010_tab0[96] = {
    0x9fe0b7beu, 0x3e18316fu, 0xdc4fab20u, 0x7a8724d1u, 0x18be9e82u, 0xb6f61833u, 0x552d91e4u, 0xf3650b95u,
    0x919c8546u, 0x2fd3fef7u, 0xce0b78a8u, 0x6c42f259u, 0x0a7a6c0au, 0xa8b1e5bbu, 0x46e95f6cu, 0xe520d91du,
    0x835852ceu, 0x218fcc7fu, 0xbfc74630u, 0x5dfebfe1u, 0xfc363992u, 0x9a6db343u, 0x38a52cf4u, 0xd6dca6a5u,
    0x75142056u, 0x134b9a07u, 0xb18313b8u, 0x4fba8d69u, 0xedf2071au, 0x8c2980cbu, 0x2a60fa7cu, 0xc898742du,
    0x66cfeddeu, 0x0507678fu, 0xa33ee140u, 0x41765af1u, 0xdfadd4a2u, 0x7de54e53u, 0x1c1cc804u, 0xba5441b5u,
    0x588bbb66u, 0xf6c33517u, 0x94faaec8u, 0x33322879u, 0xd169a22au, 0x6fa11bdbu, 0x0dd8958cu, 0xac100f3du,
    0x4a4788eeu, 0xe87f029fu, 0x86b67c50u, 0x24edf601u, 0xc3256fb2u, 0x615ce963u, 0xff946314u, 0x9dcbdcc5u,
    0x3c035676u, 0xda3ad027u, 0x787249d8u, 0x16a9c389u, 0xb4e13d3au, 0x5318b6ebu, 0xf150309cu, 0x8f87aa4du,
    0x2dbf23feu, 0xcbf69dafu, 0x6a2e1760u, 0x08659111u, 0xa69d0ac2u, 0x44d48473u, 0xe30bfe24u, 0x814377d5u,
    0x1f7af186u, 0xbdb26b37u, 0x5be9e4e8u, 0xfa215e99u, 0x9858d84au, 0x369051fbu, 0xd4c7cbacu, 0x72ff455du,
    0x1136bf0eu, 0xaf6e38bfu, 0x4da5b270u, 0xebdd2c21u, 0x8a14a5d2u, 0x284c1f83u, 0xc6839934u, 0x64bb12e5u,
    0x02f28c96u, 0xa12a0647u, 0x3f617ff8u, 0xdd98f9a9u, 0x7bd0735au, 0x1a07ed0bu, 0xb83f66bcu, 0x5676e06du,
};

static const uint32_t bshim_010_tab1[96] = {
    0x218fcc7fu, 0xbfc74630u, 0x5dfebfe1u, 0xfc363992u, 0x9a6db343u, 0x38a52cf4u, 0xd6dca6a5u, 0x75142056u,
    0x134b9a07u, 0xb18313b8u, 0x4fba8d69u, 0xedf2071au, 0x8c2980cbu, 0x2a60fa7cu, 0xc898742du, 0x66cfeddeu,
    0x0507678fu, 0xa33ee140u, 0x41765af1u, 0xdfadd4a2u, 0x7de54e53u, 0x1c1cc804u, 0xba5441b5u, 0x588bbb66u,
    0xf6c33517u, 0x94faaec8u, 0x33322879u, 0xd169a22au, 0x6fa11bdbu, 0x0dd8958cu, 0xac100f3du, 0x4a4788eeu,
    0xe87f029fu, 0x86b67c50u, 0x24edf601u, 0xc3256fb2u, 0x615ce963u, 0xff946314u, 0x9dcbdcc5u, 0x3c035676u,
    0xda3ad027u, 0x787249d8u, 0x16a9c389u, 0xb4e13d3au, 0x5318b6ebu, 0xf150309cu, 0x8f87aa4du, 0x2dbf23feu,
    0xcbf69dafu, 0x6a2e1760u, 0x08659111u, 0xa69d0ac2u, 0x44d48473u, 0xe30bfe24u, 0x814377d5u, 0x1f7af186u,
    0xbdb26b37u, 0x5be9e4e8u, 0xfa215e99u, 0x9858d84au, 0x369051fbu, 0xd4c7cbacu, 0x72ff455du, 0x1136bf0eu,
    0xaf6e38bfu, 0x4da5b270u, 0xebdd2c21u, 0x8a14a5d2u, 0x284c1f83u, 0xc6839934u, 0x64bb12e5u, 0x02f28c96u,
    0xa12a0647u, 0x3f617ff8u, 0xdd98f9a9u, 0x7bd0735au, 0x1a07ed0bu, 0xb83f66bcu, 0x5676e06du, 0xf4ae5a1eu,
    0x92e5d3cfu, 0x311d4d80u, 0xcf54c731u, 0x6d8c40e2u, 0x0bc3ba93u, 0xa9fb3444u, 0x4832adf5u, 0xe66a27a6u,
    0x84a1a157u, 0x22d91b08u, 0xc11094b9u, 0x5f480e6au, 0xfd7f881bu, 0x9bb701ccu, 0x39ee7b7du, 0xd825f52eu,
};

static const uint32_t bshim_010_tab2[96] = {
    0xa33ee140u, 0x41765af1u, 0xdfadd4a2u, 0x7de54e53u, 0x1c1cc804u, 0xba5441b5u, 0x588bbb66u, 0xf6c33517u,
    0x94faaec8u, 0x33322879u, 0xd169a22au, 0x6fa11bdbu, 0x0dd8958cu, 0xac100f3du, 0x4a4788eeu, 0xe87f029fu,
    0x86b67c50u, 0x24edf601u, 0xc3256fb2u, 0x615ce963u, 0xff946314u, 0x9dcbdcc5u, 0x3c035676u, 0xda3ad027u,
    0x787249d8u, 0x16a9c389u, 0xb4e13d3au, 0x5318b6ebu, 0xf150309cu, 0x8f87aa4du, 0x2dbf23feu, 0xcbf69dafu,
    0x6a2e1760u, 0x08659111u, 0xa69d0ac2u, 0x44d48473u, 0xe30bfe24u, 0x814377d5u, 0x1f7af186u, 0xbdb26b37u,
    0x5be9e4e8u, 0xfa215e99u, 0x9858d84au, 0x369051fbu, 0xd4c7cbacu, 0x72ff455du, 0x1136bf0eu, 0xaf6e38bfu,
    0x4da5b270u, 0xebdd2c21u, 0x8a14a5d2u, 0x284c1f83u, 0xc6839934u, 0x64bb12e5u, 0x02f28c96u, 0xa12a0647u,
    0x3f617ff8u, 0xdd98f9a9u, 0x7bd0735au, 0x1a07ed0bu, 0xb83f66bcu, 0x5676e06du, 0xf4ae5a1eu, 0x92e5d3cfu,
    0x311d4d80u, 0xcf54c731u, 0x6d8c40e2u, 0x0bc3ba93u, 0xa9fb3444u, 0x4832adf5u, 0xe66a27a6u, 0x84a1a157u,
    0x22d91b08u, 0xc11094b9u, 0x5f480e6au, 0xfd7f881bu, 0x9bb701ccu, 0x39ee7b7du, 0xd825f52eu, 0x765d6edfu,
    0x1494e890u, 0xb2cc6241u, 0x5103dbf2u, 0xef3b55a3u, 0x8d72cf54u, 0x2baa4905u, 0xc9e1c2b6u, 0x68193c67u,
    0x0650b618u, 0xa4882fc9u, 0x42bfa97au, 0xe0f7232bu, 0x7f2e9cdcu, 0x1d66168du, 0xbb9d903eu, 0x59d509efu,
};

static const uint32_t bshim_010_tab3[96] = {
    0x24edf601u, 0xc3256fb2u, 0x615ce963u, 0xff946314u, 0x9dcbdcc5u, 0x3c035676u, 0xda3ad027u, 0x787249d8u,
    0x16a9c389u, 0xb4e13d3au, 0x5318b6ebu, 0xf150309cu, 0x8f87aa4du, 0x2dbf23feu, 0xcbf69dafu, 0x6a2e1760u,
    0x08659111u, 0xa69d0ac2u, 0x44d48473u, 0xe30bfe24u, 0x814377d5u, 0x1f7af186u, 0xbdb26b37u, 0x5be9e4e8u,
    0xfa215e99u, 0x9858d84au, 0x369051fbu, 0xd4c7cbacu, 0x72ff455du, 0x1136bf0eu, 0xaf6e38bfu, 0x4da5b270u,
    0xebdd2c21u, 0x8a14a5d2u, 0x284c1f83u, 0xc6839934u, 0x64bb12e5u, 0x02f28c96u, 0xa12a0647u, 0x3f617ff8u,
    0xdd98f9a9u, 0x7bd0735au, 0x1a07ed0bu, 0xb83f66bcu, 0x5676e06du, 0xf4ae5a1eu, 0x92e5d3cfu, 0x311d4d80u,
    0xcf54c731u, 0x6d8c40e2u, 0x0bc3ba93u, 0xa9fb3444u, 0x4832adf5u, 0xe66a27a6u, 0x84a1a157u, 0x22d91b08u,
    0xc11094b9u, 0x5f480e6au, 0xfd7f881bu, 0x9bb701ccu, 0x39ee7b7du, 0xd825f52eu, 0x765d6edfu, 0x1494e890u,
    0xb2cc6241u, 0x5103dbf2u, 0xef3b55a3u, 0x8d72cf54u, 0x2baa4905u, 0xc9e1c2b6u, 0x68193c67u, 0x0650b618u,
    0xa4882fc9u, 0x42bfa97au, 0xe0f7232bu, 0x7f2e9cdcu, 0x1d66168du, 0xbb9d903eu, 0x59d509efu, 0xf80c83a0u,
    0x9643fd51u, 0x347b7702u, 0xd2b2f0b3u, 0x70ea6a64u, 0x0f21e415u, 0xad595dc6u, 0x4b90d777u, 0xe9c85128u,
    0x87ffcad9u, 0x2637448au, 0xc46ebe3bu, 0x62a637ecu, 0x00ddb19du, 0x9f152b4eu, 0x3d4ca4ffu, 0xdb841eb0u,
};

static const uint32_t bshim_010_tab4[96] = {
    0xa69d0ac2u, 0x44d48473u, 0xe30bfe24u, 0x814377d5u, 0x1f7af186u, 0xbdb26b37u, 0x5be9e4e8u, 0xfa215e99u,
    0x9858d84au, 0x369051fbu, 0xd4c7cbacu, 0x72ff455du, 0x1136bf0eu, 0xaf6e38bfu, 0x4da5b270u, 0xebdd2c21u,
    0x8a14a5d2u, 0x284c1f83u, 0xc6839934u, 0x64bb12e5u, 0x02f28c96u, 0xa12a0647u, 0x3f617ff8u, 0xdd98f9a9u,
    0x7bd0735au, 0x1a07ed0bu, 0xb83f66bcu, 0x5676e06du, 0xf4ae5a1eu, 0x92e5d3cfu, 0x311d4d80u, 0xcf54c731u,
    0x6d8c40e2u, 0x0bc3ba93u, 0xa9fb3444u, 0x4832adf5u, 0xe66a27a6u, 0x84a1a157u, 0x22d91b08u, 0xc11094b9u,
    0x5f480e6au, 0xfd7f881bu, 0x9bb701ccu, 0x39ee7b7du, 0xd825f52eu, 0x765d6edfu, 0x1494e890u, 0xb2cc6241u,
    0x5103dbf2u, 0xef3b55a3u, 0x8d72cf54u, 0x2baa4905u, 0xc9e1c2b6u, 0x68193c67u, 0x0650b618u, 0xa4882fc9u,
    0x42bfa97au, 0xe0f7232bu, 0x7f2e9cdcu, 0x1d66168du, 0xbb9d903eu, 0x59d509efu, 0xf80c83a0u, 0x9643fd51u,
    0x347b7702u, 0xd2b2f0b3u, 0x70ea6a64u, 0x0f21e415u, 0xad595dc6u, 0x4b90d777u, 0xe9c85128u, 0x87ffcad9u,
    0x2637448au, 0xc46ebe3bu, 0x62a637ecu, 0x00ddb19du, 0x9f152b4eu, 0x3d4ca4ffu, 0xdb841eb0u, 0x79bb9861u,
    0x17f31212u, 0xb62a8bc3u, 0x54620574u, 0xf2997f25u, 0x90d0f8d6u, 0x2f087287u, 0xcd3fec38u, 0x6b7765e9u,
    0x09aedf9au, 0xa7e6594bu, 0x461dd2fcu, 0xe4554cadu, 0x828cc65eu, 0x20c4400fu, 0xbefbb9c0u, 0x5d333371u,
};

static const uint32_t bshim_010_tab5[96] = {
    0x284c1f83u, 0xc6839934u, 0x64bb12e5u, 0x02f28c96u, 0xa12a0647u, 0x3f617ff8u, 0xdd98f9a9u, 0x7bd0735au,
    0x1a07ed0bu, 0xb83f66bcu, 0x5676e06du, 0xf4ae5a1eu, 0x92e5d3cfu, 0x311d4d80u, 0xcf54c731u, 0x6d8c40e2u,
    0x0bc3ba93u, 0xa9fb3444u, 0x4832adf5u, 0xe66a27a6u, 0x84a1a157u, 0x22d91b08u, 0xc11094b9u, 0x5f480e6au,
    0xfd7f881bu, 0x9bb701ccu, 0x39ee7b7du, 0xd825f52eu, 0x765d6edfu, 0x1494e890u, 0xb2cc6241u, 0x5103dbf2u,
    0xef3b55a3u, 0x8d72cf54u, 0x2baa4905u, 0xc9e1c2b6u, 0x68193c67u, 0x0650b618u, 0xa4882fc9u, 0x42bfa97au,
    0xe0f7232bu, 0x7f2e9cdcu, 0x1d66168du, 0xbb9d903eu, 0x59d509efu, 0xf80c83a0u, 0x9643fd51u, 0x347b7702u,
    0xd2b2f0b3u, 0x70ea6a64u, 0x0f21e415u, 0xad595dc6u, 0x4b90d777u, 0xe9c85128u, 0x87ffcad9u, 0x2637448au,
    0xc46ebe3bu, 0x62a637ecu, 0x00ddb19du, 0x9f152b4eu, 0x3d4ca4ffu, 0xdb841eb0u, 0x79bb9861u, 0x17f31212u,
    0xb62a8bc3u, 0x54620574u, 0xf2997f25u, 0x90d0f8d6u, 0x2f087287u, 0xcd3fec38u, 0x6b7765e9u, 0x09aedf9au,
    0xa7e6594bu, 0x461dd2fcu, 0xe4554cadu, 0x828cc65eu, 0x20c4400fu, 0xbefbb9c0u, 0x5d333371u, 0xfb6aad22u,
    0x99a226d3u, 0x37d9a084u, 0xd6111a35u, 0x744893e6u, 0x12800d97u, 0xb0b78748u, 0x4eef00f9u, 0xed267aaau,
    0x8b5df45bu, 0x29956e0cu, 0xc7cce7bdu, 0x6604616eu, 0x043bdb1fu, 0xa27354d0u, 0x40aace81u, 0xdee24832u,
};

static const uint32_t bshim_010_tab6[96] = {
    0xa9fb3444u, 0x4832adf5u, 0xe66a27a6u, 0x84a1a157u, 0x22d91b08u, 0xc11094b9u, 0x5f480e6au, 0xfd7f881bu,
    0x9bb701ccu, 0x39ee7b7du, 0xd825f52eu, 0x765d6edfu, 0x1494e890u, 0xb2cc6241u, 0x5103dbf2u, 0xef3b55a3u,
    0x8d72cf54u, 0x2baa4905u, 0xc9e1c2b6u, 0x68193c67u, 0x0650b618u, 0xa4882fc9u, 0x42bfa97au, 0xe0f7232bu,
    0x7f2e9cdcu, 0x1d66168du, 0xbb9d903eu, 0x59d509efu, 0xf80c83a0u, 0x9643fd51u, 0x347b7702u, 0xd2b2f0b3u,
    0x70ea6a64u, 0x0f21e415u, 0xad595dc6u, 0x4b90d777u, 0xe9c85128u, 0x87ffcad9u, 0x2637448au, 0xc46ebe3bu,
    0x62a637ecu, 0x00ddb19du, 0x9f152b4eu, 0x3d4ca4ffu, 0xdb841eb0u, 0x79bb9861u, 0x17f31212u, 0xb62a8bc3u,
    0x54620574u, 0xf2997f25u, 0x90d0f8d6u, 0x2f087287u, 0xcd3fec38u, 0x6b7765e9u, 0x09aedf9au, 0xa7e6594bu,
    0x461dd2fcu, 0xe4554cadu, 0x828cc65eu, 0x20c4400fu, 0xbefbb9c0u, 0x5d333371u, 0xfb6aad22u, 0x99a226d3u,
    0x37d9a084u, 0xd6111a35u, 0x744893e6u, 0x12800d97u, 0xb0b78748u, 0x4eef00f9u, 0xed267aaau, 0x8b5df45bu,
    0x29956e0cu, 0xc7cce7bdu, 0x6604616eu, 0x043bdb1fu, 0xa27354d0u, 0x40aace81u, 0xdee24832u, 0x7d19c1e3u,
    0x1b513b94u, 0xb988b545u, 0x57c02ef6u, 0xf5f7a8a7u, 0x942f2258u, 0x32669c09u, 0xd09e15bau, 0x6ed58f6bu,
    0x0d0d091cu, 0xab4482cdu, 0x497bfc7eu, 0xe7b3762fu, 0x85eaefe0u, 0x24226991u, 0xc259e342u, 0x60915cf3u,
};

static const uint32_t bshim_010_tab7[96] = {
    0x2baa4905u, 0xc9e1c2b6u, 0x68193c67u, 0x0650b618u, 0xa4882fc9u, 0x42bfa97au, 0xe0f7232bu, 0x7f2e9cdcu,
    0x1d66168du, 0xbb9d903eu, 0x59d509efu, 0xf80c83a0u, 0x9643fd51u, 0x347b7702u, 0xd2b2f0b3u, 0x70ea6a64u,
    0x0f21e415u, 0xad595dc6u, 0x4b90d777u, 0xe9c85128u, 0x87ffcad9u, 0x2637448au, 0xc46ebe3bu, 0x62a637ecu,
    0x00ddb19du, 0x9f152b4eu, 0x3d4ca4ffu, 0xdb841eb0u, 0x79bb9861u, 0x17f31212u, 0xb62a8bc3u, 0x54620574u,
    0xf2997f25u, 0x90d0f8d6u, 0x2f087287u, 0xcd3fec38u, 0x6b7765e9u, 0x09aedf9au, 0xa7e6594bu, 0x461dd2fcu,
    0xe4554cadu, 0x828cc65eu, 0x20c4400fu, 0xbefbb9c0u, 0x5d333371u, 0xfb6aad22u, 0x99a226d3u, 0x37d9a084u,
    0xd6111a35u, 0x744893e6u, 0x12800d97u, 0xb0b78748u, 0x4eef00f9u, 0xed267aaau, 0x8b5df45bu, 0x29956e0cu,
    0xc7cce7bdu, 0x6604616eu, 0x043bdb1fu, 0xa27354d0u, 0x40aace81u, 0xdee24832u, 0x7d19c1e3u, 0x1b513b94u,
    0xb988b545u, 0x57c02ef6u, 0xf5f7a8a7u, 0x942f2258u, 0x32669c09u, 0xd09e15bau, 0x6ed58f6bu, 0x0d0d091cu,
    0xab4482cdu, 0x497bfc7eu, 0xe7b3762fu, 0x85eaefe0u, 0x24226991u, 0xc259e342u, 0x60915cf3u, 0xfec8d6a4u,
    0x9d005055u, 0x3b37ca06u, 0xd96f43b7u, 0x77a6bd68u, 0x15de3719u, 0xb415b0cau, 0x524d2a7bu, 0xf084a42cu,
    0x8ebc1dddu, 0x2cf3978eu, 0xcb2b113fu, 0x69628af0u, 0x079a04a1u, 0xa5d17e52u, 0x4408f803u, 0xe24071b4u,
};

struct bshim_010_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_010_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b35e8a6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc121b31du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x470d7d94u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_010_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_010_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_010_reset(struct bshim_010_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00013556u;
    return 0;
}

