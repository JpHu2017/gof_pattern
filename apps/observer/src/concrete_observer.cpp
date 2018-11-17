#include <glog/logging.h>
#include "concrete_observer.h"
namespace gof {
ConcreteObserver::ConcreteObserver(const Subject::Ptr& subject_ptr) 
    : _subject_ptr(subject_ptr) {}
ConcreteObserver::~ConcreteObserver() {}
void ConcreteObserver::update() {
    LOG(INFO) << "ConcreteObserver object get the update. New state: " << _subject_ptr->getState();
}
}