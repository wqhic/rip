#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MinorCPU[] = {
    120,156,189,90,221,118,219,198,17,94,128,63,50,105,201,146,
    45,203,255,63,140,19,59,180,99,75,177,98,199,73,172,216,
    150,100,187,85,106,217,50,40,85,142,146,6,129,128,149,4,
    137,4,88,0,180,205,28,249,166,242,105,123,209,158,94,165,
    231,244,1,122,209,119,232,93,95,160,47,210,103,104,103,6,
    88,112,9,130,20,213,132,142,165,201,104,118,118,118,102,247,
    155,217,93,0,38,139,254,203,193,239,131,18,99,126,49,195,
    152,5,63,10,171,50,86,83,216,154,194,20,174,48,235,56,
    219,201,49,239,22,179,114,236,45,99,107,42,227,42,219,3,
    38,195,190,81,153,51,76,125,242,172,154,33,137,194,154,69,
    198,179,108,45,199,86,157,163,44,203,243,108,167,200,188,239,
    153,162,40,142,194,94,88,67,204,58,196,222,130,117,96,10,
    100,240,16,67,97,145,132,5,102,29,38,97,145,89,195,196,
    28,102,205,49,198,135,217,218,8,170,173,29,1,179,215,192,
    236,40,153,253,55,154,181,160,101,130,89,71,80,29,252,250,
    26,53,179,168,73,227,141,146,149,49,225,229,81,182,118,76,
    240,227,18,127,92,226,39,36,254,132,196,159,148,248,83,18,
    127,90,226,207,72,252,89,137,63,39,241,231,37,254,130,196,
    95,148,248,146,196,191,39,241,151,36,254,125,137,255,64,226,
    47,75,252,21,137,255,80,226,203,18,127,85,226,175,73,252,
    71,18,127,93,226,111,72,252,164,196,79,73,252,199,18,127,
    83,226,167,37,254,19,137,191,37,241,183,37,254,83,137,191,
    67,60,160,225,24,219,254,140,109,127,206,182,191,96,27,0,
    208,163,241,202,223,101,60,195,182,103,216,218,12,227,240,115,
    151,237,1,134,173,99,82,143,47,169,199,120,220,227,30,245,
    184,207,214,238,51,14,63,247,194,30,121,86,41,159,128,188,
    176,255,11,255,149,21,224,130,97,32,47,185,231,219,174,163,
    219,206,134,107,171,216,158,71,130,89,100,34,25,138,210,105,
    30,211,233,31,140,114,201,82,163,116,122,195,192,176,130,177,
    84,85,246,134,152,55,42,107,150,217,174,194,182,179,204,202,
    176,93,24,38,135,14,108,42,108,79,101,223,102,80,225,13,
    208,44,128,254,2,203,6,97,46,109,19,232,67,75,67,236,
    77,142,237,230,88,229,197,174,138,130,157,2,243,254,206,126,
    56,71,70,15,145,81,149,237,2,205,178,189,44,123,147,103,
    171,160,4,162,237,2,134,175,188,216,133,72,65,82,41,103,
    193,219,167,82,184,24,138,101,123,142,81,227,193,40,240,122,
    221,240,140,154,190,104,59,174,55,191,180,82,46,10,37,215,
    159,172,27,193,150,70,189,50,56,29,181,122,64,214,92,135,
    7,135,129,217,176,29,75,175,185,86,163,202,131,67,104,74,
    223,176,171,92,215,169,113,161,86,119,189,224,145,231,185,158,
    134,51,74,194,170,107,196,61,112,62,205,170,235,243,50,142,
    70,195,104,104,62,64,237,141,58,89,68,7,200,83,236,108,
    113,223,244,236,122,0,11,21,90,68,109,180,86,198,37,34,
    226,63,5,50,181,229,214,248,212,14,175,213,184,199,167,167,
    54,121,237,54,145,27,126,96,172,87,249,212,122,195,174,90,
    83,179,218,226,84,189,25,108,185,206,20,180,219,78,192,97,
    78,170,83,237,179,49,9,26,199,208,238,43,123,83,183,41,
    34,125,139,87,235,220,27,65,233,25,28,83,25,83,134,149,
    188,146,81,202,202,8,112,57,248,205,40,231,212,195,202,83,
    27,99,50,49,78,68,83,86,198,15,46,170,194,118,84,230,
    157,67,116,108,195,143,130,203,9,24,169,96,155,74,109,207,
    113,50,66,233,118,6,215,60,20,238,18,162,0,90,160,57,
    131,139,236,48,130,69,142,109,231,89,8,23,64,89,136,31,
    175,137,20,212,209,140,10,198,179,204,255,145,193,228,2,80,
    118,89,4,162,189,12,83,156,49,22,20,177,190,130,244,4,
    12,248,59,194,97,165,140,238,63,37,64,4,91,182,239,190,
    114,104,218,145,167,204,169,192,204,44,53,159,173,111,115,51,
    240,47,130,224,107,183,81,50,13,199,113,131,146,97,89,37,
    35,8,60,123,189,17,112,191,20,184,165,203,126,25,87,82,
    59,42,48,21,219,107,214,5,134,112,189,1,67,225,31,150,
    109,6,240,199,56,253,65,171,224,243,0,240,176,229,90,62,
    200,209,196,38,15,52,116,50,192,73,118,201,17,130,139,142,
    170,56,60,232,29,129,191,103,133,39,132,201,114,94,32,200,
    231,213,141,160,72,96,52,124,95,39,79,80,78,184,67,195,
    47,141,106,131,147,117,0,80,0,14,33,27,250,48,88,228,
    157,194,40,68,208,20,137,227,58,86,19,28,179,205,15,113,
    204,83,132,191,97,66,224,4,160,111,8,104,30,254,159,87,
    78,168,102,54,194,92,94,224,14,235,94,192,104,213,149,104,
    225,1,131,123,80,99,202,42,21,9,10,134,242,240,18,114,
    216,89,59,135,228,60,146,11,72,46,138,120,7,22,244,72,
    50,232,59,56,144,74,145,82,76,184,36,25,17,147,213,150,
    75,167,91,185,4,69,176,130,57,161,98,230,180,114,34,139,
    5,211,187,135,20,84,41,219,50,204,95,198,242,140,185,67,
    198,48,77,0,240,200,181,210,128,102,72,27,195,200,15,9,
    4,107,8,75,25,155,155,18,54,53,92,28,2,166,118,90,
    148,63,29,53,66,72,106,103,209,84,46,101,138,75,72,222,
    27,248,60,183,192,181,217,1,174,187,56,230,88,4,174,17,
    2,85,17,126,199,84,51,19,77,126,188,25,142,39,64,133,
    136,202,166,32,234,10,114,153,206,112,223,21,152,162,32,31,
    75,96,66,191,84,57,22,116,160,121,18,67,144,97,116,18,
    182,244,85,231,36,236,210,42,237,210,31,211,46,77,59,61,
    157,67,195,98,156,161,122,28,50,57,156,139,141,12,59,17,
    237,190,126,1,104,221,115,95,55,75,238,70,41,160,96,177,
    118,206,92,246,39,47,251,119,161,42,150,238,81,61,10,235,
    98,88,249,60,94,199,202,133,93,31,189,54,57,109,123,244,
    151,174,135,133,74,167,162,165,71,219,41,32,106,2,103,82,
    21,83,76,37,219,15,60,172,212,131,157,228,98,60,201,232,
    243,87,56,74,145,102,56,163,156,4,244,20,21,114,69,15,
    75,51,29,167,168,21,126,231,112,214,49,92,206,240,82,162,
    85,66,71,41,6,140,70,187,222,134,144,65,69,160,77,129,
    201,21,129,140,124,11,25,248,155,17,40,255,3,163,19,166,
    194,126,207,112,237,97,137,35,148,199,73,129,139,61,142,234,
    223,49,74,135,148,29,158,106,74,5,119,117,210,128,82,227,
    223,33,213,112,195,255,138,253,81,202,37,177,45,103,162,51,
    164,188,45,103,227,122,68,160,233,107,235,205,182,23,46,92,
    149,45,195,71,181,176,26,181,210,179,85,235,227,211,31,84,
    227,129,33,232,80,104,95,71,87,190,109,225,7,55,182,179,
    202,184,42,161,226,38,146,233,24,16,138,144,13,194,171,139,
    172,251,246,171,135,117,254,27,28,58,75,206,142,14,81,24,
    194,64,140,243,156,192,249,116,140,115,78,219,209,91,186,69,
    32,85,113,125,247,84,5,174,217,112,254,194,91,109,150,241,
    28,91,203,99,70,208,49,89,137,18,70,17,165,10,11,91,
    219,94,71,83,241,52,156,164,120,137,195,213,67,242,122,176,
    37,0,35,159,169,26,181,117,203,184,247,103,28,3,7,50,
    69,10,169,194,235,49,217,107,132,191,210,205,113,250,243,182,
    240,254,229,96,211,255,83,48,25,123,77,96,183,92,147,114,
    126,121,139,151,106,188,182,14,215,195,45,187,94,218,168,26,
    155,180,22,153,40,170,103,34,170,128,22,51,121,94,240,175,
    33,117,75,166,235,64,37,110,152,129,235,149,44,14,215,38,
    110,149,110,148,168,140,151,108,191,100,172,67,171,97,6,33,
    156,219,83,145,142,162,134,183,233,211,169,115,231,21,178,131,
    95,75,29,110,194,54,28,188,255,194,226,237,50,188,165,197,
    85,153,142,212,97,118,192,206,6,23,162,160,25,86,35,60,
    59,104,147,72,174,178,119,82,188,111,129,201,63,161,109,156,
    160,188,114,86,45,168,228,156,208,89,194,30,126,103,62,254,
    71,237,35,31,195,7,94,81,86,230,81,147,15,225,253,27,
    105,1,203,247,90,81,8,15,19,29,38,225,136,16,30,33,
    58,74,194,49,33,60,74,244,24,9,199,133,240,56,209,9,
    18,158,16,194,147,68,79,145,240,180,16,158,33,122,150,132,
    231,132,240,60,209,11,36,188,40,132,37,162,239,145,240,146,
    16,190,79,244,3,18,94,22,194,43,68,63,36,97,89,8,
    175,18,189,70,194,143,132,240,58,209,27,36,156,20,194,41,
    162,31,147,240,166,16,78,19,253,132,132,183,132,240,54,209,
    79,73,120,71,8,63,35,250,57,9,191,16,194,187,68,103,
    72,248,165,16,222,35,122,159,132,15,132,112,150,232,28,9,
    231,133,240,33,209,71,36,124,44,132,191,32,250,75,18,46,
    8,225,87,68,127,69,194,39,66,184,72,244,41,9,159,9,
    225,18,209,231,36,212,132,176,66,116,153,132,43,66,248,107,
    162,171,36,124,33,132,95,19,93,35,225,55,66,248,45,209,
    223,144,240,59,33,212,137,126,79,66,67,8,215,137,154,36,
    180,132,144,19,221,32,225,166,120,146,187,69,66,155,173,109,
    227,227,53,148,236,224,86,50,244,83,183,18,170,200,131,175,
    197,127,253,89,119,16,237,206,187,117,90,251,140,69,39,198,
    110,187,135,34,71,52,18,238,30,219,138,184,144,202,225,208,
    99,174,137,142,98,166,155,30,55,2,30,174,201,185,65,135,
    71,59,79,56,226,223,90,251,65,231,245,105,54,142,100,143,
    78,200,205,227,180,84,225,13,156,150,74,89,117,206,192,61,
    42,75,247,168,25,188,71,237,82,216,186,26,94,165,90,224,
    203,197,209,227,227,55,135,191,210,219,103,32,188,41,161,99,
    70,189,206,29,75,187,198,228,203,15,53,15,118,205,113,159,
    251,39,147,206,170,25,229,56,220,118,58,243,11,55,112,41,
    50,90,179,92,156,81,3,95,61,2,231,191,4,56,203,85,
    38,239,226,218,12,18,218,183,227,45,91,187,31,207,253,249,
    78,228,173,123,134,99,110,45,121,220,194,43,245,62,26,112,
    110,166,219,97,75,20,188,223,217,193,226,166,107,241,249,166,
    89,229,11,78,189,17,144,225,126,244,208,60,250,158,108,160,
    139,74,106,103,106,158,107,108,108,112,175,98,255,192,105,164,
    190,149,113,184,137,120,184,68,107,119,135,73,113,213,182,130,
    173,222,129,73,122,237,129,181,26,130,201,110,157,151,221,71,
    175,185,9,119,189,199,174,7,103,68,235,33,175,26,77,26,
    239,128,93,112,232,179,241,208,169,58,116,49,74,152,228,14,
    66,115,193,170,218,14,61,107,217,87,7,199,193,103,32,178,
    48,152,74,233,20,142,63,91,173,186,175,30,25,94,181,185,
    200,107,174,215,92,240,253,70,184,124,7,237,131,3,99,210,
    245,82,10,46,119,53,58,71,80,110,77,111,127,154,56,232,
    177,214,160,82,83,15,3,243,110,173,102,7,79,108,32,251,
    12,37,107,38,134,146,154,130,15,186,27,104,79,190,190,20,
    113,160,163,210,64,173,244,75,129,120,164,244,184,225,152,43,
    112,179,240,187,165,66,135,158,72,133,100,67,112,181,107,231,
    180,36,239,95,27,7,60,209,26,48,153,230,221,167,38,145,
    231,125,41,38,230,80,202,244,30,221,17,161,45,84,244,165,
    152,28,39,110,9,62,239,218,253,73,229,249,162,241,186,2,
    119,86,30,197,143,172,191,196,61,90,106,26,252,255,239,141,
    30,93,105,121,180,143,122,90,21,107,245,212,248,111,27,220,
    15,252,231,13,222,224,241,146,31,176,139,40,124,61,116,130,
    235,189,76,202,206,11,31,14,212,1,61,56,221,230,65,66,
    163,71,173,3,229,101,40,42,62,104,38,166,225,160,125,18,
    245,49,85,41,184,209,213,40,172,226,172,105,114,223,231,254,
    130,19,150,84,114,227,96,61,208,137,51,45,39,82,84,130,
    143,186,27,36,133,100,245,60,136,62,14,127,74,26,62,169,
    16,92,219,199,88,34,71,15,160,142,67,159,76,14,45,229,
    107,247,77,32,84,109,21,160,254,52,19,219,133,212,212,35,
    129,42,60,0,80,152,124,217,174,241,103,78,56,49,251,228,
    92,106,151,68,206,165,233,244,0,78,187,122,235,68,112,176,
    30,9,168,165,168,164,237,83,27,60,48,183,110,62,70,218,
    90,230,126,244,196,126,150,108,160,98,152,218,249,137,237,240,
    138,99,212,91,43,219,167,42,14,53,30,15,213,214,22,92,
    234,101,162,53,82,31,106,56,202,104,219,40,93,209,19,170,
    44,187,20,245,244,156,97,238,236,123,84,237,213,69,160,167,
    135,78,26,22,218,213,59,206,203,7,235,33,208,211,93,165,
    43,42,166,247,191,241,116,232,181,161,103,186,247,141,39,212,
    233,243,198,147,174,44,110,60,169,173,93,103,106,122,217,125,
    72,183,135,190,231,54,189,71,219,220,166,170,208,37,60,186,
    147,193,33,129,39,30,18,208,84,69,175,230,45,216,201,61,
    183,169,235,225,203,72,248,187,170,235,239,224,233,244,151,96,
    242,71,180,253,132,209,211,105,37,175,22,212,9,229,39,253,
    83,11,249,130,66,175,8,18,223,170,133,161,60,96,226,149,
    93,211,215,80,162,141,198,55,122,250,168,74,60,175,199,203,
    63,189,82,126,106,212,194,175,98,232,195,15,13,145,72,47,
    236,53,252,202,36,124,50,128,7,19,122,79,26,190,131,118,
    248,43,122,125,65,111,43,180,79,80,142,159,44,212,110,79,
    138,185,152,12,231,98,46,190,250,219,248,250,131,62,238,170,
    221,166,188,237,84,174,216,181,240,75,34,58,172,202,237,150,
    103,0,63,145,144,250,220,179,141,42,98,241,124,170,61,90,
    136,199,43,75,174,91,37,36,201,26,81,155,254,146,147,95,
    167,123,25,232,112,119,197,241,237,77,135,91,162,119,122,236,
    212,251,89,125,30,39,170,18,221,137,59,92,136,218,133,165,
    11,251,90,162,147,137,172,194,157,70,77,23,141,165,244,48,
    97,59,195,91,119,52,72,210,145,182,96,67,85,58,3,118,
    234,132,141,143,94,215,59,103,140,170,145,223,123,62,231,12,
    159,67,98,116,137,114,214,171,85,2,99,147,79,47,46,174,
    116,68,25,171,44,63,153,235,136,178,213,136,57,186,106,84,
    119,0,224,233,22,42,77,63,224,181,142,21,165,73,12,79,
    63,139,80,101,58,194,159,181,44,79,51,156,77,222,109,201,
    103,163,151,120,209,9,54,210,234,226,104,155,110,151,100,128,
    198,40,25,210,151,107,190,234,154,59,220,138,116,210,19,128,
    116,30,186,53,76,158,116,43,48,103,11,40,241,26,117,184,
    84,39,87,13,91,43,179,34,152,174,75,2,58,221,27,151,
    96,49,147,201,23,54,46,85,141,96,195,245,106,93,156,7,
    191,188,121,23,72,74,246,206,187,13,100,133,103,233,96,93,
    112,252,240,48,231,117,244,95,242,92,188,79,244,70,107,164,
    68,69,83,52,209,39,69,237,96,198,13,37,226,233,101,100,
    219,3,123,218,125,60,190,105,3,234,60,234,28,169,70,207,
    177,113,127,32,0,36,246,69,185,219,224,183,169,240,5,126,
    248,37,209,61,252,82,205,127,11,4,63,43,44,140,22,96,
    203,194,167,219,25,165,168,140,40,217,204,240,88,33,59,124,
    184,144,45,12,101,232,187,176,17,101,92,45,102,11,135,135,
    149,159,239,223,69,216,224,138,234,197,169,130,242,63,141,50,
    217,112,
};

EmbeddedPython embedded_m5_internal_param_MinorCPU(
    "m5/internal/param_MinorCPU.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_MinorCPU.py",
    "m5.internal.param_MinorCPU",
    data_m5_internal_param_MinorCPU,
    3490,
    12494);

} // anonymous namespace