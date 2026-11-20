/* bshim_257 -- board support shim generated from the 0257 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_257_tab0[96] = {
    0x59a8d893u, 0xf7e05244u, 0x9617cbf5u, 0x344f45a6u, 0xd286bf57u, 0x70be3908u, 0x0ef5b2b9u, 0xad2d2c6au,
    0x4b64a61bu, 0xe99c1fccu, 0x87d3997du, 0x260b132eu, 0xc4428cdfu, 0x627a0690u, 0x00b18041u, 0x9ee8f9f2u,
    0x3d2073a3u, 0xdb57ed54u, 0x798f6705u, 0x17c6e0b6u, 0xb5fe5a67u, 0x5435d418u, 0xf26d4dc9u, 0x90a4c77au,
    0x2edc412bu, 0xcd13badcu, 0x6b4b348du, 0x0982ae3eu, 0xa7ba27efu, 0x45f1a1a0u, 0xe4291b51u, 0x82609502u,
    0x20980eb3u, 0xbecf8864u, 0x5d070215u, 0xfb3e7bc6u, 0x9975f577u, 0x37ad6f28u, 0xd5e4e8d9u, 0x741c628au,
    0x1253dc3bu, 0xb08b55ecu, 0x4ec2cf9du, 0xecfa494eu, 0x8b31c2ffu, 0x29693cb0u, 0xc7a0b661u, 0x65d83012u,
    0x040fa9c3u, 0xa2472374u, 0x407e9d25u, 0xdeb616d6u, 0x7ced9087u, 0x1b250a38u, 0xb95c83e9u, 0x5793fd9au,
    0xf5cb774bu, 0x9402f0fcu, 0x323a6aadu, 0xd071e45eu, 0x6ea95e0fu, 0x0ce0d7c0u, 0xab185171u, 0x494fcb22u,
    0xe78744d3u, 0x85bebe84u, 0x23f63835u, 0xc22db1e6u, 0x60652b97u, 0xfe9ca548u, 0x9cd41ef9u, 0x3b0b98aau,
    0xd943125bu, 0x777a8c0cu, 0x15b205bdu, 0xb3e97f6eu, 0x5220f91fu, 0xf05872d0u, 0x8e8fec81u, 0x2cc76632u,
    0xcafedfe3u, 0x69365994u, 0x076dd345u, 0xa5a54cf6u, 0x43dcc6a7u, 0xe2144058u, 0x804bba09u, 0x1e8333bau,
    0xbcbaad6bu, 0x5af2271cu, 0xf929a0cdu, 0x97611a7eu, 0x3598942fu, 0xd3d00de0u, 0x72078791u, 0x103f0142u,
};

static const uint32_t bshim_257_tab1[96] = {
    0xdb57ed54u, 0x798f6705u, 0x17c6e0b6u, 0xb5fe5a67u, 0x5435d418u, 0xf26d4dc9u, 0x90a4c77au, 0x2edc412bu,
    0xcd13badcu, 0x6b4b348du, 0x0982ae3eu, 0xa7ba27efu, 0x45f1a1a0u, 0xe4291b51u, 0x82609502u, 0x20980eb3u,
    0xbecf8864u, 0x5d070215u, 0xfb3e7bc6u, 0x9975f577u, 0x37ad6f28u, 0xd5e4e8d9u, 0x741c628au, 0x1253dc3bu,
    0xb08b55ecu, 0x4ec2cf9du, 0xecfa494eu, 0x8b31c2ffu, 0x29693cb0u, 0xc7a0b661u, 0x65d83012u, 0x040fa9c3u,
    0xa2472374u, 0x407e9d25u, 0xdeb616d6u, 0x7ced9087u, 0x1b250a38u, 0xb95c83e9u, 0x5793fd9au, 0xf5cb774bu,
    0x9402f0fcu, 0x323a6aadu, 0xd071e45eu, 0x6ea95e0fu, 0x0ce0d7c0u, 0xab185171u, 0x494fcb22u, 0xe78744d3u,
    0x85bebe84u, 0x23f63835u, 0xc22db1e6u, 0x60652b97u, 0xfe9ca548u, 0x9cd41ef9u, 0x3b0b98aau, 0xd943125bu,
    0x777a8c0cu, 0x15b205bdu, 0xb3e97f6eu, 0x5220f91fu, 0xf05872d0u, 0x8e8fec81u, 0x2cc76632u, 0xcafedfe3u,
    0x69365994u, 0x076dd345u, 0xa5a54cf6u, 0x43dcc6a7u, 0xe2144058u, 0x804bba09u, 0x1e8333bau, 0xbcbaad6bu,
    0x5af2271cu, 0xf929a0cdu, 0x97611a7eu, 0x3598942fu, 0xd3d00de0u, 0x72078791u, 0x103f0142u, 0xae767af3u,
    0x4cadf4a4u, 0xeae56e55u, 0x891ce806u, 0x275461b7u, 0xc58bdb68u, 0x63c35519u, 0x01facecau, 0xa032487bu,
    0x3e69c22cu, 0xdca13bddu, 0x7ad8b58eu, 0x19102f3fu, 0xb747a8f0u, 0x557f22a1u, 0xf3b69c52u, 0x91ee1603u,
};

static const uint32_t bshim_257_tab2[96] = {
    0x5d070215u, 0xfb3e7bc6u, 0x9975f577u, 0x37ad6f28u, 0xd5e4e8d9u, 0x741c628au, 0x1253dc3bu, 0xb08b55ecu,
    0x4ec2cf9du, 0xecfa494eu, 0x8b31c2ffu, 0x29693cb0u, 0xc7a0b661u, 0x65d83012u, 0x040fa9c3u, 0xa2472374u,
    0x407e9d25u, 0xdeb616d6u, 0x7ced9087u, 0x1b250a38u, 0xb95c83e9u, 0x5793fd9au, 0xf5cb774bu, 0x9402f0fcu,
    0x323a6aadu, 0xd071e45eu, 0x6ea95e0fu, 0x0ce0d7c0u, 0xab185171u, 0x494fcb22u, 0xe78744d3u, 0x85bebe84u,
    0x23f63835u, 0xc22db1e6u, 0x60652b97u, 0xfe9ca548u, 0x9cd41ef9u, 0x3b0b98aau, 0xd943125bu, 0x777a8c0cu,
    0x15b205bdu, 0xb3e97f6eu, 0x5220f91fu, 0xf05872d0u, 0x8e8fec81u, 0x2cc76632u, 0xcafedfe3u, 0x69365994u,
    0x076dd345u, 0xa5a54cf6u, 0x43dcc6a7u, 0xe2144058u, 0x804bba09u, 0x1e8333bau, 0xbcbaad6bu, 0x5af2271cu,
    0xf929a0cdu, 0x97611a7eu, 0x3598942fu, 0xd3d00de0u, 0x72078791u, 0x103f0142u, 0xae767af3u, 0x4cadf4a4u,
    0xeae56e55u, 0x891ce806u, 0x275461b7u, 0xc58bdb68u, 0x63c35519u, 0x01facecau, 0xa032487bu, 0x3e69c22cu,
    0xdca13bddu, 0x7ad8b58eu, 0x19102f3fu, 0xb747a8f0u, 0x557f22a1u, 0xf3b69c52u, 0x91ee1603u, 0x30258fb4u,
    0xce5d0965u, 0x6c948316u, 0x0acbfcc7u, 0xa9037678u, 0x473af029u, 0xe57269dau, 0x83a9e38bu, 0x21e15d3cu,
    0xc018d6edu, 0x5e50509eu, 0xfc87ca4fu, 0x9abf4400u, 0x38f6bdb1u, 0xd72e3762u, 0x7565b113u, 0x139d2ac4u,
};

static const uint32_t bshim_257_tab3[96] = {
    0xdeb616d6u, 0x7ced9087u, 0x1b250a38u, 0xb95c83e9u, 0x5793fd9au, 0xf5cb774bu, 0x9402f0fcu, 0x323a6aadu,
    0xd071e45eu, 0x6ea95e0fu, 0x0ce0d7c0u, 0xab185171u, 0x494fcb22u, 0xe78744d3u, 0x85bebe84u, 0x23f63835u,
    0xc22db1e6u, 0x60652b97u, 0xfe9ca548u, 0x9cd41ef9u, 0x3b0b98aau, 0xd943125bu, 0x777a8c0cu, 0x15b205bdu,
    0xb3e97f6eu, 0x5220f91fu, 0xf05872d0u, 0x8e8fec81u, 0x2cc76632u, 0xcafedfe3u, 0x69365994u, 0x076dd345u,
    0xa5a54cf6u, 0x43dcc6a7u, 0xe2144058u, 0x804bba09u, 0x1e8333bau, 0xbcbaad6bu, 0x5af2271cu, 0xf929a0cdu,
    0x97611a7eu, 0x3598942fu, 0xd3d00de0u, 0x72078791u, 0x103f0142u, 0xae767af3u, 0x4cadf4a4u, 0xeae56e55u,
    0x891ce806u, 0x275461b7u, 0xc58bdb68u, 0x63c35519u, 0x01facecau, 0xa032487bu, 0x3e69c22cu, 0xdca13bddu,
    0x7ad8b58eu, 0x19102f3fu, 0xb747a8f0u, 0x557f22a1u, 0xf3b69c52u, 0x91ee1603u, 0x30258fb4u, 0xce5d0965u,
    0x6c948316u, 0x0acbfcc7u, 0xa9037678u, 0x473af029u, 0xe57269dau, 0x83a9e38bu, 0x21e15d3cu, 0xc018d6edu,
    0x5e50509eu, 0xfc87ca4fu, 0x9abf4400u, 0x38f6bdb1u, 0xd72e3762u, 0x7565b113u, 0x139d2ac4u, 0xb1d4a475u,
    0x500c1e26u, 0xee4397d7u, 0x8c7b1188u, 0x2ab28b39u, 0xc8ea04eau, 0x67217e9bu, 0x0558f84cu, 0xa39071fdu,
    0x41c7ebaeu, 0xdfff655fu, 0x7e36df10u, 0x1c6e58c1u, 0xbaa5d272u, 0x58dd4c23u, 0xf714c5d4u, 0x954c3f85u,
};

static const uint32_t bshim_257_tab4[96] = {
    0x60652b97u, 0xfe9ca548u, 0x9cd41ef9u, 0x3b0b98aau, 0xd943125bu, 0x777a8c0cu, 0x15b205bdu, 0xb3e97f6eu,
    0x5220f91fu, 0xf05872d0u, 0x8e8fec81u, 0x2cc76632u, 0xcafedfe3u, 0x69365994u, 0x076dd345u, 0xa5a54cf6u,
    0x43dcc6a7u, 0xe2144058u, 0x804bba09u, 0x1e8333bau, 0xbcbaad6bu, 0x5af2271cu, 0xf929a0cdu, 0x97611a7eu,
    0x3598942fu, 0xd3d00de0u, 0x72078791u, 0x103f0142u, 0xae767af3u, 0x4cadf4a4u, 0xeae56e55u, 0x891ce806u,
    0x275461b7u, 0xc58bdb68u, 0x63c35519u, 0x01facecau, 0xa032487bu, 0x3e69c22cu, 0xdca13bddu, 0x7ad8b58eu,
    0x19102f3fu, 0xb747a8f0u, 0x557f22a1u, 0xf3b69c52u, 0x91ee1603u, 0x30258fb4u, 0xce5d0965u, 0x6c948316u,
    0x0acbfcc7u, 0xa9037678u, 0x473af029u, 0xe57269dau, 0x83a9e38bu, 0x21e15d3cu, 0xc018d6edu, 0x5e50509eu,
    0xfc87ca4fu, 0x9abf4400u, 0x38f6bdb1u, 0xd72e3762u, 0x7565b113u, 0x139d2ac4u, 0xb1d4a475u, 0x500c1e26u,
    0xee4397d7u, 0x8c7b1188u, 0x2ab28b39u, 0xc8ea04eau, 0x67217e9bu, 0x0558f84cu, 0xa39071fdu, 0x41c7ebaeu,
    0xdfff655fu, 0x7e36df10u, 0x1c6e58c1u, 0xbaa5d272u, 0x58dd4c23u, 0xf714c5d4u, 0x954c3f85u, 0x3383b936u,
    0xd1bb32e7u, 0x6ff2ac98u, 0x0e2a2649u, 0xac619ffau, 0x4a9919abu, 0xe8d0935cu, 0x87080d0du, 0x253f86beu,
    0xc377006fu, 0x61ae7a20u, 0xffe5f3d1u, 0x9e1d6d82u, 0x3c54e733u, 0xda8c60e4u, 0x78c3da95u, 0x16fb5446u,
};

static const uint32_t bshim_257_tab5[96] = {
    0xe2144058u, 0x804bba09u, 0x1e8333bau, 0xbcbaad6bu, 0x5af2271cu, 0xf929a0cdu, 0x97611a7eu, 0x3598942fu,
    0xd3d00de0u, 0x72078791u, 0x103f0142u, 0xae767af3u, 0x4cadf4a4u, 0xeae56e55u, 0x891ce806u, 0x275461b7u,
    0xc58bdb68u, 0x63c35519u, 0x01facecau, 0xa032487bu, 0x3e69c22cu, 0xdca13bddu, 0x7ad8b58eu, 0x19102f3fu,
    0xb747a8f0u, 0x557f22a1u, 0xf3b69c52u, 0x91ee1603u, 0x30258fb4u, 0xce5d0965u, 0x6c948316u, 0x0acbfcc7u,
    0xa9037678u, 0x473af029u, 0xe57269dau, 0x83a9e38bu, 0x21e15d3cu, 0xc018d6edu, 0x5e50509eu, 0xfc87ca4fu,
    0x9abf4400u, 0x38f6bdb1u, 0xd72e3762u, 0x7565b113u, 0x139d2ac4u, 0xb1d4a475u, 0x500c1e26u, 0xee4397d7u,
    0x8c7b1188u, 0x2ab28b39u, 0xc8ea04eau, 0x67217e9bu, 0x0558f84cu, 0xa39071fdu, 0x41c7ebaeu, 0xdfff655fu,
    0x7e36df10u, 0x1c6e58c1u, 0xbaa5d272u, 0x58dd4c23u, 0xf714c5d4u, 0x954c3f85u, 0x3383b936u, 0xd1bb32e7u,
    0x6ff2ac98u, 0x0e2a2649u, 0xac619ffau, 0x4a9919abu, 0xe8d0935cu, 0x87080d0du, 0x253f86beu, 0xc377006fu,
    0x61ae7a20u, 0xffe5f3d1u, 0x9e1d6d82u, 0x3c54e733u, 0xda8c60e4u, 0x78c3da95u, 0x16fb5446u, 0xb532cdf7u,
    0x536a47a8u, 0xf1a1c159u, 0x8fd93b0au, 0x2e10b4bbu, 0xcc482e6cu, 0x6a7fa81du, 0x08b721ceu, 0xa6ee9b7fu,
    0x45261530u, 0xe35d8ee1u, 0x81950892u, 0x1fcc8243u, 0xbe03fbf4u, 0x5c3b75a5u, 0xfa72ef56u, 0x98aa6907u,
};

static const uint32_t bshim_257_tab6[96] = {
    0x63c35519u, 0x01facecau, 0xa032487bu, 0x3e69c22cu, 0xdca13bddu, 0x7ad8b58eu, 0x19102f3fu, 0xb747a8f0u,
    0x557f22a1u, 0xf3b69c52u, 0x91ee1603u, 0x30258fb4u, 0xce5d0965u, 0x6c948316u, 0x0acbfcc7u, 0xa9037678u,
    0x473af029u, 0xe57269dau, 0x83a9e38bu, 0x21e15d3cu, 0xc018d6edu, 0x5e50509eu, 0xfc87ca4fu, 0x9abf4400u,
    0x38f6bdb1u, 0xd72e3762u, 0x7565b113u, 0x139d2ac4u, 0xb1d4a475u, 0x500c1e26u, 0xee4397d7u, 0x8c7b1188u,
    0x2ab28b39u, 0xc8ea04eau, 0x67217e9bu, 0x0558f84cu, 0xa39071fdu, 0x41c7ebaeu, 0xdfff655fu, 0x7e36df10u,
    0x1c6e58c1u, 0xbaa5d272u, 0x58dd4c23u, 0xf714c5d4u, 0x954c3f85u, 0x3383b936u, 0xd1bb32e7u, 0x6ff2ac98u,
    0x0e2a2649u, 0xac619ffau, 0x4a9919abu, 0xe8d0935cu, 0x87080d0du, 0x253f86beu, 0xc377006fu, 0x61ae7a20u,
    0xffe5f3d1u, 0x9e1d6d82u, 0x3c54e733u, 0xda8c60e4u, 0x78c3da95u, 0x16fb5446u, 0xb532cdf7u, 0x536a47a8u,
    0xf1a1c159u, 0x8fd93b0au, 0x2e10b4bbu, 0xcc482e6cu, 0x6a7fa81du, 0x08b721ceu, 0xa6ee9b7fu, 0x45261530u,
    0xe35d8ee1u, 0x81950892u, 0x1fcc8243u, 0xbe03fbf4u, 0x5c3b75a5u, 0xfa72ef56u, 0x98aa6907u, 0x36e1e2b8u,
    0xd5195c69u, 0x7350d61au, 0x11884fcbu, 0xafbfc97cu, 0x4df7432du, 0xec2ebcdeu, 0x8a66368fu, 0x289db040u,
    0xc6d529f1u, 0x650ca3a2u, 0x03441d53u, 0xa17b9704u, 0x3fb310b5u, 0xddea8a66u, 0x7c220417u, 0x1a597dc8u,
};

static const uint32_t bshim_257_tab7[96] = {
    0xe57269dau, 0x83a9e38bu, 0x21e15d3cu, 0xc018d6edu, 0x5e50509eu, 0xfc87ca4fu, 0x9abf4400u, 0x38f6bdb1u,
    0xd72e3762u, 0x7565b113u, 0x139d2ac4u, 0xb1d4a475u, 0x500c1e26u, 0xee4397d7u, 0x8c7b1188u, 0x2ab28b39u,
    0xc8ea04eau, 0x67217e9bu, 0x0558f84cu, 0xa39071fdu, 0x41c7ebaeu, 0xdfff655fu, 0x7e36df10u, 0x1c6e58c1u,
    0xbaa5d272u, 0x58dd4c23u, 0xf714c5d4u, 0x954c3f85u, 0x3383b936u, 0xd1bb32e7u, 0x6ff2ac98u, 0x0e2a2649u,
    0xac619ffau, 0x4a9919abu, 0xe8d0935cu, 0x87080d0du, 0x253f86beu, 0xc377006fu, 0x61ae7a20u, 0xffe5f3d1u,
    0x9e1d6d82u, 0x3c54e733u, 0xda8c60e4u, 0x78c3da95u, 0x16fb5446u, 0xb532cdf7u, 0x536a47a8u, 0xf1a1c159u,
    0x8fd93b0au, 0x2e10b4bbu, 0xcc482e6cu, 0x6a7fa81du, 0x08b721ceu, 0xa6ee9b7fu, 0x45261530u, 0xe35d8ee1u,
    0x81950892u, 0x1fcc8243u, 0xbe03fbf4u, 0x5c3b75a5u, 0xfa72ef56u, 0x98aa6907u, 0x36e1e2b8u, 0xd5195c69u,
    0x7350d61au, 0x11884fcbu, 0xafbfc97cu, 0x4df7432du, 0xec2ebcdeu, 0x8a66368fu, 0x289db040u, 0xc6d529f1u,
    0x650ca3a2u, 0x03441d53u, 0xa17b9704u, 0x3fb310b5u, 0xddea8a66u, 0x7c220417u, 0x1a597dc8u, 0xb890f779u,
    0x56c8712au, 0xf4ffeadbu, 0x9337648cu, 0x316ede3du, 0xcfa657eeu, 0x6dddd19fu, 0x0c154b50u, 0xaa4cc501u,
    0x48843eb2u, 0xe6bbb863u, 0x84f33214u, 0x232aabc5u, 0xc1622576u, 0x5f999f27u, 0xfdd118d8u, 0x9c089289u,
};

struct bshim_257_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_257_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x71b64177u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf7a20beeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7d8dd665u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0379a0dcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x89656b53u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0f5135cau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x953d0041u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1b28cab8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa114952fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x27005fa6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xacec2a1du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x32d7f494u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb8c3bf0bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3eaf8982u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc49b53f9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4a871e70u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd072e8e7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x565eb35eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xdc4a7dd5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6236484cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe82212c3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6e0ddd3au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf3f9a7b1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x79e57228u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xffd13c9fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x85bd0716u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0ba8d18du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x91949c04u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1780667bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9d6c30f2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2357fb69u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa943c5e0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2f2f9057u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb51b5aceu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3b072545u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_257_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0f2efbcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_257_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_257_reset(struct bshim_257_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001f0defu;
    return 0;
}

