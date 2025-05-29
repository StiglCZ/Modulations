#pragma once
#include "types.hh"

class PM {
    public:
    int Encode(const Signal &in, Signal &out);
    int Decode(const Signal &in, Signal &out);
};

