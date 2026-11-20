/* bshim_005 -- board support shim generated from the 0005 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_005_tab0[96] = {
    0xcff05bdfu, 0x6e27d590u, 0x0c5f4f41u, 0xaa96c8f2u, 0x48ce42a3u, 0xe705bc54u, 0x853d3605u, 0x2374afb6u,
    0xc1ac2967u, 0x5fe3a318u, 0xfe1b1cc9u, 0x9c52967au, 0x3a8a102bu, 0xd8c189dcu, 0x76f9038du, 0x15307d3eu,
    0xb367f6efu, 0x519f70a0u, 0xefd6ea51u, 0x8e0e6402u, 0x2c45ddb3u, 0xca7d5764u, 0x68b4d115u, 0x06ec4ac6u,
    0xa523c477u, 0x435b3e28u, 0xe192b7d9u, 0x7fca318au, 0x1e01ab3bu, 0xbc3924ecu, 0x5a709e9du, 0xf8a8184eu,
    0x96df91ffu, 0x35170bb0u, 0xd34e8561u, 0x7185ff12u, 0x0fbd78c3u, 0xadf4f274u, 0x4c2c6c25u, 0xea63e5d6u,
    0x889b5f87u, 0x26d2d938u, 0xc50a52e9u, 0x6341cc9au, 0x0179464bu, 0x9fb0bffcu, 0x3de839adu, 0xdc1fb35eu,
    0x7a572d0fu, 0x188ea6c0u, 0xb6c62071u, 0x54fd9a22u, 0xf33513d3u, 0x916c8d84u, 0x2fa40735u, 0xcddb80e6u,
    0x6c12fa97u, 0x0a4a7448u, 0xa881edf9u, 0x46b967aau, 0xe4f0e15bu, 0x83285b0cu, 0x215fd4bdu, 0xbf974e6eu,
    0x5dcec81fu, 0xfc0641d0u, 0x9a3dbb81u, 0x38753532u, 0xd6acaee3u, 0x74e42894u, 0x131ba245u, 0xb1531bf6u,
    0x4f8a95a7u, 0xedc20f58u, 0x8bf98909u, 0x2a3102bau, 0xc8687c6bu, 0x669ff61cu, 0x04d76fcdu, 0xa30ee97eu,
    0x4146632fu, 0xdf7ddce0u, 0x7db55691u, 0x1becd042u, 0xba2449f3u, 0x585bc3a4u, 0xf6933d55u, 0x94cab706u,
    0x330230b7u, 0xd139aa68u, 0x6f712419u, 0x0da89dcau, 0xabe0177bu, 0x4a17912cu, 0xe84f0addu, 0x8686848eu,
};

static const uint32_t bshim_005_tab1[96] = {
    0x519f70a0u, 0xefd6ea51u, 0x8e0e6402u, 0x2c45ddb3u, 0xca7d5764u, 0x68b4d115u, 0x06ec4ac6u, 0xa523c477u,
    0x435b3e28u, 0xe192b7d9u, 0x7fca318au, 0x1e01ab3bu, 0xbc3924ecu, 0x5a709e9du, 0xf8a8184eu, 0x96df91ffu,
    0x35170bb0u, 0xd34e8561u, 0x7185ff12u, 0x0fbd78c3u, 0xadf4f274u, 0x4c2c6c25u, 0xea63e5d6u, 0x889b5f87u,
    0x26d2d938u, 0xc50a52e9u, 0x6341cc9au, 0x0179464bu, 0x9fb0bffcu, 0x3de839adu, 0xdc1fb35eu, 0x7a572d0fu,
    0x188ea6c0u, 0xb6c62071u, 0x54fd9a22u, 0xf33513d3u, 0x916c8d84u, 0x2fa40735u, 0xcddb80e6u, 0x6c12fa97u,
    0x0a4a7448u, 0xa881edf9u, 0x46b967aau, 0xe4f0e15bu, 0x83285b0cu, 0x215fd4bdu, 0xbf974e6eu, 0x5dcec81fu,
    0xfc0641d0u, 0x9a3dbb81u, 0x38753532u, 0xd6acaee3u, 0x74e42894u, 0x131ba245u, 0xb1531bf6u, 0x4f8a95a7u,
    0xedc20f58u, 0x8bf98909u, 0x2a3102bau, 0xc8687c6bu, 0x669ff61cu, 0x04d76fcdu, 0xa30ee97eu, 0x4146632fu,
    0xdf7ddce0u, 0x7db55691u, 0x1becd042u, 0xba2449f3u, 0x585bc3a4u, 0xf6933d55u, 0x94cab706u, 0x330230b7u,
    0xd139aa68u, 0x6f712419u, 0x0da89dcau, 0xabe0177bu, 0x4a17912cu, 0xe84f0addu, 0x8686848eu, 0x24bdfe3fu,
    0xc2f577f0u, 0x612cf1a1u, 0xff646b52u, 0x9d9be503u, 0x3bd35eb4u, 0xda0ad865u, 0x78425216u, 0x1679cbc7u,
    0xb4b14578u, 0x52e8bf29u, 0xf12038dau, 0x8f57b28bu, 0x2d8f2c3cu, 0xcbc6a5edu, 0x69fe1f9eu, 0x0835994fu,
};

static const uint32_t bshim_005_tab2[96] = {
    0xd34e8561u, 0x7185ff12u, 0x0fbd78c3u, 0xadf4f274u, 0x4c2c6c25u, 0xea63e5d6u, 0x889b5f87u, 0x26d2d938u,
    0xc50a52e9u, 0x6341cc9au, 0x0179464bu, 0x9fb0bffcu, 0x3de839adu, 0xdc1fb35eu, 0x7a572d0fu, 0x188ea6c0u,
    0xb6c62071u, 0x54fd9a22u, 0xf33513d3u, 0x916c8d84u, 0x2fa40735u, 0xcddb80e6u, 0x6c12fa97u, 0x0a4a7448u,
    0xa881edf9u, 0x46b967aau, 0xe4f0e15bu, 0x83285b0cu, 0x215fd4bdu, 0xbf974e6eu, 0x5dcec81fu, 0xfc0641d0u,
    0x9a3dbb81u, 0x38753532u, 0xd6acaee3u, 0x74e42894u, 0x131ba245u, 0xb1531bf6u, 0x4f8a95a7u, 0xedc20f58u,
    0x8bf98909u, 0x2a3102bau, 0xc8687c6bu, 0x669ff61cu, 0x04d76fcdu, 0xa30ee97eu, 0x4146632fu, 0xdf7ddce0u,
    0x7db55691u, 0x1becd042u, 0xba2449f3u, 0x585bc3a4u, 0xf6933d55u, 0x94cab706u, 0x330230b7u, 0xd139aa68u,
    0x6f712419u, 0x0da89dcau, 0xabe0177bu, 0x4a17912cu, 0xe84f0addu, 0x8686848eu, 0x24bdfe3fu, 0xc2f577f0u,
    0x612cf1a1u, 0xff646b52u, 0x9d9be503u, 0x3bd35eb4u, 0xda0ad865u, 0x78425216u, 0x1679cbc7u, 0xb4b14578u,
    0x52e8bf29u, 0xf12038dau, 0x8f57b28bu, 0x2d8f2c3cu, 0xcbc6a5edu, 0x69fe1f9eu, 0x0835994fu, 0xa66d1300u,
    0x44a48cb1u, 0xe2dc0662u, 0x81138013u, 0x1f4af9c4u, 0xbd827375u, 0x5bb9ed26u, 0xf9f166d7u, 0x9828e088u,
    0x36605a39u, 0xd497d3eau, 0x72cf4d9bu, 0x1106c74cu, 0xaf3e40fdu, 0x4d75baaeu, 0xebad345fu, 0x89e4ae10u,
};

static const uint32_t bshim_005_tab3[96] = {
    0x54fd9a22u, 0xf33513d3u, 0x916c8d84u, 0x2fa40735u, 0xcddb80e6u, 0x6c12fa97u, 0x0a4a7448u, 0xa881edf9u,
    0x46b967aau, 0xe4f0e15bu, 0x83285b0cu, 0x215fd4bdu, 0xbf974e6eu, 0x5dcec81fu, 0xfc0641d0u, 0x9a3dbb81u,
    0x38753532u, 0xd6acaee3u, 0x74e42894u, 0x131ba245u, 0xb1531bf6u, 0x4f8a95a7u, 0xedc20f58u, 0x8bf98909u,
    0x2a3102bau, 0xc8687c6bu, 0x669ff61cu, 0x04d76fcdu, 0xa30ee97eu, 0x4146632fu, 0xdf7ddce0u, 0x7db55691u,
    0x1becd042u, 0xba2449f3u, 0x585bc3a4u, 0xf6933d55u, 0x94cab706u, 0x330230b7u, 0xd139aa68u, 0x6f712419u,
    0x0da89dcau, 0xabe0177bu, 0x4a17912cu, 0xe84f0addu, 0x8686848eu, 0x24bdfe3fu, 0xc2f577f0u, 0x612cf1a1u,
    0xff646b52u, 0x9d9be503u, 0x3bd35eb4u, 0xda0ad865u, 0x78425216u, 0x1679cbc7u, 0xb4b14578u, 0x52e8bf29u,
    0xf12038dau, 0x8f57b28bu, 0x2d8f2c3cu, 0xcbc6a5edu, 0x69fe1f9eu, 0x0835994fu, 0xa66d1300u, 0x44a48cb1u,
    0xe2dc0662u, 0x81138013u, 0x1f4af9c4u, 0xbd827375u, 0x5bb9ed26u, 0xf9f166d7u, 0x9828e088u, 0x36605a39u,
    0xd497d3eau, 0x72cf4d9bu, 0x1106c74cu, 0xaf3e40fdu, 0x4d75baaeu, 0xebad345fu, 0x89e4ae10u, 0x281c27c1u,
    0xc653a172u, 0x648b1b23u, 0x02c294d4u, 0xa0fa0e85u, 0x3f318836u, 0xdd6901e7u, 0x7ba07b98u, 0x19d7f549u,
    0xb80f6efau, 0x5646e8abu, 0xf47e625cu, 0x92b5dc0du, 0x30ed55beu, 0xcf24cf6fu, 0x6d5c4920u, 0x0b93c2d1u,
};

static const uint32_t bshim_005_tab4[96] = {
    0xd6acaee3u, 0x74e42894u, 0x131ba245u, 0xb1531bf6u, 0x4f8a95a7u, 0xedc20f58u, 0x8bf98909u, 0x2a3102bau,
    0xc8687c6bu, 0x669ff61cu, 0x04d76fcdu, 0xa30ee97eu, 0x4146632fu, 0xdf7ddce0u, 0x7db55691u, 0x1becd042u,
    0xba2449f3u, 0x585bc3a4u, 0xf6933d55u, 0x94cab706u, 0x330230b7u, 0xd139aa68u, 0x6f712419u, 0x0da89dcau,
    0xabe0177bu, 0x4a17912cu, 0xe84f0addu, 0x8686848eu, 0x24bdfe3fu, 0xc2f577f0u, 0x612cf1a1u, 0xff646b52u,
    0x9d9be503u, 0x3bd35eb4u, 0xda0ad865u, 0x78425216u, 0x1679cbc7u, 0xb4b14578u, 0x52e8bf29u, 0xf12038dau,
    0x8f57b28bu, 0x2d8f2c3cu, 0xcbc6a5edu, 0x69fe1f9eu, 0x0835994fu, 0xa66d1300u, 0x44a48cb1u, 0xe2dc0662u,
    0x81138013u, 0x1f4af9c4u, 0xbd827375u, 0x5bb9ed26u, 0xf9f166d7u, 0x9828e088u, 0x36605a39u, 0xd497d3eau,
    0x72cf4d9bu, 0x1106c74cu, 0xaf3e40fdu, 0x4d75baaeu, 0xebad345fu, 0x89e4ae10u, 0x281c27c1u, 0xc653a172u,
    0x648b1b23u, 0x02c294d4u, 0xa0fa0e85u, 0x3f318836u, 0xdd6901e7u, 0x7ba07b98u, 0x19d7f549u, 0xb80f6efau,
    0x5646e8abu, 0xf47e625cu, 0x92b5dc0du, 0x30ed55beu, 0xcf24cf6fu, 0x6d5c4920u, 0x0b93c2d1u, 0xa9cb3c82u,
    0x4802b633u, 0xe63a2fe4u, 0x8471a995u, 0x22a92346u, 0xc0e09cf7u, 0x5f1816a8u, 0xfd4f9059u, 0x9b870a0au,
    0x39be83bbu, 0xd7f5fd6cu, 0x762d771du, 0x1464f0ceu, 0xb29c6a7fu, 0x50d3e430u, 0xef0b5de1u, 0x8d42d792u,
};

static const uint32_t bshim_005_tab5[96] = {
    0x585bc3a4u, 0xf6933d55u, 0x94cab706u, 0x330230b7u, 0xd139aa68u, 0x6f712419u, 0x0da89dcau, 0xabe0177bu,
    0x4a17912cu, 0xe84f0addu, 0x8686848eu, 0x24bdfe3fu, 0xc2f577f0u, 0x612cf1a1u, 0xff646b52u, 0x9d9be503u,
    0x3bd35eb4u, 0xda0ad865u, 0x78425216u, 0x1679cbc7u, 0xb4b14578u, 0x52e8bf29u, 0xf12038dau, 0x8f57b28bu,
    0x2d8f2c3cu, 0xcbc6a5edu, 0x69fe1f9eu, 0x0835994fu, 0xa66d1300u, 0x44a48cb1u, 0xe2dc0662u, 0x81138013u,
    0x1f4af9c4u, 0xbd827375u, 0x5bb9ed26u, 0xf9f166d7u, 0x9828e088u, 0x36605a39u, 0xd497d3eau, 0x72cf4d9bu,
    0x1106c74cu, 0xaf3e40fdu, 0x4d75baaeu, 0xebad345fu, 0x89e4ae10u, 0x281c27c1u, 0xc653a172u, 0x648b1b23u,
    0x02c294d4u, 0xa0fa0e85u, 0x3f318836u, 0xdd6901e7u, 0x7ba07b98u, 0x19d7f549u, 0xb80f6efau, 0x5646e8abu,
    0xf47e625cu, 0x92b5dc0du, 0x30ed55beu, 0xcf24cf6fu, 0x6d5c4920u, 0x0b93c2d1u, 0xa9cb3c82u, 0x4802b633u,
    0xe63a2fe4u, 0x8471a995u, 0x22a92346u, 0xc0e09cf7u, 0x5f1816a8u, 0xfd4f9059u, 0x9b870a0au, 0x39be83bbu,
    0xd7f5fd6cu, 0x762d771du, 0x1464f0ceu, 0xb29c6a7fu, 0x50d3e430u, 0xef0b5de1u, 0x8d42d792u, 0x2b7a5143u,
    0xc9b1caf4u, 0x67e944a5u, 0x0620be56u, 0xa4583807u, 0x428fb1b8u, 0xe0c72b69u, 0x7efea51au, 0x1d361ecbu,
    0xbb6d987cu, 0x59a5122du, 0xf7dc8bdeu, 0x9614058fu, 0x344b7f40u, 0xd282f8f1u, 0x70ba72a2u, 0x0ef1ec53u,
};

static const uint32_t bshim_005_tab6[96] = {
    0xda0ad865u, 0x78425216u, 0x1679cbc7u, 0xb4b14578u, 0x52e8bf29u, 0xf12038dau, 0x8f57b28bu, 0x2d8f2c3cu,
    0xcbc6a5edu, 0x69fe1f9eu, 0x0835994fu, 0xa66d1300u, 0x44a48cb1u, 0xe2dc0662u, 0x81138013u, 0x1f4af9c4u,
    0xbd827375u, 0x5bb9ed26u, 0xf9f166d7u, 0x9828e088u, 0x36605a39u, 0xd497d3eau, 0x72cf4d9bu, 0x1106c74cu,
    0xaf3e40fdu, 0x4d75baaeu, 0xebad345fu, 0x89e4ae10u, 0x281c27c1u, 0xc653a172u, 0x648b1b23u, 0x02c294d4u,
    0xa0fa0e85u, 0x3f318836u, 0xdd6901e7u, 0x7ba07b98u, 0x19d7f549u, 0xb80f6efau, 0x5646e8abu, 0xf47e625cu,
    0x92b5dc0du, 0x30ed55beu, 0xcf24cf6fu, 0x6d5c4920u, 0x0b93c2d1u, 0xa9cb3c82u, 0x4802b633u, 0xe63a2fe4u,
    0x8471a995u, 0x22a92346u, 0xc0e09cf7u, 0x5f1816a8u, 0xfd4f9059u, 0x9b870a0au, 0x39be83bbu, 0xd7f5fd6cu,
    0x762d771du, 0x1464f0ceu, 0xb29c6a7fu, 0x50d3e430u, 0xef0b5de1u, 0x8d42d792u, 0x2b7a5143u, 0xc9b1caf4u,
    0x67e944a5u, 0x0620be56u, 0xa4583807u, 0x428fb1b8u, 0xe0c72b69u, 0x7efea51au, 0x1d361ecbu, 0xbb6d987cu,
    0x59a5122du, 0xf7dc8bdeu, 0x9614058fu, 0x344b7f40u, 0xd282f8f1u, 0x70ba72a2u, 0x0ef1ec53u, 0xad296604u,
    0x4b60dfb5u, 0xe9985966u, 0x87cfd317u, 0x26074cc8u, 0xc43ec679u, 0x6276402au, 0x00adb9dbu, 0x9ee5338cu,
    0x3d1cad3du, 0xdb5426eeu, 0x798ba09fu, 0x17c31a50u, 0xb5fa9401u, 0x54320db2u, 0xf2698763u, 0x90a10114u,
};

static const uint32_t bshim_005_tab7[96] = {
    0x5bb9ed26u, 0xf9f166d7u, 0x9828e088u, 0x36605a39u, 0xd497d3eau, 0x72cf4d9bu, 0x1106c74cu, 0xaf3e40fdu,
    0x4d75baaeu, 0xebad345fu, 0x89e4ae10u, 0x281c27c1u, 0xc653a172u, 0x648b1b23u, 0x02c294d4u, 0xa0fa0e85u,
    0x3f318836u, 0xdd6901e7u, 0x7ba07b98u, 0x19d7f549u, 0xb80f6efau, 0x5646e8abu, 0xf47e625cu, 0x92b5dc0du,
    0x30ed55beu, 0xcf24cf6fu, 0x6d5c4920u, 0x0b93c2d1u, 0xa9cb3c82u, 0x4802b633u, 0xe63a2fe4u, 0x8471a995u,
    0x22a92346u, 0xc0e09cf7u, 0x5f1816a8u, 0xfd4f9059u, 0x9b870a0au, 0x39be83bbu, 0xd7f5fd6cu, 0x762d771du,
    0x1464f0ceu, 0xb29c6a7fu, 0x50d3e430u, 0xef0b5de1u, 0x8d42d792u, 0x2b7a5143u, 0xc9b1caf4u, 0x67e944a5u,
    0x0620be56u, 0xa4583807u, 0x428fb1b8u, 0xe0c72b69u, 0x7efea51au, 0x1d361ecbu, 0xbb6d987cu, 0x59a5122du,
    0xf7dc8bdeu, 0x9614058fu, 0x344b7f40u, 0xd282f8f1u, 0x70ba72a2u, 0x0ef1ec53u, 0xad296604u, 0x4b60dfb5u,
    0xe9985966u, 0x87cfd317u, 0x26074cc8u, 0xc43ec679u, 0x6276402au, 0x00adb9dbu, 0x9ee5338cu, 0x3d1cad3du,
    0xdb5426eeu, 0x798ba09fu, 0x17c31a50u, 0xb5fa9401u, 0x54320db2u, 0xf2698763u, 0x90a10114u, 0x2ed87ac5u,
    0xcd0ff476u, 0x6b476e27u, 0x097ee7d8u, 0xa7b66189u, 0x45eddb3au, 0xe42554ebu, 0x825cce9cu, 0x2094484du,
    0xbecbc1feu, 0x5d033bafu, 0xfb3ab560u, 0x99722f11u, 0x37a9a8c2u, 0xd5e12273u, 0x74189c24u, 0x125015d5u,
};

struct bshim_005_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_005_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d9af453u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2386becau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa9728941u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f5e53b8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb54a1e2fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b35e8a6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc121b31du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x470d7d94u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccf9480bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52e51282u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8d0dcf9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ebca770u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe4a871e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a943c5eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf08006d5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x766bd14cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_005_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_005_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_005_reset(struct bshim_005_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00009aabu;
    return 0;
}

