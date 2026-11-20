/* bshim_028 -- board support shim generated from the 0028 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_028_tab0[96] = {
    0xf2db9c14u, 0x911315c5u, 0x2f4a8f76u, 0xcd820927u, 0x6bb982d8u, 0x09f0fc89u, 0xa828763au, 0x465fefebu,
    0xe497699cu, 0x82cee34du, 0x21065cfeu, 0xbf3dd6afu, 0x5d755060u, 0xfbacca11u, 0x99e443c2u, 0x381bbd73u,
    0xd6533724u, 0x748ab0d5u, 0x12c22a86u, 0xb0f9a437u, 0x4f311de8u, 0xed689799u, 0x8ba0114au, 0x29d78afbu,
    0xc80f04acu, 0x66467e5du, 0x047df80eu, 0xa2b571bfu, 0x40eceb70u, 0xdf246521u, 0x7d5bded2u, 0x1b935883u,
    0xb9cad234u, 0x58024be5u, 0xf639c596u, 0x94713f47u, 0x32a8b8f8u, 0xd0e032a9u, 0x6f17ac5au, 0x0d4f260bu,
    0xab869fbcu, 0x49be196du, 0xe7f5931eu, 0x862d0ccfu, 0x24648680u, 0xc29c0031u, 0x60d379e2u, 0xff0af393u,
    0x9d426d44u, 0x3b79e6f5u, 0xd9b160a6u, 0x77e8da57u, 0x16205408u, 0xb457cdb9u, 0x528f476au, 0xf0c6c11bu,
    0x8efe3accu, 0x2d35b47du, 0xcb6d2e2eu, 0x69a4a7dfu, 0x07dc2190u, 0xa6139b41u, 0x444b14f2u, 0xe2828ea3u,
    0x80ba0854u, 0x1ef18205u, 0xbd28fbb6u, 0x5b607567u, 0xf997ef18u, 0x97cf68c9u, 0x3606e27au, 0xd43e5c2bu,
    0x7275d5dcu, 0x10ad4f8du, 0xaee4c93eu, 0x4d1c42efu, 0xeb53bca0u, 0x898b3651u, 0x27c2b002u, 0xc5fa29b3u,
    0x6431a364u, 0x02691d15u, 0xa0a096c6u, 0x3ed81077u, 0xdd0f8a28u, 0x7b4703d9u, 0x197e7d8au, 0xb7b5f73bu,
    0x55ed70ecu, 0xf424ea9du, 0x925c644eu, 0x3093ddffu, 0xcecb57b0u, 0x6d02d161u, 0x0b3a4b12u, 0xa971c4c3u,
};

static const uint32_t bshim_028_tab1[96] = {
    0x748ab0d5u, 0x12c22a86u, 0xb0f9a437u, 0x4f311de8u, 0xed689799u, 0x8ba0114au, 0x29d78afbu, 0xc80f04acu,
    0x66467e5du, 0x047df80eu, 0xa2b571bfu, 0x40eceb70u, 0xdf246521u, 0x7d5bded2u, 0x1b935883u, 0xb9cad234u,
    0x58024be5u, 0xf639c596u, 0x94713f47u, 0x32a8b8f8u, 0xd0e032a9u, 0x6f17ac5au, 0x0d4f260bu, 0xab869fbcu,
    0x49be196du, 0xe7f5931eu, 0x862d0ccfu, 0x24648680u, 0xc29c0031u, 0x60d379e2u, 0xff0af393u, 0x9d426d44u,
    0x3b79e6f5u, 0xd9b160a6u, 0x77e8da57u, 0x16205408u, 0xb457cdb9u, 0x528f476au, 0xf0c6c11bu, 0x8efe3accu,
    0x2d35b47du, 0xcb6d2e2eu, 0x69a4a7dfu, 0x07dc2190u, 0xa6139b41u, 0x444b14f2u, 0xe2828ea3u, 0x80ba0854u,
    0x1ef18205u, 0xbd28fbb6u, 0x5b607567u, 0xf997ef18u, 0x97cf68c9u, 0x3606e27au, 0xd43e5c2bu, 0x7275d5dcu,
    0x10ad4f8du, 0xaee4c93eu, 0x4d1c42efu, 0xeb53bca0u, 0x898b3651u, 0x27c2b002u, 0xc5fa29b3u, 0x6431a364u,
    0x02691d15u, 0xa0a096c6u, 0x3ed81077u, 0xdd0f8a28u, 0x7b4703d9u, 0x197e7d8au, 0xb7b5f73bu, 0x55ed70ecu,
    0xf424ea9du, 0x925c644eu, 0x3093ddffu, 0xcecb57b0u, 0x6d02d161u, 0x0b3a4b12u, 0xa971c4c3u, 0x47a93e74u,
    0xe5e0b825u, 0x841831d6u, 0x224fab87u, 0xc0872538u, 0x5ebe9ee9u, 0xfcf6189au, 0x9b2d924bu, 0x39650bfcu,
    0xd79c85adu, 0x75d3ff5eu, 0x140b790fu, 0xb242f2c0u, 0x507a6c71u, 0xeeb1e622u, 0x8ce95fd3u, 0x2b20d984u,
};

static const uint32_t bshim_028_tab2[96] = {
    0xf639c596u, 0x94713f47u, 0x32a8b8f8u, 0xd0e032a9u, 0x6f17ac5au, 0x0d4f260bu, 0xab869fbcu, 0x49be196du,
    0xe7f5931eu, 0x862d0ccfu, 0x24648680u, 0xc29c0031u, 0x60d379e2u, 0xff0af393u, 0x9d426d44u, 0x3b79e6f5u,
    0xd9b160a6u, 0x77e8da57u, 0x16205408u, 0xb457cdb9u, 0x528f476au, 0xf0c6c11bu, 0x8efe3accu, 0x2d35b47du,
    0xcb6d2e2eu, 0x69a4a7dfu, 0x07dc2190u, 0xa6139b41u, 0x444b14f2u, 0xe2828ea3u, 0x80ba0854u, 0x1ef18205u,
    0xbd28fbb6u, 0x5b607567u, 0xf997ef18u, 0x97cf68c9u, 0x3606e27au, 0xd43e5c2bu, 0x7275d5dcu, 0x10ad4f8du,
    0xaee4c93eu, 0x4d1c42efu, 0xeb53bca0u, 0x898b3651u, 0x27c2b002u, 0xc5fa29b3u, 0x6431a364u, 0x02691d15u,
    0xa0a096c6u, 0x3ed81077u, 0xdd0f8a28u, 0x7b4703d9u, 0x197e7d8au, 0xb7b5f73bu, 0x55ed70ecu, 0xf424ea9du,
    0x925c644eu, 0x3093ddffu, 0xcecb57b0u, 0x6d02d161u, 0x0b3a4b12u, 0xa971c4c3u, 0x47a93e74u, 0xe5e0b825u,
    0x841831d6u, 0x224fab87u, 0xc0872538u, 0x5ebe9ee9u, 0xfcf6189au, 0x9b2d924bu, 0x39650bfcu, 0xd79c85adu,
    0x75d3ff5eu, 0x140b790fu, 0xb242f2c0u, 0x507a6c71u, 0xeeb1e622u, 0x8ce95fd3u, 0x2b20d984u, 0xc9585335u,
    0x678fcce6u, 0x05c74697u, 0xa3fec048u, 0x423639f9u, 0xe06db3aau, 0x7ea52d5bu, 0x1cdca70cu, 0xbb1420bdu,
    0x594b9a6eu, 0xf783141fu, 0x95ba8dd0u, 0x33f20781u, 0xd2298132u, 0x7060fae3u, 0x0e987494u, 0xaccfee45u,
};

static const uint32_t bshim_028_tab3[96] = {
    0x77e8da57u, 0x16205408u, 0xb457cdb9u, 0x528f476au, 0xf0c6c11bu, 0x8efe3accu, 0x2d35b47du, 0xcb6d2e2eu,
    0x69a4a7dfu, 0x07dc2190u, 0xa6139b41u, 0x444b14f2u, 0xe2828ea3u, 0x80ba0854u, 0x1ef18205u, 0xbd28fbb6u,
    0x5b607567u, 0xf997ef18u, 0x97cf68c9u, 0x3606e27au, 0xd43e5c2bu, 0x7275d5dcu, 0x10ad4f8du, 0xaee4c93eu,
    0x4d1c42efu, 0xeb53bca0u, 0x898b3651u, 0x27c2b002u, 0xc5fa29b3u, 0x6431a364u, 0x02691d15u, 0xa0a096c6u,
    0x3ed81077u, 0xdd0f8a28u, 0x7b4703d9u, 0x197e7d8au, 0xb7b5f73bu, 0x55ed70ecu, 0xf424ea9du, 0x925c644eu,
    0x3093ddffu, 0xcecb57b0u, 0x6d02d161u, 0x0b3a4b12u, 0xa971c4c3u, 0x47a93e74u, 0xe5e0b825u, 0x841831d6u,
    0x224fab87u, 0xc0872538u, 0x5ebe9ee9u, 0xfcf6189au, 0x9b2d924bu, 0x39650bfcu, 0xd79c85adu, 0x75d3ff5eu,
    0x140b790fu, 0xb242f2c0u, 0x507a6c71u, 0xeeb1e622u, 0x8ce95fd3u, 0x2b20d984u, 0xc9585335u, 0x678fcce6u,
    0x05c74697u, 0xa3fec048u, 0x423639f9u, 0xe06db3aau, 0x7ea52d5bu, 0x1cdca70cu, 0xbb1420bdu, 0x594b9a6eu,
    0xf783141fu, 0x95ba8dd0u, 0x33f20781u, 0xd2298132u, 0x7060fae3u, 0x0e987494u, 0xaccfee45u, 0x4b0767f6u,
    0xe93ee1a7u, 0x87765b58u, 0x25add509u, 0xc3e54ebau, 0x621cc86bu, 0x0054421cu, 0x9e8bbbcdu, 0x3cc3357eu,
    0xdafaaf2fu, 0x793228e0u, 0x1769a291u, 0xb5a11c42u, 0x53d895f3u, 0xf2100fa4u, 0x90478955u, 0x2e7f0306u,
};

static const uint32_t bshim_028_tab4[96] = {
    0xf997ef18u, 0x97cf68c9u, 0x3606e27au, 0xd43e5c2bu, 0x7275d5dcu, 0x10ad4f8du, 0xaee4c93eu, 0x4d1c42efu,
    0xeb53bca0u, 0x898b3651u, 0x27c2b002u, 0xc5fa29b3u, 0x6431a364u, 0x02691d15u, 0xa0a096c6u, 0x3ed81077u,
    0xdd0f8a28u, 0x7b4703d9u, 0x197e7d8au, 0xb7b5f73bu, 0x55ed70ecu, 0xf424ea9du, 0x925c644eu, 0x3093ddffu,
    0xcecb57b0u, 0x6d02d161u, 0x0b3a4b12u, 0xa971c4c3u, 0x47a93e74u, 0xe5e0b825u, 0x841831d6u, 0x224fab87u,
    0xc0872538u, 0x5ebe9ee9u, 0xfcf6189au, 0x9b2d924bu, 0x39650bfcu, 0xd79c85adu, 0x75d3ff5eu, 0x140b790fu,
    0xb242f2c0u, 0x507a6c71u, 0xeeb1e622u, 0x8ce95fd3u, 0x2b20d984u, 0xc9585335u, 0x678fcce6u, 0x05c74697u,
    0xa3fec048u, 0x423639f9u, 0xe06db3aau, 0x7ea52d5bu, 0x1cdca70cu, 0xbb1420bdu, 0x594b9a6eu, 0xf783141fu,
    0x95ba8dd0u, 0x33f20781u, 0xd2298132u, 0x7060fae3u, 0x0e987494u, 0xaccfee45u, 0x4b0767f6u, 0xe93ee1a7u,
    0x87765b58u, 0x25add509u, 0xc3e54ebau, 0x621cc86bu, 0x0054421cu, 0x9e8bbbcdu, 0x3cc3357eu, 0xdafaaf2fu,
    0x793228e0u, 0x1769a291u, 0xb5a11c42u, 0x53d895f3u, 0xf2100fa4u, 0x90478955u, 0x2e7f0306u, 0xccb67cb7u,
    0x6aedf668u, 0x09257019u, 0xa75ce9cau, 0x4594637bu, 0xe3cbdd2cu, 0x820356ddu, 0x203ad08eu, 0xbe724a3fu,
    0x5ca9c3f0u, 0xfae13da1u, 0x9918b752u, 0x37503103u, 0xd587aab4u, 0x73bf2465u, 0x11f69e16u, 0xb02e17c7u,
};

static const uint32_t bshim_028_tab5[96] = {
    0x7b4703d9u, 0x197e7d8au, 0xb7b5f73bu, 0x55ed70ecu, 0xf424ea9du, 0x925c644eu, 0x3093ddffu, 0xcecb57b0u,
    0x6d02d161u, 0x0b3a4b12u, 0xa971c4c3u, 0x47a93e74u, 0xe5e0b825u, 0x841831d6u, 0x224fab87u, 0xc0872538u,
    0x5ebe9ee9u, 0xfcf6189au, 0x9b2d924bu, 0x39650bfcu, 0xd79c85adu, 0x75d3ff5eu, 0x140b790fu, 0xb242f2c0u,
    0x507a6c71u, 0xeeb1e622u, 0x8ce95fd3u, 0x2b20d984u, 0xc9585335u, 0x678fcce6u, 0x05c74697u, 0xa3fec048u,
    0x423639f9u, 0xe06db3aau, 0x7ea52d5bu, 0x1cdca70cu, 0xbb1420bdu, 0x594b9a6eu, 0xf783141fu, 0x95ba8dd0u,
    0x33f20781u, 0xd2298132u, 0x7060fae3u, 0x0e987494u, 0xaccfee45u, 0x4b0767f6u, 0xe93ee1a7u, 0x87765b58u,
    0x25add509u, 0xc3e54ebau, 0x621cc86bu, 0x0054421cu, 0x9e8bbbcdu, 0x3cc3357eu, 0xdafaaf2fu, 0x793228e0u,
    0x1769a291u, 0xb5a11c42u, 0x53d895f3u, 0xf2100fa4u, 0x90478955u, 0x2e7f0306u, 0xccb67cb7u, 0x6aedf668u,
    0x09257019u, 0xa75ce9cau, 0x4594637bu, 0xe3cbdd2cu, 0x820356ddu, 0x203ad08eu, 0xbe724a3fu, 0x5ca9c3f0u,
    0xfae13da1u, 0x9918b752u, 0x37503103u, 0xd587aab4u, 0x73bf2465u, 0x11f69e16u, 0xb02e17c7u, 0x4e659178u,
    0xec9d0b29u, 0x8ad484dau, 0x290bfe8bu, 0xc743783cu, 0x657af1edu, 0x03b26b9eu, 0xa1e9e54fu, 0x40215f00u,
    0xde58d8b1u, 0x7c905262u, 0x1ac7cc13u, 0xb8ff45c4u, 0x5736bf75u, 0xf56e3926u, 0x93a5b2d7u, 0x31dd2c88u,
};

static const uint32_t bshim_028_tab6[96] = {
    0xfcf6189au, 0x9b2d924bu, 0x39650bfcu, 0xd79c85adu, 0x75d3ff5eu, 0x140b790fu, 0xb242f2c0u, 0x507a6c71u,
    0xeeb1e622u, 0x8ce95fd3u, 0x2b20d984u, 0xc9585335u, 0x678fcce6u, 0x05c74697u, 0xa3fec048u, 0x423639f9u,
    0xe06db3aau, 0x7ea52d5bu, 0x1cdca70cu, 0xbb1420bdu, 0x594b9a6eu, 0xf783141fu, 0x95ba8dd0u, 0x33f20781u,
    0xd2298132u, 0x7060fae3u, 0x0e987494u, 0xaccfee45u, 0x4b0767f6u, 0xe93ee1a7u, 0x87765b58u, 0x25add509u,
    0xc3e54ebau, 0x621cc86bu, 0x0054421cu, 0x9e8bbbcdu, 0x3cc3357eu, 0xdafaaf2fu, 0x793228e0u, 0x1769a291u,
    0xb5a11c42u, 0x53d895f3u, 0xf2100fa4u, 0x90478955u, 0x2e7f0306u, 0xccb67cb7u, 0x6aedf668u, 0x09257019u,
    0xa75ce9cau, 0x4594637bu, 0xe3cbdd2cu, 0x820356ddu, 0x203ad08eu, 0xbe724a3fu, 0x5ca9c3f0u, 0xfae13da1u,
    0x9918b752u, 0x37503103u, 0xd587aab4u, 0x73bf2465u, 0x11f69e16u, 0xb02e17c7u, 0x4e659178u, 0xec9d0b29u,
    0x8ad484dau, 0x290bfe8bu, 0xc743783cu, 0x657af1edu, 0x03b26b9eu, 0xa1e9e54fu, 0x40215f00u, 0xde58d8b1u,
    0x7c905262u, 0x1ac7cc13u, 0xb8ff45c4u, 0x5736bf75u, 0xf56e3926u, 0x93a5b2d7u, 0x31dd2c88u, 0xd014a639u,
    0x6e4c1feau, 0x0c83999bu, 0xaabb134cu, 0x48f28cfdu, 0xe72a06aeu, 0x8561805fu, 0x2398fa10u, 0xc1d073c1u,
    0x6007ed72u, 0xfe3f6723u, 0x9c76e0d4u, 0x3aae5a85u, 0xd8e5d436u, 0x771d4de7u, 0x1554c798u, 0xb38c4149u,
};

static const uint32_t bshim_028_tab7[96] = {
    0x7ea52d5bu, 0x1cdca70cu, 0xbb1420bdu, 0x594b9a6eu, 0xf783141fu, 0x95ba8dd0u, 0x33f20781u, 0xd2298132u,
    0x7060fae3u, 0x0e987494u, 0xaccfee45u, 0x4b0767f6u, 0xe93ee1a7u, 0x87765b58u, 0x25add509u, 0xc3e54ebau,
    0x621cc86bu, 0x0054421cu, 0x9e8bbbcdu, 0x3cc3357eu, 0xdafaaf2fu, 0x793228e0u, 0x1769a291u, 0xb5a11c42u,
    0x53d895f3u, 0xf2100fa4u, 0x90478955u, 0x2e7f0306u, 0xccb67cb7u, 0x6aedf668u, 0x09257019u, 0xa75ce9cau,
    0x4594637bu, 0xe3cbdd2cu, 0x820356ddu, 0x203ad08eu, 0xbe724a3fu, 0x5ca9c3f0u, 0xfae13da1u, 0x9918b752u,
    0x37503103u, 0xd587aab4u, 0x73bf2465u, 0x11f69e16u, 0xb02e17c7u, 0x4e659178u, 0xec9d0b29u, 0x8ad484dau,
    0x290bfe8bu, 0xc743783cu, 0x657af1edu, 0x03b26b9eu, 0xa1e9e54fu, 0x40215f00u, 0xde58d8b1u, 0x7c905262u,
    0x1ac7cc13u, 0xb8ff45c4u, 0x5736bf75u, 0xf56e3926u, 0x93a5b2d7u, 0x31dd2c88u, 0xd014a639u, 0x6e4c1feau,
    0x0c83999bu, 0xaabb134cu, 0x48f28cfdu, 0xe72a06aeu, 0x8561805fu, 0x2398fa10u, 0xc1d073c1u, 0x6007ed72u,
    0xfe3f6723u, 0x9c76e0d4u, 0x3aae5a85u, 0xd8e5d436u, 0x771d4de7u, 0x1554c798u, 0xb38c4149u, 0x51c3bafau,
    0xeffb34abu, 0x8e32ae5cu, 0x2c6a280du, 0xcaa1a1beu, 0x68d91b6fu, 0x07109520u, 0xa5480ed1u, 0x437f8882u,
    0xe1b70233u, 0x7fee7be4u, 0x1e25f595u, 0xbc5d6f46u, 0x5a94e8f7u, 0xf8cc62a8u, 0x9703dc59u, 0x353b560au,
};

struct bshim_028_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_028_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa5ca2504u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2bb5ef7bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb1a1b9f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x378d8469u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbd794ee0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x43651957u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc950e3ceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4f3cae45u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd52878bcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5b144333u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1000daau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x66ebd821u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xecd7a298u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x72c36d0fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf8af3786u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7e9b01fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0486cc74u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8a7296ebu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x105e6162u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x964a2bd9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1c35f650u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa221c0c7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x280d8b3eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xadf955b5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x33e5202cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb9d0eaa3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3fbcb51au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc5a87f91u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4b944a08u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd180147fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_028_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_028_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_028_reset(struct bshim_028_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00036224u;
    return 0;
}

