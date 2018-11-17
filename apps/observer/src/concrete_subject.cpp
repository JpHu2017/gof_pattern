#include "concrete_subject.h"
namespace gof {
ConcreteSubject::ConcreteSubject() {}
ConcreteSubject::~ConcreteSubject() {}
void ConcreteSubject::attach(const Observer::Ptr& observer_ptr) {
    _observer_ptr_list.push_back(observer_ptr);
}
void ConcreteSubject::detach(const Observer::Ptr& observer_ptr) {
    _observer_ptr_list.remove(observer_ptr);
}
void ConcreteSubject::notify() {
    for(std::list<Observer::Ptr>::iterator iter=_observer_ptr_list.begin(); 
        iter!=_observer_ptr_list.end(); ++iter) {
        (*iter)->update();
    }
}
void ConcreteSubject::setState(const int& state) {
    _state = state;
}
const int ConcreteSubject::getState() const {
    return _state;
}
}