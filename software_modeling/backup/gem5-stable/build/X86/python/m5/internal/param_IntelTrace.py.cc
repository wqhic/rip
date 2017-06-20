#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IntelTrace[] = {
    120,156,189,88,235,114,219,198,21,62,11,128,148,72,81,150,
    100,221,108,75,142,216,139,19,198,211,136,173,27,199,153,137,
    234,38,205,164,51,201,180,178,11,58,99,71,201,4,133,128,
    165,8,10,4,56,192,202,50,61,212,143,86,158,182,47,208,
    71,232,143,190,77,223,168,57,231,44,0,66,23,207,100,166,
    37,41,114,181,88,236,158,61,151,239,92,118,61,200,62,21,
    252,125,218,4,72,19,1,224,227,87,64,8,48,16,112,32,
    64,72,1,254,26,28,87,32,249,16,252,10,188,1,56,48,
    64,26,112,142,29,19,190,53,32,106,240,154,42,132,38,143,
    8,24,213,65,90,112,80,129,231,209,10,88,178,10,199,117,
    72,254,12,66,136,72,192,11,127,14,252,121,120,131,212,177,
    83,99,130,243,64,131,117,30,172,129,191,192,131,117,240,27,
    220,89,128,209,50,200,6,28,44,210,180,131,27,72,246,62,
    146,93,98,178,255,33,178,62,190,89,7,255,6,77,71,190,
    190,161,153,22,205,228,253,150,152,202,114,206,229,10,28,220,
    204,251,171,165,254,90,169,191,206,125,220,245,38,244,55,160,
    191,9,253,91,208,69,69,172,20,59,220,6,105,66,255,14,
    28,220,1,137,223,219,112,142,186,242,111,150,86,108,241,138,
    213,98,197,54,175,184,11,7,119,65,226,119,91,175,168,66,
    167,181,129,250,15,254,139,159,22,234,31,84,3,155,151,50,
    73,131,56,114,130,168,27,7,6,189,175,82,67,214,242,168,
    153,203,204,246,57,153,237,223,192,54,243,141,204,108,103,128,
    132,5,201,18,26,112,198,157,51,3,70,45,24,11,232,91,
    224,155,48,198,109,42,196,192,145,128,115,3,190,51,105,194,
    25,182,22,42,247,29,176,148,182,89,159,149,171,41,205,193,
    89,5,198,21,232,188,24,27,52,112,92,131,228,95,240,122,
    155,137,206,51,81,3,198,216,90,112,110,193,89,21,158,227,
    36,28,234,215,72,124,241,98,140,146,226,72,167,101,33,183,
    251,37,113,73,20,63,72,34,119,32,213,10,246,157,161,155,
    184,3,231,203,72,201,240,89,226,122,178,85,207,167,197,233,
    238,208,85,61,155,215,153,164,144,193,80,49,189,56,146,106,
    1,59,221,32,242,157,65,236,159,132,82,205,19,49,167,27,
    132,210,113,248,229,151,131,97,156,168,47,146,36,78,108,210,
    41,15,134,177,91,172,32,141,122,97,156,202,22,237,198,219,
    216,68,94,209,236,238,144,41,18,3,204,43,45,246,101,234,
    37,193,80,161,169,52,69,154,77,212,90,100,36,110,210,167,
    216,180,123,241,64,182,143,229,96,32,19,249,160,125,36,7,
    15,185,249,32,85,238,97,40,219,135,39,65,232,183,95,124,
    252,81,123,56,82,189,56,106,227,251,0,21,128,90,9,219,
    151,245,177,139,115,110,18,229,211,224,200,9,88,38,167,39,
    195,161,76,22,105,244,14,237,42,150,69,67,84,133,41,90,
    98,17,123,21,252,153,98,219,88,16,251,1,73,229,145,164,
    132,40,171,140,33,50,172,128,99,3,146,109,66,72,31,191,
    130,76,138,56,233,208,59,131,223,253,137,212,161,71,251,38,
    217,93,15,142,25,85,8,47,156,185,71,134,142,128,161,81,
    129,126,21,52,100,16,105,26,67,201,136,90,156,78,100,12,
    36,110,65,250,79,64,245,34,88,198,144,1,233,220,4,17,
    45,131,170,147,47,227,232,6,110,248,87,198,98,167,69,236,
    239,51,36,84,47,72,227,211,136,21,79,125,246,158,14,106,
    230,233,232,201,97,95,122,42,221,193,129,111,226,147,166,231,
    70,81,172,154,174,239,55,93,165,146,224,240,68,201,180,169,
    226,230,189,180,69,182,180,87,114,84,21,244,70,195,28,69,
    100,113,68,145,126,240,3,79,225,195,42,63,176,21,82,169,
    16,17,189,216,79,113,156,72,28,73,101,19,147,138,148,28,
    51,35,12,24,135,166,210,246,56,239,6,62,127,150,115,194,
    168,108,85,115,12,165,50,236,170,58,195,209,77,83,135,57,
    161,113,70,30,17,126,233,134,39,146,169,35,132,20,50,68,
    93,205,195,180,177,119,139,228,200,197,102,89,162,56,242,71,
    200,90,224,189,71,187,222,98,4,54,24,131,235,136,191,57,
    108,171,248,191,42,54,12,207,202,80,87,205,145,71,209,79,
    1,219,93,100,166,71,20,158,99,164,105,25,28,42,88,28,
    246,197,159,82,143,22,219,219,212,220,165,230,29,106,118,114,
    137,167,40,246,226,101,177,31,209,86,6,203,202,82,145,89,
    204,92,42,255,130,63,221,158,248,19,6,195,14,249,133,65,
    222,51,241,11,139,2,103,242,152,90,156,202,30,103,66,250,
    140,194,52,249,15,19,35,87,65,208,83,111,226,10,172,35,
    123,153,100,159,207,81,108,19,52,203,248,60,42,225,211,38,
    243,48,56,237,219,121,16,116,104,134,134,165,189,69,164,42,
    215,40,185,73,205,79,102,160,233,9,192,142,174,0,236,19,
    218,117,57,3,216,34,3,171,142,191,101,195,51,51,245,23,
    105,113,245,18,176,8,85,214,53,168,122,151,122,230,85,129,
    103,7,168,76,204,223,151,0,69,156,25,101,105,246,177,51,
    218,36,33,202,80,218,196,244,254,60,218,196,140,109,112,198,
    254,37,103,108,206,250,92,251,232,160,108,114,92,214,157,10,
    105,163,107,194,70,150,137,211,26,182,195,36,126,53,106,198,
    221,166,98,113,41,134,238,221,75,119,239,165,159,96,116,108,
    62,230,184,164,227,163,142,128,137,28,82,4,163,165,95,188,
    242,36,39,64,126,114,28,29,176,28,14,94,78,150,88,17,
    85,235,164,75,35,87,50,135,238,84,37,20,177,167,173,230,
    122,161,102,226,250,43,218,167,206,58,54,197,38,34,168,46,
    152,25,71,7,105,46,174,248,45,254,126,71,122,39,129,37,
    80,41,108,119,52,171,44,5,201,99,255,226,2,74,166,39,
    131,221,70,162,95,231,232,168,78,208,65,63,51,199,250,223,
    129,43,78,1,127,3,178,63,154,57,195,122,225,26,100,240,
    85,154,254,61,176,83,92,147,237,57,182,116,40,195,243,12,
    12,57,233,35,158,170,147,255,87,240,143,146,71,229,41,218,
    204,106,202,114,138,182,138,184,196,192,249,81,105,216,186,24,
    192,200,46,61,55,165,105,58,42,77,156,116,18,245,139,90,
    16,163,242,20,81,52,175,119,112,136,153,239,38,24,162,36,
    183,37,86,141,18,50,126,69,205,131,2,20,34,31,155,14,
    95,59,240,246,100,236,232,152,255,45,109,110,49,187,75,115,
    106,19,255,243,106,231,243,39,127,120,178,223,41,209,43,192,
    95,201,193,255,160,0,191,228,76,245,134,15,26,212,26,100,
    242,115,67,224,137,15,203,51,58,96,89,32,43,112,80,37,
    55,225,58,90,100,94,36,242,8,70,241,238,66,26,100,221,
    236,107,173,21,86,215,6,165,230,213,180,35,3,217,116,47,
    116,7,135,190,251,248,152,118,161,173,188,220,175,140,156,239,
    229,50,223,228,19,226,109,172,243,227,195,156,255,151,211,142,
    10,31,33,209,130,111,246,1,63,246,56,20,60,235,201,230,
    64,14,14,241,20,217,11,134,205,110,232,30,177,61,204,76,
    174,39,185,92,138,13,122,185,156,72,239,83,27,55,189,56,
    194,32,125,226,169,56,105,250,18,207,86,210,111,126,208,228,
    8,223,12,210,166,123,136,111,93,79,105,140,95,244,80,174,
    86,221,228,40,229,194,244,248,148,186,179,176,167,131,71,230,
    0,171,243,1,20,185,84,31,230,138,128,205,117,183,118,25,
    76,123,120,106,82,35,29,166,168,180,176,119,169,121,31,102,
    20,215,63,4,198,21,164,164,164,170,216,50,106,134,34,94,
    38,179,158,210,170,244,170,103,254,241,199,120,166,190,133,201,
    252,179,154,95,223,204,129,228,147,22,221,176,84,179,27,22,
    116,218,185,255,213,105,25,249,179,192,188,250,191,250,170,253,
    104,214,108,219,31,67,150,178,223,230,167,162,44,211,162,94,
    219,23,249,201,160,44,16,223,58,108,94,3,25,199,75,164,
    171,164,182,204,246,244,69,100,63,215,123,158,78,124,239,106,
    29,251,89,33,205,57,151,41,163,53,54,152,62,14,177,193,
    196,243,232,14,22,180,22,23,180,123,84,208,142,89,116,199,
    208,53,237,4,132,149,66,3,107,216,68,242,212,185,172,5,
    93,180,18,107,238,112,40,35,223,190,15,229,58,148,95,79,
    219,246,20,87,94,67,169,100,48,197,26,22,158,87,125,141,
    66,102,73,58,182,92,165,240,174,25,216,144,97,250,151,28,
    166,45,58,6,76,226,166,189,71,13,71,202,34,72,218,191,
    133,60,112,22,64,244,101,40,149,188,98,9,142,107,217,113,
    212,151,152,56,226,17,158,18,184,244,198,231,208,113,102,18,
    112,127,147,9,199,71,28,12,184,162,106,212,204,90,181,38,
    56,115,93,186,105,213,204,80,169,169,11,204,81,106,179,251,
    46,21,242,242,133,96,158,68,72,63,124,8,218,119,7,250,
    62,135,47,44,236,159,65,118,200,180,223,43,148,71,39,111,
    174,234,245,169,9,161,203,89,149,147,168,253,107,26,39,115,
    15,30,238,230,210,236,230,210,164,138,133,73,248,78,114,240,
    80,109,93,59,175,19,12,244,245,23,95,169,150,223,251,137,
    139,253,245,75,163,169,76,2,55,12,94,235,251,174,124,152,
    109,118,101,227,107,42,200,252,29,39,52,245,243,171,19,114,
    27,176,253,19,121,20,164,184,67,150,234,242,197,153,199,146,
    137,212,221,235,34,90,121,237,44,208,162,11,68,125,132,125,
    76,215,36,233,167,216,208,173,86,109,169,134,200,33,79,54,
    241,0,185,40,44,179,177,92,179,26,11,53,171,54,103,242,
    149,196,34,30,10,234,86,109,161,33,244,223,14,98,172,110,
    236,224,186,31,0,159,191,140,76,
};

EmbeddedPython embedded_m5_internal_param_IntelTrace(
    "m5/internal/param_IntelTrace.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_IntelTrace.py",
    "m5.internal.param_IntelTrace",
    data_m5_internal_param_IntelTrace,
    2185,
    6519);

} // anonymous namespace