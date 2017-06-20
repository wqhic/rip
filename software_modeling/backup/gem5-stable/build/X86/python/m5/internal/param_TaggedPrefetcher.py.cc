#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TaggedPrefetcher[] = {
    120,156,197,88,255,111,219,198,21,127,71,82,178,37,219,177,
    28,199,118,18,59,49,147,204,169,22,172,246,150,53,77,129,
    122,217,210,174,3,90,160,110,74,101,75,234,22,227,104,241,
    36,81,150,72,129,60,59,81,97,3,195,28,108,3,246,243,
    254,132,253,176,255,102,127,193,254,149,237,189,119,36,69,203,
    50,16,160,139,230,72,151,211,241,241,221,251,242,121,95,238,
    154,144,254,149,240,251,43,27,32,249,183,0,240,241,35,160,
    7,208,23,176,47,64,72,1,254,53,56,44,65,252,1,248,
    37,120,3,176,111,128,52,224,12,39,38,124,107,64,56,207,
    239,148,161,103,242,138,128,97,21,164,5,251,37,120,17,46,
    129,37,203,112,88,133,248,15,32,132,8,5,188,244,103,192,
    159,133,55,200,29,39,21,102,56,11,180,88,229,197,10,248,
    115,188,88,5,127,158,39,115,48,172,129,156,135,253,5,34,
    219,191,130,108,31,32,219,69,102,251,47,98,235,227,147,21,
    240,175,16,57,202,245,13,81,90,68,201,251,45,50,151,90,
    38,229,18,236,95,205,230,203,133,249,181,194,124,165,48,95,
    45,204,215,10,243,235,133,249,141,194,252,102,97,190,94,152,
    111,20,230,183,10,243,219,60,71,13,175,66,119,19,186,54,
    116,239,64,11,141,190,148,107,115,23,164,9,221,123,176,127,
    15,36,126,238,194,25,250,197,191,90,120,227,71,252,198,114,
    254,198,22,191,113,31,246,239,131,196,207,150,126,163,12,141,
    250,42,250,58,248,15,254,213,209,215,160,230,113,56,150,113,
    18,68,161,27,132,173,40,48,232,121,153,6,66,70,147,134,
    153,20,34,159,18,68,254,9,140,15,223,72,33,114,10,200,
    88,144,46,61,3,78,121,114,106,192,176,14,39,2,186,22,
    248,38,156,224,54,37,18,160,45,224,204,128,239,76,34,56,
    197,209,66,71,222,6,75,105,124,116,217,145,154,211,12,156,
    150,224,164,4,141,151,39,6,45,28,86,32,254,7,124,191,
    193,76,103,153,169,1,39,56,90,112,102,193,105,25,94,32,
    17,46,117,43,164,190,120,121,130,154,226,74,163,110,161,180,
    123,5,117,73,21,63,136,67,175,47,213,26,206,221,129,23,
    123,125,247,185,215,110,75,255,89,44,91,82,53,59,50,174,
    87,51,226,40,217,30,120,170,227,240,219,38,153,165,63,80,
    204,53,10,165,154,195,73,43,8,125,183,31,249,71,61,169,
    102,137,165,219,10,122,210,117,249,225,231,253,65,20,171,207,
    226,56,138,29,178,44,47,246,34,47,127,131,236,218,236,69,
    137,172,211,110,188,141,67,236,21,81,183,6,204,145,4,96,
    137,233,101,95,38,205,56,24,40,116,152,230,72,212,196,173,
    78,174,226,33,249,29,14,59,157,168,47,119,14,101,191,47,
    99,249,112,167,45,251,143,120,120,63,81,222,65,79,238,28,
    28,5,61,127,231,229,71,31,238,12,134,170,19,133,59,248,
    60,8,149,68,219,244,118,38,91,101,27,41,175,18,255,87,
    65,219,13,88,51,183,35,123,3,25,47,208,234,77,218,91,
    212,196,188,40,11,83,212,197,2,206,74,248,53,197,134,49,
    39,246,2,210,173,73,250,18,186,172,34,158,200,201,2,14,
    13,136,55,8,45,93,252,8,114,47,98,166,65,207,12,126,
    246,53,25,69,175,118,77,194,128,94,60,97,132,33,212,144,
    114,151,156,30,2,195,164,4,221,50,104,248,32,234,52,158,
    226,33,141,72,78,108,12,100,110,65,242,119,64,35,35,112,
    78,32,5,213,153,9,34,172,129,170,82,14,193,213,85,220,
    240,79,140,203,70,157,196,223,99,96,168,78,144,68,175,66,
    54,63,205,57,146,26,104,153,103,195,175,14,186,178,169,146,
    77,92,248,38,58,178,155,94,24,70,202,246,124,223,246,148,
    138,131,131,35,37,19,91,69,246,86,82,39,143,58,75,25,
    182,114,126,195,65,134,37,242,59,98,73,255,240,131,166,194,
    31,203,252,131,189,144,72,133,184,232,68,126,130,235,196,162,
    45,149,67,66,42,50,114,196,130,48,108,92,34,165,237,145,
    238,10,254,126,154,73,194,216,172,151,51,36,37,178,215,82,
    85,6,165,151,36,46,75,66,235,140,63,98,124,236,245,142,
    36,115,71,32,41,20,136,166,90,134,233,32,240,58,105,147,
    41,207,26,133,81,232,15,81,192,160,249,30,237,125,157,113,
    56,207,72,92,65,20,206,224,88,198,255,203,98,213,104,90,
    41,246,202,25,254,40,31,42,96,239,139,20,0,136,197,51,
    204,61,117,131,147,7,43,197,113,121,151,102,244,178,179,65,
    195,45,26,110,211,176,153,233,253,206,149,95,24,87,254,49,
    109,104,176,198,172,27,185,200,204,116,243,207,197,214,141,81,
    108,97,146,108,80,140,24,20,73,163,24,177,40,161,198,79,
    104,68,82,142,62,19,146,231,148,190,41,150,152,25,133,13,
    6,0,205,70,97,193,150,114,106,100,129,217,12,209,14,193,
    180,136,213,118,1,171,14,57,137,129,234,220,200,210,162,75,
    20,26,162,206,58,177,42,77,48,181,77,195,157,169,217,123,
    4,182,246,5,176,125,76,123,215,82,176,45,48,200,170,248,
    173,25,77,51,117,66,94,52,151,199,64,70,8,179,38,32,
    236,62,205,204,139,106,79,27,92,169,178,191,41,128,139,228,
    51,138,58,237,225,100,184,70,170,20,97,181,134,45,192,139,
    112,13,171,186,193,85,253,167,92,213,185,51,224,94,76,39,
    107,147,243,181,158,148,200,38,45,19,86,211,106,157,84,112,
    28,196,209,235,161,29,181,108,197,74,83,110,221,221,74,182,
    183,146,143,49,107,218,79,56,95,233,188,169,51,99,44,7,
    148,217,232,213,207,94,55,37,151,71,254,229,186,58,145,185,
    156,212,220,180,236,34,194,86,200,162,70,102,106,78,233,137,
    138,41,147,79,199,216,213,220,216,36,251,23,180,91,149,45,
    109,138,53,68,83,85,176,72,174,78,225,220,134,241,83,252,
    126,66,214,39,181,37,80,131,238,52,180,192,172,11,105,229,
    252,228,28,98,222,181,38,206,14,178,254,109,134,148,242,8,
    41,244,53,51,244,255,5,184,67,21,240,103,32,44,160,203,
    83,244,231,193,66,206,95,38,242,223,3,135,201,132,142,128,
    115,78,131,186,0,166,192,84,148,60,102,82,221,32,124,1,
    127,45,196,88,86,198,205,180,7,45,150,113,43,207,87,12,
    162,183,42,213,214,249,196,70,222,233,120,9,145,233,108,53,
    10,219,81,77,200,187,70,204,214,239,28,81,179,122,31,151,
    68,250,110,132,39,42,132,235,98,217,40,160,228,103,52,60,
    204,1,34,178,181,119,41,221,38,92,94,182,93,93,23,190,
    37,17,44,22,122,113,70,145,119,198,25,229,113,80,202,226,
    224,97,30,7,146,203,216,27,62,157,208,104,144,223,207,12,
    129,71,82,236,227,232,4,104,129,44,193,126,153,34,134,219,
    110,145,6,148,200,82,26,37,192,115,53,146,77,179,167,141,
    150,187,94,123,149,134,215,211,73,21,228,216,221,158,215,63,
    240,189,39,148,15,19,218,176,153,133,152,145,73,95,43,74,
    79,225,33,46,83,128,127,62,202,180,56,158,78,154,248,16,
    184,6,106,233,57,40,252,168,201,185,225,121,71,218,125,217,
    63,192,99,104,39,24,216,173,158,215,102,223,152,169,118,95,
    101,218,41,118,238,120,223,145,60,160,49,178,155,81,136,25,
    252,168,169,162,216,246,37,30,203,164,111,191,111,115,250,183,
    131,196,246,14,240,169,215,84,26,238,231,67,150,91,92,47,
    110,39,220,205,30,190,162,233,244,124,235,226,201,59,192,198,
    254,24,242,114,171,79,131,121,54,231,150,93,71,15,86,70,
    60,112,169,161,206,94,212,131,56,219,52,252,24,166,154,244,
    63,72,61,153,144,193,202,98,221,168,24,106,117,66,196,62,
    35,14,201,197,184,61,120,155,184,213,151,72,105,244,150,137,
    82,206,208,249,159,198,10,165,127,186,35,42,165,119,68,180,
    168,239,136,202,188,114,133,226,124,230,135,198,57,135,201,244,
    2,228,244,127,26,222,206,227,255,143,240,206,71,144,150,253,
    203,66,91,20,53,91,208,161,221,21,217,169,163,168,22,223,
    113,220,186,20,89,110,51,150,158,146,218,87,27,211,82,151,
    211,132,222,249,143,163,160,189,216,35,63,205,53,59,227,182,
    103,120,141,93,168,143,93,236,66,241,34,188,137,205,178,197,
    205,242,46,53,203,39,108,6,215,208,253,242,8,156,165,220,
    26,116,209,18,202,87,23,4,211,22,209,109,49,9,232,13,
    6,50,244,157,7,80,236,116,249,241,116,48,65,201,233,13,
    20,26,17,83,92,195,214,246,98,60,82,246,45,104,202,190,
    44,229,17,56,53,175,50,136,255,150,129,184,190,8,197,20,
    236,236,210,192,73,55,207,183,206,47,115,159,220,185,28,161,
    190,108,199,82,210,153,234,45,168,176,57,98,223,233,159,108,
    66,70,191,47,123,82,201,75,92,206,189,82,122,202,246,37,
    150,185,104,136,7,30,62,63,224,239,158,235,78,177,48,252,
    66,167,41,72,168,100,97,97,16,101,44,13,43,70,165,92,
    17,92,111,199,46,152,181,80,116,111,163,251,228,97,226,112,
    6,89,204,45,203,55,160,89,209,35,39,240,185,110,207,235,
    235,171,43,190,149,113,238,65,122,122,118,222,203,61,68,23,
    11,124,56,209,7,65,140,24,238,5,184,244,59,63,167,117,
    122,181,255,104,59,211,106,91,107,245,245,145,60,42,106,197,
    87,177,253,71,202,158,72,253,137,151,200,2,237,245,137,68,
    141,97,162,100,95,173,143,61,148,225,81,223,253,82,246,163,
    120,248,101,228,75,181,49,246,252,169,239,199,142,23,182,165,
    123,44,169,173,97,252,156,35,72,123,26,205,35,163,154,44,
    232,121,218,11,178,104,34,124,168,111,47,185,95,191,248,252,
    211,94,212,60,148,126,74,115,235,114,154,95,71,125,15,215,
    39,239,210,8,178,93,150,198,158,251,49,189,181,50,182,154,
    200,56,240,122,193,247,250,82,52,91,230,126,227,18,151,81,
    64,140,47,114,207,50,177,148,112,228,196,178,29,160,151,98,
    102,59,254,110,154,90,9,220,234,222,229,65,92,228,51,189,
    152,211,7,4,125,179,241,132,110,210,56,134,232,250,179,178,
    88,193,248,163,196,107,138,42,166,94,203,156,175,85,172,249,
    185,138,85,153,49,249,190,106,1,79,134,85,171,50,55,47,
    46,251,183,137,145,91,53,54,107,21,241,95,86,232,106,141,
};

EmbeddedPython embedded_m5_internal_param_TaggedPrefetcher(
    "m5/internal/param_TaggedPrefetcher.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_TaggedPrefetcher.py",
    "m5.internal.param_TaggedPrefetcher",
    data_m5_internal_param_TaggedPrefetcher,
    2336,
    7216);

} // anonymous namespace