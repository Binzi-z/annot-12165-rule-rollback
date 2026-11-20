/* bshim_246 -- board support shim generated from the 0246 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_246_tab0[96] = {
    0xc364db42u, 0x619c54f3u, 0xffd3cea4u, 0x9e0b4855u, 0x3c42c206u, 0xda7a3bb7u, 0x78b1b568u, 0x16e92f19u,
    0xb520a8cau, 0x5358227bu, 0xf18f9c2cu, 0x8fc715ddu, 0x2dfe8f8eu, 0xcc36093fu, 0x6a6d82f0u, 0x08a4fca1u,
    0xa6dc7652u, 0x4513f003u, 0xe34b69b4u, 0x8182e365u, 0x1fba5d16u, 0xbdf1d6c7u, 0x5c295078u, 0xfa60ca29u,
    0x989843dau, 0x36cfbd8bu, 0xd507373cu, 0x733eb0edu, 0x11762a9eu, 0xafada44fu, 0x4de51e00u, 0xec1c97b1u,
    0x8a541162u, 0x288b8b13u, 0xc6c304c4u, 0x64fa7e75u, 0x0331f826u, 0xa16971d7u, 0x3fa0eb88u, 0xddd86539u,
    0x7c0fdeeau, 0x1a47589bu, 0xb87ed24cu, 0x56b64bfdu, 0xf4edc5aeu, 0x93253f5fu, 0x315cb910u, 0xcf9432c1u,
    0x6dcbac72u, 0x0c032623u, 0xaa3a9fd4u, 0x48721985u, 0xe6a99336u, 0x84e10ce7u, 0x23188698u, 0xc1500049u,
    0x5f8779fau, 0xfdbef3abu, 0x9bf66d5cu, 0x3a2de70du, 0xd86560beu, 0x769cda6fu, 0x14d45420u, 0xb30bcdd1u,
    0x51434782u, 0xef7ac133u, 0x8db23ae4u, 0x2be9b495u, 0xca212e46u, 0x6858a7f7u, 0x069021a8u, 0xa4c79b59u,
    0x42ff150au, 0xe1368ebbu, 0x7f6e086cu, 0x1da5821du, 0xbbdcfbceu, 0x5a14757fu, 0xf84bef30u, 0x968368e1u,
    0x34bae292u, 0xd2f25c43u, 0x7129d5f4u, 0x0f614fa5u, 0xad98c956u, 0x4bd04307u, 0xea07bcb8u, 0x883f3669u,
    0x2676b01au, 0xc4ae29cbu, 0x62e5a37cu, 0x011d1d2du, 0x9f5496deu, 0x3d8c108fu, 0xdbc38a40u, 0x79fb03f1u,
};

static const uint32_t bshim_246_tab1[96] = {
    0x4513f003u, 0xe34b69b4u, 0x8182e365u, 0x1fba5d16u, 0xbdf1d6c7u, 0x5c295078u, 0xfa60ca29u, 0x989843dau,
    0x36cfbd8bu, 0xd507373cu, 0x733eb0edu, 0x11762a9eu, 0xafada44fu, 0x4de51e00u, 0xec1c97b1u, 0x8a541162u,
    0x288b8b13u, 0xc6c304c4u, 0x64fa7e75u, 0x0331f826u, 0xa16971d7u, 0x3fa0eb88u, 0xddd86539u, 0x7c0fdeeau,
    0x1a47589bu, 0xb87ed24cu, 0x56b64bfdu, 0xf4edc5aeu, 0x93253f5fu, 0x315cb910u, 0xcf9432c1u, 0x6dcbac72u,
    0x0c032623u, 0xaa3a9fd4u, 0x48721985u, 0xe6a99336u, 0x84e10ce7u, 0x23188698u, 0xc1500049u, 0x5f8779fau,
    0xfdbef3abu, 0x9bf66d5cu, 0x3a2de70du, 0xd86560beu, 0x769cda6fu, 0x14d45420u, 0xb30bcdd1u, 0x51434782u,
    0xef7ac133u, 0x8db23ae4u, 0x2be9b495u, 0xca212e46u, 0x6858a7f7u, 0x069021a8u, 0xa4c79b59u, 0x42ff150au,
    0xe1368ebbu, 0x7f6e086cu, 0x1da5821du, 0xbbdcfbceu, 0x5a14757fu, 0xf84bef30u, 0x968368e1u, 0x34bae292u,
    0xd2f25c43u, 0x7129d5f4u, 0x0f614fa5u, 0xad98c956u, 0x4bd04307u, 0xea07bcb8u, 0x883f3669u, 0x2676b01au,
    0xc4ae29cbu, 0x62e5a37cu, 0x011d1d2du, 0x9f5496deu, 0x3d8c108fu, 0xdbc38a40u, 0x79fb03f1u, 0x18327da2u,
    0xb669f753u, 0x54a17104u, 0xf2d8eab5u, 0x91106466u, 0x2f47de17u, 0xcd7f57c8u, 0x6bb6d179u, 0x09ee4b2au,
    0xa825c4dbu, 0x465d3e8cu, 0xe494b83du, 0x82cc31eeu, 0x2103ab9fu, 0xbf3b2550u, 0x5d729f01u, 0xfbaa18b2u,
};

static const uint32_t bshim_246_tab2[96] = {
    0xc6c304c4u, 0x64fa7e75u, 0x0331f826u, 0xa16971d7u, 0x3fa0eb88u, 0xddd86539u, 0x7c0fdeeau, 0x1a47589bu,
    0xb87ed24cu, 0x56b64bfdu, 0xf4edc5aeu, 0x93253f5fu, 0x315cb910u, 0xcf9432c1u, 0x6dcbac72u, 0x0c032623u,
    0xaa3a9fd4u, 0x48721985u, 0xe6a99336u, 0x84e10ce7u, 0x23188698u, 0xc1500049u, 0x5f8779fau, 0xfdbef3abu,
    0x9bf66d5cu, 0x3a2de70du, 0xd86560beu, 0x769cda6fu, 0x14d45420u, 0xb30bcdd1u, 0x51434782u, 0xef7ac133u,
    0x8db23ae4u, 0x2be9b495u, 0xca212e46u, 0x6858a7f7u, 0x069021a8u, 0xa4c79b59u, 0x42ff150au, 0xe1368ebbu,
    0x7f6e086cu, 0x1da5821du, 0xbbdcfbceu, 0x5a14757fu, 0xf84bef30u, 0x968368e1u, 0x34bae292u, 0xd2f25c43u,
    0x7129d5f4u, 0x0f614fa5u, 0xad98c956u, 0x4bd04307u, 0xea07bcb8u, 0x883f3669u, 0x2676b01au, 0xc4ae29cbu,
    0x62e5a37cu, 0x011d1d2du, 0x9f5496deu, 0x3d8c108fu, 0xdbc38a40u, 0x79fb03f1u, 0x18327da2u, 0xb669f753u,
    0x54a17104u, 0xf2d8eab5u, 0x91106466u, 0x2f47de17u, 0xcd7f57c8u, 0x6bb6d179u, 0x09ee4b2au, 0xa825c4dbu,
    0x465d3e8cu, 0xe494b83du, 0x82cc31eeu, 0x2103ab9fu, 0xbf3b2550u, 0x5d729f01u, 0xfbaa18b2u, 0x99e19263u,
    0x38190c14u, 0xd65085c5u, 0x7487ff76u, 0x12bf7927u, 0xb0f6f2d8u, 0x4f2e6c89u, 0xed65e63au, 0x8b9d5febu,
    0x29d4d99cu, 0xc80c534du, 0x6643ccfeu, 0x047b46afu, 0xa2b2c060u, 0x40ea3a11u, 0xdf21b3c2u, 0x7d592d73u,
};

static const uint32_t bshim_246_tab3[96] = {
    0x48721985u, 0xe6a99336u, 0x84e10ce7u, 0x23188698u, 0xc1500049u, 0x5f8779fau, 0xfdbef3abu, 0x9bf66d5cu,
    0x3a2de70du, 0xd86560beu, 0x769cda6fu, 0x14d45420u, 0xb30bcdd1u, 0x51434782u, 0xef7ac133u, 0x8db23ae4u,
    0x2be9b495u, 0xca212e46u, 0x6858a7f7u, 0x069021a8u, 0xa4c79b59u, 0x42ff150au, 0xe1368ebbu, 0x7f6e086cu,
    0x1da5821du, 0xbbdcfbceu, 0x5a14757fu, 0xf84bef30u, 0x968368e1u, 0x34bae292u, 0xd2f25c43u, 0x7129d5f4u,
    0x0f614fa5u, 0xad98c956u, 0x4bd04307u, 0xea07bcb8u, 0x883f3669u, 0x2676b01au, 0xc4ae29cbu, 0x62e5a37cu,
    0x011d1d2du, 0x9f5496deu, 0x3d8c108fu, 0xdbc38a40u, 0x79fb03f1u, 0x18327da2u, 0xb669f753u, 0x54a17104u,
    0xf2d8eab5u, 0x91106466u, 0x2f47de17u, 0xcd7f57c8u, 0x6bb6d179u, 0x09ee4b2au, 0xa825c4dbu, 0x465d3e8cu,
    0xe494b83du, 0x82cc31eeu, 0x2103ab9fu, 0xbf3b2550u, 0x5d729f01u, 0xfbaa18b2u, 0x99e19263u, 0x38190c14u,
    0xd65085c5u, 0x7487ff76u, 0x12bf7927u, 0xb0f6f2d8u, 0x4f2e6c89u, 0xed65e63au, 0x8b9d5febu, 0x29d4d99cu,
    0xc80c534du, 0x6643ccfeu, 0x047b46afu, 0xa2b2c060u, 0x40ea3a11u, 0xdf21b3c2u, 0x7d592d73u, 0x1b90a724u,
    0xb9c820d5u, 0x57ff9a86u, 0xf6371437u, 0x946e8de8u, 0x32a60799u, 0xd0dd814au, 0x6f14fafbu, 0x0d4c74acu,
    0xab83ee5du, 0x49bb680eu, 0xe7f2e1bfu, 0x862a5b70u, 0x2461d521u, 0xc2994ed2u, 0x60d0c883u, 0xff084234u,
};

static const uint32_t bshim_246_tab4[96] = {
    0xca212e46u, 0x6858a7f7u, 0x069021a8u, 0xa4c79b59u, 0x42ff150au, 0xe1368ebbu, 0x7f6e086cu, 0x1da5821du,
    0xbbdcfbceu, 0x5a14757fu, 0xf84bef30u, 0x968368e1u, 0x34bae292u, 0xd2f25c43u, 0x7129d5f4u, 0x0f614fa5u,
    0xad98c956u, 0x4bd04307u, 0xea07bcb8u, 0x883f3669u, 0x2676b01au, 0xc4ae29cbu, 0x62e5a37cu, 0x011d1d2du,
    0x9f5496deu, 0x3d8c108fu, 0xdbc38a40u, 0x79fb03f1u, 0x18327da2u, 0xb669f753u, 0x54a17104u, 0xf2d8eab5u,
    0x91106466u, 0x2f47de17u, 0xcd7f57c8u, 0x6bb6d179u, 0x09ee4b2au, 0xa825c4dbu, 0x465d3e8cu, 0xe494b83du,
    0x82cc31eeu, 0x2103ab9fu, 0xbf3b2550u, 0x5d729f01u, 0xfbaa18b2u, 0x99e19263u, 0x38190c14u, 0xd65085c5u,
    0x7487ff76u, 0x12bf7927u, 0xb0f6f2d8u, 0x4f2e6c89u, 0xed65e63au, 0x8b9d5febu, 0x29d4d99cu, 0xc80c534du,
    0x6643ccfeu, 0x047b46afu, 0xa2b2c060u, 0x40ea3a11u, 0xdf21b3c2u, 0x7d592d73u, 0x1b90a724u, 0xb9c820d5u,
    0x57ff9a86u, 0xf6371437u, 0x946e8de8u, 0x32a60799u, 0xd0dd814au, 0x6f14fafbu, 0x0d4c74acu, 0xab83ee5du,
    0x49bb680eu, 0xe7f2e1bfu, 0x862a5b70u, 0x2461d521u, 0xc2994ed2u, 0x60d0c883u, 0xff084234u, 0x9d3fbbe5u,
    0x3b773596u, 0xd9aeaf47u, 0x77e628f8u, 0x161da2a9u, 0xb4551c5au, 0x528c960bu, 0xf0c40fbcu, 0x8efb896du,
    0x2d33031eu, 0xcb6a7ccfu, 0x69a1f680u, 0x07d97031u, 0xa610e9e2u, 0x44486393u, 0xe27fdd44u, 0x80b756f5u,
};

static const uint32_t bshim_246_tab5[96] = {
    0x4bd04307u, 0xea07bcb8u, 0x883f3669u, 0x2676b01au, 0xc4ae29cbu, 0x62e5a37cu, 0x011d1d2du, 0x9f5496deu,
    0x3d8c108fu, 0xdbc38a40u, 0x79fb03f1u, 0x18327da2u, 0xb669f753u, 0x54a17104u, 0xf2d8eab5u, 0x91106466u,
    0x2f47de17u, 0xcd7f57c8u, 0x6bb6d179u, 0x09ee4b2au, 0xa825c4dbu, 0x465d3e8cu, 0xe494b83du, 0x82cc31eeu,
    0x2103ab9fu, 0xbf3b2550u, 0x5d729f01u, 0xfbaa18b2u, 0x99e19263u, 0x38190c14u, 0xd65085c5u, 0x7487ff76u,
    0x12bf7927u, 0xb0f6f2d8u, 0x4f2e6c89u, 0xed65e63au, 0x8b9d5febu, 0x29d4d99cu, 0xc80c534du, 0x6643ccfeu,
    0x047b46afu, 0xa2b2c060u, 0x40ea3a11u, 0xdf21b3c2u, 0x7d592d73u, 0x1b90a724u, 0xb9c820d5u, 0x57ff9a86u,
    0xf6371437u, 0x946e8de8u, 0x32a60799u, 0xd0dd814au, 0x6f14fafbu, 0x0d4c74acu, 0xab83ee5du, 0x49bb680eu,
    0xe7f2e1bfu, 0x862a5b70u, 0x2461d521u, 0xc2994ed2u, 0x60d0c883u, 0xff084234u, 0x9d3fbbe5u, 0x3b773596u,
    0xd9aeaf47u, 0x77e628f8u, 0x161da2a9u, 0xb4551c5au, 0x528c960bu, 0xf0c40fbcu, 0x8efb896du, 0x2d33031eu,
    0xcb6a7ccfu, 0x69a1f680u, 0x07d97031u, 0xa610e9e2u, 0x44486393u, 0xe27fdd44u, 0x80b756f5u, 0x1eeed0a6u,
    0xbd264a57u, 0x5b5dc408u, 0xf9953db9u, 0x97ccb76au, 0x3604311bu, 0xd43baaccu, 0x7273247du, 0x10aa9e2eu,
    0xaee217dfu, 0x4d199190u, 0xeb510b41u, 0x898884f2u, 0x27bffea3u, 0xc5f77854u, 0x642ef205u, 0x02666bb6u,
};

static const uint32_t bshim_246_tab6[96] = {
    0xcd7f57c8u, 0x6bb6d179u, 0x09ee4b2au, 0xa825c4dbu, 0x465d3e8cu, 0xe494b83du, 0x82cc31eeu, 0x2103ab9fu,
    0xbf3b2550u, 0x5d729f01u, 0xfbaa18b2u, 0x99e19263u, 0x38190c14u, 0xd65085c5u, 0x7487ff76u, 0x12bf7927u,
    0xb0f6f2d8u, 0x4f2e6c89u, 0xed65e63au, 0x8b9d5febu, 0x29d4d99cu, 0xc80c534du, 0x6643ccfeu, 0x047b46afu,
    0xa2b2c060u, 0x40ea3a11u, 0xdf21b3c2u, 0x7d592d73u, 0x1b90a724u, 0xb9c820d5u, 0x57ff9a86u, 0xf6371437u,
    0x946e8de8u, 0x32a60799u, 0xd0dd814au, 0x6f14fafbu, 0x0d4c74acu, 0xab83ee5du, 0x49bb680eu, 0xe7f2e1bfu,
    0x862a5b70u, 0x2461d521u, 0xc2994ed2u, 0x60d0c883u, 0xff084234u, 0x9d3fbbe5u, 0x3b773596u, 0xd9aeaf47u,
    0x77e628f8u, 0x161da2a9u, 0xb4551c5au, 0x528c960bu, 0xf0c40fbcu, 0x8efb896du, 0x2d33031eu, 0xcb6a7ccfu,
    0x69a1f680u, 0x07d97031u, 0xa610e9e2u, 0x44486393u, 0xe27fdd44u, 0x80b756f5u, 0x1eeed0a6u, 0xbd264a57u,
    0x5b5dc408u, 0xf9953db9u, 0x97ccb76au, 0x3604311bu, 0xd43baaccu, 0x7273247du, 0x10aa9e2eu, 0xaee217dfu,
    0x4d199190u, 0xeb510b41u, 0x898884f2u, 0x27bffea3u, 0xc5f77854u, 0x642ef205u, 0x02666bb6u, 0xa09de567u,
    0x3ed55f18u, 0xdd0cd8c9u, 0x7b44527au, 0x197bcc2bu, 0xb7b345dcu, 0x55eabf8du, 0xf422393eu, 0x9259b2efu,
    0x30912ca0u, 0xcec8a651u, 0x6d002002u, 0x0b3799b3u, 0xa96f1364u, 0x47a68d15u, 0xe5de06c6u, 0x84158077u,
};

static const uint32_t bshim_246_tab7[96] = {
    0x4f2e6c89u, 0xed65e63au, 0x8b9d5febu, 0x29d4d99cu, 0xc80c534du, 0x6643ccfeu, 0x047b46afu, 0xa2b2c060u,
    0x40ea3a11u, 0xdf21b3c2u, 0x7d592d73u, 0x1b90a724u, 0xb9c820d5u, 0x57ff9a86u, 0xf6371437u, 0x946e8de8u,
    0x32a60799u, 0xd0dd814au, 0x6f14fafbu, 0x0d4c74acu, 0xab83ee5du, 0x49bb680eu, 0xe7f2e1bfu, 0x862a5b70u,
    0x2461d521u, 0xc2994ed2u, 0x60d0c883u, 0xff084234u, 0x9d3fbbe5u, 0x3b773596u, 0xd9aeaf47u, 0x77e628f8u,
    0x161da2a9u, 0xb4551c5au, 0x528c960bu, 0xf0c40fbcu, 0x8efb896du, 0x2d33031eu, 0xcb6a7ccfu, 0x69a1f680u,
    0x07d97031u, 0xa610e9e2u, 0x44486393u, 0xe27fdd44u, 0x80b756f5u, 0x1eeed0a6u, 0xbd264a57u, 0x5b5dc408u,
    0xf9953db9u, 0x97ccb76au, 0x3604311bu, 0xd43baaccu, 0x7273247du, 0x10aa9e2eu, 0xaee217dfu, 0x4d199190u,
    0xeb510b41u, 0x898884f2u, 0x27bffea3u, 0xc5f77854u, 0x642ef205u, 0x02666bb6u, 0xa09de567u, 0x3ed55f18u,
    0xdd0cd8c9u, 0x7b44527au, 0x197bcc2bu, 0xb7b345dcu, 0x55eabf8du, 0xf422393eu, 0x9259b2efu, 0x30912ca0u,
    0xcec8a651u, 0x6d002002u, 0x0b3799b3u, 0xa96f1364u, 0x47a68d15u, 0xe5de06c6u, 0x84158077u, 0x224cfa28u,
    0xc08473d9u, 0x5ebbed8au, 0xfcf3673bu, 0x9b2ae0ecu, 0x39625a9du, 0xd799d44eu, 0x75d14dffu, 0x1408c7b0u,
    0xb2404161u, 0x5077bb12u, 0xeeaf34c3u, 0x8ce6ae74u, 0x2b1e2825u, 0xc955a1d6u, 0x678d1b87u, 0x05c49538u,
};

struct bshim_246_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_246_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_246_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_246_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_246_reset(struct bshim_246_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001db9aau;
    return 0;
}

