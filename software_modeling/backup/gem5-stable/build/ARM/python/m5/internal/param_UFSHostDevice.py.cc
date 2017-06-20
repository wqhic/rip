#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_UFSHostDevice[] = {
    120,156,197,89,95,115,19,201,17,239,217,93,201,150,108,227,
    255,54,96,131,197,191,67,16,176,19,114,132,84,29,33,225,
    224,46,225,170,240,145,213,93,224,124,87,217,91,107,199,242,
    202,210,174,106,119,12,136,216,47,49,149,203,115,170,242,144,
    15,144,135,124,155,124,153,60,39,221,61,187,171,181,37,129,
    171,18,20,108,13,163,222,158,158,233,233,95,255,166,103,93,
    135,228,95,1,63,191,170,0,196,119,12,0,15,127,5,180,
    0,218,2,182,4,8,41,192,91,128,189,2,68,31,131,87,
    128,183,0,91,6,72,3,142,176,99,194,183,6,4,147,60,
    166,8,45,147,37,2,186,101,144,22,108,21,224,121,48,11,
    150,44,194,94,25,162,239,65,8,17,8,120,225,141,129,55,
    14,111,209,58,118,74,108,112,28,72,88,102,97,9,188,9,
    22,150,193,155,228,206,4,116,103,64,78,194,214,20,169,109,
    157,65,179,55,209,236,52,155,253,39,153,245,240,201,34,120,
    103,72,29,215,245,13,105,90,164,201,243,77,179,149,153,116,
    149,179,176,53,151,246,231,115,253,133,92,127,49,215,95,202,
    245,151,115,253,179,185,254,185,92,255,124,174,191,146,235,175,
    230,250,23,114,253,139,185,254,90,174,95,201,245,47,229,250,
    151,115,253,43,185,254,213,92,255,26,247,113,215,230,160,249,
    17,52,175,67,179,10,59,24,200,217,108,135,110,128,52,161,
    121,19,182,110,130,196,223,27,112,132,177,246,230,114,35,126,
    196,35,230,179,17,183,120,196,109,216,186,13,18,127,111,233,
    17,69,168,85,151,16,63,254,191,241,95,85,96,79,77,98,
    243,82,70,177,31,6,142,31,236,132,190,65,207,139,212,16,
    218,234,212,140,37,176,123,68,176,251,7,48,230,60,35,129,
    221,33,160,97,65,190,180,12,56,228,206,161,1,221,42,28,
    8,104,90,224,153,112,128,211,20,104,1,13,1,71,6,124,
    103,146,194,33,182,22,130,227,34,88,74,99,174,201,224,208,
    150,198,224,176,0,7,5,168,189,56,48,72,176,87,130,232,
    239,240,102,149,141,142,179,81,3,14,176,181,224,200,130,195,
    34,60,71,37,20,53,75,228,190,120,113,128,158,162,164,86,
    181,112,181,155,57,119,201,21,207,143,2,183,45,213,2,246,
    157,142,27,185,109,231,235,207,107,191,9,99,245,88,190,244,
    235,178,90,78,53,195,120,189,227,170,93,155,135,154,180,39,
    237,142,98,147,97,32,213,4,118,118,252,192,115,218,161,183,
    223,146,106,156,236,57,59,126,75,58,14,63,124,210,238,132,
    145,250,44,138,194,200,166,109,101,97,43,116,179,17,180,169,
    245,86,24,203,42,205,198,211,216,100,94,145,246,78,135,45,
    210,2,120,185,52,216,147,113,61,242,59,10,163,165,45,146,
    54,89,171,82,156,184,137,107,216,108,236,134,109,185,177,39,
    219,109,25,201,59,27,13,217,190,203,205,237,88,185,219,45,
    185,177,189,239,183,188,141,135,246,211,141,78,87,237,134,193,
    6,62,247,3,37,113,99,90,27,3,182,100,29,213,230,200,
    248,43,191,225,248,236,150,179,43,91,29,25,77,145,244,60,
    77,44,102,196,164,40,10,83,84,197,20,246,10,248,49,197,
    170,49,33,54,125,114,172,78,206,18,174,172,60,146,40,188,
    2,246,12,136,86,9,39,77,252,21,20,88,68,75,141,158,
    25,252,236,183,180,35,90,218,52,41,250,90,120,192,216,66,
    144,161,230,125,10,119,0,12,144,2,52,139,160,129,131,120,
    211,72,138,186,212,162,58,153,49,208,184,5,241,95,1,119,
    24,33,115,0,9,156,142,76,16,193,12,168,50,49,18,74,
    151,112,194,63,50,34,107,85,90,254,38,163,66,237,250,113,
    248,42,224,189,167,62,231,80,13,119,230,89,247,203,237,166,
    172,171,120,13,5,223,132,251,149,186,27,4,161,170,184,158,
    87,113,149,138,252,237,125,37,227,138,10,43,215,226,42,133,
    211,158,77,129,149,217,235,118,82,32,81,208,17,72,250,139,
    231,215,21,126,153,231,47,28,133,88,42,4,197,110,232,197,
    40,39,19,13,169,108,90,164,162,77,14,121,33,140,25,135,
    84,105,122,212,59,131,223,31,166,43,97,96,86,139,41,140,
    98,217,218,81,101,70,164,27,199,14,175,132,228,12,62,50,
    252,210,109,237,75,182,142,40,82,184,32,234,234,53,140,0,
    126,103,201,149,212,115,118,39,8,3,175,139,171,243,235,215,
    105,226,179,12,194,73,134,225,34,66,112,12,219,34,254,95,
    20,75,70,221,74,128,87,76,193,71,52,168,128,67,47,146,
    232,35,16,143,144,114,170,6,115,6,123,196,25,121,153,122,
    52,216,94,165,230,2,53,23,169,89,75,157,254,176,158,79,
    157,244,252,30,205,102,176,187,236,24,5,199,76,29,243,142,
    101,213,185,94,86,33,49,214,40,59,12,202,161,94,118,88,
    68,162,209,3,106,81,149,243,206,132,248,43,162,108,202,34,
    54,70,9,131,208,167,94,47,33,120,155,236,25,114,127,60,
    197,178,77,0,205,163,180,145,67,169,77,17,98,136,218,231,
    82,54,116,72,67,131,211,94,33,83,133,1,251,92,161,230,
    210,104,54,187,7,179,70,31,204,62,161,137,103,18,152,77,
    49,188,202,248,153,49,234,102,18,129,236,148,156,63,1,47,
    194,150,53,0,91,31,81,207,236,247,121,164,176,74,60,253,
    60,7,43,90,156,145,119,104,19,59,221,101,242,35,15,168,
    101,60,240,159,7,203,120,134,27,124,134,255,152,207,112,174,
    3,184,154,211,4,109,50,71,235,78,129,54,100,199,132,165,
    228,108,142,75,216,118,162,240,117,183,18,238,84,20,123,76,
    124,122,255,90,188,126,45,254,4,153,178,242,128,57,74,115,
    165,102,195,72,118,136,205,104,232,103,175,235,146,207,67,254,
    230,56,154,188,28,38,50,39,57,103,17,91,139,180,157,70,
    186,207,76,227,177,138,136,189,71,176,211,229,108,167,105,225,
    95,208,84,101,222,102,83,44,35,142,202,130,215,227,104,206,
    230,138,139,159,226,231,83,218,122,242,89,2,213,247,118,77,
    175,150,29,33,151,236,91,199,176,242,65,221,176,55,208,238,
    215,41,70,138,61,140,208,199,76,65,255,3,112,37,42,224,
    79,64,40,192,96,39,160,207,114,132,194,62,79,234,191,7,
    206,142,1,231,63,243,76,141,206,124,214,64,250,137,239,177,
    170,46,7,190,128,63,231,82,43,61,180,205,164,214,204,31,
    218,86,198,81,12,159,83,29,204,214,113,50,163,208,236,186,
    49,169,105,134,234,101,107,239,16,200,10,68,100,232,15,139,
    165,113,61,137,67,235,249,174,135,36,58,246,86,196,188,145,
    195,199,79,168,185,147,65,67,164,178,15,182,180,53,24,126,
    66,59,250,20,248,150,230,183,120,197,211,99,204,64,199,172,
    100,216,47,164,216,191,147,97,95,242,137,245,150,47,31,212,
    26,20,238,35,67,224,45,22,139,53,186,52,90,32,11,176,
    85,164,44,225,194,90,36,73,36,82,14,163,249,142,29,135,
    188,41,155,122,187,178,136,235,96,82,243,122,4,220,64,241,
    188,223,114,219,219,158,251,224,15,52,17,205,86,79,211,202,
    72,151,62,147,95,58,165,132,24,182,122,254,122,55,117,225,
    229,8,120,225,103,104,55,91,58,103,129,23,214,153,12,190,
    218,149,149,182,108,111,227,253,114,215,239,84,118,90,110,131,
    163,98,38,174,125,153,186,166,56,172,39,139,139,248,38,181,
    97,165,30,6,72,214,251,117,21,70,21,79,226,149,75,122,
    149,219,21,102,250,138,31,87,220,109,124,234,214,149,134,248,
    241,28,229,10,214,141,26,49,23,171,123,175,168,59,162,168,
    58,120,159,246,177,104,63,132,236,88,213,215,188,140,184,185,
    28,215,25,131,39,32,94,166,84,87,115,21,21,26,246,58,
    53,55,96,116,252,254,49,218,125,67,19,208,86,21,197,138,
    81,50,184,148,59,166,248,140,198,198,253,137,250,175,211,36,
    170,126,209,148,164,107,145,52,229,24,221,231,169,45,17,205,
    111,149,83,225,4,183,147,44,156,74,133,103,184,157,102,225,
    76,42,156,229,118,142,133,243,169,112,129,219,69,22,46,165,
    194,101,110,207,178,240,92,42,60,207,237,10,11,87,83,225,
    5,110,47,178,112,45,125,147,86,97,225,37,216,186,76,175,
    109,72,114,133,184,102,236,191,229,26,206,214,17,229,233,219,
    255,41,197,216,247,254,15,43,183,127,14,73,173,49,140,94,
    68,222,173,41,77,47,77,145,94,111,242,62,241,59,148,243,
    131,49,238,212,35,233,42,169,67,180,58,18,71,153,164,244,
    180,63,244,88,163,191,24,127,152,249,116,196,85,86,119,129,
    35,167,111,118,28,57,241,60,56,143,85,185,197,85,249,125,
    170,202,15,120,3,28,67,23,230,61,64,22,178,125,88,198,
    38,144,175,156,1,123,161,139,111,90,157,219,233,200,192,179,
    111,66,190,158,230,199,35,192,1,241,226,95,32,87,244,152,
    98,1,11,232,254,236,35,214,207,249,200,33,44,100,249,54,
    154,96,50,106,255,150,162,182,122,21,242,212,111,223,167,134,
    201,62,227,121,251,151,89,40,86,134,64,178,129,149,20,222,
    214,222,249,28,139,47,253,62,200,175,171,11,67,244,252,182,
    219,144,108,233,221,26,100,139,246,141,191,169,171,67,117,27,
    206,118,107,207,137,253,55,218,232,169,20,201,246,36,219,238,
    9,185,134,28,56,50,80,78,176,223,102,235,239,211,33,195,
    68,202,201,119,117,109,184,62,199,15,121,35,222,101,203,167,
    211,36,251,83,218,126,79,170,42,67,198,118,252,208,193,123,
    70,196,19,188,87,137,108,243,91,223,68,160,174,188,99,68,
    11,121,34,168,119,217,242,105,244,200,248,68,98,60,145,169,
    75,67,198,237,239,196,78,220,10,85,204,214,223,175,69,182,
    233,6,158,73,56,89,153,91,61,217,146,74,14,162,21,69,
    9,144,188,41,242,36,86,113,97,23,175,238,124,25,198,239,
    45,199,25,85,233,243,11,224,191,155,64,76,212,128,165,143,
    40,98,241,179,40,142,253,24,165,98,73,112,101,121,226,111,
    36,122,125,148,198,250,10,216,141,109,62,167,166,179,116,230,
    136,166,21,30,101,62,111,213,166,219,214,239,96,249,13,163,
    77,17,228,247,65,246,245,140,22,232,61,25,223,187,245,219,
    13,100,103,174,122,185,200,181,127,74,114,210,104,223,93,79,
    29,92,215,14,126,234,198,242,215,152,255,6,63,229,40,244,
    43,61,67,12,236,132,81,155,57,160,255,241,147,64,69,143,
    66,108,194,22,191,21,235,215,168,117,99,37,219,76,70,249,
    135,146,146,240,169,108,135,81,247,105,232,73,181,122,226,249,
    67,196,181,237,6,72,47,47,37,213,244,140,174,99,10,73,
    65,175,109,164,90,149,129,107,56,174,219,183,22,173,132,15,
    245,155,121,230,142,254,231,143,90,97,125,79,122,137,206,224,
    237,96,157,199,97,219,69,249,224,89,106,126,58,203,236,137,
    231,94,68,163,22,79,72,99,25,249,110,139,88,111,176,189,
    103,126,168,17,218,183,131,143,253,120,239,9,19,116,178,55,
    131,13,100,106,234,226,144,29,222,252,221,211,212,196,96,175,
    115,138,195,38,105,187,201,42,199,115,156,168,8,252,39,21,
    8,195,217,55,190,110,244,215,94,76,6,145,108,248,8,173,
    136,173,100,35,146,82,132,114,117,40,145,230,71,143,136,60,
    244,21,94,191,105,124,64,244,26,127,143,13,253,21,162,52,
    93,66,34,161,42,197,20,101,172,83,44,115,114,166,100,77,
    78,148,172,210,152,201,47,143,167,196,188,81,182,74,19,147,
    226,116,63,107,72,65,101,99,109,185,36,254,3,231,29,127,
    156,
};

EmbeddedPython embedded_m5_internal_param_UFSHostDevice(
    "m5/internal/param_UFSHostDevice.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_UFSHostDevice.py",
    "m5.internal.param_UFSHostDevice",
    data_m5_internal_param_UFSHostDevice,
    2609,
    8208);

} // anonymous namespace