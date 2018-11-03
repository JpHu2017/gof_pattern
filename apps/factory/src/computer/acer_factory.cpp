#include "computer/acer.h"
#include "computer/acer_factory.h"
namespace gof {
AcerFactory::AcerFactory() {}
AcerFactory::~AcerFactory() {}
Computer::Ptr AcerFactory::creatComputer() {
    return Acer::Ptr(new Acer());
}
}