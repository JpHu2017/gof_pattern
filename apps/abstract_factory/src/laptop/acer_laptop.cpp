#include "laptop/acer_laptop.h"
namespace gof {
AcerLaptop::AcerLaptop() {}
AcerLaptop::~AcerLaptop() {}
const std::string AcerLaptop::brand() const {
    return "Acer";
}
const std::string AcerLaptop::type() const {
    return "Laptop";
}
}