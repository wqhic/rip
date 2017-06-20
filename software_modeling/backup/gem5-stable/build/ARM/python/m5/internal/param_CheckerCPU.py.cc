#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CheckerCPU[] = {
    120,156,189,88,95,115,219,198,17,223,3,64,74,164,36,139,
    178,36,203,127,100,139,118,234,152,113,99,49,86,227,186,51,
    113,61,149,213,116,38,153,88,86,65,123,236,40,153,162,16,
    113,162,64,129,0,7,56,217,102,70,154,118,34,79,155,62,
    245,169,249,6,125,232,183,233,55,106,119,247,0,18,164,168,
    169,59,173,100,145,231,229,221,222,222,238,222,111,119,239,174,
    9,233,191,2,126,127,85,5,72,66,3,192,195,143,128,0,
    160,35,96,91,128,144,2,188,5,216,47,64,252,41,120,5,
    120,7,176,109,128,52,224,24,9,19,190,49,32,156,230,57,
    69,8,76,238,17,208,43,131,180,96,187,0,47,195,57,176,
    100,17,246,203,16,255,30,132,16,161,128,87,222,4,120,147,
    240,14,165,35,81,98,129,147,64,157,101,238,44,129,55,197,
    157,101,240,166,153,152,130,94,5,228,52,108,207,16,219,246,
    5,20,123,23,197,206,178,216,127,146,88,15,71,22,193,187,
    64,236,168,215,215,196,105,17,39,175,55,203,82,42,153,150,
    115,176,125,49,163,231,115,244,66,142,94,204,209,151,114,244,
    82,142,190,156,163,175,228,232,171,57,250,90,142,94,206,209,
    215,115,244,141,28,189,146,163,171,57,250,102,142,190,149,163,
    63,200,209,63,201,209,183,115,244,135,57,250,78,142,174,229,
    232,143,114,244,93,166,209,227,23,161,253,83,104,127,12,237,
    123,176,139,32,152,235,123,119,21,164,9,237,58,108,215,65,
    226,103,21,142,17,39,222,197,220,140,79,120,198,124,127,198,
    125,158,177,6,219,107,32,241,115,95,207,40,66,163,118,9,
    177,231,255,11,255,213,4,82,106,26,155,215,50,78,252,40,
    116,252,112,55,242,13,26,47,82,67,72,109,82,51,145,66,
    118,131,32,251,15,96,188,122,70,10,217,35,64,193,130,108,
    9,12,56,98,226,200,128,94,13,14,5,180,45,240,76,56,
    196,101,10,164,64,75,192,177,1,223,154,196,112,132,173,133,
    192,186,1,150,210,120,109,51,176,180,164,9,56,42,192,97,
    1,26,175,14,13,234,216,47,65,252,119,248,110,153,133,78,
    178,80,3,14,177,181,224,216,130,163,34,188,68,38,236,106,
    151,200,124,241,234,16,45,197,158,70,205,66,109,55,115,230,
    146,41,158,31,135,110,71,170,57,164,157,174,27,187,29,103,
    99,79,54,247,101,188,177,245,162,86,206,216,162,100,181,235,
    170,61,155,231,153,228,144,78,87,177,188,40,148,106,10,137,
    93,63,244,156,78,228,29,4,82,77,146,48,103,215,15,164,
    227,240,224,23,157,110,20,171,207,227,56,138,109,242,41,119,
    6,145,219,159,65,30,109,6,81,34,107,180,26,47,99,147,
    120,69,220,187,93,150,72,10,176,174,52,217,147,73,51,246,
    187,10,183,74,75,36,110,146,86,163,77,226,38,217,194,166,
    190,23,117,100,125,95,118,58,50,150,107,245,150,236,60,224,
    230,94,162,220,157,64,214,119,14,252,192,171,175,219,79,235,
    221,158,218,139,194,58,142,251,161,146,232,149,160,62,234,143,
    85,228,185,72,146,223,248,45,199,103,155,156,61,25,116,101,
    60,67,189,87,105,85,81,17,211,162,40,76,81,19,51,72,
    21,240,107,138,101,99,74,108,250,100,85,147,44,37,68,89,
    121,12,209,198,10,216,55,32,94,38,132,180,241,35,104,75,
    17,39,13,26,51,120,236,183,228,14,221,219,54,105,223,117,
    231,33,163,10,225,133,156,143,104,163,67,96,104,20,160,93,
    4,13,25,68,154,198,80,220,163,22,217,73,140,129,194,45,
    72,254,6,232,94,4,203,33,164,64,58,54,65,132,21,80,
    101,202,99,216,123,9,23,252,158,177,216,168,145,250,155,12,
    9,181,231,39,209,155,144,29,79,52,71,79,3,61,179,213,
    123,182,211,150,77,149,172,96,199,215,209,65,181,233,134,97,
    164,170,174,231,85,93,165,98,127,231,64,201,164,170,162,234,
    237,164,70,123,105,207,101,168,234,203,235,117,51,20,209,142,
    35,138,244,15,207,111,42,252,49,207,63,120,23,18,169,16,
    17,123,145,151,96,63,137,104,73,101,147,146,138,156,28,177,
    34,12,24,135,88,105,121,228,187,128,191,215,51,77,24,149,
    181,98,134,161,68,6,187,170,204,112,116,147,196,97,77,168,
    159,145,71,130,95,187,193,129,100,233,8,33,133,10,17,169,
    117,56,107,236,93,38,59,50,179,217,150,48,10,189,30,170,
    230,55,239,208,170,151,25,129,211,140,193,69,196,223,4,182,
    69,252,191,40,46,25,77,43,69,93,49,67,30,101,63,5,
    188,239,34,221,122,68,225,49,102,154,154,193,169,130,205,225,
    88,188,69,20,77,182,151,169,185,78,205,13,106,86,50,139,
    207,208,236,153,81,179,31,210,82,6,219,202,86,209,182,152,
    153,85,222,80,60,93,25,196,19,38,195,6,197,133,65,209,
    51,136,11,139,18,103,252,152,90,100,229,136,51,33,121,78,
    105,154,226,135,133,81,168,32,232,137,26,132,2,251,200,174,
    144,237,147,25,138,109,130,102,30,159,173,28,62,109,218,30,
    6,167,125,37,75,130,14,113,104,88,218,215,72,84,97,140,
    147,171,212,220,60,7,79,15,0,214,58,1,176,207,104,213,
    74,10,176,25,6,86,25,191,21,163,105,166,238,239,151,197,
    249,17,96,17,170,172,49,168,250,144,40,243,164,193,231,7,
    168,212,204,223,228,0,69,154,25,121,107,54,145,232,45,145,
    17,121,40,45,97,121,127,25,46,97,197,54,184,98,127,194,
    21,155,171,62,159,251,116,82,54,57,47,107,162,64,222,216,
    53,225,82,90,137,147,18,182,221,56,122,219,171,70,187,85,
    197,230,82,14,125,116,59,89,189,157,124,134,217,177,250,152,
    243,146,206,143,58,3,198,178,75,25,140,166,126,254,182,41,
    185,0,242,47,199,209,9,203,225,228,229,164,133,21,81,181,
    72,190,52,50,39,115,234,78,84,76,25,251,172,221,92,238,
    187,153,180,254,146,214,41,179,143,77,177,132,8,42,11,86,
    198,209,73,154,15,87,60,138,223,39,228,119,50,88,2,93,
    3,236,134,86,149,173,32,123,236,143,135,80,114,118,54,216,
    117,20,250,34,67,71,113,128,14,250,154,25,214,255,12,124,
    226,20,240,39,160,253,199,109,78,177,222,15,13,218,240,121,
    98,255,29,112,80,140,169,246,156,91,26,84,225,153,3,83,
    78,242,144,89,117,241,255,18,126,200,69,84,86,162,205,244,
    76,153,47,209,86,63,47,49,112,222,171,12,91,195,9,140,
    246,101,207,77,136,77,103,165,65,144,14,178,126,255,44,136,
    89,249,12,81,52,169,87,112,72,153,111,7,24,162,34,119,
    77,204,27,57,100,220,167,102,173,15,10,145,245,157,141,94,
    43,112,122,49,118,116,206,255,134,22,183,88,221,217,9,14,
    135,129,136,62,222,11,25,222,215,250,120,151,92,156,222,241,
    221,130,90,131,118,249,216,16,120,193,197,19,25,221,39,45,
    144,5,216,46,82,100,240,209,89,164,129,35,178,164,69,41,
    110,168,242,177,59,54,181,163,250,27,173,247,144,154,183,103,
    157,12,104,27,31,5,110,103,199,115,31,255,145,86,161,165,
    154,89,40,25,153,222,149,188,222,20,6,226,52,213,249,231,
    131,76,255,215,103,157,8,126,142,66,251,122,51,236,189,168,
    201,209,255,124,79,86,59,178,179,131,23,199,61,191,91,221,
    13,220,22,239,135,153,218,245,44,179,75,241,134,142,158,32,
    146,187,212,70,213,102,20,98,94,62,104,170,40,174,122,18,
    175,83,210,171,222,171,114,82,175,250,73,213,221,193,81,183,
    169,52,172,135,131,146,15,168,110,220,74,248,44,186,255,134,
    200,243,216,79,7,111,201,62,30,200,191,135,126,249,212,247,
    183,126,142,230,163,182,142,18,172,116,120,81,82,61,157,153,
    232,52,97,175,82,243,17,156,83,42,255,20,133,254,129,164,
    147,147,138,226,154,81,50,84,101,40,38,183,104,86,114,50,
    50,143,223,39,50,245,163,19,50,200,34,180,39,184,157,164,
    44,190,93,202,58,203,220,78,113,231,116,214,57,195,237,5,
    238,156,205,194,187,194,157,250,173,72,191,122,205,83,168,23,
    255,215,80,231,120,57,143,72,249,203,255,53,194,237,135,231,
    173,182,253,11,72,107,251,105,209,61,116,68,92,215,209,173,
    253,143,39,128,222,2,155,168,111,26,108,162,120,25,94,197,
    179,162,197,103,197,71,116,86,60,228,243,164,99,232,227,226,
    96,219,248,2,192,79,26,11,216,132,242,141,51,10,80,125,
    30,36,48,184,221,174,12,61,251,46,228,143,120,60,124,214,
    222,162,248,253,43,228,170,177,41,22,240,76,119,18,157,148,
    154,114,214,49,10,11,125,60,46,159,211,198,254,152,109,108,
    109,97,40,63,217,143,168,169,12,37,35,237,252,234,152,204,
    224,200,183,190,122,22,242,139,1,93,29,254,51,19,30,13,
    248,154,151,235,83,183,198,77,58,232,122,174,146,121,217,239,
    193,70,210,41,250,135,122,249,44,118,98,34,214,132,240,89,
    24,244,158,133,95,69,174,55,88,229,189,153,105,45,138,135,
    49,99,12,6,181,68,27,45,3,169,228,9,192,114,154,77,
    47,196,158,196,58,22,245,240,158,194,135,127,252,29,56,206,
    185,228,255,95,162,208,31,32,205,64,152,255,241,242,186,72,
    127,70,169,88,18,92,76,71,222,123,181,66,63,131,236,152,
    219,75,108,206,13,179,125,144,240,179,100,86,215,8,74,124,
    21,219,116,59,250,85,137,159,77,236,15,32,189,234,218,119,
    250,56,163,251,63,223,45,244,221,13,163,156,11,61,215,117,
    155,87,36,142,206,131,213,204,162,85,109,209,19,55,145,104,
    14,63,139,118,30,168,27,99,153,214,227,78,67,185,45,185,
    246,244,233,11,190,210,143,101,121,254,213,19,198,239,248,65,
    114,241,75,55,64,239,157,34,161,209,75,148,236,168,107,35,
    131,50,60,232,56,79,101,39,138,123,79,35,79,170,229,145,
    241,117,207,139,109,55,108,73,231,181,164,163,142,186,57,202,
    144,158,115,180,140,140,235,20,69,135,120,79,232,162,153,112,
    80,191,71,242,137,253,228,248,70,16,33,72,188,148,231,250,
    233,60,191,142,58,46,246,143,95,165,225,103,171,204,141,140,
    123,49,205,90,28,233,77,100,236,187,129,255,157,60,69,43,
    220,131,47,168,39,62,232,170,228,4,24,104,180,177,158,57,
    231,212,45,70,158,211,7,183,16,28,87,199,14,110,5,174,
    218,141,226,206,41,206,64,189,226,141,8,155,40,56,33,96,
    35,58,32,50,211,108,116,247,51,1,137,122,142,251,134,216,
    26,157,191,21,71,77,153,36,217,252,241,65,144,50,113,244,
    101,67,156,7,135,99,132,242,75,74,243,217,143,51,212,32,
    37,112,58,138,101,203,71,28,199,60,61,101,78,139,44,165,
    11,246,192,137,244,152,159,120,30,153,75,223,157,244,131,206,
    99,170,38,9,30,158,128,222,120,75,179,37,81,52,168,248,
    154,162,140,229,215,50,167,43,37,107,122,170,100,149,38,76,
    126,160,155,193,43,114,217,42,77,77,139,255,246,111,5,179,
    98,217,88,193,21,254,13,184,5,197,179,
};

EmbeddedPython embedded_m5_internal_param_CheckerCPU(
    "m5/internal/param_CheckerCPU.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_CheckerCPU.py",
    "m5.internal.param_CheckerCPU",
    data_m5_internal_param_CheckerCPU,
    2491,
    7595);

} // anonymous namespace