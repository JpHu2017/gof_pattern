#include <glog/logging.h>
#include "general_manager.h"
namespace gof {
GeneralManager::GeneralManager(const std::string& manager_name, const Manager::Ptr& successor_ptr) 
    : Manager(manager_name, successor_ptr) {}
GeneralManager::~GeneralManager() {}
void GeneralManager::dealWithRequest(const std::string& staff_name, const double& increase_salary) {
    LOG(INFO) << "General manager " << _manager_name << " approves that " << staff_name 
                  << "'s salary increases " << increase_salary << " RMB";
}
}