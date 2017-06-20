#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetExtLink_d[] = {
    120,156,197,89,95,115,219,198,17,223,3,64,74,164,36,75,
    178,44,255,149,45,218,169,109,198,137,165,214,141,227,204,196,
    117,235,184,110,167,153,70,73,193,100,236,40,153,162,16,113,
    146,64,129,0,7,56,89,102,42,245,161,114,219,188,244,173,
    253,8,125,232,183,233,55,74,118,247,0,240,68,145,25,207,
    180,102,101,241,180,60,236,237,237,159,223,238,237,193,109,200,
    127,42,248,249,69,3,32,123,100,1,4,248,43,32,2,232,
    10,216,20,32,164,128,224,28,236,85,32,125,15,130,10,188,
    2,216,180,64,90,112,140,132,13,95,89,16,207,242,154,42,
    68,54,207,8,232,215,65,58,176,89,129,103,241,34,56,178,
    10,123,117,72,255,0,66,136,88,192,243,96,10,130,105,120,
    133,210,145,168,177,192,105,160,201,58,79,214,32,152,225,201,
    58,4,179,76,204,64,127,1,228,44,108,206,17,219,230,25,
    20,123,7,197,206,179,216,255,144,216,0,159,44,67,112,134,
    216,81,175,47,137,211,33,78,222,111,158,165,44,20,90,46,
    194,230,217,130,94,50,232,115,6,189,108,208,231,13,250,130,
    65,95,52,232,75,6,125,217,160,175,24,244,138,65,95,53,
    232,107,6,189,106,208,13,131,190,110,208,55,12,250,45,131,
    254,145,65,223,52,232,91,76,163,7,207,66,231,54,116,154,
    208,121,27,182,49,168,139,165,183,238,128,180,161,243,14,108,
    190,3,18,127,239,192,49,198,61,56,107,172,120,151,87,44,
    149,43,238,242,138,53,216,92,3,137,191,119,245,138,42,180,
    154,231,17,75,225,119,248,211,20,72,169,89,28,94,200,52,
    11,147,216,11,227,237,36,180,232,121,149,6,66,94,155,134,
    169,28,130,79,8,130,255,6,198,95,96,229,16,60,2,20,
    44,200,150,200,130,35,38,142,44,232,55,225,80,64,199,129,
    192,134,67,220,166,66,10,236,8,56,182,224,107,155,24,142,
    112,116,16,40,215,192,81,26,127,29,6,138,150,52,5,71,
    21,56,172,64,235,249,161,69,19,123,53,72,255,5,223,172,
    176,208,105,22,106,193,33,142,14,28,59,112,84,133,103,200,
    132,83,157,26,153,47,158,31,162,165,56,211,106,58,168,237,
    134,97,46,153,18,132,105,236,119,165,34,79,120,61,63,245,
    187,222,175,253,52,150,234,233,75,245,219,48,222,243,130,102,
    189,224,77,178,181,158,175,118,93,94,108,147,87,186,61,197,
    66,19,92,48,131,196,118,24,7,94,55,9,246,35,169,166,
    73,162,183,29,70,210,243,248,225,111,186,189,36,85,79,211,
    52,73,93,114,44,79,70,137,95,174,32,183,182,163,36,147,
    77,218,141,183,113,73,188,34,238,237,30,75,36,5,88,97,
    90,28,200,172,157,134,61,133,241,210,18,137,155,164,53,41,
    82,60,100,95,224,176,190,155,116,229,250,158,236,118,101,42,
    239,173,239,200,238,125,30,238,102,202,223,138,228,250,214,126,
    24,5,235,207,63,120,127,189,215,87,187,73,188,142,207,195,
    88,73,116,77,180,62,210,41,107,200,120,150,196,31,132,59,
    94,200,134,121,187,50,234,201,116,142,102,47,211,214,98,65,
    204,138,170,176,69,83,204,33,85,193,143,45,86,172,25,177,
    17,146,105,109,50,151,176,229,152,104,162,16,11,216,179,32,
    93,33,172,116,240,87,80,112,17,49,45,122,102,241,179,223,
    145,79,244,108,199,38,4,232,201,67,198,23,2,13,57,31,
    82,200,99,96,144,84,160,83,5,13,30,196,156,70,83,218,
    167,17,217,73,140,133,194,29,200,254,9,232,99,132,205,33,
    228,144,58,182,65,196,11,160,234,84,161,112,246,60,110,248,
    103,70,101,171,73,234,111,48,46,212,110,152,37,7,49,123,
    159,104,206,163,22,122,230,179,254,167,91,29,217,86,217,42,
    78,124,153,236,55,218,126,28,39,170,225,7,65,195,87,42,
    13,183,246,149,204,26,42,105,220,204,154,20,80,119,177,128,
    86,41,175,223,43,160,68,97,71,40,233,47,65,216,86,248,
    101,137,191,112,20,50,169,16,22,187,73,144,225,60,137,216,
    145,202,37,37,21,57,57,97,69,24,53,30,177,210,246,200,
    119,6,191,63,46,52,97,104,54,171,5,144,50,25,109,171,
    58,99,210,207,50,143,53,161,121,134,31,9,126,225,71,251,
    146,165,35,142,20,42,68,164,214,97,34,0,188,72,198,20,
    182,179,65,113,18,7,125,212,47,108,223,166,173,47,50,12,
    103,25,136,203,8,194,41,28,171,248,183,42,206,91,109,39,
    135,94,181,128,31,149,0,5,28,124,145,199,31,161,120,140,
    133,167,105,113,229,96,155,56,43,111,16,69,139,221,21,26,
    174,210,112,141,134,213,194,236,55,109,251,220,176,237,15,104,
    63,139,13,102,211,40,64,118,97,90,112,34,179,46,13,50,
    11,11,100,139,50,196,162,60,26,100,136,67,197,52,125,68,
    35,178,114,238,217,144,125,78,165,155,50,137,133,81,210,32,
    252,137,26,36,5,59,202,93,32,7,76,23,120,118,9,164,
    38,82,119,12,164,186,20,35,134,169,123,169,168,137,30,113,
    104,128,186,87,72,84,101,132,167,27,52,92,159,148,187,7,
    80,219,57,5,181,15,105,235,133,28,106,115,12,177,58,126,
    22,172,182,157,199,160,60,47,151,134,32,70,248,114,70,224,
    235,22,81,246,105,171,39,12,173,220,214,95,25,208,34,245,
    44,211,164,13,36,250,23,200,18,19,84,23,240,240,127,22,
    95,192,243,220,226,243,252,199,124,158,115,79,192,93,158,46,
    212,54,215,106,77,84,200,37,219,54,156,207,207,233,172,134,
    99,47,77,94,246,27,201,118,67,177,205,84,87,31,222,204,
    214,110,102,31,98,197,108,60,226,90,165,107,166,174,138,169,
    236,81,85,163,165,79,95,182,37,159,140,252,205,243,116,17,
    243,184,160,121,249,137,139,248,90,38,135,90,133,167,185,156,
    103,42,165,42,62,17,95,215,75,95,147,234,31,211,102,117,
    118,180,45,46,32,150,234,130,53,242,116,245,230,254,139,159,
    226,231,35,114,62,89,45,129,58,127,183,165,245,101,83,200,
    40,247,221,19,120,121,195,134,184,235,40,249,139,2,39,213,
    1,78,232,99,23,208,255,27,112,103,42,224,175,64,72,192,
    128,231,208,47,51,133,66,191,68,236,191,7,206,145,17,189,
    0,215,155,22,157,255,204,129,101,40,123,192,172,186,53,248,
    24,190,53,18,172,56,192,237,188,247,52,15,112,167,172,85,
    12,161,215,58,164,157,147,69,141,130,179,235,103,196,166,43,
    213,32,103,7,199,65,217,46,98,165,126,211,120,154,214,219,
    120,164,209,215,3,52,209,17,120,69,44,89,6,70,126,66,
    195,189,18,30,162,152,123,131,202,173,194,248,243,218,211,39,
    194,87,164,129,195,58,207,79,169,121,252,59,36,167,204,129,
    74,145,3,247,202,28,144,124,126,189,226,43,9,141,22,5,
    253,216,18,120,207,197,246,141,174,149,14,200,10,108,86,41,
    91,184,217,22,121,50,137,162,154,81,237,59,113,56,178,99,
    54,180,203,202,184,235,144,210,240,114,34,85,130,162,250,48,
    242,187,91,129,255,232,144,182,162,253,218,69,122,89,133,242,
    11,166,242,148,26,98,156,254,252,245,126,97,196,139,137,84,
    136,247,181,118,90,121,206,135,32,105,115,89,248,124,87,54,
    186,178,187,133,55,207,221,176,215,216,142,252,29,142,140,157,
    27,247,105,97,156,226,208,14,183,27,217,29,26,147,70,59,
    137,177,116,239,183,85,146,54,2,137,87,49,25,52,238,54,
    184,238,55,194,172,225,111,225,83,191,173,52,212,79,102,43,
    247,181,126,186,147,113,11,187,119,64,228,196,34,235,225,93,
    59,196,102,254,79,80,30,179,250,2,88,150,113,110,211,117,
    230,224,137,136,151,44,213,215,117,139,90,15,119,141,134,183,
    97,146,213,254,61,148,252,71,218,130,220,85,21,87,172,154,
    165,150,79,39,235,103,180,62,59,157,178,7,175,147,178,250,
    165,84,158,184,85,226,148,83,116,223,167,177,70,101,127,179,
    94,76,206,240,56,203,147,115,197,123,175,51,60,57,207,239,
    146,170,60,179,72,121,63,245,223,230,61,231,205,196,50,230,
    47,255,211,116,119,31,252,95,116,119,63,128,188,3,24,151,
    234,194,52,108,78,167,122,71,20,151,15,211,42,126,207,177,
    50,14,107,94,59,149,190,146,58,80,43,19,50,150,139,134,
    222,248,219,65,14,159,110,149,31,151,118,29,115,255,211,63,
    199,241,211,119,47,142,159,120,22,95,198,158,217,225,158,249,
    33,245,204,135,236,4,207,210,109,243,0,152,149,210,23,116,
    109,138,229,193,176,94,218,31,186,57,38,253,252,94,79,198,
    129,123,7,204,126,151,31,79,4,15,84,169,254,14,70,67,
    98,139,115,216,224,158,206,68,170,196,134,157,28,200,74,153,
    123,147,10,41,227,247,31,5,126,155,244,170,107,80,142,221,
    135,52,112,1,46,107,175,251,243,50,32,183,126,8,156,1,
    86,250,8,231,50,186,92,189,46,43,182,75,252,78,201,156,
    84,183,199,174,197,169,131,36,221,51,246,121,93,94,218,104,
    142,241,100,204,114,236,56,229,2,25,73,37,71,35,77,145,
    63,242,11,126,32,241,168,77,250,120,219,226,219,11,126,143,
    60,111,114,167,211,207,128,143,20,93,33,241,116,18,85,60,
    159,150,197,178,85,171,214,4,31,250,67,47,182,181,86,116,
    133,209,125,122,63,115,185,108,205,151,49,229,87,175,197,209,
    75,225,231,91,229,134,223,213,47,205,248,133,144,251,22,228,
    87,119,247,118,137,13,202,78,190,28,233,107,40,38,42,55,
    36,220,127,184,63,165,121,234,138,187,247,215,10,179,214,158,
    112,144,181,53,222,11,73,237,12,191,0,238,222,87,215,134,
    88,181,7,204,5,167,164,105,150,13,29,207,31,228,121,18,
    37,237,61,25,232,55,150,234,234,120,158,95,38,93,31,231,
    175,140,228,104,133,221,92,194,226,208,243,32,165,85,203,67,
    179,153,76,67,63,10,191,145,170,49,244,228,132,206,133,35,
    70,123,224,35,63,11,219,57,4,78,201,209,44,238,254,86,
    255,73,18,35,44,163,8,131,184,50,150,169,213,207,148,236,
    142,217,8,173,235,69,242,19,217,77,210,254,152,141,30,231,
    109,102,206,52,218,75,248,48,247,210,197,209,251,104,37,134,
    23,203,120,159,215,162,224,79,146,64,158,178,226,113,16,164,
    174,31,239,200,194,93,215,135,25,78,40,87,112,141,142,53,
    59,213,77,240,242,155,142,177,130,57,216,231,148,30,197,67,
    254,127,129,17,113,161,2,102,78,112,19,57,234,36,231,26,
    146,202,157,48,163,173,207,14,45,203,207,53,202,113,117,99,
    108,89,51,69,76,172,240,232,123,154,126,181,244,136,94,100,
    102,91,56,208,203,231,218,124,13,139,16,29,122,182,168,227,
    177,231,216,179,11,53,103,118,166,230,212,166,108,126,95,56,
    135,183,243,186,83,155,153,21,175,251,111,21,139,89,221,90,
    93,172,137,239,1,177,55,247,173,
};

EmbeddedPython embedded_m5_internal_param_GarnetExtLink_d(
    "m5/internal/param_GarnetExtLink_d.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_GarnetExtLink_d.py",
    "m5.internal.param_GarnetExtLink_d",
    data_m5_internal_param_GarnetExtLink_d,
    2457,
    7707);

} // anonymous namespace