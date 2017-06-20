#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseCache[] = {
    120,156,189,89,109,83,28,199,17,238,217,123,129,59,64,128,
    16,32,9,36,78,72,72,103,197,2,91,214,91,34,89,182,
    36,43,85,113,149,37,101,81,74,50,118,101,179,236,206,113,
    11,119,187,151,221,1,233,92,80,149,10,170,36,127,32,254,
    150,143,249,144,127,147,31,144,202,95,73,186,123,110,150,189,
    227,78,162,156,128,128,214,108,79,111,207,116,247,211,61,47,
    235,65,231,95,1,255,190,172,0,36,255,22,0,62,254,10,
    104,0,52,5,172,9,16,82,128,127,6,182,10,16,223,2,
    191,0,239,0,214,44,144,22,236,99,35,7,223,89,16,142,
    242,59,69,104,228,152,35,160,93,6,153,135,181,2,188,10,
    39,33,47,139,176,85,134,248,119,32,132,8,5,188,246,135,
    192,31,134,119,168,29,27,37,86,56,12,196,44,51,179,4,
    254,8,51,203,224,143,114,99,4,218,19,32,71,97,109,140,
    196,214,78,161,218,235,168,118,156,213,254,147,212,250,216,51,
    13,254,41,18,199,121,125,75,146,121,146,228,241,198,89,203,
    132,153,229,36,172,157,54,237,169,76,251,76,166,61,157,105,
    207,100,218,179,153,246,217,76,251,92,166,125,62,211,158,203,
    180,231,51,237,11,153,246,69,110,163,133,167,97,115,1,54,
    43,176,121,9,106,232,244,201,212,154,69,144,57,216,188,12,
    107,151,65,226,239,34,236,99,92,252,211,153,55,174,240,27,
    83,233,27,75,252,198,85,88,187,10,18,127,151,244,27,69,
    88,173,206,96,172,131,255,224,191,42,198,26,212,40,146,29,
    25,39,65,20,58,65,88,139,2,139,250,139,68,8,25,30,
    145,161,14,68,158,16,68,254,1,140,15,223,234,64,100,15,
    80,177,32,91,26,22,236,113,99,207,130,118,21,118,5,108,
    230,193,207,193,46,14,83,160,9,108,8,216,183,224,251,28,
    9,236,33,205,99,32,47,66,94,105,124,108,114,32,181,166,
    33,216,43,192,110,1,86,95,239,90,196,216,42,65,252,119,
    248,97,158,149,14,179,82,11,118,145,230,97,63,15,123,69,
    120,133,66,200,218,44,145,249,226,245,46,90,138,156,213,106,
    30,103,251,44,99,46,153,226,7,113,232,54,165,154,192,182,
    211,114,99,183,233,60,118,19,249,196,245,234,178,90,54,82,
    81,178,220,114,85,221,230,215,114,228,143,102,75,177,186,40,
    148,106,4,27,181,32,244,157,102,228,111,55,164,26,38,93,
    78,45,104,72,199,225,206,95,53,91,81,172,158,198,113,20,
    219,228,82,102,54,34,55,125,131,28,234,53,162,68,86,105,
    52,30,198,38,245,138,164,107,45,214,72,19,224,169,210,203,
    190,76,188,56,104,41,140,148,214,72,210,164,173,74,49,98,
    146,60,71,178,82,143,154,114,101,75,54,155,50,150,55,87,
    54,100,243,54,147,27,137,114,215,27,114,101,125,59,104,248,
    43,175,239,221,89,105,181,85,61,10,87,176,63,8,149,68,
    167,52,86,122,220,177,140,34,167,73,241,155,96,195,9,216,
    36,167,46,27,45,25,143,17,247,60,13,42,38,196,168,40,
    138,156,168,138,49,108,21,240,47,39,230,173,17,241,44,32,
    163,60,50,148,240,148,207,34,136,194,42,96,203,130,120,158,
    240,177,137,191,130,2,138,40,89,165,62,139,251,126,77,222,
    208,220,205,28,69,93,51,119,25,83,8,46,148,124,64,97,
    14,129,129,81,128,205,34,104,192,32,206,52,130,226,54,81,
    20,39,53,22,42,207,67,242,87,64,239,34,84,118,161,3,
    163,253,28,136,112,2,84,153,170,6,114,103,112,192,63,50,
    18,87,171,52,253,103,140,8,85,15,146,232,77,200,126,167,
    54,231,206,42,122,230,69,251,249,250,166,244,84,178,128,140,
    111,163,237,138,231,134,97,164,42,174,239,87,92,165,226,96,
    125,91,201,164,162,162,202,82,82,165,80,218,147,6,84,169,
    190,118,203,128,136,2,142,32,210,15,126,224,41,124,152,226,
    7,142,66,34,21,2,162,30,249,9,242,73,197,134,84,54,
    77,82,145,147,35,158,8,227,197,33,81,26,30,229,78,225,
    243,35,51,19,6,101,181,104,32,148,200,70,77,149,25,141,
    110,146,56,60,19,226,51,240,72,241,142,219,216,150,172,29,
    17,164,112,66,212,212,115,56,102,232,157,37,51,140,213,108,
    74,24,133,126,27,103,22,120,215,104,208,179,12,192,81,134,
    224,52,194,111,8,105,17,255,47,138,25,203,203,119,64,87,
    52,192,163,210,167,128,195,46,58,145,71,16,238,99,153,169,
    90,92,39,216,26,206,196,69,106,209,203,246,60,145,11,68,
    46,18,89,48,6,31,159,213,99,189,86,223,165,145,44,54,
    149,141,162,160,228,140,81,126,87,54,157,59,200,38,44,132,
    171,148,21,22,229,206,65,86,228,169,104,198,15,137,162,40,
    231,91,14,146,151,84,162,41,123,88,25,37,10,66,158,90,
    7,137,192,46,178,169,104,86,135,13,134,109,2,102,22,157,
    27,25,116,218,20,29,134,166,125,206,84,64,135,36,52,40,
    237,57,82,85,232,227,227,10,145,75,199,239,232,3,120,109,
    28,130,215,125,26,116,162,3,175,49,134,85,25,255,38,44,
    47,215,241,126,186,34,78,245,192,138,48,149,239,131,169,171,
    212,202,29,182,247,196,224,212,177,242,151,25,56,209,196,172,
    172,49,207,176,209,158,37,27,178,64,154,197,133,253,85,56,
    139,107,181,197,107,245,39,188,86,243,122,207,59,44,93,144,
    115,92,147,117,163,64,206,168,229,96,166,179,6,39,37,164,
    173,56,122,219,174,68,181,138,98,107,169,126,62,88,74,150,
    151,146,251,88,25,43,15,185,38,233,218,168,171,95,44,91,
    84,189,232,213,167,111,61,201,107,31,63,57,142,46,86,14,
    23,46,167,179,166,34,166,166,201,149,150,241,49,151,237,68,
    197,84,173,143,217,203,229,212,203,52,233,175,105,152,50,187,
    56,39,102,17,63,101,193,115,113,116,125,230,93,21,247,226,
    223,99,114,59,217,43,129,246,219,246,170,158,41,27,65,230,
    216,31,119,97,228,216,76,176,87,80,231,111,12,54,138,7,
    216,160,191,156,1,250,159,129,119,154,2,254,4,20,125,12,
    114,7,232,105,94,80,184,167,72,252,183,192,25,209,103,157,
    231,186,178,74,107,59,75,96,185,73,238,178,168,94,246,191,
    134,191,100,210,201,44,206,185,206,94,50,187,56,231,211,154,
    196,176,57,210,2,156,239,46,94,20,150,186,155,144,152,174,
    72,7,25,122,80,240,211,77,32,86,228,227,195,208,176,30,
    192,161,185,124,127,128,32,90,222,230,196,148,149,193,197,167,
    68,110,166,144,16,134,119,44,211,90,128,193,171,176,163,171,
    253,119,52,118,158,103,59,62,196,25,154,106,72,177,94,48,
    88,191,153,98,93,242,170,244,142,15,20,68,45,10,241,190,
    37,240,20,137,27,49,58,180,229,65,22,96,173,72,89,193,
    27,102,209,73,26,97,234,21,85,183,174,37,143,157,241,76,
    187,41,141,178,14,32,145,183,199,92,7,40,134,15,26,110,
    115,221,119,31,82,149,75,104,36,207,164,145,101,166,61,145,
    157,54,165,128,24,52,115,126,188,109,166,191,115,204,53,224,
    14,240,90,166,167,205,136,247,35,143,19,255,101,93,86,154,
    178,185,142,103,197,122,208,170,212,26,238,6,71,35,215,49,
    235,185,49,75,113,56,123,55,14,201,117,162,81,197,139,66,
    44,200,219,158,138,226,138,47,241,8,37,253,202,141,10,87,
    243,74,144,84,220,117,236,117,61,165,33,221,157,143,188,43,
    117,227,141,132,55,160,91,111,168,121,2,209,116,240,92,28,
    224,38,124,7,210,101,83,31,217,210,226,204,219,107,157,33,
    184,194,225,225,72,181,117,77,162,77,132,189,76,228,35,56,
    153,26,126,171,19,187,132,92,84,20,115,86,201,82,227,217,
    116,124,65,239,36,135,147,242,95,226,8,73,169,47,117,58,
    169,89,36,73,57,68,231,113,162,37,42,227,107,101,195,28,
    97,58,202,204,49,195,60,197,116,156,153,19,134,57,201,244,
    52,51,167,12,243,12,211,105,102,206,24,230,44,211,179,204,
    60,103,152,231,153,206,49,115,222,48,47,48,189,200,204,5,
    195,172,48,189,196,204,69,195,188,204,244,10,51,151,12,243,
    42,211,107,204,172,26,230,71,76,175,51,243,103,134,249,49,
    211,27,204,92,54,204,21,166,159,48,243,83,195,188,201,244,
    51,102,222,50,204,219,76,239,48,243,174,97,222,99,250,115,
    102,254,194,48,239,51,125,192,204,207,13,243,33,211,47,152,
    249,165,185,156,123,196,204,199,176,246,132,110,151,136,243,21,
    149,207,161,255,181,124,114,17,58,129,242,179,247,127,173,154,
    246,221,19,158,181,125,15,58,91,165,65,21,83,100,77,26,
    211,21,115,83,152,211,88,214,30,190,230,153,57,156,190,142,
    23,75,87,73,29,150,249,99,55,144,235,173,30,242,15,7,
    69,240,240,217,225,81,106,203,62,111,14,219,103,56,90,250,
    0,202,209,18,175,194,243,120,136,200,243,33,226,1,29,34,
    118,217,112,199,210,231,136,3,0,22,82,251,201,149,161,124,
    227,244,248,64,159,19,104,102,110,171,37,67,223,190,14,217,
    173,63,119,31,115,220,169,188,255,8,153,125,90,78,156,193,
    189,254,225,44,163,133,43,99,27,135,173,144,230,213,241,7,
    144,17,250,55,131,208,234,83,200,174,94,246,3,34,188,94,
    165,75,149,253,69,234,254,133,62,240,195,125,117,236,196,110,
    184,33,19,58,84,126,80,6,247,141,124,250,207,240,212,185,
    126,239,36,73,228,177,198,193,189,164,139,124,199,79,234,90,
    31,57,95,54,93,186,153,77,234,56,152,76,100,188,35,89,
    231,81,101,105,4,2,93,159,62,181,216,71,71,45,138,113,
    47,226,59,73,24,69,45,237,144,35,136,209,40,180,111,232,
    102,247,117,101,29,183,31,13,76,190,208,107,15,116,119,86,
    198,184,59,195,83,149,62,239,4,137,163,162,150,211,144,59,
    178,193,138,63,40,68,154,233,212,158,101,246,53,182,233,190,
    117,154,1,158,208,189,104,59,84,3,125,210,35,102,124,210,
    205,238,11,6,138,74,50,16,42,186,215,64,133,159,212,213,
    62,114,173,88,214,164,242,234,78,20,58,174,231,201,68,171,
    60,162,40,233,167,219,241,195,93,234,226,123,52,200,152,7,
    249,128,8,41,47,103,148,227,174,242,74,159,55,16,152,45,
    220,82,203,46,128,28,73,144,6,160,172,239,237,80,75,125,
    222,78,228,239,183,101,168,2,183,145,245,211,209,36,105,32,
    62,157,247,246,240,5,220,161,247,131,31,116,186,14,236,36,
    125,124,113,141,15,234,124,63,169,118,162,100,147,149,188,167,
    155,212,240,165,54,63,246,29,78,185,27,201,192,185,112,167,
    153,11,61,168,75,253,164,54,20,134,21,227,201,101,132,116,
    125,88,138,148,242,190,32,203,237,251,222,155,56,80,210,89,
    223,174,213,100,39,27,62,44,101,180,119,113,213,205,126,104,
    164,207,61,77,114,85,224,75,204,197,48,148,30,93,193,101,
    146,250,39,188,150,116,176,255,126,177,193,154,189,214,246,79,
    153,208,224,215,186,38,52,80,140,87,123,222,140,249,178,33,
    209,115,61,163,232,207,137,250,20,232,227,250,22,71,109,199,
    209,151,126,248,220,112,156,147,56,254,125,14,188,65,214,119,
    44,120,252,19,69,60,0,78,139,35,252,88,165,98,73,240,
    89,187,231,11,176,158,49,173,157,250,2,172,157,216,196,177,
    199,211,29,2,127,169,52,231,94,218,76,240,5,208,51,183,
    169,191,52,241,183,20,251,50,116,110,192,237,107,233,78,131,
    42,55,223,58,234,59,93,220,228,241,61,0,31,251,237,207,
    136,79,91,163,230,237,101,99,242,242,35,220,64,216,180,127,
    112,118,36,93,33,240,199,210,230,109,94,184,178,114,7,174,
    121,113,80,62,207,246,21,90,213,233,63,215,211,41,195,237,
    166,243,141,108,70,113,251,155,200,151,156,87,93,51,233,92,
    84,104,17,51,157,254,243,232,150,61,52,148,22,194,78,253,
    21,145,151,247,195,253,79,26,145,183,37,253,142,204,133,193,
    50,95,69,77,23,249,253,71,89,13,204,40,147,61,253,126,
    76,111,77,247,112,113,215,131,245,218,20,218,254,46,126,73,
    181,143,64,96,250,248,198,161,215,42,10,113,250,196,247,20,
    221,39,27,206,156,88,110,4,24,142,152,53,164,210,157,13,
    255,231,6,17,135,10,122,230,205,19,200,50,125,199,167,63,
    57,60,164,125,22,103,4,125,130,44,141,151,48,227,232,28,
    144,19,101,60,9,228,115,163,19,165,252,232,72,41,95,26,
    202,241,23,164,49,49,101,149,243,165,145,81,49,232,103,1,
    243,176,108,45,44,150,196,127,1,114,144,172,31,
};

EmbeddedPython embedded_m5_internal_param_BaseCache(
    "m5/internal/param_BaseCache.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_BaseCache.py",
    "m5.internal.param_BaseCache",
    data_m5_internal_param_BaseCache,
    2845,
    9119);

} // anonymous namespace