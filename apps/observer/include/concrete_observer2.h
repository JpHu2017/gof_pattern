#ifndef GOF_PATTERN_CONCRETE_OBSERVER2_H
#define GOF_PATTERN_CONCRETE_OBSERVER2_H
#include <memory>
#include "observer.h"
#include "subject.h"
namespace gof {
class ConcreteObserver2 : public Observer {
public:
    typedef std::shared_ptr<ConcreteObserver2> Ptr;
    ConcreteObserver2(const Subject::Ptr& subject_ptr);
    virtual ~ConcreteObserver2();
    virtual void update();
private:
    Subject::Ptr _subject_ptr;
};
}
#endif //GOF_PATTERN_CONCRETE_OBSERVER_H