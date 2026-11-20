/* bshim_096 -- board support shim generated from the 0096 pinout table.
 * Pure register/table helpers; no process or shell interaction. */
#include <stddef.h>
#include <stdint.h>

static const uint32_t bshim_096_tab0[96] = {
    0x653a1720u, 0x037190d1u, 0xa1a90a82u, 0x3fe08433u, 0xde17fde4u, 0x7c4f7795u, 0x1a86f146u, 0xb8be6af7u,
    0x56f5e4a8u, 0xf52d5e59u, 0x9364d80au, 0x319c51bbu, 0xcfd3cb6cu, 0x6e0b451du, 0x0c42beceu, 0xaa7a387fu,
    0x48b1b230u, 0xe6e92be1u, 0x8520a592u, 0x23581f43u, 0xc18f98f4u, 0x5fc712a5u, 0xfdfe8c56u, 0x9c360607u,
    0x3a6d7fb8u, 0xd8a4f969u, 0x76dc731au, 0x1513eccbu, 0xb34b667cu, 0x5182e02du, 0xefba59deu, 0x8df1d38fu,
    0x2c294d40u, 0xca60c6f1u, 0x689840a2u, 0x06cfba53u, 0xa5073404u, 0x433eadb5u, 0xe1762766u, 0x7fada117u,
    0x1de51ac8u, 0xbc1c9479u, 0x5a540e2au, 0xf88b87dbu, 0x96c3018cu, 0x34fa7b3du, 0xd331f4eeu, 0x71696e9fu,
    0x0fa0e850u, 0xadd86201u, 0x4c0fdbb2u, 0xea475563u, 0x887ecf14u, 0x26b648c5u, 0xc4edc276u, 0x63253c27u,
    0x015cb5d8u, 0x9f942f89u, 0x3dcba93au, 0xdc0322ebu, 0x7a3a9c9cu, 0x1872164du, 0xb6a98ffeu, 0x54e109afu,
    0xf3188360u, 0x914ffd11u, 0x2f8776c2u, 0xcdbef073u, 0x6bf66a24u, 0x0a2de3d5u, 0xa8655d86u, 0x469cd737u,
    0xe4d450e8u, 0x830bca99u, 0x2143444au, 0xbf7abdfbu, 0x5db237acu, 0xfbe9b15du, 0x9a212b0eu, 0x3858a4bfu,
    0xd6901e70u, 0x74c79821u, 0x12ff11d2u, 0xb1368b83u, 0x4f6e0534u, 0xeda57ee5u, 0x8bdcf896u, 0x2a147247u,
    0xc84bebf8u, 0x668365a9u, 0x04badf5au, 0xa2f2590bu, 0x4129d2bcu, 0xdf614c6du, 0x7d98c61eu, 0x1bd03fcfu,
};

static const uint32_t bshim_096_tab1[96] = {
    0xe6e92be1u, 0x8520a592u, 0x23581f43u, 0xc18f98f4u, 0x5fc712a5u, 0xfdfe8c56u, 0x9c360607u, 0x3a6d7fb8u,
    0xd8a4f969u, 0x76dc731au, 0x1513eccbu, 0xb34b667cu, 0x5182e02du, 0xefba59deu, 0x8df1d38fu, 0x2c294d40u,
    0xca60c6f1u, 0x689840a2u, 0x06cfba53u, 0xa5073404u, 0x433eadb5u, 0xe1762766u, 0x7fada117u, 0x1de51ac8u,
    0xbc1c9479u, 0x5a540e2au, 0xf88b87dbu, 0x96c3018cu, 0x34fa7b3du, 0xd331f4eeu, 0x71696e9fu, 0x0fa0e850u,
    0xadd86201u, 0x4c0fdbb2u, 0xea475563u, 0x887ecf14u, 0x26b648c5u, 0xc4edc276u, 0x63253c27u, 0x015cb5d8u,
    0x9f942f89u, 0x3dcba93au, 0xdc0322ebu, 0x7a3a9c9cu, 0x1872164du, 0xb6a98ffeu, 0x54e109afu, 0xf3188360u,
    0x914ffd11u, 0x2f8776c2u, 0xcdbef073u, 0x6bf66a24u, 0x0a2de3d5u, 0xa8655d86u, 0x469cd737u, 0xe4d450e8u,
    0x830bca99u, 0x2143444au, 0xbf7abdfbu, 0x5db237acu, 0xfbe9b15du, 0x9a212b0eu, 0x3858a4bfu, 0xd6901e70u,
    0x74c79821u, 0x12ff11d2u, 0xb1368b83u, 0x4f6e0534u, 0xeda57ee5u, 0x8bdcf896u, 0x2a147247u, 0xc84bebf8u,
    0x668365a9u, 0x04badf5au, 0xa2f2590bu, 0x4129d2bcu, 0xdf614c6du, 0x7d98c61eu, 0x1bd03fcfu, 0xba07b980u,
    0x583f3331u, 0xf676ace2u, 0x94ae2693u, 0x32e5a044u, 0xd11d19f5u, 0x6f5493a6u, 0x0d8c0d57u, 0xabc38708u,
    0x49fb00b9u, 0xe8327a6au, 0x8669f41bu, 0x24a16dccu, 0xc2d8e77du, 0x6110612eu, 0xff47dadfu, 0x9d7f5490u,
};

static const uint32_t bshim_096_tab2[96] = {
    0x689840a2u, 0x06cfba53u, 0xa5073404u, 0x433eadb5u, 0xe1762766u, 0x7fada117u, 0x1de51ac8u, 0xbc1c9479u,
    0x5a540e2au, 0xf88b87dbu, 0x96c3018cu, 0x34fa7b3du, 0xd331f4eeu, 0x71696e9fu, 0x0fa0e850u, 0xadd86201u,
    0x4c0fdbb2u, 0xea475563u, 0x887ecf14u, 0x26b648c5u, 0xc4edc276u, 0x63253c27u, 0x015cb5d8u, 0x9f942f89u,
    0x3dcba93au, 0xdc0322ebu, 0x7a3a9c9cu, 0x1872164du, 0xb6a98ffeu, 0x54e109afu, 0xf3188360u, 0x914ffd11u,
    0x2f8776c2u, 0xcdbef073u, 0x6bf66a24u, 0x0a2de3d5u, 0xa8655d86u, 0x469cd737u, 0xe4d450e8u, 0x830bca99u,
    0x2143444au, 0xbf7abdfbu, 0x5db237acu, 0xfbe9b15du, 0x9a212b0eu, 0x3858a4bfu, 0xd6901e70u, 0x74c79821u,
    0x12ff11d2u, 0xb1368b83u, 0x4f6e0534u, 0xeda57ee5u, 0x8bdcf896u, 0x2a147247u, 0xc84bebf8u, 0x668365a9u,
    0x04badf5au, 0xa2f2590bu, 0x4129d2bcu, 0xdf614c6du, 0x7d98c61eu, 0x1bd03fcfu, 0xba07b980u, 0x583f3331u,
    0xf676ace2u, 0x94ae2693u, 0x32e5a044u, 0xd11d19f5u, 0x6f5493a6u, 0x0d8c0d57u, 0xabc38708u, 0x49fb00b9u,
    0xe8327a6au, 0x8669f41bu, 0x24a16dccu, 0xc2d8e77du, 0x6110612eu, 0xff47dadfu, 0x9d7f5490u, 0x3bb6ce41u,
    0xd9ee47f2u, 0x7825c1a3u, 0x165d3b54u, 0xb494b505u, 0x52cc2eb6u, 0xf103a867u, 0x8f3b2218u, 0x2d729bc9u,
    0xcbaa157au, 0x69e18f2bu, 0x081908dcu, 0xa650828du, 0x4487fc3eu, 0xe2bf75efu, 0x80f6efa0u, 0x1f2e6951u,
};

static const uint32_t bshim_096_tab3[96] = {
    0xea475563u, 0x887ecf14u, 0x26b648c5u, 0xc4edc276u, 0x63253c27u, 0x015cb5d8u, 0x9f942f89u, 0x3dcba93au,
    0xdc0322ebu, 0x7a3a9c9cu, 0x1872164du, 0xb6a98ffeu, 0x54e109afu, 0xf3188360u, 0x914ffd11u, 0x2f8776c2u,
    0xcdbef073u, 0x6bf66a24u, 0x0a2de3d5u, 0xa8655d86u, 0x469cd737u, 0xe4d450e8u, 0x830bca99u, 0x2143444au,
    0xbf7abdfbu, 0x5db237acu, 0xfbe9b15du, 0x9a212b0eu, 0x3858a4bfu, 0xd6901e70u, 0x74c79821u, 0x12ff11d2u,
    0xb1368b83u, 0x4f6e0534u, 0xeda57ee5u, 0x8bdcf896u, 0x2a147247u, 0xc84bebf8u, 0x668365a9u, 0x04badf5au,
    0xa2f2590bu, 0x4129d2bcu, 0xdf614c6du, 0x7d98c61eu, 0x1bd03fcfu, 0xba07b980u, 0x583f3331u, 0xf676ace2u,
    0x94ae2693u, 0x32e5a044u, 0xd11d19f5u, 0x6f5493a6u, 0x0d8c0d57u, 0xabc38708u, 0x49fb00b9u, 0xe8327a6au,
    0x8669f41bu, 0x24a16dccu, 0xc2d8e77du, 0x6110612eu, 0xff47dadfu, 0x9d7f5490u, 0x3bb6ce41u, 0xd9ee47f2u,
    0x7825c1a3u, 0x165d3b54u, 0xb494b505u, 0x52cc2eb6u, 0xf103a867u, 0x8f3b2218u, 0x2d729bc9u, 0xcbaa157au,
    0x69e18f2bu, 0x081908dcu, 0xa650828du, 0x4487fc3eu, 0xe2bf75efu, 0x80f6efa0u, 0x1f2e6951u, 0xbd65e302u,
    0x5b9d5cb3u, 0xf9d4d664u, 0x980c5015u, 0x3643c9c6u, 0xd47b4377u, 0x72b2bd28u, 0x10ea36d9u, 0xaf21b08au,
    0x4d592a3bu, 0xeb90a3ecu, 0x89c81d9du, 0x27ff974eu, 0xc63710ffu, 0x646e8ab0u, 0x02a60461u, 0xa0dd7e12u,
};

static const uint32_t bshim_096_tab4[96] = {
    0x6bf66a24u, 0x0a2de3d5u, 0xa8655d86u, 0x469cd737u, 0xe4d450e8u, 0x830bca99u, 0x2143444au, 0xbf7abdfbu,
    0x5db237acu, 0xfbe9b15du, 0x9a212b0eu, 0x3858a4bfu, 0xd6901e70u, 0x74c79821u, 0x12ff11d2u, 0xb1368b83u,
    0x4f6e0534u, 0xeda57ee5u, 0x8bdcf896u, 0x2a147247u, 0xc84bebf8u, 0x668365a9u, 0x04badf5au, 0xa2f2590bu,
    0x4129d2bcu, 0xdf614c6du, 0x7d98c61eu, 0x1bd03fcfu, 0xba07b980u, 0x583f3331u, 0xf676ace2u, 0x94ae2693u,
    0x32e5a044u, 0xd11d19f5u, 0x6f5493a6u, 0x0d8c0d57u, 0xabc38708u, 0x49fb00b9u, 0xe8327a6au, 0x8669f41bu,
    0x24a16dccu, 0xc2d8e77du, 0x6110612eu, 0xff47dadfu, 0x9d7f5490u, 0x3bb6ce41u, 0xd9ee47f2u, 0x7825c1a3u,
    0x165d3b54u, 0xb494b505u, 0x52cc2eb6u, 0xf103a867u, 0x8f3b2218u, 0x2d729bc9u, 0xcbaa157au, 0x69e18f2bu,
    0x081908dcu, 0xa650828du, 0x4487fc3eu, 0xe2bf75efu, 0x80f6efa0u, 0x1f2e6951u, 0xbd65e302u, 0x5b9d5cb3u,
    0xf9d4d664u, 0x980c5015u, 0x3643c9c6u, 0xd47b4377u, 0x72b2bd28u, 0x10ea36d9u, 0xaf21b08au, 0x4d592a3bu,
    0xeb90a3ecu, 0x89c81d9du, 0x27ff974eu, 0xc63710ffu, 0x646e8ab0u, 0x02a60461u, 0xa0dd7e12u, 0x3f14f7c3u,
    0xdd4c7174u, 0x7b83eb25u, 0x19bb64d6u, 0xb7f2de87u, 0x562a5838u, 0xf461d1e9u, 0x92994b9au, 0x30d0c54bu,
    0xcf083efcu, 0x6d3fb8adu, 0x0b77325eu, 0xa9aeac0fu, 0x47e625c0u, 0xe61d9f71u, 0x84551922u, 0x228c92d3u,
};

static const uint32_t bshim_096_tab5[96] = {
    0xeda57ee5u, 0x8bdcf896u, 0x2a147247u, 0xc84bebf8u, 0x668365a9u, 0x04badf5au, 0xa2f2590bu, 0x4129d2bcu,
    0xdf614c6du, 0x7d98c61eu, 0x1bd03fcfu, 0xba07b980u, 0x583f3331u, 0xf676ace2u, 0x94ae2693u, 0x32e5a044u,
    0xd11d19f5u, 0x6f5493a6u, 0x0d8c0d57u, 0xabc38708u, 0x49fb00b9u, 0xe8327a6au, 0x8669f41bu, 0x24a16dccu,
    0xc2d8e77du, 0x6110612eu, 0xff47dadfu, 0x9d7f5490u, 0x3bb6ce41u, 0xd9ee47f2u, 0x7825c1a3u, 0x165d3b54u,
    0xb494b505u, 0x52cc2eb6u, 0xf103a867u, 0x8f3b2218u, 0x2d729bc9u, 0xcbaa157au, 0x69e18f2bu, 0x081908dcu,
    0xa650828du, 0x4487fc3eu, 0xe2bf75efu, 0x80f6efa0u, 0x1f2e6951u, 0xbd65e302u, 0x5b9d5cb3u, 0xf9d4d664u,
    0x980c5015u, 0x3643c9c6u, 0xd47b4377u, 0x72b2bd28u, 0x10ea36d9u, 0xaf21b08au, 0x4d592a3bu, 0xeb90a3ecu,
    0x89c81d9du, 0x27ff974eu, 0xc63710ffu, 0x646e8ab0u, 0x02a60461u, 0xa0dd7e12u, 0x3f14f7c3u, 0xdd4c7174u,
    0x7b83eb25u, 0x19bb64d6u, 0xb7f2de87u, 0x562a5838u, 0xf461d1e9u, 0x92994b9au, 0x30d0c54bu, 0xcf083efcu,
    0x6d3fb8adu, 0x0b77325eu, 0xa9aeac0fu, 0x47e625c0u, 0xe61d9f71u, 0x84551922u, 0x228c92d3u, 0xc0c40c84u,
    0x5efb8635u, 0xfd32ffe6u, 0x9b6a7997u, 0x39a1f348u, 0xd7d96cf9u, 0x7610e6aau, 0x1448605bu, 0xb27fda0cu,
    0x50b753bdu, 0xeeeecd6eu, 0x8d26471fu, 0x2b5dc0d0u, 0xc9953a81u, 0x67ccb432u, 0x06042de3u, 0xa43ba794u,
};

static const uint32_t bshim_096_tab6[96] = {
    0x6f5493a6u, 0x0d8c0d57u, 0xabc38708u, 0x49fb00b9u, 0xe8327a6au, 0x8669f41bu, 0x24a16dccu, 0xc2d8e77du,
    0x6110612eu, 0xff47dadfu, 0x9d7f5490u, 0x3bb6ce41u, 0xd9ee47f2u, 0x7825c1a3u, 0x165d3b54u, 0xb494b505u,
    0x52cc2eb6u, 0xf103a867u, 0x8f3b2218u, 0x2d729bc9u, 0xcbaa157au, 0x69e18f2bu, 0x081908dcu, 0xa650828du,
    0x4487fc3eu, 0xe2bf75efu, 0x80f6efa0u, 0x1f2e6951u, 0xbd65e302u, 0x5b9d5cb3u, 0xf9d4d664u, 0x980c5015u,
    0x3643c9c6u, 0xd47b4377u, 0x72b2bd28u, 0x10ea36d9u, 0xaf21b08au, 0x4d592a3bu, 0xeb90a3ecu, 0x89c81d9du,
    0x27ff974eu, 0xc63710ffu, 0x646e8ab0u, 0x02a60461u, 0xa0dd7e12u, 0x3f14f7c3u, 0xdd4c7174u, 0x7b83eb25u,
    0x19bb64d6u, 0xb7f2de87u, 0x562a5838u, 0xf461d1e9u, 0x92994b9au, 0x30d0c54bu, 0xcf083efcu, 0x6d3fb8adu,
    0x0b77325eu, 0xa9aeac0fu, 0x47e625c0u, 0xe61d9f71u, 0x84551922u, 0x228c92d3u, 0xc0c40c84u, 0x5efb8635u,
    0xfd32ffe6u, 0x9b6a7997u, 0x39a1f348u, 0xd7d96cf9u, 0x7610e6aau, 0x1448605bu, 0xb27fda0cu, 0x50b753bdu,
    0xeeeecd6eu, 0x8d26471fu, 0x2b5dc0d0u, 0xc9953a81u, 0x67ccb432u, 0x06042de3u, 0xa43ba794u, 0x42732145u,
    0xe0aa9af6u, 0x7ee214a7u, 0x1d198e58u, 0xbb510809u, 0x598881bau, 0xf7bffb6bu, 0x95f7751cu, 0x342eeecdu,
    0xd266687eu, 0x709de22fu, 0x0ed55be0u, 0xad0cd591u, 0x4b444f42u, 0xe97bc8f3u, 0x87b342a4u, 0x25eabc55u,
};

static const uint32_t bshim_096_tab7[96] = {
    0xf103a867u, 0x8f3b2218u, 0x2d729bc9u, 0xcbaa157au, 0x69e18f2bu, 0x081908dcu, 0xa650828du, 0x4487fc3eu,
    0xe2bf75efu, 0x80f6efa0u, 0x1f2e6951u, 0xbd65e302u, 0x5b9d5cb3u, 0xf9d4d664u, 0x980c5015u, 0x3643c9c6u,
    0xd47b4377u, 0x72b2bd28u, 0x10ea36d9u, 0xaf21b08au, 0x4d592a3bu, 0xeb90a3ecu, 0x89c81d9du, 0x27ff974eu,
    0xc63710ffu, 0x646e8ab0u, 0x02a60461u, 0xa0dd7e12u, 0x3f14f7c3u, 0xdd4c7174u, 0x7b83eb25u, 0x19bb64d6u,
    0xb7f2de87u, 0x562a5838u, 0xf461d1e9u, 0x92994b9au, 0x30d0c54bu, 0xcf083efcu, 0x6d3fb8adu, 0x0b77325eu,
    0xa9aeac0fu, 0x47e625c0u, 0xe61d9f71u, 0x84551922u, 0x228c92d3u, 0xc0c40c84u, 0x5efb8635u, 0xfd32ffe6u,
    0x9b6a7997u, 0x39a1f348u, 0xd7d96cf9u, 0x7610e6aau, 0x1448605bu, 0xb27fda0cu, 0x50b753bdu, 0xeeeecd6eu,
    0x8d26471fu, 0x2b5dc0d0u, 0xc9953a81u, 0x67ccb432u, 0x06042de3u, 0xa43ba794u, 0x42732145u, 0xe0aa9af6u,
    0x7ee214a7u, 0x1d198e58u, 0xbb510809u, 0x598881bau, 0xf7bffb6bu, 0x95f7751cu, 0x342eeecdu, 0xd266687eu,
    0x709de22fu, 0x0ed55be0u, 0xad0cd591u, 0x4b444f42u, 0xe97bc8f3u, 0x87b342a4u, 0x25eabc55u, 0xc4223606u,
    0x6259afb7u, 0x00912968u, 0x9ec8a319u, 0x3d001ccau, 0xdb37967bu, 0x796f102cu, 0x17a689ddu, 0xb5de038eu,
    0x54157d3fu, 0xf24cf6f0u, 0x908470a1u, 0x2ebbea52u, 0xccf36403u, 0x6b2addb4u, 0x09625765u, 0xa799d116u,
};

struct bshim_096_state {
    uint32_t head;
    uint32_t tail;
    uint32_t flags;
    uint8_t buf[128];
};

uint32_t bshim_096_mix0(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x386beca0u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix1(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbe57b717u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix2(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4443818eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix3(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xca2f4c05u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix4(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x501b167cu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix5(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd606e0f3u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix6(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x5bf2ab6au;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix7(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xe1de75e1u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix8(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x67ca4058u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix9(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xedb60acfu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix10(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x73a1d546u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix11(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf98d9fbdu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix12(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7f796a34u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix13(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x056534abu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix14(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x8b50ff22u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix15(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x113cc999u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix16(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x97289410u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix17(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x1d145e87u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix18(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xa30028feu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix19(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x28ebf375u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix20(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xaed7bdecu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix21(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x34c38863u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix22(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xbaaf52dau;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix23(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x409b1d51u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix24(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xc686e7c8u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix25(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x4c72b23fu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix26(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xd25e7cb6u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix27(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x584a472du;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab3[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix28(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xde3611a4u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab4[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix29(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6421dc1bu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab5[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix30(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xea0da692u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab6[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix31(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x6ff97109u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab7[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix32(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0xf5e53b80u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab0[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix33(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x7bd105f7u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab1[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix34(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x01bcd06eu;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab2[(i + acc) & 95u];
    }
    return acc;
}

uint32_t bshim_096_mix35(uint32_t seed, const uint8_t *buf, size_t len)
{
    uint32_t acc = seed ^ 0x87a89ae5u;
    size_t i;

    if (buf == NULL) {
        return acc;
    }
    for (i = 0; i < len; i++) {
        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];
        acc += bshim_096_tab3[(i + acc) & 95u];
    }
    return acc;
}

int bshim_096_reset(struct bshim_096_state *st)
{
    if (st == NULL) {
        return -1;
    }
    st->head = 0;
    st->tail = 0;
    st->flags = 0x000b99a0u;
    return 0;
}

