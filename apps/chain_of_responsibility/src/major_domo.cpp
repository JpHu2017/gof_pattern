#include <glog/logging.h>
#include "major_domo.h"
namespace gof {
MajorDomo::MajorDomo(const std::string& manager_name, const Manager::Ptr& successor_ptr) 
    : Manager(manager_name, successor_ptr) {}
MajorDomo::~MajorDomo() {}
void MajorDomo::dealWithRequest(const std::string& staff_name, const double& increase_salary) {
    if(increase_salary < 5000) {
        LOG(INFO) << "Major domo " << _manager_name << " approves that " << staff_name 
                  << "'s salary increases " << increase_salary << " RMB";
    } else {
        LOG(INFO) << "Major domo " << _manager_name << " can't process, up to general manager.";
        _successor_ptr->dealWithRequest(staff_name, increase_salary);
    }
}
}