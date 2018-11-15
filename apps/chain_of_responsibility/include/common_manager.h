#ifndef GOF_PATTERN_COMMON_MANAGER_H
#define GOF_PATTERN_COMMON_MANAGER_H
#include "manager.h"
namespace gof {
class CommonManager : public Manager {
public:
    typedef std::shared_ptr<CommonManager> Ptr;
    CommonManager(const std::string& manager_name, const Manager::Ptr& successor_ptr);
    virtual ~CommonManager();
    virtual void dealWithRequest(const std::string& staff_name, const double& increase_salary);
};
}
#endif 