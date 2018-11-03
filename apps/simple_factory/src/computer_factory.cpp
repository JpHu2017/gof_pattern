#include <glog/logging.h>
#include "computer.h"
#include "computer_factory.h"
#include "computer/acer.h"
#include "computer/dell.h"

namespace gof {
ComputerFactory::ComputerFactory() {}
ComputerFactory::~ComputerFactory(){}
Computer::Ptr ComputerFactory::creatComputer(const std::string& brand) {
    if(brand == "acer") {
        return Acer::Ptr(new Acer());
    } else if(brand == "dell") {
        return Dell::Ptr(new Dell());
    } else {
		LOG(FATAL) << "No this brand " << brand;
    }
}
}