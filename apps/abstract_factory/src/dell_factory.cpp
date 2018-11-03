#include "dell_factory.h"
#include "desktop/dell_desktop.h"
#include "laptop/dell_laptop.h"
namespace gof {
DellFactory::DellFactory() {}
DellFactory::~DellFactory() {}
Desktop::Ptr DellFactory::createDesktop() {
    return DellDesktop::Ptr(new DellDesktop());
}
Laptop::Ptr DellFactory::createLaptop() {
    return DellLaptop::Ptr(new DellLaptop());
}
}