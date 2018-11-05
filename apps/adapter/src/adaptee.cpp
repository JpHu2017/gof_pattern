#include "glog/logging.h"
#include "adaptee.h"
namespace gof {
Adaptee::Adaptee() {}
Adaptee::~Adaptee() {}
void Adaptee::specialRequest() {
    LOG(INFO) << "Special request in adaptee.";
}
}