#include "computer.h"
namespace gof {
	Computer::Computer(const Element::Ptr& cpu_ptr, const Element::Ptr& gpu_ptr, const Element::Ptr& mainboard_ptr) {
    _elem_ptr_vec.push_back(cpu_ptr);
    _elem_ptr_vec.push_back(gpu_ptr);
    _elem_ptr_vec.push_back(mainboard_ptr);
}
void Computer::accept(const Visitor::Ptr& visitor_ptr) {
    for(std::vector<Element::Ptr>::iterator iter=_elem_ptr_vec.begin(); iter!=_elem_ptr_vec.end(); ++iter) {
        (*iter)->accept(visitor_ptr);
    }
}
Computer::~Computer() {}
}