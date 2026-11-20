/* bshim_214 -- board support shim generated from the 0214 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_214_tab0[96] = {
    0xf6fc28e2u, 0x9533a293u, 0x336b1c44u, 0xd1a295f5u, 0x6fda0fa6u, 0x0e118957u, 0xac490308u, 0x4a807cb9u,
    0xe8b7f66au, 0x86ef701bu, 0x2526e9ccu, 0xc35e637du, 0x6195dd2eu, 0xffcd56dfu, 0x9e04d090u, 0x3c3c4a41u,
    0xda73c3f2u, 0x78ab3da3u, 0x16e2b754u, 0xb51a3105u, 0x5351aab6u, 0xf1892467u, 0x8fc09e18u, 0x2df817c9u,
    0xcc2f917au, 0x6a670b2bu, 0x089e84dcu, 0xa6d5fe8du, 0x450d783eu, 0xe344f1efu, 0x817c6ba0u, 0x1fb3e551u,
    0xbdeb5f02u, 0x5c22d8b3u, 0xfa5a5264u, 0x9891cc15u, 0x36c945c6u, 0xd500bf77u, 0x73383928u, 0x116fb2d9u,
    0xafa72c8au, 0x4ddea63bu, 0xec161fecu, 0x8a4d999du, 0x2885134eu, 0xc6bc8cffu, 0x64f406b0u, 0x032b8061u,
    0xa162fa12u, 0x3f9a73c3u, 0xddd1ed74u, 0x7c096725u, 0x1a40e0d6u, 0xb8785a87u, 0x56afd438u, 0xf4e74de9u,
    0x931ec79au, 0x3156414bu, 0xcf8dbafcu, 0x6dc534adu, 0x0bfcae5eu, 0xaa34280fu, 0x486ba1c0u, 0xe6a31b71u,
    0x84da9522u, 0x23120ed3u, 0xc1498884u, 0x5f810235u, 0xfdb87be6u, 0x9beff597u, 0x3a276f48u, 0xd85ee8f9u,
    0x769662aau, 0x14cddc5bu, 0xb305560cu, 0x513ccfbdu, 0xef74496eu, 0x8dabc31fu, 0x2be33cd0u, 0xca1ab681u,
    0x68523032u, 0x0689a9e3u, 0xa4c12394u, 0x42f89d45u, 0xe13016f6u, 0x7f6790a7u, 0x1d9f0a58u, 0xbbd68409u,
    0x5a0dfdbau, 0xf845776bu, 0x967cf11cu, 0x34b46acdu, 0xd2ebe47eu, 0x71235e2fu, 0x0f5ad7e0u, 0xad925191u,
};

static const uint32_t bshim_214_tab1[96] = {
    0x78ab3da3u, 0x16e2b754u, 0xb51a3105u, 0x5351aab6u, 0xf1892467u, 0x8fc09e18u, 0x2df817c9u, 0xcc2f917au,
    0x6a670b2bu, 0x089e84dcu, 0xa6d5fe8du, 0x450d783eu, 0xe344f1efu, 0x817c6ba0u, 0x1fb3e551u, 0xbdeb5f02u,
    0x5c22d8b3u, 0xfa5a5264u, 0x9891cc15u, 0x36c945c6u, 0xd500bf77u, 0x73383928u, 0x116fb2d9u, 0xafa72c8au,
    0x4ddea63bu, 0xec161fecu, 0x8a4d999du, 0x2885134eu, 0xc6bc8cffu, 0x64f406b0u, 0x032b8061u, 0xa162fa12u,
    0x3f9a73c3u, 0xddd1ed74u, 0x7c096725u, 0x1a40e0d6u, 0xb8785a87u, 0x56afd438u, 0xf4e74de9u, 0x931ec79au,
    0x3156414bu, 0xcf8dbafcu, 0x6dc534adu, 0x0bfcae5eu, 0xaa34280fu, 0x486ba1c0u, 0xe6a31b71u, 0x84da9522u,
    0x23120ed3u, 0xc1498884u, 0x5f810235u, 0xfdb87be6u, 0x9beff597u, 0x3a276f48u, 0xd85ee8f9u, 0x769662aau,
    0x14cddc5bu, 0xb305560cu, 0x513ccfbdu, 0xef74496eu, 0x8dabc31fu, 0x2be33cd0u, 0xca1ab681u, 0x68523032u,
    0x0689a9e3u, 0xa4c12394u, 0x42f89d45u, 0xe13016f6u, 0x7f6790a7u, 0x1d9f0a58u, 0xbbd68409u, 0x5a0dfdbau,
    0xf845776bu, 0x967cf11cu, 0x34b46acdu, 0xd2ebe47eu, 0x71235e2fu, 0x0f5ad7e0u, 0xad925191u, 0x4bc9cb42u,
    0xea0144f3u, 0x8838bea4u, 0x26703855u, 0xc4a7b206u, 0x62df2bb7u, 0x0116a568u, 0x9f4e1f19u, 0x3d8598cau,
    0xdbbd127bu, 0x79f48c2cu, 0x182c05ddu, 0xb6637f8eu, 0x549af93fu, 0xf2d272f0u, 0x9109eca1u, 0x2f416652u,
};

static const uint32_t bshim_214_tab2[96] = {
    0xfa5a5264u, 0x9891cc15u, 0x36c945c6u, 0xd500bf77u, 0x73383928u, 0x116fb2d9u, 0xafa72c8au, 0x4ddea63bu,
    0xec161fecu, 0x8a4d999du, 0x2885134eu, 0xc6bc8cffu, 0x64f406b0u, 0x032b8061u, 0xa162fa12u, 0x3f9a73c3u,
    0xddd1ed74u, 0x7c096725u, 0x1a40e0d6u, 0xb8785a87u, 0x56afd438u, 0xf4e74de9u, 0x931ec79au, 0x3156414bu,
    0xcf8dbafcu, 0x6dc534adu, 0x0bfcae5eu, 0xaa34280fu, 0x486ba1c0u, 0xe6a31b71u, 0x84da9522u, 0x23120ed3u,
    0xc1498884u, 0x5f810235u, 0xfdb87be6u, 0x9beff597u, 0x3a276f48u, 0xd85ee8f9u, 0x769662aau, 0x14cddc5bu,
    0xb305560cu, 0x513ccfbdu, 0xef74496eu, 0x8dabc31fu, 0x2be33cd0u, 0xca1ab681u, 0x68523032u, 0x0689a9e3u,
    0xa4c12394u, 0x42f89d45u, 0xe13016f6u, 0x7f6790a7u, 0x1d9f0a58u, 0xbbd68409u, 0x5a0dfdbau, 0xf845776bu,
    0x967cf11cu, 0x34b46acdu, 0xd2ebe47eu, 0x71235e2fu, 0x0f5ad7e0u, 0xad925191u, 0x4bc9cb42u, 0xea0144f3u,
    0x8838bea4u, 0x26703855u, 0xc4a7b206u, 0x62df2bb7u, 0x0116a568u, 0x9f4e1f19u, 0x3d8598cau, 0xdbbd127bu,
    0x79f48c2cu, 0x182c05ddu, 0xb6637f8eu, 0x549af93fu, 0xf2d272f0u, 0x9109eca1u, 0x2f416652u, 0xcd78e003u,
    0x6bb059b4u, 0x09e7d365u, 0xa81f4d16u, 0x4656c6c7u, 0xe48e4078u, 0x82c5ba29u, 0x20fd33dau, 0xbf34ad8bu,
    0x5d6c273cu, 0xfba3a0edu, 0x99db1a9eu, 0x3812944fu, 0xd64a0e00u, 0x748187b1u, 0x12b90162u, 0xb0f07b13u,
};

static const uint32_t bshim_214_tab3[96] = {
    0x7c096725u, 0x1a40e0d6u, 0xb8785a87u, 0x56afd438u, 0xf4e74de9u, 0x931ec79au, 0x3156414bu, 0xcf8dbafcu,
    0x6dc534adu, 0x0bfcae5eu, 0xaa34280fu, 0x486ba1c0u, 0xe6a31b71u, 0x84da9522u, 0x23120ed3u, 0xc1498884u,
    0x5f810235u, 0xfdb87be6u, 0x9beff597u, 0x3a276f48u, 0xd85ee8f9u, 0x769662aau, 0x14cddc5bu, 0xb305560cu,
    0x513ccfbdu, 0xef74496eu, 0x8dabc31fu, 0x2be33cd0u, 0xca1ab681u, 0x68523032u, 0x0689a9e3u, 0xa4c12394u,
    0x42f89d45u, 0xe13016f6u, 0x7f6790a7u, 0x1d9f0a58u, 0xbbd68409u, 0x5a0dfdbau, 0xf845776bu, 0x967cf11cu,
    0x34b46acdu, 0xd2ebe47eu, 0x71235e2fu, 0x0f5ad7e0u, 0xad925191u, 0x4bc9cb42u, 0xea0144f3u, 0x8838bea4u,
    0x26703855u, 0xc4a7b206u, 0x62df2bb7u, 0x0116a568u, 0x9f4e1f19u, 0x3d8598cau, 0xdbbd127bu, 0x79f48c2cu,
    0x182c05ddu, 0xb6637f8eu, 0x549af93fu, 0xf2d272f0u, 0x9109eca1u, 0x2f416652u, 0xcd78e003u, 0x6bb059b4u,
    0x09e7d365u, 0xa81f4d16u, 0x4656c6c7u, 0xe48e4078u, 0x82c5ba29u, 0x20fd33dau, 0xbf34ad8bu, 0x5d6c273cu,
    0xfba3a0edu, 0x99db1a9eu, 0x3812944fu, 0xd64a0e00u, 0x748187b1u, 0x12b90162u, 0xb0f07b13u, 0x4f27f4c4u,
    0xed5f6e75u, 0x8b96e826u, 0x29ce61d7u, 0xc805db88u, 0x663d5539u, 0x0474ceeau, 0xa2ac489bu, 0x40e3c24cu,
    0xdf1b3bfdu, 0x7d52b5aeu, 0x1b8a2f5fu, 0xb9c1a910u, 0x57f922c1u, 0xf6309c72u, 0x94681623u, 0x329f8fd4u,
};

static const uint32_t bshim_214_tab4[96] = {
    0xfdb87be6u, 0x9beff597u, 0x3a276f48u, 0xd85ee8f9u, 0x769662aau, 0x14cddc5bu, 0xb305560cu, 0x513ccfbdu,
    0xef74496eu, 0x8dabc31fu, 0x2be33cd0u, 0xca1ab681u, 0x68523032u, 0x0689a9e3u, 0xa4c12394u, 0x42f89d45u,
    0xe13016f6u, 0x7f6790a7u, 0x1d9f0a58u, 0xbbd68409u, 0x5a0dfdbau, 0xf845776bu, 0x967cf11cu, 0x34b46acdu,
    0xd2ebe47eu, 0x71235e2fu, 0x0f5ad7e0u, 0xad925191u, 0x4bc9cb42u, 0xea0144f3u, 0x8838bea4u, 0x26703855u,
    0xc4a7b206u, 0x62df2bb7u, 0x0116a568u, 0x9f4e1f19u, 0x3d8598cau, 0xdbbd127bu, 0x79f48c2cu, 0x182c05ddu,
    0xb6637f8eu, 0x549af93fu, 0xf2d272f0u, 0x9109eca1u, 0x2f416652u, 0xcd78e003u, 0x6bb059b4u, 0x09e7d365u,
    0xa81f4d16u, 0x4656c6c7u, 0xe48e4078u, 0x82c5ba29u, 0x20fd33dau, 0xbf34ad8bu, 0x5d6c273cu, 0xfba3a0edu,
    0x99db1a9eu, 0x3812944fu, 0xd64a0e00u, 0x748187b1u, 0x12b90162u, 0xb0f07b13u, 0x4f27f4c4u, 0xed5f6e75u,
    0x8b96e826u, 0x29ce61d7u, 0xc805db88u, 0x663d5539u, 0x0474ceeau, 0xa2ac489bu, 0x40e3c24cu, 0xdf1b3bfdu,
    0x7d52b5aeu, 0x1b8a2f5fu, 0xb9c1a910u, 0x57f922c1u, 0xf6309c72u, 0x94681623u, 0x329f8fd4u, 0xd0d70985u,
    0x6f0e8336u, 0x0d45fce7u, 0xab7d7698u, 0x49b4f049u, 0xe7ec69fau, 0x8623e3abu, 0x245b5d5cu, 0xc292d70du,
    0x60ca50beu, 0xff01ca6fu, 0x9d394420u, 0x3b70bdd1u, 0xd9a83782u, 0x77dfb133u, 0x16172ae4u, 0xb44ea495u,
};

static const uint32_t bshim_214_tab5[96] = {
    0x7f6790a7u, 0x1d9f0a58u, 0xbbd68409u, 0x5a0dfdbau, 0xf845776bu, 0x967cf11cu, 0x34b46acdu, 0xd2ebe47eu,
    0x71235e2fu, 0x0f5ad7e0u, 0xad925191u, 0x4bc9cb42u, 0xea0144f3u, 0x8838bea4u, 0x26703855u, 0xc4a7b206u,
    0x62df2bb7u, 0x0116a568u, 0x9f4e1f19u, 0x3d8598cau, 0xdbbd127bu, 0x79f48c2cu, 0x182c05ddu, 0xb6637f8eu,
    0x549af93fu, 0xf2d272f0u, 0x9109eca1u, 0x2f416652u, 0xcd78e003u, 0x6bb059b4u, 0x09e7d365u, 0xa81f4d16u,
    0x4656c6c7u, 0xe48e4078u, 0x82c5ba29u, 0x20fd33dau, 0xbf34ad8bu, 0x5d6c273cu, 0xfba3a0edu, 0x99db1a9eu,
    0x3812944fu, 0xd64a0e00u, 0x748187b1u, 0x12b90162u, 0xb0f07b13u, 0x4f27f4c4u, 0xed5f6e75u, 0x8b96e826u,
    0x29ce61d7u, 0xc805db88u, 0x663d5539u, 0x0474ceeau, 0xa2ac489bu, 0x40e3c24cu, 0xdf1b3bfdu, 0x7d52b5aeu,
    0x1b8a2f5fu, 0xb9c1a910u, 0x57f922c1u, 0xf6309c72u, 0x94681623u, 0x329f8fd4u, 0xd0d70985u, 0x6f0e8336u,
    0x0d45fce7u, 0xab7d7698u, 0x49b4f049u, 0xe7ec69fau, 0x8623e3abu, 0x245b5d5cu, 0xc292d70du, 0x60ca50beu,
    0xff01ca6fu, 0x9d394420u, 0x3b70bdd1u, 0xd9a83782u, 0x77dfb133u, 0x16172ae4u, 0xb44ea495u, 0x52861e46u,
    0xf0bd97f7u, 0x8ef511a8u, 0x2d2c8b59u, 0xcb64050au, 0x699b7ebbu, 0x07d2f86cu, 0xa60a721du, 0x4441ebceu,
    0xe279657fu, 0x80b0df30u, 0x1ee858e1u, 0xbd1fd292u, 0x5b574c43u, 0xf98ec5f4u, 0x97c63fa5u, 0x35fdb956u,
};

static const uint32_t bshim_214_tab6[96] = {
    0x0116a568u, 0x9f4e1f19u, 0x3d8598cau, 0xdbbd127bu, 0x79f48c2cu, 0x182c05ddu, 0xb6637f8eu, 0x549af93fu,
    0xf2d272f0u, 0x9109eca1u, 0x2f416652u, 0xcd78e003u, 0x6bb059b4u, 0x09e7d365u, 0xa81f4d16u, 0x4656c6c7u,
    0xe48e4078u, 0x82c5ba29u, 0x20fd33dau, 0xbf34ad8bu, 0x5d6c273cu, 0xfba3a0edu, 0x99db1a9eu, 0x3812944fu,
    0xd64a0e00u, 0x748187b1u, 0x12b90162u, 0xb0f07b13u, 0x4f27f4c4u, 0xed5f6e75u, 0x8b96e826u, 0x29ce61d7u,
    0xc805db88u, 0x663d5539u, 0x0474ceeau, 0xa2ac489bu, 0x40e3c24cu, 0xdf1b3bfdu, 0x7d52b5aeu, 0x1b8a2f5fu,
    0xb9c1a910u, 0x57f922c1u, 0xf6309c72u, 0x94681623u, 0x329f8fd4u, 0xd0d70985u, 0x6f0e8336u, 0x0d45fce7u,
    0xab7d7698u, 0x49b4f049u, 0xe7ec69fau, 0x8623e3abu, 0x245b5d5cu, 0xc292d70du, 0x60ca50beu, 0xff01ca6fu,
    0x9d394420u, 0x3b70bdd1u, 0xd9a83782u, 0x77dfb133u, 0x16172ae4u, 0xb44ea495u, 0x52861e46u, 0xf0bd97f7u,
    0x8ef511a8u, 0x2d2c8b59u, 0xcb64050au, 0x699b7ebbu, 0x07d2f86cu, 0xa60a721du, 0x4441ebceu, 0xe279657fu,
    0x80b0df30u, 0x1ee858e1u, 0xbd1fd292u, 0x5b574c43u, 0xf98ec5f4u, 0x97c63fa5u, 0x35fdb956u, 0xd4353307u,
    0x726cacb8u, 0x10a42669u, 0xaedba01au, 0x4d1319cbu, 0xeb4a937cu, 0x89820d2du, 0x27b986deu, 0xc5f1008fu,
    0x64287a40u, 0x025ff3f1u, 0xa0976da2u, 0x3ecee753u, 0xdd066104u, 0x7b3ddab5u, 0x19755466u, 0xb7acce17u,
};

static const uint32_t bshim_214_tab7[96] = {
    0x82c5ba29u, 0x20fd33dau, 0xbf34ad8bu, 0x5d6c273cu, 0xfba3a0edu, 0x99db1a9eu, 0x3812944fu, 0xd64a0e00u,
    0x748187b1u, 0x12b90162u, 0xb0f07b13u, 0x4f27f4c4u, 0xed5f6e75u, 0x8b96e826u, 0x29ce61d7u, 0xc805db88u,
    0x663d5539u, 0x0474ceeau, 0xa2ac489bu, 0x40e3c24cu, 0xdf1b3bfdu, 0x7d52b5aeu, 0x1b8a2f5fu, 0xb9c1a910u,
    0x57f922c1u, 0xf6309c72u, 0x94681623u, 0x329f8fd4u, 0xd0d70985u, 0x6f0e8336u, 0x0d45fce7u, 0xab7d7698u,
    0x49b4f049u, 0xe7ec69fau, 0x8623e3abu, 0x245b5d5cu, 0xc292d70du, 0x60ca50beu, 0xff01ca6fu, 0x9d394420u,
    0x3b70bdd1u, 0xd9a83782u, 0x77dfb133u, 0x16172ae4u, 0xb44ea495u, 0x52861e46u, 0xf0bd97f7u, 0x8ef511a8u,
    0x2d2c8b59u, 0xcb64050au, 0x699b7ebbu, 0x07d2f86cu, 0xa60a721du, 0x4441ebceu, 0xe279657fu, 0x80b0df30u,
    0x1ee858e1u, 0xbd1fd292u, 0x5b574c43u, 0xf98ec5f4u, 0x97c63fa5u, 0x35fdb956u, 0xd4353307u, 0x726cacb8u,
    0x10a42669u, 0xaedba01au, 0x4d1319cbu, 0xeb4a937cu, 0x89820d2du, 0x27b986deu, 0xc5f1008fu, 0x64287a40u,
    0x025ff3f1u, 0xa0976da2u, 0x3ecee753u, 0xdd066104u, 0x7b3ddab5u, 0x19755466u, 0xb7acce17u, 0x55e447c8u,
    0xf41bc179u, 0x92533b2au, 0x308ab4dbu, 0xcec22e8cu, 0x6cf9a83du, 0x0b3121eeu, 0xa9689b9fu, 0x47a01550u,
    0xe5d78f01u, 0x840f08b2u, 0x22468263u, 0xc07dfc14u, 0x5eb575c5u, 0xfcecef76u, 0x9b246927u, 0x395be2d8u,
};

struct bshim_214_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_214_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf31b3f7au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_214_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_214_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_214_reset(struct bshim_214_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0019dbcau;
    return 0;
}

