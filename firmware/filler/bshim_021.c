/* bshim_021 -- board support shim generated from the 0021 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_021_tab0[96] = {
    0x3624b50fu, 0xd45c2ec0u, 0x7293a871u, 0x10cb2222u, 0xaf029bd3u, 0x4d3a1584u, 0xeb718f35u, 0x89a908e6u,
    0x27e08297u, 0xc617fc48u, 0x644f75f9u, 0x0286efaau, 0xa0be695bu, 0x3ef5e30cu, 0xdd2d5cbdu, 0x7b64d66eu,
    0x199c501fu, 0xb7d3c9d0u, 0x560b4381u, 0xf442bd32u, 0x927a36e3u, 0x30b1b094u, 0xcee92a45u, 0x6d20a3f6u,
    0x0b581da7u, 0xa98f9758u, 0x47c71109u, 0xe5fe8abau, 0x8436046bu, 0x226d7e1cu, 0xc0a4f7cdu, 0x5edc717eu,
    0xfd13eb2fu, 0x9b4b64e0u, 0x3982de91u, 0xd7ba5842u, 0x75f1d1f3u, 0x14294ba4u, 0xb260c555u, 0x50983f06u,
    0xeecfb8b7u, 0x8d073268u, 0x2b3eac19u, 0xc97625cau, 0x67ad9f7bu, 0x05e5192cu, 0xa41c92ddu, 0x42540c8eu,
    0xe08b863fu, 0x7ec2fff0u, 0x1cfa79a1u, 0xbb31f352u, 0x59696d03u, 0xf7a0e6b4u, 0x95d86065u, 0x340fda16u,
    0xd24753c7u, 0x707ecd78u, 0x0eb64729u, 0xacedc0dau, 0x4b253a8bu, 0xe95cb43cu, 0x87942dedu, 0x25cba79eu,
    0xc403214fu, 0x623a9b00u, 0x007214b1u, 0x9ea98e62u, 0x3ce10813u, 0xdb1881c4u, 0x794ffb75u, 0x17877526u,
    0xb5beeed7u, 0x53f66888u, 0xf22de239u, 0x90655beau, 0x2e9cd59bu, 0xccd44f4cu, 0x6b0bc8fdu, 0x094342aeu,
    0xa77abc5fu, 0x45b23610u, 0xe3e9afc1u, 0x82212972u, 0x2058a323u, 0xbe901cd4u, 0x5cc79685u, 0xfaff1036u,
    0x993689e7u, 0x376e0398u, 0xd5a57d49u, 0x73dcf6fau, 0x121470abu, 0xb04bea5cu, 0x4e83640du, 0xecbaddbeu,
};

static const uint32_t bshim_021_tab1[96] = {
    0xb7d3c9d0u, 0x560b4381u, 0xf442bd32u, 0x927a36e3u, 0x30b1b094u, 0xcee92a45u, 0x6d20a3f6u, 0x0b581da7u,
    0xa98f9758u, 0x47c71109u, 0xe5fe8abau, 0x8436046bu, 0x226d7e1cu, 0xc0a4f7cdu, 0x5edc717eu, 0xfd13eb2fu,
    0x9b4b64e0u, 0x3982de91u, 0xd7ba5842u, 0x75f1d1f3u, 0x14294ba4u, 0xb260c555u, 0x50983f06u, 0xeecfb8b7u,
    0x8d073268u, 0x2b3eac19u, 0xc97625cau, 0x67ad9f7bu, 0x05e5192cu, 0xa41c92ddu, 0x42540c8eu, 0xe08b863fu,
    0x7ec2fff0u, 0x1cfa79a1u, 0xbb31f352u, 0x59696d03u, 0xf7a0e6b4u, 0x95d86065u, 0x340fda16u, 0xd24753c7u,
    0x707ecd78u, 0x0eb64729u, 0xacedc0dau, 0x4b253a8bu, 0xe95cb43cu, 0x87942dedu, 0x25cba79eu, 0xc403214fu,
    0x623a9b00u, 0x007214b1u, 0x9ea98e62u, 0x3ce10813u, 0xdb1881c4u, 0x794ffb75u, 0x17877526u, 0xb5beeed7u,
    0x53f66888u, 0xf22de239u, 0x90655beau, 0x2e9cd59bu, 0xccd44f4cu, 0x6b0bc8fdu, 0x094342aeu, 0xa77abc5fu,
    0x45b23610u, 0xe3e9afc1u, 0x82212972u, 0x2058a323u, 0xbe901cd4u, 0x5cc79685u, 0xfaff1036u, 0x993689e7u,
    0x376e0398u, 0xd5a57d49u, 0x73dcf6fau, 0x121470abu, 0xb04bea5cu, 0x4e83640du, 0xecbaddbeu, 0x8af2576fu,
    0x2929d120u, 0xc7614ad1u, 0x6598c482u, 0x03d03e33u, 0xa207b7e4u, 0x403f3195u, 0xde76ab46u, 0x7cae24f7u,
    0x1ae59ea8u, 0xb91d1859u, 0x5754920au, 0xf58c0bbbu, 0x93c3856cu, 0x31faff1du, 0xd03278ceu, 0x6e69f27fu,
};

static const uint32_t bshim_021_tab2[96] = {
    0x3982de91u, 0xd7ba5842u, 0x75f1d1f3u, 0x14294ba4u, 0xb260c555u, 0x50983f06u, 0xeecfb8b7u, 0x8d073268u,
    0x2b3eac19u, 0xc97625cau, 0x67ad9f7bu, 0x05e5192cu, 0xa41c92ddu, 0x42540c8eu, 0xe08b863fu, 0x7ec2fff0u,
    0x1cfa79a1u, 0xbb31f352u, 0x59696d03u, 0xf7a0e6b4u, 0x95d86065u, 0x340fda16u, 0xd24753c7u, 0x707ecd78u,
    0x0eb64729u, 0xacedc0dau, 0x4b253a8bu, 0xe95cb43cu, 0x87942dedu, 0x25cba79eu, 0xc403214fu, 0x623a9b00u,
    0x007214b1u, 0x9ea98e62u, 0x3ce10813u, 0xdb1881c4u, 0x794ffb75u, 0x17877526u, 0xb5beeed7u, 0x53f66888u,
    0xf22de239u, 0x90655beau, 0x2e9cd59bu, 0xccd44f4cu, 0x6b0bc8fdu, 0x094342aeu, 0xa77abc5fu, 0x45b23610u,
    0xe3e9afc1u, 0x82212972u, 0x2058a323u, 0xbe901cd4u, 0x5cc79685u, 0xfaff1036u, 0x993689e7u, 0x376e0398u,
    0xd5a57d49u, 0x73dcf6fau, 0x121470abu, 0xb04bea5cu, 0x4e83640du, 0xecbaddbeu, 0x8af2576fu, 0x2929d120u,
    0xc7614ad1u, 0x6598c482u, 0x03d03e33u, 0xa207b7e4u, 0x403f3195u, 0xde76ab46u, 0x7cae24f7u, 0x1ae59ea8u,
    0xb91d1859u, 0x5754920au, 0xf58c0bbbu, 0x93c3856cu, 0x31faff1du, 0xd03278ceu, 0x6e69f27fu, 0x0ca16c30u,
    0xaad8e5e1u, 0x49105f92u, 0xe747d943u, 0x857f52f4u, 0x23b6cca5u, 0xc1ee4656u, 0x6025c007u, 0xfe5d39b8u,
    0x9c94b369u, 0x3acc2d1au, 0xd903a6cbu, 0x773b207cu, 0x15729a2du, 0xb3aa13deu, 0x51e18d8fu, 0xf0190740u,
};

static const uint32_t bshim_021_tab3[96] = {
    0xbb31f352u, 0x59696d03u, 0xf7a0e6b4u, 0x95d86065u, 0x340fda16u, 0xd24753c7u, 0x707ecd78u, 0x0eb64729u,
    0xacedc0dau, 0x4b253a8bu, 0xe95cb43cu, 0x87942dedu, 0x25cba79eu, 0xc403214fu, 0x623a9b00u, 0x007214b1u,
    0x9ea98e62u, 0x3ce10813u, 0xdb1881c4u, 0x794ffb75u, 0x17877526u, 0xb5beeed7u, 0x53f66888u, 0xf22de239u,
    0x90655beau, 0x2e9cd59bu, 0xccd44f4cu, 0x6b0bc8fdu, 0x094342aeu, 0xa77abc5fu, 0x45b23610u, 0xe3e9afc1u,
    0x82212972u, 0x2058a323u, 0xbe901cd4u, 0x5cc79685u, 0xfaff1036u, 0x993689e7u, 0x376e0398u, 0xd5a57d49u,
    0x73dcf6fau, 0x121470abu, 0xb04bea5cu, 0x4e83640du, 0xecbaddbeu, 0x8af2576fu, 0x2929d120u, 0xc7614ad1u,
    0x6598c482u, 0x03d03e33u, 0xa207b7e4u, 0x403f3195u, 0xde76ab46u, 0x7cae24f7u, 0x1ae59ea8u, 0xb91d1859u,
    0x5754920au, 0xf58c0bbbu, 0x93c3856cu, 0x31faff1du, 0xd03278ceu, 0x6e69f27fu, 0x0ca16c30u, 0xaad8e5e1u,
    0x49105f92u, 0xe747d943u, 0x857f52f4u, 0x23b6cca5u, 0xc1ee4656u, 0x6025c007u, 0xfe5d39b8u, 0x9c94b369u,
    0x3acc2d1au, 0xd903a6cbu, 0x773b207cu, 0x15729a2du, 0xb3aa13deu, 0x51e18d8fu, 0xf0190740u, 0x8e5080f1u,
    0x2c87faa2u, 0xcabf7453u, 0x68f6ee04u, 0x072e67b5u, 0xa565e166u, 0x439d5b17u, 0xe1d4d4c8u, 0x800c4e79u,
    0x1e43c82au, 0xbc7b41dbu, 0x5ab2bb8cu, 0xf8ea353du, 0x9721aeeeu, 0x3559289fu, 0xd390a250u, 0x71c81c01u,
};

static const uint32_t bshim_021_tab4[96] = {
    0x3ce10813u, 0xdb1881c4u, 0x794ffb75u, 0x17877526u, 0xb5beeed7u, 0x53f66888u, 0xf22de239u, 0x90655beau,
    0x2e9cd59bu, 0xccd44f4cu, 0x6b0bc8fdu, 0x094342aeu, 0xa77abc5fu, 0x45b23610u, 0xe3e9afc1u, 0x82212972u,
    0x2058a323u, 0xbe901cd4u, 0x5cc79685u, 0xfaff1036u, 0x993689e7u, 0x376e0398u, 0xd5a57d49u, 0x73dcf6fau,
    0x121470abu, 0xb04bea5cu, 0x4e83640du, 0xecbaddbeu, 0x8af2576fu, 0x2929d120u, 0xc7614ad1u, 0x6598c482u,
    0x03d03e33u, 0xa207b7e4u, 0x403f3195u, 0xde76ab46u, 0x7cae24f7u, 0x1ae59ea8u, 0xb91d1859u, 0x5754920au,
    0xf58c0bbbu, 0x93c3856cu, 0x31faff1du, 0xd03278ceu, 0x6e69f27fu, 0x0ca16c30u, 0xaad8e5e1u, 0x49105f92u,
    0xe747d943u, 0x857f52f4u, 0x23b6cca5u, 0xc1ee4656u, 0x6025c007u, 0xfe5d39b8u, 0x9c94b369u, 0x3acc2d1au,
    0xd903a6cbu, 0x773b207cu, 0x15729a2du, 0xb3aa13deu, 0x51e18d8fu, 0xf0190740u, 0x8e5080f1u, 0x2c87faa2u,
    0xcabf7453u, 0x68f6ee04u, 0x072e67b5u, 0xa565e166u, 0x439d5b17u, 0xe1d4d4c8u, 0x800c4e79u, 0x1e43c82au,
    0xbc7b41dbu, 0x5ab2bb8cu, 0xf8ea353du, 0x9721aeeeu, 0x3559289fu, 0xd390a250u, 0x71c81c01u, 0x0fff95b2u,
    0xae370f63u, 0x4c6e8914u, 0xeaa602c5u, 0x88dd7c76u, 0x2714f627u, 0xc54c6fd8u, 0x6383e989u, 0x01bb633au,
    0x9ff2dcebu, 0x3e2a569cu, 0xdc61d04du, 0x7a9949feu, 0x18d0c3afu, 0xb7083d60u, 0x553fb711u, 0xf37730c2u,
};

static const uint32_t bshim_021_tab5[96] = {
    0xbe901cd4u, 0x5cc79685u, 0xfaff1036u, 0x993689e7u, 0x376e0398u, 0xd5a57d49u, 0x73dcf6fau, 0x121470abu,
    0xb04bea5cu, 0x4e83640du, 0xecbaddbeu, 0x8af2576fu, 0x2929d120u, 0xc7614ad1u, 0x6598c482u, 0x03d03e33u,
    0xa207b7e4u, 0x403f3195u, 0xde76ab46u, 0x7cae24f7u, 0x1ae59ea8u, 0xb91d1859u, 0x5754920au, 0xf58c0bbbu,
    0x93c3856cu, 0x31faff1du, 0xd03278ceu, 0x6e69f27fu, 0x0ca16c30u, 0xaad8e5e1u, 0x49105f92u, 0xe747d943u,
    0x857f52f4u, 0x23b6cca5u, 0xc1ee4656u, 0x6025c007u, 0xfe5d39b8u, 0x9c94b369u, 0x3acc2d1au, 0xd903a6cbu,
    0x773b207cu, 0x15729a2du, 0xb3aa13deu, 0x51e18d8fu, 0xf0190740u, 0x8e5080f1u, 0x2c87faa2u, 0xcabf7453u,
    0x68f6ee04u, 0x072e67b5u, 0xa565e166u, 0x439d5b17u, 0xe1d4d4c8u, 0x800c4e79u, 0x1e43c82au, 0xbc7b41dbu,
    0x5ab2bb8cu, 0xf8ea353du, 0x9721aeeeu, 0x3559289fu, 0xd390a250u, 0x71c81c01u, 0x0fff95b2u, 0xae370f63u,
    0x4c6e8914u, 0xeaa602c5u, 0x88dd7c76u, 0x2714f627u, 0xc54c6fd8u, 0x6383e989u, 0x01bb633au, 0x9ff2dcebu,
    0x3e2a569cu, 0xdc61d04du, 0x7a9949feu, 0x18d0c3afu, 0xb7083d60u, 0x553fb711u, 0xf37730c2u, 0x91aeaa73u,
    0x2fe62424u, 0xce1d9dd5u, 0x6c551786u, 0x0a8c9137u, 0xa8c40ae8u, 0x46fb8499u, 0xe532fe4au, 0x836a77fbu,
    0x21a1f1acu, 0xbfd96b5du, 0x5e10e50eu, 0xfc485ebfu, 0x9a7fd870u, 0x38b75221u, 0xd6eecbd2u, 0x75264583u,
};

static const uint32_t bshim_021_tab6[96] = {
    0x403f3195u, 0xde76ab46u, 0x7cae24f7u, 0x1ae59ea8u, 0xb91d1859u, 0x5754920au, 0xf58c0bbbu, 0x93c3856cu,
    0x31faff1du, 0xd03278ceu, 0x6e69f27fu, 0x0ca16c30u, 0xaad8e5e1u, 0x49105f92u, 0xe747d943u, 0x857f52f4u,
    0x23b6cca5u, 0xc1ee4656u, 0x6025c007u, 0xfe5d39b8u, 0x9c94b369u, 0x3acc2d1au, 0xd903a6cbu, 0x773b207cu,
    0x15729a2du, 0xb3aa13deu, 0x51e18d8fu, 0xf0190740u, 0x8e5080f1u, 0x2c87faa2u, 0xcabf7453u, 0x68f6ee04u,
    0x072e67b5u, 0xa565e166u, 0x439d5b17u, 0xe1d4d4c8u, 0x800c4e79u, 0x1e43c82au, 0xbc7b41dbu, 0x5ab2bb8cu,
    0xf8ea353du, 0x9721aeeeu, 0x3559289fu, 0xd390a250u, 0x71c81c01u, 0x0fff95b2u, 0xae370f63u, 0x4c6e8914u,
    0xeaa602c5u, 0x88dd7c76u, 0x2714f627u, 0xc54c6fd8u, 0x6383e989u, 0x01bb633au, 0x9ff2dcebu, 0x3e2a569cu,
    0xdc61d04du, 0x7a9949feu, 0x18d0c3afu, 0xb7083d60u, 0x553fb711u, 0xf37730c2u, 0x91aeaa73u, 0x2fe62424u,
    0xce1d9dd5u, 0x6c551786u, 0x0a8c9137u, 0xa8c40ae8u, 0x46fb8499u, 0xe532fe4au, 0x836a77fbu, 0x21a1f1acu,
    0xbfd96b5du, 0x5e10e50eu, 0xfc485ebfu, 0x9a7fd870u, 0x38b75221u, 0xd6eecbd2u, 0x75264583u, 0x135dbf34u,
    0xb19538e5u, 0x4fccb296u, 0xee042c47u, 0x8c3ba5f8u, 0x2a731fa9u, 0xc8aa995au, 0x66e2130bu, 0x05198cbcu,
    0xa351066du, 0x4188801eu, 0xdfbff9cfu, 0x7df77380u, 0x1c2eed31u, 0xba6666e2u, 0x589de093u, 0xf6d55a44u,
};

static const uint32_t bshim_021_tab7[96] = {
    0xc1ee4656u, 0x6025c007u, 0xfe5d39b8u, 0x9c94b369u, 0x3acc2d1au, 0xd903a6cbu, 0x773b207cu, 0x15729a2du,
    0xb3aa13deu, 0x51e18d8fu, 0xf0190740u, 0x8e5080f1u, 0x2c87faa2u, 0xcabf7453u, 0x68f6ee04u, 0x072e67b5u,
    0xa565e166u, 0x439d5b17u, 0xe1d4d4c8u, 0x800c4e79u, 0x1e43c82au, 0xbc7b41dbu, 0x5ab2bb8cu, 0xf8ea353du,
    0x9721aeeeu, 0x3559289fu, 0xd390a250u, 0x71c81c01u, 0x0fff95b2u, 0xae370f63u, 0x4c6e8914u, 0xeaa602c5u,
    0x88dd7c76u, 0x2714f627u, 0xc54c6fd8u, 0x6383e989u, 0x01bb633au, 0x9ff2dcebu, 0x3e2a569cu, 0xdc61d04du,
    0x7a9949feu, 0x18d0c3afu, 0xb7083d60u, 0x553fb711u, 0xf37730c2u, 0x91aeaa73u, 0x2fe62424u, 0xce1d9dd5u,
    0x6c551786u, 0x0a8c9137u, 0xa8c40ae8u, 0x46fb8499u, 0xe532fe4au, 0x836a77fbu, 0x21a1f1acu, 0xbfd96b5du,
    0x5e10e50eu, 0xfc485ebfu, 0x9a7fd870u, 0x38b75221u, 0xd6eecbd2u, 0x75264583u, 0x135dbf34u, 0xb19538e5u,
    0x4fccb296u, 0xee042c47u, 0x8c3ba5f8u, 0x2a731fa9u, 0xc8aa995au, 0x66e2130bu, 0x05198cbcu, 0xa351066du,
    0x4188801eu, 0xdfbff9cfu, 0x7df77380u, 0x1c2eed31u, 0xba6666e2u, 0x589de093u, 0xf6d55a44u, 0x950cd3f5u,
    0x33444da6u, 0xd17bc757u, 0x6fb34108u, 0x0deabab9u, 0xac22346au, 0x4a59ae1bu, 0xe89127ccu, 0x86c8a17du,
    0x25001b2eu, 0xc33794dfu, 0x616f0e90u, 0xffa68841u, 0x9dde01f2u, 0x3c157ba3u, 0xda4cf554u, 0x78846f05u,
};

struct bshim_021_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_021_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc579bc3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8243663au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x082f30b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8e1afb28u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1406c59fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x99f29016u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1fde5a8du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_021_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_021_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_021_reset(struct bshim_021_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0002899bu;
    return 0;
}

