#include "computer/acer_prototype.h"
namespace gof {
    AcerPrototype::~AcerPrototype() {}
    ComputerPrototype::Ptr AcerPrototype::clone() {
        return AcerPrototype::Ptr(new AcerPrototype());
    }
    AcerPrototype::AcerPrototype(){}
    void AcerPrototype::setComputerId(const int& id) {
        _id = id;
    }
    const std::string AcerPrototype::indetifyItself() const {
        return "Acer Computer " + std::to_string(_id);
    }
}