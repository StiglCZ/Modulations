#include "fm.hh"
#include <cmath>

int FM::Encode(const Signal &in, Signal &out, FMOptions opt) {
    size_t size = in.size();
    if(out.size() < size) out.resize(in.size());
    if(opt.Sensitivity > opt.CarrierFreq) return -1;
    
    for(int t =0; t < size; t++)
        out[t] = opt.Amp * sinf(2 * M_PI * t * (opt.CarrierFreq + opt.Sensitivity * in[t]));
    
    return size;
}

int FM::Decode(const Signal &in, Signal &out, FMOptions opt) {
    if(out.size() < in.size()) out.resize(in.size());
    
    
    return 0;
}
