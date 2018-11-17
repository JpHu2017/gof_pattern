#ifndef GOF_PATTERN_CONCRETE_SUBJECT_H
#define GOF_PATTERN_CONCRETE_SUBJECT_H
#include <memory>
#include <list>
#include "cz_def.h"
#include "observer.h"
#include "subject.h"
namespace gof {
class ConcreteSubject : public Subject {
public:
    typedef std::shared_ptr<ConcreteSubject> Ptr;
    ConcreteSubject();
    virtual ~ConcreteSubject();
    virtual void attach(const Observer::Ptr& observer_ptr);
    virtual void detach(const Observer::Ptr& observer_ptr);
    virtual void notify();
    virtual void setState(const int& state);
    virtual const int getState() const;
private:
    std::list<Observer::Ptr> _observer_ptr_list;
    int _state;
};
}
#endif //GOF_PATTERN_CONCRETE_SUBJECT_H