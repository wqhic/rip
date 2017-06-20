#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Root[] = {
    120,156,189,88,253,114,219,198,17,223,3,64,74,164,40,139,
    250,150,37,53,98,219,113,205,122,26,169,117,227,56,51,81,
    221,166,157,116,166,249,67,73,193,116,236,48,153,162,16,112,
    20,65,225,131,5,78,182,153,145,250,71,229,126,188,64,31,
    161,127,244,5,250,28,125,163,102,119,15,0,33,201,74,61,
    211,48,22,121,62,238,221,237,237,199,111,247,246,206,131,252,
    95,13,191,191,232,0,100,3,1,224,227,71,64,8,16,9,
    232,11,16,82,128,191,6,167,53,72,223,1,191,6,175,0,
    250,6,72,3,46,177,99,194,231,6,196,45,94,83,135,208,
    100,138,128,73,19,164,5,253,26,60,141,151,193,146,117,56,
    109,66,250,7,16,66,196,2,158,249,115,224,207,195,43,228,
    142,157,6,51,156,7,34,54,153,216,0,127,129,137,77,240,
    91,220,89,128,73,27,100,11,250,139,52,173,127,7,217,62,
    64,182,75,204,246,63,196,214,199,145,117,240,239,208,116,148,
    235,51,154,105,209,76,222,111,137,185,180,11,41,151,161,191,
    82,244,87,43,253,53,238,227,78,43,48,90,135,209,6,140,
    54,1,13,226,47,151,92,183,64,154,48,186,11,253,187,32,
    241,179,5,151,104,31,127,165,178,98,155,87,172,150,43,118,
    120,197,46,244,119,65,226,103,71,175,168,67,175,187,129,54,
    15,254,139,255,186,104,115,80,45,108,158,203,52,11,146,216,
    9,226,65,18,24,52,94,167,134,60,228,81,51,151,187,234,
    87,228,170,127,1,251,201,55,114,87,93,0,50,22,164,75,
    104,192,5,119,46,12,152,116,225,92,192,200,2,223,132,115,
    220,166,70,2,156,8,184,52,224,11,147,38,92,96,107,161,
    65,223,2,75,105,63,141,216,160,154,211,28,92,212,224,188,
    6,189,103,231,6,17,78,27,144,254,19,190,220,101,166,243,
    204,212,128,115,108,45,184,180,224,162,14,79,113,18,146,70,
    13,82,95,60,59,71,77,145,210,235,90,40,237,81,69,93,
    82,197,15,210,216,141,164,90,192,190,51,118,83,55,114,236,
    36,81,221,102,49,33,201,246,199,174,26,218,188,194,36,83,
    68,99,197,156,146,88,47,27,4,177,239,68,137,127,22,74,
    53,79,108,156,65,16,74,199,225,193,223,68,227,36,85,31,
    166,105,146,218,100,77,38,134,137,91,174,32,91,122,97,146,
    201,46,237,198,219,216,196,94,209,236,193,152,57,146,0,165,
    148,190,204,188,52,24,43,116,146,230,72,179,137,91,151,220,
    195,77,246,17,54,7,195,36,146,7,167,50,138,100,42,31,
    30,156,200,232,17,55,111,103,202,61,14,229,193,241,89,16,
    250,7,207,222,123,247,96,60,81,195,36,62,192,241,32,86,
    18,237,17,30,76,45,177,143,163,43,196,243,69,112,226,4,
    172,141,51,148,225,88,166,139,68,221,166,253,68,91,180,68,
    93,152,162,43,22,177,87,195,175,41,118,141,5,113,20,144,
    62,30,233,72,40,178,170,184,33,103,10,56,53,32,221,37,
    84,140,240,35,200,141,136,141,30,141,25,60,246,91,50,132,
    166,142,76,242,181,38,158,51,146,16,82,56,243,144,156,27,
    3,195,161,6,163,58,104,152,32,186,52,110,210,9,181,56,
    157,216,24,200,220,130,236,31,128,134,69,128,156,67,14,158,
    75,19,68,220,6,213,164,152,69,234,6,110,248,103,198,95,
    175,75,226,31,49,24,212,48,200,146,23,49,155,156,250,28,
    49,61,180,204,39,147,143,143,71,210,83,217,30,18,62,75,
    206,58,158,27,199,137,234,184,190,223,113,149,74,131,227,51,
    37,179,142,74,58,247,178,46,121,209,94,46,240,84,242,155,
    140,11,252,144,175,17,63,250,135,31,120,10,127,172,242,15,
    246,66,38,21,98,97,152,248,25,210,137,197,137,84,54,9,
    169,200,200,9,11,162,1,77,83,105,123,156,119,7,127,127,
    80,72,194,120,236,214,11,244,100,50,28,168,38,3,209,205,
    50,135,37,33,58,99,142,24,63,119,195,51,201,220,17,60,
    10,5,162,174,150,97,118,168,219,34,13,10,133,89,139,56,
    137,253,9,10,21,120,247,105,191,45,198,94,139,209,183,142,
    200,155,195,182,142,255,215,197,134,225,89,57,222,234,5,230,
    40,215,41,96,143,139,220,233,136,191,75,204,43,93,131,19,
    3,43,194,241,247,61,234,209,98,123,151,154,239,80,243,22,
    53,123,133,174,51,81,120,241,186,194,143,105,19,131,181,100,
    125,200,21,102,161,143,127,37,134,238,78,99,8,147,94,143,
    98,193,160,136,153,198,130,69,9,50,125,66,45,78,229,40,
    51,33,251,148,210,49,197,12,51,163,240,64,160,83,111,10,
    127,182,142,221,38,173,231,11,228,218,4,199,42,38,79,42,
    152,180,201,49,12,72,251,110,145,242,28,154,161,161,104,239,
    16,171,218,107,204,219,161,230,187,51,181,241,20,84,39,55,
    64,245,62,237,215,206,65,181,200,96,106,226,183,109,120,102,
    110,248,242,224,91,189,6,38,66,146,245,26,36,253,128,122,
    230,77,85,191,13,16,229,10,254,186,2,34,146,201,168,234,
    113,132,157,201,38,137,95,133,207,38,30,221,79,227,77,60,
    141,13,62,141,127,204,167,49,159,232,92,203,232,228,107,114,
    254,213,157,26,217,97,96,194,70,126,202,102,13,108,199,105,
    242,114,210,73,6,29,197,138,82,174,60,188,151,237,223,203,
    222,199,44,216,121,194,249,71,231,65,157,233,82,57,166,76,
    69,75,63,124,233,73,62,226,248,151,227,232,196,228,112,146,
    114,242,163,19,145,180,78,86,52,10,243,114,138,206,84,74,
    153,121,118,6,110,150,6,38,121,137,121,214,100,235,154,98,
    19,81,211,20,44,134,163,211,48,151,76,60,138,223,95,146,
    197,73,85,9,84,212,218,61,45,36,203,79,154,216,63,186,
    130,140,89,72,111,31,32,187,223,21,136,168,79,17,65,95,
    179,64,246,223,128,43,72,1,127,5,242,57,186,54,71,118,
    25,8,228,228,85,154,254,123,224,16,120,205,73,206,57,164,
    71,167,55,207,192,212,146,61,230,169,250,96,255,8,254,94,
    137,159,226,248,53,243,26,177,122,252,90,101,254,97,176,188,
    209,17,107,93,77,84,228,145,161,155,209,52,157,125,166,33,
    57,205,235,101,133,135,217,119,38,200,153,215,188,29,18,227,
    139,41,110,232,0,219,17,171,70,5,13,63,161,230,97,9,
    4,81,208,190,105,137,246,224,246,35,214,209,249,252,115,218,
    214,98,65,151,230,184,42,160,197,37,174,107,5,174,31,150,
    184,150,124,228,188,226,155,1,181,6,249,244,210,16,120,45,
    195,218,138,110,65,22,200,26,244,235,20,1,92,254,138,60,
    64,68,145,150,40,137,93,57,207,216,4,71,218,56,165,91,
    181,199,168,121,57,187,112,39,167,29,134,110,116,236,187,79,
    70,196,159,54,241,138,144,49,10,137,219,85,137,9,238,226,
    54,161,249,231,163,66,242,231,179,11,245,119,129,229,209,18,
    51,176,253,196,227,248,254,116,40,59,145,140,142,241,170,55,
    12,198,157,65,232,158,176,15,204,92,163,143,11,141,20,59,
    241,122,45,144,61,160,54,233,120,73,140,217,246,204,83,73,
    218,241,37,94,131,164,223,121,187,195,169,186,19,100,29,247,
    24,71,93,79,105,248,94,13,59,6,146,155,158,100,92,73,
    158,190,160,238,108,125,232,224,141,54,192,66,58,132,242,56,
    212,55,174,50,243,114,137,172,163,1,79,46,188,224,168,137,
    206,58,84,23,216,251,212,252,16,102,158,160,223,1,125,219,
    206,200,48,117,177,99,52,12,62,114,104,252,19,154,153,221,
    140,189,127,191,73,236,233,199,144,60,2,235,52,83,206,209,
    253,153,218,6,165,231,126,179,32,46,112,219,98,226,98,65,
    188,195,237,18,19,219,5,113,153,219,21,38,174,22,196,53,
    110,215,153,184,81,60,215,108,50,113,139,158,45,252,58,83,
    182,41,254,231,254,223,248,231,80,154,109,16,101,223,104,216,
    219,143,191,61,129,237,247,32,63,210,111,11,121,81,213,102,
    81,135,252,72,20,55,132,170,42,252,214,176,124,5,137,142,
    151,74,87,73,237,135,221,89,170,197,105,66,239,246,124,26,
    192,55,235,217,15,74,13,46,185,116,153,172,177,123,244,85,
    136,221,35,158,198,219,88,216,90,92,216,30,82,97,123,206,
    234,58,134,174,109,167,96,171,149,90,83,98,136,229,11,103,
    170,185,46,91,73,40,119,60,150,177,111,63,128,106,37,202,
    195,179,243,49,37,164,63,65,165,128,48,197,26,150,158,55,
    227,136,178,108,69,35,246,83,173,140,156,153,122,140,129,248,
    151,2,136,93,74,255,211,84,107,31,82,195,201,181,204,171,
    246,207,75,123,111,95,69,217,224,44,12,157,108,146,41,25,
    209,165,230,235,134,177,140,209,111,114,83,218,245,233,89,16,
    57,127,60,115,99,117,246,90,110,213,225,130,91,133,198,37,
    83,101,186,10,34,137,27,197,158,35,99,178,16,179,252,95,
    115,136,47,31,175,215,6,110,95,136,167,81,144,248,95,207,
    60,159,115,147,185,30,80,247,111,91,152,141,131,216,81,195,
    84,102,195,36,212,155,188,233,92,218,108,235,202,102,87,39,
    48,84,57,107,248,18,245,147,149,16,98,33,243,215,3,95,
    98,169,144,76,240,130,199,119,39,252,29,58,206,140,15,218,
    159,33,187,20,242,135,33,60,104,69,29,143,218,117,145,255,
    25,141,122,67,112,189,114,237,17,92,11,68,23,121,125,87,
    152,100,54,103,218,165,18,189,252,98,91,20,16,4,116,190,
    195,30,185,145,126,118,227,215,37,251,251,144,191,14,216,247,
    203,40,160,199,18,190,160,233,75,47,102,28,174,165,184,116,
    178,127,74,116,234,69,143,246,11,141,246,181,70,189,32,210,
    175,143,252,102,28,61,98,123,87,167,249,169,139,253,245,107,
    212,12,97,225,134,193,151,250,213,177,32,43,82,228,58,95,
    146,167,252,197,37,74,121,18,176,3,83,121,18,96,172,165,
    188,184,156,152,167,74,50,180,218,188,22,101,149,69,179,245,
    179,46,224,245,139,193,19,14,230,39,216,208,147,97,99,169,
    129,62,167,228,105,226,173,125,81,88,102,171,221,176,90,11,
    13,171,49,103,242,219,207,34,222,202,154,86,99,161,37,232,
    111,15,17,209,52,246,214,26,226,43,211,213,231,63,
};

EmbeddedPython embedded_m5_internal_param_Root(
    "m5/internal/param_Root.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_Root.py",
    "m5.internal.param_Root",
    data_m5_internal_param_Root,
    2302,
    6836);

} // anonymous namespace