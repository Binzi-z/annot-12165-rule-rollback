/* bshim_216 -- board support shim generated from the 0216 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_216_tab0[96] = {
    0xe3c2b408u, 0x81fa2db9u, 0x2031a76au, 0xbe69211bu, 0x5ca09accu, 0xfad8147du, 0x990f8e2eu, 0x374707dfu,
    0xd57e8190u, 0x73b5fb41u, 0x11ed74f2u, 0xb024eea3u, 0x4e5c6854u, 0xec93e205u, 0x8acb5bb6u, 0x2902d567u,
    0xc73a4f18u, 0x6571c8c9u, 0x03a9427au, 0xa1e0bc2bu, 0x401835dcu, 0xde4faf8du, 0x7c87293eu, 0x1abea2efu,
    0xb8f61ca0u, 0x572d9651u, 0xf5651002u, 0x939c89b3u, 0x31d40364u, 0xd00b7d15u, 0x6e42f6c6u, 0x0c7a7077u,
    0xaab1ea28u, 0x48e963d9u, 0xe720dd8au, 0x8558573bu, 0x238fd0ecu, 0xc1c74a9du, 0x5ffec44eu, 0xfe363dffu,
    0x9c6db7b0u, 0x3aa53161u, 0xd8dcab12u, 0x771424c3u, 0x154b9e74u, 0xb3831825u, 0x51ba91d6u, 0xeff20b87u,
    0x8e298538u, 0x2c60fee9u, 0xca98789au, 0x68cff24bu, 0x07076bfcu, 0xa53ee5adu, 0x43765f5eu, 0xe1add90fu,
    0x7fe552c0u, 0x1e1ccc71u, 0xbc544622u, 0x5a8bbfd3u, 0xf8c33984u, 0x96fab335u, 0x35322ce6u, 0xd369a697u,
    0x71a12048u, 0x0fd899f9u, 0xae1013aau, 0x4c478d5bu, 0xea7f070cu, 0x88b680bdu, 0x26edfa6eu, 0xc525741fu,
    0x635cedd0u, 0x01946781u, 0x9fcbe132u, 0x3e035ae3u, 0xdc3ad494u, 0x7a724e45u, 0x18a9c7f6u, 0xb6e141a7u,
    0x5518bb58u, 0xf3503509u, 0x9187aebau, 0x2fbf286bu, 0xcdf6a21cu, 0x6c2e1bcdu, 0x0a65957eu, 0xa89d0f2fu,
    0x46d488e0u, 0xe50c0291u, 0x83437c42u, 0x217af5f3u, 0xbfb26fa4u, 0x5de9e955u, 0xfc216306u, 0x9a58dcb7u,
};

static const uint32_t bshim_216_tab1[96] = {
    0x6571c8c9u, 0x03a9427au, 0xa1e0bc2bu, 0x401835dcu, 0xde4faf8du, 0x7c87293eu, 0x1abea2efu, 0xb8f61ca0u,
    0x572d9651u, 0xf5651002u, 0x939c89b3u, 0x31d40364u, 0xd00b7d15u, 0x6e42f6c6u, 0x0c7a7077u, 0xaab1ea28u,
    0x48e963d9u, 0xe720dd8au, 0x8558573bu, 0x238fd0ecu, 0xc1c74a9du, 0x5ffec44eu, 0xfe363dffu, 0x9c6db7b0u,
    0x3aa53161u, 0xd8dcab12u, 0x771424c3u, 0x154b9e74u, 0xb3831825u, 0x51ba91d6u, 0xeff20b87u, 0x8e298538u,
    0x2c60fee9u, 0xca98789au, 0x68cff24bu, 0x07076bfcu, 0xa53ee5adu, 0x43765f5eu, 0xe1add90fu, 0x7fe552c0u,
    0x1e1ccc71u, 0xbc544622u, 0x5a8bbfd3u, 0xf8c33984u, 0x96fab335u, 0x35322ce6u, 0xd369a697u, 0x71a12048u,
    0x0fd899f9u, 0xae1013aau, 0x4c478d5bu, 0xea7f070cu, 0x88b680bdu, 0x26edfa6eu, 0xc525741fu, 0x635cedd0u,
    0x01946781u, 0x9fcbe132u, 0x3e035ae3u, 0xdc3ad494u, 0x7a724e45u, 0x18a9c7f6u, 0xb6e141a7u, 0x5518bb58u,
    0xf3503509u, 0x9187aebau, 0x2fbf286bu, 0xcdf6a21cu, 0x6c2e1bcdu, 0x0a65957eu, 0xa89d0f2fu, 0x46d488e0u,
    0xe50c0291u, 0x83437c42u, 0x217af5f3u, 0xbfb26fa4u, 0x5de9e955u, 0xfc216306u, 0x9a58dcb7u, 0x38905668u,
    0xd6c7d019u, 0x74ff49cau, 0x1336c37bu, 0xb16e3d2cu, 0x4fa5b6ddu, 0xeddd308eu, 0x8c14aa3fu, 0x2a4c23f0u,
    0xc8839da1u, 0x66bb1752u, 0x04f29103u, 0xa32a0ab4u, 0x41618465u, 0xdf98fe16u, 0x7dd077c7u, 0x1c07f178u,
};

static const uint32_t bshim_216_tab2[96] = {
    0xe720dd8au, 0x8558573bu, 0x238fd0ecu, 0xc1c74a9du, 0x5ffec44eu, 0xfe363dffu, 0x9c6db7b0u, 0x3aa53161u,
    0xd8dcab12u, 0x771424c3u, 0x154b9e74u, 0xb3831825u, 0x51ba91d6u, 0xeff20b87u, 0x8e298538u, 0x2c60fee9u,
    0xca98789au, 0x68cff24bu, 0x07076bfcu, 0xa53ee5adu, 0x43765f5eu, 0xe1add90fu, 0x7fe552c0u, 0x1e1ccc71u,
    0xbc544622u, 0x5a8bbfd3u, 0xf8c33984u, 0x96fab335u, 0x35322ce6u, 0xd369a697u, 0x71a12048u, 0x0fd899f9u,
    0xae1013aau, 0x4c478d5bu, 0xea7f070cu, 0x88b680bdu, 0x26edfa6eu, 0xc525741fu, 0x635cedd0u, 0x01946781u,
    0x9fcbe132u, 0x3e035ae3u, 0xdc3ad494u, 0x7a724e45u, 0x18a9c7f6u, 0xb6e141a7u, 0x5518bb58u, 0xf3503509u,
    0x9187aebau, 0x2fbf286bu, 0xcdf6a21cu, 0x6c2e1bcdu, 0x0a65957eu, 0xa89d0f2fu, 0x46d488e0u, 0xe50c0291u,
    0x83437c42u, 0x217af5f3u, 0xbfb26fa4u, 0x5de9e955u, 0xfc216306u, 0x9a58dcb7u, 0x38905668u, 0xd6c7d019u,
    0x74ff49cau, 0x1336c37bu, 0xb16e3d2cu, 0x4fa5b6ddu, 0xeddd308eu, 0x8c14aa3fu, 0x2a4c23f0u, 0xc8839da1u,
    0x66bb1752u, 0x04f29103u, 0xa32a0ab4u, 0x41618465u, 0xdf98fe16u, 0x7dd077c7u, 0x1c07f178u, 0xba3f6b29u,
    0x5876e4dau, 0xf6ae5e8bu, 0x94e5d83cu, 0x331d51edu, 0xd154cb9eu, 0x6f8c454fu, 0x0dc3bf00u, 0xabfb38b1u,
    0x4a32b262u, 0xe86a2c13u, 0x86a1a5c4u, 0x24d91f75u, 0xc3109926u, 0x614812d7u, 0xff7f8c88u, 0x9db70639u,
};

static const uint32_t bshim_216_tab3[96] = {
    0x68cff24bu, 0x07076bfcu, 0xa53ee5adu, 0x43765f5eu, 0xe1add90fu, 0x7fe552c0u, 0x1e1ccc71u, 0xbc544622u,
    0x5a8bbfd3u, 0xf8c33984u, 0x96fab335u, 0x35322ce6u, 0xd369a697u, 0x71a12048u, 0x0fd899f9u, 0xae1013aau,
    0x4c478d5bu, 0xea7f070cu, 0x88b680bdu, 0x26edfa6eu, 0xc525741fu, 0x635cedd0u, 0x01946781u, 0x9fcbe132u,
    0x3e035ae3u, 0xdc3ad494u, 0x7a724e45u, 0x18a9c7f6u, 0xb6e141a7u, 0x5518bb58u, 0xf3503509u, 0x9187aebau,
    0x2fbf286bu, 0xcdf6a21cu, 0x6c2e1bcdu, 0x0a65957eu, 0xa89d0f2fu, 0x46d488e0u, 0xe50c0291u, 0x83437c42u,
    0x217af5f3u, 0xbfb26fa4u, 0x5de9e955u, 0xfc216306u, 0x9a58dcb7u, 0x38905668u, 0xd6c7d019u, 0x74ff49cau,
    0x1336c37bu, 0xb16e3d2cu, 0x4fa5b6ddu, 0xeddd308eu, 0x8c14aa3fu, 0x2a4c23f0u, 0xc8839da1u, 0x66bb1752u,
    0x04f29103u, 0xa32a0ab4u, 0x41618465u, 0xdf98fe16u, 0x7dd077c7u, 0x1c07f178u, 0xba3f6b29u, 0x5876e4dau,
    0xf6ae5e8bu, 0x94e5d83cu, 0x331d51edu, 0xd154cb9eu, 0x6f8c454fu, 0x0dc3bf00u, 0xabfb38b1u, 0x4a32b262u,
    0xe86a2c13u, 0x86a1a5c4u, 0x24d91f75u, 0xc3109926u, 0x614812d7u, 0xff7f8c88u, 0x9db70639u, 0x3bee7feau,
    0xda25f99bu, 0x785d734cu, 0x1694ecfdu, 0xb4cc66aeu, 0x5303e05fu, 0xf13b5a10u, 0x8f72d3c1u, 0x2daa4d72u,
    0xcbe1c723u, 0x6a1940d4u, 0x0850ba85u, 0xa6883436u, 0x44bfade7u, 0xe2f72798u, 0x812ea149u, 0x1f661afau,
};

static const uint32_t bshim_216_tab4[96] = {
    0xea7f070cu, 0x88b680bdu, 0x26edfa6eu, 0xc525741fu, 0x635cedd0u, 0x01946781u, 0x9fcbe132u, 0x3e035ae3u,
    0xdc3ad494u, 0x7a724e45u, 0x18a9c7f6u, 0xb6e141a7u, 0x5518bb58u, 0xf3503509u, 0x9187aebau, 0x2fbf286bu,
    0xcdf6a21cu, 0x6c2e1bcdu, 0x0a65957eu, 0xa89d0f2fu, 0x46d488e0u, 0xe50c0291u, 0x83437c42u, 0x217af5f3u,
    0xbfb26fa4u, 0x5de9e955u, 0xfc216306u, 0x9a58dcb7u, 0x38905668u, 0xd6c7d019u, 0x74ff49cau, 0x1336c37bu,
    0xb16e3d2cu, 0x4fa5b6ddu, 0xeddd308eu, 0x8c14aa3fu, 0x2a4c23f0u, 0xc8839da1u, 0x66bb1752u, 0x04f29103u,
    0xa32a0ab4u, 0x41618465u, 0xdf98fe16u, 0x7dd077c7u, 0x1c07f178u, 0xba3f6b29u, 0x5876e4dau, 0xf6ae5e8bu,
    0x94e5d83cu, 0x331d51edu, 0xd154cb9eu, 0x6f8c454fu, 0x0dc3bf00u, 0xabfb38b1u, 0x4a32b262u, 0xe86a2c13u,
    0x86a1a5c4u, 0x24d91f75u, 0xc3109926u, 0x614812d7u, 0xff7f8c88u, 0x9db70639u, 0x3bee7feau, 0xda25f99bu,
    0x785d734cu, 0x1694ecfdu, 0xb4cc66aeu, 0x5303e05fu, 0xf13b5a10u, 0x8f72d3c1u, 0x2daa4d72u, 0xcbe1c723u,
    0x6a1940d4u, 0x0850ba85u, 0xa6883436u, 0x44bfade7u, 0xe2f72798u, 0x812ea149u, 0x1f661afau, 0xbd9d94abu,
    0x5bd50e5cu, 0xfa0c880du, 0x984401beu, 0x367b7b6fu, 0xd4b2f520u, 0x72ea6ed1u, 0x1121e882u, 0xaf596233u,
    0x4d90dbe4u, 0xebc85595u, 0x89ffcf46u, 0x283748f7u, 0xc66ec2a8u, 0x64a63c59u, 0x02ddb60au, 0xa1152fbbu,
};

static const uint32_t bshim_216_tab5[96] = {
    0x6c2e1bcdu, 0x0a65957eu, 0xa89d0f2fu, 0x46d488e0u, 0xe50c0291u, 0x83437c42u, 0x217af5f3u, 0xbfb26fa4u,
    0x5de9e955u, 0xfc216306u, 0x9a58dcb7u, 0x38905668u, 0xd6c7d019u, 0x74ff49cau, 0x1336c37bu, 0xb16e3d2cu,
    0x4fa5b6ddu, 0xeddd308eu, 0x8c14aa3fu, 0x2a4c23f0u, 0xc8839da1u, 0x66bb1752u, 0x04f29103u, 0xa32a0ab4u,
    0x41618465u, 0xdf98fe16u, 0x7dd077c7u, 0x1c07f178u, 0xba3f6b29u, 0x5876e4dau, 0xf6ae5e8bu, 0x94e5d83cu,
    0x331d51edu, 0xd154cb9eu, 0x6f8c454fu, 0x0dc3bf00u, 0xabfb38b1u, 0x4a32b262u, 0xe86a2c13u, 0x86a1a5c4u,
    0x24d91f75u, 0xc3109926u, 0x614812d7u, 0xff7f8c88u, 0x9db70639u, 0x3bee7feau, 0xda25f99bu, 0x785d734cu,
    0x1694ecfdu, 0xb4cc66aeu, 0x5303e05fu, 0xf13b5a10u, 0x8f72d3c1u, 0x2daa4d72u, 0xcbe1c723u, 0x6a1940d4u,
    0x0850ba85u, 0xa6883436u, 0x44bfade7u, 0xe2f72798u, 0x812ea149u, 0x1f661afau, 0xbd9d94abu, 0x5bd50e5cu,
    0xfa0c880du, 0x984401beu, 0x367b7b6fu, 0xd4b2f520u, 0x72ea6ed1u, 0x1121e882u, 0xaf596233u, 0x4d90dbe4u,
    0xebc85595u, 0x89ffcf46u, 0x283748f7u, 0xc66ec2a8u, 0x64a63c59u, 0x02ddb60au, 0xa1152fbbu, 0x3f4ca96cu,
    0xdd84231du, 0x7bbb9cceu, 0x19f3167fu, 0xb82a9030u, 0x566209e1u, 0xf4998392u, 0x92d0fd43u, 0x310876f4u,
    0xcf3ff0a5u, 0x6d776a56u, 0x0baee407u, 0xa9e65db8u, 0x481dd769u, 0xe655511au, 0x848ccacbu, 0x22c4447cu,
};

static const uint32_t bshim_216_tab6[96] = {
    0xeddd308eu, 0x8c14aa3fu, 0x2a4c23f0u, 0xc8839da1u, 0x66bb1752u, 0x04f29103u, 0xa32a0ab4u, 0x41618465u,
    0xdf98fe16u, 0x7dd077c7u, 0x1c07f178u, 0xba3f6b29u, 0x5876e4dau, 0xf6ae5e8bu, 0x94e5d83cu, 0x331d51edu,
    0xd154cb9eu, 0x6f8c454fu, 0x0dc3bf00u, 0xabfb38b1u, 0x4a32b262u, 0xe86a2c13u, 0x86a1a5c4u, 0x24d91f75u,
    0xc3109926u, 0x614812d7u, 0xff7f8c88u, 0x9db70639u, 0x3bee7feau, 0xda25f99bu, 0x785d734cu, 0x1694ecfdu,
    0xb4cc66aeu, 0x5303e05fu, 0xf13b5a10u, 0x8f72d3c1u, 0x2daa4d72u, 0xcbe1c723u, 0x6a1940d4u, 0x0850ba85u,
    0xa6883436u, 0x44bfade7u, 0xe2f72798u, 0x812ea149u, 0x1f661afau, 0xbd9d94abu, 0x5bd50e5cu, 0xfa0c880du,
    0x984401beu, 0x367b7b6fu, 0xd4b2f520u, 0x72ea6ed1u, 0x1121e882u, 0xaf596233u, 0x4d90dbe4u, 0xebc85595u,
    0x89ffcf46u, 0x283748f7u, 0xc66ec2a8u, 0x64a63c59u, 0x02ddb60au, 0xa1152fbbu, 0x3f4ca96cu, 0xdd84231du,
    0x7bbb9cceu, 0x19f3167fu, 0xb82a9030u, 0x566209e1u, 0xf4998392u, 0x92d0fd43u, 0x310876f4u, 0xcf3ff0a5u,
    0x6d776a56u, 0x0baee407u, 0xa9e65db8u, 0x481dd769u, 0xe655511au, 0x848ccacbu, 0x22c4447cu, 0xc0fbbe2du,
    0x5f3337deu, 0xfd6ab18fu, 0x9ba22b40u, 0x39d9a4f1u, 0xd8111ea2u, 0x76489853u, 0x14801204u, 0xb2b78bb5u,
    0x50ef0566u, 0xef267f17u, 0x8d5df8c8u, 0x2b957279u, 0xc9ccec2au, 0x680465dbu, 0x063bdf8cu, 0xa473593du,
};

static const uint32_t bshim_216_tab7[96] = {
    0x6f8c454fu, 0x0dc3bf00u, 0xabfb38b1u, 0x4a32b262u, 0xe86a2c13u, 0x86a1a5c4u, 0x24d91f75u, 0xc3109926u,
    0x614812d7u, 0xff7f8c88u, 0x9db70639u, 0x3bee7feau, 0xda25f99bu, 0x785d734cu, 0x1694ecfdu, 0xb4cc66aeu,
    0x5303e05fu, 0xf13b5a10u, 0x8f72d3c1u, 0x2daa4d72u, 0xcbe1c723u, 0x6a1940d4u, 0x0850ba85u, 0xa6883436u,
    0x44bfade7u, 0xe2f72798u, 0x812ea149u, 0x1f661afau, 0xbd9d94abu, 0x5bd50e5cu, 0xfa0c880du, 0x984401beu,
    0x367b7b6fu, 0xd4b2f520u, 0x72ea6ed1u, 0x1121e882u, 0xaf596233u, 0x4d90dbe4u, 0xebc85595u, 0x89ffcf46u,
    0x283748f7u, 0xc66ec2a8u, 0x64a63c59u, 0x02ddb60au, 0xa1152fbbu, 0x3f4ca96cu, 0xdd84231du, 0x7bbb9cceu,
    0x19f3167fu, 0xb82a9030u, 0x566209e1u, 0xf4998392u, 0x92d0fd43u, 0x310876f4u, 0xcf3ff0a5u, 0x6d776a56u,
    0x0baee407u, 0xa9e65db8u, 0x481dd769u, 0xe655511au, 0x848ccacbu, 0x22c4447cu, 0xc0fbbe2du, 0x5f3337deu,
    0xfd6ab18fu, 0x9ba22b40u, 0x39d9a4f1u, 0xd8111ea2u, 0x76489853u, 0x14801204u, 0xb2b78bb5u, 0x50ef0566u,
    0xef267f17u, 0x8d5df8c8u, 0x2b957279u, 0xc9ccec2au, 0x680465dbu, 0x063bdf8cu, 0xa473593du, 0x42aad2eeu,
    0xe0e24c9fu, 0x7f19c650u, 0x1d514001u, 0xbb88b9b2u, 0x59c03363u, 0xf7f7ad14u, 0x962f26c5u, 0x3466a076u,
    0xd29e1a27u, 0x70d593d8u, 0x0f0d0d89u, 0xad44873au, 0x4b7c00ebu, 0xe9b37a9cu, 0x87eaf44du, 0x26226dfeu,
};

struct bshim_216_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_216_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_216_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4e2f82adu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_216_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_216_reset(struct bshim_216_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x001a19a8u;
    return 0;
}

