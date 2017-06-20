#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NetworkLink_d[] = {
    120,156,197,88,253,114,219,198,17,223,3,64,74,164,40,139,
    250,182,37,217,98,218,186,97,61,141,212,186,113,156,153,184,
    110,147,52,157,105,166,163,164,96,58,118,152,76,81,8,56,
    137,160,64,128,3,156,36,51,35,117,58,149,167,233,11,244,
    17,250,71,95,160,207,145,55,106,119,247,0,16,212,71,226,
    153,214,172,72,158,14,139,189,189,219,221,223,238,237,157,7,
    217,95,5,127,191,108,1,164,127,18,0,62,126,5,132,0,
    3,1,93,1,66,10,240,87,224,168,2,201,219,224,87,224,
    37,64,215,0,105,192,5,118,76,248,194,128,168,193,99,170,
    16,154,76,17,48,170,131,180,160,91,129,103,209,34,88,178,
    10,71,117,72,254,8,66,136,72,192,115,127,6,252,89,120,
    137,210,177,83,99,129,179,64,196,58,19,107,224,207,49,177,
    14,126,131,59,115,48,106,130,108,64,119,158,216,186,183,80,
    236,3,20,187,192,98,191,33,177,62,190,89,5,255,22,177,
    227,186,62,39,78,139,56,121,190,5,150,210,204,87,185,8,
    221,165,188,191,92,234,175,148,250,171,165,254,26,247,113,5,
    75,208,95,135,254,109,232,223,129,3,52,202,98,49,219,6,
    72,19,250,155,208,221,4,137,223,13,184,64,187,249,75,165,
    17,91,60,98,185,24,113,151,71,220,131,238,61,144,248,189,
    171,71,84,161,211,94,67,95,4,255,198,191,54,250,2,84,
    3,155,19,153,164,65,28,57,65,116,16,7,6,189,175,82,
    67,158,243,168,153,201,92,248,33,185,240,159,192,254,243,141,
    204,133,231,128,130,5,233,18,26,112,206,157,115,3,70,109,
    56,19,208,183,192,55,225,12,167,169,208,2,14,5,92,24,
    240,165,73,12,231,216,90,104,232,123,96,41,237,191,62,27,
    90,75,154,129,243,10,156,85,160,243,252,204,32,194,81,13,
    146,127,192,87,91,44,116,150,133,26,112,134,173,5,23,22,
    156,87,225,25,50,33,169,95,35,245,197,243,51,212,20,41,
    157,182,133,171,221,43,169,75,170,248,65,18,185,3,169,86,
    176,239,12,221,196,29,56,123,82,157,198,201,209,111,131,232,
    200,241,219,245,156,51,78,119,134,174,234,217,60,212,36,155,
    12,134,138,69,198,145,84,115,216,57,8,34,223,25,196,254,
    113,40,213,44,201,115,14,130,80,58,14,191,252,205,96,24,
    39,234,163,36,137,19,155,204,202,196,48,118,139,17,100,84,
    47,140,83,217,166,217,120,26,155,196,43,226,62,24,178,68,
    90,0,47,151,6,251,50,245,146,96,168,208,91,90,34,113,
    147,180,54,249,137,155,180,131,205,110,47,30,200,221,35,57,
    24,200,68,62,220,61,148,131,71,220,188,149,42,119,63,148,
    187,251,199,65,232,239,62,127,247,157,221,225,72,245,226,104,
    23,223,7,145,146,104,152,112,247,26,147,236,32,219,18,9,
    63,13,14,157,128,213,114,122,50,28,202,100,158,168,27,52,
    177,104,138,134,168,10,83,180,197,60,246,42,248,51,197,150,
    49,39,246,2,82,204,35,101,9,87,86,25,73,228,94,1,
    71,6,36,91,132,147,62,126,5,57,22,209,210,161,119,6,
    191,251,29,89,68,83,251,38,121,95,19,207,24,91,8,50,
    228,124,66,238,142,128,1,82,129,126,21,52,112,16,111,26,
    73,201,136,90,100,39,49,6,10,183,32,253,59,160,133,17,
    50,103,144,193,233,194,4,17,53,65,213,41,186,145,186,134,
    19,254,133,17,217,105,211,242,247,24,21,170,23,164,241,105,
    196,182,167,62,199,80,7,45,243,233,232,147,253,190,244,84,
    186,141,132,207,227,227,150,231,70,81,172,90,174,239,183,92,
    165,146,96,255,88,201,180,165,226,214,253,180,77,238,180,23,
    115,96,21,242,70,195,28,72,228,116,4,146,126,240,3,79,
    225,195,50,63,176,23,82,169,16,20,189,216,79,145,78,34,
    14,165,178,105,145,138,140,28,243,66,24,51,14,177,210,244,
    200,119,11,159,223,207,87,194,192,108,87,115,24,165,50,60,
    80,117,70,164,155,166,14,175,132,232,12,62,18,124,226,134,
    199,146,165,35,138,20,46,136,186,122,13,83,128,223,109,82,
    37,215,156,213,137,226,200,31,225,234,2,239,77,154,248,54,
    131,176,193,48,92,69,8,206,96,91,197,255,85,177,102,120,
    86,6,188,106,14,62,74,131,10,216,245,34,243,62,2,241,
    2,83,78,219,224,156,193,26,113,68,126,143,122,52,216,222,
    162,230,46,53,247,168,217,206,149,126,189,154,207,95,214,252,
    49,205,102,176,186,172,24,57,199,204,21,243,39,162,234,206,
    56,170,48,49,118,40,58,12,138,161,113,116,88,148,68,147,
    167,212,34,43,199,157,9,233,103,148,178,41,138,88,24,5,
    12,66,159,122,227,128,96,51,217,77,82,127,54,199,178,77,
    0,45,163,244,176,132,82,155,60,196,16,181,239,228,217,208,
    33,14,13,78,123,147,68,85,174,177,115,139,154,55,166,99,
    236,49,204,14,175,192,236,61,154,184,153,193,108,158,225,85,
    199,95,211,240,204,204,3,197,46,185,124,9,94,132,45,235,
    26,108,253,144,122,230,85,157,167,10,171,76,211,95,151,96,
    69,139,51,202,10,237,97,103,180,78,122,148,1,181,142,27,
    254,179,104,29,247,112,131,247,240,159,240,30,206,117,0,87,
    70,58,65,155,156,163,117,167,66,6,57,48,97,45,219,155,
    211,26,182,195,36,126,49,106,197,7,45,197,26,83,62,125,
    114,63,221,185,159,190,135,153,178,245,148,115,148,206,149,58,
    27,38,114,72,217,140,134,126,244,194,147,188,31,242,147,227,
    232,228,229,112,34,115,178,125,22,177,181,74,230,52,114,59,
    115,26,79,85,66,217,123,10,150,174,23,150,166,133,127,76,
    83,213,217,204,166,88,71,28,213,5,175,199,209,57,155,43,
    46,126,139,191,15,200,244,164,179,4,170,149,237,142,94,45,
    43,66,42,217,63,158,192,202,107,85,195,222,69,185,191,207,
    49,82,29,99,132,126,102,14,250,175,129,43,81,1,127,5,
    66,1,58,59,3,125,17,35,228,246,101,98,255,3,112,116,
    92,179,255,115,158,233,208,158,207,28,152,126,210,199,204,170,
    203,129,143,225,111,165,208,202,55,109,51,171,53,203,155,182,
    85,228,40,134,207,43,109,204,214,100,50,35,215,244,220,148,
    216,116,134,26,71,235,120,19,40,10,68,204,208,175,23,75,
    179,122,18,135,214,243,229,24,73,180,237,109,138,101,163,132,
    143,159,82,243,176,128,134,200,105,175,109,105,219,112,243,14,
    237,232,93,224,11,154,223,226,21,47,204,112,6,154,144,82,
    96,191,146,99,255,97,129,125,201,59,214,75,62,124,80,107,
    144,187,47,12,129,39,66,44,214,232,0,102,129,172,64,183,
    74,81,194,133,181,200,130,72,228,57,140,230,155,216,14,217,
    40,123,218,92,133,199,181,51,169,121,49,133,220,64,254,124,
    18,186,131,125,223,125,26,210,68,52,155,151,135,149,145,47,
    189,89,94,58,133,132,184,105,245,252,248,40,87,225,100,10,
    121,225,29,148,91,44,157,163,192,143,61,78,6,159,245,100,
    107,32,7,251,120,190,236,5,195,214,65,232,30,178,87,204,
    76,181,79,114,213,20,187,245,114,113,145,62,160,54,110,121,
    113,132,201,250,216,83,113,210,242,37,30,185,164,223,122,171,
    197,153,190,21,164,45,119,31,223,186,158,210,16,159,140,81,
    174,96,221,228,48,229,98,245,232,148,186,83,242,170,131,231,
    233,0,139,246,8,138,109,85,31,243,138,196,205,229,184,142,
    24,220,1,241,48,165,70,58,87,81,161,97,239,80,243,35,
    152,94,126,127,155,44,68,19,144,169,170,98,211,168,25,92,
    202,77,48,126,74,99,211,171,129,250,175,87,9,84,125,105,
    147,133,107,149,56,229,12,157,231,169,173,81,154,239,214,115,
    226,28,183,13,38,206,231,196,91,220,46,48,177,153,19,23,
    185,93,98,226,114,78,92,225,118,149,137,107,249,181,210,58,
    19,111,67,247,14,221,187,16,101,131,146,197,204,127,155,44,
    56,220,166,20,104,199,255,211,28,97,63,254,63,172,220,126,
    23,178,98,225,166,252,32,202,106,205,235,252,208,23,249,249,
    164,172,19,95,130,108,92,15,82,199,75,164,171,164,118,209,
    214,84,20,229,44,163,167,125,49,14,251,171,213,244,251,133,
    78,23,92,38,141,86,216,115,250,104,198,158,19,207,162,13,
    44,171,45,46,171,159,80,89,125,198,6,112,12,93,89,143,
    1,89,41,236,176,142,77,36,79,157,107,108,161,171,103,90,
    157,59,28,202,200,183,31,64,185,32,230,215,83,192,1,37,
    182,63,67,169,106,49,197,10,86,192,87,163,143,210,118,73,
    71,118,97,165,136,183,233,56,147,81,251,117,142,218,54,109,
    44,227,220,109,63,161,134,179,117,145,168,237,95,20,174,184,
    127,19,36,123,88,121,202,208,57,13,124,213,163,131,215,43,
    114,98,69,197,229,210,4,149,43,174,235,198,134,244,16,248,
    44,255,187,120,72,50,101,192,236,89,253,224,219,248,67,4,
    118,228,141,88,240,43,49,146,244,70,46,61,35,222,56,242,
    196,75,29,220,5,157,147,8,11,220,111,155,98,130,49,159,
    162,76,84,111,220,52,50,72,148,131,12,41,203,255,110,46,
    18,78,7,203,130,194,16,230,140,227,203,80,42,121,93,176,
    41,130,69,118,1,226,75,44,78,226,17,158,72,249,140,135,
    207,161,227,76,107,71,255,185,78,51,250,182,11,119,116,81,
    197,61,125,85,100,31,163,86,173,9,46,149,46,93,250,235,
    149,17,112,244,153,102,148,218,156,183,23,10,120,243,197,116,
    94,178,80,36,176,145,246,220,129,190,84,228,43,51,251,251,
    144,93,112,216,111,22,97,66,23,63,124,144,212,199,117,204,
    86,92,198,113,213,102,255,140,232,52,237,224,209,78,174,218,
    142,86,237,195,48,246,142,164,175,239,87,249,122,124,240,72,
    221,189,153,245,87,241,192,69,250,230,181,28,157,96,144,9,
    90,188,244,222,79,104,212,234,37,106,42,147,192,13,131,175,
    244,205,108,78,230,218,232,186,213,81,156,78,80,184,178,186,
    186,75,49,64,18,121,24,164,40,144,165,77,140,202,18,55,
    251,176,117,3,80,203,18,166,4,42,125,98,209,23,43,79,
    233,10,47,253,0,27,186,116,173,45,212,16,96,148,211,77,
    81,199,172,110,153,141,102,205,106,204,213,172,218,140,201,119,
    101,243,120,66,173,91,181,185,134,200,63,219,8,193,186,177,
    189,82,19,255,1,128,232,113,137,
};

EmbeddedPython embedded_m5_internal_param_NetworkLink_d(
    "m5/internal/param_NetworkLink_d.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_NetworkLink_d.py",
    "m5.internal.param_NetworkLink_d",
    data_m5_internal_param_NetworkLink_d,
    2345,
    7213);

} // anonymous namespace