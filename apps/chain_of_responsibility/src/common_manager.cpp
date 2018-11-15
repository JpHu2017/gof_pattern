#include <glog/logging.h>
#include "common_manager.h"
namespace gof {
CommonManager::CommonManager(const std::string& manager_name, const Manager::Ptr& successor_ptr) 
    : Manager(manager_name, successor_ptr){}
CommonManager::~CommonManager() {}
void CommonManager::dealWithRequest(const std::string& staff_name, const double& increase_salary) {
    if(increase_salary < 500) {
        LOG(INFO) << "Manager " << _manager_name << " approves that " << staff_name 
                  << "'s salary increases " << increase_salary << " RMB";
    } else {
        LOG(INFO) << "Manager " << _manager_name << " can't process, up to major domo.";
        _successor_ptr->dealWithRequest(staff_name, increase_salary);
    }
}
}