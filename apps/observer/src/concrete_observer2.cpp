#include <glog/logging.h>
#include "concrete_observer2.h"
namespace gof {
ConcreteObserver2::ConcreteObserver2(const Subject::Ptr& subject_ptr) 
    : _subject_ptr(subject_ptr) {}
ConcreteObserver2::~ConcreteObserver2() {}
void ConcreteObserver2::update() {
    LOG(INFO) << "ConcreteObserver2 object get the update. New state: " << _subject_ptr->getState();
}
}