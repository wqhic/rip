#include "sim/init.hh"

namespace {

const uint8_t data_m5_defines[] = {
    120,156,141,83,77,111,218,64,16,157,53,73,248,76,76,232,
    177,135,86,61,113,105,44,69,202,45,138,234,24,211,160,0,
    166,216,208,136,182,90,25,60,128,29,27,168,189,164,201,57,
    63,34,127,172,255,167,157,221,64,26,110,93,173,199,111,222,
    236,204,188,29,203,19,216,172,50,61,159,222,3,100,191,9,
    4,180,25,196,0,35,182,197,154,196,200,32,202,65,180,7,
    129,6,184,15,83,13,130,28,224,129,2,85,8,14,182,56,
    191,141,22,182,204,49,4,229,45,174,193,172,8,143,12,70,
    121,85,176,0,81,17,162,18,140,74,128,101,120,164,166,21,
    184,111,189,10,29,66,116,36,249,198,143,83,248,78,58,116,
    24,85,1,117,136,168,232,145,44,148,62,73,55,208,225,221,
    168,6,72,177,10,96,13,206,127,62,1,237,175,223,42,242,
    2,110,253,13,93,44,252,67,171,43,10,4,7,174,205,155,
    118,119,40,170,228,184,46,183,156,78,207,244,90,151,109,162,
    123,162,68,164,103,246,63,219,30,111,185,166,200,145,235,167,
    137,144,83,178,122,220,236,118,29,207,244,108,161,111,10,245,
    28,183,117,195,173,182,99,93,139,252,134,187,30,118,84,163,
    94,223,241,28,203,105,171,154,157,22,199,123,63,89,197,40,
    14,201,189,50,135,148,44,15,92,14,154,226,237,11,99,247,
    155,220,244,188,62,183,111,172,246,160,97,243,43,199,245,66,
    70,113,177,79,102,26,251,51,30,74,84,215,200,100,187,106,
    179,141,218,231,216,107,9,217,174,132,231,3,255,211,85,13,
    79,221,62,57,59,9,23,2,211,133,31,11,77,249,234,194,
    68,175,69,24,139,61,194,10,20,229,84,19,63,21,141,112,
    34,20,237,165,107,84,234,155,126,156,161,26,205,120,29,198,
    129,189,184,83,206,75,89,121,120,178,76,81,245,155,44,147,
    85,24,99,195,23,168,26,205,226,229,152,242,85,6,223,113,
    120,64,157,56,87,157,67,42,69,79,146,169,47,119,139,15,
    234,125,71,197,229,4,50,65,186,178,95,161,152,171,94,114,
    154,117,249,15,252,51,217,5,25,99,190,76,208,184,197,36,
    193,20,79,141,25,38,103,202,124,164,252,113,140,134,82,111,
    152,253,142,177,122,16,243,229,194,160,120,128,211,112,129,217,
    9,49,82,212,121,178,12,214,49,94,200,25,102,53,50,21,
    86,209,190,104,58,43,178,15,76,103,37,118,204,254,2,93,
    157,199,84,
};

EmbeddedPython embedded_m5_defines(
    "m5/defines.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/defines.py",
    "m5.defines",
    data_m5_defines,
    547,
    898);

} // anonymous namespace