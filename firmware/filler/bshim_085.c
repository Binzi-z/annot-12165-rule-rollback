/* bshim_085 -- board support shim generated from the 0085 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_085_tab0[96] = {
    0xcef619cfu, 0x6d2d9380u, 0x0b650d31u, 0xa99c86e2u, 0x47d40093u, 0xe60b7a44u, 0x8442f3f5u, 0x227a6da6u,
    0xc0b1e757u, 0x5ee96108u, 0xfd20dab9u, 0x9b58546au, 0x398fce1bu, 0xd7c747ccu, 0x75fec17du, 0x14363b2eu,
    0xb26db4dfu, 0x50a52e90u, 0xeedca841u, 0x8d1421f2u, 0x2b4b9ba3u, 0xc9831554u, 0x67ba8f05u, 0x05f208b6u,
    0xa4298267u, 0x4260fc18u, 0xe09875c9u, 0x7ecfef7au, 0x1d07692bu, 0xbb3ee2dcu, 0x59765c8du, 0xf7add63eu,
    0x95e54fefu, 0x341cc9a0u, 0xd2544351u, 0x708bbd02u, 0x0ec336b3u, 0xacfab064u, 0x4b322a15u, 0xe969a3c6u,
    0x87a11d77u, 0x25d89728u, 0xc41010d9u, 0x62478a8au, 0x007f043bu, 0x9eb67decu, 0x3cedf79du, 0xdb25714eu,
    0x795ceaffu, 0x179464b0u, 0xb5cbde61u, 0x54035812u, 0xf23ad1c3u, 0x90724b74u, 0x2ea9c525u, 0xcce13ed6u,
    0x6b18b887u, 0x09503238u, 0xa787abe9u, 0x45bf259au, 0xe3f69f4bu, 0x822e18fcu, 0x206592adu, 0xbe9d0c5eu,
    0x5cd4860fu, 0xfb0bffc0u, 0x99437971u, 0x377af322u, 0xd5b26cd3u, 0x73e9e684u, 0x12216035u, 0xb058d9e6u,
    0x4e905397u, 0xecc7cd48u, 0x8aff46f9u, 0x2936c0aau, 0xc76e3a5bu, 0x65a5b40cu, 0x03dd2dbdu, 0xa214a76eu,
    0x404c211fu, 0xde839ad0u, 0x7cbb1481u, 0x1af28e32u, 0xb92a07e3u, 0x57618194u, 0xf598fb45u, 0x93d074f6u,
    0x3207eea7u, 0xd03f6858u, 0x6e76e209u, 0x0cae5bbau, 0xaae5d56bu, 0x491d4f1cu, 0xe754c8cdu, 0x858c427eu,
};

static const uint32_t bshim_085_tab1[96] = {
    0x50a52e90u, 0xeedca841u, 0x8d1421f2u, 0x2b4b9ba3u, 0xc9831554u, 0x67ba8f05u, 0x05f208b6u, 0xa4298267u,
    0x4260fc18u, 0xe09875c9u, 0x7ecfef7au, 0x1d07692bu, 0xbb3ee2dcu, 0x59765c8du, 0xf7add63eu, 0x95e54fefu,
    0x341cc9a0u, 0xd2544351u, 0x708bbd02u, 0x0ec336b3u, 0xacfab064u, 0x4b322a15u, 0xe969a3c6u, 0x87a11d77u,
    0x25d89728u, 0xc41010d9u, 0x62478a8au, 0x007f043bu, 0x9eb67decu, 0x3cedf79du, 0xdb25714eu, 0x795ceaffu,
    0x179464b0u, 0xb5cbde61u, 0x54035812u, 0xf23ad1c3u, 0x90724b74u, 0x2ea9c525u, 0xcce13ed6u, 0x6b18b887u,
    0x09503238u, 0xa787abe9u, 0x45bf259au, 0xe3f69f4bu, 0x822e18fcu, 0x206592adu, 0xbe9d0c5eu, 0x5cd4860fu,
    0xfb0bffc0u, 0x99437971u, 0x377af322u, 0xd5b26cd3u, 0x73e9e684u, 0x12216035u, 0xb058d9e6u, 0x4e905397u,
    0xecc7cd48u, 0x8aff46f9u, 0x2936c0aau, 0xc76e3a5bu, 0x65a5b40cu, 0x03dd2dbdu, 0xa214a76eu, 0x404c211fu,
    0xde839ad0u, 0x7cbb1481u, 0x1af28e32u, 0xb92a07e3u, 0x57618194u, 0xf598fb45u, 0x93d074f6u, 0x3207eea7u,
    0xd03f6858u, 0x6e76e209u, 0x0cae5bbau, 0xaae5d56bu, 0x491d4f1cu, 0xe754c8cdu, 0x858c427eu, 0x23c3bc2fu,
    0xc1fb35e0u, 0x6032af91u, 0xfe6a2942u, 0x9ca1a2f3u, 0x3ad91ca4u, 0xd9109655u, 0x77481006u, 0x157f89b7u,
    0xb3b70368u, 0x51ee7d19u, 0xf025f6cau, 0x8e5d707bu, 0x2c94ea2cu, 0xcacc63ddu, 0x6903dd8eu, 0x073b573fu,
};

static const uint32_t bshim_085_tab2[96] = {
    0xd2544351u, 0x708bbd02u, 0x0ec336b3u, 0xacfab064u, 0x4b322a15u, 0xe969a3c6u, 0x87a11d77u, 0x25d89728u,
    0xc41010d9u, 0x62478a8au, 0x007f043bu, 0x9eb67decu, 0x3cedf79du, 0xdb25714eu, 0x795ceaffu, 0x179464b0u,
    0xb5cbde61u, 0x54035812u, 0xf23ad1c3u, 0x90724b74u, 0x2ea9c525u, 0xcce13ed6u, 0x6b18b887u, 0x09503238u,
    0xa787abe9u, 0x45bf259au, 0xe3f69f4bu, 0x822e18fcu, 0x206592adu, 0xbe9d0c5eu, 0x5cd4860fu, 0xfb0bffc0u,
    0x99437971u, 0x377af322u, 0xd5b26cd3u, 0x73e9e684u, 0x12216035u, 0xb058d9e6u, 0x4e905397u, 0xecc7cd48u,
    0x8aff46f9u, 0x2936c0aau, 0xc76e3a5bu, 0x65a5b40cu, 0x03dd2dbdu, 0xa214a76eu, 0x404c211fu, 0xde839ad0u,
    0x7cbb1481u, 0x1af28e32u, 0xb92a07e3u, 0x57618194u, 0xf598fb45u, 0x93d074f6u, 0x3207eea7u, 0xd03f6858u,
    0x6e76e209u, 0x0cae5bbau, 0xaae5d56bu, 0x491d4f1cu, 0xe754c8cdu, 0x858c427eu, 0x23c3bc2fu, 0xc1fb35e0u,
    0x6032af91u, 0xfe6a2942u, 0x9ca1a2f3u, 0x3ad91ca4u, 0xd9109655u, 0x77481006u, 0x157f89b7u, 0xb3b70368u,
    0x51ee7d19u, 0xf025f6cau, 0x8e5d707bu, 0x2c94ea2cu, 0xcacc63ddu, 0x6903dd8eu, 0x073b573fu, 0xa572d0f0u,
    0x43aa4aa1u, 0xe1e1c452u, 0x80193e03u, 0x1e50b7b4u, 0xbc883165u, 0x5abfab16u, 0xf8f724c7u, 0x972e9e78u,
    0x35661829u, 0xd39d91dau, 0x71d50b8bu, 0x100c853cu, 0xae43feedu, 0x4c7b789eu, 0xeab2f24fu, 0x88ea6c00u,
};

static const uint32_t bshim_085_tab3[96] = {
    0x54035812u, 0xf23ad1c3u, 0x90724b74u, 0x2ea9c525u, 0xcce13ed6u, 0x6b18b887u, 0x09503238u, 0xa787abe9u,
    0x45bf259au, 0xe3f69f4bu, 0x822e18fcu, 0x206592adu, 0xbe9d0c5eu, 0x5cd4860fu, 0xfb0bffc0u, 0x99437971u,
    0x377af322u, 0xd5b26cd3u, 0x73e9e684u, 0x12216035u, 0xb058d9e6u, 0x4e905397u, 0xecc7cd48u, 0x8aff46f9u,
    0x2936c0aau, 0xc76e3a5bu, 0x65a5b40cu, 0x03dd2dbdu, 0xa214a76eu, 0x404c211fu, 0xde839ad0u, 0x7cbb1481u,
    0x1af28e32u, 0xb92a07e3u, 0x57618194u, 0xf598fb45u, 0x93d074f6u, 0x3207eea7u, 0xd03f6858u, 0x6e76e209u,
    0x0cae5bbau, 0xaae5d56bu, 0x491d4f1cu, 0xe754c8cdu, 0x858c427eu, 0x23c3bc2fu, 0xc1fb35e0u, 0x6032af91u,
    0xfe6a2942u, 0x9ca1a2f3u, 0x3ad91ca4u, 0xd9109655u, 0x77481006u, 0x157f89b7u, 0xb3b70368u, 0x51ee7d19u,
    0xf025f6cau, 0x8e5d707bu, 0x2c94ea2cu, 0xcacc63ddu, 0x6903dd8eu, 0x073b573fu, 0xa572d0f0u, 0x43aa4aa1u,
    0xe1e1c452u, 0x80193e03u, 0x1e50b7b4u, 0xbc883165u, 0x5abfab16u, 0xf8f724c7u, 0x972e9e78u, 0x35661829u,
    0xd39d91dau, 0x71d50b8bu, 0x100c853cu, 0xae43feedu, 0x4c7b789eu, 0xeab2f24fu, 0x88ea6c00u, 0x2721e5b1u,
    0xc5595f62u, 0x6390d913u, 0x01c852c4u, 0x9fffcc75u, 0x3e374626u, 0xdc6ebfd7u, 0x7aa63988u, 0x18ddb339u,
    0xb7152ceau, 0x554ca69bu, 0xf384204cu, 0x91bb99fdu, 0x2ff313aeu, 0xce2a8d5fu, 0x6c620710u, 0x0a9980c1u,
};

static const uint32_t bshim_085_tab4[96] = {
    0xd5b26cd3u, 0x73e9e684u, 0x12216035u, 0xb058d9e6u, 0x4e905397u, 0xecc7cd48u, 0x8aff46f9u, 0x2936c0aau,
    0xc76e3a5bu, 0x65a5b40cu, 0x03dd2dbdu, 0xa214a76eu, 0x404c211fu, 0xde839ad0u, 0x7cbb1481u, 0x1af28e32u,
    0xb92a07e3u, 0x57618194u, 0xf598fb45u, 0x93d074f6u, 0x3207eea7u, 0xd03f6858u, 0x6e76e209u, 0x0cae5bbau,
    0xaae5d56bu, 0x491d4f1cu, 0xe754c8cdu, 0x858c427eu, 0x23c3bc2fu, 0xc1fb35e0u, 0x6032af91u, 0xfe6a2942u,
    0x9ca1a2f3u, 0x3ad91ca4u, 0xd9109655u, 0x77481006u, 0x157f89b7u, 0xb3b70368u, 0x51ee7d19u, 0xf025f6cau,
    0x8e5d707bu, 0x2c94ea2cu, 0xcacc63ddu, 0x6903dd8eu, 0x073b573fu, 0xa572d0f0u, 0x43aa4aa1u, 0xe1e1c452u,
    0x80193e03u, 0x1e50b7b4u, 0xbc883165u, 0x5abfab16u, 0xf8f724c7u, 0x972e9e78u, 0x35661829u, 0xd39d91dau,
    0x71d50b8bu, 0x100c853cu, 0xae43feedu, 0x4c7b789eu, 0xeab2f24fu, 0x88ea6c00u, 0x2721e5b1u, 0xc5595f62u,
    0x6390d913u, 0x01c852c4u, 0x9fffcc75u, 0x3e374626u, 0xdc6ebfd7u, 0x7aa63988u, 0x18ddb339u, 0xb7152ceau,
    0x554ca69bu, 0xf384204cu, 0x91bb99fdu, 0x2ff313aeu, 0xce2a8d5fu, 0x6c620710u, 0x0a9980c1u, 0xa8d0fa72u,
    0x47087423u, 0xe53fedd4u, 0x83776785u, 0x21aee136u, 0xbfe65ae7u, 0x5e1dd498u, 0xfc554e49u, 0x9a8cc7fau,
    0x38c441abu, 0xd6fbbb5cu, 0x7533350du, 0x136aaebeu, 0xb1a2286fu, 0x4fd9a220u, 0xee111bd1u, 0x8c489582u,
};

static const uint32_t bshim_085_tab5[96] = {
    0x57618194u, 0xf598fb45u, 0x93d074f6u, 0x3207eea7u, 0xd03f6858u, 0x6e76e209u, 0x0cae5bbau, 0xaae5d56bu,
    0x491d4f1cu, 0xe754c8cdu, 0x858c427eu, 0x23c3bc2fu, 0xc1fb35e0u, 0x6032af91u, 0xfe6a2942u, 0x9ca1a2f3u,
    0x3ad91ca4u, 0xd9109655u, 0x77481006u, 0x157f89b7u, 0xb3b70368u, 0x51ee7d19u, 0xf025f6cau, 0x8e5d707bu,
    0x2c94ea2cu, 0xcacc63ddu, 0x6903dd8eu, 0x073b573fu, 0xa572d0f0u, 0x43aa4aa1u, 0xe1e1c452u, 0x80193e03u,
    0x1e50b7b4u, 0xbc883165u, 0x5abfab16u, 0xf8f724c7u, 0x972e9e78u, 0x35661829u, 0xd39d91dau, 0x71d50b8bu,
    0x100c853cu, 0xae43feedu, 0x4c7b789eu, 0xeab2f24fu, 0x88ea6c00u, 0x2721e5b1u, 0xc5595f62u, 0x6390d913u,
    0x01c852c4u, 0x9fffcc75u, 0x3e374626u, 0xdc6ebfd7u, 0x7aa63988u, 0x18ddb339u, 0xb7152ceau, 0x554ca69bu,
    0xf384204cu, 0x91bb99fdu, 0x2ff313aeu, 0xce2a8d5fu, 0x6c620710u, 0x0a9980c1u, 0xa8d0fa72u, 0x47087423u,
    0xe53fedd4u, 0x83776785u, 0x21aee136u, 0xbfe65ae7u, 0x5e1dd498u, 0xfc554e49u, 0x9a8cc7fau, 0x38c441abu,
    0xd6fbbb5cu, 0x7533350du, 0x136aaebeu, 0xb1a2286fu, 0x4fd9a220u, 0xee111bd1u, 0x8c489582u, 0x2a800f33u,
    0xc8b788e4u, 0x66ef0295u, 0x05267c46u, 0xa35df5f7u, 0x41956fa8u, 0xdfcce959u, 0x7e04630au, 0x1c3bdcbbu,
    0xba73566cu, 0x58aad01du, 0xf6e249ceu, 0x9519c37fu, 0x33513d30u, 0xd188b6e1u, 0x6fc03092u, 0x0df7aa43u,
};

static const uint32_t bshim_085_tab6[96] = {
    0xd9109655u, 0x77481006u, 0x157f89b7u, 0xb3b70368u, 0x51ee7d19u, 0xf025f6cau, 0x8e5d707bu, 0x2c94ea2cu,
    0xcacc63ddu, 0x6903dd8eu, 0x073b573fu, 0xa572d0f0u, 0x43aa4aa1u, 0xe1e1c452u, 0x80193e03u, 0x1e50b7b4u,
    0xbc883165u, 0x5abfab16u, 0xf8f724c7u, 0x972e9e78u, 0x35661829u, 0xd39d91dau, 0x71d50b8bu, 0x100c853cu,
    0xae43feedu, 0x4c7b789eu, 0xeab2f24fu, 0x88ea6c00u, 0x2721e5b1u, 0xc5595f62u, 0x6390d913u, 0x01c852c4u,
    0x9fffcc75u, 0x3e374626u, 0xdc6ebfd7u, 0x7aa63988u, 0x18ddb339u, 0xb7152ceau, 0x554ca69bu, 0xf384204cu,
    0x91bb99fdu, 0x2ff313aeu, 0xce2a8d5fu, 0x6c620710u, 0x0a9980c1u, 0xa8d0fa72u, 0x47087423u, 0xe53fedd4u,
    0x83776785u, 0x21aee136u, 0xbfe65ae7u, 0x5e1dd498u, 0xfc554e49u, 0x9a8cc7fau, 0x38c441abu, 0xd6fbbb5cu,
    0x7533350du, 0x136aaebeu, 0xb1a2286fu, 0x4fd9a220u, 0xee111bd1u, 0x8c489582u, 0x2a800f33u, 0xc8b788e4u,
    0x66ef0295u, 0x05267c46u, 0xa35df5f7u, 0x41956fa8u, 0xdfcce959u, 0x7e04630au, 0x1c3bdcbbu, 0xba73566cu,
    0x58aad01du, 0xf6e249ceu, 0x9519c37fu, 0x33513d30u, 0xd188b6e1u, 0x6fc03092u, 0x0df7aa43u, 0xac2f23f4u,
    0x4a669da5u, 0xe89e1756u, 0x86d59107u, 0x250d0ab8u, 0xc3448469u, 0x617bfe1au, 0xffb377cbu, 0x9deaf17cu,
    0x3c226b2du, 0xda59e4deu, 0x78915e8fu, 0x16c8d840u, 0xb50051f1u, 0x5337cba2u, 0xf16f4553u, 0x8fa6bf04u,
};

static const uint32_t bshim_085_tab7[96] = {
    0x5abfab16u, 0xf8f724c7u, 0x972e9e78u, 0x35661829u, 0xd39d91dau, 0x71d50b8bu, 0x100c853cu, 0xae43feedu,
    0x4c7b789eu, 0xeab2f24fu, 0x88ea6c00u, 0x2721e5b1u, 0xc5595f62u, 0x6390d913u, 0x01c852c4u, 0x9fffcc75u,
    0x3e374626u, 0xdc6ebfd7u, 0x7aa63988u, 0x18ddb339u, 0xb7152ceau, 0x554ca69bu, 0xf384204cu, 0x91bb99fdu,
    0x2ff313aeu, 0xce2a8d5fu, 0x6c620710u, 0x0a9980c1u, 0xa8d0fa72u, 0x47087423u, 0xe53fedd4u, 0x83776785u,
    0x21aee136u, 0xbfe65ae7u, 0x5e1dd498u, 0xfc554e49u, 0x9a8cc7fau, 0x38c441abu, 0xd6fbbb5cu, 0x7533350du,
    0x136aaebeu, 0xb1a2286fu, 0x4fd9a220u, 0xee111bd1u, 0x8c489582u, 0x2a800f33u, 0xc8b788e4u, 0x66ef0295u,
    0x05267c46u, 0xa35df5f7u, 0x41956fa8u, 0xdfcce959u, 0x7e04630au, 0x1c3bdcbbu, 0xba73566cu, 0x58aad01du,
    0xf6e249ceu, 0x9519c37fu, 0x33513d30u, 0xd188b6e1u, 0x6fc03092u, 0x0df7aa43u, 0xac2f23f4u, 0x4a669da5u,
    0xe89e1756u, 0x86d59107u, 0x250d0ab8u, 0xc3448469u, 0x617bfe1au, 0xffb377cbu, 0x9deaf17cu, 0x3c226b2du,
    0xda59e4deu, 0x78915e8fu, 0x16c8d840u, 0xb50051f1u, 0x5337cba2u, 0xf16f4553u, 0x8fa6bf04u, 0x2dde38b5u,
    0xcc15b266u, 0x6a4d2c17u, 0x0884a5c8u, 0xa6bc1f79u, 0x44f3992au, 0xe32b12dbu, 0x81628c8cu, 0x1f9a063du,
    0xbdd17feeu, 0x5c08f99fu, 0xfa407350u, 0x9877ed01u, 0x36af66b2u, 0xd4e6e063u, 0x731e5a14u, 0x1155d3c5u,
};

struct bshim_085_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_085_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_085_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_085_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_085_reset(struct bshim_085_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000a455bu;
    return 0;
}

