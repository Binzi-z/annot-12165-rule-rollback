/* bshim_185 -- board support shim generated from the 0185 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_185_tab0[96] = {
    0x0dbd473bu, 0xabf4c0ecu, 0x4a2c3a9du, 0xe863b44eu, 0x869b2dffu, 0x24d2a7b0u, 0xc30a2161u, 0x61419b12u,
    0xff7914c3u, 0x9db08e74u, 0x3be80825u, 0xda1f81d6u, 0x7856fb87u, 0x168e7538u, 0xb4c5eee9u, 0x52fd689au,
    0xf134e24bu, 0x8f6c5bfcu, 0x2da3d5adu, 0xcbdb4f5eu, 0x6a12c90fu, 0x084a42c0u, 0xa681bc71u, 0x44b93622u,
    0xe2f0afd3u, 0x81282984u, 0x1f5fa335u, 0xbd971ce6u, 0x5bce9697u, 0xfa061048u, 0x983d89f9u, 0x367503aau,
    0xd4ac7d5bu, 0x72e3f70cu, 0x111b70bdu, 0xaf52ea6eu, 0x4d8a641fu, 0xebc1ddd0u, 0x89f95781u, 0x2830d132u,
    0xc6684ae3u, 0x649fc494u, 0x02d73e45u, 0xa10eb7f6u, 0x3f4631a7u, 0xdd7dab58u, 0x7bb52509u, 0x19ec9ebau,
    0xb824186bu, 0x565b921cu, 0xf4930bcdu, 0x92ca857eu, 0x3101ff2fu, 0xcf3978e0u, 0x6d70f291u, 0x0ba86c42u,
    0xa9dfe5f3u, 0x48175fa4u, 0xe64ed955u, 0x84865306u, 0x22bdccb7u, 0xc0f54668u, 0x5f2cc019u, 0xfd6439cau,
    0x9b9bb37bu, 0x39d32d2cu, 0xd80aa6ddu, 0x7642208eu, 0x14799a3fu, 0xb2b113f0u, 0x50e88da1u, 0xef200752u,
    0x8d578103u, 0x2b8efab4u, 0xc9c67465u, 0x67fdee16u, 0x063567c7u, 0xa46ce178u, 0x42a45b29u, 0xe0dbd4dau,
    0x7f134e8bu, 0x1d4ac83cu, 0xbb8241edu, 0x59b9bb9eu, 0xf7f1354fu, 0x9628af00u, 0x346028b1u, 0xd297a262u,
    0x70cf1c13u, 0x0f0695c4u, 0xad3e0f75u, 0x4b758926u, 0xe9ad02d7u, 0x87e47c88u, 0x261bf639u, 0xc4536feau,
};

static const uint32_t bshim_185_tab1[96] = {
    0x8f6c5bfcu, 0x2da3d5adu, 0xcbdb4f5eu, 0x6a12c90fu, 0x084a42c0u, 0xa681bc71u, 0x44b93622u, 0xe2f0afd3u,
    0x81282984u, 0x1f5fa335u, 0xbd971ce6u, 0x5bce9697u, 0xfa061048u, 0x983d89f9u, 0x367503aau, 0xd4ac7d5bu,
    0x72e3f70cu, 0x111b70bdu, 0xaf52ea6eu, 0x4d8a641fu, 0xebc1ddd0u, 0x89f95781u, 0x2830d132u, 0xc6684ae3u,
    0x649fc494u, 0x02d73e45u, 0xa10eb7f6u, 0x3f4631a7u, 0xdd7dab58u, 0x7bb52509u, 0x19ec9ebau, 0xb824186bu,
    0x565b921cu, 0xf4930bcdu, 0x92ca857eu, 0x3101ff2fu, 0xcf3978e0u, 0x6d70f291u, 0x0ba86c42u, 0xa9dfe5f3u,
    0x48175fa4u, 0xe64ed955u, 0x84865306u, 0x22bdccb7u, 0xc0f54668u, 0x5f2cc019u, 0xfd6439cau, 0x9b9bb37bu,
    0x39d32d2cu, 0xd80aa6ddu, 0x7642208eu, 0x14799a3fu, 0xb2b113f0u, 0x50e88da1u, 0xef200752u, 0x8d578103u,
    0x2b8efab4u, 0xc9c67465u, 0x67fdee16u, 0x063567c7u, 0xa46ce178u, 0x42a45b29u, 0xe0dbd4dau, 0x7f134e8bu,
    0x1d4ac83cu, 0xbb8241edu, 0x59b9bb9eu, 0xf7f1354fu, 0x9628af00u, 0x346028b1u, 0xd297a262u, 0x70cf1c13u,
    0x0f0695c4u, 0xad3e0f75u, 0x4b758926u, 0xe9ad02d7u, 0x87e47c88u, 0x261bf639u, 0xc4536feau, 0x628ae99bu,
    0x00c2634cu, 0x9ef9dcfdu, 0x3d3156aeu, 0xdb68d05fu, 0x79a04a10u, 0x17d7c3c1u, 0xb60f3d72u, 0x5446b723u,
    0xf27e30d4u, 0x90b5aa85u, 0x2eed2436u, 0xcd249de7u, 0x6b5c1798u, 0x09939149u, 0xa7cb0afau, 0x460284abu,
};

static const uint32_t bshim_185_tab2[96] = {
    0x111b70bdu, 0xaf52ea6eu, 0x4d8a641fu, 0xebc1ddd0u, 0x89f95781u, 0x2830d132u, 0xc6684ae3u, 0x649fc494u,
    0x02d73e45u, 0xa10eb7f6u, 0x3f4631a7u, 0xdd7dab58u, 0x7bb52509u, 0x19ec9ebau, 0xb824186bu, 0x565b921cu,
    0xf4930bcdu, 0x92ca857eu, 0x3101ff2fu, 0xcf3978e0u, 0x6d70f291u, 0x0ba86c42u, 0xa9dfe5f3u, 0x48175fa4u,
    0xe64ed955u, 0x84865306u, 0x22bdccb7u, 0xc0f54668u, 0x5f2cc019u, 0xfd6439cau, 0x9b9bb37bu, 0x39d32d2cu,
    0xd80aa6ddu, 0x7642208eu, 0x14799a3fu, 0xb2b113f0u, 0x50e88da1u, 0xef200752u, 0x8d578103u, 0x2b8efab4u,
    0xc9c67465u, 0x67fdee16u, 0x063567c7u, 0xa46ce178u, 0x42a45b29u, 0xe0dbd4dau, 0x7f134e8bu, 0x1d4ac83cu,
    0xbb8241edu, 0x59b9bb9eu, 0xf7f1354fu, 0x9628af00u, 0x346028b1u, 0xd297a262u, 0x70cf1c13u, 0x0f0695c4u,
    0xad3e0f75u, 0x4b758926u, 0xe9ad02d7u, 0x87e47c88u, 0x261bf639u, 0xc4536feau, 0x628ae99bu, 0x00c2634cu,
    0x9ef9dcfdu, 0x3d3156aeu, 0xdb68d05fu, 0x79a04a10u, 0x17d7c3c1u, 0xb60f3d72u, 0x5446b723u, 0xf27e30d4u,
    0x90b5aa85u, 0x2eed2436u, 0xcd249de7u, 0x6b5c1798u, 0x09939149u, 0xa7cb0afau, 0x460284abu, 0xe439fe5cu,
    0x8271780du, 0x20a8f1beu, 0xbee06b6fu, 0x5d17e520u, 0xfb4f5ed1u, 0x9986d882u, 0x37be5233u, 0xd5f5cbe4u,
    0x742d4595u, 0x1264bf46u, 0xb09c38f7u, 0x4ed3b2a8u, 0xed0b2c59u, 0x8b42a60au, 0x297a1fbbu, 0xc7b1996cu,
};

static const uint32_t bshim_185_tab3[96] = {
    0x92ca857eu, 0x3101ff2fu, 0xcf3978e0u, 0x6d70f291u, 0x0ba86c42u, 0xa9dfe5f3u, 0x48175fa4u, 0xe64ed955u,
    0x84865306u, 0x22bdccb7u, 0xc0f54668u, 0x5f2cc019u, 0xfd6439cau, 0x9b9bb37bu, 0x39d32d2cu, 0xd80aa6ddu,
    0x7642208eu, 0x14799a3fu, 0xb2b113f0u, 0x50e88da1u, 0xef200752u, 0x8d578103u, 0x2b8efab4u, 0xc9c67465u,
    0x67fdee16u, 0x063567c7u, 0xa46ce178u, 0x42a45b29u, 0xe0dbd4dau, 0x7f134e8bu, 0x1d4ac83cu, 0xbb8241edu,
    0x59b9bb9eu, 0xf7f1354fu, 0x9628af00u, 0x346028b1u, 0xd297a262u, 0x70cf1c13u, 0x0f0695c4u, 0xad3e0f75u,
    0x4b758926u, 0xe9ad02d7u, 0x87e47c88u, 0x261bf639u, 0xc4536feau, 0x628ae99bu, 0x00c2634cu, 0x9ef9dcfdu,
    0x3d3156aeu, 0xdb68d05fu, 0x79a04a10u, 0x17d7c3c1u, 0xb60f3d72u, 0x5446b723u, 0xf27e30d4u, 0x90b5aa85u,
    0x2eed2436u, 0xcd249de7u, 0x6b5c1798u, 0x09939149u, 0xa7cb0afau, 0x460284abu, 0xe439fe5cu, 0x8271780du,
    0x20a8f1beu, 0xbee06b6fu, 0x5d17e520u, 0xfb4f5ed1u, 0x9986d882u, 0x37be5233u, 0xd5f5cbe4u, 0x742d4595u,
    0x1264bf46u, 0xb09c38f7u, 0x4ed3b2a8u, 0xed0b2c59u, 0x8b42a60au, 0x297a1fbbu, 0xc7b1996cu, 0x65e9131du,
    0x04208cceu, 0xa258067fu, 0x408f8030u, 0xdec6f9e1u, 0x7cfe7392u, 0x1b35ed43u, 0xb96d66f4u, 0x57a4e0a5u,
    0xf5dc5a56u, 0x9413d407u, 0x324b4db8u, 0xd082c769u, 0x6eba411au, 0x0cf1bacbu, 0xab29347cu, 0x4960ae2du,
};

static const uint32_t bshim_185_tab4[96] = {
    0x14799a3fu, 0xb2b113f0u, 0x50e88da1u, 0xef200752u, 0x8d578103u, 0x2b8efab4u, 0xc9c67465u, 0x67fdee16u,
    0x063567c7u, 0xa46ce178u, 0x42a45b29u, 0xe0dbd4dau, 0x7f134e8bu, 0x1d4ac83cu, 0xbb8241edu, 0x59b9bb9eu,
    0xf7f1354fu, 0x9628af00u, 0x346028b1u, 0xd297a262u, 0x70cf1c13u, 0x0f0695c4u, 0xad3e0f75u, 0x4b758926u,
    0xe9ad02d7u, 0x87e47c88u, 0x261bf639u, 0xc4536feau, 0x628ae99bu, 0x00c2634cu, 0x9ef9dcfdu, 0x3d3156aeu,
    0xdb68d05fu, 0x79a04a10u, 0x17d7c3c1u, 0xb60f3d72u, 0x5446b723u, 0xf27e30d4u, 0x90b5aa85u, 0x2eed2436u,
    0xcd249de7u, 0x6b5c1798u, 0x09939149u, 0xa7cb0afau, 0x460284abu, 0xe439fe5cu, 0x8271780du, 0x20a8f1beu,
    0xbee06b6fu, 0x5d17e520u, 0xfb4f5ed1u, 0x9986d882u, 0x37be5233u, 0xd5f5cbe4u, 0x742d4595u, 0x1264bf46u,
    0xb09c38f7u, 0x4ed3b2a8u, 0xed0b2c59u, 0x8b42a60au, 0x297a1fbbu, 0xc7b1996cu, 0x65e9131du, 0x04208cceu,
    0xa258067fu, 0x408f8030u, 0xdec6f9e1u, 0x7cfe7392u, 0x1b35ed43u, 0xb96d66f4u, 0x57a4e0a5u, 0xf5dc5a56u,
    0x9413d407u, 0x324b4db8u, 0xd082c769u, 0x6eba411au, 0x0cf1bacbu, 0xab29347cu, 0x4960ae2du, 0xe79827deu,
    0x85cfa18fu, 0x24071b40u, 0xc23e94f1u, 0x60760ea2u, 0xfead8853u, 0x9ce50204u, 0x3b1c7bb5u, 0xd953f566u,
    0x778b6f17u, 0x15c2e8c8u, 0xb3fa6279u, 0x5231dc2au, 0xf06955dbu, 0x8ea0cf8cu, 0x2cd8493du, 0xcb0fc2eeu,
};

static const uint32_t bshim_185_tab5[96] = {
    0x9628af00u, 0x346028b1u, 0xd297a262u, 0x70cf1c13u, 0x0f0695c4u, 0xad3e0f75u, 0x4b758926u, 0xe9ad02d7u,
    0x87e47c88u, 0x261bf639u, 0xc4536feau, 0x628ae99bu, 0x00c2634cu, 0x9ef9dcfdu, 0x3d3156aeu, 0xdb68d05fu,
    0x79a04a10u, 0x17d7c3c1u, 0xb60f3d72u, 0x5446b723u, 0xf27e30d4u, 0x90b5aa85u, 0x2eed2436u, 0xcd249de7u,
    0x6b5c1798u, 0x09939149u, 0xa7cb0afau, 0x460284abu, 0xe439fe5cu, 0x8271780du, 0x20a8f1beu, 0xbee06b6fu,
    0x5d17e520u, 0xfb4f5ed1u, 0x9986d882u, 0x37be5233u, 0xd5f5cbe4u, 0x742d4595u, 0x1264bf46u, 0xb09c38f7u,
    0x4ed3b2a8u, 0xed0b2c59u, 0x8b42a60au, 0x297a1fbbu, 0xc7b1996cu, 0x65e9131du, 0x04208cceu, 0xa258067fu,
    0x408f8030u, 0xdec6f9e1u, 0x7cfe7392u, 0x1b35ed43u, 0xb96d66f4u, 0x57a4e0a5u, 0xf5dc5a56u, 0x9413d407u,
    0x324b4db8u, 0xd082c769u, 0x6eba411au, 0x0cf1bacbu, 0xab29347cu, 0x4960ae2du, 0xe79827deu, 0x85cfa18fu,
    0x24071b40u, 0xc23e94f1u, 0x60760ea2u, 0xfead8853u, 0x9ce50204u, 0x3b1c7bb5u, 0xd953f566u, 0x778b6f17u,
    0x15c2e8c8u, 0xb3fa6279u, 0x5231dc2au, 0xf06955dbu, 0x8ea0cf8cu, 0x2cd8493du, 0xcb0fc2eeu, 0x69473c9fu,
    0x077eb650u, 0xa5b63001u, 0x43eda9b2u, 0xe2252363u, 0x805c9d14u, 0x1e9416c5u, 0xbccb9076u, 0x5b030a27u,
    0xf93a83d8u, 0x9771fd89u, 0x35a9773au, 0xd3e0f0ebu, 0x72186a9cu, 0x104fe44du, 0xae875dfeu, 0x4cbed7afu,
};

static const uint32_t bshim_185_tab6[96] = {
    0x17d7c3c1u, 0xb60f3d72u, 0x5446b723u, 0xf27e30d4u, 0x90b5aa85u, 0x2eed2436u, 0xcd249de7u, 0x6b5c1798u,
    0x09939149u, 0xa7cb0afau, 0x460284abu, 0xe439fe5cu, 0x8271780du, 0x20a8f1beu, 0xbee06b6fu, 0x5d17e520u,
    0xfb4f5ed1u, 0x9986d882u, 0x37be5233u, 0xd5f5cbe4u, 0x742d4595u, 0x1264bf46u, 0xb09c38f7u, 0x4ed3b2a8u,
    0xed0b2c59u, 0x8b42a60au, 0x297a1fbbu, 0xc7b1996cu, 0x65e9131du, 0x04208cceu, 0xa258067fu, 0x408f8030u,
    0xdec6f9e1u, 0x7cfe7392u, 0x1b35ed43u, 0xb96d66f4u, 0x57a4e0a5u, 0xf5dc5a56u, 0x9413d407u, 0x324b4db8u,
    0xd082c769u, 0x6eba411au, 0x0cf1bacbu, 0xab29347cu, 0x4960ae2du, 0xe79827deu, 0x85cfa18fu, 0x24071b40u,
    0xc23e94f1u, 0x60760ea2u, 0xfead8853u, 0x9ce50204u, 0x3b1c7bb5u, 0xd953f566u, 0x778b6f17u, 0x15c2e8c8u,
    0xb3fa6279u, 0x5231dc2au, 0xf06955dbu, 0x8ea0cf8cu, 0x2cd8493du, 0xcb0fc2eeu, 0x69473c9fu, 0x077eb650u,
    0xa5b63001u, 0x43eda9b2u, 0xe2252363u, 0x805c9d14u, 0x1e9416c5u, 0xbccb9076u, 0x5b030a27u, 0xf93a83d8u,
    0x9771fd89u, 0x35a9773au, 0xd3e0f0ebu, 0x72186a9cu, 0x104fe44du, 0xae875dfeu, 0x4cbed7afu, 0xeaf65160u,
    0x892dcb11u, 0x276544c2u, 0xc59cbe73u, 0x63d43824u, 0x020bb1d5u, 0xa0432b86u, 0x3e7aa537u, 0xdcb21ee8u,
    0x7ae99899u, 0x1921124au, 0xb7588bfbu, 0x559005acu, 0xf3c77f5du, 0x91fef90eu, 0x303672bfu, 0xce6dec70u,
};

static const uint32_t bshim_185_tab7[96] = {
    0x9986d882u, 0x37be5233u, 0xd5f5cbe4u, 0x742d4595u, 0x1264bf46u, 0xb09c38f7u, 0x4ed3b2a8u, 0xed0b2c59u,
    0x8b42a60au, 0x297a1fbbu, 0xc7b1996cu, 0x65e9131du, 0x04208cceu, 0xa258067fu, 0x408f8030u, 0xdec6f9e1u,
    0x7cfe7392u, 0x1b35ed43u, 0xb96d66f4u, 0x57a4e0a5u, 0xf5dc5a56u, 0x9413d407u, 0x324b4db8u, 0xd082c769u,
    0x6eba411au, 0x0cf1bacbu, 0xab29347cu, 0x4960ae2du, 0xe79827deu, 0x85cfa18fu, 0x24071b40u, 0xc23e94f1u,
    0x60760ea2u, 0xfead8853u, 0x9ce50204u, 0x3b1c7bb5u, 0xd953f566u, 0x778b6f17u, 0x15c2e8c8u, 0xb3fa6279u,
    0x5231dc2au, 0xf06955dbu, 0x8ea0cf8cu, 0x2cd8493du, 0xcb0fc2eeu, 0x69473c9fu, 0x077eb650u, 0xa5b63001u,
    0x43eda9b2u, 0xe2252363u, 0x805c9d14u, 0x1e9416c5u, 0xbccb9076u, 0x5b030a27u, 0xf93a83d8u, 0x9771fd89u,
    0x35a9773au, 0xd3e0f0ebu, 0x72186a9cu, 0x104fe44du, 0xae875dfeu, 0x4cbed7afu, 0xeaf65160u, 0x892dcb11u,
    0x276544c2u, 0xc59cbe73u, 0x63d43824u, 0x020bb1d5u, 0xa0432b86u, 0x3e7aa537u, 0xdcb21ee8u, 0x7ae99899u,
    0x1921124au, 0xb7588bfbu, 0x559005acu, 0xf3c77f5du, 0x91fef90eu, 0x303672bfu, 0xce6dec70u, 0x6ca56621u,
    0x0adcdfd2u, 0xa9145983u, 0x474bd334u, 0xe5834ce5u, 0x83bac696u, 0x21f24047u, 0xc029b9f8u, 0x5e6133a9u,
    0xfc98ad5au, 0x9ad0270bu, 0x3907a0bcu, 0xd73f1a6du, 0x7576941eu, 0x13ae0dcfu, 0xb1e58780u, 0x501d0131u,
};

struct bshim_185_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_185_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_185_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_185_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_185_reset(struct bshim_185_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00165ab7u;
    return 0;
}

