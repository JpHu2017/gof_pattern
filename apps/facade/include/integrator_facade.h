#ifndef GOF_PATTERN_INTEGRATOR_FACADE_H
#define GOF_PATTERN_INTEGRATOR_FACADE_H
#include <memory>
#include "cpu_seller.h"
#include "gpu_seller.h"
#include "memory_seller.h"
namespace gof {
class IntegratorFacade {
public:
    typedef std::shared_ptr<IntegratorFacade> Ptr;
    IntegratorFacade();
    ~IntegratorFacade();
    void sellComputer();
private:
    CpuSeller::Ptr _cpu_seller_ptr;
    GpuSeller::Ptr _gpu_seller_ptr;
    MemorySeller::Ptr _memory_seller_ptr;
};
}
#endif //GOF_PATTERN_INTEGRATOR_FACADE_H