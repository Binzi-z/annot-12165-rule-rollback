/* bshim_076 -- board support shim generated from the 0076 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_076_tab0[96] = {
    0x2578a7a4u, 0xc3b02155u, 0x61e79b06u, 0x001f14b7u, 0x9e568e68u, 0x3c8e0819u, 0xdac581cau, 0x78fcfb7bu,
    0x1734752cu, 0xb56beeddu, 0x53a3688eu, 0xf1dae23fu, 0x90125bf0u, 0x2e49d5a1u, 0xcc814f52u, 0x6ab8c903u,
    0x08f042b4u, 0xa727bc65u, 0x455f3616u, 0xe396afc7u, 0x81ce2978u, 0x2005a329u, 0xbe3d1cdau, 0x5c74968bu,
    0xfaac103cu, 0x98e389edu, 0x371b039eu, 0xd5527d4fu, 0x7389f700u, 0x11c170b1u, 0xaff8ea62u, 0x4e306413u,
    0xec67ddc4u, 0x8a9f5775u, 0x28d6d126u, 0xc70e4ad7u, 0x6545c488u, 0x037d3e39u, 0xa1b4b7eau, 0x3fec319bu,
    0xde23ab4cu, 0x7c5b24fdu, 0x1a929eaeu, 0xb8ca185fu, 0x57019210u, 0xf5390bc1u, 0x93708572u, 0x31a7ff23u,
    0xcfdf78d4u, 0x6e16f285u, 0x0c4e6c36u, 0xaa85e5e7u, 0x48bd5f98u, 0xe6f4d949u, 0x852c52fau, 0x2363ccabu,
    0xc19b465cu, 0x5fd2c00du, 0xfe0a39beu, 0x9c41b36fu, 0x3a792d20u, 0xd8b0a6d1u, 0x76e82082u, 0x151f9a33u,
    0xb35713e4u, 0x518e8d95u, 0xefc60746u, 0x8dfd80f7u, 0x2c34faa8u, 0xca6c7459u, 0x68a3ee0au, 0x06db67bbu,
    0xa512e16cu, 0x434a5b1du, 0xe181d4ceu, 0x7fb94e7fu, 0x1df0c830u, 0xbc2841e1u, 0x5a5fbb92u, 0xf8973543u,
    0x96ceaef4u, 0x350628a5u, 0xd33da256u, 0x71751c07u, 0x0fac95b8u, 0xade40f69u, 0x4c1b891au, 0xea5302cbu,
    0x888a7c7cu, 0x26c1f62du, 0xc4f96fdeu, 0x6330e98fu, 0x01686340u, 0x9f9fdcf1u, 0x3dd756a2u, 0xdc0ed053u,
};

static const uint32_t bshim_076_tab1[96] = {
    0xa727bc65u, 0x455f3616u, 0xe396afc7u, 0x81ce2978u, 0x2005a329u, 0xbe3d1cdau, 0x5c74968bu, 0xfaac103cu,
    0x98e389edu, 0x371b039eu, 0xd5527d4fu, 0x7389f700u, 0x11c170b1u, 0xaff8ea62u, 0x4e306413u, 0xec67ddc4u,
    0x8a9f5775u, 0x28d6d126u, 0xc70e4ad7u, 0x6545c488u, 0x037d3e39u, 0xa1b4b7eau, 0x3fec319bu, 0xde23ab4cu,
    0x7c5b24fdu, 0x1a929eaeu, 0xb8ca185fu, 0x57019210u, 0xf5390bc1u, 0x93708572u, 0x31a7ff23u, 0xcfdf78d4u,
    0x6e16f285u, 0x0c4e6c36u, 0xaa85e5e7u, 0x48bd5f98u, 0xe6f4d949u, 0x852c52fau, 0x2363ccabu, 0xc19b465cu,
    0x5fd2c00du, 0xfe0a39beu, 0x9c41b36fu, 0x3a792d20u, 0xd8b0a6d1u, 0x76e82082u, 0x151f9a33u, 0xb35713e4u,
    0x518e8d95u, 0xefc60746u, 0x8dfd80f7u, 0x2c34faa8u, 0xca6c7459u, 0x68a3ee0au, 0x06db67bbu, 0xa512e16cu,
    0x434a5b1du, 0xe181d4ceu, 0x7fb94e7fu, 0x1df0c830u, 0xbc2841e1u, 0x5a5fbb92u, 0xf8973543u, 0x96ceaef4u,
    0x350628a5u, 0xd33da256u, 0x71751c07u, 0x0fac95b8u, 0xade40f69u, 0x4c1b891au, 0xea5302cbu, 0x888a7c7cu,
    0x26c1f62du, 0xc4f96fdeu, 0x6330e98fu, 0x01686340u, 0x9f9fdcf1u, 0x3dd756a2u, 0xdc0ed053u, 0x7a464a04u,
    0x187dc3b5u, 0xb6b53d66u, 0x54ecb717u, 0xf32430c8u, 0x915baa79u, 0x2f93242au, 0xcdca9ddbu, 0x6c02178cu,
    0x0a39913du, 0xa8710aeeu, 0x46a8849fu, 0xe4dffe50u, 0x83177801u, 0x214ef1b2u, 0xbf866b63u, 0x5dbde514u,
};

static const uint32_t bshim_076_tab2[96] = {
    0x28d6d126u, 0xc70e4ad7u, 0x6545c488u, 0x037d3e39u, 0xa1b4b7eau, 0x3fec319bu, 0xde23ab4cu, 0x7c5b24fdu,
    0x1a929eaeu, 0xb8ca185fu, 0x57019210u, 0xf5390bc1u, 0x93708572u, 0x31a7ff23u, 0xcfdf78d4u, 0x6e16f285u,
    0x0c4e6c36u, 0xaa85e5e7u, 0x48bd5f98u, 0xe6f4d949u, 0x852c52fau, 0x2363ccabu, 0xc19b465cu, 0x5fd2c00du,
    0xfe0a39beu, 0x9c41b36fu, 0x3a792d20u, 0xd8b0a6d1u, 0x76e82082u, 0x151f9a33u, 0xb35713e4u, 0x518e8d95u,
    0xefc60746u, 0x8dfd80f7u, 0x2c34faa8u, 0xca6c7459u, 0x68a3ee0au, 0x06db67bbu, 0xa512e16cu, 0x434a5b1du,
    0xe181d4ceu, 0x7fb94e7fu, 0x1df0c830u, 0xbc2841e1u, 0x5a5fbb92u, 0xf8973543u, 0x96ceaef4u, 0x350628a5u,
    0xd33da256u, 0x71751c07u, 0x0fac95b8u, 0xade40f69u, 0x4c1b891au, 0xea5302cbu, 0x888a7c7cu, 0x26c1f62du,
    0xc4f96fdeu, 0x6330e98fu, 0x01686340u, 0x9f9fdcf1u, 0x3dd756a2u, 0xdc0ed053u, 0x7a464a04u, 0x187dc3b5u,
    0xb6b53d66u, 0x54ecb717u, 0xf32430c8u, 0x915baa79u, 0x2f93242au, 0xcdca9ddbu, 0x6c02178cu, 0x0a39913du,
    0xa8710aeeu, 0x46a8849fu, 0xe4dffe50u, 0x83177801u, 0x214ef1b2u, 0xbf866b63u, 0x5dbde514u, 0xfbf55ec5u,
    0x9a2cd876u, 0x38645227u, 0xd69bcbd8u, 0x74d34589u, 0x130abf3au, 0xb14238ebu, 0x4f79b29cu, 0xedb12c4du,
    0x8be8a5feu, 0x2a201fafu, 0xc8579960u, 0x668f1311u, 0x04c68cc2u, 0xa2fe0673u, 0x41358024u, 0xdf6cf9d5u,
};

static const uint32_t bshim_076_tab3[96] = {
    0xaa85e5e7u, 0x48bd5f98u, 0xe6f4d949u, 0x852c52fau, 0x2363ccabu, 0xc19b465cu, 0x5fd2c00du, 0xfe0a39beu,
    0x9c41b36fu, 0x3a792d20u, 0xd8b0a6d1u, 0x76e82082u, 0x151f9a33u, 0xb35713e4u, 0x518e8d95u, 0xefc60746u,
    0x8dfd80f7u, 0x2c34faa8u, 0xca6c7459u, 0x68a3ee0au, 0x06db67bbu, 0xa512e16cu, 0x434a5b1du, 0xe181d4ceu,
    0x7fb94e7fu, 0x1df0c830u, 0xbc2841e1u, 0x5a5fbb92u, 0xf8973543u, 0x96ceaef4u, 0x350628a5u, 0xd33da256u,
    0x71751c07u, 0x0fac95b8u, 0xade40f69u, 0x4c1b891au, 0xea5302cbu, 0x888a7c7cu, 0x26c1f62du, 0xc4f96fdeu,
    0x6330e98fu, 0x01686340u, 0x9f9fdcf1u, 0x3dd756a2u, 0xdc0ed053u, 0x7a464a04u, 0x187dc3b5u, 0xb6b53d66u,
    0x54ecb717u, 0xf32430c8u, 0x915baa79u, 0x2f93242au, 0xcdca9ddbu, 0x6c02178cu, 0x0a39913du, 0xa8710aeeu,
    0x46a8849fu, 0xe4dffe50u, 0x83177801u, 0x214ef1b2u, 0xbf866b63u, 0x5dbde514u, 0xfbf55ec5u, 0x9a2cd876u,
    0x38645227u, 0xd69bcbd8u, 0x74d34589u, 0x130abf3au, 0xb14238ebu, 0x4f79b29cu, 0xedb12c4du, 0x8be8a5feu,
    0x2a201fafu, 0xc8579960u, 0x668f1311u, 0x04c68cc2u, 0xa2fe0673u, 0x41358024u, 0xdf6cf9d5u, 0x7da47386u,
    0x1bdbed37u, 0xba1366e8u, 0x584ae099u, 0xf6825a4au, 0x94b9d3fbu, 0x32f14dacu, 0xd128c75du, 0x6f60410eu,
    0x0d97babfu, 0xabcf3470u, 0x4a06ae21u, 0xe83e27d2u, 0x8675a183u, 0x24ad1b34u, 0xc2e494e5u, 0x611c0e96u,
};

static const uint32_t bshim_076_tab4[96] = {
    0x2c34faa8u, 0xca6c7459u, 0x68a3ee0au, 0x06db67bbu, 0xa512e16cu, 0x434a5b1du, 0xe181d4ceu, 0x7fb94e7fu,
    0x1df0c830u, 0xbc2841e1u, 0x5a5fbb92u, 0xf8973543u, 0x96ceaef4u, 0x350628a5u, 0xd33da256u, 0x71751c07u,
    0x0fac95b8u, 0xade40f69u, 0x4c1b891au, 0xea5302cbu, 0x888a7c7cu, 0x26c1f62du, 0xc4f96fdeu, 0x6330e98fu,
    0x01686340u, 0x9f9fdcf1u, 0x3dd756a2u, 0xdc0ed053u, 0x7a464a04u, 0x187dc3b5u, 0xb6b53d66u, 0x54ecb717u,
    0xf32430c8u, 0x915baa79u, 0x2f93242au, 0xcdca9ddbu, 0x6c02178cu, 0x0a39913du, 0xa8710aeeu, 0x46a8849fu,
    0xe4dffe50u, 0x83177801u, 0x214ef1b2u, 0xbf866b63u, 0x5dbde514u, 0xfbf55ec5u, 0x9a2cd876u, 0x38645227u,
    0xd69bcbd8u, 0x74d34589u, 0x130abf3au, 0xb14238ebu, 0x4f79b29cu, 0xedb12c4du, 0x8be8a5feu, 0x2a201fafu,
    0xc8579960u, 0x668f1311u, 0x04c68cc2u, 0xa2fe0673u, 0x41358024u, 0xdf6cf9d5u, 0x7da47386u, 0x1bdbed37u,
    0xba1366e8u, 0x584ae099u, 0xf6825a4au, 0x94b9d3fbu, 0x32f14dacu, 0xd128c75du, 0x6f60410eu, 0x0d97babfu,
    0xabcf3470u, 0x4a06ae21u, 0xe83e27d2u, 0x8675a183u, 0x24ad1b34u, 0xc2e494e5u, 0x611c0e96u, 0xff538847u,
    0x9d8b01f8u, 0x3bc27ba9u, 0xd9f9f55au, 0x78316f0bu, 0x1668e8bcu, 0xb4a0626du, 0x52d7dc1eu, 0xf10f55cfu,
    0x8f46cf80u, 0x2d7e4931u, 0xcbb5c2e2u, 0x69ed3c93u, 0x0824b644u, 0xa65c2ff5u, 0x4493a9a6u, 0xe2cb2357u,
};

static const uint32_t bshim_076_tab5[96] = {
    0xade40f69u, 0x4c1b891au, 0xea5302cbu, 0x888a7c7cu, 0x26c1f62du, 0xc4f96fdeu, 0x6330e98fu, 0x01686340u,
    0x9f9fdcf1u, 0x3dd756a2u, 0xdc0ed053u, 0x7a464a04u, 0x187dc3b5u, 0xb6b53d66u, 0x54ecb717u, 0xf32430c8u,
    0x915baa79u, 0x2f93242au, 0xcdca9ddbu, 0x6c02178cu, 0x0a39913du, 0xa8710aeeu, 0x46a8849fu, 0xe4dffe50u,
    0x83177801u, 0x214ef1b2u, 0xbf866b63u, 0x5dbde514u, 0xfbf55ec5u, 0x9a2cd876u, 0x38645227u, 0xd69bcbd8u,
    0x74d34589u, 0x130abf3au, 0xb14238ebu, 0x4f79b29cu, 0xedb12c4du, 0x8be8a5feu, 0x2a201fafu, 0xc8579960u,
    0x668f1311u, 0x04c68cc2u, 0xa2fe0673u, 0x41358024u, 0xdf6cf9d5u, 0x7da47386u, 0x1bdbed37u, 0xba1366e8u,
    0x584ae099u, 0xf6825a4au, 0x94b9d3fbu, 0x32f14dacu, 0xd128c75du, 0x6f60410eu, 0x0d97babfu, 0xabcf3470u,
    0x4a06ae21u, 0xe83e27d2u, 0x8675a183u, 0x24ad1b34u, 0xc2e494e5u, 0x611c0e96u, 0xff538847u, 0x9d8b01f8u,
    0x3bc27ba9u, 0xd9f9f55au, 0x78316f0bu, 0x1668e8bcu, 0xb4a0626du, 0x52d7dc1eu, 0xf10f55cfu, 0x8f46cf80u,
    0x2d7e4931u, 0xcbb5c2e2u, 0x69ed3c93u, 0x0824b644u, 0xa65c2ff5u, 0x4493a9a6u, 0xe2cb2357u, 0x81029d08u,
    0x1f3a16b9u, 0xbd71906au, 0x5ba90a1bu, 0xf9e083ccu, 0x9817fd7du, 0x364f772eu, 0xd486f0dfu, 0x72be6a90u,
    0x10f5e441u, 0xaf2d5df2u, 0x4d64d7a3u, 0xeb9c5154u, 0x89d3cb05u, 0x280b44b6u, 0xc642be67u, 0x647a3818u,
};

static const uint32_t bshim_076_tab6[96] = {
    0x2f93242au, 0xcdca9ddbu, 0x6c02178cu, 0x0a39913du, 0xa8710aeeu, 0x46a8849fu, 0xe4dffe50u, 0x83177801u,
    0x214ef1b2u, 0xbf866b63u, 0x5dbde514u, 0xfbf55ec5u, 0x9a2cd876u, 0x38645227u, 0xd69bcbd8u, 0x74d34589u,
    0x130abf3au, 0xb14238ebu, 0x4f79b29cu, 0xedb12c4du, 0x8be8a5feu, 0x2a201fafu, 0xc8579960u, 0x668f1311u,
    0x04c68cc2u, 0xa2fe0673u, 0x41358024u, 0xdf6cf9d5u, 0x7da47386u, 0x1bdbed37u, 0xba1366e8u, 0x584ae099u,
    0xf6825a4au, 0x94b9d3fbu, 0x32f14dacu, 0xd128c75du, 0x6f60410eu, 0x0d97babfu, 0xabcf3470u, 0x4a06ae21u,
    0xe83e27d2u, 0x8675a183u, 0x24ad1b34u, 0xc2e494e5u, 0x611c0e96u, 0xff538847u, 0x9d8b01f8u, 0x3bc27ba9u,
    0xd9f9f55au, 0x78316f0bu, 0x1668e8bcu, 0xb4a0626du, 0x52d7dc1eu, 0xf10f55cfu, 0x8f46cf80u, 0x2d7e4931u,
    0xcbb5c2e2u, 0x69ed3c93u, 0x0824b644u, 0xa65c2ff5u, 0x4493a9a6u, 0xe2cb2357u, 0x81029d08u, 0x1f3a16b9u,
    0xbd71906au, 0x5ba90a1bu, 0xf9e083ccu, 0x9817fd7du, 0x364f772eu, 0xd486f0dfu, 0x72be6a90u, 0x10f5e441u,
    0xaf2d5df2u, 0x4d64d7a3u, 0xeb9c5154u, 0x89d3cb05u, 0x280b44b6u, 0xc642be67u, 0x647a3818u, 0x02b1b1c9u,
    0xa0e92b7au, 0x3f20a52bu, 0xdd581edcu, 0x7b8f988du, 0x19c7123eu, 0xb7fe8befu, 0x563605a0u, 0xf46d7f51u,
    0x92a4f902u, 0x30dc72b3u, 0xcf13ec64u, 0x6d4b6615u, 0x0b82dfc6u, 0xa9ba5977u, 0x47f1d328u, 0xe6294cd9u,
};

static const uint32_t bshim_076_tab7[96] = {
    0xb14238ebu, 0x4f79b29cu, 0xedb12c4du, 0x8be8a5feu, 0x2a201fafu, 0xc8579960u, 0x668f1311u, 0x04c68cc2u,
    0xa2fe0673u, 0x41358024u, 0xdf6cf9d5u, 0x7da47386u, 0x1bdbed37u, 0xba1366e8u, 0x584ae099u, 0xf6825a4au,
    0x94b9d3fbu, 0x32f14dacu, 0xd128c75du, 0x6f60410eu, 0x0d97babfu, 0xabcf3470u, 0x4a06ae21u, 0xe83e27d2u,
    0x8675a183u, 0x24ad1b34u, 0xc2e494e5u, 0x611c0e96u, 0xff538847u, 0x9d8b01f8u, 0x3bc27ba9u, 0xd9f9f55au,
    0x78316f0bu, 0x1668e8bcu, 0xb4a0626du, 0x52d7dc1eu, 0xf10f55cfu, 0x8f46cf80u, 0x2d7e4931u, 0xcbb5c2e2u,
    0x69ed3c93u, 0x0824b644u, 0xa65c2ff5u, 0x4493a9a6u, 0xe2cb2357u, 0x81029d08u, 0x1f3a16b9u, 0xbd71906au,
    0x5ba90a1bu, 0xf9e083ccu, 0x9817fd7du, 0x364f772eu, 0xd486f0dfu, 0x72be6a90u, 0x10f5e441u, 0xaf2d5df2u,
    0x4d64d7a3u, 0xeb9c5154u, 0x89d3cb05u, 0x280b44b6u, 0xc642be67u, 0x647a3818u, 0x02b1b1c9u, 0xa0e92b7au,
    0x3f20a52bu, 0xdd581edcu, 0x7b8f988du, 0x19c7123eu, 0xb7fe8befu, 0x563605a0u, 0xf46d7f51u, 0x92a4f902u,
    0x30dc72b3u, 0xcf13ec64u, 0x6d4b6615u, 0x0b82dfc6u, 0xa9ba5977u, 0x47f1d328u, 0xe6294cd9u, 0x8460c68au,
    0x2298403bu, 0xc0cfb9ecu, 0x5f07339du, 0xfd3ead4eu, 0x9b7626ffu, 0x39ada0b0u, 0xd7e51a61u, 0x761c9412u,
    0x14540dc3u, 0xb28b8774u, 0x50c30125u, 0xeefa7ad6u, 0x8d31f487u, 0x2b696e38u, 0xc9a0e7e9u, 0x67d8619au,
};

struct bshim_076_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_076_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_076_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_076_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_076_reset(struct bshim_076_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00092ef4u;
    return 0;
}

