#include "pm.hh"

int PM::Encode(const Signal &in, Signal &out, PMOptions ops) {
    size_t size = in.size();
    if(out.size() < size) out.resize(in.size());

    for(int t = 0; t < size; t++)
        out[t] = M_PI_2f * sinf(ops.CarrierFreq * t + M_PI_2f * in[t]);

    return size;
}

int PM::Decode(const Signal &in, Signal &out, PMOptions ops) {
    size_t size = in.size();
    if(out.size() < size) out.resize(in.size());

    for(int t = 0; t < size; t++)
        out[t] = (sinhf(in[t] / M_PI_2f) - ops.CarrierFreq / t) / M_PI_2f;

    return size;
}
