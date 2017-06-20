#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherLink[] = {
    120,156,189,88,253,110,27,199,17,159,189,59,82,34,69,89,
    223,146,245,97,139,109,225,134,53,26,41,113,227,186,64,84,
    183,78,235,2,13,18,57,61,166,176,195,4,189,158,120,43,
    241,40,242,142,184,91,217,102,32,21,104,101,180,121,129,62,
    66,255,232,179,244,159,190,81,59,51,123,123,60,81,146,145,
    160,165,44,105,189,55,187,59,59,31,191,153,157,221,54,100,
    255,74,248,247,203,58,64,250,39,1,16,224,175,128,30,64,
    95,64,75,128,144,2,130,101,56,46,65,242,1,4,37,120,
    3,208,178,64,90,112,142,29,27,190,180,32,170,241,154,50,
    244,108,166,8,24,86,65,58,208,42,193,243,104,1,28,89,
    134,227,42,36,127,4,33,68,36,224,69,48,5,193,52,188,
    65,238,216,169,48,195,105,32,98,149,137,21,8,102,152,88,
    133,160,198,157,25,24,206,131,172,65,107,150,166,181,110,33,
    219,251,200,118,142,217,254,155,216,6,56,178,2,193,45,154,
    142,114,125,65,51,29,154,201,251,205,49,151,121,35,229,2,
    180,22,77,127,169,208,95,46,244,87,10,253,85,238,163,4,
    139,208,93,131,238,109,232,174,195,33,26,101,33,223,109,3,
    164,13,221,77,104,109,130,196,223,13,56,71,187,5,139,133,
    21,91,188,98,41,95,113,135,87,220,133,214,93,144,248,123,
    71,175,40,67,179,177,138,190,8,255,131,255,26,232,11,80,
    53,108,94,202,36,13,227,200,11,163,195,56,180,104,188,76,
    13,121,174,77,205,84,230,194,95,145,11,255,9,236,191,192,
    202,92,120,6,200,88,144,46,61,11,206,184,115,102,193,176,
    1,167,2,186,14,4,54,156,226,54,37,18,224,72,192,185,
    5,95,217,52,225,12,91,7,13,125,23,28,165,253,215,101,
    67,107,78,83,112,86,130,211,18,52,95,156,90,68,56,174,
    64,242,15,248,122,139,153,78,51,83,11,78,177,117,224,220,
    129,179,50,60,199,73,72,234,86,72,125,241,226,20,53,69,
    74,179,225,160,180,251,5,117,73,149,32,76,34,191,47,213,
    60,246,189,129,159,248,125,239,169,234,200,228,147,48,58,110,
    84,205,172,56,221,25,248,170,227,242,50,155,236,209,31,40,
    102,23,71,82,205,96,231,48,140,2,175,31,7,39,61,169,
    166,137,151,119,24,246,164,231,241,224,111,251,131,56,81,79,
    147,36,78,92,50,41,19,123,177,159,175,32,131,182,123,113,
    42,27,180,27,111,227,18,123,69,179,15,7,204,145,4,96,
    81,105,113,32,211,118,18,14,20,122,74,115,164,217,196,173,
    65,62,226,38,125,134,205,110,39,238,203,221,99,217,239,203,
    68,62,216,61,146,253,135,220,188,155,42,255,160,39,119,15,
    78,194,94,176,251,196,253,116,119,48,84,157,56,218,197,241,
    48,82,18,141,210,219,29,51,199,14,78,89,36,198,175,194,
    35,47,100,149,188,142,236,13,100,50,75,212,13,218,84,204,
    139,154,40,11,91,52,196,44,246,74,248,103,139,45,107,70,
    236,135,164,84,155,20,37,60,57,69,4,145,91,5,28,91,
    144,108,17,62,186,248,43,200,161,136,146,38,141,89,60,246,
    59,178,134,166,118,109,242,186,38,158,50,166,16,92,56,115,
    143,220,28,1,3,163,4,221,50,104,192,32,206,52,130,146,
    33,181,56,157,216,88,200,220,129,244,239,128,214,69,168,156,
    66,6,163,115,27,68,52,15,170,74,81,141,212,85,220,240,
    47,140,196,102,131,196,223,103,68,168,78,152,198,175,34,182,
    59,245,57,118,154,104,153,207,134,207,14,186,178,173,210,109,
    36,124,17,159,212,219,126,20,197,170,238,7,65,221,87,42,
    9,15,78,148,76,235,42,174,223,75,27,228,74,119,193,128,
    42,231,55,28,24,16,145,195,17,68,250,35,8,219,10,63,
    150,248,131,189,144,74,133,128,232,196,65,138,116,98,113,36,
    149,75,66,42,50,114,204,130,48,94,60,154,74,219,227,188,
    91,248,253,196,72,194,160,108,148,13,132,82,217,59,84,85,
    70,163,159,166,30,75,66,116,6,30,49,126,233,247,78,36,
    115,71,4,41,20,136,186,90,134,9,67,239,54,169,97,180,
    102,85,162,56,10,134,40,89,216,126,135,54,189,205,0,172,
    49,4,87,16,126,83,216,150,241,255,178,88,181,218,78,6,
    186,178,1,30,165,62,5,236,118,145,121,30,65,120,142,105,
    166,97,113,158,96,109,56,18,191,79,61,90,236,110,81,115,
    135,154,187,212,108,27,133,39,167,245,236,184,214,143,104,39,
    139,85,101,165,200,41,182,81,42,184,16,77,235,163,104,194,
    68,216,164,168,176,40,118,70,81,225,80,210,76,30,83,139,
    83,57,222,108,72,63,167,20,77,209,195,204,40,80,16,242,
    212,27,5,2,155,200,165,164,217,152,54,24,118,9,152,69,
    116,30,21,208,233,146,119,24,154,238,186,201,128,30,205,208,
    160,116,55,137,85,233,10,27,215,169,249,222,228,13,61,130,
    215,209,37,120,125,72,155,206,103,240,154,101,88,85,241,111,
    222,106,219,153,245,243,19,113,105,12,86,132,41,231,10,76,
    253,144,122,246,101,125,111,12,78,153,150,191,41,192,137,4,
    179,138,202,236,99,103,184,70,58,20,129,180,134,7,251,243,
    104,13,207,106,139,207,234,247,248,172,230,243,158,43,32,157,
    144,109,206,201,186,83,34,99,28,218,176,154,157,193,105,5,
    219,65,18,191,30,214,227,195,186,98,109,41,127,238,221,75,
    119,238,165,31,98,102,172,63,230,156,164,115,163,206,126,137,
    28,80,246,162,165,79,95,183,37,159,125,252,229,121,58,89,
    121,156,184,188,236,76,69,76,173,144,41,45,99,99,78,219,
    169,74,40,91,79,216,202,213,220,202,36,244,199,180,77,149,
    77,108,139,53,196,79,85,176,44,158,206,207,92,85,241,40,
    254,125,68,102,39,125,37,80,61,236,54,181,164,172,4,169,
    227,254,248,2,70,38,166,130,187,139,60,127,111,176,81,30,
    97,131,254,108,3,244,191,1,87,154,2,254,10,228,125,116,
    114,6,244,60,46,200,221,75,52,253,15,192,17,113,197,57,
    207,121,165,73,103,59,207,192,116,147,62,226,169,250,216,255,
    24,190,41,132,147,57,156,237,172,150,44,30,206,78,158,147,
    24,54,223,234,0,118,46,38,47,114,75,199,79,105,154,206,
    72,163,8,29,37,252,188,8,196,140,60,57,12,77,235,13,
    60,146,229,171,17,130,232,120,219,20,75,86,1,23,239,83,
    243,32,135,132,48,180,137,136,181,13,215,159,194,158,206,246,
    95,210,222,14,75,59,55,165,227,213,112,200,177,94,50,88,
    127,144,99,93,242,169,244,134,47,20,212,90,228,226,115,75,
    224,45,15,11,49,186,84,57,32,75,208,42,83,84,112,193,
    44,178,160,17,38,95,81,118,187,112,228,177,49,246,181,153,
    114,47,107,7,82,243,122,194,121,128,124,184,215,243,251,7,
    129,255,184,71,155,208,78,109,19,70,150,17,123,190,40,54,
    133,128,184,78,114,254,124,104,196,127,57,225,28,240,83,228,
    153,139,205,136,15,226,54,7,254,231,29,89,239,203,254,1,
    222,21,59,225,160,126,216,243,143,216,27,118,166,214,51,163,
    150,98,119,142,23,14,233,125,106,227,122,59,142,48,33,159,
    180,85,156,212,3,137,87,40,25,212,223,173,115,54,175,135,
    105,221,63,192,81,191,173,52,164,47,198,35,87,165,126,114,
    148,114,1,122,252,138,186,55,224,77,15,239,197,33,22,225,
    17,228,199,166,190,178,229,201,153,203,107,29,33,120,194,225,
    229,72,13,117,78,162,34,194,221,161,230,71,112,51,57,252,
    3,178,12,49,39,19,149,197,166,85,177,212,92,49,28,63,
    163,53,233,229,160,252,215,183,9,74,253,232,146,133,102,153,
    102,202,41,186,143,83,91,161,52,222,170,26,226,12,183,53,
    38,206,26,226,45,110,231,152,56,111,136,11,220,46,50,113,
    201,16,151,185,93,97,226,170,33,174,113,123,155,137,235,230,
    173,104,131,137,155,208,218,162,199,20,162,220,161,108,49,245,
    191,102,11,142,185,27,136,182,147,255,107,146,112,31,221,176,
    212,238,207,32,171,12,174,75,16,162,168,210,172,78,16,93,
    97,46,31,69,125,248,85,99,245,50,90,189,118,34,125,37,
    181,91,182,38,174,32,167,23,189,229,235,81,204,95,46,149,
    159,228,186,156,115,45,52,92,102,111,233,251,22,123,75,60,
    143,54,176,102,118,184,102,222,163,154,249,148,21,247,44,93,
    54,143,0,88,202,245,39,83,70,242,149,55,102,3,93,22,
    147,100,254,96,32,163,192,189,15,197,74,151,135,39,236,119,
    202,102,127,134,66,89,98,139,101,44,109,47,71,25,229,233,
    130,110,236,182,82,30,87,147,119,32,35,244,27,131,208,6,
    151,113,121,178,118,247,168,225,244,156,103,102,247,23,185,249,
    215,175,128,95,32,123,254,144,110,79,111,25,197,210,136,31,
    75,248,75,221,185,118,222,75,63,97,78,111,159,65,220,42,
    134,27,81,248,174,122,105,254,73,127,192,204,174,29,36,62,
    236,13,252,184,82,248,116,32,101,112,173,106,122,212,168,198,
    95,106,231,138,121,252,46,136,14,121,223,195,227,61,194,11,
    14,189,38,183,227,147,72,49,235,239,184,132,246,163,151,197,
    235,167,188,149,227,123,223,93,136,43,150,140,11,113,121,10,
    199,3,167,43,244,146,84,114,60,98,245,251,178,46,11,2,
    137,101,77,60,196,251,42,223,2,201,211,158,119,19,245,192,
    207,117,142,210,47,101,88,15,136,50,86,4,43,34,255,177,
    42,229,138,224,18,107,236,225,95,203,69,165,191,190,247,12,
    83,151,211,253,92,30,41,252,64,109,202,29,10,42,70,236,
    190,223,215,15,140,252,132,230,254,0,178,135,15,247,157,60,
    226,8,105,124,217,212,87,121,76,118,92,254,113,181,231,254,
    132,232,212,235,63,220,49,138,237,20,20,251,53,33,217,226,
    241,107,166,53,195,190,126,142,85,11,99,227,65,226,99,127,
    101,140,154,202,36,244,123,225,215,146,99,242,154,109,51,142,
    164,179,25,102,246,151,167,204,24,156,233,111,174,200,46,30,
    106,12,137,68,30,133,41,50,98,46,133,249,89,182,103,191,
    109,93,21,146,133,181,55,0,32,125,159,209,207,43,143,73,
    181,244,35,108,232,185,181,50,87,65,48,209,33,96,139,42,
    30,3,142,93,155,175,56,181,153,138,83,153,178,249,181,108,
    22,239,172,85,167,50,83,19,230,103,27,193,86,181,182,87,
    42,226,191,58,131,94,31,
};

EmbeddedPython embedded_m5_internal_param_EtherLink(
    "m5/internal/param_EtherLink.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_EtherLink.py",
    "m5.internal.param_EtherLink",
    data_m5_internal_param_EtherLink,
    2343,
    7195);

} // anonymous namespace