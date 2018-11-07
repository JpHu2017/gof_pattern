#include "equipment.h"
namespace gof {
Equipment::Equipment(const std::string& name) 
    :_name(name){}
Equipment::~Equipment() {}
void Equipment::setPrice(const double& price) {
    //
}
void Equipment::add(const Equipment::Ptr& equip_ptr) {
    //
}
void Equipment::remove(const Equipment::Ptr& equip_ptr) {
    //
}
bool Equipment::isComposite() const {
    return false;
}
}
