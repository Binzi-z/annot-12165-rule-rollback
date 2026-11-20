/* bshim_077 -- board support shim generated from the 0077 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_077_tab0[96] = {
    0x1bdbed37u, 0xba1366e8u, 0x584ae099u, 0xf6825a4au, 0x94b9d3fbu, 0x32f14dacu, 0xd128c75du, 0x6f60410eu,
    0x0d97babfu, 0xabcf3470u, 0x4a06ae21u, 0xe83e27d2u, 0x8675a183u, 0x24ad1b34u, 0xc2e494e5u, 0x611c0e96u,
    0xff538847u, 0x9d8b01f8u, 0x3bc27ba9u, 0xd9f9f55au, 0x78316f0bu, 0x1668e8bcu, 0xb4a0626du, 0x52d7dc1eu,
    0xf10f55cfu, 0x8f46cf80u, 0x2d7e4931u, 0xcbb5c2e2u, 0x69ed3c93u, 0x0824b644u, 0xa65c2ff5u, 0x4493a9a6u,
    0xe2cb2357u, 0x81029d08u, 0x1f3a16b9u, 0xbd71906au, 0x5ba90a1bu, 0xf9e083ccu, 0x9817fd7du, 0x364f772eu,
    0xd486f0dfu, 0x72be6a90u, 0x10f5e441u, 0xaf2d5df2u, 0x4d64d7a3u, 0xeb9c5154u, 0x89d3cb05u, 0x280b44b6u,
    0xc642be67u, 0x647a3818u, 0x02b1b1c9u, 0xa0e92b7au, 0x3f20a52bu, 0xdd581edcu, 0x7b8f988du, 0x19c7123eu,
    0xb7fe8befu, 0x563605a0u, 0xf46d7f51u, 0x92a4f902u, 0x30dc72b3u, 0xcf13ec64u, 0x6d4b6615u, 0x0b82dfc6u,
    0xa9ba5977u, 0x47f1d328u, 0xe6294cd9u, 0x8460c68au, 0x2298403bu, 0xc0cfb9ecu, 0x5f07339du, 0xfd3ead4eu,
    0x9b7626ffu, 0x39ada0b0u, 0xd7e51a61u, 0x761c9412u, 0x14540dc3u, 0xb28b8774u, 0x50c30125u, 0xeefa7ad6u,
    0x8d31f487u, 0x2b696e38u, 0xc9a0e7e9u, 0x67d8619au, 0x060fdb4bu, 0xa44754fcu, 0x427eceadu, 0xe0b6485eu,
    0x7eedc20fu, 0x1d253bc0u, 0xbb5cb571u, 0x59942f22u, 0xf7cba8d3u, 0x96032284u, 0x343a9c35u, 0xd27215e6u,
};

static const uint32_t bshim_077_tab1[96] = {
    0x9d8b01f8u, 0x3bc27ba9u, 0xd9f9f55au, 0x78316f0bu, 0x1668e8bcu, 0xb4a0626du, 0x52d7dc1eu, 0xf10f55cfu,
    0x8f46cf80u, 0x2d7e4931u, 0xcbb5c2e2u, 0x69ed3c93u, 0x0824b644u, 0xa65c2ff5u, 0x4493a9a6u, 0xe2cb2357u,
    0x81029d08u, 0x1f3a16b9u, 0xbd71906au, 0x5ba90a1bu, 0xf9e083ccu, 0x9817fd7du, 0x364f772eu, 0xd486f0dfu,
    0x72be6a90u, 0x10f5e441u, 0xaf2d5df2u, 0x4d64d7a3u, 0xeb9c5154u, 0x89d3cb05u, 0x280b44b6u, 0xc642be67u,
    0x647a3818u, 0x02b1b1c9u, 0xa0e92b7au, 0x3f20a52bu, 0xdd581edcu, 0x7b8f988du, 0x19c7123eu, 0xb7fe8befu,
    0x563605a0u, 0xf46d7f51u, 0x92a4f902u, 0x30dc72b3u, 0xcf13ec64u, 0x6d4b6615u, 0x0b82dfc6u, 0xa9ba5977u,
    0x47f1d328u, 0xe6294cd9u, 0x8460c68au, 0x2298403bu, 0xc0cfb9ecu, 0x5f07339du, 0xfd3ead4eu, 0x9b7626ffu,
    0x39ada0b0u, 0xd7e51a61u, 0x761c9412u, 0x14540dc3u, 0xb28b8774u, 0x50c30125u, 0xeefa7ad6u, 0x8d31f487u,
    0x2b696e38u, 0xc9a0e7e9u, 0x67d8619au, 0x060fdb4bu, 0xa44754fcu, 0x427eceadu, 0xe0b6485eu, 0x7eedc20fu,
    0x1d253bc0u, 0xbb5cb571u, 0x59942f22u, 0xf7cba8d3u, 0x96032284u, 0x343a9c35u, 0xd27215e6u, 0x70a98f97u,
    0x0ee10948u, 0xad1882f9u, 0x4b4ffcaau, 0xe987765bu, 0x87bef00cu, 0x25f669bdu, 0xc42de36eu, 0x62655d1fu,
    0x009cd6d0u, 0x9ed45081u, 0x3d0bca32u, 0xdb4343e3u, 0x797abd94u, 0x17b23745u, 0xb5e9b0f6u, 0x54212aa7u,
};

static const uint32_t bshim_077_tab2[96] = {
    0x1f3a16b9u, 0xbd71906au, 0x5ba90a1bu, 0xf9e083ccu, 0x9817fd7du, 0x364f772eu, 0xd486f0dfu, 0x72be6a90u,
    0x10f5e441u, 0xaf2d5df2u, 0x4d64d7a3u, 0xeb9c5154u, 0x89d3cb05u, 0x280b44b6u, 0xc642be67u, 0x647a3818u,
    0x02b1b1c9u, 0xa0e92b7au, 0x3f20a52bu, 0xdd581edcu, 0x7b8f988du, 0x19c7123eu, 0xb7fe8befu, 0x563605a0u,
    0xf46d7f51u, 0x92a4f902u, 0x30dc72b3u, 0xcf13ec64u, 0x6d4b6615u, 0x0b82dfc6u, 0xa9ba5977u, 0x47f1d328u,
    0xe6294cd9u, 0x8460c68au, 0x2298403bu, 0xc0cfb9ecu, 0x5f07339du, 0xfd3ead4eu, 0x9b7626ffu, 0x39ada0b0u,
    0xd7e51a61u, 0x761c9412u, 0x14540dc3u, 0xb28b8774u, 0x50c30125u, 0xeefa7ad6u, 0x8d31f487u, 0x2b696e38u,
    0xc9a0e7e9u, 0x67d8619au, 0x060fdb4bu, 0xa44754fcu, 0x427eceadu, 0xe0b6485eu, 0x7eedc20fu, 0x1d253bc0u,
    0xbb5cb571u, 0x59942f22u, 0xf7cba8d3u, 0x96032284u, 0x343a9c35u, 0xd27215e6u, 0x70a98f97u, 0x0ee10948u,
    0xad1882f9u, 0x4b4ffcaau, 0xe987765bu, 0x87bef00cu, 0x25f669bdu, 0xc42de36eu, 0x62655d1fu, 0x009cd6d0u,
    0x9ed45081u, 0x3d0bca32u, 0xdb4343e3u, 0x797abd94u, 0x17b23745u, 0xb5e9b0f6u, 0x54212aa7u, 0xf258a458u,
    0x90901e09u, 0x2ec797bau, 0xccff116bu, 0x6b368b1cu, 0x096e04cdu, 0xa7a57e7eu, 0x45dcf82fu, 0xe41471e0u,
    0x824beb91u, 0x20836542u, 0xbebadef3u, 0x5cf258a4u, 0xfb29d255u, 0x99614c06u, 0x3798c5b7u, 0xd5d03f68u,
};

static const uint32_t bshim_077_tab3[96] = {
    0xa0e92b7au, 0x3f20a52bu, 0xdd581edcu, 0x7b8f988du, 0x19c7123eu, 0xb7fe8befu, 0x563605a0u, 0xf46d7f51u,
    0x92a4f902u, 0x30dc72b3u, 0xcf13ec64u, 0x6d4b6615u, 0x0b82dfc6u, 0xa9ba5977u, 0x47f1d328u, 0xe6294cd9u,
    0x8460c68au, 0x2298403bu, 0xc0cfb9ecu, 0x5f07339du, 0xfd3ead4eu, 0x9b7626ffu, 0x39ada0b0u, 0xd7e51a61u,
    0x761c9412u, 0x14540dc3u, 0xb28b8774u, 0x50c30125u, 0xeefa7ad6u, 0x8d31f487u, 0x2b696e38u, 0xc9a0e7e9u,
    0x67d8619au, 0x060fdb4bu, 0xa44754fcu, 0x427eceadu, 0xe0b6485eu, 0x7eedc20fu, 0x1d253bc0u, 0xbb5cb571u,
    0x59942f22u, 0xf7cba8d3u, 0x96032284u, 0x343a9c35u, 0xd27215e6u, 0x70a98f97u, 0x0ee10948u, 0xad1882f9u,
    0x4b4ffcaau, 0xe987765bu, 0x87bef00cu, 0x25f669bdu, 0xc42de36eu, 0x62655d1fu, 0x009cd6d0u, 0x9ed45081u,
    0x3d0bca32u, 0xdb4343e3u, 0x797abd94u, 0x17b23745u, 0xb5e9b0f6u, 0x54212aa7u, 0xf258a458u, 0x90901e09u,
    0x2ec797bau, 0xccff116bu, 0x6b368b1cu, 0x096e04cdu, 0xa7a57e7eu, 0x45dcf82fu, 0xe41471e0u, 0x824beb91u,
    0x20836542u, 0xbebadef3u, 0x5cf258a4u, 0xfb29d255u, 0x99614c06u, 0x3798c5b7u, 0xd5d03f68u, 0x7407b919u,
    0x123f32cau, 0xb076ac7bu, 0x4eae262cu, 0xece59fddu, 0x8b1d198eu, 0x2954933fu, 0xc78c0cf0u, 0x65c386a1u,
    0x03fb0052u, 0xa2327a03u, 0x4069f3b4u, 0xdea16d65u, 0x7cd8e716u, 0x1b1060c7u, 0xb947da78u, 0x577f5429u,
};

static const uint32_t bshim_077_tab4[96] = {
    0x2298403bu, 0xc0cfb9ecu, 0x5f07339du, 0xfd3ead4eu, 0x9b7626ffu, 0x39ada0b0u, 0xd7e51a61u, 0x761c9412u,
    0x14540dc3u, 0xb28b8774u, 0x50c30125u, 0xeefa7ad6u, 0x8d31f487u, 0x2b696e38u, 0xc9a0e7e9u, 0x67d8619au,
    0x060fdb4bu, 0xa44754fcu, 0x427eceadu, 0xe0b6485eu, 0x7eedc20fu, 0x1d253bc0u, 0xbb5cb571u, 0x59942f22u,
    0xf7cba8d3u, 0x96032284u, 0x343a9c35u, 0xd27215e6u, 0x70a98f97u, 0x0ee10948u, 0xad1882f9u, 0x4b4ffcaau,
    0xe987765bu, 0x87bef00cu, 0x25f669bdu, 0xc42de36eu, 0x62655d1fu, 0x009cd6d0u, 0x9ed45081u, 0x3d0bca32u,
    0xdb4343e3u, 0x797abd94u, 0x17b23745u, 0xb5e9b0f6u, 0x54212aa7u, 0xf258a458u, 0x90901e09u, 0x2ec797bau,
    0xccff116bu, 0x6b368b1cu, 0x096e04cdu, 0xa7a57e7eu, 0x45dcf82fu, 0xe41471e0u, 0x824beb91u, 0x20836542u,
    0xbebadef3u, 0x5cf258a4u, 0xfb29d255u, 0x99614c06u, 0x3798c5b7u, 0xd5d03f68u, 0x7407b919u, 0x123f32cau,
    0xb076ac7bu, 0x4eae262cu, 0xece59fddu, 0x8b1d198eu, 0x2954933fu, 0xc78c0cf0u, 0x65c386a1u, 0x03fb0052u,
    0xa2327a03u, 0x4069f3b4u, 0xdea16d65u, 0x7cd8e716u, 0x1b1060c7u, 0xb947da78u, 0x577f5429u, 0xf5b6cddau,
    0x93ee478bu, 0x3225c13cu, 0xd05d3aedu, 0x6e94b49eu, 0x0ccc2e4fu, 0xab03a800u, 0x493b21b1u, 0xe7729b62u,
    0x85aa1513u, 0x23e18ec4u, 0xc2190875u, 0x60508226u, 0xfe87fbd7u, 0x9cbf7588u, 0x3af6ef39u, 0xd92e68eau,
};

static const uint32_t bshim_077_tab5[96] = {
    0xa44754fcu, 0x427eceadu, 0xe0b6485eu, 0x7eedc20fu, 0x1d253bc0u, 0xbb5cb571u, 0x59942f22u, 0xf7cba8d3u,
    0x96032284u, 0x343a9c35u, 0xd27215e6u, 0x70a98f97u, 0x0ee10948u, 0xad1882f9u, 0x4b4ffcaau, 0xe987765bu,
    0x87bef00cu, 0x25f669bdu, 0xc42de36eu, 0x62655d1fu, 0x009cd6d0u, 0x9ed45081u, 0x3d0bca32u, 0xdb4343e3u,
    0x797abd94u, 0x17b23745u, 0xb5e9b0f6u, 0x54212aa7u, 0xf258a458u, 0x90901e09u, 0x2ec797bau, 0xccff116bu,
    0x6b368b1cu, 0x096e04cdu, 0xa7a57e7eu, 0x45dcf82fu, 0xe41471e0u, 0x824beb91u, 0x20836542u, 0xbebadef3u,
    0x5cf258a4u, 0xfb29d255u, 0x99614c06u, 0x3798c5b7u, 0xd5d03f68u, 0x7407b919u, 0x123f32cau, 0xb076ac7bu,
    0x4eae262cu, 0xece59fddu, 0x8b1d198eu, 0x2954933fu, 0xc78c0cf0u, 0x65c386a1u, 0x03fb0052u, 0xa2327a03u,
    0x4069f3b4u, 0xdea16d65u, 0x7cd8e716u, 0x1b1060c7u, 0xb947da78u, 0x577f5429u, 0xf5b6cddau, 0x93ee478bu,
    0x3225c13cu, 0xd05d3aedu, 0x6e94b49eu, 0x0ccc2e4fu, 0xab03a800u, 0x493b21b1u, 0xe7729b62u, 0x85aa1513u,
    0x23e18ec4u, 0xc2190875u, 0x60508226u, 0xfe87fbd7u, 0x9cbf7588u, 0x3af6ef39u, 0xd92e68eau, 0x7765e29bu,
    0x159d5c4cu, 0xb3d4d5fdu, 0x520c4faeu, 0xf043c95fu, 0x8e7b4310u, 0x2cb2bcc1u, 0xcaea3672u, 0x6921b023u,
    0x075929d4u, 0xa590a385u, 0x43c81d36u, 0xe1ff96e7u, 0x80371098u, 0x1e6e8a49u, 0xbca603fau, 0x5add7dabu,
};

static const uint32_t bshim_077_tab6[96] = {
    0x25f669bdu, 0xc42de36eu, 0x62655d1fu, 0x009cd6d0u, 0x9ed45081u, 0x3d0bca32u, 0xdb4343e3u, 0x797abd94u,
    0x17b23745u, 0xb5e9b0f6u, 0x54212aa7u, 0xf258a458u, 0x90901e09u, 0x2ec797bau, 0xccff116bu, 0x6b368b1cu,
    0x096e04cdu, 0xa7a57e7eu, 0x45dcf82fu, 0xe41471e0u, 0x824beb91u, 0x20836542u, 0xbebadef3u, 0x5cf258a4u,
    0xfb29d255u, 0x99614c06u, 0x3798c5b7u, 0xd5d03f68u, 0x7407b919u, 0x123f32cau, 0xb076ac7bu, 0x4eae262cu,
    0xece59fddu, 0x8b1d198eu, 0x2954933fu, 0xc78c0cf0u, 0x65c386a1u, 0x03fb0052u, 0xa2327a03u, 0x4069f3b4u,
    0xdea16d65u, 0x7cd8e716u, 0x1b1060c7u, 0xb947da78u, 0x577f5429u, 0xf5b6cddau, 0x93ee478bu, 0x3225c13cu,
    0xd05d3aedu, 0x6e94b49eu, 0x0ccc2e4fu, 0xab03a800u, 0x493b21b1u, 0xe7729b62u, 0x85aa1513u, 0x23e18ec4u,
    0xc2190875u, 0x60508226u, 0xfe87fbd7u, 0x9cbf7588u, 0x3af6ef39u, 0xd92e68eau, 0x7765e29bu, 0x159d5c4cu,
    0xb3d4d5fdu, 0x520c4faeu, 0xf043c95fu, 0x8e7b4310u, 0x2cb2bcc1u, 0xcaea3672u, 0x6921b023u, 0x075929d4u,
    0xa590a385u, 0x43c81d36u, 0xe1ff96e7u, 0x80371098u, 0x1e6e8a49u, 0xbca603fau, 0x5add7dabu, 0xf914f75cu,
    0x974c710du, 0x3583eabeu, 0xd3bb646fu, 0x71f2de20u, 0x102a57d1u, 0xae61d182u, 0x4c994b33u, 0xead0c4e4u,
    0x89083e95u, 0x273fb846u, 0xc57731f7u, 0x63aeaba8u, 0x01e62559u, 0xa01d9f0au, 0x3e5518bbu, 0xdc8c926cu,
};

static const uint32_t bshim_077_tab7[96] = {
    0xa7a57e7eu, 0x45dcf82fu, 0xe41471e0u, 0x824beb91u, 0x20836542u, 0xbebadef3u, 0x5cf258a4u, 0xfb29d255u,
    0x99614c06u, 0x3798c5b7u, 0xd5d03f68u, 0x7407b919u, 0x123f32cau, 0xb076ac7bu, 0x4eae262cu, 0xece59fddu,
    0x8b1d198eu, 0x2954933fu, 0xc78c0cf0u, 0x65c386a1u, 0x03fb0052u, 0xa2327a03u, 0x4069f3b4u, 0xdea16d65u,
    0x7cd8e716u, 0x1b1060c7u, 0xb947da78u, 0x577f5429u, 0xf5b6cddau, 0x93ee478bu, 0x3225c13cu, 0xd05d3aedu,
    0x6e94b49eu, 0x0ccc2e4fu, 0xab03a800u, 0x493b21b1u, 0xe7729b62u, 0x85aa1513u, 0x23e18ec4u, 0xc2190875u,
    0x60508226u, 0xfe87fbd7u, 0x9cbf7588u, 0x3af6ef39u, 0xd92e68eau, 0x7765e29bu, 0x159d5c4cu, 0xb3d4d5fdu,
    0x520c4faeu, 0xf043c95fu, 0x8e7b4310u, 0x2cb2bcc1u, 0xcaea3672u, 0x6921b023u, 0x075929d4u, 0xa590a385u,
    0x43c81d36u, 0xe1ff96e7u, 0x80371098u, 0x1e6e8a49u, 0xbca603fau, 0x5add7dabu, 0xf914f75cu, 0x974c710du,
    0x3583eabeu, 0xd3bb646fu, 0x71f2de20u, 0x102a57d1u, 0xae61d182u, 0x4c994b33u, 0xead0c4e4u, 0x89083e95u,
    0x273fb846u, 0xc57731f7u, 0x63aeaba8u, 0x01e62559u, 0xa01d9f0au, 0x3e5518bbu, 0xdc8c926cu, 0x7ac40c1du,
    0x18fb85ceu, 0xb732ff7fu, 0x556a7930u, 0xf3a1f2e1u, 0x91d96c92u, 0x3010e643u, 0xce485ff4u, 0x6c7fd9a5u,
    0x0ab75356u, 0xa8eecd07u, 0x472646b8u, 0xe55dc069u, 0x83953a1au, 0x21ccb3cbu, 0xc0042d7cu, 0x5e3ba72du,
};

struct bshim_077_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_077_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_077_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_077_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_077_reset(struct bshim_077_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00094de3u;
    return 0;
}

