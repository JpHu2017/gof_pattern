#include <glog/logging.h>
#include <iostream>
#include "computer_factory.h"
#include "acer_factory.h"
//#include "dell_factory.h"
#include "desktop.h"
#include "laptop.h"
int main(int argc, char* argv[]) {
    gof::ComputerFactory::Ptr factory_ptr;
    factory_ptr.reset(new gof::AcerFactory());
    //factory_ptr.reset(new gof::DellFactory());
    gof::Desktop::Ptr desktop_ptr = factory_ptr->createDesktop();
	gof::Laptop::Ptr laptop_ptr = factory_ptr->createLaptop();
    LOG(INFO) << "It's " << desktop_ptr->brand() << " " << desktop_ptr->type();
    LOG(INFO) << "It's " << laptop_ptr->brand() << " " << laptop_ptr->type();
    return 0;
}