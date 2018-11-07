#include "leaf_equipment.h"
namespace gof {
LeafEquipment::LeafEquipment(const std::string& name) 
    : Equipment(name) {

}
LeafEquipment::~LeafEquipment() {}
void LeafEquipment::setPrice(const double& price) {
    _price = price;
}
double LeafEquipment::price() {
    return _price;
}
}