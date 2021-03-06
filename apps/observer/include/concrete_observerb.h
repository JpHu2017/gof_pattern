#ifndef GOF_PATTERN_CONCRETE_OBSERVER2_H
#define GOF_PATTERN_CONCRETE_OBSERVER2_H
#include <memory>
#include "observer.h"
#include "subject.h"
namespace gof {
class ConcreteObserverB : public Observer {
public:
    typedef std::shared_ptr<ConcreteObserverB> Ptr;
    ConcreteObserverB(const Subject::Ptr& subject_ptr);
    virtual ~ConcreteObserverB();
    virtual void update();
private:
    Subject::Ptr _subject_ptr;
};
}
#endif //GOF_PATTERN_CONCRETE_OBSERVER_H