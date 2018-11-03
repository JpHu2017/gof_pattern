#include "laptop/dell_laptop.h"
namespace gof {
DellLaptop::DellLaptop() {}
DellLaptop::~DellLaptop() {}
const std::string DellLaptop::brand() const {
    return "Dell";
}
const std::string DellLaptop::type() const {
    return "Laptop";
}
}