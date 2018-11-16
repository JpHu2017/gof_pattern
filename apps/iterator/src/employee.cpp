#include <glog/logging.h>
#include "employee.h"
namespace gof {
Employee::Employee(){}
Employee::Employee(const std::string name) : _name(name) {}
Employee::~Employee() {}
void Employee::print() {
    LOG(INFO) << _name;
}
}