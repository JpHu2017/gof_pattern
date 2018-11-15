#ifndef GOF_PATTERN_MANAGER_H
#define GOF_PATTERN_MANAGER_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Manager {
public:
    typedef std::shared_ptr<Manager> Ptr;
    Manager(const std::string& manager_name, const Manager::Ptr& successor_ptr);
    virtual ~Manager();
    virtual void dealWithRequest(const std::string& staff_name, const double& increase_salary) = 0;
protected:
    Manager::Ptr _successor_ptr;
    std::string _manager_name;
};
}
#endif