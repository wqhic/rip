#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyTester[] = {
    120,156,189,89,221,115,219,198,17,223,3,64,74,164,36,139,
    250,182,45,217,130,191,106,214,211,72,173,27,219,153,137,235,
    214,77,210,153,100,38,138,11,185,99,135,201,20,133,128,163,
    8,138,4,24,224,104,155,174,212,135,202,211,143,183,190,244,
    79,200,67,255,145,62,247,159,233,115,187,187,71,64,16,69,
    57,158,180,146,45,157,15,123,123,123,187,183,191,221,219,59,
    251,48,252,83,194,223,95,216,0,233,63,5,64,128,63,2,
    58,0,93,1,13,1,66,10,8,22,97,175,4,201,251,16,
    148,224,13,64,195,0,105,192,33,118,76,248,202,128,104,154,
    231,148,161,99,50,69,192,160,10,210,130,70,9,158,69,115,
    96,201,50,236,85,33,249,29,8,33,34,1,207,131,9,8,
    38,225,13,74,199,78,133,5,78,2,17,171,76,172,64,48,
    197,196,42,4,211,220,153,130,65,13,228,52,52,102,136,173,
    113,1,197,222,65,177,179,44,246,95,36,54,192,145,37,8,
    46,16,59,234,245,37,113,90,196,201,235,205,178,148,90,166,
    229,28,52,230,179,254,66,161,191,88,232,47,21,250,203,133,
    254,74,161,127,177,208,191,84,232,95,46,244,87,11,253,53,
    238,163,37,243,208,190,2,237,171,208,94,135,38,110,238,92,
    174,181,13,210,132,246,53,104,92,3,137,63,54,28,226,254,
    7,243,133,25,215,121,198,66,62,227,6,207,184,9,141,155,
    32,241,231,134,158,81,134,237,250,50,250,52,252,15,254,169,
    163,79,65,77,99,243,66,38,105,24,71,110,24,53,227,208,
    160,241,50,53,132,0,159,154,137,33,20,62,34,40,252,3,
    24,7,129,49,132,194,1,160,96,65,182,116,12,56,224,206,
    129,1,131,58,236,11,104,91,16,152,176,143,203,148,72,129,
    93,1,135,6,124,109,18,195,1,182,22,58,236,42,88,74,
    227,160,205,14,211,146,38,224,160,4,251,37,216,126,190,111,
    16,97,175,2,201,183,240,122,141,133,78,178,80,3,246,177,
    181,224,208,130,131,50,60,67,38,36,181,43,100,190,120,190,
    143,150,34,101,187,110,161,182,91,5,115,201,148,32,76,34,
    175,43,213,28,246,221,158,151,120,93,215,233,239,12,158,202,
    84,201,164,94,205,216,226,116,163,231,169,150,195,243,76,218,
    144,110,79,177,188,56,146,106,10,59,205,48,10,220,110,28,
    244,59,82,77,146,48,183,25,118,164,235,242,224,167,221,94,
    156,168,79,146,36,78,28,218,83,38,118,98,47,159,65,59,
    234,119,226,84,214,105,53,94,198,33,241,138,184,155,61,150,
    72,10,176,174,52,57,144,169,159,132,61,133,174,210,18,137,
    155,164,213,201,73,220,164,79,176,217,108,197,93,185,185,39,
    187,93,153,200,187,155,187,178,123,143,155,247,82,229,237,116,
    228,230,78,63,236,4,155,207,63,184,191,217,27,168,86,28,
    109,226,120,24,161,237,145,215,217,28,221,143,13,228,153,39,
    201,47,195,93,55,100,155,220,150,236,244,100,50,67,212,203,
    180,170,168,137,105,81,22,166,168,139,25,236,149,240,215,20,
    107,198,148,216,10,201,42,159,44,37,68,89,69,12,145,99,
    5,236,25,144,172,17,66,218,248,35,200,165,136,147,109,26,
    51,120,236,215,180,29,154,218,54,201,239,154,184,207,168,66,
    120,33,231,67,114,116,4,12,141,18,180,203,160,33,131,72,
    211,24,74,6,212,34,59,137,49,80,184,5,233,223,1,183,
    23,193,178,15,67,32,29,154,32,162,26,168,42,229,7,164,
    46,227,130,127,100,44,110,215,73,253,45,134,132,106,133,105,
    252,50,226,141,167,62,71,207,54,238,204,147,193,23,59,109,
    233,171,116,29,9,95,198,125,219,247,162,40,86,182,23,4,
    182,167,84,18,238,244,149,76,109,21,219,183,210,58,249,210,
    153,203,80,149,203,27,244,50,20,145,199,17,69,250,35,8,
    125,133,31,11,252,193,94,72,165,66,68,180,226,32,69,58,
    137,216,149,202,33,37,21,109,114,204,138,48,96,92,98,165,
    229,145,239,2,126,63,206,52,97,84,214,203,25,134,82,217,
    105,170,42,195,209,75,83,151,53,33,58,35,143,4,191,240,
    58,125,201,210,17,66,10,21,162,174,214,225,172,177,119,145,
    236,200,204,102,91,162,56,10,6,168,90,232,223,166,85,47,
    50,2,167,25,131,75,136,191,9,108,203,248,111,89,44,27,
    190,53,68,93,57,67,30,101,63,5,236,119,49,116,61,162,
    240,16,51,77,221,224,84,193,230,112,44,94,167,30,77,118,
    214,168,185,66,205,85,106,214,51,139,207,208,236,153,81,179,
    31,208,82,6,219,202,86,145,91,204,204,170,224,88,60,93,
    58,138,39,76,134,219,20,23,6,69,207,81,92,88,148,56,
    147,71,212,34,43,71,156,9,233,83,74,211,20,63,44,140,
    66,5,65,79,189,163,80,224,61,114,106,100,251,100,134,98,
    135,160,89,196,231,110,1,159,14,185,135,193,233,92,202,146,
    160,75,28,26,150,206,42,137,42,141,217,100,155,154,107,231,
    176,211,71,0,219,61,1,176,15,105,213,218,16,96,51,12,
    172,42,254,214,12,223,28,110,127,126,44,46,140,0,139,80,
    101,141,65,213,15,168,103,158,52,248,252,0,53,52,243,87,
    5,64,145,102,70,209,154,45,236,12,86,200,136,34,148,86,
    240,120,127,22,173,224,137,109,240,137,253,99,62,177,249,212,
    231,122,74,39,101,147,243,178,238,148,104,55,154,38,44,15,
    79,226,180,130,109,47,137,95,13,236,184,105,43,54,151,114,
    232,195,91,233,198,173,244,67,204,142,246,35,206,75,58,63,
    234,12,152,200,30,101,48,154,250,201,43,95,242,1,200,95,
    174,171,19,150,203,201,203,29,30,172,136,170,37,218,75,35,
    219,100,78,221,169,74,40,99,159,245,54,87,243,109,38,173,
    63,163,117,170,188,199,166,88,65,4,85,5,43,227,234,36,
    205,197,21,143,226,239,47,105,223,201,96,9,84,94,59,219,
    90,85,182,130,236,113,126,116,12,37,103,103,131,179,137,66,
    127,147,161,163,124,132,14,250,53,51,172,255,25,184,226,20,
    240,39,32,255,163,155,135,88,207,67,131,28,190,64,236,191,
    5,14,138,49,167,61,231,150,109,58,225,153,3,83,78,250,
    128,89,245,225,255,25,252,165,16,81,217,17,109,14,107,202,
    226,17,109,229,121,137,129,243,78,199,176,117,60,129,145,95,
    90,94,74,108,58,43,29,5,233,81,214,207,107,65,204,202,
    103,136,162,73,189,130,75,202,124,125,132,33,58,228,86,197,
    130,81,64,198,79,168,185,155,131,66,100,180,179,209,107,29,
    78,63,140,93,157,243,191,162,197,45,86,119,118,130,195,225,
    72,68,142,247,82,134,247,187,57,222,37,31,78,111,248,110,
    65,173,65,94,62,52,4,94,28,177,34,163,123,154,5,178,
    4,141,50,69,6,151,206,98,24,56,34,75,90,148,226,142,
    157,124,188,29,91,122,163,114,71,107,31,82,243,234,172,147,
    1,185,241,97,199,235,238,4,222,163,132,86,161,165,252,44,
    148,140,76,239,90,81,111,10,3,113,154,234,252,121,47,211,
    255,197,89,39,130,251,40,52,215,155,97,31,196,62,71,255,
    211,150,180,187,178,187,131,23,199,86,216,179,155,29,111,151,
    253,97,14,237,250,34,179,75,177,67,71,43,136,244,14,181,
    177,237,199,17,230,229,190,175,226,196,14,36,94,167,100,96,
    191,103,115,82,183,195,212,246,118,112,212,243,149,134,245,241,
    160,228,2,213,75,118,83,174,69,247,94,82,247,60,252,233,
    226,45,57,164,130,28,242,227,83,223,223,242,28,205,165,182,
    142,18,60,233,240,162,164,6,58,51,81,53,225,108,80,243,
    67,56,167,84,254,62,10,253,134,164,211,38,149,197,170,81,
    49,84,237,88,76,62,161,89,233,201,200,252,247,187,68,166,
    126,204,25,198,103,153,56,229,4,221,207,169,173,80,58,111,
    84,51,226,20,183,211,76,156,201,136,23,184,157,101,98,45,
    35,206,113,59,207,196,133,140,184,200,237,18,19,151,51,226,
    10,183,23,153,120,41,35,94,230,118,149,137,107,25,241,10,
    183,87,153,184,158,189,86,217,76,188,6,141,235,244,12,67,
    148,27,148,92,38,254,215,228,194,17,122,30,177,249,251,255,
    107,78,113,30,156,183,218,206,7,48,172,38,78,203,39,162,
    104,211,140,206,39,109,145,93,90,138,6,241,131,200,202,24,
    104,187,126,34,61,37,181,103,214,206,222,68,206,71,122,205,
    63,28,229,136,147,37,246,227,220,154,67,174,160,6,139,236,
    48,125,83,99,135,137,103,209,101,172,181,45,174,181,31,82,
    173,189,207,166,187,134,46,183,143,64,88,202,119,96,17,155,
    72,190,116,71,119,65,215,211,164,154,215,235,201,40,112,238,
    64,177,68,230,225,179,246,61,229,191,191,66,161,154,49,197,
    34,214,196,39,99,141,82,123,193,58,246,92,41,143,174,115,
    240,33,195,244,111,25,76,235,55,161,152,223,157,135,212,112,
    22,205,147,185,243,243,220,3,246,88,12,182,164,191,231,54,
    59,253,180,69,247,175,239,102,194,250,138,239,202,5,154,186,
    125,234,164,212,85,177,235,199,221,94,71,42,201,11,188,43,
    47,173,51,159,173,115,108,104,188,136,64,122,65,39,70,149,
    84,43,145,105,43,238,4,167,47,55,134,55,91,238,228,144,
    186,50,78,68,212,239,186,126,175,159,242,34,111,231,32,209,
    116,64,103,4,181,58,142,61,29,224,71,151,197,189,109,156,
    132,241,115,23,127,170,91,227,88,95,122,123,178,223,115,155,
    137,252,166,47,35,127,192,66,223,141,147,196,19,128,70,7,
    212,253,113,211,249,205,21,77,250,20,139,165,39,220,143,163,
    8,175,143,244,100,239,199,253,72,241,202,223,115,42,169,66,
    207,44,223,201,249,246,5,62,246,148,247,61,117,59,125,234,
    168,110,167,114,114,106,225,236,31,72,134,245,232,98,188,219,
    195,231,169,0,233,73,60,192,18,142,175,226,248,221,113,221,
    115,169,198,126,134,66,95,147,116,74,97,88,141,137,50,214,
    99,75,226,216,95,163,82,174,8,46,115,71,254,39,70,43,
    71,248,210,23,208,65,234,240,25,58,155,103,30,254,15,131,
    172,226,164,36,197,143,36,91,94,87,191,247,242,131,166,115,
    3,134,143,80,206,237,60,131,209,203,28,223,250,245,171,10,
    158,31,92,130,115,197,237,252,148,232,244,72,214,189,183,145,
    89,183,161,173,219,214,209,97,240,32,199,83,145,71,82,36,
    126,46,187,113,50,248,60,14,164,90,27,25,127,28,4,137,
    227,69,187,210,125,33,233,6,192,174,62,198,48,44,255,181,
    140,140,203,30,171,202,113,222,19,186,104,38,28,212,207,244,
    124,145,61,57,254,17,165,36,25,12,121,174,156,206,243,113,
    220,245,144,62,126,149,237,48,91,101,110,100,60,72,104,214,
    210,8,53,149,73,232,117,194,215,250,245,63,35,43,242,235,
    168,218,228,158,252,139,139,251,145,146,135,17,158,200,221,144,
    62,88,68,206,62,172,3,8,131,227,51,105,113,234,121,132,
    131,190,30,235,55,187,71,116,214,241,171,35,61,227,87,102,
    43,24,26,84,31,152,162,138,21,130,101,78,215,42,214,244,
    84,197,170,76,152,252,6,59,35,22,140,170,85,153,154,22,
    227,254,174,99,8,85,141,245,149,138,248,47,96,16,69,246,
};

EmbeddedPython embedded_m5_internal_param_RubyTester(
    "m5/internal/param_RubyTester.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_RubyTester.py",
    "m5.internal.param_RubyTester",
    data_m5_internal_param_RubyTester,
    2528,
    7882);

} // anonymous namespace