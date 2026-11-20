/* bshim_264 -- board support shim generated from the 0264 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_264_tab0[96] = {
    0x165fbf98u, 0xb4973949u, 0x52ceb2fau, 0xf1062cabu, 0x8f3da65cu, 0x2d75200du, 0xcbac99beu, 0x69e4136fu,
    0x081b8d20u, 0xa65306d1u, 0x448a8082u, 0xe2c1fa33u, 0x80f973e4u, 0x1f30ed95u, 0xbd686746u, 0x5b9fe0f7u,
    0xf9d75aa8u, 0x980ed459u, 0x36464e0au, 0xd47dc7bbu, 0x72b5416cu, 0x10ecbb1du, 0xaf2434ceu, 0x4d5bae7fu,
    0xeb932830u, 0x89caa1e1u, 0x28021b92u, 0xc6399543u, 0x64710ef4u, 0x02a888a5u, 0xa0e00256u, 0x3f177c07u,
    0xdd4ef5b8u, 0x7b866f69u, 0x19bde91au, 0xb7f562cbu, 0x562cdc7cu, 0xf464562du, 0x929bcfdeu, 0x30d3498fu,
    0xcf0ac340u, 0x6d423cf1u, 0x0b79b6a2u, 0xa9b13053u, 0x47e8aa04u, 0xe62023b5u, 0x84579d66u, 0x228f1717u,
    0xc0c690c8u, 0x5efe0a79u, 0xfd35842au, 0x9b6cfddbu, 0x39a4778cu, 0xd7dbf13du, 0x76136aeeu, 0x144ae49fu,
    0xb2825e50u, 0x50b9d801u, 0xeef151b2u, 0x8d28cb63u, 0x2b604514u, 0xc997bec5u, 0x67cf3876u, 0x0606b227u,
    0xa43e2bd8u, 0x4275a589u, 0xe0ad1f3au, 0x7ee498ebu, 0x1d1c129cu, 0xbb538c4du, 0x598b05feu, 0xf7c27fafu,
    0x95f9f960u, 0x34317311u, 0xd268ecc2u, 0x70a06673u, 0x0ed7e024u, 0xad0f59d5u, 0x4b46d386u, 0xe97e4d37u,
    0x87b5c6e8u, 0x25ed4099u, 0xc424ba4au, 0x625c33fbu, 0x0093adacu, 0x9ecb275du, 0x3d02a10eu, 0xdb3a1abfu,
    0x79719470u, 0x17a90e21u, 0xb5e087d2u, 0x54180183u, 0xf24f7b34u, 0x9086f4e5u, 0x2ebe6e96u, 0xccf5e847u,
};

static const uint32_t bshim_264_tab1[96] = {
    0x980ed459u, 0x36464e0au, 0xd47dc7bbu, 0x72b5416cu, 0x10ecbb1du, 0xaf2434ceu, 0x4d5bae7fu, 0xeb932830u,
    0x89caa1e1u, 0x28021b92u, 0xc6399543u, 0x64710ef4u, 0x02a888a5u, 0xa0e00256u, 0x3f177c07u, 0xdd4ef5b8u,
    0x7b866f69u, 0x19bde91au, 0xb7f562cbu, 0x562cdc7cu, 0xf464562du, 0x929bcfdeu, 0x30d3498fu, 0xcf0ac340u,
    0x6d423cf1u, 0x0b79b6a2u, 0xa9b13053u, 0x47e8aa04u, 0xe62023b5u, 0x84579d66u, 0x228f1717u, 0xc0c690c8u,
    0x5efe0a79u, 0xfd35842au, 0x9b6cfddbu, 0x39a4778cu, 0xd7dbf13du, 0x76136aeeu, 0x144ae49fu, 0xb2825e50u,
    0x50b9d801u, 0xeef151b2u, 0x8d28cb63u, 0x2b604514u, 0xc997bec5u, 0x67cf3876u, 0x0606b227u, 0xa43e2bd8u,
    0x4275a589u, 0xe0ad1f3au, 0x7ee498ebu, 0x1d1c129cu, 0xbb538c4du, 0x598b05feu, 0xf7c27fafu, 0x95f9f960u,
    0x34317311u, 0xd268ecc2u, 0x70a06673u, 0x0ed7e024u, 0xad0f59d5u, 0x4b46d386u, 0xe97e4d37u, 0x87b5c6e8u,
    0x25ed4099u, 0xc424ba4au, 0x625c33fbu, 0x0093adacu, 0x9ecb275du, 0x3d02a10eu, 0xdb3a1abfu, 0x79719470u,
    0x17a90e21u, 0xb5e087d2u, 0x54180183u, 0xf24f7b34u, 0x9086f4e5u, 0x2ebe6e96u, 0xccf5e847u, 0x6b2d61f8u,
    0x0964dba9u, 0xa79c555au, 0x45d3cf0bu, 0xe40b48bcu, 0x8242c26du, 0x207a3c1eu, 0xbeb1b5cfu, 0x5ce92f80u,
    0xfb20a931u, 0x995822e2u, 0x378f9c93u, 0xd5c71644u, 0x73fe8ff5u, 0x123609a6u, 0xb06d8357u, 0x4ea4fd08u,
};

static const uint32_t bshim_264_tab2[96] = {
    0x19bde91au, 0xb7f562cbu, 0x562cdc7cu, 0xf464562du, 0x929bcfdeu, 0x30d3498fu, 0xcf0ac340u, 0x6d423cf1u,
    0x0b79b6a2u, 0xa9b13053u, 0x47e8aa04u, 0xe62023b5u, 0x84579d66u, 0x228f1717u, 0xc0c690c8u, 0x5efe0a79u,
    0xfd35842au, 0x9b6cfddbu, 0x39a4778cu, 0xd7dbf13du, 0x76136aeeu, 0x144ae49fu, 0xb2825e50u, 0x50b9d801u,
    0xeef151b2u, 0x8d28cb63u, 0x2b604514u, 0xc997bec5u, 0x67cf3876u, 0x0606b227u, 0xa43e2bd8u, 0x4275a589u,
    0xe0ad1f3au, 0x7ee498ebu, 0x1d1c129cu, 0xbb538c4du, 0x598b05feu, 0xf7c27fafu, 0x95f9f960u, 0x34317311u,
    0xd268ecc2u, 0x70a06673u, 0x0ed7e024u, 0xad0f59d5u, 0x4b46d386u, 0xe97e4d37u, 0x87b5c6e8u, 0x25ed4099u,
    0xc424ba4au, 0x625c33fbu, 0x0093adacu, 0x9ecb275du, 0x3d02a10eu, 0xdb3a1abfu, 0x79719470u, 0x17a90e21u,
    0xb5e087d2u, 0x54180183u, 0xf24f7b34u, 0x9086f4e5u, 0x2ebe6e96u, 0xccf5e847u, 0x6b2d61f8u, 0x0964dba9u,
    0xa79c555au, 0x45d3cf0bu, 0xe40b48bcu, 0x8242c26du, 0x207a3c1eu, 0xbeb1b5cfu, 0x5ce92f80u, 0xfb20a931u,
    0x995822e2u, 0x378f9c93u, 0xd5c71644u, 0x73fe8ff5u, 0x123609a6u, 0xb06d8357u, 0x4ea4fd08u, 0xecdc76b9u,
    0x8b13f06au, 0x294b6a1bu, 0xc782e3ccu, 0x65ba5d7du, 0x03f1d72eu, 0xa22950dfu, 0x4060ca90u, 0xde984441u,
    0x7ccfbdf2u, 0x1b0737a3u, 0xb93eb154u, 0x57762b05u, 0xf5ada4b6u, 0x93e51e67u, 0x321c9818u, 0xd05411c9u,
};

static const uint32_t bshim_264_tab3[96] = {
    0x9b6cfddbu, 0x39a4778cu, 0xd7dbf13du, 0x76136aeeu, 0x144ae49fu, 0xb2825e50u, 0x50b9d801u, 0xeef151b2u,
    0x8d28cb63u, 0x2b604514u, 0xc997bec5u, 0x67cf3876u, 0x0606b227u, 0xa43e2bd8u, 0x4275a589u, 0xe0ad1f3au,
    0x7ee498ebu, 0x1d1c129cu, 0xbb538c4du, 0x598b05feu, 0xf7c27fafu, 0x95f9f960u, 0x34317311u, 0xd268ecc2u,
    0x70a06673u, 0x0ed7e024u, 0xad0f59d5u, 0x4b46d386u, 0xe97e4d37u, 0x87b5c6e8u, 0x25ed4099u, 0xc424ba4au,
    0x625c33fbu, 0x0093adacu, 0x9ecb275du, 0x3d02a10eu, 0xdb3a1abfu, 0x79719470u, 0x17a90e21u, 0xb5e087d2u,
    0x54180183u, 0xf24f7b34u, 0x9086f4e5u, 0x2ebe6e96u, 0xccf5e847u, 0x6b2d61f8u, 0x0964dba9u, 0xa79c555au,
    0x45d3cf0bu, 0xe40b48bcu, 0x8242c26du, 0x207a3c1eu, 0xbeb1b5cfu, 0x5ce92f80u, 0xfb20a931u, 0x995822e2u,
    0x378f9c93u, 0xd5c71644u, 0x73fe8ff5u, 0x123609a6u, 0xb06d8357u, 0x4ea4fd08u, 0xecdc76b9u, 0x8b13f06au,
    0x294b6a1bu, 0xc782e3ccu, 0x65ba5d7du, 0x03f1d72eu, 0xa22950dfu, 0x4060ca90u, 0xde984441u, 0x7ccfbdf2u,
    0x1b0737a3u, 0xb93eb154u, 0x57762b05u, 0xf5ada4b6u, 0x93e51e67u, 0x321c9818u, 0xd05411c9u, 0x6e8b8b7au,
    0x0cc3052bu, 0xaafa7edcu, 0x4931f88du, 0xe769723eu, 0x85a0ebefu, 0x23d865a0u, 0xc20fdf51u, 0x60475902u,
    0xfe7ed2b3u, 0x9cb64c64u, 0x3aedc615u, 0xd9253fc6u, 0x775cb977u, 0x15943328u, 0xb3cbacd9u, 0x5203268au,
};

static const uint32_t bshim_264_tab4[96] = {
    0x1d1c129cu, 0xbb538c4du, 0x598b05feu, 0xf7c27fafu, 0x95f9f960u, 0x34317311u, 0xd268ecc2u, 0x70a06673u,
    0x0ed7e024u, 0xad0f59d5u, 0x4b46d386u, 0xe97e4d37u, 0x87b5c6e8u, 0x25ed4099u, 0xc424ba4au, 0x625c33fbu,
    0x0093adacu, 0x9ecb275du, 0x3d02a10eu, 0xdb3a1abfu, 0x79719470u, 0x17a90e21u, 0xb5e087d2u, 0x54180183u,
    0xf24f7b34u, 0x9086f4e5u, 0x2ebe6e96u, 0xccf5e847u, 0x6b2d61f8u, 0x0964dba9u, 0xa79c555au, 0x45d3cf0bu,
    0xe40b48bcu, 0x8242c26du, 0x207a3c1eu, 0xbeb1b5cfu, 0x5ce92f80u, 0xfb20a931u, 0x995822e2u, 0x378f9c93u,
    0xd5c71644u, 0x73fe8ff5u, 0x123609a6u, 0xb06d8357u, 0x4ea4fd08u, 0xecdc76b9u, 0x8b13f06au, 0x294b6a1bu,
    0xc782e3ccu, 0x65ba5d7du, 0x03f1d72eu, 0xa22950dfu, 0x4060ca90u, 0xde984441u, 0x7ccfbdf2u, 0x1b0737a3u,
    0xb93eb154u, 0x57762b05u, 0xf5ada4b6u, 0x93e51e67u, 0x321c9818u, 0xd05411c9u, 0x6e8b8b7au, 0x0cc3052bu,
    0xaafa7edcu, 0x4931f88du, 0xe769723eu, 0x85a0ebefu, 0x23d865a0u, 0xc20fdf51u, 0x60475902u, 0xfe7ed2b3u,
    0x9cb64c64u, 0x3aedc615u, 0xd9253fc6u, 0x775cb977u, 0x15943328u, 0xb3cbacd9u, 0x5203268au, 0xf03aa03bu,
    0x8e7219ecu, 0x2ca9939du, 0xcae10d4eu, 0x691886ffu, 0x075000b0u, 0xa5877a61u, 0x43bef412u, 0xe1f66dc3u,
    0x802de774u, 0x1e656125u, 0xbc9cdad6u, 0x5ad45487u, 0xf90bce38u, 0x974347e9u, 0x357ac19au, 0xd3b23b4bu,
};

static const uint32_t bshim_264_tab5[96] = {
    0x9ecb275du, 0x3d02a10eu, 0xdb3a1abfu, 0x79719470u, 0x17a90e21u, 0xb5e087d2u, 0x54180183u, 0xf24f7b34u,
    0x9086f4e5u, 0x2ebe6e96u, 0xccf5e847u, 0x6b2d61f8u, 0x0964dba9u, 0xa79c555au, 0x45d3cf0bu, 0xe40b48bcu,
    0x8242c26du, 0x207a3c1eu, 0xbeb1b5cfu, 0x5ce92f80u, 0xfb20a931u, 0x995822e2u, 0x378f9c93u, 0xd5c71644u,
    0x73fe8ff5u, 0x123609a6u, 0xb06d8357u, 0x4ea4fd08u, 0xecdc76b9u, 0x8b13f06au, 0x294b6a1bu, 0xc782e3ccu,
    0x65ba5d7du, 0x03f1d72eu, 0xa22950dfu, 0x4060ca90u, 0xde984441u, 0x7ccfbdf2u, 0x1b0737a3u, 0xb93eb154u,
    0x57762b05u, 0xf5ada4b6u, 0x93e51e67u, 0x321c9818u, 0xd05411c9u, 0x6e8b8b7au, 0x0cc3052bu, 0xaafa7edcu,
    0x4931f88du, 0xe769723eu, 0x85a0ebefu, 0x23d865a0u, 0xc20fdf51u, 0x60475902u, 0xfe7ed2b3u, 0x9cb64c64u,
    0x3aedc615u, 0xd9253fc6u, 0x775cb977u, 0x15943328u, 0xb3cbacd9u, 0x5203268au, 0xf03aa03bu, 0x8e7219ecu,
    0x2ca9939du, 0xcae10d4eu, 0x691886ffu, 0x075000b0u, 0xa5877a61u, 0x43bef412u, 0xe1f66dc3u, 0x802de774u,
    0x1e656125u, 0xbc9cdad6u, 0x5ad45487u, 0xf90bce38u, 0x974347e9u, 0x357ac19au, 0xd3b23b4bu, 0x71e9b4fcu,
    0x10212eadu, 0xae58a85eu, 0x4c90220fu, 0xeac79bc0u, 0x88ff1571u, 0x27368f22u, 0xc56e08d3u, 0x63a58284u,
    0x01dcfc35u, 0xa01475e6u, 0x3e4bef97u, 0xdc836948u, 0x7abae2f9u, 0x18f25caau, 0xb729d65bu, 0x5561500cu,
};

static const uint32_t bshim_264_tab6[96] = {
    0x207a3c1eu, 0xbeb1b5cfu, 0x5ce92f80u, 0xfb20a931u, 0x995822e2u, 0x378f9c93u, 0xd5c71644u, 0x73fe8ff5u,
    0x123609a6u, 0xb06d8357u, 0x4ea4fd08u, 0xecdc76b9u, 0x8b13f06au, 0x294b6a1bu, 0xc782e3ccu, 0x65ba5d7du,
    0x03f1d72eu, 0xa22950dfu, 0x4060ca90u, 0xde984441u, 0x7ccfbdf2u, 0x1b0737a3u, 0xb93eb154u, 0x57762b05u,
    0xf5ada4b6u, 0x93e51e67u, 0x321c9818u, 0xd05411c9u, 0x6e8b8b7au, 0x0cc3052bu, 0xaafa7edcu, 0x4931f88du,
    0xe769723eu, 0x85a0ebefu, 0x23d865a0u, 0xc20fdf51u, 0x60475902u, 0xfe7ed2b3u, 0x9cb64c64u, 0x3aedc615u,
    0xd9253fc6u, 0x775cb977u, 0x15943328u, 0xb3cbacd9u, 0x5203268au, 0xf03aa03bu, 0x8e7219ecu, 0x2ca9939du,
    0xcae10d4eu, 0x691886ffu, 0x075000b0u, 0xa5877a61u, 0x43bef412u, 0xe1f66dc3u, 0x802de774u, 0x1e656125u,
    0xbc9cdad6u, 0x5ad45487u, 0xf90bce38u, 0x974347e9u, 0x357ac19au, 0xd3b23b4bu, 0x71e9b4fcu, 0x10212eadu,
    0xae58a85eu, 0x4c90220fu, 0xeac79bc0u, 0x88ff1571u, 0x27368f22u, 0xc56e08d3u, 0x63a58284u, 0x01dcfc35u,
    0xa01475e6u, 0x3e4bef97u, 0xdc836948u, 0x7abae2f9u, 0x18f25caau, 0xb729d65bu, 0x5561500cu, 0xf398c9bdu,
    0x91d0436eu, 0x3007bd1fu, 0xce3f36d0u, 0x6c76b081u, 0x0aae2a32u, 0xa8e5a3e3u, 0x471d1d94u, 0xe5549745u,
    0x838c10f6u, 0x21c38aa7u, 0xbffb0458u, 0x5e327e09u, 0xfc69f7bau, 0x9aa1716bu, 0x38d8eb1cu, 0xd71064cdu,
};

static const uint32_t bshim_264_tab7[96] = {
    0xa22950dfu, 0x4060ca90u, 0xde984441u, 0x7ccfbdf2u, 0x1b0737a3u, 0xb93eb154u, 0x57762b05u, 0xf5ada4b6u,
    0x93e51e67u, 0x321c9818u, 0xd05411c9u, 0x6e8b8b7au, 0x0cc3052bu, 0xaafa7edcu, 0x4931f88du, 0xe769723eu,
    0x85a0ebefu, 0x23d865a0u, 0xc20fdf51u, 0x60475902u, 0xfe7ed2b3u, 0x9cb64c64u, 0x3aedc615u, 0xd9253fc6u,
    0x775cb977u, 0x15943328u, 0xb3cbacd9u, 0x5203268au, 0xf03aa03bu, 0x8e7219ecu, 0x2ca9939du, 0xcae10d4eu,
    0x691886ffu, 0x075000b0u, 0xa5877a61u, 0x43bef412u, 0xe1f66dc3u, 0x802de774u, 0x1e656125u, 0xbc9cdad6u,
    0x5ad45487u, 0xf90bce38u, 0x974347e9u, 0x357ac19au, 0xd3b23b4bu, 0x71e9b4fcu, 0x10212eadu, 0xae58a85eu,
    0x4c90220fu, 0xeac79bc0u, 0x88ff1571u, 0x27368f22u, 0xc56e08d3u, 0x63a58284u, 0x01dcfc35u, 0xa01475e6u,
    0x3e4bef97u, 0xdc836948u, 0x7abae2f9u, 0x18f25caau, 0xb729d65bu, 0x5561500cu, 0xf398c9bdu, 0x91d0436eu,
    0x3007bd1fu, 0xce3f36d0u, 0x6c76b081u, 0x0aae2a32u, 0xa8e5a3e3u, 0x471d1d94u, 0xe5549745u, 0x838c10f6u,
    0x21c38aa7u, 0xbffb0458u, 0x5e327e09u, 0xfc69f7bau, 0x9aa1716bu, 0x38d8eb1cu, 0xd71064cdu, 0x7547de7eu,
    0x137f582fu, 0xb1b6d1e0u, 0x4fee4b91u, 0xee25c542u, 0x8c5d3ef3u, 0x2a94b8a4u, 0xc8cc3255u, 0x6703ac06u,
    0x053b25b7u, 0xa3729f68u, 0x41aa1919u, 0xdfe192cau, 0x7e190c7bu, 0x1c50862cu, 0xba87ffddu, 0x58bf798eu,
};

struct bshim_264_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_264_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_264_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_264_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_264_reset(struct bshim_264_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001fe678u;
    return 0;
}

