#ifndef GOF_PATTERN_LAPTOP_H
#define GOF_PATTERN_LAPTOP_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Laptop {
public:
    typedef std::shared_ptr<Laptop> Ptr;
    Laptop();
    //use keyword 'virtual' to make that subclass of Computer could be destructed 
    virtual ~Laptop();
    virtual const std::string brand() const = 0; 
    virtual const std::string type() const = 0;
private:   
};
}
#endif //GOF_PATTERN_LAPTOP_H