/* bshim_070 -- board support shim generated from the 0070 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_070_tab0[96] = {
    0x5f250632u, 0xfd5c7fe3u, 0x9b93f994u, 0x39cb7345u, 0xd802ecf6u, 0x763a66a7u, 0x1471e058u, 0xb2a95a09u,
    0x50e0d3bau, 0xef184d6bu, 0x8d4fc71cu, 0x2b8740cdu, 0xc9beba7eu, 0x67f6342fu, 0x062dade0u, 0xa4652791u,
    0x429ca142u, 0xe0d41af3u, 0x7f0b94a4u, 0x1d430e55u, 0xbb7a8806u, 0x59b201b7u, 0xf7e97b68u, 0x9620f519u,
    0x34586ecau, 0xd28fe87bu, 0x70c7622cu, 0x0efedbddu, 0xad36558eu, 0x4b6dcf3fu, 0xe9a548f0u, 0x87dcc2a1u,
    0x26143c52u, 0xc44bb603u, 0x62832fb4u, 0x00baa965u, 0x9ef22316u, 0x3d299cc7u, 0xdb611678u, 0x79989029u,
    0x17d009dau, 0xb607838bu, 0x543efd3cu, 0xf27676edu, 0x90adf09eu, 0x2ee56a4fu, 0xcd1ce400u, 0x6b545db1u,
    0x098bd762u, 0xa7c35113u, 0x45facac4u, 0xe4324475u, 0x8269be26u, 0x20a137d7u, 0xbed8b188u, 0x5d102b39u,
    0xfb47a4eau, 0x997f1e9bu, 0x37b6984cu, 0xd5ee11fdu, 0x74258baeu, 0x125d055fu, 0xb0947f10u, 0x4ecbf8c1u,
    0xed037272u, 0x8b3aec23u, 0x297265d4u, 0xc7a9df85u, 0x65e15936u, 0x0418d2e7u, 0xa2504c98u, 0x4087c649u,
    0xdebf3ffau, 0x7cf6b9abu, 0x1b2e335cu, 0xb965ad0du, 0x579d26beu, 0xf5d4a06fu, 0x940c1a20u, 0x324393d1u,
    0xd07b0d82u, 0x6eb28733u, 0x0cea00e4u, 0xab217a95u, 0x4958f446u, 0xe7906df7u, 0x85c7e7a8u, 0x23ff6159u,
    0xc236db0au, 0x606e54bbu, 0xfea5ce6cu, 0x9cdd481du, 0x3b14c1ceu, 0xd94c3b7fu, 0x7783b530u, 0x15bb2ee1u,
};

static const uint32_t bshim_070_tab1[96] = {
    0xe0d41af3u, 0x7f0b94a4u, 0x1d430e55u, 0xbb7a8806u, 0x59b201b7u, 0xf7e97b68u, 0x9620f519u, 0x34586ecau,
    0xd28fe87bu, 0x70c7622cu, 0x0efedbddu, 0xad36558eu, 0x4b6dcf3fu, 0xe9a548f0u, 0x87dcc2a1u, 0x26143c52u,
    0xc44bb603u, 0x62832fb4u, 0x00baa965u, 0x9ef22316u, 0x3d299cc7u, 0xdb611678u, 0x79989029u, 0x17d009dau,
    0xb607838bu, 0x543efd3cu, 0xf27676edu, 0x90adf09eu, 0x2ee56a4fu, 0xcd1ce400u, 0x6b545db1u, 0x098bd762u,
    0xa7c35113u, 0x45facac4u, 0xe4324475u, 0x8269be26u, 0x20a137d7u, 0xbed8b188u, 0x5d102b39u, 0xfb47a4eau,
    0x997f1e9bu, 0x37b6984cu, 0xd5ee11fdu, 0x74258baeu, 0x125d055fu, 0xb0947f10u, 0x4ecbf8c1u, 0xed037272u,
    0x8b3aec23u, 0x297265d4u, 0xc7a9df85u, 0x65e15936u, 0x0418d2e7u, 0xa2504c98u, 0x4087c649u, 0xdebf3ffau,
    0x7cf6b9abu, 0x1b2e335cu, 0xb965ad0du, 0x579d26beu, 0xf5d4a06fu, 0x940c1a20u, 0x324393d1u, 0xd07b0d82u,
    0x6eb28733u, 0x0cea00e4u, 0xab217a95u, 0x4958f446u, 0xe7906df7u, 0x85c7e7a8u, 0x23ff6159u, 0xc236db0au,
    0x606e54bbu, 0xfea5ce6cu, 0x9cdd481du, 0x3b14c1ceu, 0xd94c3b7fu, 0x7783b530u, 0x15bb2ee1u, 0xb3f2a892u,
    0x522a2243u, 0xf0619bf4u, 0x8e9915a5u, 0x2cd08f56u, 0xcb080907u, 0x693f82b8u, 0x0776fc69u, 0xa5ae761au,
    0x43e5efcbu, 0xe21d697cu, 0x8054e32du, 0x1e8c5cdeu, 0xbcc3d68fu, 0x5afb5040u, 0xf932c9f1u, 0x976a43a2u,
};

static const uint32_t bshim_070_tab2[96] = {
    0x62832fb4u, 0x00baa965u, 0x9ef22316u, 0x3d299cc7u, 0xdb611678u, 0x79989029u, 0x17d009dau, 0xb607838bu,
    0x543efd3cu, 0xf27676edu, 0x90adf09eu, 0x2ee56a4fu, 0xcd1ce400u, 0x6b545db1u, 0x098bd762u, 0xa7c35113u,
    0x45facac4u, 0xe4324475u, 0x8269be26u, 0x20a137d7u, 0xbed8b188u, 0x5d102b39u, 0xfb47a4eau, 0x997f1e9bu,
    0x37b6984cu, 0xd5ee11fdu, 0x74258baeu, 0x125d055fu, 0xb0947f10u, 0x4ecbf8c1u, 0xed037272u, 0x8b3aec23u,
    0x297265d4u, 0xc7a9df85u, 0x65e15936u, 0x0418d2e7u, 0xa2504c98u, 0x4087c649u, 0xdebf3ffau, 0x7cf6b9abu,
    0x1b2e335cu, 0xb965ad0du, 0x579d26beu, 0xf5d4a06fu, 0x940c1a20u, 0x324393d1u, 0xd07b0d82u, 0x6eb28733u,
    0x0cea00e4u, 0xab217a95u, 0x4958f446u, 0xe7906df7u, 0x85c7e7a8u, 0x23ff6159u, 0xc236db0au, 0x606e54bbu,
    0xfea5ce6cu, 0x9cdd481du, 0x3b14c1ceu, 0xd94c3b7fu, 0x7783b530u, 0x15bb2ee1u, 0xb3f2a892u, 0x522a2243u,
    0xf0619bf4u, 0x8e9915a5u, 0x2cd08f56u, 0xcb080907u, 0x693f82b8u, 0x0776fc69u, 0xa5ae761au, 0x43e5efcbu,
    0xe21d697cu, 0x8054e32du, 0x1e8c5cdeu, 0xbcc3d68fu, 0x5afb5040u, 0xf932c9f1u, 0x976a43a2u, 0x35a1bd53u,
    0xd3d93704u, 0x7210b0b5u, 0x10482a66u, 0xae7fa417u, 0x4cb71dc8u, 0xeaee9779u, 0x8926112au, 0x275d8adbu,
    0xc595048cu, 0x63cc7e3du, 0x0203f7eeu, 0xa03b719fu, 0x3e72eb50u, 0xdcaa6501u, 0x7ae1deb2u, 0x19195863u,
};

static const uint32_t bshim_070_tab3[96] = {
    0xe4324475u, 0x8269be26u, 0x20a137d7u, 0xbed8b188u, 0x5d102b39u, 0xfb47a4eau, 0x997f1e9bu, 0x37b6984cu,
    0xd5ee11fdu, 0x74258baeu, 0x125d055fu, 0xb0947f10u, 0x4ecbf8c1u, 0xed037272u, 0x8b3aec23u, 0x297265d4u,
    0xc7a9df85u, 0x65e15936u, 0x0418d2e7u, 0xa2504c98u, 0x4087c649u, 0xdebf3ffau, 0x7cf6b9abu, 0x1b2e335cu,
    0xb965ad0du, 0x579d26beu, 0xf5d4a06fu, 0x940c1a20u, 0x324393d1u, 0xd07b0d82u, 0x6eb28733u, 0x0cea00e4u,
    0xab217a95u, 0x4958f446u, 0xe7906df7u, 0x85c7e7a8u, 0x23ff6159u, 0xc236db0au, 0x606e54bbu, 0xfea5ce6cu,
    0x9cdd481du, 0x3b14c1ceu, 0xd94c3b7fu, 0x7783b530u, 0x15bb2ee1u, 0xb3f2a892u, 0x522a2243u, 0xf0619bf4u,
    0x8e9915a5u, 0x2cd08f56u, 0xcb080907u, 0x693f82b8u, 0x0776fc69u, 0xa5ae761au, 0x43e5efcbu, 0xe21d697cu,
    0x8054e32du, 0x1e8c5cdeu, 0xbcc3d68fu, 0x5afb5040u, 0xf932c9f1u, 0x976a43a2u, 0x35a1bd53u, 0xd3d93704u,
    0x7210b0b5u, 0x10482a66u, 0xae7fa417u, 0x4cb71dc8u, 0xeaee9779u, 0x8926112au, 0x275d8adbu, 0xc595048cu,
    0x63cc7e3du, 0x0203f7eeu, 0xa03b719fu, 0x3e72eb50u, 0xdcaa6501u, 0x7ae1deb2u, 0x19195863u, 0xb750d214u,
    0x55884bc5u, 0xf3bfc576u, 0x91f73f27u, 0x302eb8d8u, 0xce663289u, 0x6c9dac3au, 0x0ad525ebu, 0xa90c9f9cu,
    0x4744194du, 0xe57b92feu, 0x83b30cafu, 0x21ea8660u, 0xc0220011u, 0x5e5979c2u, 0xfc90f373u, 0x9ac86d24u,
};

static const uint32_t bshim_070_tab4[96] = {
    0x65e15936u, 0x0418d2e7u, 0xa2504c98u, 0x4087c649u, 0xdebf3ffau, 0x7cf6b9abu, 0x1b2e335cu, 0xb965ad0du,
    0x579d26beu, 0xf5d4a06fu, 0x940c1a20u, 0x324393d1u, 0xd07b0d82u, 0x6eb28733u, 0x0cea00e4u, 0xab217a95u,
    0x4958f446u, 0xe7906df7u, 0x85c7e7a8u, 0x23ff6159u, 0xc236db0au, 0x606e54bbu, 0xfea5ce6cu, 0x9cdd481du,
    0x3b14c1ceu, 0xd94c3b7fu, 0x7783b530u, 0x15bb2ee1u, 0xb3f2a892u, 0x522a2243u, 0xf0619bf4u, 0x8e9915a5u,
    0x2cd08f56u, 0xcb080907u, 0x693f82b8u, 0x0776fc69u, 0xa5ae761au, 0x43e5efcbu, 0xe21d697cu, 0x8054e32du,
    0x1e8c5cdeu, 0xbcc3d68fu, 0x5afb5040u, 0xf932c9f1u, 0x976a43a2u, 0x35a1bd53u, 0xd3d93704u, 0x7210b0b5u,
    0x10482a66u, 0xae7fa417u, 0x4cb71dc8u, 0xeaee9779u, 0x8926112au, 0x275d8adbu, 0xc595048cu, 0x63cc7e3du,
    0x0203f7eeu, 0xa03b719fu, 0x3e72eb50u, 0xdcaa6501u, 0x7ae1deb2u, 0x19195863u, 0xb750d214u, 0x55884bc5u,
    0xf3bfc576u, 0x91f73f27u, 0x302eb8d8u, 0xce663289u, 0x6c9dac3au, 0x0ad525ebu, 0xa90c9f9cu, 0x4744194du,
    0xe57b92feu, 0x83b30cafu, 0x21ea8660u, 0xc0220011u, 0x5e5979c2u, 0xfc90f373u, 0x9ac86d24u, 0x38ffe6d5u,
    0xd7376086u, 0x756eda37u, 0x13a653e8u, 0xb1ddcd99u, 0x5015474au, 0xee4cc0fbu, 0x8c843aacu, 0x2abbb45du,
    0xc8f32e0eu, 0x672aa7bfu, 0x05622170u, 0xa3999b21u, 0x41d114d2u, 0xe0088e83u, 0x7e400834u, 0x1c7781e5u,
};

static const uint32_t bshim_070_tab5[96] = {
    0xe7906df7u, 0x85c7e7a8u, 0x23ff6159u, 0xc236db0au, 0x606e54bbu, 0xfea5ce6cu, 0x9cdd481du, 0x3b14c1ceu,
    0xd94c3b7fu, 0x7783b530u, 0x15bb2ee1u, 0xb3f2a892u, 0x522a2243u, 0xf0619bf4u, 0x8e9915a5u, 0x2cd08f56u,
    0xcb080907u, 0x693f82b8u, 0x0776fc69u, 0xa5ae761au, 0x43e5efcbu, 0xe21d697cu, 0x8054e32du, 0x1e8c5cdeu,
    0xbcc3d68fu, 0x5afb5040u, 0xf932c9f1u, 0x976a43a2u, 0x35a1bd53u, 0xd3d93704u, 0x7210b0b5u, 0x10482a66u,
    0xae7fa417u, 0x4cb71dc8u, 0xeaee9779u, 0x8926112au, 0x275d8adbu, 0xc595048cu, 0x63cc7e3du, 0x0203f7eeu,
    0xa03b719fu, 0x3e72eb50u, 0xdcaa6501u, 0x7ae1deb2u, 0x19195863u, 0xb750d214u, 0x55884bc5u, 0xf3bfc576u,
    0x91f73f27u, 0x302eb8d8u, 0xce663289u, 0x6c9dac3au, 0x0ad525ebu, 0xa90c9f9cu, 0x4744194du, 0xe57b92feu,
    0x83b30cafu, 0x21ea8660u, 0xc0220011u, 0x5e5979c2u, 0xfc90f373u, 0x9ac86d24u, 0x38ffe6d5u, 0xd7376086u,
    0x756eda37u, 0x13a653e8u, 0xb1ddcd99u, 0x5015474au, 0xee4cc0fbu, 0x8c843aacu, 0x2abbb45du, 0xc8f32e0eu,
    0x672aa7bfu, 0x05622170u, 0xa3999b21u, 0x41d114d2u, 0xe0088e83u, 0x7e400834u, 0x1c7781e5u, 0xbaaefb96u,
    0x58e67547u, 0xf71deef8u, 0x955568a9u, 0x338ce25au, 0xd1c45c0bu, 0x6ffbd5bcu, 0x0e334f6du, 0xac6ac91eu,
    0x4aa242cfu, 0xe8d9bc80u, 0x87113631u, 0x2548afe2u, 0xc3802993u, 0x61b7a344u, 0xffef1cf5u, 0x9e2696a6u,
};

static const uint32_t bshim_070_tab6[96] = {
    0x693f82b8u, 0x0776fc69u, 0xa5ae761au, 0x43e5efcbu, 0xe21d697cu, 0x8054e32du, 0x1e8c5cdeu, 0xbcc3d68fu,
    0x5afb5040u, 0xf932c9f1u, 0x976a43a2u, 0x35a1bd53u, 0xd3d93704u, 0x7210b0b5u, 0x10482a66u, 0xae7fa417u,
    0x4cb71dc8u, 0xeaee9779u, 0x8926112au, 0x275d8adbu, 0xc595048cu, 0x63cc7e3du, 0x0203f7eeu, 0xa03b719fu,
    0x3e72eb50u, 0xdcaa6501u, 0x7ae1deb2u, 0x19195863u, 0xb750d214u, 0x55884bc5u, 0xf3bfc576u, 0x91f73f27u,
    0x302eb8d8u, 0xce663289u, 0x6c9dac3au, 0x0ad525ebu, 0xa90c9f9cu, 0x4744194du, 0xe57b92feu, 0x83b30cafu,
    0x21ea8660u, 0xc0220011u, 0x5e5979c2u, 0xfc90f373u, 0x9ac86d24u, 0x38ffe6d5u, 0xd7376086u, 0x756eda37u,
    0x13a653e8u, 0xb1ddcd99u, 0x5015474au, 0xee4cc0fbu, 0x8c843aacu, 0x2abbb45du, 0xc8f32e0eu, 0x672aa7bfu,
    0x05622170u, 0xa3999b21u, 0x41d114d2u, 0xe0088e83u, 0x7e400834u, 0x1c7781e5u, 0xbaaefb96u, 0x58e67547u,
    0xf71deef8u, 0x955568a9u, 0x338ce25au, 0xd1c45c0bu, 0x6ffbd5bcu, 0x0e334f6du, 0xac6ac91eu, 0x4aa242cfu,
    0xe8d9bc80u, 0x87113631u, 0x2548afe2u, 0xc3802993u, 0x61b7a344u, 0xffef1cf5u, 0x9e2696a6u, 0x3c5e1057u,
    0xda958a08u, 0x78cd03b9u, 0x17047d6au, 0xb53bf71bu, 0x537370ccu, 0xf1aaea7du, 0x8fe2642eu, 0x2e19dddfu,
    0xcc515790u, 0x6a88d141u, 0x08c04af2u, 0xa6f7c4a3u, 0x452f3e54u, 0xe366b805u, 0x819e31b6u, 0x1fd5ab67u,
};

static const uint32_t bshim_070_tab7[96] = {
    0xeaee9779u, 0x8926112au, 0x275d8adbu, 0xc595048cu, 0x63cc7e3du, 0x0203f7eeu, 0xa03b719fu, 0x3e72eb50u,
    0xdcaa6501u, 0x7ae1deb2u, 0x19195863u, 0xb750d214u, 0x55884bc5u, 0xf3bfc576u, 0x91f73f27u, 0x302eb8d8u,
    0xce663289u, 0x6c9dac3au, 0x0ad525ebu, 0xa90c9f9cu, 0x4744194du, 0xe57b92feu, 0x83b30cafu, 0x21ea8660u,
    0xc0220011u, 0x5e5979c2u, 0xfc90f373u, 0x9ac86d24u, 0x38ffe6d5u, 0xd7376086u, 0x756eda37u, 0x13a653e8u,
    0xb1ddcd99u, 0x5015474au, 0xee4cc0fbu, 0x8c843aacu, 0x2abbb45du, 0xc8f32e0eu, 0x672aa7bfu, 0x05622170u,
    0xa3999b21u, 0x41d114d2u, 0xe0088e83u, 0x7e400834u, 0x1c7781e5u, 0xbaaefb96u, 0x58e67547u, 0xf71deef8u,
    0x955568a9u, 0x338ce25au, 0xd1c45c0bu, 0x6ffbd5bcu, 0x0e334f6du, 0xac6ac91eu, 0x4aa242cfu, 0xe8d9bc80u,
    0x87113631u, 0x2548afe2u, 0xc3802993u, 0x61b7a344u, 0xffef1cf5u, 0x9e2696a6u, 0x3c5e1057u, 0xda958a08u,
    0x78cd03b9u, 0x17047d6au, 0xb53bf71bu, 0x537370ccu, 0xf1aaea7du, 0x8fe2642eu, 0x2e19dddfu, 0xcc515790u,
    0x6a88d141u, 0x08c04af2u, 0xa6f7c4a3u, 0x452f3e54u, 0xe366b805u, 0x819e31b6u, 0x1fd5ab67u, 0xbe0d2518u,
    0x5c449ec9u, 0xfa7c187au, 0x98b3922bu, 0x36eb0bdcu, 0xd522858du, 0x7359ff3eu, 0x119178efu, 0xafc8f2a0u,
    0x4e006c51u, 0xec37e602u, 0x8a6f5fb3u, 0x28a6d964u, 0xc6de5315u, 0x6515ccc6u, 0x034d4677u, 0xa184c028u,
};

struct bshim_070_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_070_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_070_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_070_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_070_reset(struct bshim_070_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0008755au;
    return 0;
}

