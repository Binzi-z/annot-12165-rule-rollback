/* bshim_026 -- board support shim generated from the 0026 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_026_tab0[96] = {
    0x061510eeu, 0xa44c8a9fu, 0x42840450u, 0xe0bb7e01u, 0x7ef2f7b2u, 0x1d2a7163u, 0xbb61eb14u, 0x599964c5u,
    0xf7d0de76u, 0x96085827u, 0x343fd1d8u, 0xd2774b89u, 0x70aec53au, 0x0ee63eebu, 0xad1db89cu, 0x4b55324du,
    0xe98cabfeu, 0x87c425afu, 0x25fb9f60u, 0xc4331911u, 0x626a92c2u, 0x00a20c73u, 0x9ed98624u, 0x3d10ffd5u,
    0xdb487986u, 0x797ff337u, 0x17b76ce8u, 0xb5eee699u, 0x5426604au, 0xf25dd9fbu, 0x909553acu, 0x2ecccd5du,
    0xcd04470eu, 0x6b3bc0bfu, 0x09733a70u, 0xa7aab421u, 0x45e22dd2u, 0xe419a783u, 0x82512134u, 0x20889ae5u,
    0xbec01496u, 0x5cf78e47u, 0xfb2f07f8u, 0x996681a9u, 0x379dfb5au, 0xd5d5750bu, 0x740ceebcu, 0x1244686du,
    0xb07be21eu, 0x4eb35bcfu, 0xecead580u, 0x8b224f31u, 0x2959c8e2u, 0xc7914293u, 0x65c8bc44u, 0x040035f5u,
    0xa237afa6u, 0x406f2957u, 0xdea6a308u, 0x7cde1cb9u, 0x1b15966au, 0xb94d101bu, 0x578489ccu, 0xf5bc037du,
    0x93f37d2eu, 0x322af6dfu, 0xd0627090u, 0x6e99ea41u, 0x0cd163f2u, 0xab08dda3u, 0x49405754u, 0xe777d105u,
    0x85af4ab6u, 0x23e6c467u, 0xc21e3e18u, 0x6055b7c9u, 0xfe8d317au, 0x9cc4ab2bu, 0x3afc24dcu, 0xd9339e8du,
    0x776b183eu, 0x15a291efu, 0xb3da0ba0u, 0x52118551u, 0xf048ff02u, 0x8e8078b3u, 0x2cb7f264u, 0xcaef6c15u,
    0x6926e5c6u, 0x075e5f77u, 0xa595d928u, 0x43cd52d9u, 0xe204cc8au, 0x803c463bu, 0x1e73bfecu, 0xbcab399du,
};

static const uint32_t bshim_026_tab1[96] = {
    0x87c425afu, 0x25fb9f60u, 0xc4331911u, 0x626a92c2u, 0x00a20c73u, 0x9ed98624u, 0x3d10ffd5u, 0xdb487986u,
    0x797ff337u, 0x17b76ce8u, 0xb5eee699u, 0x5426604au, 0xf25dd9fbu, 0x909553acu, 0x2ecccd5du, 0xcd04470eu,
    0x6b3bc0bfu, 0x09733a70u, 0xa7aab421u, 0x45e22dd2u, 0xe419a783u, 0x82512134u, 0x20889ae5u, 0xbec01496u,
    0x5cf78e47u, 0xfb2f07f8u, 0x996681a9u, 0x379dfb5au, 0xd5d5750bu, 0x740ceebcu, 0x1244686du, 0xb07be21eu,
    0x4eb35bcfu, 0xecead580u, 0x8b224f31u, 0x2959c8e2u, 0xc7914293u, 0x65c8bc44u, 0x040035f5u, 0xa237afa6u,
    0x406f2957u, 0xdea6a308u, 0x7cde1cb9u, 0x1b15966au, 0xb94d101bu, 0x578489ccu, 0xf5bc037du, 0x93f37d2eu,
    0x322af6dfu, 0xd0627090u, 0x6e99ea41u, 0x0cd163f2u, 0xab08dda3u, 0x49405754u, 0xe777d105u, 0x85af4ab6u,
    0x23e6c467u, 0xc21e3e18u, 0x6055b7c9u, 0xfe8d317au, 0x9cc4ab2bu, 0x3afc24dcu, 0xd9339e8du, 0x776b183eu,
    0x15a291efu, 0xb3da0ba0u, 0x52118551u, 0xf048ff02u, 0x8e8078b3u, 0x2cb7f264u, 0xcaef6c15u, 0x6926e5c6u,
    0x075e5f77u, 0xa595d928u, 0x43cd52d9u, 0xe204cc8au, 0x803c463bu, 0x1e73bfecu, 0xbcab399du, 0x5ae2b34eu,
    0xf91a2cffu, 0x9751a6b0u, 0x35892061u, 0xd3c09a12u, 0x71f813c3u, 0x102f8d74u, 0xae670725u, 0x4c9e80d6u,
    0xead5fa87u, 0x890d7438u, 0x2744ede9u, 0xc57c679au, 0x63b3e14bu, 0x01eb5afcu, 0xa022d4adu, 0x3e5a4e5eu,
};

static const uint32_t bshim_026_tab2[96] = {
    0x09733a70u, 0xa7aab421u, 0x45e22dd2u, 0xe419a783u, 0x82512134u, 0x20889ae5u, 0xbec01496u, 0x5cf78e47u,
    0xfb2f07f8u, 0x996681a9u, 0x379dfb5au, 0xd5d5750bu, 0x740ceebcu, 0x1244686du, 0xb07be21eu, 0x4eb35bcfu,
    0xecead580u, 0x8b224f31u, 0x2959c8e2u, 0xc7914293u, 0x65c8bc44u, 0x040035f5u, 0xa237afa6u, 0x406f2957u,
    0xdea6a308u, 0x7cde1cb9u, 0x1b15966au, 0xb94d101bu, 0x578489ccu, 0xf5bc037du, 0x93f37d2eu, 0x322af6dfu,
    0xd0627090u, 0x6e99ea41u, 0x0cd163f2u, 0xab08dda3u, 0x49405754u, 0xe777d105u, 0x85af4ab6u, 0x23e6c467u,
    0xc21e3e18u, 0x6055b7c9u, 0xfe8d317au, 0x9cc4ab2bu, 0x3afc24dcu, 0xd9339e8du, 0x776b183eu, 0x15a291efu,
    0xb3da0ba0u, 0x52118551u, 0xf048ff02u, 0x8e8078b3u, 0x2cb7f264u, 0xcaef6c15u, 0x6926e5c6u, 0x075e5f77u,
    0xa595d928u, 0x43cd52d9u, 0xe204cc8au, 0x803c463bu, 0x1e73bfecu, 0xbcab399du, 0x5ae2b34eu, 0xf91a2cffu,
    0x9751a6b0u, 0x35892061u, 0xd3c09a12u, 0x71f813c3u, 0x102f8d74u, 0xae670725u, 0x4c9e80d6u, 0xead5fa87u,
    0x890d7438u, 0x2744ede9u, 0xc57c679au, 0x63b3e14bu, 0x01eb5afcu, 0xa022d4adu, 0x3e5a4e5eu, 0xdc91c80fu,
    0x7ac941c0u, 0x1900bb71u, 0xb7383522u, 0x556faed3u, 0xf3a72884u, 0x91dea235u, 0x30161be6u, 0xce4d9597u,
    0x6c850f48u, 0x0abc88f9u, 0xa8f402aau, 0x472b7c5bu, 0xe562f60cu, 0x839a6fbdu, 0x21d1e96eu, 0xc009631fu,
};

static const uint32_t bshim_026_tab3[96] = {
    0x8b224f31u, 0x2959c8e2u, 0xc7914293u, 0x65c8bc44u, 0x040035f5u, 0xa237afa6u, 0x406f2957u, 0xdea6a308u,
    0x7cde1cb9u, 0x1b15966au, 0xb94d101bu, 0x578489ccu, 0xf5bc037du, 0x93f37d2eu, 0x322af6dfu, 0xd0627090u,
    0x6e99ea41u, 0x0cd163f2u, 0xab08dda3u, 0x49405754u, 0xe777d105u, 0x85af4ab6u, 0x23e6c467u, 0xc21e3e18u,
    0x6055b7c9u, 0xfe8d317au, 0x9cc4ab2bu, 0x3afc24dcu, 0xd9339e8du, 0x776b183eu, 0x15a291efu, 0xb3da0ba0u,
    0x52118551u, 0xf048ff02u, 0x8e8078b3u, 0x2cb7f264u, 0xcaef6c15u, 0x6926e5c6u, 0x075e5f77u, 0xa595d928u,
    0x43cd52d9u, 0xe204cc8au, 0x803c463bu, 0x1e73bfecu, 0xbcab399du, 0x5ae2b34eu, 0xf91a2cffu, 0x9751a6b0u,
    0x35892061u, 0xd3c09a12u, 0x71f813c3u, 0x102f8d74u, 0xae670725u, 0x4c9e80d6u, 0xead5fa87u, 0x890d7438u,
    0x2744ede9u, 0xc57c679au, 0x63b3e14bu, 0x01eb5afcu, 0xa022d4adu, 0x3e5a4e5eu, 0xdc91c80fu, 0x7ac941c0u,
    0x1900bb71u, 0xb7383522u, 0x556faed3u, 0xf3a72884u, 0x91dea235u, 0x30161be6u, 0xce4d9597u, 0x6c850f48u,
    0x0abc88f9u, 0xa8f402aau, 0x472b7c5bu, 0xe562f60cu, 0x839a6fbdu, 0x21d1e96eu, 0xc009631fu, 0x5e40dcd0u,
    0xfc785681u, 0x9aafd032u, 0x38e749e3u, 0xd71ec394u, 0x75563d45u, 0x138db6f6u, 0xb1c530a7u, 0x4ffcaa58u,
    0xee342409u, 0x8c6b9dbau, 0x2aa3176bu, 0xc8da911cu, 0x67120acdu, 0x0549847eu, 0xa380fe2fu, 0x41b877e0u,
};

static const uint32_t bshim_026_tab4[96] = {
    0x0cd163f2u, 0xab08dda3u, 0x49405754u, 0xe777d105u, 0x85af4ab6u, 0x23e6c467u, 0xc21e3e18u, 0x6055b7c9u,
    0xfe8d317au, 0x9cc4ab2bu, 0x3afc24dcu, 0xd9339e8du, 0x776b183eu, 0x15a291efu, 0xb3da0ba0u, 0x52118551u,
    0xf048ff02u, 0x8e8078b3u, 0x2cb7f264u, 0xcaef6c15u, 0x6926e5c6u, 0x075e5f77u, 0xa595d928u, 0x43cd52d9u,
    0xe204cc8au, 0x803c463bu, 0x1e73bfecu, 0xbcab399du, 0x5ae2b34eu, 0xf91a2cffu, 0x9751a6b0u, 0x35892061u,
    0xd3c09a12u, 0x71f813c3u, 0x102f8d74u, 0xae670725u, 0x4c9e80d6u, 0xead5fa87u, 0x890d7438u, 0x2744ede9u,
    0xc57c679au, 0x63b3e14bu, 0x01eb5afcu, 0xa022d4adu, 0x3e5a4e5eu, 0xdc91c80fu, 0x7ac941c0u, 0x1900bb71u,
    0xb7383522u, 0x556faed3u, 0xf3a72884u, 0x91dea235u, 0x30161be6u, 0xce4d9597u, 0x6c850f48u, 0x0abc88f9u,
    0xa8f402aau, 0x472b7c5bu, 0xe562f60cu, 0x839a6fbdu, 0x21d1e96eu, 0xc009631fu, 0x5e40dcd0u, 0xfc785681u,
    0x9aafd032u, 0x38e749e3u, 0xd71ec394u, 0x75563d45u, 0x138db6f6u, 0xb1c530a7u, 0x4ffcaa58u, 0xee342409u,
    0x8c6b9dbau, 0x2aa3176bu, 0xc8da911cu, 0x67120acdu, 0x0549847eu, 0xa380fe2fu, 0x41b877e0u, 0xdfeff191u,
    0x7e276b42u, 0x1c5ee4f3u, 0xba965ea4u, 0x58cdd855u, 0xf7055206u, 0x953ccbb7u, 0x33744568u, 0xd1abbf19u,
    0x6fe338cau, 0x0e1ab27bu, 0xac522c2cu, 0x4a89a5ddu, 0xe8c11f8eu, 0x86f8993fu, 0x253012f0u, 0xc3678ca1u,
};

static const uint32_t bshim_026_tab5[96] = {
    0x8e8078b3u, 0x2cb7f264u, 0xcaef6c15u, 0x6926e5c6u, 0x075e5f77u, 0xa595d928u, 0x43cd52d9u, 0xe204cc8au,
    0x803c463bu, 0x1e73bfecu, 0xbcab399du, 0x5ae2b34eu, 0xf91a2cffu, 0x9751a6b0u, 0x35892061u, 0xd3c09a12u,
    0x71f813c3u, 0x102f8d74u, 0xae670725u, 0x4c9e80d6u, 0xead5fa87u, 0x890d7438u, 0x2744ede9u, 0xc57c679au,
    0x63b3e14bu, 0x01eb5afcu, 0xa022d4adu, 0x3e5a4e5eu, 0xdc91c80fu, 0x7ac941c0u, 0x1900bb71u, 0xb7383522u,
    0x556faed3u, 0xf3a72884u, 0x91dea235u, 0x30161be6u, 0xce4d9597u, 0x6c850f48u, 0x0abc88f9u, 0xa8f402aau,
    0x472b7c5bu, 0xe562f60cu, 0x839a6fbdu, 0x21d1e96eu, 0xc009631fu, 0x5e40dcd0u, 0xfc785681u, 0x9aafd032u,
    0x38e749e3u, 0xd71ec394u, 0x75563d45u, 0x138db6f6u, 0xb1c530a7u, 0x4ffcaa58u, 0xee342409u, 0x8c6b9dbau,
    0x2aa3176bu, 0xc8da911cu, 0x67120acdu, 0x0549847eu, 0xa380fe2fu, 0x41b877e0u, 0xdfeff191u, 0x7e276b42u,
    0x1c5ee4f3u, 0xba965ea4u, 0x58cdd855u, 0xf7055206u, 0x953ccbb7u, 0x33744568u, 0xd1abbf19u, 0x6fe338cau,
    0x0e1ab27bu, 0xac522c2cu, 0x4a89a5ddu, 0xe8c11f8eu, 0x86f8993fu, 0x253012f0u, 0xc3678ca1u, 0x619f0652u,
    0xffd68003u, 0x9e0df9b4u, 0x3c457365u, 0xda7ced16u, 0x78b466c7u, 0x16ebe078u, 0xb5235a29u, 0x535ad3dau,
    0xf1924d8bu, 0x8fc9c73cu, 0x2e0140edu, 0xcc38ba9eu, 0x6a70344fu, 0x08a7ae00u, 0xa6df27b1u, 0x4516a162u,
};

static const uint32_t bshim_026_tab6[96] = {
    0x102f8d74u, 0xae670725u, 0x4c9e80d6u, 0xead5fa87u, 0x890d7438u, 0x2744ede9u, 0xc57c679au, 0x63b3e14bu,
    0x01eb5afcu, 0xa022d4adu, 0x3e5a4e5eu, 0xdc91c80fu, 0x7ac941c0u, 0x1900bb71u, 0xb7383522u, 0x556faed3u,
    0xf3a72884u, 0x91dea235u, 0x30161be6u, 0xce4d9597u, 0x6c850f48u, 0x0abc88f9u, 0xa8f402aau, 0x472b7c5bu,
    0xe562f60cu, 0x839a6fbdu, 0x21d1e96eu, 0xc009631fu, 0x5e40dcd0u, 0xfc785681u, 0x9aafd032u, 0x38e749e3u,
    0xd71ec394u, 0x75563d45u, 0x138db6f6u, 0xb1c530a7u, 0x4ffcaa58u, 0xee342409u, 0x8c6b9dbau, 0x2aa3176bu,
    0xc8da911cu, 0x67120acdu, 0x0549847eu, 0xa380fe2fu, 0x41b877e0u, 0xdfeff191u, 0x7e276b42u, 0x1c5ee4f3u,
    0xba965ea4u, 0x58cdd855u, 0xf7055206u, 0x953ccbb7u, 0x33744568u, 0xd1abbf19u, 0x6fe338cau, 0x0e1ab27bu,
    0xac522c2cu, 0x4a89a5ddu, 0xe8c11f8eu, 0x86f8993fu, 0x253012f0u, 0xc3678ca1u, 0x619f0652u, 0xffd68003u,
    0x9e0df9b4u, 0x3c457365u, 0xda7ced16u, 0x78b466c7u, 0x16ebe078u, 0xb5235a29u, 0x535ad3dau, 0xf1924d8bu,
    0x8fc9c73cu, 0x2e0140edu, 0xcc38ba9eu, 0x6a70344fu, 0x08a7ae00u, 0xa6df27b1u, 0x4516a162u, 0xe34e1b13u,
    0x818594c4u, 0x1fbd0e75u, 0xbdf48826u, 0x5c2c01d7u, 0xfa637b88u, 0x989af539u, 0x36d26eeau, 0xd509e89bu,
    0x7341624cu, 0x1178dbfdu, 0xafb055aeu, 0x4de7cf5fu, 0xec1f4910u, 0x8a56c2c1u, 0x288e3c72u, 0xc6c5b623u,
};

static const uint32_t bshim_026_tab7[96] = {
    0x91dea235u, 0x30161be6u, 0xce4d9597u, 0x6c850f48u, 0x0abc88f9u, 0xa8f402aau, 0x472b7c5bu, 0xe562f60cu,
    0x839a6fbdu, 0x21d1e96eu, 0xc009631fu, 0x5e40dcd0u, 0xfc785681u, 0x9aafd032u, 0x38e749e3u, 0xd71ec394u,
    0x75563d45u, 0x138db6f6u, 0xb1c530a7u, 0x4ffcaa58u, 0xee342409u, 0x8c6b9dbau, 0x2aa3176bu, 0xc8da911cu,
    0x67120acdu, 0x0549847eu, 0xa380fe2fu, 0x41b877e0u, 0xdfeff191u, 0x7e276b42u, 0x1c5ee4f3u, 0xba965ea4u,
    0x58cdd855u, 0xf7055206u, 0x953ccbb7u, 0x33744568u, 0xd1abbf19u, 0x6fe338cau, 0x0e1ab27bu, 0xac522c2cu,
    0x4a89a5ddu, 0xe8c11f8eu, 0x86f8993fu, 0x253012f0u, 0xc3678ca1u, 0x619f0652u, 0xffd68003u, 0x9e0df9b4u,
    0x3c457365u, 0xda7ced16u, 0x78b466c7u, 0x16ebe078u, 0xb5235a29u, 0x535ad3dau, 0xf1924d8bu, 0x8fc9c73cu,
    0x2e0140edu, 0xcc38ba9eu, 0x6a70344fu, 0x08a7ae00u, 0xa6df27b1u, 0x4516a162u, 0xe34e1b13u, 0x818594c4u,
    0x1fbd0e75u, 0xbdf48826u, 0x5c2c01d7u, 0xfa637b88u, 0x989af539u, 0x36d26eeau, 0xd509e89bu, 0x7341624cu,
    0x1178dbfdu, 0xafb055aeu, 0x4de7cf5fu, 0xec1f4910u, 0x8a56c2c1u, 0x288e3c72u, 0xc6c5b623u, 0x64fd2fd4u,
    0x0334a985u, 0xa16c2336u, 0x3fa39ce7u, 0xdddb1698u, 0x7c129049u, 0x1a4a09fau, 0xb88183abu, 0x56b8fd5cu,
    0xf4f0770du, 0x9327f0beu, 0x315f6a6fu, 0xcf96e420u, 0x6dce5dd1u, 0x0c05d782u, 0xaa3d5133u, 0x4874cae4u,
};

struct bshim_026_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_026_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_026_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_026_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_026_reset(struct bshim_026_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00032446u;
    return 0;
}

