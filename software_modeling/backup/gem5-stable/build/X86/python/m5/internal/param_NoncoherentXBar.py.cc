#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NoncoherentXBar[] = {
    120,156,197,88,235,110,220,198,21,62,67,114,87,218,149,100,
    73,150,37,217,150,108,177,41,156,108,140,70,106,221,56,14,
    16,213,109,156,11,144,0,81,82,110,2,43,155,160,44,69,
    142,180,92,241,178,32,71,150,215,144,254,84,70,219,23,104,
    223,160,63,250,54,125,163,246,156,51,36,151,186,1,1,90,
    111,229,229,120,56,156,57,115,46,223,185,204,248,80,252,53,
    240,249,157,13,144,255,93,0,4,248,19,16,1,196,2,122,
    2,132,20,16,220,130,195,6,100,239,67,208,128,215,0,61,
    3,164,1,103,216,49,225,7,3,146,89,94,211,132,200,228,
    17,1,163,54,72,11,122,13,120,158,44,130,37,155,112,216,
    134,236,143,32,132,72,4,236,6,83,16,76,195,107,164,142,
    157,22,19,156,6,26,108,243,96,11,130,25,30,108,67,48,
    203,157,25,24,45,128,156,133,222,28,77,235,221,64,178,15,
    145,236,60,147,253,23,145,13,240,203,50,4,55,104,58,242,
    245,61,205,180,104,38,239,55,207,84,22,74,46,23,161,119,
    179,236,47,213,250,183,106,253,229,90,127,165,214,95,173,245,
    111,115,31,57,187,9,131,59,48,184,11,131,53,216,71,101,
    45,86,92,172,131,52,97,112,15,122,247,64,226,111,29,206,
    80,159,193,205,218,138,251,188,98,169,90,177,193,43,108,232,
    217,32,241,183,161,87,52,161,219,89,65,27,133,255,198,191,
    14,218,8,212,44,54,47,100,150,135,105,226,134,201,126,26,
    26,244,189,73,13,89,212,167,102,170,48,237,39,100,218,127,
    2,219,53,48,10,211,158,2,18,22,36,75,100,192,41,119,
    78,13,24,117,224,68,192,192,130,192,132,19,220,166,65,12,
    28,8,56,51,224,71,147,38,156,98,107,161,1,238,131,165,
    180,93,7,108,0,77,105,10,78,27,112,210,128,238,238,137,
    65,3,135,45,200,254,1,175,214,153,232,52,19,53,224,4,
    91,11,206,44,56,109,194,115,156,132,67,131,22,137,47,118,
    79,80,82,28,233,118,44,228,118,167,38,46,137,18,132,89,
    226,197,82,145,38,220,161,151,121,177,187,147,38,126,218,151,
    153,76,212,238,51,47,235,180,203,185,105,190,57,244,84,223,
    225,197,38,105,37,30,42,38,154,38,82,205,96,103,63,76,
    2,55,78,131,163,72,170,105,162,232,238,135,145,116,93,254,
    248,69,60,76,51,245,89,150,165,153,67,138,229,193,40,245,
    170,21,164,86,63,74,115,217,161,221,120,27,135,200,43,154,
    189,63,100,138,196,0,51,76,139,3,153,251,89,56,84,104,
    47,77,145,102,19,181,14,89,138,155,252,59,108,182,250,105,
    44,183,14,101,28,163,84,143,182,14,100,252,152,155,247,114,
    229,237,69,114,107,239,40,140,130,173,221,15,63,216,26,142,
    84,63,77,182,240,123,152,40,137,170,137,182,174,84,202,38,
    78,188,73,228,143,195,3,55,100,193,220,190,140,134,50,155,
    163,209,187,180,181,88,16,179,162,41,76,209,17,115,216,107,
    224,99,138,117,99,70,236,132,36,154,79,226,18,182,172,58,
    154,200,196,2,14,13,200,214,9,43,3,252,9,50,46,34,
    166,75,223,12,254,246,123,210,137,30,29,152,132,0,61,120,
    194,248,66,160,225,204,109,50,121,2,12,146,6,12,154,160,
    193,131,152,211,104,202,70,212,226,116,34,99,32,113,11,242,
    191,1,234,24,97,115,2,5,164,206,76,16,201,2,168,54,
    121,62,142,174,224,134,127,98,84,118,59,196,254,14,227,66,
    245,195,60,61,78,88,251,212,103,63,234,162,102,190,25,125,
    189,55,144,190,202,55,112,224,251,244,200,246,189,36,73,149,
    237,5,129,237,41,149,133,123,71,74,230,182,74,237,7,121,
    135,12,234,44,150,208,170,232,141,134,37,148,200,236,8,37,
    253,18,132,190,194,151,37,126,97,43,228,82,33,44,250,105,
    144,227,56,145,56,144,202,33,38,21,41,57,101,70,24,53,
    46,77,165,237,113,222,13,124,255,184,228,132,161,217,105,150,
    64,202,101,180,175,218,140,73,47,207,93,230,132,198,25,126,
    68,248,133,23,29,73,166,142,56,82,200,16,117,53,15,19,
    1,224,109,18,166,148,157,5,74,210,36,24,33,127,161,255,
    14,109,125,155,97,56,203,64,92,70,16,78,97,219,196,255,
    155,98,197,240,173,2,122,205,18,126,20,2,20,176,241,69,
    97,127,132,226,25,6,158,142,193,145,131,101,98,175,124,139,
    122,180,216,89,167,230,30,53,247,169,217,40,197,126,211,178,
    207,93,148,253,9,237,103,176,192,44,26,25,200,44,69,11,
    206,121,214,157,177,103,97,128,236,146,135,24,228,71,99,15,
    177,40,152,102,79,169,197,169,236,123,38,228,223,82,232,38,
    79,98,98,228,52,8,127,234,141,157,130,21,229,44,144,2,
    166,75,60,59,4,210,58,82,15,106,72,117,200,70,12,83,
    231,78,25,19,93,154,161,1,234,172,17,169,198,21,154,182,
    169,249,217,164,212,61,134,218,193,37,168,125,68,91,47,20,
    80,155,99,136,181,241,89,48,124,179,176,65,149,47,151,46,
    64,140,240,101,93,129,175,183,169,103,94,150,122,194,208,42,
    100,253,188,6,45,98,207,168,139,180,131,157,209,42,73,82,
    7,213,42,38,255,231,201,42,230,115,131,243,249,47,57,159,
    115,77,192,213,147,14,212,38,199,106,221,105,144,74,246,77,
    88,41,242,116,222,194,118,152,165,47,71,118,186,111,43,150,
    153,226,234,246,131,124,243,65,254,17,70,76,251,41,199,42,
    29,51,117,84,204,228,144,162,26,45,253,236,165,47,57,51,
    242,155,235,234,32,230,114,64,115,139,140,139,248,90,38,133,
    26,165,166,57,156,231,42,163,40,62,17,93,183,43,93,19,
    235,95,210,102,109,86,180,41,86,17,75,109,193,28,185,58,
    122,115,253,197,95,241,121,70,202,39,169,37,80,69,237,116,
    53,191,44,10,9,229,252,226,28,94,222,176,32,206,22,82,
    254,174,196,73,115,140,19,122,204,18,250,127,1,174,76,5,
    252,25,8,9,104,240,2,250,149,167,144,233,151,104,250,31,
    128,125,228,138,90,128,227,77,151,242,63,207,192,48,148,63,
    225,169,186,52,248,18,254,90,115,176,50,129,155,69,237,89,
    79,224,86,21,171,24,66,63,41,73,91,231,131,26,25,167,
    239,229,52,77,71,170,177,207,142,211,65,85,46,98,164,126,
    211,120,154,214,219,184,196,209,143,99,52,81,10,92,19,75,
    70,13,35,191,162,230,81,5,15,81,142,189,65,230,54,224,
    250,124,237,234,140,240,3,113,96,49,207,243,83,106,30,184,
    182,174,211,169,124,160,81,250,192,163,202,7,36,231,175,215,
    124,36,161,214,32,163,159,25,2,207,143,88,190,209,113,205,
    2,217,128,94,147,188,133,139,109,81,56,147,40,163,25,197,
    190,115,201,145,21,179,163,85,86,217,93,155,148,154,151,19,
    137,18,100,213,237,200,139,247,2,239,105,66,91,209,126,126,
    233,94,70,201,252,66,157,121,114,13,113,29,255,252,250,184,
    20,226,197,68,34,196,7,72,185,98,158,253,33,72,125,14,
    11,223,246,165,29,203,120,15,79,158,253,112,104,239,71,222,
    1,91,198,44,132,251,186,20,78,177,105,47,150,27,249,67,
    134,137,237,167,9,134,238,35,95,165,153,29,72,60,138,201,
    192,126,207,230,184,111,135,185,237,237,225,87,207,87,26,234,
    231,189,149,235,90,47,59,200,185,132,61,60,166,238,196,44,
    235,226,89,59,196,98,126,8,85,154,213,7,192,42,140,115,
    153,174,61,7,51,34,30,178,212,72,199,45,42,61,156,77,
    106,222,133,73,70,251,247,145,114,76,91,144,186,154,98,205,
    104,25,106,249,178,179,126,67,235,243,203,46,251,213,79,113,
    89,125,217,83,56,110,179,188,37,154,2,201,71,52,186,200,
    105,22,23,57,232,205,83,255,173,55,179,55,76,204,15,142,
    255,167,78,236,60,249,191,240,238,124,8,69,94,191,206,129,
    69,93,176,57,237,192,3,81,30,41,234,82,241,237,197,250,
    117,8,114,253,76,122,74,106,67,173,79,72,88,14,5,122,
    227,87,99,207,188,92,0,127,92,201,117,198,85,205,232,22,
    219,79,159,168,216,126,226,121,114,23,43,97,139,43,225,109,
    170,132,79,88,9,174,161,139,225,49,48,27,149,46,232,48,
    148,200,227,139,124,105,125,232,146,151,248,243,134,67,153,4,
    206,67,168,87,177,252,121,34,120,160,248,115,10,181,50,195,
    20,183,176,108,189,236,137,20,95,107,114,178,33,27,149,239,
    77,202,164,140,223,215,37,126,59,116,156,24,7,89,103,155,
    26,14,171,85,68,117,126,11,101,148,173,16,26,200,72,42,
    121,181,97,20,45,47,78,185,129,196,124,147,142,240,200,193,
    37,60,190,71,174,59,185,16,253,27,164,252,2,138,67,19,
    134,104,209,52,90,102,171,217,18,156,245,46,220,236,106,142,
    232,52,173,11,213,81,238,176,135,207,87,146,243,221,99,153,
    123,72,83,124,172,218,241,98,125,107,196,55,34,206,207,161,
    56,187,58,239,84,106,36,32,243,233,64,159,195,16,211,156,
    145,57,1,59,191,166,113,186,44,140,31,111,150,34,109,106,
    145,158,121,185,36,89,248,242,51,126,172,214,174,156,245,149,
    140,245,21,27,23,151,151,191,127,18,165,254,161,12,138,57,
    247,174,159,243,105,26,123,56,126,245,46,221,176,220,101,241,
    194,247,32,163,85,203,23,70,115,153,133,94,20,190,210,55,
    119,229,48,103,241,11,194,209,247,242,133,179,234,85,65,144,
    241,148,201,131,48,71,66,76,165,92,82,132,3,178,181,122,
    235,218,232,89,95,62,49,0,234,162,85,159,179,159,210,173,
    78,78,215,8,116,19,215,154,111,33,24,41,86,152,120,192,
    157,19,150,57,187,208,178,102,103,90,86,107,202,228,203,147,
    57,60,170,180,173,214,204,172,168,255,219,64,240,182,141,13,
    92,253,31,132,233,220,27,
};

EmbeddedPython embedded_m5_internal_param_NoncoherentXBar(
    "m5/internal/param_NoncoherentXBar.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_NoncoherentXBar.py",
    "m5.internal.param_NoncoherentXBar",
    data_m5_internal_param_NoncoherentXBar,
    2215,
    6756);

} // anonymous namespace