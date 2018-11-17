#include <glog/logging.h>
#include "concrete_observerb.h"
namespace gof {
ConcreteObserverB::ConcreteObserverB(const Subject::Ptr& subject_ptr) 
    : _subject_ptr(subject_ptr) {}
ConcreteObserverB::~ConcreteObserverB() {}
void ConcreteObserverB::update() {
    LOG(INFO) << "ConcreteObserverB object get the update. New state: " << _subject_ptr->getState();
}
}