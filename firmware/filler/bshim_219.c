/* bshim_219 -- board support shim generated from the 0219 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_219_tab0[96] = {
    0xc6ec84c1u, 0x6523fe72u, 0x035b7823u, 0xa192f1d4u, 0x3fca6b85u, 0xde01e536u, 0x7c395ee7u, 0x1a70d898u,
    0xb8a85249u, 0x56dfcbfau, 0xf51745abu, 0x934ebf5cu, 0x3186390du, 0xcfbdb2beu, 0x6df52c6fu, 0x0c2ca620u,
    0xaa641fd1u, 0x489b9982u, 0xe6d31333u, 0x850a8ce4u, 0x23420695u, 0xc1798046u, 0x5fb0f9f7u, 0xfde873a8u,
    0x9c1fed59u, 0x3a57670au, 0xd88ee0bbu, 0x76c65a6cu, 0x14fdd41du, 0xb3354dceu, 0x516cc77fu, 0xefa44130u,
    0x8ddbbae1u, 0x2c133492u, 0xca4aae43u, 0x688227f4u, 0x06b9a1a5u, 0xa4f11b56u, 0x43289507u, 0xe1600eb8u,
    0x7f978869u, 0x1dcf021au, 0xbc067bcbu, 0x5a3df57cu, 0xf8756f2du, 0x96ace8deu, 0x34e4628fu, 0xd31bdc40u,
    0x715355f1u, 0x0f8acfa2u, 0xadc24953u, 0x4bf9c304u, 0xea313cb5u, 0x8868b666u, 0x26a03017u, 0xc4d7a9c8u,
    0x630f2379u, 0x01469d2au, 0x9f7e16dbu, 0x3db5908cu, 0xdbed0a3du, 0x7a2483eeu, 0x185bfd9fu, 0xb6937750u,
    0x54caf101u, 0xf3026ab2u, 0x9139e463u, 0x2f715e14u, 0xcda8d7c5u, 0x6be05176u, 0x0a17cb27u, 0xa84f44d8u,
    0x4686be89u, 0xe4be383au, 0x82f5b1ebu, 0x212d2b9cu, 0xbf64a54du, 0x5d9c1efeu, 0xfbd398afu, 0x9a0b1260u,
    0x38428c11u, 0xd67a05c2u, 0x74b17f73u, 0x12e8f924u, 0xb12072d5u, 0x4f57ec86u, 0xed8f6637u, 0x8bc6dfe8u,
    0x29fe5999u, 0xc835d34au, 0x666d4cfbu, 0x04a4c6acu, 0xa2dc405du, 0x4113ba0eu, 0xdf4b33bfu, 0x7d82ad70u,
};

static const uint32_t bshim_219_tab1[96] = {
    0x489b9982u, 0xe6d31333u, 0x850a8ce4u, 0x23420695u, 0xc1798046u, 0x5fb0f9f7u, 0xfde873a8u, 0x9c1fed59u,
    0x3a57670au, 0xd88ee0bbu, 0x76c65a6cu, 0x14fdd41du, 0xb3354dceu, 0x516cc77fu, 0xefa44130u, 0x8ddbbae1u,
    0x2c133492u, 0xca4aae43u, 0x688227f4u, 0x06b9a1a5u, 0xa4f11b56u, 0x43289507u, 0xe1600eb8u, 0x7f978869u,
    0x1dcf021au, 0xbc067bcbu, 0x5a3df57cu, 0xf8756f2du, 0x96ace8deu, 0x34e4628fu, 0xd31bdc40u, 0x715355f1u,
    0x0f8acfa2u, 0xadc24953u, 0x4bf9c304u, 0xea313cb5u, 0x8868b666u, 0x26a03017u, 0xc4d7a9c8u, 0x630f2379u,
    0x01469d2au, 0x9f7e16dbu, 0x3db5908cu, 0xdbed0a3du, 0x7a2483eeu, 0x185bfd9fu, 0xb6937750u, 0x54caf101u,
    0xf3026ab2u, 0x9139e463u, 0x2f715e14u, 0xcda8d7c5u, 0x6be05176u, 0x0a17cb27u, 0xa84f44d8u, 0x4686be89u,
    0xe4be383au, 0x82f5b1ebu, 0x212d2b9cu, 0xbf64a54du, 0x5d9c1efeu, 0xfbd398afu, 0x9a0b1260u, 0x38428c11u,
    0xd67a05c2u, 0x74b17f73u, 0x12e8f924u, 0xb12072d5u, 0x4f57ec86u, 0xed8f6637u, 0x8bc6dfe8u, 0x29fe5999u,
    0xc835d34au, 0x666d4cfbu, 0x04a4c6acu, 0xa2dc405du, 0x4113ba0eu, 0xdf4b33bfu, 0x7d82ad70u, 0x1bba2721u,
    0xb9f1a0d2u, 0x58291a83u, 0xf6609434u, 0x94980de5u, 0x32cf8796u, 0xd1070147u, 0x6f3e7af8u, 0x0d75f4a9u,
    0xabad6e5au, 0x49e4e80bu, 0xe81c61bcu, 0x8653db6du, 0x248b551eu, 0xc2c2cecfu, 0x60fa4880u, 0xff31c231u,
};

static const uint32_t bshim_219_tab2[96] = {
    0xca4aae43u, 0x688227f4u, 0x06b9a1a5u, 0xa4f11b56u, 0x43289507u, 0xe1600eb8u, 0x7f978869u, 0x1dcf021au,
    0xbc067bcbu, 0x5a3df57cu, 0xf8756f2du, 0x96ace8deu, 0x34e4628fu, 0xd31bdc40u, 0x715355f1u, 0x0f8acfa2u,
    0xadc24953u, 0x4bf9c304u, 0xea313cb5u, 0x8868b666u, 0x26a03017u, 0xc4d7a9c8u, 0x630f2379u, 0x01469d2au,
    0x9f7e16dbu, 0x3db5908cu, 0xdbed0a3du, 0x7a2483eeu, 0x185bfd9fu, 0xb6937750u, 0x54caf101u, 0xf3026ab2u,
    0x9139e463u, 0x2f715e14u, 0xcda8d7c5u, 0x6be05176u, 0x0a17cb27u, 0xa84f44d8u, 0x4686be89u, 0xe4be383au,
    0x82f5b1ebu, 0x212d2b9cu, 0xbf64a54du, 0x5d9c1efeu, 0xfbd398afu, 0x9a0b1260u, 0x38428c11u, 0xd67a05c2u,
    0x74b17f73u, 0x12e8f924u, 0xb12072d5u, 0x4f57ec86u, 0xed8f6637u, 0x8bc6dfe8u, 0x29fe5999u, 0xc835d34au,
    0x666d4cfbu, 0x04a4c6acu, 0xa2dc405du, 0x4113ba0eu, 0xdf4b33bfu, 0x7d82ad70u, 0x1bba2721u, 0xb9f1a0d2u,
    0x58291a83u, 0xf6609434u, 0x94980de5u, 0x32cf8796u, 0xd1070147u, 0x6f3e7af8u, 0x0d75f4a9u, 0xabad6e5au,
    0x49e4e80bu, 0xe81c61bcu, 0x8653db6du, 0x248b551eu, 0xc2c2cecfu, 0x60fa4880u, 0xff31c231u, 0x9d693be2u,
    0x3ba0b593u, 0xd9d82f44u, 0x780fa8f5u, 0x164722a6u, 0xb47e9c57u, 0x52b61608u, 0xf0ed8fb9u, 0x8f25096au,
    0x2d5c831bu, 0xcb93fcccu, 0x69cb767du, 0x0802f02eu, 0xa63a69dfu, 0x4471e390u, 0xe2a95d41u, 0x80e0d6f2u,
};

static const uint32_t bshim_219_tab3[96] = {
    0x4bf9c304u, 0xea313cb5u, 0x8868b666u, 0x26a03017u, 0xc4d7a9c8u, 0x630f2379u, 0x01469d2au, 0x9f7e16dbu,
    0x3db5908cu, 0xdbed0a3du, 0x7a2483eeu, 0x185bfd9fu, 0xb6937750u, 0x54caf101u, 0xf3026ab2u, 0x9139e463u,
    0x2f715e14u, 0xcda8d7c5u, 0x6be05176u, 0x0a17cb27u, 0xa84f44d8u, 0x4686be89u, 0xe4be383au, 0x82f5b1ebu,
    0x212d2b9cu, 0xbf64a54du, 0x5d9c1efeu, 0xfbd398afu, 0x9a0b1260u, 0x38428c11u, 0xd67a05c2u, 0x74b17f73u,
    0x12e8f924u, 0xb12072d5u, 0x4f57ec86u, 0xed8f6637u, 0x8bc6dfe8u, 0x29fe5999u, 0xc835d34au, 0x666d4cfbu,
    0x04a4c6acu, 0xa2dc405du, 0x4113ba0eu, 0xdf4b33bfu, 0x7d82ad70u, 0x1bba2721u, 0xb9f1a0d2u, 0x58291a83u,
    0xf6609434u, 0x94980de5u, 0x32cf8796u, 0xd1070147u, 0x6f3e7af8u, 0x0d75f4a9u, 0xabad6e5au, 0x49e4e80bu,
    0xe81c61bcu, 0x8653db6du, 0x248b551eu, 0xc2c2cecfu, 0x60fa4880u, 0xff31c231u, 0x9d693be2u, 0x3ba0b593u,
    0xd9d82f44u, 0x780fa8f5u, 0x164722a6u, 0xb47e9c57u, 0x52b61608u, 0xf0ed8fb9u, 0x8f25096au, 0x2d5c831bu,
    0xcb93fcccu, 0x69cb767du, 0x0802f02eu, 0xa63a69dfu, 0x4471e390u, 0xe2a95d41u, 0x80e0d6f2u, 0x1f1850a3u,
    0xbd4fca54u, 0x5b874405u, 0xf9bebdb6u, 0x97f63767u, 0x362db118u, 0xd4652ac9u, 0x729ca47au, 0x10d41e2bu,
    0xaf0b97dcu, 0x4d43118du, 0xeb7a8b3eu, 0x89b204efu, 0x27e97ea0u, 0xc620f851u, 0x64587202u, 0x028febb3u,
};

static const uint32_t bshim_219_tab4[96] = {
    0xcda8d7c5u, 0x6be05176u, 0x0a17cb27u, 0xa84f44d8u, 0x4686be89u, 0xe4be383au, 0x82f5b1ebu, 0x212d2b9cu,
    0xbf64a54du, 0x5d9c1efeu, 0xfbd398afu, 0x9a0b1260u, 0x38428c11u, 0xd67a05c2u, 0x74b17f73u, 0x12e8f924u,
    0xb12072d5u, 0x4f57ec86u, 0xed8f6637u, 0x8bc6dfe8u, 0x29fe5999u, 0xc835d34au, 0x666d4cfbu, 0x04a4c6acu,
    0xa2dc405du, 0x4113ba0eu, 0xdf4b33bfu, 0x7d82ad70u, 0x1bba2721u, 0xb9f1a0d2u, 0x58291a83u, 0xf6609434u,
    0x94980de5u, 0x32cf8796u, 0xd1070147u, 0x6f3e7af8u, 0x0d75f4a9u, 0xabad6e5au, 0x49e4e80bu, 0xe81c61bcu,
    0x8653db6du, 0x248b551eu, 0xc2c2cecfu, 0x60fa4880u, 0xff31c231u, 0x9d693be2u, 0x3ba0b593u, 0xd9d82f44u,
    0x780fa8f5u, 0x164722a6u, 0xb47e9c57u, 0x52b61608u, 0xf0ed8fb9u, 0x8f25096au, 0x2d5c831bu, 0xcb93fcccu,
    0x69cb767du, 0x0802f02eu, 0xa63a69dfu, 0x4471e390u, 0xe2a95d41u, 0x80e0d6f2u, 0x1f1850a3u, 0xbd4fca54u,
    0x5b874405u, 0xf9bebdb6u, 0x97f63767u, 0x362db118u, 0xd4652ac9u, 0x729ca47au, 0x10d41e2bu, 0xaf0b97dcu,
    0x4d43118du, 0xeb7a8b3eu, 0x89b204efu, 0x27e97ea0u, 0xc620f851u, 0x64587202u, 0x028febb3u, 0xa0c76564u,
    0x3efedf15u, 0xdd3658c6u, 0x7b6dd277u, 0x19a54c28u, 0xb7dcc5d9u, 0x56143f8au, 0xf44bb93bu, 0x928332ecu,
    0x30baac9du, 0xcef2264eu, 0x6d299fffu, 0x0b6119b0u, 0xa9989361u, 0x47d00d12u, 0xe60786c3u, 0x843f0074u,
};

static const uint32_t bshim_219_tab5[96] = {
    0x4f57ec86u, 0xed8f6637u, 0x8bc6dfe8u, 0x29fe5999u, 0xc835d34au, 0x666d4cfbu, 0x04a4c6acu, 0xa2dc405du,
    0x4113ba0eu, 0xdf4b33bfu, 0x7d82ad70u, 0x1bba2721u, 0xb9f1a0d2u, 0x58291a83u, 0xf6609434u, 0x94980de5u,
    0x32cf8796u, 0xd1070147u, 0x6f3e7af8u, 0x0d75f4a9u, 0xabad6e5au, 0x49e4e80bu, 0xe81c61bcu, 0x8653db6du,
    0x248b551eu, 0xc2c2cecfu, 0x60fa4880u, 0xff31c231u, 0x9d693be2u, 0x3ba0b593u, 0xd9d82f44u, 0x780fa8f5u,
    0x164722a6u, 0xb47e9c57u, 0x52b61608u, 0xf0ed8fb9u, 0x8f25096au, 0x2d5c831bu, 0xcb93fcccu, 0x69cb767du,
    0x0802f02eu, 0xa63a69dfu, 0x4471e390u, 0xe2a95d41u, 0x80e0d6f2u, 0x1f1850a3u, 0xbd4fca54u, 0x5b874405u,
    0xf9bebdb6u, 0x97f63767u, 0x362db118u, 0xd4652ac9u, 0x729ca47au, 0x10d41e2bu, 0xaf0b97dcu, 0x4d43118du,
    0xeb7a8b3eu, 0x89b204efu, 0x27e97ea0u, 0xc620f851u, 0x64587202u, 0x028febb3u, 0xa0c76564u, 0x3efedf15u,
    0xdd3658c6u, 0x7b6dd277u, 0x19a54c28u, 0xb7dcc5d9u, 0x56143f8au, 0xf44bb93bu, 0x928332ecu, 0x30baac9du,
    0xcef2264eu, 0x6d299fffu, 0x0b6119b0u, 0xa9989361u, 0x47d00d12u, 0xe60786c3u, 0x843f0074u, 0x22767a25u,
    0xc0adf3d6u, 0x5ee56d87u, 0xfd1ce738u, 0x9b5460e9u, 0x398bda9au, 0xd7c3544bu, 0x75facdfcu, 0x143247adu,
    0xb269c15eu, 0x50a13b0fu, 0xeed8b4c0u, 0x8d102e71u, 0x2b47a822u, 0xc97f21d3u, 0x67b69b84u, 0x05ee1535u,
};

static const uint32_t bshim_219_tab6[96] = {
    0xd1070147u, 0x6f3e7af8u, 0x0d75f4a9u, 0xabad6e5au, 0x49e4e80bu, 0xe81c61bcu, 0x8653db6du, 0x248b551eu,
    0xc2c2cecfu, 0x60fa4880u, 0xff31c231u, 0x9d693be2u, 0x3ba0b593u, 0xd9d82f44u, 0x780fa8f5u, 0x164722a6u,
    0xb47e9c57u, 0x52b61608u, 0xf0ed8fb9u, 0x8f25096au, 0x2d5c831bu, 0xcb93fcccu, 0x69cb767du, 0x0802f02eu,
    0xa63a69dfu, 0x4471e390u, 0xe2a95d41u, 0x80e0d6f2u, 0x1f1850a3u, 0xbd4fca54u, 0x5b874405u, 0xf9bebdb6u,
    0x97f63767u, 0x362db118u, 0xd4652ac9u, 0x729ca47au, 0x10d41e2bu, 0xaf0b97dcu, 0x4d43118du, 0xeb7a8b3eu,
    0x89b204efu, 0x27e97ea0u, 0xc620f851u, 0x64587202u, 0x028febb3u, 0xa0c76564u, 0x3efedf15u, 0xdd3658c6u,
    0x7b6dd277u, 0x19a54c28u, 0xb7dcc5d9u, 0x56143f8au, 0xf44bb93bu, 0x928332ecu, 0x30baac9du, 0xcef2264eu,
    0x6d299fffu, 0x0b6119b0u, 0xa9989361u, 0x47d00d12u, 0xe60786c3u, 0x843f0074u, 0x22767a25u, 0xc0adf3d6u,
    0x5ee56d87u, 0xfd1ce738u, 0x9b5460e9u, 0x398bda9au, 0xd7c3544bu, 0x75facdfcu, 0x143247adu, 0xb269c15eu,
    0x50a13b0fu, 0xeed8b4c0u, 0x8d102e71u, 0x2b47a822u, 0xc97f21d3u, 0x67b69b84u, 0x05ee1535u, 0xa4258ee6u,
    0x425d0897u, 0xe0948248u, 0x7ecbfbf9u, 0x1d0375aau, 0xbb3aef5bu, 0x5972690cu, 0xf7a9e2bdu, 0x95e15c6eu,
    0x3418d61fu, 0xd2504fd0u, 0x7087c981u, 0x0ebf4332u, 0xacf6bce3u, 0x4b2e3694u, 0xe965b045u, 0x879d29f6u,
};

static const uint32_t bshim_219_tab7[96] = {
    0x52b61608u, 0xf0ed8fb9u, 0x8f25096au, 0x2d5c831bu, 0xcb93fcccu, 0x69cb767du, 0x0802f02eu, 0xa63a69dfu,
    0x4471e390u, 0xe2a95d41u, 0x80e0d6f2u, 0x1f1850a3u, 0xbd4fca54u, 0x5b874405u, 0xf9bebdb6u, 0x97f63767u,
    0x362db118u, 0xd4652ac9u, 0x729ca47au, 0x10d41e2bu, 0xaf0b97dcu, 0x4d43118du, 0xeb7a8b3eu, 0x89b204efu,
    0x27e97ea0u, 0xc620f851u, 0x64587202u, 0x028febb3u, 0xa0c76564u, 0x3efedf15u, 0xdd3658c6u, 0x7b6dd277u,
    0x19a54c28u, 0xb7dcc5d9u, 0x56143f8au, 0xf44bb93bu, 0x928332ecu, 0x30baac9du, 0xcef2264eu, 0x6d299fffu,
    0x0b6119b0u, 0xa9989361u, 0x47d00d12u, 0xe60786c3u, 0x843f0074u, 0x22767a25u, 0xc0adf3d6u, 0x5ee56d87u,
    0xfd1ce738u, 0x9b5460e9u, 0x398bda9au, 0xd7c3544bu, 0x75facdfcu, 0x143247adu, 0xb269c15eu, 0x50a13b0fu,
    0xeed8b4c0u, 0x8d102e71u, 0x2b47a822u, 0xc97f21d3u, 0x67b69b84u, 0x05ee1535u, 0xa4258ee6u, 0x425d0897u,
    0xe0948248u, 0x7ecbfbf9u, 0x1d0375aau, 0xbb3aef5bu, 0x5972690cu, 0xf7a9e2bdu, 0x95e15c6eu, 0x3418d61fu,
    0xd2504fd0u, 0x7087c981u, 0x0ebf4332u, 0xacf6bce3u, 0x4b2e3694u, 0xe965b045u, 0x879d29f6u, 0x25d4a3a7u,
    0xc40c1d58u, 0x62439709u, 0x007b10bau, 0x9eb28a6bu, 0x3cea041cu, 0xdb217dcdu, 0x7958f77eu, 0x1790712fu,
    0xb5c7eae0u, 0x53ff6491u, 0xf236de42u, 0x906e57f3u, 0x2ea5d1a4u, 0xccdd4b55u, 0x6b14c506u, 0x094c3eb7u,
};

struct bshim_219_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_219_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_219_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_219_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_219_reset(struct bshim_219_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001a7675u;
    return 0;
}

