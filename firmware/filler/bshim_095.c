/* bshim_095 -- board support shim generated from the 0095 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_095_tab0[96] = {
    0x6ed6d18du, 0x0d0e4b3eu, 0xab45c4efu, 0x497d3ea0u, 0xe7b4b851u, 0x85ec3202u, 0x2423abb3u, 0xc25b2564u,
    0x60929f15u, 0xfeca18c6u, 0x9d019277u, 0x3b390c28u, 0xd97085d9u, 0x77a7ff8au, 0x15df793bu, 0xb416f2ecu,
    0x524e6c9du, 0xf085e64eu, 0x8ebd5fffu, 0x2cf4d9b0u, 0xcb2c5361u, 0x6963cd12u, 0x079b46c3u, 0xa5d2c074u,
    0x440a3a25u, 0xe241b3d6u, 0x80792d87u, 0x1eb0a738u, 0xbce820e9u, 0x5b1f9a9au, 0xf957144bu, 0x978e8dfcu,
    0x35c607adu, 0xd3fd815eu, 0x7234fb0fu, 0x106c74c0u, 0xaea3ee71u, 0x4cdb6822u, 0xeb12e1d3u, 0x894a5b84u,
    0x2781d535u, 0xc5b94ee6u, 0x63f0c897u, 0x02284248u, 0xa05fbbf9u, 0x3e9735aau, 0xdcceaf5bu, 0x7b06290cu,
    0x193da2bdu, 0xb7751c6eu, 0x55ac961fu, 0xf3e40fd0u, 0x921b8981u, 0x30530332u, 0xce8a7ce3u, 0x6cc1f694u,
    0x0af97045u, 0xa930e9f6u, 0x476863a7u, 0xe59fdd58u, 0x83d75709u, 0x220ed0bau, 0xc0464a6bu, 0x5e7dc41cu,
    0xfcb53dcdu, 0x9aecb77eu, 0x3924312fu, 0xd75baae0u, 0x75932491u, 0x13ca9e42u, 0xb20217f3u, 0x503991a4u,
    0xee710b55u, 0x8ca88506u, 0x2adffeb7u, 0xc9177868u, 0x674ef219u, 0x05866bcau, 0xa3bde57bu, 0x41f55f2cu,
    0xe02cd8ddu, 0x7e64528eu, 0x1c9bcc3fu, 0xbad345f0u, 0x590abfa1u, 0xf7423952u, 0x9579b303u, 0x33b12cb4u,
    0xd1e8a665u, 0x70202016u, 0x0e5799c7u, 0xac8f1378u, 0x4ac68d29u, 0xe8fe06dau, 0x8735808bu, 0x256cfa3cu,
};

static const uint32_t bshim_095_tab1[96] = {
    0xf085e64eu, 0x8ebd5fffu, 0x2cf4d9b0u, 0xcb2c5361u, 0x6963cd12u, 0x079b46c3u, 0xa5d2c074u, 0x440a3a25u,
    0xe241b3d6u, 0x80792d87u, 0x1eb0a738u, 0xbce820e9u, 0x5b1f9a9au, 0xf957144bu, 0x978e8dfcu, 0x35c607adu,
    0xd3fd815eu, 0x7234fb0fu, 0x106c74c0u, 0xaea3ee71u, 0x4cdb6822u, 0xeb12e1d3u, 0x894a5b84u, 0x2781d535u,
    0xc5b94ee6u, 0x63f0c897u, 0x02284248u, 0xa05fbbf9u, 0x3e9735aau, 0xdcceaf5bu, 0x7b06290cu, 0x193da2bdu,
    0xb7751c6eu, 0x55ac961fu, 0xf3e40fd0u, 0x921b8981u, 0x30530332u, 0xce8a7ce3u, 0x6cc1f694u, 0x0af97045u,
    0xa930e9f6u, 0x476863a7u, 0xe59fdd58u, 0x83d75709u, 0x220ed0bau, 0xc0464a6bu, 0x5e7dc41cu, 0xfcb53dcdu,
    0x9aecb77eu, 0x3924312fu, 0xd75baae0u, 0x75932491u, 0x13ca9e42u, 0xb20217f3u, 0x503991a4u, 0xee710b55u,
    0x8ca88506u, 0x2adffeb7u, 0xc9177868u, 0x674ef219u, 0x05866bcau, 0xa3bde57bu, 0x41f55f2cu, 0xe02cd8ddu,
    0x7e64528eu, 0x1c9bcc3fu, 0xbad345f0u, 0x590abfa1u, 0xf7423952u, 0x9579b303u, 0x33b12cb4u, 0xd1e8a665u,
    0x70202016u, 0x0e5799c7u, 0xac8f1378u, 0x4ac68d29u, 0xe8fe06dau, 0x8735808bu, 0x256cfa3cu, 0xc3a473edu,
    0x61dbed9eu, 0x0013674fu, 0x9e4ae100u, 0x3c825ab1u, 0xdab9d462u, 0x78f14e13u, 0x1728c7c4u, 0xb5604175u,
    0x5397bb26u, 0xf1cf34d7u, 0x9006ae88u, 0x2e3e2839u, 0xcc75a1eau, 0x6aad1b9bu, 0x08e4954cu, 0xa71c0efdu,
};

static const uint32_t bshim_095_tab2[96] = {
    0x7234fb0fu, 0x106c74c0u, 0xaea3ee71u, 0x4cdb6822u, 0xeb12e1d3u, 0x894a5b84u, 0x2781d535u, 0xc5b94ee6u,
    0x63f0c897u, 0x02284248u, 0xa05fbbf9u, 0x3e9735aau, 0xdcceaf5bu, 0x7b06290cu, 0x193da2bdu, 0xb7751c6eu,
    0x55ac961fu, 0xf3e40fd0u, 0x921b8981u, 0x30530332u, 0xce8a7ce3u, 0x6cc1f694u, 0x0af97045u, 0xa930e9f6u,
    0x476863a7u, 0xe59fdd58u, 0x83d75709u, 0x220ed0bau, 0xc0464a6bu, 0x5e7dc41cu, 0xfcb53dcdu, 0x9aecb77eu,
    0x3924312fu, 0xd75baae0u, 0x75932491u, 0x13ca9e42u, 0xb20217f3u, 0x503991a4u, 0xee710b55u, 0x8ca88506u,
    0x2adffeb7u, 0xc9177868u, 0x674ef219u, 0x05866bcau, 0xa3bde57bu, 0x41f55f2cu, 0xe02cd8ddu, 0x7e64528eu,
    0x1c9bcc3fu, 0xbad345f0u, 0x590abfa1u, 0xf7423952u, 0x9579b303u, 0x33b12cb4u, 0xd1e8a665u, 0x70202016u,
    0x0e5799c7u, 0xac8f1378u, 0x4ac68d29u, 0xe8fe06dau, 0x8735808bu, 0x256cfa3cu, 0xc3a473edu, 0x61dbed9eu,
    0x0013674fu, 0x9e4ae100u, 0x3c825ab1u, 0xdab9d462u, 0x78f14e13u, 0x1728c7c4u, 0xb5604175u, 0x5397bb26u,
    0xf1cf34d7u, 0x9006ae88u, 0x2e3e2839u, 0xcc75a1eau, 0x6aad1b9bu, 0x08e4954cu, 0xa71c0efdu, 0x455388aeu,
    0xe38b025fu, 0x81c27c10u, 0x1ff9f5c1u, 0xbe316f72u, 0x5c68e923u, 0xfaa062d4u, 0x98d7dc85u, 0x370f5636u,
    0xd546cfe7u, 0x737e4998u, 0x11b5c349u, 0xafed3cfau, 0x4e24b6abu, 0xec5c305cu, 0x8a93aa0du, 0x28cb23beu,
};

static const uint32_t bshim_095_tab3[96] = {
    0xf3e40fd0u, 0x921b8981u, 0x30530332u, 0xce8a7ce3u, 0x6cc1f694u, 0x0af97045u, 0xa930e9f6u, 0x476863a7u,
    0xe59fdd58u, 0x83d75709u, 0x220ed0bau, 0xc0464a6bu, 0x5e7dc41cu, 0xfcb53dcdu, 0x9aecb77eu, 0x3924312fu,
    0xd75baae0u, 0x75932491u, 0x13ca9e42u, 0xb20217f3u, 0x503991a4u, 0xee710b55u, 0x8ca88506u, 0x2adffeb7u,
    0xc9177868u, 0x674ef219u, 0x05866bcau, 0xa3bde57bu, 0x41f55f2cu, 0xe02cd8ddu, 0x7e64528eu, 0x1c9bcc3fu,
    0xbad345f0u, 0x590abfa1u, 0xf7423952u, 0x9579b303u, 0x33b12cb4u, 0xd1e8a665u, 0x70202016u, 0x0e5799c7u,
    0xac8f1378u, 0x4ac68d29u, 0xe8fe06dau, 0x8735808bu, 0x256cfa3cu, 0xc3a473edu, 0x61dbed9eu, 0x0013674fu,
    0x9e4ae100u, 0x3c825ab1u, 0xdab9d462u, 0x78f14e13u, 0x1728c7c4u, 0xb5604175u, 0x5397bb26u, 0xf1cf34d7u,
    0x9006ae88u, 0x2e3e2839u, 0xcc75a1eau, 0x6aad1b9bu, 0x08e4954cu, 0xa71c0efdu, 0x455388aeu, 0xe38b025fu,
    0x81c27c10u, 0x1ff9f5c1u, 0xbe316f72u, 0x5c68e923u, 0xfaa062d4u, 0x98d7dc85u, 0x370f5636u, 0xd546cfe7u,
    0x737e4998u, 0x11b5c349u, 0xafed3cfau, 0x4e24b6abu, 0xec5c305cu, 0x8a93aa0du, 0x28cb23beu, 0xc7029d6fu,
    0x653a1720u, 0x037190d1u, 0xa1a90a82u, 0x3fe08433u, 0xde17fde4u, 0x7c4f7795u, 0x1a86f146u, 0xb8be6af7u,
    0x56f5e4a8u, 0xf52d5e59u, 0x9364d80au, 0x319c51bbu, 0xcfd3cb6cu, 0x6e0b451du, 0x0c42beceu, 0xaa7a387fu,
};

static const uint32_t bshim_095_tab4[96] = {
    0x75932491u, 0x13ca9e42u, 0xb20217f3u, 0x503991a4u, 0xee710b55u, 0x8ca88506u, 0x2adffeb7u, 0xc9177868u,
    0x674ef219u, 0x05866bcau, 0xa3bde57bu, 0x41f55f2cu, 0xe02cd8ddu, 0x7e64528eu, 0x1c9bcc3fu, 0xbad345f0u,
    0x590abfa1u, 0xf7423952u, 0x9579b303u, 0x33b12cb4u, 0xd1e8a665u, 0x70202016u, 0x0e5799c7u, 0xac8f1378u,
    0x4ac68d29u, 0xe8fe06dau, 0x8735808bu, 0x256cfa3cu, 0xc3a473edu, 0x61dbed9eu, 0x0013674fu, 0x9e4ae100u,
    0x3c825ab1u, 0xdab9d462u, 0x78f14e13u, 0x1728c7c4u, 0xb5604175u, 0x5397bb26u, 0xf1cf34d7u, 0x9006ae88u,
    0x2e3e2839u, 0xcc75a1eau, 0x6aad1b9bu, 0x08e4954cu, 0xa71c0efdu, 0x455388aeu, 0xe38b025fu, 0x81c27c10u,
    0x1ff9f5c1u, 0xbe316f72u, 0x5c68e923u, 0xfaa062d4u, 0x98d7dc85u, 0x370f5636u, 0xd546cfe7u, 0x737e4998u,
    0x11b5c349u, 0xafed3cfau, 0x4e24b6abu, 0xec5c305cu, 0x8a93aa0du, 0x28cb23beu, 0xc7029d6fu, 0x653a1720u,
    0x037190d1u, 0xa1a90a82u, 0x3fe08433u, 0xde17fde4u, 0x7c4f7795u, 0x1a86f146u, 0xb8be6af7u, 0x56f5e4a8u,
    0xf52d5e59u, 0x9364d80au, 0x319c51bbu, 0xcfd3cb6cu, 0x6e0b451du, 0x0c42beceu, 0xaa7a387fu, 0x48b1b230u,
    0xe6e92be1u, 0x8520a592u, 0x23581f43u, 0xc18f98f4u, 0x5fc712a5u, 0xfdfe8c56u, 0x9c360607u, 0x3a6d7fb8u,
    0xd8a4f969u, 0x76dc731au, 0x1513eccbu, 0xb34b667cu, 0x5182e02du, 0xefba59deu, 0x8df1d38fu, 0x2c294d40u,
};

static const uint32_t bshim_095_tab5[96] = {
    0xf7423952u, 0x9579b303u, 0x33b12cb4u, 0xd1e8a665u, 0x70202016u, 0x0e5799c7u, 0xac8f1378u, 0x4ac68d29u,
    0xe8fe06dau, 0x8735808bu, 0x256cfa3cu, 0xc3a473edu, 0x61dbed9eu, 0x0013674fu, 0x9e4ae100u, 0x3c825ab1u,
    0xdab9d462u, 0x78f14e13u, 0x1728c7c4u, 0xb5604175u, 0x5397bb26u, 0xf1cf34d7u, 0x9006ae88u, 0x2e3e2839u,
    0xcc75a1eau, 0x6aad1b9bu, 0x08e4954cu, 0xa71c0efdu, 0x455388aeu, 0xe38b025fu, 0x81c27c10u, 0x1ff9f5c1u,
    0xbe316f72u, 0x5c68e923u, 0xfaa062d4u, 0x98d7dc85u, 0x370f5636u, 0xd546cfe7u, 0x737e4998u, 0x11b5c349u,
    0xafed3cfau, 0x4e24b6abu, 0xec5c305cu, 0x8a93aa0du, 0x28cb23beu, 0xc7029d6fu, 0x653a1720u, 0x037190d1u,
    0xa1a90a82u, 0x3fe08433u, 0xde17fde4u, 0x7c4f7795u, 0x1a86f146u, 0xb8be6af7u, 0x56f5e4a8u, 0xf52d5e59u,
    0x9364d80au, 0x319c51bbu, 0xcfd3cb6cu, 0x6e0b451du, 0x0c42beceu, 0xaa7a387fu, 0x48b1b230u, 0xe6e92be1u,
    0x8520a592u, 0x23581f43u, 0xc18f98f4u, 0x5fc712a5u, 0xfdfe8c56u, 0x9c360607u, 0x3a6d7fb8u, 0xd8a4f969u,
    0x76dc731au, 0x1513eccbu, 0xb34b667cu, 0x5182e02du, 0xefba59deu, 0x8df1d38fu, 0x2c294d40u, 0xca60c6f1u,
    0x689840a2u, 0x06cfba53u, 0xa5073404u, 0x433eadb5u, 0xe1762766u, 0x7fada117u, 0x1de51ac8u, 0xbc1c9479u,
    0x5a540e2au, 0xf88b87dbu, 0x96c3018cu, 0x34fa7b3du, 0xd331f4eeu, 0x71696e9fu, 0x0fa0e850u, 0xadd86201u,
};

static const uint32_t bshim_095_tab6[96] = {
    0x78f14e13u, 0x1728c7c4u, 0xb5604175u, 0x5397bb26u, 0xf1cf34d7u, 0x9006ae88u, 0x2e3e2839u, 0xcc75a1eau,
    0x6aad1b9bu, 0x08e4954cu, 0xa71c0efdu, 0x455388aeu, 0xe38b025fu, 0x81c27c10u, 0x1ff9f5c1u, 0xbe316f72u,
    0x5c68e923u, 0xfaa062d4u, 0x98d7dc85u, 0x370f5636u, 0xd546cfe7u, 0x737e4998u, 0x11b5c349u, 0xafed3cfau,
    0x4e24b6abu, 0xec5c305cu, 0x8a93aa0du, 0x28cb23beu, 0xc7029d6fu, 0x653a1720u, 0x037190d1u, 0xa1a90a82u,
    0x3fe08433u, 0xde17fde4u, 0x7c4f7795u, 0x1a86f146u, 0xb8be6af7u, 0x56f5e4a8u, 0xf52d5e59u, 0x9364d80au,
    0x319c51bbu, 0xcfd3cb6cu, 0x6e0b451du, 0x0c42beceu, 0xaa7a387fu, 0x48b1b230u, 0xe6e92be1u, 0x8520a592u,
    0x23581f43u, 0xc18f98f4u, 0x5fc712a5u, 0xfdfe8c56u, 0x9c360607u, 0x3a6d7fb8u, 0xd8a4f969u, 0x76dc731au,
    0x1513eccbu, 0xb34b667cu, 0x5182e02du, 0xefba59deu, 0x8df1d38fu, 0x2c294d40u, 0xca60c6f1u, 0x689840a2u,
    0x06cfba53u, 0xa5073404u, 0x433eadb5u, 0xe1762766u, 0x7fada117u, 0x1de51ac8u, 0xbc1c9479u, 0x5a540e2au,
    0xf88b87dbu, 0x96c3018cu, 0x34fa7b3du, 0xd331f4eeu, 0x71696e9fu, 0x0fa0e850u, 0xadd86201u, 0x4c0fdbb2u,
    0xea475563u, 0x887ecf14u, 0x26b648c5u, 0xc4edc276u, 0x63253c27u, 0x015cb5d8u, 0x9f942f89u, 0x3dcba93au,
    0xdc0322ebu, 0x7a3a9c9cu, 0x1872164du, 0xb6a98ffeu, 0x54e109afu, 0xf3188360u, 0x914ffd11u, 0x2f8776c2u,
};

static const uint32_t bshim_095_tab7[96] = {
    0xfaa062d4u, 0x98d7dc85u, 0x370f5636u, 0xd546cfe7u, 0x737e4998u, 0x11b5c349u, 0xafed3cfau, 0x4e24b6abu,
    0xec5c305cu, 0x8a93aa0du, 0x28cb23beu, 0xc7029d6fu, 0x653a1720u, 0x037190d1u, 0xa1a90a82u, 0x3fe08433u,
    0xde17fde4u, 0x7c4f7795u, 0x1a86f146u, 0xb8be6af7u, 0x56f5e4a8u, 0xf52d5e59u, 0x9364d80au, 0x319c51bbu,
    0xcfd3cb6cu, 0x6e0b451du, 0x0c42beceu, 0xaa7a387fu, 0x48b1b230u, 0xe6e92be1u, 0x8520a592u, 0x23581f43u,
    0xc18f98f4u, 0x5fc712a5u, 0xfdfe8c56u, 0x9c360607u, 0x3a6d7fb8u, 0xd8a4f969u, 0x76dc731au, 0x1513eccbu,
    0xb34b667cu, 0x5182e02du, 0xefba59deu, 0x8df1d38fu, 0x2c294d40u, 0xca60c6f1u, 0x689840a2u, 0x06cfba53u,
    0xa5073404u, 0x433eadb5u, 0xe1762766u, 0x7fada117u, 0x1de51ac8u, 0xbc1c9479u, 0x5a540e2au, 0xf88b87dbu,
    0x96c3018cu, 0x34fa7b3du, 0xd331f4eeu, 0x71696e9fu, 0x0fa0e850u, 0xadd86201u, 0x4c0fdbb2u, 0xea475563u,
    0x887ecf14u, 0x26b648c5u, 0xc4edc276u, 0x63253c27u, 0x015cb5d8u, 0x9f942f89u, 0x3dcba93au, 0xdc0322ebu,
    0x7a3a9c9cu, 0x1872164du, 0xb6a98ffeu, 0x54e109afu, 0xf3188360u, 0x914ffd11u, 0x2f8776c2u, 0xcdbef073u,
    0x6bf66a24u, 0x0a2de3d5u, 0xa8655d86u, 0x469cd737u, 0xe4d450e8u, 0x830bca99u, 0x2143444au, 0xbf7abdfbu,
    0x5db237acu, 0xfbe9b15du, 0x9a212b0eu, 0x3858a4bfu, 0xd6901e70u, 0x74c79821u, 0x12ff11d2u, 0xb1368b83u,
};

struct bshim_095_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_095_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_095_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_095_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_095_reset(struct bshim_095_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000b7ab1u;
    return 0;
}

