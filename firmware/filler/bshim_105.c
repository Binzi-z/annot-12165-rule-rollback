/* bshim_105 -- board support shim generated from the 0105 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_105_tab0[96] = {
    0x0eb7894bu, 0xacef02fcu, 0x4b267cadu, 0xe95df65eu, 0x8795700fu, 0x25cce9c0u, 0xc4046371u, 0x623bdd22u,
    0x007356d3u, 0x9eaad084u, 0x3ce24a35u, 0xdb19c3e6u, 0x79513d97u, 0x1788b748u, 0xb5c030f9u, 0x53f7aaaau,
    0xf22f245bu, 0x90669e0cu, 0x2e9e17bdu, 0xccd5916eu, 0x6b0d0b1fu, 0x094484d0u, 0xa77bfe81u, 0x45b37832u,
    0xe3eaf1e3u, 0x82226b94u, 0x2059e545u, 0xbe915ef6u, 0x5cc8d8a7u, 0xfb005258u, 0x9937cc09u, 0x376f45bau,
    0xd5a6bf6bu, 0x73de391cu, 0x1215b2cdu, 0xb04d2c7eu, 0x4e84a62fu, 0xecbc1fe0u, 0x8af39991u, 0x292b1342u,
    0xc7628cf3u, 0x659a06a4u, 0x03d18055u, 0xa208fa06u, 0x404073b7u, 0xde77ed68u, 0x7caf6719u, 0x1ae6e0cau,
    0xb91e5a7bu, 0x5755d42cu, 0xf58d4dddu, 0x93c4c78eu, 0x31fc413fu, 0xd033baf0u, 0x6e6b34a1u, 0x0ca2ae52u,
    0xaada2803u, 0x4911a1b4u, 0xe7491b65u, 0x85809516u, 0x23b80ec7u, 0xc1ef8878u, 0x60270229u, 0xfe5e7bdau,
    0x9c95f58bu, 0x3acd6f3cu, 0xd904e8edu, 0x773c629eu, 0x1573dc4fu, 0xb3ab5600u, 0x51e2cfb1u, 0xf01a4962u,
    0x8e51c313u, 0x2c893cc4u, 0xcac0b675u, 0x68f83026u, 0x072fa9d7u, 0xa5672388u, 0x439e9d39u, 0xe1d616eau,
    0x800d909bu, 0x1e450a4cu, 0xbc7c83fdu, 0x5ab3fdaeu, 0xf8eb775fu, 0x9722f110u, 0x355a6ac1u, 0xd391e472u,
    0x71c95e23u, 0x1000d7d4u, 0xae385185u, 0x4c6fcb36u, 0xeaa744e7u, 0x88debe98u, 0x27163849u, 0xc54db1fau,
};

static const uint32_t bshim_105_tab1[96] = {
    0x90669e0cu, 0x2e9e17bdu, 0xccd5916eu, 0x6b0d0b1fu, 0x094484d0u, 0xa77bfe81u, 0x45b37832u, 0xe3eaf1e3u,
    0x82226b94u, 0x2059e545u, 0xbe915ef6u, 0x5cc8d8a7u, 0xfb005258u, 0x9937cc09u, 0x376f45bau, 0xd5a6bf6bu,
    0x73de391cu, 0x1215b2cdu, 0xb04d2c7eu, 0x4e84a62fu, 0xecbc1fe0u, 0x8af39991u, 0x292b1342u, 0xc7628cf3u,
    0x659a06a4u, 0x03d18055u, 0xa208fa06u, 0x404073b7u, 0xde77ed68u, 0x7caf6719u, 0x1ae6e0cau, 0xb91e5a7bu,
    0x5755d42cu, 0xf58d4dddu, 0x93c4c78eu, 0x31fc413fu, 0xd033baf0u, 0x6e6b34a1u, 0x0ca2ae52u, 0xaada2803u,
    0x4911a1b4u, 0xe7491b65u, 0x85809516u, 0x23b80ec7u, 0xc1ef8878u, 0x60270229u, 0xfe5e7bdau, 0x9c95f58bu,
    0x3acd6f3cu, 0xd904e8edu, 0x773c629eu, 0x1573dc4fu, 0xb3ab5600u, 0x51e2cfb1u, 0xf01a4962u, 0x8e51c313u,
    0x2c893cc4u, 0xcac0b675u, 0x68f83026u, 0x072fa9d7u, 0xa5672388u, 0x439e9d39u, 0xe1d616eau, 0x800d909bu,
    0x1e450a4cu, 0xbc7c83fdu, 0x5ab3fdaeu, 0xf8eb775fu, 0x9722f110u, 0x355a6ac1u, 0xd391e472u, 0x71c95e23u,
    0x1000d7d4u, 0xae385185u, 0x4c6fcb36u, 0xeaa744e7u, 0x88debe98u, 0x27163849u, 0xc54db1fau, 0x63852babu,
    0x01bca55cu, 0x9ff41f0du, 0x3e2b98beu, 0xdc63126fu, 0x7a9a8c20u, 0x18d205d1u, 0xb7097f82u, 0x5540f933u,
    0xf37872e4u, 0x91afec95u, 0x2fe76646u, 0xce1edff7u, 0x6c5659a8u, 0x0a8dd359u, 0xa8c54d0au, 0x46fcc6bbu,
};

static const uint32_t bshim_105_tab2[96] = {
    0x1215b2cdu, 0xb04d2c7eu, 0x4e84a62fu, 0xecbc1fe0u, 0x8af39991u, 0x292b1342u, 0xc7628cf3u, 0x659a06a4u,
    0x03d18055u, 0xa208fa06u, 0x404073b7u, 0xde77ed68u, 0x7caf6719u, 0x1ae6e0cau, 0xb91e5a7bu, 0x5755d42cu,
    0xf58d4dddu, 0x93c4c78eu, 0x31fc413fu, 0xd033baf0u, 0x6e6b34a1u, 0x0ca2ae52u, 0xaada2803u, 0x4911a1b4u,
    0xe7491b65u, 0x85809516u, 0x23b80ec7u, 0xc1ef8878u, 0x60270229u, 0xfe5e7bdau, 0x9c95f58bu, 0x3acd6f3cu,
    0xd904e8edu, 0x773c629eu, 0x1573dc4fu, 0xb3ab5600u, 0x51e2cfb1u, 0xf01a4962u, 0x8e51c313u, 0x2c893cc4u,
    0xcac0b675u, 0x68f83026u, 0x072fa9d7u, 0xa5672388u, 0x439e9d39u, 0xe1d616eau, 0x800d909bu, 0x1e450a4cu,
    0xbc7c83fdu, 0x5ab3fdaeu, 0xf8eb775fu, 0x9722f110u, 0x355a6ac1u, 0xd391e472u, 0x71c95e23u, 0x1000d7d4u,
    0xae385185u, 0x4c6fcb36u, 0xeaa744e7u, 0x88debe98u, 0x27163849u, 0xc54db1fau, 0x63852babu, 0x01bca55cu,
    0x9ff41f0du, 0x3e2b98beu, 0xdc63126fu, 0x7a9a8c20u, 0x18d205d1u, 0xb7097f82u, 0x5540f933u, 0xf37872e4u,
    0x91afec95u, 0x2fe76646u, 0xce1edff7u, 0x6c5659a8u, 0x0a8dd359u, 0xa8c54d0au, 0x46fcc6bbu, 0xe534406cu,
    0x836bba1du, 0x21a333ceu, 0xbfdaad7fu, 0x5e122730u, 0xfc49a0e1u, 0x9a811a92u, 0x38b89443u, 0xd6f00df4u,
    0x752787a5u, 0x135f0156u, 0xb1967b07u, 0x4fcdf4b8u, 0xee056e69u, 0x8c3ce81au, 0x2a7461cbu, 0xc8abdb7cu,
};

static const uint32_t bshim_105_tab3[96] = {
    0x93c4c78eu, 0x31fc413fu, 0xd033baf0u, 0x6e6b34a1u, 0x0ca2ae52u, 0xaada2803u, 0x4911a1b4u, 0xe7491b65u,
    0x85809516u, 0x23b80ec7u, 0xc1ef8878u, 0x60270229u, 0xfe5e7bdau, 0x9c95f58bu, 0x3acd6f3cu, 0xd904e8edu,
    0x773c629eu, 0x1573dc4fu, 0xb3ab5600u, 0x51e2cfb1u, 0xf01a4962u, 0x8e51c313u, 0x2c893cc4u, 0xcac0b675u,
    0x68f83026u, 0x072fa9d7u, 0xa5672388u, 0x439e9d39u, 0xe1d616eau, 0x800d909bu, 0x1e450a4cu, 0xbc7c83fdu,
    0x5ab3fdaeu, 0xf8eb775fu, 0x9722f110u, 0x355a6ac1u, 0xd391e472u, 0x71c95e23u, 0x1000d7d4u, 0xae385185u,
    0x4c6fcb36u, 0xeaa744e7u, 0x88debe98u, 0x27163849u, 0xc54db1fau, 0x63852babu, 0x01bca55cu, 0x9ff41f0du,
    0x3e2b98beu, 0xdc63126fu, 0x7a9a8c20u, 0x18d205d1u, 0xb7097f82u, 0x5540f933u, 0xf37872e4u, 0x91afec95u,
    0x2fe76646u, 0xce1edff7u, 0x6c5659a8u, 0x0a8dd359u, 0xa8c54d0au, 0x46fcc6bbu, 0xe534406cu, 0x836bba1du,
    0x21a333ceu, 0xbfdaad7fu, 0x5e122730u, 0xfc49a0e1u, 0x9a811a92u, 0x38b89443u, 0xd6f00df4u, 0x752787a5u,
    0x135f0156u, 0xb1967b07u, 0x4fcdf4b8u, 0xee056e69u, 0x8c3ce81au, 0x2a7461cbu, 0xc8abdb7cu, 0x66e3552du,
    0x051acedeu, 0xa352488fu, 0x4189c240u, 0xdfc13bf1u, 0x7df8b5a2u, 0x1c302f53u, 0xba67a904u, 0x589f22b5u,
    0xf6d69c66u, 0x950e1617u, 0x33458fc8u, 0xd17d0979u, 0x6fb4832au, 0x0debfcdbu, 0xac23768cu, 0x4a5af03du,
};

static const uint32_t bshim_105_tab4[96] = {
    0x1573dc4fu, 0xb3ab5600u, 0x51e2cfb1u, 0xf01a4962u, 0x8e51c313u, 0x2c893cc4u, 0xcac0b675u, 0x68f83026u,
    0x072fa9d7u, 0xa5672388u, 0x439e9d39u, 0xe1d616eau, 0x800d909bu, 0x1e450a4cu, 0xbc7c83fdu, 0x5ab3fdaeu,
    0xf8eb775fu, 0x9722f110u, 0x355a6ac1u, 0xd391e472u, 0x71c95e23u, 0x1000d7d4u, 0xae385185u, 0x4c6fcb36u,
    0xeaa744e7u, 0x88debe98u, 0x27163849u, 0xc54db1fau, 0x63852babu, 0x01bca55cu, 0x9ff41f0du, 0x3e2b98beu,
    0xdc63126fu, 0x7a9a8c20u, 0x18d205d1u, 0xb7097f82u, 0x5540f933u, 0xf37872e4u, 0x91afec95u, 0x2fe76646u,
    0xce1edff7u, 0x6c5659a8u, 0x0a8dd359u, 0xa8c54d0au, 0x46fcc6bbu, 0xe534406cu, 0x836bba1du, 0x21a333ceu,
    0xbfdaad7fu, 0x5e122730u, 0xfc49a0e1u, 0x9a811a92u, 0x38b89443u, 0xd6f00df4u, 0x752787a5u, 0x135f0156u,
    0xb1967b07u, 0x4fcdf4b8u, 0xee056e69u, 0x8c3ce81au, 0x2a7461cbu, 0xc8abdb7cu, 0x66e3552du, 0x051acedeu,
    0xa352488fu, 0x4189c240u, 0xdfc13bf1u, 0x7df8b5a2u, 0x1c302f53u, 0xba67a904u, 0x589f22b5u, 0xf6d69c66u,
    0x950e1617u, 0x33458fc8u, 0xd17d0979u, 0x6fb4832au, 0x0debfcdbu, 0xac23768cu, 0x4a5af03du, 0xe89269eeu,
    0x86c9e39fu, 0x25015d50u, 0xc338d701u, 0x617050b2u, 0xffa7ca63u, 0x9ddf4414u, 0x3c16bdc5u, 0xda4e3776u,
    0x7885b127u, 0x16bd2ad8u, 0xb4f4a489u, 0x532c1e3au, 0xf16397ebu, 0x8f9b119cu, 0x2dd28b4du, 0xcc0a04feu,
};

static const uint32_t bshim_105_tab5[96] = {
    0x9722f110u, 0x355a6ac1u, 0xd391e472u, 0x71c95e23u, 0x1000d7d4u, 0xae385185u, 0x4c6fcb36u, 0xeaa744e7u,
    0x88debe98u, 0x27163849u, 0xc54db1fau, 0x63852babu, 0x01bca55cu, 0x9ff41f0du, 0x3e2b98beu, 0xdc63126fu,
    0x7a9a8c20u, 0x18d205d1u, 0xb7097f82u, 0x5540f933u, 0xf37872e4u, 0x91afec95u, 0x2fe76646u, 0xce1edff7u,
    0x6c5659a8u, 0x0a8dd359u, 0xa8c54d0au, 0x46fcc6bbu, 0xe534406cu, 0x836bba1du, 0x21a333ceu, 0xbfdaad7fu,
    0x5e122730u, 0xfc49a0e1u, 0x9a811a92u, 0x38b89443u, 0xd6f00df4u, 0x752787a5u, 0x135f0156u, 0xb1967b07u,
    0x4fcdf4b8u, 0xee056e69u, 0x8c3ce81au, 0x2a7461cbu, 0xc8abdb7cu, 0x66e3552du, 0x051acedeu, 0xa352488fu,
    0x4189c240u, 0xdfc13bf1u, 0x7df8b5a2u, 0x1c302f53u, 0xba67a904u, 0x589f22b5u, 0xf6d69c66u, 0x950e1617u,
    0x33458fc8u, 0xd17d0979u, 0x6fb4832au, 0x0debfcdbu, 0xac23768cu, 0x4a5af03du, 0xe89269eeu, 0x86c9e39fu,
    0x25015d50u, 0xc338d701u, 0x617050b2u, 0xffa7ca63u, 0x9ddf4414u, 0x3c16bdc5u, 0xda4e3776u, 0x7885b127u,
    0x16bd2ad8u, 0xb4f4a489u, 0x532c1e3au, 0xf16397ebu, 0x8f9b119cu, 0x2dd28b4du, 0xcc0a04feu, 0x6a417eafu,
    0x0878f860u, 0xa6b07211u, 0x44e7ebc2u, 0xe31f6573u, 0x8156df24u, 0x1f8e58d5u, 0xbdc5d286u, 0x5bfd4c37u,
    0xfa34c5e8u, 0x986c3f99u, 0x36a3b94au, 0xd4db32fbu, 0x7312acacu, 0x114a265du, 0xaf81a00eu, 0x4db919bfu,
};

static const uint32_t bshim_105_tab6[96] = {
    0x18d205d1u, 0xb7097f82u, 0x5540f933u, 0xf37872e4u, 0x91afec95u, 0x2fe76646u, 0xce1edff7u, 0x6c5659a8u,
    0x0a8dd359u, 0xa8c54d0au, 0x46fcc6bbu, 0xe534406cu, 0x836bba1du, 0x21a333ceu, 0xbfdaad7fu, 0x5e122730u,
    0xfc49a0e1u, 0x9a811a92u, 0x38b89443u, 0xd6f00df4u, 0x752787a5u, 0x135f0156u, 0xb1967b07u, 0x4fcdf4b8u,
    0xee056e69u, 0x8c3ce81au, 0x2a7461cbu, 0xc8abdb7cu, 0x66e3552du, 0x051acedeu, 0xa352488fu, 0x4189c240u,
    0xdfc13bf1u, 0x7df8b5a2u, 0x1c302f53u, 0xba67a904u, 0x589f22b5u, 0xf6d69c66u, 0x950e1617u, 0x33458fc8u,
    0xd17d0979u, 0x6fb4832au, 0x0debfcdbu, 0xac23768cu, 0x4a5af03du, 0xe89269eeu, 0x86c9e39fu, 0x25015d50u,
    0xc338d701u, 0x617050b2u, 0xffa7ca63u, 0x9ddf4414u, 0x3c16bdc5u, 0xda4e3776u, 0x7885b127u, 0x16bd2ad8u,
    0xb4f4a489u, 0x532c1e3au, 0xf16397ebu, 0x8f9b119cu, 0x2dd28b4du, 0xcc0a04feu, 0x6a417eafu, 0x0878f860u,
    0xa6b07211u, 0x44e7ebc2u, 0xe31f6573u, 0x8156df24u, 0x1f8e58d5u, 0xbdc5d286u, 0x5bfd4c37u, 0xfa34c5e8u,
    0x986c3f99u, 0x36a3b94au, 0xd4db32fbu, 0x7312acacu, 0x114a265du, 0xaf81a00eu, 0x4db919bfu, 0xebf09370u,
    0x8a280d21u, 0x285f86d2u, 0xc6970083u, 0x64ce7a34u, 0x0305f3e5u, 0xa13d6d96u, 0x3f74e747u, 0xddac60f8u,
    0x7be3daa9u, 0x1a1b545au, 0xb852ce0bu, 0x568a47bcu, 0xf4c1c16du, 0x92f93b1eu, 0x3130b4cfu, 0xcf682e80u,
};

static const uint32_t bshim_105_tab7[96] = {
    0x9a811a92u, 0x38b89443u, 0xd6f00df4u, 0x752787a5u, 0x135f0156u, 0xb1967b07u, 0x4fcdf4b8u, 0xee056e69u,
    0x8c3ce81au, 0x2a7461cbu, 0xc8abdb7cu, 0x66e3552du, 0x051acedeu, 0xa352488fu, 0x4189c240u, 0xdfc13bf1u,
    0x7df8b5a2u, 0x1c302f53u, 0xba67a904u, 0x589f22b5u, 0xf6d69c66u, 0x950e1617u, 0x33458fc8u, 0xd17d0979u,
    0x6fb4832au, 0x0debfcdbu, 0xac23768cu, 0x4a5af03du, 0xe89269eeu, 0x86c9e39fu, 0x25015d50u, 0xc338d701u,
    0x617050b2u, 0xffa7ca63u, 0x9ddf4414u, 0x3c16bdc5u, 0xda4e3776u, 0x7885b127u, 0x16bd2ad8u, 0xb4f4a489u,
    0x532c1e3au, 0xf16397ebu, 0x8f9b119cu, 0x2dd28b4du, 0xcc0a04feu, 0x6a417eafu, 0x0878f860u, 0xa6b07211u,
    0x44e7ebc2u, 0xe31f6573u, 0x8156df24u, 0x1f8e58d5u, 0xbdc5d286u, 0x5bfd4c37u, 0xfa34c5e8u, 0x986c3f99u,
    0x36a3b94au, 0xd4db32fbu, 0x7312acacu, 0x114a265du, 0xaf81a00eu, 0x4db919bfu, 0xebf09370u, 0x8a280d21u,
    0x285f86d2u, 0xc6970083u, 0x64ce7a34u, 0x0305f3e5u, 0xa13d6d96u, 0x3f74e747u, 0xddac60f8u, 0x7be3daa9u,
    0x1a1b545au, 0xb852ce0bu, 0x568a47bcu, 0xf4c1c16du, 0x92f93b1eu, 0x3130b4cfu, 0xcf682e80u, 0x6d9fa831u,
    0x0bd721e2u, 0xaa0e9b93u, 0x48461544u, 0xe67d8ef5u, 0x84b508a6u, 0x22ec8257u, 0xc123fc08u, 0x5f5b75b9u,
    0xfd92ef6au, 0x9bca691bu, 0x3a01e2ccu, 0xd8395c7du, 0x7670d62eu, 0x14a84fdfu, 0xb2dfc990u, 0x51174341u,
};

struct bshim_105_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_105_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x0d94655cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x93802fd3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x196bfa4au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x9f57c4c1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x25438f38u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xab2f59afu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x311b2426u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xb706ee9du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_105_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x3cf2b914u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_105_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_105_reset(struct bshim_105_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000cb007u;
    return 0;
}

