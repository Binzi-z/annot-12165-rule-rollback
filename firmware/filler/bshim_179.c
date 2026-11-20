/* bshim_179 -- board support shim generated from the 0179 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_179_tab0[96] = {
    0x4769a5c9u, 0xe5a11f7au, 0x83d8992bu, 0x221012dcu, 0xc0478c8du, 0x5e7f063eu, 0xfcb67fefu, 0x9aedf9a0u,
    0x39257351u, 0xd75ced02u, 0x759466b3u, 0x13cbe064u, 0xb2035a15u, 0x503ad3c6u, 0xee724d77u, 0x8ca9c728u,
    0x2ae140d9u, 0xc918ba8au, 0x6750343bu, 0x0587adecu, 0xa3bf279du, 0x41f6a14eu, 0xe02e1affu, 0x7e6594b0u,
    0x1c9d0e61u, 0xbad48812u, 0x590c01c3u, 0xf7437b74u, 0x957af525u, 0x33b26ed6u, 0xd1e9e887u, 0x70216238u,
    0x0e58dbe9u, 0xac90559au, 0x4ac7cf4bu, 0xe8ff48fcu, 0x8736c2adu, 0x256e3c5eu, 0xc3a5b60fu, 0x61dd2fc0u,
    0x0014a971u, 0x9e4c2322u, 0x3c839cd3u, 0xdabb1684u, 0x78f29035u, 0x172a09e6u, 0xb5618397u, 0x5398fd48u,
    0xf1d076f9u, 0x9007f0aau, 0x2e3f6a5bu, 0xcc76e40cu, 0x6aae5dbdu, 0x08e5d76eu, 0xa71d511fu, 0x4554cad0u,
    0xe38c4481u, 0x81c3be32u, 0x1ffb37e3u, 0xbe32b194u, 0x5c6a2b45u, 0xfaa1a4f6u, 0x98d91ea7u, 0x37109858u,
    0xd5481209u, 0x737f8bbau, 0x11b7056bu, 0xafee7f1cu, 0x4e25f8cdu, 0xec5d727eu, 0x8a94ec2fu, 0x28cc65e0u,
    0xc703df91u, 0x653b5942u, 0x0372d2f3u, 0xa1aa4ca4u, 0x3fe1c655u, 0xde194006u, 0x7c50b9b7u, 0x1a883368u,
    0xb8bfad19u, 0x56f726cau, 0xf52ea07bu, 0x93661a2cu, 0x319d93ddu, 0xcfd50d8eu, 0x6e0c873fu, 0x0c4400f0u,
    0xaa7b7aa1u, 0x48b2f452u, 0xe6ea6e03u, 0x8521e7b4u, 0x23596165u, 0xc190db16u, 0x5fc854c7u, 0xfdffce78u,
};

static const uint32_t bshim_179_tab1[96] = {
    0xc918ba8au, 0x6750343bu, 0x0587adecu, 0xa3bf279du, 0x41f6a14eu, 0xe02e1affu, 0x7e6594b0u, 0x1c9d0e61u,
    0xbad48812u, 0x590c01c3u, 0xf7437b74u, 0x957af525u, 0x33b26ed6u, 0xd1e9e887u, 0x70216238u, 0x0e58dbe9u,
    0xac90559au, 0x4ac7cf4bu, 0xe8ff48fcu, 0x8736c2adu, 0x256e3c5eu, 0xc3a5b60fu, 0x61dd2fc0u, 0x0014a971u,
    0x9e4c2322u, 0x3c839cd3u, 0xdabb1684u, 0x78f29035u, 0x172a09e6u, 0xb5618397u, 0x5398fd48u, 0xf1d076f9u,
    0x9007f0aau, 0x2e3f6a5bu, 0xcc76e40cu, 0x6aae5dbdu, 0x08e5d76eu, 0xa71d511fu, 0x4554cad0u, 0xe38c4481u,
    0x81c3be32u, 0x1ffb37e3u, 0xbe32b194u, 0x5c6a2b45u, 0xfaa1a4f6u, 0x98d91ea7u, 0x37109858u, 0xd5481209u,
    0x737f8bbau, 0x11b7056bu, 0xafee7f1cu, 0x4e25f8cdu, 0xec5d727eu, 0x8a94ec2fu, 0x28cc65e0u, 0xc703df91u,
    0x653b5942u, 0x0372d2f3u, 0xa1aa4ca4u, 0x3fe1c655u, 0xde194006u, 0x7c50b9b7u, 0x1a883368u, 0xb8bfad19u,
    0x56f726cau, 0xf52ea07bu, 0x93661a2cu, 0x319d93ddu, 0xcfd50d8eu, 0x6e0c873fu, 0x0c4400f0u, 0xaa7b7aa1u,
    0x48b2f452u, 0xe6ea6e03u, 0x8521e7b4u, 0x23596165u, 0xc190db16u, 0x5fc854c7u, 0xfdffce78u, 0x9c374829u,
    0x3a6ec1dau, 0xd8a63b8bu, 0x76ddb53cu, 0x15152eedu, 0xb34ca89eu, 0x5184224fu, 0xefbb9c00u, 0x8df315b1u,
    0x2c2a8f62u, 0xca620913u, 0x689982c4u, 0x06d0fc75u, 0xa5087626u, 0x433fefd7u, 0xe1776988u, 0x7faee339u,
};

static const uint32_t bshim_179_tab2[96] = {
    0x4ac7cf4bu, 0xe8ff48fcu, 0x8736c2adu, 0x256e3c5eu, 0xc3a5b60fu, 0x61dd2fc0u, 0x0014a971u, 0x9e4c2322u,
    0x3c839cd3u, 0xdabb1684u, 0x78f29035u, 0x172a09e6u, 0xb5618397u, 0x5398fd48u, 0xf1d076f9u, 0x9007f0aau,
    0x2e3f6a5bu, 0xcc76e40cu, 0x6aae5dbdu, 0x08e5d76eu, 0xa71d511fu, 0x4554cad0u, 0xe38c4481u, 0x81c3be32u,
    0x1ffb37e3u, 0xbe32b194u, 0x5c6a2b45u, 0xfaa1a4f6u, 0x98d91ea7u, 0x37109858u, 0xd5481209u, 0x737f8bbau,
    0x11b7056bu, 0xafee7f1cu, 0x4e25f8cdu, 0xec5d727eu, 0x8a94ec2fu, 0x28cc65e0u, 0xc703df91u, 0x653b5942u,
    0x0372d2f3u, 0xa1aa4ca4u, 0x3fe1c655u, 0xde194006u, 0x7c50b9b7u, 0x1a883368u, 0xb8bfad19u, 0x56f726cau,
    0xf52ea07bu, 0x93661a2cu, 0x319d93ddu, 0xcfd50d8eu, 0x6e0c873fu, 0x0c4400f0u, 0xaa7b7aa1u, 0x48b2f452u,
    0xe6ea6e03u, 0x8521e7b4u, 0x23596165u, 0xc190db16u, 0x5fc854c7u, 0xfdffce78u, 0x9c374829u, 0x3a6ec1dau,
    0xd8a63b8bu, 0x76ddb53cu, 0x15152eedu, 0xb34ca89eu, 0x5184224fu, 0xefbb9c00u, 0x8df315b1u, 0x2c2a8f62u,
    0xca620913u, 0x689982c4u, 0x06d0fc75u, 0xa5087626u, 0x433fefd7u, 0xe1776988u, 0x7faee339u, 0x1de65ceau,
    0xbc1dd69bu, 0x5a55504cu, 0xf88cc9fdu, 0x96c443aeu, 0x34fbbd5fu, 0xd3333710u, 0x716ab0c1u, 0x0fa22a72u,
    0xadd9a423u, 0x4c111dd4u, 0xea489785u, 0x88801136u, 0x26b78ae7u, 0xc4ef0498u, 0x63267e49u, 0x015df7fau,
};

static const uint32_t bshim_179_tab3[96] = {
    0xcc76e40cu, 0x6aae5dbdu, 0x08e5d76eu, 0xa71d511fu, 0x4554cad0u, 0xe38c4481u, 0x81c3be32u, 0x1ffb37e3u,
    0xbe32b194u, 0x5c6a2b45u, 0xfaa1a4f6u, 0x98d91ea7u, 0x37109858u, 0xd5481209u, 0x737f8bbau, 0x11b7056bu,
    0xafee7f1cu, 0x4e25f8cdu, 0xec5d727eu, 0x8a94ec2fu, 0x28cc65e0u, 0xc703df91u, 0x653b5942u, 0x0372d2f3u,
    0xa1aa4ca4u, 0x3fe1c655u, 0xde194006u, 0x7c50b9b7u, 0x1a883368u, 0xb8bfad19u, 0x56f726cau, 0xf52ea07bu,
    0x93661a2cu, 0x319d93ddu, 0xcfd50d8eu, 0x6e0c873fu, 0x0c4400f0u, 0xaa7b7aa1u, 0x48b2f452u, 0xe6ea6e03u,
    0x8521e7b4u, 0x23596165u, 0xc190db16u, 0x5fc854c7u, 0xfdffce78u, 0x9c374829u, 0x3a6ec1dau, 0xd8a63b8bu,
    0x76ddb53cu, 0x15152eedu, 0xb34ca89eu, 0x5184224fu, 0xefbb9c00u, 0x8df315b1u, 0x2c2a8f62u, 0xca620913u,
    0x689982c4u, 0x06d0fc75u, 0xa5087626u, 0x433fefd7u, 0xe1776988u, 0x7faee339u, 0x1de65ceau, 0xbc1dd69bu,
    0x5a55504cu, 0xf88cc9fdu, 0x96c443aeu, 0x34fbbd5fu, 0xd3333710u, 0x716ab0c1u, 0x0fa22a72u, 0xadd9a423u,
    0x4c111dd4u, 0xea489785u, 0x88801136u, 0x26b78ae7u, 0xc4ef0498u, 0x63267e49u, 0x015df7fau, 0x9f9571abu,
    0x3dcceb5cu, 0xdc04650du, 0x7a3bdebeu, 0x1873586fu, 0xb6aad220u, 0x54e24bd1u, 0xf319c582u, 0x91513f33u,
    0x2f88b8e4u, 0xcdc03295u, 0x6bf7ac46u, 0x0a2f25f7u, 0xa8669fa8u, 0x469e1959u, 0xe4d5930au, 0x830d0cbbu,
};

static const uint32_t bshim_179_tab4[96] = {
    0x4e25f8cdu, 0xec5d727eu, 0x8a94ec2fu, 0x28cc65e0u, 0xc703df91u, 0x653b5942u, 0x0372d2f3u, 0xa1aa4ca4u,
    0x3fe1c655u, 0xde194006u, 0x7c50b9b7u, 0x1a883368u, 0xb8bfad19u, 0x56f726cau, 0xf52ea07bu, 0x93661a2cu,
    0x319d93ddu, 0xcfd50d8eu, 0x6e0c873fu, 0x0c4400f0u, 0xaa7b7aa1u, 0x48b2f452u, 0xe6ea6e03u, 0x8521e7b4u,
    0x23596165u, 0xc190db16u, 0x5fc854c7u, 0xfdffce78u, 0x9c374829u, 0x3a6ec1dau, 0xd8a63b8bu, 0x76ddb53cu,
    0x15152eedu, 0xb34ca89eu, 0x5184224fu, 0xefbb9c00u, 0x8df315b1u, 0x2c2a8f62u, 0xca620913u, 0x689982c4u,
    0x06d0fc75u, 0xa5087626u, 0x433fefd7u, 0xe1776988u, 0x7faee339u, 0x1de65ceau, 0xbc1dd69bu, 0x5a55504cu,
    0xf88cc9fdu, 0x96c443aeu, 0x34fbbd5fu, 0xd3333710u, 0x716ab0c1u, 0x0fa22a72u, 0xadd9a423u, 0x4c111dd4u,
    0xea489785u, 0x88801136u, 0x26b78ae7u, 0xc4ef0498u, 0x63267e49u, 0x015df7fau, 0x9f9571abu, 0x3dcceb5cu,
    0xdc04650du, 0x7a3bdebeu, 0x1873586fu, 0xb6aad220u, 0x54e24bd1u, 0xf319c582u, 0x91513f33u, 0x2f88b8e4u,
    0xcdc03295u, 0x6bf7ac46u, 0x0a2f25f7u, 0xa8669fa8u, 0x469e1959u, 0xe4d5930au, 0x830d0cbbu, 0x2144866cu,
    0xbf7c001du, 0x5db379ceu, 0xfbeaf37fu, 0x9a226d30u, 0x3859e6e1u, 0xd6916092u, 0x74c8da43u, 0x130053f4u,
    0xb137cda5u, 0x4f6f4756u, 0xeda6c107u, 0x8bde3ab8u, 0x2a15b469u, 0xc84d2e1au, 0x6684a7cbu, 0x04bc217cu,
};

static const uint32_t bshim_179_tab5[96] = {
    0xcfd50d8eu, 0x6e0c873fu, 0x0c4400f0u, 0xaa7b7aa1u, 0x48b2f452u, 0xe6ea6e03u, 0x8521e7b4u, 0x23596165u,
    0xc190db16u, 0x5fc854c7u, 0xfdffce78u, 0x9c374829u, 0x3a6ec1dau, 0xd8a63b8bu, 0x76ddb53cu, 0x15152eedu,
    0xb34ca89eu, 0x5184224fu, 0xefbb9c00u, 0x8df315b1u, 0x2c2a8f62u, 0xca620913u, 0x689982c4u, 0x06d0fc75u,
    0xa5087626u, 0x433fefd7u, 0xe1776988u, 0x7faee339u, 0x1de65ceau, 0xbc1dd69bu, 0x5a55504cu, 0xf88cc9fdu,
    0x96c443aeu, 0x34fbbd5fu, 0xd3333710u, 0x716ab0c1u, 0x0fa22a72u, 0xadd9a423u, 0x4c111dd4u, 0xea489785u,
    0x88801136u, 0x26b78ae7u, 0xc4ef0498u, 0x63267e49u, 0x015df7fau, 0x9f9571abu, 0x3dcceb5cu, 0xdc04650du,
    0x7a3bdebeu, 0x1873586fu, 0xb6aad220u, 0x54e24bd1u, 0xf319c582u, 0x91513f33u, 0x2f88b8e4u, 0xcdc03295u,
    0x6bf7ac46u, 0x0a2f25f7u, 0xa8669fa8u, 0x469e1959u, 0xe4d5930au, 0x830d0cbbu, 0x2144866cu, 0xbf7c001du,
    0x5db379ceu, 0xfbeaf37fu, 0x9a226d30u, 0x3859e6e1u, 0xd6916092u, 0x74c8da43u, 0x130053f4u, 0xb137cda5u,
    0x4f6f4756u, 0xeda6c107u, 0x8bde3ab8u, 0x2a15b469u, 0xc84d2e1au, 0x6684a7cbu, 0x04bc217cu, 0xa2f39b2du,
    0x412b14deu, 0xdf628e8fu, 0x7d9a0840u, 0x1bd181f1u, 0xba08fba2u, 0x58407553u, 0xf677ef04u, 0x94af68b5u,
    0x32e6e266u, 0xd11e5c17u, 0x6f55d5c8u, 0x0d8d4f79u, 0xabc4c92au, 0x49fc42dbu, 0xe833bc8cu, 0x866b363du,
};

static const uint32_t bshim_179_tab6[96] = {
    0x5184224fu, 0xefbb9c00u, 0x8df315b1u, 0x2c2a8f62u, 0xca620913u, 0x689982c4u, 0x06d0fc75u, 0xa5087626u,
    0x433fefd7u, 0xe1776988u, 0x7faee339u, 0x1de65ceau, 0xbc1dd69bu, 0x5a55504cu, 0xf88cc9fdu, 0x96c443aeu,
    0x34fbbd5fu, 0xd3333710u, 0x716ab0c1u, 0x0fa22a72u, 0xadd9a423u, 0x4c111dd4u, 0xea489785u, 0x88801136u,
    0x26b78ae7u, 0xc4ef0498u, 0x63267e49u, 0x015df7fau, 0x9f9571abu, 0x3dcceb5cu, 0xdc04650du, 0x7a3bdebeu,
    0x1873586fu, 0xb6aad220u, 0x54e24bd1u, 0xf319c582u, 0x91513f33u, 0x2f88b8e4u, 0xcdc03295u, 0x6bf7ac46u,
    0x0a2f25f7u, 0xa8669fa8u, 0x469e1959u, 0xe4d5930au, 0x830d0cbbu, 0x2144866cu, 0xbf7c001du, 0x5db379ceu,
    0xfbeaf37fu, 0x9a226d30u, 0x3859e6e1u, 0xd6916092u, 0x74c8da43u, 0x130053f4u, 0xb137cda5u, 0x4f6f4756u,
    0xeda6c107u, 0x8bde3ab8u, 0x2a15b469u, 0xc84d2e1au, 0x6684a7cbu, 0x04bc217cu, 0xa2f39b2du, 0x412b14deu,
    0xdf628e8fu, 0x7d9a0840u, 0x1bd181f1u, 0xba08fba2u, 0x58407553u, 0xf677ef04u, 0x94af68b5u, 0x32e6e266u,
    0xd11e5c17u, 0x6f55d5c8u, 0x0d8d4f79u, 0xabc4c92au, 0x49fc42dbu, 0xe833bc8cu, 0x866b363du, 0x24a2afeeu,
    0xc2da299fu, 0x6111a350u, 0xff491d01u, 0x9d8096b2u, 0x3bb81063u, 0xd9ef8a14u, 0x782703c5u, 0x165e7d76u,
    0xb495f727u, 0x52cd70d8u, 0xf104ea89u, 0x8f3c643au, 0x2d73ddebu, 0xcbab579cu, 0x69e2d14du, 0x081a4afeu,
};

static const uint32_t bshim_179_tab7[96] = {
    0xd3333710u, 0x716ab0c1u, 0x0fa22a72u, 0xadd9a423u, 0x4c111dd4u, 0xea489785u, 0x88801136u, 0x26b78ae7u,
    0xc4ef0498u, 0x63267e49u, 0x015df7fau, 0x9f9571abu, 0x3dcceb5cu, 0xdc04650du, 0x7a3bdebeu, 0x1873586fu,
    0xb6aad220u, 0x54e24bd1u, 0xf319c582u, 0x91513f33u, 0x2f88b8e4u, 0xcdc03295u, 0x6bf7ac46u, 0x0a2f25f7u,
    0xa8669fa8u, 0x469e1959u, 0xe4d5930au, 0x830d0cbbu, 0x2144866cu, 0xbf7c001du, 0x5db379ceu, 0xfbeaf37fu,
    0x9a226d30u, 0x3859e6e1u, 0xd6916092u, 0x74c8da43u, 0x130053f4u, 0xb137cda5u, 0x4f6f4756u, 0xeda6c107u,
    0x8bde3ab8u, 0x2a15b469u, 0xc84d2e1au, 0x6684a7cbu, 0x04bc217cu, 0xa2f39b2du, 0x412b14deu, 0xdf628e8fu,
    0x7d9a0840u, 0x1bd181f1u, 0xba08fba2u, 0x58407553u, 0xf677ef04u, 0x94af68b5u, 0x32e6e266u, 0xd11e5c17u,
    0x6f55d5c8u, 0x0d8d4f79u, 0xabc4c92au, 0x49fc42dbu, 0xe833bc8cu, 0x866b363du, 0x24a2afeeu, 0xc2da299fu,
    0x6111a350u, 0xff491d01u, 0x9d8096b2u, 0x3bb81063u, 0xd9ef8a14u, 0x782703c5u, 0x165e7d76u, 0xb495f727u,
    0x52cd70d8u, 0xf104ea89u, 0x8f3c643au, 0x2d73ddebu, 0xcbab579cu, 0x69e2d14du, 0x081a4afeu, 0xa651c4afu,
    0x44893e60u, 0xe2c0b811u, 0x80f831c2u, 0x1f2fab73u, 0xbd672524u, 0x5b9e9ed5u, 0xf9d61886u, 0x980d9237u,
    0x36450be8u, 0xd47c8599u, 0x72b3ff4au, 0x10eb78fbu, 0xaf22f2acu, 0x4d5a6c5du, 0xeb91e60eu, 0x89c95fbfu,
};

struct bshim_179_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_179_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa3de9135u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x29ca5bacu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xafb62623u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x35a1f09au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbb8dbb11u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x41798588u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc7654fffu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4d511a76u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd33ce4edu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5928af64u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdf1479dbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65004452u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xeaec0ec9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x70d7d940u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf6c3a3b7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7caf6e2eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x029b38a5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8887031cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0e72cd93u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x945e980au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1a4a6281u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa0362cf8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2621f76fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xac0dc1e6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x31f98c5du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb7e556d4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3dd1214bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc3bcebc2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x49a8b639u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcf9480b0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x55804b27u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdb6c159eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6157e015u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe743aa8cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6d2f7503u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_179_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_179_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_179_reset(struct bshim_179_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0015a11du;
    return 0;
}

