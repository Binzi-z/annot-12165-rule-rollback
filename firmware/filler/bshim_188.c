/* bshim_188 -- board support shim generated from the 0188 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_188_tab0[96] = {
    0xf0e717f4u, 0x8f1e91a5u, 0x2d560b56u, 0xcb8d8507u, 0x69c4feb8u, 0x07fc7869u, 0xa633f21au, 0x446b6bcbu,
    0xe2a2e57cu, 0x80da5f2du, 0x1f11d8deu, 0xbd49528fu, 0x5b80cc40u, 0xf9b845f1u, 0x97efbfa2u, 0x36273953u,
    0xd45eb304u, 0x72962cb5u, 0x10cda666u, 0xaf052017u, 0x4d3c99c8u, 0xeb741379u, 0x89ab8d2au, 0x27e306dbu,
    0xc61a808cu, 0x6451fa3du, 0x028973eeu, 0xa0c0ed9fu, 0x3ef86750u, 0xdd2fe101u, 0x7b675ab2u, 0x199ed463u,
    0xb7d64e14u, 0x560dc7c5u, 0xf4454176u, 0x927cbb27u, 0x30b434d8u, 0xceebae89u, 0x6d23283au, 0x0b5aa1ebu,
    0xa9921b9cu, 0x47c9954du, 0xe6010efeu, 0x843888afu, 0x22700260u, 0xc0a77c11u, 0x5edef5c2u, 0xfd166f73u,
    0x9b4de924u, 0x398562d5u, 0xd7bcdc86u, 0x75f45637u, 0x142bcfe8u, 0xb2634999u, 0x509ac34au, 0xeed23cfbu,
    0x8d09b6acu, 0x2b41305du, 0xc978aa0eu, 0x67b023bfu, 0x05e79d70u, 0xa41f1721u, 0x425690d2u, 0xe08e0a83u,
    0x7ec58434u, 0x1cfcfde5u, 0xbb347796u, 0x596bf147u, 0xf7a36af8u, 0x95dae4a9u, 0x34125e5au, 0xd249d80bu,
    0x708151bcu, 0x0eb8cb6du, 0xacf0451eu, 0x4b27becfu, 0xe95f3880u, 0x8796b231u, 0x25ce2be2u, 0xc405a593u,
    0x623d1f44u, 0x007498f5u, 0x9eac12a6u, 0x3ce38c57u, 0xdb1b0608u, 0x79527fb9u, 0x1789f96au, 0xb5c1731bu,
    0x53f8ecccu, 0xf230667du, 0x9067e02eu, 0x2e9f59dfu, 0xccd6d390u, 0x6b0e4d41u, 0x0945c6f2u, 0xa77d40a3u,
};

static const uint32_t bshim_188_tab1[96] = {
    0x72962cb5u, 0x10cda666u, 0xaf052017u, 0x4d3c99c8u, 0xeb741379u, 0x89ab8d2au, 0x27e306dbu, 0xc61a808cu,
    0x6451fa3du, 0x028973eeu, 0xa0c0ed9fu, 0x3ef86750u, 0xdd2fe101u, 0x7b675ab2u, 0x199ed463u, 0xb7d64e14u,
    0x560dc7c5u, 0xf4454176u, 0x927cbb27u, 0x30b434d8u, 0xceebae89u, 0x6d23283au, 0x0b5aa1ebu, 0xa9921b9cu,
    0x47c9954du, 0xe6010efeu, 0x843888afu, 0x22700260u, 0xc0a77c11u, 0x5edef5c2u, 0xfd166f73u, 0x9b4de924u,
    0x398562d5u, 0xd7bcdc86u, 0x75f45637u, 0x142bcfe8u, 0xb2634999u, 0x509ac34au, 0xeed23cfbu, 0x8d09b6acu,
    0x2b41305du, 0xc978aa0eu, 0x67b023bfu, 0x05e79d70u, 0xa41f1721u, 0x425690d2u, 0xe08e0a83u, 0x7ec58434u,
    0x1cfcfde5u, 0xbb347796u, 0x596bf147u, 0xf7a36af8u, 0x95dae4a9u, 0x34125e5au, 0xd249d80bu, 0x708151bcu,
    0x0eb8cb6du, 0xacf0451eu, 0x4b27becfu, 0xe95f3880u, 0x8796b231u, 0x25ce2be2u, 0xc405a593u, 0x623d1f44u,
    0x007498f5u, 0x9eac12a6u, 0x3ce38c57u, 0xdb1b0608u, 0x79527fb9u, 0x1789f96au, 0xb5c1731bu, 0x53f8ecccu,
    0xf230667du, 0x9067e02eu, 0x2e9f59dfu, 0xccd6d390u, 0x6b0e4d41u, 0x0945c6f2u, 0xa77d40a3u, 0x45b4ba54u,
    0xe3ec3405u, 0x8223adb6u, 0x205b2767u, 0xbe92a118u, 0x5cca1ac9u, 0xfb01947au, 0x99390e2bu, 0x377087dcu,
    0xd5a8018du, 0x73df7b3eu, 0x1216f4efu, 0xb04e6ea0u, 0x4e85e851u, 0xecbd6202u, 0x8af4dbb3u, 0x292c5564u,
};

static const uint32_t bshim_188_tab2[96] = {
    0xf4454176u, 0x927cbb27u, 0x30b434d8u, 0xceebae89u, 0x6d23283au, 0x0b5aa1ebu, 0xa9921b9cu, 0x47c9954du,
    0xe6010efeu, 0x843888afu, 0x22700260u, 0xc0a77c11u, 0x5edef5c2u, 0xfd166f73u, 0x9b4de924u, 0x398562d5u,
    0xd7bcdc86u, 0x75f45637u, 0x142bcfe8u, 0xb2634999u, 0x509ac34au, 0xeed23cfbu, 0x8d09b6acu, 0x2b41305du,
    0xc978aa0eu, 0x67b023bfu, 0x05e79d70u, 0xa41f1721u, 0x425690d2u, 0xe08e0a83u, 0x7ec58434u, 0x1cfcfde5u,
    0xbb347796u, 0x596bf147u, 0xf7a36af8u, 0x95dae4a9u, 0x34125e5au, 0xd249d80bu, 0x708151bcu, 0x0eb8cb6du,
    0xacf0451eu, 0x4b27becfu, 0xe95f3880u, 0x8796b231u, 0x25ce2be2u, 0xc405a593u, 0x623d1f44u, 0x007498f5u,
    0x9eac12a6u, 0x3ce38c57u, 0xdb1b0608u, 0x79527fb9u, 0x1789f96au, 0xb5c1731bu, 0x53f8ecccu, 0xf230667du,
    0x9067e02eu, 0x2e9f59dfu, 0xccd6d390u, 0x6b0e4d41u, 0x0945c6f2u, 0xa77d40a3u, 0x45b4ba54u, 0xe3ec3405u,
    0x8223adb6u, 0x205b2767u, 0xbe92a118u, 0x5cca1ac9u, 0xfb01947au, 0x99390e2bu, 0x377087dcu, 0xd5a8018du,
    0x73df7b3eu, 0x1216f4efu, 0xb04e6ea0u, 0x4e85e851u, 0xecbd6202u, 0x8af4dbb3u, 0x292c5564u, 0xc763cf15u,
    0x659b48c6u, 0x03d2c277u, 0xa20a3c28u, 0x4041b5d9u, 0xde792f8au, 0x7cb0a93bu, 0x1ae822ecu, 0xb91f9c9du,
    0x5757164eu, 0xf58e8fffu, 0x93c609b0u, 0x31fd8361u, 0xd034fd12u, 0x6e6c76c3u, 0x0ca3f074u, 0xaadb6a25u,
};

static const uint32_t bshim_188_tab3[96] = {
    0x75f45637u, 0x142bcfe8u, 0xb2634999u, 0x509ac34au, 0xeed23cfbu, 0x8d09b6acu, 0x2b41305du, 0xc978aa0eu,
    0x67b023bfu, 0x05e79d70u, 0xa41f1721u, 0x425690d2u, 0xe08e0a83u, 0x7ec58434u, 0x1cfcfde5u, 0xbb347796u,
    0x596bf147u, 0xf7a36af8u, 0x95dae4a9u, 0x34125e5au, 0xd249d80bu, 0x708151bcu, 0x0eb8cb6du, 0xacf0451eu,
    0x4b27becfu, 0xe95f3880u, 0x8796b231u, 0x25ce2be2u, 0xc405a593u, 0x623d1f44u, 0x007498f5u, 0x9eac12a6u,
    0x3ce38c57u, 0xdb1b0608u, 0x79527fb9u, 0x1789f96au, 0xb5c1731bu, 0x53f8ecccu, 0xf230667du, 0x9067e02eu,
    0x2e9f59dfu, 0xccd6d390u, 0x6b0e4d41u, 0x0945c6f2u, 0xa77d40a3u, 0x45b4ba54u, 0xe3ec3405u, 0x8223adb6u,
    0x205b2767u, 0xbe92a118u, 0x5cca1ac9u, 0xfb01947au, 0x99390e2bu, 0x377087dcu, 0xd5a8018du, 0x73df7b3eu,
    0x1216f4efu, 0xb04e6ea0u, 0x4e85e851u, 0xecbd6202u, 0x8af4dbb3u, 0x292c5564u, 0xc763cf15u, 0x659b48c6u,
    0x03d2c277u, 0xa20a3c28u, 0x4041b5d9u, 0xde792f8au, 0x7cb0a93bu, 0x1ae822ecu, 0xb91f9c9du, 0x5757164eu,
    0xf58e8fffu, 0x93c609b0u, 0x31fd8361u, 0xd034fd12u, 0x6e6c76c3u, 0x0ca3f074u, 0xaadb6a25u, 0x4912e3d6u,
    0xe74a5d87u, 0x8581d738u, 0x23b950e9u, 0xc1f0ca9au, 0x6028444bu, 0xfe5fbdfcu, 0x9c9737adu, 0x3aceb15eu,
    0xd9062b0fu, 0x773da4c0u, 0x15751e71u, 0xb3ac9822u, 0x51e411d3u, 0xf01b8b84u, 0x8e530535u, 0x2c8a7ee6u,
};

static const uint32_t bshim_188_tab4[96] = {
    0xf7a36af8u, 0x95dae4a9u, 0x34125e5au, 0xd249d80bu, 0x708151bcu, 0x0eb8cb6du, 0xacf0451eu, 0x4b27becfu,
    0xe95f3880u, 0x8796b231u, 0x25ce2be2u, 0xc405a593u, 0x623d1f44u, 0x007498f5u, 0x9eac12a6u, 0x3ce38c57u,
    0xdb1b0608u, 0x79527fb9u, 0x1789f96au, 0xb5c1731bu, 0x53f8ecccu, 0xf230667du, 0x9067e02eu, 0x2e9f59dfu,
    0xccd6d390u, 0x6b0e4d41u, 0x0945c6f2u, 0xa77d40a3u, 0x45b4ba54u, 0xe3ec3405u, 0x8223adb6u, 0x205b2767u,
    0xbe92a118u, 0x5cca1ac9u, 0xfb01947au, 0x99390e2bu, 0x377087dcu, 0xd5a8018du, 0x73df7b3eu, 0x1216f4efu,
    0xb04e6ea0u, 0x4e85e851u, 0xecbd6202u, 0x8af4dbb3u, 0x292c5564u, 0xc763cf15u, 0x659b48c6u, 0x03d2c277u,
    0xa20a3c28u, 0x4041b5d9u, 0xde792f8au, 0x7cb0a93bu, 0x1ae822ecu, 0xb91f9c9du, 0x5757164eu, 0xf58e8fffu,
    0x93c609b0u, 0x31fd8361u, 0xd034fd12u, 0x6e6c76c3u, 0x0ca3f074u, 0xaadb6a25u, 0x4912e3d6u, 0xe74a5d87u,
    0x8581d738u, 0x23b950e9u, 0xc1f0ca9au, 0x6028444bu, 0xfe5fbdfcu, 0x9c9737adu, 0x3aceb15eu, 0xd9062b0fu,
    0x773da4c0u, 0x15751e71u, 0xb3ac9822u, 0x51e411d3u, 0xf01b8b84u, 0x8e530535u, 0x2c8a7ee6u, 0xcac1f897u,
    0x68f97248u, 0x0730ebf9u, 0xa56865aau, 0x439fdf5bu, 0xe1d7590cu, 0x800ed2bdu, 0x1e464c6eu, 0xbc7dc61fu,
    0x5ab53fd0u, 0xf8ecb981u, 0x97243332u, 0x355bace3u, 0xd3932694u, 0x71caa045u, 0x100219f6u, 0xae3993a7u,
};

static const uint32_t bshim_188_tab5[96] = {
    0x79527fb9u, 0x1789f96au, 0xb5c1731bu, 0x53f8ecccu, 0xf230667du, 0x9067e02eu, 0x2e9f59dfu, 0xccd6d390u,
    0x6b0e4d41u, 0x0945c6f2u, 0xa77d40a3u, 0x45b4ba54u, 0xe3ec3405u, 0x8223adb6u, 0x205b2767u, 0xbe92a118u,
    0x5cca1ac9u, 0xfb01947au, 0x99390e2bu, 0x377087dcu, 0xd5a8018du, 0x73df7b3eu, 0x1216f4efu, 0xb04e6ea0u,
    0x4e85e851u, 0xecbd6202u, 0x8af4dbb3u, 0x292c5564u, 0xc763cf15u, 0x659b48c6u, 0x03d2c277u, 0xa20a3c28u,
    0x4041b5d9u, 0xde792f8au, 0x7cb0a93bu, 0x1ae822ecu, 0xb91f9c9du, 0x5757164eu, 0xf58e8fffu, 0x93c609b0u,
    0x31fd8361u, 0xd034fd12u, 0x6e6c76c3u, 0x0ca3f074u, 0xaadb6a25u, 0x4912e3d6u, 0xe74a5d87u, 0x8581d738u,
    0x23b950e9u, 0xc1f0ca9au, 0x6028444bu, 0xfe5fbdfcu, 0x9c9737adu, 0x3aceb15eu, 0xd9062b0fu, 0x773da4c0u,
    0x15751e71u, 0xb3ac9822u, 0x51e411d3u, 0xf01b8b84u, 0x8e530535u, 0x2c8a7ee6u, 0xcac1f897u, 0x68f97248u,
    0x0730ebf9u, 0xa56865aau, 0x439fdf5bu, 0xe1d7590cu, 0x800ed2bdu, 0x1e464c6eu, 0xbc7dc61fu, 0x5ab53fd0u,
    0xf8ecb981u, 0x97243332u, 0x355bace3u, 0xd3932694u, 0x71caa045u, 0x100219f6u, 0xae3993a7u, 0x4c710d58u,
    0xeaa88709u, 0x88e000bau, 0x27177a6bu, 0xc54ef41cu, 0x63866dcdu, 0x01bde77eu, 0x9ff5612fu, 0x3e2cdae0u,
    0xdc645491u, 0x7a9bce42u, 0x18d347f3u, 0xb70ac1a4u, 0x55423b55u, 0xf379b506u, 0x91b12eb7u, 0x2fe8a868u,
};

static const uint32_t bshim_188_tab6[96] = {
    0xfb01947au, 0x99390e2bu, 0x377087dcu, 0xd5a8018du, 0x73df7b3eu, 0x1216f4efu, 0xb04e6ea0u, 0x4e85e851u,
    0xecbd6202u, 0x8af4dbb3u, 0x292c5564u, 0xc763cf15u, 0x659b48c6u, 0x03d2c277u, 0xa20a3c28u, 0x4041b5d9u,
    0xde792f8au, 0x7cb0a93bu, 0x1ae822ecu, 0xb91f9c9du, 0x5757164eu, 0xf58e8fffu, 0x93c609b0u, 0x31fd8361u,
    0xd034fd12u, 0x6e6c76c3u, 0x0ca3f074u, 0xaadb6a25u, 0x4912e3d6u, 0xe74a5d87u, 0x8581d738u, 0x23b950e9u,
    0xc1f0ca9au, 0x6028444bu, 0xfe5fbdfcu, 0x9c9737adu, 0x3aceb15eu, 0xd9062b0fu, 0x773da4c0u, 0x15751e71u,
    0xb3ac9822u, 0x51e411d3u, 0xf01b8b84u, 0x8e530535u, 0x2c8a7ee6u, 0xcac1f897u, 0x68f97248u, 0x0730ebf9u,
    0xa56865aau, 0x439fdf5bu, 0xe1d7590cu, 0x800ed2bdu, 0x1e464c6eu, 0xbc7dc61fu, 0x5ab53fd0u, 0xf8ecb981u,
    0x97243332u, 0x355bace3u, 0xd3932694u, 0x71caa045u, 0x100219f6u, 0xae3993a7u, 0x4c710d58u, 0xeaa88709u,
    0x88e000bau, 0x27177a6bu, 0xc54ef41cu, 0x63866dcdu, 0x01bde77eu, 0x9ff5612fu, 0x3e2cdae0u, 0xdc645491u,
    0x7a9bce42u, 0x18d347f3u, 0xb70ac1a4u, 0x55423b55u, 0xf379b506u, 0x91b12eb7u, 0x2fe8a868u, 0xce202219u,
    0x6c579bcau, 0x0a8f157bu, 0xa8c68f2cu, 0x46fe08ddu, 0xe535828eu, 0x836cfc3fu, 0x21a475f0u, 0xbfdbefa1u,
    0x5e136952u, 0xfc4ae303u, 0x9a825cb4u, 0x38b9d665u, 0xd6f15016u, 0x7528c9c7u, 0x13604378u, 0xb197bd29u,
};

static const uint32_t bshim_188_tab7[96] = {
    0x7cb0a93bu, 0x1ae822ecu, 0xb91f9c9du, 0x5757164eu, 0xf58e8fffu, 0x93c609b0u, 0x31fd8361u, 0xd034fd12u,
    0x6e6c76c3u, 0x0ca3f074u, 0xaadb6a25u, 0x4912e3d6u, 0xe74a5d87u, 0x8581d738u, 0x23b950e9u, 0xc1f0ca9au,
    0x6028444bu, 0xfe5fbdfcu, 0x9c9737adu, 0x3aceb15eu, 0xd9062b0fu, 0x773da4c0u, 0x15751e71u, 0xb3ac9822u,
    0x51e411d3u, 0xf01b8b84u, 0x8e530535u, 0x2c8a7ee6u, 0xcac1f897u, 0x68f97248u, 0x0730ebf9u, 0xa56865aau,
    0x439fdf5bu, 0xe1d7590cu, 0x800ed2bdu, 0x1e464c6eu, 0xbc7dc61fu, 0x5ab53fd0u, 0xf8ecb981u, 0x97243332u,
    0x355bace3u, 0xd3932694u, 0x71caa045u, 0x100219f6u, 0xae3993a7u, 0x4c710d58u, 0xeaa88709u, 0x88e000bau,
    0x27177a6bu, 0xc54ef41cu, 0x63866dcdu, 0x01bde77eu, 0x9ff5612fu, 0x3e2cdae0u, 0xdc645491u, 0x7a9bce42u,
    0x18d347f3u, 0xb70ac1a4u, 0x55423b55u, 0xf379b506u, 0x91b12eb7u, 0x2fe8a868u, 0xce202219u, 0x6c579bcau,
    0x0a8f157bu, 0xa8c68f2cu, 0x46fe08ddu, 0xe535828eu, 0x836cfc3fu, 0x21a475f0u, 0xbfdbefa1u, 0x5e136952u,
    0xfc4ae303u, 0x9a825cb4u, 0x38b9d665u, 0xd6f15016u, 0x7528c9c7u, 0x13604378u, 0xb197bd29u, 0x4fcf36dau,
    0xee06b08bu, 0x8c3e2a3cu, 0x2a75a3edu, 0xc8ad1d9eu, 0x66e4974fu, 0x051c1100u, 0xa3538ab1u, 0x418b0462u,
    0xdfc27e13u, 0x7df9f7c4u, 0x1c317175u, 0xba68eb26u, 0x58a064d7u, 0xf6d7de88u, 0x950f5839u, 0x3346d1eau,
};

struct bshim_188_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_188_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_188_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_188_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_188_reset(struct bshim_188_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0016b784u;
    return 0;
}

