#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_MemoryMode[] = {
    120,156,189,87,221,110,27,85,16,158,179,187,118,98,199,78,
    156,166,77,210,38,180,6,84,176,16,196,80,64,189,104,85,
    209,162,34,81,169,41,172,169,218,186,21,139,227,61,137,215,
    177,119,173,221,147,182,70,206,13,169,128,23,224,17,184,224,
    109,120,35,152,111,214,107,59,63,72,220,164,81,118,114,118,
    206,236,156,249,249,102,230,164,77,227,159,28,63,95,85,137,
    146,199,138,200,231,95,69,61,162,190,162,166,34,165,21,249,
    21,218,207,81,252,5,249,57,122,67,212,180,72,91,116,196,
    11,155,158,91,20,150,228,155,60,245,108,225,40,26,22,73,
    59,212,204,209,147,112,153,28,157,167,253,34,197,63,145,82,
    42,84,244,212,159,35,127,158,222,176,118,94,20,68,225,60,
    129,89,20,102,129,252,5,97,22,201,47,201,98,129,134,21,
    210,37,106,150,33,214,92,100,181,31,177,218,37,81,251,55,
    212,250,188,179,76,254,34,196,217,174,103,144,116,32,41,231,
    45,137,22,86,97,83,119,25,244,8,110,241,203,5,106,94,
    16,238,202,44,247,34,53,47,10,247,210,44,119,149,154,171,
    194,93,155,229,174,83,115,93,184,151,103,185,87,168,121,69,
    184,27,212,220,64,100,26,181,11,28,226,224,31,254,169,113,
    136,201,148,152,188,212,113,18,68,161,23,132,187,81,96,97,
    63,15,130,132,180,65,230,198,153,249,26,153,249,139,36,45,
    190,53,206,204,33,145,194,59,81,207,162,67,89,28,90,52,
    172,209,72,81,215,33,223,166,17,31,147,131,73,123,138,142,
    44,122,97,67,224,144,169,195,241,187,74,142,73,211,210,149,
    248,165,154,230,232,48,71,163,28,53,158,142,44,48,246,11,
    20,255,73,63,111,138,210,121,81,106,209,136,169,67,71,14,
    29,230,233,9,11,49,171,91,64,212,213,211,17,123,202,156,
    70,205,97,107,183,103,220,133,43,126,16,135,173,190,54,21,
    94,123,58,60,232,123,15,117,63,138,135,15,35,95,215,138,
    153,84,148,108,13,90,166,227,202,103,54,226,209,31,24,81,
    23,133,218,44,240,98,55,8,125,175,31,249,7,61,109,230,
    161,203,219,13,122,218,243,100,243,219,254,32,138,205,253,56,
    142,98,23,33,21,102,47,106,77,190,64,64,219,189,40,209,
    53,156,38,199,184,80,111,32,189,59,16,141,48,64,76,197,
    199,190,78,218,113,48,48,156,169,84,35,164,161,173,134,28,
    9,73,30,49,169,119,162,190,174,239,235,126,95,199,250,70,
    125,79,247,191,20,242,73,98,90,59,61,93,223,57,8,122,
    126,253,174,251,176,62,24,154,78,20,214,121,63,8,141,230,
    160,244,234,39,194,177,197,34,0,76,242,42,216,243,2,113,
    201,235,232,222,64,199,101,112,175,224,80,85,81,37,149,87,
    182,170,169,50,175,114,252,216,106,211,90,80,219,1,156,106,
    195,81,224,201,153,69,16,210,170,104,223,162,120,19,248,232,
    242,175,66,66,25,37,13,236,89,178,247,61,162,145,114,187,
    54,178,158,50,71,130,41,6,23,75,222,70,154,67,18,96,
    228,168,155,167,20,48,140,179,20,65,241,16,148,197,161,198,
    98,229,14,37,127,16,71,151,161,50,162,49,140,142,108,82,
    97,133,76,17,197,202,220,85,62,240,23,65,98,163,6,243,
    183,5,17,166,19,36,209,171,80,226,142,181,212,78,131,35,
    243,221,240,209,78,87,183,77,114,141,25,207,162,131,106,187,
    21,134,145,169,182,124,191,218,50,38,14,118,14,140,78,170,
    38,170,94,79,106,72,165,187,156,129,106,162,111,56,200,64,
    132,132,51,136,210,23,63,104,27,126,89,145,23,201,66,162,
    13,3,162,19,249,9,243,161,98,79,27,23,70,26,4,57,
    18,67,4,47,30,68,113,60,203,45,242,251,221,204,18,1,
    101,45,159,65,40,209,189,93,83,20,52,182,146,196,19,75,
    192,23,224,65,241,203,86,239,64,139,118,70,144,97,131,176,
    76,109,56,103,232,173,195,141,204,107,113,37,140,66,127,200,
    150,5,237,15,113,232,186,0,176,36,16,188,196,240,155,99,
    154,231,191,121,181,106,181,157,49,232,242,25,240,86,225,50,
    73,218,213,56,243,12,194,35,110,51,53,75,250,132,120,35,
    149,248,30,86,248,216,221,4,121,7,228,42,200,181,204,225,
    243,243,186,124,210,235,155,56,201,18,87,197,41,36,197,206,
    156,242,143,85,211,229,105,53,113,35,108,160,42,44,212,206,
    180,42,28,52,205,248,14,40,139,74,189,217,148,252,128,22,
    141,234,17,101,40,20,134,60,86,211,66,144,16,185,104,154,
    181,249,12,195,46,128,57,139,206,189,25,116,186,200,142,64,
    211,189,156,117,64,15,18,41,40,221,13,168,202,157,17,227,
    42,200,187,231,31,232,41,188,246,78,193,235,22,14,173,140,
    225,85,22,88,21,249,169,88,109,123,28,253,201,68,92,57,
    1,43,96,202,57,3,83,31,96,101,159,246,247,173,193,105,
    236,229,55,51,112,130,97,214,172,51,219,188,24,174,193,135,
    89,32,173,241,96,127,18,174,241,172,182,100,86,127,42,179,
    90,230,189,92,108,210,134,108,75,79,78,23,57,4,99,215,
    166,213,241,12,78,10,76,7,113,244,122,88,141,118,171,70,
    188,69,255,188,125,61,217,186,158,220,226,206,88,189,35,61,
    41,237,141,105,247,139,245,0,221,11,159,222,127,221,214,50,
    251,228,205,243,210,102,229,73,227,242,198,51,149,49,117,9,
    161,180,178,24,75,219,78,76,140,110,125,206,81,46,78,162,
    12,163,31,224,152,162,132,216,86,107,140,159,162,18,91,188,
    180,63,203,173,74,118,249,185,135,176,195,95,77,184,230,186,
    141,212,82,113,2,238,184,31,31,195,200,185,185,224,214,89,
    231,227,12,27,249,41,54,240,216,25,208,127,227,203,137,2,
    60,126,37,100,159,147,60,6,250,164,46,144,238,21,136,255,
    72,82,17,103,204,121,233,43,13,204,118,145,224,118,147,220,
    20,209,116,236,63,160,223,103,202,41,27,206,246,248,46,57,
    59,156,157,73,79,18,216,252,175,1,236,28,111,94,72,75,
    167,149,64,44,237,72,211,10,157,54,252,201,37,144,59,242,
    249,97,104,62,61,192,131,45,47,166,8,194,120,219,80,43,
    214,12,46,62,3,185,49,129,132,202,120,231,98,214,53,250,
    239,41,236,165,221,254,57,206,118,196,218,165,57,137,224,137,
    255,35,82,59,55,39,97,28,38,46,56,238,18,136,149,85,
    60,247,7,190,90,154,161,220,87,210,35,39,44,148,253,54,
    95,73,210,43,53,230,179,251,62,141,187,170,139,203,128,187,
    69,227,73,35,72,78,251,68,168,95,73,167,144,212,186,159,
    131,127,17,54,133,124,169,9,124,57,162,29,133,28,152,208,
    8,18,198,27,50,210,90,38,130,135,199,100,242,19,190,136,
    152,160,31,132,123,167,69,82,190,185,58,213,194,33,107,183,
    218,157,83,210,203,103,137,24,88,187,125,44,17,199,191,90,
    60,181,47,87,182,246,203,86,252,22,58,133,228,234,118,218,
    115,239,96,170,39,247,152,224,14,86,88,42,168,188,133,127,
    0,108,110,121,101,229,216,165,74,193,41,45,20,156,194,156,
    45,35,180,204,64,46,58,133,82,89,21,172,147,207,191,30,
    171,122,17,
};

EmbeddedPython embedded_m5_internal_enum_MemoryMode(
    "m5/internal/enum_MemoryMode.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/enum_MemoryMode.py",
    "m5.internal.enum_MemoryMode",
    data_m5_internal_enum_MemoryMode,
    1619,
    4103);

} // anonymous namespace