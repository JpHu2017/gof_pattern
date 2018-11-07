#ifndef GOF_PATTERN_EQUIPMENT_H
#define GOF_PATTERN_EQUIPMENT_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Equipment {
public:
    typedef std::shared_ptr<Equipment> Ptr;
    Equipment(const std::string& name);
    virtual ~Equipment();
    virtual void setPrice(const double& price);
    virtual double price() = 0;
    virtual void add(const Equipment::Ptr& equip_ptr);
    virtual void remove(const Equipment::Ptr& equip_ptr);
    virtual bool isComposite() const;
private:
    std::string _name;
};
}
#endif 