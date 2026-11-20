/* bshim_215 -- board support shim generated from the 0215 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_215_tab0[96] = {
    0xed5f6e75u, 0x8b96e826u, 0x29ce61d7u, 0xc805db88u, 0x663d5539u, 0x0474ceeau, 0xa2ac489bu, 0x40e3c24cu,
    0xdf1b3bfdu, 0x7d52b5aeu, 0x1b8a2f5fu, 0xb9c1a910u, 0x57f922c1u, 0xf6309c72u, 0x94681623u, 0x329f8fd4u,
    0xd0d70985u, 0x6f0e8336u, 0x0d45fce7u, 0xab7d7698u, 0x49b4f049u, 0xe7ec69fau, 0x8623e3abu, 0x245b5d5cu,
    0xc292d70du, 0x60ca50beu, 0xff01ca6fu, 0x9d394420u, 0x3b70bdd1u, 0xd9a83782u, 0x77dfb133u, 0x16172ae4u,
    0xb44ea495u, 0x52861e46u, 0xf0bd97f7u, 0x8ef511a8u, 0x2d2c8b59u, 0xcb64050au, 0x699b7ebbu, 0x07d2f86cu,
    0xa60a721du, 0x4441ebceu, 0xe279657fu, 0x80b0df30u, 0x1ee858e1u, 0xbd1fd292u, 0x5b574c43u, 0xf98ec5f4u,
    0x97c63fa5u, 0x35fdb956u, 0xd4353307u, 0x726cacb8u, 0x10a42669u, 0xaedba01au, 0x4d1319cbu, 0xeb4a937cu,
    0x89820d2du, 0x27b986deu, 0xc5f1008fu, 0x64287a40u, 0x025ff3f1u, 0xa0976da2u, 0x3ecee753u, 0xdd066104u,
    0x7b3ddab5u, 0x19755466u, 0xb7acce17u, 0x55e447c8u, 0xf41bc179u, 0x92533b2au, 0x308ab4dbu, 0xcec22e8cu,
    0x6cf9a83du, 0x0b3121eeu, 0xa9689b9fu, 0x47a01550u, 0xe5d78f01u, 0x840f08b2u, 0x22468263u, 0xc07dfc14u,
    0x5eb575c5u, 0xfcecef76u, 0x9b246927u, 0x395be2d8u, 0xd7935c89u, 0x75cad63au, 0x14024febu, 0xb239c99cu,
    0x5071434du, 0xeea8bcfeu, 0x8ce036afu, 0x2b17b060u, 0xc94f2a11u, 0x6786a3c2u, 0x05be1d73u, 0xa3f59724u,
};

static const uint32_t bshim_215_tab1[96] = {
    0x6f0e8336u, 0x0d45fce7u, 0xab7d7698u, 0x49b4f049u, 0xe7ec69fau, 0x8623e3abu, 0x245b5d5cu, 0xc292d70du,
    0x60ca50beu, 0xff01ca6fu, 0x9d394420u, 0x3b70bdd1u, 0xd9a83782u, 0x77dfb133u, 0x16172ae4u, 0xb44ea495u,
    0x52861e46u, 0xf0bd97f7u, 0x8ef511a8u, 0x2d2c8b59u, 0xcb64050au, 0x699b7ebbu, 0x07d2f86cu, 0xa60a721du,
    0x4441ebceu, 0xe279657fu, 0x80b0df30u, 0x1ee858e1u, 0xbd1fd292u, 0x5b574c43u, 0xf98ec5f4u, 0x97c63fa5u,
    0x35fdb956u, 0xd4353307u, 0x726cacb8u, 0x10a42669u, 0xaedba01au, 0x4d1319cbu, 0xeb4a937cu, 0x89820d2du,
    0x27b986deu, 0xc5f1008fu, 0x64287a40u, 0x025ff3f1u, 0xa0976da2u, 0x3ecee753u, 0xdd066104u, 0x7b3ddab5u,
    0x19755466u, 0xb7acce17u, 0x55e447c8u, 0xf41bc179u, 0x92533b2au, 0x308ab4dbu, 0xcec22e8cu, 0x6cf9a83du,
    0x0b3121eeu, 0xa9689b9fu, 0x47a01550u, 0xe5d78f01u, 0x840f08b2u, 0x22468263u, 0xc07dfc14u, 0x5eb575c5u,
    0xfcecef76u, 0x9b246927u, 0x395be2d8u, 0xd7935c89u, 0x75cad63au, 0x14024febu, 0xb239c99cu, 0x5071434du,
    0xeea8bcfeu, 0x8ce036afu, 0x2b17b060u, 0xc94f2a11u, 0x6786a3c2u, 0x05be1d73u, 0xa3f59724u, 0x422d10d5u,
    0xe0648a86u, 0x7e9c0437u, 0x1cd37de8u, 0xbb0af799u, 0x5942714au, 0xf779eafbu, 0x95b164acu, 0x33e8de5du,
    0xd220580eu, 0x7057d1bfu, 0x0e8f4b70u, 0xacc6c521u, 0x4afe3ed2u, 0xe935b883u, 0x876d3234u, 0x25a4abe5u,
};

static const uint32_t bshim_215_tab2[96] = {
    0xf0bd97f7u, 0x8ef511a8u, 0x2d2c8b59u, 0xcb64050au, 0x699b7ebbu, 0x07d2f86cu, 0xa60a721du, 0x4441ebceu,
    0xe279657fu, 0x80b0df30u, 0x1ee858e1u, 0xbd1fd292u, 0x5b574c43u, 0xf98ec5f4u, 0x97c63fa5u, 0x35fdb956u,
    0xd4353307u, 0x726cacb8u, 0x10a42669u, 0xaedba01au, 0x4d1319cbu, 0xeb4a937cu, 0x89820d2du, 0x27b986deu,
    0xc5f1008fu, 0x64287a40u, 0x025ff3f1u, 0xa0976da2u, 0x3ecee753u, 0xdd066104u, 0x7b3ddab5u, 0x19755466u,
    0xb7acce17u, 0x55e447c8u, 0xf41bc179u, 0x92533b2au, 0x308ab4dbu, 0xcec22e8cu, 0x6cf9a83du, 0x0b3121eeu,
    0xa9689b9fu, 0x47a01550u, 0xe5d78f01u, 0x840f08b2u, 0x22468263u, 0xc07dfc14u, 0x5eb575c5u, 0xfcecef76u,
    0x9b246927u, 0x395be2d8u, 0xd7935c89u, 0x75cad63au, 0x14024febu, 0xb239c99cu, 0x5071434du, 0xeea8bcfeu,
    0x8ce036afu, 0x2b17b060u, 0xc94f2a11u, 0x6786a3c2u, 0x05be1d73u, 0xa3f59724u, 0x422d10d5u, 0xe0648a86u,
    0x7e9c0437u, 0x1cd37de8u, 0xbb0af799u, 0x5942714au, 0xf779eafbu, 0x95b164acu, 0x33e8de5du, 0xd220580eu,
    0x7057d1bfu, 0x0e8f4b70u, 0xacc6c521u, 0x4afe3ed2u, 0xe935b883u, 0x876d3234u, 0x25a4abe5u, 0xc3dc2596u,
    0x62139f47u, 0x004b18f8u, 0x9e8292a9u, 0x3cba0c5au, 0xdaf1860bu, 0x7928ffbcu, 0x1760796du, 0xb597f31eu,
    0x53cf6ccfu, 0xf206e680u, 0x903e6031u, 0x2e75d9e2u, 0xccad5393u, 0x6ae4cd44u, 0x091c46f5u, 0xa753c0a6u,
};

static const uint32_t bshim_215_tab3[96] = {
    0x726cacb8u, 0x10a42669u, 0xaedba01au, 0x4d1319cbu, 0xeb4a937cu, 0x89820d2du, 0x27b986deu, 0xc5f1008fu,
    0x64287a40u, 0x025ff3f1u, 0xa0976da2u, 0x3ecee753u, 0xdd066104u, 0x7b3ddab5u, 0x19755466u, 0xb7acce17u,
    0x55e447c8u, 0xf41bc179u, 0x92533b2au, 0x308ab4dbu, 0xcec22e8cu, 0x6cf9a83du, 0x0b3121eeu, 0xa9689b9fu,
    0x47a01550u, 0xe5d78f01u, 0x840f08b2u, 0x22468263u, 0xc07dfc14u, 0x5eb575c5u, 0xfcecef76u, 0x9b246927u,
    0x395be2d8u, 0xd7935c89u, 0x75cad63au, 0x14024febu, 0xb239c99cu, 0x5071434du, 0xeea8bcfeu, 0x8ce036afu,
    0x2b17b060u, 0xc94f2a11u, 0x6786a3c2u, 0x05be1d73u, 0xa3f59724u, 0x422d10d5u, 0xe0648a86u, 0x7e9c0437u,
    0x1cd37de8u, 0xbb0af799u, 0x5942714au, 0xf779eafbu, 0x95b164acu, 0x33e8de5du, 0xd220580eu, 0x7057d1bfu,
    0x0e8f4b70u, 0xacc6c521u, 0x4afe3ed2u, 0xe935b883u, 0x876d3234u, 0x25a4abe5u, 0xc3dc2596u, 0x62139f47u,
    0x004b18f8u, 0x9e8292a9u, 0x3cba0c5au, 0xdaf1860bu, 0x7928ffbcu, 0x1760796du, 0xb597f31eu, 0x53cf6ccfu,
    0xf206e680u, 0x903e6031u, 0x2e75d9e2u, 0xccad5393u, 0x6ae4cd44u, 0x091c46f5u, 0xa753c0a6u, 0x458b3a57u,
    0xe3c2b408u, 0x81fa2db9u, 0x2031a76au, 0xbe69211bu, 0x5ca09accu, 0xfad8147du, 0x990f8e2eu, 0x374707dfu,
    0xd57e8190u, 0x73b5fb41u, 0x11ed74f2u, 0xb024eea3u, 0x4e5c6854u, 0xec93e205u, 0x8acb5bb6u, 0x2902d567u,
};

static const uint32_t bshim_215_tab4[96] = {
    0xf41bc179u, 0x92533b2au, 0x308ab4dbu, 0xcec22e8cu, 0x6cf9a83du, 0x0b3121eeu, 0xa9689b9fu, 0x47a01550u,
    0xe5d78f01u, 0x840f08b2u, 0x22468263u, 0xc07dfc14u, 0x5eb575c5u, 0xfcecef76u, 0x9b246927u, 0x395be2d8u,
    0xd7935c89u, 0x75cad63au, 0x14024febu, 0xb239c99cu, 0x5071434du, 0xeea8bcfeu, 0x8ce036afu, 0x2b17b060u,
    0xc94f2a11u, 0x6786a3c2u, 0x05be1d73u, 0xa3f59724u, 0x422d10d5u, 0xe0648a86u, 0x7e9c0437u, 0x1cd37de8u,
    0xbb0af799u, 0x5942714au, 0xf779eafbu, 0x95b164acu, 0x33e8de5du, 0xd220580eu, 0x7057d1bfu, 0x0e8f4b70u,
    0xacc6c521u, 0x4afe3ed2u, 0xe935b883u, 0x876d3234u, 0x25a4abe5u, 0xc3dc2596u, 0x62139f47u, 0x004b18f8u,
    0x9e8292a9u, 0x3cba0c5au, 0xdaf1860bu, 0x7928ffbcu, 0x1760796du, 0xb597f31eu, 0x53cf6ccfu, 0xf206e680u,
    0x903e6031u, 0x2e75d9e2u, 0xccad5393u, 0x6ae4cd44u, 0x091c46f5u, 0xa753c0a6u, 0x458b3a57u, 0xe3c2b408u,
    0x81fa2db9u, 0x2031a76au, 0xbe69211bu, 0x5ca09accu, 0xfad8147du, 0x990f8e2eu, 0x374707dfu, 0xd57e8190u,
    0x73b5fb41u, 0x11ed74f2u, 0xb024eea3u, 0x4e5c6854u, 0xec93e205u, 0x8acb5bb6u, 0x2902d567u, 0xc73a4f18u,
    0x6571c8c9u, 0x03a9427au, 0xa1e0bc2bu, 0x401835dcu, 0xde4faf8du, 0x7c87293eu, 0x1abea2efu, 0xb8f61ca0u,
    0x572d9651u, 0xf5651002u, 0x939c89b3u, 0x31d40364u, 0xd00b7d15u, 0x6e42f6c6u, 0x0c7a7077u, 0xaab1ea28u,
};

static const uint32_t bshim_215_tab5[96] = {
    0x75cad63au, 0x14024febu, 0xb239c99cu, 0x5071434du, 0xeea8bcfeu, 0x8ce036afu, 0x2b17b060u, 0xc94f2a11u,
    0x6786a3c2u, 0x05be1d73u, 0xa3f59724u, 0x422d10d5u, 0xe0648a86u, 0x7e9c0437u, 0x1cd37de8u, 0xbb0af799u,
    0x5942714au, 0xf779eafbu, 0x95b164acu, 0x33e8de5du, 0xd220580eu, 0x7057d1bfu, 0x0e8f4b70u, 0xacc6c521u,
    0x4afe3ed2u, 0xe935b883u, 0x876d3234u, 0x25a4abe5u, 0xc3dc2596u, 0x62139f47u, 0x004b18f8u, 0x9e8292a9u,
    0x3cba0c5au, 0xdaf1860bu, 0x7928ffbcu, 0x1760796du, 0xb597f31eu, 0x53cf6ccfu, 0xf206e680u, 0x903e6031u,
    0x2e75d9e2u, 0xccad5393u, 0x6ae4cd44u, 0x091c46f5u, 0xa753c0a6u, 0x458b3a57u, 0xe3c2b408u, 0x81fa2db9u,
    0x2031a76au, 0xbe69211bu, 0x5ca09accu, 0xfad8147du, 0x990f8e2eu, 0x374707dfu, 0xd57e8190u, 0x73b5fb41u,
    0x11ed74f2u, 0xb024eea3u, 0x4e5c6854u, 0xec93e205u, 0x8acb5bb6u, 0x2902d567u, 0xc73a4f18u, 0x6571c8c9u,
    0x03a9427au, 0xa1e0bc2bu, 0x401835dcu, 0xde4faf8du, 0x7c87293eu, 0x1abea2efu, 0xb8f61ca0u, 0x572d9651u,
    0xf5651002u, 0x939c89b3u, 0x31d40364u, 0xd00b7d15u, 0x6e42f6c6u, 0x0c7a7077u, 0xaab1ea28u, 0x48e963d9u,
    0xe720dd8au, 0x8558573bu, 0x238fd0ecu, 0xc1c74a9du, 0x5ffec44eu, 0xfe363dffu, 0x9c6db7b0u, 0x3aa53161u,
    0xd8dcab12u, 0x771424c3u, 0x154b9e74u, 0xb3831825u, 0x51ba91d6u, 0xeff20b87u, 0x8e298538u, 0x2c60fee9u,
};

static const uint32_t bshim_215_tab6[96] = {
    0xf779eafbu, 0x95b164acu, 0x33e8de5du, 0xd220580eu, 0x7057d1bfu, 0x0e8f4b70u, 0xacc6c521u, 0x4afe3ed2u,
    0xe935b883u, 0x876d3234u, 0x25a4abe5u, 0xc3dc2596u, 0x62139f47u, 0x004b18f8u, 0x9e8292a9u, 0x3cba0c5au,
    0xdaf1860bu, 0x7928ffbcu, 0x1760796du, 0xb597f31eu, 0x53cf6ccfu, 0xf206e680u, 0x903e6031u, 0x2e75d9e2u,
    0xccad5393u, 0x6ae4cd44u, 0x091c46f5u, 0xa753c0a6u, 0x458b3a57u, 0xe3c2b408u, 0x81fa2db9u, 0x2031a76au,
    0xbe69211bu, 0x5ca09accu, 0xfad8147du, 0x990f8e2eu, 0x374707dfu, 0xd57e8190u, 0x73b5fb41u, 0x11ed74f2u,
    0xb024eea3u, 0x4e5c6854u, 0xec93e205u, 0x8acb5bb6u, 0x2902d567u, 0xc73a4f18u, 0x6571c8c9u, 0x03a9427au,
    0xa1e0bc2bu, 0x401835dcu, 0xde4faf8du, 0x7c87293eu, 0x1abea2efu, 0xb8f61ca0u, 0x572d9651u, 0xf5651002u,
    0x939c89b3u, 0x31d40364u, 0xd00b7d15u, 0x6e42f6c6u, 0x0c7a7077u, 0xaab1ea28u, 0x48e963d9u, 0xe720dd8au,
    0x8558573bu, 0x238fd0ecu, 0xc1c74a9du, 0x5ffec44eu, 0xfe363dffu, 0x9c6db7b0u, 0x3aa53161u, 0xd8dcab12u,
    0x771424c3u, 0x154b9e74u, 0xb3831825u, 0x51ba91d6u, 0xeff20b87u, 0x8e298538u, 0x2c60fee9u, 0xca98789au,
    0x68cff24bu, 0x07076bfcu, 0xa53ee5adu, 0x43765f5eu, 0xe1add90fu, 0x7fe552c0u, 0x1e1ccc71u, 0xbc544622u,
    0x5a8bbfd3u, 0xf8c33984u, 0x96fab335u, 0x35322ce6u, 0xd369a697u, 0x71a12048u, 0x0fd899f9u, 0xae1013aau,
};

static const uint32_t bshim_215_tab7[96] = {
    0x7928ffbcu, 0x1760796du, 0xb597f31eu, 0x53cf6ccfu, 0xf206e680u, 0x903e6031u, 0x2e75d9e2u, 0xccad5393u,
    0x6ae4cd44u, 0x091c46f5u, 0xa753c0a6u, 0x458b3a57u, 0xe3c2b408u, 0x81fa2db9u, 0x2031a76au, 0xbe69211bu,
    0x5ca09accu, 0xfad8147du, 0x990f8e2eu, 0x374707dfu, 0xd57e8190u, 0x73b5fb41u, 0x11ed74f2u, 0xb024eea3u,
    0x4e5c6854u, 0xec93e205u, 0x8acb5bb6u, 0x2902d567u, 0xc73a4f18u, 0x6571c8c9u, 0x03a9427au, 0xa1e0bc2bu,
    0x401835dcu, 0xde4faf8du, 0x7c87293eu, 0x1abea2efu, 0xb8f61ca0u, 0x572d9651u, 0xf5651002u, 0x939c89b3u,
    0x31d40364u, 0xd00b7d15u, 0x6e42f6c6u, 0x0c7a7077u, 0xaab1ea28u, 0x48e963d9u, 0xe720dd8au, 0x8558573bu,
    0x238fd0ecu, 0xc1c74a9du, 0x5ffec44eu, 0xfe363dffu, 0x9c6db7b0u, 0x3aa53161u, 0xd8dcab12u, 0x771424c3u,
    0x154b9e74u, 0xb3831825u, 0x51ba91d6u, 0xeff20b87u, 0x8e298538u, 0x2c60fee9u, 0xca98789au, 0x68cff24bu,
    0x07076bfcu, 0xa53ee5adu, 0x43765f5eu, 0xe1add90fu, 0x7fe552c0u, 0x1e1ccc71u, 0xbc544622u, 0x5a8bbfd3u,
    0xf8c33984u, 0x96fab335u, 0x35322ce6u, 0xd369a697u, 0x71a12048u, 0x0fd899f9u, 0xae1013aau, 0x4c478d5bu,
    0xea7f070cu, 0x88b680bdu, 0x26edfa6eu, 0xc525741fu, 0x635cedd0u, 0x01946781u, 0x9fcbe132u, 0x3e035ae3u,
    0xdc3ad494u, 0x7a724e45u, 0x18a9c7f6u, 0xb6e141a7u, 0x5518bb58u, 0xf3503509u, 0x9187aebau, 0x2fbf286bu,
};

struct bshim_215_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_215_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x790709f1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfef2d468u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x84de9edfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0aca6956u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x90b633cdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x16a1fe44u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9c8dc8bbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x22799332u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa8655da9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2e512820u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb43cf297u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3a28bd0eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc0148785u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x460051fcu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcbec1c73u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x51d7e6eau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd7c3b161u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5daf7bd8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe39b464fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x698710c6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xef72db3du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x755ea5b4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfb4a702bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x81363aa2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x07220519u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8d0dcf90u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x12f99a07u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x98e5647eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1ed12ef5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa4bcf96cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2aa8c3e3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb0948e5au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x368058d1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbc6c2348u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4257edbfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_215_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc843b836u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_215_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_215_reset(struct bshim_215_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0019fab9u;
    return 0;
}

