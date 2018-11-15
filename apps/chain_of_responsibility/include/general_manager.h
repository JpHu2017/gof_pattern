#ifndef GOF_PATTERN_GENERAL_MANAGER_H
#define GOF_PATTERN_GENERAL_MANAGER_H
#include "manager.h"
namespace gof {
class GeneralManager : public Manager {
public:
    typedef std::shared_ptr<GeneralManager> Ptr;
    GeneralManager(const std::string& manager_name, const Manager::Ptr& successor_ptr);
    virtual ~GeneralManager();
    virtual void dealWithRequest(const std::string& staff_name, const double& increase_salary);
};
}
#endif //GOF_PATTERN_GENERAL_MANAGER_H