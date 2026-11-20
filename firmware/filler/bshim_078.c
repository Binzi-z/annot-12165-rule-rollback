/* bshim_078 -- board support shim generated from the 0078 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_078_tab0[96] = {
    0x123f32cau, 0xb076ac7bu, 0x4eae262cu, 0xece59fddu, 0x8b1d198eu, 0x2954933fu, 0xc78c0cf0u, 0x65c386a1u,
    0x03fb0052u, 0xa2327a03u, 0x4069f3b4u, 0xdea16d65u, 0x7cd8e716u, 0x1b1060c7u, 0xb947da78u, 0x577f5429u,
    0xf5b6cddau, 0x93ee478bu, 0x3225c13cu, 0xd05d3aedu, 0x6e94b49eu, 0x0ccc2e4fu, 0xab03a800u, 0x493b21b1u,
    0xe7729b62u, 0x85aa1513u, 0x23e18ec4u, 0xc2190875u, 0x60508226u, 0xfe87fbd7u, 0x9cbf7588u, 0x3af6ef39u,
    0xd92e68eau, 0x7765e29bu, 0x159d5c4cu, 0xb3d4d5fdu, 0x520c4faeu, 0xf043c95fu, 0x8e7b4310u, 0x2cb2bcc1u,
    0xcaea3672u, 0x6921b023u, 0x075929d4u, 0xa590a385u, 0x43c81d36u, 0xe1ff96e7u, 0x80371098u, 0x1e6e8a49u,
    0xbca603fau, 0x5add7dabu, 0xf914f75cu, 0x974c710du, 0x3583eabeu, 0xd3bb646fu, 0x71f2de20u, 0x102a57d1u,
    0xae61d182u, 0x4c994b33u, 0xead0c4e4u, 0x89083e95u, 0x273fb846u, 0xc57731f7u, 0x63aeaba8u, 0x01e62559u,
    0xa01d9f0au, 0x3e5518bbu, 0xdc8c926cu, 0x7ac40c1du, 0x18fb85ceu, 0xb732ff7fu, 0x556a7930u, 0xf3a1f2e1u,
    0x91d96c92u, 0x3010e643u, 0xce485ff4u, 0x6c7fd9a5u, 0x0ab75356u, 0xa8eecd07u, 0x472646b8u, 0xe55dc069u,
    0x83953a1au, 0x21ccb3cbu, 0xc0042d7cu, 0x5e3ba72du, 0xfc7320deu, 0x9aaa9a8fu, 0x38e21440u, 0xd7198df1u,
    0x755107a2u, 0x13888153u, 0xb1bffb04u, 0x4ff774b5u, 0xee2eee66u, 0x8c666817u, 0x2a9de1c8u, 0xc8d55b79u,
};

static const uint32_t bshim_078_tab1[96] = {
    0x93ee478bu, 0x3225c13cu, 0xd05d3aedu, 0x6e94b49eu, 0x0ccc2e4fu, 0xab03a800u, 0x493b21b1u, 0xe7729b62u,
    0x85aa1513u, 0x23e18ec4u, 0xc2190875u, 0x60508226u, 0xfe87fbd7u, 0x9cbf7588u, 0x3af6ef39u, 0xd92e68eau,
    0x7765e29bu, 0x159d5c4cu, 0xb3d4d5fdu, 0x520c4faeu, 0xf043c95fu, 0x8e7b4310u, 0x2cb2bcc1u, 0xcaea3672u,
    0x6921b023u, 0x075929d4u, 0xa590a385u, 0x43c81d36u, 0xe1ff96e7u, 0x80371098u, 0x1e6e8a49u, 0xbca603fau,
    0x5add7dabu, 0xf914f75cu, 0x974c710du, 0x3583eabeu, 0xd3bb646fu, 0x71f2de20u, 0x102a57d1u, 0xae61d182u,
    0x4c994b33u, 0xead0c4e4u, 0x89083e95u, 0x273fb846u, 0xc57731f7u, 0x63aeaba8u, 0x01e62559u, 0xa01d9f0au,
    0x3e5518bbu, 0xdc8c926cu, 0x7ac40c1du, 0x18fb85ceu, 0xb732ff7fu, 0x556a7930u, 0xf3a1f2e1u, 0x91d96c92u,
    0x3010e643u, 0xce485ff4u, 0x6c7fd9a5u, 0x0ab75356u, 0xa8eecd07u, 0x472646b8u, 0xe55dc069u, 0x83953a1au,
    0x21ccb3cbu, 0xc0042d7cu, 0x5e3ba72du, 0xfc7320deu, 0x9aaa9a8fu, 0x38e21440u, 0xd7198df1u, 0x755107a2u,
    0x13888153u, 0xb1bffb04u, 0x4ff774b5u, 0xee2eee66u, 0x8c666817u, 0x2a9de1c8u, 0xc8d55b79u, 0x670cd52au,
    0x05444edbu, 0xa37bc88cu, 0x41b3423du, 0xdfeabbeeu, 0x7e22359fu, 0x1c59af50u, 0xba912901u, 0x58c8a2b2u,
    0xf7001c63u, 0x95379614u, 0x336f0fc5u, 0xd1a68976u, 0x6fde0327u, 0x0e157cd8u, 0xac4cf689u, 0x4a84703au,
};

static const uint32_t bshim_078_tab2[96] = {
    0x159d5c4cu, 0xb3d4d5fdu, 0x520c4faeu, 0xf043c95fu, 0x8e7b4310u, 0x2cb2bcc1u, 0xcaea3672u, 0x6921b023u,
    0x075929d4u, 0xa590a385u, 0x43c81d36u, 0xe1ff96e7u, 0x80371098u, 0x1e6e8a49u, 0xbca603fau, 0x5add7dabu,
    0xf914f75cu, 0x974c710du, 0x3583eabeu, 0xd3bb646fu, 0x71f2de20u, 0x102a57d1u, 0xae61d182u, 0x4c994b33u,
    0xead0c4e4u, 0x89083e95u, 0x273fb846u, 0xc57731f7u, 0x63aeaba8u, 0x01e62559u, 0xa01d9f0au, 0x3e5518bbu,
    0xdc8c926cu, 0x7ac40c1du, 0x18fb85ceu, 0xb732ff7fu, 0x556a7930u, 0xf3a1f2e1u, 0x91d96c92u, 0x3010e643u,
    0xce485ff4u, 0x6c7fd9a5u, 0x0ab75356u, 0xa8eecd07u, 0x472646b8u, 0xe55dc069u, 0x83953a1au, 0x21ccb3cbu,
    0xc0042d7cu, 0x5e3ba72du, 0xfc7320deu, 0x9aaa9a8fu, 0x38e21440u, 0xd7198df1u, 0x755107a2u, 0x13888153u,
    0xb1bffb04u, 0x4ff774b5u, 0xee2eee66u, 0x8c666817u, 0x2a9de1c8u, 0xc8d55b79u, 0x670cd52au, 0x05444edbu,
    0xa37bc88cu, 0x41b3423du, 0xdfeabbeeu, 0x7e22359fu, 0x1c59af50u, 0xba912901u, 0x58c8a2b2u, 0xf7001c63u,
    0x95379614u, 0x336f0fc5u, 0xd1a68976u, 0x6fde0327u, 0x0e157cd8u, 0xac4cf689u, 0x4a84703au, 0xe8bbe9ebu,
    0x86f3639cu, 0x252add4du, 0xc36256feu, 0x6199d0afu, 0xffd14a60u, 0x9e08c411u, 0x3c403dc2u, 0xda77b773u,
    0x78af3124u, 0x16e6aad5u, 0xb51e2486u, 0x53559e37u, 0xf18d17e8u, 0x8fc49199u, 0x2dfc0b4au, 0xcc3384fbu,
};

static const uint32_t bshim_078_tab3[96] = {
    0x974c710du, 0x3583eabeu, 0xd3bb646fu, 0x71f2de20u, 0x102a57d1u, 0xae61d182u, 0x4c994b33u, 0xead0c4e4u,
    0x89083e95u, 0x273fb846u, 0xc57731f7u, 0x63aeaba8u, 0x01e62559u, 0xa01d9f0au, 0x3e5518bbu, 0xdc8c926cu,
    0x7ac40c1du, 0x18fb85ceu, 0xb732ff7fu, 0x556a7930u, 0xf3a1f2e1u, 0x91d96c92u, 0x3010e643u, 0xce485ff4u,
    0x6c7fd9a5u, 0x0ab75356u, 0xa8eecd07u, 0x472646b8u, 0xe55dc069u, 0x83953a1au, 0x21ccb3cbu, 0xc0042d7cu,
    0x5e3ba72du, 0xfc7320deu, 0x9aaa9a8fu, 0x38e21440u, 0xd7198df1u, 0x755107a2u, 0x13888153u, 0xb1bffb04u,
    0x4ff774b5u, 0xee2eee66u, 0x8c666817u, 0x2a9de1c8u, 0xc8d55b79u, 0x670cd52au, 0x05444edbu, 0xa37bc88cu,
    0x41b3423du, 0xdfeabbeeu, 0x7e22359fu, 0x1c59af50u, 0xba912901u, 0x58c8a2b2u, 0xf7001c63u, 0x95379614u,
    0x336f0fc5u, 0xd1a68976u, 0x6fde0327u, 0x0e157cd8u, 0xac4cf689u, 0x4a84703au, 0xe8bbe9ebu, 0x86f3639cu,
    0x252add4du, 0xc36256feu, 0x6199d0afu, 0xffd14a60u, 0x9e08c411u, 0x3c403dc2u, 0xda77b773u, 0x78af3124u,
    0x16e6aad5u, 0xb51e2486u, 0x53559e37u, 0xf18d17e8u, 0x8fc49199u, 0x2dfc0b4au, 0xcc3384fbu, 0x6a6afeacu,
    0x08a2785du, 0xa6d9f20eu, 0x45116bbfu, 0xe348e570u, 0x81805f21u, 0x1fb7d8d2u, 0xbdef5283u, 0x5c26cc34u,
    0xfa5e45e5u, 0x9895bf96u, 0x36cd3947u, 0xd504b2f8u, 0x733c2ca9u, 0x1173a65au, 0xafab200bu, 0x4de299bcu,
};

static const uint32_t bshim_078_tab4[96] = {
    0x18fb85ceu, 0xb732ff7fu, 0x556a7930u, 0xf3a1f2e1u, 0x91d96c92u, 0x3010e643u, 0xce485ff4u, 0x6c7fd9a5u,
    0x0ab75356u, 0xa8eecd07u, 0x472646b8u, 0xe55dc069u, 0x83953a1au, 0x21ccb3cbu, 0xc0042d7cu, 0x5e3ba72du,
    0xfc7320deu, 0x9aaa9a8fu, 0x38e21440u, 0xd7198df1u, 0x755107a2u, 0x13888153u, 0xb1bffb04u, 0x4ff774b5u,
    0xee2eee66u, 0x8c666817u, 0x2a9de1c8u, 0xc8d55b79u, 0x670cd52au, 0x05444edbu, 0xa37bc88cu, 0x41b3423du,
    0xdfeabbeeu, 0x7e22359fu, 0x1c59af50u, 0xba912901u, 0x58c8a2b2u, 0xf7001c63u, 0x95379614u, 0x336f0fc5u,
    0xd1a68976u, 0x6fde0327u, 0x0e157cd8u, 0xac4cf689u, 0x4a84703au, 0xe8bbe9ebu, 0x86f3639cu, 0x252add4du,
    0xc36256feu, 0x6199d0afu, 0xffd14a60u, 0x9e08c411u, 0x3c403dc2u, 0xda77b773u, 0x78af3124u, 0x16e6aad5u,
    0xb51e2486u, 0x53559e37u, 0xf18d17e8u, 0x8fc49199u, 0x2dfc0b4au, 0xcc3384fbu, 0x6a6afeacu, 0x08a2785du,
    0xa6d9f20eu, 0x45116bbfu, 0xe348e570u, 0x81805f21u, 0x1fb7d8d2u, 0xbdef5283u, 0x5c26cc34u, 0xfa5e45e5u,
    0x9895bf96u, 0x36cd3947u, 0xd504b2f8u, 0x733c2ca9u, 0x1173a65au, 0xafab200bu, 0x4de299bcu, 0xec1a136du,
    0x8a518d1eu, 0x288906cfu, 0xc6c08080u, 0x64f7fa31u, 0x032f73e2u, 0xa166ed93u, 0x3f9e6744u, 0xddd5e0f5u,
    0x7c0d5aa6u, 0x1a44d457u, 0xb87c4e08u, 0x56b3c7b9u, 0xf4eb416au, 0x9322bb1bu, 0x315a34ccu, 0xcf91ae7du,
};

static const uint32_t bshim_078_tab5[96] = {
    0x9aaa9a8fu, 0x38e21440u, 0xd7198df1u, 0x755107a2u, 0x13888153u, 0xb1bffb04u, 0x4ff774b5u, 0xee2eee66u,
    0x8c666817u, 0x2a9de1c8u, 0xc8d55b79u, 0x670cd52au, 0x05444edbu, 0xa37bc88cu, 0x41b3423du, 0xdfeabbeeu,
    0x7e22359fu, 0x1c59af50u, 0xba912901u, 0x58c8a2b2u, 0xf7001c63u, 0x95379614u, 0x336f0fc5u, 0xd1a68976u,
    0x6fde0327u, 0x0e157cd8u, 0xac4cf689u, 0x4a84703au, 0xe8bbe9ebu, 0x86f3639cu, 0x252add4du, 0xc36256feu,
    0x6199d0afu, 0xffd14a60u, 0x9e08c411u, 0x3c403dc2u, 0xda77b773u, 0x78af3124u, 0x16e6aad5u, 0xb51e2486u,
    0x53559e37u, 0xf18d17e8u, 0x8fc49199u, 0x2dfc0b4au, 0xcc3384fbu, 0x6a6afeacu, 0x08a2785du, 0xa6d9f20eu,
    0x45116bbfu, 0xe348e570u, 0x81805f21u, 0x1fb7d8d2u, 0xbdef5283u, 0x5c26cc34u, 0xfa5e45e5u, 0x9895bf96u,
    0x36cd3947u, 0xd504b2f8u, 0x733c2ca9u, 0x1173a65au, 0xafab200bu, 0x4de299bcu, 0xec1a136du, 0x8a518d1eu,
    0x288906cfu, 0xc6c08080u, 0x64f7fa31u, 0x032f73e2u, 0xa166ed93u, 0x3f9e6744u, 0xddd5e0f5u, 0x7c0d5aa6u,
    0x1a44d457u, 0xb87c4e08u, 0x56b3c7b9u, 0xf4eb416au, 0x9322bb1bu, 0x315a34ccu, 0xcf91ae7du, 0x6dc9282eu,
    0x0c00a1dfu, 0xaa381b90u, 0x486f9541u, 0xe6a70ef2u, 0x84de88a3u, 0x23160254u, 0xc14d7c05u, 0x5f84f5b6u,
    0xfdbc6f67u, 0x9bf3e918u, 0x3a2b62c9u, 0xd862dc7au, 0x769a562bu, 0x14d1cfdcu, 0xb309498du, 0x5140c33eu,
};

static const uint32_t bshim_078_tab6[96] = {
    0x1c59af50u, 0xba912901u, 0x58c8a2b2u, 0xf7001c63u, 0x95379614u, 0x336f0fc5u, 0xd1a68976u, 0x6fde0327u,
    0x0e157cd8u, 0xac4cf689u, 0x4a84703au, 0xe8bbe9ebu, 0x86f3639cu, 0x252add4du, 0xc36256feu, 0x6199d0afu,
    0xffd14a60u, 0x9e08c411u, 0x3c403dc2u, 0xda77b773u, 0x78af3124u, 0x16e6aad5u, 0xb51e2486u, 0x53559e37u,
    0xf18d17e8u, 0x8fc49199u, 0x2dfc0b4au, 0xcc3384fbu, 0x6a6afeacu, 0x08a2785du, 0xa6d9f20eu, 0x45116bbfu,
    0xe348e570u, 0x81805f21u, 0x1fb7d8d2u, 0xbdef5283u, 0x5c26cc34u, 0xfa5e45e5u, 0x9895bf96u, 0x36cd3947u,
    0xd504b2f8u, 0x733c2ca9u, 0x1173a65au, 0xafab200bu, 0x4de299bcu, 0xec1a136du, 0x8a518d1eu, 0x288906cfu,
    0xc6c08080u, 0x64f7fa31u, 0x032f73e2u, 0xa166ed93u, 0x3f9e6744u, 0xddd5e0f5u, 0x7c0d5aa6u, 0x1a44d457u,
    0xb87c4e08u, 0x56b3c7b9u, 0xf4eb416au, 0x9322bb1bu, 0x315a34ccu, 0xcf91ae7du, 0x6dc9282eu, 0x0c00a1dfu,
    0xaa381b90u, 0x486f9541u, 0xe6a70ef2u, 0x84de88a3u, 0x23160254u, 0xc14d7c05u, 0x5f84f5b6u, 0xfdbc6f67u,
    0x9bf3e918u, 0x3a2b62c9u, 0xd862dc7au, 0x769a562bu, 0x14d1cfdcu, 0xb309498du, 0x5140c33eu, 0xef783cefu,
    0x8dafb6a0u, 0x2be73051u, 0xca1eaa02u, 0x685623b3u, 0x068d9d64u, 0xa4c51715u, 0x42fc90c6u, 0xe1340a77u,
    0x7f6b8428u, 0x1da2fdd9u, 0xbbda778au, 0x5a11f13bu, 0xf8496aecu, 0x9680e49du, 0x34b85e4eu, 0xd2efd7ffu,
};

static const uint32_t bshim_078_tab7[96] = {
    0x9e08c411u, 0x3c403dc2u, 0xda77b773u, 0x78af3124u, 0x16e6aad5u, 0xb51e2486u, 0x53559e37u, 0xf18d17e8u,
    0x8fc49199u, 0x2dfc0b4au, 0xcc3384fbu, 0x6a6afeacu, 0x08a2785du, 0xa6d9f20eu, 0x45116bbfu, 0xe348e570u,
    0x81805f21u, 0x1fb7d8d2u, 0xbdef5283u, 0x5c26cc34u, 0xfa5e45e5u, 0x9895bf96u, 0x36cd3947u, 0xd504b2f8u,
    0x733c2ca9u, 0x1173a65au, 0xafab200bu, 0x4de299bcu, 0xec1a136du, 0x8a518d1eu, 0x288906cfu, 0xc6c08080u,
    0x64f7fa31u, 0x032f73e2u, 0xa166ed93u, 0x3f9e6744u, 0xddd5e0f5u, 0x7c0d5aa6u, 0x1a44d457u, 0xb87c4e08u,
    0x56b3c7b9u, 0xf4eb416au, 0x9322bb1bu, 0x315a34ccu, 0xcf91ae7du, 0x6dc9282eu, 0x0c00a1dfu, 0xaa381b90u,
    0x486f9541u, 0xe6a70ef2u, 0x84de88a3u, 0x23160254u, 0xc14d7c05u, 0x5f84f5b6u, 0xfdbc6f67u, 0x9bf3e918u,
    0x3a2b62c9u, 0xd862dc7au, 0x769a562bu, 0x14d1cfdcu, 0xb309498du, 0x5140c33eu, 0xef783cefu, 0x8dafb6a0u,
    0x2be73051u, 0xca1eaa02u, 0x685623b3u, 0x068d9d64u, 0xa4c51715u, 0x42fc90c6u, 0xe1340a77u, 0x7f6b8428u,
    0x1da2fdd9u, 0xbbda778au, 0x5a11f13bu, 0xf8496aecu, 0x9680e49du, 0x34b85e4eu, 0xd2efd7ffu, 0x712751b0u,
    0x0f5ecb61u, 0xad964512u, 0x4bcdbec3u, 0xea053874u, 0x883cb225u, 0x26742bd6u, 0xc4aba587u, 0x62e31f38u,
    0x011a98e9u, 0x9f52129au, 0x3d898c4bu, 0xdbc105fcu, 0x79f87fadu, 0x182ff95eu, 0xb667730fu, 0x549eecc0u,
};

struct bshim_078_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_078_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_078_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_078_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_078_reset(struct bshim_078_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00096cd2u;
    return 0;
}

