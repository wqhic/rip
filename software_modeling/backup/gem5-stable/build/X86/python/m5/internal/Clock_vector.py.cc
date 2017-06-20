#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_Clock_vector[] = {
    120,156,197,91,107,136,36,87,21,62,85,253,152,237,222,153,
    157,153,157,217,153,125,101,183,243,216,164,19,205,78,140,121,
    105,194,38,49,198,144,168,27,83,19,217,205,36,90,233,233,
    186,51,83,51,221,85,157,170,154,221,237,56,171,196,89,141,
    79,84,124,160,34,34,62,144,128,32,8,130,32,8,130,32,
    8,66,64,16,4,65,80,4,65,240,159,32,8,234,249,206,
    173,234,174,126,172,100,211,211,181,59,51,103,111,87,221,190,
    231,126,231,126,247,220,123,78,221,170,83,252,175,192,127,143,
    84,136,194,187,12,34,135,127,13,106,16,53,13,90,49,200,
    80,6,57,243,180,85,160,224,30,114,10,116,133,104,197,36,
    101,210,46,23,114,244,188,73,222,164,124,167,72,141,156,92,
    49,168,93,38,149,167,149,2,157,243,102,41,175,138,180,85,
    166,224,69,50,12,195,51,232,188,51,65,206,62,186,194,173,
    115,161,36,13,238,35,92,44,203,197,18,57,251,229,98,153,
    156,73,41,236,167,246,12,169,73,90,153,66,181,149,3,220,
    236,29,220,236,180,52,251,58,154,117,248,206,33,114,14,160,
    58,247,235,57,212,204,163,166,232,155,150,86,102,200,145,86,
    214,24,207,108,167,226,44,169,28,109,30,164,149,131,164,248,
    119,150,118,25,178,115,48,169,56,215,169,56,39,21,231,105,
    101,158,20,255,206,233,138,69,90,174,46,176,245,220,255,242,
    191,42,91,143,162,73,22,23,84,16,186,190,103,187,222,154,
    239,154,184,95,132,128,173,235,16,19,177,209,31,131,209,95,
    35,177,184,99,198,70,191,76,220,176,1,155,54,76,186,44,
    133,203,38,181,171,180,99,208,102,158,156,28,237,176,154,2,
    58,176,110,208,174,73,47,228,80,225,50,203,60,155,230,4,
    229,35,109,241,77,49,141,110,105,130,46,23,104,167,64,203,
    231,119,76,92,216,42,81,240,3,122,249,184,52,186,79,26,
    53,105,135,101,158,118,243,116,185,72,231,184,18,95,218,44,
    1,190,113,126,135,145,242,149,229,106,158,123,123,54,5,23,
    80,28,55,240,106,77,21,77,113,217,126,172,225,215,183,236,
    11,170,30,249,65,181,156,84,241,195,211,173,90,180,97,201,
    119,114,48,70,179,21,73,91,190,167,162,253,92,88,115,61,
    199,110,250,206,118,67,69,251,208,144,189,230,54,148,109,203,
    205,39,155,45,63,136,30,15,2,63,176,96,79,185,216,240,
    107,157,111,192,154,245,134,31,170,42,180,137,26,11,205,71,
    168,189,214,146,22,209,1,233,39,190,236,168,176,30,184,173,
    136,135,73,183,136,218,104,173,138,1,18,17,190,143,197,210,
    134,223,84,75,91,170,217,84,129,186,123,105,93,53,239,21,
    113,103,24,213,86,27,106,105,117,219,109,56,75,231,31,184,
    111,169,213,142,54,124,111,137,239,187,94,164,216,34,141,165,
    180,45,78,243,253,131,104,245,162,187,110,187,130,199,222,80,
    141,150,10,96,182,240,40,52,26,51,198,164,81,52,114,70,
    213,152,226,82,129,255,114,198,113,115,191,113,214,5,162,58,
    80,130,73,249,52,119,48,160,6,109,153,20,28,7,51,54,
    249,215,192,80,50,63,150,113,207,148,123,207,192,20,250,234,
    102,14,227,173,47,238,8,155,152,86,92,243,33,12,176,71,
    66,137,2,109,22,73,83,133,25,166,185,19,180,33,185,58,
    154,49,185,241,60,133,95,37,54,45,147,100,135,98,2,237,
    230,200,240,102,40,42,99,6,242,213,5,86,248,113,225,224,
    114,21,221,63,43,116,136,54,220,208,191,232,137,209,81,150,
    89,179,204,150,249,64,251,233,213,77,182,87,120,146,47,60,
    231,111,87,234,53,207,243,163,74,205,113,42,181,40,10,220,
    213,237,72,133,149,200,175,156,10,171,24,71,107,54,97,84,
    167,189,118,43,97,16,70,155,25,164,63,56,110,61,226,15,
    115,242,65,70,33,84,17,179,97,195,119,66,190,142,38,214,
    85,100,161,147,17,140,236,75,71,132,44,54,170,66,61,215,
    59,192,159,31,77,122,34,140,172,22,19,254,132,170,177,22,
    149,133,138,181,48,180,165,39,184,46,172,67,195,23,106,141,
    109,37,173,51,125,34,238,16,138,186,15,227,228,221,97,96,
    72,32,11,14,207,247,156,54,119,203,173,223,6,141,135,133,
    125,147,194,191,67,204,189,9,150,69,254,191,104,44,152,245,
    124,204,184,98,194,58,120,188,136,100,204,141,120,216,153,129,
    187,236,93,170,166,184,7,129,34,115,240,38,148,240,101,235,
    56,196,13,16,39,32,78,38,104,199,4,121,170,31,242,253,
    80,99,10,78,65,132,225,200,37,136,156,158,121,116,164,59,
    143,216,249,45,99,62,152,152,53,221,249,144,135,163,12,206,
    64,114,85,153,105,57,10,159,133,91,198,188,145,198,48,69,
    152,236,40,117,167,128,216,199,154,1,238,125,9,123,45,80,
    50,205,203,245,20,47,45,12,141,144,210,58,146,56,62,27,
    53,52,29,173,99,104,170,48,196,192,21,136,27,199,108,229,
    46,177,214,7,136,245,32,52,206,196,196,154,18,66,149,249,
    111,198,172,231,98,211,119,150,192,185,62,66,129,77,249,33,
    108,186,21,165,220,32,216,108,136,20,67,124,79,138,72,232,
    149,153,70,114,150,11,237,69,0,72,83,104,145,151,241,115,
    222,34,175,204,166,172,204,119,201,202,44,171,187,236,80,180,
    19,206,137,31,214,133,2,44,177,150,163,133,120,197,13,75,
    44,91,129,127,169,93,241,215,42,145,64,133,207,124,232,84,
    120,250,84,248,32,123,195,202,25,241,67,218,31,106,143,23,
    168,22,60,22,190,250,248,165,186,146,197,78,62,217,182,118,
    80,182,56,43,59,94,68,153,77,135,96,71,51,49,176,184,
    234,48,10,224,161,199,105,226,114,199,196,232,241,83,208,81,
    22,251,230,140,69,102,78,217,144,142,216,218,33,203,6,74,
    238,242,223,187,96,115,128,85,132,205,170,181,172,187,41,8,
    128,197,122,107,15,59,198,211,127,107,137,27,252,96,194,138,
    98,151,21,248,203,37,252,126,149,100,71,105,208,39,9,227,
    206,195,27,243,187,51,29,48,208,115,168,254,97,146,137,48,
    100,85,23,95,178,140,149,92,106,176,139,9,239,151,170,122,
    145,127,138,62,149,154,69,201,82,156,139,247,140,233,165,56,
    223,241,67,66,152,55,180,220,230,123,29,22,198,100,163,22,
    162,154,246,66,221,137,217,245,240,157,253,30,123,225,49,177,
    103,159,110,221,70,71,94,232,114,7,139,217,49,99,206,76,
    49,226,109,16,119,119,200,96,36,215,246,190,79,39,233,234,
    11,174,173,125,251,243,80,156,151,174,78,79,200,174,66,239,
    127,158,228,38,107,220,76,135,231,133,132,231,127,233,240,92,
    201,66,116,69,226,6,72,19,35,188,107,26,28,126,241,174,
    11,209,78,158,84,129,86,138,164,38,176,189,71,80,85,72,
    130,170,98,28,84,117,227,176,73,41,151,164,60,37,113,24,
    33,120,138,227,176,233,36,14,227,8,106,74,10,179,113,168,
    197,65,83,28,92,205,33,184,66,97,62,14,174,86,56,28,
    59,40,133,133,56,138,90,89,68,28,137,194,97,4,107,40,
    28,33,103,65,10,71,201,89,148,194,49,76,97,44,42,50,
    135,146,63,241,172,240,195,61,203,178,140,223,89,61,178,29,
    86,106,194,65,92,26,167,199,2,231,30,106,212,154,171,78,
    237,204,58,52,64,77,61,153,243,102,210,231,153,116,159,49,
    95,141,171,117,91,62,222,155,244,253,194,56,189,213,125,220,
    96,167,207,50,55,29,191,46,46,234,217,13,85,105,170,230,
    42,71,175,27,110,171,178,214,168,173,203,56,228,98,76,79,
    39,152,34,97,94,255,182,38,188,3,210,175,212,125,143,23,
    141,109,232,171,56,138,227,58,229,84,238,172,200,138,83,113,
    195,74,109,149,239,214,234,145,158,127,189,158,67,118,203,181,
    96,61,148,141,241,214,69,20,199,61,142,54,135,233,46,71,
    6,46,245,174,235,61,236,67,191,156,46,233,164,235,133,142,
    19,57,78,227,93,96,48,100,205,14,205,146,142,117,104,54,
    165,135,100,211,72,54,163,105,142,73,112,59,63,224,94,108,
    9,69,178,233,62,188,161,223,181,174,142,101,59,11,100,122,
    178,116,80,232,197,109,16,200,220,32,16,215,171,7,169,61,
    11,190,225,141,147,51,160,2,116,6,41,190,236,25,24,71,
    165,193,88,103,198,59,50,130,5,42,183,71,198,178,56,4,
    11,199,245,53,175,174,82,120,238,29,51,30,204,231,68,237,
    165,145,49,13,153,53,234,165,237,90,35,67,64,240,49,162,
    243,35,67,188,211,53,56,128,33,84,171,251,173,118,38,243,
    95,88,6,109,31,221,115,12,158,186,20,101,135,1,218,94,
    25,13,195,144,105,98,11,10,219,206,6,71,156,24,19,141,
    87,246,28,75,43,80,23,92,127,59,204,14,75,162,241,213,
    145,103,251,194,32,156,154,115,161,207,129,141,219,33,35,168,
    138,181,126,102,100,68,135,134,145,77,189,196,84,203,206,129,
    21,133,111,80,250,249,241,224,241,212,117,192,3,165,95,28,
    25,207,80,103,224,114,236,221,131,104,220,148,139,247,192,162,
    246,203,99,194,20,110,175,94,15,76,162,246,107,227,240,12,
    182,157,245,48,73,10,76,107,253,6,209,64,6,18,136,158,
    24,134,232,115,195,92,247,80,68,253,131,244,142,76,16,137,
    214,111,209,224,74,212,19,123,237,116,99,47,233,81,134,107,
    165,203,119,109,251,219,221,30,86,197,58,157,244,162,228,110,
    116,178,167,21,248,45,21,68,109,157,88,67,2,220,58,13,
    113,123,143,11,115,84,67,69,202,238,181,127,52,67,157,252,
    191,163,56,66,246,219,182,29,155,136,191,96,219,18,69,89,
    15,67,60,10,241,24,196,227,16,79,64,60,9,241,94,136,
    247,67,60,13,241,12,196,50,4,178,147,214,57,136,231,32,
    144,123,178,94,232,177,222,152,66,191,123,184,193,53,180,12,
    75,21,141,99,102,201,44,26,37,163,100,150,114,147,252,83,
    186,218,143,25,63,71,71,59,250,145,242,96,62,204,49,222,
    64,62,76,31,68,136,179,98,197,36,13,54,145,164,193,228,
    228,1,10,37,73,134,233,12,89,41,201,144,233,76,216,100,
    146,9,155,74,50,97,7,146,76,216,116,146,9,155,73,50,
    97,179,73,38,236,96,146,9,155,75,50,97,243,73,38,236,
    80,146,9,91,72,50,97,139,73,38,236,112,146,9,59,66,
    206,225,36,55,118,36,206,141,57,71,165,112,156,156,99,82,
    184,129,156,227,82,56,65,206,13,82,56,73,206,9,41,84,
    200,57,41,133,27,201,169,72,225,38,114,110,148,194,205,228,
    220,36,133,91,200,185,89,10,167,200,185,69,10,183,146,186,
    141,54,171,180,114,59,57,167,228,202,29,72,200,225,177,203,
    72,9,185,113,175,202,146,32,249,62,237,101,30,206,186,63,
    203,46,91,15,80,252,152,224,106,57,184,107,220,155,31,234,
    155,61,226,197,224,103,178,243,156,137,198,31,210,255,241,237,
    229,206,200,236,246,101,215,234,148,145,155,23,71,248,218,144,
    78,94,131,185,15,247,155,219,70,194,255,101,21,248,89,197,
    117,250,185,112,71,233,143,70,195,51,64,31,219,94,245,253,
    70,182,65,170,214,248,227,209,144,204,15,34,105,40,47,43,
    32,122,253,22,133,63,73,225,72,63,241,19,28,115,212,187,
    105,211,79,239,6,209,28,25,68,179,174,162,176,225,214,17,
    5,117,211,232,134,204,63,200,205,113,194,155,164,248,48,66,
    220,131,159,246,141,213,181,111,76,135,0,12,187,0,179,219,
    155,106,100,93,213,63,27,211,232,241,214,110,96,244,172,45,
    136,70,38,8,187,250,127,62,242,216,13,113,130,220,60,47,
    3,205,76,135,110,127,2,76,107,254,197,56,112,49,229,175,
    19,174,142,230,95,142,3,87,120,221,112,117,52,255,138,70,
    242,247,51,253,160,90,126,43,27,95,15,227,179,178,95,167,
    250,255,230,210,13,115,253,16,106,173,150,242,156,140,147,92,
    90,233,111,70,27,141,131,253,80,84,179,21,101,244,212,65,
    30,157,64,221,111,71,195,48,219,143,33,116,95,206,230,193,
    169,62,83,202,218,94,31,153,83,131,32,46,214,90,41,70,
    141,57,218,209,72,88,229,239,246,152,79,171,106,221,245,178,
    227,147,168,251,253,30,123,40,204,237,204,60,20,43,251,195,
    104,253,31,112,79,65,134,131,0,207,164,245,253,113,143,103,
    117,144,217,48,96,46,64,219,159,246,120,46,212,27,170,150,
    81,124,175,95,183,96,117,127,30,13,195,209,126,12,235,56,
    200,215,224,98,118,185,10,244,178,71,237,95,71,195,52,16,
    59,243,166,192,94,173,213,183,50,124,40,26,107,252,91,31,
    146,107,223,35,14,46,224,65,45,84,25,238,14,101,21,135,
    206,191,247,97,73,14,144,11,150,119,119,177,48,16,253,194,
    212,188,36,150,146,131,251,120,93,235,156,119,148,242,60,253,
    112,4,251,97,28,193,222,145,131,180,182,169,79,97,119,19,
    80,5,74,59,107,79,93,180,211,54,208,233,66,28,200,176,
    112,226,45,21,184,193,24,114,119,156,233,42,60,86,248,7,
    81,114,206,117,218,200,25,243,198,212,40,207,182,122,217,186,
    29,110,104,186,102,183,223,148,195,237,137,222,127,238,177,91,
    92,11,124,47,163,67,34,224,141,168,251,215,104,24,6,22,
    167,236,220,7,22,39,104,251,119,10,193,155,78,120,12,70,
    50,97,232,174,123,169,25,115,38,11,122,73,56,35,154,255,
    67,163,58,196,193,221,143,146,120,32,59,143,40,91,32,81,
    106,24,123,142,198,245,66,21,68,25,163,209,74,243,41,52,
    111,206,151,13,228,122,217,76,42,184,144,245,249,157,88,235,
    132,177,183,219,136,122,173,85,171,187,89,69,207,216,70,36,
    26,203,67,144,244,60,157,191,190,39,163,167,140,248,41,90,
    245,45,148,126,48,111,125,8,66,30,197,119,159,194,227,177,
    146,60,241,177,20,4,14,194,91,56,249,109,225,124,181,133,
    83,202,214,75,16,104,208,194,177,88,235,34,68,155,146,37,
    255,50,196,199,32,94,129,216,133,248,4,4,78,160,89,159,
    134,248,44,4,142,59,89,95,128,248,18,132,28,6,248,10,
    4,206,163,88,95,135,248,38,4,142,62,88,56,93,96,125,
    7,226,187,61,115,51,62,42,208,179,251,176,81,227,197,30,
    187,142,201,184,53,110,240,123,104,25,175,100,21,141,99,70,
    209,196,131,251,107,250,153,232,127,176,95,50,196,253,247,189,
    22,175,97,96,232,244,219,66,237,208,194,21,107,186,99,14,
    125,216,47,62,95,129,145,149,93,195,217,90,83,191,132,43,
    111,154,90,55,67,224,113,181,117,91,103,216,145,117,151,87,
    180,244,171,111,188,155,147,87,17,228,205,3,235,237,16,56,
    164,16,225,99,223,145,24,28,198,8,56,214,12,249,130,24,
    99,48,131,159,174,50,238,241,208,111,157,232,119,245,206,32,
    107,26,226,169,49,94,217,45,77,151,120,108,240,178,120,206,
    40,243,94,48,159,155,156,41,229,39,247,151,242,165,137,156,
    188,119,57,101,204,153,229,124,105,255,194,59,75,70,217,92,
    216,42,25,255,3,51,56,132,209,
};

EmbeddedPython embedded_m5_internal_Clock_vector(
    "m5/internal/Clock_vector.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/Clock_vector.py",
    "m5.internal.Clock_vector",
    data_m5_internal_Clock_vector,
    3401,
    16894);

} // anonymous namespace