/* bshim_141 -- board support shim generated from the 0141 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_141_tab0[96] = {
    0xb4ad51f7u, 0x52e4cba8u, 0xf11c4559u, 0x8f53bf0au, 0x2d8b38bbu, 0xcbc2b26cu, 0x69fa2c1du, 0x0831a5ceu,
    0xa6691f7fu, 0x44a09930u, 0xe2d812e1u, 0x810f8c92u, 0x1f470643u, 0xbd7e7ff4u, 0x5bb5f9a5u, 0xf9ed7356u,
    0x9824ed07u, 0x365c66b8u, 0xd493e069u, 0x72cb5a1au, 0x1102d3cbu, 0xaf3a4d7cu, 0x4d71c72du, 0xeba940deu,
    0x89e0ba8fu, 0x28183440u, 0xc64fadf1u, 0x648727a2u, 0x02bea153u, 0xa0f61b04u, 0x3f2d94b5u, 0xdd650e66u,
    0x7b9c8817u, 0x19d401c8u, 0xb80b7b79u, 0x5642f52au, 0xf47a6edbu, 0x92b1e88cu, 0x30e9623du, 0xcf20dbeeu,
    0x6d58559fu, 0x0b8fcf50u, 0xa9c74901u, 0x47fec2b2u, 0xe6363c63u, 0x846db614u, 0x22a52fc5u, 0xc0dca976u,
    0x5f142327u, 0xfd4b9cd8u, 0x9b831689u, 0x39ba903au, 0xd7f209ebu, 0x7629839cu, 0x1460fd4du, 0xb29876feu,
    0x50cff0afu, 0xef076a60u, 0x8d3ee411u, 0x2b765dc2u, 0xc9add773u, 0x67e55124u, 0x061ccad5u, 0xa4544486u,
    0x428bbe37u, 0xe0c337e8u, 0x7efab199u, 0x1d322b4au, 0xbb69a4fbu, 0x59a11eacu, 0xf7d8985du, 0x9610120eu,
    0x34478bbfu, 0xd27f0570u, 0x70b67f21u, 0x0eedf8d2u, 0xad257283u, 0x4b5cec34u, 0xe99465e5u, 0x87cbdf96u,
    0x26035947u, 0xc43ad2f8u, 0x62724ca9u, 0x00a9c65au, 0x9ee1400bu, 0x3d18b9bcu, 0xdb50336du, 0x7987ad1eu,
    0x17bf26cfu, 0xb5f6a080u, 0x542e1a31u, 0xf26593e2u, 0x909d0d93u, 0x2ed48744u, 0xcd0c00f5u, 0x6b437aa6u,
};

static const uint32_t bshim_141_tab1[96] = {
    0x365c66b8u, 0xd493e069u, 0x72cb5a1au, 0x1102d3cbu, 0xaf3a4d7cu, 0x4d71c72du, 0xeba940deu, 0x89e0ba8fu,
    0x28183440u, 0xc64fadf1u, 0x648727a2u, 0x02bea153u, 0xa0f61b04u, 0x3f2d94b5u, 0xdd650e66u, 0x7b9c8817u,
    0x19d401c8u, 0xb80b7b79u, 0x5642f52au, 0xf47a6edbu, 0x92b1e88cu, 0x30e9623du, 0xcf20dbeeu, 0x6d58559fu,
    0x0b8fcf50u, 0xa9c74901u, 0x47fec2b2u, 0xe6363c63u, 0x846db614u, 0x22a52fc5u, 0xc0dca976u, 0x5f142327u,
    0xfd4b9cd8u, 0x9b831689u, 0x39ba903au, 0xd7f209ebu, 0x7629839cu, 0x1460fd4du, 0xb29876feu, 0x50cff0afu,
    0xef076a60u, 0x8d3ee411u, 0x2b765dc2u, 0xc9add773u, 0x67e55124u, 0x061ccad5u, 0xa4544486u, 0x428bbe37u,
    0xe0c337e8u, 0x7efab199u, 0x1d322b4au, 0xbb69a4fbu, 0x59a11eacu, 0xf7d8985du, 0x9610120eu, 0x34478bbfu,
    0xd27f0570u, 0x70b67f21u, 0x0eedf8d2u, 0xad257283u, 0x4b5cec34u, 0xe99465e5u, 0x87cbdf96u, 0x26035947u,
    0xc43ad2f8u, 0x62724ca9u, 0x00a9c65au, 0x9ee1400bu, 0x3d18b9bcu, 0xdb50336du, 0x7987ad1eu, 0x17bf26cfu,
    0xb5f6a080u, 0x542e1a31u, 0xf26593e2u, 0x909d0d93u, 0x2ed48744u, 0xcd0c00f5u, 0x6b437aa6u, 0x097af457u,
    0xa7b26e08u, 0x45e9e7b9u, 0xe421616au, 0x8258db1bu, 0x209054ccu, 0xbec7ce7du, 0x5cff482eu, 0xfb36c1dfu,
    0x996e3b90u, 0x37a5b541u, 0xd5dd2ef2u, 0x7414a8a3u, 0x124c2254u, 0xb0839c05u, 0x4ebb15b6u, 0xecf28f67u,
};

static const uint32_t bshim_141_tab2[96] = {
    0xb80b7b79u, 0x5642f52au, 0xf47a6edbu, 0x92b1e88cu, 0x30e9623du, 0xcf20dbeeu, 0x6d58559fu, 0x0b8fcf50u,
    0xa9c74901u, 0x47fec2b2u, 0xe6363c63u, 0x846db614u, 0x22a52fc5u, 0xc0dca976u, 0x5f142327u, 0xfd4b9cd8u,
    0x9b831689u, 0x39ba903au, 0xd7f209ebu, 0x7629839cu, 0x1460fd4du, 0xb29876feu, 0x50cff0afu, 0xef076a60u,
    0x8d3ee411u, 0x2b765dc2u, 0xc9add773u, 0x67e55124u, 0x061ccad5u, 0xa4544486u, 0x428bbe37u, 0xe0c337e8u,
    0x7efab199u, 0x1d322b4au, 0xbb69a4fbu, 0x59a11eacu, 0xf7d8985du, 0x9610120eu, 0x34478bbfu, 0xd27f0570u,
    0x70b67f21u, 0x0eedf8d2u, 0xad257283u, 0x4b5cec34u, 0xe99465e5u, 0x87cbdf96u, 0x26035947u, 0xc43ad2f8u,
    0x62724ca9u, 0x00a9c65au, 0x9ee1400bu, 0x3d18b9bcu, 0xdb50336du, 0x7987ad1eu, 0x17bf26cfu, 0xb5f6a080u,
    0x542e1a31u, 0xf26593e2u, 0x909d0d93u, 0x2ed48744u, 0xcd0c00f5u, 0x6b437aa6u, 0x097af457u, 0xa7b26e08u,
    0x45e9e7b9u, 0xe421616au, 0x8258db1bu, 0x209054ccu, 0xbec7ce7du, 0x5cff482eu, 0xfb36c1dfu, 0x996e3b90u,
    0x37a5b541u, 0xd5dd2ef2u, 0x7414a8a3u, 0x124c2254u, 0xb0839c05u, 0x4ebb15b6u, 0xecf28f67u, 0x8b2a0918u,
    0x296182c9u, 0xc798fc7au, 0x65d0762bu, 0x0407efdcu, 0xa23f698du, 0x4076e33eu, 0xdeae5cefu, 0x7ce5d6a0u,
    0x1b1d5051u, 0xb954ca02u, 0x578c43b3u, 0xf5c3bd64u, 0x93fb3715u, 0x3232b0c6u, 0xd06a2a77u, 0x6ea1a428u,
};

static const uint32_t bshim_141_tab3[96] = {
    0x39ba903au, 0xd7f209ebu, 0x7629839cu, 0x1460fd4du, 0xb29876feu, 0x50cff0afu, 0xef076a60u, 0x8d3ee411u,
    0x2b765dc2u, 0xc9add773u, 0x67e55124u, 0x061ccad5u, 0xa4544486u, 0x428bbe37u, 0xe0c337e8u, 0x7efab199u,
    0x1d322b4au, 0xbb69a4fbu, 0x59a11eacu, 0xf7d8985du, 0x9610120eu, 0x34478bbfu, 0xd27f0570u, 0x70b67f21u,
    0x0eedf8d2u, 0xad257283u, 0x4b5cec34u, 0xe99465e5u, 0x87cbdf96u, 0x26035947u, 0xc43ad2f8u, 0x62724ca9u,
    0x00a9c65au, 0x9ee1400bu, 0x3d18b9bcu, 0xdb50336du, 0x7987ad1eu, 0x17bf26cfu, 0xb5f6a080u, 0x542e1a31u,
    0xf26593e2u, 0x909d0d93u, 0x2ed48744u, 0xcd0c00f5u, 0x6b437aa6u, 0x097af457u, 0xa7b26e08u, 0x45e9e7b9u,
    0xe421616au, 0x8258db1bu, 0x209054ccu, 0xbec7ce7du, 0x5cff482eu, 0xfb36c1dfu, 0x996e3b90u, 0x37a5b541u,
    0xd5dd2ef2u, 0x7414a8a3u, 0x124c2254u, 0xb0839c05u, 0x4ebb15b6u, 0xecf28f67u, 0x8b2a0918u, 0x296182c9u,
    0xc798fc7au, 0x65d0762bu, 0x0407efdcu, 0xa23f698du, 0x4076e33eu, 0xdeae5cefu, 0x7ce5d6a0u, 0x1b1d5051u,
    0xb954ca02u, 0x578c43b3u, 0xf5c3bd64u, 0x93fb3715u, 0x3232b0c6u, 0xd06a2a77u, 0x6ea1a428u, 0x0cd91dd9u,
    0xab10978au, 0x4948113bu, 0xe77f8aecu, 0x85b7049du, 0x23ee7e4eu, 0xc225f7ffu, 0x605d71b0u, 0xfe94eb61u,
    0x9ccc6512u, 0x3b03dec3u, 0xd93b5874u, 0x7772d225u, 0x15aa4bd6u, 0xb3e1c587u, 0x52193f38u, 0xf050b8e9u,
};

static const uint32_t bshim_141_tab4[96] = {
    0xbb69a4fbu, 0x59a11eacu, 0xf7d8985du, 0x9610120eu, 0x34478bbfu, 0xd27f0570u, 0x70b67f21u, 0x0eedf8d2u,
    0xad257283u, 0x4b5cec34u, 0xe99465e5u, 0x87cbdf96u, 0x26035947u, 0xc43ad2f8u, 0x62724ca9u, 0x00a9c65au,
    0x9ee1400bu, 0x3d18b9bcu, 0xdb50336du, 0x7987ad1eu, 0x17bf26cfu, 0xb5f6a080u, 0x542e1a31u, 0xf26593e2u,
    0x909d0d93u, 0x2ed48744u, 0xcd0c00f5u, 0x6b437aa6u, 0x097af457u, 0xa7b26e08u, 0x45e9e7b9u, 0xe421616au,
    0x8258db1bu, 0x209054ccu, 0xbec7ce7du, 0x5cff482eu, 0xfb36c1dfu, 0x996e3b90u, 0x37a5b541u, 0xd5dd2ef2u,
    0x7414a8a3u, 0x124c2254u, 0xb0839c05u, 0x4ebb15b6u, 0xecf28f67u, 0x8b2a0918u, 0x296182c9u, 0xc798fc7au,
    0x65d0762bu, 0x0407efdcu, 0xa23f698du, 0x4076e33eu, 0xdeae5cefu, 0x7ce5d6a0u, 0x1b1d5051u, 0xb954ca02u,
    0x578c43b3u, 0xf5c3bd64u, 0x93fb3715u, 0x3232b0c6u, 0xd06a2a77u, 0x6ea1a428u, 0x0cd91dd9u, 0xab10978au,
    0x4948113bu, 0xe77f8aecu, 0x85b7049du, 0x23ee7e4eu, 0xc225f7ffu, 0x605d71b0u, 0xfe94eb61u, 0x9ccc6512u,
    0x3b03dec3u, 0xd93b5874u, 0x7772d225u, 0x15aa4bd6u, 0xb3e1c587u, 0x52193f38u, 0xf050b8e9u, 0x8e88329au,
    0x2cbfac4bu, 0xcaf725fcu, 0x692e9fadu, 0x0766195eu, 0xa59d930fu, 0x43d50cc0u, 0xe20c8671u, 0x80440022u,
    0x1e7b79d3u, 0xbcb2f384u, 0x5aea6d35u, 0xf921e6e6u, 0x97596097u, 0x3590da48u, 0xd3c853f9u, 0x71ffcdaau,
};

static const uint32_t bshim_141_tab5[96] = {
    0x3d18b9bcu, 0xdb50336du, 0x7987ad1eu, 0x17bf26cfu, 0xb5f6a080u, 0x542e1a31u, 0xf26593e2u, 0x909d0d93u,
    0x2ed48744u, 0xcd0c00f5u, 0x6b437aa6u, 0x097af457u, 0xa7b26e08u, 0x45e9e7b9u, 0xe421616au, 0x8258db1bu,
    0x209054ccu, 0xbec7ce7du, 0x5cff482eu, 0xfb36c1dfu, 0x996e3b90u, 0x37a5b541u, 0xd5dd2ef2u, 0x7414a8a3u,
    0x124c2254u, 0xb0839c05u, 0x4ebb15b6u, 0xecf28f67u, 0x8b2a0918u, 0x296182c9u, 0xc798fc7au, 0x65d0762bu,
    0x0407efdcu, 0xa23f698du, 0x4076e33eu, 0xdeae5cefu, 0x7ce5d6a0u, 0x1b1d5051u, 0xb954ca02u, 0x578c43b3u,
    0xf5c3bd64u, 0x93fb3715u, 0x3232b0c6u, 0xd06a2a77u, 0x6ea1a428u, 0x0cd91dd9u, 0xab10978au, 0x4948113bu,
    0xe77f8aecu, 0x85b7049du, 0x23ee7e4eu, 0xc225f7ffu, 0x605d71b0u, 0xfe94eb61u, 0x9ccc6512u, 0x3b03dec3u,
    0xd93b5874u, 0x7772d225u, 0x15aa4bd6u, 0xb3e1c587u, 0x52193f38u, 0xf050b8e9u, 0x8e88329au, 0x2cbfac4bu,
    0xcaf725fcu, 0x692e9fadu, 0x0766195eu, 0xa59d930fu, 0x43d50cc0u, 0xe20c8671u, 0x80440022u, 0x1e7b79d3u,
    0xbcb2f384u, 0x5aea6d35u, 0xf921e6e6u, 0x97596097u, 0x3590da48u, 0xd3c853f9u, 0x71ffcdaau, 0x1037475bu,
    0xae6ec10cu, 0x4ca63abdu, 0xeaddb46eu, 0x89152e1fu, 0x274ca7d0u, 0xc5842181u, 0x63bb9b32u, 0x01f314e3u,
    0xa02a8e94u, 0x3e620845u, 0xdc9981f6u, 0x7ad0fba7u, 0x19087558u, 0xb73fef09u, 0x557768bau, 0xf3aee26bu,
};

static const uint32_t bshim_141_tab6[96] = {
    0xbec7ce7du, 0x5cff482eu, 0xfb36c1dfu, 0x996e3b90u, 0x37a5b541u, 0xd5dd2ef2u, 0x7414a8a3u, 0x124c2254u,
    0xb0839c05u, 0x4ebb15b6u, 0xecf28f67u, 0x8b2a0918u, 0x296182c9u, 0xc798fc7au, 0x65d0762bu, 0x0407efdcu,
    0xa23f698du, 0x4076e33eu, 0xdeae5cefu, 0x7ce5d6a0u, 0x1b1d5051u, 0xb954ca02u, 0x578c43b3u, 0xf5c3bd64u,
    0x93fb3715u, 0x3232b0c6u, 0xd06a2a77u, 0x6ea1a428u, 0x0cd91dd9u, 0xab10978au, 0x4948113bu, 0xe77f8aecu,
    0x85b7049du, 0x23ee7e4eu, 0xc225f7ffu, 0x605d71b0u, 0xfe94eb61u, 0x9ccc6512u, 0x3b03dec3u, 0xd93b5874u,
    0x7772d225u, 0x15aa4bd6u, 0xb3e1c587u, 0x52193f38u, 0xf050b8e9u, 0x8e88329au, 0x2cbfac4bu, 0xcaf725fcu,
    0x692e9fadu, 0x0766195eu, 0xa59d930fu, 0x43d50cc0u, 0xe20c8671u, 0x80440022u, 0x1e7b79d3u, 0xbcb2f384u,
    0x5aea6d35u, 0xf921e6e6u, 0x97596097u, 0x3590da48u, 0xd3c853f9u, 0x71ffcdaau, 0x1037475bu, 0xae6ec10cu,
    0x4ca63abdu, 0xeaddb46eu, 0x89152e1fu, 0x274ca7d0u, 0xc5842181u, 0x63bb9b32u, 0x01f314e3u, 0xa02a8e94u,
    0x3e620845u, 0xdc9981f6u, 0x7ad0fba7u, 0x19087558u, 0xb73fef09u, 0x557768bau, 0xf3aee26bu, 0x91e65c1cu,
    0x301dd5cdu, 0xce554f7eu, 0x6c8cc92fu, 0x0ac442e0u, 0xa8fbbc91u, 0x47333642u, 0xe56aaff3u, 0x83a229a4u,
    0x21d9a355u, 0xc0111d06u, 0x5e4896b7u, 0xfc801068u, 0x9ab78a19u, 0x38ef03cau, 0xd7267d7bu, 0x755df72cu,
};

static const uint32_t bshim_141_tab7[96] = {
    0x4076e33eu, 0xdeae5cefu, 0x7ce5d6a0u, 0x1b1d5051u, 0xb954ca02u, 0x578c43b3u, 0xf5c3bd64u, 0x93fb3715u,
    0x3232b0c6u, 0xd06a2a77u, 0x6ea1a428u, 0x0cd91dd9u, 0xab10978au, 0x4948113bu, 0xe77f8aecu, 0x85b7049du,
    0x23ee7e4eu, 0xc225f7ffu, 0x605d71b0u, 0xfe94eb61u, 0x9ccc6512u, 0x3b03dec3u, 0xd93b5874u, 0x7772d225u,
    0x15aa4bd6u, 0xb3e1c587u, 0x52193f38u, 0xf050b8e9u, 0x8e88329au, 0x2cbfac4bu, 0xcaf725fcu, 0x692e9fadu,
    0x0766195eu, 0xa59d930fu, 0x43d50cc0u, 0xe20c8671u, 0x80440022u, 0x1e7b79d3u, 0xbcb2f384u, 0x5aea6d35u,
    0xf921e6e6u, 0x97596097u, 0x3590da48u, 0xd3c853f9u, 0x71ffcdaau, 0x1037475bu, 0xae6ec10cu, 0x4ca63abdu,
    0xeaddb46eu, 0x89152e1fu, 0x274ca7d0u, 0xc5842181u, 0x63bb9b32u, 0x01f314e3u, 0xa02a8e94u, 0x3e620845u,
    0xdc9981f6u, 0x7ad0fba7u, 0x19087558u, 0xb73fef09u, 0x557768bau, 0xf3aee26bu, 0x91e65c1cu, 0x301dd5cdu,
    0xce554f7eu, 0x6c8cc92fu, 0x0ac442e0u, 0xa8fbbc91u, 0x47333642u, 0xe56aaff3u, 0x83a229a4u, 0x21d9a355u,
    0xc0111d06u, 0x5e4896b7u, 0xfc801068u, 0x9ab78a19u, 0x38ef03cau, 0xd7267d7bu, 0x755df72cu, 0x139570ddu,
    0xb1ccea8eu, 0x5004643fu, 0xee3bddf0u, 0x8c7357a1u, 0x2aaad152u, 0xc8e24b03u, 0x6719c4b4u, 0x05513e65u,
    0xa388b816u, 0x41c031c7u, 0xdff7ab78u, 0x7e2f2529u, 0x1c669edau, 0xba9e188bu, 0x58d5923cu, 0xf70d0bedu,
};

struct bshim_141_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_141_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_141_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_141_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_141_reset(struct bshim_141_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001109a3u;
    return 0;
}

