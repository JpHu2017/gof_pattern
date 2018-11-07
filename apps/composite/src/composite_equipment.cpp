#include "composite_equipment.h"
namespace gof {
CompositeEquipment::CompositeEquipment(const std::string& name)
    : Equipment(name) {}
CompositeEquipment::~CompositeEquipment() {}
double CompositeEquipment::price() {
    double total = 0;
    for(int i=0; i<_equip_ptr_vec.size(); ++i) {
        total += _equip_ptr_vec.at(i)->price();
    }
    return total;
}
void CompositeEquipment::add(const Equipment::Ptr& equip_ptr) {
    _equip_ptr_vec.emplace_back(equip_ptr);
}
void CompositeEquipment::remove(const Equipment::Ptr& equip_ptr) {
    for(int i=0; i<_equip_ptr_vec.size(); ) {
        if(_equip_ptr_vec.at(i) == equip_ptr) {
            _equip_ptr_vec.erase(_equip_ptr_vec.begin()+i);
        } else {
            ++i;
        }
    }
}
bool CompositeEquipment::isComposite() const {
    return true;
}
}