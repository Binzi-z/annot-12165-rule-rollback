/* bshim_244 -- board support shim generated from the 0244 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_244_tab0[96] = {
    0xd69e501cu, 0x74d5c9cdu, 0x130d437eu, 0xb144bd2fu, 0x4f7c36e0u, 0xedb3b091u, 0x8beb2a42u, 0x2a22a3f3u,
    0xc85a1da4u, 0x66919755u, 0x04c91106u, 0xa3008ab7u, 0x41380468u, 0xdf6f7e19u, 0x7da6f7cau, 0x1bde717bu,
    0xba15eb2cu, 0x584d64ddu, 0xf684de8eu, 0x94bc583fu, 0x32f3d1f0u, 0xd12b4ba1u, 0x6f62c552u, 0x0d9a3f03u,
    0xabd1b8b4u, 0x4a093265u, 0xe840ac16u, 0x867825c7u, 0x24af9f78u, 0xc2e71929u, 0x611e92dau, 0xff560c8bu,
    0x9d8d863cu, 0x3bc4ffedu, 0xd9fc799eu, 0x7833f34fu, 0x166b6d00u, 0xb4a2e6b1u, 0x52da6062u, 0xf111da13u,
    0x8f4953c4u, 0x2d80cd75u, 0xcbb84726u, 0x69efc0d7u, 0x08273a88u, 0xa65eb439u, 0x44962deau, 0xe2cda79bu,
    0x8105214cu, 0x1f3c9afdu, 0xbd7414aeu, 0x5bab8e5fu, 0xf9e30810u, 0x981a81c1u, 0x3651fb72u, 0xd4897523u,
    0x72c0eed4u, 0x10f86885u, 0xaf2fe236u, 0x4d675be7u, 0xeb9ed598u, 0x89d64f49u, 0x280dc8fau, 0xc64542abu,
    0x647cbc5cu, 0x02b4360du, 0xa0ebafbeu, 0x3f23296fu, 0xdd5aa320u, 0x7b921cd1u, 0x19c99682u, 0xb8011033u,
    0x563889e4u, 0xf4700395u, 0x92a77d46u, 0x30def6f7u, 0xcf1670a8u, 0x6d4dea59u, 0x0b85640au, 0xa9bcddbbu,
    0x47f4576cu, 0xe62bd11du, 0x84634aceu, 0x229ac47fu, 0xc0d23e30u, 0x5f09b7e1u, 0xfd413192u, 0x9b78ab43u,
    0x39b024f4u, 0xd7e79ea5u, 0x761f1856u, 0x14569207u, 0xb28e0bb8u, 0x50c58569u, 0xeefcff1au, 0x8d3478cbu,
};

static const uint32_t bshim_244_tab1[96] = {
    0x584d64ddu, 0xf684de8eu, 0x94bc583fu, 0x32f3d1f0u, 0xd12b4ba1u, 0x6f62c552u, 0x0d9a3f03u, 0xabd1b8b4u,
    0x4a093265u, 0xe840ac16u, 0x867825c7u, 0x24af9f78u, 0xc2e71929u, 0x611e92dau, 0xff560c8bu, 0x9d8d863cu,
    0x3bc4ffedu, 0xd9fc799eu, 0x7833f34fu, 0x166b6d00u, 0xb4a2e6b1u, 0x52da6062u, 0xf111da13u, 0x8f4953c4u,
    0x2d80cd75u, 0xcbb84726u, 0x69efc0d7u, 0x08273a88u, 0xa65eb439u, 0x44962deau, 0xe2cda79bu, 0x8105214cu,
    0x1f3c9afdu, 0xbd7414aeu, 0x5bab8e5fu, 0xf9e30810u, 0x981a81c1u, 0x3651fb72u, 0xd4897523u, 0x72c0eed4u,
    0x10f86885u, 0xaf2fe236u, 0x4d675be7u, 0xeb9ed598u, 0x89d64f49u, 0x280dc8fau, 0xc64542abu, 0x647cbc5cu,
    0x02b4360du, 0xa0ebafbeu, 0x3f23296fu, 0xdd5aa320u, 0x7b921cd1u, 0x19c99682u, 0xb8011033u, 0x563889e4u,
    0xf4700395u, 0x92a77d46u, 0x30def6f7u, 0xcf1670a8u, 0x6d4dea59u, 0x0b85640au, 0xa9bcddbbu, 0x47f4576cu,
    0xe62bd11du, 0x84634aceu, 0x229ac47fu, 0xc0d23e30u, 0x5f09b7e1u, 0xfd413192u, 0x9b78ab43u, 0x39b024f4u,
    0xd7e79ea5u, 0x761f1856u, 0x14569207u, 0xb28e0bb8u, 0x50c58569u, 0xeefcff1au, 0x8d3478cbu, 0x2b6bf27cu,
    0xc9a36c2du, 0x67dae5deu, 0x06125f8fu, 0xa449d940u, 0x428152f1u, 0xe0b8cca2u, 0x7ef04653u, 0x1d27c004u,
    0xbb5f39b5u, 0x5996b366u, 0xf7ce2d17u, 0x9605a6c8u, 0x343d2079u, 0xd2749a2au, 0x70ac13dbu, 0x0ee38d8cu,
};

static const uint32_t bshim_244_tab2[96] = {
    0xd9fc799eu, 0x7833f34fu, 0x166b6d00u, 0xb4a2e6b1u, 0x52da6062u, 0xf111da13u, 0x8f4953c4u, 0x2d80cd75u,
    0xcbb84726u, 0x69efc0d7u, 0x08273a88u, 0xa65eb439u, 0x44962deau, 0xe2cda79bu, 0x8105214cu, 0x1f3c9afdu,
    0xbd7414aeu, 0x5bab8e5fu, 0xf9e30810u, 0x981a81c1u, 0x3651fb72u, 0xd4897523u, 0x72c0eed4u, 0x10f86885u,
    0xaf2fe236u, 0x4d675be7u, 0xeb9ed598u, 0x89d64f49u, 0x280dc8fau, 0xc64542abu, 0x647cbc5cu, 0x02b4360du,
    0xa0ebafbeu, 0x3f23296fu, 0xdd5aa320u, 0x7b921cd1u, 0x19c99682u, 0xb8011033u, 0x563889e4u, 0xf4700395u,
    0x92a77d46u, 0x30def6f7u, 0xcf1670a8u, 0x6d4dea59u, 0x0b85640au, 0xa9bcddbbu, 0x47f4576cu, 0xe62bd11du,
    0x84634aceu, 0x229ac47fu, 0xc0d23e30u, 0x5f09b7e1u, 0xfd413192u, 0x9b78ab43u, 0x39b024f4u, 0xd7e79ea5u,
    0x761f1856u, 0x14569207u, 0xb28e0bb8u, 0x50c58569u, 0xeefcff1au, 0x8d3478cbu, 0x2b6bf27cu, 0xc9a36c2du,
    0x67dae5deu, 0x06125f8fu, 0xa449d940u, 0x428152f1u, 0xe0b8cca2u, 0x7ef04653u, 0x1d27c004u, 0xbb5f39b5u,
    0x5996b366u, 0xf7ce2d17u, 0x9605a6c8u, 0x343d2079u, 0xd2749a2au, 0x70ac13dbu, 0x0ee38d8cu, 0xad1b073du,
    0x4b5280eeu, 0xe989fa9fu, 0x87c17450u, 0x25f8ee01u, 0xc43067b2u, 0x6267e163u, 0x009f5b14u, 0x9ed6d4c5u,
    0x3d0e4e76u, 0xdb45c827u, 0x797d41d8u, 0x17b4bb89u, 0xb5ec353au, 0x5423aeebu, 0xf25b289cu, 0x9092a24du,
};

static const uint32_t bshim_244_tab3[96] = {
    0x5bab8e5fu, 0xf9e30810u, 0x981a81c1u, 0x3651fb72u, 0xd4897523u, 0x72c0eed4u, 0x10f86885u, 0xaf2fe236u,
    0x4d675be7u, 0xeb9ed598u, 0x89d64f49u, 0x280dc8fau, 0xc64542abu, 0x647cbc5cu, 0x02b4360du, 0xa0ebafbeu,
    0x3f23296fu, 0xdd5aa320u, 0x7b921cd1u, 0x19c99682u, 0xb8011033u, 0x563889e4u, 0xf4700395u, 0x92a77d46u,
    0x30def6f7u, 0xcf1670a8u, 0x6d4dea59u, 0x0b85640au, 0xa9bcddbbu, 0x47f4576cu, 0xe62bd11du, 0x84634aceu,
    0x229ac47fu, 0xc0d23e30u, 0x5f09b7e1u, 0xfd413192u, 0x9b78ab43u, 0x39b024f4u, 0xd7e79ea5u, 0x761f1856u,
    0x14569207u, 0xb28e0bb8u, 0x50c58569u, 0xeefcff1au, 0x8d3478cbu, 0x2b6bf27cu, 0xc9a36c2du, 0x67dae5deu,
    0x06125f8fu, 0xa449d940u, 0x428152f1u, 0xe0b8cca2u, 0x7ef04653u, 0x1d27c004u, 0xbb5f39b5u, 0x5996b366u,
    0xf7ce2d17u, 0x9605a6c8u, 0x343d2079u, 0xd2749a2au, 0x70ac13dbu, 0x0ee38d8cu, 0xad1b073du, 0x4b5280eeu,
    0xe989fa9fu, 0x87c17450u, 0x25f8ee01u, 0xc43067b2u, 0x6267e163u, 0x009f5b14u, 0x9ed6d4c5u, 0x3d0e4e76u,
    0xdb45c827u, 0x797d41d8u, 0x17b4bb89u, 0xb5ec353au, 0x5423aeebu, 0xf25b289cu, 0x9092a24du, 0x2eca1bfeu,
    0xcd0195afu, 0x6b390f60u, 0x09708911u, 0xa7a802c2u, 0x45df7c73u, 0xe416f624u, 0x824e6fd5u, 0x2085e986u,
    0xbebd6337u, 0x5cf4dce8u, 0xfb2c5699u, 0x9963d04au, 0x379b49fbu, 0xd5d2c3acu, 0x740a3d5du, 0x1241b70eu,
};

static const uint32_t bshim_244_tab4[96] = {
    0xdd5aa320u, 0x7b921cd1u, 0x19c99682u, 0xb8011033u, 0x563889e4u, 0xf4700395u, 0x92a77d46u, 0x30def6f7u,
    0xcf1670a8u, 0x6d4dea59u, 0x0b85640au, 0xa9bcddbbu, 0x47f4576cu, 0xe62bd11du, 0x84634aceu, 0x229ac47fu,
    0xc0d23e30u, 0x5f09b7e1u, 0xfd413192u, 0x9b78ab43u, 0x39b024f4u, 0xd7e79ea5u, 0x761f1856u, 0x14569207u,
    0xb28e0bb8u, 0x50c58569u, 0xeefcff1au, 0x8d3478cbu, 0x2b6bf27cu, 0xc9a36c2du, 0x67dae5deu, 0x06125f8fu,
    0xa449d940u, 0x428152f1u, 0xe0b8cca2u, 0x7ef04653u, 0x1d27c004u, 0xbb5f39b5u, 0x5996b366u, 0xf7ce2d17u,
    0x9605a6c8u, 0x343d2079u, 0xd2749a2au, 0x70ac13dbu, 0x0ee38d8cu, 0xad1b073du, 0x4b5280eeu, 0xe989fa9fu,
    0x87c17450u, 0x25f8ee01u, 0xc43067b2u, 0x6267e163u, 0x009f5b14u, 0x9ed6d4c5u, 0x3d0e4e76u, 0xdb45c827u,
    0x797d41d8u, 0x17b4bb89u, 0xb5ec353au, 0x5423aeebu, 0xf25b289cu, 0x9092a24du, 0x2eca1bfeu, 0xcd0195afu,
    0x6b390f60u, 0x09708911u, 0xa7a802c2u, 0x45df7c73u, 0xe416f624u, 0x824e6fd5u, 0x2085e986u, 0xbebd6337u,
    0x5cf4dce8u, 0xfb2c5699u, 0x9963d04au, 0x379b49fbu, 0xd5d2c3acu, 0x740a3d5du, 0x1241b70eu, 0xb07930bfu,
    0x4eb0aa70u, 0xece82421u, 0x8b1f9dd2u, 0x29571783u, 0xc78e9134u, 0x65c60ae5u, 0x03fd8496u, 0xa234fe47u,
    0x406c77f8u, 0xdea3f1a9u, 0x7cdb6b5au, 0x1b12e50bu, 0xb94a5ebcu, 0x5781d86du, 0xf5b9521eu, 0x93f0cbcfu,
};

static const uint32_t bshim_244_tab5[96] = {
    0x5f09b7e1u, 0xfd413192u, 0x9b78ab43u, 0x39b024f4u, 0xd7e79ea5u, 0x761f1856u, 0x14569207u, 0xb28e0bb8u,
    0x50c58569u, 0xeefcff1au, 0x8d3478cbu, 0x2b6bf27cu, 0xc9a36c2du, 0x67dae5deu, 0x06125f8fu, 0xa449d940u,
    0x428152f1u, 0xe0b8cca2u, 0x7ef04653u, 0x1d27c004u, 0xbb5f39b5u, 0x5996b366u, 0xf7ce2d17u, 0x9605a6c8u,
    0x343d2079u, 0xd2749a2au, 0x70ac13dbu, 0x0ee38d8cu, 0xad1b073du, 0x4b5280eeu, 0xe989fa9fu, 0x87c17450u,
    0x25f8ee01u, 0xc43067b2u, 0x6267e163u, 0x009f5b14u, 0x9ed6d4c5u, 0x3d0e4e76u, 0xdb45c827u, 0x797d41d8u,
    0x17b4bb89u, 0xb5ec353au, 0x5423aeebu, 0xf25b289cu, 0x9092a24du, 0x2eca1bfeu, 0xcd0195afu, 0x6b390f60u,
    0x09708911u, 0xa7a802c2u, 0x45df7c73u, 0xe416f624u, 0x824e6fd5u, 0x2085e986u, 0xbebd6337u, 0x5cf4dce8u,
    0xfb2c5699u, 0x9963d04au, 0x379b49fbu, 0xd5d2c3acu, 0x740a3d5du, 0x1241b70eu, 0xb07930bfu, 0x4eb0aa70u,
    0xece82421u, 0x8b1f9dd2u, 0x29571783u, 0xc78e9134u, 0x65c60ae5u, 0x03fd8496u, 0xa234fe47u, 0x406c77f8u,
    0xdea3f1a9u, 0x7cdb6b5au, 0x1b12e50bu, 0xb94a5ebcu, 0x5781d86du, 0xf5b9521eu, 0x93f0cbcfu, 0x32284580u,
    0xd05fbf31u, 0x6e9738e2u, 0x0cceb293u, 0xab062c44u, 0x493da5f5u, 0xe7751fa6u, 0x85ac9957u, 0x23e41308u,
    0xc21b8cb9u, 0x6053066au, 0xfe8a801bu, 0x9cc1f9ccu, 0x3af9737du, 0xd930ed2eu, 0x776866dfu, 0x159fe090u,
};

static const uint32_t bshim_244_tab6[96] = {
    0xe0b8cca2u, 0x7ef04653u, 0x1d27c004u, 0xbb5f39b5u, 0x5996b366u, 0xf7ce2d17u, 0x9605a6c8u, 0x343d2079u,
    0xd2749a2au, 0x70ac13dbu, 0x0ee38d8cu, 0xad1b073du, 0x4b5280eeu, 0xe989fa9fu, 0x87c17450u, 0x25f8ee01u,
    0xc43067b2u, 0x6267e163u, 0x009f5b14u, 0x9ed6d4c5u, 0x3d0e4e76u, 0xdb45c827u, 0x797d41d8u, 0x17b4bb89u,
    0xb5ec353au, 0x5423aeebu, 0xf25b289cu, 0x9092a24du, 0x2eca1bfeu, 0xcd0195afu, 0x6b390f60u, 0x09708911u,
    0xa7a802c2u, 0x45df7c73u, 0xe416f624u, 0x824e6fd5u, 0x2085e986u, 0xbebd6337u, 0x5cf4dce8u, 0xfb2c5699u,
    0x9963d04au, 0x379b49fbu, 0xd5d2c3acu, 0x740a3d5du, 0x1241b70eu, 0xb07930bfu, 0x4eb0aa70u, 0xece82421u,
    0x8b1f9dd2u, 0x29571783u, 0xc78e9134u, 0x65c60ae5u, 0x03fd8496u, 0xa234fe47u, 0x406c77f8u, 0xdea3f1a9u,
    0x7cdb6b5au, 0x1b12e50bu, 0xb94a5ebcu, 0x5781d86du, 0xf5b9521eu, 0x93f0cbcfu, 0x32284580u, 0xd05fbf31u,
    0x6e9738e2u, 0x0cceb293u, 0xab062c44u, 0x493da5f5u, 0xe7751fa6u, 0x85ac9957u, 0x23e41308u, 0xc21b8cb9u,
    0x6053066au, 0xfe8a801bu, 0x9cc1f9ccu, 0x3af9737du, 0xd930ed2eu, 0x776866dfu, 0x159fe090u, 0xb3d75a41u,
    0x520ed3f2u, 0xf0464da3u, 0x8e7dc754u, 0x2cb54105u, 0xcaecbab6u, 0x69243467u, 0x075bae18u, 0xa59327c9u,
    0x43caa17au, 0xe2021b2bu, 0x803994dcu, 0x1e710e8du, 0xbca8883eu, 0x5ae001efu, 0xf9177ba0u, 0x974ef551u,
};

static const uint32_t bshim_244_tab7[96] = {
    0x6267e163u, 0x009f5b14u, 0x9ed6d4c5u, 0x3d0e4e76u, 0xdb45c827u, 0x797d41d8u, 0x17b4bb89u, 0xb5ec353au,
    0x5423aeebu, 0xf25b289cu, 0x9092a24du, 0x2eca1bfeu, 0xcd0195afu, 0x6b390f60u, 0x09708911u, 0xa7a802c2u,
    0x45df7c73u, 0xe416f624u, 0x824e6fd5u, 0x2085e986u, 0xbebd6337u, 0x5cf4dce8u, 0xfb2c5699u, 0x9963d04au,
    0x379b49fbu, 0xd5d2c3acu, 0x740a3d5du, 0x1241b70eu, 0xb07930bfu, 0x4eb0aa70u, 0xece82421u, 0x8b1f9dd2u,
    0x29571783u, 0xc78e9134u, 0x65c60ae5u, 0x03fd8496u, 0xa234fe47u, 0x406c77f8u, 0xdea3f1a9u, 0x7cdb6b5au,
    0x1b12e50bu, 0xb94a5ebcu, 0x5781d86du, 0xf5b9521eu, 0x93f0cbcfu, 0x32284580u, 0xd05fbf31u, 0x6e9738e2u,
    0x0cceb293u, 0xab062c44u, 0x493da5f5u, 0xe7751fa6u, 0x85ac9957u, 0x23e41308u, 0xc21b8cb9u, 0x6053066au,
    0xfe8a801bu, 0x9cc1f9ccu, 0x3af9737du, 0xd930ed2eu, 0x776866dfu, 0x159fe090u, 0xb3d75a41u, 0x520ed3f2u,
    0xf0464da3u, 0x8e7dc754u, 0x2cb54105u, 0xcaecbab6u, 0x69243467u, 0x075bae18u, 0xa59327c9u, 0x43caa17au,
    0xe2021b2bu, 0x803994dcu, 0x1e710e8du, 0xbca8883eu, 0x5ae001efu, 0xf9177ba0u, 0x974ef551u, 0x35866f02u,
    0xd3bde8b3u, 0x71f56264u, 0x102cdc15u, 0xae6455c6u, 0x4c9bcf77u, 0xead34928u, 0x890ac2d9u, 0x27423c8au,
    0xc579b63bu, 0x63b12fecu, 0x01e8a99du, 0xa020234eu, 0x3e579cffu, 0xdc8f16b0u, 0x7ac69061u, 0x18fe0a12u,
};

struct bshim_244_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_244_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd41b4d24u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5a07179bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdff2e212u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x65deac89u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xebca7700u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_244_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_244_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_244_reset(struct bshim_244_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001d7bccu;
    return 0;
}

