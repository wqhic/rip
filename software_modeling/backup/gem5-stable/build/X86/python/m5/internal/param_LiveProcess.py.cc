#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_LiveProcess[] = {
    120,156,189,89,95,83,28,199,17,239,217,221,59,184,3,4,
    8,1,146,64,226,244,7,233,172,88,224,40,150,229,42,43,
    74,20,91,169,178,43,198,242,226,68,50,118,101,179,220,14,
    199,30,183,187,87,187,115,160,115,65,82,101,92,73,94,243,
    224,170,124,129,60,228,219,228,211,228,53,233,238,217,57,22,
    184,195,174,74,64,220,141,102,123,122,123,166,187,127,221,211,
    51,215,128,252,95,9,191,191,172,1,100,255,22,0,1,126,
    4,180,1,34,1,27,2,132,20,16,92,129,157,18,164,239,
    66,80,130,239,0,54,44,144,22,28,98,199,134,175,44,136,
    199,249,157,50,180,109,166,8,232,85,65,58,176,81,130,87,
    241,52,56,178,12,59,85,72,255,0,66,136,88,192,235,96,
    4,130,81,248,14,165,99,167,194,2,71,129,136,85,38,86,
    32,24,99,98,21,130,113,238,140,65,111,10,228,56,108,76,
    16,219,198,37,20,251,0,197,78,178,216,127,145,216,0,71,
    102,33,184,68,236,184,174,47,137,211,33,78,158,111,146,165,
    76,153,85,78,195,198,101,211,159,41,244,175,20,250,179,133,
    254,92,161,63,95,232,95,45,244,175,21,250,215,11,253,133,
    66,127,177,208,191,81,232,223,44,244,151,10,253,26,247,81,
    243,203,208,186,5,173,219,208,186,3,91,232,140,233,190,150,
    119,65,218,208,90,134,141,101,144,248,185,11,135,232,175,224,
    114,225,141,123,252,198,76,255,141,251,252,70,29,54,234,32,
    241,115,95,191,81,134,245,250,28,98,32,252,15,254,171,35,
    6,64,141,99,179,43,211,44,76,98,47,140,183,146,208,162,
    241,50,53,132,152,6,53,35,57,116,62,36,232,252,19,24,
    55,129,149,67,231,0,80,176,32,93,218,22,28,112,231,192,
    130,94,29,246,5,180,28,8,108,216,199,105,74,180,128,166,
    128,67,11,190,182,137,225,0,91,7,29,124,19,28,165,113,
    211,98,7,107,73,35,112,80,130,253,18,172,191,222,183,136,
    176,83,129,244,31,240,205,34,11,29,101,161,22,236,99,235,
    192,161,3,7,101,120,133,76,72,106,85,72,125,241,122,31,
    53,69,202,122,221,193,213,174,21,212,37,85,130,48,141,253,
    72,170,203,216,247,58,126,234,71,222,111,194,93,249,50,77,
    26,50,203,234,85,195,151,100,43,29,95,109,187,252,162,77,
    22,137,58,138,5,38,177,84,99,216,217,10,227,192,139,146,
    160,219,150,106,148,164,121,91,97,91,122,30,15,126,28,117,
    146,84,189,72,211,36,117,201,168,76,108,39,126,255,13,50,
    105,163,157,100,178,78,179,241,52,46,137,87,196,189,213,97,
    137,180,0,94,44,189,28,200,172,145,134,29,133,190,210,18,
    137,155,164,213,201,75,220,100,159,99,179,186,157,68,114,117,
    71,70,145,76,229,163,213,166,140,30,115,243,48,83,254,102,
    91,174,110,118,195,118,176,250,250,253,247,86,59,61,181,157,
    196,171,56,30,198,74,162,89,218,171,167,12,178,130,76,100,
    170,108,47,108,122,33,43,229,109,203,118,71,166,19,68,189,
    78,211,138,41,49,46,202,194,22,117,49,129,189,18,126,109,
    177,104,141,137,181,144,212,106,144,170,132,41,167,136,34,114,
    173,128,29,11,210,69,194,72,11,63,130,156,138,72,89,167,
    49,139,199,62,39,123,104,106,203,38,207,107,226,62,227,10,
    1,134,156,79,201,213,49,48,56,74,208,42,131,6,13,98,
    77,163,40,237,81,139,236,36,198,66,225,14,100,223,3,218,
    23,225,178,15,57,148,14,109,16,241,20,168,42,101,20,164,
    206,225,132,223,50,26,215,235,180,252,53,198,132,218,14,179,
    100,47,102,203,83,159,227,103,29,45,243,178,247,217,102,75,
    54,84,182,132,132,47,147,110,173,225,199,113,162,106,126,16,
    212,124,165,210,112,179,171,100,86,83,73,109,57,171,147,51,
    221,105,3,171,190,188,94,199,192,136,92,142,48,210,15,65,
    216,80,248,48,195,15,236,133,76,42,132,196,118,18,100,72,
    39,17,77,169,92,90,164,34,35,39,188,16,70,140,71,172,
    52,61,242,93,194,231,231,102,37,12,203,122,217,128,40,147,
    237,45,85,101,60,250,89,230,241,74,136,206,208,35,193,187,
    126,187,43,89,58,98,72,225,130,168,171,215,112,238,224,187,
    74,138,24,189,89,153,56,137,131,30,174,45,108,220,167,105,
    175,50,4,199,25,132,179,8,192,17,108,203,248,127,89,204,
    89,13,39,135,93,217,64,143,18,160,2,118,188,200,125,143,
    48,60,196,100,83,183,56,91,176,62,28,141,183,169,71,47,
    187,139,212,220,160,230,38,53,75,70,229,243,212,123,226,164,
    222,79,104,46,139,149,101,181,200,49,182,81,43,56,22,81,
    215,142,34,10,19,226,58,69,134,69,241,115,20,25,14,37,
    207,244,25,181,200,202,49,103,67,246,5,165,106,138,32,22,
    70,193,130,176,167,222,81,48,176,145,220,41,82,126,212,224,
    216,37,112,22,17,218,44,32,212,37,255,48,60,221,107,38,
    15,122,196,161,129,233,46,144,168,210,0,43,215,168,185,117,
    17,166,62,130,88,243,20,196,62,160,105,167,114,136,77,48,
    180,170,248,157,178,26,118,110,255,254,222,56,115,2,90,132,
    43,103,0,174,238,81,207,62,173,241,5,66,42,215,243,215,
    5,72,209,210,172,162,58,107,216,233,205,147,22,69,48,205,
    227,38,255,42,158,199,125,219,226,125,251,29,222,183,121,239,
    231,42,76,39,102,155,115,179,238,148,200,28,91,54,204,229,
    251,113,86,193,182,147,38,111,122,181,100,171,166,88,95,202,
    163,79,151,179,149,229,236,3,204,144,181,103,156,155,116,142,
    212,89,48,149,29,202,98,244,234,139,55,13,201,187,32,63,
    121,158,78,90,30,39,48,47,223,93,17,87,179,100,76,203,
    88,153,211,119,166,82,202,218,231,110,231,106,223,206,180,236,
    79,104,162,42,27,217,22,243,136,161,170,224,213,120,58,83,
    115,141,197,163,248,253,21,25,158,52,150,64,85,185,187,174,
    215,202,106,144,66,238,219,199,112,114,142,74,184,171,40,245,
    183,6,31,229,35,124,208,215,54,112,255,11,112,229,41,224,
    207,64,8,64,71,231,112,239,71,7,185,124,134,216,127,15,
    28,23,3,246,124,206,47,235,180,207,51,7,166,157,236,9,
    179,234,18,224,19,248,107,33,168,204,70,109,231,181,101,113,
    163,118,250,185,137,161,243,163,54,99,231,120,18,35,199,108,
    251,25,177,233,204,116,20,167,71,169,191,95,18,98,102,62,
    79,28,141,234,41,60,90,205,215,71,40,162,173,110,65,204,
    88,5,108,252,148,154,71,125,88,8,67,59,167,133,45,193,
    240,61,217,211,153,255,43,154,221,225,245,78,142,112,210,47,
    200,232,99,190,100,48,255,168,143,121,201,123,212,119,124,204,
    160,214,34,71,31,90,2,207,156,88,154,209,17,207,1,89,
    130,141,50,69,7,23,209,34,15,30,97,50,23,229,185,99,
    27,32,27,100,77,155,170,239,107,237,70,106,222,156,123,70,
    32,79,62,109,251,209,102,224,63,219,165,105,104,174,134,9,
    39,203,44,124,170,184,112,10,5,49,108,237,252,248,216,40,
    176,123,238,217,224,61,154,197,44,156,177,31,36,13,78,1,
    95,108,203,90,36,163,77,60,69,110,135,157,218,86,219,111,
    178,71,236,92,177,207,140,98,138,93,122,178,148,200,30,80,
    155,212,26,73,140,233,185,219,80,73,90,11,36,30,173,100,
    80,123,88,227,220,94,11,179,154,191,137,163,126,67,105,104,
    31,143,76,174,85,253,180,153,113,89,186,179,71,221,11,241,
    168,135,103,230,16,139,243,55,208,223,70,245,97,174,159,170,
    185,236,214,145,130,59,30,30,154,84,79,231,39,42,43,220,
    21,106,222,130,139,202,232,239,162,212,46,137,39,51,149,197,
    130,85,177,212,244,241,192,124,73,239,13,8,207,143,197,143,
    8,79,125,25,148,7,105,153,56,229,8,157,215,169,173,80,
    90,223,168,26,226,24,183,227,76,156,48,196,75,220,78,50,
    113,202,16,167,185,189,204,196,25,67,188,194,237,44,19,231,
    12,113,158,219,171,76,188,102,136,215,185,93,96,226,162,33,
    222,224,246,38,19,151,12,177,198,237,45,38,222,54,196,59,
    220,222,101,226,178,33,222,227,246,62,19,235,134,248,22,183,
    15,152,248,19,115,131,246,54,19,31,194,198,10,93,245,16,
    101,149,178,214,200,255,154,181,56,242,47,36,230,255,244,127,
    77,86,238,147,11,95,183,251,62,228,181,202,176,68,37,138,
    74,77,232,68,213,18,230,88,84,212,136,111,93,174,14,138,
    24,175,145,74,95,73,237,156,197,11,80,146,83,157,158,244,
    219,163,236,115,186,136,127,222,215,231,144,43,180,222,21,246,
    153,62,13,178,207,196,171,248,58,86,243,14,87,243,79,169,
    154,223,103,229,61,75,23,244,71,64,44,245,109,64,249,45,
    150,123,222,41,59,232,146,157,214,230,119,58,50,14,220,7,
    80,172,194,121,248,220,253,79,185,245,111,80,40,151,108,113,
    5,203,238,211,17,71,251,70,65,63,118,94,169,31,99,23,
    225,70,198,234,223,13,86,235,239,64,113,243,112,159,82,195,
    219,69,127,167,112,127,209,119,194,181,193,64,140,2,58,221,
    157,49,138,37,27,111,224,216,31,198,181,119,166,140,189,130,
    140,189,64,221,24,200,21,164,33,93,44,179,156,179,57,72,
    22,95,204,234,103,117,125,32,183,108,134,122,81,103,12,147,
    36,242,41,61,12,89,188,140,119,207,80,141,70,141,106,216,
    31,54,87,247,236,165,116,139,75,193,7,85,27,204,247,70,
    54,186,140,27,22,246,131,76,36,146,16,125,68,26,162,133,
    177,212,240,81,163,227,112,59,117,206,148,209,41,200,192,254,
    16,67,116,58,103,218,169,211,41,216,137,30,212,205,129,124,
    25,221,58,99,20,177,168,31,96,33,113,124,106,202,9,67,
    214,223,61,83,187,110,65,59,236,115,62,225,180,31,72,180,
    185,60,157,245,20,197,104,126,245,21,72,44,84,147,158,231,
    233,51,62,62,183,61,239,98,234,187,159,163,212,63,146,248,
    187,192,245,157,40,99,133,55,43,6,254,89,149,114,69,112,
    9,125,226,39,31,189,74,74,53,250,132,219,203,92,162,184,
    147,253,188,195,63,76,152,98,150,82,20,223,195,172,249,145,
    190,86,230,107,83,247,14,228,23,93,238,253,126,254,34,107,
    243,181,130,190,184,193,13,132,203,123,174,230,221,159,153,148,
    22,61,94,49,106,174,172,227,97,61,110,122,187,146,142,5,
    252,195,72,244,88,221,58,193,244,34,234,182,113,27,12,62,
    226,252,97,152,107,39,184,180,197,142,243,170,133,129,76,235,
    97,164,111,243,185,58,46,142,7,169,143,253,217,19,212,76,
    166,161,223,14,191,145,167,214,175,229,229,46,98,8,13,152,
    173,151,41,25,157,90,138,140,187,145,247,169,140,146,180,247,
    105,18,72,181,120,98,252,121,16,164,174,31,55,165,81,248,
    164,89,158,231,39,38,45,227,108,179,28,231,29,98,22,28,
    204,205,178,52,112,252,195,118,210,216,145,65,206,115,99,56,
    207,71,73,68,102,36,28,153,97,190,154,60,110,45,10,159,
    188,207,39,151,147,133,23,135,91,138,169,30,205,151,242,251,
    199,43,17,138,134,97,233,162,240,230,133,132,166,62,255,235,
    171,201,103,116,23,146,253,14,27,250,193,162,50,89,193,48,
    165,18,197,22,85,44,82,28,123,124,170,226,140,143,85,156,
    202,136,205,119,205,19,98,198,170,58,149,177,113,113,214,223,
    18,134,115,213,90,90,168,136,255,2,248,57,117,170,
};

EmbeddedPython embedded_m5_internal_param_LiveProcess(
    "m5/internal/param_LiveProcess.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_LiveProcess.py",
    "m5.internal.param_LiveProcess",
    data_m5_internal_param_LiveProcess,
    2590,
    8175);

} // anonymous namespace