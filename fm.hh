#pragma once
#include "types.hh"

struct FMOptions {
    Frequency CarrierFreq;
    Frequency Sensitivity;
    Amplitude Amp;
};

class FM {
    public:
    int Encode(const Signal &in, Signal &out, FMOptions options);
    int Decode(const Signal &in, Signal &out, FMOptions options);
};
