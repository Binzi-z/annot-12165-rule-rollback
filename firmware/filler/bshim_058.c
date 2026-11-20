/* bshim_058 -- board support shim generated from the 0058 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_058_tab0[96] = {
    0xd27dc34eu, 0x70b53cffu, 0x0eecb6b0u, 0xad243061u, 0x4b5baa12u, 0xe99323c3u, 0x87ca9d74u, 0x26021725u,
    0xc43990d6u, 0x62710a87u, 0x00a88438u, 0x9edffde9u, 0x3d17779au, 0xdb4ef14bu, 0x79866afcu, 0x17bde4adu,
    0xb5f55e5eu, 0x542cd80fu, 0xf26451c0u, 0x909bcb71u, 0x2ed34522u, 0xcd0abed3u, 0x6b423884u, 0x0979b235u,
    0xa7b12be6u, 0x45e8a597u, 0xe4201f48u, 0x825798f9u, 0x208f12aau, 0xbec68c5bu, 0x5cfe060cu, 0xfb357fbdu,
    0x996cf96eu, 0x37a4731fu, 0xd5dbecd0u, 0x74136681u, 0x124ae032u, 0xb08259e3u, 0x4eb9d394u, 0xecf14d45u,
    0x8b28c6f6u, 0x296040a7u, 0xc797ba58u, 0x65cf3409u, 0x0406adbau, 0xa23e276bu, 0x4075a11cu, 0xdead1acdu,
    0x7ce4947eu, 0x1b1c0e2fu, 0xb95387e0u, 0x578b0191u, 0xf5c27b42u, 0x93f9f4f3u, 0x32316ea4u, 0xd068e855u,
    0x6ea06206u, 0x0cd7dbb7u, 0xab0f5568u, 0x4946cf19u, 0xe77e48cau, 0x85b5c27bu, 0x23ed3c2cu, 0xc224b5ddu,
    0x605c2f8eu, 0xfe93a93fu, 0x9ccb22f0u, 0x3b029ca1u, 0xd93a1652u, 0x77719003u, 0x15a909b4u, 0xb3e08365u,
    0x5217fd16u, 0xf04f76c7u, 0x8e86f078u, 0x2cbe6a29u, 0xcaf5e3dau, 0x692d5d8bu, 0x0764d73cu, 0xa59c50edu,
    0x43d3ca9eu, 0xe20b444fu, 0x8042be00u, 0x1e7a37b1u, 0xbcb1b162u, 0x5ae92b13u, 0xf920a4c4u, 0x97581e75u,
    0x358f9826u, 0xd3c711d7u, 0x71fe8b88u, 0x10360539u, 0xae6d7eeau, 0x4ca4f89bu, 0xeadc724cu, 0x8913ebfdu,
};

static const uint32_t bshim_058_tab1[96] = {
    0x542cd80fu, 0xf26451c0u, 0x909bcb71u, 0x2ed34522u, 0xcd0abed3u, 0x6b423884u, 0x0979b235u, 0xa7b12be6u,
    0x45e8a597u, 0xe4201f48u, 0x825798f9u, 0x208f12aau, 0xbec68c5bu, 0x5cfe060cu, 0xfb357fbdu, 0x996cf96eu,
    0x37a4731fu, 0xd5dbecd0u, 0x74136681u, 0x124ae032u, 0xb08259e3u, 0x4eb9d394u, 0xecf14d45u, 0x8b28c6f6u,
    0x296040a7u, 0xc797ba58u, 0x65cf3409u, 0x0406adbau, 0xa23e276bu, 0x4075a11cu, 0xdead1acdu, 0x7ce4947eu,
    0x1b1c0e2fu, 0xb95387e0u, 0x578b0191u, 0xf5c27b42u, 0x93f9f4f3u, 0x32316ea4u, 0xd068e855u, 0x6ea06206u,
    0x0cd7dbb7u, 0xab0f5568u, 0x4946cf19u, 0xe77e48cau, 0x85b5c27bu, 0x23ed3c2cu, 0xc224b5ddu, 0x605c2f8eu,
    0xfe93a93fu, 0x9ccb22f0u, 0x3b029ca1u, 0xd93a1652u, 0x77719003u, 0x15a909b4u, 0xb3e08365u, 0x5217fd16u,
    0xf04f76c7u, 0x8e86f078u, 0x2cbe6a29u, 0xcaf5e3dau, 0x692d5d8bu, 0x0764d73cu, 0xa59c50edu, 0x43d3ca9eu,
    0xe20b444fu, 0x8042be00u, 0x1e7a37b1u, 0xbcb1b162u, 0x5ae92b13u, 0xf920a4c4u, 0x97581e75u, 0x358f9826u,
    0xd3c711d7u, 0x71fe8b88u, 0x10360539u, 0xae6d7eeau, 0x4ca4f89bu, 0xeadc724cu, 0x8913ebfdu, 0x274b65aeu,
    0xc582df5fu, 0x63ba5910u, 0x01f1d2c1u, 0xa0294c72u, 0x3e60c623u, 0xdc983fd4u, 0x7acfb985u, 0x19073336u,
    0xb73eace7u, 0x55762698u, 0xf3ada049u, 0x91e519fau, 0x301c93abu, 0xce540d5cu, 0x6c8b870du, 0x0ac300beu,
};

static const uint32_t bshim_058_tab2[96] = {
    0xd5dbecd0u, 0x74136681u, 0x124ae032u, 0xb08259e3u, 0x4eb9d394u, 0xecf14d45u, 0x8b28c6f6u, 0x296040a7u,
    0xc797ba58u, 0x65cf3409u, 0x0406adbau, 0xa23e276bu, 0x4075a11cu, 0xdead1acdu, 0x7ce4947eu, 0x1b1c0e2fu,
    0xb95387e0u, 0x578b0191u, 0xf5c27b42u, 0x93f9f4f3u, 0x32316ea4u, 0xd068e855u, 0x6ea06206u, 0x0cd7dbb7u,
    0xab0f5568u, 0x4946cf19u, 0xe77e48cau, 0x85b5c27bu, 0x23ed3c2cu, 0xc224b5ddu, 0x605c2f8eu, 0xfe93a93fu,
    0x9ccb22f0u, 0x3b029ca1u, 0xd93a1652u, 0x77719003u, 0x15a909b4u, 0xb3e08365u, 0x5217fd16u, 0xf04f76c7u,
    0x8e86f078u, 0x2cbe6a29u, 0xcaf5e3dau, 0x692d5d8bu, 0x0764d73cu, 0xa59c50edu, 0x43d3ca9eu, 0xe20b444fu,
    0x8042be00u, 0x1e7a37b1u, 0xbcb1b162u, 0x5ae92b13u, 0xf920a4c4u, 0x97581e75u, 0x358f9826u, 0xd3c711d7u,
    0x71fe8b88u, 0x10360539u, 0xae6d7eeau, 0x4ca4f89bu, 0xeadc724cu, 0x8913ebfdu, 0x274b65aeu, 0xc582df5fu,
    0x63ba5910u, 0x01f1d2c1u, 0xa0294c72u, 0x3e60c623u, 0xdc983fd4u, 0x7acfb985u, 0x19073336u, 0xb73eace7u,
    0x55762698u, 0xf3ada049u, 0x91e519fau, 0x301c93abu, 0xce540d5cu, 0x6c8b870du, 0x0ac300beu, 0xa8fa7a6fu,
    0x4731f420u, 0xe5696dd1u, 0x83a0e782u, 0x21d86133u, 0xc00fdae4u, 0x5e475495u, 0xfc7ece46u, 0x9ab647f7u,
    0x38edc1a8u, 0xd7253b59u, 0x755cb50au, 0x13942ebbu, 0xb1cba86cu, 0x5003221du, 0xee3a9bceu, 0x8c72157fu,
};

static const uint32_t bshim_058_tab3[96] = {
    0x578b0191u, 0xf5c27b42u, 0x93f9f4f3u, 0x32316ea4u, 0xd068e855u, 0x6ea06206u, 0x0cd7dbb7u, 0xab0f5568u,
    0x4946cf19u, 0xe77e48cau, 0x85b5c27bu, 0x23ed3c2cu, 0xc224b5ddu, 0x605c2f8eu, 0xfe93a93fu, 0x9ccb22f0u,
    0x3b029ca1u, 0xd93a1652u, 0x77719003u, 0x15a909b4u, 0xb3e08365u, 0x5217fd16u, 0xf04f76c7u, 0x8e86f078u,
    0x2cbe6a29u, 0xcaf5e3dau, 0x692d5d8bu, 0x0764d73cu, 0xa59c50edu, 0x43d3ca9eu, 0xe20b444fu, 0x8042be00u,
    0x1e7a37b1u, 0xbcb1b162u, 0x5ae92b13u, 0xf920a4c4u, 0x97581e75u, 0x358f9826u, 0xd3c711d7u, 0x71fe8b88u,
    0x10360539u, 0xae6d7eeau, 0x4ca4f89bu, 0xeadc724cu, 0x8913ebfdu, 0x274b65aeu, 0xc582df5fu, 0x63ba5910u,
    0x01f1d2c1u, 0xa0294c72u, 0x3e60c623u, 0xdc983fd4u, 0x7acfb985u, 0x19073336u, 0xb73eace7u, 0x55762698u,
    0xf3ada049u, 0x91e519fau, 0x301c93abu, 0xce540d5cu, 0x6c8b870du, 0x0ac300beu, 0xa8fa7a6fu, 0x4731f420u,
    0xe5696dd1u, 0x83a0e782u, 0x21d86133u, 0xc00fdae4u, 0x5e475495u, 0xfc7ece46u, 0x9ab647f7u, 0x38edc1a8u,
    0xd7253b59u, 0x755cb50au, 0x13942ebbu, 0xb1cba86cu, 0x5003221du, 0xee3a9bceu, 0x8c72157fu, 0x2aa98f30u,
    0xc8e108e1u, 0x67188292u, 0x054ffc43u, 0xa38775f4u, 0x41beefa5u, 0xdff66956u, 0x7e2de307u, 0x1c655cb8u,
    0xba9cd669u, 0x58d4501au, 0xf70bc9cbu, 0x9543437cu, 0x337abd2du, 0xd1b236deu, 0x6fe9b08fu, 0x0e212a40u,
};

static const uint32_t bshim_058_tab4[96] = {
    0xd93a1652u, 0x77719003u, 0x15a909b4u, 0xb3e08365u, 0x5217fd16u, 0xf04f76c7u, 0x8e86f078u, 0x2cbe6a29u,
    0xcaf5e3dau, 0x692d5d8bu, 0x0764d73cu, 0xa59c50edu, 0x43d3ca9eu, 0xe20b444fu, 0x8042be00u, 0x1e7a37b1u,
    0xbcb1b162u, 0x5ae92b13u, 0xf920a4c4u, 0x97581e75u, 0x358f9826u, 0xd3c711d7u, 0x71fe8b88u, 0x10360539u,
    0xae6d7eeau, 0x4ca4f89bu, 0xeadc724cu, 0x8913ebfdu, 0x274b65aeu, 0xc582df5fu, 0x63ba5910u, 0x01f1d2c1u,
    0xa0294c72u, 0x3e60c623u, 0xdc983fd4u, 0x7acfb985u, 0x19073336u, 0xb73eace7u, 0x55762698u, 0xf3ada049u,
    0x91e519fau, 0x301c93abu, 0xce540d5cu, 0x6c8b870du, 0x0ac300beu, 0xa8fa7a6fu, 0x4731f420u, 0xe5696dd1u,
    0x83a0e782u, 0x21d86133u, 0xc00fdae4u, 0x5e475495u, 0xfc7ece46u, 0x9ab647f7u, 0x38edc1a8u, 0xd7253b59u,
    0x755cb50au, 0x13942ebbu, 0xb1cba86cu, 0x5003221du, 0xee3a9bceu, 0x8c72157fu, 0x2aa98f30u, 0xc8e108e1u,
    0x67188292u, 0x054ffc43u, 0xa38775f4u, 0x41beefa5u, 0xdff66956u, 0x7e2de307u, 0x1c655cb8u, 0xba9cd669u,
    0x58d4501au, 0xf70bc9cbu, 0x9543437cu, 0x337abd2du, 0xd1b236deu, 0x6fe9b08fu, 0x0e212a40u, 0xac58a3f1u,
    0x4a901da2u, 0xe8c79753u, 0x86ff1104u, 0x25368ab5u, 0xc36e0466u, 0x61a57e17u, 0xffdcf7c8u, 0x9e147179u,
    0x3c4beb2au, 0xda8364dbu, 0x78bade8cu, 0x16f2583du, 0xb529d1eeu, 0x53614b9fu, 0xf198c550u, 0x8fd03f01u,
};

static const uint32_t bshim_058_tab5[96] = {
    0x5ae92b13u, 0xf920a4c4u, 0x97581e75u, 0x358f9826u, 0xd3c711d7u, 0x71fe8b88u, 0x10360539u, 0xae6d7eeau,
    0x4ca4f89bu, 0xeadc724cu, 0x8913ebfdu, 0x274b65aeu, 0xc582df5fu, 0x63ba5910u, 0x01f1d2c1u, 0xa0294c72u,
    0x3e60c623u, 0xdc983fd4u, 0x7acfb985u, 0x19073336u, 0xb73eace7u, 0x55762698u, 0xf3ada049u, 0x91e519fau,
    0x301c93abu, 0xce540d5cu, 0x6c8b870du, 0x0ac300beu, 0xa8fa7a6fu, 0x4731f420u, 0xe5696dd1u, 0x83a0e782u,
    0x21d86133u, 0xc00fdae4u, 0x5e475495u, 0xfc7ece46u, 0x9ab647f7u, 0x38edc1a8u, 0xd7253b59u, 0x755cb50au,
    0x13942ebbu, 0xb1cba86cu, 0x5003221du, 0xee3a9bceu, 0x8c72157fu, 0x2aa98f30u, 0xc8e108e1u, 0x67188292u,
    0x054ffc43u, 0xa38775f4u, 0x41beefa5u, 0xdff66956u, 0x7e2de307u, 0x1c655cb8u, 0xba9cd669u, 0x58d4501au,
    0xf70bc9cbu, 0x9543437cu, 0x337abd2du, 0xd1b236deu, 0x6fe9b08fu, 0x0e212a40u, 0xac58a3f1u, 0x4a901da2u,
    0xe8c79753u, 0x86ff1104u, 0x25368ab5u, 0xc36e0466u, 0x61a57e17u, 0xffdcf7c8u, 0x9e147179u, 0x3c4beb2au,
    0xda8364dbu, 0x78bade8cu, 0x16f2583du, 0xb529d1eeu, 0x53614b9fu, 0xf198c550u, 0x8fd03f01u, 0x2e07b8b2u,
    0xcc3f3263u, 0x6a76ac14u, 0x08ae25c5u, 0xa6e59f76u, 0x451d1927u, 0xe35492d8u, 0x818c0c89u, 0x1fc3863au,
    0xbdfaffebu, 0x5c32799cu, 0xfa69f34du, 0x98a16cfeu, 0x36d8e6afu, 0xd5106060u, 0x7347da11u, 0x117f53c2u,
};

static const uint32_t bshim_058_tab6[96] = {
    0xdc983fd4u, 0x7acfb985u, 0x19073336u, 0xb73eace7u, 0x55762698u, 0xf3ada049u, 0x91e519fau, 0x301c93abu,
    0xce540d5cu, 0x6c8b870du, 0x0ac300beu, 0xa8fa7a6fu, 0x4731f420u, 0xe5696dd1u, 0x83a0e782u, 0x21d86133u,
    0xc00fdae4u, 0x5e475495u, 0xfc7ece46u, 0x9ab647f7u, 0x38edc1a8u, 0xd7253b59u, 0x755cb50au, 0x13942ebbu,
    0xb1cba86cu, 0x5003221du, 0xee3a9bceu, 0x8c72157fu, 0x2aa98f30u, 0xc8e108e1u, 0x67188292u, 0x054ffc43u,
    0xa38775f4u, 0x41beefa5u, 0xdff66956u, 0x7e2de307u, 0x1c655cb8u, 0xba9cd669u, 0x58d4501au, 0xf70bc9cbu,
    0x9543437cu, 0x337abd2du, 0xd1b236deu, 0x6fe9b08fu, 0x0e212a40u, 0xac58a3f1u, 0x4a901da2u, 0xe8c79753u,
    0x86ff1104u, 0x25368ab5u, 0xc36e0466u, 0x61a57e17u, 0xffdcf7c8u, 0x9e147179u, 0x3c4beb2au, 0xda8364dbu,
    0x78bade8cu, 0x16f2583du, 0xb529d1eeu, 0x53614b9fu, 0xf198c550u, 0x8fd03f01u, 0x2e07b8b2u, 0xcc3f3263u,
    0x6a76ac14u, 0x08ae25c5u, 0xa6e59f76u, 0x451d1927u, 0xe35492d8u, 0x818c0c89u, 0x1fc3863au, 0xbdfaffebu,
    0x5c32799cu, 0xfa69f34du, 0x98a16cfeu, 0x36d8e6afu, 0xd5106060u, 0x7347da11u, 0x117f53c2u, 0xafb6cd73u,
    0x4dee4724u, 0xec25c0d5u, 0x8a5d3a86u, 0x2894b437u, 0xc6cc2de8u, 0x6503a799u, 0x033b214au, 0xa1729afbu,
    0x3faa14acu, 0xdde18e5du, 0x7c19080eu, 0x1a5081bfu, 0xb887fb70u, 0x56bf7521u, 0xf4f6eed2u, 0x932e6883u,
};

static const uint32_t bshim_058_tab7[96] = {
    0x5e475495u, 0xfc7ece46u, 0x9ab647f7u, 0x38edc1a8u, 0xd7253b59u, 0x755cb50au, 0x13942ebbu, 0xb1cba86cu,
    0x5003221du, 0xee3a9bceu, 0x8c72157fu, 0x2aa98f30u, 0xc8e108e1u, 0x67188292u, 0x054ffc43u, 0xa38775f4u,
    0x41beefa5u, 0xdff66956u, 0x7e2de307u, 0x1c655cb8u, 0xba9cd669u, 0x58d4501au, 0xf70bc9cbu, 0x9543437cu,
    0x337abd2du, 0xd1b236deu, 0x6fe9b08fu, 0x0e212a40u, 0xac58a3f1u, 0x4a901da2u, 0xe8c79753u, 0x86ff1104u,
    0x25368ab5u, 0xc36e0466u, 0x61a57e17u, 0xffdcf7c8u, 0x9e147179u, 0x3c4beb2au, 0xda8364dbu, 0x78bade8cu,
    0x16f2583du, 0xb529d1eeu, 0x53614b9fu, 0xf198c550u, 0x8fd03f01u, 0x2e07b8b2u, 0xcc3f3263u, 0x6a76ac14u,
    0x08ae25c5u, 0xa6e59f76u, 0x451d1927u, 0xe35492d8u, 0x818c0c89u, 0x1fc3863au, 0xbdfaffebu, 0x5c32799cu,
    0xfa69f34du, 0x98a16cfeu, 0x36d8e6afu, 0xd5106060u, 0x7347da11u, 0x117f53c2u, 0xafb6cd73u, 0x4dee4724u,
    0xec25c0d5u, 0x8a5d3a86u, 0x2894b437u, 0xc6cc2de8u, 0x6503a799u, 0x033b214au, 0xa1729afbu, 0x3faa14acu,
    0xdde18e5du, 0x7c19080eu, 0x1a5081bfu, 0xb887fb70u, 0x56bf7521u, 0xf4f6eed2u, 0x932e6883u, 0x3165e234u,
    0xcf9d5be5u, 0x6dd4d596u, 0x0c0c4f47u, 0xaa43c8f8u, 0x487b42a9u, 0xe6b2bc5au, 0x84ea360bu, 0x2321afbcu,
    0xc159296du, 0x5f90a31eu, 0xfdc81ccfu, 0x9bff9680u, 0x3a371031u, 0xd86e89e2u, 0x76a60393u, 0x14dd7d44u,
};

struct bshim_058_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_058_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x576bdef6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdd57a96du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x634373e4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe92f3e5bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6f1b08d2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf506d349u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7af29dc0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x00de6837u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_058_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_058_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_058_reset(struct bshim_058_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x00070226u;
    return 0;
}

