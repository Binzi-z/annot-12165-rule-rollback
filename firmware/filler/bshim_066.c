/* bshim_066 -- board support shim generated from the 0066 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_066_tab0[96] = {
    0x8597efe6u, 0x23cf6997u, 0xc206e348u, 0x603e5cf9u, 0xfe75d6aau, 0x9cad505bu, 0x3ae4ca0cu, 0xd91c43bdu,
    0x7753bd6eu, 0x158b371fu, 0xb3c2b0d0u, 0x51fa2a81u, 0xf031a432u, 0x8e691de3u, 0x2ca09794u, 0xcad81145u,
    0x690f8af6u, 0x074704a7u, 0xa57e7e58u, 0x43b5f809u, 0xe1ed71bau, 0x8024eb6bu, 0x1e5c651cu, 0xbc93decdu,
    0x5acb587eu, 0xf902d22fu, 0x973a4be0u, 0x3571c591u, 0xd3a93f42u, 0x71e0b8f3u, 0x101832a4u, 0xae4fac55u,
    0x4c872606u, 0xeabe9fb7u, 0x88f61968u, 0x272d9319u, 0xc5650ccau, 0x639c867bu, 0x01d4002cu, 0xa00b79ddu,
    0x3e42f38eu, 0xdc7a6d3fu, 0x7ab1e6f0u, 0x18e960a1u, 0xb720da52u, 0x55585403u, 0xf38fcdb4u, 0x91c74765u,
    0x2ffec116u, 0xce363ac7u, 0x6c6db478u, 0x0aa52e29u, 0xa8dca7dau, 0x4714218bu, 0xe54b9b3cu, 0x838314edu,
    0x21ba8e9eu, 0xbff2084fu, 0x5e298200u, 0xfc60fbb1u, 0x9a987562u, 0x38cfef13u, 0xd70768c4u, 0x753ee275u,
    0x13765c26u, 0xb1add5d7u, 0x4fe54f88u, 0xee1cc939u, 0x8c5442eau, 0x2a8bbc9bu, 0xc8c3364cu, 0x66faaffdu,
    0x053229aeu, 0xa369a35fu, 0x41a11d10u, 0xdfd896c1u, 0x7e101072u, 0x1c478a23u, 0xba7f03d4u, 0x58b67d85u,
    0xf6edf736u, 0x952570e7u, 0x335cea98u, 0xd1946449u, 0x6fcbddfau, 0x0e0357abu, 0xac3ad15cu, 0x4a724b0du,
    0xe8a9c4beu, 0x86e13e6fu, 0x2518b820u, 0xc35031d1u, 0x6187ab82u, 0xffbf2533u, 0x9df69ee4u, 0x3c2e1895u,
};

static const uint32_t bshim_066_tab1[96] = {
    0x074704a7u, 0xa57e7e58u, 0x43b5f809u, 0xe1ed71bau, 0x8024eb6bu, 0x1e5c651cu, 0xbc93decdu, 0x5acb587eu,
    0xf902d22fu, 0x973a4be0u, 0x3571c591u, 0xd3a93f42u, 0x71e0b8f3u, 0x101832a4u, 0xae4fac55u, 0x4c872606u,
    0xeabe9fb7u, 0x88f61968u, 0x272d9319u, 0xc5650ccau, 0x639c867bu, 0x01d4002cu, 0xa00b79ddu, 0x3e42f38eu,
    0xdc7a6d3fu, 0x7ab1e6f0u, 0x18e960a1u, 0xb720da52u, 0x55585403u, 0xf38fcdb4u, 0x91c74765u, 0x2ffec116u,
    0xce363ac7u, 0x6c6db478u, 0x0aa52e29u, 0xa8dca7dau, 0x4714218bu, 0xe54b9b3cu, 0x838314edu, 0x21ba8e9eu,
    0xbff2084fu, 0x5e298200u, 0xfc60fbb1u, 0x9a987562u, 0x38cfef13u, 0xd70768c4u, 0x753ee275u, 0x13765c26u,
    0xb1add5d7u, 0x4fe54f88u, 0xee1cc939u, 0x8c5442eau, 0x2a8bbc9bu, 0xc8c3364cu, 0x66faaffdu, 0x053229aeu,
    0xa369a35fu, 0x41a11d10u, 0xdfd896c1u, 0x7e101072u, 0x1c478a23u, 0xba7f03d4u, 0x58b67d85u, 0xf6edf736u,
    0x952570e7u, 0x335cea98u, 0xd1946449u, 0x6fcbddfau, 0x0e0357abu, 0xac3ad15cu, 0x4a724b0du, 0xe8a9c4beu,
    0x86e13e6fu, 0x2518b820u, 0xc35031d1u, 0x6187ab82u, 0xffbf2533u, 0x9df69ee4u, 0x3c2e1895u, 0xda659246u,
    0x789d0bf7u, 0x16d485a8u, 0xb50bff59u, 0x5343790au, 0xf17af2bbu, 0x8fb26c6cu, 0x2de9e61du, 0xcc215fceu,
    0x6a58d97fu, 0x08905330u, 0xa6c7cce1u, 0x44ff4692u, 0xe336c043u, 0x816e39f4u, 0x1fa5b3a5u, 0xbddd2d56u,
};

static const uint32_t bshim_066_tab2[96] = {
    0x88f61968u, 0x272d9319u, 0xc5650ccau, 0x639c867bu, 0x01d4002cu, 0xa00b79ddu, 0x3e42f38eu, 0xdc7a6d3fu,
    0x7ab1e6f0u, 0x18e960a1u, 0xb720da52u, 0x55585403u, 0xf38fcdb4u, 0x91c74765u, 0x2ffec116u, 0xce363ac7u,
    0x6c6db478u, 0x0aa52e29u, 0xa8dca7dau, 0x4714218bu, 0xe54b9b3cu, 0x838314edu, 0x21ba8e9eu, 0xbff2084fu,
    0x5e298200u, 0xfc60fbb1u, 0x9a987562u, 0x38cfef13u, 0xd70768c4u, 0x753ee275u, 0x13765c26u, 0xb1add5d7u,
    0x4fe54f88u, 0xee1cc939u, 0x8c5442eau, 0x2a8bbc9bu, 0xc8c3364cu, 0x66faaffdu, 0x053229aeu, 0xa369a35fu,
    0x41a11d10u, 0xdfd896c1u, 0x7e101072u, 0x1c478a23u, 0xba7f03d4u, 0x58b67d85u, 0xf6edf736u, 0x952570e7u,
    0x335cea98u, 0xd1946449u, 0x6fcbddfau, 0x0e0357abu, 0xac3ad15cu, 0x4a724b0du, 0xe8a9c4beu, 0x86e13e6fu,
    0x2518b820u, 0xc35031d1u, 0x6187ab82u, 0xffbf2533u, 0x9df69ee4u, 0x3c2e1895u, 0xda659246u, 0x789d0bf7u,
    0x16d485a8u, 0xb50bff59u, 0x5343790au, 0xf17af2bbu, 0x8fb26c6cu, 0x2de9e61du, 0xcc215fceu, 0x6a58d97fu,
    0x08905330u, 0xa6c7cce1u, 0x44ff4692u, 0xe336c043u, 0x816e39f4u, 0x1fa5b3a5u, 0xbddd2d56u, 0x5c14a707u,
    0xfa4c20b8u, 0x98839a69u, 0x36bb141au, 0xd4f28dcbu, 0x732a077cu, 0x1161812du, 0xaf98fadeu, 0x4dd0748fu,
    0xec07ee40u, 0x8a3f67f1u, 0x2876e1a2u, 0xc6ae5b53u, 0x64e5d504u, 0x031d4eb5u, 0xa154c866u, 0x3f8c4217u,
};

static const uint32_t bshim_066_tab3[96] = {
    0x0aa52e29u, 0xa8dca7dau, 0x4714218bu, 0xe54b9b3cu, 0x838314edu, 0x21ba8e9eu, 0xbff2084fu, 0x5e298200u,
    0xfc60fbb1u, 0x9a987562u, 0x38cfef13u, 0xd70768c4u, 0x753ee275u, 0x13765c26u, 0xb1add5d7u, 0x4fe54f88u,
    0xee1cc939u, 0x8c5442eau, 0x2a8bbc9bu, 0xc8c3364cu, 0x66faaffdu, 0x053229aeu, 0xa369a35fu, 0x41a11d10u,
    0xdfd896c1u, 0x7e101072u, 0x1c478a23u, 0xba7f03d4u, 0x58b67d85u, 0xf6edf736u, 0x952570e7u, 0x335cea98u,
    0xd1946449u, 0x6fcbddfau, 0x0e0357abu, 0xac3ad15cu, 0x4a724b0du, 0xe8a9c4beu, 0x86e13e6fu, 0x2518b820u,
    0xc35031d1u, 0x6187ab82u, 0xffbf2533u, 0x9df69ee4u, 0x3c2e1895u, 0xda659246u, 0x789d0bf7u, 0x16d485a8u,
    0xb50bff59u, 0x5343790au, 0xf17af2bbu, 0x8fb26c6cu, 0x2de9e61du, 0xcc215fceu, 0x6a58d97fu, 0x08905330u,
    0xa6c7cce1u, 0x44ff4692u, 0xe336c043u, 0x816e39f4u, 0x1fa5b3a5u, 0xbddd2d56u, 0x5c14a707u, 0xfa4c20b8u,
    0x98839a69u, 0x36bb141au, 0xd4f28dcbu, 0x732a077cu, 0x1161812du, 0xaf98fadeu, 0x4dd0748fu, 0xec07ee40u,
    0x8a3f67f1u, 0x2876e1a2u, 0xc6ae5b53u, 0x64e5d504u, 0x031d4eb5u, 0xa154c866u, 0x3f8c4217u, 0xddc3bbc8u,
    0x7bfb3579u, 0x1a32af2au, 0xb86a28dbu, 0x56a1a28cu, 0xf4d91c3du, 0x931095eeu, 0x31480f9fu, 0xcf7f8950u,
    0x6db70301u, 0x0bee7cb2u, 0xaa25f663u, 0x485d7014u, 0xe694e9c5u, 0x84cc6376u, 0x2303dd27u, 0xc13b56d8u,
};

static const uint32_t bshim_066_tab4[96] = {
    0x8c5442eau, 0x2a8bbc9bu, 0xc8c3364cu, 0x66faaffdu, 0x053229aeu, 0xa369a35fu, 0x41a11d10u, 0xdfd896c1u,
    0x7e101072u, 0x1c478a23u, 0xba7f03d4u, 0x58b67d85u, 0xf6edf736u, 0x952570e7u, 0x335cea98u, 0xd1946449u,
    0x6fcbddfau, 0x0e0357abu, 0xac3ad15cu, 0x4a724b0du, 0xe8a9c4beu, 0x86e13e6fu, 0x2518b820u, 0xc35031d1u,
    0x6187ab82u, 0xffbf2533u, 0x9df69ee4u, 0x3c2e1895u, 0xda659246u, 0x789d0bf7u, 0x16d485a8u, 0xb50bff59u,
    0x5343790au, 0xf17af2bbu, 0x8fb26c6cu, 0x2de9e61du, 0xcc215fceu, 0x6a58d97fu, 0x08905330u, 0xa6c7cce1u,
    0x44ff4692u, 0xe336c043u, 0x816e39f4u, 0x1fa5b3a5u, 0xbddd2d56u, 0x5c14a707u, 0xfa4c20b8u, 0x98839a69u,
    0x36bb141au, 0xd4f28dcbu, 0x732a077cu, 0x1161812du, 0xaf98fadeu, 0x4dd0748fu, 0xec07ee40u, 0x8a3f67f1u,
    0x2876e1a2u, 0xc6ae5b53u, 0x64e5d504u, 0x031d4eb5u, 0xa154c866u, 0x3f8c4217u, 0xddc3bbc8u, 0x7bfb3579u,
    0x1a32af2au, 0xb86a28dbu, 0x56a1a28cu, 0xf4d91c3du, 0x931095eeu, 0x31480f9fu, 0xcf7f8950u, 0x6db70301u,
    0x0bee7cb2u, 0xaa25f663u, 0x485d7014u, 0xe694e9c5u, 0x84cc6376u, 0x2303dd27u, 0xc13b56d8u, 0x5f72d089u,
    0xfdaa4a3au, 0x9be1c3ebu, 0x3a193d9cu, 0xd850b74du, 0x768830feu, 0x14bfaaafu, 0xb2f72460u, 0x512e9e11u,
    0xef6617c2u, 0x8d9d9173u, 0x2bd50b24u, 0xca0c84d5u, 0x6843fe86u, 0x067b7837u, 0xa4b2f1e8u, 0x42ea6b99u,
};

static const uint32_t bshim_066_tab5[96] = {
    0x0e0357abu, 0xac3ad15cu, 0x4a724b0du, 0xe8a9c4beu, 0x86e13e6fu, 0x2518b820u, 0xc35031d1u, 0x6187ab82u,
    0xffbf2533u, 0x9df69ee4u, 0x3c2e1895u, 0xda659246u, 0x789d0bf7u, 0x16d485a8u, 0xb50bff59u, 0x5343790au,
    0xf17af2bbu, 0x8fb26c6cu, 0x2de9e61du, 0xcc215fceu, 0x6a58d97fu, 0x08905330u, 0xa6c7cce1u, 0x44ff4692u,
    0xe336c043u, 0x816e39f4u, 0x1fa5b3a5u, 0xbddd2d56u, 0x5c14a707u, 0xfa4c20b8u, 0x98839a69u, 0x36bb141au,
    0xd4f28dcbu, 0x732a077cu, 0x1161812du, 0xaf98fadeu, 0x4dd0748fu, 0xec07ee40u, 0x8a3f67f1u, 0x2876e1a2u,
    0xc6ae5b53u, 0x64e5d504u, 0x031d4eb5u, 0xa154c866u, 0x3f8c4217u, 0xddc3bbc8u, 0x7bfb3579u, 0x1a32af2au,
    0xb86a28dbu, 0x56a1a28cu, 0xf4d91c3du, 0x931095eeu, 0x31480f9fu, 0xcf7f8950u, 0x6db70301u, 0x0bee7cb2u,
    0xaa25f663u, 0x485d7014u, 0xe694e9c5u, 0x84cc6376u, 0x2303dd27u, 0xc13b56d8u, 0x5f72d089u, 0xfdaa4a3au,
    0x9be1c3ebu, 0x3a193d9cu, 0xd850b74du, 0x768830feu, 0x14bfaaafu, 0xb2f72460u, 0x512e9e11u, 0xef6617c2u,
    0x8d9d9173u, 0x2bd50b24u, 0xca0c84d5u, 0x6843fe86u, 0x067b7837u, 0xa4b2f1e8u, 0x42ea6b99u, 0xe121e54au,
    0x7f595efbu, 0x1d90d8acu, 0xbbc8525du, 0x59ffcc0eu, 0xf83745bfu, 0x966ebf70u, 0x34a63921u, 0xd2ddb2d2u,
    0x71152c83u, 0x0f4ca634u, 0xad841fe5u, 0x4bbb9996u, 0xe9f31347u, 0x882a8cf8u, 0x266206a9u, 0xc499805au,
};

static const uint32_t bshim_066_tab6[96] = {
    0x8fb26c6cu, 0x2de9e61du, 0xcc215fceu, 0x6a58d97fu, 0x08905330u, 0xa6c7cce1u, 0x44ff4692u, 0xe336c043u,
    0x816e39f4u, 0x1fa5b3a5u, 0xbddd2d56u, 0x5c14a707u, 0xfa4c20b8u, 0x98839a69u, 0x36bb141au, 0xd4f28dcbu,
    0x732a077cu, 0x1161812du, 0xaf98fadeu, 0x4dd0748fu, 0xec07ee40u, 0x8a3f67f1u, 0x2876e1a2u, 0xc6ae5b53u,
    0x64e5d504u, 0x031d4eb5u, 0xa154c866u, 0x3f8c4217u, 0xddc3bbc8u, 0x7bfb3579u, 0x1a32af2au, 0xb86a28dbu,
    0x56a1a28cu, 0xf4d91c3du, 0x931095eeu, 0x31480f9fu, 0xcf7f8950u, 0x6db70301u, 0x0bee7cb2u, 0xaa25f663u,
    0x485d7014u, 0xe694e9c5u, 0x84cc6376u, 0x2303dd27u, 0xc13b56d8u, 0x5f72d089u, 0xfdaa4a3au, 0x9be1c3ebu,
    0x3a193d9cu, 0xd850b74du, 0x768830feu, 0x14bfaaafu, 0xb2f72460u, 0x512e9e11u, 0xef6617c2u, 0x8d9d9173u,
    0x2bd50b24u, 0xca0c84d5u, 0x6843fe86u, 0x067b7837u, 0xa4b2f1e8u, 0x42ea6b99u, 0xe121e54au, 0x7f595efbu,
    0x1d90d8acu, 0xbbc8525du, 0x59ffcc0eu, 0xf83745bfu, 0x966ebf70u, 0x34a63921u, 0xd2ddb2d2u, 0x71152c83u,
    0x0f4ca634u, 0xad841fe5u, 0x4bbb9996u, 0xe9f31347u, 0x882a8cf8u, 0x266206a9u, 0xc499805au, 0x62d0fa0bu,
    0x010873bcu, 0x9f3fed6du, 0x3d77671eu, 0xdbaee0cfu, 0x79e65a80u, 0x181dd431u, 0xb6554de2u, 0x548cc793u,
    0xf2c44144u, 0x90fbbaf5u, 0x2f3334a6u, 0xcd6aae57u, 0x6ba22808u, 0x09d9a1b9u, 0xa8111b6au, 0x4648951bu,
};

static const uint32_t bshim_066_tab7[96] = {
    0x1161812du, 0xaf98fadeu, 0x4dd0748fu, 0xec07ee40u, 0x8a3f67f1u, 0x2876e1a2u, 0xc6ae5b53u, 0x64e5d504u,
    0x031d4eb5u, 0xa154c866u, 0x3f8c4217u, 0xddc3bbc8u, 0x7bfb3579u, 0x1a32af2au, 0xb86a28dbu, 0x56a1a28cu,
    0xf4d91c3du, 0x931095eeu, 0x31480f9fu, 0xcf7f8950u, 0x6db70301u, 0x0bee7cb2u, 0xaa25f663u, 0x485d7014u,
    0xe694e9c5u, 0x84cc6376u, 0x2303dd27u, 0xc13b56d8u, 0x5f72d089u, 0xfdaa4a3au, 0x9be1c3ebu, 0x3a193d9cu,
    0xd850b74du, 0x768830feu, 0x14bfaaafu, 0xb2f72460u, 0x512e9e11u, 0xef6617c2u, 0x8d9d9173u, 0x2bd50b24u,
    0xca0c84d5u, 0x6843fe86u, 0x067b7837u, 0xa4b2f1e8u, 0x42ea6b99u, 0xe121e54au, 0x7f595efbu, 0x1d90d8acu,
    0xbbc8525du, 0x59ffcc0eu, 0xf83745bfu, 0x966ebf70u, 0x34a63921u, 0xd2ddb2d2u, 0x71152c83u, 0x0f4ca634u,
    0xad841fe5u, 0x4bbb9996u, 0xe9f31347u, 0x882a8cf8u, 0x266206a9u, 0xc499805au, 0x62d0fa0bu, 0x010873bcu,
    0x9f3fed6du, 0x3d77671eu, 0xdbaee0cfu, 0x79e65a80u, 0x181dd431u, 0xb6554de2u, 0x548cc793u, 0xf2c44144u,
    0x90fbbaf5u, 0x2f3334a6u, 0xcd6aae57u, 0x6ba22808u, 0x09d9a1b9u, 0xa8111b6au, 0x4648951bu, 0xe4800eccu,
    0x82b7887du, 0x20ef022eu, 0xbf267bdfu, 0x5d5df590u, 0xfb956f41u, 0x99cce8f2u, 0x380462a3u, 0xd63bdc54u,
    0x74735605u, 0x12aacfb6u, 0xb0e24967u, 0x4f19c318u, 0xed513cc9u, 0x8b88b67au, 0x29c0302bu, 0xc7f7a9dcu,
};

struct bshim_066_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_066_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x86ca32aeu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0cb5fd25u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x92a1c79cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x188d9213u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9e795c8au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x24652701u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaa50f178u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x303cbbefu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb6288666u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3c1450ddu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc2001b54u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x47ebe5cbu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xcdd7b042u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x53c37ab9u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd9af4530u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5f9b0fa7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe586da1eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6b72a495u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf15e6f0cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x774a3983u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xfd3603fau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8321ce71u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x090d98e8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8ef9635fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x14e52dd6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9ad0f84du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x20bcc2c4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa6a88d3bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x2c9457b2u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb2802229u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_066_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_066_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_066_reset(struct bshim_066_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x0007f99eu;
    return 0;
}

