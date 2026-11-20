/* bshim_189 -- board support shim generated from the 0189 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_189_tab0[96] = {
    0xe74a5d87u, 0x8581d738u, 0x23b950e9u, 0xc1f0ca9au, 0x6028444bu, 0xfe5fbdfcu, 0x9c9737adu, 0x3aceb15eu,
    0xd9062b0fu, 0x773da4c0u, 0x15751e71u, 0xb3ac9822u, 0x51e411d3u, 0xf01b8b84u, 0x8e530535u, 0x2c8a7ee6u,
    0xcac1f897u, 0x68f97248u, 0x0730ebf9u, 0xa56865aau, 0x439fdf5bu, 0xe1d7590cu, 0x800ed2bdu, 0x1e464c6eu,
    0xbc7dc61fu, 0x5ab53fd0u, 0xf8ecb981u, 0x97243332u, 0x355bace3u, 0xd3932694u, 0x71caa045u, 0x100219f6u,
    0xae3993a7u, 0x4c710d58u, 0xeaa88709u, 0x88e000bau, 0x27177a6bu, 0xc54ef41cu, 0x63866dcdu, 0x01bde77eu,
    0x9ff5612fu, 0x3e2cdae0u, 0xdc645491u, 0x7a9bce42u, 0x18d347f3u, 0xb70ac1a4u, 0x55423b55u, 0xf379b506u,
    0x91b12eb7u, 0x2fe8a868u, 0xce202219u, 0x6c579bcau, 0x0a8f157bu, 0xa8c68f2cu, 0x46fe08ddu, 0xe535828eu,
    0x836cfc3fu, 0x21a475f0u, 0xbfdbefa1u, 0x5e136952u, 0xfc4ae303u, 0x9a825cb4u, 0x38b9d665u, 0xd6f15016u,
    0x7528c9c7u, 0x13604378u, 0xb197bd29u, 0x4fcf36dau, 0xee06b08bu, 0x8c3e2a3cu, 0x2a75a3edu, 0xc8ad1d9eu,
    0x66e4974fu, 0x051c1100u, 0xa3538ab1u, 0x418b0462u, 0xdfc27e13u, 0x7df9f7c4u, 0x1c317175u, 0xba68eb26u,
    0x58a064d7u, 0xf6d7de88u, 0x950f5839u, 0x3346d1eau, 0xd17e4b9bu, 0x6fb5c54cu, 0x0ded3efdu, 0xac24b8aeu,
    0x4a5c325fu, 0xe893ac10u, 0x86cb25c1u, 0x25029f72u, 0xc33a1923u, 0x617192d4u, 0xffa90c85u, 0x9de08636u,
};

static const uint32_t bshim_189_tab1[96] = {
    0x68f97248u, 0x0730ebf9u, 0xa56865aau, 0x439fdf5bu, 0xe1d7590cu, 0x800ed2bdu, 0x1e464c6eu, 0xbc7dc61fu,
    0x5ab53fd0u, 0xf8ecb981u, 0x97243332u, 0x355bace3u, 0xd3932694u, 0x71caa045u, 0x100219f6u, 0xae3993a7u,
    0x4c710d58u, 0xeaa88709u, 0x88e000bau, 0x27177a6bu, 0xc54ef41cu, 0x63866dcdu, 0x01bde77eu, 0x9ff5612fu,
    0x3e2cdae0u, 0xdc645491u, 0x7a9bce42u, 0x18d347f3u, 0xb70ac1a4u, 0x55423b55u, 0xf379b506u, 0x91b12eb7u,
    0x2fe8a868u, 0xce202219u, 0x6c579bcau, 0x0a8f157bu, 0xa8c68f2cu, 0x46fe08ddu, 0xe535828eu, 0x836cfc3fu,
    0x21a475f0u, 0xbfdbefa1u, 0x5e136952u, 0xfc4ae303u, 0x9a825cb4u, 0x38b9d665u, 0xd6f15016u, 0x7528c9c7u,
    0x13604378u, 0xb197bd29u, 0x4fcf36dau, 0xee06b08bu, 0x8c3e2a3cu, 0x2a75a3edu, 0xc8ad1d9eu, 0x66e4974fu,
    0x051c1100u, 0xa3538ab1u, 0x418b0462u, 0xdfc27e13u, 0x7df9f7c4u, 0x1c317175u, 0xba68eb26u, 0x58a064d7u,
    0xf6d7de88u, 0x950f5839u, 0x3346d1eau, 0xd17e4b9bu, 0x6fb5c54cu, 0x0ded3efdu, 0xac24b8aeu, 0x4a5c325fu,
    0xe893ac10u, 0x86cb25c1u, 0x25029f72u, 0xc33a1923u, 0x617192d4u, 0xffa90c85u, 0x9de08636u, 0x3c17ffe7u,
    0xda4f7998u, 0x7886f349u, 0x16be6cfau, 0xb4f5e6abu, 0x532d605cu, 0xf164da0du, 0x8f9c53beu, 0x2dd3cd6fu,
    0xcc0b4720u, 0x6a42c0d1u, 0x087a3a82u, 0xa6b1b433u, 0x44e92de4u, 0xe320a795u, 0x81582146u, 0x1f8f9af7u,
};

static const uint32_t bshim_189_tab2[96] = {
    0xeaa88709u, 0x88e000bau, 0x27177a6bu, 0xc54ef41cu, 0x63866dcdu, 0x01bde77eu, 0x9ff5612fu, 0x3e2cdae0u,
    0xdc645491u, 0x7a9bce42u, 0x18d347f3u, 0xb70ac1a4u, 0x55423b55u, 0xf379b506u, 0x91b12eb7u, 0x2fe8a868u,
    0xce202219u, 0x6c579bcau, 0x0a8f157bu, 0xa8c68f2cu, 0x46fe08ddu, 0xe535828eu, 0x836cfc3fu, 0x21a475f0u,
    0xbfdbefa1u, 0x5e136952u, 0xfc4ae303u, 0x9a825cb4u, 0x38b9d665u, 0xd6f15016u, 0x7528c9c7u, 0x13604378u,
    0xb197bd29u, 0x4fcf36dau, 0xee06b08bu, 0x8c3e2a3cu, 0x2a75a3edu, 0xc8ad1d9eu, 0x66e4974fu, 0x051c1100u,
    0xa3538ab1u, 0x418b0462u, 0xdfc27e13u, 0x7df9f7c4u, 0x1c317175u, 0xba68eb26u, 0x58a064d7u, 0xf6d7de88u,
    0x950f5839u, 0x3346d1eau, 0xd17e4b9bu, 0x6fb5c54cu, 0x0ded3efdu, 0xac24b8aeu, 0x4a5c325fu, 0xe893ac10u,
    0x86cb25c1u, 0x25029f72u, 0xc33a1923u, 0x617192d4u, 0xffa90c85u, 0x9de08636u, 0x3c17ffe7u, 0xda4f7998u,
    0x7886f349u, 0x16be6cfau, 0xb4f5e6abu, 0x532d605cu, 0xf164da0du, 0x8f9c53beu, 0x2dd3cd6fu, 0xcc0b4720u,
    0x6a42c0d1u, 0x087a3a82u, 0xa6b1b433u, 0x44e92de4u, 0xe320a795u, 0x81582146u, 0x1f8f9af7u, 0xbdc714a8u,
    0x5bfe8e59u, 0xfa36080au, 0x986d81bbu, 0x36a4fb6cu, 0xd4dc751du, 0x7313eeceu, 0x114b687fu, 0xaf82e230u,
    0x4dba5be1u, 0xebf1d592u, 0x8a294f43u, 0x2860c8f4u, 0xc69842a5u, 0x64cfbc56u, 0x03073607u, 0xa13eafb8u,
};

static const uint32_t bshim_189_tab3[96] = {
    0x6c579bcau, 0x0a8f157bu, 0xa8c68f2cu, 0x46fe08ddu, 0xe535828eu, 0x836cfc3fu, 0x21a475f0u, 0xbfdbefa1u,
    0x5e136952u, 0xfc4ae303u, 0x9a825cb4u, 0x38b9d665u, 0xd6f15016u, 0x7528c9c7u, 0x13604378u, 0xb197bd29u,
    0x4fcf36dau, 0xee06b08bu, 0x8c3e2a3cu, 0x2a75a3edu, 0xc8ad1d9eu, 0x66e4974fu, 0x051c1100u, 0xa3538ab1u,
    0x418b0462u, 0xdfc27e13u, 0x7df9f7c4u, 0x1c317175u, 0xba68eb26u, 0x58a064d7u, 0xf6d7de88u, 0x950f5839u,
    0x3346d1eau, 0xd17e4b9bu, 0x6fb5c54cu, 0x0ded3efdu, 0xac24b8aeu, 0x4a5c325fu, 0xe893ac10u, 0x86cb25c1u,
    0x25029f72u, 0xc33a1923u, 0x617192d4u, 0xffa90c85u, 0x9de08636u, 0x3c17ffe7u, 0xda4f7998u, 0x7886f349u,
    0x16be6cfau, 0xb4f5e6abu, 0x532d605cu, 0xf164da0du, 0x8f9c53beu, 0x2dd3cd6fu, 0xcc0b4720u, 0x6a42c0d1u,
    0x087a3a82u, 0xa6b1b433u, 0x44e92de4u, 0xe320a795u, 0x81582146u, 0x1f8f9af7u, 0xbdc714a8u, 0x5bfe8e59u,
    0xfa36080au, 0x986d81bbu, 0x36a4fb6cu, 0xd4dc751du, 0x7313eeceu, 0x114b687fu, 0xaf82e230u, 0x4dba5be1u,
    0xebf1d592u, 0x8a294f43u, 0x2860c8f4u, 0xc69842a5u, 0x64cfbc56u, 0x03073607u, 0xa13eafb8u, 0x3f762969u,
    0xddada31au, 0x7be51ccbu, 0x1a1c967cu, 0xb854102du, 0x568b89deu, 0xf4c3038fu, 0x92fa7d40u, 0x3131f6f1u,
    0xcf6970a2u, 0x6da0ea53u, 0x0bd86404u, 0xaa0fddb5u, 0x48475766u, 0xe67ed117u, 0x84b64ac8u, 0x22edc479u,
};

static const uint32_t bshim_189_tab4[96] = {
    0xee06b08bu, 0x8c3e2a3cu, 0x2a75a3edu, 0xc8ad1d9eu, 0x66e4974fu, 0x051c1100u, 0xa3538ab1u, 0x418b0462u,
    0xdfc27e13u, 0x7df9f7c4u, 0x1c317175u, 0xba68eb26u, 0x58a064d7u, 0xf6d7de88u, 0x950f5839u, 0x3346d1eau,
    0xd17e4b9bu, 0x6fb5c54cu, 0x0ded3efdu, 0xac24b8aeu, 0x4a5c325fu, 0xe893ac10u, 0x86cb25c1u, 0x25029f72u,
    0xc33a1923u, 0x617192d4u, 0xffa90c85u, 0x9de08636u, 0x3c17ffe7u, 0xda4f7998u, 0x7886f349u, 0x16be6cfau,
    0xb4f5e6abu, 0x532d605cu, 0xf164da0du, 0x8f9c53beu, 0x2dd3cd6fu, 0xcc0b4720u, 0x6a42c0d1u, 0x087a3a82u,
    0xa6b1b433u, 0x44e92de4u, 0xe320a795u, 0x81582146u, 0x1f8f9af7u, 0xbdc714a8u, 0x5bfe8e59u, 0xfa36080au,
    0x986d81bbu, 0x36a4fb6cu, 0xd4dc751du, 0x7313eeceu, 0x114b687fu, 0xaf82e230u, 0x4dba5be1u, 0xebf1d592u,
    0x8a294f43u, 0x2860c8f4u, 0xc69842a5u, 0x64cfbc56u, 0x03073607u, 0xa13eafb8u, 0x3f762969u, 0xddada31au,
    0x7be51ccbu, 0x1a1c967cu, 0xb854102du, 0x568b89deu, 0xf4c3038fu, 0x92fa7d40u, 0x3131f6f1u, 0xcf6970a2u,
    0x6da0ea53u, 0x0bd86404u, 0xaa0fddb5u, 0x48475766u, 0xe67ed117u, 0x84b64ac8u, 0x22edc479u, 0xc1253e2au,
    0x5f5cb7dbu, 0xfd94318cu, 0x9bcbab3du, 0x3a0324eeu, 0xd83a9e9fu, 0x76721850u, 0x14a99201u, 0xb2e10bb2u,
    0x51188563u, 0xef4fff14u, 0x8d8778c5u, 0x2bbef276u, 0xc9f66c27u, 0x682de5d8u, 0x06655f89u, 0xa49cd93au,
};

static const uint32_t bshim_189_tab5[96] = {
    0x6fb5c54cu, 0x0ded3efdu, 0xac24b8aeu, 0x4a5c325fu, 0xe893ac10u, 0x86cb25c1u, 0x25029f72u, 0xc33a1923u,
    0x617192d4u, 0xffa90c85u, 0x9de08636u, 0x3c17ffe7u, 0xda4f7998u, 0x7886f349u, 0x16be6cfau, 0xb4f5e6abu,
    0x532d605cu, 0xf164da0du, 0x8f9c53beu, 0x2dd3cd6fu, 0xcc0b4720u, 0x6a42c0d1u, 0x087a3a82u, 0xa6b1b433u,
    0x44e92de4u, 0xe320a795u, 0x81582146u, 0x1f8f9af7u, 0xbdc714a8u, 0x5bfe8e59u, 0xfa36080au, 0x986d81bbu,
    0x36a4fb6cu, 0xd4dc751du, 0x7313eeceu, 0x114b687fu, 0xaf82e230u, 0x4dba5be1u, 0xebf1d592u, 0x8a294f43u,
    0x2860c8f4u, 0xc69842a5u, 0x64cfbc56u, 0x03073607u, 0xa13eafb8u, 0x3f762969u, 0xddada31au, 0x7be51ccbu,
    0x1a1c967cu, 0xb854102du, 0x568b89deu, 0xf4c3038fu, 0x92fa7d40u, 0x3131f6f1u, 0xcf6970a2u, 0x6da0ea53u,
    0x0bd86404u, 0xaa0fddb5u, 0x48475766u, 0xe67ed117u, 0x84b64ac8u, 0x22edc479u, 0xc1253e2au, 0x5f5cb7dbu,
    0xfd94318cu, 0x9bcbab3du, 0x3a0324eeu, 0xd83a9e9fu, 0x76721850u, 0x14a99201u, 0xb2e10bb2u, 0x51188563u,
    0xef4fff14u, 0x8d8778c5u, 0x2bbef276u, 0xc9f66c27u, 0x682de5d8u, 0x06655f89u, 0xa49cd93au, 0x42d452ebu,
    0xe10bcc9cu, 0x7f43464du, 0x1d7abffeu, 0xbbb239afu, 0x59e9b360u, 0xf8212d11u, 0x9658a6c2u, 0x34902073u,
    0xd2c79a24u, 0x70ff13d5u, 0x0f368d86u, 0xad6e0737u, 0x4ba580e8u, 0xe9dcfa99u, 0x8814744au, 0x264bedfbu,
};

static const uint32_t bshim_189_tab6[96] = {
    0xf164da0du, 0x8f9c53beu, 0x2dd3cd6fu, 0xcc0b4720u, 0x6a42c0d1u, 0x087a3a82u, 0xa6b1b433u, 0x44e92de4u,
    0xe320a795u, 0x81582146u, 0x1f8f9af7u, 0xbdc714a8u, 0x5bfe8e59u, 0xfa36080au, 0x986d81bbu, 0x36a4fb6cu,
    0xd4dc751du, 0x7313eeceu, 0x114b687fu, 0xaf82e230u, 0x4dba5be1u, 0xebf1d592u, 0x8a294f43u, 0x2860c8f4u,
    0xc69842a5u, 0x64cfbc56u, 0x03073607u, 0xa13eafb8u, 0x3f762969u, 0xddada31au, 0x7be51ccbu, 0x1a1c967cu,
    0xb854102du, 0x568b89deu, 0xf4c3038fu, 0x92fa7d40u, 0x3131f6f1u, 0xcf6970a2u, 0x6da0ea53u, 0x0bd86404u,
    0xaa0fddb5u, 0x48475766u, 0xe67ed117u, 0x84b64ac8u, 0x22edc479u, 0xc1253e2au, 0x5f5cb7dbu, 0xfd94318cu,
    0x9bcbab3du, 0x3a0324eeu, 0xd83a9e9fu, 0x76721850u, 0x14a99201u, 0xb2e10bb2u, 0x51188563u, 0xef4fff14u,
    0x8d8778c5u, 0x2bbef276u, 0xc9f66c27u, 0x682de5d8u, 0x06655f89u, 0xa49cd93au, 0x42d452ebu, 0xe10bcc9cu,
    0x7f43464du, 0x1d7abffeu, 0xbbb239afu, 0x59e9b360u, 0xf8212d11u, 0x9658a6c2u, 0x34902073u, 0xd2c79a24u,
    0x70ff13d5u, 0x0f368d86u, 0xad6e0737u, 0x4ba580e8u, 0xe9dcfa99u, 0x8814744au, 0x264bedfbu, 0xc48367acu,
    0x62bae15du, 0x00f25b0eu, 0x9f29d4bfu, 0x3d614e70u, 0xdb98c821u, 0x79d041d2u, 0x1807bb83u, 0xb63f3534u,
    0x5476aee5u, 0xf2ae2896u, 0x90e5a247u, 0x2f1d1bf8u, 0xcd5495a9u, 0x6b8c0f5au, 0x09c3890bu, 0xa7fb02bcu,
};

static const uint32_t bshim_189_tab7[96] = {
    0x7313eeceu, 0x114b687fu, 0xaf82e230u, 0x4dba5be1u, 0xebf1d592u, 0x8a294f43u, 0x2860c8f4u, 0xc69842a5u,
    0x64cfbc56u, 0x03073607u, 0xa13eafb8u, 0x3f762969u, 0xddada31au, 0x7be51ccbu, 0x1a1c967cu, 0xb854102du,
    0x568b89deu, 0xf4c3038fu, 0x92fa7d40u, 0x3131f6f1u, 0xcf6970a2u, 0x6da0ea53u, 0x0bd86404u, 0xaa0fddb5u,
    0x48475766u, 0xe67ed117u, 0x84b64ac8u, 0x22edc479u, 0xc1253e2au, 0x5f5cb7dbu, 0xfd94318cu, 0x9bcbab3du,
    0x3a0324eeu, 0xd83a9e9fu, 0x76721850u, 0x14a99201u, 0xb2e10bb2u, 0x51188563u, 0xef4fff14u, 0x8d8778c5u,
    0x2bbef276u, 0xc9f66c27u, 0x682de5d8u, 0x06655f89u, 0xa49cd93au, 0x42d452ebu, 0xe10bcc9cu, 0x7f43464du,
    0x1d7abffeu, 0xbbb239afu, 0x59e9b360u, 0xf8212d11u, 0x9658a6c2u, 0x34902073u, 0xd2c79a24u, 0x70ff13d5u,
    0x0f368d86u, 0xad6e0737u, 0x4ba580e8u, 0xe9dcfa99u, 0x8814744au, 0x264bedfbu, 0xc48367acu, 0x62bae15du,
    0x00f25b0eu, 0x9f29d4bfu, 0x3d614e70u, 0xdb98c821u, 0x79d041d2u, 0x1807bb83u, 0xb63f3534u, 0x5476aee5u,
    0xf2ae2896u, 0x90e5a247u, 0x2f1d1bf8u, 0xcd5495a9u, 0x6b8c0f5au, 0x09c3890bu, 0xa7fb02bcu, 0x46327c6du,
    0xe469f61eu, 0x82a16fcfu, 0x20d8e980u, 0xbf106331u, 0x5d47dce2u, 0xfb7f5693u, 0x99b6d044u, 0x37ee49f5u,
    0xd625c3a6u, 0x745d3d57u, 0x1294b708u, 0xb0cc30b9u, 0x4f03aa6au, 0xed3b241bu, 0x8b729dccu, 0x29aa177du,
};

struct bshim_189_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_189_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_189_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_189_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_189_reset(struct bshim_189_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0016d673u;
    return 0;
}

