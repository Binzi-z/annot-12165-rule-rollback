/* bshim_142 -- board support shim generated from the 0142 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_142_tab0[96] = {
    0xab10978au, 0x4948113bu, 0xe77f8aecu, 0x85b7049du, 0x23ee7e4eu, 0xc225f7ffu, 0x605d71b0u, 0xfe94eb61u,
    0x9ccc6512u, 0x3b03dec3u, 0xd93b5874u, 0x7772d225u, 0x15aa4bd6u, 0xb3e1c587u, 0x52193f38u, 0xf050b8e9u,
    0x8e88329au, 0x2cbfac4bu, 0xcaf725fcu, 0x692e9fadu, 0x0766195eu, 0xa59d930fu, 0x43d50cc0u, 0xe20c8671u,
    0x80440022u, 0x1e7b79d3u, 0xbcb2f384u, 0x5aea6d35u, 0xf921e6e6u, 0x97596097u, 0x3590da48u, 0xd3c853f9u,
    0x71ffcdaau, 0x1037475bu, 0xae6ec10cu, 0x4ca63abdu, 0xeaddb46eu, 0x89152e1fu, 0x274ca7d0u, 0xc5842181u,
    0x63bb9b32u, 0x01f314e3u, 0xa02a8e94u, 0x3e620845u, 0xdc9981f6u, 0x7ad0fba7u, 0x19087558u, 0xb73fef09u,
    0x557768bau, 0xf3aee26bu, 0x91e65c1cu, 0x301dd5cdu, 0xce554f7eu, 0x6c8cc92fu, 0x0ac442e0u, 0xa8fbbc91u,
    0x47333642u, 0xe56aaff3u, 0x83a229a4u, 0x21d9a355u, 0xc0111d06u, 0x5e4896b7u, 0xfc801068u, 0x9ab78a19u,
    0x38ef03cau, 0xd7267d7bu, 0x755df72cu, 0x139570ddu, 0xb1ccea8eu, 0x5004643fu, 0xee3bddf0u, 0x8c7357a1u,
    0x2aaad152u, 0xc8e24b03u, 0x6719c4b4u, 0x05513e65u, 0xa388b816u, 0x41c031c7u, 0xdff7ab78u, 0x7e2f2529u,
    0x1c669edau, 0xba9e188bu, 0x58d5923cu, 0xf70d0bedu, 0x9544859eu, 0x337bff4fu, 0xd1b37900u, 0x6feaf2b1u,
    0x0e226c62u, 0xac59e613u, 0x4a915fc4u, 0xe8c8d975u, 0x87005326u, 0x2537ccd7u, 0xc36f4688u, 0x61a6c039u,
};

static const uint32_t bshim_142_tab1[96] = {
    0x2cbfac4bu, 0xcaf725fcu, 0x692e9fadu, 0x0766195eu, 0xa59d930fu, 0x43d50cc0u, 0xe20c8671u, 0x80440022u,
    0x1e7b79d3u, 0xbcb2f384u, 0x5aea6d35u, 0xf921e6e6u, 0x97596097u, 0x3590da48u, 0xd3c853f9u, 0x71ffcdaau,
    0x1037475bu, 0xae6ec10cu, 0x4ca63abdu, 0xeaddb46eu, 0x89152e1fu, 0x274ca7d0u, 0xc5842181u, 0x63bb9b32u,
    0x01f314e3u, 0xa02a8e94u, 0x3e620845u, 0xdc9981f6u, 0x7ad0fba7u, 0x19087558u, 0xb73fef09u, 0x557768bau,
    0xf3aee26bu, 0x91e65c1cu, 0x301dd5cdu, 0xce554f7eu, 0x6c8cc92fu, 0x0ac442e0u, 0xa8fbbc91u, 0x47333642u,
    0xe56aaff3u, 0x83a229a4u, 0x21d9a355u, 0xc0111d06u, 0x5e4896b7u, 0xfc801068u, 0x9ab78a19u, 0x38ef03cau,
    0xd7267d7bu, 0x755df72cu, 0x139570ddu, 0xb1ccea8eu, 0x5004643fu, 0xee3bddf0u, 0x8c7357a1u, 0x2aaad152u,
    0xc8e24b03u, 0x6719c4b4u, 0x05513e65u, 0xa388b816u, 0x41c031c7u, 0xdff7ab78u, 0x7e2f2529u, 0x1c669edau,
    0xba9e188bu, 0x58d5923cu, 0xf70d0bedu, 0x9544859eu, 0x337bff4fu, 0xd1b37900u, 0x6feaf2b1u, 0x0e226c62u,
    0xac59e613u, 0x4a915fc4u, 0xe8c8d975u, 0x87005326u, 0x2537ccd7u, 0xc36f4688u, 0x61a6c039u, 0xffde39eau,
    0x9e15b39bu, 0x3c4d2d4cu, 0xda84a6fdu, 0x78bc20aeu, 0x16f39a5fu, 0xb52b1410u, 0x53628dc1u, 0xf19a0772u,
    0x8fd18123u, 0x2e08fad4u, 0xcc407485u, 0x6a77ee36u, 0x08af67e7u, 0xa6e6e198u, 0x451e5b49u, 0xe355d4fau,
};

static const uint32_t bshim_142_tab2[96] = {
    0xae6ec10cu, 0x4ca63abdu, 0xeaddb46eu, 0x89152e1fu, 0x274ca7d0u, 0xc5842181u, 0x63bb9b32u, 0x01f314e3u,
    0xa02a8e94u, 0x3e620845u, 0xdc9981f6u, 0x7ad0fba7u, 0x19087558u, 0xb73fef09u, 0x557768bau, 0xf3aee26bu,
    0x91e65c1cu, 0x301dd5cdu, 0xce554f7eu, 0x6c8cc92fu, 0x0ac442e0u, 0xa8fbbc91u, 0x47333642u, 0xe56aaff3u,
    0x83a229a4u, 0x21d9a355u, 0xc0111d06u, 0x5e4896b7u, 0xfc801068u, 0x9ab78a19u, 0x38ef03cau, 0xd7267d7bu,
    0x755df72cu, 0x139570ddu, 0xb1ccea8eu, 0x5004643fu, 0xee3bddf0u, 0x8c7357a1u, 0x2aaad152u, 0xc8e24b03u,
    0x6719c4b4u, 0x05513e65u, 0xa388b816u, 0x41c031c7u, 0xdff7ab78u, 0x7e2f2529u, 0x1c669edau, 0xba9e188bu,
    0x58d5923cu, 0xf70d0bedu, 0x9544859eu, 0x337bff4fu, 0xd1b37900u, 0x6feaf2b1u, 0x0e226c62u, 0xac59e613u,
    0x4a915fc4u, 0xe8c8d975u, 0x87005326u, 0x2537ccd7u, 0xc36f4688u, 0x61a6c039u, 0xffde39eau, 0x9e15b39bu,
    0x3c4d2d4cu, 0xda84a6fdu, 0x78bc20aeu, 0x16f39a5fu, 0xb52b1410u, 0x53628dc1u, 0xf19a0772u, 0x8fd18123u,
    0x2e08fad4u, 0xcc407485u, 0x6a77ee36u, 0x08af67e7u, 0xa6e6e198u, 0x451e5b49u, 0xe355d4fau, 0x818d4eabu,
    0x1fc4c85cu, 0xbdfc420du, 0x5c33bbbeu, 0xfa6b356fu, 0x98a2af20u, 0x36da28d1u, 0xd511a282u, 0x73491c33u,
    0x118095e4u, 0xafb80f95u, 0x4def8946u, 0xec2702f7u, 0x8a5e7ca8u, 0x2895f659u, 0xc6cd700au, 0x6504e9bbu,
};

static const uint32_t bshim_142_tab3[96] = {
    0x301dd5cdu, 0xce554f7eu, 0x6c8cc92fu, 0x0ac442e0u, 0xa8fbbc91u, 0x47333642u, 0xe56aaff3u, 0x83a229a4u,
    0x21d9a355u, 0xc0111d06u, 0x5e4896b7u, 0xfc801068u, 0x9ab78a19u, 0x38ef03cau, 0xd7267d7bu, 0x755df72cu,
    0x139570ddu, 0xb1ccea8eu, 0x5004643fu, 0xee3bddf0u, 0x8c7357a1u, 0x2aaad152u, 0xc8e24b03u, 0x6719c4b4u,
    0x05513e65u, 0xa388b816u, 0x41c031c7u, 0xdff7ab78u, 0x7e2f2529u, 0x1c669edau, 0xba9e188bu, 0x58d5923cu,
    0xf70d0bedu, 0x9544859eu, 0x337bff4fu, 0xd1b37900u, 0x6feaf2b1u, 0x0e226c62u, 0xac59e613u, 0x4a915fc4u,
    0xe8c8d975u, 0x87005326u, 0x2537ccd7u, 0xc36f4688u, 0x61a6c039u, 0xffde39eau, 0x9e15b39bu, 0x3c4d2d4cu,
    0xda84a6fdu, 0x78bc20aeu, 0x16f39a5fu, 0xb52b1410u, 0x53628dc1u, 0xf19a0772u, 0x8fd18123u, 0x2e08fad4u,
    0xcc407485u, 0x6a77ee36u, 0x08af67e7u, 0xa6e6e198u, 0x451e5b49u, 0xe355d4fau, 0x818d4eabu, 0x1fc4c85cu,
    0xbdfc420du, 0x5c33bbbeu, 0xfa6b356fu, 0x98a2af20u, 0x36da28d1u, 0xd511a282u, 0x73491c33u, 0x118095e4u,
    0xafb80f95u, 0x4def8946u, 0xec2702f7u, 0x8a5e7ca8u, 0x2895f659u, 0xc6cd700au, 0x6504e9bbu, 0x033c636cu,
    0xa173dd1du, 0x3fab56ceu, 0xdde2d07fu, 0x7c1a4a30u, 0x1a51c3e1u, 0xb8893d92u, 0x56c0b743u, 0xf4f830f4u,
    0x932faaa5u, 0x31672456u, 0xcf9e9e07u, 0x6dd617b8u, 0x0c0d9169u, 0xaa450b1au, 0x487c84cbu, 0xe6b3fe7cu,
};

static const uint32_t bshim_142_tab4[96] = {
    0xb1ccea8eu, 0x5004643fu, 0xee3bddf0u, 0x8c7357a1u, 0x2aaad152u, 0xc8e24b03u, 0x6719c4b4u, 0x05513e65u,
    0xa388b816u, 0x41c031c7u, 0xdff7ab78u, 0x7e2f2529u, 0x1c669edau, 0xba9e188bu, 0x58d5923cu, 0xf70d0bedu,
    0x9544859eu, 0x337bff4fu, 0xd1b37900u, 0x6feaf2b1u, 0x0e226c62u, 0xac59e613u, 0x4a915fc4u, 0xe8c8d975u,
    0x87005326u, 0x2537ccd7u, 0xc36f4688u, 0x61a6c039u, 0xffde39eau, 0x9e15b39bu, 0x3c4d2d4cu, 0xda84a6fdu,
    0x78bc20aeu, 0x16f39a5fu, 0xb52b1410u, 0x53628dc1u, 0xf19a0772u, 0x8fd18123u, 0x2e08fad4u, 0xcc407485u,
    0x6a77ee36u, 0x08af67e7u, 0xa6e6e198u, 0x451e5b49u, 0xe355d4fau, 0x818d4eabu, 0x1fc4c85cu, 0xbdfc420du,
    0x5c33bbbeu, 0xfa6b356fu, 0x98a2af20u, 0x36da28d1u, 0xd511a282u, 0x73491c33u, 0x118095e4u, 0xafb80f95u,
    0x4def8946u, 0xec2702f7u, 0x8a5e7ca8u, 0x2895f659u, 0xc6cd700au, 0x6504e9bbu, 0x033c636cu, 0xa173dd1du,
    0x3fab56ceu, 0xdde2d07fu, 0x7c1a4a30u, 0x1a51c3e1u, 0xb8893d92u, 0x56c0b743u, 0xf4f830f4u, 0x932faaa5u,
    0x31672456u, 0xcf9e9e07u, 0x6dd617b8u, 0x0c0d9169u, 0xaa450b1au, 0x487c84cbu, 0xe6b3fe7cu, 0x84eb782du,
    0x2322f1deu, 0xc15a6b8fu, 0x5f91e540u, 0xfdc95ef1u, 0x9c00d8a2u, 0x3a385253u, 0xd86fcc04u, 0x76a745b5u,
    0x14debf66u, 0xb3163917u, 0x514db2c8u, 0xef852c79u, 0x8dbca62au, 0x2bf41fdbu, 0xca2b998cu, 0x6863133du,
};

static const uint32_t bshim_142_tab5[96] = {
    0x337bff4fu, 0xd1b37900u, 0x6feaf2b1u, 0x0e226c62u, 0xac59e613u, 0x4a915fc4u, 0xe8c8d975u, 0x87005326u,
    0x2537ccd7u, 0xc36f4688u, 0x61a6c039u, 0xffde39eau, 0x9e15b39bu, 0x3c4d2d4cu, 0xda84a6fdu, 0x78bc20aeu,
    0x16f39a5fu, 0xb52b1410u, 0x53628dc1u, 0xf19a0772u, 0x8fd18123u, 0x2e08fad4u, 0xcc407485u, 0x6a77ee36u,
    0x08af67e7u, 0xa6e6e198u, 0x451e5b49u, 0xe355d4fau, 0x818d4eabu, 0x1fc4c85cu, 0xbdfc420du, 0x5c33bbbeu,
    0xfa6b356fu, 0x98a2af20u, 0x36da28d1u, 0xd511a282u, 0x73491c33u, 0x118095e4u, 0xafb80f95u, 0x4def8946u,
    0xec2702f7u, 0x8a5e7ca8u, 0x2895f659u, 0xc6cd700au, 0x6504e9bbu, 0x033c636cu, 0xa173dd1du, 0x3fab56ceu,
    0xdde2d07fu, 0x7c1a4a30u, 0x1a51c3e1u, 0xb8893d92u, 0x56c0b743u, 0xf4f830f4u, 0x932faaa5u, 0x31672456u,
    0xcf9e9e07u, 0x6dd617b8u, 0x0c0d9169u, 0xaa450b1au, 0x487c84cbu, 0xe6b3fe7cu, 0x84eb782du, 0x2322f1deu,
    0xc15a6b8fu, 0x5f91e540u, 0xfdc95ef1u, 0x9c00d8a2u, 0x3a385253u, 0xd86fcc04u, 0x76a745b5u, 0x14debf66u,
    0xb3163917u, 0x514db2c8u, 0xef852c79u, 0x8dbca62au, 0x2bf41fdbu, 0xca2b998cu, 0x6863133du, 0x069a8ceeu,
    0xa4d2069fu, 0x43098050u, 0xe140fa01u, 0x7f7873b2u, 0x1dafed63u, 0xbbe76714u, 0x5a1ee0c5u, 0xf8565a76u,
    0x968dd427u, 0x34c54dd8u, 0xd2fcc789u, 0x7134413au, 0x0f6bbaebu, 0xada3349cu, 0x4bdaae4du, 0xea1227feu,
};

static const uint32_t bshim_142_tab6[96] = {
    0xb52b1410u, 0x53628dc1u, 0xf19a0772u, 0x8fd18123u, 0x2e08fad4u, 0xcc407485u, 0x6a77ee36u, 0x08af67e7u,
    0xa6e6e198u, 0x451e5b49u, 0xe355d4fau, 0x818d4eabu, 0x1fc4c85cu, 0xbdfc420du, 0x5c33bbbeu, 0xfa6b356fu,
    0x98a2af20u, 0x36da28d1u, 0xd511a282u, 0x73491c33u, 0x118095e4u, 0xafb80f95u, 0x4def8946u, 0xec2702f7u,
    0x8a5e7ca8u, 0x2895f659u, 0xc6cd700au, 0x6504e9bbu, 0x033c636cu, 0xa173dd1du, 0x3fab56ceu, 0xdde2d07fu,
    0x7c1a4a30u, 0x1a51c3e1u, 0xb8893d92u, 0x56c0b743u, 0xf4f830f4u, 0x932faaa5u, 0x31672456u, 0xcf9e9e07u,
    0x6dd617b8u, 0x0c0d9169u, 0xaa450b1au, 0x487c84cbu, 0xe6b3fe7cu, 0x84eb782du, 0x2322f1deu, 0xc15a6b8fu,
    0x5f91e540u, 0xfdc95ef1u, 0x9c00d8a2u, 0x3a385253u, 0xd86fcc04u, 0x76a745b5u, 0x14debf66u, 0xb3163917u,
    0x514db2c8u, 0xef852c79u, 0x8dbca62au, 0x2bf41fdbu, 0xca2b998cu, 0x6863133du, 0x069a8ceeu, 0xa4d2069fu,
    0x43098050u, 0xe140fa01u, 0x7f7873b2u, 0x1dafed63u, 0xbbe76714u, 0x5a1ee0c5u, 0xf8565a76u, 0x968dd427u,
    0x34c54dd8u, 0xd2fcc789u, 0x7134413au, 0x0f6bbaebu, 0xada3349cu, 0x4bdaae4du, 0xea1227feu, 0x8849a1afu,
    0x26811b60u, 0xc4b89511u, 0x62f00ec2u, 0x01278873u, 0x9f5f0224u, 0x3d967bd5u, 0xdbcdf586u, 0x7a056f37u,
    0x183ce8e8u, 0xb6746299u, 0x54abdc4au, 0xf2e355fbu, 0x911acfacu, 0x2f52495du, 0xcd89c30eu, 0x6bc13cbfu,
};

static const uint32_t bshim_142_tab7[96] = {
    0x36da28d1u, 0xd511a282u, 0x73491c33u, 0x118095e4u, 0xafb80f95u, 0x4def8946u, 0xec2702f7u, 0x8a5e7ca8u,
    0x2895f659u, 0xc6cd700au, 0x6504e9bbu, 0x033c636cu, 0xa173dd1du, 0x3fab56ceu, 0xdde2d07fu, 0x7c1a4a30u,
    0x1a51c3e1u, 0xb8893d92u, 0x56c0b743u, 0xf4f830f4u, 0x932faaa5u, 0x31672456u, 0xcf9e9e07u, 0x6dd617b8u,
    0x0c0d9169u, 0xaa450b1au, 0x487c84cbu, 0xe6b3fe7cu, 0x84eb782du, 0x2322f1deu, 0xc15a6b8fu, 0x5f91e540u,
    0xfdc95ef1u, 0x9c00d8a2u, 0x3a385253u, 0xd86fcc04u, 0x76a745b5u, 0x14debf66u, 0xb3163917u, 0x514db2c8u,
    0xef852c79u, 0x8dbca62au, 0x2bf41fdbu, 0xca2b998cu, 0x6863133du, 0x069a8ceeu, 0xa4d2069fu, 0x43098050u,
    0xe140fa01u, 0x7f7873b2u, 0x1dafed63u, 0xbbe76714u, 0x5a1ee0c5u, 0xf8565a76u, 0x968dd427u, 0x34c54dd8u,
    0xd2fcc789u, 0x7134413au, 0x0f6bbaebu, 0xada3349cu, 0x4bdaae4du, 0xea1227feu, 0x8849a1afu, 0x26811b60u,
    0xc4b89511u, 0x62f00ec2u, 0x01278873u, 0x9f5f0224u, 0x3d967bd5u, 0xdbcdf586u, 0x7a056f37u, 0x183ce8e8u,
    0xb6746299u, 0x54abdc4au, 0xf2e355fbu, 0x911acfacu, 0x2f52495du, 0xcd89c30eu, 0x6bc13cbfu, 0x09f8b670u,
    0xa8303021u, 0x4667a9d2u, 0xe49f2383u, 0x82d69d34u, 0x210e16e5u, 0xbf459096u, 0x5d7d0a47u, 0xfbb483f8u,
    0x99ebfda9u, 0x3823775au, 0xd65af10bu, 0x74926abcu, 0x12c9e46du, 0xb1015e1eu, 0x4f38d7cfu, 0xed705180u,
};

struct bshim_142_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_142_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_142_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_142_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_142_reset(struct bshim_142_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00112892u;
    return 0;
}

