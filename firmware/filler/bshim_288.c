/* bshim_288 -- board support shim generated from the 0288 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_288_tab0[96] = {
    0x2fae4560u, 0xcde5bf11u, 0x6c1d38c2u, 0x0a54b273u, 0xa88c2c24u, 0x46c3a5d5u, 0xe4fb1f86u, 0x83329937u,
    0x216a12e8u, 0xbfa18c99u, 0x5dd9064au, 0xfc107ffbu, 0x9a47f9acu, 0x387f735du, 0xd6b6ed0eu, 0x74ee66bfu,
    0x1325e070u, 0xb15d5a21u, 0x4f94d3d2u, 0xedcc4d83u, 0x8c03c734u, 0x2a3b40e5u, 0xc872ba96u, 0x66aa3447u,
    0x04e1adf8u, 0xa31927a9u, 0x4150a15au, 0xdf881b0bu, 0x7dbf94bcu, 0x1bf70e6du, 0xba2e881eu, 0x586601cfu,
    0xf69d7b80u, 0x94d4f531u, 0x330c6ee2u, 0xd143e893u, 0x6f7b6244u, 0x0db2dbf5u, 0xabea55a6u, 0x4a21cf57u,
    0xe8594908u, 0x8690c2b9u, 0x24c83c6au, 0xc2ffb61bu, 0x61372fccu, 0xff6ea97du, 0x9da6232eu, 0x3bdd9cdfu,
    0xda151690u, 0x784c9041u, 0x168409f2u, 0xb4bb83a3u, 0x52f2fd54u, 0xf12a7705u, 0x8f61f0b6u, 0x2d996a67u,
    0xcbd0e418u, 0x6a085dc9u, 0x083fd77au, 0xa677512bu, 0x44aecadcu, 0xe2e6448du, 0x811dbe3eu, 0x1f5537efu,
    0xbd8cb1a0u, 0x5bc42b51u, 0xf9fba502u, 0x98331eb3u, 0x366a9864u, 0xd4a21215u, 0x72d98bc6u, 0x11110577u,
    0xaf487f28u, 0x4d7ff8d9u, 0xebb7728au, 0x89eeec3bu, 0x282665ecu, 0xc65ddf9du, 0x6495594eu, 0x02ccd2ffu,
    0xa1044cb0u, 0x3f3bc661u, 0xdd734012u, 0x7baab9c3u, 0x19e23374u, 0xb819ad25u, 0x565126d6u, 0xf488a087u,
    0x92c01a38u, 0x30f793e9u, 0xcf2f0d9au, 0x6d66874bu, 0x0b9e00fcu, 0xa9d57aadu, 0x480cf45eu, 0xe6446e0fu,
};

static const uint32_t bshim_288_tab1[96] = {
    0xb15d5a21u, 0x4f94d3d2u, 0xedcc4d83u, 0x8c03c734u, 0x2a3b40e5u, 0xc872ba96u, 0x66aa3447u, 0x04e1adf8u,
    0xa31927a9u, 0x4150a15au, 0xdf881b0bu, 0x7dbf94bcu, 0x1bf70e6du, 0xba2e881eu, 0x586601cfu, 0xf69d7b80u,
    0x94d4f531u, 0x330c6ee2u, 0xd143e893u, 0x6f7b6244u, 0x0db2dbf5u, 0xabea55a6u, 0x4a21cf57u, 0xe8594908u,
    0x8690c2b9u, 0x24c83c6au, 0xc2ffb61bu, 0x61372fccu, 0xff6ea97du, 0x9da6232eu, 0x3bdd9cdfu, 0xda151690u,
    0x784c9041u, 0x168409f2u, 0xb4bb83a3u, 0x52f2fd54u, 0xf12a7705u, 0x8f61f0b6u, 0x2d996a67u, 0xcbd0e418u,
    0x6a085dc9u, 0x083fd77au, 0xa677512bu, 0x44aecadcu, 0xe2e6448du, 0x811dbe3eu, 0x1f5537efu, 0xbd8cb1a0u,
    0x5bc42b51u, 0xf9fba502u, 0x98331eb3u, 0x366a9864u, 0xd4a21215u, 0x72d98bc6u, 0x11110577u, 0xaf487f28u,
    0x4d7ff8d9u, 0xebb7728au, 0x89eeec3bu, 0x282665ecu, 0xc65ddf9du, 0x6495594eu, 0x02ccd2ffu, 0xa1044cb0u,
    0x3f3bc661u, 0xdd734012u, 0x7baab9c3u, 0x19e23374u, 0xb819ad25u, 0x565126d6u, 0xf488a087u, 0x92c01a38u,
    0x30f793e9u, 0xcf2f0d9au, 0x6d66874bu, 0x0b9e00fcu, 0xa9d57aadu, 0x480cf45eu, 0xe6446e0fu, 0x847be7c0u,
    0x22b36171u, 0xc0eadb22u, 0x5f2254d3u, 0xfd59ce84u, 0x9b914835u, 0x39c8c1e6u, 0xd8003b97u, 0x7637b548u,
    0x146f2ef9u, 0xb2a6a8aau, 0x50de225bu, 0xef159c0cu, 0x8d4d15bdu, 0x2b848f6eu, 0xc9bc091fu, 0x67f382d0u,
};

static const uint32_t bshim_288_tab2[96] = {
    0x330c6ee2u, 0xd143e893u, 0x6f7b6244u, 0x0db2dbf5u, 0xabea55a6u, 0x4a21cf57u, 0xe8594908u, 0x8690c2b9u,
    0x24c83c6au, 0xc2ffb61bu, 0x61372fccu, 0xff6ea97du, 0x9da6232eu, 0x3bdd9cdfu, 0xda151690u, 0x784c9041u,
    0x168409f2u, 0xb4bb83a3u, 0x52f2fd54u, 0xf12a7705u, 0x8f61f0b6u, 0x2d996a67u, 0xcbd0e418u, 0x6a085dc9u,
    0x083fd77au, 0xa677512bu, 0x44aecadcu, 0xe2e6448du, 0x811dbe3eu, 0x1f5537efu, 0xbd8cb1a0u, 0x5bc42b51u,
    0xf9fba502u, 0x98331eb3u, 0x366a9864u, 0xd4a21215u, 0x72d98bc6u, 0x11110577u, 0xaf487f28u, 0x4d7ff8d9u,
    0xebb7728au, 0x89eeec3bu, 0x282665ecu, 0xc65ddf9du, 0x6495594eu, 0x02ccd2ffu, 0xa1044cb0u, 0x3f3bc661u,
    0xdd734012u, 0x7baab9c3u, 0x19e23374u, 0xb819ad25u, 0x565126d6u, 0xf488a087u, 0x92c01a38u, 0x30f793e9u,
    0xcf2f0d9au, 0x6d66874bu, 0x0b9e00fcu, 0xa9d57aadu, 0x480cf45eu, 0xe6446e0fu, 0x847be7c0u, 0x22b36171u,
    0xc0eadb22u, 0x5f2254d3u, 0xfd59ce84u, 0x9b914835u, 0x39c8c1e6u, 0xd8003b97u, 0x7637b548u, 0x146f2ef9u,
    0xb2a6a8aau, 0x50de225bu, 0xef159c0cu, 0x8d4d15bdu, 0x2b848f6eu, 0xc9bc091fu, 0x67f382d0u, 0x062afc81u,
    0xa4627632u, 0x4299efe3u, 0xe0d16994u, 0x7f08e345u, 0x1d405cf6u, 0xbb77d6a7u, 0x59af5058u, 0xf7e6ca09u,
    0x961e43bau, 0x3455bd6bu, 0xd28d371cu, 0x70c4b0cdu, 0x0efc2a7eu, 0xad33a42fu, 0x4b6b1de0u, 0xe9a29791u,
};

static const uint32_t bshim_288_tab3[96] = {
    0xb4bb83a3u, 0x52f2fd54u, 0xf12a7705u, 0x8f61f0b6u, 0x2d996a67u, 0xcbd0e418u, 0x6a085dc9u, 0x083fd77au,
    0xa677512bu, 0x44aecadcu, 0xe2e6448du, 0x811dbe3eu, 0x1f5537efu, 0xbd8cb1a0u, 0x5bc42b51u, 0xf9fba502u,
    0x98331eb3u, 0x366a9864u, 0xd4a21215u, 0x72d98bc6u, 0x11110577u, 0xaf487f28u, 0x4d7ff8d9u, 0xebb7728au,
    0x89eeec3bu, 0x282665ecu, 0xc65ddf9du, 0x6495594eu, 0x02ccd2ffu, 0xa1044cb0u, 0x3f3bc661u, 0xdd734012u,
    0x7baab9c3u, 0x19e23374u, 0xb819ad25u, 0x565126d6u, 0xf488a087u, 0x92c01a38u, 0x30f793e9u, 0xcf2f0d9au,
    0x6d66874bu, 0x0b9e00fcu, 0xa9d57aadu, 0x480cf45eu, 0xe6446e0fu, 0x847be7c0u, 0x22b36171u, 0xc0eadb22u,
    0x5f2254d3u, 0xfd59ce84u, 0x9b914835u, 0x39c8c1e6u, 0xd8003b97u, 0x7637b548u, 0x146f2ef9u, 0xb2a6a8aau,
    0x50de225bu, 0xef159c0cu, 0x8d4d15bdu, 0x2b848f6eu, 0xc9bc091fu, 0x67f382d0u, 0x062afc81u, 0xa4627632u,
    0x4299efe3u, 0xe0d16994u, 0x7f08e345u, 0x1d405cf6u, 0xbb77d6a7u, 0x59af5058u, 0xf7e6ca09u, 0x961e43bau,
    0x3455bd6bu, 0xd28d371cu, 0x70c4b0cdu, 0x0efc2a7eu, 0xad33a42fu, 0x4b6b1de0u, 0xe9a29791u, 0x87da1142u,
    0x26118af3u, 0xc44904a4u, 0x62807e55u, 0x00b7f806u, 0x9eef71b7u, 0x3d26eb68u, 0xdb5e6519u, 0x7995decau,
    0x17cd587bu, 0xb604d22cu, 0x543c4bddu, 0xf273c58eu, 0x90ab3f3fu, 0x2ee2b8f0u, 0xcd1a32a1u, 0x6b51ac52u,
};

static const uint32_t bshim_288_tab4[96] = {
    0x366a9864u, 0xd4a21215u, 0x72d98bc6u, 0x11110577u, 0xaf487f28u, 0x4d7ff8d9u, 0xebb7728au, 0x89eeec3bu,
    0x282665ecu, 0xc65ddf9du, 0x6495594eu, 0x02ccd2ffu, 0xa1044cb0u, 0x3f3bc661u, 0xdd734012u, 0x7baab9c3u,
    0x19e23374u, 0xb819ad25u, 0x565126d6u, 0xf488a087u, 0x92c01a38u, 0x30f793e9u, 0xcf2f0d9au, 0x6d66874bu,
    0x0b9e00fcu, 0xa9d57aadu, 0x480cf45eu, 0xe6446e0fu, 0x847be7c0u, 0x22b36171u, 0xc0eadb22u, 0x5f2254d3u,
    0xfd59ce84u, 0x9b914835u, 0x39c8c1e6u, 0xd8003b97u, 0x7637b548u, 0x146f2ef9u, 0xb2a6a8aau, 0x50de225bu,
    0xef159c0cu, 0x8d4d15bdu, 0x2b848f6eu, 0xc9bc091fu, 0x67f382d0u, 0x062afc81u, 0xa4627632u, 0x4299efe3u,
    0xe0d16994u, 0x7f08e345u, 0x1d405cf6u, 0xbb77d6a7u, 0x59af5058u, 0xf7e6ca09u, 0x961e43bau, 0x3455bd6bu,
    0xd28d371cu, 0x70c4b0cdu, 0x0efc2a7eu, 0xad33a42fu, 0x4b6b1de0u, 0xe9a29791u, 0x87da1142u, 0x26118af3u,
    0xc44904a4u, 0x62807e55u, 0x00b7f806u, 0x9eef71b7u, 0x3d26eb68u, 0xdb5e6519u, 0x7995decau, 0x17cd587bu,
    0xb604d22cu, 0x543c4bddu, 0xf273c58eu, 0x90ab3f3fu, 0x2ee2b8f0u, 0xcd1a32a1u, 0x6b51ac52u, 0x09892603u,
    0xa7c09fb4u, 0x45f81965u, 0xe42f9316u, 0x82670cc7u, 0x209e8678u, 0xbed60029u, 0x5d0d79dau, 0xfb44f38bu,
    0x997c6d3cu, 0x37b3e6edu, 0xd5eb609eu, 0x7422da4fu, 0x125a5400u, 0xb091cdb1u, 0x4ec94762u, 0xed00c113u,
};

static const uint32_t bshim_288_tab5[96] = {
    0xb819ad25u, 0x565126d6u, 0xf488a087u, 0x92c01a38u, 0x30f793e9u, 0xcf2f0d9au, 0x6d66874bu, 0x0b9e00fcu,
    0xa9d57aadu, 0x480cf45eu, 0xe6446e0fu, 0x847be7c0u, 0x22b36171u, 0xc0eadb22u, 0x5f2254d3u, 0xfd59ce84u,
    0x9b914835u, 0x39c8c1e6u, 0xd8003b97u, 0x7637b548u, 0x146f2ef9u, 0xb2a6a8aau, 0x50de225bu, 0xef159c0cu,
    0x8d4d15bdu, 0x2b848f6eu, 0xc9bc091fu, 0x67f382d0u, 0x062afc81u, 0xa4627632u, 0x4299efe3u, 0xe0d16994u,
    0x7f08e345u, 0x1d405cf6u, 0xbb77d6a7u, 0x59af5058u, 0xf7e6ca09u, 0x961e43bau, 0x3455bd6bu, 0xd28d371cu,
    0x70c4b0cdu, 0x0efc2a7eu, 0xad33a42fu, 0x4b6b1de0u, 0xe9a29791u, 0x87da1142u, 0x26118af3u, 0xc44904a4u,
    0x62807e55u, 0x00b7f806u, 0x9eef71b7u, 0x3d26eb68u, 0xdb5e6519u, 0x7995decau, 0x17cd587bu, 0xb604d22cu,
    0x543c4bddu, 0xf273c58eu, 0x90ab3f3fu, 0x2ee2b8f0u, 0xcd1a32a1u, 0x6b51ac52u, 0x09892603u, 0xa7c09fb4u,
    0x45f81965u, 0xe42f9316u, 0x82670cc7u, 0x209e8678u, 0xbed60029u, 0x5d0d79dau, 0xfb44f38bu, 0x997c6d3cu,
    0x37b3e6edu, 0xd5eb609eu, 0x7422da4fu, 0x125a5400u, 0xb091cdb1u, 0x4ec94762u, 0xed00c113u, 0x8b383ac4u,
    0x296fb475u, 0xc7a72e26u, 0x65dea7d7u, 0x04162188u, 0xa24d9b39u, 0x408514eau, 0xdebc8e9bu, 0x7cf4084cu,
    0x1b2b81fdu, 0xb962fbaeu, 0x579a755fu, 0xf5d1ef10u, 0x940968c1u, 0x3240e272u, 0xd0785c23u, 0x6eafd5d4u,
};

static const uint32_t bshim_288_tab6[96] = {
    0x39c8c1e6u, 0xd8003b97u, 0x7637b548u, 0x146f2ef9u, 0xb2a6a8aau, 0x50de225bu, 0xef159c0cu, 0x8d4d15bdu,
    0x2b848f6eu, 0xc9bc091fu, 0x67f382d0u, 0x062afc81u, 0xa4627632u, 0x4299efe3u, 0xe0d16994u, 0x7f08e345u,
    0x1d405cf6u, 0xbb77d6a7u, 0x59af5058u, 0xf7e6ca09u, 0x961e43bau, 0x3455bd6bu, 0xd28d371cu, 0x70c4b0cdu,
    0x0efc2a7eu, 0xad33a42fu, 0x4b6b1de0u, 0xe9a29791u, 0x87da1142u, 0x26118af3u, 0xc44904a4u, 0x62807e55u,
    0x00b7f806u, 0x9eef71b7u, 0x3d26eb68u, 0xdb5e6519u, 0x7995decau, 0x17cd587bu, 0xb604d22cu, 0x543c4bddu,
    0xf273c58eu, 0x90ab3f3fu, 0x2ee2b8f0u, 0xcd1a32a1u, 0x6b51ac52u, 0x09892603u, 0xa7c09fb4u, 0x45f81965u,
    0xe42f9316u, 0x82670cc7u, 0x209e8678u, 0xbed60029u, 0x5d0d79dau, 0xfb44f38bu, 0x997c6d3cu, 0x37b3e6edu,
    0xd5eb609eu, 0x7422da4fu, 0x125a5400u, 0xb091cdb1u, 0x4ec94762u, 0xed00c113u, 0x8b383ac4u, 0x296fb475u,
    0xc7a72e26u, 0x65dea7d7u, 0x04162188u, 0xa24d9b39u, 0x408514eau, 0xdebc8e9bu, 0x7cf4084cu, 0x1b2b81fdu,
    0xb962fbaeu, 0x579a755fu, 0xf5d1ef10u, 0x940968c1u, 0x3240e272u, 0xd0785c23u, 0x6eafd5d4u, 0x0ce74f85u,
    0xab1ec936u, 0x495642e7u, 0xe78dbc98u, 0x85c53649u, 0x23fcaffau, 0xc23429abu, 0x606ba35cu, 0xfea31d0du,
    0x9cda96beu, 0x3b12106fu, 0xd9498a20u, 0x778103d1u, 0x15b87d82u, 0xb3eff733u, 0x522770e4u, 0xf05eea95u,
};

static const uint32_t bshim_288_tab7[96] = {
    0xbb77d6a7u, 0x59af5058u, 0xf7e6ca09u, 0x961e43bau, 0x3455bd6bu, 0xd28d371cu, 0x70c4b0cdu, 0x0efc2a7eu,
    0xad33a42fu, 0x4b6b1de0u, 0xe9a29791u, 0x87da1142u, 0x26118af3u, 0xc44904a4u, 0x62807e55u, 0x00b7f806u,
    0x9eef71b7u, 0x3d26eb68u, 0xdb5e6519u, 0x7995decau, 0x17cd587bu, 0xb604d22cu, 0x543c4bddu, 0xf273c58eu,
    0x90ab3f3fu, 0x2ee2b8f0u, 0xcd1a32a1u, 0x6b51ac52u, 0x09892603u, 0xa7c09fb4u, 0x45f81965u, 0xe42f9316u,
    0x82670cc7u, 0x209e8678u, 0xbed60029u, 0x5d0d79dau, 0xfb44f38bu, 0x997c6d3cu, 0x37b3e6edu, 0xd5eb609eu,
    0x7422da4fu, 0x125a5400u, 0xb091cdb1u, 0x4ec94762u, 0xed00c113u, 0x8b383ac4u, 0x296fb475u, 0xc7a72e26u,
    0x65dea7d7u, 0x04162188u, 0xa24d9b39u, 0x408514eau, 0xdebc8e9bu, 0x7cf4084cu, 0x1b2b81fdu, 0xb962fbaeu,
    0x579a755fu, 0xf5d1ef10u, 0x940968c1u, 0x3240e272u, 0xd0785c23u, 0x6eafd5d4u, 0x0ce74f85u, 0xab1ec936u,
    0x495642e7u, 0xe78dbc98u, 0x85c53649u, 0x23fcaffau, 0xc23429abu, 0x606ba35cu, 0xfea31d0du, 0x9cda96beu,
    0x3b12106fu, 0xd9498a20u, 0x778103d1u, 0x15b87d82u, 0xb3eff733u, 0x522770e4u, 0xf05eea95u, 0x8e966446u,
    0x2ccdddf7u, 0xcb0557a8u, 0x693cd159u, 0x07744b0au, 0xa5abc4bbu, 0x43e33e6cu, 0xe21ab81du, 0x805231ceu,
    0x1e89ab7fu, 0xbcc12530u, 0x5af89ee1u, 0xf9301892u, 0x97679243u, 0x359f0bf4u, 0xd3d685a5u, 0x720dff56u,
};

struct bshim_288_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_288_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x08006d50u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8dec37c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x13d8023eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99c3ccb5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1faf972cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa59b61a3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2b872c1au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb172f691u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x375ec108u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd4a8b7fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x433655f6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc922206du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f0deae4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd4f9b55bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5ae57fd2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe0d14a49u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66bd14c0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeca8df37u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7294a9aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_288_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8807425u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_288_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_288_reset(struct bshim_288_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0022cce0u;
    return 0;
}

