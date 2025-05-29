#pragma once
#include "types.hh"

struct PMOptions {
    Frequency CarrierFreq;
};

class PM {
    public:
    int Encode(const Signal &in, Signal &out, PMOptions options);
    int Decode(const Signal &in, Signal &out, PMOptions options);
};

