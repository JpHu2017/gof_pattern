#include "computer/dell_prototype.h"
namespace gof {
    DellPrototype::~DellPrototype() {}
    ComputerPrototype::Ptr DellPrototype::clone() {
        return DellPrototype::Ptr(new DellPrototype());
    }
    DellPrototype::DellPrototype(){}
    void DellPrototype::setComputerId(const int& id) {
        _id = id;
    }
    const std::string DellPrototype::indetifyItself() const {
        return "Dell Computer " + std::to_string(_id);
    }
}