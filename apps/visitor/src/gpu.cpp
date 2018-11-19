#include "gpu.h"
namespace gof {
Gpu::Gpu(const std::string& name) : Element(name) {
    _this_ptr.reset(this);
}
Gpu::~Gpu() {}
void Gpu::accept(const Visitor::Ptr& visitor_ptr) {
    visitor_ptr->visitGpu(_this_ptr);
}
}