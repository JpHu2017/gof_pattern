#include "cpu.h"
namespace gof {
Cpu::Cpu(const std::string& name) : Element(name) {
    _this_ptr.reset(this);
}
Cpu::~Cpu() {}
void Cpu::accept(const Visitor::Ptr& visitor_ptr) {
    visitor_ptr->visitCpu(_this_ptr);
}
}