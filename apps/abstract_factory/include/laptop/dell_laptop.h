#ifndef GOF_PATTERN_DELL_H
#define GOF_PATTERN_DELL_H
#include <memory>
#include "../laptop.h"
namespace gof {
class DellLaptop : public Laptop {
public:
    typedef std::shared_ptr<DellLaptop> Ptr;
    DellLaptop();
    virtual ~DellLaptop();
    virtual const std::string brand() const;
    virtual const std::string type() const;
private:
};
}

#endif //GOF_PATTERN_DELL_H