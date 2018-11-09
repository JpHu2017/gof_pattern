#include "integrator_facade.h"
namespace gof {
IntegratorFacade::IntegratorFacade() {
    _cpu_seller_ptr.reset(new CpuSeller());
    _gpu_seller_ptr.reset(new GpuSeller());
    _memory_seller_ptr.reset(new MemorySeller());
}
IntegratorFacade::~IntegratorFacade() {}
void IntegratorFacade::sellComputer() {
    _cpu_seller_ptr->sellCpu();
    _gpu_seller_ptr->sellGpu();
    _memory_seller_ptr->sellMemory();
}
}