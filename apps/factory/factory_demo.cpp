#include <glog/logging.h>
#include <iostream>
#include "computer.h"
#include "computer_factory.h"
// #include "computer/acer_factory.h"
#include "computer/dell_factory.h"
int main(int argc, char* argv[]) {
    gof::ComputerFactory::Ptr factory_ptr;
    // factory_ptr.reset(new gof::AcerFactory());
    factory_ptr.reset(new gof::DellFactory());
    gof::Computer::Ptr comptuer_ptr = factory_ptr->creatComputer();
    LOG(INFO) << "It's " << comptuer_ptr->brand();
    return 0;
}