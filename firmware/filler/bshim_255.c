/* bshim_255 -- board support shim generated from the 0255 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_255_tab0[96] = {
    0x6ce24d6du, 0x0b19c71eu, 0xa95140cfu, 0x4788ba80u, 0xe5c03431u, 0x83f7ade2u, 0x222f2793u, 0xc066a144u,
    0x5e9e1af5u, 0xfcd594a6u, 0x9b0d0e57u, 0x39448808u, 0xd77c01b9u, 0x75b37b6au, 0x13eaf51bu, 0xb2226eccu,
    0x5059e87du, 0xee91622eu, 0x8cc8dbdfu, 0x2b005590u, 0xc937cf41u, 0x676f48f2u, 0x05a6c2a3u, 0xa3de3c54u,
    0x4215b605u, 0xe04d2fb6u, 0x7e84a967u, 0x1cbc2318u, 0xbaf39cc9u, 0x592b167au, 0xf762902bu, 0x959a09dcu,
    0x33d1838du, 0xd208fd3eu, 0x704076efu, 0x0e77f0a0u, 0xacaf6a51u, 0x4ae6e402u, 0xe91e5db3u, 0x8755d764u,
    0x258d5115u, 0xc3c4cac6u, 0x61fc4477u, 0x0033be28u, 0x9e6b37d9u, 0x3ca2b18au, 0xdada2b3bu, 0x7911a4ecu,
    0x17491e9du, 0xb580984eu, 0x53b811ffu, 0xf1ef8bb0u, 0x90270561u, 0x2e5e7f12u, 0xcc95f8c3u, 0x6acd7274u,
    0x0904ec25u, 0xa73c65d6u, 0x4573df87u, 0xe3ab5938u, 0x81e2d2e9u, 0x201a4c9au, 0xbe51c64bu, 0x5c893ffcu,
    0xfac0b9adu, 0x98f8335eu, 0x372fad0fu, 0xd56726c0u, 0x739ea071u, 0x11d61a22u, 0xb00d93d3u, 0x4e450d84u,
    0xec7c8735u, 0x8ab400e6u, 0x28eb7a97u, 0xc722f448u, 0x655a6df9u, 0x0391e7aau, 0xa1c9615bu, 0x4000db0cu,
    0xde3854bdu, 0x7c6fce6eu, 0x1aa7481fu, 0xb8dec1d0u, 0x57163b81u, 0xf54db532u, 0x93852ee3u, 0x31bca894u,
    0xcff42245u, 0x6e2b9bf6u, 0x0c6315a7u, 0xaa9a8f58u, 0x48d20909u, 0xe70982bau, 0x8540fc6bu, 0x2378761cu,
};

static const uint32_t bshim_255_tab1[96] = {
    0xee91622eu, 0x8cc8dbdfu, 0x2b005590u, 0xc937cf41u, 0x676f48f2u, 0x05a6c2a3u, 0xa3de3c54u, 0x4215b605u,
    0xe04d2fb6u, 0x7e84a967u, 0x1cbc2318u, 0xbaf39cc9u, 0x592b167au, 0xf762902bu, 0x959a09dcu, 0x33d1838du,
    0xd208fd3eu, 0x704076efu, 0x0e77f0a0u, 0xacaf6a51u, 0x4ae6e402u, 0xe91e5db3u, 0x8755d764u, 0x258d5115u,
    0xc3c4cac6u, 0x61fc4477u, 0x0033be28u, 0x9e6b37d9u, 0x3ca2b18au, 0xdada2b3bu, 0x7911a4ecu, 0x17491e9du,
    0xb580984eu, 0x53b811ffu, 0xf1ef8bb0u, 0x90270561u, 0x2e5e7f12u, 0xcc95f8c3u, 0x6acd7274u, 0x0904ec25u,
    0xa73c65d6u, 0x4573df87u, 0xe3ab5938u, 0x81e2d2e9u, 0x201a4c9au, 0xbe51c64bu, 0x5c893ffcu, 0xfac0b9adu,
    0x98f8335eu, 0x372fad0fu, 0xd56726c0u, 0x739ea071u, 0x11d61a22u, 0xb00d93d3u, 0x4e450d84u, 0xec7c8735u,
    0x8ab400e6u, 0x28eb7a97u, 0xc722f448u, 0x655a6df9u, 0x0391e7aau, 0xa1c9615bu, 0x4000db0cu, 0xde3854bdu,
    0x7c6fce6eu, 0x1aa7481fu, 0xb8dec1d0u, 0x57163b81u, 0xf54db532u, 0x93852ee3u, 0x31bca894u, 0xcff42245u,
    0x6e2b9bf6u, 0x0c6315a7u, 0xaa9a8f58u, 0x48d20909u, 0xe70982bau, 0x8540fc6bu, 0x2378761cu, 0xc1afefcdu,
    0x5fe7697eu, 0xfe1ee32fu, 0x9c565ce0u, 0x3a8dd691u, 0xd8c55042u, 0x76fcc9f3u, 0x153443a4u, 0xb36bbd55u,
    0x51a33706u, 0xefdab0b7u, 0x8e122a68u, 0x2c49a419u, 0xca811dcau, 0x68b8977bu, 0x06f0112cu, 0xa5278addu,
};

static const uint32_t bshim_255_tab2[96] = {
    0x704076efu, 0x0e77f0a0u, 0xacaf6a51u, 0x4ae6e402u, 0xe91e5db3u, 0x8755d764u, 0x258d5115u, 0xc3c4cac6u,
    0x61fc4477u, 0x0033be28u, 0x9e6b37d9u, 0x3ca2b18au, 0xdada2b3bu, 0x7911a4ecu, 0x17491e9du, 0xb580984eu,
    0x53b811ffu, 0xf1ef8bb0u, 0x90270561u, 0x2e5e7f12u, 0xcc95f8c3u, 0x6acd7274u, 0x0904ec25u, 0xa73c65d6u,
    0x4573df87u, 0xe3ab5938u, 0x81e2d2e9u, 0x201a4c9au, 0xbe51c64bu, 0x5c893ffcu, 0xfac0b9adu, 0x98f8335eu,
    0x372fad0fu, 0xd56726c0u, 0x739ea071u, 0x11d61a22u, 0xb00d93d3u, 0x4e450d84u, 0xec7c8735u, 0x8ab400e6u,
    0x28eb7a97u, 0xc722f448u, 0x655a6df9u, 0x0391e7aau, 0xa1c9615bu, 0x4000db0cu, 0xde3854bdu, 0x7c6fce6eu,
    0x1aa7481fu, 0xb8dec1d0u, 0x57163b81u, 0xf54db532u, 0x93852ee3u, 0x31bca894u, 0xcff42245u, 0x6e2b9bf6u,
    0x0c6315a7u, 0xaa9a8f58u, 0x48d20909u, 0xe70982bau, 0x8540fc6bu, 0x2378761cu, 0xc1afefcdu, 0x5fe7697eu,
    0xfe1ee32fu, 0x9c565ce0u, 0x3a8dd691u, 0xd8c55042u, 0x76fcc9f3u, 0x153443a4u, 0xb36bbd55u, 0x51a33706u,
    0xefdab0b7u, 0x8e122a68u, 0x2c49a419u, 0xca811dcau, 0x68b8977bu, 0x06f0112cu, 0xa5278addu, 0x435f048eu,
    0xe1967e3fu, 0x7fcdf7f0u, 0x1e0571a1u, 0xbc3ceb52u, 0x5a746503u, 0xf8abdeb4u, 0x96e35865u, 0x351ad216u,
    0xd3524bc7u, 0x7189c578u, 0x0fc13f29u, 0xadf8b8dau, 0x4c30328bu, 0xea67ac3cu, 0x889f25edu, 0x26d69f9eu,
};

static const uint32_t bshim_255_tab3[96] = {
    0xf1ef8bb0u, 0x90270561u, 0x2e5e7f12u, 0xcc95f8c3u, 0x6acd7274u, 0x0904ec25u, 0xa73c65d6u, 0x4573df87u,
    0xe3ab5938u, 0x81e2d2e9u, 0x201a4c9au, 0xbe51c64bu, 0x5c893ffcu, 0xfac0b9adu, 0x98f8335eu, 0x372fad0fu,
    0xd56726c0u, 0x739ea071u, 0x11d61a22u, 0xb00d93d3u, 0x4e450d84u, 0xec7c8735u, 0x8ab400e6u, 0x28eb7a97u,
    0xc722f448u, 0x655a6df9u, 0x0391e7aau, 0xa1c9615bu, 0x4000db0cu, 0xde3854bdu, 0x7c6fce6eu, 0x1aa7481fu,
    0xb8dec1d0u, 0x57163b81u, 0xf54db532u, 0x93852ee3u, 0x31bca894u, 0xcff42245u, 0x6e2b9bf6u, 0x0c6315a7u,
    0xaa9a8f58u, 0x48d20909u, 0xe70982bau, 0x8540fc6bu, 0x2378761cu, 0xc1afefcdu, 0x5fe7697eu, 0xfe1ee32fu,
    0x9c565ce0u, 0x3a8dd691u, 0xd8c55042u, 0x76fcc9f3u, 0x153443a4u, 0xb36bbd55u, 0x51a33706u, 0xefdab0b7u,
    0x8e122a68u, 0x2c49a419u, 0xca811dcau, 0x68b8977bu, 0x06f0112cu, 0xa5278addu, 0x435f048eu, 0xe1967e3fu,
    0x7fcdf7f0u, 0x1e0571a1u, 0xbc3ceb52u, 0x5a746503u, 0xf8abdeb4u, 0x96e35865u, 0x351ad216u, 0xd3524bc7u,
    0x7189c578u, 0x0fc13f29u, 0xadf8b8dau, 0x4c30328bu, 0xea67ac3cu, 0x889f25edu, 0x26d69f9eu, 0xc50e194fu,
    0x63459300u, 0x017d0cb1u, 0x9fb48662u, 0x3dec0013u, 0xdc2379c4u, 0x7a5af375u, 0x18926d26u, 0xb6c9e6d7u,
    0x55016088u, 0xf338da39u, 0x917053eau, 0x2fa7cd9bu, 0xcddf474cu, 0x6c16c0fdu, 0x0a4e3aaeu, 0xa885b45fu,
};

static const uint32_t bshim_255_tab4[96] = {
    0x739ea071u, 0x11d61a22u, 0xb00d93d3u, 0x4e450d84u, 0xec7c8735u, 0x8ab400e6u, 0x28eb7a97u, 0xc722f448u,
    0x655a6df9u, 0x0391e7aau, 0xa1c9615bu, 0x4000db0cu, 0xde3854bdu, 0x7c6fce6eu, 0x1aa7481fu, 0xb8dec1d0u,
    0x57163b81u, 0xf54db532u, 0x93852ee3u, 0x31bca894u, 0xcff42245u, 0x6e2b9bf6u, 0x0c6315a7u, 0xaa9a8f58u,
    0x48d20909u, 0xe70982bau, 0x8540fc6bu, 0x2378761cu, 0xc1afefcdu, 0x5fe7697eu, 0xfe1ee32fu, 0x9c565ce0u,
    0x3a8dd691u, 0xd8c55042u, 0x76fcc9f3u, 0x153443a4u, 0xb36bbd55u, 0x51a33706u, 0xefdab0b7u, 0x8e122a68u,
    0x2c49a419u, 0xca811dcau, 0x68b8977bu, 0x06f0112cu, 0xa5278addu, 0x435f048eu, 0xe1967e3fu, 0x7fcdf7f0u,
    0x1e0571a1u, 0xbc3ceb52u, 0x5a746503u, 0xf8abdeb4u, 0x96e35865u, 0x351ad216u, 0xd3524bc7u, 0x7189c578u,
    0x0fc13f29u, 0xadf8b8dau, 0x4c30328bu, 0xea67ac3cu, 0x889f25edu, 0x26d69f9eu, 0xc50e194fu, 0x63459300u,
    0x017d0cb1u, 0x9fb48662u, 0x3dec0013u, 0xdc2379c4u, 0x7a5af375u, 0x18926d26u, 0xb6c9e6d7u, 0x55016088u,
    0xf338da39u, 0x917053eau, 0x2fa7cd9bu, 0xcddf474cu, 0x6c16c0fdu, 0x0a4e3aaeu, 0xa885b45fu, 0x46bd2e10u,
    0xe4f4a7c1u, 0x832c2172u, 0x21639b23u, 0xbf9b14d4u, 0x5dd28e85u, 0xfc0a0836u, 0x9a4181e7u, 0x3878fb98u,
    0xd6b07549u, 0x74e7eefau, 0x131f68abu, 0xb156e25cu, 0x4f8e5c0du, 0xedc5d5beu, 0x8bfd4f6fu, 0x2a34c920u,
};

static const uint32_t bshim_255_tab5[96] = {
    0xf54db532u, 0x93852ee3u, 0x31bca894u, 0xcff42245u, 0x6e2b9bf6u, 0x0c6315a7u, 0xaa9a8f58u, 0x48d20909u,
    0xe70982bau, 0x8540fc6bu, 0x2378761cu, 0xc1afefcdu, 0x5fe7697eu, 0xfe1ee32fu, 0x9c565ce0u, 0x3a8dd691u,
    0xd8c55042u, 0x76fcc9f3u, 0x153443a4u, 0xb36bbd55u, 0x51a33706u, 0xefdab0b7u, 0x8e122a68u, 0x2c49a419u,
    0xca811dcau, 0x68b8977bu, 0x06f0112cu, 0xa5278addu, 0x435f048eu, 0xe1967e3fu, 0x7fcdf7f0u, 0x1e0571a1u,
    0xbc3ceb52u, 0x5a746503u, 0xf8abdeb4u, 0x96e35865u, 0x351ad216u, 0xd3524bc7u, 0x7189c578u, 0x0fc13f29u,
    0xadf8b8dau, 0x4c30328bu, 0xea67ac3cu, 0x889f25edu, 0x26d69f9eu, 0xc50e194fu, 0x63459300u, 0x017d0cb1u,
    0x9fb48662u, 0x3dec0013u, 0xdc2379c4u, 0x7a5af375u, 0x18926d26u, 0xb6c9e6d7u, 0x55016088u, 0xf338da39u,
    0x917053eau, 0x2fa7cd9bu, 0xcddf474cu, 0x6c16c0fdu, 0x0a4e3aaeu, 0xa885b45fu, 0x46bd2e10u, 0xe4f4a7c1u,
    0x832c2172u, 0x21639b23u, 0xbf9b14d4u, 0x5dd28e85u, 0xfc0a0836u, 0x9a4181e7u, 0x3878fb98u, 0xd6b07549u,
    0x74e7eefau, 0x131f68abu, 0xb156e25cu, 0x4f8e5c0du, 0xedc5d5beu, 0x8bfd4f6fu, 0x2a34c920u, 0xc86c42d1u,
    0x66a3bc82u, 0x04db3633u, 0xa312afe4u, 0x414a2995u, 0xdf81a346u, 0x7db91cf7u, 0x1bf096a8u, 0xba281059u,
    0x585f8a0au, 0xf69703bbu, 0x94ce7d6cu, 0x3305f71du, 0xd13d70ceu, 0x6f74ea7fu, 0x0dac6430u, 0xabe3dde1u,
};

static const uint32_t bshim_255_tab6[96] = {
    0x76fcc9f3u, 0x153443a4u, 0xb36bbd55u, 0x51a33706u, 0xefdab0b7u, 0x8e122a68u, 0x2c49a419u, 0xca811dcau,
    0x68b8977bu, 0x06f0112cu, 0xa5278addu, 0x435f048eu, 0xe1967e3fu, 0x7fcdf7f0u, 0x1e0571a1u, 0xbc3ceb52u,
    0x5a746503u, 0xf8abdeb4u, 0x96e35865u, 0x351ad216u, 0xd3524bc7u, 0x7189c578u, 0x0fc13f29u, 0xadf8b8dau,
    0x4c30328bu, 0xea67ac3cu, 0x889f25edu, 0x26d69f9eu, 0xc50e194fu, 0x63459300u, 0x017d0cb1u, 0x9fb48662u,
    0x3dec0013u, 0xdc2379c4u, 0x7a5af375u, 0x18926d26u, 0xb6c9e6d7u, 0x55016088u, 0xf338da39u, 0x917053eau,
    0x2fa7cd9bu, 0xcddf474cu, 0x6c16c0fdu, 0x0a4e3aaeu, 0xa885b45fu, 0x46bd2e10u, 0xe4f4a7c1u, 0x832c2172u,
    0x21639b23u, 0xbf9b14d4u, 0x5dd28e85u, 0xfc0a0836u, 0x9a4181e7u, 0x3878fb98u, 0xd6b07549u, 0x74e7eefau,
    0x131f68abu, 0xb156e25cu, 0x4f8e5c0du, 0xedc5d5beu, 0x8bfd4f6fu, 0x2a34c920u, 0xc86c42d1u, 0x66a3bc82u,
    0x04db3633u, 0xa312afe4u, 0x414a2995u, 0xdf81a346u, 0x7db91cf7u, 0x1bf096a8u, 0xba281059u, 0x585f8a0au,
    0xf69703bbu, 0x94ce7d6cu, 0x3305f71du, 0xd13d70ceu, 0x6f74ea7fu, 0x0dac6430u, 0xabe3dde1u, 0x4a1b5792u,
    0xe852d143u, 0x868a4af4u, 0x24c1c4a5u, 0xc2f93e56u, 0x6130b807u, 0xff6831b8u, 0x9d9fab69u, 0x3bd7251au,
    0xda0e9ecbu, 0x7846187cu, 0x167d922du, 0xb4b50bdeu, 0x52ec858fu, 0xf123ff40u, 0x8f5b78f1u, 0x2d92f2a2u,
};

static const uint32_t bshim_255_tab7[96] = {
    0xf8abdeb4u, 0x96e35865u, 0x351ad216u, 0xd3524bc7u, 0x7189c578u, 0x0fc13f29u, 0xadf8b8dau, 0x4c30328bu,
    0xea67ac3cu, 0x889f25edu, 0x26d69f9eu, 0xc50e194fu, 0x63459300u, 0x017d0cb1u, 0x9fb48662u, 0x3dec0013u,
    0xdc2379c4u, 0x7a5af375u, 0x18926d26u, 0xb6c9e6d7u, 0x55016088u, 0xf338da39u, 0x917053eau, 0x2fa7cd9bu,
    0xcddf474cu, 0x6c16c0fdu, 0x0a4e3aaeu, 0xa885b45fu, 0x46bd2e10u, 0xe4f4a7c1u, 0x832c2172u, 0x21639b23u,
    0xbf9b14d4u, 0x5dd28e85u, 0xfc0a0836u, 0x9a4181e7u, 0x3878fb98u, 0xd6b07549u, 0x74e7eefau, 0x131f68abu,
    0xb156e25cu, 0x4f8e5c0du, 0xedc5d5beu, 0x8bfd4f6fu, 0x2a34c920u, 0xc86c42d1u, 0x66a3bc82u, 0x04db3633u,
    0xa312afe4u, 0x414a2995u, 0xdf81a346u, 0x7db91cf7u, 0x1bf096a8u, 0xba281059u, 0x585f8a0au, 0xf69703bbu,
    0x94ce7d6cu, 0x3305f71du, 0xd13d70ceu, 0x6f74ea7fu, 0x0dac6430u, 0xabe3dde1u, 0x4a1b5792u, 0xe852d143u,
    0x868a4af4u, 0x24c1c4a5u, 0xc2f93e56u, 0x6130b807u, 0xff6831b8u, 0x9d9fab69u, 0x3bd7251au, 0xda0e9ecbu,
    0x7846187cu, 0x167d922du, 0xb4b50bdeu, 0x52ec858fu, 0xf123ff40u, 0x8f5b78f1u, 0x2d92f2a2u, 0xcbca6c53u,
    0x6a01e604u, 0x08395fb5u, 0xa670d966u, 0x44a85317u, 0xe2dfccc8u, 0x81174679u, 0x1f4ec02au, 0xbd8639dbu,
    0x5bbdb38cu, 0xf9f52d3du, 0x982ca6eeu, 0x3664209fu, 0xd49b9a50u, 0x72d31401u, 0x110a8db2u, 0xaf420763u,
};

struct bshim_255_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_255_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_255_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_255_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_255_reset(struct bshim_255_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001ed011u;
    return 0;
}

