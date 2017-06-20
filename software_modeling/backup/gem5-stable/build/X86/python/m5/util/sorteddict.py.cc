#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_sorteddict[] = {
    120,156,197,89,223,83,28,199,17,238,217,189,59,184,227,224,
    248,33,16,8,9,159,228,16,131,109,9,69,182,21,69,81,
    20,172,200,198,169,164,72,213,162,4,76,162,186,28,183,3,
    90,184,95,236,46,50,23,163,74,149,209,91,170,236,135,60,
    164,242,144,215,188,230,49,127,94,210,95,207,238,222,30,200,
    150,171,194,42,28,55,244,205,44,51,253,245,215,221,211,51,
    215,160,232,103,148,223,171,85,162,224,88,17,185,252,171,168,
    73,212,82,180,173,168,101,209,182,69,202,181,72,219,180,171,
    200,181,233,37,209,41,209,231,219,57,210,121,114,115,116,96,
    145,31,42,55,143,129,237,2,233,28,185,5,114,135,200,29,
    38,183,72,110,137,220,17,114,203,228,142,146,59,70,110,133,
    220,113,244,156,82,97,123,136,52,63,63,68,167,138,87,152,
    160,53,22,247,135,49,249,218,103,169,129,73,124,228,17,153,
    11,61,253,49,116,243,252,83,228,94,162,83,43,249,60,77,
    238,76,250,243,229,87,252,219,8,121,150,232,84,166,187,238,
    44,185,115,116,247,220,67,140,227,103,41,69,42,144,220,43,
    244,96,224,161,81,163,93,217,232,125,124,7,67,251,163,130,
    146,225,206,147,30,99,85,212,227,167,211,244,7,182,101,133,
    182,199,73,87,24,235,56,63,125,184,165,54,219,108,240,171,
    180,177,116,141,89,240,254,195,63,75,22,75,225,8,55,59,
    94,160,27,97,173,169,119,195,176,220,255,236,123,123,207,194,
    176,196,29,27,29,63,212,238,99,175,17,54,98,50,115,252,
    126,4,50,127,204,100,106,2,135,76,41,168,177,64,44,4,
    27,28,105,97,148,141,180,157,23,202,44,225,85,129,65,195,
    49,179,195,228,66,96,30,13,185,69,88,4,66,9,252,66,
    24,1,203,16,202,224,26,194,40,88,130,48,6,150,33,84,
    96,99,8,227,176,55,132,9,152,6,194,36,252,1,194,20,
    236,5,225,18,177,35,64,96,14,39,69,152,1,191,16,46,
    131,101,8,204,214,53,252,234,43,160,250,165,77,219,243,32,
    28,67,87,65,54,4,126,96,86,132,5,121,120,142,94,50,
    180,183,192,30,58,171,32,6,194,117,210,55,228,129,171,120,
    0,240,223,38,103,99,105,129,141,216,96,251,145,138,44,250,
    11,88,116,28,188,16,157,72,132,132,252,184,205,180,129,172,
    245,112,136,219,90,32,108,24,250,208,177,167,195,122,24,250,
    97,129,229,104,12,243,133,152,48,208,205,221,37,240,37,77,
    176,202,205,202,179,78,75,175,28,232,86,75,251,250,206,202,
    158,110,125,36,205,205,32,172,239,52,245,74,224,55,86,186,
    189,240,89,167,189,194,35,71,161,215,92,49,179,186,204,255,
    45,30,129,203,212,120,209,72,17,128,8,160,12,169,6,254,
    196,111,193,114,153,133,19,5,44,53,65,180,175,224,191,138,
    93,101,67,148,92,23,24,142,13,125,139,152,215,213,205,218,
    129,238,5,166,31,144,66,12,62,175,55,51,129,17,36,48,
    170,152,56,39,48,138,74,72,129,6,249,24,200,39,44,244,
    70,4,2,235,190,217,254,128,114,76,205,65,137,252,85,82,
    74,161,223,130,170,251,57,60,115,42,36,191,80,41,236,138,
    54,182,82,176,49,177,4,91,180,188,128,14,199,184,227,99,
    230,210,219,57,10,245,39,190,223,241,157,124,76,37,244,14,
    135,17,189,161,246,7,77,228,140,196,166,185,64,251,96,97,
    209,106,17,83,66,85,178,108,53,162,70,213,44,44,132,197,
    237,232,45,22,186,71,20,153,231,68,224,114,204,191,176,34,
    206,79,44,154,227,174,3,155,252,15,41,180,100,88,209,87,
    138,56,43,241,88,108,20,113,3,64,148,92,196,62,230,84,
    226,158,95,233,158,216,67,158,233,251,5,235,39,138,122,109,
    87,31,95,180,5,250,154,232,195,91,152,117,88,220,99,82,
    77,169,74,134,6,144,56,144,228,203,139,139,5,156,9,0,
    75,144,59,147,104,166,50,224,60,181,180,62,252,240,245,144,
    111,39,169,106,95,165,32,243,78,93,69,203,249,107,118,35,
    141,86,2,64,82,153,167,18,72,88,225,255,6,179,25,222,
    79,195,44,168,225,172,96,170,55,13,211,153,230,73,86,95,
    143,238,167,223,134,46,140,189,247,212,120,238,123,226,170,28,
    119,131,64,141,235,230,6,48,74,112,54,117,251,141,81,154,
    202,26,225,167,105,204,211,42,151,45,230,190,251,206,190,73,
    114,81,37,252,250,28,208,184,152,72,246,173,27,44,244,74,
    192,244,71,162,205,246,68,178,109,93,195,182,213,86,180,117,
    118,47,198,94,226,32,221,75,167,160,184,104,221,135,35,187,
    69,186,219,170,196,187,202,249,66,232,58,73,9,196,53,35,
    231,84,83,45,38,37,196,99,179,197,206,108,8,9,235,82,
    52,245,203,212,165,47,23,131,23,203,82,149,188,95,77,54,
    115,176,18,96,226,57,146,153,158,86,176,69,187,146,172,103,
    126,167,14,109,172,102,2,55,0,236,69,255,126,117,209,95,
    55,232,165,220,66,115,235,182,108,199,188,11,183,46,216,46,
    1,242,210,131,61,221,214,199,93,255,225,231,20,213,85,5,
    101,22,199,170,251,29,175,45,233,11,69,0,84,8,50,99,
    201,132,84,205,215,93,191,86,219,162,164,58,226,125,32,14,
    165,1,166,66,19,75,166,222,179,80,181,70,85,209,153,130,
    79,98,3,103,65,83,129,161,4,3,144,90,77,220,226,108,
    232,204,103,224,126,111,241,36,191,239,3,154,234,215,173,73,
    126,88,56,3,8,167,188,239,133,134,235,215,52,26,107,0,
    205,69,3,169,146,212,150,49,144,241,126,12,169,24,200,60,
    197,69,73,84,122,127,43,10,83,100,214,249,44,129,228,209,
    104,234,186,111,48,100,150,6,144,155,26,125,245,71,251,101,
    119,114,126,152,161,56,79,167,235,233,83,149,104,158,156,116,
    194,94,87,167,14,13,210,127,209,17,129,117,26,157,110,111,
    175,175,116,249,21,54,31,78,108,190,144,86,83,54,137,236,
    194,21,250,160,92,63,136,243,6,245,85,75,236,217,63,91,
    26,119,72,89,50,201,49,77,47,48,199,126,228,24,62,120,
    29,233,12,147,12,230,52,107,180,255,7,189,157,119,208,92,
    203,212,190,121,99,145,86,112,248,93,138,142,14,40,250,10,
    235,194,168,217,122,130,51,102,116,24,80,50,206,110,141,106,
    148,174,143,175,68,62,250,216,108,131,38,207,205,241,54,88,
    162,205,84,106,232,123,238,96,112,29,92,180,214,152,234,11,
    58,155,204,176,104,46,214,27,44,31,87,19,189,167,251,25,
    1,170,239,90,244,125,180,119,222,207,192,228,112,189,47,7,
    148,207,69,138,39,149,88,147,68,77,86,238,160,72,254,66,
    170,246,148,204,102,14,130,209,232,19,58,225,218,243,17,153,
    100,141,221,84,161,62,61,124,34,61,118,191,167,45,94,133,
    206,124,180,239,114,9,115,249,250,169,26,60,128,20,98,239,
    91,239,180,181,148,142,114,56,112,112,61,227,188,151,216,40,
    151,48,12,173,25,187,31,74,33,175,219,174,41,58,218,141,
    230,81,224,61,215,89,148,26,156,187,252,122,123,79,255,25,
    179,142,137,25,203,106,210,42,243,169,101,210,154,180,26,113,
    105,8,133,58,48,232,187,240,134,183,227,35,183,128,255,58,
    114,103,91,124,194,22,119,158,58,239,16,63,26,4,11,169,
    238,239,5,146,140,14,190,128,152,133,147,72,78,149,92,39,
    56,255,210,119,151,57,149,160,203,197,232,112,230,60,94,62,
    143,110,90,208,37,0,141,211,191,22,163,115,7,205,7,25,
    185,127,92,145,182,4,216,55,231,128,197,181,226,111,226,228,
    115,166,86,252,90,189,182,186,2,136,163,46,151,39,250,108,
    153,152,32,187,232,152,190,203,147,252,181,143,101,170,95,247,
    38,49,141,91,161,94,57,78,64,27,155,237,121,62,95,145,
    156,175,150,229,90,208,138,198,30,156,57,105,9,69,175,56,
    42,154,162,123,183,238,53,59,59,251,89,248,31,87,219,174,
    222,173,31,53,195,191,81,234,0,86,70,245,101,165,224,173,
    1,222,26,224,45,124,71,33,188,217,190,193,128,109,1,252,
    40,2,28,220,167,175,40,78,103,176,202,86,234,58,132,18,
    175,20,86,177,90,183,211,53,7,194,87,157,156,239,100,192,
    235,79,120,146,127,244,147,140,205,217,122,140,225,23,248,117,
    254,222,247,183,48,193,124,20,134,128,99,182,202,168,152,222,
    108,95,99,252,150,224,191,15,252,140,200,181,226,171,189,203,
    180,197,22,227,244,130,228,28,91,143,3,118,67,12,98,39,
    6,145,211,6,155,65,142,148,203,247,171,80,212,235,180,235,
    126,175,234,5,85,221,234,134,61,201,224,230,150,1,182,18,
    42,127,137,59,79,115,73,60,17,91,84,192,101,123,234,144,
    239,28,34,109,255,73,241,213,48,155,113,84,204,56,110,53,
    98,31,74,142,135,88,252,68,190,206,227,220,117,60,11,75,
    60,126,58,78,47,114,240,17,228,178,28,61,56,28,167,205,
    19,59,9,16,209,57,31,251,72,163,25,200,223,64,31,202,
    214,36,89,84,202,16,55,19,136,176,241,174,223,105,161,158,
    254,87,18,39,86,81,48,174,47,253,32,137,212,90,187,222,
    210,181,154,240,81,171,181,58,238,81,147,63,58,48,145,83,
    138,159,234,250,157,174,246,195,158,220,229,27,18,47,161,193,
    225,198,108,193,178,25,227,86,194,236,205,18,14,112,10,57,
    170,202,49,79,14,75,14,174,226,157,31,162,89,70,131,29,
    80,170,61,41,158,164,8,113,110,82,180,125,127,90,111,6,
    90,182,1,7,55,185,206,71,104,144,211,156,123,177,163,56,
    114,13,54,34,6,174,7,65,75,179,73,92,103,117,192,160,
    23,24,120,112,75,232,24,60,36,220,106,20,173,162,93,177,
    42,197,98,97,224,101,23,115,209,203,142,94,44,79,150,77,
    95,185,80,228,31,91,69,214,111,213,189,118,173,118,190,10,
    127,106,28,110,237,51,19,183,242,149,105,168,40,73,92,28,
    160,102,204,30,24,203,13,140,229,7,198,10,201,88,42,141,
    15,37,124,188,147,80,177,156,240,241,110,76,138,73,247,63,
    207,40,22,93,47,232,54,235,189,127,83,146,210,242,106,68,
    77,68,111,137,146,99,15,119,147,34,106,47,31,139,251,94,
    46,22,119,60,43,22,255,228,93,137,181,21,255,8,242,38,
    222,171,251,50,92,151,138,82,196,61,111,40,22,107,222,112,
    44,62,147,182,231,220,22,11,33,51,201,230,109,190,84,54,
    183,165,98,14,73,87,146,169,62,70,179,54,176,168,113,207,
    123,137,203,46,198,30,44,197,218,19,255,72,75,29,35,75,
    61,207,194,89,197,193,30,152,128,126,136,75,20,41,200,102,
    172,153,191,151,85,177,120,83,149,172,10,191,243,156,16,74,
    214,56,239,32,248,59,207,239,33,85,194,203,42,88,35,214,
    162,250,47,205,251,69,19,
};

EmbeddedPython embedded_m5_util_sorteddict(
    "m5/util/sorteddict.py",
    "/home/kemmere2/gem5/gem5-stable/src/python/m5/util/sorteddict.py",
    "m5.util.sorteddict",
    data_m5_util_sorteddict,
    2439,
    8444);

} // anonymous namespace