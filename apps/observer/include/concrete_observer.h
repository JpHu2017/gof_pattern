#ifndef GOF_PATTERN_CONCRETE_OBSERVER_H
#define GOF_PATTERN_CONCRETE_OBSERVER_H
#include <memory>
#include "observer.h"
#include "subject.h"
namespace gof {
class ConcreteObserver : public Observer {
public:
    typedef std::shared_ptr<ConcreteObserver> Ptr;
    ConcreteObserver(const Subject::Ptr& subject_ptr);
    virtual ~ConcreteObserver();
    virtual void update();
private:
    Subject::Ptr _subject_ptr;
};
}
#endif //GOF_PATTERN_CONCRETE_OBSERVER_H