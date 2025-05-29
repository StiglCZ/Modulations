#include "am.hh"
#include <cmath>

int AM::Encode(const Signal &in, Signal &out, AMOptions ops) {
    size_t size = in.size();
    if(out.size() < size) out.resize(in.size());

    for(int t = 0; t < size; t++)
        out[t] = sinf(ops.CarrierFreq * M_PI * 2 * t) * ops.CarrierAmp + in[t] * ops.MessageAmp;
    
    return size;
}

int AM::Decode(const Signal &in, Signal &out, AMOptions ops) {
    size_t size = in.size();
    if(out.size() < size) out.resize(in.size());

    for(int t = 0; t < size; t++)
        out[t] = (in[t] - sinf(ops.CarrierFreq * M_PI * 2 * t) / ops.CarrierAmp) / ops.MessageAmp;
    
    return size;
}
