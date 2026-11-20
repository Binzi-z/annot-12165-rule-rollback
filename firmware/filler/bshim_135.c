/* bshim_135 -- board support shim generated from the 0135 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_135_tab0[96] = {
    0xee59b085u, 0x8c912a36u, 0x2ac8a3e7u, 0xc9001d98u, 0x67379749u, 0x056f10fau, 0xa3a68aabu, 0x41de045cu,
    0xe0157e0du, 0x7e4cf7beu, 0x1c84716fu, 0xbabbeb20u, 0x58f364d1u, 0xf72ade82u, 0x95625833u, 0x3399d1e4u,
    0xd1d14b95u, 0x7008c546u, 0x0e403ef7u, 0xac77b8a8u, 0x4aaf3259u, 0xe8e6ac0au, 0x871e25bbu, 0x25559f6cu,
    0xc38d191du, 0x61c492ceu, 0xfffc0c7fu, 0x9e338630u, 0x3c6affe1u, 0xdaa27992u, 0x78d9f343u, 0x17116cf4u,
    0xb548e6a5u, 0x53806056u, 0xf1b7da07u, 0x8fef53b8u, 0x2e26cd69u, 0xcc5e471au, 0x6a95c0cbu, 0x08cd3a7cu,
    0xa704b42du, 0x453c2ddeu, 0xe373a78fu, 0x81ab2140u, 0x1fe29af1u, 0xbe1a14a2u, 0x5c518e53u, 0xfa890804u,
    0x98c081b5u, 0x36f7fb66u, 0xd52f7517u, 0x7366eec8u, 0x119e6879u, 0xafd5e22au, 0x4e0d5bdbu, 0xec44d58cu,
    0x8a7c4f3du, 0x28b3c8eeu, 0xc6eb429fu, 0x6522bc50u, 0x035a3601u, 0xa191afb2u, 0x3fc92963u, 0xde00a314u,
    0x7c381cc5u, 0x1a6f9676u, 0xb8a71027u, 0x56de89d8u, 0xf5160389u, 0x934d7d3au, 0x3184f6ebu, 0xcfbc709cu,
    0x6df3ea4du, 0x0c2b63feu, 0xaa62ddafu, 0x489a5760u, 0xe6d1d111u, 0x85094ac2u, 0x2340c473u, 0xc1783e24u,
    0x5fafb7d5u, 0xfde73186u, 0x9c1eab37u, 0x3a5624e8u, 0xd88d9e99u, 0x76c5184au, 0x14fc91fbu, 0xb3340bacu,
    0x516b855du, 0xefa2ff0eu, 0x8dda78bfu, 0x2c11f270u, 0xca496c21u, 0x6880e5d2u, 0x06b85f83u, 0xa4efd934u,
};

static const uint32_t bshim_135_tab1[96] = {
    0x7008c546u, 0x0e403ef7u, 0xac77b8a8u, 0x4aaf3259u, 0xe8e6ac0au, 0x871e25bbu, 0x25559f6cu, 0xc38d191du,
    0x61c492ceu, 0xfffc0c7fu, 0x9e338630u, 0x3c6affe1u, 0xdaa27992u, 0x78d9f343u, 0x17116cf4u, 0xb548e6a5u,
    0x53806056u, 0xf1b7da07u, 0x8fef53b8u, 0x2e26cd69u, 0xcc5e471au, 0x6a95c0cbu, 0x08cd3a7cu, 0xa704b42du,
    0x453c2ddeu, 0xe373a78fu, 0x81ab2140u, 0x1fe29af1u, 0xbe1a14a2u, 0x5c518e53u, 0xfa890804u, 0x98c081b5u,
    0x36f7fb66u, 0xd52f7517u, 0x7366eec8u, 0x119e6879u, 0xafd5e22au, 0x4e0d5bdbu, 0xec44d58cu, 0x8a7c4f3du,
    0x28b3c8eeu, 0xc6eb429fu, 0x6522bc50u, 0x035a3601u, 0xa191afb2u, 0x3fc92963u, 0xde00a314u, 0x7c381cc5u,
    0x1a6f9676u, 0xb8a71027u, 0x56de89d8u, 0xf5160389u, 0x934d7d3au, 0x3184f6ebu, 0xcfbc709cu, 0x6df3ea4du,
    0x0c2b63feu, 0xaa62ddafu, 0x489a5760u, 0xe6d1d111u, 0x85094ac2u, 0x2340c473u, 0xc1783e24u, 0x5fafb7d5u,
    0xfde73186u, 0x9c1eab37u, 0x3a5624e8u, 0xd88d9e99u, 0x76c5184au, 0x14fc91fbu, 0xb3340bacu, 0x516b855du,
    0xefa2ff0eu, 0x8dda78bfu, 0x2c11f270u, 0xca496c21u, 0x6880e5d2u, 0x06b85f83u, 0xa4efd934u, 0x432752e5u,
    0xe15ecc96u, 0x7f964647u, 0x1dcdbff8u, 0xbc0539a9u, 0x5a3cb35au, 0xf8742d0bu, 0x96aba6bcu, 0x34e3206du,
    0xd31a9a1eu, 0x715213cfu, 0x0f898d80u, 0xadc10731u, 0x4bf880e2u, 0xea2ffa93u, 0x88677444u, 0x269eedf5u,
};

static const uint32_t bshim_135_tab2[96] = {
    0xf1b7da07u, 0x8fef53b8u, 0x2e26cd69u, 0xcc5e471au, 0x6a95c0cbu, 0x08cd3a7cu, 0xa704b42du, 0x453c2ddeu,
    0xe373a78fu, 0x81ab2140u, 0x1fe29af1u, 0xbe1a14a2u, 0x5c518e53u, 0xfa890804u, 0x98c081b5u, 0x36f7fb66u,
    0xd52f7517u, 0x7366eec8u, 0x119e6879u, 0xafd5e22au, 0x4e0d5bdbu, 0xec44d58cu, 0x8a7c4f3du, 0x28b3c8eeu,
    0xc6eb429fu, 0x6522bc50u, 0x035a3601u, 0xa191afb2u, 0x3fc92963u, 0xde00a314u, 0x7c381cc5u, 0x1a6f9676u,
    0xb8a71027u, 0x56de89d8u, 0xf5160389u, 0x934d7d3au, 0x3184f6ebu, 0xcfbc709cu, 0x6df3ea4du, 0x0c2b63feu,
    0xaa62ddafu, 0x489a5760u, 0xe6d1d111u, 0x85094ac2u, 0x2340c473u, 0xc1783e24u, 0x5fafb7d5u, 0xfde73186u,
    0x9c1eab37u, 0x3a5624e8u, 0xd88d9e99u, 0x76c5184au, 0x14fc91fbu, 0xb3340bacu, 0x516b855du, 0xefa2ff0eu,
    0x8dda78bfu, 0x2c11f270u, 0xca496c21u, 0x6880e5d2u, 0x06b85f83u, 0xa4efd934u, 0x432752e5u, 0xe15ecc96u,
    0x7f964647u, 0x1dcdbff8u, 0xbc0539a9u, 0x5a3cb35au, 0xf8742d0bu, 0x96aba6bcu, 0x34e3206du, 0xd31a9a1eu,
    0x715213cfu, 0x0f898d80u, 0xadc10731u, 0x4bf880e2u, 0xea2ffa93u, 0x88677444u, 0x269eedf5u, 0xc4d667a6u,
    0x630de157u, 0x01455b08u, 0x9f7cd4b9u, 0x3db44e6au, 0xdbebc81bu, 0x7a2341ccu, 0x185abb7du, 0xb692352eu,
    0x54c9aedfu, 0xf3012890u, 0x9138a241u, 0x2f701bf2u, 0xcda795a3u, 0x6bdf0f54u, 0x0a168905u, 0xa84e02b6u,
};

static const uint32_t bshim_135_tab3[96] = {
    0x7366eec8u, 0x119e6879u, 0xafd5e22au, 0x4e0d5bdbu, 0xec44d58cu, 0x8a7c4f3du, 0x28b3c8eeu, 0xc6eb429fu,
    0x6522bc50u, 0x035a3601u, 0xa191afb2u, 0x3fc92963u, 0xde00a314u, 0x7c381cc5u, 0x1a6f9676u, 0xb8a71027u,
    0x56de89d8u, 0xf5160389u, 0x934d7d3au, 0x3184f6ebu, 0xcfbc709cu, 0x6df3ea4du, 0x0c2b63feu, 0xaa62ddafu,
    0x489a5760u, 0xe6d1d111u, 0x85094ac2u, 0x2340c473u, 0xc1783e24u, 0x5fafb7d5u, 0xfde73186u, 0x9c1eab37u,
    0x3a5624e8u, 0xd88d9e99u, 0x76c5184au, 0x14fc91fbu, 0xb3340bacu, 0x516b855du, 0xefa2ff0eu, 0x8dda78bfu,
    0x2c11f270u, 0xca496c21u, 0x6880e5d2u, 0x06b85f83u, 0xa4efd934u, 0x432752e5u, 0xe15ecc96u, 0x7f964647u,
    0x1dcdbff8u, 0xbc0539a9u, 0x5a3cb35au, 0xf8742d0bu, 0x96aba6bcu, 0x34e3206du, 0xd31a9a1eu, 0x715213cfu,
    0x0f898d80u, 0xadc10731u, 0x4bf880e2u, 0xea2ffa93u, 0x88677444u, 0x269eedf5u, 0xc4d667a6u, 0x630de157u,
    0x01455b08u, 0x9f7cd4b9u, 0x3db44e6au, 0xdbebc81bu, 0x7a2341ccu, 0x185abb7du, 0xb692352eu, 0x54c9aedfu,
    0xf3012890u, 0x9138a241u, 0x2f701bf2u, 0xcda795a3u, 0x6bdf0f54u, 0x0a168905u, 0xa84e02b6u, 0x46857c67u,
    0xe4bcf618u, 0x82f46fc9u, 0x212be97au, 0xbf63632bu, 0x5d9adcdcu, 0xfbd2568du, 0x9a09d03eu, 0x384149efu,
    0xd678c3a0u, 0x74b03d51u, 0x12e7b702u, 0xb11f30b3u, 0x4f56aa64u, 0xed8e2415u, 0x8bc59dc6u, 0x29fd1777u,
};

static const uint32_t bshim_135_tab4[96] = {
    0xf5160389u, 0x934d7d3au, 0x3184f6ebu, 0xcfbc709cu, 0x6df3ea4du, 0x0c2b63feu, 0xaa62ddafu, 0x489a5760u,
    0xe6d1d111u, 0x85094ac2u, 0x2340c473u, 0xc1783e24u, 0x5fafb7d5u, 0xfde73186u, 0x9c1eab37u, 0x3a5624e8u,
    0xd88d9e99u, 0x76c5184au, 0x14fc91fbu, 0xb3340bacu, 0x516b855du, 0xefa2ff0eu, 0x8dda78bfu, 0x2c11f270u,
    0xca496c21u, 0x6880e5d2u, 0x06b85f83u, 0xa4efd934u, 0x432752e5u, 0xe15ecc96u, 0x7f964647u, 0x1dcdbff8u,
    0xbc0539a9u, 0x5a3cb35au, 0xf8742d0bu, 0x96aba6bcu, 0x34e3206du, 0xd31a9a1eu, 0x715213cfu, 0x0f898d80u,
    0xadc10731u, 0x4bf880e2u, 0xea2ffa93u, 0x88677444u, 0x269eedf5u, 0xc4d667a6u, 0x630de157u, 0x01455b08u,
    0x9f7cd4b9u, 0x3db44e6au, 0xdbebc81bu, 0x7a2341ccu, 0x185abb7du, 0xb692352eu, 0x54c9aedfu, 0xf3012890u,
    0x9138a241u, 0x2f701bf2u, 0xcda795a3u, 0x6bdf0f54u, 0x0a168905u, 0xa84e02b6u, 0x46857c67u, 0xe4bcf618u,
    0x82f46fc9u, 0x212be97au, 0xbf63632bu, 0x5d9adcdcu, 0xfbd2568du, 0x9a09d03eu, 0x384149efu, 0xd678c3a0u,
    0x74b03d51u, 0x12e7b702u, 0xb11f30b3u, 0x4f56aa64u, 0xed8e2415u, 0x8bc59dc6u, 0x29fd1777u, 0xc8349128u,
    0x666c0ad9u, 0x04a3848au, 0xa2dafe3bu, 0x411277ecu, 0xdf49f19du, 0x7d816b4eu, 0x1bb8e4ffu, 0xb9f05eb0u,
    0x5827d861u, 0xf65f5212u, 0x9496cbc3u, 0x32ce4574u, 0xd105bf25u, 0x6f3d38d6u, 0x0d74b287u, 0xabac2c38u,
};

static const uint32_t bshim_135_tab5[96] = {
    0x76c5184au, 0x14fc91fbu, 0xb3340bacu, 0x516b855du, 0xefa2ff0eu, 0x8dda78bfu, 0x2c11f270u, 0xca496c21u,
    0x6880e5d2u, 0x06b85f83u, 0xa4efd934u, 0x432752e5u, 0xe15ecc96u, 0x7f964647u, 0x1dcdbff8u, 0xbc0539a9u,
    0x5a3cb35au, 0xf8742d0bu, 0x96aba6bcu, 0x34e3206du, 0xd31a9a1eu, 0x715213cfu, 0x0f898d80u, 0xadc10731u,
    0x4bf880e2u, 0xea2ffa93u, 0x88677444u, 0x269eedf5u, 0xc4d667a6u, 0x630de157u, 0x01455b08u, 0x9f7cd4b9u,
    0x3db44e6au, 0xdbebc81bu, 0x7a2341ccu, 0x185abb7du, 0xb692352eu, 0x54c9aedfu, 0xf3012890u, 0x9138a241u,
    0x2f701bf2u, 0xcda795a3u, 0x6bdf0f54u, 0x0a168905u, 0xa84e02b6u, 0x46857c67u, 0xe4bcf618u, 0x82f46fc9u,
    0x212be97au, 0xbf63632bu, 0x5d9adcdcu, 0xfbd2568du, 0x9a09d03eu, 0x384149efu, 0xd678c3a0u, 0x74b03d51u,
    0x12e7b702u, 0xb11f30b3u, 0x4f56aa64u, 0xed8e2415u, 0x8bc59dc6u, 0x29fd1777u, 0xc8349128u, 0x666c0ad9u,
    0x04a3848au, 0xa2dafe3bu, 0x411277ecu, 0xdf49f19du, 0x7d816b4eu, 0x1bb8e4ffu, 0xb9f05eb0u, 0x5827d861u,
    0xf65f5212u, 0x9496cbc3u, 0x32ce4574u, 0xd105bf25u, 0x6f3d38d6u, 0x0d74b287u, 0xabac2c38u, 0x49e3a5e9u,
    0xe81b1f9au, 0x8652994bu, 0x248a12fcu, 0xc2c18cadu, 0x60f9065eu, 0xff30800fu, 0x9d67f9c0u, 0x3b9f7371u,
    0xd9d6ed22u, 0x780e66d3u, 0x1645e084u, 0xb47d5a35u, 0x52b4d3e6u, 0xf0ec4d97u, 0x8f23c748u, 0x2d5b40f9u,
};

static const uint32_t bshim_135_tab6[96] = {
    0xf8742d0bu, 0x96aba6bcu, 0x34e3206du, 0xd31a9a1eu, 0x715213cfu, 0x0f898d80u, 0xadc10731u, 0x4bf880e2u,
    0xea2ffa93u, 0x88677444u, 0x269eedf5u, 0xc4d667a6u, 0x630de157u, 0x01455b08u, 0x9f7cd4b9u, 0x3db44e6au,
    0xdbebc81bu, 0x7a2341ccu, 0x185abb7du, 0xb692352eu, 0x54c9aedfu, 0xf3012890u, 0x9138a241u, 0x2f701bf2u,
    0xcda795a3u, 0x6bdf0f54u, 0x0a168905u, 0xa84e02b6u, 0x46857c67u, 0xe4bcf618u, 0x82f46fc9u, 0x212be97au,
    0xbf63632bu, 0x5d9adcdcu, 0xfbd2568du, 0x9a09d03eu, 0x384149efu, 0xd678c3a0u, 0x74b03d51u, 0x12e7b702u,
    0xb11f30b3u, 0x4f56aa64u, 0xed8e2415u, 0x8bc59dc6u, 0x29fd1777u, 0xc8349128u, 0x666c0ad9u, 0x04a3848au,
    0xa2dafe3bu, 0x411277ecu, 0xdf49f19du, 0x7d816b4eu, 0x1bb8e4ffu, 0xb9f05eb0u, 0x5827d861u, 0xf65f5212u,
    0x9496cbc3u, 0x32ce4574u, 0xd105bf25u, 0x6f3d38d6u, 0x0d74b287u, 0xabac2c38u, 0x49e3a5e9u, 0xe81b1f9au,
    0x8652994bu, 0x248a12fcu, 0xc2c18cadu, 0x60f9065eu, 0xff30800fu, 0x9d67f9c0u, 0x3b9f7371u, 0xd9d6ed22u,
    0x780e66d3u, 0x1645e084u, 0xb47d5a35u, 0x52b4d3e6u, 0xf0ec4d97u, 0x8f23c748u, 0x2d5b40f9u, 0xcb92baaau,
    0x69ca345bu, 0x0801ae0cu, 0xa63927bdu, 0x4470a16eu, 0xe2a81b1fu, 0x80df94d0u, 0x1f170e81u, 0xbd4e8832u,
    0x5b8601e3u, 0xf9bd7b94u, 0x97f4f545u, 0x362c6ef6u, 0xd463e8a7u, 0x729b6258u, 0x10d2dc09u, 0xaf0a55bau,
};

static const uint32_t bshim_135_tab7[96] = {
    0x7a2341ccu, 0x185abb7du, 0xb692352eu, 0x54c9aedfu, 0xf3012890u, 0x9138a241u, 0x2f701bf2u, 0xcda795a3u,
    0x6bdf0f54u, 0x0a168905u, 0xa84e02b6u, 0x46857c67u, 0xe4bcf618u, 0x82f46fc9u, 0x212be97au, 0xbf63632bu,
    0x5d9adcdcu, 0xfbd2568du, 0x9a09d03eu, 0x384149efu, 0xd678c3a0u, 0x74b03d51u, 0x12e7b702u, 0xb11f30b3u,
    0x4f56aa64u, 0xed8e2415u, 0x8bc59dc6u, 0x29fd1777u, 0xc8349128u, 0x666c0ad9u, 0x04a3848au, 0xa2dafe3bu,
    0x411277ecu, 0xdf49f19du, 0x7d816b4eu, 0x1bb8e4ffu, 0xb9f05eb0u, 0x5827d861u, 0xf65f5212u, 0x9496cbc3u,
    0x32ce4574u, 0xd105bf25u, 0x6f3d38d6u, 0x0d74b287u, 0xabac2c38u, 0x49e3a5e9u, 0xe81b1f9au, 0x8652994bu,
    0x248a12fcu, 0xc2c18cadu, 0x60f9065eu, 0xff30800fu, 0x9d67f9c0u, 0x3b9f7371u, 0xd9d6ed22u, 0x780e66d3u,
    0x1645e084u, 0xb47d5a35u, 0x52b4d3e6u, 0xf0ec4d97u, 0x8f23c748u, 0x2d5b40f9u, 0xcb92baaau, 0x69ca345bu,
    0x0801ae0cu, 0xa63927bdu, 0x4470a16eu, 0xe2a81b1fu, 0x80df94d0u, 0x1f170e81u, 0xbd4e8832u, 0x5b8601e3u,
    0xf9bd7b94u, 0x97f4f545u, 0x362c6ef6u, 0xd463e8a7u, 0x729b6258u, 0x10d2dc09u, 0xaf0a55bau, 0x4d41cf6bu,
    0xeb79491cu, 0x89b0c2cdu, 0x27e83c7eu, 0xc61fb62fu, 0x64572fe0u, 0x028ea991u, 0xa0c62342u, 0x3efd9cf3u,
    0xdd3516a4u, 0x7b6c9055u, 0x19a40a06u, 0xb7db83b7u, 0x5612fd68u, 0xf44a7719u, 0x9281f0cau, 0x30b96a7bu,
};

struct bshim_135_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_135_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_135_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_135_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_135_reset(struct bshim_135_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00105009u;
    return 0;
}

