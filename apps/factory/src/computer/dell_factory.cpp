#include "computer/dell.h"
#include "computer/dell_factory.h"
namespace gof {
DellFactory::DellFactory() {}
DellFactory::~DellFactory() {}
Computer::Ptr DellFactory::creatComputer() {
    return Dell::Ptr(new Dell());
}
}