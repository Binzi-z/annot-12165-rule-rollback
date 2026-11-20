/* bshim_143 -- board support shim generated from the 0143 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_143_tab0[96] = {
    0xa173dd1du, 0x3fab56ceu, 0xdde2d07fu, 0x7c1a4a30u, 0x1a51c3e1u, 0xb8893d92u, 0x56c0b743u, 0xf4f830f4u,
    0x932faaa5u, 0x31672456u, 0xcf9e9e07u, 0x6dd617b8u, 0x0c0d9169u, 0xaa450b1au, 0x487c84cbu, 0xe6b3fe7cu,
    0x84eb782du, 0x2322f1deu, 0xc15a6b8fu, 0x5f91e540u, 0xfdc95ef1u, 0x9c00d8a2u, 0x3a385253u, 0xd86fcc04u,
    0x76a745b5u, 0x14debf66u, 0xb3163917u, 0x514db2c8u, 0xef852c79u, 0x8dbca62au, 0x2bf41fdbu, 0xca2b998cu,
    0x6863133du, 0x069a8ceeu, 0xa4d2069fu, 0x43098050u, 0xe140fa01u, 0x7f7873b2u, 0x1dafed63u, 0xbbe76714u,
    0x5a1ee0c5u, 0xf8565a76u, 0x968dd427u, 0x34c54dd8u, 0xd2fcc789u, 0x7134413au, 0x0f6bbaebu, 0xada3349cu,
    0x4bdaae4du, 0xea1227feu, 0x8849a1afu, 0x26811b60u, 0xc4b89511u, 0x62f00ec2u, 0x01278873u, 0x9f5f0224u,
    0x3d967bd5u, 0xdbcdf586u, 0x7a056f37u, 0x183ce8e8u, 0xb6746299u, 0x54abdc4au, 0xf2e355fbu, 0x911acfacu,
    0x2f52495du, 0xcd89c30eu, 0x6bc13cbfu, 0x09f8b670u, 0xa8303021u, 0x4667a9d2u, 0xe49f2383u, 0x82d69d34u,
    0x210e16e5u, 0xbf459096u, 0x5d7d0a47u, 0xfbb483f8u, 0x99ebfda9u, 0x3823775au, 0xd65af10bu, 0x74926abcu,
    0x12c9e46du, 0xb1015e1eu, 0x4f38d7cfu, 0xed705180u, 0x8ba7cb31u, 0x29df44e2u, 0xc816be93u, 0x664e3844u,
    0x0485b1f5u, 0xa2bd2ba6u, 0x40f4a557u, 0xdf2c1f08u, 0x7d6398b9u, 0x1b9b126au, 0xb9d28c1bu, 0x580a05ccu,
};

static const uint32_t bshim_143_tab1[96] = {
    0x2322f1deu, 0xc15a6b8fu, 0x5f91e540u, 0xfdc95ef1u, 0x9c00d8a2u, 0x3a385253u, 0xd86fcc04u, 0x76a745b5u,
    0x14debf66u, 0xb3163917u, 0x514db2c8u, 0xef852c79u, 0x8dbca62au, 0x2bf41fdbu, 0xca2b998cu, 0x6863133du,
    0x069a8ceeu, 0xa4d2069fu, 0x43098050u, 0xe140fa01u, 0x7f7873b2u, 0x1dafed63u, 0xbbe76714u, 0x5a1ee0c5u,
    0xf8565a76u, 0x968dd427u, 0x34c54dd8u, 0xd2fcc789u, 0x7134413au, 0x0f6bbaebu, 0xada3349cu, 0x4bdaae4du,
    0xea1227feu, 0x8849a1afu, 0x26811b60u, 0xc4b89511u, 0x62f00ec2u, 0x01278873u, 0x9f5f0224u, 0x3d967bd5u,
    0xdbcdf586u, 0x7a056f37u, 0x183ce8e8u, 0xb6746299u, 0x54abdc4au, 0xf2e355fbu, 0x911acfacu, 0x2f52495du,
    0xcd89c30eu, 0x6bc13cbfu, 0x09f8b670u, 0xa8303021u, 0x4667a9d2u, 0xe49f2383u, 0x82d69d34u, 0x210e16e5u,
    0xbf459096u, 0x5d7d0a47u, 0xfbb483f8u, 0x99ebfda9u, 0x3823775au, 0xd65af10bu, 0x74926abcu, 0x12c9e46du,
    0xb1015e1eu, 0x4f38d7cfu, 0xed705180u, 0x8ba7cb31u, 0x29df44e2u, 0xc816be93u, 0x664e3844u, 0x0485b1f5u,
    0xa2bd2ba6u, 0x40f4a557u, 0xdf2c1f08u, 0x7d6398b9u, 0x1b9b126au, 0xb9d28c1bu, 0x580a05ccu, 0xf6417f7du,
    0x9478f92eu, 0x32b072dfu, 0xd0e7ec90u, 0x6f1f6641u, 0x0d56dff2u, 0xab8e59a3u, 0x49c5d354u, 0xe7fd4d05u,
    0x8634c6b6u, 0x246c4067u, 0xc2a3ba18u, 0x60db33c9u, 0xff12ad7au, 0x9d4a272bu, 0x3b81a0dcu, 0xd9b91a8du,
};

static const uint32_t bshim_143_tab2[96] = {
    0xa4d2069fu, 0x43098050u, 0xe140fa01u, 0x7f7873b2u, 0x1dafed63u, 0xbbe76714u, 0x5a1ee0c5u, 0xf8565a76u,
    0x968dd427u, 0x34c54dd8u, 0xd2fcc789u, 0x7134413au, 0x0f6bbaebu, 0xada3349cu, 0x4bdaae4du, 0xea1227feu,
    0x8849a1afu, 0x26811b60u, 0xc4b89511u, 0x62f00ec2u, 0x01278873u, 0x9f5f0224u, 0x3d967bd5u, 0xdbcdf586u,
    0x7a056f37u, 0x183ce8e8u, 0xb6746299u, 0x54abdc4au, 0xf2e355fbu, 0x911acfacu, 0x2f52495du, 0xcd89c30eu,
    0x6bc13cbfu, 0x09f8b670u, 0xa8303021u, 0x4667a9d2u, 0xe49f2383u, 0x82d69d34u, 0x210e16e5u, 0xbf459096u,
    0x5d7d0a47u, 0xfbb483f8u, 0x99ebfda9u, 0x3823775au, 0xd65af10bu, 0x74926abcu, 0x12c9e46du, 0xb1015e1eu,
    0x4f38d7cfu, 0xed705180u, 0x8ba7cb31u, 0x29df44e2u, 0xc816be93u, 0x664e3844u, 0x0485b1f5u, 0xa2bd2ba6u,
    0x40f4a557u, 0xdf2c1f08u, 0x7d6398b9u, 0x1b9b126au, 0xb9d28c1bu, 0x580a05ccu, 0xf6417f7du, 0x9478f92eu,
    0x32b072dfu, 0xd0e7ec90u, 0x6f1f6641u, 0x0d56dff2u, 0xab8e59a3u, 0x49c5d354u, 0xe7fd4d05u, 0x8634c6b6u,
    0x246c4067u, 0xc2a3ba18u, 0x60db33c9u, 0xff12ad7au, 0x9d4a272bu, 0x3b81a0dcu, 0xd9b91a8du, 0x77f0943eu,
    0x16280defu, 0xb45f87a0u, 0x52970151u, 0xf0ce7b02u, 0x8f05f4b3u, 0x2d3d6e64u, 0xcb74e815u, 0x69ac61c6u,
    0x07e3db77u, 0xa61b5528u, 0x4452ced9u, 0xe28a488au, 0x80c1c23bu, 0x1ef93becu, 0xbd30b59du, 0x5b682f4eu,
};

static const uint32_t bshim_143_tab3[96] = {
    0x26811b60u, 0xc4b89511u, 0x62f00ec2u, 0x01278873u, 0x9f5f0224u, 0x3d967bd5u, 0xdbcdf586u, 0x7a056f37u,
    0x183ce8e8u, 0xb6746299u, 0x54abdc4au, 0xf2e355fbu, 0x911acfacu, 0x2f52495du, 0xcd89c30eu, 0x6bc13cbfu,
    0x09f8b670u, 0xa8303021u, 0x4667a9d2u, 0xe49f2383u, 0x82d69d34u, 0x210e16e5u, 0xbf459096u, 0x5d7d0a47u,
    0xfbb483f8u, 0x99ebfda9u, 0x3823775au, 0xd65af10bu, 0x74926abcu, 0x12c9e46du, 0xb1015e1eu, 0x4f38d7cfu,
    0xed705180u, 0x8ba7cb31u, 0x29df44e2u, 0xc816be93u, 0x664e3844u, 0x0485b1f5u, 0xa2bd2ba6u, 0x40f4a557u,
    0xdf2c1f08u, 0x7d6398b9u, 0x1b9b126au, 0xb9d28c1bu, 0x580a05ccu, 0xf6417f7du, 0x9478f92eu, 0x32b072dfu,
    0xd0e7ec90u, 0x6f1f6641u, 0x0d56dff2u, 0xab8e59a3u, 0x49c5d354u, 0xe7fd4d05u, 0x8634c6b6u, 0x246c4067u,
    0xc2a3ba18u, 0x60db33c9u, 0xff12ad7au, 0x9d4a272bu, 0x3b81a0dcu, 0xd9b91a8du, 0x77f0943eu, 0x16280defu,
    0xb45f87a0u, 0x52970151u, 0xf0ce7b02u, 0x8f05f4b3u, 0x2d3d6e64u, 0xcb74e815u, 0x69ac61c6u, 0x07e3db77u,
    0xa61b5528u, 0x4452ced9u, 0xe28a488au, 0x80c1c23bu, 0x1ef93becu, 0xbd30b59du, 0x5b682f4eu, 0xf99fa8ffu,
    0x97d722b0u, 0x360e9c61u, 0xd4461612u, 0x727d8fc3u, 0x10b50974u, 0xaeec8325u, 0x4d23fcd6u, 0xeb5b7687u,
    0x8992f038u, 0x27ca69e9u, 0xc601e39au, 0x64395d4bu, 0x0270d6fcu, 0xa0a850adu, 0x3edfca5eu, 0xdd17440fu,
};

static const uint32_t bshim_143_tab4[96] = {
    0xa8303021u, 0x4667a9d2u, 0xe49f2383u, 0x82d69d34u, 0x210e16e5u, 0xbf459096u, 0x5d7d0a47u, 0xfbb483f8u,
    0x99ebfda9u, 0x3823775au, 0xd65af10bu, 0x74926abcu, 0x12c9e46du, 0xb1015e1eu, 0x4f38d7cfu, 0xed705180u,
    0x8ba7cb31u, 0x29df44e2u, 0xc816be93u, 0x664e3844u, 0x0485b1f5u, 0xa2bd2ba6u, 0x40f4a557u, 0xdf2c1f08u,
    0x7d6398b9u, 0x1b9b126au, 0xb9d28c1bu, 0x580a05ccu, 0xf6417f7du, 0x9478f92eu, 0x32b072dfu, 0xd0e7ec90u,
    0x6f1f6641u, 0x0d56dff2u, 0xab8e59a3u, 0x49c5d354u, 0xe7fd4d05u, 0x8634c6b6u, 0x246c4067u, 0xc2a3ba18u,
    0x60db33c9u, 0xff12ad7au, 0x9d4a272bu, 0x3b81a0dcu, 0xd9b91a8du, 0x77f0943eu, 0x16280defu, 0xb45f87a0u,
    0x52970151u, 0xf0ce7b02u, 0x8f05f4b3u, 0x2d3d6e64u, 0xcb74e815u, 0x69ac61c6u, 0x07e3db77u, 0xa61b5528u,
    0x4452ced9u, 0xe28a488au, 0x80c1c23bu, 0x1ef93becu, 0xbd30b59du, 0x5b682f4eu, 0xf99fa8ffu, 0x97d722b0u,
    0x360e9c61u, 0xd4461612u, 0x727d8fc3u, 0x10b50974u, 0xaeec8325u, 0x4d23fcd6u, 0xeb5b7687u, 0x8992f038u,
    0x27ca69e9u, 0xc601e39au, 0x64395d4bu, 0x0270d6fcu, 0xa0a850adu, 0x3edfca5eu, 0xdd17440fu, 0x7b4ebdc0u,
    0x19863771u, 0xb7bdb122u, 0x55f52ad3u, 0xf42ca484u, 0x92641e35u, 0x309b97e6u, 0xced31197u, 0x6d0a8b48u,
    0x0b4204f9u, 0xa9797eaau, 0x47b0f85bu, 0xe5e8720cu, 0x841febbdu, 0x2257656eu, 0xc08edf1fu, 0x5ec658d0u,
};

static const uint32_t bshim_143_tab5[96] = {
    0x29df44e2u, 0xc816be93u, 0x664e3844u, 0x0485b1f5u, 0xa2bd2ba6u, 0x40f4a557u, 0xdf2c1f08u, 0x7d6398b9u,
    0x1b9b126au, 0xb9d28c1bu, 0x580a05ccu, 0xf6417f7du, 0x9478f92eu, 0x32b072dfu, 0xd0e7ec90u, 0x6f1f6641u,
    0x0d56dff2u, 0xab8e59a3u, 0x49c5d354u, 0xe7fd4d05u, 0x8634c6b6u, 0x246c4067u, 0xc2a3ba18u, 0x60db33c9u,
    0xff12ad7au, 0x9d4a272bu, 0x3b81a0dcu, 0xd9b91a8du, 0x77f0943eu, 0x16280defu, 0xb45f87a0u, 0x52970151u,
    0xf0ce7b02u, 0x8f05f4b3u, 0x2d3d6e64u, 0xcb74e815u, 0x69ac61c6u, 0x07e3db77u, 0xa61b5528u, 0x4452ced9u,
    0xe28a488au, 0x80c1c23bu, 0x1ef93becu, 0xbd30b59du, 0x5b682f4eu, 0xf99fa8ffu, 0x97d722b0u, 0x360e9c61u,
    0xd4461612u, 0x727d8fc3u, 0x10b50974u, 0xaeec8325u, 0x4d23fcd6u, 0xeb5b7687u, 0x8992f038u, 0x27ca69e9u,
    0xc601e39au, 0x64395d4bu, 0x0270d6fcu, 0xa0a850adu, 0x3edfca5eu, 0xdd17440fu, 0x7b4ebdc0u, 0x19863771u,
    0xb7bdb122u, 0x55f52ad3u, 0xf42ca484u, 0x92641e35u, 0x309b97e6u, 0xced31197u, 0x6d0a8b48u, 0x0b4204f9u,
    0xa9797eaau, 0x47b0f85bu, 0xe5e8720cu, 0x841febbdu, 0x2257656eu, 0xc08edf1fu, 0x5ec658d0u, 0xfcfdd281u,
    0x9b354c32u, 0x396cc5e3u, 0xd7a43f94u, 0x75dbb945u, 0x141332f6u, 0xb24aaca7u, 0x50822658u, 0xeeb9a009u,
    0x8cf119bau, 0x2b28936bu, 0xc9600d1cu, 0x679786cdu, 0x05cf007eu, 0xa4067a2fu, 0x423df3e0u, 0xe0756d91u,
};

static const uint32_t bshim_143_tab6[96] = {
    0xab8e59a3u, 0x49c5d354u, 0xe7fd4d05u, 0x8634c6b6u, 0x246c4067u, 0xc2a3ba18u, 0x60db33c9u, 0xff12ad7au,
    0x9d4a272bu, 0x3b81a0dcu, 0xd9b91a8du, 0x77f0943eu, 0x16280defu, 0xb45f87a0u, 0x52970151u, 0xf0ce7b02u,
    0x8f05f4b3u, 0x2d3d6e64u, 0xcb74e815u, 0x69ac61c6u, 0x07e3db77u, 0xa61b5528u, 0x4452ced9u, 0xe28a488au,
    0x80c1c23bu, 0x1ef93becu, 0xbd30b59du, 0x5b682f4eu, 0xf99fa8ffu, 0x97d722b0u, 0x360e9c61u, 0xd4461612u,
    0x727d8fc3u, 0x10b50974u, 0xaeec8325u, 0x4d23fcd6u, 0xeb5b7687u, 0x8992f038u, 0x27ca69e9u, 0xc601e39au,
    0x64395d4bu, 0x0270d6fcu, 0xa0a850adu, 0x3edfca5eu, 0xdd17440fu, 0x7b4ebdc0u, 0x19863771u, 0xb7bdb122u,
    0x55f52ad3u, 0xf42ca484u, 0x92641e35u, 0x309b97e6u, 0xced31197u, 0x6d0a8b48u, 0x0b4204f9u, 0xa9797eaau,
    0x47b0f85bu, 0xe5e8720cu, 0x841febbdu, 0x2257656eu, 0xc08edf1fu, 0x5ec658d0u, 0xfcfdd281u, 0x9b354c32u,
    0x396cc5e3u, 0xd7a43f94u, 0x75dbb945u, 0x141332f6u, 0xb24aaca7u, 0x50822658u, 0xeeb9a009u, 0x8cf119bau,
    0x2b28936bu, 0xc9600d1cu, 0x679786cdu, 0x05cf007eu, 0xa4067a2fu, 0x423df3e0u, 0xe0756d91u, 0x7eace742u,
    0x1ce460f3u, 0xbb1bdaa4u, 0x59535455u, 0xf78ace06u, 0x95c247b7u, 0x33f9c168u, 0xd2313b19u, 0x7068b4cau,
    0x0ea02e7bu, 0xacd7a82cu, 0x4b0f21ddu, 0xe9469b8eu, 0x877e153fu, 0x25b58ef0u, 0xc3ed08a1u, 0x62248252u,
};

static const uint32_t bshim_143_tab7[96] = {
    0x2d3d6e64u, 0xcb74e815u, 0x69ac61c6u, 0x07e3db77u, 0xa61b5528u, 0x4452ced9u, 0xe28a488au, 0x80c1c23bu,
    0x1ef93becu, 0xbd30b59du, 0x5b682f4eu, 0xf99fa8ffu, 0x97d722b0u, 0x360e9c61u, 0xd4461612u, 0x727d8fc3u,
    0x10b50974u, 0xaeec8325u, 0x4d23fcd6u, 0xeb5b7687u, 0x8992f038u, 0x27ca69e9u, 0xc601e39au, 0x64395d4bu,
    0x0270d6fcu, 0xa0a850adu, 0x3edfca5eu, 0xdd17440fu, 0x7b4ebdc0u, 0x19863771u, 0xb7bdb122u, 0x55f52ad3u,
    0xf42ca484u, 0x92641e35u, 0x309b97e6u, 0xced31197u, 0x6d0a8b48u, 0x0b4204f9u, 0xa9797eaau, 0x47b0f85bu,
    0xe5e8720cu, 0x841febbdu, 0x2257656eu, 0xc08edf1fu, 0x5ec658d0u, 0xfcfdd281u, 0x9b354c32u, 0x396cc5e3u,
    0xd7a43f94u, 0x75dbb945u, 0x141332f6u, 0xb24aaca7u, 0x50822658u, 0xeeb9a009u, 0x8cf119bau, 0x2b28936bu,
    0xc9600d1cu, 0x679786cdu, 0x05cf007eu, 0xa4067a2fu, 0x423df3e0u, 0xe0756d91u, 0x7eace742u, 0x1ce460f3u,
    0xbb1bdaa4u, 0x59535455u, 0xf78ace06u, 0x95c247b7u, 0x33f9c168u, 0xd2313b19u, 0x7068b4cau, 0x0ea02e7bu,
    0xacd7a82cu, 0x4b0f21ddu, 0xe9469b8eu, 0x877e153fu, 0x25b58ef0u, 0xc3ed08a1u, 0x62248252u, 0x005bfc03u,
    0x9e9375b4u, 0x3ccaef65u, 0xdb026916u, 0x7939e2c7u, 0x17715c78u, 0xb5a8d629u, 0x53e04fdau, 0xf217c98bu,
    0x904f433cu, 0x2e86bcedu, 0xccbe369eu, 0x6af5b04fu, 0x092d2a00u, 0xa764a3b1u, 0x459c1d62u, 0xe3d39713u,
};

struct bshim_143_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_143_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8057d26bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_143_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_143_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_143_reset(struct bshim_143_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00114781u;
    return 0;
}

