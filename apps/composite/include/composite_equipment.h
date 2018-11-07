#ifndef GOF_PATTERN_COMPOSITE_EQUIPMENT_H
#define GOF_PATTERN_COMPOSITE_EQUIPMENT_H
#include <memory>
#include <vector>
#include "cz_def.h"
#include "equipment.h"
namespace gof {
class CompositeEquipment : public Equipment {
public:
    typedef std::shared_ptr<CompositeEquipment> Ptr;
    CompositeEquipment(const std::string& name);
    virtual ~CompositeEquipment();
    virtual double price();
    virtual void add(const Equipment::Ptr& equip_ptr);
    virtual void remove(const Equipment::Ptr& equip_ptr);
    virtual bool isComposite() const;
private:
    std::vector<Equipment::Ptr> _equip_ptr_vec;
};
}
#endif //GOF_PATTERN_COMPOSITE_EQUIPMENT_H