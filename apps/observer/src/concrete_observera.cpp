#include <glog/logging.h>
#include "concrete_observera.h"
namespace gof {
ConcreteObserverA::ConcreteObserverA(const Subject::Ptr& subject_ptr) 
    : _subject_ptr(subject_ptr) {}
ConcreteObserverA::~ConcreteObserverA() {}
void ConcreteObserverA::update() {
    LOG(INFO) << "ConcreteObserverA object get the update. New state: " << _subject_ptr->getState();
}
}