#ifndef GOF_PATTERN_ACER_FACTORY_H
#define GOF_PATTERN_ACER_FACTORY_H
#include <memory>
#include "computer_factory.h"
#include "desktop.h"
#include "laptop.h"
namespace gof {
class AcerFactory : public ComputerFactory {
public:
    typedef std::shared_ptr<AcerFactory> Ptr;
    AcerFactory();
    virtual ~AcerFactory();
    virtual Desktop::Ptr createDesktop();
    virtual Laptop::Ptr createLaptop();
private:

};
}
#endif //GOF_PATTERN_ACER_FACTORY_H