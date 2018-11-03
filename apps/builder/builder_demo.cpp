#include <glog/logging.h>
#include <iostream>
#include "desktop.h"
#include "desktop_builder.h"
// #include "acer_desktop_builder.h"
#include "dell_desktop_builder.h"
#include "director.h"
int main(int argc, char* argv[]) {
    gof::DesktopBuilder::Ptr builder_ptr;
    builder_ptr.reset(new gof::DellDesktopBuilder());
    gof::Director::Ptr director_ptr(new gof::Director(builder_ptr));
    gof::Desktop::Ptr desktop_ptr = director_ptr->createDesktop();
    LOG(INFO) << desktop_ptr->identifyItself();
    return 0;
}