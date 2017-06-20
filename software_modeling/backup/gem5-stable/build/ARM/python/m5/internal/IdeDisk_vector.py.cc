#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_IdeDisk_vector[] = {
    120,156,197,91,107,136,36,87,21,62,85,253,152,237,222,153,
    157,153,157,215,238,206,36,219,121,108,50,137,102,71,99,214,
    168,9,27,99,18,195,70,178,49,53,145,77,38,209,74,77,
    215,157,153,154,233,174,234,84,213,236,110,199,89,37,206,106,
    124,162,226,3,21,17,17,252,161,32,130,32,8,130,32,8,
    130,32,4,4,65,16,4,69,16,4,65,240,159,160,158,239,
    84,85,119,117,119,173,100,183,167,107,119,102,206,222,174,186,
    125,207,253,238,249,238,185,247,156,186,85,167,248,95,137,255,
    222,91,35,10,46,107,68,54,255,106,212,32,106,106,180,166,
    145,166,52,178,103,105,167,68,254,3,100,151,232,42,209,154,
    78,74,167,125,46,20,232,69,157,220,113,249,78,153,26,5,
    185,162,81,187,74,170,72,107,37,186,224,78,83,81,149,105,
    167,74,254,203,164,105,154,171,209,243,246,24,217,135,232,42,
    183,206,133,138,52,120,136,112,177,42,23,43,100,31,150,139,
    85,178,199,165,112,152,218,83,164,198,105,109,2,213,214,142,
    112,179,247,114,179,147,210,236,27,104,214,230,59,115,100,31,
    65,117,238,215,11,168,89,68,77,209,55,41,173,76,145,45,
    173,108,48,158,233,78,197,105,82,5,218,62,74,107,71,73,
    241,239,52,237,51,228,24,206,12,173,205,38,208,230,82,229,
    249,84,121,33,85,62,150,42,31,151,242,209,68,225,76,71,
    225,9,81,184,72,107,139,164,248,247,68,164,176,76,171,203,
    243,108,5,231,191,252,111,153,173,64,225,56,139,139,202,15,
    28,207,53,29,119,195,115,116,220,47,67,192,102,117,136,177,
    216,120,143,193,120,63,32,177,156,173,199,198,187,66,220,176,
    134,14,53,116,186,34,133,43,58,181,151,105,79,163,237,34,
    217,5,218,99,53,37,116,96,83,163,125,157,94,42,160,194,
    21,150,69,30,226,91,169,24,70,150,219,150,33,142,90,26,
    163,43,37,218,43,209,234,243,123,58,46,236,84,200,255,62,
    189,186,36,141,30,146,70,117,218,99,89,164,253,34,93,41,
    211,5,174,196,151,182,43,128,175,61,191,199,72,249,202,234,
    114,145,123,123,62,5,23,80,108,199,119,173,166,10,39,185,
    108,158,179,213,227,78,176,99,94,84,245,208,243,151,171,73,
    37,47,56,221,178,194,45,67,190,85,192,112,52,91,161,180,
    230,185,42,60,204,133,13,199,181,205,166,103,239,54,84,120,
    8,77,153,27,78,67,153,166,220,60,215,108,121,126,248,132,
    239,123,190,129,17,149,139,13,207,234,124,3,227,89,111,120,
    129,90,134,54,81,99,160,249,16,181,55,90,210,34,58,32,
    61,197,151,109,21,212,125,167,21,178,161,162,22,81,27,173,
    45,195,68,34,130,243,44,86,182,188,166,90,217,81,205,166,
    242,213,253,43,155,170,121,70,196,125,65,104,173,55,212,202,
    250,174,211,176,87,30,53,158,94,105,181,195,45,207,93,225,
    251,142,27,42,30,147,198,74,239,104,156,230,26,71,209,238,
    37,103,211,116,4,145,185,165,26,45,229,79,224,234,9,232,
    212,166,180,113,173,172,21,180,101,109,130,75,37,254,43,104,
    75,250,97,237,188,3,76,117,224,4,155,138,105,254,192,168,
    26,237,232,228,47,129,29,219,252,171,193,156,204,145,85,220,
    211,229,222,179,24,140,232,234,118,1,54,143,46,238,9,163,
    152,90,92,243,97,24,217,37,161,69,137,182,203,20,209,133,
    89,22,241,199,111,67,114,117,52,163,115,227,69,10,190,70,
    60,184,76,148,61,138,73,180,95,32,205,157,162,176,138,217,
    204,87,231,89,225,39,132,135,171,203,232,254,121,33,68,184,
    229,4,222,37,87,134,29,101,153,57,171,60,50,31,108,63,
    179,190,205,227,21,156,228,11,47,120,187,181,186,229,186,94,
    88,179,108,187,102,133,161,239,172,239,134,42,168,133,94,237,
    84,176,12,75,26,211,9,167,58,237,181,91,9,135,96,111,
    230,80,244,193,118,234,33,127,152,145,15,98,133,64,133,204,
    135,45,207,14,248,58,154,216,84,161,129,78,134,24,100,79,
    58,34,116,49,81,21,234,185,222,17,254,252,104,210,19,225,
    228,114,57,97,80,160,26,27,97,85,200,104,5,129,41,61,
    193,117,225,29,26,190,104,53,118,149,180,206,4,10,185,67,
    40,70,125,24,45,243,142,1,69,2,90,144,184,158,107,183,
    185,99,78,253,110,232,60,38,252,27,23,6,206,49,251,198,
    88,150,249,255,178,54,175,215,139,49,231,202,9,239,224,247,
    66,18,171,107,177,225,153,131,251,236,99,150,117,113,18,2,
    70,230,225,237,40,225,203,198,18,196,45,16,183,66,156,76,
    240,142,12,244,68,63,232,7,161,72,23,164,130,9,38,41,
    36,152,236,158,185,116,188,59,151,216,9,174,98,78,232,152,
    57,221,57,81,132,195,244,207,66,114,85,153,109,5,10,158,
    131,123,198,220,145,198,48,77,152,240,40,117,167,129,140,144,
    49,5,228,135,18,6,27,160,101,154,155,155,41,110,26,48,
    142,16,211,56,158,184,63,19,53,34,74,26,139,104,170,148,
    49,196,53,136,219,70,62,206,93,114,109,14,144,235,33,232,
    156,138,201,53,33,164,170,242,223,148,94,47,196,131,223,89,
    12,103,250,72,5,70,21,51,24,117,23,74,133,65,184,121,
    145,41,6,249,254,20,153,208,47,61,141,5,29,104,47,0,
    66,154,70,11,188,164,95,112,23,120,149,214,101,149,126,155,
    172,210,178,210,203,174,39,114,198,5,241,199,81,161,132,177,
    216,40,208,124,188,250,6,21,150,45,223,187,220,174,121,27,
    181,80,192,194,119,62,124,42,56,125,42,120,136,189,98,237,
    172,248,163,200,47,70,158,207,87,45,120,46,124,245,137,203,
    117,37,203,158,124,50,205,200,81,153,226,180,204,120,57,101,
    70,205,97,36,245,100,136,197,101,7,161,15,79,61,218,65,
    174,118,6,25,125,126,10,90,170,50,194,5,109,129,217,83,
    213,164,43,102,228,154,101,59,37,119,249,239,125,24,117,192,
    85,132,45,176,177,26,117,84,48,0,141,241,214,30,134,140,
    10,129,177,194,77,126,40,97,70,185,203,12,252,21,18,150,
    191,78,178,195,212,232,83,4,219,179,137,99,150,119,38,5,
    140,61,131,234,31,33,153,14,25,43,188,248,148,85,172,234,
    82,131,93,77,240,160,84,141,22,252,167,232,211,169,185,148,
    44,203,133,120,15,153,94,150,139,29,127,36,164,121,83,75,
    111,177,215,113,193,42,91,86,128,106,145,55,234,78,207,174,
    175,239,236,254,216,27,143,140,65,135,162,246,77,116,229,165,
    46,127,176,176,45,106,51,122,138,21,111,135,184,191,67,8,
    45,185,54,138,94,157,164,107,47,191,102,228,231,95,132,234,
    162,116,118,114,76,118,25,209,126,232,28,55,106,113,51,29,
    182,151,18,182,255,165,195,118,37,139,210,85,137,37,32,117,
    88,121,95,215,56,180,227,93,24,34,169,34,169,18,173,149,
    73,141,97,203,143,128,173,148,4,108,229,56,96,235,198,120,
    227,82,174,72,121,66,98,60,66,96,22,199,120,147,73,140,
    199,209,217,132,20,166,227,48,142,3,178,56,112,155,65,224,
    134,194,108,28,184,173,205,33,178,66,97,62,142,172,214,22,
    16,163,162,112,12,129,32,10,199,201,158,151,194,9,178,23,
    164,176,136,137,140,229,69,230,81,242,39,30,22,254,184,103,
    137,22,11,158,143,108,219,97,102,68,58,136,203,163,245,92,
    224,221,195,13,171,185,110,91,103,55,161,3,138,234,201,204,
    215,147,94,79,165,123,141,89,171,93,171,227,242,241,76,210,
    251,139,163,245,90,239,228,38,59,189,150,57,106,123,117,113,
    85,207,109,169,90,83,53,215,57,170,221,114,90,181,141,134,
    181,41,182,40,196,168,158,73,80,133,194,190,254,109,78,112,
    47,164,87,171,123,46,47,32,187,208,87,179,21,71,123,202,
    174,221,87,147,213,167,230,4,53,107,157,239,90,245,48,154,
    133,189,30,68,118,208,150,191,25,200,102,121,231,18,138,163,
    183,165,201,1,188,195,241,130,67,189,171,124,15,7,209,51,
    187,75,61,233,124,169,227,76,150,104,212,139,13,204,214,236,
    144,45,233,90,135,108,19,145,89,182,181,100,131,154,102,154,
    132,189,179,3,110,198,148,16,37,47,0,240,139,94,119,132,
    163,40,183,179,92,166,39,77,7,71,180,212,13,66,153,25,
    132,226,184,117,63,181,139,193,55,220,209,50,7,132,128,86,
    63,197,154,3,131,99,171,52,28,227,236,168,173,35,104,160,
    116,119,104,52,11,25,104,56,234,183,220,186,74,33,58,51,
    114,68,152,217,137,226,203,67,163,202,152,61,234,149,93,171,
    145,43,36,248,27,209,250,209,12,79,117,29,174,32,131,112,
    117,175,213,206,201,19,8,215,160,239,99,7,142,194,85,151,
    195,60,81,64,223,107,195,161,200,152,46,166,224,48,205,188,
    144,196,9,52,209,121,245,192,209,180,124,117,209,241,118,131,
    60,209,36,58,95,31,122,222,207,15,2,178,236,139,125,206,
    108,244,238,25,65,87,172,247,179,67,99,154,203,162,156,122,
    133,9,151,167,51,43,11,235,160,246,11,163,65,228,170,155,
    130,8,106,191,52,52,162,76,183,224,112,124,222,131,105,244,
    196,139,247,199,162,248,43,35,66,21,236,174,223,28,84,162,
    248,235,163,240,17,166,153,191,169,36,93,22,233,253,38,209,
    64,190,18,152,158,204,194,244,249,44,71,158,137,169,223,80,
    239,206,9,147,232,253,54,13,174,76,61,209,217,94,55,58,
    147,62,229,186,122,58,124,223,52,191,211,237,227,178,140,80,
    39,29,41,89,158,40,45,212,242,189,150,242,195,118,148,134,
    67,210,220,56,13,113,79,143,59,179,85,67,133,202,236,181,
    65,56,69,157,167,6,182,226,56,218,107,155,102,60,72,252,
    5,211,148,40,203,120,4,226,81,136,199,32,158,128,120,18,
    226,28,196,7,32,158,134,120,6,226,89,136,85,8,228,50,
    141,11,16,47,64,32,75,101,188,212,51,126,35,11,14,31,
    224,38,55,208,54,198,170,172,45,234,21,189,172,85,180,138,
    94,41,140,243,79,229,90,63,186,140,107,212,78,242,72,122,
    48,123,102,107,111,34,123,22,29,137,136,115,104,229,36,105,
    54,150,36,205,228,12,4,10,21,73,157,69,249,180,74,146,
    79,139,242,102,227,73,222,108,34,201,155,29,73,242,102,147,
    73,222,108,42,201,155,77,39,121,179,163,73,222,108,38,201,
    155,205,38,121,179,185,36,111,54,159,228,205,22,146,188,217,
    177,36,111,118,156,236,99,73,38,237,120,156,73,179,79,72,
    97,137,236,69,41,220,66,246,146,20,110,37,251,22,41,156,
    36,251,86,41,212,200,62,41,133,219,200,174,73,225,118,178,
    111,147,194,29,100,223,46,133,59,201,190,67,10,167,200,190,
    83,10,119,145,186,155,182,151,105,237,30,178,79,201,149,123,
    145,190,195,227,154,161,210,119,163,95,165,37,145,242,67,58,
    200,172,157,241,96,190,157,54,222,69,241,195,133,107,101,236,
    110,96,215,222,59,135,196,159,193,227,228,233,69,19,157,63,
    162,255,227,233,171,29,251,236,247,101,227,234,148,155,211,23,
    183,248,227,140,110,94,199,160,159,24,28,116,19,143,10,94,
    85,190,151,95,236,23,61,95,238,168,253,201,112,152,50,136,
    100,154,235,158,215,200,59,152,141,116,254,116,56,52,243,89,
    104,26,202,205,15,76,180,178,139,202,159,165,176,164,159,28,
    10,150,25,234,221,210,69,79,1,7,17,45,102,33,218,84,
    97,208,112,234,136,150,186,137,120,77,230,35,228,246,104,33,
    142,83,124,192,33,238,195,207,251,108,118,253,91,215,76,144,
    65,23,100,158,251,215,8,93,87,249,47,70,102,69,222,254,
    13,88,209,216,129,104,228,132,178,219,131,95,14,109,195,76,
    231,200,10,120,137,104,230,108,194,195,9,184,72,247,175,70,
    131,141,39,192,77,195,214,209,253,235,209,96,11,110,34,182,
    142,238,223,208,80,107,193,209,65,96,45,175,149,215,58,0,
    35,176,186,223,166,48,220,120,162,172,15,134,213,106,41,215,
    206,61,81,22,169,125,99,56,171,204,14,194,81,205,86,152,
    219,147,12,121,32,3,133,191,27,14,199,204,32,142,192,121,
    53,175,71,179,209,121,86,214,247,251,161,249,149,5,228,146,
    213,74,177,107,228,177,82,132,134,149,254,225,192,185,181,174,
    54,29,55,79,110,137,194,63,30,184,231,194,124,207,209,115,
    177,186,63,13,135,33,195,109,249,185,26,3,30,43,210,248,
    231,3,159,233,126,142,230,192,220,128,190,191,30,248,220,168,
    55,148,149,91,182,32,122,9,132,21,254,109,56,28,75,131,
    56,54,113,160,176,209,240,234,121,102,63,208,211,30,197,127,
    31,14,87,70,28,206,219,7,115,221,170,239,228,250,24,54,
    214,249,143,62,52,215,191,175,204,90,232,125,43,80,185,238,
    40,101,181,135,214,127,246,225,73,142,182,11,158,199,187,120,
    24,76,244,82,215,172,164,172,146,151,10,240,74,217,5,247,
    4,21,121,58,226,104,248,35,56,26,190,39,135,123,77,61,
    58,29,222,77,109,149,40,237,200,93,117,201,236,29,135,40,
    33,137,3,33,6,206,223,165,130,63,12,136,220,29,109,42,
    12,15,48,254,69,148,156,190,157,212,10,218,172,54,113,163,
    27,136,99,25,204,221,13,182,34,234,230,185,71,149,195,247,
    137,230,127,31,184,187,220,240,61,55,183,163,42,224,144,40,
    252,207,112,56,50,22,175,60,93,10,22,47,232,211,180,3,
    72,162,100,69,66,65,224,108,186,169,25,116,54,31,170,73,
    56,36,186,139,218,176,142,50,107,167,164,36,150,200,211,83,
    202,118,73,212,142,141,2,145,227,6,202,15,115,71,20,169,
    173,166,16,221,152,143,203,200,43,243,96,41,255,98,254,103,
    138,98,189,19,218,65,111,55,234,86,203,170,59,249,69,226,
    216,110,36,58,167,50,208,244,156,20,184,217,231,184,103,180,
    248,73,222,242,91,40,125,72,192,248,48,132,28,11,232,158,
    8,192,99,45,121,222,100,40,8,28,221,55,112,82,221,192,
    105,112,3,39,170,141,87,32,208,160,129,227,187,198,37,136,
    54,37,219,130,43,16,31,135,120,13,98,31,226,147,16,56,
    29,103,124,6,226,115,16,56,134,101,124,17,226,203,16,114,
    48,225,171,16,56,33,99,124,3,226,91,16,56,136,97,224,
    164,131,241,93,136,239,245,204,212,248,216,66,223,30,197,68,
    157,151,123,198,118,100,3,108,113,147,120,87,58,192,43,101,
    101,109,81,43,235,56,70,112,93,63,99,253,199,12,42,154,
    44,11,125,47,249,71,64,228,121,137,188,235,212,14,12,92,
    49,38,59,67,18,29,70,140,207,123,192,186,178,175,56,111,
    53,163,215,137,229,141,89,227,14,8,60,58,55,238,238,152,
    30,47,127,202,11,102,209,203,123,188,239,147,23,40,228,125,
    9,227,29,16,56,50,33,143,2,250,142,233,224,112,136,207,
    145,106,192,23,66,52,211,60,115,58,25,174,211,45,203,183,
    154,137,89,228,149,249,230,25,241,71,233,74,202,221,149,58,
    231,30,151,246,7,191,143,47,159,107,90,28,177,100,223,95,
    117,154,209,171,221,225,116,223,125,219,183,184,60,215,119,149,
    125,144,99,53,120,181,16,227,101,61,223,72,131,26,61,135,
    162,55,124,162,55,36,207,34,143,44,155,122,188,46,93,153,
    172,48,159,240,170,126,65,171,242,46,183,88,24,159,170,20,
    199,15,87,138,149,177,130,188,239,58,161,205,232,213,98,229,
    240,252,123,42,90,149,107,118,127,230,119,42,218,255,0,226,
    42,24,80,
};

EmbeddedPython embedded_m5_internal_IdeDisk_vector(
    "m5/internal/IdeDisk_vector.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/IdeDisk_vector.py",
    "m5.internal.IdeDisk_vector",
    data_m5_internal_IdeDisk_vector,
    3491,
    17364);

} // anonymous namespace