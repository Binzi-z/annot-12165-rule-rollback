/* bshim_178 -- board support shim generated from the 0178 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_178_tab0[96] = {
    0x51066036u, 0xef3dd9e7u, 0x8d755398u, 0x2baccd49u, 0xc9e446fau, 0x681bc0abu, 0x06533a5cu, 0xa48ab40du,
    0x42c22dbeu, 0xe0f9a76fu, 0x7f312120u, 0x1d689ad1u, 0xbba01482u, 0x59d78e33u, 0xf80f07e4u, 0x96468195u,
    0x347dfb46u, 0xd2b574f7u, 0x70eceea8u, 0x0f246859u, 0xad5be20au, 0x4b935bbbu, 0xe9cad56cu, 0x88024f1du,
    0x2639c8ceu, 0xc471427fu, 0x62a8bc30u, 0x00e035e1u, 0x9f17af92u, 0x3d4f2943u, 0xdb86a2f4u, 0x79be1ca5u,
    0x17f59656u, 0xb62d1007u, 0x546489b8u, 0xf29c0369u, 0x90d37d1au, 0x2f0af6cbu, 0xcd42707cu, 0x6b79ea2du,
    0x09b163deu, 0xa7e8dd8fu, 0x46205740u, 0xe457d0f1u, 0x828f4aa2u, 0x20c6c453u, 0xbefe3e04u, 0x5d35b7b5u,
    0xfb6d3166u, 0x99a4ab17u, 0x37dc24c8u, 0xd6139e79u, 0x744b182au, 0x128291dbu, 0xb0ba0b8cu, 0x4ef1853du,
    0xed28feeeu, 0x8b60789fu, 0x2997f250u, 0xc7cf6c01u, 0x6606e5b2u, 0x043e5f63u, 0xa275d914u, 0x40ad52c5u,
    0xdee4cc76u, 0x7d1c4627u, 0x1b53bfd8u, 0xb98b3989u, 0x57c2b33au, 0xf5fa2cebu, 0x9431a69cu, 0x3269204du,
    0xd0a099feu, 0x6ed813afu, 0x0d0f8d60u, 0xab470711u, 0x497e80c2u, 0xe7b5fa73u, 0x85ed7424u, 0x2424edd5u,
    0xc25c6786u, 0x6093e137u, 0xfecb5ae8u, 0x9d02d499u, 0x3b3a4e4au, 0xd971c7fbu, 0x77a941acu, 0x15e0bb5du,
    0xb418350eu, 0x524faebfu, 0xf0872870u, 0x8ebea221u, 0x2cf61bd2u, 0xcb2d9583u, 0x69650f34u, 0x079c88e5u,
};

static const uint32_t bshim_178_tab1[96] = {
    0xd2b574f7u, 0x70eceea8u, 0x0f246859u, 0xad5be20au, 0x4b935bbbu, 0xe9cad56cu, 0x88024f1du, 0x2639c8ceu,
    0xc471427fu, 0x62a8bc30u, 0x00e035e1u, 0x9f17af92u, 0x3d4f2943u, 0xdb86a2f4u, 0x79be1ca5u, 0x17f59656u,
    0xb62d1007u, 0x546489b8u, 0xf29c0369u, 0x90d37d1au, 0x2f0af6cbu, 0xcd42707cu, 0x6b79ea2du, 0x09b163deu,
    0xa7e8dd8fu, 0x46205740u, 0xe457d0f1u, 0x828f4aa2u, 0x20c6c453u, 0xbefe3e04u, 0x5d35b7b5u, 0xfb6d3166u,
    0x99a4ab17u, 0x37dc24c8u, 0xd6139e79u, 0x744b182au, 0x128291dbu, 0xb0ba0b8cu, 0x4ef1853du, 0xed28feeeu,
    0x8b60789fu, 0x2997f250u, 0xc7cf6c01u, 0x6606e5b2u, 0x043e5f63u, 0xa275d914u, 0x40ad52c5u, 0xdee4cc76u,
    0x7d1c4627u, 0x1b53bfd8u, 0xb98b3989u, 0x57c2b33au, 0xf5fa2cebu, 0x9431a69cu, 0x3269204du, 0xd0a099feu,
    0x6ed813afu, 0x0d0f8d60u, 0xab470711u, 0x497e80c2u, 0xe7b5fa73u, 0x85ed7424u, 0x2424edd5u, 0xc25c6786u,
    0x6093e137u, 0xfecb5ae8u, 0x9d02d499u, 0x3b3a4e4au, 0xd971c7fbu, 0x77a941acu, 0x15e0bb5du, 0xb418350eu,
    0x524faebfu, 0xf0872870u, 0x8ebea221u, 0x2cf61bd2u, 0xcb2d9583u, 0x69650f34u, 0x079c88e5u, 0xa5d40296u,
    0x440b7c47u, 0xe242f5f8u, 0x807a6fa9u, 0x1eb1e95au, 0xbce9630bu, 0x5b20dcbcu, 0xf958566du, 0x978fd01eu,
    0x35c749cfu, 0xd3fec380u, 0x72363d31u, 0x106db6e2u, 0xaea53093u, 0x4cdcaa44u, 0xeb1423f5u, 0x894b9da6u,
};

static const uint32_t bshim_178_tab2[96] = {
    0x546489b8u, 0xf29c0369u, 0x90d37d1au, 0x2f0af6cbu, 0xcd42707cu, 0x6b79ea2du, 0x09b163deu, 0xa7e8dd8fu,
    0x46205740u, 0xe457d0f1u, 0x828f4aa2u, 0x20c6c453u, 0xbefe3e04u, 0x5d35b7b5u, 0xfb6d3166u, 0x99a4ab17u,
    0x37dc24c8u, 0xd6139e79u, 0x744b182au, 0x128291dbu, 0xb0ba0b8cu, 0x4ef1853du, 0xed28feeeu, 0x8b60789fu,
    0x2997f250u, 0xc7cf6c01u, 0x6606e5b2u, 0x043e5f63u, 0xa275d914u, 0x40ad52c5u, 0xdee4cc76u, 0x7d1c4627u,
    0x1b53bfd8u, 0xb98b3989u, 0x57c2b33au, 0xf5fa2cebu, 0x9431a69cu, 0x3269204du, 0xd0a099feu, 0x6ed813afu,
    0x0d0f8d60u, 0xab470711u, 0x497e80c2u, 0xe7b5fa73u, 0x85ed7424u, 0x2424edd5u, 0xc25c6786u, 0x6093e137u,
    0xfecb5ae8u, 0x9d02d499u, 0x3b3a4e4au, 0xd971c7fbu, 0x77a941acu, 0x15e0bb5du, 0xb418350eu, 0x524faebfu,
    0xf0872870u, 0x8ebea221u, 0x2cf61bd2u, 0xcb2d9583u, 0x69650f34u, 0x079c88e5u, 0xa5d40296u, 0x440b7c47u,
    0xe242f5f8u, 0x807a6fa9u, 0x1eb1e95au, 0xbce9630bu, 0x5b20dcbcu, 0xf958566du, 0x978fd01eu, 0x35c749cfu,
    0xd3fec380u, 0x72363d31u, 0x106db6e2u, 0xaea53093u, 0x4cdcaa44u, 0xeb1423f5u, 0x894b9da6u, 0x27831757u,
    0xc5ba9108u, 0x63f20ab9u, 0x0229846au, 0xa060fe1bu, 0x3e9877ccu, 0xdccff17du, 0x7b076b2eu, 0x193ee4dfu,
    0xb7765e90u, 0x55add841u, 0xf3e551f2u, 0x921ccba3u, 0x30544554u, 0xce8bbf05u, 0x6cc338b6u, 0x0afab267u,
};

static const uint32_t bshim_178_tab3[96] = {
    0xd6139e79u, 0x744b182au, 0x128291dbu, 0xb0ba0b8cu, 0x4ef1853du, 0xed28feeeu, 0x8b60789fu, 0x2997f250u,
    0xc7cf6c01u, 0x6606e5b2u, 0x043e5f63u, 0xa275d914u, 0x40ad52c5u, 0xdee4cc76u, 0x7d1c4627u, 0x1b53bfd8u,
    0xb98b3989u, 0x57c2b33au, 0xf5fa2cebu, 0x9431a69cu, 0x3269204du, 0xd0a099feu, 0x6ed813afu, 0x0d0f8d60u,
    0xab470711u, 0x497e80c2u, 0xe7b5fa73u, 0x85ed7424u, 0x2424edd5u, 0xc25c6786u, 0x6093e137u, 0xfecb5ae8u,
    0x9d02d499u, 0x3b3a4e4au, 0xd971c7fbu, 0x77a941acu, 0x15e0bb5du, 0xb418350eu, 0x524faebfu, 0xf0872870u,
    0x8ebea221u, 0x2cf61bd2u, 0xcb2d9583u, 0x69650f34u, 0x079c88e5u, 0xa5d40296u, 0x440b7c47u, 0xe242f5f8u,
    0x807a6fa9u, 0x1eb1e95au, 0xbce9630bu, 0x5b20dcbcu, 0xf958566du, 0x978fd01eu, 0x35c749cfu, 0xd3fec380u,
    0x72363d31u, 0x106db6e2u, 0xaea53093u, 0x4cdcaa44u, 0xeb1423f5u, 0x894b9da6u, 0x27831757u, 0xc5ba9108u,
    0x63f20ab9u, 0x0229846au, 0xa060fe1bu, 0x3e9877ccu, 0xdccff17du, 0x7b076b2eu, 0x193ee4dfu, 0xb7765e90u,
    0x55add841u, 0xf3e551f2u, 0x921ccba3u, 0x30544554u, 0xce8bbf05u, 0x6cc338b6u, 0x0afab267u, 0xa9322c18u,
    0x4769a5c9u, 0xe5a11f7au, 0x83d8992bu, 0x221012dcu, 0xc0478c8du, 0x5e7f063eu, 0xfcb67fefu, 0x9aedf9a0u,
    0x39257351u, 0xd75ced02u, 0x759466b3u, 0x13cbe064u, 0xb2035a15u, 0x503ad3c6u, 0xee724d77u, 0x8ca9c728u,
};

static const uint32_t bshim_178_tab4[96] = {
    0x57c2b33au, 0xf5fa2cebu, 0x9431a69cu, 0x3269204du, 0xd0a099feu, 0x6ed813afu, 0x0d0f8d60u, 0xab470711u,
    0x497e80c2u, 0xe7b5fa73u, 0x85ed7424u, 0x2424edd5u, 0xc25c6786u, 0x6093e137u, 0xfecb5ae8u, 0x9d02d499u,
    0x3b3a4e4au, 0xd971c7fbu, 0x77a941acu, 0x15e0bb5du, 0xb418350eu, 0x524faebfu, 0xf0872870u, 0x8ebea221u,
    0x2cf61bd2u, 0xcb2d9583u, 0x69650f34u, 0x079c88e5u, 0xa5d40296u, 0x440b7c47u, 0xe242f5f8u, 0x807a6fa9u,
    0x1eb1e95au, 0xbce9630bu, 0x5b20dcbcu, 0xf958566du, 0x978fd01eu, 0x35c749cfu, 0xd3fec380u, 0x72363d31u,
    0x106db6e2u, 0xaea53093u, 0x4cdcaa44u, 0xeb1423f5u, 0x894b9da6u, 0x27831757u, 0xc5ba9108u, 0x63f20ab9u,
    0x0229846au, 0xa060fe1bu, 0x3e9877ccu, 0xdccff17du, 0x7b076b2eu, 0x193ee4dfu, 0xb7765e90u, 0x55add841u,
    0xf3e551f2u, 0x921ccba3u, 0x30544554u, 0xce8bbf05u, 0x6cc338b6u, 0x0afab267u, 0xa9322c18u, 0x4769a5c9u,
    0xe5a11f7au, 0x83d8992bu, 0x221012dcu, 0xc0478c8du, 0x5e7f063eu, 0xfcb67fefu, 0x9aedf9a0u, 0x39257351u,
    0xd75ced02u, 0x759466b3u, 0x13cbe064u, 0xb2035a15u, 0x503ad3c6u, 0xee724d77u, 0x8ca9c728u, 0x2ae140d9u,
    0xc918ba8au, 0x6750343bu, 0x0587adecu, 0xa3bf279du, 0x41f6a14eu, 0xe02e1affu, 0x7e6594b0u, 0x1c9d0e61u,
    0xbad48812u, 0x590c01c3u, 0xf7437b74u, 0x957af525u, 0x33b26ed6u, 0xd1e9e887u, 0x70216238u, 0x0e58dbe9u,
};

static const uint32_t bshim_178_tab5[96] = {
    0xd971c7fbu, 0x77a941acu, 0x15e0bb5du, 0xb418350eu, 0x524faebfu, 0xf0872870u, 0x8ebea221u, 0x2cf61bd2u,
    0xcb2d9583u, 0x69650f34u, 0x079c88e5u, 0xa5d40296u, 0x440b7c47u, 0xe242f5f8u, 0x807a6fa9u, 0x1eb1e95au,
    0xbce9630bu, 0x5b20dcbcu, 0xf958566du, 0x978fd01eu, 0x35c749cfu, 0xd3fec380u, 0x72363d31u, 0x106db6e2u,
    0xaea53093u, 0x4cdcaa44u, 0xeb1423f5u, 0x894b9da6u, 0x27831757u, 0xc5ba9108u, 0x63f20ab9u, 0x0229846au,
    0xa060fe1bu, 0x3e9877ccu, 0xdccff17du, 0x7b076b2eu, 0x193ee4dfu, 0xb7765e90u, 0x55add841u, 0xf3e551f2u,
    0x921ccba3u, 0x30544554u, 0xce8bbf05u, 0x6cc338b6u, 0x0afab267u, 0xa9322c18u, 0x4769a5c9u, 0xe5a11f7au,
    0x83d8992bu, 0x221012dcu, 0xc0478c8du, 0x5e7f063eu, 0xfcb67fefu, 0x9aedf9a0u, 0x39257351u, 0xd75ced02u,
    0x759466b3u, 0x13cbe064u, 0xb2035a15u, 0x503ad3c6u, 0xee724d77u, 0x8ca9c728u, 0x2ae140d9u, 0xc918ba8au,
    0x6750343bu, 0x0587adecu, 0xa3bf279du, 0x41f6a14eu, 0xe02e1affu, 0x7e6594b0u, 0x1c9d0e61u, 0xbad48812u,
    0x590c01c3u, 0xf7437b74u, 0x957af525u, 0x33b26ed6u, 0xd1e9e887u, 0x70216238u, 0x0e58dbe9u, 0xac90559au,
    0x4ac7cf4bu, 0xe8ff48fcu, 0x8736c2adu, 0x256e3c5eu, 0xc3a5b60fu, 0x61dd2fc0u, 0x0014a971u, 0x9e4c2322u,
    0x3c839cd3u, 0xdabb1684u, 0x78f29035u, 0x172a09e6u, 0xb5618397u, 0x5398fd48u, 0xf1d076f9u, 0x9007f0aau,
};

static const uint32_t bshim_178_tab6[96] = {
    0x5b20dcbcu, 0xf958566du, 0x978fd01eu, 0x35c749cfu, 0xd3fec380u, 0x72363d31u, 0x106db6e2u, 0xaea53093u,
    0x4cdcaa44u, 0xeb1423f5u, 0x894b9da6u, 0x27831757u, 0xc5ba9108u, 0x63f20ab9u, 0x0229846au, 0xa060fe1bu,
    0x3e9877ccu, 0xdccff17du, 0x7b076b2eu, 0x193ee4dfu, 0xb7765e90u, 0x55add841u, 0xf3e551f2u, 0x921ccba3u,
    0x30544554u, 0xce8bbf05u, 0x6cc338b6u, 0x0afab267u, 0xa9322c18u, 0x4769a5c9u, 0xe5a11f7au, 0x83d8992bu,
    0x221012dcu, 0xc0478c8du, 0x5e7f063eu, 0xfcb67fefu, 0x9aedf9a0u, 0x39257351u, 0xd75ced02u, 0x759466b3u,
    0x13cbe064u, 0xb2035a15u, 0x503ad3c6u, 0xee724d77u, 0x8ca9c728u, 0x2ae140d9u, 0xc918ba8au, 0x6750343bu,
    0x0587adecu, 0xa3bf279du, 0x41f6a14eu, 0xe02e1affu, 0x7e6594b0u, 0x1c9d0e61u, 0xbad48812u, 0x590c01c3u,
    0xf7437b74u, 0x957af525u, 0x33b26ed6u, 0xd1e9e887u, 0x70216238u, 0x0e58dbe9u, 0xac90559au, 0x4ac7cf4bu,
    0xe8ff48fcu, 0x8736c2adu, 0x256e3c5eu, 0xc3a5b60fu, 0x61dd2fc0u, 0x0014a971u, 0x9e4c2322u, 0x3c839cd3u,
    0xdabb1684u, 0x78f29035u, 0x172a09e6u, 0xb5618397u, 0x5398fd48u, 0xf1d076f9u, 0x9007f0aau, 0x2e3f6a5bu,
    0xcc76e40cu, 0x6aae5dbdu, 0x08e5d76eu, 0xa71d511fu, 0x4554cad0u, 0xe38c4481u, 0x81c3be32u, 0x1ffb37e3u,
    0xbe32b194u, 0x5c6a2b45u, 0xfaa1a4f6u, 0x98d91ea7u, 0x37109858u, 0xd5481209u, 0x737f8bbau, 0x11b7056bu,
};

static const uint32_t bshim_178_tab7[96] = {
    0xdccff17du, 0x7b076b2eu, 0x193ee4dfu, 0xb7765e90u, 0x55add841u, 0xf3e551f2u, 0x921ccba3u, 0x30544554u,
    0xce8bbf05u, 0x6cc338b6u, 0x0afab267u, 0xa9322c18u, 0x4769a5c9u, 0xe5a11f7au, 0x83d8992bu, 0x221012dcu,
    0xc0478c8du, 0x5e7f063eu, 0xfcb67fefu, 0x9aedf9a0u, 0x39257351u, 0xd75ced02u, 0x759466b3u, 0x13cbe064u,
    0xb2035a15u, 0x503ad3c6u, 0xee724d77u, 0x8ca9c728u, 0x2ae140d9u, 0xc918ba8au, 0x6750343bu, 0x0587adecu,
    0xa3bf279du, 0x41f6a14eu, 0xe02e1affu, 0x7e6594b0u, 0x1c9d0e61u, 0xbad48812u, 0x590c01c3u, 0xf7437b74u,
    0x957af525u, 0x33b26ed6u, 0xd1e9e887u, 0x70216238u, 0x0e58dbe9u, 0xac90559au, 0x4ac7cf4bu, 0xe8ff48fcu,
    0x8736c2adu, 0x256e3c5eu, 0xc3a5b60fu, 0x61dd2fc0u, 0x0014a971u, 0x9e4c2322u, 0x3c839cd3u, 0xdabb1684u,
    0x78f29035u, 0x172a09e6u, 0xb5618397u, 0x5398fd48u, 0xf1d076f9u, 0x9007f0aau, 0x2e3f6a5bu, 0xcc76e40cu,
    0x6aae5dbdu, 0x08e5d76eu, 0xa71d511fu, 0x4554cad0u, 0xe38c4481u, 0x81c3be32u, 0x1ffb37e3u, 0xbe32b194u,
    0x5c6a2b45u, 0xfaa1a4f6u, 0x98d91ea7u, 0x37109858u, 0xd5481209u, 0x737f8bbau, 0x11b7056bu, 0xafee7f1cu,
    0x4e25f8cdu, 0xec5d727eu, 0x8a94ec2fu, 0x28cc65e0u, 0xc703df91u, 0x653b5942u, 0x0372d2f3u, 0xa1aa4ca4u,
    0x3fe1c655u, 0xde194006u, 0x7c50b9b7u, 0x1a883368u, 0xb8bfad19u, 0x56f726cau, 0xf52ea07bu, 0x93661a2cu,
};

struct bshim_178_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_178_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1df2c6beu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_178_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_178_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_178_reset(struct bshim_178_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0015822eu;
    return 0;
}

