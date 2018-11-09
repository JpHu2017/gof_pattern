#ifndef GOF_PATTERN_GPU_SELLER_H
#define GOF_PATTERN_GPU_SELLER_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS GpuSeller{
public:
    typedef std::shared_ptr<GpuSeller> Ptr;
    GpuSeller();
    ~GpuSeller();
    void sellGpu();
private:        
};
}
#endif /GOF_PATTERN_GPU_SELLER_H