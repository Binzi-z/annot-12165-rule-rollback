/* bshim_074 -- board support shim generated from the 0074 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_074_tab0[96] = {
    0x38b21c7eu, 0xd6e9962fu, 0x75210fe0u, 0x13588991u, 0xb1900342u, 0x4fc77cf3u, 0xedfef6a4u, 0x8c367055u,
    0x2a6dea06u, 0xc8a563b7u, 0x66dcdd68u, 0x05145719u, 0xa34bd0cau, 0x41834a7bu, 0xdfbac42cu, 0x7df23dddu,
    0x1c29b78eu, 0xba61313fu, 0x5898aaf0u, 0xf6d024a1u, 0x95079e52u, 0x333f1803u, 0xd17691b4u, 0x6fae0b65u,
    0x0de58516u, 0xac1cfec7u, 0x4a547878u, 0xe88bf229u, 0x86c36bdau, 0x24fae58bu, 0xc3325f3cu, 0x6169d8edu,
    0xffa1529eu, 0x9dd8cc4fu, 0x3c104600u, 0xda47bfb1u, 0x787f3962u, 0x16b6b313u, 0xb4ee2cc4u, 0x5325a675u,
    0xf15d2026u, 0x8f9499d7u, 0x2dcc1388u, 0xcc038d39u, 0x6a3b06eau, 0x0872809bu, 0xa6a9fa4cu, 0x44e173fdu,
    0xe318edaeu, 0x8150675fu, 0x1f87e110u, 0xbdbf5ac1u, 0x5bf6d472u, 0xfa2e4e23u, 0x9865c7d4u, 0x369d4185u,
    0xd4d4bb36u, 0x730c34e7u, 0x1143ae98u, 0xaf7b2849u, 0x4db2a1fau, 0xebea1babu, 0x8a21955cu, 0x28590f0du,
    0xc69088beu, 0x64c8026fu, 0x02ff7c20u, 0xa136f5d1u, 0x3f6e6f82u, 0xdda5e933u, 0x7bdd62e4u, 0x1a14dc95u,
    0xb84c5646u, 0x5683cff7u, 0xf4bb49a8u, 0x92f2c359u, 0x312a3d0au, 0xcf61b6bbu, 0x6d99306cu, 0x0bd0aa1du,
    0xaa0823ceu, 0x483f9d7fu, 0xe6771730u, 0x84ae90e1u, 0x22e60a92u, 0xc11d8443u, 0x5f54fdf4u, 0xfd8c77a5u,
    0x9bc3f156u, 0x39fb6b07u, 0xd832e4b8u, 0x766a5e69u, 0x14a1d81au, 0xb2d951cbu, 0x5110cb7cu, 0xef48452du,
};

static const uint32_t bshim_074_tab1[96] = {
    0xba61313fu, 0x5898aaf0u, 0xf6d024a1u, 0x95079e52u, 0x333f1803u, 0xd17691b4u, 0x6fae0b65u, 0x0de58516u,
    0xac1cfec7u, 0x4a547878u, 0xe88bf229u, 0x86c36bdau, 0x24fae58bu, 0xc3325f3cu, 0x6169d8edu, 0xffa1529eu,
    0x9dd8cc4fu, 0x3c104600u, 0xda47bfb1u, 0x787f3962u, 0x16b6b313u, 0xb4ee2cc4u, 0x5325a675u, 0xf15d2026u,
    0x8f9499d7u, 0x2dcc1388u, 0xcc038d39u, 0x6a3b06eau, 0x0872809bu, 0xa6a9fa4cu, 0x44e173fdu, 0xe318edaeu,
    0x8150675fu, 0x1f87e110u, 0xbdbf5ac1u, 0x5bf6d472u, 0xfa2e4e23u, 0x9865c7d4u, 0x369d4185u, 0xd4d4bb36u,
    0x730c34e7u, 0x1143ae98u, 0xaf7b2849u, 0x4db2a1fau, 0xebea1babu, 0x8a21955cu, 0x28590f0du, 0xc69088beu,
    0x64c8026fu, 0x02ff7c20u, 0xa136f5d1u, 0x3f6e6f82u, 0xdda5e933u, 0x7bdd62e4u, 0x1a14dc95u, 0xb84c5646u,
    0x5683cff7u, 0xf4bb49a8u, 0x92f2c359u, 0x312a3d0au, 0xcf61b6bbu, 0x6d99306cu, 0x0bd0aa1du, 0xaa0823ceu,
    0x483f9d7fu, 0xe6771730u, 0x84ae90e1u, 0x22e60a92u, 0xc11d8443u, 0x5f54fdf4u, 0xfd8c77a5u, 0x9bc3f156u,
    0x39fb6b07u, 0xd832e4b8u, 0x766a5e69u, 0x14a1d81au, 0xb2d951cbu, 0x5110cb7cu, 0xef48452du, 0x8d7fbedeu,
    0x2bb7388fu, 0xc9eeb240u, 0x68262bf1u, 0x065da5a2u, 0xa4951f53u, 0x42cc9904u, 0xe10412b5u, 0x7f3b8c66u,
    0x1d730617u, 0xbbaa7fc8u, 0x59e1f979u, 0xf819732au, 0x9650ecdbu, 0x3488668cu, 0xd2bfe03du, 0x70f759eeu,
};

static const uint32_t bshim_074_tab2[96] = {
    0x3c104600u, 0xda47bfb1u, 0x787f3962u, 0x16b6b313u, 0xb4ee2cc4u, 0x5325a675u, 0xf15d2026u, 0x8f9499d7u,
    0x2dcc1388u, 0xcc038d39u, 0x6a3b06eau, 0x0872809bu, 0xa6a9fa4cu, 0x44e173fdu, 0xe318edaeu, 0x8150675fu,
    0x1f87e110u, 0xbdbf5ac1u, 0x5bf6d472u, 0xfa2e4e23u, 0x9865c7d4u, 0x369d4185u, 0xd4d4bb36u, 0x730c34e7u,
    0x1143ae98u, 0xaf7b2849u, 0x4db2a1fau, 0xebea1babu, 0x8a21955cu, 0x28590f0du, 0xc69088beu, 0x64c8026fu,
    0x02ff7c20u, 0xa136f5d1u, 0x3f6e6f82u, 0xdda5e933u, 0x7bdd62e4u, 0x1a14dc95u, 0xb84c5646u, 0x5683cff7u,
    0xf4bb49a8u, 0x92f2c359u, 0x312a3d0au, 0xcf61b6bbu, 0x6d99306cu, 0x0bd0aa1du, 0xaa0823ceu, 0x483f9d7fu,
    0xe6771730u, 0x84ae90e1u, 0x22e60a92u, 0xc11d8443u, 0x5f54fdf4u, 0xfd8c77a5u, 0x9bc3f156u, 0x39fb6b07u,
    0xd832e4b8u, 0x766a5e69u, 0x14a1d81au, 0xb2d951cbu, 0x5110cb7cu, 0xef48452du, 0x8d7fbedeu, 0x2bb7388fu,
    0xc9eeb240u, 0x68262bf1u, 0x065da5a2u, 0xa4951f53u, 0x42cc9904u, 0xe10412b5u, 0x7f3b8c66u, 0x1d730617u,
    0xbbaa7fc8u, 0x59e1f979u, 0xf819732au, 0x9650ecdbu, 0x3488668cu, 0xd2bfe03du, 0x70f759eeu, 0x0f2ed39fu,
    0xad664d50u, 0x4b9dc701u, 0xe9d540b2u, 0x880cba63u, 0x26443414u, 0xc47badc5u, 0x62b32776u, 0x00eaa127u,
    0x9f221ad8u, 0x3d599489u, 0xdb910e3au, 0x79c887ebu, 0x1800019cu, 0xb6377b4du, 0x546ef4feu, 0xf2a66eafu,
};

static const uint32_t bshim_074_tab3[96] = {
    0xbdbf5ac1u, 0x5bf6d472u, 0xfa2e4e23u, 0x9865c7d4u, 0x369d4185u, 0xd4d4bb36u, 0x730c34e7u, 0x1143ae98u,
    0xaf7b2849u, 0x4db2a1fau, 0xebea1babu, 0x8a21955cu, 0x28590f0du, 0xc69088beu, 0x64c8026fu, 0x02ff7c20u,
    0xa136f5d1u, 0x3f6e6f82u, 0xdda5e933u, 0x7bdd62e4u, 0x1a14dc95u, 0xb84c5646u, 0x5683cff7u, 0xf4bb49a8u,
    0x92f2c359u, 0x312a3d0au, 0xcf61b6bbu, 0x6d99306cu, 0x0bd0aa1du, 0xaa0823ceu, 0x483f9d7fu, 0xe6771730u,
    0x84ae90e1u, 0x22e60a92u, 0xc11d8443u, 0x5f54fdf4u, 0xfd8c77a5u, 0x9bc3f156u, 0x39fb6b07u, 0xd832e4b8u,
    0x766a5e69u, 0x14a1d81au, 0xb2d951cbu, 0x5110cb7cu, 0xef48452du, 0x8d7fbedeu, 0x2bb7388fu, 0xc9eeb240u,
    0x68262bf1u, 0x065da5a2u, 0xa4951f53u, 0x42cc9904u, 0xe10412b5u, 0x7f3b8c66u, 0x1d730617u, 0xbbaa7fc8u,
    0x59e1f979u, 0xf819732au, 0x9650ecdbu, 0x3488668cu, 0xd2bfe03du, 0x70f759eeu, 0x0f2ed39fu, 0xad664d50u,
    0x4b9dc701u, 0xe9d540b2u, 0x880cba63u, 0x26443414u, 0xc47badc5u, 0x62b32776u, 0x00eaa127u, 0x9f221ad8u,
    0x3d599489u, 0xdb910e3au, 0x79c887ebu, 0x1800019cu, 0xb6377b4du, 0x546ef4feu, 0xf2a66eafu, 0x90dde860u,
    0x2f156211u, 0xcd4cdbc2u, 0x6b845573u, 0x09bbcf24u, 0xa7f348d5u, 0x462ac286u, 0xe4623c37u, 0x8299b5e8u,
    0x20d12f99u, 0xbf08a94au, 0x5d4022fbu, 0xfb779cacu, 0x99af165du, 0x37e6900eu, 0xd61e09bfu, 0x74558370u,
};

static const uint32_t bshim_074_tab4[96] = {
    0x3f6e6f82u, 0xdda5e933u, 0x7bdd62e4u, 0x1a14dc95u, 0xb84c5646u, 0x5683cff7u, 0xf4bb49a8u, 0x92f2c359u,
    0x312a3d0au, 0xcf61b6bbu, 0x6d99306cu, 0x0bd0aa1du, 0xaa0823ceu, 0x483f9d7fu, 0xe6771730u, 0x84ae90e1u,
    0x22e60a92u, 0xc11d8443u, 0x5f54fdf4u, 0xfd8c77a5u, 0x9bc3f156u, 0x39fb6b07u, 0xd832e4b8u, 0x766a5e69u,
    0x14a1d81au, 0xb2d951cbu, 0x5110cb7cu, 0xef48452du, 0x8d7fbedeu, 0x2bb7388fu, 0xc9eeb240u, 0x68262bf1u,
    0x065da5a2u, 0xa4951f53u, 0x42cc9904u, 0xe10412b5u, 0x7f3b8c66u, 0x1d730617u, 0xbbaa7fc8u, 0x59e1f979u,
    0xf819732au, 0x9650ecdbu, 0x3488668cu, 0xd2bfe03du, 0x70f759eeu, 0x0f2ed39fu, 0xad664d50u, 0x4b9dc701u,
    0xe9d540b2u, 0x880cba63u, 0x26443414u, 0xc47badc5u, 0x62b32776u, 0x00eaa127u, 0x9f221ad8u, 0x3d599489u,
    0xdb910e3au, 0x79c887ebu, 0x1800019cu, 0xb6377b4du, 0x546ef4feu, 0xf2a66eafu, 0x90dde860u, 0x2f156211u,
    0xcd4cdbc2u, 0x6b845573u, 0x09bbcf24u, 0xa7f348d5u, 0x462ac286u, 0xe4623c37u, 0x8299b5e8u, 0x20d12f99u,
    0xbf08a94au, 0x5d4022fbu, 0xfb779cacu, 0x99af165du, 0x37e6900eu, 0xd61e09bfu, 0x74558370u, 0x128cfd21u,
    0xb0c476d2u, 0x4efbf083u, 0xed336a34u, 0x8b6ae3e5u, 0x29a25d96u, 0xc7d9d747u, 0x661150f8u, 0x0448caa9u,
    0xa280445au, 0x40b7be0bu, 0xdeef37bcu, 0x7d26b16du, 0x1b5e2b1eu, 0xb995a4cfu, 0x57cd1e80u, 0xf6049831u,
};

static const uint32_t bshim_074_tab5[96] = {
    0xc11d8443u, 0x5f54fdf4u, 0xfd8c77a5u, 0x9bc3f156u, 0x39fb6b07u, 0xd832e4b8u, 0x766a5e69u, 0x14a1d81au,
    0xb2d951cbu, 0x5110cb7cu, 0xef48452du, 0x8d7fbedeu, 0x2bb7388fu, 0xc9eeb240u, 0x68262bf1u, 0x065da5a2u,
    0xa4951f53u, 0x42cc9904u, 0xe10412b5u, 0x7f3b8c66u, 0x1d730617u, 0xbbaa7fc8u, 0x59e1f979u, 0xf819732au,
    0x9650ecdbu, 0x3488668cu, 0xd2bfe03du, 0x70f759eeu, 0x0f2ed39fu, 0xad664d50u, 0x4b9dc701u, 0xe9d540b2u,
    0x880cba63u, 0x26443414u, 0xc47badc5u, 0x62b32776u, 0x00eaa127u, 0x9f221ad8u, 0x3d599489u, 0xdb910e3au,
    0x79c887ebu, 0x1800019cu, 0xb6377b4du, 0x546ef4feu, 0xf2a66eafu, 0x90dde860u, 0x2f156211u, 0xcd4cdbc2u,
    0x6b845573u, 0x09bbcf24u, 0xa7f348d5u, 0x462ac286u, 0xe4623c37u, 0x8299b5e8u, 0x20d12f99u, 0xbf08a94au,
    0x5d4022fbu, 0xfb779cacu, 0x99af165du, 0x37e6900eu, 0xd61e09bfu, 0x74558370u, 0x128cfd21u, 0xb0c476d2u,
    0x4efbf083u, 0xed336a34u, 0x8b6ae3e5u, 0x29a25d96u, 0xc7d9d747u, 0x661150f8u, 0x0448caa9u, 0xa280445au,
    0x40b7be0bu, 0xdeef37bcu, 0x7d26b16du, 0x1b5e2b1eu, 0xb995a4cfu, 0x57cd1e80u, 0xf6049831u, 0x943c11e2u,
    0x32738b93u, 0xd0ab0544u, 0x6ee27ef5u, 0x0d19f8a6u, 0xab517257u, 0x4988ec08u, 0xe7c065b9u, 0x85f7df6au,
    0x242f591bu, 0xc266d2ccu, 0x609e4c7du, 0xfed5c62eu, 0x9d0d3fdfu, 0x3b44b990u, 0xd97c3341u, 0x77b3acf2u,
};

static const uint32_t bshim_074_tab6[96] = {
    0x42cc9904u, 0xe10412b5u, 0x7f3b8c66u, 0x1d730617u, 0xbbaa7fc8u, 0x59e1f979u, 0xf819732au, 0x9650ecdbu,
    0x3488668cu, 0xd2bfe03du, 0x70f759eeu, 0x0f2ed39fu, 0xad664d50u, 0x4b9dc701u, 0xe9d540b2u, 0x880cba63u,
    0x26443414u, 0xc47badc5u, 0x62b32776u, 0x00eaa127u, 0x9f221ad8u, 0x3d599489u, 0xdb910e3au, 0x79c887ebu,
    0x1800019cu, 0xb6377b4du, 0x546ef4feu, 0xf2a66eafu, 0x90dde860u, 0x2f156211u, 0xcd4cdbc2u, 0x6b845573u,
    0x09bbcf24u, 0xa7f348d5u, 0x462ac286u, 0xe4623c37u, 0x8299b5e8u, 0x20d12f99u, 0xbf08a94au, 0x5d4022fbu,
    0xfb779cacu, 0x99af165du, 0x37e6900eu, 0xd61e09bfu, 0x74558370u, 0x128cfd21u, 0xb0c476d2u, 0x4efbf083u,
    0xed336a34u, 0x8b6ae3e5u, 0x29a25d96u, 0xc7d9d747u, 0x661150f8u, 0x0448caa9u, 0xa280445au, 0x40b7be0bu,
    0xdeef37bcu, 0x7d26b16du, 0x1b5e2b1eu, 0xb995a4cfu, 0x57cd1e80u, 0xf6049831u, 0x943c11e2u, 0x32738b93u,
    0xd0ab0544u, 0x6ee27ef5u, 0x0d19f8a6u, 0xab517257u, 0x4988ec08u, 0xe7c065b9u, 0x85f7df6au, 0x242f591bu,
    0xc266d2ccu, 0x609e4c7du, 0xfed5c62eu, 0x9d0d3fdfu, 0x3b44b990u, 0xd97c3341u, 0x77b3acf2u, 0x15eb26a3u,
    0xb422a054u, 0x525a1a05u, 0xf09193b6u, 0x8ec90d67u, 0x2d008718u, 0xcb3800c9u, 0x696f7a7au, 0x07a6f42bu,
    0xa5de6ddcu, 0x4415e78du, 0xe24d613eu, 0x8084daefu, 0x1ebc54a0u, 0xbcf3ce51u, 0x5b2b4802u, 0xf962c1b3u,
};

static const uint32_t bshim_074_tab7[96] = {
    0xc47badc5u, 0x62b32776u, 0x00eaa127u, 0x9f221ad8u, 0x3d599489u, 0xdb910e3au, 0x79c887ebu, 0x1800019cu,
    0xb6377b4du, 0x546ef4feu, 0xf2a66eafu, 0x90dde860u, 0x2f156211u, 0xcd4cdbc2u, 0x6b845573u, 0x09bbcf24u,
    0xa7f348d5u, 0x462ac286u, 0xe4623c37u, 0x8299b5e8u, 0x20d12f99u, 0xbf08a94au, 0x5d4022fbu, 0xfb779cacu,
    0x99af165du, 0x37e6900eu, 0xd61e09bfu, 0x74558370u, 0x128cfd21u, 0xb0c476d2u, 0x4efbf083u, 0xed336a34u,
    0x8b6ae3e5u, 0x29a25d96u, 0xc7d9d747u, 0x661150f8u, 0x0448caa9u, 0xa280445au, 0x40b7be0bu, 0xdeef37bcu,
    0x7d26b16du, 0x1b5e2b1eu, 0xb995a4cfu, 0x57cd1e80u, 0xf6049831u, 0x943c11e2u, 0x32738b93u, 0xd0ab0544u,
    0x6ee27ef5u, 0x0d19f8a6u, 0xab517257u, 0x4988ec08u, 0xe7c065b9u, 0x85f7df6au, 0x242f591bu, 0xc266d2ccu,
    0x609e4c7du, 0xfed5c62eu, 0x9d0d3fdfu, 0x3b44b990u, 0xd97c3341u, 0x77b3acf2u, 0x15eb26a3u, 0xb422a054u,
    0x525a1a05u, 0xf09193b6u, 0x8ec90d67u, 0x2d008718u, 0xcb3800c9u, 0x696f7a7au, 0x07a6f42bu, 0xa5de6ddcu,
    0x4415e78du, 0xe24d613eu, 0x8084daefu, 0x1ebc54a0u, 0xbcf3ce51u, 0x5b2b4802u, 0xf962c1b3u, 0x979a3b64u,
    0x35d1b515u, 0xd4092ec6u, 0x7240a877u, 0x10782228u, 0xaeaf9bd9u, 0x4ce7158au, 0xeb1e8f3bu, 0x895608ecu,
    0x278d829du, 0xc5c4fc4eu, 0x63fc75ffu, 0x0233efb0u, 0xa06b6961u, 0x3ea2e312u, 0xdcda5cc3u, 0x7b11d674u,
};

struct bshim_074_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_074_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_074_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_074_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_074_reset(struct bshim_074_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0008f116u;
    return 0;
}

