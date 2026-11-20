/* bshim_272 -- board support shim generated from the 0272 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_272_tab0[96] = {
    0xc979ec30u, 0x67b165e1u, 0x05e8df92u, 0xa4205943u, 0x4257d2f4u, 0xe08f4ca5u, 0x7ec6c656u, 0x1cfe4007u,
    0xbb35b9b8u, 0x596d3369u, 0xf7a4ad1au, 0x95dc26cbu, 0x3413a07cu, 0xd24b1a2du, 0x708293deu, 0x0eba0d8fu,
    0xacf18740u, 0x4b2900f1u, 0xe9607aa2u, 0x8797f453u, 0x25cf6e04u, 0xc406e7b5u, 0x623e6166u, 0x0075db17u,
    0x9ead54c8u, 0x3ce4ce79u, 0xdb1c482au, 0x7953c1dbu, 0x178b3b8cu, 0xb5c2b53du, 0x53fa2eeeu, 0xf231a89fu,
    0x90692250u, 0x2ea09c01u, 0xccd815b2u, 0x6b0f8f63u, 0x09470914u, 0xa77e82c5u, 0x45b5fc76u, 0xe3ed7627u,
    0x8224efd8u, 0x205c6989u, 0xbe93e33au, 0x5ccb5cebu, 0xfb02d69cu, 0x993a504du, 0x3771c9feu, 0xd5a943afu,
    0x73e0bd60u, 0x12183711u, 0xb04fb0c2u, 0x4e872a73u, 0xecbea424u, 0x8af61dd5u, 0x292d9786u, 0xc7651137u,
    0x659c8ae8u, 0x03d40499u, 0xa20b7e4au, 0x4042f7fbu, 0xde7a71acu, 0x7cb1eb5du, 0x1ae9650eu, 0xb920debfu,
    0x57585870u, 0xf58fd221u, 0x93c74bd2u, 0x31fec583u, 0xd0363f34u, 0x6e6db8e5u, 0x0ca53296u, 0xaadcac47u,
    0x491425f8u, 0xe74b9fa9u, 0x8583195au, 0x23ba930bu, 0xc1f20cbcu, 0x6029866du, 0xfe61001eu, 0x9c9879cfu,
    0x3acff380u, 0xd9076d31u, 0x773ee6e2u, 0x15766093u, 0xb3adda44u, 0x51e553f5u, 0xf01ccda6u, 0x8e544757u,
    0x2c8bc108u, 0xcac33ab9u, 0x68fab46au, 0x07322e1bu, 0xa569a7ccu, 0x43a1217du, 0xe1d89b2eu, 0x801014dfu,
};

static const uint32_t bshim_272_tab1[96] = {
    0x4b2900f1u, 0xe9607aa2u, 0x8797f453u, 0x25cf6e04u, 0xc406e7b5u, 0x623e6166u, 0x0075db17u, 0x9ead54c8u,
    0x3ce4ce79u, 0xdb1c482au, 0x7953c1dbu, 0x178b3b8cu, 0xb5c2b53du, 0x53fa2eeeu, 0xf231a89fu, 0x90692250u,
    0x2ea09c01u, 0xccd815b2u, 0x6b0f8f63u, 0x09470914u, 0xa77e82c5u, 0x45b5fc76u, 0xe3ed7627u, 0x8224efd8u,
    0x205c6989u, 0xbe93e33au, 0x5ccb5cebu, 0xfb02d69cu, 0x993a504du, 0x3771c9feu, 0xd5a943afu, 0x73e0bd60u,
    0x12183711u, 0xb04fb0c2u, 0x4e872a73u, 0xecbea424u, 0x8af61dd5u, 0x292d9786u, 0xc7651137u, 0x659c8ae8u,
    0x03d40499u, 0xa20b7e4au, 0x4042f7fbu, 0xde7a71acu, 0x7cb1eb5du, 0x1ae9650eu, 0xb920debfu, 0x57585870u,
    0xf58fd221u, 0x93c74bd2u, 0x31fec583u, 0xd0363f34u, 0x6e6db8e5u, 0x0ca53296u, 0xaadcac47u, 0x491425f8u,
    0xe74b9fa9u, 0x8583195au, 0x23ba930bu, 0xc1f20cbcu, 0x6029866du, 0xfe61001eu, 0x9c9879cfu, 0x3acff380u,
    0xd9076d31u, 0x773ee6e2u, 0x15766093u, 0xb3adda44u, 0x51e553f5u, 0xf01ccda6u, 0x8e544757u, 0x2c8bc108u,
    0xcac33ab9u, 0x68fab46au, 0x07322e1bu, 0xa569a7ccu, 0x43a1217du, 0xe1d89b2eu, 0x801014dfu, 0x1e478e90u,
    0xbc7f0841u, 0x5ab681f2u, 0xf8edfba3u, 0x97257554u, 0x355cef05u, 0xd39468b6u, 0x71cbe267u, 0x10035c18u,
    0xae3ad5c9u, 0x4c724f7au, 0xeaa9c92bu, 0x88e142dcu, 0x2718bc8du, 0xc550363eu, 0x6387afefu, 0x01bf29a0u,
};

static const uint32_t bshim_272_tab2[96] = {
    0xccd815b2u, 0x6b0f8f63u, 0x09470914u, 0xa77e82c5u, 0x45b5fc76u, 0xe3ed7627u, 0x8224efd8u, 0x205c6989u,
    0xbe93e33au, 0x5ccb5cebu, 0xfb02d69cu, 0x993a504du, 0x3771c9feu, 0xd5a943afu, 0x73e0bd60u, 0x12183711u,
    0xb04fb0c2u, 0x4e872a73u, 0xecbea424u, 0x8af61dd5u, 0x292d9786u, 0xc7651137u, 0x659c8ae8u, 0x03d40499u,
    0xa20b7e4au, 0x4042f7fbu, 0xde7a71acu, 0x7cb1eb5du, 0x1ae9650eu, 0xb920debfu, 0x57585870u, 0xf58fd221u,
    0x93c74bd2u, 0x31fec583u, 0xd0363f34u, 0x6e6db8e5u, 0x0ca53296u, 0xaadcac47u, 0x491425f8u, 0xe74b9fa9u,
    0x8583195au, 0x23ba930bu, 0xc1f20cbcu, 0x6029866du, 0xfe61001eu, 0x9c9879cfu, 0x3acff380u, 0xd9076d31u,
    0x773ee6e2u, 0x15766093u, 0xb3adda44u, 0x51e553f5u, 0xf01ccda6u, 0x8e544757u, 0x2c8bc108u, 0xcac33ab9u,
    0x68fab46au, 0x07322e1bu, 0xa569a7ccu, 0x43a1217du, 0xe1d89b2eu, 0x801014dfu, 0x1e478e90u, 0xbc7f0841u,
    0x5ab681f2u, 0xf8edfba3u, 0x97257554u, 0x355cef05u, 0xd39468b6u, 0x71cbe267u, 0x10035c18u, 0xae3ad5c9u,
    0x4c724f7au, 0xeaa9c92bu, 0x88e142dcu, 0x2718bc8du, 0xc550363eu, 0x6387afefu, 0x01bf29a0u, 0x9ff6a351u,
    0x3e2e1d02u, 0xdc6596b3u, 0x7a9d1064u, 0x18d48a15u, 0xb70c03c6u, 0x55437d77u, 0xf37af728u, 0x91b270d9u,
    0x2fe9ea8au, 0xce21643bu, 0x6c58ddecu, 0x0a90579du, 0xa8c7d14eu, 0x46ff4affu, 0xe536c4b0u, 0x836e3e61u,
};

static const uint32_t bshim_272_tab3[96] = {
    0x4e872a73u, 0xecbea424u, 0x8af61dd5u, 0x292d9786u, 0xc7651137u, 0x659c8ae8u, 0x03d40499u, 0xa20b7e4au,
    0x4042f7fbu, 0xde7a71acu, 0x7cb1eb5du, 0x1ae9650eu, 0xb920debfu, 0x57585870u, 0xf58fd221u, 0x93c74bd2u,
    0x31fec583u, 0xd0363f34u, 0x6e6db8e5u, 0x0ca53296u, 0xaadcac47u, 0x491425f8u, 0xe74b9fa9u, 0x8583195au,
    0x23ba930bu, 0xc1f20cbcu, 0x6029866du, 0xfe61001eu, 0x9c9879cfu, 0x3acff380u, 0xd9076d31u, 0x773ee6e2u,
    0x15766093u, 0xb3adda44u, 0x51e553f5u, 0xf01ccda6u, 0x8e544757u, 0x2c8bc108u, 0xcac33ab9u, 0x68fab46au,
    0x07322e1bu, 0xa569a7ccu, 0x43a1217du, 0xe1d89b2eu, 0x801014dfu, 0x1e478e90u, 0xbc7f0841u, 0x5ab681f2u,
    0xf8edfba3u, 0x97257554u, 0x355cef05u, 0xd39468b6u, 0x71cbe267u, 0x10035c18u, 0xae3ad5c9u, 0x4c724f7au,
    0xeaa9c92bu, 0x88e142dcu, 0x2718bc8du, 0xc550363eu, 0x6387afefu, 0x01bf29a0u, 0x9ff6a351u, 0x3e2e1d02u,
    0xdc6596b3u, 0x7a9d1064u, 0x18d48a15u, 0xb70c03c6u, 0x55437d77u, 0xf37af728u, 0x91b270d9u, 0x2fe9ea8au,
    0xce21643bu, 0x6c58ddecu, 0x0a90579du, 0xa8c7d14eu, 0x46ff4affu, 0xe536c4b0u, 0x836e3e61u, 0x21a5b812u,
    0xbfdd31c3u, 0x5e14ab74u, 0xfc4c2525u, 0x9a839ed6u, 0x38bb1887u, 0xd6f29238u, 0x752a0be9u, 0x1361859au,
    0xb198ff4bu, 0x4fd078fcu, 0xee07f2adu, 0x8c3f6c5eu, 0x2a76e60fu, 0xc8ae5fc0u, 0x66e5d971u, 0x051d5322u,
};

static const uint32_t bshim_272_tab4[96] = {
    0xd0363f34u, 0x6e6db8e5u, 0x0ca53296u, 0xaadcac47u, 0x491425f8u, 0xe74b9fa9u, 0x8583195au, 0x23ba930bu,
    0xc1f20cbcu, 0x6029866du, 0xfe61001eu, 0x9c9879cfu, 0x3acff380u, 0xd9076d31u, 0x773ee6e2u, 0x15766093u,
    0xb3adda44u, 0x51e553f5u, 0xf01ccda6u, 0x8e544757u, 0x2c8bc108u, 0xcac33ab9u, 0x68fab46au, 0x07322e1bu,
    0xa569a7ccu, 0x43a1217du, 0xe1d89b2eu, 0x801014dfu, 0x1e478e90u, 0xbc7f0841u, 0x5ab681f2u, 0xf8edfba3u,
    0x97257554u, 0x355cef05u, 0xd39468b6u, 0x71cbe267u, 0x10035c18u, 0xae3ad5c9u, 0x4c724f7au, 0xeaa9c92bu,
    0x88e142dcu, 0x2718bc8du, 0xc550363eu, 0x6387afefu, 0x01bf29a0u, 0x9ff6a351u, 0x3e2e1d02u, 0xdc6596b3u,
    0x7a9d1064u, 0x18d48a15u, 0xb70c03c6u, 0x55437d77u, 0xf37af728u, 0x91b270d9u, 0x2fe9ea8au, 0xce21643bu,
    0x6c58ddecu, 0x0a90579du, 0xa8c7d14eu, 0x46ff4affu, 0xe536c4b0u, 0x836e3e61u, 0x21a5b812u, 0xbfdd31c3u,
    0x5e14ab74u, 0xfc4c2525u, 0x9a839ed6u, 0x38bb1887u, 0xd6f29238u, 0x752a0be9u, 0x1361859au, 0xb198ff4bu,
    0x4fd078fcu, 0xee07f2adu, 0x8c3f6c5eu, 0x2a76e60fu, 0xc8ae5fc0u, 0x66e5d971u, 0x051d5322u, 0xa354ccd3u,
    0x418c4684u, 0xdfc3c035u, 0x7dfb39e6u, 0x1c32b397u, 0xba6a2d48u, 0x58a1a6f9u, 0xf6d920aau, 0x95109a5bu,
    0x3348140cu, 0xd17f8dbdu, 0x6fb7076eu, 0x0dee811fu, 0xac25fad0u, 0x4a5d7481u, 0xe894ee32u, 0x86cc67e3u,
};

static const uint32_t bshim_272_tab5[96] = {
    0x51e553f5u, 0xf01ccda6u, 0x8e544757u, 0x2c8bc108u, 0xcac33ab9u, 0x68fab46au, 0x07322e1bu, 0xa569a7ccu,
    0x43a1217du, 0xe1d89b2eu, 0x801014dfu, 0x1e478e90u, 0xbc7f0841u, 0x5ab681f2u, 0xf8edfba3u, 0x97257554u,
    0x355cef05u, 0xd39468b6u, 0x71cbe267u, 0x10035c18u, 0xae3ad5c9u, 0x4c724f7au, 0xeaa9c92bu, 0x88e142dcu,
    0x2718bc8du, 0xc550363eu, 0x6387afefu, 0x01bf29a0u, 0x9ff6a351u, 0x3e2e1d02u, 0xdc6596b3u, 0x7a9d1064u,
    0x18d48a15u, 0xb70c03c6u, 0x55437d77u, 0xf37af728u, 0x91b270d9u, 0x2fe9ea8au, 0xce21643bu, 0x6c58ddecu,
    0x0a90579du, 0xa8c7d14eu, 0x46ff4affu, 0xe536c4b0u, 0x836e3e61u, 0x21a5b812u, 0xbfdd31c3u, 0x5e14ab74u,
    0xfc4c2525u, 0x9a839ed6u, 0x38bb1887u, 0xd6f29238u, 0x752a0be9u, 0x1361859au, 0xb198ff4bu, 0x4fd078fcu,
    0xee07f2adu, 0x8c3f6c5eu, 0x2a76e60fu, 0xc8ae5fc0u, 0x66e5d971u, 0x051d5322u, 0xa354ccd3u, 0x418c4684u,
    0xdfc3c035u, 0x7dfb39e6u, 0x1c32b397u, 0xba6a2d48u, 0x58a1a6f9u, 0xf6d920aau, 0x95109a5bu, 0x3348140cu,
    0xd17f8dbdu, 0x6fb7076eu, 0x0dee811fu, 0xac25fad0u, 0x4a5d7481u, 0xe894ee32u, 0x86cc67e3u, 0x2503e194u,
    0xc33b5b45u, 0x6172d4f6u, 0xffaa4ea7u, 0x9de1c858u, 0x3c194209u, 0xda50bbbau, 0x7888356bu, 0x16bfaf1cu,
    0xb4f728cdu, 0x532ea27eu, 0xf1661c2fu, 0x8f9d95e0u, 0x2dd50f91u, 0xcc0c8942u, 0x6a4402f3u, 0x087b7ca4u,
};

static const uint32_t bshim_272_tab6[96] = {
    0xd39468b6u, 0x71cbe267u, 0x10035c18u, 0xae3ad5c9u, 0x4c724f7au, 0xeaa9c92bu, 0x88e142dcu, 0x2718bc8du,
    0xc550363eu, 0x6387afefu, 0x01bf29a0u, 0x9ff6a351u, 0x3e2e1d02u, 0xdc6596b3u, 0x7a9d1064u, 0x18d48a15u,
    0xb70c03c6u, 0x55437d77u, 0xf37af728u, 0x91b270d9u, 0x2fe9ea8au, 0xce21643bu, 0x6c58ddecu, 0x0a90579du,
    0xa8c7d14eu, 0x46ff4affu, 0xe536c4b0u, 0x836e3e61u, 0x21a5b812u, 0xbfdd31c3u, 0x5e14ab74u, 0xfc4c2525u,
    0x9a839ed6u, 0x38bb1887u, 0xd6f29238u, 0x752a0be9u, 0x1361859au, 0xb198ff4bu, 0x4fd078fcu, 0xee07f2adu,
    0x8c3f6c5eu, 0x2a76e60fu, 0xc8ae5fc0u, 0x66e5d971u, 0x051d5322u, 0xa354ccd3u, 0x418c4684u, 0xdfc3c035u,
    0x7dfb39e6u, 0x1c32b397u, 0xba6a2d48u, 0x58a1a6f9u, 0xf6d920aau, 0x95109a5bu, 0x3348140cu, 0xd17f8dbdu,
    0x6fb7076eu, 0x0dee811fu, 0xac25fad0u, 0x4a5d7481u, 0xe894ee32u, 0x86cc67e3u, 0x2503e194u, 0xc33b5b45u,
    0x6172d4f6u, 0xffaa4ea7u, 0x9de1c858u, 0x3c194209u, 0xda50bbbau, 0x7888356bu, 0x16bfaf1cu, 0xb4f728cdu,
    0x532ea27eu, 0xf1661c2fu, 0x8f9d95e0u, 0x2dd50f91u, 0xcc0c8942u, 0x6a4402f3u, 0x087b7ca4u, 0xa6b2f655u,
    0x44ea7006u, 0xe321e9b7u, 0x81596368u, 0x1f90dd19u, 0xbdc856cau, 0x5bffd07bu, 0xfa374a2cu, 0x986ec3ddu,
    0x36a63d8eu, 0xd4ddb73fu, 0x731530f0u, 0x114caaa1u, 0xaf842452u, 0x4dbb9e03u, 0xebf317b4u, 0x8a2a9165u,
};

static const uint32_t bshim_272_tab7[96] = {
    0x55437d77u, 0xf37af728u, 0x91b270d9u, 0x2fe9ea8au, 0xce21643bu, 0x6c58ddecu, 0x0a90579du, 0xa8c7d14eu,
    0x46ff4affu, 0xe536c4b0u, 0x836e3e61u, 0x21a5b812u, 0xbfdd31c3u, 0x5e14ab74u, 0xfc4c2525u, 0x9a839ed6u,
    0x38bb1887u, 0xd6f29238u, 0x752a0be9u, 0x1361859au, 0xb198ff4bu, 0x4fd078fcu, 0xee07f2adu, 0x8c3f6c5eu,
    0x2a76e60fu, 0xc8ae5fc0u, 0x66e5d971u, 0x051d5322u, 0xa354ccd3u, 0x418c4684u, 0xdfc3c035u, 0x7dfb39e6u,
    0x1c32b397u, 0xba6a2d48u, 0x58a1a6f9u, 0xf6d920aau, 0x95109a5bu, 0x3348140cu, 0xd17f8dbdu, 0x6fb7076eu,
    0x0dee811fu, 0xac25fad0u, 0x4a5d7481u, 0xe894ee32u, 0x86cc67e3u, 0x2503e194u, 0xc33b5b45u, 0x6172d4f6u,
    0xffaa4ea7u, 0x9de1c858u, 0x3c194209u, 0xda50bbbau, 0x7888356bu, 0x16bfaf1cu, 0xb4f728cdu, 0x532ea27eu,
    0xf1661c2fu, 0x8f9d95e0u, 0x2dd50f91u, 0xcc0c8942u, 0x6a4402f3u, 0x087b7ca4u, 0xa6b2f655u, 0x44ea7006u,
    0xe321e9b7u, 0x81596368u, 0x1f90dd19u, 0xbdc856cau, 0x5bffd07bu, 0xfa374a2cu, 0x986ec3ddu, 0x36a63d8eu,
    0xd4ddb73fu, 0x731530f0u, 0x114caaa1u, 0xaf842452u, 0x4dbb9e03u, 0xebf317b4u, 0x8a2a9165u, 0x28620b16u,
    0xc69984c7u, 0x64d0fe78u, 0x03087829u, 0xa13ff1dau, 0x3f776b8bu, 0xddaee53cu, 0x7be65eedu, 0x1a1dd89eu,
    0xb855524fu, 0x568ccc00u, 0xf4c445b1u, 0x92fbbf62u, 0x31333913u, 0xcf6ab2c4u, 0x6da22c75u, 0x0bd9a626u,
};

struct bshim_272_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_272_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_272_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_272_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_272_reset(struct bshim_272_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0020ddf0u;
    return 0;
}

