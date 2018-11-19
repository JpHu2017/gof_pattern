#include "element.h"
namespace gof {
Element::Element(const std::string& name) : _elem_name(name) {}
Element::~Element() {}
const std::string Element::getName() const {
    return _elem_name;
}
}