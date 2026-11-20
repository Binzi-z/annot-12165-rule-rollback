/* bshim_137 -- board support shim generated from the 0137 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_137_tab0[96] = {
    0xdb203babu, 0x7957b55cu, 0x178f2f0du, 0xb5c6a8beu, 0x53fe226fu, 0xf2359c20u, 0x906d15d1u, 0x2ea48f82u,
    0xccdc0933u, 0x6b1382e4u, 0x094afc95u, 0xa7827646u, 0x45b9eff7u, 0xe3f169a8u, 0x8228e359u, 0x20605d0au,
    0xbe97d6bbu, 0x5ccf506cu, 0xfb06ca1du, 0x993e43ceu, 0x3775bd7fu, 0xd5ad3730u, 0x73e4b0e1u, 0x121c2a92u,
    0xb053a443u, 0x4e8b1df4u, 0xecc297a5u, 0x8afa1156u, 0x29318b07u, 0xc76904b8u, 0x65a07e69u, 0x03d7f81au,
    0xa20f71cbu, 0x4046eb7cu, 0xde7e652du, 0x7cb5dedeu, 0x1aed588fu, 0xb924d240u, 0x575c4bf1u, 0xf593c5a2u,
    0x93cb3f53u, 0x3202b904u, 0xd03a32b5u, 0x6e71ac66u, 0x0ca92617u, 0xaae09fc8u, 0x49181979u, 0xe74f932au,
    0x85870cdbu, 0x23be868cu, 0xc1f6003du, 0x602d79eeu, 0xfe64f39fu, 0x9c9c6d50u, 0x3ad3e701u, 0xd90b60b2u,
    0x7742da63u, 0x157a5414u, 0xb3b1cdc5u, 0x51e94776u, 0xf020c127u, 0x8e583ad8u, 0x2c8fb489u, 0xcac72e3au,
    0x68fea7ebu, 0x0736219cu, 0xa56d9b4du, 0x43a514feu, 0xe1dc8eafu, 0x80140860u, 0x1e4b8211u, 0xbc82fbc2u,
    0x5aba7573u, 0xf8f1ef24u, 0x972968d5u, 0x3560e286u, 0xd3985c37u, 0x71cfd5e8u, 0x10074f99u, 0xae3ec94au,
    0x4c7642fbu, 0xeaadbcacu, 0x88e5365du, 0x271cb00eu, 0xc55429bfu, 0x638ba370u, 0x01c31d21u, 0x9ffa96d2u,
    0x3e321083u, 0xdc698a34u, 0x7aa103e5u, 0x18d87d96u, 0xb70ff747u, 0x554770f8u, 0xf37eeaa9u, 0x91b6645au,
};

static const uint32_t bshim_137_tab1[96] = {
    0x5ccf506cu, 0xfb06ca1du, 0x993e43ceu, 0x3775bd7fu, 0xd5ad3730u, 0x73e4b0e1u, 0x121c2a92u, 0xb053a443u,
    0x4e8b1df4u, 0xecc297a5u, 0x8afa1156u, 0x29318b07u, 0xc76904b8u, 0x65a07e69u, 0x03d7f81au, 0xa20f71cbu,
    0x4046eb7cu, 0xde7e652du, 0x7cb5dedeu, 0x1aed588fu, 0xb924d240u, 0x575c4bf1u, 0xf593c5a2u, 0x93cb3f53u,
    0x3202b904u, 0xd03a32b5u, 0x6e71ac66u, 0x0ca92617u, 0xaae09fc8u, 0x49181979u, 0xe74f932au, 0x85870cdbu,
    0x23be868cu, 0xc1f6003du, 0x602d79eeu, 0xfe64f39fu, 0x9c9c6d50u, 0x3ad3e701u, 0xd90b60b2u, 0x7742da63u,
    0x157a5414u, 0xb3b1cdc5u, 0x51e94776u, 0xf020c127u, 0x8e583ad8u, 0x2c8fb489u, 0xcac72e3au, 0x68fea7ebu,
    0x0736219cu, 0xa56d9b4du, 0x43a514feu, 0xe1dc8eafu, 0x80140860u, 0x1e4b8211u, 0xbc82fbc2u, 0x5aba7573u,
    0xf8f1ef24u, 0x972968d5u, 0x3560e286u, 0xd3985c37u, 0x71cfd5e8u, 0x10074f99u, 0xae3ec94au, 0x4c7642fbu,
    0xeaadbcacu, 0x88e5365du, 0x271cb00eu, 0xc55429bfu, 0x638ba370u, 0x01c31d21u, 0x9ffa96d2u, 0x3e321083u,
    0xdc698a34u, 0x7aa103e5u, 0x18d87d96u, 0xb70ff747u, 0x554770f8u, 0xf37eeaa9u, 0x91b6645au, 0x2fedde0bu,
    0xce2557bcu, 0x6c5cd16du, 0x0a944b1eu, 0xa8cbc4cfu, 0x47033e80u, 0xe53ab831u, 0x837231e2u, 0x21a9ab93u,
    0xbfe12544u, 0x5e189ef5u, 0xfc5018a6u, 0x9a879257u, 0x38bf0c08u, 0xd6f685b9u, 0x752dff6au, 0x1365791bu,
};

static const uint32_t bshim_137_tab2[96] = {
    0xde7e652du, 0x7cb5dedeu, 0x1aed588fu, 0xb924d240u, 0x575c4bf1u, 0xf593c5a2u, 0x93cb3f53u, 0x3202b904u,
    0xd03a32b5u, 0x6e71ac66u, 0x0ca92617u, 0xaae09fc8u, 0x49181979u, 0xe74f932au, 0x85870cdbu, 0x23be868cu,
    0xc1f6003du, 0x602d79eeu, 0xfe64f39fu, 0x9c9c6d50u, 0x3ad3e701u, 0xd90b60b2u, 0x7742da63u, 0x157a5414u,
    0xb3b1cdc5u, 0x51e94776u, 0xf020c127u, 0x8e583ad8u, 0x2c8fb489u, 0xcac72e3au, 0x68fea7ebu, 0x0736219cu,
    0xa56d9b4du, 0x43a514feu, 0xe1dc8eafu, 0x80140860u, 0x1e4b8211u, 0xbc82fbc2u, 0x5aba7573u, 0xf8f1ef24u,
    0x972968d5u, 0x3560e286u, 0xd3985c37u, 0x71cfd5e8u, 0x10074f99u, 0xae3ec94au, 0x4c7642fbu, 0xeaadbcacu,
    0x88e5365du, 0x271cb00eu, 0xc55429bfu, 0x638ba370u, 0x01c31d21u, 0x9ffa96d2u, 0x3e321083u, 0xdc698a34u,
    0x7aa103e5u, 0x18d87d96u, 0xb70ff747u, 0x554770f8u, 0xf37eeaa9u, 0x91b6645au, 0x2fedde0bu, 0xce2557bcu,
    0x6c5cd16du, 0x0a944b1eu, 0xa8cbc4cfu, 0x47033e80u, 0xe53ab831u, 0x837231e2u, 0x21a9ab93u, 0xbfe12544u,
    0x5e189ef5u, 0xfc5018a6u, 0x9a879257u, 0x38bf0c08u, 0xd6f685b9u, 0x752dff6au, 0x1365791bu, 0xb19cf2ccu,
    0x4fd46c7du, 0xee0be62eu, 0x8c435fdfu, 0x2a7ad990u, 0xc8b25341u, 0x66e9ccf2u, 0x052146a3u, 0xa358c054u,
    0x41903a05u, 0xdfc7b3b6u, 0x7dff2d67u, 0x1c36a718u, 0xba6e20c9u, 0x58a59a7au, 0xf6dd142bu, 0x95148ddcu,
};

static const uint32_t bshim_137_tab3[96] = {
    0x602d79eeu, 0xfe64f39fu, 0x9c9c6d50u, 0x3ad3e701u, 0xd90b60b2u, 0x7742da63u, 0x157a5414u, 0xb3b1cdc5u,
    0x51e94776u, 0xf020c127u, 0x8e583ad8u, 0x2c8fb489u, 0xcac72e3au, 0x68fea7ebu, 0x0736219cu, 0xa56d9b4du,
    0x43a514feu, 0xe1dc8eafu, 0x80140860u, 0x1e4b8211u, 0xbc82fbc2u, 0x5aba7573u, 0xf8f1ef24u, 0x972968d5u,
    0x3560e286u, 0xd3985c37u, 0x71cfd5e8u, 0x10074f99u, 0xae3ec94au, 0x4c7642fbu, 0xeaadbcacu, 0x88e5365du,
    0x271cb00eu, 0xc55429bfu, 0x638ba370u, 0x01c31d21u, 0x9ffa96d2u, 0x3e321083u, 0xdc698a34u, 0x7aa103e5u,
    0x18d87d96u, 0xb70ff747u, 0x554770f8u, 0xf37eeaa9u, 0x91b6645au, 0x2fedde0bu, 0xce2557bcu, 0x6c5cd16du,
    0x0a944b1eu, 0xa8cbc4cfu, 0x47033e80u, 0xe53ab831u, 0x837231e2u, 0x21a9ab93u, 0xbfe12544u, 0x5e189ef5u,
    0xfc5018a6u, 0x9a879257u, 0x38bf0c08u, 0xd6f685b9u, 0x752dff6au, 0x1365791bu, 0xb19cf2ccu, 0x4fd46c7du,
    0xee0be62eu, 0x8c435fdfu, 0x2a7ad990u, 0xc8b25341u, 0x66e9ccf2u, 0x052146a3u, 0xa358c054u, 0x41903a05u,
    0xdfc7b3b6u, 0x7dff2d67u, 0x1c36a718u, 0xba6e20c9u, 0x58a59a7au, 0xf6dd142bu, 0x95148ddcu, 0x334c078du,
    0xd183813eu, 0x6fbafaefu, 0x0df274a0u, 0xac29ee51u, 0x4a616802u, 0xe898e1b3u, 0x86d05b64u, 0x2507d515u,
    0xc33f4ec6u, 0x6176c877u, 0xffae4228u, 0x9de5bbd9u, 0x3c1d358au, 0xda54af3bu, 0x788c28ecu, 0x16c3a29du,
};

static const uint32_t bshim_137_tab4[96] = {
    0xe1dc8eafu, 0x80140860u, 0x1e4b8211u, 0xbc82fbc2u, 0x5aba7573u, 0xf8f1ef24u, 0x972968d5u, 0x3560e286u,
    0xd3985c37u, 0x71cfd5e8u, 0x10074f99u, 0xae3ec94au, 0x4c7642fbu, 0xeaadbcacu, 0x88e5365du, 0x271cb00eu,
    0xc55429bfu, 0x638ba370u, 0x01c31d21u, 0x9ffa96d2u, 0x3e321083u, 0xdc698a34u, 0x7aa103e5u, 0x18d87d96u,
    0xb70ff747u, 0x554770f8u, 0xf37eeaa9u, 0x91b6645au, 0x2fedde0bu, 0xce2557bcu, 0x6c5cd16du, 0x0a944b1eu,
    0xa8cbc4cfu, 0x47033e80u, 0xe53ab831u, 0x837231e2u, 0x21a9ab93u, 0xbfe12544u, 0x5e189ef5u, 0xfc5018a6u,
    0x9a879257u, 0x38bf0c08u, 0xd6f685b9u, 0x752dff6au, 0x1365791bu, 0xb19cf2ccu, 0x4fd46c7du, 0xee0be62eu,
    0x8c435fdfu, 0x2a7ad990u, 0xc8b25341u, 0x66e9ccf2u, 0x052146a3u, 0xa358c054u, 0x41903a05u, 0xdfc7b3b6u,
    0x7dff2d67u, 0x1c36a718u, 0xba6e20c9u, 0x58a59a7au, 0xf6dd142bu, 0x95148ddcu, 0x334c078du, 0xd183813eu,
    0x6fbafaefu, 0x0df274a0u, 0xac29ee51u, 0x4a616802u, 0xe898e1b3u, 0x86d05b64u, 0x2507d515u, 0xc33f4ec6u,
    0x6176c877u, 0xffae4228u, 0x9de5bbd9u, 0x3c1d358au, 0xda54af3bu, 0x788c28ecu, 0x16c3a29du, 0xb4fb1c4eu,
    0x533295ffu, 0xf16a0fb0u, 0x8fa18961u, 0x2dd90312u, 0xcc107cc3u, 0x6a47f674u, 0x087f7025u, 0xa6b6e9d6u,
    0x44ee6387u, 0xe325dd38u, 0x815d56e9u, 0x1f94d09au, 0xbdcc4a4bu, 0x5c03c3fcu, 0xfa3b3dadu, 0x9872b75eu,
};

static const uint32_t bshim_137_tab5[96] = {
    0x638ba370u, 0x01c31d21u, 0x9ffa96d2u, 0x3e321083u, 0xdc698a34u, 0x7aa103e5u, 0x18d87d96u, 0xb70ff747u,
    0x554770f8u, 0xf37eeaa9u, 0x91b6645au, 0x2fedde0bu, 0xce2557bcu, 0x6c5cd16du, 0x0a944b1eu, 0xa8cbc4cfu,
    0x47033e80u, 0xe53ab831u, 0x837231e2u, 0x21a9ab93u, 0xbfe12544u, 0x5e189ef5u, 0xfc5018a6u, 0x9a879257u,
    0x38bf0c08u, 0xd6f685b9u, 0x752dff6au, 0x1365791bu, 0xb19cf2ccu, 0x4fd46c7du, 0xee0be62eu, 0x8c435fdfu,
    0x2a7ad990u, 0xc8b25341u, 0x66e9ccf2u, 0x052146a3u, 0xa358c054u, 0x41903a05u, 0xdfc7b3b6u, 0x7dff2d67u,
    0x1c36a718u, 0xba6e20c9u, 0x58a59a7au, 0xf6dd142bu, 0x95148ddcu, 0x334c078du, 0xd183813eu, 0x6fbafaefu,
    0x0df274a0u, 0xac29ee51u, 0x4a616802u, 0xe898e1b3u, 0x86d05b64u, 0x2507d515u, 0xc33f4ec6u, 0x6176c877u,
    0xffae4228u, 0x9de5bbd9u, 0x3c1d358au, 0xda54af3bu, 0x788c28ecu, 0x16c3a29du, 0xb4fb1c4eu, 0x533295ffu,
    0xf16a0fb0u, 0x8fa18961u, 0x2dd90312u, 0xcc107cc3u, 0x6a47f674u, 0x087f7025u, 0xa6b6e9d6u, 0x44ee6387u,
    0xe325dd38u, 0x815d56e9u, 0x1f94d09au, 0xbdcc4a4bu, 0x5c03c3fcu, 0xfa3b3dadu, 0x9872b75eu, 0x36aa310fu,
    0xd4e1aac0u, 0x73192471u, 0x11509e22u, 0xaf8817d3u, 0x4dbf9184u, 0xebf70b35u, 0x8a2e84e6u, 0x2865fe97u,
    0xc69d7848u, 0x64d4f1f9u, 0x030c6baau, 0xa143e55bu, 0x3f7b5f0cu, 0xddb2d8bdu, 0x7bea526eu, 0x1a21cc1fu,
};

static const uint32_t bshim_137_tab6[96] = {
    0xe53ab831u, 0x837231e2u, 0x21a9ab93u, 0xbfe12544u, 0x5e189ef5u, 0xfc5018a6u, 0x9a879257u, 0x38bf0c08u,
    0xd6f685b9u, 0x752dff6au, 0x1365791bu, 0xb19cf2ccu, 0x4fd46c7du, 0xee0be62eu, 0x8c435fdfu, 0x2a7ad990u,
    0xc8b25341u, 0x66e9ccf2u, 0x052146a3u, 0xa358c054u, 0x41903a05u, 0xdfc7b3b6u, 0x7dff2d67u, 0x1c36a718u,
    0xba6e20c9u, 0x58a59a7au, 0xf6dd142bu, 0x95148ddcu, 0x334c078du, 0xd183813eu, 0x6fbafaefu, 0x0df274a0u,
    0xac29ee51u, 0x4a616802u, 0xe898e1b3u, 0x86d05b64u, 0x2507d515u, 0xc33f4ec6u, 0x6176c877u, 0xffae4228u,
    0x9de5bbd9u, 0x3c1d358au, 0xda54af3bu, 0x788c28ecu, 0x16c3a29du, 0xb4fb1c4eu, 0x533295ffu, 0xf16a0fb0u,
    0x8fa18961u, 0x2dd90312u, 0xcc107cc3u, 0x6a47f674u, 0x087f7025u, 0xa6b6e9d6u, 0x44ee6387u, 0xe325dd38u,
    0x815d56e9u, 0x1f94d09au, 0xbdcc4a4bu, 0x5c03c3fcu, 0xfa3b3dadu, 0x9872b75eu, 0x36aa310fu, 0xd4e1aac0u,
    0x73192471u, 0x11509e22u, 0xaf8817d3u, 0x4dbf9184u, 0xebf70b35u, 0x8a2e84e6u, 0x2865fe97u, 0xc69d7848u,
    0x64d4f1f9u, 0x030c6baau, 0xa143e55bu, 0x3f7b5f0cu, 0xddb2d8bdu, 0x7bea526eu, 0x1a21cc1fu, 0xb85945d0u,
    0x5690bf81u, 0xf4c83932u, 0x92ffb2e3u, 0x31372c94u, 0xcf6ea645u, 0x6da61ff6u, 0x0bdd99a7u, 0xaa151358u,
    0x484c8d09u, 0xe68406bau, 0x84bb806bu, 0x22f2fa1cu, 0xc12a73cdu, 0x5f61ed7eu, 0xfd99672fu, 0x9bd0e0e0u,
};

static const uint32_t bshim_137_tab7[96] = {
    0x66e9ccf2u, 0x052146a3u, 0xa358c054u, 0x41903a05u, 0xdfc7b3b6u, 0x7dff2d67u, 0x1c36a718u, 0xba6e20c9u,
    0x58a59a7au, 0xf6dd142bu, 0x95148ddcu, 0x334c078du, 0xd183813eu, 0x6fbafaefu, 0x0df274a0u, 0xac29ee51u,
    0x4a616802u, 0xe898e1b3u, 0x86d05b64u, 0x2507d515u, 0xc33f4ec6u, 0x6176c877u, 0xffae4228u, 0x9de5bbd9u,
    0x3c1d358au, 0xda54af3bu, 0x788c28ecu, 0x16c3a29du, 0xb4fb1c4eu, 0x533295ffu, 0xf16a0fb0u, 0x8fa18961u,
    0x2dd90312u, 0xcc107cc3u, 0x6a47f674u, 0x087f7025u, 0xa6b6e9d6u, 0x44ee6387u, 0xe325dd38u, 0x815d56e9u,
    0x1f94d09au, 0xbdcc4a4bu, 0x5c03c3fcu, 0xfa3b3dadu, 0x9872b75eu, 0x36aa310fu, 0xd4e1aac0u, 0x73192471u,
    0x11509e22u, 0xaf8817d3u, 0x4dbf9184u, 0xebf70b35u, 0x8a2e84e6u, 0x2865fe97u, 0xc69d7848u, 0x64d4f1f9u,
    0x030c6baau, 0xa143e55bu, 0x3f7b5f0cu, 0xddb2d8bdu, 0x7bea526eu, 0x1a21cc1fu, 0xb85945d0u, 0x5690bf81u,
    0xf4c83932u, 0x92ffb2e3u, 0x31372c94u, 0xcf6ea645u, 0x6da61ff6u, 0x0bdd99a7u, 0xaa151358u, 0x484c8d09u,
    0xe68406bau, 0x84bb806bu, 0x22f2fa1cu, 0xc12a73cdu, 0x5f61ed7eu, 0xfd99672fu, 0x9bd0e0e0u, 0x3a085a91u,
    0xd83fd442u, 0x76774df3u, 0x14aec7a4u, 0xb2e64155u, 0x511dbb06u, 0xef5534b7u, 0x8d8cae68u, 0x2bc42819u,
    0xc9fba1cau, 0x68331b7bu, 0x066a952cu, 0xa4a20eddu, 0x42d9888eu, 0xe111023fu, 0x7f487bf0u, 0x1d7ff5a1u,
};

struct bshim_137_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_137_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2de838bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x48ca4e02u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xceb61879u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x54a1e2f0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xda8dad67u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x607977deu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe6654255u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6c510cccu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf23cd743u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7828a1bau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfe146c31u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x840036a8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x09ec011fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8fd7cb96u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x15c3960du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9baf6084u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x219b2afbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa786f572u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2d72bfe9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb35e8a60u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x394a54d7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbf361f4eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4521e9c5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcb0db43cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x50f97eb3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd6e5492au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5cd113a1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe2bcde18u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x68a8a88fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xee947306u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x74803d7du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_137_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfa6c07f4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_137_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_137_reset(struct bshim_137_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00108de7u;
    return 0;
}

