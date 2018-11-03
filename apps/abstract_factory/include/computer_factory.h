#ifndef GOF_PATTERN_COMPUTER_FACTORY_H
#define GOF_PATTERN_COMPUTER_FACTORY_H
#include <memory>
#include "cz_def.h"
#include "desktop.h"
#include "laptop.h"
namespace gof {
class CZ_EXPORTS ComputerFactory {
public:
    typedef std::shared_ptr<ComputerFactory> Ptr;
    ComputerFactory();
    virtual ~ComputerFactory();
    virtual Desktop::Ptr createDesktop() = 0;
    virtual Laptop::Ptr createLaptop() = 0;
private:
};
}
#endif //GOF_PATTERN_COMPUTER_FACTORY_H