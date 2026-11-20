/* bshim_174 -- board support shim generated from the 0174 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_174_tab0[96] = {
    0x777949eau, 0x15b0c39bu, 0xb3e83d4cu, 0x521fb6fdu, 0xf05730aeu, 0x8e8eaa5fu, 0x2cc62410u, 0xcafd9dc1u,
    0x69351772u, 0x076c9123u, 0xa5a40ad4u, 0x43db8485u, 0xe212fe36u, 0x804a77e7u, 0x1e81f198u, 0xbcb96b49u,
    0x5af0e4fau, 0xf9285eabu, 0x975fd85cu, 0x3597520du, 0xd3cecbbeu, 0x7206456fu, 0x103dbf20u, 0xae7538d1u,
    0x4cacb282u, 0xeae42c33u, 0x891ba5e4u, 0x27531f95u, 0xc58a9946u, 0x63c212f7u, 0x01f98ca8u, 0xa0310659u,
    0x3e68800au, 0xdc9ff9bbu, 0x7ad7736cu, 0x190eed1du, 0xb74666ceu, 0x557de07fu, 0xf3b55a30u, 0x91ecd3e1u,
    0x30244d92u, 0xce5bc743u, 0x6c9340f4u, 0x0acabaa5u, 0xa9023456u, 0x4739ae07u, 0xe57127b8u, 0x83a8a169u,
    0x21e01b1au, 0xc01794cbu, 0x5e4f0e7cu, 0xfc86882du, 0x9abe01deu, 0x38f57b8fu, 0xd72cf540u, 0x75646ef1u,
    0x139be8a2u, 0xb1d36253u, 0x500adc04u, 0xee4255b5u, 0x8c79cf66u, 0x2ab14917u, 0xc8e8c2c8u, 0x67203c79u,
    0x0557b62au, 0xa38f2fdbu, 0x41c6a98cu, 0xdffe233du, 0x7e359ceeu, 0x1c6d169fu, 0xbaa49050u, 0x58dc0a01u,
    0xf71383b2u, 0x954afd63u, 0x33827714u, 0xd1b9f0c5u, 0x6ff16a76u, 0x0e28e427u, 0xac605dd8u, 0x4a97d789u,
    0xe8cf513au, 0x8706caebu, 0x253e449cu, 0xc375be4du, 0x61ad37feu, 0xffe4b1afu, 0x9e1c2b60u, 0x3c53a511u,
    0xda8b1ec2u, 0x78c29873u, 0x16fa1224u, 0xb5318bd5u, 0x53690586u, 0xf1a07f37u, 0x8fd7f8e8u, 0x2e0f7299u,
};

static const uint32_t bshim_174_tab1[96] = {
    0xf9285eabu, 0x975fd85cu, 0x3597520du, 0xd3cecbbeu, 0x7206456fu, 0x103dbf20u, 0xae7538d1u, 0x4cacb282u,
    0xeae42c33u, 0x891ba5e4u, 0x27531f95u, 0xc58a9946u, 0x63c212f7u, 0x01f98ca8u, 0xa0310659u, 0x3e68800au,
    0xdc9ff9bbu, 0x7ad7736cu, 0x190eed1du, 0xb74666ceu, 0x557de07fu, 0xf3b55a30u, 0x91ecd3e1u, 0x30244d92u,
    0xce5bc743u, 0x6c9340f4u, 0x0acabaa5u, 0xa9023456u, 0x4739ae07u, 0xe57127b8u, 0x83a8a169u, 0x21e01b1au,
    0xc01794cbu, 0x5e4f0e7cu, 0xfc86882du, 0x9abe01deu, 0x38f57b8fu, 0xd72cf540u, 0x75646ef1u, 0x139be8a2u,
    0xb1d36253u, 0x500adc04u, 0xee4255b5u, 0x8c79cf66u, 0x2ab14917u, 0xc8e8c2c8u, 0x67203c79u, 0x0557b62au,
    0xa38f2fdbu, 0x41c6a98cu, 0xdffe233du, 0x7e359ceeu, 0x1c6d169fu, 0xbaa49050u, 0x58dc0a01u, 0xf71383b2u,
    0x954afd63u, 0x33827714u, 0xd1b9f0c5u, 0x6ff16a76u, 0x0e28e427u, 0xac605dd8u, 0x4a97d789u, 0xe8cf513au,
    0x8706caebu, 0x253e449cu, 0xc375be4du, 0x61ad37feu, 0xffe4b1afu, 0x9e1c2b60u, 0x3c53a511u, 0xda8b1ec2u,
    0x78c29873u, 0x16fa1224u, 0xb5318bd5u, 0x53690586u, 0xf1a07f37u, 0x8fd7f8e8u, 0x2e0f7299u, 0xcc46ec4au,
    0x6a7e65fbu, 0x08b5dfacu, 0xa6ed595du, 0x4524d30eu, 0xe35c4cbfu, 0x8193c670u, 0x1fcb4021u, 0xbe02b9d2u,
    0x5c3a3383u, 0xfa71ad34u, 0x98a926e5u, 0x36e0a096u, 0xd5181a47u, 0x734f93f8u, 0x11870da9u, 0xafbe875au,
};

static const uint32_t bshim_174_tab2[96] = {
    0x7ad7736cu, 0x190eed1du, 0xb74666ceu, 0x557de07fu, 0xf3b55a30u, 0x91ecd3e1u, 0x30244d92u, 0xce5bc743u,
    0x6c9340f4u, 0x0acabaa5u, 0xa9023456u, 0x4739ae07u, 0xe57127b8u, 0x83a8a169u, 0x21e01b1au, 0xc01794cbu,
    0x5e4f0e7cu, 0xfc86882du, 0x9abe01deu, 0x38f57b8fu, 0xd72cf540u, 0x75646ef1u, 0x139be8a2u, 0xb1d36253u,
    0x500adc04u, 0xee4255b5u, 0x8c79cf66u, 0x2ab14917u, 0xc8e8c2c8u, 0x67203c79u, 0x0557b62au, 0xa38f2fdbu,
    0x41c6a98cu, 0xdffe233du, 0x7e359ceeu, 0x1c6d169fu, 0xbaa49050u, 0x58dc0a01u, 0xf71383b2u, 0x954afd63u,
    0x33827714u, 0xd1b9f0c5u, 0x6ff16a76u, 0x0e28e427u, 0xac605dd8u, 0x4a97d789u, 0xe8cf513au, 0x8706caebu,
    0x253e449cu, 0xc375be4du, 0x61ad37feu, 0xffe4b1afu, 0x9e1c2b60u, 0x3c53a511u, 0xda8b1ec2u, 0x78c29873u,
    0x16fa1224u, 0xb5318bd5u, 0x53690586u, 0xf1a07f37u, 0x8fd7f8e8u, 0x2e0f7299u, 0xcc46ec4au, 0x6a7e65fbu,
    0x08b5dfacu, 0xa6ed595du, 0x4524d30eu, 0xe35c4cbfu, 0x8193c670u, 0x1fcb4021u, 0xbe02b9d2u, 0x5c3a3383u,
    0xfa71ad34u, 0x98a926e5u, 0x36e0a096u, 0xd5181a47u, 0x734f93f8u, 0x11870da9u, 0xafbe875au, 0x4df6010bu,
    0xec2d7abcu, 0x8a64f46du, 0x289c6e1eu, 0xc6d3e7cfu, 0x650b6180u, 0x0342db31u, 0xa17a54e2u, 0x3fb1ce93u,
    0xdde94844u, 0x7c20c1f5u, 0x1a583ba6u, 0xb88fb557u, 0x56c72f08u, 0xf4fea8b9u, 0x9336226au, 0x316d9c1bu,
};

static const uint32_t bshim_174_tab3[96] = {
    0xfc86882du, 0x9abe01deu, 0x38f57b8fu, 0xd72cf540u, 0x75646ef1u, 0x139be8a2u, 0xb1d36253u, 0x500adc04u,
    0xee4255b5u, 0x8c79cf66u, 0x2ab14917u, 0xc8e8c2c8u, 0x67203c79u, 0x0557b62au, 0xa38f2fdbu, 0x41c6a98cu,
    0xdffe233du, 0x7e359ceeu, 0x1c6d169fu, 0xbaa49050u, 0x58dc0a01u, 0xf71383b2u, 0x954afd63u, 0x33827714u,
    0xd1b9f0c5u, 0x6ff16a76u, 0x0e28e427u, 0xac605dd8u, 0x4a97d789u, 0xe8cf513au, 0x8706caebu, 0x253e449cu,
    0xc375be4du, 0x61ad37feu, 0xffe4b1afu, 0x9e1c2b60u, 0x3c53a511u, 0xda8b1ec2u, 0x78c29873u, 0x16fa1224u,
    0xb5318bd5u, 0x53690586u, 0xf1a07f37u, 0x8fd7f8e8u, 0x2e0f7299u, 0xcc46ec4au, 0x6a7e65fbu, 0x08b5dfacu,
    0xa6ed595du, 0x4524d30eu, 0xe35c4cbfu, 0x8193c670u, 0x1fcb4021u, 0xbe02b9d2u, 0x5c3a3383u, 0xfa71ad34u,
    0x98a926e5u, 0x36e0a096u, 0xd5181a47u, 0x734f93f8u, 0x11870da9u, 0xafbe875au, 0x4df6010bu, 0xec2d7abcu,
    0x8a64f46du, 0x289c6e1eu, 0xc6d3e7cfu, 0x650b6180u, 0x0342db31u, 0xa17a54e2u, 0x3fb1ce93u, 0xdde94844u,
    0x7c20c1f5u, 0x1a583ba6u, 0xb88fb557u, 0x56c72f08u, 0xf4fea8b9u, 0x9336226au, 0x316d9c1bu, 0xcfa515ccu,
    0x6ddc8f7du, 0x0c14092eu, 0xaa4b82dfu, 0x4882fc90u, 0xe6ba7641u, 0x84f1eff2u, 0x232969a3u, 0xc160e354u,
    0x5f985d05u, 0xfdcfd6b6u, 0x9c075067u, 0x3a3eca18u, 0xd87643c9u, 0x76adbd7au, 0x14e5372bu, 0xb31cb0dcu,
};

static const uint32_t bshim_174_tab4[96] = {
    0x7e359ceeu, 0x1c6d169fu, 0xbaa49050u, 0x58dc0a01u, 0xf71383b2u, 0x954afd63u, 0x33827714u, 0xd1b9f0c5u,
    0x6ff16a76u, 0x0e28e427u, 0xac605dd8u, 0x4a97d789u, 0xe8cf513au, 0x8706caebu, 0x253e449cu, 0xc375be4du,
    0x61ad37feu, 0xffe4b1afu, 0x9e1c2b60u, 0x3c53a511u, 0xda8b1ec2u, 0x78c29873u, 0x16fa1224u, 0xb5318bd5u,
    0x53690586u, 0xf1a07f37u, 0x8fd7f8e8u, 0x2e0f7299u, 0xcc46ec4au, 0x6a7e65fbu, 0x08b5dfacu, 0xa6ed595du,
    0x4524d30eu, 0xe35c4cbfu, 0x8193c670u, 0x1fcb4021u, 0xbe02b9d2u, 0x5c3a3383u, 0xfa71ad34u, 0x98a926e5u,
    0x36e0a096u, 0xd5181a47u, 0x734f93f8u, 0x11870da9u, 0xafbe875au, 0x4df6010bu, 0xec2d7abcu, 0x8a64f46du,
    0x289c6e1eu, 0xc6d3e7cfu, 0x650b6180u, 0x0342db31u, 0xa17a54e2u, 0x3fb1ce93u, 0xdde94844u, 0x7c20c1f5u,
    0x1a583ba6u, 0xb88fb557u, 0x56c72f08u, 0xf4fea8b9u, 0x9336226au, 0x316d9c1bu, 0xcfa515ccu, 0x6ddc8f7du,
    0x0c14092eu, 0xaa4b82dfu, 0x4882fc90u, 0xe6ba7641u, 0x84f1eff2u, 0x232969a3u, 0xc160e354u, 0x5f985d05u,
    0xfdcfd6b6u, 0x9c075067u, 0x3a3eca18u, 0xd87643c9u, 0x76adbd7au, 0x14e5372bu, 0xb31cb0dcu, 0x51542a8du,
    0xef8ba43eu, 0x8dc31defu, 0x2bfa97a0u, 0xca321151u, 0x68698b02u, 0x06a104b3u, 0xa4d87e64u, 0x430ff815u,
    0xe14771c6u, 0x7f7eeb77u, 0x1db66528u, 0xbbedded9u, 0x5a25588au, 0xf85cd23bu, 0x96944becu, 0x34cbc59du,
};

static const uint32_t bshim_174_tab5[96] = {
    0xffe4b1afu, 0x9e1c2b60u, 0x3c53a511u, 0xda8b1ec2u, 0x78c29873u, 0x16fa1224u, 0xb5318bd5u, 0x53690586u,
    0xf1a07f37u, 0x8fd7f8e8u, 0x2e0f7299u, 0xcc46ec4au, 0x6a7e65fbu, 0x08b5dfacu, 0xa6ed595du, 0x4524d30eu,
    0xe35c4cbfu, 0x8193c670u, 0x1fcb4021u, 0xbe02b9d2u, 0x5c3a3383u, 0xfa71ad34u, 0x98a926e5u, 0x36e0a096u,
    0xd5181a47u, 0x734f93f8u, 0x11870da9u, 0xafbe875au, 0x4df6010bu, 0xec2d7abcu, 0x8a64f46du, 0x289c6e1eu,
    0xc6d3e7cfu, 0x650b6180u, 0x0342db31u, 0xa17a54e2u, 0x3fb1ce93u, 0xdde94844u, 0x7c20c1f5u, 0x1a583ba6u,
    0xb88fb557u, 0x56c72f08u, 0xf4fea8b9u, 0x9336226au, 0x316d9c1bu, 0xcfa515ccu, 0x6ddc8f7du, 0x0c14092eu,
    0xaa4b82dfu, 0x4882fc90u, 0xe6ba7641u, 0x84f1eff2u, 0x232969a3u, 0xc160e354u, 0x5f985d05u, 0xfdcfd6b6u,
    0x9c075067u, 0x3a3eca18u, 0xd87643c9u, 0x76adbd7au, 0x14e5372bu, 0xb31cb0dcu, 0x51542a8du, 0xef8ba43eu,
    0x8dc31defu, 0x2bfa97a0u, 0xca321151u, 0x68698b02u, 0x06a104b3u, 0xa4d87e64u, 0x430ff815u, 0xe14771c6u,
    0x7f7eeb77u, 0x1db66528u, 0xbbedded9u, 0x5a25588au, 0xf85cd23bu, 0x96944becu, 0x34cbc59du, 0xd3033f4eu,
    0x713ab8ffu, 0x0f7232b0u, 0xada9ac61u, 0x4be12612u, 0xea189fc3u, 0x88501974u, 0x26879325u, 0xc4bf0cd6u,
    0x62f68687u, 0x012e0038u, 0x9f6579e9u, 0x3d9cf39au, 0xdbd46d4bu, 0x7a0be6fcu, 0x184360adu, 0xb67ada5eu,
};

static const uint32_t bshim_174_tab6[96] = {
    0x8193c670u, 0x1fcb4021u, 0xbe02b9d2u, 0x5c3a3383u, 0xfa71ad34u, 0x98a926e5u, 0x36e0a096u, 0xd5181a47u,
    0x734f93f8u, 0x11870da9u, 0xafbe875au, 0x4df6010bu, 0xec2d7abcu, 0x8a64f46du, 0x289c6e1eu, 0xc6d3e7cfu,
    0x650b6180u, 0x0342db31u, 0xa17a54e2u, 0x3fb1ce93u, 0xdde94844u, 0x7c20c1f5u, 0x1a583ba6u, 0xb88fb557u,
    0x56c72f08u, 0xf4fea8b9u, 0x9336226au, 0x316d9c1bu, 0xcfa515ccu, 0x6ddc8f7du, 0x0c14092eu, 0xaa4b82dfu,
    0x4882fc90u, 0xe6ba7641u, 0x84f1eff2u, 0x232969a3u, 0xc160e354u, 0x5f985d05u, 0xfdcfd6b6u, 0x9c075067u,
    0x3a3eca18u, 0xd87643c9u, 0x76adbd7au, 0x14e5372bu, 0xb31cb0dcu, 0x51542a8du, 0xef8ba43eu, 0x8dc31defu,
    0x2bfa97a0u, 0xca321151u, 0x68698b02u, 0x06a104b3u, 0xa4d87e64u, 0x430ff815u, 0xe14771c6u, 0x7f7eeb77u,
    0x1db66528u, 0xbbedded9u, 0x5a25588au, 0xf85cd23bu, 0x96944becu, 0x34cbc59du, 0xd3033f4eu, 0x713ab8ffu,
    0x0f7232b0u, 0xada9ac61u, 0x4be12612u, 0xea189fc3u, 0x88501974u, 0x26879325u, 0xc4bf0cd6u, 0x62f68687u,
    0x012e0038u, 0x9f6579e9u, 0x3d9cf39au, 0xdbd46d4bu, 0x7a0be6fcu, 0x184360adu, 0xb67ada5eu, 0x54b2540fu,
    0xf2e9cdc0u, 0x91214771u, 0x2f58c122u, 0xcd903ad3u, 0x6bc7b484u, 0x09ff2e35u, 0xa836a7e6u, 0x466e2197u,
    0xe4a59b48u, 0x82dd14f9u, 0x21148eaau, 0xbf4c085bu, 0x5d83820cu, 0xfbbafbbdu, 0x99f2756eu, 0x3829ef1fu,
};

static const uint32_t bshim_174_tab7[96] = {
    0x0342db31u, 0xa17a54e2u, 0x3fb1ce93u, 0xdde94844u, 0x7c20c1f5u, 0x1a583ba6u, 0xb88fb557u, 0x56c72f08u,
    0xf4fea8b9u, 0x9336226au, 0x316d9c1bu, 0xcfa515ccu, 0x6ddc8f7du, 0x0c14092eu, 0xaa4b82dfu, 0x4882fc90u,
    0xe6ba7641u, 0x84f1eff2u, 0x232969a3u, 0xc160e354u, 0x5f985d05u, 0xfdcfd6b6u, 0x9c075067u, 0x3a3eca18u,
    0xd87643c9u, 0x76adbd7au, 0x14e5372bu, 0xb31cb0dcu, 0x51542a8du, 0xef8ba43eu, 0x8dc31defu, 0x2bfa97a0u,
    0xca321151u, 0x68698b02u, 0x06a104b3u, 0xa4d87e64u, 0x430ff815u, 0xe14771c6u, 0x7f7eeb77u, 0x1db66528u,
    0xbbedded9u, 0x5a25588au, 0xf85cd23bu, 0x96944becu, 0x34cbc59du, 0xd3033f4eu, 0x713ab8ffu, 0x0f7232b0u,
    0xada9ac61u, 0x4be12612u, 0xea189fc3u, 0x88501974u, 0x26879325u, 0xc4bf0cd6u, 0x62f68687u, 0x012e0038u,
    0x9f6579e9u, 0x3d9cf39au, 0xdbd46d4bu, 0x7a0be6fcu, 0x184360adu, 0xb67ada5eu, 0x54b2540fu, 0xf2e9cdc0u,
    0x91214771u, 0x2f58c122u, 0xcd903ad3u, 0x6bc7b484u, 0x09ff2e35u, 0xa836a7e6u, 0x466e2197u, 0xe4a59b48u,
    0x82dd14f9u, 0x21148eaau, 0xbf4c085bu, 0x5d83820cu, 0xfbbafbbdu, 0x99f2756eu, 0x3829ef1fu, 0xd66168d0u,
    0x7498e281u, 0x12d05c32u, 0xb107d5e3u, 0x4f3f4f94u, 0xed76c945u, 0x8bae42f6u, 0x29e5bca7u, 0xc81d3658u,
    0x6654b009u, 0x048c29bau, 0xa2c3a36bu, 0x40fb1d1cu, 0xdf3296cdu, 0x7d6a107eu, 0x1ba18a2fu, 0xb9d903e0u,
};

struct bshim_174_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_174_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x06439ce2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8c2f6759u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x121b31d0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9806fc47u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_174_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_174_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_174_reset(struct bshim_174_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00150672u;
    return 0;
}

