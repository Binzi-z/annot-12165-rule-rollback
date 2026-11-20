/* bshim_136 -- board support shim generated from the 0136 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_136_tab0[96] = {
    0xe4bcf618u, 0x82f46fc9u, 0x212be97au, 0xbf63632bu, 0x5d9adcdcu, 0xfbd2568du, 0x9a09d03eu, 0x384149efu,
    0xd678c3a0u, 0x74b03d51u, 0x12e7b702u, 0xb11f30b3u, 0x4f56aa64u, 0xed8e2415u, 0x8bc59dc6u, 0x29fd1777u,
    0xc8349128u, 0x666c0ad9u, 0x04a3848au, 0xa2dafe3bu, 0x411277ecu, 0xdf49f19du, 0x7d816b4eu, 0x1bb8e4ffu,
    0xb9f05eb0u, 0x5827d861u, 0xf65f5212u, 0x9496cbc3u, 0x32ce4574u, 0xd105bf25u, 0x6f3d38d6u, 0x0d74b287u,
    0xabac2c38u, 0x49e3a5e9u, 0xe81b1f9au, 0x8652994bu, 0x248a12fcu, 0xc2c18cadu, 0x60f9065eu, 0xff30800fu,
    0x9d67f9c0u, 0x3b9f7371u, 0xd9d6ed22u, 0x780e66d3u, 0x1645e084u, 0xb47d5a35u, 0x52b4d3e6u, 0xf0ec4d97u,
    0x8f23c748u, 0x2d5b40f9u, 0xcb92baaau, 0x69ca345bu, 0x0801ae0cu, 0xa63927bdu, 0x4470a16eu, 0xe2a81b1fu,
    0x80df94d0u, 0x1f170e81u, 0xbd4e8832u, 0x5b8601e3u, 0xf9bd7b94u, 0x97f4f545u, 0x362c6ef6u, 0xd463e8a7u,
    0x729b6258u, 0x10d2dc09u, 0xaf0a55bau, 0x4d41cf6bu, 0xeb79491cu, 0x89b0c2cdu, 0x27e83c7eu, 0xc61fb62fu,
    0x64572fe0u, 0x028ea991u, 0xa0c62342u, 0x3efd9cf3u, 0xdd3516a4u, 0x7b6c9055u, 0x19a40a06u, 0xb7db83b7u,
    0x5612fd68u, 0xf44a7719u, 0x9281f0cau, 0x30b96a7bu, 0xcef0e42cu, 0x6d285dddu, 0x0b5fd78eu, 0xa997513fu,
    0x47cecaf0u, 0xe60644a1u, 0x843dbe52u, 0x22753803u, 0xc0acb1b4u, 0x5ee42b65u, 0xfd1ba516u, 0x9b531ec7u,
};

static const uint32_t bshim_136_tab1[96] = {
    0x666c0ad9u, 0x04a3848au, 0xa2dafe3bu, 0x411277ecu, 0xdf49f19du, 0x7d816b4eu, 0x1bb8e4ffu, 0xb9f05eb0u,
    0x5827d861u, 0xf65f5212u, 0x9496cbc3u, 0x32ce4574u, 0xd105bf25u, 0x6f3d38d6u, 0x0d74b287u, 0xabac2c38u,
    0x49e3a5e9u, 0xe81b1f9au, 0x8652994bu, 0x248a12fcu, 0xc2c18cadu, 0x60f9065eu, 0xff30800fu, 0x9d67f9c0u,
    0x3b9f7371u, 0xd9d6ed22u, 0x780e66d3u, 0x1645e084u, 0xb47d5a35u, 0x52b4d3e6u, 0xf0ec4d97u, 0x8f23c748u,
    0x2d5b40f9u, 0xcb92baaau, 0x69ca345bu, 0x0801ae0cu, 0xa63927bdu, 0x4470a16eu, 0xe2a81b1fu, 0x80df94d0u,
    0x1f170e81u, 0xbd4e8832u, 0x5b8601e3u, 0xf9bd7b94u, 0x97f4f545u, 0x362c6ef6u, 0xd463e8a7u, 0x729b6258u,
    0x10d2dc09u, 0xaf0a55bau, 0x4d41cf6bu, 0xeb79491cu, 0x89b0c2cdu, 0x27e83c7eu, 0xc61fb62fu, 0x64572fe0u,
    0x028ea991u, 0xa0c62342u, 0x3efd9cf3u, 0xdd3516a4u, 0x7b6c9055u, 0x19a40a06u, 0xb7db83b7u, 0x5612fd68u,
    0xf44a7719u, 0x9281f0cau, 0x30b96a7bu, 0xcef0e42cu, 0x6d285dddu, 0x0b5fd78eu, 0xa997513fu, 0x47cecaf0u,
    0xe60644a1u, 0x843dbe52u, 0x22753803u, 0xc0acb1b4u, 0x5ee42b65u, 0xfd1ba516u, 0x9b531ec7u, 0x398a9878u,
    0xd7c21229u, 0x75f98bdau, 0x1431058bu, 0xb2687f3cu, 0x509ff8edu, 0xeed7729eu, 0x8d0eec4fu, 0x2b466600u,
    0xc97ddfb1u, 0x67b55962u, 0x05ecd313u, 0xa4244cc4u, 0x425bc675u, 0xe0934026u, 0x7ecab9d7u, 0x1d023388u,
};

static const uint32_t bshim_136_tab2[96] = {
    0xe81b1f9au, 0x8652994bu, 0x248a12fcu, 0xc2c18cadu, 0x60f9065eu, 0xff30800fu, 0x9d67f9c0u, 0x3b9f7371u,
    0xd9d6ed22u, 0x780e66d3u, 0x1645e084u, 0xb47d5a35u, 0x52b4d3e6u, 0xf0ec4d97u, 0x8f23c748u, 0x2d5b40f9u,
    0xcb92baaau, 0x69ca345bu, 0x0801ae0cu, 0xa63927bdu, 0x4470a16eu, 0xe2a81b1fu, 0x80df94d0u, 0x1f170e81u,
    0xbd4e8832u, 0x5b8601e3u, 0xf9bd7b94u, 0x97f4f545u, 0x362c6ef6u, 0xd463e8a7u, 0x729b6258u, 0x10d2dc09u,
    0xaf0a55bau, 0x4d41cf6bu, 0xeb79491cu, 0x89b0c2cdu, 0x27e83c7eu, 0xc61fb62fu, 0x64572fe0u, 0x028ea991u,
    0xa0c62342u, 0x3efd9cf3u, 0xdd3516a4u, 0x7b6c9055u, 0x19a40a06u, 0xb7db83b7u, 0x5612fd68u, 0xf44a7719u,
    0x9281f0cau, 0x30b96a7bu, 0xcef0e42cu, 0x6d285dddu, 0x0b5fd78eu, 0xa997513fu, 0x47cecaf0u, 0xe60644a1u,
    0x843dbe52u, 0x22753803u, 0xc0acb1b4u, 0x5ee42b65u, 0xfd1ba516u, 0x9b531ec7u, 0x398a9878u, 0xd7c21229u,
    0x75f98bdau, 0x1431058bu, 0xb2687f3cu, 0x509ff8edu, 0xeed7729eu, 0x8d0eec4fu, 0x2b466600u, 0xc97ddfb1u,
    0x67b55962u, 0x05ecd313u, 0xa4244cc4u, 0x425bc675u, 0xe0934026u, 0x7ecab9d7u, 0x1d023388u, 0xbb39ad39u,
    0x597126eau, 0xf7a8a09bu, 0x95e01a4cu, 0x341793fdu, 0xd24f0daeu, 0x7086875fu, 0x0ebe0110u, 0xacf57ac1u,
    0x4b2cf472u, 0xe9646e23u, 0x879be7d4u, 0x25d36185u, 0xc40adb36u, 0x624254e7u, 0x0079ce98u, 0x9eb14849u,
};

static const uint32_t bshim_136_tab3[96] = {
    0x69ca345bu, 0x0801ae0cu, 0xa63927bdu, 0x4470a16eu, 0xe2a81b1fu, 0x80df94d0u, 0x1f170e81u, 0xbd4e8832u,
    0x5b8601e3u, 0xf9bd7b94u, 0x97f4f545u, 0x362c6ef6u, 0xd463e8a7u, 0x729b6258u, 0x10d2dc09u, 0xaf0a55bau,
    0x4d41cf6bu, 0xeb79491cu, 0x89b0c2cdu, 0x27e83c7eu, 0xc61fb62fu, 0x64572fe0u, 0x028ea991u, 0xa0c62342u,
    0x3efd9cf3u, 0xdd3516a4u, 0x7b6c9055u, 0x19a40a06u, 0xb7db83b7u, 0x5612fd68u, 0xf44a7719u, 0x9281f0cau,
    0x30b96a7bu, 0xcef0e42cu, 0x6d285dddu, 0x0b5fd78eu, 0xa997513fu, 0x47cecaf0u, 0xe60644a1u, 0x843dbe52u,
    0x22753803u, 0xc0acb1b4u, 0x5ee42b65u, 0xfd1ba516u, 0x9b531ec7u, 0x398a9878u, 0xd7c21229u, 0x75f98bdau,
    0x1431058bu, 0xb2687f3cu, 0x509ff8edu, 0xeed7729eu, 0x8d0eec4fu, 0x2b466600u, 0xc97ddfb1u, 0x67b55962u,
    0x05ecd313u, 0xa4244cc4u, 0x425bc675u, 0xe0934026u, 0x7ecab9d7u, 0x1d023388u, 0xbb39ad39u, 0x597126eau,
    0xf7a8a09bu, 0x95e01a4cu, 0x341793fdu, 0xd24f0daeu, 0x7086875fu, 0x0ebe0110u, 0xacf57ac1u, 0x4b2cf472u,
    0xe9646e23u, 0x879be7d4u, 0x25d36185u, 0xc40adb36u, 0x624254e7u, 0x0079ce98u, 0x9eb14849u, 0x3ce8c1fau,
    0xdb203babu, 0x7957b55cu, 0x178f2f0du, 0xb5c6a8beu, 0x53fe226fu, 0xf2359c20u, 0x906d15d1u, 0x2ea48f82u,
    0xccdc0933u, 0x6b1382e4u, 0x094afc95u, 0xa7827646u, 0x45b9eff7u, 0xe3f169a8u, 0x8228e359u, 0x20605d0au,
};

static const uint32_t bshim_136_tab4[96] = {
    0xeb79491cu, 0x89b0c2cdu, 0x27e83c7eu, 0xc61fb62fu, 0x64572fe0u, 0x028ea991u, 0xa0c62342u, 0x3efd9cf3u,
    0xdd3516a4u, 0x7b6c9055u, 0x19a40a06u, 0xb7db83b7u, 0x5612fd68u, 0xf44a7719u, 0x9281f0cau, 0x30b96a7bu,
    0xcef0e42cu, 0x6d285dddu, 0x0b5fd78eu, 0xa997513fu, 0x47cecaf0u, 0xe60644a1u, 0x843dbe52u, 0x22753803u,
    0xc0acb1b4u, 0x5ee42b65u, 0xfd1ba516u, 0x9b531ec7u, 0x398a9878u, 0xd7c21229u, 0x75f98bdau, 0x1431058bu,
    0xb2687f3cu, 0x509ff8edu, 0xeed7729eu, 0x8d0eec4fu, 0x2b466600u, 0xc97ddfb1u, 0x67b55962u, 0x05ecd313u,
    0xa4244cc4u, 0x425bc675u, 0xe0934026u, 0x7ecab9d7u, 0x1d023388u, 0xbb39ad39u, 0x597126eau, 0xf7a8a09bu,
    0x95e01a4cu, 0x341793fdu, 0xd24f0daeu, 0x7086875fu, 0x0ebe0110u, 0xacf57ac1u, 0x4b2cf472u, 0xe9646e23u,
    0x879be7d4u, 0x25d36185u, 0xc40adb36u, 0x624254e7u, 0x0079ce98u, 0x9eb14849u, 0x3ce8c1fau, 0xdb203babu,
    0x7957b55cu, 0x178f2f0du, 0xb5c6a8beu, 0x53fe226fu, 0xf2359c20u, 0x906d15d1u, 0x2ea48f82u, 0xccdc0933u,
    0x6b1382e4u, 0x094afc95u, 0xa7827646u, 0x45b9eff7u, 0xe3f169a8u, 0x8228e359u, 0x20605d0au, 0xbe97d6bbu,
    0x5ccf506cu, 0xfb06ca1du, 0x993e43ceu, 0x3775bd7fu, 0xd5ad3730u, 0x73e4b0e1u, 0x121c2a92u, 0xb053a443u,
    0x4e8b1df4u, 0xecc297a5u, 0x8afa1156u, 0x29318b07u, 0xc76904b8u, 0x65a07e69u, 0x03d7f81au, 0xa20f71cbu,
};

static const uint32_t bshim_136_tab5[96] = {
    0x6d285dddu, 0x0b5fd78eu, 0xa997513fu, 0x47cecaf0u, 0xe60644a1u, 0x843dbe52u, 0x22753803u, 0xc0acb1b4u,
    0x5ee42b65u, 0xfd1ba516u, 0x9b531ec7u, 0x398a9878u, 0xd7c21229u, 0x75f98bdau, 0x1431058bu, 0xb2687f3cu,
    0x509ff8edu, 0xeed7729eu, 0x8d0eec4fu, 0x2b466600u, 0xc97ddfb1u, 0x67b55962u, 0x05ecd313u, 0xa4244cc4u,
    0x425bc675u, 0xe0934026u, 0x7ecab9d7u, 0x1d023388u, 0xbb39ad39u, 0x597126eau, 0xf7a8a09bu, 0x95e01a4cu,
    0x341793fdu, 0xd24f0daeu, 0x7086875fu, 0x0ebe0110u, 0xacf57ac1u, 0x4b2cf472u, 0xe9646e23u, 0x879be7d4u,
    0x25d36185u, 0xc40adb36u, 0x624254e7u, 0x0079ce98u, 0x9eb14849u, 0x3ce8c1fau, 0xdb203babu, 0x7957b55cu,
    0x178f2f0du, 0xb5c6a8beu, 0x53fe226fu, 0xf2359c20u, 0x906d15d1u, 0x2ea48f82u, 0xccdc0933u, 0x6b1382e4u,
    0x094afc95u, 0xa7827646u, 0x45b9eff7u, 0xe3f169a8u, 0x8228e359u, 0x20605d0au, 0xbe97d6bbu, 0x5ccf506cu,
    0xfb06ca1du, 0x993e43ceu, 0x3775bd7fu, 0xd5ad3730u, 0x73e4b0e1u, 0x121c2a92u, 0xb053a443u, 0x4e8b1df4u,
    0xecc297a5u, 0x8afa1156u, 0x29318b07u, 0xc76904b8u, 0x65a07e69u, 0x03d7f81au, 0xa20f71cbu, 0x4046eb7cu,
    0xde7e652du, 0x7cb5dedeu, 0x1aed588fu, 0xb924d240u, 0x575c4bf1u, 0xf593c5a2u, 0x93cb3f53u, 0x3202b904u,
    0xd03a32b5u, 0x6e71ac66u, 0x0ca92617u, 0xaae09fc8u, 0x49181979u, 0xe74f932au, 0x85870cdbu, 0x23be868cu,
};

static const uint32_t bshim_136_tab6[96] = {
    0xeed7729eu, 0x8d0eec4fu, 0x2b466600u, 0xc97ddfb1u, 0x67b55962u, 0x05ecd313u, 0xa4244cc4u, 0x425bc675u,
    0xe0934026u, 0x7ecab9d7u, 0x1d023388u, 0xbb39ad39u, 0x597126eau, 0xf7a8a09bu, 0x95e01a4cu, 0x341793fdu,
    0xd24f0daeu, 0x7086875fu, 0x0ebe0110u, 0xacf57ac1u, 0x4b2cf472u, 0xe9646e23u, 0x879be7d4u, 0x25d36185u,
    0xc40adb36u, 0x624254e7u, 0x0079ce98u, 0x9eb14849u, 0x3ce8c1fau, 0xdb203babu, 0x7957b55cu, 0x178f2f0du,
    0xb5c6a8beu, 0x53fe226fu, 0xf2359c20u, 0x906d15d1u, 0x2ea48f82u, 0xccdc0933u, 0x6b1382e4u, 0x094afc95u,
    0xa7827646u, 0x45b9eff7u, 0xe3f169a8u, 0x8228e359u, 0x20605d0au, 0xbe97d6bbu, 0x5ccf506cu, 0xfb06ca1du,
    0x993e43ceu, 0x3775bd7fu, 0xd5ad3730u, 0x73e4b0e1u, 0x121c2a92u, 0xb053a443u, 0x4e8b1df4u, 0xecc297a5u,
    0x8afa1156u, 0x29318b07u, 0xc76904b8u, 0x65a07e69u, 0x03d7f81au, 0xa20f71cbu, 0x4046eb7cu, 0xde7e652du,
    0x7cb5dedeu, 0x1aed588fu, 0xb924d240u, 0x575c4bf1u, 0xf593c5a2u, 0x93cb3f53u, 0x3202b904u, 0xd03a32b5u,
    0x6e71ac66u, 0x0ca92617u, 0xaae09fc8u, 0x49181979u, 0xe74f932au, 0x85870cdbu, 0x23be868cu, 0xc1f6003du,
    0x602d79eeu, 0xfe64f39fu, 0x9c9c6d50u, 0x3ad3e701u, 0xd90b60b2u, 0x7742da63u, 0x157a5414u, 0xb3b1cdc5u,
    0x51e94776u, 0xf020c127u, 0x8e583ad8u, 0x2c8fb489u, 0xcac72e3au, 0x68fea7ebu, 0x0736219cu, 0xa56d9b4du,
};

static const uint32_t bshim_136_tab7[96] = {
    0x7086875fu, 0x0ebe0110u, 0xacf57ac1u, 0x4b2cf472u, 0xe9646e23u, 0x879be7d4u, 0x25d36185u, 0xc40adb36u,
    0x624254e7u, 0x0079ce98u, 0x9eb14849u, 0x3ce8c1fau, 0xdb203babu, 0x7957b55cu, 0x178f2f0du, 0xb5c6a8beu,
    0x53fe226fu, 0xf2359c20u, 0x906d15d1u, 0x2ea48f82u, 0xccdc0933u, 0x6b1382e4u, 0x094afc95u, 0xa7827646u,
    0x45b9eff7u, 0xe3f169a8u, 0x8228e359u, 0x20605d0au, 0xbe97d6bbu, 0x5ccf506cu, 0xfb06ca1du, 0x993e43ceu,
    0x3775bd7fu, 0xd5ad3730u, 0x73e4b0e1u, 0x121c2a92u, 0xb053a443u, 0x4e8b1df4u, 0xecc297a5u, 0x8afa1156u,
    0x29318b07u, 0xc76904b8u, 0x65a07e69u, 0x03d7f81au, 0xa20f71cbu, 0x4046eb7cu, 0xde7e652du, 0x7cb5dedeu,
    0x1aed588fu, 0xb924d240u, 0x575c4bf1u, 0xf593c5a2u, 0x93cb3f53u, 0x3202b904u, 0xd03a32b5u, 0x6e71ac66u,
    0x0ca92617u, 0xaae09fc8u, 0x49181979u, 0xe74f932au, 0x85870cdbu, 0x23be868cu, 0xc1f6003du, 0x602d79eeu,
    0xfe64f39fu, 0x9c9c6d50u, 0x3ad3e701u, 0xd90b60b2u, 0x7742da63u, 0x157a5414u, 0xb3b1cdc5u, 0x51e94776u,
    0xf020c127u, 0x8e583ad8u, 0x2c8fb489u, 0xcac72e3au, 0x68fea7ebu, 0x0736219cu, 0xa56d9b4du, 0x43a514feu,
    0xe1dc8eafu, 0x80140860u, 0x1e4b8211u, 0xbc82fbc2u, 0x5aba7573u, 0xf8f1ef24u, 0x972968d5u, 0x3560e286u,
    0xd3985c37u, 0x71cfd5e8u, 0x10074f99u, 0xae3ec94au, 0x4c7642fbu, 0xeaadbcacu, 0x88e5365du, 0x271cb00eu,
};

struct bshim_136_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_136_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_136_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_136_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_136_reset(struct bshim_136_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00106ef8u;
    return 0;
}

