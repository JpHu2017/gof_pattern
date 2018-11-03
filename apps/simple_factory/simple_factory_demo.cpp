#include <glog/logging.h>
#include <iostream>
#include "computer.h"
#include "computer_factory.h"
int main(int argc, char* argv[]) {
    gof::ComputerFactory::Ptr factory_ptr;
    factory_ptr.reset(new gof::ComputerFactory());
    gof::Computer::Ptr computer_ptr = factory_ptr->creatComputer("acer");
	std::string x = computer_ptr->brand();
    LOG(INFO) << "It's " << computer_ptr->brand();
    return 0;
}