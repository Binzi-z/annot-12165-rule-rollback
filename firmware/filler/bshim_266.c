/* bshim_266 -- board support shim generated from the 0266 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_266_tab0[96] = {
    0x03264abeu, 0xa15dc46fu, 0x3f953e20u, 0xddccb7d1u, 0x7c043182u, 0x1a3bab33u, 0xb87324e4u, 0x56aa9e95u,
    0xf4e21846u, 0x931991f7u, 0x31510ba8u, 0xcf888559u, 0x6dbfff0au, 0x0bf778bbu, 0xaa2ef26cu, 0x48666c1du,
    0xe69de5ceu, 0x84d55f7fu, 0x230cd930u, 0xc14452e1u, 0x5f7bcc92u, 0xfdb34643u, 0x9beabff4u, 0x3a2239a5u,
    0xd859b356u, 0x76912d07u, 0x14c8a6b8u, 0xb3002069u, 0x51379a1au, 0xef6f13cbu, 0x8da68d7cu, 0x2bde072du,
    0xca1580deu, 0x684cfa8fu, 0x06847440u, 0xa4bbedf1u, 0x42f367a2u, 0xe12ae153u, 0x7f625b04u, 0x1d99d4b5u,
    0xbbd14e66u, 0x5a08c817u, 0xf84041c8u, 0x9677bb79u, 0x34af352au, 0xd2e6aedbu, 0x711e288cu, 0x0f55a23du,
    0xad8d1beeu, 0x4bc4959fu, 0xe9fc0f50u, 0x88338901u, 0x266b02b2u, 0xc4a27c63u, 0x62d9f614u, 0x01116fc5u,
    0x9f48e976u, 0x3d806327u, 0xdbb7dcd8u, 0x79ef5689u, 0x1826d03au, 0xb65e49ebu, 0x5495c39cu, 0xf2cd3d4du,
    0x9104b6feu, 0x2f3c30afu, 0xcd73aa60u, 0x6bab2411u, 0x09e29dc2u, 0xa81a1773u, 0x46519124u, 0xe4890ad5u,
    0x82c08486u, 0x20f7fe37u, 0xbf2f77e8u, 0x5d66f199u, 0xfb9e6b4au, 0x99d5e4fbu, 0x380d5eacu, 0xd644d85du,
    0x747c520eu, 0x12b3cbbfu, 0xb0eb4570u, 0x4f22bf21u, 0xed5a38d2u, 0x8b91b283u, 0x29c92c34u, 0xc800a5e5u,
    0x66381f96u, 0x046f9947u, 0xa2a712f8u, 0x40de8ca9u, 0xdf16065au, 0x7d4d800bu, 0x1b84f9bcu, 0xb9bc736du,
};

static const uint32_t bshim_266_tab1[96] = {
    0x84d55f7fu, 0x230cd930u, 0xc14452e1u, 0x5f7bcc92u, 0xfdb34643u, 0x9beabff4u, 0x3a2239a5u, 0xd859b356u,
    0x76912d07u, 0x14c8a6b8u, 0xb3002069u, 0x51379a1au, 0xef6f13cbu, 0x8da68d7cu, 0x2bde072du, 0xca1580deu,
    0x684cfa8fu, 0x06847440u, 0xa4bbedf1u, 0x42f367a2u, 0xe12ae153u, 0x7f625b04u, 0x1d99d4b5u, 0xbbd14e66u,
    0x5a08c817u, 0xf84041c8u, 0x9677bb79u, 0x34af352au, 0xd2e6aedbu, 0x711e288cu, 0x0f55a23du, 0xad8d1beeu,
    0x4bc4959fu, 0xe9fc0f50u, 0x88338901u, 0x266b02b2u, 0xc4a27c63u, 0x62d9f614u, 0x01116fc5u, 0x9f48e976u,
    0x3d806327u, 0xdbb7dcd8u, 0x79ef5689u, 0x1826d03au, 0xb65e49ebu, 0x5495c39cu, 0xf2cd3d4du, 0x9104b6feu,
    0x2f3c30afu, 0xcd73aa60u, 0x6bab2411u, 0x09e29dc2u, 0xa81a1773u, 0x46519124u, 0xe4890ad5u, 0x82c08486u,
    0x20f7fe37u, 0xbf2f77e8u, 0x5d66f199u, 0xfb9e6b4au, 0x99d5e4fbu, 0x380d5eacu, 0xd644d85du, 0x747c520eu,
    0x12b3cbbfu, 0xb0eb4570u, 0x4f22bf21u, 0xed5a38d2u, 0x8b91b283u, 0x29c92c34u, 0xc800a5e5u, 0x66381f96u,
    0x046f9947u, 0xa2a712f8u, 0x40de8ca9u, 0xdf16065au, 0x7d4d800bu, 0x1b84f9bcu, 0xb9bc736du, 0x57f3ed1eu,
    0xf62b66cfu, 0x9462e080u, 0x329a5a31u, 0xd0d1d3e2u, 0x6f094d93u, 0x0d40c744u, 0xab7840f5u, 0x49afbaa6u,
    0xe7e73457u, 0x861eae08u, 0x245627b9u, 0xc28da16au, 0x60c51b1bu, 0xfefc94ccu, 0x9d340e7du, 0x3b6b882eu,
};

static const uint32_t bshim_266_tab2[96] = {
    0x06847440u, 0xa4bbedf1u, 0x42f367a2u, 0xe12ae153u, 0x7f625b04u, 0x1d99d4b5u, 0xbbd14e66u, 0x5a08c817u,
    0xf84041c8u, 0x9677bb79u, 0x34af352au, 0xd2e6aedbu, 0x711e288cu, 0x0f55a23du, 0xad8d1beeu, 0x4bc4959fu,
    0xe9fc0f50u, 0x88338901u, 0x266b02b2u, 0xc4a27c63u, 0x62d9f614u, 0x01116fc5u, 0x9f48e976u, 0x3d806327u,
    0xdbb7dcd8u, 0x79ef5689u, 0x1826d03au, 0xb65e49ebu, 0x5495c39cu, 0xf2cd3d4du, 0x9104b6feu, 0x2f3c30afu,
    0xcd73aa60u, 0x6bab2411u, 0x09e29dc2u, 0xa81a1773u, 0x46519124u, 0xe4890ad5u, 0x82c08486u, 0x20f7fe37u,
    0xbf2f77e8u, 0x5d66f199u, 0xfb9e6b4au, 0x99d5e4fbu, 0x380d5eacu, 0xd644d85du, 0x747c520eu, 0x12b3cbbfu,
    0xb0eb4570u, 0x4f22bf21u, 0xed5a38d2u, 0x8b91b283u, 0x29c92c34u, 0xc800a5e5u, 0x66381f96u, 0x046f9947u,
    0xa2a712f8u, 0x40de8ca9u, 0xdf16065au, 0x7d4d800bu, 0x1b84f9bcu, 0xb9bc736du, 0x57f3ed1eu, 0xf62b66cfu,
    0x9462e080u, 0x329a5a31u, 0xd0d1d3e2u, 0x6f094d93u, 0x0d40c744u, 0xab7840f5u, 0x49afbaa6u, 0xe7e73457u,
    0x861eae08u, 0x245627b9u, 0xc28da16au, 0x60c51b1bu, 0xfefc94ccu, 0x9d340e7du, 0x3b6b882eu, 0xd9a301dfu,
    0x77da7b90u, 0x1611f541u, 0xb4496ef2u, 0x5280e8a3u, 0xf0b86254u, 0x8eefdc05u, 0x2d2755b6u, 0xcb5ecf67u,
    0x69964918u, 0x07cdc2c9u, 0xa6053c7au, 0x443cb62bu, 0xe2742fdcu, 0x80aba98du, 0x1ee3233eu, 0xbd1a9cefu,
};

static const uint32_t bshim_266_tab3[96] = {
    0x88338901u, 0x266b02b2u, 0xc4a27c63u, 0x62d9f614u, 0x01116fc5u, 0x9f48e976u, 0x3d806327u, 0xdbb7dcd8u,
    0x79ef5689u, 0x1826d03au, 0xb65e49ebu, 0x5495c39cu, 0xf2cd3d4du, 0x9104b6feu, 0x2f3c30afu, 0xcd73aa60u,
    0x6bab2411u, 0x09e29dc2u, 0xa81a1773u, 0x46519124u, 0xe4890ad5u, 0x82c08486u, 0x20f7fe37u, 0xbf2f77e8u,
    0x5d66f199u, 0xfb9e6b4au, 0x99d5e4fbu, 0x380d5eacu, 0xd644d85du, 0x747c520eu, 0x12b3cbbfu, 0xb0eb4570u,
    0x4f22bf21u, 0xed5a38d2u, 0x8b91b283u, 0x29c92c34u, 0xc800a5e5u, 0x66381f96u, 0x046f9947u, 0xa2a712f8u,
    0x40de8ca9u, 0xdf16065au, 0x7d4d800bu, 0x1b84f9bcu, 0xb9bc736du, 0x57f3ed1eu, 0xf62b66cfu, 0x9462e080u,
    0x329a5a31u, 0xd0d1d3e2u, 0x6f094d93u, 0x0d40c744u, 0xab7840f5u, 0x49afbaa6u, 0xe7e73457u, 0x861eae08u,
    0x245627b9u, 0xc28da16au, 0x60c51b1bu, 0xfefc94ccu, 0x9d340e7du, 0x3b6b882eu, 0xd9a301dfu, 0x77da7b90u,
    0x1611f541u, 0xb4496ef2u, 0x5280e8a3u, 0xf0b86254u, 0x8eefdc05u, 0x2d2755b6u, 0xcb5ecf67u, 0x69964918u,
    0x07cdc2c9u, 0xa6053c7au, 0x443cb62bu, 0xe2742fdcu, 0x80aba98du, 0x1ee3233eu, 0xbd1a9cefu, 0x5b5216a0u,
    0xf9899051u, 0x97c10a02u, 0x35f883b3u, 0xd42ffd64u, 0x72677715u, 0x109ef0c6u, 0xaed66a77u, 0x4d0de428u,
    0xeb455dd9u, 0x897cd78au, 0x27b4513bu, 0xc5ebcaecu, 0x6423449du, 0x025abe4eu, 0xa09237ffu, 0x3ec9b1b0u,
};

static const uint32_t bshim_266_tab4[96] = {
    0x09e29dc2u, 0xa81a1773u, 0x46519124u, 0xe4890ad5u, 0x82c08486u, 0x20f7fe37u, 0xbf2f77e8u, 0x5d66f199u,
    0xfb9e6b4au, 0x99d5e4fbu, 0x380d5eacu, 0xd644d85du, 0x747c520eu, 0x12b3cbbfu, 0xb0eb4570u, 0x4f22bf21u,
    0xed5a38d2u, 0x8b91b283u, 0x29c92c34u, 0xc800a5e5u, 0x66381f96u, 0x046f9947u, 0xa2a712f8u, 0x40de8ca9u,
    0xdf16065au, 0x7d4d800bu, 0x1b84f9bcu, 0xb9bc736du, 0x57f3ed1eu, 0xf62b66cfu, 0x9462e080u, 0x329a5a31u,
    0xd0d1d3e2u, 0x6f094d93u, 0x0d40c744u, 0xab7840f5u, 0x49afbaa6u, 0xe7e73457u, 0x861eae08u, 0x245627b9u,
    0xc28da16au, 0x60c51b1bu, 0xfefc94ccu, 0x9d340e7du, 0x3b6b882eu, 0xd9a301dfu, 0x77da7b90u, 0x1611f541u,
    0xb4496ef2u, 0x5280e8a3u, 0xf0b86254u, 0x8eefdc05u, 0x2d2755b6u, 0xcb5ecf67u, 0x69964918u, 0x07cdc2c9u,
    0xa6053c7au, 0x443cb62bu, 0xe2742fdcu, 0x80aba98du, 0x1ee3233eu, 0xbd1a9cefu, 0x5b5216a0u, 0xf9899051u,
    0x97c10a02u, 0x35f883b3u, 0xd42ffd64u, 0x72677715u, 0x109ef0c6u, 0xaed66a77u, 0x4d0de428u, 0xeb455dd9u,
    0x897cd78au, 0x27b4513bu, 0xc5ebcaecu, 0x6423449du, 0x025abe4eu, 0xa09237ffu, 0x3ec9b1b0u, 0xdd012b61u,
    0x7b38a512u, 0x19701ec3u, 0xb7a79874u, 0x55df1225u, 0xf4168bd6u, 0x924e0587u, 0x30857f38u, 0xcebcf8e9u,
    0x6cf4729au, 0x0b2bec4bu, 0xa96365fcu, 0x479adfadu, 0xe5d2595eu, 0x8409d30fu, 0x22414cc0u, 0xc078c671u,
};

static const uint32_t bshim_266_tab5[96] = {
    0x8b91b283u, 0x29c92c34u, 0xc800a5e5u, 0x66381f96u, 0x046f9947u, 0xa2a712f8u, 0x40de8ca9u, 0xdf16065au,
    0x7d4d800bu, 0x1b84f9bcu, 0xb9bc736du, 0x57f3ed1eu, 0xf62b66cfu, 0x9462e080u, 0x329a5a31u, 0xd0d1d3e2u,
    0x6f094d93u, 0x0d40c744u, 0xab7840f5u, 0x49afbaa6u, 0xe7e73457u, 0x861eae08u, 0x245627b9u, 0xc28da16au,
    0x60c51b1bu, 0xfefc94ccu, 0x9d340e7du, 0x3b6b882eu, 0xd9a301dfu, 0x77da7b90u, 0x1611f541u, 0xb4496ef2u,
    0x5280e8a3u, 0xf0b86254u, 0x8eefdc05u, 0x2d2755b6u, 0xcb5ecf67u, 0x69964918u, 0x07cdc2c9u, 0xa6053c7au,
    0x443cb62bu, 0xe2742fdcu, 0x80aba98du, 0x1ee3233eu, 0xbd1a9cefu, 0x5b5216a0u, 0xf9899051u, 0x97c10a02u,
    0x35f883b3u, 0xd42ffd64u, 0x72677715u, 0x109ef0c6u, 0xaed66a77u, 0x4d0de428u, 0xeb455dd9u, 0x897cd78au,
    0x27b4513bu, 0xc5ebcaecu, 0x6423449du, 0x025abe4eu, 0xa09237ffu, 0x3ec9b1b0u, 0xdd012b61u, 0x7b38a512u,
    0x19701ec3u, 0xb7a79874u, 0x55df1225u, 0xf4168bd6u, 0x924e0587u, 0x30857f38u, 0xcebcf8e9u, 0x6cf4729au,
    0x0b2bec4bu, 0xa96365fcu, 0x479adfadu, 0xe5d2595eu, 0x8409d30fu, 0x22414cc0u, 0xc078c671u, 0x5eb04022u,
    0xfce7b9d3u, 0x9b1f3384u, 0x3956ad35u, 0xd78e26e6u, 0x75c5a097u, 0x13fd1a48u, 0xb23493f9u, 0x506c0daau,
    0xeea3875bu, 0x8cdb010cu, 0x2b127abdu, 0xc949f46eu, 0x67816e1fu, 0x05b8e7d0u, 0xa3f06181u, 0x4227db32u,
};

static const uint32_t bshim_266_tab6[96] = {
    0x0d40c744u, 0xab7840f5u, 0x49afbaa6u, 0xe7e73457u, 0x861eae08u, 0x245627b9u, 0xc28da16au, 0x60c51b1bu,
    0xfefc94ccu, 0x9d340e7du, 0x3b6b882eu, 0xd9a301dfu, 0x77da7b90u, 0x1611f541u, 0xb4496ef2u, 0x5280e8a3u,
    0xf0b86254u, 0x8eefdc05u, 0x2d2755b6u, 0xcb5ecf67u, 0x69964918u, 0x07cdc2c9u, 0xa6053c7au, 0x443cb62bu,
    0xe2742fdcu, 0x80aba98du, 0x1ee3233eu, 0xbd1a9cefu, 0x5b5216a0u, 0xf9899051u, 0x97c10a02u, 0x35f883b3u,
    0xd42ffd64u, 0x72677715u, 0x109ef0c6u, 0xaed66a77u, 0x4d0de428u, 0xeb455dd9u, 0x897cd78au, 0x27b4513bu,
    0xc5ebcaecu, 0x6423449du, 0x025abe4eu, 0xa09237ffu, 0x3ec9b1b0u, 0xdd012b61u, 0x7b38a512u, 0x19701ec3u,
    0xb7a79874u, 0x55df1225u, 0xf4168bd6u, 0x924e0587u, 0x30857f38u, 0xcebcf8e9u, 0x6cf4729au, 0x0b2bec4bu,
    0xa96365fcu, 0x479adfadu, 0xe5d2595eu, 0x8409d30fu, 0x22414cc0u, 0xc078c671u, 0x5eb04022u, 0xfce7b9d3u,
    0x9b1f3384u, 0x3956ad35u, 0xd78e26e6u, 0x75c5a097u, 0x13fd1a48u, 0xb23493f9u, 0x506c0daau, 0xeea3875bu,
    0x8cdb010cu, 0x2b127abdu, 0xc949f46eu, 0x67816e1fu, 0x05b8e7d0u, 0xa3f06181u, 0x4227db32u, 0xe05f54e3u,
    0x7e96ce94u, 0x1cce4845u, 0xbb05c1f6u, 0x593d3ba7u, 0xf774b558u, 0x95ac2f09u, 0x33e3a8bau, 0xd21b226bu,
    0x70529c1cu, 0x0e8a15cdu, 0xacc18f7eu, 0x4af9092fu, 0xe93082e0u, 0x8767fc91u, 0x259f7642u, 0xc3d6eff3u,
};

static const uint32_t bshim_266_tab7[96] = {
    0x8eefdc05u, 0x2d2755b6u, 0xcb5ecf67u, 0x69964918u, 0x07cdc2c9u, 0xa6053c7au, 0x443cb62bu, 0xe2742fdcu,
    0x80aba98du, 0x1ee3233eu, 0xbd1a9cefu, 0x5b5216a0u, 0xf9899051u, 0x97c10a02u, 0x35f883b3u, 0xd42ffd64u,
    0x72677715u, 0x109ef0c6u, 0xaed66a77u, 0x4d0de428u, 0xeb455dd9u, 0x897cd78au, 0x27b4513bu, 0xc5ebcaecu,
    0x6423449du, 0x025abe4eu, 0xa09237ffu, 0x3ec9b1b0u, 0xdd012b61u, 0x7b38a512u, 0x19701ec3u, 0xb7a79874u,
    0x55df1225u, 0xf4168bd6u, 0x924e0587u, 0x30857f38u, 0xcebcf8e9u, 0x6cf4729au, 0x0b2bec4bu, 0xa96365fcu,
    0x479adfadu, 0xe5d2595eu, 0x8409d30fu, 0x22414cc0u, 0xc078c671u, 0x5eb04022u, 0xfce7b9d3u, 0x9b1f3384u,
    0x3956ad35u, 0xd78e26e6u, 0x75c5a097u, 0x13fd1a48u, 0xb23493f9u, 0x506c0daau, 0xeea3875bu, 0x8cdb010cu,
    0x2b127abdu, 0xc949f46eu, 0x67816e1fu, 0x05b8e7d0u, 0xa3f06181u, 0x4227db32u, 0xe05f54e3u, 0x7e96ce94u,
    0x1cce4845u, 0xbb05c1f6u, 0x593d3ba7u, 0xf774b558u, 0x95ac2f09u, 0x33e3a8bau, 0xd21b226bu, 0x70529c1cu,
    0x0e8a15cdu, 0xacc18f7eu, 0x4af9092fu, 0xe93082e0u, 0x8767fc91u, 0x259f7642u, 0xc3d6eff3u, 0x620e69a4u,
    0x0045e355u, 0x9e7d5d06u, 0x3cb4d6b7u, 0xdaec5068u, 0x7923ca19u, 0x175b43cau, 0xb592bd7bu, 0x53ca372cu,
    0xf201b0ddu, 0x90392a8eu, 0x2e70a43fu, 0xcca81df0u, 0x6adf97a1u, 0x09171152u, 0xa74e8b03u, 0x458604b4u,
};

struct bshim_266_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_266_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x46deba33u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xccca84aau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x52b64f21u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd8a21998u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5e8de40fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe479ae86u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6a6578fdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf0514374u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_266_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x763d0debu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_266_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_266_reset(struct bshim_266_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00202456u;
    return 0;
}

