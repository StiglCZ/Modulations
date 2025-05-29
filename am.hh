#pragma once
#include "types.hh"

struct AMOptions {
    Frequency CarrierFreq;
    Amplitude CarrierAmp, MessageAmp;
};

class AM {
    public:
    int Encode(const Signal &in, Signal &out, AMOptions options);
    int Decode(const Signal &in, Signal &out, AMOptions options);
};
