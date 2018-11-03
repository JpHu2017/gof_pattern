#ifndef GOF_PATTERN_DELL_FACTORY_H
#define GOF_PATTERN_DELL_FACTORY_H
#include <memory>
#include "computer_factory.h"
#include "desktop.h"
#include "laptop.h"

namespace gof {
class DellFactory : public ComputerFactory {
public:
    typedef std::shared_ptr<DellFactory> Ptr;
    DellFactory();
    virtual ~DellFactory();
    virtual Desktop::Ptr createDesktop();
    virtual Laptop::Ptr createLaptop();
private:

};
}
#endif //GOF_PATTERN_DELL_FACTORY_H