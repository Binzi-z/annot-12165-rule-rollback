/* bshim_268 -- board support shim generated from the 0268 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_268_tab0[96] = {
    0xefecd5e4u, 0x8e244f95u, 0x2c5bc946u, 0xca9342f7u, 0x68cabca8u, 0x07023659u, 0xa539b00au, 0x437129bbu,
    0xe1a8a36cu, 0x7fe01d1du, 0x1e1796ceu, 0xbc4f107fu, 0x5a868a30u, 0xf8be03e1u, 0x96f57d92u, 0x352cf743u,
    0xd36470f4u, 0x719beaa5u, 0x0fd36456u, 0xae0ade07u, 0x4c4257b8u, 0xea79d169u, 0x88b14b1au, 0x26e8c4cbu,
    0xc5203e7cu, 0x6357b82du, 0x018f31deu, 0x9fc6ab8fu, 0x3dfe2540u, 0xdc359ef1u, 0x7a6d18a2u, 0x18a49253u,
    0xb6dc0c04u, 0x551385b5u, 0xf34aff66u, 0x91827917u, 0x2fb9f2c8u, 0xcdf16c79u, 0x6c28e62au, 0x0a605fdbu,
    0xa897d98cu, 0x46cf533du, 0xe506cceeu, 0x833e469fu, 0x2175c050u, 0xbfad3a01u, 0x5de4b3b2u, 0xfc1c2d63u,
    0x9a53a714u, 0x388b20c5u, 0xd6c29a76u, 0x74fa1427u, 0x13318dd8u, 0xb1690789u, 0x4fa0813au, 0xedd7faebu,
    0x8c0f749cu, 0x2a46ee4du, 0xc87e67feu, 0x66b5e1afu, 0x04ed5b60u, 0xa324d511u, 0x415c4ec2u, 0xdf93c873u,
    0x7dcb4224u, 0x1c02bbd5u, 0xba3a3586u, 0x5871af37u, 0xf6a928e8u, 0x94e0a299u, 0x33181c4au, 0xd14f95fbu,
    0x6f870facu, 0x0dbe895du, 0xabf6030eu, 0x4a2d7cbfu, 0xe864f670u, 0x869c7021u, 0x24d3e9d2u, 0xc30b6383u,
    0x6142dd34u, 0xff7a56e5u, 0x9db1d096u, 0x3be94a47u, 0xda20c3f8u, 0x78583da9u, 0x168fb75au, 0xb4c7310bu,
    0x52feaabcu, 0xf136246du, 0x8f6d9e1eu, 0x2da517cfu, 0xcbdc9180u, 0x6a140b31u, 0x084b84e2u, 0xa682fe93u,
};

static const uint32_t bshim_268_tab1[96] = {
    0x719beaa5u, 0x0fd36456u, 0xae0ade07u, 0x4c4257b8u, 0xea79d169u, 0x88b14b1au, 0x26e8c4cbu, 0xc5203e7cu,
    0x6357b82du, 0x018f31deu, 0x9fc6ab8fu, 0x3dfe2540u, 0xdc359ef1u, 0x7a6d18a2u, 0x18a49253u, 0xb6dc0c04u,
    0x551385b5u, 0xf34aff66u, 0x91827917u, 0x2fb9f2c8u, 0xcdf16c79u, 0x6c28e62au, 0x0a605fdbu, 0xa897d98cu,
    0x46cf533du, 0xe506cceeu, 0x833e469fu, 0x2175c050u, 0xbfad3a01u, 0x5de4b3b2u, 0xfc1c2d63u, 0x9a53a714u,
    0x388b20c5u, 0xd6c29a76u, 0x74fa1427u, 0x13318dd8u, 0xb1690789u, 0x4fa0813au, 0xedd7faebu, 0x8c0f749cu,
    0x2a46ee4du, 0xc87e67feu, 0x66b5e1afu, 0x04ed5b60u, 0xa324d511u, 0x415c4ec2u, 0xdf93c873u, 0x7dcb4224u,
    0x1c02bbd5u, 0xba3a3586u, 0x5871af37u, 0xf6a928e8u, 0x94e0a299u, 0x33181c4au, 0xd14f95fbu, 0x6f870facu,
    0x0dbe895du, 0xabf6030eu, 0x4a2d7cbfu, 0xe864f670u, 0x869c7021u, 0x24d3e9d2u, 0xc30b6383u, 0x6142dd34u,
    0xff7a56e5u, 0x9db1d096u, 0x3be94a47u, 0xda20c3f8u, 0x78583da9u, 0x168fb75au, 0xb4c7310bu, 0x52feaabcu,
    0xf136246du, 0x8f6d9e1eu, 0x2da517cfu, 0xcbdc9180u, 0x6a140b31u, 0x084b84e2u, 0xa682fe93u, 0x44ba7844u,
    0xe2f1f1f5u, 0x81296ba6u, 0x1f60e557u, 0xbd985f08u, 0x5bcfd8b9u, 0xfa07526au, 0x983ecc1bu, 0x367645ccu,
    0xd4adbf7du, 0x72e5392eu, 0x111cb2dfu, 0xaf542c90u, 0x4d8ba641u, 0xebc31ff2u, 0x89fa99a3u, 0x28321354u,
};

static const uint32_t bshim_268_tab2[96] = {
    0xf34aff66u, 0x91827917u, 0x2fb9f2c8u, 0xcdf16c79u, 0x6c28e62au, 0x0a605fdbu, 0xa897d98cu, 0x46cf533du,
    0xe506cceeu, 0x833e469fu, 0x2175c050u, 0xbfad3a01u, 0x5de4b3b2u, 0xfc1c2d63u, 0x9a53a714u, 0x388b20c5u,
    0xd6c29a76u, 0x74fa1427u, 0x13318dd8u, 0xb1690789u, 0x4fa0813au, 0xedd7faebu, 0x8c0f749cu, 0x2a46ee4du,
    0xc87e67feu, 0x66b5e1afu, 0x04ed5b60u, 0xa324d511u, 0x415c4ec2u, 0xdf93c873u, 0x7dcb4224u, 0x1c02bbd5u,
    0xba3a3586u, 0x5871af37u, 0xf6a928e8u, 0x94e0a299u, 0x33181c4au, 0xd14f95fbu, 0x6f870facu, 0x0dbe895du,
    0xabf6030eu, 0x4a2d7cbfu, 0xe864f670u, 0x869c7021u, 0x24d3e9d2u, 0xc30b6383u, 0x6142dd34u, 0xff7a56e5u,
    0x9db1d096u, 0x3be94a47u, 0xda20c3f8u, 0x78583da9u, 0x168fb75au, 0xb4c7310bu, 0x52feaabcu, 0xf136246du,
    0x8f6d9e1eu, 0x2da517cfu, 0xcbdc9180u, 0x6a140b31u, 0x084b84e2u, 0xa682fe93u, 0x44ba7844u, 0xe2f1f1f5u,
    0x81296ba6u, 0x1f60e557u, 0xbd985f08u, 0x5bcfd8b9u, 0xfa07526au, 0x983ecc1bu, 0x367645ccu, 0xd4adbf7du,
    0x72e5392eu, 0x111cb2dfu, 0xaf542c90u, 0x4d8ba641u, 0xebc31ff2u, 0x89fa99a3u, 0x28321354u, 0xc6698d05u,
    0x64a106b6u, 0x02d88067u, 0xa10ffa18u, 0x3f4773c9u, 0xdd7eed7au, 0x7bb6672bu, 0x19ede0dcu, 0xb8255a8du,
    0x565cd43eu, 0xf4944defu, 0x92cbc7a0u, 0x31034151u, 0xcf3abb02u, 0x6d7234b3u, 0x0ba9ae64u, 0xa9e12815u,
};

static const uint32_t bshim_268_tab3[96] = {
    0x74fa1427u, 0x13318dd8u, 0xb1690789u, 0x4fa0813au, 0xedd7faebu, 0x8c0f749cu, 0x2a46ee4du, 0xc87e67feu,
    0x66b5e1afu, 0x04ed5b60u, 0xa324d511u, 0x415c4ec2u, 0xdf93c873u, 0x7dcb4224u, 0x1c02bbd5u, 0xba3a3586u,
    0x5871af37u, 0xf6a928e8u, 0x94e0a299u, 0x33181c4au, 0xd14f95fbu, 0x6f870facu, 0x0dbe895du, 0xabf6030eu,
    0x4a2d7cbfu, 0xe864f670u, 0x869c7021u, 0x24d3e9d2u, 0xc30b6383u, 0x6142dd34u, 0xff7a56e5u, 0x9db1d096u,
    0x3be94a47u, 0xda20c3f8u, 0x78583da9u, 0x168fb75au, 0xb4c7310bu, 0x52feaabcu, 0xf136246du, 0x8f6d9e1eu,
    0x2da517cfu, 0xcbdc9180u, 0x6a140b31u, 0x084b84e2u, 0xa682fe93u, 0x44ba7844u, 0xe2f1f1f5u, 0x81296ba6u,
    0x1f60e557u, 0xbd985f08u, 0x5bcfd8b9u, 0xfa07526au, 0x983ecc1bu, 0x367645ccu, 0xd4adbf7du, 0x72e5392eu,
    0x111cb2dfu, 0xaf542c90u, 0x4d8ba641u, 0xebc31ff2u, 0x89fa99a3u, 0x28321354u, 0xc6698d05u, 0x64a106b6u,
    0x02d88067u, 0xa10ffa18u, 0x3f4773c9u, 0xdd7eed7au, 0x7bb6672bu, 0x19ede0dcu, 0xb8255a8du, 0x565cd43eu,
    0xf4944defu, 0x92cbc7a0u, 0x31034151u, 0xcf3abb02u, 0x6d7234b3u, 0x0ba9ae64u, 0xa9e12815u, 0x4818a1c6u,
    0xe6501b77u, 0x84879528u, 0x22bf0ed9u, 0xc0f6888au, 0x5f2e023bu, 0xfd657becu, 0x9b9cf59du, 0x39d46f4eu,
    0xd80be8ffu, 0x764362b0u, 0x147adc61u, 0xb2b25612u, 0x50e9cfc3u, 0xef214974u, 0x8d58c325u, 0x2b903cd6u,
};

static const uint32_t bshim_268_tab4[96] = {
    0xf6a928e8u, 0x94e0a299u, 0x33181c4au, 0xd14f95fbu, 0x6f870facu, 0x0dbe895du, 0xabf6030eu, 0x4a2d7cbfu,
    0xe864f670u, 0x869c7021u, 0x24d3e9d2u, 0xc30b6383u, 0x6142dd34u, 0xff7a56e5u, 0x9db1d096u, 0x3be94a47u,
    0xda20c3f8u, 0x78583da9u, 0x168fb75au, 0xb4c7310bu, 0x52feaabcu, 0xf136246du, 0x8f6d9e1eu, 0x2da517cfu,
    0xcbdc9180u, 0x6a140b31u, 0x084b84e2u, 0xa682fe93u, 0x44ba7844u, 0xe2f1f1f5u, 0x81296ba6u, 0x1f60e557u,
    0xbd985f08u, 0x5bcfd8b9u, 0xfa07526au, 0x983ecc1bu, 0x367645ccu, 0xd4adbf7du, 0x72e5392eu, 0x111cb2dfu,
    0xaf542c90u, 0x4d8ba641u, 0xebc31ff2u, 0x89fa99a3u, 0x28321354u, 0xc6698d05u, 0x64a106b6u, 0x02d88067u,
    0xa10ffa18u, 0x3f4773c9u, 0xdd7eed7au, 0x7bb6672bu, 0x19ede0dcu, 0xb8255a8du, 0x565cd43eu, 0xf4944defu,
    0x92cbc7a0u, 0x31034151u, 0xcf3abb02u, 0x6d7234b3u, 0x0ba9ae64u, 0xa9e12815u, 0x4818a1c6u, 0xe6501b77u,
    0x84879528u, 0x22bf0ed9u, 0xc0f6888au, 0x5f2e023bu, 0xfd657becu, 0x9b9cf59du, 0x39d46f4eu, 0xd80be8ffu,
    0x764362b0u, 0x147adc61u, 0xb2b25612u, 0x50e9cfc3u, 0xef214974u, 0x8d58c325u, 0x2b903cd6u, 0xc9c7b687u,
    0x67ff3038u, 0x0636a9e9u, 0xa46e239au, 0x42a59d4bu, 0xe0dd16fcu, 0x7f1490adu, 0x1d4c0a5eu, 0xbb83840fu,
    0x59bafdc0u, 0xf7f27771u, 0x9629f122u, 0x34616ad3u, 0xd298e484u, 0x70d05e35u, 0x0f07d7e6u, 0xad3f5197u,
};

static const uint32_t bshim_268_tab5[96] = {
    0x78583da9u, 0x168fb75au, 0xb4c7310bu, 0x52feaabcu, 0xf136246du, 0x8f6d9e1eu, 0x2da517cfu, 0xcbdc9180u,
    0x6a140b31u, 0x084b84e2u, 0xa682fe93u, 0x44ba7844u, 0xe2f1f1f5u, 0x81296ba6u, 0x1f60e557u, 0xbd985f08u,
    0x5bcfd8b9u, 0xfa07526au, 0x983ecc1bu, 0x367645ccu, 0xd4adbf7du, 0x72e5392eu, 0x111cb2dfu, 0xaf542c90u,
    0x4d8ba641u, 0xebc31ff2u, 0x89fa99a3u, 0x28321354u, 0xc6698d05u, 0x64a106b6u, 0x02d88067u, 0xa10ffa18u,
    0x3f4773c9u, 0xdd7eed7au, 0x7bb6672bu, 0x19ede0dcu, 0xb8255a8du, 0x565cd43eu, 0xf4944defu, 0x92cbc7a0u,
    0x31034151u, 0xcf3abb02u, 0x6d7234b3u, 0x0ba9ae64u, 0xa9e12815u, 0x4818a1c6u, 0xe6501b77u, 0x84879528u,
    0x22bf0ed9u, 0xc0f6888au, 0x5f2e023bu, 0xfd657becu, 0x9b9cf59du, 0x39d46f4eu, 0xd80be8ffu, 0x764362b0u,
    0x147adc61u, 0xb2b25612u, 0x50e9cfc3u, 0xef214974u, 0x8d58c325u, 0x2b903cd6u, 0xc9c7b687u, 0x67ff3038u,
    0x0636a9e9u, 0xa46e239au, 0x42a59d4bu, 0xe0dd16fcu, 0x7f1490adu, 0x1d4c0a5eu, 0xbb83840fu, 0x59bafdc0u,
    0xf7f27771u, 0x9629f122u, 0x34616ad3u, 0xd298e484u, 0x70d05e35u, 0x0f07d7e6u, 0xad3f5197u, 0x4b76cb48u,
    0xe9ae44f9u, 0x87e5beaau, 0x261d385bu, 0xc454b20cu, 0x628c2bbdu, 0x00c3a56eu, 0x9efb1f1fu, 0x3d3298d0u,
    0xdb6a1281u, 0x79a18c32u, 0x17d905e3u, 0xb6107f94u, 0x5447f945u, 0xf27f72f6u, 0x90b6eca7u, 0x2eee6658u,
};

static const uint32_t bshim_268_tab6[96] = {
    0xfa07526au, 0x983ecc1bu, 0x367645ccu, 0xd4adbf7du, 0x72e5392eu, 0x111cb2dfu, 0xaf542c90u, 0x4d8ba641u,
    0xebc31ff2u, 0x89fa99a3u, 0x28321354u, 0xc6698d05u, 0x64a106b6u, 0x02d88067u, 0xa10ffa18u, 0x3f4773c9u,
    0xdd7eed7au, 0x7bb6672bu, 0x19ede0dcu, 0xb8255a8du, 0x565cd43eu, 0xf4944defu, 0x92cbc7a0u, 0x31034151u,
    0xcf3abb02u, 0x6d7234b3u, 0x0ba9ae64u, 0xa9e12815u, 0x4818a1c6u, 0xe6501b77u, 0x84879528u, 0x22bf0ed9u,
    0xc0f6888au, 0x5f2e023bu, 0xfd657becu, 0x9b9cf59du, 0x39d46f4eu, 0xd80be8ffu, 0x764362b0u, 0x147adc61u,
    0xb2b25612u, 0x50e9cfc3u, 0xef214974u, 0x8d58c325u, 0x2b903cd6u, 0xc9c7b687u, 0x67ff3038u, 0x0636a9e9u,
    0xa46e239au, 0x42a59d4bu, 0xe0dd16fcu, 0x7f1490adu, 0x1d4c0a5eu, 0xbb83840fu, 0x59bafdc0u, 0xf7f27771u,
    0x9629f122u, 0x34616ad3u, 0xd298e484u, 0x70d05e35u, 0x0f07d7e6u, 0xad3f5197u, 0x4b76cb48u, 0xe9ae44f9u,
    0x87e5beaau, 0x261d385bu, 0xc454b20cu, 0x628c2bbdu, 0x00c3a56eu, 0x9efb1f1fu, 0x3d3298d0u, 0xdb6a1281u,
    0x79a18c32u, 0x17d905e3u, 0xb6107f94u, 0x5447f945u, 0xf27f72f6u, 0x90b6eca7u, 0x2eee6658u, 0xcd25e009u,
    0x6b5d59bau, 0x0994d36bu, 0xa7cc4d1cu, 0x4603c6cdu, 0xe43b407eu, 0x8272ba2fu, 0x20aa33e0u, 0xbee1ad91u,
    0x5d192742u, 0xfb50a0f3u, 0x99881aa4u, 0x37bf9455u, 0xd5f70e06u, 0x742e87b7u, 0x12660168u, 0xb09d7b19u,
};

static const uint32_t bshim_268_tab7[96] = {
    0x7bb6672bu, 0x19ede0dcu, 0xb8255a8du, 0x565cd43eu, 0xf4944defu, 0x92cbc7a0u, 0x31034151u, 0xcf3abb02u,
    0x6d7234b3u, 0x0ba9ae64u, 0xa9e12815u, 0x4818a1c6u, 0xe6501b77u, 0x84879528u, 0x22bf0ed9u, 0xc0f6888au,
    0x5f2e023bu, 0xfd657becu, 0x9b9cf59du, 0x39d46f4eu, 0xd80be8ffu, 0x764362b0u, 0x147adc61u, 0xb2b25612u,
    0x50e9cfc3u, 0xef214974u, 0x8d58c325u, 0x2b903cd6u, 0xc9c7b687u, 0x67ff3038u, 0x0636a9e9u, 0xa46e239au,
    0x42a59d4bu, 0xe0dd16fcu, 0x7f1490adu, 0x1d4c0a5eu, 0xbb83840fu, 0x59bafdc0u, 0xf7f27771u, 0x9629f122u,
    0x34616ad3u, 0xd298e484u, 0x70d05e35u, 0x0f07d7e6u, 0xad3f5197u, 0x4b76cb48u, 0xe9ae44f9u, 0x87e5beaau,
    0x261d385bu, 0xc454b20cu, 0x628c2bbdu, 0x00c3a56eu, 0x9efb1f1fu, 0x3d3298d0u, 0xdb6a1281u, 0x79a18c32u,
    0x17d905e3u, 0xb6107f94u, 0x5447f945u, 0xf27f72f6u, 0x90b6eca7u, 0x2eee6658u, 0xcd25e009u, 0x6b5d59bau,
    0x0994d36bu, 0xa7cc4d1cu, 0x4603c6cdu, 0xe43b407eu, 0x8272ba2fu, 0x20aa33e0u, 0xbee1ad91u, 0x5d192742u,
    0xfb50a0f3u, 0x99881aa4u, 0x37bf9455u, 0xd5f70e06u, 0x742e87b7u, 0x12660168u, 0xb09d7b19u, 0x4ed4f4cau,
    0xed0c6e7bu, 0x8b43e82cu, 0x297b61ddu, 0xc7b2db8eu, 0x65ea553fu, 0x0421cef0u, 0xa25948a1u, 0x4090c252u,
    0xdec83c03u, 0x7cffb5b4u, 0x1b372f65u, 0xb96ea916u, 0x57a622c7u, 0xf5dd9c78u, 0x94151629u, 0x324c8fdau,
};

struct bshim_268_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_268_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfc28d862u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_268_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8214a2d9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_268_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_268_reset(struct bshim_268_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00206234u;
    return 0;
}

