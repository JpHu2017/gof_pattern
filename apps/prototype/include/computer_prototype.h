#ifndef GOF_PATTERN_COMPUTER_PROTOTYPE_H
#define GOF_PATTERN_COMPUTER_PROTOTYPE_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class ComputerPrototype {
public:
    typedef std::shared_ptr<ComputerPrototype> Ptr;
    ComputerPrototype();
    virtual ~ComputerPrototype();
    virtual ComputerPrototype::Ptr clone() = 0;
    virtual void setComputerId(const int& id) = 0;
    virtual const std::string indetifyItself() const = 0;
protected:
    int _id;
};
}
#endif //GOF_PATTERN_COMPUTER_PROTOTYPE_H