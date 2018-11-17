#ifndef GOF_PATTERN_CONCRETE_OBSERVER_H
#define GOF_PATTERN_CONCRETE_OBSERVER_H
#include <memory>
#include "observer.h"
#include "subject.h"
namespace gof {
class ConcreteObserverA : public Observer {
public:
    typedef std::shared_ptr<ConcreteObserverA> Ptr;
    ConcreteObserverA(const Subject::Ptr& subject_ptr);
    virtual ~ConcreteObserverA();
    virtual void update();
private:
    Subject::Ptr _subject_ptr;
};
}
#endif //GOF_PATTERN_CONCRETE_OBSERVER_H