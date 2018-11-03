#ifndef GOF_PATTERN_ACER_LAPTOP_H
#define GOF_PATTERN_ACER_LAPTOP_H
#include <memory>
#include "../laptop.h"
namespace gof {
class AcerLaptop : public Laptop {
public:
    typedef std::shared_ptr<AcerLaptop> Ptr;
    AcerLaptop();
    virtual ~AcerLaptop();
    virtual const std::string brand() const;
    virtual const std::string type() const;
private:
};
}

#endif //GOF_PATTERN_ACER_LAPTOP_H