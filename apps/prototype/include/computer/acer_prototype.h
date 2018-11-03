#ifndef GOF_PATTERN_ACER_PROTOTYPE_H
#define GOF_PATTERN_ACER_PROTOTYPE_H
#include <memory>
#include <string>
#include "../computer_prototype.h"
namespace gof {
class AcerPrototype : public ComputerPrototype {
public:
    typedef std::shared_ptr<AcerPrototype> Ptr;
    AcerPrototype();
    virtual ~AcerPrototype();
    virtual ComputerPrototype::Ptr clone();
    virtual void setComputerId(const int& id);
    virtual const std::string indetifyItself() const;
private:
};
}
#endif //GOF_PATTERN_ACER_PROTOTYPE_H