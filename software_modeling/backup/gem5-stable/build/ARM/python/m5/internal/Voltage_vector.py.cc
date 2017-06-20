#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_Voltage_vector[] = {
    120,156,197,91,107,136,36,87,21,62,85,253,152,237,222,153,
    157,217,153,217,153,221,157,201,110,231,177,73,103,53,59,49,
    38,70,77,216,24,99,12,137,100,99,106,162,155,76,162,149,
    154,174,59,51,53,211,93,213,169,170,217,221,142,179,74,156,
    213,248,68,197,7,42,34,226,3,9,8,130,32,8,130,32,
    8,130,32,4,4,65,16,4,69,16,4,255,9,130,160,158,
    239,84,85,63,166,107,37,187,61,85,187,211,125,246,118,245,
    237,123,238,119,238,119,207,189,231,212,173,6,197,255,74,252,
    126,87,141,40,184,91,35,178,249,165,81,147,168,165,209,138,
    70,154,210,200,158,165,173,18,249,247,146,93,162,43,68,43,
    58,41,157,118,185,80,160,231,117,114,199,229,55,101,106,22,
    228,138,70,157,42,169,34,173,148,232,188,123,152,138,170,76,
    91,85,242,95,36,77,211,92,141,158,181,199,200,62,64,87,
    184,117,46,84,164,193,3,132,139,85,185,88,33,251,160,92,
    172,146,61,46,133,131,212,153,34,53,78,43,19,168,182,114,
    136,155,61,205,205,78,74,179,175,163,89,155,191,57,66,246,
    33,84,231,126,61,135,154,69,212,20,125,147,210,202,20,217,
    210,202,26,227,57,220,173,120,152,84,129,54,167,105,101,154,
    20,191,14,211,46,67,182,167,147,138,51,221,138,51,82,113,
    150,86,102,73,241,107,38,170,88,166,229,250,28,91,207,249,
    47,255,171,179,245,40,28,103,113,65,249,129,227,185,166,227,
    174,121,142,142,239,203,16,176,117,3,98,44,54,250,35,48,
    250,107,36,22,183,245,216,232,151,137,27,214,96,211,166,78,
    151,165,112,89,167,78,157,118,52,218,44,146,93,160,29,86,
    83,66,7,214,53,218,213,233,133,2,42,92,102,89,100,211,
    156,160,98,24,89,124,83,76,19,181,52,70,151,75,180,83,
    162,229,103,119,116,92,216,170,144,255,3,122,121,81,26,61,
    32,141,234,180,195,178,72,187,69,186,92,166,243,92,137,47,
    109,86,0,95,123,118,135,145,242,149,229,122,145,123,123,174,
    15,46,160,216,142,239,90,45,21,78,114,217,252,160,215,12,
    173,117,101,94,80,141,208,243,235,213,164,146,23,156,105,91,
    225,134,33,191,42,192,28,173,118,40,173,121,174,10,15,114,
    97,205,113,109,179,229,217,219,77,21,30,64,83,230,154,211,
    84,166,41,95,62,222,106,123,126,248,168,239,123,190,1,139,
    202,197,166,103,117,127,1,123,54,154,94,160,234,208,38,106,
    12,52,31,162,246,90,91,90,68,7,164,167,248,177,173,130,
    134,239,180,67,30,168,168,69,212,70,107,117,12,145,136,224,
    28,139,165,13,175,165,150,182,84,171,165,124,117,207,210,186,
    106,221,39,226,174,32,180,86,155,106,105,117,219,105,218,75,
    15,27,79,46,181,59,225,134,231,46,241,247,142,27,42,182,
    73,115,105,208,26,103,184,198,52,218,189,232,172,155,142,32,
    50,55,84,179,173,252,9,92,61,14,157,218,148,54,174,149,
    181,130,86,215,38,184,84,226,119,65,91,212,15,106,231,28,
    96,106,0,39,216,84,236,231,15,6,85,163,45,157,252,69,
    176,99,147,95,26,134,147,57,178,140,239,116,249,238,105,24,
    35,186,186,89,192,152,71,23,119,132,81,76,45,174,249,32,
    6,217,37,161,69,137,54,203,20,209,133,89,22,241,199,239,
    64,114,117,52,163,115,227,69,10,190,74,108,92,38,202,14,
    197,36,218,45,144,230,78,81,88,197,44,228,171,115,172,240,
    227,194,195,229,58,186,127,78,8,17,110,56,129,119,209,21,
    179,163,44,51,103,153,45,243,254,206,83,171,155,108,175,224,
    36,95,120,206,219,174,53,44,215,245,194,154,101,219,53,43,
    12,125,103,117,59,84,65,45,244,106,167,130,58,70,210,56,
    156,112,170,219,94,167,157,112,8,227,205,28,138,62,216,78,
    35,228,15,51,242,65,70,33,80,33,243,97,195,179,3,190,
    142,38,214,85,104,160,147,33,140,236,73,71,132,46,38,170,
    66,61,215,59,196,159,31,78,122,34,156,172,151,19,6,5,
    170,185,22,86,133,140,86,16,152,210,19,92,23,222,161,225,
    11,86,115,91,73,235,76,160,144,59,132,98,212,135,108,153,
    119,20,40,18,208,130,196,245,92,187,195,29,115,26,119,64,
    231,81,225,223,184,48,240,8,179,111,140,101,153,255,47,107,
    115,122,163,24,115,174,156,240,14,126,47,36,25,117,45,30,
    120,230,224,46,251,152,186,46,78,66,192,200,60,188,5,37,
    252,216,88,132,184,9,226,4,196,201,4,111,102,160,39,246,
    130,190,31,138,116,65,42,152,48,36,133,4,147,61,48,151,
    142,245,230,18,59,193,101,204,9,29,51,167,55,39,138,112,
    152,254,89,72,174,42,179,173,64,193,51,112,207,152,59,210,
    24,166,9,19,30,165,222,52,16,11,25,83,64,126,32,97,
    176,1,90,246,115,115,189,143,155,6,6,71,136,105,28,75,
    220,159,137,26,17,37,141,5,52,85,74,49,113,13,226,230,
    204,237,220,35,215,250,16,185,30,128,206,169,152,92,19,66,
    170,42,191,167,244,70,33,54,126,119,49,156,217,67,42,48,
    170,152,194,168,219,81,42,12,195,205,139,76,49,200,247,246,
    145,9,253,210,251,177,160,3,157,121,64,232,167,209,60,47,
    233,231,221,121,94,165,117,89,165,239,150,85,90,86,122,217,
    173,68,206,184,32,254,56,42,148,96,139,181,2,205,197,171,
    111,80,97,217,246,189,75,157,154,183,86,11,5,44,124,231,
    131,167,130,51,167,130,7,216,43,214,206,138,63,138,252,98,
    228,249,124,213,134,231,194,79,31,189,212,80,178,236,201,39,
    211,140,28,149,41,78,203,140,151,83,102,212,17,88,82,79,
    76,44,46,59,8,125,120,234,108,141,92,237,26,25,125,126,
    2,90,170,98,225,130,54,207,236,169,106,210,21,51,114,205,
    178,157,146,111,249,253,110,88,29,112,21,97,235,106,44,71,
    29,21,12,64,99,188,121,128,33,89,33,48,150,184,201,15,
    36,204,40,247,152,129,119,33,97,249,171,36,59,76,141,62,
    73,24,123,30,226,152,229,221,73,129,193,158,65,245,15,147,
    76,135,148,21,94,124,202,50,86,117,169,193,174,38,184,95,
    170,70,11,254,19,244,169,190,185,148,44,203,133,120,15,217,
    191,44,23,187,254,72,72,243,134,150,222,226,160,227,194,168,
    108,88,1,170,69,222,168,55,61,123,190,190,187,251,99,111,
    156,25,131,14,68,237,155,232,202,11,61,254,96,97,91,208,
    102,244,62,86,188,5,226,158,46,33,180,228,90,22,189,58,
    73,87,95,126,205,200,207,63,15,213,69,233,236,228,152,236,
    50,162,253,208,227,220,168,197,205,116,217,94,74,216,254,151,
    46,219,149,44,74,87,36,150,128,212,49,202,187,186,198,33,
    25,239,194,16,1,21,73,149,104,165,76,106,12,91,126,4,
    90,165,36,208,42,199,129,86,47,54,27,151,114,69,202,19,
    18,155,17,2,170,56,54,155,76,98,51,142,170,38,164,112,
    56,14,191,56,144,138,3,174,25,4,92,40,204,198,1,215,
    10,135,104,211,82,152,139,35,171,149,121,196,150,40,28,69,
    0,135,194,49,178,231,164,112,156,236,121,41,44,96,34,99,
    121,145,121,148,188,197,195,194,31,15,44,209,50,130,231,162,
    177,237,50,51,34,29,196,165,108,61,23,120,247,96,211,106,
    173,218,214,217,117,232,128,162,70,50,243,245,164,215,83,253,
    189,198,172,213,174,214,113,249,120,95,210,251,11,217,122,173,
    183,113,147,221,94,203,28,181,189,134,184,170,103,54,84,173,
    165,90,171,28,213,110,56,237,218,90,211,90,151,177,40,196,
    168,158,74,80,133,194,190,189,219,156,224,52,164,87,107,120,
    46,47,32,219,208,87,179,21,71,123,202,174,221,85,147,213,
    167,230,4,53,107,149,191,181,26,97,52,11,7,61,136,236,
    160,45,127,61,144,205,242,214,69,20,179,31,75,147,3,120,
    135,227,5,135,6,87,249,1,14,162,103,118,143,122,210,249,
    82,215,153,44,82,214,139,13,134,173,213,37,91,210,181,46,
    217,38,162,97,217,212,146,13,106,63,211,36,236,157,29,114,
    51,166,132,40,121,1,128,95,244,122,22,142,162,220,238,114,
    217,63,105,186,56,162,165,110,24,202,204,48,20,199,109,248,
    125,187,24,252,194,205,150,57,32,4,180,250,125,172,217,55,
    56,182,234,135,99,156,205,122,116,4,13,148,110,143,140,102,
    62,5,13,71,253,150,219,80,125,136,238,203,28,17,102,118,
    162,248,210,200,168,82,102,143,122,105,219,106,230,10,9,254,
    70,180,126,36,197,83,93,131,43,72,33,92,195,107,119,114,
    242,4,194,53,232,251,232,190,163,112,213,165,48,79,20,208,
    247,202,104,40,82,166,139,41,56,76,51,47,36,113,2,77,
    116,94,217,119,52,109,95,93,112,188,237,32,79,52,137,206,
    87,71,158,247,115,195,128,44,251,194,30,103,150,189,123,70,
    208,21,235,253,204,200,152,142,164,81,78,189,196,132,203,211,
    153,149,133,117,80,251,249,108,16,185,234,134,32,130,218,47,
    142,140,40,213,45,56,28,159,15,96,202,158,120,241,254,88,
    20,127,57,35,84,193,246,234,141,65,37,138,191,150,133,143,
    48,205,252,135,74,210,101,145,222,111,16,13,229,43,129,233,
    177,52,76,159,75,115,228,169,152,246,14,212,59,114,194,36,
    122,191,69,195,43,211,64,116,182,211,139,206,164,79,185,174,
    158,14,127,111,154,223,238,245,177,46,22,234,166,35,37,203,
    19,165,133,218,190,215,86,126,216,137,210,112,72,154,27,103,
    32,238,28,112,103,182,106,170,80,153,131,99,16,78,81,247,
    174,129,173,56,142,246,58,166,25,27,137,127,96,154,18,101,
    25,15,65,60,12,241,8,196,163,16,143,65,60,14,241,62,
    136,39,33,158,130,120,26,98,25,2,185,76,227,60,196,115,
    16,200,82,25,47,12,216,47,179,224,240,94,110,114,13,109,
    195,86,101,109,65,175,232,101,173,162,85,244,74,97,156,255,
    42,87,251,211,197,174,81,59,201,45,233,225,236,153,173,189,
    129,236,89,116,148,33,206,161,149,147,164,217,88,146,52,147,
    179,11,40,84,36,117,22,229,211,42,73,62,45,202,155,141,
    39,121,179,137,36,111,118,40,201,155,77,38,121,179,169,36,
    111,118,56,201,155,77,39,121,179,153,36,111,54,155,228,205,
    142,36,121,179,185,36,111,54,159,228,205,142,38,121,179,99,
    100,31,77,50,105,199,226,76,154,125,92,10,139,100,47,72,
    225,38,178,23,165,112,130,236,155,164,112,146,236,19,82,168,
    145,125,82,10,55,147,93,147,194,45,100,223,44,133,91,201,
    190,69,10,183,145,125,171,20,78,145,125,155,20,110,39,117,
    7,109,214,105,229,78,178,79,201,149,211,72,223,225,118,205,
    72,233,187,236,87,105,73,164,124,159,246,51,107,103,220,159,
    111,167,141,183,83,124,115,225,106,25,187,235,216,181,15,206,
    33,241,103,240,56,121,122,209,68,231,15,233,255,120,250,106,
    119,124,118,247,100,227,26,148,155,211,23,183,248,90,74,55,
    175,193,232,199,135,141,110,226,86,193,203,202,247,242,139,253,
    162,251,203,93,181,63,26,13,83,10,145,76,115,213,243,154,
    121,7,179,145,206,31,143,134,102,46,13,77,83,185,249,129,
    137,86,118,81,249,147,62,44,253,119,14,5,203,12,13,110,
    233,162,187,128,195,136,22,210,16,173,171,48,104,58,13,68,
    75,189,68,188,38,243,17,114,51,91,136,227,20,31,112,136,
    251,240,211,61,99,118,237,91,215,84,144,65,15,100,158,251,
    215,8,93,79,249,207,50,27,69,222,254,13,141,162,177,5,
    209,204,9,101,175,7,63,31,121,12,83,157,35,43,224,37,
    162,149,243,16,30,76,192,69,186,127,145,13,54,158,0,55,
    12,91,87,247,47,179,193,22,220,64,108,93,221,191,162,145,
    214,130,233,97,96,109,175,157,215,58,128,65,96,117,191,238,
    195,112,253,137,178,61,48,172,118,91,185,118,238,137,178,72,
    237,111,70,27,149,217,97,56,170,213,14,115,187,147,33,55,
    100,160,240,183,163,225,152,25,198,17,56,47,231,117,107,54,
    58,207,202,250,94,31,153,95,105,64,46,90,237,62,118,101,
    30,43,69,104,88,233,239,246,157,91,171,106,221,113,243,228,
    150,40,252,253,190,123,46,204,247,28,61,23,171,251,195,104,
    24,82,220,150,159,235,96,192,99,69,26,255,184,239,51,221,
    207,113,56,48,55,160,239,79,251,62,55,26,77,101,229,150,
    45,136,30,2,97,133,127,30,13,199,226,48,142,117,28,40,
    108,54,189,70,158,217,15,244,116,64,241,95,71,195,149,18,
    135,243,246,193,92,181,26,91,185,222,134,141,117,254,109,15,
    154,107,223,87,166,45,244,190,21,168,92,119,148,178,218,67,
    235,223,247,224,73,142,182,11,158,247,244,240,48,152,232,161,
    174,89,73,89,37,15,21,224,145,178,243,238,113,42,242,116,
    196,209,240,135,112,52,124,71,14,247,154,122,116,58,188,151,
    218,42,81,191,35,119,213,69,115,208,14,81,66,18,7,66,
    12,156,191,235,11,254,96,16,249,54,219,84,24,110,96,252,
    131,40,57,125,59,169,21,180,89,109,226,122,55,16,71,83,
    152,187,29,108,68,212,205,115,143,42,135,239,19,205,255,220,
    119,119,185,230,123,110,110,71,85,192,33,81,248,175,209,112,
    164,44,94,121,186,20,44,94,208,247,239,62,20,215,157,68,
    73,139,132,130,192,89,119,251,102,208,217,124,168,38,225,144,
    232,254,15,141,234,40,211,118,74,74,98,137,60,61,165,108,
    151,68,173,166,101,128,200,113,3,229,135,185,35,138,212,22,
    251,16,93,159,143,75,201,43,179,177,148,127,33,255,51,69,
    177,222,49,109,191,183,27,13,171,109,53,156,252,34,113,108,
    55,18,157,213,20,52,3,39,5,110,244,57,238,9,45,190,
    147,87,127,19,245,31,18,48,62,4,33,199,2,122,39,2,
    112,91,75,238,55,25,10,2,71,247,13,156,84,55,112,26,
    220,192,137,106,227,37,8,52,104,224,248,174,113,17,162,67,
    201,182,224,50,196,199,32,94,129,216,133,248,4,4,78,199,
    25,159,134,248,44,4,142,97,25,95,128,248,18,132,28,76,
    248,10,4,78,200,24,95,135,248,38,4,14,98,24,56,233,
    96,124,7,226,187,3,51,53,62,182,176,103,143,98,162,206,
    139,3,182,205,204,192,22,55,249,61,180,141,71,202,202,218,
    130,86,214,113,140,224,154,254,198,246,30,51,168,104,178,44,
    236,121,200,63,2,2,216,209,179,78,157,192,192,21,99,178,
    107,146,232,48,98,124,222,3,163,43,251,138,115,86,43,122,
    156,88,158,152,53,110,133,192,173,115,227,142,238,208,227,225,
    79,121,192,44,122,120,143,247,125,242,0,133,60,47,97,188,
    21,2,71,38,228,86,192,158,99,58,56,28,226,115,164,26,
    240,5,49,70,218,253,130,254,74,217,143,73,244,196,76,244,
    196,225,89,228,101,3,220,193,198,227,199,149,201,10,143,15,
    30,125,47,104,85,222,53,22,11,227,83,149,226,248,193,74,
    177,50,86,144,231,71,39,180,25,189,90,172,28,156,123,103,
    69,171,234,115,91,21,237,127,82,112,234,251,
};

EmbeddedPython embedded_m5_internal_Voltage_vector(
    "m5/internal/Voltage_vector.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/Voltage_vector.py",
    "m5.internal.Voltage_vector",
    data_m5_internal_Voltage_vector,
    3404,
    17104);

} // anonymous namespace