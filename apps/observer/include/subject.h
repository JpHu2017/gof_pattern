#ifndef GOF_PATTERN_SUBJECT_H
#define GOF_PATTERN_SUBJECT_H
#include <memory>
#include "cz_def.h"
#include "observer.h"
namespace gof {
class CZ_EXPORTS Subject {
public:
    typedef std::shared_ptr<Subject> Ptr;
    Subject();
    virtual ~Subject();
    virtual void attach(const Observer::Ptr& observer_ptr) = 0;
    virtual void detach(const Observer::Ptr& observer_ptr) = 0;
    virtual void notify() = 0;
    virtual void setState(const int& state) = 0;
    virtual const int getState() const = 0;
private:
};
}
#endif //GOF_PATTERN_SUBJECT_H