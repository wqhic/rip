#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_grammar[] = {
    120,156,181,87,219,110,35,199,17,173,30,222,68,46,181,146,
    119,55,202,42,190,205,38,145,69,223,150,128,97,27,182,33,
    11,246,218,235,11,98,8,198,200,72,144,69,0,102,52,108,
    82,67,13,103,6,211,77,175,4,72,72,176,107,32,126,241,
    255,228,55,242,7,126,240,79,248,33,136,235,84,79,83,90,
    219,48,252,192,136,100,171,186,187,250,50,85,231,84,213,36,
    84,255,53,248,247,94,72,100,190,96,97,204,95,69,25,209,
    131,165,172,232,65,224,229,134,200,1,233,38,77,20,141,27,
    244,21,209,99,162,191,62,104,209,184,73,186,45,163,173,229,
    104,7,139,14,7,109,222,56,253,31,255,29,216,30,139,159,
    199,149,209,247,171,170,168,18,127,135,128,127,247,112,135,91,
    44,104,62,93,97,37,31,250,21,159,222,160,232,112,0,141,
    164,81,95,23,191,15,160,254,44,11,150,104,166,232,156,232,
    92,209,227,128,212,121,128,206,72,238,124,56,80,172,113,48,
    192,2,219,229,230,254,105,162,75,155,22,185,93,227,222,104,
    148,230,169,29,141,108,11,243,197,137,206,157,102,147,27,163,
    179,137,237,176,48,215,198,196,83,29,97,102,64,190,49,239,
    114,51,60,46,230,122,120,162,231,115,93,233,215,134,83,61,
    127,67,154,87,141,141,143,50,61,52,85,50,44,207,236,113,
    145,15,121,102,97,211,108,56,173,226,249,60,174,238,150,103,
    17,30,233,14,182,194,113,164,54,213,193,0,82,125,179,60,
    158,107,190,89,79,58,243,98,188,200,208,133,194,65,145,107,
    89,124,121,155,85,93,9,219,132,216,10,219,183,149,60,255,
    199,110,122,233,171,166,247,213,231,151,190,34,184,28,208,80,
    34,52,128,17,8,77,96,100,220,5,56,0,11,134,79,155,
    198,109,153,98,108,116,68,88,163,241,154,8,93,248,25,207,
    155,168,26,18,248,253,9,71,237,144,224,143,61,124,210,166,
    234,54,124,206,39,60,10,40,23,183,195,223,202,249,27,94,
    58,176,64,156,179,153,121,110,41,134,169,9,227,60,76,179,
    76,79,227,44,140,173,173,210,163,133,213,130,45,123,157,155,
    247,253,144,160,83,108,159,233,211,209,201,195,184,154,26,81,
    139,196,67,216,190,30,92,161,245,237,83,2,59,187,40,63,
    211,167,186,250,40,78,108,81,157,189,128,193,182,32,164,207,
    31,177,77,179,230,128,216,230,31,191,96,27,182,126,61,94,
    145,85,52,11,104,214,0,188,31,43,250,91,64,23,252,101,
    133,6,205,132,190,60,104,254,34,203,91,222,180,1,150,179,
    195,246,88,137,221,21,162,183,70,123,151,86,111,59,171,131,
    90,7,17,236,245,43,236,45,230,43,22,182,92,88,131,167,
    224,71,55,224,193,23,199,58,116,195,225,36,229,229,243,133,
    177,161,206,199,225,195,212,30,135,48,80,119,185,112,156,86,
    233,127,57,162,200,16,219,214,157,56,0,94,163,107,24,130,
    179,10,35,124,41,99,123,44,12,55,101,150,218,104,195,115,
    140,183,54,216,218,98,193,89,156,36,222,209,77,239,232,104,
    29,186,184,35,159,39,255,249,168,149,186,252,134,119,185,4,
    69,239,243,151,169,14,133,226,243,160,175,110,171,13,213,80,
    93,213,83,79,5,137,103,70,211,71,193,79,148,248,131,65,
    112,18,80,245,12,77,73,124,35,237,140,221,131,185,64,230,
    222,150,33,133,232,172,32,5,110,178,33,147,127,150,201,198,
    114,178,233,38,155,50,249,47,98,19,206,218,248,50,60,206,
    221,222,1,125,35,170,12,3,116,219,110,65,91,22,252,91,
    22,116,240,189,92,208,244,11,58,210,237,184,5,29,89,240,
    109,125,93,243,31,193,148,235,48,218,182,57,126,108,139,94,
    79,244,214,84,173,247,61,141,175,61,161,215,175,245,214,69,
    239,101,175,119,71,241,172,232,117,105,214,163,67,246,247,248,
    58,217,62,206,123,44,196,153,4,180,245,168,78,24,27,203,
    0,146,129,133,38,234,3,8,91,30,8,60,40,56,23,100,
    1,52,22,24,73,22,85,165,115,59,146,37,146,234,82,242,
    65,197,207,153,98,81,37,90,168,188,151,115,8,223,79,65,
    101,219,191,186,60,205,181,80,97,119,199,236,134,197,209,76,
    39,54,60,142,77,152,23,151,244,9,49,57,192,169,209,239,
    208,224,12,119,201,237,39,110,90,102,103,209,211,24,121,6,
    13,0,31,61,235,131,23,14,202,11,199,20,137,104,103,165,
    190,18,223,208,224,188,149,66,253,154,100,178,169,182,216,121,
    52,122,27,187,190,83,99,188,171,58,140,242,222,149,246,185,
    43,109,87,53,213,198,143,254,247,130,134,50,120,168,61,195,
    118,201,167,251,98,240,4,52,135,123,58,158,27,223,145,84,
    8,236,100,43,229,1,167,18,43,121,202,250,64,184,85,135,
    74,241,127,214,162,139,86,13,102,134,39,83,225,130,177,205,
    242,154,148,23,202,49,67,112,196,163,28,31,25,58,24,77,
    155,178,232,26,205,250,160,211,155,117,103,29,244,241,157,235,
    32,130,239,108,128,39,111,94,48,15,152,37,155,196,177,31,
    163,55,232,188,131,91,94,240,113,107,52,187,9,110,240,57,
    140,223,115,201,163,231,124,99,106,92,116,169,190,197,45,71,
    214,46,185,196,121,96,254,0,207,85,211,197,156,225,228,2,
    232,145,14,227,208,217,232,149,240,33,99,9,240,17,136,138,
    71,202,138,35,103,130,138,200,8,50,98,145,5,1,211,194,
    22,18,95,53,178,225,100,145,39,18,69,5,227,34,141,245,
    209,98,42,161,212,86,113,114,194,39,12,126,131,14,174,146,
    154,148,119,140,243,68,75,247,40,54,218,93,66,64,23,253,
    30,122,192,255,68,176,154,235,135,130,85,217,54,201,152,29,
    34,165,57,135,122,65,185,187,91,89,114,204,118,120,70,69,
    16,33,55,70,187,104,6,62,168,251,83,163,208,143,124,22,
    185,216,42,59,150,16,29,61,138,82,108,118,137,248,113,204,
    208,196,57,142,169,209,75,152,69,40,142,134,104,94,92,234,
    165,137,21,189,210,237,11,177,210,102,145,217,149,242,165,239,
    79,24,57,195,253,29,219,134,66,24,36,131,155,76,132,13,
    181,174,182,88,94,151,207,102,112,155,9,179,174,18,159,28,
    240,147,18,33,255,17,9,170,93,200,156,251,109,80,39,14,
    96,78,81,126,215,171,5,162,118,15,50,103,4,214,204,111,
    226,225,153,36,108,70,199,4,240,198,17,5,74,194,21,6,
    41,83,226,155,96,89,135,193,195,149,121,237,231,64,169,57,
    243,234,106,137,205,176,168,36,235,95,98,116,32,33,235,21,
    52,175,122,211,67,67,4,84,199,151,72,138,246,188,66,165,
    227,241,149,252,125,151,234,36,30,189,69,171,45,149,5,213,
    206,61,114,41,108,186,89,59,167,173,110,112,219,231,8,181,
    233,178,53,140,209,242,17,9,69,54,91,172,26,74,213,38,
    41,10,6,148,68,52,147,183,171,223,58,171,79,154,180,197,
    37,90,190,41,101,156,40,242,235,21,134,248,81,93,105,198,
    78,122,84,23,190,242,102,96,158,231,246,240,44,183,241,105,
    40,172,229,180,17,238,152,119,118,198,252,237,237,239,239,152,
    189,61,73,59,102,251,103,20,81,107,21,19,214,31,224,178,
    17,42,185,232,206,50,101,232,211,146,11,42,204,124,25,103,
    11,45,239,10,226,102,199,32,73,102,194,172,185,153,174,212,
    210,136,229,229,72,110,249,79,236,216,19,51,183,25,247,47,
    4,155,106,105,224,101,57,244,58,249,130,120,38,97,125,123,
    253,170,125,39,13,103,194,198,79,77,40,152,53,8,47,159,
    214,53,107,114,28,115,100,179,140,211,29,19,190,23,138,25,
    37,209,56,140,125,224,45,20,221,67,243,164,69,162,15,209,
    220,95,53,238,96,13,235,172,241,53,45,95,13,26,204,252,
    3,23,207,48,16,73,33,44,149,129,20,5,127,36,95,2,
    128,41,209,251,104,62,66,243,49,253,63,94,35,145,52,16,
    160,13,110,208,86,221,86,247,122,119,247,198,173,110,191,187,
    230,88,141,178,215,249,53,59,187,139,146,10,113,77,162,53,
    6,80,86,69,202,91,212,189,46,72,45,36,27,175,252,186,
    114,238,158,123,131,216,71,22,146,186,2,101,119,63,216,106,
    253,0,121,46,131,244,
};

EmbeddedPython embedded_m5_util_grammar(
    "m5/util/grammar.py",
    "/home/kemmere2/gem5/gem5-stable/src/python/m5/util/grammar.py",
    "m5.util.grammar",
    data_m5_util_grammar,
    1846,
    4392);

} // anonymous namespace