#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TournamentBP[] = {
    120,156,189,89,253,114,219,198,17,223,3,64,74,164,36,235,
    91,178,62,108,177,31,110,24,79,34,181,110,92,119,38,170,
    27,43,147,78,155,153,42,46,232,140,29,38,83,20,2,78,
    34,40,16,224,0,39,203,204,72,127,180,242,180,121,129,62,
    66,255,232,219,244,17,250,38,237,238,30,1,130,18,229,81,
    166,21,45,241,124,92,44,246,246,227,183,123,123,39,15,250,
    255,74,248,249,164,6,144,38,2,192,199,95,1,33,64,71,
    64,83,128,144,2,252,37,56,46,65,242,17,248,37,120,11,
    208,52,64,26,112,129,19,19,190,54,32,154,230,119,202,16,
    154,76,17,208,171,130,180,160,89,130,151,209,60,88,178,12,
    199,85,72,254,4,66,136,72,192,43,127,2,252,73,120,139,
    210,113,82,97,129,147,64,196,42,19,43,224,79,49,177,10,
    254,52,79,166,160,55,7,114,26,154,51,196,214,188,131,98,
    31,162,216,89,22,251,47,18,235,227,147,101,240,239,16,59,
    234,245,21,113,90,196,201,235,205,178,148,185,76,203,121,104,
    46,100,243,197,194,124,169,48,95,230,57,174,186,0,237,21,
    104,175,66,251,46,28,162,35,230,243,21,214,64,154,208,94,
    135,230,58,72,252,93,131,11,244,149,191,80,120,99,131,223,
    88,204,223,216,228,55,238,65,243,30,72,252,221,212,111,148,
    161,81,95,65,255,7,255,193,127,117,244,63,168,105,28,94,
    203,36,13,226,200,9,162,195,56,48,232,121,153,6,138,150,
    71,195,68,63,108,159,82,216,254,9,28,51,223,232,135,237,
    28,80,176,32,91,66,3,206,121,114,110,64,175,14,103,2,
    218,22,248,38,156,225,50,37,82,224,72,192,133,1,223,152,
    196,112,142,163,133,206,189,15,150,210,49,107,179,115,181,164,
    9,56,47,193,89,9,26,175,206,12,34,28,87,32,249,7,
    124,187,201,66,39,89,168,1,103,56,90,112,97,193,121,25,
    94,34,19,146,218,21,50,95,188,58,67,75,145,210,168,91,
    168,237,126,193,92,50,197,15,146,200,237,72,181,136,115,167,
    235,38,110,199,121,17,159,48,45,82,123,207,235,213,140,49,
    78,183,187,174,106,217,252,166,73,46,233,116,21,75,140,35,
    169,166,112,114,24,68,190,211,137,253,147,80,170,73,18,231,
    28,6,161,116,28,126,248,187,78,55,78,212,103,73,18,39,
    54,121,149,137,97,236,230,111,144,79,189,48,78,101,157,86,
    227,101,108,18,175,136,251,176,203,18,73,1,214,150,94,246,
    101,234,37,65,87,97,176,180,68,226,38,105,117,10,19,15,
    169,141,195,78,43,238,200,157,99,217,233,200,68,62,218,57,
    146,157,199,60,124,152,42,247,32,148,59,7,39,65,232,239,
    60,179,127,191,211,237,169,86,28,237,224,243,32,82,18,125,
    16,238,92,245,200,54,114,45,144,236,211,224,200,9,216,42,
    167,37,195,174,76,102,136,186,78,235,138,57,49,45,202,194,
    20,117,49,131,179,18,126,76,177,105,76,137,253,128,236,242,
    200,86,66,149,85,196,17,5,87,192,177,1,201,38,161,164,
    141,191,130,194,138,88,105,208,51,131,159,253,129,28,162,169,
    109,147,98,175,137,103,140,44,132,24,114,238,82,176,35,96,
    120,148,160,93,6,13,27,68,155,198,81,210,163,17,217,73,
    140,129,194,45,72,255,14,232,96,4,204,25,244,193,116,97,
    130,136,230,64,85,41,159,145,186,130,11,254,133,241,216,168,
    147,250,251,12,10,213,10,210,248,52,98,215,211,156,51,168,
    129,158,121,222,251,226,160,45,61,149,110,33,225,171,248,164,
    230,185,81,20,171,154,235,251,53,87,169,36,56,56,81,50,
    173,169,184,246,32,173,83,52,237,249,12,87,185,188,94,55,
    195,17,249,30,113,164,191,248,129,167,240,11,3,214,225,40,
    164,82,33,38,90,177,159,34,157,68,28,73,101,147,146,138,
    156,28,179,34,12,25,135,88,105,121,228,187,131,223,159,101,
    154,48,46,235,229,12,69,169,12,15,85,149,1,233,166,169,
    195,154,16,157,177,71,130,95,187,225,137,100,233,8,34,133,
    10,209,84,235,112,251,232,187,75,150,100,134,179,53,81,28,
    249,61,100,9,188,247,104,221,187,140,193,105,70,225,50,34,
    112,2,199,50,254,95,22,43,134,103,245,113,87,206,176,71,
    53,80,1,71,94,244,131,143,56,188,192,122,83,55,184,96,
    176,65,156,143,63,164,25,189,108,111,210,112,143,134,251,52,
    108,101,54,223,170,225,51,151,13,127,66,139,25,108,45,219,
    69,161,49,51,187,252,161,156,90,27,228,20,22,197,6,229,
    134,65,25,52,200,13,139,10,104,242,148,70,100,229,172,51,
    33,125,65,229,154,114,136,133,81,186,32,240,105,54,72,7,
    246,146,61,71,214,79,102,72,182,9,158,69,140,30,21,48,
    106,83,128,24,160,246,90,86,10,29,226,208,208,180,55,72,
    84,105,132,155,107,52,252,96,44,190,30,128,236,232,10,200,
    62,166,117,231,250,32,155,97,112,85,241,51,103,120,102,63,
    0,249,6,185,120,9,92,132,44,107,4,178,126,66,51,243,
    170,201,227,4,85,223,208,223,20,64,69,186,25,69,123,246,
    113,210,91,37,51,138,112,90,197,173,254,101,180,138,187,183,
    193,187,247,79,121,247,230,14,128,251,32,93,156,77,174,207,
    122,82,34,127,28,154,176,210,223,149,211,10,142,221,36,126,
    211,171,197,135,53,197,6,83,45,221,125,144,110,63,72,63,
    198,42,89,123,202,245,73,215,73,93,9,19,217,165,74,70,
    175,126,246,198,147,188,21,242,55,199,209,133,203,225,34,230,
    244,183,88,68,214,50,121,211,200,220,204,37,60,85,9,85,
    238,219,119,116,53,119,52,233,253,57,173,84,101,47,155,98,
    21,81,84,21,172,142,163,203,53,183,90,252,20,63,123,228,
    121,50,89,2,53,198,118,67,43,203,118,144,69,246,7,67,
    72,185,77,43,236,29,20,251,101,134,144,242,0,33,244,49,
    51,196,255,13,184,3,21,240,87,32,12,96,168,251,136,207,
    19,132,130,190,72,236,127,4,78,141,17,59,63,215,152,6,
    237,246,204,129,165,39,125,194,172,186,17,248,28,190,43,228,
    85,182,93,155,253,30,179,184,93,91,121,125,98,240,220,104,
    75,182,134,11,25,69,166,229,166,196,166,171,211,32,85,7,
    245,63,239,12,177,58,223,42,146,38,245,26,14,169,243,205,
    0,71,180,225,109,136,69,163,128,142,159,209,240,40,7,134,
    200,104,183,165,217,22,92,191,53,59,186,254,127,77,203,91,
    172,240,236,4,247,75,69,33,57,238,75,25,238,31,229,184,
    151,188,85,189,229,19,7,141,6,197,250,194,16,120,244,195,
    30,141,78,90,22,200,18,52,203,148,33,220,78,139,126,2,
    137,172,124,81,177,27,218,7,217,37,251,218,89,121,184,117,
    36,105,120,115,251,101,129,130,185,27,186,157,3,223,125,122,
    76,235,208,98,94,150,82,70,166,249,92,81,115,74,7,113,
    157,242,252,245,113,102,193,235,219,47,9,191,64,177,185,230,
    156,0,126,236,113,29,120,209,146,181,142,236,28,224,145,178,
    21,116,107,135,161,123,196,49,49,251,150,125,145,89,166,56,
    168,151,123,138,244,33,141,113,205,139,35,172,210,39,158,138,
    147,154,47,241,152,37,253,218,135,53,46,241,181,32,173,185,
    7,248,212,245,148,134,247,112,122,114,219,234,38,71,41,119,
    168,199,167,52,29,79,76,29,60,65,7,216,168,119,32,223,
    78,245,201,46,175,216,220,130,235,108,193,157,15,15,80,170,
    167,171,20,245,23,246,54,13,239,195,216,10,251,71,192,232,
    130,148,28,85,22,27,70,197,224,115,94,145,239,57,189,153,
    94,205,209,127,223,36,71,245,197,76,63,83,203,196,41,39,
    232,252,78,99,133,202,123,179,154,17,167,120,156,102,226,76,
    70,188,195,227,44,19,231,50,226,60,143,11,76,92,204,136,
    75,60,46,51,113,37,35,174,242,120,151,137,107,25,113,157,
    199,13,38,110,102,151,76,247,152,120,31,154,91,116,35,67,
    148,26,85,148,137,255,181,162,112,82,142,39,29,213,255,181,
    144,216,79,198,175,184,253,75,232,55,19,215,21,17,81,180,
    106,70,191,219,22,217,217,165,104,18,223,142,172,141,196,178,
    227,37,210,85,82,199,103,115,28,102,114,33,210,171,158,14,
    74,195,213,78,251,89,110,209,5,55,81,189,37,14,155,62,
    180,113,216,196,203,104,29,91,110,139,91,238,93,106,185,207,
    216,124,199,208,93,247,0,140,165,220,11,116,216,141,228,169,
    115,213,19,186,177,38,229,220,110,87,70,190,253,16,138,189,
    50,63,190,125,12,80,233,251,51,20,90,26,83,44,97,115,
    124,53,239,168,174,23,44,228,248,149,242,76,27,75,36,25,
    176,223,101,128,173,211,185,116,80,220,237,93,26,184,156,231,
    149,220,254,117,30,135,31,95,131,198,86,28,120,242,83,149,
    236,5,42,165,3,217,205,24,177,217,226,115,220,16,85,61,
    124,215,171,207,19,73,23,73,113,210,8,190,149,188,210,247,
    96,167,245,22,243,245,134,158,93,167,240,81,24,31,184,225,
    13,44,27,102,204,44,27,162,94,167,170,102,186,177,101,163,
    216,51,203,70,60,83,63,26,45,38,140,189,97,195,110,194,
    71,235,80,239,91,36,170,15,222,241,226,111,131,20,245,232,
    189,32,172,230,134,125,175,23,104,201,229,108,201,203,79,213,
    251,239,16,117,213,163,55,231,166,85,23,178,85,135,30,113,
    174,115,89,246,101,40,149,28,81,147,20,229,79,255,2,201,
    151,216,229,197,61,60,211,243,49,25,191,135,142,51,166,222,
    232,87,253,36,231,219,109,236,141,68,25,187,163,101,81,248,
    49,42,229,138,224,182,243,210,223,76,180,114,116,72,212,71,
    195,30,235,8,246,108,94,10,248,98,63,235,255,168,106,240,
    21,198,62,46,175,255,90,64,151,142,54,97,138,47,137,236,
    247,242,146,66,174,227,243,184,190,243,192,178,206,45,49,119,
    192,246,207,137,78,37,169,243,120,59,179,110,91,91,183,151,
    184,145,215,202,99,193,127,96,232,60,86,27,35,153,27,65,
    71,223,100,171,249,75,207,253,196,197,249,242,37,106,42,147,
    192,13,9,81,100,87,70,102,182,209,171,147,238,123,244,245,
    75,108,151,185,11,189,178,85,51,0,18,121,132,152,69,39,
    145,168,75,66,250,59,24,133,137,143,160,35,160,89,20,49,
    30,212,232,147,157,190,122,122,74,87,156,233,39,56,208,157,
    116,101,182,130,8,162,189,205,20,85,220,221,44,115,122,174,
    98,77,79,85,172,202,132,201,151,137,51,120,140,175,90,149,
    169,105,161,127,182,16,93,85,99,107,165,34,254,11,158,49,
    204,174,
};

EmbeddedPython embedded_m5_internal_param_TournamentBP(
    "m5/internal/param_TournamentBP.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_TournamentBP.py",
    "m5.internal.param_TournamentBP",
    data_m5_internal_param_TournamentBP,
    2386,
    7483);

} // anonymous namespace