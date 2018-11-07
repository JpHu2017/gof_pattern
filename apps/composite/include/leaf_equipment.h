#ifndef GOF_PATTERN_LEAF_EQUIPMENT_H
#define GOF_PATTERN_LEAF_EQUIPMENT_H
#include <memory>
#include <string>
#include "cz_def.h"
#include "equipment.h"
namespace gof {
class CZ_EXPORTS LeafEquipment : public Equipment {
public:
    typedef std::shared_ptr<LeafEquipment> Ptr;
    LeafEquipment(const std::string& name);
    virtual ~LeafEquipment();
    virtual void setPrice(const double& price);
    virtual double price();
private:
    double _price;
};
}
#endif //GOF_PATTERN_LEAF_EQUIPMENT_H