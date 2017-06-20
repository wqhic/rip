#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasicIntLink[] = {
    120,156,189,88,123,111,220,198,17,159,37,121,39,221,233,100,
    73,150,37,249,33,91,108,11,55,87,163,145,90,55,142,3,
    68,117,155,164,41,144,160,80,82,94,10,59,151,160,44,143,
    92,73,60,241,113,32,87,150,207,144,80,160,50,210,126,129,
    246,27,244,143,126,155,126,163,102,102,150,228,81,175,38,64,
    171,147,143,235,229,114,118,118,30,191,153,157,93,31,138,191,
    6,62,191,182,1,242,127,8,128,0,127,2,34,128,88,64,
    95,128,144,2,130,91,112,208,128,236,29,8,26,240,6,160,
    111,128,52,224,20,59,38,124,101,64,210,225,57,77,136,76,
    30,17,48,110,131,180,160,223,128,231,201,18,88,178,9,7,
    109,200,254,4,66,136,68,192,139,96,6,130,89,120,131,220,
    177,211,98,134,179,64,131,109,30,108,65,48,199,131,109,8,
    58,220,153,131,241,34,200,14,244,231,137,172,127,3,217,62,
    66,182,11,204,246,223,196,54,192,47,43,16,220,32,114,148,
    235,75,162,180,136,146,215,91,96,46,139,165,148,75,208,191,
    89,246,151,107,253,91,181,254,74,173,191,90,235,175,213,250,
    183,185,143,146,221,132,225,29,24,222,133,225,61,216,69,99,
    45,85,82,172,131,52,97,120,31,250,247,65,226,111,29,78,
    209,158,193,205,218,140,7,60,99,185,154,177,193,51,108,232,
    219,32,241,183,161,103,52,161,215,93,69,31,133,255,193,191,
    46,250,8,84,7,155,151,50,203,195,52,113,195,100,55,13,
    13,250,222,164,134,60,234,83,51,83,184,246,35,114,237,191,
    128,253,26,24,133,107,79,0,25,11,210,37,50,224,132,59,
    39,6,140,187,112,44,96,104,65,96,194,49,46,211,32,1,
    246,4,156,26,240,181,73,4,39,216,90,232,128,7,96,41,
    237,215,33,59,64,115,154,129,147,6,28,55,160,247,226,216,
    160,129,131,22,100,255,132,215,235,204,116,150,153,26,112,140,
    173,5,167,22,156,52,225,57,18,225,208,176,69,234,139,23,
    199,168,41,142,244,186,22,74,187,83,83,151,84,9,194,44,
    241,98,169,150,177,239,142,188,204,139,221,15,189,60,244,63,
    73,212,239,194,228,160,219,46,9,211,124,115,228,169,125,135,
    103,154,100,146,120,164,152,99,154,72,53,135,157,221,48,9,
    220,56,13,14,35,169,102,137,157,187,27,70,210,117,249,227,
    39,241,40,205,212,199,89,150,102,14,89,149,7,163,212,171,
    102,144,77,253,40,205,101,151,86,227,101,28,98,175,136,122,
    119,196,28,73,0,150,150,38,7,50,247,179,112,164,208,89,
    154,35,81,19,183,46,185,137,155,220,193,102,107,63,141,229,
    214,129,140,99,153,201,199,91,123,50,126,194,205,219,185,242,
    6,145,220,26,28,134,81,176,245,226,189,119,183,70,99,181,
    159,38,91,248,61,76,148,68,187,68,91,23,45,178,137,84,
    55,137,247,81,184,231,134,172,149,187,47,163,145,204,230,105,
    244,46,173,43,22,69,71,52,133,41,186,98,30,123,13,124,
    76,177,110,204,137,157,144,244,242,73,87,66,149,85,199,17,
    57,87,192,129,1,217,58,161,100,136,63,65,110,69,172,244,
    232,155,193,223,126,79,6,209,163,67,147,124,175,7,143,25,
    89,8,49,164,220,38,103,39,192,240,104,192,176,9,26,54,
    136,54,141,163,108,76,45,146,19,27,3,153,91,144,255,29,
    208,192,8,152,99,40,192,116,106,130,72,22,65,181,41,230,
    113,116,21,23,252,11,227,177,215,37,241,119,24,20,106,63,
    204,211,163,132,77,79,125,142,160,30,90,230,243,241,103,131,
    161,244,85,190,129,3,95,166,135,182,239,37,73,170,108,47,
    8,108,79,169,44,28,28,42,153,219,42,181,31,230,93,242,
    166,179,84,226,170,226,55,30,149,56,34,159,35,142,244,75,
    16,250,10,95,24,176,46,123,33,151,10,49,177,159,6,57,
    142,19,139,61,169,28,18,82,145,145,83,22,132,33,227,18,
    41,45,143,116,55,240,253,131,82,18,198,101,183,89,162,40,
    151,209,174,106,51,32,189,60,119,89,18,26,103,236,17,227,
    151,94,116,40,153,59,130,72,161,64,212,213,50,92,63,250,
    110,147,38,165,226,172,77,146,38,193,24,133,11,253,183,104,
    221,219,140,193,14,163,112,5,17,56,131,109,19,255,111,138,
    85,195,183,10,220,53,75,236,81,14,84,192,158,23,133,243,
    17,135,167,152,111,186,6,39,12,86,136,227,241,135,212,163,
    201,206,58,53,247,169,121,64,205,70,169,243,181,42,62,127,
    94,241,167,180,152,193,218,178,94,228,26,179,212,43,56,19,
    83,119,38,49,133,73,177,71,177,97,80,4,77,98,195,162,
    4,154,61,163,22,73,57,234,76,200,191,160,116,77,49,196,
    204,40,92,16,248,212,155,132,3,91,201,89,36,237,103,75,
    36,59,4,207,58,70,247,106,24,117,200,65,12,80,231,78,
    153,10,93,162,208,208,116,238,17,171,198,37,102,182,169,249,
    193,84,108,61,1,217,222,5,144,189,79,235,46,22,32,155,
    103,112,181,241,89,52,124,179,112,64,181,65,46,159,3,23,
    33,203,186,4,89,63,166,158,121,81,229,105,130,170,80,244,
    183,53,80,145,108,70,93,159,29,236,140,215,72,141,58,156,
    214,112,171,127,158,172,225,238,109,240,238,253,51,222,189,185,
    2,224,90,73,39,103,147,243,179,238,52,200,30,187,38,172,
    22,187,114,222,194,118,148,165,175,198,118,186,107,43,86,152,
    114,233,246,195,124,243,97,254,62,102,73,251,25,231,39,157,
    39,117,38,204,228,136,50,25,77,253,248,149,47,121,43,228,
    55,215,213,137,203,229,36,230,22,91,44,34,107,133,172,105,
    148,102,230,20,158,171,140,50,247,245,27,186,93,25,154,228,
    254,148,86,106,179,149,77,177,134,40,106,11,22,199,213,233,
    154,75,45,254,138,207,135,100,121,82,89,2,21,207,78,79,
    11,203,122,144,70,206,79,207,32,229,58,181,112,182,144,237,
    31,74,132,52,39,8,161,199,44,17,255,87,224,10,84,192,
    55,64,24,64,87,23,136,175,2,132,156,190,76,228,127,4,
    14,141,75,118,126,206,49,61,218,237,153,2,83,79,254,148,
    73,117,33,240,41,252,173,22,87,229,118,109,22,53,102,125,
    187,182,170,252,196,224,249,94,91,178,117,54,145,145,103,246,
    189,156,200,116,118,154,132,234,36,255,87,149,33,102,231,107,
    69,210,172,94,195,37,113,190,158,224,136,54,188,123,98,217,
    168,161,227,231,212,60,174,128,33,202,177,235,146,108,3,174,
    222,154,93,157,255,191,162,229,45,22,120,97,134,235,165,58,
    147,10,247,141,18,247,143,43,220,75,222,170,222,240,137,131,
    90,131,124,125,106,8,60,30,98,141,70,167,49,11,100,3,
    250,77,138,16,46,167,69,17,64,162,76,95,148,236,206,236,
    131,108,146,29,109,172,202,221,218,147,212,188,186,254,180,64,
    206,220,142,188,120,16,120,207,18,90,135,22,243,203,144,50,
    74,201,23,235,146,83,56,136,171,132,231,215,39,165,6,47,
    175,63,37,188,139,108,43,201,57,0,130,212,231,60,240,197,
    190,180,99,25,15,240,72,185,31,142,236,221,200,219,99,159,
    152,133,102,159,149,154,41,118,234,249,154,34,127,68,109,106,
    251,105,130,89,250,208,87,105,102,7,18,143,89,50,176,223,
    182,57,197,219,97,110,123,3,252,234,249,74,195,251,108,120,
    114,217,234,101,123,57,87,168,7,71,212,157,142,79,93,60,
    65,135,88,168,143,160,218,78,245,201,174,202,216,92,130,235,
    104,193,157,15,15,80,106,172,179,20,213,23,206,38,53,63,
    129,169,37,246,119,144,109,76,252,201,80,77,113,207,104,25,
    124,206,171,211,125,78,51,243,139,49,122,244,125,98,84,95,
    222,20,145,218,36,74,57,67,231,119,106,91,148,222,251,237,
    114,112,142,219,14,15,206,151,247,67,55,120,112,129,239,92,
    154,60,178,68,129,62,243,191,6,58,199,202,116,162,228,232,
    255,26,223,206,211,233,11,238,188,7,197,30,127,85,108,139,
    186,86,243,58,182,135,162,60,82,212,85,226,75,139,59,151,
    66,204,245,51,233,41,169,253,179,62,13,53,57,63,232,85,
    95,79,34,246,98,1,252,65,165,209,41,215,54,227,91,236,
    54,125,150,98,183,137,231,201,93,172,132,45,174,132,183,169,
    18,62,102,245,93,67,23,195,19,48,54,42,43,208,25,52,
    145,71,238,69,75,232,122,151,132,243,70,35,153,4,206,35,
    168,151,176,252,249,250,49,64,25,233,207,80,171,52,76,113,
    11,107,214,139,113,71,233,182,166,33,251,175,81,69,218,84,
    60,201,128,253,166,4,108,151,114,216,36,231,58,219,212,112,
    150,173,18,172,243,171,202,15,247,47,71,99,146,6,210,245,
    232,128,244,29,20,88,245,176,175,244,235,127,37,30,124,39,
    187,193,89,118,3,246,2,7,76,32,35,169,228,37,104,81,
    164,89,113,226,14,36,110,139,233,24,15,65,124,174,192,247,
    200,117,167,180,153,252,18,217,190,132,34,173,225,102,34,154,
    184,157,172,136,21,163,213,108,9,222,157,207,93,45,107,145,
    232,104,175,43,232,49,75,6,206,66,229,26,190,255,44,183,
    73,242,34,159,244,118,188,88,95,94,241,221,140,243,35,40,
    206,210,206,91,149,139,201,96,124,108,209,71,67,12,51,174,
    28,184,80,112,126,81,122,61,126,178,89,234,180,89,211,201,
    73,241,80,144,241,29,108,252,132,203,219,139,132,31,69,169,
    127,32,3,125,225,119,5,51,166,249,77,26,123,56,126,239,
    82,138,94,24,23,28,150,206,125,15,50,154,181,114,110,52,
    151,89,232,69,225,107,121,5,63,22,159,252,193,150,43,63,
    42,50,232,121,130,86,9,66,122,227,66,224,66,90,102,72,
    101,114,47,204,201,28,11,245,9,69,158,34,151,179,129,46,
    129,115,125,242,116,16,168,203,106,125,238,127,70,247,75,57,
    93,107,208,133,96,107,161,133,104,164,12,102,226,153,123,94,
    88,102,103,177,101,117,230,90,86,107,198,228,155,156,121,60,
    67,181,173,214,92,71,212,255,109,32,114,219,198,198,82,75,
    124,11,162,178,245,218,
};

EmbeddedPython embedded_m5_internal_param_BasicIntLink(
    "m5/internal/param_BasicIntLink.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_BasicIntLink.py",
    "m5.internal.param_BasicIntLink",
    data_m5_internal_param_BasicIntLink,
    2262,
    6882);

} // anonymous namespace