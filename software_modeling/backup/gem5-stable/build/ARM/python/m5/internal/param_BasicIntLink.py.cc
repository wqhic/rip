#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasicIntLink[] = {
    120,156,189,88,253,114,220,72,17,239,145,180,107,239,122,29,
    219,113,108,39,177,19,11,168,112,75,138,179,33,92,8,85,
    23,2,185,227,168,186,43,240,29,218,163,146,219,187,66,104,
    165,177,173,181,62,182,164,113,156,77,217,69,21,78,29,188,
    0,188,1,127,240,54,188,17,116,247,72,90,249,139,187,42,
    240,58,171,201,104,212,211,211,31,191,238,233,25,31,138,191,
    6,62,191,180,1,242,191,11,128,0,127,2,34,128,88,64,
    95,128,144,2,130,91,112,208,128,236,61,8,26,240,22,160,
    111,128,52,224,20,59,38,124,105,64,210,225,57,77,136,76,
    30,17,48,110,131,180,160,223,128,23,201,18,88,178,9,7,
    109,200,254,8,66,136,68,192,203,96,6,130,89,120,139,220,
    177,211,98,134,179,64,131,109,30,108,65,48,199,131,109,8,
    58,220,153,131,241,34,200,14,244,231,137,172,127,3,217,62,
    68,182,11,204,246,95,196,54,192,47,43,16,220,32,114,148,
    235,11,162,180,136,146,215,91,96,46,139,165,148,75,208,191,
    89,246,151,107,253,91,181,254,74,173,191,90,235,175,213,250,
    183,185,143,146,221,132,225,29,24,222,133,225,58,236,162,177,
    150,42,41,54,64,154,48,188,7,253,123,32,241,183,1,167,
    104,207,224,102,109,198,125,158,177,92,205,216,228,25,54,244,
    109,144,248,219,212,51,154,208,235,174,162,143,194,127,227,95,
    23,125,4,170,131,205,43,153,229,97,154,184,97,178,155,134,
    6,125,111,82,67,30,245,169,153,41,92,251,33,185,246,159,
    192,126,13,140,194,181,39,128,140,5,233,18,25,112,194,157,
    19,3,198,93,56,22,48,180,32,48,225,24,151,105,144,0,
    123,2,78,13,248,202,36,130,19,108,45,116,192,125,176,148,
    246,235,144,29,160,57,205,192,73,3,142,27,208,123,121,108,
    208,192,65,11,178,127,192,155,13,102,58,203,76,13,56,198,
    214,130,83,11,78,154,240,2,137,112,104,216,34,245,197,203,
    99,212,20,71,122,93,11,165,221,169,169,75,170,4,97,150,
    120,177,84,203,216,119,71,94,230,197,238,7,94,30,250,31,
    39,234,55,97,114,208,109,151,132,105,190,53,242,212,190,195,
    51,77,50,73,60,82,204,49,77,164,154,195,206,110,152,4,
    110,156,6,135,145,84,179,196,206,221,13,35,233,186,252,241,
    227,120,148,102,234,163,44,75,51,135,172,202,131,81,234,85,
    51,200,166,126,148,230,178,75,171,241,50,14,177,87,68,189,
    59,98,142,36,0,75,75,147,3,153,251,89,56,82,232,44,
    205,145,168,137,91,151,220,196,77,238,96,179,189,159,198,114,
    251,64,198,177,204,228,163,237,61,25,63,230,230,221,92,121,
    131,72,110,15,14,195,40,216,126,238,252,118,123,52,86,251,
    105,178,141,223,195,68,73,180,75,180,125,209,34,91,72,117,
    147,120,31,133,123,110,200,90,185,251,50,26,201,108,158,70,
    239,210,186,98,81,116,68,83,152,162,43,230,177,215,192,199,
    20,27,198,156,216,9,73,47,159,116,37,84,89,117,28,145,
    115,5,28,24,144,109,16,74,134,248,19,228,86,196,74,143,
    190,25,252,237,119,100,16,61,58,52,201,247,122,240,152,145,
    133,16,67,202,167,228,236,4,24,30,13,24,54,65,195,6,
    209,166,113,148,141,169,69,114,98,99,32,115,11,242,191,1,
    26,24,1,115,12,5,152,78,77,16,201,34,168,54,197,60,
    142,174,226,130,127,102,60,246,186,36,254,14,131,66,237,135,
    121,122,148,176,233,169,207,17,212,67,203,124,54,254,116,48,
    148,190,202,55,113,224,139,244,208,246,189,36,73,149,237,5,
    129,237,41,149,133,131,67,37,115,91,165,246,131,188,75,222,
    116,150,74,92,85,252,198,163,18,71,228,115,196,145,126,9,
    66,95,225,11,3,214,101,47,228,82,33,38,246,211,32,199,
    113,98,177,39,149,67,66,42,50,114,202,130,48,100,92,34,
    165,229,145,238,6,190,63,47,37,97,92,118,155,37,138,114,
    25,237,170,54,3,210,203,115,151,37,161,113,198,30,49,126,
    229,69,135,146,185,35,136,20,10,68,93,45,195,245,163,239,
    54,105,82,42,206,218,36,105,18,140,81,184,208,127,135,214,
    189,205,24,236,48,10,87,16,129,51,216,54,241,255,166,88,
    53,124,171,192,93,179,196,30,229,64,5,236,121,81,56,31,
    113,120,138,249,166,107,112,194,96,133,56,30,191,75,61,154,
    236,108,80,115,143,154,251,212,108,150,58,95,171,226,243,231,
    21,127,66,139,25,172,45,235,69,174,49,75,189,130,51,49,
    117,103,18,83,152,20,123,20,27,6,69,208,36,54,44,74,
    160,217,51,106,145,148,163,206,132,252,115,74,215,20,67,204,
    140,194,5,129,79,189,73,56,176,149,156,69,210,126,182,68,
    178,67,240,172,99,116,175,134,81,135,28,196,0,117,238,148,
    169,208,37,10,13,77,103,157,88,53,46,49,179,77,205,119,
    166,98,235,9,200,246,46,128,236,125,90,119,177,0,217,60,
    131,171,141,207,162,225,155,133,3,170,13,114,249,28,184,8,
    89,214,37,200,250,62,245,204,139,42,79,19,84,133,162,191,
    174,129,138,100,51,234,250,236,96,103,188,70,106,212,225,180,
    134,91,253,139,100,13,119,111,131,119,239,31,241,238,205,21,
    0,215,74,58,57,155,156,159,117,167,65,246,216,53,97,181,
    216,149,243,22,182,163,44,125,61,182,211,93,91,177,194,148,
    75,159,62,200,183,30,228,239,99,150,180,159,113,126,210,121,
    82,103,194,76,142,40,147,209,212,143,94,251,146,183,66,126,
    115,93,157,184,92,78,98,110,177,197,34,178,86,200,154,70,
    105,102,78,225,185,202,40,115,95,191,161,219,149,161,73,238,
    79,104,165,54,91,217,20,107,136,162,182,96,113,92,157,174,
    185,212,226,175,248,124,64,150,39,149,37,80,241,236,244,180,
    176,172,7,105,228,252,240,12,82,174,83,11,103,27,217,254,
    190,68,72,115,130,16,122,204,18,241,127,1,174,64,5,124,
    13,132,1,116,117,129,248,42,64,200,233,203,68,254,7,224,
    208,184,100,231,231,28,211,163,221,158,41,48,245,228,79,152,
    84,23,2,159,192,95,107,113,85,110,215,102,81,99,214,183,
    107,171,202,79,12,158,111,181,37,91,103,19,25,121,102,223,
    203,137,76,103,167,73,168,78,242,127,85,25,98,118,190,86,
    36,205,234,53,92,18,231,171,9,142,104,195,91,23,203,70,
    13,29,63,166,230,81,5,12,81,142,93,151,100,155,112,245,
    214,236,234,252,255,37,45,111,177,192,11,51,92,47,213,153,
    84,184,111,148,184,127,84,225,94,242,86,245,150,79,28,212,
    26,228,235,83,67,224,241,16,107,52,58,141,89,32,27,208,
    111,82,132,112,57,45,138,0,18,101,250,162,100,119,102,31,
    100,147,236,104,99,85,238,214,158,164,230,245,245,167,5,114,
    230,211,200,139,7,129,247,44,161,117,104,49,191,12,41,163,
    148,124,177,46,57,133,131,184,74,120,126,125,92,106,240,234,
    250,83,194,79,145,109,37,57,7,64,144,250,156,7,62,223,
    151,118,44,227,1,30,41,247,195,145,189,27,121,123,236,19,
    179,208,236,211,82,51,197,78,61,95,83,228,15,169,77,109,
    63,77,48,75,31,250,42,205,236,64,226,49,75,6,246,187,
    54,167,120,59,204,109,111,128,95,61,95,105,120,159,13,79,
    46,91,189,108,47,231,10,245,224,136,186,211,241,169,139,39,
    232,16,11,245,17,84,219,169,62,217,85,25,155,75,112,29,
    45,184,243,225,1,74,141,117,150,162,250,194,217,162,230,7,
    48,181,196,254,30,178,141,137,63,25,170,41,214,141,150,193,
    231,188,58,221,103,52,51,191,24,163,71,223,38,70,245,229,
    77,17,169,77,162,148,51,116,126,167,182,69,233,189,223,46,
    7,231,184,237,240,224,124,121,63,116,131,7,23,248,206,165,
    201,35,75,20,232,51,255,107,160,115,172,76,39,74,142,254,
    175,241,237,60,153,190,224,206,207,160,216,227,175,138,109,81,
    215,106,94,199,246,80,148,71,138,186,74,124,105,113,231,82,
    136,185,126,38,61,37,181,127,54,166,161,38,231,7,189,234,
    155,73,196,94,44,128,159,87,26,157,114,109,51,190,197,110,
    211,103,41,118,155,120,145,220,197,74,216,226,74,248,41,85,
    194,199,172,190,107,232,98,120,2,198,70,101,5,58,131,38,
    242,200,189,104,9,93,239,146,112,222,104,36,147,192,121,8,
    245,18,150,63,95,63,6,40,35,253,9,106,149,134,41,110,
    97,205,122,49,238,40,221,214,52,100,255,53,170,72,155,138,
    39,25,176,95,151,128,237,82,14,155,228,92,231,41,53,156,
    101,171,4,235,252,162,242,195,189,203,209,152,164,129,116,61,
    58,32,125,3,5,86,61,236,43,253,250,95,137,7,223,200,
    110,112,150,221,128,189,192,1,19,200,72,42,121,9,90,20,
    105,86,156,184,3,137,219,98,58,198,67,16,159,43,240,61,
    114,221,41,109,38,63,71,182,175,160,72,107,184,153,136,38,
    110,39,43,98,197,104,53,91,130,119,231,115,87,203,90,36,
    58,218,235,10,122,204,146,129,179,80,185,134,239,63,203,109,
    146,188,200,39,189,29,47,214,151,87,124,55,227,124,15,138,
    179,180,243,78,229,98,50,24,31,91,244,209,16,195,140,43,
    7,46,20,156,159,148,94,143,31,111,149,58,109,213,116,114,
    82,60,20,100,124,7,27,63,230,242,246,34,225,135,81,234,
    31,200,64,95,248,93,193,140,105,126,149,198,30,142,175,95,
    74,209,11,227,130,195,210,185,239,65,70,179,86,206,141,230,
    50,11,189,40,124,35,175,224,199,226,147,63,216,114,229,71,
    69,6,61,79,208,42,65,72,111,92,8,92,72,203,12,169,
    76,238,133,57,153,99,161,62,161,200,83,228,114,54,208,37,
    112,174,79,158,14,2,117,89,173,207,253,207,232,126,41,167,
    107,13,186,16,108,45,180,16,141,148,193,76,60,115,207,11,
    203,236,44,182,172,206,92,203,106,205,152,124,147,51,143,103,
    168,182,213,154,235,136,250,191,77,68,110,219,216,92,106,137,
    255,0,107,158,247,226,
};

EmbeddedPython embedded_m5_internal_param_BasicIntLink(
    "m5/internal/param_BasicIntLink.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_BasicIntLink.py",
    "m5.internal.param_BasicIntLink",
    data_m5_internal_param_BasicIntLink,
    2262,
    6882);

} // anonymous namespace