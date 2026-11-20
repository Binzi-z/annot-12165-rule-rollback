/* bshim_025 -- board support shim generated from the 0025 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_025_tab0[96] = {
    0x0fb1cb5bu, 0xade9450cu, 0x4c20bebdu, 0xea58386eu, 0x888fb21fu, 0x26c72bd0u, 0xc4fea581u, 0x63361f32u,
    0x016d98e3u, 0x9fa51294u, 0x3ddc8c45u, 0xdc1405f6u, 0x7a4b7fa7u, 0x1882f958u, 0xb6ba7309u, 0x54f1ecbau,
    0xf329666bu, 0x9160e01cu, 0x2f9859cdu, 0xcdcfd37eu, 0x6c074d2fu, 0x0a3ec6e0u, 0xa8764091u, 0x46adba42u,
    0xe4e533f3u, 0x831cada4u, 0x21542755u, 0xbf8ba106u, 0x5dc31ab7u, 0xfbfa9468u, 0x9a320e19u, 0x386987cau,
    0xd6a1017bu, 0x74d87b2cu, 0x130ff4ddu, 0xb1476e8eu, 0x4f7ee83fu, 0xedb661f0u, 0x8beddba1u, 0x2a255552u,
    0xc85ccf03u, 0x669448b4u, 0x04cbc265u, 0xa3033c16u, 0x413ab5c7u, 0xdf722f78u, 0x7da9a929u, 0x1be122dau,
    0xba189c8bu, 0x5850163cu, 0xf6878fedu, 0x94bf099eu, 0x32f6834fu, 0xd12dfd00u, 0x6f6576b1u, 0x0d9cf062u,
    0xabd46a13u, 0x4a0be3c4u, 0xe8435d75u, 0x867ad726u, 0x24b250d7u, 0xc2e9ca88u, 0x61214439u, 0xff58bdeau,
    0x9d90379bu, 0x3bc7b14cu, 0xd9ff2afdu, 0x7836a4aeu, 0x166e1e5fu, 0xb4a59810u, 0x52dd11c1u, 0xf1148b72u,
    0x8f4c0523u, 0x2d837ed4u, 0xcbbaf885u, 0x69f27236u, 0x0829ebe7u, 0xa6616598u, 0x4498df49u, 0xe2d058fau,
    0x8107d2abu, 0x1f3f4c5cu, 0xbd76c60du, 0x5bae3fbeu, 0xf9e5b96fu, 0x981d3320u, 0x3654acd1u, 0xd48c2682u,
    0x72c3a033u, 0x10fb19e4u, 0xaf329395u, 0x4d6a0d46u, 0xeba186f7u, 0x89d900a8u, 0x28107a59u, 0xc647f40au,
};

static const uint32_t bshim_025_tab1[96] = {
    0x9160e01cu, 0x2f9859cdu, 0xcdcfd37eu, 0x6c074d2fu, 0x0a3ec6e0u, 0xa8764091u, 0x46adba42u, 0xe4e533f3u,
    0x831cada4u, 0x21542755u, 0xbf8ba106u, 0x5dc31ab7u, 0xfbfa9468u, 0x9a320e19u, 0x386987cau, 0xd6a1017bu,
    0x74d87b2cu, 0x130ff4ddu, 0xb1476e8eu, 0x4f7ee83fu, 0xedb661f0u, 0x8beddba1u, 0x2a255552u, 0xc85ccf03u,
    0x669448b4u, 0x04cbc265u, 0xa3033c16u, 0x413ab5c7u, 0xdf722f78u, 0x7da9a929u, 0x1be122dau, 0xba189c8bu,
    0x5850163cu, 0xf6878fedu, 0x94bf099eu, 0x32f6834fu, 0xd12dfd00u, 0x6f6576b1u, 0x0d9cf062u, 0xabd46a13u,
    0x4a0be3c4u, 0xe8435d75u, 0x867ad726u, 0x24b250d7u, 0xc2e9ca88u, 0x61214439u, 0xff58bdeau, 0x9d90379bu,
    0x3bc7b14cu, 0xd9ff2afdu, 0x7836a4aeu, 0x166e1e5fu, 0xb4a59810u, 0x52dd11c1u, 0xf1148b72u, 0x8f4c0523u,
    0x2d837ed4u, 0xcbbaf885u, 0x69f27236u, 0x0829ebe7u, 0xa6616598u, 0x4498df49u, 0xe2d058fau, 0x8107d2abu,
    0x1f3f4c5cu, 0xbd76c60du, 0x5bae3fbeu, 0xf9e5b96fu, 0x981d3320u, 0x3654acd1u, 0xd48c2682u, 0x72c3a033u,
    0x10fb19e4u, 0xaf329395u, 0x4d6a0d46u, 0xeba186f7u, 0x89d900a8u, 0x28107a59u, 0xc647f40au, 0x647f6dbbu,
    0x02b6e76cu, 0xa0ee611du, 0x3f25daceu, 0xdd5d547fu, 0x7b94ce30u, 0x19cc47e1u, 0xb803c192u, 0x563b3b43u,
    0xf472b4f4u, 0x92aa2ea5u, 0x30e1a856u, 0xcf192207u, 0x6d509bb8u, 0x0b881569u, 0xa9bf8f1au, 0x47f708cbu,
};

static const uint32_t bshim_025_tab2[96] = {
    0x130ff4ddu, 0xb1476e8eu, 0x4f7ee83fu, 0xedb661f0u, 0x8beddba1u, 0x2a255552u, 0xc85ccf03u, 0x669448b4u,
    0x04cbc265u, 0xa3033c16u, 0x413ab5c7u, 0xdf722f78u, 0x7da9a929u, 0x1be122dau, 0xba189c8bu, 0x5850163cu,
    0xf6878fedu, 0x94bf099eu, 0x32f6834fu, 0xd12dfd00u, 0x6f6576b1u, 0x0d9cf062u, 0xabd46a13u, 0x4a0be3c4u,
    0xe8435d75u, 0x867ad726u, 0x24b250d7u, 0xc2e9ca88u, 0x61214439u, 0xff58bdeau, 0x9d90379bu, 0x3bc7b14cu,
    0xd9ff2afdu, 0x7836a4aeu, 0x166e1e5fu, 0xb4a59810u, 0x52dd11c1u, 0xf1148b72u, 0x8f4c0523u, 0x2d837ed4u,
    0xcbbaf885u, 0x69f27236u, 0x0829ebe7u, 0xa6616598u, 0x4498df49u, 0xe2d058fau, 0x8107d2abu, 0x1f3f4c5cu,
    0xbd76c60du, 0x5bae3fbeu, 0xf9e5b96fu, 0x981d3320u, 0x3654acd1u, 0xd48c2682u, 0x72c3a033u, 0x10fb19e4u,
    0xaf329395u, 0x4d6a0d46u, 0xeba186f7u, 0x89d900a8u, 0x28107a59u, 0xc647f40au, 0x647f6dbbu, 0x02b6e76cu,
    0xa0ee611du, 0x3f25daceu, 0xdd5d547fu, 0x7b94ce30u, 0x19cc47e1u, 0xb803c192u, 0x563b3b43u, 0xf472b4f4u,
    0x92aa2ea5u, 0x30e1a856u, 0xcf192207u, 0x6d509bb8u, 0x0b881569u, 0xa9bf8f1au, 0x47f708cbu, 0xe62e827cu,
    0x8465fc2du, 0x229d75deu, 0xc0d4ef8fu, 0x5f0c6940u, 0xfd43e2f1u, 0x9b7b5ca2u, 0x39b2d653u, 0xd7ea5004u,
    0x7621c9b5u, 0x14594366u, 0xb290bd17u, 0x50c836c8u, 0xeeffb079u, 0x8d372a2au, 0x2b6ea3dbu, 0xc9a61d8cu,
};

static const uint32_t bshim_025_tab3[96] = {
    0x94bf099eu, 0x32f6834fu, 0xd12dfd00u, 0x6f6576b1u, 0x0d9cf062u, 0xabd46a13u, 0x4a0be3c4u, 0xe8435d75u,
    0x867ad726u, 0x24b250d7u, 0xc2e9ca88u, 0x61214439u, 0xff58bdeau, 0x9d90379bu, 0x3bc7b14cu, 0xd9ff2afdu,
    0x7836a4aeu, 0x166e1e5fu, 0xb4a59810u, 0x52dd11c1u, 0xf1148b72u, 0x8f4c0523u, 0x2d837ed4u, 0xcbbaf885u,
    0x69f27236u, 0x0829ebe7u, 0xa6616598u, 0x4498df49u, 0xe2d058fau, 0x8107d2abu, 0x1f3f4c5cu, 0xbd76c60du,
    0x5bae3fbeu, 0xf9e5b96fu, 0x981d3320u, 0x3654acd1u, 0xd48c2682u, 0x72c3a033u, 0x10fb19e4u, 0xaf329395u,
    0x4d6a0d46u, 0xeba186f7u, 0x89d900a8u, 0x28107a59u, 0xc647f40au, 0x647f6dbbu, 0x02b6e76cu, 0xa0ee611du,
    0x3f25daceu, 0xdd5d547fu, 0x7b94ce30u, 0x19cc47e1u, 0xb803c192u, 0x563b3b43u, 0xf472b4f4u, 0x92aa2ea5u,
    0x30e1a856u, 0xcf192207u, 0x6d509bb8u, 0x0b881569u, 0xa9bf8f1au, 0x47f708cbu, 0xe62e827cu, 0x8465fc2du,
    0x229d75deu, 0xc0d4ef8fu, 0x5f0c6940u, 0xfd43e2f1u, 0x9b7b5ca2u, 0x39b2d653u, 0xd7ea5004u, 0x7621c9b5u,
    0x14594366u, 0xb290bd17u, 0x50c836c8u, 0xeeffb079u, 0x8d372a2au, 0x2b6ea3dbu, 0xc9a61d8cu, 0x67dd973du,
    0x061510eeu, 0xa44c8a9fu, 0x42840450u, 0xe0bb7e01u, 0x7ef2f7b2u, 0x1d2a7163u, 0xbb61eb14u, 0x599964c5u,
    0xf7d0de76u, 0x96085827u, 0x343fd1d8u, 0xd2774b89u, 0x70aec53au, 0x0ee63eebu, 0xad1db89cu, 0x4b55324du,
};

static const uint32_t bshim_025_tab4[96] = {
    0x166e1e5fu, 0xb4a59810u, 0x52dd11c1u, 0xf1148b72u, 0x8f4c0523u, 0x2d837ed4u, 0xcbbaf885u, 0x69f27236u,
    0x0829ebe7u, 0xa6616598u, 0x4498df49u, 0xe2d058fau, 0x8107d2abu, 0x1f3f4c5cu, 0xbd76c60du, 0x5bae3fbeu,
    0xf9e5b96fu, 0x981d3320u, 0x3654acd1u, 0xd48c2682u, 0x72c3a033u, 0x10fb19e4u, 0xaf329395u, 0x4d6a0d46u,
    0xeba186f7u, 0x89d900a8u, 0x28107a59u, 0xc647f40au, 0x647f6dbbu, 0x02b6e76cu, 0xa0ee611du, 0x3f25daceu,
    0xdd5d547fu, 0x7b94ce30u, 0x19cc47e1u, 0xb803c192u, 0x563b3b43u, 0xf472b4f4u, 0x92aa2ea5u, 0x30e1a856u,
    0xcf192207u, 0x6d509bb8u, 0x0b881569u, 0xa9bf8f1au, 0x47f708cbu, 0xe62e827cu, 0x8465fc2du, 0x229d75deu,
    0xc0d4ef8fu, 0x5f0c6940u, 0xfd43e2f1u, 0x9b7b5ca2u, 0x39b2d653u, 0xd7ea5004u, 0x7621c9b5u, 0x14594366u,
    0xb290bd17u, 0x50c836c8u, 0xeeffb079u, 0x8d372a2au, 0x2b6ea3dbu, 0xc9a61d8cu, 0x67dd973du, 0x061510eeu,
    0xa44c8a9fu, 0x42840450u, 0xe0bb7e01u, 0x7ef2f7b2u, 0x1d2a7163u, 0xbb61eb14u, 0x599964c5u, 0xf7d0de76u,
    0x96085827u, 0x343fd1d8u, 0xd2774b89u, 0x70aec53au, 0x0ee63eebu, 0xad1db89cu, 0x4b55324du, 0xe98cabfeu,
    0x87c425afu, 0x25fb9f60u, 0xc4331911u, 0x626a92c2u, 0x00a20c73u, 0x9ed98624u, 0x3d10ffd5u, 0xdb487986u,
    0x797ff337u, 0x17b76ce8u, 0xb5eee699u, 0x5426604au, 0xf25dd9fbu, 0x909553acu, 0x2ecccd5du, 0xcd04470eu,
};

static const uint32_t bshim_025_tab5[96] = {
    0x981d3320u, 0x3654acd1u, 0xd48c2682u, 0x72c3a033u, 0x10fb19e4u, 0xaf329395u, 0x4d6a0d46u, 0xeba186f7u,
    0x89d900a8u, 0x28107a59u, 0xc647f40au, 0x647f6dbbu, 0x02b6e76cu, 0xa0ee611du, 0x3f25daceu, 0xdd5d547fu,
    0x7b94ce30u, 0x19cc47e1u, 0xb803c192u, 0x563b3b43u, 0xf472b4f4u, 0x92aa2ea5u, 0x30e1a856u, 0xcf192207u,
    0x6d509bb8u, 0x0b881569u, 0xa9bf8f1au, 0x47f708cbu, 0xe62e827cu, 0x8465fc2du, 0x229d75deu, 0xc0d4ef8fu,
    0x5f0c6940u, 0xfd43e2f1u, 0x9b7b5ca2u, 0x39b2d653u, 0xd7ea5004u, 0x7621c9b5u, 0x14594366u, 0xb290bd17u,
    0x50c836c8u, 0xeeffb079u, 0x8d372a2au, 0x2b6ea3dbu, 0xc9a61d8cu, 0x67dd973du, 0x061510eeu, 0xa44c8a9fu,
    0x42840450u, 0xe0bb7e01u, 0x7ef2f7b2u, 0x1d2a7163u, 0xbb61eb14u, 0x599964c5u, 0xf7d0de76u, 0x96085827u,
    0x343fd1d8u, 0xd2774b89u, 0x70aec53au, 0x0ee63eebu, 0xad1db89cu, 0x4b55324du, 0xe98cabfeu, 0x87c425afu,
    0x25fb9f60u, 0xc4331911u, 0x626a92c2u, 0x00a20c73u, 0x9ed98624u, 0x3d10ffd5u, 0xdb487986u, 0x797ff337u,
    0x17b76ce8u, 0xb5eee699u, 0x5426604au, 0xf25dd9fbu, 0x909553acu, 0x2ecccd5du, 0xcd04470eu, 0x6b3bc0bfu,
    0x09733a70u, 0xa7aab421u, 0x45e22dd2u, 0xe419a783u, 0x82512134u, 0x20889ae5u, 0xbec01496u, 0x5cf78e47u,
    0xfb2f07f8u, 0x996681a9u, 0x379dfb5au, 0xd5d5750bu, 0x740ceebcu, 0x1244686du, 0xb07be21eu, 0x4eb35bcfu,
};

static const uint32_t bshim_025_tab6[96] = {
    0x19cc47e1u, 0xb803c192u, 0x563b3b43u, 0xf472b4f4u, 0x92aa2ea5u, 0x30e1a856u, 0xcf192207u, 0x6d509bb8u,
    0x0b881569u, 0xa9bf8f1au, 0x47f708cbu, 0xe62e827cu, 0x8465fc2du, 0x229d75deu, 0xc0d4ef8fu, 0x5f0c6940u,
    0xfd43e2f1u, 0x9b7b5ca2u, 0x39b2d653u, 0xd7ea5004u, 0x7621c9b5u, 0x14594366u, 0xb290bd17u, 0x50c836c8u,
    0xeeffb079u, 0x8d372a2au, 0x2b6ea3dbu, 0xc9a61d8cu, 0x67dd973du, 0x061510eeu, 0xa44c8a9fu, 0x42840450u,
    0xe0bb7e01u, 0x7ef2f7b2u, 0x1d2a7163u, 0xbb61eb14u, 0x599964c5u, 0xf7d0de76u, 0x96085827u, 0x343fd1d8u,
    0xd2774b89u, 0x70aec53au, 0x0ee63eebu, 0xad1db89cu, 0x4b55324du, 0xe98cabfeu, 0x87c425afu, 0x25fb9f60u,
    0xc4331911u, 0x626a92c2u, 0x00a20c73u, 0x9ed98624u, 0x3d10ffd5u, 0xdb487986u, 0x797ff337u, 0x17b76ce8u,
    0xb5eee699u, 0x5426604au, 0xf25dd9fbu, 0x909553acu, 0x2ecccd5du, 0xcd04470eu, 0x6b3bc0bfu, 0x09733a70u,
    0xa7aab421u, 0x45e22dd2u, 0xe419a783u, 0x82512134u, 0x20889ae5u, 0xbec01496u, 0x5cf78e47u, 0xfb2f07f8u,
    0x996681a9u, 0x379dfb5au, 0xd5d5750bu, 0x740ceebcu, 0x1244686du, 0xb07be21eu, 0x4eb35bcfu, 0xecead580u,
    0x8b224f31u, 0x2959c8e2u, 0xc7914293u, 0x65c8bc44u, 0x040035f5u, 0xa237afa6u, 0x406f2957u, 0xdea6a308u,
    0x7cde1cb9u, 0x1b15966au, 0xb94d101bu, 0x578489ccu, 0xf5bc037du, 0x93f37d2eu, 0x322af6dfu, 0xd0627090u,
};

static const uint32_t bshim_025_tab7[96] = {
    0x9b7b5ca2u, 0x39b2d653u, 0xd7ea5004u, 0x7621c9b5u, 0x14594366u, 0xb290bd17u, 0x50c836c8u, 0xeeffb079u,
    0x8d372a2au, 0x2b6ea3dbu, 0xc9a61d8cu, 0x67dd973du, 0x061510eeu, 0xa44c8a9fu, 0x42840450u, 0xe0bb7e01u,
    0x7ef2f7b2u, 0x1d2a7163u, 0xbb61eb14u, 0x599964c5u, 0xf7d0de76u, 0x96085827u, 0x343fd1d8u, 0xd2774b89u,
    0x70aec53au, 0x0ee63eebu, 0xad1db89cu, 0x4b55324du, 0xe98cabfeu, 0x87c425afu, 0x25fb9f60u, 0xc4331911u,
    0x626a92c2u, 0x00a20c73u, 0x9ed98624u, 0x3d10ffd5u, 0xdb487986u, 0x797ff337u, 0x17b76ce8u, 0xb5eee699u,
    0x5426604au, 0xf25dd9fbu, 0x909553acu, 0x2ecccd5du, 0xcd04470eu, 0x6b3bc0bfu, 0x09733a70u, 0xa7aab421u,
    0x45e22dd2u, 0xe419a783u, 0x82512134u, 0x20889ae5u, 0xbec01496u, 0x5cf78e47u, 0xfb2f07f8u, 0x996681a9u,
    0x379dfb5au, 0xd5d5750bu, 0x740ceebcu, 0x1244686du, 0xb07be21eu, 0x4eb35bcfu, 0xecead580u, 0x8b224f31u,
    0x2959c8e2u, 0xc7914293u, 0x65c8bc44u, 0x040035f5u, 0xa237afa6u, 0x406f2957u, 0xdea6a308u, 0x7cde1cb9u,
    0x1b15966au, 0xb94d101bu, 0x578489ccu, 0xf5bc037du, 0x93f37d2eu, 0x322af6dfu, 0xd0627090u, 0x6e99ea41u,
    0x0cd163f2u, 0xab08dda3u, 0x49405754u, 0xe777d105u, 0x85af4ab6u, 0x23e6c467u, 0xc21e3e18u, 0x6055b7c9u,
    0xfe8d317au, 0x9cc4ab2bu, 0x3afc24dcu, 0xd9339e8du, 0x776b183eu, 0x15a291efu, 0xb3da0ba0u, 0x52118551u,
};

struct bshim_025_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_025_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_025_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_025_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_025_reset(struct bshim_025_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00030557u;
    return 0;
}

