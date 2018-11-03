#include "acer_factory.h"
#include "desktop/acer_desktop.h"
#include "laptop/acer_laptop.h"
namespace gof {
AcerFactory::AcerFactory() {}
AcerFactory::~AcerFactory() {}
Desktop::Ptr AcerFactory::createDesktop() {
    return AcerDesktop::Ptr(new AcerDesktop());
}
Laptop::Ptr AcerFactory::createLaptop() {
    return AcerLaptop::Ptr(new AcerLaptop());
}
}