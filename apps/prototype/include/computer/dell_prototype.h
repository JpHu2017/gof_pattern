#ifndef GOF_PATTERN_DELL_PROTOTYPE_H
#define GOF_PATTERN_DELL_PROTOTYPE_H
#include <memory>
#include "../computer_prototype.h"
namespace gof {
class DellPrototype : public ComputerPrototype {
public:
    typedef std::shared_ptr<DellPrototype> Ptr;
    DellPrototype();
    virtual ~DellPrototype();
    virtual ComputerPrototype::Ptr clone();
    virtual void setComputerId(const int& id);
    virtual const std::string indetifyItself() const;
private:
    
};
}
#endif //GOF_PATTERN_DELL_PROTOTYPE_H