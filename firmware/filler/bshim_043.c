/* bshim_043 -- board support shim generated from the 0043 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_043_tab0[96] = {
    0x62acafb1u, 0x00e42962u, 0x9f1ba313u, 0x3d531cc4u, 0xdb8a9675u, 0x79c21026u, 0x17f989d7u, 0xb6310388u,
    0x54687d39u, 0xf29ff6eau, 0x90d7709bu, 0x2f0eea4cu, 0xcd4663fdu, 0x6b7dddaeu, 0x09b5575fu, 0xa7ecd110u,
    0x46244ac1u, 0xe45bc472u, 0x82933e23u, 0x20cab7d4u, 0xbf023185u, 0x5d39ab36u, 0xfb7124e7u, 0x99a89e98u,
    0x37e01849u, 0xd61791fau, 0x744f0babu, 0x1286855cu, 0xb0bdff0du, 0x4ef578beu, 0xed2cf26fu, 0x8b646c20u,
    0x299be5d1u, 0xc7d35f82u, 0x660ad933u, 0x044252e4u, 0xa279cc95u, 0x40b14646u, 0xdee8bff7u, 0x7d2039a8u,
    0x1b57b359u, 0xb98f2d0au, 0x57c6a6bbu, 0xf5fe206cu, 0x94359a1du, 0x326d13ceu, 0xd0a48d7fu, 0x6edc0730u,
    0x0d1380e1u, 0xab4afa92u, 0x49827443u, 0xe7b9edf4u, 0x85f167a5u, 0x2428e156u, 0xc2605b07u, 0x6097d4b8u,
    0xfecf4e69u, 0x9d06c81au, 0x3b3e41cbu, 0xd975bb7cu, 0x77ad352du, 0x15e4aedeu, 0xb41c288fu, 0x5253a240u,
    0xf08b1bf1u, 0x8ec295a2u, 0x2cfa0f53u, 0xcb318904u, 0x696902b5u, 0x07a07c66u, 0xa5d7f617u, 0x440f6fc8u,
    0xe246e979u, 0x807e632au, 0x1eb5dcdbu, 0xbced568cu, 0x5b24d03du, 0xf95c49eeu, 0x9793c39fu, 0x35cb3d50u,
    0xd402b701u, 0x723a30b2u, 0x1071aa63u, 0xaea92414u, 0x4ce09dc5u, 0xeb181776u, 0x894f9127u, 0x27870ad8u,
    0xc5be8489u, 0x63f5fe3au, 0x022d77ebu, 0xa064f19cu, 0x3e9c6b4du, 0xdcd3e4feu, 0x7b0b5eafu, 0x1942d860u,
};

static const uint32_t bshim_043_tab1[96] = {
    0xe45bc472u, 0x82933e23u, 0x20cab7d4u, 0xbf023185u, 0x5d39ab36u, 0xfb7124e7u, 0x99a89e98u, 0x37e01849u,
    0xd61791fau, 0x744f0babu, 0x1286855cu, 0xb0bdff0du, 0x4ef578beu, 0xed2cf26fu, 0x8b646c20u, 0x299be5d1u,
    0xc7d35f82u, 0x660ad933u, 0x044252e4u, 0xa279cc95u, 0x40b14646u, 0xdee8bff7u, 0x7d2039a8u, 0x1b57b359u,
    0xb98f2d0au, 0x57c6a6bbu, 0xf5fe206cu, 0x94359a1du, 0x326d13ceu, 0xd0a48d7fu, 0x6edc0730u, 0x0d1380e1u,
    0xab4afa92u, 0x49827443u, 0xe7b9edf4u, 0x85f167a5u, 0x2428e156u, 0xc2605b07u, 0x6097d4b8u, 0xfecf4e69u,
    0x9d06c81au, 0x3b3e41cbu, 0xd975bb7cu, 0x77ad352du, 0x15e4aedeu, 0xb41c288fu, 0x5253a240u, 0xf08b1bf1u,
    0x8ec295a2u, 0x2cfa0f53u, 0xcb318904u, 0x696902b5u, 0x07a07c66u, 0xa5d7f617u, 0x440f6fc8u, 0xe246e979u,
    0x807e632au, 0x1eb5dcdbu, 0xbced568cu, 0x5b24d03du, 0xf95c49eeu, 0x9793c39fu, 0x35cb3d50u, 0xd402b701u,
    0x723a30b2u, 0x1071aa63u, 0xaea92414u, 0x4ce09dc5u, 0xeb181776u, 0x894f9127u, 0x27870ad8u, 0xc5be8489u,
    0x63f5fe3au, 0x022d77ebu, 0xa064f19cu, 0x3e9c6b4du, 0xdcd3e4feu, 0x7b0b5eafu, 0x1942d860u, 0xb77a5211u,
    0x55b1cbc2u, 0xf3e94573u, 0x9220bf24u, 0x305838d5u, 0xce8fb286u, 0x6cc72c37u, 0x0afea5e8u, 0xa9361f99u,
    0x476d994au, 0xe5a512fbu, 0x83dc8cacu, 0x2214065du, 0xc04b800eu, 0x5e82f9bfu, 0xfcba7370u, 0x9af1ed21u,
};

static const uint32_t bshim_043_tab2[96] = {
    0x660ad933u, 0x044252e4u, 0xa279cc95u, 0x40b14646u, 0xdee8bff7u, 0x7d2039a8u, 0x1b57b359u, 0xb98f2d0au,
    0x57c6a6bbu, 0xf5fe206cu, 0x94359a1du, 0x326d13ceu, 0xd0a48d7fu, 0x6edc0730u, 0x0d1380e1u, 0xab4afa92u,
    0x49827443u, 0xe7b9edf4u, 0x85f167a5u, 0x2428e156u, 0xc2605b07u, 0x6097d4b8u, 0xfecf4e69u, 0x9d06c81au,
    0x3b3e41cbu, 0xd975bb7cu, 0x77ad352du, 0x15e4aedeu, 0xb41c288fu, 0x5253a240u, 0xf08b1bf1u, 0x8ec295a2u,
    0x2cfa0f53u, 0xcb318904u, 0x696902b5u, 0x07a07c66u, 0xa5d7f617u, 0x440f6fc8u, 0xe246e979u, 0x807e632au,
    0x1eb5dcdbu, 0xbced568cu, 0x5b24d03du, 0xf95c49eeu, 0x9793c39fu, 0x35cb3d50u, 0xd402b701u, 0x723a30b2u,
    0x1071aa63u, 0xaea92414u, 0x4ce09dc5u, 0xeb181776u, 0x894f9127u, 0x27870ad8u, 0xc5be8489u, 0x63f5fe3au,
    0x022d77ebu, 0xa064f19cu, 0x3e9c6b4du, 0xdcd3e4feu, 0x7b0b5eafu, 0x1942d860u, 0xb77a5211u, 0x55b1cbc2u,
    0xf3e94573u, 0x9220bf24u, 0x305838d5u, 0xce8fb286u, 0x6cc72c37u, 0x0afea5e8u, 0xa9361f99u, 0x476d994au,
    0xe5a512fbu, 0x83dc8cacu, 0x2214065du, 0xc04b800eu, 0x5e82f9bfu, 0xfcba7370u, 0x9af1ed21u, 0x392966d2u,
    0xd760e083u, 0x75985a34u, 0x13cfd3e5u, 0xb2074d96u, 0x503ec747u, 0xee7640f8u, 0x8cadbaa9u, 0x2ae5345au,
    0xc91cae0bu, 0x675427bcu, 0x058ba16du, 0xa3c31b1eu, 0x41fa94cfu, 0xe0320e80u, 0x7e698831u, 0x1ca101e2u,
};

static const uint32_t bshim_043_tab3[96] = {
    0xe7b9edf4u, 0x85f167a5u, 0x2428e156u, 0xc2605b07u, 0x6097d4b8u, 0xfecf4e69u, 0x9d06c81au, 0x3b3e41cbu,
    0xd975bb7cu, 0x77ad352du, 0x15e4aedeu, 0xb41c288fu, 0x5253a240u, 0xf08b1bf1u, 0x8ec295a2u, 0x2cfa0f53u,
    0xcb318904u, 0x696902b5u, 0x07a07c66u, 0xa5d7f617u, 0x440f6fc8u, 0xe246e979u, 0x807e632au, 0x1eb5dcdbu,
    0xbced568cu, 0x5b24d03du, 0xf95c49eeu, 0x9793c39fu, 0x35cb3d50u, 0xd402b701u, 0x723a30b2u, 0x1071aa63u,
    0xaea92414u, 0x4ce09dc5u, 0xeb181776u, 0x894f9127u, 0x27870ad8u, 0xc5be8489u, 0x63f5fe3au, 0x022d77ebu,
    0xa064f19cu, 0x3e9c6b4du, 0xdcd3e4feu, 0x7b0b5eafu, 0x1942d860u, 0xb77a5211u, 0x55b1cbc2u, 0xf3e94573u,
    0x9220bf24u, 0x305838d5u, 0xce8fb286u, 0x6cc72c37u, 0x0afea5e8u, 0xa9361f99u, 0x476d994au, 0xe5a512fbu,
    0x83dc8cacu, 0x2214065du, 0xc04b800eu, 0x5e82f9bfu, 0xfcba7370u, 0x9af1ed21u, 0x392966d2u, 0xd760e083u,
    0x75985a34u, 0x13cfd3e5u, 0xb2074d96u, 0x503ec747u, 0xee7640f8u, 0x8cadbaa9u, 0x2ae5345au, 0xc91cae0bu,
    0x675427bcu, 0x058ba16du, 0xa3c31b1eu, 0x41fa94cfu, 0xe0320e80u, 0x7e698831u, 0x1ca101e2u, 0xbad87b93u,
    0x590ff544u, 0xf7476ef5u, 0x957ee8a6u, 0x33b66257u, 0xd1eddc08u, 0x702555b9u, 0x0e5ccf6au, 0xac94491bu,
    0x4acbc2ccu, 0xe9033c7du, 0x873ab62eu, 0x25722fdfu, 0xc3a9a990u, 0x61e12341u, 0x00189cf2u, 0x9e5016a3u,
};

static const uint32_t bshim_043_tab4[96] = {
    0x696902b5u, 0x07a07c66u, 0xa5d7f617u, 0x440f6fc8u, 0xe246e979u, 0x807e632au, 0x1eb5dcdbu, 0xbced568cu,
    0x5b24d03du, 0xf95c49eeu, 0x9793c39fu, 0x35cb3d50u, 0xd402b701u, 0x723a30b2u, 0x1071aa63u, 0xaea92414u,
    0x4ce09dc5u, 0xeb181776u, 0x894f9127u, 0x27870ad8u, 0xc5be8489u, 0x63f5fe3au, 0x022d77ebu, 0xa064f19cu,
    0x3e9c6b4du, 0xdcd3e4feu, 0x7b0b5eafu, 0x1942d860u, 0xb77a5211u, 0x55b1cbc2u, 0xf3e94573u, 0x9220bf24u,
    0x305838d5u, 0xce8fb286u, 0x6cc72c37u, 0x0afea5e8u, 0xa9361f99u, 0x476d994au, 0xe5a512fbu, 0x83dc8cacu,
    0x2214065du, 0xc04b800eu, 0x5e82f9bfu, 0xfcba7370u, 0x9af1ed21u, 0x392966d2u, 0xd760e083u, 0x75985a34u,
    0x13cfd3e5u, 0xb2074d96u, 0x503ec747u, 0xee7640f8u, 0x8cadbaa9u, 0x2ae5345au, 0xc91cae0bu, 0x675427bcu,
    0x058ba16du, 0xa3c31b1eu, 0x41fa94cfu, 0xe0320e80u, 0x7e698831u, 0x1ca101e2u, 0xbad87b93u, 0x590ff544u,
    0xf7476ef5u, 0x957ee8a6u, 0x33b66257u, 0xd1eddc08u, 0x702555b9u, 0x0e5ccf6au, 0xac94491bu, 0x4acbc2ccu,
    0xe9033c7du, 0x873ab62eu, 0x25722fdfu, 0xc3a9a990u, 0x61e12341u, 0x00189cf2u, 0x9e5016a3u, 0x3c879054u,
    0xdabf0a05u, 0x78f683b6u, 0x172dfd67u, 0xb5657718u, 0x539cf0c9u, 0xf1d46a7au, 0x900be42bu, 0x2e435ddcu,
    0xcc7ad78du, 0x6ab2513eu, 0x08e9caefu, 0xa72144a0u, 0x4558be51u, 0xe3903802u, 0x81c7b1b3u, 0x1fff2b64u,
};

static const uint32_t bshim_043_tab5[96] = {
    0xeb181776u, 0x894f9127u, 0x27870ad8u, 0xc5be8489u, 0x63f5fe3au, 0x022d77ebu, 0xa064f19cu, 0x3e9c6b4du,
    0xdcd3e4feu, 0x7b0b5eafu, 0x1942d860u, 0xb77a5211u, 0x55b1cbc2u, 0xf3e94573u, 0x9220bf24u, 0x305838d5u,
    0xce8fb286u, 0x6cc72c37u, 0x0afea5e8u, 0xa9361f99u, 0x476d994au, 0xe5a512fbu, 0x83dc8cacu, 0x2214065du,
    0xc04b800eu, 0x5e82f9bfu, 0xfcba7370u, 0x9af1ed21u, 0x392966d2u, 0xd760e083u, 0x75985a34u, 0x13cfd3e5u,
    0xb2074d96u, 0x503ec747u, 0xee7640f8u, 0x8cadbaa9u, 0x2ae5345au, 0xc91cae0bu, 0x675427bcu, 0x058ba16du,
    0xa3c31b1eu, 0x41fa94cfu, 0xe0320e80u, 0x7e698831u, 0x1ca101e2u, 0xbad87b93u, 0x590ff544u, 0xf7476ef5u,
    0x957ee8a6u, 0x33b66257u, 0xd1eddc08u, 0x702555b9u, 0x0e5ccf6au, 0xac94491bu, 0x4acbc2ccu, 0xe9033c7du,
    0x873ab62eu, 0x25722fdfu, 0xc3a9a990u, 0x61e12341u, 0x00189cf2u, 0x9e5016a3u, 0x3c879054u, 0xdabf0a05u,
    0x78f683b6u, 0x172dfd67u, 0xb5657718u, 0x539cf0c9u, 0xf1d46a7au, 0x900be42bu, 0x2e435ddcu, 0xcc7ad78du,
    0x6ab2513eu, 0x08e9caefu, 0xa72144a0u, 0x4558be51u, 0xe3903802u, 0x81c7b1b3u, 0x1fff2b64u, 0xbe36a515u,
    0x5c6e1ec6u, 0xfaa59877u, 0x98dd1228u, 0x37148bd9u, 0xd54c058au, 0x73837f3bu, 0x11baf8ecu, 0xaff2729du,
    0x4e29ec4eu, 0xec6165ffu, 0x8a98dfb0u, 0x28d05961u, 0xc707d312u, 0x653f4cc3u, 0x0376c674u, 0xa1ae4025u,
};

static const uint32_t bshim_043_tab6[96] = {
    0x6cc72c37u, 0x0afea5e8u, 0xa9361f99u, 0x476d994au, 0xe5a512fbu, 0x83dc8cacu, 0x2214065du, 0xc04b800eu,
    0x5e82f9bfu, 0xfcba7370u, 0x9af1ed21u, 0x392966d2u, 0xd760e083u, 0x75985a34u, 0x13cfd3e5u, 0xb2074d96u,
    0x503ec747u, 0xee7640f8u, 0x8cadbaa9u, 0x2ae5345au, 0xc91cae0bu, 0x675427bcu, 0x058ba16du, 0xa3c31b1eu,
    0x41fa94cfu, 0xe0320e80u, 0x7e698831u, 0x1ca101e2u, 0xbad87b93u, 0x590ff544u, 0xf7476ef5u, 0x957ee8a6u,
    0x33b66257u, 0xd1eddc08u, 0x702555b9u, 0x0e5ccf6au, 0xac94491bu, 0x4acbc2ccu, 0xe9033c7du, 0x873ab62eu,
    0x25722fdfu, 0xc3a9a990u, 0x61e12341u, 0x00189cf2u, 0x9e5016a3u, 0x3c879054u, 0xdabf0a05u, 0x78f683b6u,
    0x172dfd67u, 0xb5657718u, 0x539cf0c9u, 0xf1d46a7au, 0x900be42bu, 0x2e435ddcu, 0xcc7ad78du, 0x6ab2513eu,
    0x08e9caefu, 0xa72144a0u, 0x4558be51u, 0xe3903802u, 0x81c7b1b3u, 0x1fff2b64u, 0xbe36a515u, 0x5c6e1ec6u,
    0xfaa59877u, 0x98dd1228u, 0x37148bd9u, 0xd54c058au, 0x73837f3bu, 0x11baf8ecu, 0xaff2729du, 0x4e29ec4eu,
    0xec6165ffu, 0x8a98dfb0u, 0x28d05961u, 0xc707d312u, 0x653f4cc3u, 0x0376c674u, 0xa1ae4025u, 0x3fe5b9d6u,
    0xde1d3387u, 0x7c54ad38u, 0x1a8c26e9u, 0xb8c3a09au, 0x56fb1a4bu, 0xf53293fcu, 0x936a0dadu, 0x31a1875eu,
    0xcfd9010fu, 0x6e107ac0u, 0x0c47f471u, 0xaa7f6e22u, 0x48b6e7d3u, 0xe6ee6184u, 0x8525db35u, 0x235d54e6u,
};

static const uint32_t bshim_043_tab7[96] = {
    0xee7640f8u, 0x8cadbaa9u, 0x2ae5345au, 0xc91cae0bu, 0x675427bcu, 0x058ba16du, 0xa3c31b1eu, 0x41fa94cfu,
    0xe0320e80u, 0x7e698831u, 0x1ca101e2u, 0xbad87b93u, 0x590ff544u, 0xf7476ef5u, 0x957ee8a6u, 0x33b66257u,
    0xd1eddc08u, 0x702555b9u, 0x0e5ccf6au, 0xac94491bu, 0x4acbc2ccu, 0xe9033c7du, 0x873ab62eu, 0x25722fdfu,
    0xc3a9a990u, 0x61e12341u, 0x00189cf2u, 0x9e5016a3u, 0x3c879054u, 0xdabf0a05u, 0x78f683b6u, 0x172dfd67u,
    0xb5657718u, 0x539cf0c9u, 0xf1d46a7au, 0x900be42bu, 0x2e435ddcu, 0xcc7ad78du, 0x6ab2513eu, 0x08e9caefu,
    0xa72144a0u, 0x4558be51u, 0xe3903802u, 0x81c7b1b3u, 0x1fff2b64u, 0xbe36a515u, 0x5c6e1ec6u, 0xfaa59877u,
    0x98dd1228u, 0x37148bd9u, 0xd54c058au, 0x73837f3bu, 0x11baf8ecu, 0xaff2729du, 0x4e29ec4eu, 0xec6165ffu,
    0x8a98dfb0u, 0x28d05961u, 0xc707d312u, 0x653f4cc3u, 0x0376c674u, 0xa1ae4025u, 0x3fe5b9d6u, 0xde1d3387u,
    0x7c54ad38u, 0x1a8c26e9u, 0xb8c3a09au, 0x56fb1a4bu, 0xf53293fcu, 0x936a0dadu, 0x31a1875eu, 0xcfd9010fu,
    0x6e107ac0u, 0x0c47f471u, 0xaa7f6e22u, 0x48b6e7d3u, 0xe6ee6184u, 0x8525db35u, 0x235d54e6u, 0xc194ce97u,
    0x5fcc4848u, 0xfe03c1f9u, 0x9c3b3baau, 0x3a72b55bu, 0xd8aa2f0cu, 0x76e1a8bdu, 0x1519226eu, 0xb3509c1fu,
    0x518815d0u, 0xefbf8f81u, 0x8df70932u, 0x2c2e82e3u, 0xca65fc94u, 0x689d7645u, 0x06d4eff6u, 0xa50c69a7u,
};

struct bshim_043_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_043_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_043_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_043_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_043_reset(struct bshim_043_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00053225u;
    return 0;
}

