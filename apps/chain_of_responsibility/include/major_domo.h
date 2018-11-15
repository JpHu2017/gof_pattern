#ifndef GOF_PATTERN_MAJOR_DOMO_H
#define GOF_PATTERN_MAJOR_DOMO_H
#include <memory>
#include "manager.h"
namespace gof {
class MajorDomo : public Manager {
public:
    typedef std::shared_ptr<MajorDomo> Ptr;
    MajorDomo(const std::string& manager_name, const Manager::Ptr& successor_ptr);
    virtual ~MajorDomo();
    virtual void dealWithRequest(const std::string& staff_name, const double& increase_salary);
};
}
#endif //GOF_PATTERN_MAJOR_DOMO_H